#pragma once

#include "foe_clerigo.h"
#include "foe_agua.h"
#include "seeker.h"
#include "scene.h"


        Clerigo::Clerigo(int x, int y, Seeker *s) : Foe(bn::sprite_items::s_clerigo, x, y, s) {
            
            SetHP(15);
            coin = 125;
            damage = 1;

            speed = 0.4f;
            jumpSpeed = -5.10f;

            limitN = 0;
            limitW = 14;
            limitS = 33;
            limitE = 14;

            hitIdx = 40;
            deadIdx = 42;
            deathLength = 7;
        }

        void Clerigo::Update() {
            switch (state) {
                case INIT:
                    SetState(MOVE);
                    break;
                case MOVE:
                    if (abs(seeker->GetPos(true) - GetPos(true)) < 32 && abs(seeker->GetPos(false) - GetPos(false)) < 32 && Detect()) SetState(DETECTED);
                    else {
                        Move();
                        jumpTimer--;
                        if (jumpTimer == 0) {
                            jumpTimer = jumpTimerMax;
                            Jump();
                        } else {
                            attackTimer--;
                            if (attackTimer == 0) {
                                attackTimer = attackTimerMax;
                                Throw();
                            }
                        }
                    }
                    break;
                case IDLE:
                case DETECTED:
                    // Set direction towards the seeker
                    if (seeker->GetPos(true) > GetPos(true)) right = true;
                    else right = false;
                    projection->set_horizontal_flip(!right);

                    // Condition for aborting
                    if (abs(seeker->GetPos(true) - GetPos(true)) > 32 || abs(seeker->GetPos(false) - GetPos(false)) > 32) SetState(MOVE);
                    else {
                        attackTimer--;
                        if (attackTimer == 0) {
                            attackTimer = attackTimerMax;
                            Blow();
                        }
                    }
                    break;
                case FALL:
                    if (!grounded) Approach();
                    else SetState(LAND);
                    break;
            }

            CommonUpdate();
        }

        void Clerigo::Stop() {
            SetState(IDLE);
            velX = 0;
        }

        void Clerigo::Move() {
            SetState(MOVE);
            projection->set_horizontal_flip(!right);
            if (right) velX = speed;
            else velX = -speed;
        }

        void Clerigo::Jump() {
            SetState(JUMP);
            velY = jumpSpeed;
        }

        void Clerigo::Approach() {
            if (!seeker->GetProjection().horizontal_flip()) {
                if (GetPos(true)+limitE*2 < seeker->GetPos(true)) velX = speed;
                else if (GetPos(true)+limitE*2 > seeker->GetPos(true)) velX = -speed;
            } else {
                if (GetPos(true)-limitW*2 < seeker->GetPos(true)) velX = speed;
                else if (GetPos(true)-limitW*2 > seeker->GetPos(true)) velX = -speed;
            }
        }

        void Clerigo::Throw() {
            water = false;
            SetState(THROW_INTRO);
        }

        void Clerigo::Blow() {
            water = true;
            SetState(BLOW_INTRO);
        }

        void Clerigo::UpdateState() {
            if (action2) {
                if (!action2->done()) action2->update();
                else {
                    focused = false;
                    if (state == JUMP) SetState(FALL);
                    else SetState(IDLE);
                }
            } else if (action3) {
                if (!action3->done()) action3->update();
                else {
                    focused = false;
                    if (state == THROW_INTRO) SetState(THROW_OUTRO);
                    else if (state == BLOW_INTRO) SetState(BLOW_OUTRO);
                    else SetState(IDLE);
                }
            } else if (action4) {
                if (!action4->done()) action4->update();
                else {
                    focused = false;
                    SetState(IDLE);
                }
            } else if (action5) {
                if (!action5->done()) action5->update();
                else {
                    focused = false;
                    SetState(IDLE);
                }
            } else if (action6) {
                if (!action6->done()) action6->update();
                else {
                    focused = false;
                    SetState(IDLE);
                }
            } else if (action7) {
                if (!action7->done()) action7->update();
                else {
                    focused = false;
                    if (state == KO) BossDeath(2);
                    else SetState(IDLE);
                }
            } else if (action8) {
                if (!action8->done()) action8->update();
                else {
                    focused = false;
                    SetState(IDLE);
                }
            }
        }

        void Clerigo::SetState(ActionState s) {
            if (state != s && !focused) {
                state = s;
                ResetActions();
                if (state == IDLE) {
                    BN_LOG("idle");
                    action6 = bn::create_sprite_animate_action_forever(projection.value(), 8, sprite.tiles_item(), 0, 1, 2, 3, 4, 5);

                    limitW = 10;
                    limitE = 10;
                } else if (state == MOVE) {
                    BN_LOG("move");
                    action4 = bn::create_sprite_animate_action_forever(projection.value(), 8, sprite.tiles_item(), 7, 8, 9, 10);
                } else if (state == JUMP) {
                    BN_LOG("jump");
                    focused = true;
                    action2 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 13, 14);
                } else if (state == FALL) {
                    BN_LOG("fall");
                    focused = true;
                    action2 = bn::create_sprite_animate_action_forever(projection.value(), 8, sprite.tiles_item(), 14, 14);
                } else if (state == LAND) {
                    BN_LOG("land");
                    focused = true;
                    action2 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 15, 15);
                } else if (state == BLOW_INTRO) {
                    BN_LOG("blow i");
                    focused = true;
                    action3 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 18, 19, 20);
                } else if (state == BLOW_OUTRO) {
                    BN_LOG("blow o");
                    focused = true;
                    action5 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 20, 21, 22, 23, 23);

                    limitW += 8;
                    limitE += 8;
                } else if (state == THROW_INTRO) {
                    BN_LOG("throw i");
                    focused = true;
                    action3 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 18, 19, 20);
                } else if (state == THROW_OUTRO) {
                    BN_LOG("throw o");
                    focused = true;
                    action5 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 20, 21, 22, 23, 23);

                BN_LOG("yeee1");
                    scene->AddFoe(new Agua(GetPos(true).integer(), GetPos(false).integer(), seeker, right));
                BN_LOG("yeee2");
                }
            }
        }