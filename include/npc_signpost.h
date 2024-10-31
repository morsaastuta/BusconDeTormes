#pragma once

#include "npc.h"

class Seeker;

class Signpost : public NPC {

    public:

        Signpost(int x, int y, Seeker *s, bn::string_view ml1, bn::string_view ml2, bn::string_view ml3);
};