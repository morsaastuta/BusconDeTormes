#pragma once

#include "item_bunch.h"

#include "seeker.h"
#include "boolean_storage.h"
#include "scene.h"
#include "interface.h"

        Bunch::Bunch(int x, int y, Seeker *s, int r) : Item(bn::sprite_items::ui_item_bunch, x, y, s), region(r) {}

        void Bunch::Grab() {
            seeker->hpMax++;
            seeker->FullRecovery();
            switch(region) {
                case 1: seeker->bs->bunch1 = true; break;
                case 2: seeker->bs->bunch2 = true; break;
                case 3: seeker->bs->bunch3 = true; break;
            }
            if (scene->lang) seeker->interface->Intermission("", "- Tu vitalidad aumenta en 1 punto -", "", true, 1);
            else seeker->interface->Intermission("", "- Your vitality increases by 1 point -", "", true, 1);
        }