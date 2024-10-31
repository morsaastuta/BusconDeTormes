#pragma once

#include "npc_madre_en.h"
#include "seeker.h"
#include "boolean_storage.h"

        Madre_EN::Madre_EN(int x, int y, Seeker *s) : NPC(bn::sprite_items::s_madre, x, y, s) {

            type = 0;

            limitN = 0;
            limitW = 24;
            limitS = 4;
            limitE = 24;

            // LENGTH -----------------------------------------------------------------------
            // Subsequent interactions
            dialogues2.push_back(bn::string_view("Make haste, my son."));
            dialogues2.push_back(bn::string_view(""));
            dialogues2.push_back(bn::string_view(""));

            if (!seeker->bs->madreT) {
                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("I know I sharnt see you again, my son."));
                dialogues1.push_back(bn::string_view("Strive to be good like your brother,"));
                dialogues1.push_back(bn::string_view("and may the grace of God guide you."));

                dialogues1.push_back(bn::string_view("I have raised you, and I hope you find"));
                dialogues1.push_back(bn::string_view("a good master; fend for yourself. One"));
                dialogues1.push_back(bn::string_view("has departed, and now the next follows."));

                dialogues1.push_back(bn::string_view("God have chosen your fate and have"));
                dialogues1.push_back(bn::string_view("chosen to leave me alone. Alas, how"));
                dialogues1.push_back(bn::string_view("shall I fare now without my children!"));

                dialogues1.push_back(bn::string_view("I am nothing without them! With the"));
                dialogues1.push_back(bn::string_view("blind man, I left the first, and the"));
                dialogues1.push_back(bn::string_view("same fortune I wish for the second."));

                dialogues1.push_back(bn::string_view("Go my son, and find your brother."));
                dialogues1.push_back(bn::string_view(""));
                dialogues1.push_back(bn::string_view(""));
            } else {
                dialogues1 = dialogues2;
            }

            SetAnim(0);
        }

        void Madre_EN::EventCheck() {
            seeker->bs->madreT = true;
        }

        void Madre_EN::SetAnim(int idx) {
            ResetActions();
            switch(idx) {
                case 0:
                    action5 = bn::create_sprite_animate_action_forever(projection.value(), 12, sprite.tiles_item(), 0, 1, 2, 3, 4);
                    break;
            }
        }

        void Madre_EN::UpdateState() {
            if (action5) {
                if (!action5->done()) {
                    action5->update();
                } else {
                    SetAnim(0);
                }
            }
        }