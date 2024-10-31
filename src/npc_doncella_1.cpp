#pragma once

#include "npc_doncella_1.h"
#include "seeker.h"
#include "boolean_storage.h"

        Doncella1::Doncella1(int x, int y, Seeker *s) : NPC(bn::sprite_items::s_doncella, x, y, s) {

            type = 0;

            limitN = 0;
            limitW = 24;
            limitS = 4;
            limitE = 24;

            if (seeker->rose < 1) {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("En este siglo los sapientes dictan"));
                dialogues1.push_back(bn::string_view("CARPE DIEM, mas los pobres no tenemos"));
                dialogues1.push_back(bn::string_view("deleite y la corona de plata teñirá"));

                dialogues1.push_back(bn::string_view("el cabello sin gozo y sin demora. Si"));
                dialogues1.push_back(bn::string_view("mis ojos pudieran atisbar belleza"));
                dialogues1.push_back(bn::string_view("alguna..."));

                // Subsequent interactions
                dialogues2 = dialogues1;

            } else if (seeker->rose >= 1 && !seeker->bs->doncella1R) {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("(¿Entregarle la rosa a la doncella?)"));
                dialogues1.push_back(bn::string_view("L: Sí (-1 rosa)"));
                dialogues1.push_back(bn::string_view("R: No"));

                // Subsequent interactions
                dialogues2 = dialogues1;

            } else if (seeker->bs->doncella1R) {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("Gracias, joven, por tu presente."));
                dialogues1.push_back(bn::string_view(""));
                dialogues1.push_back(bn::string_view(""));

                // Subsequent interactions
                dialogues2 = dialogues1;

            }

            SetAnim(0);
        }

        void Doncella1::EventCheck() {
            if (!seeker->bs->doncella1R) projection->set_horizontal_flip(false);
            if (seeker->rose >= 1 && !seeker->bs->doncella1R && index == 3*1) {
                prompt = true;
                if (seeker->rose >= 1 && bn::keypad::l_pressed()) {
                    LookAt();
                    seeker->bs->doncella1R = true;
                    seeker->rose -= 1;
                    seeker->love++;

                    dialogues2.clear();
                    dialogues2.push_back(bn::string_view("Gracias, joven, por tu presente."));
                    dialogues2.push_back(bn::string_view(""));
                    dialogues2.push_back(bn::string_view(""));

                    dialogues1.push_back(bn::string_view("¡Oh, qué belleza! Nunca flor tan"));
                    dialogues1.push_back(bn::string_view("delicada sostuve entre mis dedos."));
                    dialogues1.push_back(bn::string_view("Mirad, mirad atento, pues reflejo de"));

                    dialogues1.push_back(bn::string_view("estos pétalos son el alma de quien"));
                    dialogues1.push_back(bn::string_view("regala. Bondadoso caballero, le"));
                    dialogues1.push_back(bn::string_view("agradezco con el corazón en la mano,"));

                    dialogues1.push_back(bn::string_view("siendo ahora mi corazón esta rosa, que"));
                    dialogues1.push_back(bn::string_view("cuidaré de ella por siempre hasta el."));
                    dialogues1.push_back(bn::string_view("fin de mis días. Viendo sus ropajes,"));

                    dialogues1.push_back(bn::string_view("muy gentil es Vuestra Merced por"));
                    dialogues1.push_back(bn::string_view("malgastar sus monedas en un presente"));
                    dialogues1.push_back(bn::string_view("tan elegante como este, os doy las"));

                    dialogues1.push_back(bn::string_view("gracias por ello."));
                    dialogues1.push_back(bn::string_view(""));
                    dialogues1.push_back(bn::string_view(""));

                    Interact();
                } else if (bn::keypad::r_pressed()) {

                    dialogues1.push_back(bn::string_view("En este siglo los sapientes dictan"));
                    dialogues1.push_back(bn::string_view("CARPE DIEM, mas los pobres no tenemos"));
                    dialogues1.push_back(bn::string_view("deleite y la corona de plata teñirá"));

                    dialogues1.push_back(bn::string_view("el cabello sin gozo y sin demora. Si"));
                    dialogues1.push_back(bn::string_view("mis ojos pudieran atisbar belleza"));
                    dialogues1.push_back(bn::string_view("alguna..."));

                    Interact();
                }
            }
        }

        void Doncella1::SetAnim(int idx) {
            ResetActions();
            switch(idx) {
                case 0:
                    action7 = bn::create_sprite_animate_action_forever(projection.value(), 20, sprite.tiles_item(), 0, 1, 2, 3, 4, 5, 6);
                    break;
            }
        }

        void Doncella1::UpdateState() {
            if (action7) {
                if (!action7->done()) {
                    action7->update();
                } else {
                    SetAnim(0);
                }
            }
        }