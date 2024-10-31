#pragma once

#include "npc_ciego_en.h"
#include "seeker.h"
#include "boolean_storage.h"

        CiegoNPC_EN::CiegoNPC_EN(int x, int y, Seeker *s) : NPC(bn::sprite_items::s_ciego, x, y, s) {

            type = 0;

            limitN = 0;
            limitW = 0;
            limitS = 0;
            limitE = 0;

            // LENGTH -----------------------------------------------------------------------
            // First interaction
            dialogues1.push_back(bn::string_view("Huh? Who goes there? I hear childish"));
            dialogues1.push_back(bn::string_view("footsteps and smell a familiar odour."));
            dialogues1.push_back(bn::string_view("yo te conozco, estás enlazado a ese"));

            dialogues1.push_back(bn::string_view("Aye, I know! I know it well because I"));
            dialogues1.push_back(bn::string_view("taught him. You are related to that"));
            dialogues1.push_back(bn::string_view("demon in some way. What the hell have"));

            dialogues1.push_back(bn::string_view("I done in this life, such that it"));
            dialogues1.push_back(bn::string_view("condemns me twice? Was my punishment"));
            dialogues1.push_back(bn::string_view("not enough? Such bitterness! I curse"));

            dialogues1.push_back(bn::string_view("and I curse again. Boy, turn back the"));
            dialogues1.push_back(bn::string_view("way you came because I sharnt tolerrate"));
            dialogues1.push_back(bn::string_view("another young man. Behold the scar that"));

            dialogues1.push_back(bn::string_view("the last one left me, that wretched"));
            dialogues1.push_back(bn::string_view("spawn of Satan. No, that era has passed"));
            dialogues1.push_back(bn::string_view("and that demon, they say, left with a"));

            dialogues1.push_back(bn::string_view("clergyman from I know not where. I"));
            dialogues1.push_back(bn::string_view("thought I heard the name of that"));
            dialogues1.push_back(bn::string_view("scoundrel in the mouths of men of God"));

            dialogues1.push_back(bn::string_view("back in Maqueda. I know it was him,"));
            dialogues1.push_back(bn::string_view("few are born in the Tormes. I've"));
            dialogues1.push_back(bn::string_view("learned my lesson, as you shall learn"));

            dialogues1.push_back(bn::string_view("yours. Begone! Get out of my sight!"));
            dialogues1.push_back(bn::string_view("Or get ready to eat dirt!"));
            dialogues1.push_back(bn::string_view(""));

            // Subsequent interactions
            dialogues2 = dialogues1;

            SetAnim(0);

            seeker->SetState(IDLE);
            projection->set_horizontal_flip(true);
        }

        void CiegoNPC_EN::EventCheck() {
            seeker->bs->ciegoI = true;
            if (dialoguing == false && bn::keypad::a_pressed()) seeker->warped = true;
        }

        void CiegoNPC_EN::SetAnim(int idx) {
            ResetActions();
            switch(idx) {
                case 0:
                    action5 = bn::create_sprite_animate_action_forever(projection.value(), 12, sprite.tiles_item(), 0, 1, 2, 3, 4);
                    break;
            }
        }

        void CiegoNPC_EN::UpdateState() {
            if (action5) {
                if (!action5->done()) {
                    action5->update();
                } else {
                    SetAnim(0);
                }
            }
        }