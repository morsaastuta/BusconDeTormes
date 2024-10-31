#pragma once

#include "bn_sprite_items_s_cocinero.h"

#include "foe.h"

class Seeker;

class Cocinero : public Foe {

    protected:

        int flinchTimerMax = 250;
        int flinchTimer = 250;


    public:

        Cocinero(int x, int y, Seeker *s);

        void Update() override;

        void Move();

        void Slash();

        void Stop();

        void UpdateState() override;

        void SetState(ActionState s);
};