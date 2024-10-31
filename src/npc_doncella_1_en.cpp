#pragma once

#include "npc_doncella_1_en.h"
#include "seeker.h"
#include "boolean_storage.h"

        Doncella1_EN::Doncella1_EN(int x, int y, Seeker *s) : NPC(bn::sprite_items::s_doncella, x, y, s) {

            type = 0;

            limitN = 0;
            limitW = 24;
            limitS = 4;
            limitE = 24;

            if (seeker->rose < 1) {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("In this century the wise men dictate"));
                dialogues1.push_back(bn::string_view("CARPE DIEM, but we poor people have"));
                dialogues1.push_back(bn::string_view("no such pleasure. The silver crown"));

                dialogues1.push_back(bn::string_view("will dye the hair without joy and"));
                dialogues1.push_back(bn::string_view("without delay. If only my eyes"));
                dialogues1.push_back(bn::string_view("could glimpse a work of beauty..."));

                // Subsequent interactions
                dialogues2 = dialogues1;

            } else if (seeker->rose >= 1 && !seeker->bs->doncella1R) {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("(Give the rose to the maiden?)"));
                dialogues1.push_back(bn::string_view("L: Yes (-1 rose)"));
                dialogues1.push_back(bn::string_view("R: No"));

                // Subsequent interactions
                dialogues2 = dialogues1;

            } else if (seeker->bs->doncella1R) {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("Thank you young man, for your present."));
                dialogues1.push_back(bn::string_view(""));
                dialogues1.push_back(bn::string_view(""));

                // Subsequent interactions
                dialogues2 = dialogues1;

            }

            SetAnim(0);
        }

        void Doncella1_EN::EventCheck() {
            if (!seeker->bs->doncella1R) projection->set_horizontal_flip(false);
            if (seeker->rose >= 1 && !seeker->bs->doncella1R && index == 3*1) {
                prompt = true;
                if (seeker->rose >= 1 && bn::keypad::l_pressed()) {
                    LookAt();
                    seeker->bs->doncella1R = true;
                    seeker->rose -= 1;
                    seeker->love++;

                    dialogues2.clear();
                    dialogues2.push_back(bn::string_view("Thank you young man, for your present."));
                    dialogues2.push_back(bn::string_view(""));
                    dialogues2.push_back(bn::string_view(""));

                    dialogues1.push_back(bn::string_view("Oh, what beauty! Never have I held"));
                    dialogues1.push_back(bn::string_view("such a delicate flower between my"));
                    dialogues1.push_back(bn::string_view("fingers. Look, look carefully, because"));

                    dialogues1.push_back(bn::string_view("the reflection of these petals is the"));
                    dialogues1.push_back(bn::string_view("soul of the giver. Kind sir, I thank"));
                    dialogues1.push_back(bn::string_view("thee with my heart in my hand, for now"));

                    dialogues1.push_back(bn::string_view("my heart is this rose. I shall treasure"));
                    dialogues1.push_back(bn::string_view("it until the end of my days. By the"));
                    dialogues1.push_back(bn::string_view("looks of you clothes, your grace is"));

                    dialogues1.push_back(bn::string_view("very kind to squander your coin on such"));
                    dialogues1.push_back(bn::string_view("an elegant gift, I thank thee for it."));
                    dialogues1.push_back(bn::string_view(""));

                    Interact();
                } else if (bn::keypad::r_pressed()) {

                    dialogues1.push_back(bn::string_view("In this century the wise men dictate"));
                    dialogues1.push_back(bn::string_view("CARPE DIEM, but we poor people have"));
                    dialogues1.push_back(bn::string_view("no such pleasure. The silver crown"));

                    dialogues1.push_back(bn::string_view("will dye the hair without joy and"));
                    dialogues1.push_back(bn::string_view("without delay. If only my eyes"));
                    dialogues1.push_back(bn::string_view("could glimpse a work of beauty..."));

                    Interact();
                }
            }
        }

        void Doncella1_EN::SetAnim(int idx) {
            ResetActions();
            switch(idx) {
                case 0:
                    action7 = bn::create_sprite_animate_action_forever(projection.value(), 20, sprite.tiles_item(), 0, 1, 2, 3, 4, 5, 6);
                    break;
            }
        }

        void Doncella1_EN::UpdateState() {
            if (action7) {
                if (!action7->done()) {
                    action7->update();
                } else {
                    SetAnim(0);
                }
            }
        }