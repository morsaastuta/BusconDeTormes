#pragma once

#include "bn_sprite_items_ui_item_hp.h"

#include "item.h"

class Seeker;

class Grape : public Item {

    public:

        Grape(int x, int y, Seeker *s);

        void Grab() override;
};