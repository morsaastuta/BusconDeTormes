#pragma once

#include "npc_doncella_2.h"
#include "seeker.h"
#include "boolean_storage.h"

        Doncella2::Doncella2(int x, int y, Seeker *s) : NPC(bn::sprite_items::s_doncella, x, y, s) {

            type = 0;

            limitN = 0;
            limitW = 24;
            limitS = 4;
            limitE = 24;

            if (seeker->rose < 1) {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("¿Buscas a mis amos? Para llamar su"));
                dialogues1.push_back(bn::string_view("atención deberás hacer sonar la"));
                dialogues1.push_back(bn::string_view("campana que se encuentra en lo"));

                dialogues1.push_back(bn::string_view("alto de la torre."));
                dialogues1.push_back(bn::string_view(""));
                dialogues1.push_back(bn::string_view(""));

                // Subsequent interactions
                dialogues2 = dialogues1;

            } else if (seeker->rose >= 1 && !seeker->bs->doncella2R) {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("(¿Entregarle la rosa a la doncella?)"));
                dialogues1.push_back(bn::string_view("L: Sí (-1 rosa)"));
                dialogues1.push_back(bn::string_view("R: No"));

                // Subsequent interactions
                dialogues2 = dialogues1;

            } else if (seeker->bs->doncella2R) {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("Ten cuidado, gentil amigo, por estos"));
                dialogues1.push_back(bn::string_view("pasillos. Recuerda tocar la campana"));
                dialogues1.push_back(bn::string_view("en lo alto de la torre si buscas a"));

                dialogues1.push_back(bn::string_view("mis amos."));
                dialogues1.push_back(bn::string_view(""));
                dialogues1.push_back(bn::string_view(""));

                // Subsequent interactions
                dialogues2 = dialogues1;

            }

            SetAnim(0);
        }

        void Doncella2::EventCheck() {
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
                        dialogues2.push_back(bn::string_view("Ten cuidado, gentil amigo, por estos"));
                        dialogues2.push_back(bn::string_view("pasillos. Recuerda tocar la campana"));
                        dialogues2.push_back(bn::string_view("en lo alto de la torre si buscas a"));

                        dialogues2.push_back(bn::string_view("mis amos."));
                        dialogues2.push_back(bn::string_view(""));
                        dialogues2.push_back(bn::string_view(""));

                        dialogues1.push_back(bn::string_view("¡Cielo santo! ¿Qué hacéis"));
                        dialogues1.push_back(bn::string_view("encaramado en la ventana? Pasad,"));
                        dialogues1.push_back(bn::string_view("caballero, pasad. Me hallo aseando"));

                        dialogues1.push_back(bn::string_view("y acicalando las estancias de esta"));
                        dialogues1.push_back(bn::string_view("congregación donde trabajo. ¿Ves"));
                        dialogues1.push_back(bn::string_view("aquellas vidrieras? Tan soberanas"));

                        dialogues1.push_back(bn::string_view("y resplandecientes, me traen a la"));
                        dialogues1.push_back(bn::string_view("memoria la primera flor que me"));
                        dialogues1.push_back(bn::string_view("regalasteis. Aunque marchita, la"));

                        dialogues1.push_back(bn::string_view("conservo con anhelo, mas los"));
                        dialogues1.push_back(bn::string_view("recuerdos no se pudren por mucho"));
                        dialogues1.push_back(bn::string_view("que el tiempo pase. Y aquí estamos,"));

                        dialogues1.push_back(bn::string_view("creando una nueva memoria que"));
                        dialogues1.push_back(bn::string_view("iluminará las vidrieras de mi alma..."));
                        dialogues1.push_back(bn::string_view(""));

                        Interact();
                    } else if (bn::keypad::r_pressed()) {
                        
                        dialogues1.push_back(bn::string_view("¿Buscas a mis amos? Para llamar su"));
                        dialogues1.push_back(bn::string_view("atención deberás hacer sonar la"));
                        dialogues1.push_back(bn::string_view("campana que se encuentra en lo"));

                        dialogues1.push_back(bn::string_view("alto de la torre."));
                        dialogues1.push_back(bn::string_view(""));
                        dialogues1.push_back(bn::string_view(""));

                        Interact();
                    }
                }
            }
        }

        void Doncella2::SetAnim(int idx) {
            ResetActions();
            switch(idx) {
                case 0:
                    action7 = bn::create_sprite_animate_action_forever(projection.value(), 20, sprite.tiles_item(), 0, 1, 2, 3, 4, 5, 6);
                    break;
            }
        }

        void Doncella2::UpdateState() {
            if (action7) {
                if (!action7->done()) {
                    action7->update();
                } else {
                    SetAnim(0);
                }
            }
        }