#pragma once

#include "bn_sprite_items_s_zafio.h"

#include "foe.h"

class Seeker;

class Zafio : public Foe {

    protected:
    
        int punchCounterMax = 100;
        int punchCounter = 100;


    public:

        Zafio(int x, int y, Seeker *s);

        void Update() override;

        void Punch();

        void Move();

        void Stop();

        void UpdateState() override;

        void SetState(ActionState s);
};