#pragma once

#include "npc_bell.h"
#include "seeker.h"
#include "dpm.h"
#include "boolean_storage.h"

        Bell::Bell(int x, int y, Seeker *s) : NPC(bn::sprite_items::s_bell, x, y, s) {

            type = 1;

            limitN = 0;
            limitW = 20;
            limitS = 48;
            limitE = 20;

            if (!seeker->bs->campana) {
                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("(Tocas la campana)"));
                dialogues1.push_back(bn::string_view(""));
                dialogues1.push_back(bn::string_view(""));

                // Subsequent interactions
                dialogues2.push_back(bn::string_view("(Se escucha un alboroto en el altar)"));
                dialogues2.push_back(bn::string_view(""));
                dialogues2.push_back(bn::string_view(""));

                SetAnim(0);
            } else if (!seeker->bs->iglesiaO) {
                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("(Se escucha un alboroto en el altar)"));
                dialogues1.push_back(bn::string_view(""));
                dialogues1.push_back(bn::string_view(""));

                // Subsequent interactions
                dialogues2 = dialogues1;

                SetAnim(1);
            } else {
                // LENGTH -----------------------------------------------------------------------
                // First interaction
                dialogues1.push_back(bn::string_view("(La campana oscila sin cesar)"));
                dialogues1.push_back(bn::string_view(""));
                dialogues1.push_back(bn::string_view(""));

                // Subsequent interactions
                dialogues2 = dialogues1;

                SetAnim(1);
            }
        }

        void Bell::EventCheck() {
            if (!seeker->bs->campana) bn::sound_items::churchbell.play();
            projection->set_horizontal_flip(false);
            seeker->bs->campana = true;
            SetAnim(1);
        }

        void Bell::SetAnim(int idx) {
            ResetActions();
            switch(idx) {
                case 0:
                    action2 = bn::create_sprite_animate_action_forever(projection.value(), 12, sprite.tiles_item(), 2, 2);
                    break;
                case 1:
                    action5 = bn::create_sprite_animate_action_once(projection.value(), 16, sprite.tiles_item(), 0, 1, 2, 3, 4);
                    break;
                case 2:
                    action5 = bn::create_sprite_animate_action_once(projection.value(), 16, sprite.tiles_item(), 4, 3, 2, 1, 0);
                    break;
            }
        }

        void Bell::UpdateState() {
            if (action2) {
                if (!action2->done()) {
                    action2->update();
                } else SetAnim(0);
            } else if (action5) {
                if (!action5->done()) {
                    action5->update();
                } else {
                    bn::sound_items::churchbell.play();
                    if (!leftmost) {
                        leftmost = true;
                        SetAnim(2);
                    } else {
                        leftmost = false;
                        SetAnim(1);
                    }
                }
            }
        }