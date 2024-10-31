#pragma once

#include "bn_sprite_items_s_barrendero.h"

#include "foe.h"

class Seeker;

class Barrendero : public Foe {

    protected:
    
        int thrustCounterMax = 80;
        int thrustCounter = 80;


    public:

        Barrendero(int x, int y, Seeker *s);

        void Update() override;

        void Thrust();

        void Move();

        void Stop();

        void UpdateState() override;

        void SetState(ActionState s);
};