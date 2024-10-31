#pragma once

#include "item.h"
#include "seeker.h"

        Item::Item(bn::sprite_item p, int x, int y, Seeker *s) : Entity(p, x, y, s->GetScene()), seeker(s) {

            velX = 0;
            velY = 0;

            limitN = 2;
            limitW = 2;
            limitS = 2;
            limitE = 2;
        }

        void Item::Update() {
            if (seeker->EntityCollides(this)) {
                departed = true;
                Grab();
            }
        }

        void Item::Grab() {}