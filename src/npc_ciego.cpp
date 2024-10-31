#pragma once

#include "npc_ciego.h"
#include "seeker.h"
#include "boolean_storage.h"

        CiegoNPC::CiegoNPC(int x, int y, Seeker *s) : NPC(bn::sprite_items::s_ciego, x, y, s) {

            type = 0;

            limitN = 0;
            limitW = 0;
            limitS = 0;
            limitE = 0;

            // LENGTH -----------------------------------------------------------------------
            // First interaction
            dialogues1.push_back(bn::string_view("¿Eh? ¿Quién va? Escucho pasos de niñato"));
            dialogues1.push_back(bn::string_view("y huelo un tufo que me es familiar. Sí,"));
            dialogues1.push_back(bn::string_view("yo te conozco, estás enlazado a ese"));

            dialogues1.push_back(bn::string_view("demonio de algún modo, yo lo sé bien"));
            dialogues1.push_back(bn::string_view("porque yo le instruí. ¿Qué diablos es"));
            dialogues1.push_back(bn::string_view("esta vida que me condena por segunda"));

            dialogues1.push_back(bn::string_view("vez? ¿Acaso mi castigo no fue"));
            dialogues1.push_back(bn::string_view("suficiente? Tal ruindad maldigo y"));
            dialogues1.push_back(bn::string_view("vuelvo a maldecir. Muchacho, vuelve"));

            dialogues1.push_back(bn::string_view("por donde viniste, pues ya no más mozos"));
            dialogues1.push_back(bn::string_view("tutelo, Dios lo sabe bien. Mira la"));
            dialogues1.push_back(bn::string_view("cicatriz que me dejó el anterior, ese"));

            dialogues1.push_back(bn::string_view("malnacido enviado por el mismo Satán en"));
            dialogues1.push_back(bn::string_view("persona. No, ese tiempo ya pasó y ese"));
            dialogues1.push_back(bn::string_view("demonio, dicen, se fue con un clérigo"));

            dialogues1.push_back(bn::string_view("de no sé dónde. Creí oír el nombre de"));
            dialogues1.push_back(bn::string_view("ese vástago del demonio en la boca de"));
            dialogues1.push_back(bn::string_view("un par de hombres de Dios allá por"));

            dialogues1.push_back(bn::string_view("Maqueda. Sé bien que se trataba de él,"));
            dialogues1.push_back(bn::string_view("pocos nacen en el Tormes, como las"));
            dialogues1.push_back(bn::string_view("sanguijuelas. Ya aprendí mi lección,"));

            dialogues1.push_back(bn::string_view("¡Ahora largo! ¡Fuera de mi vista!"));
            dialogues1.push_back(bn::string_view("¡O prepárate para que tu lengua pruebe"));
            dialogues1.push_back(bn::string_view("de la mugre!"));

            // Subsequent interactions
            dialogues2 = dialogues1;

            SetAnim(0);

            seeker->SetState(IDLE);
            projection->set_horizontal_flip(true);
        }

        void CiegoNPC::EventCheck() {
            seeker->bs->ciegoI = true;
            if (dialoguing == false && bn::keypad::a_pressed()) seeker->warped = true;
        }

        void CiegoNPC::SetAnim(int idx) {
            ResetActions();
            switch(idx) {
                case 0:
                    action5 = bn::create_sprite_animate_action_forever(projection.value(), 12, sprite.tiles_item(), 0, 1, 2, 3, 4);
                    break;
            }
        }

        void CiegoNPC::UpdateState() {
            if (action5) {
                if (!action5->done()) {
                    action5->update();
                } else {
                    SetAnim(0);
                }
            }
        }