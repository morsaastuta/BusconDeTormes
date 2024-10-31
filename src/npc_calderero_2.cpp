#pragma once

#include "npc_calderero_2.h"
#include "seeker.h"
#include "interface.h"
#include "boolean_storage.h"

        Calderero2::Calderero2(int x, int y, Seeker *s) : NPC(bn::sprite_items::s_calderero, x, y, s) {

            type = 0;

            limitN = 0;
            limitW = 32;
            limitS = 4;
            limitE = 32;

            if (!seeker->bs->calderero2T) {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("Amor y muerte, amor y muerte."));
                dialogues1.push_back(bn::string_view("El amor construye y la muerte destruye."));
                dialogues1.push_back(bn::string_view("El amor destruye y la muerte construye."));

                dialogues1.push_back(bn::string_view("Las formas en que ambos se expresan son"));
                dialogues1.push_back(bn::string_view("infinitas, pues infinitos son los"));
                dialogues1.push_back(bn::string_view("caminos que osamos tomar. Y ambos"));

                dialogues1.push_back(bn::string_view("confluyen en uno solo, Dios, que otorga"));
                dialogues1.push_back(bn::string_view("amor y muerte, muerte y amor, a cada uno"));
                dialogues1.push_back(bn::string_view("de sus hijos. Hoy la muerte descansa,"));

                dialogues1.push_back(bn::string_view("así que regocijémonos en un banquete"));
                dialogues1.push_back(bn::string_view("que celebre este amor ingente que nos"));
                dialogues1.push_back(bn::string_view("rodea."));

                dialogues1.push_back(bn::string_view("Ya estáis más cerca de vuestro"));
                dialogues1.push_back(bn::string_view("hermano, joven buscón. Tomad, tomad"));
                dialogues1.push_back(bn::string_view("este obsequio como ofrenda por los"));

                dialogues1.push_back(bn::string_view("logros obtenidos. Brindad por mí como"));
                dialogues1.push_back(bn::string_view("yo brindaré por vos."));
                dialogues1.push_back(bn::string_view(""));

                dialogues1.push_back(bn::string_view("(Has recibido el VINO ESPECIADO)"));
                dialogues1.push_back(bn::string_view(""));
                dialogues1.push_back(bn::string_view("(Tu aguante aumenta: 3 -> 5)"));

                // Subsequent interactions
                dialogues2.push_back(bn::string_view("¡Salud! Espero que nuestros caminos"));
                dialogues2.push_back(bn::string_view("se vuelvan a cruzar, joven amigo."));
                dialogues2.push_back(bn::string_view(""));
                
            } else {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("¡Salud! Espero que nuestros caminos"));
                dialogues1.push_back(bn::string_view("se vuelvan a cruzar, joven amigo."));
                dialogues1.push_back(bn::string_view(""));

                // Subsequent interactions
                dialogues2 = dialogues1;

            }

            SetAnim(0);
        }

        void Calderero2::EventCheck() {
            projection->set_horizontal_flip(false);
            seeker->mpMax = 5;
            seeker->bs->calderero2T = true;
        }

        void Calderero2::SetAnim(int idx) {
            ResetActions();
            switch(idx) {
                case 0:
                    action6 = bn::create_sprite_animate_action_forever(projection.value(), 12, sprite.tiles_item(), 0, 1, 2, 3, 4, 5);
                    break;
            }
        }

        void Calderero2::UpdateState() {
            if (action6) {
                if (!action6->done()) {
                    action6->update();
                } else {
                    SetAnim(0);
                }
            }
        }