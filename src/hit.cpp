#pragma once

#include "hit.h"
#include "seeker.h"
#include "foe.h"

        Hit::Hit(int x, int y, int n, int w, int s, int e, Foe *foe, Seeker *sk) : Entity(bn::sprite_items::empty, x, y, sk->GetScene()) {

            limitN = n;
            limitW = w;
            limitS = s;
            limitE = e;

            if (sk->EntityCollides(this)) sk->ChangeHP(-foe->damage);

            ReleaseProjection();
        }