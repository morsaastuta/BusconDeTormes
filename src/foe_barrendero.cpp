#pragma once

#include "foe_barrendero.h"
#include "seeker.h"

        Barrendero::Barrendero(int x, int y, Seeker *s) : Foe(bn::sprite_items::s_barrendero, x, y, s) {
            
            SetHP(6);
            coin = 5;
            damage = 1;

            speed = 0.4f;

            limitN = 0;
            limitW = 8;
            limitS = 33;
            limitE = 8;

            hitIdx = 20;
            deadIdx = 23;
            deathLength = 5;
        }

        void Barrendero::Update() {
            
            switch (state) {
                case INIT:
                    SetState(MOVE);
                    break;
                case MOVE:
                    if (abs(seeker->GetPos(true) - GetPos(true)) < 32 && abs(seeker->GetPos(false) - GetPos(false)) < 32 && Detect()) SetState(DETECTED);
                    else Move();
                    break;
                case DETECTED:
                case IDLE:
                case THRUST_INTRO:
                case THRUST_OUTRO:

                    // Set direction towards the seeker
                    if (seeker->GetPos(true) > GetPos(true)) right = true;
                    else right = false;
                    projection->set_horizontal_flip(!right);

                    // Condition for aborting
                    if (abs(seeker->GetPos(true) - GetPos(true)) > 32 || abs(seeker->GetPos(false) - GetPos(false)) > 32) SetState(MOVE);
                    else {
                        Stop();
                        thrustCounter--;
                        if (thrustCounter == 0) {
                            // Try thrust every short amount of time
                            thrustCounter = thrustCounterMax;
                            Thrust();
                        }
                    }
                    break;
            }

            CommonUpdate();
        }

        void Barrendero::Thrust() {
            SetState(THRUST_INTRO);
        }

        void Barrendero::Move() {
            SetState(MOVE);
            projection->set_horizontal_flip(!right);
            if (right) velX = speed;
            else velX = -speed;
        }

        void Barrendero::Stop() {
            SetState(IDLE);
            velX = 0;
        }

        void Barrendero::UpdateState() {
            if (action2) {
                if (!action2->done()) {
                    action2->update();
                } else {
                    focused = false;
                    SetState(IDLE);
                }
            } else if (action3) {
                if (!action3->done()) {
                    action3->update();
                } else {
                    focused = false;
                    if (state == THRUST_INTRO) SetState(THRUST_OUTRO);
                    else SetState(IDLE);
                }
            } else if (action4) {
                if (!action4->done()) {
                    action4->update();
                } else {
                    focused = false;
                    SetState(IDLE);
                }
            } else if (action5) {
                if (!action5->done()) {
                    action5->update();
                } else {
                    focused = false;
                    if (state == KO) hp = 0;
                    else SetState(IDLE);
                }
            } else if (action6) {
                if (!action6->done()) {
                    action6->update();
                } else {
                    focused = false;
                    SetState(IDLE);
                }
            }
        }

        void Barrendero::SetState(ActionState s) {

            if (state != s && !focused) {
                state = s;
                ResetActions();
                if (state == IDLE) {
                    action6 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 0, 1, 2, 3, 4, 5);
                    limitE = 8;
                    limitW = 8;
                } else if (state == MOVE) {
                    action4 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 7, 8, 9, 10);
                } else if (state == THRUST_INTRO) {
                    focused = true;
                    action3 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 12, 13, 14);
                } else if (state == THRUST_OUTRO) {
                    focused = true;
                    action5 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 14, 15, 16, 17, 17);

                    if (!projection->horizontal_flip()) limitE += 16;
                    else limitW += 16;

                    // If the seeker was shielded, flinch
                    if (seeker->GetState() == ITEM_SHIELD) Flinch(false);
                }
            }
        }