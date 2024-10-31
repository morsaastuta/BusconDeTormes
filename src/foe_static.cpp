#pragma once

#include "foe_static.h"
#include "seeker.h"


        Static::Static(int x, int y, Seeker *s, int w, int h, int dmg) : Foe(bn::sprite_items::test, x, y, s) {
            
            immortal = true;
            SetHP(1);

            damage = dmg;

            limitN = h;
            limitW = w;
            limitS = h;
            limitE = w;
        }

        void Static::Update() {
            if (CollisionCheck()) seeker->ChangeHP(-damage);
        }