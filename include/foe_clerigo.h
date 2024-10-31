#pragma once

#include "bn_sprite_items_s_clerigo.h"

#include "foe.h"

class Seeker;

class Clerigo : public Foe {

    protected:

        int attackTimerMax = 200;
        int attackTimer = 200;
        int jumpTimerMax = 300;
        int jumpTimer = 300;
        bool water = false;


    public:

        Clerigo(int x, int y, Seeker *s);

        void Update() override;

        void Move();

        void Jump();

        void Approach();

        void Stop();

        void Blow();

        void Throw();

        void UpdateState() override;

        void SetState(ActionState s);
};