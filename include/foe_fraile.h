#pragma once

#include "bn_sprite_items_s_fraile.h"

#include "foe.h"

class Seeker;

class Fraile : public Foe {

    protected:
    
        int thrustCounterMax = 80;
        int thrustCounter = 80;
        int fireCounterMax = 10;
        int fireCounter = 10;


    public:

        Fraile(int x, int y, Seeker *s);

        void Update() override;

        void Thrust();

        void Move();

        void Stop();

        void UpdateState() override;

        void SetState(ActionState s);
};