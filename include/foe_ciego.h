#pragma once

#include "bn_sprite_items_s_ciego.h"

#include "foe.h"

class Seeker;

class Ciego : public Foe {

    protected:

        int detX;
        int patienceMax = 300;
        int patience = 300;
        bool detected = false;


    public:

        Ciego(int x, int y, Seeker *s);

        void Update() override;

        void Move();

        void Drag();

        void Stop();

        void Attack();

        void Throw();

        void UpdateState() override;

        void SetState(ActionState s);
};