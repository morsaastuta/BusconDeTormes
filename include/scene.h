#pragma once

#include "iostream"
#include "vector"

#include "bn_camera_actions.h"
#include "bn_regular_bg_ptr.h"
#include "bn_affine_bg_ptr.h"
#include "bn_affine_bg_map_ptr.h"
#include "bn_memory.h"

// Tilemaps
// Scene 1
#include "bn_affine_bg_items_tm_stage1_a1.h"
#include "bn_affine_bg_items_tm_stage1_a2.h"
#include "bn_affine_bg_items_tm_stage1_a5.h"
#include "bn_affine_bg_items_tm_stage1_a8.h"
#include "bn_affine_bg_items_tm_stage1_a10.h"
#include "bn_affine_bg_items_tm_stage1_b19.h"
#include "bn_affine_bg_items_tm_stage1_b21.h"
#include "bn_affine_bg_items_tm_stage1_b23.h"
#include "bn_affine_bg_items_tm_stage1_b26.h"
#include "bn_affine_bg_items_tm_stage1_c21.h"
#include "bn_affine_bg_items_tm_stage1_zb11.h"
#include "bn_affine_bg_items_tm_stage1_zb12.h"
#include "bn_affine_bg_items_tm_stage1_zb15.h"
#include "bn_affine_bg_items_tm_stage1_zb16.h"
// Scene 2
#include "bn_affine_bg_items_tm_stage2_00.h"
#include "bn_affine_bg_items_tm_stage2_01.h"
#include "bn_affine_bg_items_tm_stage2_02.h"
#include "bn_affine_bg_items_tm_stage2_03.h"
#include "bn_affine_bg_items_tm_stage2_04.h"
#include "bn_affine_bg_items_tm_stage2_05.h"
#include "bn_affine_bg_items_tm_stage2_06.h"
#include "bn_affine_bg_items_tm_stage2_07.h"
#include "bn_affine_bg_items_tm_stage2_08.h"
#include "bn_affine_bg_items_tm_stage2_09.h"
#include "bn_affine_bg_items_tm_stage2_10.h"
#include "bn_affine_bg_items_tm_stage2_11.h"
#include "bn_affine_bg_items_tm_stage2_12.h"
#include "bn_affine_bg_items_tm_stage2_13.h"
#include "bn_affine_bg_items_tm_stage2_14.h"
#include "bn_affine_bg_items_tm_stage2_15.h"
#include "bn_affine_bg_items_tm_stage2_16.h"
#include "bn_affine_bg_items_tm_stage2_17.h"
#include "bn_affine_bg_items_tm_stage2_18.h"

// Backgrounds
#include "bn_regular_bg_items_bg_title.h"
#include "bn_regular_bg_items_bg_sky.h"
#include "bn_regular_bg_items_bg_forest.h"
#include "bn_regular_bg_items_bg_church.h"

// Foregrounds
#include "bn_regular_bg_items_fg_river.h"
#include "bn_regular_bg_items_fg_grass.h"

// Audio
#include "bn_music.h"
#include "bn_music_items.h"

class Entity;
class Seeker;
class Item;
class Foe;
class NPC;
class Warp;
class Templatform;

class Scene {

    protected:

        // Scene index
        int index;

        // Starting coordinates
        bn::fixed startX;
        bn::fixed startY;

        // Camera
        bn::camera_ptr camera = bn::camera_ptr::create(0, 0);
        bn::fixed camX = bn::fixed::from_data(0);
        bn::fixed camY = bn::fixed::from_data(0);
        float fgFactor = 1;
        float bgFactor = 1;
        bool crouchSwitch = false;
        float crouchLerpMax = 10;
        float crouchLerp = 10;

        // Audio controllers
        bool newMelody = true;
        int lastBGM = 0;
        int newBGM = 0;


    public:
    
        bool lang = false;

        // Graphic resources
        bn::optional<bn::affine_bg_ptr> tilemap;
        bn::optional<bn::regular_bg_ptr> foreground;
        bn::optional<bn::regular_bg_ptr> background;

        // Audio resources
        bn::optional<bn::music_item> melody;

        // Tile types (by index)
        std::vector<int> bTiles {1, 8};
        std::vector<int> lTiles {0, 0};
        std::vector<int> pTiles {9, 12};
        int dTiles = 0;
        void SetTiles(int bQty, int lQty, int pQty);

        // Entity lists
        std::vector<Item*> items;
        std::vector<Foe*> foes;
        std::vector<NPC*> npcs;
        std::vector<Warp*> warps;
        std::vector<Templatform*> temps;
        std::vector<Entity*> casts;

        Scene();

        void Load(int i, int x, int y, Seeker *s);

        void SetScene(int m,
            bn::affine_bg_item t, int tB, int tL, int tP,
            bn::regular_bg_item f, int fX, int fY, float fP,
            bn::regular_bg_item b, int bX, int bY, float bP);

        void SetSceneTitle(int m,
            bn::regular_bg_item f, int fX, int fY, float fP);

        void SetSceneLanguage();

        void SetSceneT(int m,
            bn::affine_bg_item t, int tB, int tL, int tP);

        void SetSceneF(int m,
            bn::affine_bg_item t, int tB, int tL, int tP,
            bn::regular_bg_item b, int bX, int bY, float bP);

        void SetSceneB(int m,
            bn::affine_bg_item t, int tB, int tL, int tP,
            bn::regular_bg_item f, int fX, int fY, float fP);

        int GetIndex();

        void Update(Seeker* s);

        bn::fixed GetStartPos(bool x);

        void RegenerateEntities(Seeker *s);

        void ClearEntities();

        void AddItem(Item* i);

        void AddFoe(Foe* f);

        void AddNPC(NPC* n);

        void AddWarp(Warp* w);

        void AddTemp(Templatform* t);

        void AddCast(Entity* c);

        int GetTile(Entity *entity);

        int GetIndex(Entity *entity);

        int GetOffsetTile(Entity *entity, int n, int w, int s, int e);

        int GetOffsetIndex(Entity *entity, int n, int w, int s, int e);

        bn::camera_ptr GetCamera();

        void SetBGM(int newBGM);

        void Observe(Entity* entity);
};