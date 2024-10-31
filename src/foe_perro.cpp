#pragma once

#include "foe_perro.h"
#include "seeker.h"

        Perro::Perro(int x, int y, Seeker *s) : Foe(bn::sprite_items::s_perro, x, y, s), ogX(x) {
            
            SetHP(2);
            damage = 1;

            speed = 0.8f;
            jumpSpeed = -3.00f;

            limitN = -14;
            limitW = 6;
            limitS = 33;
            limitE = 6;

            hitIdx = 31;
            deadIdx = 34;
            deathLength = 5;
        }

        void Perro::Update() {
            
            switch (state) {
                case INIT:
                    SetState(ASLEEP);
                    break;
                case SLEEP:
                case ASLEEP:
                    velX = 0;
                    if (!seeker->crouched && abs(seeker->GetPos(true) - GetPos(true)) < 64) WakeUp();
                    break;
                case IDLE:
                    if (abs(seeker->GetPos(true) - GetPos(true)) < 64) SetState(DETECTED);
                    else Sleep();
                    break;
                case DETECTED:
                    // Set direction towards the seeker
                    if (seeker->GetPos(true) > GetPos(true)) right = true;
                    else right = false;
                    projection->set_horizontal_flip(!right);

                    SetState(READY);

                    break;
                case MOVE:
                    if (abs(GetPos(true) - ogX) < 2) SetState(SLEEP);
                    else {
                        if (GetPos(true) < ogX) right = true;
                        else right = false;
                        Move();
                    }
                    break;
            }

            if (state != ASLEEP && CollisionCheck()) {
                if (seeker->GetPos(true) < posX) right = false;
                else right = true;

                seeker->Flip(right);
                seeker->ChangeHP(-damage);
            }
            
            // Mid-air specifications
            if (!grounded) {
                // Apply gravity
                if (velY < maxVelY) velY += gravity;
                if (state == JUMP && velY > 0) SetState(FALL);
            }

            // Land when needed
            if (landing) {
                focused = false;
                landing = false;
                if (state != HIT && state != KO) SetState(MOVE);
            }

            // End
            UpdatePos();
            UpdateState();
            CheckColTile();
            CheckBorder();
        }

        void Perro::Move() {
            SetState(MOVE);
            projection->set_horizontal_flip(!right);
            if (right) velX = speed;
            else velX = -speed;
        }

        void Perro::Jump() {
            SetState(JUMP);
            velY = jumpSpeed;
            if (right) velX = speed;
            else velX = -speed;
        }

        void Perro::WakeUp() {
            SetState(WAKE);
        }

        void Perro::Sleep() {
            SetState(SLEEP);
        }

        void Perro::UpdateState() {
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
                    SetState(IDLE);
                }
            } else if (action4) {
                if (!action4->done()) action4->update();
                else {
                    focused = false;
                    if (state == SLEEP) SetState(ASLEEP);
                    else if (state == WAKE) SetState(IDLE);
                    else if (state == READY) Jump();
                    else SetState(IDLE);
                }
            } else if (action5) {
                if (!action5->done()) action5->update();
                else {
                    focused = false;
                    if (state == KO) hp = 0;
                    else SetState(IDLE);
                }
            } else if (action6) {
                if (!action6->done()) action6->update();
                else {
                    focused = false;
                    SetState(IDLE);
                }
            }
        }

        void Perro::SetState(ActionState s) {

            if (state != s && !focused) {
                state = s;
                ResetActions();
                if (state == IDLE) {
                    action3 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 0, 1, 2);
                } else if (state == MOVE) {
                    action6 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 4, 5, 6, 7, 8, 9);
                } else if (state == SLEEP) {
                    focused = true;
                    action4 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 11, 12, 13, 13);
                } else if (state == ASLEEP) {
                    action3 = bn::create_sprite_animate_action_forever(projection.value(), 12, sprite.tiles_item(), 15, 16, 17);
                } else if (state == WAKE) {
                    focused = true;
                    action4 = bn::create_sprite_animate_action_once(projection.value(), 4, sprite.tiles_item(), 13, 12, 11, 11);
                } else if (state == READY) {
                    focused = true;
                    action4 = bn::create_sprite_animate_action_once(projection.value(), 4, sprite.tiles_item(), 21, 22, 23, 23);
                } else if (state == JUMP) {
                    focused = true;
                    action2 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 24, 24);
                } else if (state == FALL) {
                    focused = true;
                    action2 = bn::create_sprite_animate_action_once(projection.value(), 20, sprite.tiles_item(), 25, 26);
                }
            }
        }