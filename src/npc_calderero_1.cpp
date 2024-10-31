#pragma once

#include "npc_calderero_1.h"
#include "seeker.h"
#include "interface.h"
#include "boolean_storage.h"

        Calderero1::Calderero1(int x, int y, Seeker *s) : NPC(bn::sprite_items::s_calderero, x, y, s) {

            type = 0;

            limitN = 0;
            limitW = 32;
            limitS = 4;
            limitE = 32;

            if (!seeker->bs->calderero1T) {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("CALDERERO: ¿Quién osa caminar por"));
                dialogues1.push_back(bn::string_view("estas sendas tan temprano? ¿Qué"));
                dialogues1.push_back(bn::string_view("menesteres ocupan a tan joven chiquillo?"));

                dialogues1.push_back(bn::string_view("BUSCÓN: Pues sepa Vuestra Merced, ante"));
                dialogues1.push_back(bn::string_view("todas cosas, que en busca de mi hermano"));
                dialogues1.push_back(bn::string_view("estoy, que le llaman Lázaro de Tormes,"));

                dialogues1.push_back(bn::string_view("hijo de Tomé González y de Antona"));
                dialogues1.push_back(bn::string_view("Pérez, naturales de Tejares, aldea de"));
                dialogues1.push_back(bn::string_view("Salamanca. Marchó con un ciego doce"));

                dialogues1.push_back(bn::string_view("años ha. ¿Ha visto Vuestra Merced a un"));
                dialogues1.push_back(bn::string_view("niño y un ciego cargando un gran saco?"));
                dialogues1.push_back(bn::string_view("Con una dirección me valdría."));

                dialogues1.push_back(bn::string_view("CALDERERO: El amor lleva al camino, el"));
                dialogues1.push_back(bn::string_view("camino lleva a la muerte. Siempre juntas"));
                dialogues1.push_back(bn::string_view("esas palabras, de un modo u otro. Amor y"));

                dialogues1.push_back(bn::string_view("muerte, amor y muerte, resuenan las"));
                dialogues1.push_back(bn::string_view("canciones de los bardos en las paredes"));
                dialogues1.push_back(bn::string_view("de la venta. Amor y muerte son los"));

                dialogues1.push_back(bn::string_view("acordes de la melodía que precede al"));
                dialogues1.push_back(bn::string_view("Cid, Roldán y al mismo Arturo. El amor"));
                dialogues1.push_back(bn::string_view("es móvil y la muerte impedimento, y todo"));

                dialogues1.push_back(bn::string_view("en la vida se rige por estas fuerzas."));
                dialogues1.push_back(bn::string_view("Los caminos están llenos de muerte pero"));
                dialogues1.push_back(bn::string_view("pocas son las manos amigas que se pueden"));

                dialogues1.push_back(bn::string_view("encontrar. Esas hay que cuidarlas con"));
                dialogues1.push_back(bn::string_view("amor. En mi opinión, el amor toma por"));
                dialogues1.push_back(bn::string_view("sustento la belleza. He aquí una rosa."));

                dialogues1.push_back(bn::string_view("También se pueden encontrar salvajes y"));
                dialogues1.push_back(bn::string_view("su rubor es contagioso. Ciento cincuenta"));
                dialogues1.push_back(bn::string_view("maravedíes por una rosa llena de amor."));

                dialogues1.push_back(bn::string_view("No os preocupéis, joven buscón, que"));
                dialogues1.push_back(bn::string_view("hallaréis a vuestro hermano. La sangre"));
                dialogues1.push_back(bn::string_view("es fuerte y tiende a reunirse."));

                // Purchase interaction
                dialogues1.push_back(bn::string_view("¿Queréis comprar la rosa?"));
                dialogues1.push_back(bn::string_view("L: Sí (-150 maravedíes)"));
                dialogues1.push_back(bn::string_view("R: No"));

                // Subsequent interactions
                dialogues2.push_back(bn::string_view("¿Queréis comprar la rosa?"));
                dialogues2.push_back(bn::string_view("L: Sí (-150 maravedíes)"));
                dialogues2.push_back(bn::string_view("R: No"));
                
            } else if (!seeker->bs->calderero1B) {

                // LENGTH -----------------------------------------------------------------------
                // First/Purchase interaction
                dialogues1.push_back(bn::string_view("¿Queréis comprar la rosa?"));
                dialogues1.push_back(bn::string_view("L: Sí (-150 maravedíes)"));
                dialogues1.push_back(bn::string_view("R: No"));

                // Subsequent interactions
                dialogues2 = dialogues1;

            } else {

                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("Gracias, chico. Espero que nuestros"));
                dialogues1.push_back(bn::string_view("caminos se crucen de nuevo. Suerte en"));
                dialogues1.push_back(bn::string_view("vuestra búsqueda."));

                // Subsequent interactions
                dialogues2 = dialogues1;

            }

            SetAnim(0);
        }

        void Calderero1::EventCheck() {
            projection->set_horizontal_flip(false);
            if (index == 3*12 || (seeker->bs->calderero1T && !seeker->bs->calderero1B && index == 3*1)) {
                prompt = true;
                seeker->bs->calderero1T = true;
                if (seeker->coin >= 150 && bn::keypad::l_pressed()) {
                    seeker->bs->calderero1B = true;
                    seeker->ChangeCoin(-150);
                    seeker->rose += 1;

                    dialogues2.clear();
                    dialogues2.push_back(bn::string_view("Gracias, chico. Espero que nuestros"));
                    dialogues2.push_back(bn::string_view("caminos se crucen de nuevo. Suerte en"));
                    dialogues2.push_back(bn::string_view("vuestra búsqueda."));

                    dialogues1.push_back(bn::string_view("Aquí tenéis."));
                    dialogues1.push_back(bn::string_view(""));
                    dialogues1.push_back(bn::string_view(""));

                    Interact();
                } else if (bn::keypad::r_pressed()) {

                    dialogues2.clear();
                    dialogues2.push_back(bn::string_view("¿Queréis comprar la rosa?"));
                    dialogues2.push_back(bn::string_view("L: Sí (-150 maravedíes)"));
                    dialogues2.push_back(bn::string_view("R: No"));

                    dialogues1.push_back(bn::string_view("Aquí estaré si me necesitáis."));
                    dialogues1.push_back(bn::string_view(""));
                    dialogues1.push_back(bn::string_view(""));

                    Interact();
                }
            }
        }

        void Calderero1::SetAnim(int idx) {
            ResetActions();
            switch(idx) {
                case 0:
                    action6 = bn::create_sprite_animate_action_forever(projection.value(), 12, sprite.tiles_item(), 0, 1, 2, 3, 4, 5);
                    break;
            }
        }

        void Calderero1::UpdateState() {
            if (action6) {
                if (!action6->done()) {
                    action6->update();
                } else {
                    SetAnim(0);
                }
            }
        }