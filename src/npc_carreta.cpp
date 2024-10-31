#pragma once

#include "npc_carreta.h"
#include "seeker.h"

        Carreta::Carreta(int x, int y, Seeker *s) : NPC(bn::sprite_items::s_carreta, x, y, s) {
            deco = true;
            SetAnim(0);
        }

        void Carreta::SetAnim(int idx) {
            ResetActions();
            switch(idx) {
                case 0:
                    action6 = bn::create_sprite_animate_action_forever(projection.value(), 12, sprite.tiles_item(), 0, 1, 2, 3, 4, 5);
                    break;
            }
        }

        void Carreta::UpdateState() {
            if (action6) {
                if (!action6->done()) {
                    action6->update();
                } else {
                    SetAnim(0);
                }
            }
        }