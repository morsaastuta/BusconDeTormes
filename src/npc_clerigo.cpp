#pragma once

#include "npc_clerigo.h"
#include "seeker.h"
#include "boolean_storage.h"

        ClerigoNPC::ClerigoNPC(int x, int y, Seeker *s) : NPC(bn::sprite_items::s_clerigo, x, y, s) {

            type = 0;

            limitN = 0;
            limitW = 0;
            limitS = 0;
            limitE = 0;

            // LENGTH -----------------------------------------------------------------------
            // First interaction
            dialogues1.push_back(bn::string_view("FRAILE: ¿Has sido el que ha tocado la"));
            dialogues1.push_back(bn::string_view("campana?"));
            dialogues1.push_back(bn::string_view(""));

            dialogues1.push_back(bn::string_view("CLÉRIGO: ¿Por qué llama?"));
            dialogues1.push_back(bn::string_view(""));
            dialogues1.push_back(bn::string_view(""));

            dialogues1.push_back(bn::string_view("BUSCÓN: Vuestras Mercedes, en busca"));
            dialogues1.push_back(bn::string_view("de mi hermano me hallo y socorro"));
            dialogues1.push_back(bn::string_view("reclamo, pues largo y severo es el"));

            dialogues1.push_back(bn::string_view("camino que me ha guiado hasta aquí."));
            dialogues1.push_back(bn::string_view(""));
            dialogues1.push_back(bn::string_view(""));

            dialogues1.push_back(bn::string_view("FRAILE: ¡Ah! ¿Acaso investigáis el"));
            dialogues1.push_back(bn::string_view("paradero de Lázaro? Bravo era, sí..."));
            dialogues1.push_back(bn::string_view("mas no un mal mozo. Recuerdo con placer"));

            dialogues1.push_back(bn::string_view("nuestros momentos en la alcoba..."));
            dialogues1.push_back(bn::string_view(""));
            dialogues1.push_back(bn::string_view(""));

            dialogues1.push_back(bn::string_view("CLÉRIGO: Yo de Lázaro no guardo"));
            dialogues1.push_back(bn::string_view("recuerdo placentero alguno. Como un"));
            dialogues1.push_back(bn::string_view("padre le cuidé y así me las pagó."));

            dialogues1.push_back(bn::string_view("FRAILE: A mis oídos han llegado que"));
            dialogues1.push_back(bn::string_view("se marchó con un escudero que no tiene"));
            dialogues1.push_back(bn::string_view("dónde caerse muerto... Malviven en Toledo"));

            dialogues1.push_back(bn::string_view("CLÉRIGO: Alguien tiene que pagar por"));
            dialogues1.push_back(bn::string_view("sus pecados... Alguien tiene que pagar"));
            dialogues1.push_back(bn::string_view("por ensuciar la casa de Dios..."));

            // Subsequent interactions
            dialogues2 = dialogues1;

            SetAnim(0);

            seeker->SetState(IDLE);
            projection->set_horizontal_flip(false);
        }

        void ClerigoNPC::EventCheck() {
            seeker->bs->iglesiaI = true;
            if (dialoguing == false && bn::keypad::a_pressed()) seeker->warped = true;
        }

        void ClerigoNPC::SetAnim(int idx) {
            ResetActions();
            switch(idx) {
                case 0:
                    action6 = bn::create_sprite_animate_action_forever(projection.value(), 12, sprite.tiles_item(), 0, 1, 2, 3, 4, 5);
                    break;
            }
        }

        void ClerigoNPC::UpdateState() {
            if (action6) {
                if (!action6->done()) {
                    action6->update();
                } else {
                    SetAnim(0);
                }
            }
        }