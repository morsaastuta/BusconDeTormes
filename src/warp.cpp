#pragma once

#include "warp.h"
#include "seeker.h"

        Warp::Warp(int x, int y, Seeker *s, int wIdx, int wX, int wY, int tileH, int tileW) : Entity(bn::sprite_items::test, x, y, s->GetScene()), seeker(s), warpIdx(wIdx), warpX(wX), warpY(wY) {
            limitN = 12+16*tileH;
            limitW = 8;
            limitS = 4;
            limitE = 8+16*tileW;
        }

        void Warp::Update() {
            // Check if the seeker collides with the warp
            if (seeker->EntityCollides(this)) seeker->Warp(warpIdx, warpX, warpY);
        }