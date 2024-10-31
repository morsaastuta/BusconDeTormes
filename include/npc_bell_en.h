#pragma once

#include "npc.h"

#include "bn_sprite_items_s_bell.h"

class Seeker;

class Bell_EN : public NPC {

    protected:

        bool leftmost = false;
        

    public:

        Bell_EN(int x, int y, Seeker *s);

        void EventCheck();

        void SetAnim(int idx);

        void UpdateState();
};