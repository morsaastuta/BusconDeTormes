#pragma once

#include "iostream"
#include "vector"
#include "text_generator.h"

#include "bn_sprite_items_ui_branch_left.h"
#include "bn_sprite_items_ui_branch_right.h"
#include "bn_sprite_items_ui_hp_on.h"
#include "bn_sprite_items_ui_hp_off.h"
#include "bn_sprite_items_ui_mp_0.h"
#include "bn_sprite_items_ui_mp_1.h"
#include "bn_sprite_items_ui_mp_2.h"
#include "bn_sprite_items_ui_mp_3.h"
#include "bn_sprite_items_ui_mp_4.h"
#include "bn_sprite_items_ui_mp_5.h"
#include "bn_sprite_items_ui_mp_6.h"
#include "bn_sprite_items_ui_mp_7.h"
#include "bn_sprite_items_ui_mp_8.h"
#include "bn_sprite_items_ui_coinbag.h"
#include "bn_sprite_items_ui_button_l.h"
#include "bn_sprite_items_ui_button_r.h"
#include "bn_sprite_items_ui_slot.h"
#include "bn_sprite_items_ui_textbox_left.h"
#include "bn_sprite_items_ui_textbox_center.h"
#include "bn_sprite_items_ui_textbox_right.h"
#include "bn_sprite_items_ui_signpost_left.h"
#include "bn_sprite_items_ui_signpost_center.h"
#include "bn_sprite_items_ui_signpost_right.h"

#include "bn_sprite_items_ui_item_boots.h"
#include "bn_sprite_items_ui_item_shield_bronze.h"
#include "bn_sprite_items_ui_item_shield_silver.h"
#include "bn_sprite_items_ui_item_shield_gold.h"

class Seeker;

class Interface {

    protected:

        Seeker* seeker;
    
        TextGenerator* pauseText;
        TextGenerator* coinText;
        TextGenerator* msgText1;
        TextGenerator* msgText2;
        TextGenerator* msgText3;

        // Pause text
        int pausePosX = 0;
        int pausePosY = 0;

        // Branch HUD
        bn::optional<bn::sprite_ptr> branch_l;
        bn::optional<bn::sprite_ptr> branch_r;
        int branchPosX = -86;
        int branchPosY = -62;
        bn::sprite_item lBranch = bn::sprite_items::ui_branch_left;
        bn::sprite_item rBranch = bn::sprite_items::ui_branch_right;

        // HP
        bn::optional<bn::sprite_ptr> grape_0;
        bn::optional<bn::sprite_ptr> grape_1;
        bn::optional<bn::sprite_ptr> grape_2;
        bn::optional<bn::sprite_ptr> grape_3;
        bn::optional<bn::sprite_ptr> grape_4;
        bn::optional<bn::sprite_ptr> grape_5;
        bn::optional<bn::sprite_ptr> grape_6;
        bn::optional<bn::sprite_ptr> grape_7;
        bn::optional<bn::sprite_ptr> grape_8;
        bn::optional<bn::sprite_ptr> grape_9;
        std::vector<int> grapePosX {branchPosX-4, branchPosX+5, branchPosX+15, branchPosX+25, branchPosX+34, branchPosX+43, branchPosX+52, branchPosX+61, branchPosX+70, branchPosX+79};
        std::vector<int> grapePosY {branchPosY-1, branchPosY-4, branchPosY-2, branchPosY+1, branchPosY+1, branchPosY, branchPosY-2, branchPosY-4, branchPosY-6, branchPosY-9};
        bn::sprite_item grapeOn = bn::sprite_items::ui_hp_on;
        bn::sprite_item grapeOff = bn::sprite_items::ui_hp_off;

        // MP
        bn::optional<bn::sprite_ptr> jar;
        int jarPosX = -110;
        int jarPosY = -70;
        bn::sprite_item jar_0 = bn::sprite_items::ui_mp_0;
        bn::sprite_item jar_1 = bn::sprite_items::ui_mp_1;
        bn::sprite_item jar_2 = bn::sprite_items::ui_mp_2;
        bn::sprite_item jar_3 = bn::sprite_items::ui_mp_3;
        bn::sprite_item jar_4 = bn::sprite_items::ui_mp_4;
        bn::sprite_item jar_5 = bn::sprite_items::ui_mp_5;
        bn::sprite_item jar_6 = bn::sprite_items::ui_mp_6;
        bn::sprite_item jar_7 = bn::sprite_items::ui_mp_7;
        bn::sprite_item jar_8 = bn::sprite_items::ui_mp_8;

        // Coin
        bn::optional<bn::sprite_ptr> bag;
        int bagPosX = 110;
        int bagPosY = -70;
        bn::sprite_item coinBag = bn::sprite_items::ui_coinbag;

        // L&R
        bn::optional<bn::sprite_ptr> slot_l;
        bn::optional<bn::sprite_ptr> item_l;
        bn::optional<bn::sprite_ptr> button_l;
        bn::optional<bn::sprite_ptr> slot_r;
        bn::optional<bn::sprite_ptr> item_r;
        bn::optional<bn::sprite_ptr> button_r;
        int slotX = 103;
        int slotY = 65;
        bn::sprite_item slot = bn::sprite_items::ui_slot;
        bn::sprite_item bootsItem = bn::sprite_items::ui_item_boots;
        bn::sprite_item shieldItemA = bn::sprite_items::ui_item_shield_bronze;
        bn::sprite_item shieldItemB = bn::sprite_items::ui_item_shield_silver;
        bn::sprite_item shieldItemC = bn::sprite_items::ui_item_shield_gold;
        bn::sprite_item lButton = bn::sprite_items::ui_button_l;
        bn::sprite_item rButton = bn::sprite_items::ui_button_r;

        // Textbox
        bn::optional<bn::sprite_ptr> box_left;
        bn::optional<bn::sprite_ptr> box_centerLeft;
        bn::optional<bn::sprite_ptr> box_centerRight;
        bn::optional<bn::sprite_ptr> box_right;
        int boxX = -80;
        int boxY = -30;
        bn::sprite_item lBox = bn::sprite_items::ui_textbox_left;
        bn::sprite_item cBox = bn::sprite_items::ui_textbox_center;
        bn::sprite_item rBox = bn::sprite_items::ui_textbox_right;
        bn::sprite_item lSign = bn::sprite_items::ui_signpost_left;
        bn::sprite_item cSign = bn::sprite_items::ui_signpost_center;
        bn::sprite_item rSign = bn::sprite_items::ui_signpost_right;

    public:

        bool dialoguing = false;
        bool intermission = false;

        Interface();

        void Pause(bool l);

        void Load(Seeker *s);

        void Clear();

        void Order();

        void Intermission(bn::string_view msg1, bn::string_view msg2, bn::string_view msg3, bool c, int type);

        void ReceiveMessage(bn::string_view msg, int line, int type);

        void EndTransmission();
};