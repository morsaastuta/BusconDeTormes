#pragma once

#include "bn_camera_actions.h"
#include "bn_affine_bg_ptr.h"
#include "bn_sprite_items_s_seeker_bronze.h"
#include "bn_sprite_items_s_seeker_silver.h"
#include "bn_sprite_items_s_seeker_golden.h"

enum ItemSlot {
    NONE, BOOTS, SHIELD, HOOK, PICKLOCK, PICKAXE
};

#include "entity.h"

class DPM;
class Scene;
class Interface;
class BooleanStorage;

class Seeker : public Entity {

    protected:

        // Player data
        float crouchSpeed = 0.5f;
        int combo = 0;
        bool usingItem = false;
        int dropTimerMax = 12;
        int dropTimer = 12;

        // Projection sprites
        bn::sprite_item current = bn::sprite_items::s_seeker_bronze;
        bn::sprite_item bronze = bn::sprite_items::s_seeker_bronze;
        bn::sprite_item silver = bn::sprite_items::s_seeker_silver;
        bn::sprite_item golden = bn::sprite_items::s_seeker_golden;


    public:

        // Data
        DPM* dpm;
        BooleanStorage* bs;

        // Invulnerability
        int safeTimerMax = 100;
        int safeTimer = 100;

        // Interface
        Interface* interface;

        // Warp
        bool warped = false;
        int warpIdx;
        int warpX;
        int warpY;

        // Public stats
        float mpMax;
        float mp;
        int damage;
        bool crouched = false;
        bool attacking = false;
        int love;

        // Inventory
        int coin;
        int ingot;
        int leaf;
        int rose;

        // Items
        ItemSlot slotL;
        ItemSlot slotR;
        int swordLv;
        int shieldLv;
        bool shield;
        bool boots;
        bool hook;
        bool picklock;
        bool pickaxe;

        Seeker(Scene *s);

        void Update() override;
        
        void Move(bool r);

        void Flinch(bool d);
        
        void Stop();

        void CastSlash();
        
        void Jump();
        
        void Crouch(bool c);
        
        void Attack();
        
        void UseItem(bool r);
        
        void ChangeCoin(int value);
        
        void ChangeHP(int value);
        
        void ChangeMP(float value);
        
        int GetHP();
        
        void Fall();

        void UpdateState() override;

        void SetState(ActionState s);

        Scene* GetScene();

        void LoadScene();
        
        void Flip(bool flipped);
        
        void Warp(int i, int x, int y);

        void UpdateStats();

        void FullRecovery();
};