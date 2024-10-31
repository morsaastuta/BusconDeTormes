#pragma once

#include "bn_sprite_items_ui_item_shield_bronze.h"

#include "item.h"

class Seeker;

class Shield : public Item {

    public:

        Shield(int x, int y, Seeker *s);

        void Grab() override;
};