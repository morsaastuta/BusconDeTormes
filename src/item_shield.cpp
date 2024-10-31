#pragma once

#include "item_shield.h"

#include "seeker.h"
#include "scene.h"
#include "interface.h"

        Shield::Shield(int x, int y, Seeker *s) : Item(bn::sprite_items::ui_item_shield_bronze, x, y, s) {
            if (seeker->shield) departed = true;
        }

        void Shield::Grab() {
            seeker->shield = true;
            seeker->slotR = SHIELD;
            seeker->UpdateStats();
            if (scene->lang) seeker->interface->Intermission("- Obtuviste el ESCUDO -", "", "Presiona R para BLOQUEAR golpes", true, 1);
            else seeker->interface->Intermission("- Obtained the SHIELD -", "", "Press R to BLOCK incoming hits", true, 1);
        }