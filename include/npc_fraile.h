#pragma once

#include "bn_sprite_items_s_fraile.h"

#include "npc.h"

class Seeker;

class FraileNPC : public NPC {

    public:

        FraileNPC(int x, int y, Seeker *s);

        void SetAnim(int idx) override;

        void UpdateState() override;
};