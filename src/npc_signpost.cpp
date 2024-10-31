#pragma once

#include "npc_signpost.h"
#include "seeker.h"

        Signpost::Signpost(int x, int y, Seeker *s, bn::string_view ml1, bn::string_view ml2, bn::string_view ml3) : NPC(bn::sprite_items::test, x, y, s) {

            type = 1;

            limitN = 0;
            limitW = 8;
            limitS = 4;
            limitE = 8;

            // LENGTH -----------------------------------------------------------------------
            // First interaction
            dialogues1.push_back(bn::string_view(ml1));
            dialogues1.push_back(bn::string_view(ml2));
            dialogues1.push_back(bn::string_view(ml3));

            // Subsequent interactions
            dialogues2 = dialogues1;
        }