#pragma once

#include "entity.h"

class Seeker;

class Warp : public Entity {

    protected:

        // Warp data
        Seeker* seeker;
        int warpIdx;
        int warpX;
        int warpY;


    public:

        Warp(int x, int y, Seeker *s, int wIdx, int wX, int wY, int tileH, int tileW);

        void Update() override;
};