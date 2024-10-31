#pragma once

#include "bn_sprite_items_s_zafiolanzador.h"

#include "foe.h"

class Seeker;

class ZafioLanzador : public Foe {

    protected:

        // Action variables
        int throwCounterMax = 200;
        int throwCounter = 200;


    public:

        ZafioLanzador(int x, int y, Seeker *s);

        void Update() override;

        void ThrowStone();

        void Move();

        void Stepback();

        void Stop();

        void UpdateState() override;

        void SetState(ActionState s);
};