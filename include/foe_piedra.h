#pragma once

#include "bn_sprite_items_s_piedra.h"

#include "foe.h"

class Seeker;

class Piedra : public Foe {

    protected:

        // Action variables
        int straightCounter = 50;

    public:

        Piedra(int x, int y, Seeker *s, bool r);

        void Update() override;

        void Move();

};