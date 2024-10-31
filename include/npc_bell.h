#pragma once

#include "npc.h"

#include "bn_sprite_items_s_bell.h"

class Seeker;

class Bell : public NPC {

    protected:

        bool leftmost = false;
        

    public:

        Bell(int x, int y, Seeker *s);

        void EventCheck();

        void SetAnim(int idx);

        void UpdateState();
};