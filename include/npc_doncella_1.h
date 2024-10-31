#pragma once

#include "bn_sprite_items_s_doncella.h"

#include "npc.h"

class Seeker;

class Doncella1 : public NPC {

    public:

        Doncella1(int x, int y, Seeker *s);

        void EventCheck() override;

        void SetAnim(int idx) override;

        void UpdateState() override;
};