#pragma once

#include "bn_sprite_items_s_clerigo.h"

#include "npc.h"

class Seeker;

class ClerigoNPC_EN : public NPC {

    public:

        ClerigoNPC_EN(int x, int y, Seeker *s);

        void EventCheck() override;

        void SetAnim(int idx) override;

        void UpdateState() override;
};