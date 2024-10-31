#pragma once

#include "foe_fuego.h"
#include "seeker.h"


        Fuego::Fuego(int x, int y, Seeker *s) : Foe(bn::sprite_items::s_fraile, x, y, s) {
            
            immortal = true;
            SetHP(1);
            damage = 1;

            limitN = -24;
            limitW = 3;
            limitS = 32;
            limitE = 3;

            SetState(VAPE);
            UpdateState();
        }

        void Fuego::Update() {
            if (CollisionCheck()) seeker->ChangeHP(-damage);

            extinguishTimer--;
            if (extinguishTimer == 0) ForceHP(-1);
            
            UpdateState();
        }

        void Fuego::UpdateState() {
            if (action4) {
                if (!action4->done()) action4->update();
                else {
                    focused = false;
                    SetState(VAPE);
                }
            }
        }

        void Fuego::SetState(ActionState s) {
            if (state != s && !focused) {
                state = s;
                ResetActions();
                if (state == VAPE) {
                    action4 = bn::create_sprite_animate_action_forever(projection.value(), 6, sprite.tiles_item(), 25, 26, 27, 28);
                }
            }
        }