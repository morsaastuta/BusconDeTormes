#pragma once

#include "bn_sprite_items_ui_item_rose.h"

#include "item.h"

class Seeker;

class Rose : public Item {

    protected:

        int region;
        

    public:

        Rose(int x, int y, Seeker *s, int r);

        void Grab() override;
};