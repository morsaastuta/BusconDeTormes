#pragma once

#include "npc.h"

class Seeker;

class Well : public NPC {

    protected:

        int wellID;
        

    public:

        Well(int x, int y, Seeker *s, int wID);

        void EventCheck() override;
};