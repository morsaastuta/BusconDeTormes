#pragma once

#include "bn_sprite_items_s_uva.h"

#include "foe.h"

class Seeker;

class Uva : public Foe {

    protected:

        // Action variables
        int straightCounter = 50;

    public:

        Uva(int x, int y, Seeker *s, bool r);

        void Update() override;

        void Move();

};