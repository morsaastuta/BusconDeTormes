#pragma once

#include "bn_sprite_items_s_ciego.h"

#include "npc.h"

class Seeker;

class CiegoNPC : public NPC {

    public:

        CiegoNPC(int x, int y, Seeker *s);

        void EventCheck() override;

        void SetAnim(int idx) override;

        void UpdateState() override;
};