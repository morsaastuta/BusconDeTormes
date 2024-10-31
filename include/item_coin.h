#pragma once

#include "bn_sprite_items_ui_item_coin.h"

#include "item.h"

class Seeker;

class Coin : public Item {

    public:

        Coin(int x, int y, Seeker *s);

        void Grab() override;
};