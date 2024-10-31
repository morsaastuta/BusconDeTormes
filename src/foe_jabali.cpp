#pragma once

#include "foe_jabali.h"
#include "seeker.h"

        Jabali::Jabali(int x, int y, Seeker *s) : Foe(bn::sprite_items::s_jabali, x, y, s) {
            
            SetHP(4);
            damage = 1;

            speed = 0.5f;

            limitN = -12;
            limitW = 10;
            limitS = 33;
            limitE = 10;

            hitIdx = 9;
            deadIdx = 12;
            deathLength = 8;
        }

        void Jabali::Update() {
            
            switch (state) {
                case INIT:
                case IDLE:
                    SetState(MOVE);
                    break;
                case MOVE:
                    if (abs(seeker->GetPos(true) - GetPos(true)) < 96 && abs(seeker->GetPos(false) - GetPos(false)) < 64 && Detect()) SetState(DETECTED);
                    else Move();
                    break;
                case DETECTED:
                    // Set direction towards the seeker
                    if (seeker->GetPos(true) > GetPos(true)) right = true;
                    else right = false;
                    projection->set_horizontal_flip(!right);
                    Charge();
                    break;
                case BASH:
                    bashTimer--;
                    if (bashTimer == 0 || wBlocked || eBlocked) {
                        bashTimer = bashTimerMax;
                        SetState(IDLE);
                    } else if (seeker->GetState() == ITEM_SHIELD && seeker->EntityCollides(this)) {
                        bashTimer = bashTimerMax;
                        Flinch(false);
                    }
                    break;
            }

            CommonUpdate();
        }

        void Jabali::Move() {
            SetState(MOVE);
            projection->set_horizontal_flip(!right);
            if (right) velX = speed;
            else velX = -speed;
        }

        void Jabali::Stop() {
            SetState(IDLE);
            velX = 0;
        }

        void Jabali::Charge() {
            bn::sound_items::pig.play();
            Stop();
            SetState(CHARGE);
        }

        void Jabali::Bash() {
            SetState(BASH);
            projection->set_horizontal_flip(!right);
            if (right) velX = speed*2;
            else velX = -speed*2;
        }

        void Jabali::UpdateState() {
            if (action2) {
                if (!action2->done()) action2->update();
                else {
                    focused = false;
                    if (state == CHARGE) Bash();
                    else SetState(IDLE);
                }
            } else if (action4) {
                if (!action4->done()) action4->update();
                else {
                    focused = false;
                    SetState(IDLE);
                }
            } else if (action8) {
                if (!action8->done()) action8->update();
                else {
                    focused = false;
                    if (state == KO) hp = 0;
                    else SetState(IDLE);
                }
            }
        }

        void Jabali::SetState(ActionState s) {

            if (state != s && !focused) {
                state = s;
                ResetActions();
                if (state == IDLE) {
                    action2 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 5, 5);
                } else if (state == MOVE) {
                    action4 = bn::create_sprite_animate_action_forever(projection.value(), 12, sprite.tiles_item(), 0, 1, 2, 3);
                } else if (state == CHARGE) {
                    focused = true;
                    action2 = bn::create_sprite_animate_action_once(projection.value(), 20, sprite.tiles_item(), 6, 6);
                } else if (state == BASH) {
                    action4 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 0, 1, 2, 3);
                }
            }
        }