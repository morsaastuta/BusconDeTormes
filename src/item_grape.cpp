#pragma once

#include "item_grape.h"

#include "seeker.h"

        Grape::Grape(int x, int y, Seeker *s) : Item(bn::sprite_items::ui_item_hp, x, y, s) {}

        void Grape::Grab() {
            seeker->ChangeHP(1);
        }