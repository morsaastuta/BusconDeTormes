#pragma once

#include "bn_sprite_items_ui_item_boots.h"

#include "item.h"

class Seeker;

class Boots : public Item {

    public:

        Boots(int x, int y, Seeker *s);

        void Grab() override;
};