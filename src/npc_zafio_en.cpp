#pragma once

#include "npc_zafio_en.h"
#include "seeker.h"

        ZafioNPC_EN::ZafioNPC_EN(int x, int y, Seeker *s) : NPC(bn::sprite_items::s_zafionpc, x, y, s) {

            type = 0;

            limitN = 0;
            limitW = 24;
            limitS = 4;
            limitE = 24;

            // LENGTH -----------------------------------------------------------------------
            // First interaction
            dialogues1.push_back(bn::string_view("Hear ye boy. They say this inn is known"));
            dialogues1.push_back(bn::string_view("for the cries that echo from below the"));
            dialogues1.push_back(bn::string_view("ground."));

            dialogues1.push_back(bn::string_view("The tortured souls of the damned fill"));
            dialogues1.push_back(bn::string_view("the air, and no one can sleep. "));
            dialogues1.push_back(bn::string_view(""));

            dialogues1.push_back(bn::string_view("Yet I haven't slept a wink because of"));
            dialogues1.push_back(bn::string_view("the footsteps on the roof."));
            dialogues1.push_back(bn::string_view(""));

            dialogues1.push_back(bn::string_view("If I find the fool who's been making"));
            dialogues1.push_back(bn::string_view("that ruckus, I'll join in on whatever"));
            dialogues1.push_back(bn::string_view("game the demons are playing down there!"));

            // Subsequent interactions
            dialogues2 = dialogues1;

            SetAnim(0);
        }

        void ZafioNPC_EN::SetAnim(int idx) {
            ResetActions();
            switch(idx) {
                case 0:
                    action6 = bn::create_sprite_animate_action_forever(projection.value(), 12, sprite.tiles_item(), 0, 1, 2, 3, 4, 5);
                    break;
            }
        }

        void ZafioNPC_EN::UpdateState() {
            if (action6) {
                if (!action6->done()) {
                    action6->update();
                } else {
                    SetAnim(0);
                }
            }
        }