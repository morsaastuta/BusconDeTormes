#pragma once

#include "foe_cocinero.h"
#include "seeker.h"

        Cocinero::Cocinero(int x, int y, Seeker *s) : Foe(bn::sprite_items::s_cocinero, x, y, s) {
            
            SetHP(4);
            coin = 15;
            damage = 1;

            speed = 0.4f;

            limitN = -12;
            limitW = 10;
            limitS = 33;
            limitE = 10;

            hitIdx = 25;
            deadIdx = 28;
            deathLength = 5;
        }

        void Cocinero::Update() {
            if (flinchTimer < flinchTimerMax) flinchTimer++;
            else {
                switch (state) {
                    case INIT:
                    case IDLE:
                        SetState(MOVE);
                        break;
                    case MOVE:
                        if (abs(seeker->GetPos(true) - GetPos(true)) < 96 && abs(seeker->GetPos(false) - GetPos(false)) < 32 && Detect()) SetState(DETECTED);
                        else Move();
                        break;
                    case DETECTED:
                    case SLASH:
                        // Set direction towards the seeker
                        if (seeker->GetPos(true) > GetPos(true)) right = true;
                        else right = false;
                        projection->set_horizontal_flip(!right);

                        // Abort or slash
                        if (abs(seeker->GetPos(true) - GetPos(true)) > 96 || abs(seeker->GetPos(false) - GetPos(false)) > 32) SetState(IDLE);
                        else Slash();

                        // If the seeker was shielded, flinch
                        if (seeker->GetState() == ITEM_SHIELD && EntityCollides(seeker)) {
                            limitW = 10;
                            limitE = 10;
                            flinchTimer = 0;
                            Flinch(false);
                        }

                        break;
                }
            }

            CommonUpdate();
        }

        void Cocinero::Move() {
            SetState(MOVE);
            projection->set_horizontal_flip(!right);
            if (right) velX = speed;
            else velX = -speed;
        }

        void Cocinero::Stop() {
            SetState(IDLE);
            velX = 0;
        }

        void Cocinero::Slash() {
            SetState(SLASH);
            projection->set_horizontal_flip(!right);
            if (right) {
                velX = speed*2;
                limitW = 10;
                limitE = 22;
            } else {
                velX = -speed*2;
                limitE = 10;
                limitW = 22;
            }
        }

        void Cocinero::UpdateState() {
            if (action2) {
                if (!action2->done()) action2->update();
                else {
                    focused = false;
                    SetState(IDLE);
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
                    if (state == KO) hp = 0;
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

        void Cocinero::SetState(ActionState s) {

            if (state != s && !focused) {
                state = s;
                ResetActions();
                if (state == IDLE) {
                    limitW = 10;
                    limitE = 10;
                    action4 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 0, 1, 2, 3);
                } else if (state == MOVE) {
                    action8 = bn::create_sprite_animate_action_forever(projection.value(), 8, sprite.tiles_item(), 5, 6, 7, 8, 9, 10, 11, 12);
                } else if (state == SLASH) {
                    action5 = bn::create_sprite_animate_action_forever(projection.value(), 4, sprite.tiles_item(), 14, 15, 16, 17, 18);
                }
            }
        }