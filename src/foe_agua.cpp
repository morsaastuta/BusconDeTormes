#pragma once

#include "foe_agua.h"
#include "seeker.h"

        Agua::Agua(int x, int y, Seeker *s, bool r) : Foe(bn::sprite_items::s_clerigo, x, y, s) {
            
            immortal = true;
            SetHP(1);
            damage = 1;

            velX = 1;
            velY = 0;
            speed = 2;

            right = r;

            limitN = -16;
            limitW = 3;
            limitS = 24;
            limitE = 3;
            
            projection->set_z_order(-1);

            SetState(MOVE);
            UpdateState();
        }

        void Agua::Update() {
            switch(state) {
                case MOVE:
                    Move();
                    // Apply gravity after the straight counter ends
                    straightCounter--;
                    if (straightCounter <= 0) {
                        if (velY < maxVelY) velY += gravity;
                    }
                    break;
                case VAPE:
                    vapeTimer++;
                    if (vapeTimer == vapeTimerMax) ForceHP(-1);
                    break;
            }

            if (CollisionCheck()) {
                if (velX > 0) seeker->Flip(true);
                else seeker->Flip(false);
                seeker->ChangeHP(-damage);
            }
            
            // Destroy upon hitting a wall
            if (wBlocked || eBlocked) ForceHP(-1);
            // Vape upon landing
            else if (landing) {
                Vape();
            }

            // End
            UpdatePos();
            UpdateState();
            CheckColTile();
        }

        void Agua::Move() {
            SetState(MOVE);
            projection->set_horizontal_flip(!right);
            if (right) velX = speed;
            else velX = -speed;
        }

        void Agua::Vape() {
            SetState(VAPE);
            projection->set_horizontal_flip(false);
            velX = 0;
            velY = 0;
        }

        void Agua::UpdateState() {
            if (action4) {
                if (!action4->done()) action4->update();
                else {
                    focused = false;
                    SetState(MOVE);
                }
            } else if (action7) {
                if (!action7->done()) action7->update();
                else {
                    focused = false;
                    if (state == KO) hp = 0;
                    else SetState(MOVE);
                }
            }
        }

        void Agua::SetState(ActionState s) {
            if (state != s && !focused) {
                state = s;
                ResetActions();
                if (state == MOVE) {
                    action4 = bn::create_sprite_animate_action_forever(projection.value(), 16, sprite.tiles_item(), 25, 26, 27, 28);
                } else if (state == VAPE) {
                    action7 = bn::create_sprite_animate_action_forever(projection.value(), 8, sprite.tiles_item(), 30, 31, 32, 33, 34, 35, 36);

                    vapeTimer = 0;
                    UpdatePos(GetPos(true).integer(),GetPos(false).integer()-(32-limitS));
                    limitN = -28;
                    limitW = 3;
                    limitS = 32;
                    limitE = 3;
                }
            }
        }