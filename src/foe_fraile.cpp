#pragma once

#include "foe_fraile.h"
#include "foe_fuego.h"
#include "seeker.h"
#include "scene.h"

        Fraile::Fraile(int x, int y, Seeker *s) : Foe(bn::sprite_items::s_fraile, x, y, s) {
            
            SetHP(15);
            coin = 125;
            damage = 1;

            speed = 0.6f;

            limitN = 10;
            limitW = 8;
            limitS = 32;
            limitE = 8;

            hitIdx = 31;
            deadIdx = 34;
            deathLength = 7;
        }

        void Fraile::Update() {
            
            switch (state) {
                case INIT:
                    SetState(MOVE);
                    break;
                case MOVE:
                    if (abs(seeker->GetPos(true) - GetPos(true)) < 64 && abs(seeker->GetPos(false) - GetPos(false)) < 32 && Detect()) SetState(DETECTED);
                    else Move();
                    break;
                case DETECTED:
                case IDLE:
                case THRUST_INTRO:

                    // Set direction towards the seeker
                    if (seeker->GetPos(true) > GetPos(true)) right = true;
                    else right = false;
                    projection->set_horizontal_flip(!right);

                    // Condition for aborting
                    if (abs(seeker->GetPos(true) - GetPos(true)) > 64 || abs(seeker->GetPos(false) - GetPos(false)) > 32) SetState(MOVE);
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
                case THRUST_OUTRO:
                    fireCounter++;
                    if (fireCounter == fireCounterMax) {
                        fireCounter = 0;
                        scene->AddFoe(new Fuego(GetPos(true).integer(), GetPos(false).integer(), seeker));
                    }
                    break;
            }

            CommonUpdate();
        }

        void Fraile::Thrust() {
            SetState(THRUST_INTRO);
        }

        void Fraile::Move() {
            SetState(MOVE);
            projection->set_horizontal_flip(!right);
            if (right) velX = speed;
            else velX = -speed;
        }

        void Fraile::Stop() {
            SetState(IDLE);
            velX = 0;
        }

        void Fraile::UpdateState() {
            if (action2) {
                if (!action2->done()) {
                    action2->update();
                } else {
                    focused = false;
                    SetState(IDLE);
                }
            } else if (action4) {
                if (!action4->done()) {
                    action4->update();
                } else {
                    focused = false;
                    if (state == THRUST_INTRO) SetState(THRUST_OUTRO);
                    else SetState(IDLE);
                }
            } else if (action6) {
                if (!action6->done()) {
                    action6->update();
                } else {
                    focused = false;
                    SetState(IDLE);
                }
            } else if (action7) {
                if (!action7->done()) {
                    action7->update();
                } else {
                    focused = false;
                    if (state == KO) BossDeath(3);
                    else SetState(IDLE);
                }
            }
        }

        void Fraile::SetState(ActionState s) {

            if (state != s && !focused) {
                state = s;
                ResetActions();
                if (state == IDLE) {
                    action6 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 0, 1, 2, 3, 4, 5);
                    limitE = 8;
                    limitW = 8;
                } else if (state == MOVE) {
                    action6 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 7, 8, 9, 10, 11, 12);
                } else if (state == THRUST_INTRO) {
                    focused = true;
                    action4 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 14, 15, 16, 17);
                } else if (state == THRUST_OUTRO) {
                    focused = true;
                    action7 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 17, 18, 19, 20, 21, 22, 23);

                    fireCounter = 0;
                    if (!projection->horizontal_flip()) {
                        limitE += 16;
                        velX = speed*3;
                    } else {
                        limitW += 16;
                        velX = -speed*3;
                    }

                    // If the seeker was shielded, flinch
                    if (seeker->GetState() == ITEM_SHIELD) Flinch(false);
                }
            }
        }