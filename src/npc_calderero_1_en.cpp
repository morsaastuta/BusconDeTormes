#pragma once

#include "npc_calderero_1_en.h"
#include "seeker.h"
#include "interface.h"
#include "boolean_storage.h"

        Calderero1_EN::Calderero1_EN(int x, int y, Seeker *s) : NPC(bn::sprite_items::s_calderero, x, y, s) {

            type = 0;

            limitN = 0;
            limitW = 32;
            limitS = 4;
            limitE = 32;

            if (!seeker->bs->calderero1T) {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("TINKERER: Who dares to tread these"));
                dialogues1.push_back(bn::string_view("paths so early? What could occupy the"));
                dialogues1.push_back(bn::string_view("mind of a young lad at this hour?"));

                dialogues1.push_back(bn::string_view("SEEKER: Then, Your Grace, be it known"));
                dialogues1.push_back(bn::string_view("above all else that I am in search of"));
                dialogues1.push_back(bn::string_view("my brother, who is called Lázaro de"));

                dialogues1.push_back(bn::string_view("Tormes, son of Tomé González and"));
                dialogues1.push_back(bn::string_view("Antona Pérez, natives of Tejares, a"));
                dialogues1.push_back(bn::string_view("village in Salamanca. He left with a"));

                dialogues1.push_back(bn::string_view("blind man twelve years ago. Has Your"));
                dialogues1.push_back(bn::string_view("Grace seen a boy and a blind man"));
                dialogues1.push_back(bn::string_view("carrying a large sack? An address"));

                dialogues1.push_back(bn::string_view("would be of great help to me."));
                dialogues1.push_back(bn::string_view(""));
                dialogues1.push_back(bn::string_view(""));

                dialogues1.push_back(bn::string_view("TINKERER: Love leads to the path, the"));
                dialogues1.push_back(bn::string_view("path leads to death. Those words are"));
                dialogues1.push_back(bn::string_view("dalways together, one way or another."));

                dialogues1.push_back(bn::string_view("Love and death, love and death, the"));
                dialogues1.push_back(bn::string_view("songs of the bards echo in the walls"));
                dialogues1.push_back(bn::string_view("of my inn. Love and death are the"));

                dialogues1.push_back(bn::string_view("chords of the melody that preceded Cid,"));
                dialogues1.push_back(bn::string_view("Roland, and even Arthur. Love is a"));
                dialogues1.push_back(bn::string_view("wanderer, and death a hindrance, and"));

                dialogues1.push_back(bn::string_view("all life is governed by these forces."));
                dialogues1.push_back(bn::string_view("The roads are full of death, but there"));
                dialogues1.push_back(bn::string_view("are few friendly hands to be found."));

                dialogues1.push_back(bn::string_view("Those must be cared for with love. In"));
                dialogues1.push_back(bn::string_view("my opinion, love is sustained by beauty."));
                dialogues1.push_back(bn::string_view("Here is a rose, they can also be found"));

                dialogues1.push_back(bn::string_view("wild and their blush is contagious. One"));
                dialogues1.push_back(bn::string_view("hundred and fifty maravedíes for a rose"));
                dialogues1.push_back(bn::string_view("full of love."));

                dialogues1.push_back(bn::string_view("Do not worry, young traveler, you will"));
                dialogues1.push_back(bn::string_view("find your brother in due time. Blood"));
                dialogues1.push_back(bn::string_view("is strong and tends to reunite."));

                // Purchase interaction
                dialogues1.push_back(bn::string_view("Do you want to buy the rose?"));
                dialogues1.push_back(bn::string_view("L: Yes (-150 maravedíes)"));
                dialogues1.push_back(bn::string_view("R: No"));

                // Subsequent interactions
                dialogues2.push_back(bn::string_view("Do you want to buy the rose?"));
                dialogues2.push_back(bn::string_view("L: Yes (-150 maravedíes)"));
                dialogues2.push_back(bn::string_view("R: No"));
                
            } else if (!seeker->bs->calderero1B) {

                // LENGTH -----------------------------------------------------------------------
                // First/Purchase interaction
                dialogues1.push_back(bn::string_view("Do you want to buy the rose?"));
                dialogues1.push_back(bn::string_view("L: Yes (-150 maravedíes)"));
                dialogues1.push_back(bn::string_view("R: No"));

                // Subsequent interactions
                dialogues2 = dialogues1;

            } else {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("I hope our paths cross again "));
                dialogues1.push_back(bn::string_view("someday. Good luck in your search."));
                dialogues1.push_back(bn::string_view(""));

                // Subsequent interactions
                dialogues2 = dialogues1;

            }

            SetAnim(0);
        }

        void Calderero1_EN::EventCheck() {
            projection->set_horizontal_flip(false);
            if (index == 3*13 || (seeker->bs->calderero1T && !seeker->bs->calderero1B && index == 3*1)) {
                prompt = true;
                seeker->bs->calderero1T = true;
                if (seeker->coin >= 150 && bn::keypad::l_pressed()) {
                    seeker->bs->calderero1B = true;
                    seeker->ChangeCoin(-150);
                    seeker->rose += 1;

                    dialogues2.clear();
                    dialogues2.push_back(bn::string_view("I hope our paths cross again "));
                    dialogues2.push_back(bn::string_view("someday. Good luck in your search."));
                    dialogues2.push_back(bn::string_view(""));

                    dialogues1.push_back(bn::string_view("Here you go."));
                    dialogues1.push_back(bn::string_view(""));
                    dialogues1.push_back(bn::string_view(""));

                    Interact();
                } else if (bn::keypad::r_pressed()) {

                    dialogues2.clear();
                    dialogues2.push_back(bn::string_view("Do you want to buy the rose?"));
                    dialogues2.push_back(bn::string_view("L: Yes (-150 maravedíes)"));
                    dialogues2.push_back(bn::string_view("R: No"));

                    dialogues1.push_back(bn::string_view("I'll be here if you need me."));
                    dialogues1.push_back(bn::string_view(""));
                    dialogues1.push_back(bn::string_view(""));

                    Interact();
                }
            }
        }

        void Calderero1_EN::SetAnim(int idx) {
            ResetActions();
            switch(idx) {
                case 0:
                    action6 = bn::create_sprite_animate_action_forever(projection.value(), 12, sprite.tiles_item(), 0, 1, 2, 3, 4, 5);
                    break;
            }
        }

        void Calderero1_EN::UpdateState() {
            if (action6) {
                if (!action6->done()) {
                    action6->update();
                } else {
                    SetAnim(0);
                }
            }
        }