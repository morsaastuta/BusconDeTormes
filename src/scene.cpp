#pragma once

#include "bn_core.h"

#include "scene.h"
#include "seeker.h"
#include "boolean_storage.h"

// Items
#include "item_grape.h"
#include "item_coin.h"
#include "item_boots.h"
#include "item_bunch.h"
#include "item_rose.h"
#include "item_shield.h"

// Foes
#include "foe_static.h"
#include "foe_zafio.h"
#include "foe_jabali.h"
#include "foe_perro.h"
#include "foe_zafiolanzador.h"
#include "foe_ciego.h"
#include "foe_barrendero.h"
#include "foe_cocinero.h"
#include "foe_clerigo.h"
#include "foe_fraile.h"

// NPCs
// Stage 1 ------------------
#include "npc_madre.h"
#include "npc_well.h"
#include "npc_signpost.h"
#include "npc_zafio.h"
#include "npc_carreta.h"
#include "npc_calderero_1.h"
#include "npc_doncella_1.h"
#include "npc_ciego.h"
#include "npc_madre_en.h"
#include "npc_well_en.h"
#include "npc_zafio_en.h"
#include "npc_calderero_1_en.h"
#include "npc_doncella_1_en.h"
#include "npc_ciego_en.h"
// Stage 2 ------------------
#include "npc_doncella_2.h"
#include "npc_bell.h"
#include "npc_calderero_2.h"
#include "npc_clerigo.h"
#include "npc_fraile.h"
#include "npc_doncella_2_en.h"
#include "npc_bell_en.h"
#include "npc_calderero_2_en.h"
#include "npc_clerigo_en.h"
// Stage 3 ------------------

