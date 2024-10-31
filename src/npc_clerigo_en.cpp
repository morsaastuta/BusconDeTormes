#pragma once

#include "npc_clerigo_en.h"
#include "seeker.h"
#include "boolean_storage.h"

        ClerigoNPC_EN::ClerigoNPC_EN(int x, int y, Seeker *s) : NPC(bn::sprite_items::s_clerigo, x, y, s) {

            type = 0;

            limitN = 0;
            limitW = 0;
            limitS = 0;
            limitE = 0;

            // LENGTH -----------------------------------------------------------------------
            // First interaction
            dialogues1.push_back(bn::string_view("FRIAR: Was it you who rang the bell?"));
            dialogues1.push_back(bn::string_view(""));
            dialogues1.push_back(bn::string_view(""));

            dialogues1.push_back(bn::string_view("CLERIC: Why are you calling?"));
            dialogues1.push_back(bn::string_view(""));
            dialogues1.push_back(bn::string_view(""));

            dialogues1.push_back(bn::string_view("SEEKER: Your Graces, I find myself in"));
            dialogues1.push_back(bn::string_view("search of my brother and seek your"));
            dialogues1.push_back(bn::string_view("assistance, for the path that has led"));

            dialogues1.push_back(bn::string_view("me here was long and harsh."));
            dialogues1.push_back(bn::string_view(""));
            dialogues1.push_back(bn::string_view(""));

            dialogues1.push_back(bn::string_view("FRIAR: Ah! Are you perhaps"));
            dialogues1.push_back(bn::string_view("investigating the whereabouts of"));
            dialogues1.push_back(bn::string_view("Lázaro? He was a bold one, yes... but"));

            dialogues1.push_back(bn::string_view("not a bad lad. I recall our moments in"));
            dialogues1.push_back(bn::string_view("the chamber with pleasure..."));
            dialogues1.push_back(bn::string_view(""));

            dialogues1.push_back(bn::string_view("CLERIC: I hold no fond memories of"));
            dialogues1.push_back(bn::string_view("Lázaro. I cared for him like a father,"));
            dialogues1.push_back(bn::string_view("and this is how he repaid me."));

            dialogues1.push_back(bn::string_view("FRIAR: Word has reached my ears that"));
            dialogues1.push_back(bn::string_view("he left with a squire who hasn't a penny"));
            dialogues1.push_back(bn::string_view("to his name... They scrape by in Toledo."));

            dialogues1.push_back(bn::string_view("CLERIC: Someone must pay for his sins..."));
            dialogues1.push_back(bn::string_view("Someone must pay for defiling the house"));
            dialogues1.push_back(bn::string_view("of God..."));

            // Subsequent interactions
            dialogues2 = dialogues1;

            SetAnim(0);

            seeker->SetState(IDLE);
            projection->set_horizontal_flip(false);
        }

        void ClerigoNPC_EN::EventCheck() {
            seeker->bs->iglesiaI = true;
            if (dialoguing == false && bn::keypad::a_pressed()) seeker->warped = true;
        }

        void ClerigoNPC_EN::SetAnim(int idx) {
            ResetActions();
            switch(idx) {
                case 0:
                    action6 = bn::create_sprite_animate_action_forever(projection.value(), 12, sprite.tiles_item(), 0, 1, 2, 3, 4, 5);
                    break;
            }
        }

        void ClerigoNPC_EN::UpdateState() {
            if (action6) {
                if (!action6->done()) {
                    action6->update();
                } else {
                    SetAnim(0);
                }
            }
        }