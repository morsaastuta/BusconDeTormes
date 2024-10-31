#pragma once

#include "bn_sprite_items_s_jabali.h"

#include "foe.h"

class Seeker;

class Jabali : public Foe {

    protected:

        // Action variables
        int bashTimerMax = 200;
        int bashTimer = 200;


    public:

        Jabali(int x, int y, Seeker *s);

        void Update() override;

        void Move();

        void Charge();

        void Bash();

        void Stop();

        void UpdateState() override;

        void SetState(ActionState s);
};