#pragma once

#include "bn_sprite_items_s_perro.h"

#include "foe.h"

class Seeker;

class Perro : public Foe {

    protected:

        int ogX;
        int radius = 30;


    public:

        Perro(int x, int y, Seeker *s);

        void Update() override;

        void Move();

        void Jump();

        void Stop();

        void WakeUp();

        void Sleep();

        void UpdateState() override;

        void SetState(ActionState s);
};