#pragma once

#include "npc_calderero_2_en.h"
#include "seeker.h"
#include "interface.h"
#include "boolean_storage.h"

        Calderero2_EN::Calderero2_EN(int x, int y, Seeker *s) : NPC(bn::sprite_items::s_calderero, x, y, s) {

            type = 0;

            limitN = 0;
            limitW = 32;
            limitS = 4;
            limitE = 32;

            if (!seeker->bs->calderero2T) {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("Love and death, love and death."));
                dialogues1.push_back(bn::string_view("Love builds and death destroys."));
                dialogues1.push_back(bn::string_view("Love destroys and death builds."));

                dialogues1.push_back(bn::string_view("The ways in which both express "));
                dialogues1.push_back(bn::string_view("themselves are infinite, for infinite"));
                dialogues1.push_back(bn::string_view("are the paths we dare to tread. And"));

                dialogues1.push_back(bn::string_view(" both converge into one: God, who bestows"));
                dialogues1.push_back(bn::string_view("love and death, death and love, upon each"));
                dialogues1.push_back(bn::string_view("of his children. Today death rests, so"));

                dialogues1.push_back(bn::string_view("let us rejoice in a feast that celebrates"));
                dialogues1.push_back(bn::string_view("the boundless love that surrounds us."));
                dialogues1.push_back(bn::string_view(""));

                dialogues1.push_back(bn::string_view("You are already closer to your brother,"));
                dialogues1.push_back(bn::string_view("young seeker. Take this gift as symbol"));
                dialogues1.push_back(bn::string_view("of your progress. Raise a toast for me"));

                dialogues1.push_back(bn::string_view("as I shall for you."));
                dialogues1.push_back(bn::string_view(""));
                dialogues1.push_back(bn::string_view(""));

                dialogues1.push_back(bn::string_view("(You received the SPICED WINE)"));
                dialogues1.push_back(bn::string_view(""));
                dialogues1.push_back(bn::string_view("(Your stamina increases: 3 -> 5)"));

                // Subsequent interactions
                dialogues2.push_back(bn::string_view("Cheers! I hope our paths cross again,"));
                dialogues2.push_back(bn::string_view("young friend."));
                dialogues2.push_back(bn::string_view(""));
                
            } else {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("Cheers! I hope our paths cross again,"));
                dialogues1.push_back(bn::string_view("young friend."));
                dialogues1.push_back(bn::string_view(""));

                // Subsequent interactions
                dialogues2 = dialogues1;

            }

            SetAnim(0);
        }

        void Calderero2_EN::EventCheck() {
            projection->set_horizontal_flip(false);
            seeker->mpMax = 5;
            seeker->bs->calderero2T = true;
        }

        void Calderero2_EN::SetAnim(int idx) {
            ResetActions();
            switch(idx) {
                case 0:
                    action6 = bn::create_sprite_animate_action_forever(projection.value(), 12, sprite.tiles_item(), 0, 1, 2, 3, 4, 5);
                    break;
            }
        }

        void Calderero2_EN::UpdateState() {
            if (action6) {
                if (!action6->done()) {
                    action6->update();
                } else {
                    SetAnim(0);
                }
            }
        }