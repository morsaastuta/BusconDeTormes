#pragma once

#include "foe_zafio.h"
#include "seeker.h"

        Zafio::Zafio(int x, int y, Seeker *s) : Foe(bn::sprite_items::s_zafio, x, y, s) {
            
            SetHP(3);
            coin = 5;
            damage = 1;

            speed = 0.4f;

            limitN = 0;
            limitW = 8;
            limitS = 33;
            limitE = 8;

            hitIdx = 22;
            deadIdx = 28;
            deathLength = 5;
        }

        void Zafio::Update() {
            
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
                case PUNCH_INTRO:
                case PUNCH_OUTRO:

                    // Set direction towards the seeker
                    if (seeker->GetPos(true) > GetPos(true)) right = true;
                    else right = false;
                    projection->set_horizontal_flip(!right);

                    // Condition for aborting
                    if (abs(seeker->GetPos(true) - GetPos(true)) > 32 || abs(seeker->GetPos(false) - GetPos(false)) > 32) SetState(MOVE);
                    else {
                        Stop();
                        punchCounter--;
                        if (punchCounter == 0) {
                            // Try punch every short amount of time
                            punchCounter = punchCounterMax;
                            Punch();
                        }
                    }
            }

            CommonUpdate();
        }

        void Zafio::Punch() {
            SetState(PUNCH_INTRO);
        }

        void Zafio::Move() {
            SetState(MOVE);
            projection->set_horizontal_flip(!right);
            if (right) velX = speed;
            else velX = -speed;
        }

        void Zafio::Stop() {
            SetState(IDLE);
            velX = 0;
        }

        void Zafio::UpdateState() {
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
                    if (state == PUNCH_INTRO) SetState(PUNCH_OUTRO);
                    else SetState(IDLE);
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

        void Zafio::SetState(ActionState s) {

            if (state != s && !focused) {
                state = s;
                ResetActions();
                if (state == IDLE) {
                    action6 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 0, 1, 2, 3, 4, 5);
                    limitE = 8;
                    limitW = 8;
                } else if (state == MOVE) {
                    action6 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 7, 8, 9, 10, 11, 12);
                } else if (state == PUNCH_INTRO) {
                    focused = true;
                    action3 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 14, 15, 16);
                } else if (state == PUNCH_OUTRO) {
                    focused = true;
                    action5 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 16, 17, 18, 19, 19);
                    
                    if (!projection->horizontal_flip()) limitE += 16;
                    else limitW += 16;

                    // If the seeker was shielded, flinch
                    if (seeker->GetState() == ITEM_SHIELD) Flinch(false);
                }
            }
        }