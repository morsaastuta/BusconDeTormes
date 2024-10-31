#pragma once

#include "slash.h"
#include "seeker.h"
#include "foe.h"
#include "scene.h"

        Slash::Slash(int x, int y, int n, int w, int s, int e, Scene *sc, Seeker *sk) : Entity(bn::sprite_items::empty, x, y, sc) {

            limitN = n;
            limitW = w;
            limitS = s;
            limitE = e;

            for (Foe *foe : sc->foes) {
                if (foe->EntityCollides(this)) foe->ChangeHP(-sk->damage);
            }

            ReleaseProjection();
        }