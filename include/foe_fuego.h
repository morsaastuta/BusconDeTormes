#pragma once

#include "bn_sprite_items_s_fraile.h"

#include "foe.h"

class Seeker;

class Fuego : public Foe {

    protected:

        int extinguishTimerMax = 100;
        int extinguishTimer = 100;


    public:

        Fuego(int x, int y, Seeker *s);

        void Update() override;

        void UpdateState() override;

        void SetState(ActionState s);
};