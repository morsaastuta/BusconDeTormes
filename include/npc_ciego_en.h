#pragma once

#include "bn_sprite_items_s_ciego.h"

#include "npc.h"

class Seeker;

class CiegoNPC_EN : public NPC {

    public:

        CiegoNPC_EN(int x, int y, Seeker *s);

        void EventCheck() override;

        void SetAnim(int idx) override;

        void UpdateState() override;
};