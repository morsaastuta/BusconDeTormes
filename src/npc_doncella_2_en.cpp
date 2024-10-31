#pragma once

#include "npc_doncella_2_en.h"
#include "seeker.h"
#include "boolean_storage.h"

        Doncella2_EN::Doncella2_EN(int x, int y, Seeker *s) : NPC(bn::sprite_items::s_doncella, x, y, s) {

            type = 0;

            limitN = 0;
            limitW = 24;
            limitS = 4;
            limitE = 24;

            if (seeker->rose < 1) {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("Are you looking for my masters? To"));
                dialogues1.push_back(bn::string_view("get their attention, you must ring"));
                dialogues1.push_back(bn::string_view("the bell located at the top of the"));

                dialogues1.push_back(bn::string_view("tower."));
                dialogues1.push_back(bn::string_view(""));
                dialogues1.push_back(bn::string_view(""));

                // Subsequent interactions
                dialogues2 = dialogues1;

            } else if (seeker->rose >= 1 && !seeker->bs->doncella2R) {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("(Give the rose to the maiden?)"));
                dialogues1.push_back(bn::string_view("L: Yes (-1 rose)"));
                dialogues1.push_back(bn::string_view("R: No"));

                // Subsequent interactions
                dialogues2 = dialogues1;

            } else if (seeker->bs->doncella2R) {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("Be careful through these corridors,"));
                dialogues1.push_back(bn::string_view("gentle friend. Remember to ring the"));
                dialogues1.push_back(bn::string_view("bell at the top of the tower."));

                // Subsequent interactions
                dialogues2 = dialogues1;

            }

            SetAnim(0);
        }

        void Doncella2_EN::EventCheck() {
            if (seeker->rose >= 1 && !seeker->bs->doncella2R) {
                projection->set_horizontal_flip(false);
                if (index == 3*1) {
                    prompt = true;
                    if (seeker->rose >= 1 && bn::keypad::l_pressed()) {
                        LookAt();
                        seeker->bs->doncella2R = true;
                        seeker->rose -= 1;
                        seeker->love++;

                        // LENGTH -----------------------------------------------------------------------
                        dialogues2.clear();
                        dialogues2.push_back(bn::string_view("Be careful through these corridors,"));
                        dialogues2.push_back(bn::string_view("gentle friend. Remember to ring the"));
                        dialogues2.push_back(bn::string_view("bell at the top of the tower."));

                        dialogues1.push_back(bn::string_view("Dear God! What are you doing perched"));
                        dialogues1.push_back(bn::string_view("at the window? Come in, sir, come in."));
                        dialogues1.push_back(bn::string_view("I am in the midst of cleaning and"));

                        dialogues1.push_back(bn::string_view("decorating the rooms of this"));
                        dialogues1.push_back(bn::string_view("congregation where I work. Do you see"));
                        dialogues1.push_back(bn::string_view("those stained glass windows? So"));

                        dialogues1.push_back(bn::string_view("sovereign and resplendent, they remind"));
                        dialogues1.push_back(bn::string_view("me of the first flower you gifted me."));
                        dialogues1.push_back(bn::string_view("Though withered, I cherish it, for"));

                        dialogues1.push_back(bn::string_view("memories do not decay, no matter how"));
                        dialogues1.push_back(bn::string_view("much time passes. And here we are,"));
                        dialogues1.push_back(bn::string_view("creating a new memory that will light"));

                        dialogues1.push_back(bn::string_view("up the stained glass of my soul..."));
                        dialogues1.push_back(bn::string_view(""));
                        dialogues1.push_back(bn::string_view(""));

                        Interact();
                    } else if (bn::keypad::r_pressed()) {
                        
                        dialogues1.push_back(bn::string_view("Are you looking for my masters? To"));
                        dialogues1.push_back(bn::string_view("get their attention, you must ring"));
                        dialogues1.push_back(bn::string_view("the bell located at the top of the"));

                        dialogues1.push_back(bn::string_view("tower."));
                        dialogues1.push_back(bn::string_view(""));
                        dialogues1.push_back(bn::string_view(""));

                        Interact();
                    }
                }
            }
        }

        void Doncella2_EN::SetAnim(int idx) {
            ResetActions();
            switch(idx) {
                case 0:
                    action7 = bn::create_sprite_animate_action_forever(projection.value(), 20, sprite.tiles_item(), 0, 1, 2, 3, 4, 5, 6);
                    break;
            }
        }

        void Doncella2_EN::UpdateState() {
            if (action7) {
                if (!action7->done()) {
                    action7->update();
                } else {
                    SetAnim(0);
                }
            }
        }