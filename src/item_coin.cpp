#pragma once

#include "item_coin.h"

#include "seeker.h"

        Coin::Coin(int x, int y, Seeker *s) : Item(bn::sprite_items::ui_item_coin, x, y, s) {}

        void Coin::Grab() {
            seeker->ChangeCoin(10);
        }