// Other entities
#include "templatform.h"
#include "warp.h"

        Scene::Scene() {
            SetSceneTitle(1, bn::regular_bg_items::bg_title, 0, 0, 1);
        }

        void Scene::Load(int i, int x, int y, Seeker *s) {
            camX = 0;
            camY = 0;

            index = i;
            startX = x;
            startY = y;

            tilemap.reset();
            foreground.reset();
            background.reset();
            melody.reset();
            bn::core::update();

            switch(index) {
                // STAGE 1 -------------------------------------------------
                // Casa: A1
                case 100: SetScene(1,
                    bn::affine_bg_items::tm_stage1_a1, 8, 0, 7,
                    bn::regular_bg_items::fg_river, 0, 0, 0.04f,
                    bn::regular_bg_items::bg_sky, 0, 32, 0.02f); break;
                // A2, A3, A4
                case 101: SetScene(1,
                    bn::affine_bg_items::tm_stage1_a2, 8, 0, 8,
                    bn::regular_bg_items::fg_river, 0, 0, 0.04f,
                    bn::regular_bg_items::bg_sky, 0, 32, 0.02f); break;
                // Pozo 1: A5, A6, A7
                case 102: SetScene(1,
                    bn::affine_bg_items::tm_stage1_a5, 8, 0, 8,
                    bn::regular_bg_items::fg_river, 0, 0, 0.04f,
                    bn::regular_bg_items::bg_sky, 0, 32, 0.02f); break;
                // A8, A9, -B9, -B10
                case 103: SetScene(1,
                    bn::affine_bg_items::tm_stage1_a8, 62, 0, 12,
                    bn::regular_bg_items::fg_river, 0, 0, 0.04f,
                    bn::regular_bg_items::bg_sky, 0, 32, 0.02f); break;
                // -B11
                case 104: SetScene(1,
                    bn::affine_bg_items::tm_stage1_zb11, 16, 0, 0,
                    bn::regular_bg_items::fg_river, 0, 0, 0.04f,
                    bn::regular_bg_items::bg_sky, 0, 32, 0.02f); break;
                // Meson: -B12, -B13, -B14, -C12, -C13, -C14
                case 105: SetScene(1,
                    bn::affine_bg_items::tm_stage1_zb12, 8, 0, 19,
                    bn::regular_bg_items::fg_river, 0, 0, 0.04f,
                    bn::regular_bg_items::bg_sky, 0, 32, 0.02f); break;
                // Pozo 2: -B15
                case 106: SetScene(1,
                    bn::affine_bg_items::tm_stage1_zb15, 16, 0, 0,
                    bn::regular_bg_items::fg_river, 0, 0, 0.04f,
                    bn::regular_bg_items::bg_sky, 0, 32, 0.02f); break;
                // -B16, A16, A17, B17, B18
                case 107: SetScene(1,
                    bn::affine_bg_items::tm_stage1_zb16, 56, 0, 16+14,
                    bn::regular_bg_items::fg_river, 0, 0, 0.04f,
                    bn::regular_bg_items::bg_sky, 0, 32, 0.02f); break;
                // B19, B20, C20
                case 108: SetScene(1,
                    bn::affine_bg_items::tm_stage1_b19, 66, 0, 8+12,
                    bn::regular_bg_items::fg_river, 0, 0, 0.04f,
                    bn::regular_bg_items::bg_sky, 0, 32, 0.02f); break;
                // Pozo 3: B21, B22
                case 109: SetScene(1,
                    bn::affine_bg_items::tm_stage1_b21, 32, 0, 0,
                    bn::regular_bg_items::fg_river, 0, 0, 0.04f,
                    bn::regular_bg_items::bg_sky, 0, 32, 0.02f); break;
                // CIEGO - Puente: B23, B24, B25
                case 110:
                    if (!s->bs->ciegoO) {
                        SetScene(6,
                        bn::affine_bg_items::tm_stage1_b23, 20, 0, 0,
                        bn::regular_bg_items::fg_river, 0, 0, 0.04f,
                        bn::regular_bg_items::bg_sky, 0, 32, 0.02f);
                    } else {
                        SetScene(1,
                        bn::affine_bg_items::tm_stage1_b23, 20, 0, 0,
                        bn::regular_bg_items::fg_river, 0, 0, 0.04f,
                        bn::regular_bg_items::bg_sky, 0, 32, 0.02f);
                    }
                    break;
                // -> Zona 2: B26, B27
                case 111: SetScene(1,
                    bn::affine_bg_items::tm_stage1_b26, 24, 0, 0,
                    bn::regular_bg_items::fg_river, 0, 0, 0.04f,
                    bn::regular_bg_items::bg_sky, 0, 32, 0.02f); break;
                // Orilla: C21, D21, D22
                case 112: SetScene(1,
                    bn::affine_bg_items::tm_stage1_c21, 51, 0, 10+2,
                    bn::regular_bg_items::fg_river, 0, 0, 0.04f,
                    bn::regular_bg_items::bg_sky, 0, 32, 0.02f); break;
                // Cueva: A10
                case 113: SetScene(1,
                    bn::affine_bg_items::tm_stage1_a10, 0, 0, 0,
                    bn::regular_bg_items::fg_river, 0, 0, 0.04f,
                    bn::regular_bg_items::bg_sky, 0, 32, 0.02f); break;
                // STAGE 2 -------------------------------------------------
                // Cruce
                case 200: SetSceneB(2,
                    bn::affine_bg_items::tm_stage2_00, 52, 0, 4+0,
                    bn::regular_bg_items::bg_forest, 0, 16, 0.03f); break;
                // Sendero
                case 201: SetSceneB(2,
                    bn::affine_bg_items::tm_stage2_01, 8, 0, 4,
                    bn::regular_bg_items::bg_forest, 0, 16, 0.03f); break;
                // Fachada izquierda
                case 202: SetSceneB(2,
                    bn::affine_bg_items::tm_stage2_02, 24, 0, 8,
                    bn::regular_bg_items::bg_forest, 0, 16, 0.03f); break;
                // Ala izquierda
                case 203: SetSceneB(2,
                    bn::affine_bg_items::tm_stage2_03, 23, 0, 16+22,
                    bn::regular_bg_items::bg_church, 0, 0, 1); break;
                // Techo
                case 204: SetSceneB(2,
                    bn::affine_bg_items::tm_stage2_04, 23, 0, 12+20,
                    bn::regular_bg_items::bg_church, 0, 0, 1); break;
                // Ala derecha
                case 205: SetSceneB(2,
                    bn::affine_bg_items::tm_stage2_05, 23, 0, 16+20,
                    bn::regular_bg_items::bg_church, 0, 0, 1); break;
                // Torreón derecho 0
                case 206: SetSceneB(2,
                    bn::affine_bg_items::tm_stage2_06, 20, 0, 12+12,
                    bn::regular_bg_items::bg_church, 0, 0, 1); break;
                // Torreón derecho 1
                case 207: SetSceneB(2,
                    bn::affine_bg_items::tm_stage2_07, 8, 0, 12+14,
                    bn::regular_bg_items::bg_church, 0, 0, 1); break;
                // Torreón derecho 2
                case 208: SetSceneB(2,
                    bn::affine_bg_items::tm_stage2_08, 8, 0, 12+14,
                    bn::regular_bg_items::bg_church, 0, 0, 1); break;
                // Torreón derecho 3
                case 209: SetSceneB(2,
                    bn::affine_bg_items::tm_stage2_09, 8, 0, 8+2,
                    bn::regular_bg_items::bg_forest, 0, 96, 0.03f); break;
                // CLERIGO & FRAILE - Presbiterio
                case 210: 
                    if (s->bs->campana && !s->bs->iglesiaO) {
                        SetSceneB(6,
                        bn::affine_bg_items::tm_stage2_10, 20, 0, 8,
                        bn::regular_bg_items::bg_church, 0, 0, 1);
                    } else {
                        SetSceneB(2,
                        bn::affine_bg_items::tm_stage2_10, 20, 0, 8,
                        bn::regular_bg_items::bg_church, 0, 0, 1);
                    } break;
                // Cocina
                case 211: SetSceneB(2,
                    bn::affine_bg_items::tm_stage2_11, 23, 0, 8+12,
                    bn::regular_bg_items::bg_church, 0, 0, 1); break;
                // Fachada derecha
                case 212: SetSceneB(2,
                    bn::affine_bg_items::tm_stage2_12, 23, 0, 0,
                    bn::regular_bg_items::bg_forest, 0, 16, 0.03f); break;
                // Cementerio
                case 213: SetSceneB(2,
                    bn::affine_bg_items::tm_stage2_13, 52, 0, 4+16,
                    bn::regular_bg_items::bg_forest, 0, 16, 0.03f); break;
                // Torreón izquierdo
                case 214: SetSceneB(2,
                    bn::affine_bg_items::tm_stage2_14, 16, 0, 8+2,
                    bn::regular_bg_items::bg_forest, 0, 96, 0.03f); break;
                // Entrada principal
                case 215: SetSceneB(2,
                    bn::affine_bg_items::tm_stage2_15, 23, 0, 12+20,
                    bn::regular_bg_items::bg_church, 0, 0, 1); break;
                // Sótano 0
                case 216: SetSceneB(2,
                    bn::affine_bg_items::tm_stage2_16, 23, 0, 12+6,
                    bn::regular_bg_items::bg_church, 0, 0, 1); break;
                // Sótano 1
                case 217: SetSceneB(2,
                    bn::affine_bg_items::tm_stage2_17, 48, 0, 12+26,
                    bn::regular_bg_items::bg_church, 0, 0, 1); break;
                // Sótano 2
                case 218: SetSceneB(2,
                    bn::affine_bg_items::tm_stage2_18, 23, 0, 4,
                    bn::regular_bg_items::bg_church, 0, 0, 1); break;
            }

            if (melody) {
                if (newMelody || !bn::music::playing_item()) {
                    melody->play();
                    newMelody = false;
                }
            } else if (bn::music::playing_item()) bn::music::stop();
            
            if (tilemap) {
                tilemap->set_position(tilemap->dimensions().width()/2, tilemap->dimensions().height()/2);
                tilemap->set_priority(1);
                tilemap->set_camera(camera);
            }

            if (foreground) {
                foreground->set_x(abs(120-foreground->dimensions().width()/2));
                foreground->set_priority(2);
            }

            if (background) {
                background->set_x(abs(120-background->dimensions().width()/2));
                background->set_priority(3);
            }

            RegenerateEntities(s);
        }

        void Scene::Update(Seeker* s) {
            camera.set_x(s->GetPos(true));

            if (!s->crouched && crouchLerp < crouchLerpMax) crouchLerp += 1;
            else if (s->crouched && crouchLerp > -crouchLerpMax) crouchLerp -= 1;
            camera.set_y(s->GetPos(false)-16*(crouchLerp/crouchLerpMax));

            // Stop camera on tilemap border
            if      (camera.x() <= 120)                                 camera.set_x(120);
            else if (camera.x() >= tilemap->dimensions().width()-120)   camera.set_x(tilemap->dimensions().width()-120);
            if      (camera.y() <= 80)                                  camera.set_y(80);
            else if (camera.y() >= tilemap->dimensions().height()-80)   camera.set_y(tilemap->dimensions().height()-80);

            // Calc distance between last frame's camera and this frame's camera
            float disX = camera.x().to_float() - camX.to_float();
            float disY = camera.y().to_float() - camY.to_float();

            // Update background position according to parallax factor
            if (foreground) foreground->set_position(foreground->x() - disX * fgFactor, foreground->y() - disY * fgFactor);
            if (background) background->set_position(background->x() - disX * bgFactor, background->y() - disY * bgFactor);

            // Store this frame's camera
            camX = camera.x();
            camY = camera.y();
        }

        void Scene::RegenerateEntities(Seeker *s) {
            ClearEntities();
            NPC* boss;
            switch(index) {
                // STAGE 1 -------------------------------------------------
                // Casa: A1
                case 100:
                    // Warps
                    AddWarp(new Warp(256,460,s,101,32,432,5,0));
                    // NPCs
                    if (lang) AddNPC(new Madre(104,432,s));
                    else AddNPC(new Madre_EN(104,432,s));
                    break;
                // A2, A3, A4
                case 101:
                    // Warps
                    AddWarp(new Warp(0,460,s,100,216,432,5,0));
                    AddWarp(new Warp(768,460,s,102,32,432,10,0));
                    // Items
                    AddItem(new Grape(16*32,430,s));
                    // Foes
                    AddFoe(new Zafio(16*9,430,s));
                    AddFoe(new Zafio(16*13,430,s));
                    AddFoe(new Zafio(16*23,430,s));
                    AddFoe(new Zafio(16*27,430,s));
                    AddFoe(new Jabali(16*37,430,s));
                    break;
                // Pozo 1: A5, A6, A7
                case 102:
                    // Warps
                    AddWarp(new Warp(0,460,s,101,736,432,5,0));
                    AddWarp(new Warp(768,460,s,103,32,688,10,0));
                    // NPCs
                    if (lang) AddNPC(new Well(64,460,s,10));
                    else AddNPC(new Well_EN(64,460,s,10));
                    if (lang) AddNPC(new Signpost(16*18.5f,460,s,"Cuidado con el perro dormido.", "Agáchate para ir en silencio.", ""));
                    else AddNPC(new Signpost(16*18.5f,460,s,"Let sleeping dogs lye.", "Crouch down to sneak past them.", ""));
                    // Foes
                    AddFoe(new Perro(16*24,430,s));
                    AddFoe(new Zafio(16*35,430,s));
                    AddFoe(new Zafio(16*42,430-16*5,s));
                    break;
                // A8, A9, -B9, -B10
                case 103:
                    // Warps
                    AddWarp(new Warp(0,716,s,102,736,432,15,0));
                    AddWarp(new Warp(768,552,s,104,32,432,5,0));
                    // Items
                    AddItem(new Grape(16*22,686-16*13,s));
                    // Foes
                    AddFoe(new Zafio(16*7,686,s));
                    AddFoe(new Zafio(16*13,686,s));
                    AddFoe(new Zafio(16*19,686-16*6,s));
                    AddFoe(new Jabali(16*22,686,s));
                    AddFoe(new Zafio(16*22,686-16*13,s));
                    AddFoe(new Zafio(16*35,528,s));
                    AddFoe(new Jabali(16*40,528,s));
                    // Templatforms
                    AddTemp(new Templatform(16*25,712,s,0,3,60));
                    AddTemp(new Templatform(16*25.5f,654,s,0,2,60));
                    AddTemp(new Templatform(16*25,610,s,0,3,60));
                    AddTemp(new Templatform(16*23,634,s,0,2,60));
                    AddTemp(new Templatform(16*23,570,s,0,2,60));
                    AddTemp(new Templatform(16*25.2f,546,s,0,3,60));
                    break;
                // -B11
                case 104:
                    // Warps
                    AddWarp(new Warp(0,460,s,103,736,528,8,0));
                    AddWarp(new Warp(256,460,s,105,32,432,8,0));
                    // Foes
                    AddFoe(new Perro(16*6.5f,430,s));
                    AddFoe(new Perro(16*8.5f,430,s));
                    break;
                // Meson: -B12, -B13, -B14, -C12, -C13, -C14
                case 105:
                    // Warps
                    AddWarp(new Warp(0,460,s,104,216,432,15,0));
                    AddWarp(new Warp(768,460,s,106,32,432,15,0));
                    // NPCs
                    if (lang) AddNPC(new ZafioNPC(192,432,s));
                    else AddNPC(new ZafioNPC_EN(192,432,s));
                    // Foes
                    AddFoe(new Zafio(16*18,430-16*9,s));
                    AddFoe(new ZafioLanzador(16*21,430-16*9,s));
                    AddFoe(new ZafioLanzador(16*24,430-16*9,s));
                    AddFoe(new Zafio(16*27,430-16*9,s));
                    break;
                // Pozo 2: -B15
                case 106:
                    // Warps
                    AddWarp(new Warp(0,460,s,105,736,432,5,0));
                    AddWarp(new Warp(256,460,s,107,32,352,5,0));
                    // NPCs
                    if (lang) AddNPC(new Well(96,460,s,11));
                    else AddNPC(new Well_EN(96,460,s,11));
                    if (!s->bs->ciegoO) {
                        if (lang) AddNPC(new Calderero1(180,432,s));
                        else AddNPC(new Calderero1_EN(180,432,s));
                        AddNPC(new Carreta(180,432,s));
                    }
                    break;
                // -B16, A16, A17, B17, B18
                case 107:
                    // Warps
                    AddWarp(new Warp(0,380,s,106,216,432,5,0));
                    AddWarp(new Warp(768,716,s,108,32,528,10,0));
                    // Foes
                    AddFoe(new Jabali(16*8,352+16*4,s));
                    AddFoe(new Perro(16*7,352+16*10,s));
                    AddFoe(new Jabali(16*13,352+16*10,s));
                    AddFoe(new Perro(16*18,352+16*10,s));
                    AddFoe(new Zafio(16*19,352+16*17,s));
                    AddFoe(new Jabali(16*25,352+16*20,s));
                    AddFoe(new Perro(16*35,352+16*20,s));
                    AddFoe(new Jabali(16*40,352+16*20,s));
                    // Templatforms
                    AddTemp(new Templatform(16*4,352+16*10.75f,s,0,2,60));
                    AddTemp(new Templatform(16*2,352+16*12,s,0,2,60));
                    AddTemp(new Templatform(16*18.5f,352+16*18.5f,s,0,2,60));
                    AddTemp(new Templatform(16*21,352+16*20,s,0,2,60));
                    break;
                // B19, B20, C20
                case 108:
                    // Warps
                    AddWarp(new Warp(0,556,s,107,736,688,5,0));
                    AddWarp(new Warp(512,556,s,109,32,432,5,0));
                    AddWarp(new Warp(512,716,s,112,32,256,5,0));
                    // Foes
                    AddFoe(new Perro(16*7.5f,528,s));
                    AddFoe(new Zafio(16*20,528,s));
                    AddFoe(new Zafio(16*23,528+16*4,s));
                    AddFoe(new Static(16*18,556+16*10,s,32,4,1));
                    AddFoe(new ZafioLanzador(16*27,528+16*10,s));
                    // Templatforms
                    AddTemp(new Templatform(16*18,556+16*7,s,0,2,60));
                    AddTemp(new Templatform(16*20,556+16*9,s,0,2,60));
                    break;
                // Pozo 3: B21, B22
                case 109:
                    // Warps
                    AddWarp(new Warp(0,460,s,108,480,528,5,0));
                    AddWarp(new Warp(512,460,s,110,32,448,5,0));
                    // NPCs
                    if (lang) AddNPC(new Well(128,460,s,12));
                    else AddNPC(new Well_EN(128,460,s,12));
                    if (!s->bs->ciegoO) {
                        if (lang) AddNPC(new Doncella1(16*22,432,s));
                        else AddNPC(new Doncella1_EN(16*22,432,s));
                    }
                    break;
                // Puente: B23, B24, B25
                case 110:
                    // Warps
                    if (!s->bs->ciegoI || s->bs->ciegoO) AddWarp(new Warp(4,476,s,109,480,432,5,0));
                    if (!s->bs->ciegoI || s->bs->ciegoO) AddWarp(new Warp(764,476,s,111,32,432,5,0));
                    // Boss
                    if (!s->bs->ciegoI) {
                        if (lang) boss = new CiegoNPC(16*12.5f,448,s);
                        else boss = new CiegoNPC_EN(16*12.5f,448,s);
                        AddNPC(boss);
                        boss->Interact();
                    } else if (!s->bs->ciegoO) AddFoe(new Ciego(16*12.5f,446,s));
                    break;
                // -> Zona 2: B26, B27
                case 111:
                    // Warps
                    AddWarp(new Warp(0,460,s,110,736,448,5,0));
                    AddWarp(new Warp(512,460,s,200,32,448,5,0));
                    // Prize
                    if (s->bs->ciegoO && !s->bs->bunch1) AddItem(new Bunch(512/2,512-16*5,s,1));
                    break;
                // Orilla: C21, D21, D22
                case 112:
                    // Warps
                    AddWarp(new Warp(4,284,s,108,480,688,5,0));
                    // Items
                    AddItem(new Grape(16*12.5f,256-16*4.5f,s));
                    AddItem(new Boots(16*24.5f,256+16*10.5f,s));
                    // Foes
                    AddFoe(new Zafio(16*8,256+16*10,s));
                    AddFoe(new Jabali(16*21,256+16*10,s));
                    AddFoe(new Static(16*29,256+16*13,s,40,4,99));
                    // Templatforms
                    AddTemp(new Templatform(16*7,256+16*0.5f,s,0,2,60));
                    AddTemp(new Templatform(16*8,256-16*2.5f,s,0,2,60));
                    AddTemp(new Templatform(16*10,256-16*0.75f,s,0,2,60));
                    AddTemp(new Templatform(16*12.5f,256-16*3.5f,s,0,2,60));
                    AddTemp(new Templatform(16*12.5f,256+16*2,s,0,2,21));
                    break;
                // Cueva: A10
                // STAGE 2 -------------------------------------------------
                case 200:
                    // Warps
                    AddWarp(new Warp(0,476,s,111,480,432,7,0)); // Tormes (W)
                    AddWarp(new Warp(256,476,s,201,32,448,7,0)); // Iglesia (E)
                    AddWarp(new Warp(16*8.5f,512,s,213,16*8,512-16*21,0,0)); // Cementerio (S)
                    // Foes
                    AddFoe(new Perro(16*6,446,s));
                    AddFoe(new Zafio(16*11,446,s));
                    break;
                case 201:
                    // Warps
                    AddWarp(new Warp(0,476,s,200,216,448,7,0));
                    AddWarp(new Warp(768,476,s,202,32,448,7,0));
                    // NPCs
                    if (lang) AddNPC(new Well(16*37,476,s,20));
                    else AddNPC(new Well_EN(16*37,476,s,20));
                    // Foes
                    AddFoe(new Static(16*6.5f,476,s,8,2,1));
                    AddFoe(new Jabali(16*13,446,s));
                    AddFoe(new Perro(16*18.5f,446,s));
                    AddFoe(new Zafio(16*23.5f,446,s));
                    AddFoe(new Zafio(16*27.5f,446,s));
                    break;
                case 202:
                    // Warps
                    AddWarp(new Warp(0,476,s,201,736,448,15,0));
                    AddWarp(new Warp(256-16*3.5f,476-16*12,s,203,32,703,1,0));
                    break;
                case 203:
                    // Warps
                    AddWarp(new Warp(0,768-16*2,s,202,252-16*4.5f,448-16*12,1,0)); // Bosque (W)
                    AddWarp(new Warp(512,768-16*12,s,204,32,512-16*4,2,0)); // Techo (E)
                    AddWarp(new Warp(16,768-16*31,s,214,32,512-16*4,0,2)); // Torreón (N)
                    AddWarp(new Warp(512-16*5,768,s,215,512-16*3,512-16*10,0,2)); // Sótano (S)
                    // NPCs
                    if (!s->bs->iglesiaO) {
                        if (lang) AddNPC(new Doncella2(16*9.5f,702,s));
                        else AddNPC(new Doncella2_EN(16*9.5f,702,s));
                    }
                    // Foes
                    AddFoe(new ZafioLanzador(16*8.5f,702-16*11,s));
                    AddFoe(new ZafioLanzador(16*14.5f,702-16*24,s));
                    AddFoe(new Barrendero(16*19.5f,702-16*10,s));//
                    AddFoe(new Perro(16*26,702-16*10,s));
                    break;
                case 204:
                    // Warps
                    AddWarp(new Warp(0,512-16*2,s,203,512-16*2,768-16*14,2,0)); // Entrada (W)
                    AddWarp(new Warp(768,512-16*2,s,205,32,512-16*15,2,0)); // Salida (E)
                    // Temps
                    AddTemp(new Templatform(16*12.5f,512-16*9.5f,s,1,1,60));
                    AddTemp(new Templatform(16*15.5f,512-16*7.5f,s,1,1,60));
                    AddTemp(new Templatform(16*17.5f,512-16*5.5f,s,1,1,60));
                    AddTemp(new Templatform(16*14.5f,512-16*11.5f,s,1,1,60));
                    AddTemp(new Templatform(16*18.5f,512-16*13,s,1,1,60));
                    AddTemp(new Templatform(16*22,512-16*15,s,1,1,60));
                    AddTemp(new Templatform(16*25.5f,512-16*13.5f,s,1,1,60));
                    // Foes
                    AddFoe(new Barrendero(16*9.5f,512-16*15-2,s));
                    AddFoe(new Barrendero(16*31.5f,512-16*18-2,s));
                    AddFoe(new Barrendero(16*37.5f,512-16*16-2,s));
                    AddFoe(new Static(16*9.5f,512,s,16*7.5f,2,10));
                    AddFoe(new Static(16*24.5f,512,s,16*7.5f,2,10));
                    AddFoe(new Static(16*39.5f,512,s,16*7.5f,2,10));
                    // Items
                    AddItem(new Grape(16*21.5f,512-16*5,s));
                    break;
                case 205:
                    // Warps
                    AddWarp(new Warp(0,512-16*13,s,204,768-16*2,512-16*4,2,0)); // Techo (W)
                    AddWarp(new Warp(256,512-16*2,s,206,32,512-16*4,2,0)); // Campana (E)
                    AddWarp(new Warp(16,512,s,211,16*3,512-16*10,0,2)); // Cocina (S)
                    // Foes
                    AddFoe(new Cocinero(16*7.5f,512-16*4,s));
                    AddFoe(new Cocinero(16*10.5f,512-16*4,s));
                    // Items
                    break;
                case 206:
                    // Warps
                    AddWarp(new Warp(0,512-16*2,s,205,256-16*2,512-16*4,2,0)); // Interior (W)
                    AddWarp(new Warp(16,512-16*12,s,207,256-16*2,512-16*4,0,13)); // Campana (N)
                    // Foes
                    AddFoe(new Cocinero(16*7.5f,512-16*4,s));
                    AddFoe(new Cocinero(16*10.5f,512-16*4,s));
                    break;
                case 207:
                    // Warps
                    AddWarp(new Warp(16,512,s,206,256-16*2,512-16*10,0,13)); // Interior (S)
                    AddWarp(new Warp(16,512-16*12,s,208,16*2,512-16*4,0,13)); // Campana (N)
                    // Foes
                    AddFoe(new Barrendero(16*7.5f,512-16*4,s));
                    AddFoe(new Barrendero(16*8.5f,512-16*5,s));//
                    break;
                case 208:
                    // Warps
                    AddWarp(new Warp(16,512,s,207,16*2,512-16*10,0,13)); // Interior (S)
                    AddWarp(new Warp(16,512-16*12,s,209,256-16*2,512-16*4,0,13)); // Campana (N)
                    // Foes
                    AddFoe(new Perro(16*4,512-16*4,s));
                    AddFoe(new Perro(16*7.5f,512-16*4,s));
                    AddFoe(new Perro(16*11,512-16*4,s));
                    break;
                case 209:
                    // Warps
                    AddWarp(new Warp(16,512,s,208,256-16*2,512-16*10,0,13)); // Interior (S)
                    // NPCs
                    if (lang) AddNPC(new Bell(16*8,512-16*5,s));
                    else AddNPC(new Bell_EN(16*8,512-16*5,s));
                    break;
                case 210:
                    // Warps
                    if (!s->bs->campana || s->bs->iglesiaO) {
                        AddWarp(new Warp(0,512-16*2,s,215,512-32,512-16*4,3,0)); // Entrada (W)
                        AddWarp(new Warp(768,512-16*2,s,211,32,512-16*4,3,0)); // Cocina (E)
                    }
                    // Boss
                    if (s->bs->campana) {
                        if (!s->bs->iglesiaI) {
                            startX = 768/2;
                            startY = 512-16*4;
                            if (lang) boss = new ClerigoNPC(768/2-16*6,512-16*4,s);
                            else boss = new ClerigoNPC_EN(768/2-16*6,512-16*4,s);
                            AddNPC(boss);
                            AddNPC(new FraileNPC(768/2+16*6,512-16*4,s));
                            boss->Interact();
                        } else if (!s->bs->iglesiaO) {
                            startX = 768/2;
                            startY = 512-16*4;
                            AddFoe(new Clerigo(768/2-16*6,512-16*4-2,s));
                            AddFoe(new Fraile(768/2+16*6,512-16*4-2,s));
                        }
                    }
                    // Prize
                    if (s->bs->iglesiaO && !s->bs->bunch2) AddItem(new Bunch(16*23,512-16*7,s,2));
                    if (s->bs->doncella2R && !s->bs->bunch3) AddItem(new Bunch(16*25,512-16*7,s,3));
                    break;
                case 211:
                    // Warps
                    AddWarp(new Warp(16,512-16*12,s,205,48,512-16*4,0,2)); // Torreón (N)
                    AddWarp(new Warp(0,512-16*2,s,210,768-32,512-16*4,3,0)); // Altar (W)
                    if (s->bs->iglesiaO) AddWarp(new Warp(512,512-16*2,s,212,32+16*2,512-16*4,3,0)); // Salida (E)
                    // NPCs
                    if (lang) AddNPC(new Well(16*27,512-16*2,s,21));
                    else AddNPC(new Well_EN(16*27,512-16*2,s,21));
                    if (!s->bs->iglesiaO) {
                        if (lang) AddNPC(new Calderero2(16*13,512-16*4,s));
                        else AddNPC(new Calderero2_EN(16*13,512-16*4,s));
                        AddNPC(new Carreta(16*13,512-16*4,s));
                    }
                    break;
                case 212:
                    // Warps
                    AddWarp(new Warp(16*2,512-16*2,s,211,512-32,512-16*4,10,0)); // Cocina (W)
                    break;
                case 213:
                    // Warps
                    AddWarp(new Warp(16*8.5f,512-16*24,s,200,16*8.5f,512-16*4,0,0)); // Bosque (N)
                    // Foes
                    AddFoe(new ZafioLanzador(16*2.5f,512-16*17-2,s));
                    AddFoe(new ZafioLanzador(16*10.5f,512-16*12-2,s));
                    AddFoe(new ZafioLanzador(16*10.5f,512-16*7-2,s));
                    /*
                    AddFoe(new Jabali(16*5,512-16*4-2,s));
                    AddFoe(new Zafio(16*14.5f,512-16*4-2,s));
                    AddFoe(new Zafio(16*24.5f,512-16*4-2,s));
                    AddFoe(new Zafio(16*33.5f,512-16*4-2,s));
                    AddFoe(new Zafio(16*37.5f,512-16*4-2,s));
                    */
                    // Temps
                    AddTemp(new Templatform(16*5,512-16*16,s,0,2,60));
                    AddTemp(new Templatform(16*5,512-16*12.5,s,0,2,60));
                    AddTemp(new Templatform(16*5,512-16*5.5f,s,0,2,60));
                    // Items
                    if (!s->bs->rosa2) AddItem(new Rose(16*44.5f,512-16*3.5f,s,2));
                    break;
                case 214:
                    // Warps
                    AddWarp(new Warp(16,512,s,203,16*2,768-16*30,0,2)); // Sótano (S)
                    // Foes
                    AddFoe(new Barrendero(16*6.5f,512-16*4-2,s));//
                    AddFoe(new Barrendero(16*9.5f,512-16*4-2,s));//
                    // Items
                    AddItem(new Coin(16*11.5f,512-16*3.5f,s));
                    AddItem(new Shield(16*13.5f,512-16*4.5f,s));
                    break;
                case 215:
                    // Warps
                    AddWarp(new Warp(512,512-16*2,s,210,32,512-16*4,3,0)); // Altar (E)
                    AddWarp(new Warp(512-16*4,512-16*12,s,203,512-16*4,768-16*4,0,2)); // Entrada (N)
                    AddWarp(new Warp(512-16*14,512,s,216,80,512-16*19,0,2)); // Sótano (S)
                    // Foes
                    AddFoe(new Barrendero(16*9.5f,512-16*4-2,s));
                    AddFoe(new Cocinero(16*14.5f,512-16*4-2,s));
                    AddFoe(new Barrendero(16*22.5f,512-16*4-2,s));
                    // Items
                    AddItem(new Grape(16*3,512-16*3,s));
                    AddItem(new Coin(16*5,512-16*3,s));
                    break;
                case 216:
                    // Warps
                    AddWarp(new Warp(16*4,512-16*20,s,215,512-16*13,512-16*4,0,2)); // Entrada (N)
                    AddWarp(new Warp(512,512-16*2,s,217,32,512-16*13,8,0)); // Sótano (E)
                    // Foes
                    AddFoe(new Barrendero(16*15.5f,512-16*15-2,s));//
                    AddFoe(new Perro(16*10,512-16*4-2,s));
                    AddFoe(new Barrendero(16*16.5f,512-16*4-2,s));//
                    AddFoe(new Barrendero(16*21.5f,512-16*4-2,s));
                    AddFoe(new Barrendero(16*28.5f,512-16*4-2,s));
                    break;
                case 217:
                    // Warps
                    AddWarp(new Warp(0,512-16*11,s,216,512-16*2,512-16*4,2,0)); // Entrada (N)
                    AddWarp(new Warp(512,512-16*2,s,218,32,512-16*4,2,0)); // Sótano (E)
                    // Foes
                    AddFoe(new Barrendero(16*9.5f,512-16*4-2,s));
                    AddFoe(new Barrendero(16*23.5f,512-16*4-2,s));
                    AddFoe(new Barrendero(16*18.5f,512-16*4-2,s));//
                    AddFoe(new Barrendero(16*15.5f,512-16*9-2,s));//
                    AddFoe(new Perro(16*27,512-16*4-2,s));
                    AddFoe(new Static(16*7.5f,512-16*8,s,16*5.5f,2,1));
                    AddFoe(new Static(16*17,512-16*13,s,16*5,2,1));
                    AddFoe(new Static(16*28.5f,512-16*13,s,8,2,1));
                    // Items
                    AddItem(new Grape(16*4,512-16*3,s));
                    AddItem(new Coin(16*6,512-16*4,s));
                    break;
                case 218:
                    // Warps
                    AddWarp(new Warp(0,512-16*2,s,217,512-16*2,512-16*4,2,0)); // Entrada (N)
                    // Foes
                    AddFoe(new Barrendero(16*6.5f,512-16*4-2,s));//
                    AddFoe(new Barrendero(16*15.5f,512-16*4-2,s));
                    AddFoe(new Barrendero(16*24.5f,512-16*4-2,s));//
                    // Items
                    AddItem(new Coin(16*23.5f,512-16*3.5f,s));
                    AddItem(new Coin(16*25,512-16*3.5f,s));
                    AddItem(new Coin(16*26.5f,512-16*3.5f,s));
                    AddItem(new Coin(16*28,512-16*4.5f,s));
                    AddItem(new Coin(16*29.5f,512-16*6.5f,s));
                    break;
            }
        }

        void Scene::SetScene(int m, bn::affine_bg_item t, int tB, int tL, int tP, bn::regular_bg_item f, int fX, int fY, float fP, bn::regular_bg_item b, int bX, int bY, float bP) {
            SetBGM(m);

            tilemap = t.create_bg(0,0);
            SetTiles(tB, tL, tP);

            foreground = f.create_bg(fX,fY);
            fgFactor = fP;

            background = b.create_bg(bX,bY);
            bgFactor = bP;
        }

        void Scene::SetSceneTitle(int m, bn::regular_bg_item b, int bX, int bY, float bP) {
            SetBGM(m);

            background = b.create_bg(bX,bY);
            bgFactor = bP;

            if (melody) {
                if (newMelody || !bn::music::playing_item()) {
                    melody->play();
                    newMelody = false;
                }
            } else if (bn::music::playing_item()) bn::music::stop();

            if (background) {
                background->set_x(abs(120-background->dimensions().width()/2));
                background->set_y(abs(80-background->dimensions().height()/2));
                background->set_priority(3);
            }
        }

        void Scene::SetSceneLanguage() {
            bn::music::stop();
            
            background.reset();
        }

        void Scene::SetSceneT(int m, bn::affine_bg_item t, int tB, int tL, int tP) {
            SetBGM(m);

            tilemap = t.create_bg(0,0);
            SetTiles(tB, tL, tP);
        }

        void Scene::SetSceneF(int m, bn::affine_bg_item t, int tB, int tL, int tP, bn::regular_bg_item f, int fX, int fY, float fP) {
            SetBGM(m);

            tilemap = t.create_bg(0,0);
            SetTiles(tB, tL, tP);

            foreground = f.create_bg(fX,fY);
            fgFactor = fP;
        }

        void Scene::SetSceneB(int m, bn::affine_bg_item t, int tB, int tL, int tP, bn::regular_bg_item b, int bX, int bY, float bP) {
            SetBGM(m);

            tilemap = t.create_bg(0,0);
            SetTiles(tB, tL, tP);

            background = b.create_bg(bX,bY);
            bgFactor = bP;
        }

        void Scene::SetTiles(int bQty, int lQty, int pQty) {
            int acc = 0;

            // Block tiles
            bTiles.clear();
            if (bQty != 0) {
                bTiles.push_back(1 + acc);
                bTiles.push_back(bQty + acc);
            } else bTiles.push_back(0);
            acc += bQty;
             
            // Ladder tiles
            lTiles.clear();
            if (lQty != 0) {
                lTiles.push_back(1 + acc);
                lTiles.push_back(lQty + acc);
            } else lTiles.push_back(0);
            acc += lQty;

            // Platform tiles
            pTiles.clear();
            if (pQty != 0) {
                pTiles.push_back(1 + acc);
                pTiles.push_back(pQty + acc);
            } else pTiles.push_back(0);
            acc += pQty;

            dTiles = 1 + acc;
        }

        int Scene::GetIndex() {
            return index;
        }

        bn::fixed Scene::GetStartPos(bool x) {
            if (x) return startX;
            else return startY;
        }

        void Scene::ClearEntities() {
            for(Item* item : items) {
                item->ReleaseProjection();
                delete item;
                item = NULL;
            }
            items.clear();

            for(Foe* foe : foes) {
                foe->ReleaseProjection();
                delete foe;
                foe = NULL;
            }
            foes.clear();

            for(NPC* npc : npcs) {
                npc->ReleaseProjection();
                delete npc;
                npc = NULL;
            }
            npcs.clear();

            for(Warp* warp : warps) {
                warp->ReleaseProjection();
                delete warp;
                warp = NULL;
            }
            warps.clear();

            for(Templatform* temp : temps) {
                temp->ReleaseProjection();
                delete temp;
                temp = NULL;
            }
            temps.clear();
        }

        void Scene::AddItem(Item* i) {
            items.push_back(i);
        }

        void Scene::AddFoe(Foe* f) {
            foes.push_back(f);
        }

        void Scene::AddNPC(NPC* n) {
            npcs.push_back(n);
        }

        void Scene::AddWarp(Warp* w) {
            warps.push_back(w);
        }

        void Scene::AddTemp(Templatform* t) {
            temps.push_back(t);
        }

        void Scene::AddCast(Entity* c) {
            casts.push_back(c);
        }

        int Scene::GetTile(Entity *entity) {
            return (entity->GetPos(false)/8).unsigned_integer() * (tilemap->dimensions().width()/8) + (entity->GetPos(true)/8).unsigned_integer();
        }

        int Scene::GetIndex(Entity *entity) {
            return tilemap->map().cells_ref().value().at(GetTile(entity));
        }

        int Scene::GetOffsetTile(Entity *entity, int n, int w, int s, int e) {
            return ((entity->GetPos(false)-n+s)/8).unsigned_integer() * (tilemap->dimensions().width()/8) + ((entity->GetPos(true)-w+e)/8).unsigned_integer();
        }

        int Scene::GetOffsetIndex(Entity *entity, int n, int w, int s, int e) {
            return tilemap->map().cells_ref().value().at(GetOffsetTile(entity, n, w, s, e));
        }

        bn::camera_ptr Scene::GetCamera() {
            return camera;
        }

        void Scene::SetBGM(int newBGM) {
            if (lastBGM != newBGM) newMelody = true;
            switch (newBGM) {
                case 1: melody = bn::music_items::stage1; break;
                case 2: melody = bn::music_items::stage2; break;
                case 3: melody = bn::music_items::stage3; break;
                case 6: melody = bn::music_items::boss; break;
            }
            lastBGM = newBGM;
        }

        void Scene::Observe(Entity* entity) {
            if (abs(camX - entity->GetPos(true)) < 154 && abs(camY - entity->GetPos(false)) < 114) entity->Update();
        }

        namespace std {
            void __throw_length_error(char const*) {}
        }