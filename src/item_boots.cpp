#pragma once

#include "item_boots.h"

#include "seeker.h"
#include "scene.h"
#include "interface.h"

        Boots::Boots(int x, int y, Seeker *s) : Item(bn::sprite_items::ui_item_boots, x, y, s) {
            if (seeker->boots) departed = true;
        }

        void Boots::Grab() {
            seeker->boots = true;
            seeker->slotL = BOOTS;
            seeker->UpdateStats();
            if (scene->lang) seeker->interface->Intermission("- Obtuviste las BOTAS -", "", "Presiona L para ESQUIVAR enemigos", true, 1);
            else seeker->interface->Intermission("- Obtained the BOOTS -", "", "Press L to DASH through enemies", true, 1);
        }