#pragma once

#include "foe_zafiolanzador.h"
#include "foe_piedra.h"
#include "seeker.h"
#include "scene.h"

        ZafioLanzador::ZafioLanzador(int x, int y, Seeker *s) : Foe(bn::sprite_items::s_zafiolanzador, x, y, s) {
            
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

        void ZafioLanzador::Update() {
            
            switch (state) {
                case INIT:
                    SetState(MOVE);
                    break;
                case MOVE:
                    if (abs(seeker->GetPos(true) - GetPos(true)) > 64 && abs(seeker->GetPos(true) - GetPos(true)) < 96 && abs(seeker->GetPos(false) - GetPos(false)) < 32 && Detect()) SetState(DETECTED);
                    else Move();
                    break;
                case STEPBACK:
                    if (abs(seeker->GetPos(true) - GetPos(true)) > 64 && abs(seeker->GetPos(true) - GetPos(true)) < 96 && abs(seeker->GetPos(false) - GetPos(false)) < 32 && Detect()) SetState(DETECTED);
                    else Stepback();
                    break;
                case DETECTED:
                case IDLE:
                case THROW_INTRO:
                case THROW_OUTRO:

                    // Set direction towards the seeker
                    if (seeker->GetPos(true) > GetPos(true)) right = true;
                    else right = false;
                    projection->set_horizontal_flip(!right);

                    // Condition for aborting
                    if (abs(seeker->GetPos(true) - GetPos(true)) > 96 || abs(seeker->GetPos(false) - GetPos(false)) > 32) SetState(MOVE);
                    else if (abs(seeker->GetPos(true) - GetPos(true)) < 64 || abs(seeker->GetPos(false) - GetPos(false)) > 32) SetState(STEPBACK);
                    else {
                        Stop();
                        throwCounter--;
                        if (throwCounter == 0) {
                            // Try throw a stone every short amount of time (THROW)
                            throwCounter = throwCounterMax;
                            ThrowStone();
                        }
                    }
            }

            CommonUpdate();
        }

        void ZafioLanzador::ThrowStone() {
            SetState(THROW_INTRO);
        }

        void ZafioLanzador::Move() {
            SetState(MOVE);
            projection->set_horizontal_flip(!right);
            if (right) velX = speed;
            else velX = -speed;
        }

        void ZafioLanzador::Stepback() {
            SetState(STEPBACK);
            projection->set_horizontal_flip(!right);
            if (right) velX = -speed;
            else velX = speed;
        }

        void ZafioLanzador::Stop() {
            SetState(IDLE);
            velX = 0;
        }

        void ZafioLanzador::UpdateState() {
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
                    if (state == THROW_INTRO) SetState(THROW_OUTRO);
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

        void ZafioLanzador::SetState(ActionState s) {
            
            if (state != s && !focused) {
                state = s;
                ResetActions();
                if (state == IDLE) {
                    action6 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 0, 1, 2, 3, 4, 5);
                } else if (state == MOVE || state == STEPBACK) {
                    action6 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 7, 8, 9, 10, 11, 12);
                } else if (state == THROW_INTRO) {
                    focused = true;
                    action3 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 14, 15, 16);
                } else if (state == THROW_OUTRO) {
                    focused = true;
                    action5 = bn::create_sprite_animate_action_once(projection.value(), 8, sprite.tiles_item(), 16, 17, 18, 19, 19);

                    scene->AddFoe(new Piedra(GetPos(true).integer(), GetPos(false).integer()+8, seeker, right));
                }
            }
        }

        namespace std {
            void __throw_bad_array_new_length() {}
        }