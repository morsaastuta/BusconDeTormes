#pragma once

#include "npc_zafio.h"
#include "seeker.h"

        ZafioNPC::ZafioNPC(int x, int y, Seeker *s) : NPC(bn::sprite_items::s_zafionpc, x, y, s) {

            type = 0;

            limitN = 0;
            limitW = 24;
            limitS = 4;
            limitE = 24;

            // LENGTH -----------------------------------------------------------------------
            // First interaction
            dialogues1.push_back(bn::string_view("Óyeme una cosa, zagal. Dicen que esta"));
            dialogues1.push_back(bn::string_view("venta tiene fama por los gritos que se"));
            dialogues1.push_back(bn::string_view("vienen oyendo bajo tierra."));

            dialogues1.push_back(bn::string_view("Las ánimas torturadas del infierno"));
            dialogues1.push_back(bn::string_view("llenan el aire y no hay quien duerma."));
            dialogues1.push_back(bn::string_view(""));

            dialogues1.push_back(bn::string_view("Pero yo no he pegado ojo por unos pasos"));
            dialogues1.push_back(bn::string_view("en el tejado."));
            dialogues1.push_back(bn::string_view(""));

            dialogues1.push_back(bn::string_view("Si me entero del botarate que ha estado"));
            dialogues1.push_back(bn::string_view("jugando arriba, ¡se unirá al juego que"));
            dialogues1.push_back(bn::string_view("tengan los demonios allí abajo!"));

            // Subsequent interactions
            dialogues2 = dialogues1;

            SetAnim(0);
        }

        void ZafioNPC::SetAnim(int idx) {
            ResetActions();
            switch(idx) {
                case 0:
                    action6 = bn::create_sprite_animate_action_forever(projection.value(), 12, sprite.tiles_item(), 0, 1, 2, 3, 4, 5);
                    break;
            }
        }

        void ZafioNPC::UpdateState() {
            if (action6) {
                if (!action6->done()) {
                    action6->update();
                } else {
                    SetAnim(0);
                }
            }
        }