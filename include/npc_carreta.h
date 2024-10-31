#pragma once

#include "bn_sprite_items_s_carreta.h"

#include "npc.h"

class Seeker;

class Carreta : public NPC {

    public:

        Carreta(int x, int y, Seeker *s);

        void SetAnim(int idx) override;

        void UpdateState() override;
};