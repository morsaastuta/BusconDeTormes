#pragma once

#include "bn_sprite_items_s_madre.h"

#include "npc.h"

class Seeker;

class Madre_EN : public NPC {

    public:

        Madre_EN(int x, int y, Seeker *s);

        void EventCheck() override;

        void SetAnim(int idx) override;

        void UpdateState() override;
};