#pragma once

#include "entity.h"

class Seeker;

class Item : public Entity {

    protected:

        // Item data
        Seeker* seeker;


    public:

        // So the main loop knows when to take it away
        bool departed = false;

        Item(bn::sprite_item p, int x, int y, Seeker *s);

        void Update() override;

        virtual void Grab();
};