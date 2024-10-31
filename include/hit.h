#pragma once

#include "entity.h"

class Seeker;
class Foe;

class Hit : public Entity {

    public:

        Hit(int x, int y, int n, int w, int s, int e, Foe *foe, Seeker *sk);
};