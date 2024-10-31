#pragma once

#include "foe_ciego.h"
#include "foe_uva.h"
#include "seeker.h"
#include "scene.h"


        Ciego::Ciego(int x, int y, Seeker *s) : Foe(bn::sprite_items::s_ciego, x, y, s) {
            
            SetHP(20);
            coin = 100;
            damage = 1;

            speed = 0.6f;

            limitN = 0;
            limitW = 10;
            limitS = 32;
            limitE = 10;

            hitIdx = 47;
            deadIdx = 50;
            deathLength = 8;
        }

        void Ciego::Update() {
            switch (state) {
                case INIT:
                    SetState(IDLE);
                    break;
                case IDLE:
                case MOVE:
                    detected = false;
                    if (!seeker->crouched) {
                        patience = patienceMax;
                        SetState(DETECTED);
                    } else {
                        patience--;
                        if (patience == 0) {
                            Stop();
                            patience = patienceMax;
                            Throw();
                        } else Move();
                    }
                    break;
                case DETECTED:
                    detected = true;
                    detX = seeker->GetPos(true).integer();
                    // Set direction towards the seeker
                    if (seeker->GetPos(true) > GetPos(true)) right = true;
                    else right = false;
                    projection->set_horizontal_flip(!right);
                    Drag();
                    break;
                case DRAG:
                    if (abs(GetPos(true) - detX) > 26) {
                        if (right) velX = speed*2;
                        else velX = -speed*2;
                    } else {
                        Stop();
                        Attack();
                    }
                    if (!seeker->crouched) {
                        detected = true;
                        detX = seeker->GetPos(true).integer();
                        // Set direction towards the seeker
                        if (seeker->GetPos(true) > GetPos(true)) right = true;
                        else right = false;
                        projection->set_horizontal_flip(!right);
                    }
                    break;
            }

            if (detected && CollisionCheck()) {
                if (seeker->GetPos(true) < posX) right = false;
                else right = true;

                seeker->Flip(right);
                seeker->ChangeHP(-damage);
            }
            
            // Mid-air specifications
            if (!grounded) {
                // Apply gravity
                if (velY < maxVelY) velY += gravity;
            }

            // Land when needed
            if (landing) {
                focused = false;
                landing = false;
            }

            // End
            UpdatePos();
            UpdateState();
            CheckColTile();
            CheckBorder();
        }

        void Ciego::Stop() {
            SetState(IDLE);
            velX = 0;
        }

        void Ciego::Move() {
            SetState(MOVE);
            projection->set_horizontal_flip(!right);
            if (right) velX = speed;
            else velX = -speed;
        }

        void Ciego::Drag() {
            SetState(DRAG);
        }

        void Ciego::Attack() {
            SetState(ATTACK_INTRO);
        }

        void Ciego::Throw() {
            SetState(THROW_INTRO);
        }

        void Ciego::UpdateState() {
            if (action2) {
                if (!action2->done()) action2->update();
                else {
                    focused = false;
                    if (state == BRIDGE_1) SetState(ATTACK_2);
                    else if (state == ATTACK_2) SetState(BRIDGE_2);
                    else SetState(IDLE);
                }
            } else if (action3) {
                if (!action3->done()) action3->update();
                else {
                    focused = false;
                    if (state == ATTACK_INTRO) SetState(ATTACK_1);
                    else SetState(IDLE);
                }
            } else if (action4) {
                if (!action4->done()) action4->update();
                else {
                    focused = false;
                    if (state == ATTACK_1) SetState(BRIDGE_1);
                    else if (state == ATTACK_3) SetState(ATTACK_OUTRO);
                    else SetState(IDLE);
                }
            } else if (action5) {
                if (!action5->done()) action5->update();
                else {
                    focused = false;
                    if (state == BRIDGE_2) SetState(ATTACK_3);
                    else SetState(IDLE);
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
                    if (state == THROW_INTRO) SetState(THROW_OUTRO);
                    else SetState(IDLE);
                }
            } else if (action8) {
                if (!action8->done()) action8->update();
                else {
                    focused = false;
                    if (state == KO) BossDeath(1);
                    else SetState(IDLE);
                }
            }
        }

        void Ciego::SetState(ActionState s) {

            if (state != s && !focused) {
                state = s;
                ResetActions();
                if (state == IDLE) {
                    limitW = 10;
                    limitE = 10;
                    action5 = bn::create_sprite_animate_action_forever(projection.value(), 8, sprite.tiles_item(), 0, 1, 2, 3, 4);
                } else if (state == MOVE) {
                    action4 = bn::create_sprite_animate_action_forever(projection.value(), 8, sprite.tiles_item(), 6, 7, 8, 9);
                } else if (state == THROW_INTRO) {
                    focused = true;
                    action7 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 11, 12, 13, 14, 15, 16, 17);
                } else if (state == THROW_OUTRO) {
                    focused = true;
                    action5 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 17, 18, 19, 20, 20);

                    scene->AddFoe(new Uva(GetPos(true).integer(), GetPos(false).integer()+12, seeker, right));
                } else if (state == DRAG) {
                    action3 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 22, 23, 24);
                } else if (state == ATTACK_INTRO) {
                    focused = true;
                    action3 = bn::create_sprite_animate_action_once(projection.value(), 6, sprite.tiles_item(), 26, 27, 28);
                } else if (state == ATTACK_1) {
                    if (right) limitE += 12;
                    else limitW += 12;
                    focused = true;
                    action4 = bn::create_sprite_animate_action_once(projection.value(), 6, sprite.tiles_item(), 28, 29, 30, 30);
                } else if (state == BRIDGE_1) {
                    limitW = 10;
                    limitE = 10;
                    focused = true;
                    action2 = bn::create_sprite_animate_action_once(projection.value(), 6, sprite.tiles_item(), 31, 32);
                } else if (state == ATTACK_2) {
                    if (right) limitE += 12;
                    else limitW += 12;
                    focused = true;
                    action2 = bn::create_sprite_animate_action_once(projection.value(), 6, sprite.tiles_item(), 32, 32);
                } else if (state == BRIDGE_2) {
                    limitW = 10;
                    limitE = 10;
                    focused = true;
                    action5 = bn::create_sprite_animate_action_once(projection.value(), 6, sprite.tiles_item(), 33, 34, 35, 36, 37);
                } else if (state == ATTACK_3) {
                    if (right) limitE += 6;
                    else limitW += 6;
                    focused = true;
                    action4 = bn::create_sprite_animate_action_once(projection.value(), 6, sprite.tiles_item(), 37, 38, 39, 39);
                } else if (state == ATTACK_OUTRO) {
                    limitW = 10;
                    limitE = 10;
                    focused = true;
                    action6 = bn::create_sprite_animate_action_once(projection.value(), 6, sprite.tiles_item(), 40, 41, 42, 43, 44, 44);
                }
            }
        }