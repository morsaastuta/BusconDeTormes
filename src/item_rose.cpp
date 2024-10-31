#pragma once

#include "item_rose.h"

#include "seeker.h"
#include "boolean_storage.h"

        Rose::Rose(int x, int y, Seeker *s, int r) : Item(bn::sprite_items::ui_item_rose, x, y, s), region(r) {}

        void Rose::Grab() {
            seeker->rose++;
            switch(region) {
                case 2: seeker->bs->rosa2 = true; break;
            }
        }