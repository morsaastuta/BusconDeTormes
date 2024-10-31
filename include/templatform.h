#pragma once

#include "bn_sprite_items_p_wood_full_1.h"
#include "bn_sprite_items_p_wood_hurt_1.h"
#include "bn_sprite_items_p_wood_gone_1.h"

#include "bn_sprite_items_p_wood_full_3.h"
#include "bn_sprite_items_p_wood_hurt_3.h"
#include "bn_sprite_items_p_wood_gone_3.h"

#include "bn_sprite_items_p_rock_full_2.h"
#include "bn_sprite_items_p_rock_hurt_2.h"
#include "bn_sprite_items_p_rock_gone_2.h"

#include "bn_sprite_items_p_rock_full_3.h"
#include "bn_sprite_items_p_rock_hurt_3.h"
#include "bn_sprite_items_p_rock_gone_3.h"

#include "entity.h"

class Seeker;

class Templatform : public Entity {

    protected:

        // Platform data
        Seeker* seeker;
        int size;
        bool on = false;

        // Countdown
        int countdownMax;
        int countdown;
        bool counted = false;

        // Countup
        int countupMax = 300;
        int countup = 0;

        // Leveled sprites
        bn::optional<bn::sprite_item> full;
        bn::optional<bn::sprite_item> hurt;
        bn::optional<bn::sprite_item> gone;
        bn::optional<bn::sprite_item> dead;


    public:

        // So the main loop knows when to take it away
        bool departed = false;

        Templatform(int x, int y, Seeker *s, int type, int size, int count);

        void Update() override;
};