#pragma once

#include "bn_sprite_items_s_calderero.h"

#include "npc.h"

class Seeker;

class Calderero2 : public NPC {

    public:

        Calderero2(int x, int y, Seeker *s);

        void EventCheck() override;

        void SetAnim(int idx) override;

        void UpdateState() override;
};