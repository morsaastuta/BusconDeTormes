#pragma once

#include "bn_sprite_items_s_madre.h"

#include "npc.h"

class Seeker;

class Madre : public NPC {

    public:

        Madre(int x, int y, Seeker *s);

        void EventCheck() override;

        void SetAnim(int idx) override;

        void UpdateState() override;
};