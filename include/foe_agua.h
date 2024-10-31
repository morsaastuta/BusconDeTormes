#pragma once

#include "bn_sprite_items_s_clerigo.h"

#include "foe.h"

class Seeker;

class Agua : public Foe {

    protected:

        int straightCounter = 50;
        int vapeTimerMax = 150;
        int vapeTimer = 150;

    public:

        Agua(int x, int y, Seeker *s, bool r);

        void Update() override;

        void Move();

        void Vape();

        void UpdateState() override;

        void SetState(ActionState s);

};