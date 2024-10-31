#pragma once

#include "bn_sprite_items_ui_item_bunch.h"

#include "item.h"

class Seeker;

class Bunch : public Item {

    protected:

        int region;
        

    public:

        Bunch(int x, int y, Seeker *s, int r);

        void Grab() override;
};