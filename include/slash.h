#pragma once

#include "entity.h"

class Seeker;
class Scene;

class Slash : public Entity {

    public:

        Slash(int x, int y, int n, int w, int s, int e, Scene *sc, Seeker *sk);
};