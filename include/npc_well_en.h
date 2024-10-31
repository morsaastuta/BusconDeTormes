#pragma once

#include "npc.h"

class Seeker;

class Well_EN : public NPC {

    protected:

        int wellID;
        

    public:

        Well_EN(int x, int y, Seeker *s, int wID);

        void EventCheck() override;
};