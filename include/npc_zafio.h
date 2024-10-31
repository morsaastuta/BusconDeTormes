#pragma once

#include "bn_sprite_items_s_zafionpc.h"

#include "npc.h"

class Seeker;

class ZafioNPC : public NPC {

    public:

        ZafioNPC(int x, int y, Seeker *s);

        void SetAnim(int idx) override;

        void UpdateState() override;
};