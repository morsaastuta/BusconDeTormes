#pragma once

#include "foe.h"

class Seeker;

class Static : public Foe {

    public:

        Static(int x, int y, Seeker *s, int w, int h, int dmg);

        void Update() override;
};