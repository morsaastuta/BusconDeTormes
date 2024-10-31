#pragma once

#include "vector"

#include "bn_sprites.h"
#include "bn_sprite_palettes.h"

#include "bn_sprite_items_empty.h"
#include "bn_sprite_items_empty16x16.h"
#include "bn_sprite_items_empty32x16.h"
#include "bn_sprite_items_empty64x32.h"
#include "bn_sprite_items_test.h"

#include "bn_keypad.h"
#include "bn_log.h"
#include "bn_sprite_ptr.h"
#include "bn_affine_bg_ptr.h"
#include "bn_sprite_animate_actions.h"
#include "bn_math.h"

#include "bn_sound_items.h"

enum ActionState {

    // COMMON
    INIT, IDLE, MOVE, JUMP, FALL, LAND, HIT, KO,

    // SEEKER
    SLIDE,                                                                              // Mid-air
    ATTACK_1_I, ATTACK_1_O, ATTACK_2_I, ATTACK_2_O, ATTACK_3_I, ATTACK_3_O, ATTACK_O,   // Normal attack (combo)
    ATTACK_A_I, ATTACK_A_O, ATTACK_C_I, ATTACK_C_O, ATTACK_H_I, ATTACK_H_O,             // Special attacks
    CROUCH_INTRO, CROUCH_IDLE, CROUCH_OUTRO, CROUCH_MOVE,                               // Crouch
    ITEM_BOOTS, ITEM_SHIELD, ITEM_HOOK, ITEM_PICKLOCK, ITEM_PICKAXE,                    // Items

    // FOES
    DETECTED, BLOCK,                                                                    // Common
    THROW_INTRO, THROW_OUTRO, STEPBACK,                                                 // Zafio lanzador
    PUNCH_INTRO, PUNCH_OUTRO,                                                           // Zafio
    WAKE, READY, SLEEP, ASLEEP,                                                         // Perro
    CHARGE, BASH,                                                                       // Jabali
    ATTACK_INTRO, ATTACK_1, BRIDGE_1, ATTACK_2, BRIDGE_2, ATTACK_3, ATTACK_OUTRO, DRAG, // Ciego
    THRUST_INTRO, THRUST_OUTRO,                                                         // Barrendero
    SLASH,                                                                              // Cocinero
    VOMIT_INTRO, VOMIT_OUTRO,                                                           // Poseido
    BLOW_INTRO, BLOW_OUTRO,                                                             // Clerigo
    VAPE                                                                                // Agua
};

class Scene;

class Entity {

    protected:

        // Overseer
        Scene* scene;

        // Cell position
        bn::fixed posX;
        bn::fixed posY;

        // Movement variables
        float velX;
        float velY;
        bool grounded = false;
        float speed;

        // Physics
        float maxVelY = 2.25f;
        float jumpSpeed = -3.00f;
        float gravity = 0.15f;
        bool onPlatform = false;

        // Action variables
        bool landing = false;
        bool landed = false;
        bool wBlocked = false;
        bool eBlocked = false;

        // Hitbox definition
        float limitN;
        float limitW;
        float limitS;
        float limitE;

        // Graphic resources
        bn::sprite_item sprite = bn::sprite_items::empty;
        bn::optional<bn::sprite_ptr> projection;

        // Action state & animation slots
        ActionState state = INIT;
        bool focused = false;
        bn::optional<bn::sprite_animate_action<2>> action2;
        bn::optional<bn::sprite_animate_action<3>> action3;
        bn::optional<bn::sprite_animate_action<4>> action4;
        bn::optional<bn::sprite_animate_action<5>> action5;
        bn::optional<bn::sprite_animate_action<6>> action6;
        bn::optional<bn::sprite_animate_action<7>> action7;
        bn::optional<bn::sprite_animate_action<8>> action8;


    public:

        // For entities who are "grounded" but not really
        bool overgrounded = false;

        // HP is public
        int hpMax;
        int hp;

        Entity(bn::sprite_item p, int x, int y, Scene *sc);

        /*  Executed every once in the main loop
        */
        virtual void Update() {};

        /*  Gets the entity's coordinates
        *   x = X axis (as opposed to Y axis)
        */
        bn::fixed GetPos(bool x) {
            if (x) return posX;
            else return posY;
        }

        /*  Gets the entity's coordinates
        *   x = X axis (as opposed to Y axis)
        */
        bn::fixed GetVel(bool x) {
            if (x) return velX;
            else return velY;
        }

        /*  Gets the entity's hitbox limits
        */
        int GetCol(int c) {
            switch(c) {
                case 0: return limitN; break;
                case 1: return limitW; break;
                case 2: return limitS; break;
                case 3: return limitE; break;
            }
        }

        /*  Gets the entity's sprite
        */
        bn::sprite_ptr GetProjection() {
            return projection.value();
        }

        /*  Updates the entity's position (constantly)
        */
        void UpdatePos() {
            projection->set_x(posX + velX);
            projection->set_y(posY + velY);
            posX = projection->x();
            posY = projection->y();
        }

        /*  Updates the entity's position (once)
        */
        void UpdatePos(float x, float y) {
            projection->set_x(x);
            projection->set_y(y);
            posX = projection->x();
            posY = projection->y();
        }

        /*  Updates the entity's position (once)
        */
        void UpdatePos(bn::fixed x, bn::fixed y) {
            projection->set_x(x);
            projection->set_y(y);
            posX = projection->x();
            posY = projection->y();
        }

        /*  Updates the state & animation
        */
        virtual void UpdateState() {}

        /*  Clears all animation slots in order to fill them again with new data
        */
        void ResetActions() {
            action2.reset();
            action3.reset();
            action4.reset();
            action5.reset();
            action6.reset();
            action7.reset();
            action8.reset();
        }

        /*  Checks if the entity is colliding with a tile and takes action
        */
        void CheckColTile();

        void CollisionCorrection();

        ActionState GetState();

        bool EntityCollides(Entity* entity);

        void SetSprite(bn::sprite_item spr);

        void ReleaseProjection();

        void LoadProjection();

        void LoadProjection(bn::sprite_item spr);
};