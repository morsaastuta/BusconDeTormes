#pragma once

#include "npc_madre.h"
#include "seeker.h"
#include "boolean_storage.h"

        Madre::Madre(int x, int y, Seeker *s) : NPC(bn::sprite_items::s_madre, x, y, s) {

            type = 0;

            limitN = 0;
            limitW = 24;
            limitS = 4;
            limitE = 24;

            // LENGTH -----------------------------------------------------------------------
            // Subsequent interactions
            dialogues2.push_back(bn::string_view("Puedes partir, hijo mío."));
            dialogues2.push_back(bn::string_view(""));
            dialogues2.push_back(bn::string_view(""));

            if (!seeker->bs->madreT) {
                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("Hijo, ya sé que no te veré más. Procura"));
                dialogues1.push_back(bn::string_view("de ser bueno como tu hermano, y Dios te"));
                dialogues1.push_back(bn::string_view("guíe."));

                dialogues1.push_back(bn::string_view("Criado te he y espero halles buen amo;"));
                dialogues1.push_back(bn::string_view("válete por ti. Uno se marchó y ahora el"));
                dialogues1.push_back(bn::string_view("siguiente le sigue."));

                dialogues1.push_back(bn::string_view("¡Ay, cómo me valdré yo ahora sin mis"));
                dialogues1.push_back(bn::string_view("criaturas! ¡Ni nombre tengo ahora que"));
                dialogues1.push_back(bn::string_view("mis hijos andan su propio camino!"));

                dialogues1.push_back(bn::string_view("Con el ciego dejé al primero, y la"));
                dialogues1.push_back(bn::string_view("misma suerte le deseo al segundo."));
                dialogues1.push_back(bn::string_view(""));

                dialogues1.push_back(bn::string_view("Márchate, hijo, y encuentra a tu"));
                dialogues1.push_back(bn::string_view("hermano."));
                dialogues1.push_back(bn::string_view(""));
            } else {
                dialogues1 = dialogues2;
            }

            SetAnim(0);
        }

        void Madre::EventCheck() {
            seeker->bs->madreT = true;
        }

        void Madre::SetAnim(int idx) {
            ResetActions();
            switch(idx) {
                case 0:
                    action5 = bn::create_sprite_animate_action_forever(projection.value(), 12, sprite.tiles_item(), 0, 1, 2, 3, 4);
                    break;
            }
        }

        void Madre::UpdateState() {
            if (action5) {
                if (!action5->done()) {
                    action5->update();
                } else {
                    SetAnim(0);
                }
            }
        }