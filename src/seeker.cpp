#pragma once

#include "bn_music.h"

#include "seeker.h"
#include "scene.h"
#include "interface.h"
#include "slash.h"
#include "dpm.h"
#include "boolean_storage.h"

        Seeker::Seeker(Scene *s) : Entity(current, warpX, warpY, s) {

            interface = new Interface();
            bs = new BooleanStorage();

            scene = s;

            dpm = new DPM(this);
            dpm->LoadData();

            speed = 1.5f;

            limitN = 0;
            limitW = 8;
            limitS = 33;
            limitE = 8;

            bs->iglesiaO = false;

            projection->set_z_order(0);
        }

        void Seeker::Update() {
            if (interface->intermission) {
                if (bn::keypad::a_pressed()) interface->EndTransmission();
            } else {
                if (!interface->dialoguing) {
                    if (safeTimer < safeTimerMax) safeTimer++;
                    if (state != ITEM_BOOTS && state != KO) {
                        if (state != HIT) {
                            // Down remains pressed (crouch)
                            if (bn::keypad::down_pressed()) Crouch(true);
                            if (bn::keypad::down_released()) Crouch(false);

                            // Jump when pressing B
                            if (bn::keypad::b_pressed()) Jump();

                            // Attack when pressing A
                            if (bn::keypad::a_pressed()) Attack();

                            // Left remains pressed (move left)
                            if (bn::keypad::left_held()) Move(false);
                            // Right remains pressed (move right)
                            else if (bn::keypad::right_held()) Move(true);
                            // Neither is pressed (stop)
                            else Stop();

                            // Use item when pressing L/R
                            if (bn::keypad::l_pressed()) UseItem(false);
                            if (bn::keypad::r_pressed()) UseItem(true);
                        }

                        // Mid-air specifications
                        if (!grounded) {
                            // SLIDE mode: keep pushing against a wall
                            if (hook && state != HIT && ((wBlocked && bn::keypad::left_held()) || (eBlocked && bn::keypad::right_held()))) {
                                // Set SLIDE animation
                                if (state == FALL) focused = false;
                                SetState(SLIDE);
                                // Set constant falling speed
                                velY = maxVelY/4;
                            // FALL mode: free fall
                            } else {
                                // Set FALL animation
                                if (state == SLIDE) focused = false;
                                SetState(FALL);
                                // Apply gravity
                                if (velY < maxVelY) velY += gravity;
                            }
                        } else if (attacking) Stop(); // Stop movement when attacking on ground

                        // Land when needed
                        if (state != HIT && state != KO && landing) {
                            if (!attacking) {
                                focused = false;
                                landing = false;
                                SetState(LAND);
                            }
                        }
                        
                    } else if (state == ITEM_BOOTS) {
                        // Jump when pressing B
                        if (bn::keypad::b_pressed()) {
                            focused = false;
                            usingItem = false;
                            Jump();
                        }
                        else {
                            if (!wBlocked && !eBlocked) {
                                if (!projection->horizontal_flip()) velX = speed*2;
                                else velX = -speed*2;
                            } else velX = 0;
                            velY = 0;
                        }
                    }

                    // Automatically recharge MP
                    if (mp < mpMax) ChangeMP(mpMax/500);

                    // End
                    UpdatePos();
                    if (dropTimer == dropTimerMax) CheckColTile();
                    else dropTimer++;

                    // Prevent horizontal outbounds
                    if (GetPos(true) < limitW) UpdatePos(posX+1.6f,posY);
                    else if (GetPos(true) > scene->tilemap->dimensions().width()-limitE) UpdatePos(posX-1.6f,posY);

                }
                UpdateState();
            }
        }

        /*  Increases the player's horizontal velocity
        *   r = right (as opposed to left)
        */
        void Seeker::Move(bool r) {
            if (!attacking && !usingItem) {
                if (!crouched) SetState(MOVE);
                else SetState(CROUCH_MOVE);

                if (r) {
                    projection->set_horizontal_flip(false);
                    if (!eBlocked) {
                        if (!crouched) velX = speed;
                        else velX = crouchSpeed;
                    }
                } else {
                    projection->set_horizontal_flip(true);
                    if (!wBlocked) {
                        if (!crouched) velX = -speed;
                        else velX = -crouchSpeed;
                    }
                }
            }
        }

        /*  Increases the player's horizontal velocity, but backwards. Happens upon being HIT.
        */
        void Seeker::Flinch(bool d) {
            Crouch(false);

            focused = false;
            ResetActions();
            if (!d) {
                SetState(HIT);
                bn::sound_items::hurt.play();
                if (overgrounded) overgrounded = false;
                if (grounded) velY = jumpSpeed/2;

                if (projection->horizontal_flip()) velX = speed;
                else velX = -speed;
            } else {
                overgrounded = false;
                if (bn::music::playing_item()) bn::music::stop();
                SetState(KO);
                bn::sound_items::death.play();
                velX = 0;
                velY = 0;
            }

        }

        /*  Nullifies the player's horizontal velocity
        */
        void Seeker::Stop() {
            if (!crouched) SetState(IDLE);
            else SetState(CROUCH_IDLE);
            velX = 0;
        }

        /*  Gives the player a positive vertical impulse
        */
        void Seeker::Jump() {
            if (grounded && !attacking && !usingItem) {
                if (bn::keypad::down_held() && onPlatform) {
                    dropTimer = 0;
                    grounded = false;
                    overgrounded = false;
                } else {
                    SetState(JUMP);
                    velY = jumpSpeed;
                }
            }
        }

        /*  Determines if the player is crouched
        */
        void Seeker::Crouch(bool c) {
            if (grounded && !attacking && !usingItem) {
                if (!crouched && c) SetState(CROUCH_INTRO);
                else if (crouched && !c) SetState(CROUCH_OUTRO);

                if (c) {
                    crouched = true;
                    limitN = -15;
                }
            }
            if (!c) {
                crouched = false;
                limitN = 0;
            }
        }

        /*  Launches a sword attack
        */
        void Seeker::Attack() {
            if (!usingItem && state != SLIDE) {
                if (bn::keypad::up_held() && !attacking) {
                    attacking = true;
                    focused = false;
                    SetState(ATTACK_H_I);
                } else if (grounded) {
                    if (!crouched) {
                        if (state != ATTACK_O && state != ATTACK_1_I && state != ATTACK_2_I) {
                            if (attacking) combo++;
                            if (combo <= 2) attacking = true;
                            switch (combo) {
                                case 0:
                                    focused = false;
                                    SetState(ATTACK_1_I);
                                    break;
                                case 1:
                                    focused = false;
                                    SetState(ATTACK_2_I);
                                    break;
                                case 2:
                                    focused = false;
                                    SetState(ATTACK_3_I);
                                    break;
                            }
                        }
                    } else if (!attacking) {
                        attacking = true;
                        focused = false;
                        SetState(ATTACK_C_I);
                    }
                } else if (!attacking) {
                    attacking = true;
                    focused = false;
                    SetState(ATTACK_A_I);
                }
            }
        }

        void Seeker::CastSlash() {
            switch(state) {
                case ATTACK_1_O:
                    if (!projection->horizontal_flip()) scene->AddCast(new Slash(GetPos(true).integer()+16, GetPos(false).integer(), 0, 16, 32, 16, scene, this));
                    else scene->AddCast(new Slash(GetPos(true).integer()-16, GetPos(false).integer(), 0, 16, 24, 16, scene, this));
                    break;
                case ATTACK_2_O:
                    if (!projection->horizontal_flip()) scene->AddCast(new Slash(GetPos(true).integer()+16, GetPos(false).integer(), 0, 16, 32, 16, scene, this));
                    else scene->AddCast(new Slash(GetPos(true).integer()-16, GetPos(false).integer(), 0, 16, 24, 16, scene, this));
                    break;
                case ATTACK_3_O:
                    if (!projection->horizontal_flip()) scene->AddCast(new Slash(GetPos(true).integer()+18, GetPos(false).integer(), -4, 16, 12, 16, scene, this));
                    else scene->AddCast(new Slash(GetPos(true).integer()-18, GetPos(false).integer(), -4, 16, 12, 16, scene, this));
                    break;
                case ATTACK_A_O:
                    if (!projection->horizontal_flip()) scene->AddCast(new Slash(GetPos(true).integer()+16, GetPos(false).integer(), 0, 16, 24, 16, scene, this));
                    else scene->AddCast(new Slash(GetPos(true).integer()-16, GetPos(false).integer(), 0, 16, 24, 16, scene, this));
                    break;
                case ATTACK_H_O:
                    scene->AddCast(new Slash(GetPos(true).integer(), GetPos(false).integer()-10, 8, 2, 8, 2, scene, this));
                    break;
                case ATTACK_C_O:
                    if (!projection->horizontal_flip()) scene->AddCast(new Slash(GetPos(true).integer()+16, GetPos(false).integer(), -16, 16, 32, 16, scene, this));
                    else scene->AddCast(new Slash(GetPos(true).integer()-16, GetPos(false).integer(), -16, 16, 32, 16, scene, this));
                    break;
            }
        }

        /*  Uses one of the selected items (L/R)
        */
        void Seeker::UseItem(bool r) {
            if (!attacking && !usingItem) {
                // Define selected slot
                ItemSlot slot;
                if (!r) slot = slotL;
                else slot = slotR;
                // Prevent from using an empty slot
                if (slot != NONE) {
                    // Define behaviour according to item
                    switch (slot) {
                        case BOOTS:
                            if (mp >= 1) {
                                ChangeMP(-1);
                                usingItem = true;
                                focused = false;
                                SetState(ITEM_BOOTS);
                            }
                            break;
                        case SHIELD:
                            if (grounded) {
                                usingItem = true;
                                Stop();
                                focused = false;
                                SetState(ITEM_SHIELD);
                            }
                            break;
                    }
                }
            }
        }

        /*  Modifies the player's coin
        */
        void Seeker::ChangeCoin(int value) {
            if (coin + value > 0 && coin + value <= 9999) coin += value;
            else coin = 0;
            UpdateStats();
        }

        /*  Modifies the player's HP
        */
        void Seeker::ChangeHP(int value) {
            if (state == HIT || state == KO) {

            } else {
                if (value < 0) {
                    if (state == ITEM_SHIELD) return;
                    else {
                        focused = false;
                        attacking = false;
                        if (hp + value <= 0) Flinch(true);
                        else Flinch(false);
                    }
                }

                if (hp + value > 0) {
                    if (hp + value > hpMax) hp = hpMax;
                    else hp += value;
                } else hp = 0;
            }
            UpdateStats();
        }

        /*  Modifies the player's MP
        */
        void Seeker::ChangeMP(float value) {
            if (mp + value > 0) {
                if (mp + value > mpMax) mp = mpMax;
                else mp += value;
            } else mp = 0;
            if ((int)mp%1 == 0) UpdateStats();
        }

        int Seeker::GetHP() {
            return hp;
        }

        void Seeker::UpdateState() {
            if (action2) {
                if (!action2->done()) action2->update();
                else {
                    focused = false;

                    if (state == HIT) safeTimer = 0;

                    if (state == ATTACK_1_I) SetState(ATTACK_1_O);
                    else if (state == ATTACK_2_I) SetState(ATTACK_2_O);
                    else if (state == ATTACK_3_I) SetState(ATTACK_3_O);
                    else if (state == ATTACK_A_I) SetState(ATTACK_A_O);
                    else if (state == ATTACK_H_I) SetState(ATTACK_H_O);
                    else SetState(IDLE);
                }
            } else if (action3) {
                if (!action3->done()) action3->update();
                else {
                    focused = false;

                    if (state == ITEM_SHIELD) usingItem = false;
                    if (state == ATTACK_O) {
                        attacking = false;
                        combo = 0;
                    } else if (attacking && !grounded) attacking = false;

                    if (state == ATTACK_C_I) SetState(ATTACK_C_O);
                    else if (state != ATTACK_O && attacking && grounded) SetState(ATTACK_O);
                    else SetState(IDLE);
                }
            } else if (action4) {
                if (!action4->done()) action4->update();
                else {
                    focused = false;
                    if (attacking) attacking = false;
                    SetState(IDLE);
                }
            } else if (action5) {
                if (!action5->done()) action5->update();
                else {
                    if (attacking) attacking = false;
                    focused = false;
                    SetState(IDLE);
                }
            } else if (action6) {
                if (!action6->done()) action6->update();
                else {
                    focused = false;
                    if (state == KO) dpm->LoadData();
                    SetState(IDLE);
                }
            } else if (action7) {
                if (!action7->done()) action7->update();
                else {
                    focused = false;
                    if (state == ITEM_BOOTS) usingItem = false;
                    SetState(IDLE);
                }
            } else if (action8) {
                if (!action8->done()) action8->update();
                else {
                    if (attacking) attacking = false;
                    focused = false;
                    SetState(IDLE);
                }
            }
        }

        void Seeker::SetState(ActionState s) {
            if (state != s && !focused) {
                state = s;
                ResetActions();
                switch(state) {
                    // BASIC ------------------------------------------------------------------------------------------------------------------
                    case IDLE:
                        combo = 0;
                        action6 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 0, 1, 2, 3, 4, 5);
                        break;
                    case MOVE:
                        action4 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 7, 8, 9, 10);
                        break;
                    case JUMP:
                        focused = true;
                        action3 = bn::create_sprite_animate_action_once(projection.value(), 6, sprite.tiles_item(), 12, 13, 14);
                        break;
                    case FALL:
                        focused = true;
                        action2 = bn::create_sprite_animate_action_forever(projection.value(), 10, sprite.tiles_item(), 13, 14);
                        break;
                    case LAND:
                        focused = true;
                        action2 = bn::create_sprite_animate_action_once(projection.value(), 5, sprite.tiles_item(), 15, 15);
                        break;
                    case CROUCH_INTRO:
                        focused = true;
                        action3 = bn::create_sprite_animate_action_once(projection.value(), 2, sprite.tiles_item(), 23, 20, 21);
                        break;
                    case CROUCH_IDLE:
                        action2 = bn::create_sprite_animate_action_forever(projection.value(), 20, sprite.tiles_item(), 20, 21);
                        break;
                    case CROUCH_OUTRO:
                        focused = true;
                        action3 = bn::create_sprite_animate_action_once(projection.value(), 2, sprite.tiles_item(), 20, 21, 23);
                        break;
                    case CROUCH_MOVE:
                        action8 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 25, 26, 27, 28, 29, 30, 31, 32);
                        break;
                    case SLIDE:
                        focused = true;
                        action3 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 68, 69, 70);
                        break;
                    case HIT:
                        focused = true;
                        action2 = bn::create_sprite_animate_action_once(projection.value(), 30, sprite.tiles_item(), 60, 60);
                        break;
                    case KO:
                        focused = true;
                        action6 = bn::create_sprite_animate_action_once(projection.value(), 20, sprite.tiles_item(), 62, 63, 64, 65, 66, 66);
                        break;
                    // ATTACKS ----------------------------------------------------------------------------------------------------------------
                    case ATTACK_1_I:
                        focused = true;
                        action2 = bn::create_sprite_animate_action_once(projection.value(), 9, sprite.tiles_item(), 43, 44);
                        break;
                    case ATTACK_1_O:
                        focused = true;
                        action3 = bn::create_sprite_animate_action_once(projection.value(), 12, sprite.tiles_item(), 44, 45, 45);
                        CastSlash();
                        break;
                    case ATTACK_2_I:
                        focused = true;
                        action2 = bn::create_sprite_animate_action_once(projection.value(), 9, sprite.tiles_item(), 46, 47);
                        break;
                    case ATTACK_2_O:
                        focused = true;
                        action3 = bn::create_sprite_animate_action_once(projection.value(), 12, sprite.tiles_item(), 47, 48, 48);
                        CastSlash();
                        break;
                    case ATTACK_3_I:
                        focused = true;
                        action2 = bn::create_sprite_animate_action_once(projection.value(), 9, sprite.tiles_item(), 49, 50);
                        break;
                    case ATTACK_3_O:
                        focused = true;
                        action3 = bn::create_sprite_animate_action_once(projection.value(), 12, sprite.tiles_item(), 50, 51, 51);
                        CastSlash();
                        break;
                    case ATTACK_O:
                        focused = true;
                        action3 = bn::create_sprite_animate_action_once(projection.value(), 10, sprite.tiles_item(), 52, 53, 53);
                        break;
                    case ATTACK_H_I:
                        focused = true;
                        action2 = bn::create_sprite_animate_action_once(projection.value(), 9, sprite.tiles_item(), 81, 82);
                        break;
                    case ATTACK_H_O:
                        focused = true;
                        action4 = bn::create_sprite_animate_action_once(projection.value(), 9, sprite.tiles_item(), 82, 83, 84, 84);
                        CastSlash();
                        break;
                    case ATTACK_A_I:
                        focused = true;
                        action2 = bn::create_sprite_animate_action_once(projection.value(), 9, sprite.tiles_item(), 46, 47);
                        break;
                    case ATTACK_A_O:
                        focused = true;
                        action3 = bn::create_sprite_animate_action_once(projection.value(), 12, sprite.tiles_item(), 47, 48, 48);
                        CastSlash();
                        break;
                    case ATTACK_C_I:
                        focused = true;
                        action3 = bn::create_sprite_animate_action_once(projection.value(), 6, sprite.tiles_item(), 35, 36, 37);
                        break;
                    case ATTACK_C_O:
                        focused = true;
                        action5 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 37, 38, 39, 40, 40);
                        CastSlash();
                        break;
                    // ITEMS ------------------------------------------------------------------------------------------------------------------
                    case ITEM_BOOTS:
                        focused = true;
                        action7 = bn::create_sprite_animate_action_once(projection.value(), 4, sprite.tiles_item(), 91, 92, 93, 94, 95, 96, 96);
                        break;
                    case ITEM_SHIELD:
                        focused = true;
                        switch (shieldLv) {
                            case 0:
                                action3 = bn::create_sprite_animate_action_once(projection.value(), 30, sprite.tiles_item(), 56, 57, 56);
                                break;
                            case 1:
                                action3 = bn::create_sprite_animate_action_once(projection.value(), 30, sprite.tiles_item(), 55, 54, 55);
                                break;
                            case 2:
                                action3 = bn::create_sprite_animate_action_once(projection.value(), 30, sprite.tiles_item(), 58, 59, 58);
                                break;
                        }
                        bn::sound_items::shield.play();
                        break;
                }
            }
        }

        Scene* Seeker::GetScene() {
            return scene;
        }

        void Seeker::LoadScene() {
            scene->Load(warpIdx, warpX, warpY, this);
            UpdatePos(scene->GetStartPos(true).integer(),scene->GetStartPos(false).integer());
            UpdateStats();
            warped = false;
        }

        void Seeker::Flip(bool flipped) {
            projection->set_horizontal_flip(flipped);
        }

        void Seeker::Warp(int i, int x, int y) {
            warped = true;
            warpIdx = i;
            warpX = x;
            warpY = y;
        }

        void Seeker::UpdateStats() {
            damage = swordLv + 1;
            interface->Load(this);
        }

        void Seeker::FullRecovery() {
            ChangeHP(hpMax);
            ChangeMP(mpMax);
        }