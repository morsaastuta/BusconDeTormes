#pragma once

#include "bn_core.h"

#include "entity.h"
#include "scene.h"

        Entity::Entity(bn::sprite_item p, int x, int y, Scene *sc) : sprite(p), posX(x), posY(y) {
            if (sprite != bn::sprite_items::empty && sprite != bn::sprite_items::test) projection = p.create_sprite(x,y);

            scene = sc;

            if (projection) {
                projection->set_bg_priority(0);
                projection->set_z_order(1);
                projection->set_camera(sc->GetCamera());

                velX = 0;
                velY = 0;
                UpdatePos();
            }
        }

        void Entity::CheckColTile() {

            // Type N (ceiling)
            if (velY < 0) {
                for (int lectorX = -limitW+1; lectorX < limitE-1; lectorX++) {
                    if (lectorX < 0) {
                        if (scene->GetOffsetIndex(this, limitN, -lectorX, 0, 0) >= scene->bTiles[0] && scene->GetOffsetIndex(this, limitN, -lectorX, 0, 0) <= scene->bTiles[1]) {
                            velY = 0;
                            break;
                        }
                    } else {
                        if (scene->GetOffsetIndex(this, limitN, 0, 0, lectorX) >= scene->bTiles[0] && scene->GetOffsetIndex(this, limitN, 0, 0, lectorX) <= scene->bTiles[1]) {
                            velY = 0;
                            break;
                        }
                    }
                }
            }

            // Type W (wall to the left)
            if (velX < 0 || wBlocked) {
                for (int lectorY = -limitN+1; lectorY < limitS-1; lectorY++) {
                    if (lectorY < 0) {
                        if (scene->GetOffsetIndex(this, -lectorY, limitW, 0, 0) >= scene->bTiles[0] && scene->GetOffsetIndex(this, -lectorY, limitW, 0, 0) <= scene->bTiles[1]) {
                            wBlocked = true;
                            velX = 0;
                            break;
                        }
                    } else {
                        if (scene->GetOffsetIndex(this, 0, limitW, lectorY, 0) >= scene->bTiles[0] && scene->GetOffsetIndex(this, 0, limitW, lectorY, 0) <= scene->bTiles[1]) {
                            wBlocked = true;
                            velX = 0;
                            break;
                        }
                    }
                    wBlocked = false;
                }
            }

            // Type S (floor)
            if (!overgrounded) {
                bool gTemp = false;
                if (velY >= 0) {
                    for (int lectorX = -limitW+1; lectorX < limitE-1; lectorX++) {
                        if (lectorX < 0) {
                            if (scene->GetOffsetIndex(this, 0, -lectorX, limitS, 0) >= scene->bTiles[0] && scene->GetOffsetIndex(this, 0, -lectorX, limitS, 0) <= scene->bTiles[1]) {
                                if (!grounded) landing = true;
                                gTemp = true;
                                velY = 0;
                                onPlatform = false;
                                break;
                            } else if (scene->pTiles[0] != 0 && scene->GetOffsetIndex(this, 0, -lectorX, limitS, 0) >= scene->pTiles[0] && scene->GetOffsetIndex(this, 0, -lectorX, limitS, 0) <= scene->pTiles[1]) {
                                if (!grounded) landing = true;
                                gTemp = true;
                                velY = 0;
                                onPlatform = true;
                                break;
                            }
                        } else {
                            if (scene->GetOffsetIndex(this, 0, 0, limitS, lectorX) >= scene->bTiles[0] && scene->GetOffsetIndex(this, 0, 0, limitS, lectorX) <= scene->bTiles[1]) {
                                if (!grounded) landing = true;
                                gTemp = true;
                                velY = 0;
                                onPlatform = false;
                                break;
                            } else if (scene->pTiles[0] != 0 && scene->GetOffsetIndex(this, 0, 0, limitS, lectorX) >= scene->pTiles[0] && scene->GetOffsetIndex(this, 0, 0, limitS, lectorX) <= scene->pTiles[1]) {
                                if (!grounded) landing = true;
                                gTemp = true;
                                velY = 0;
                                onPlatform = true;
                                break;
                            }
                        }
                    }
                }
                grounded = gTemp;
            } else if (velY >= 0) {
                if (!grounded) landing = true;
                grounded = true;
                velY = 0;
                onPlatform = true;
            }

            // Type E (wall to the right)
            if (velX > 0 || eBlocked) {
                for (int lectorY = -limitN+1; lectorY < limitS-1; lectorY++) {
                    if (lectorY < 0) {
                        if (scene->GetOffsetIndex(this, -lectorY, 0, 0, limitE) >= scene->bTiles[0] && scene->GetOffsetIndex(this, -lectorY, 0, 0, limitE) <= scene->bTiles[1]) {
                            eBlocked = true;
                            velX = 0;
                            break;
                        }
                    } else {
                        if (scene->GetOffsetIndex(this, 0, 0, lectorY, limitE) >= scene->bTiles[0] && scene->GetOffsetIndex(this, 0, 0, lectorY, limitE) <= scene->bTiles[1]) {
                            eBlocked = true;
                            velX = 0;
                            break;
                        }
                    }
                    eBlocked = false;
                }
            }

            CollisionCorrection();
        }

        void Entity::CollisionCorrection() {
            int x = 0;
            int y = 0;

            // Ground collision
            if (landed) {
                landed = false;
                if (wBlocked) {
                    x = 1.6f;
                    y = -1;
                }
                if (eBlocked) {
                    x = -1.6f;
                    y = -1;
                }
            }
            if (landing) landed = true;

            // Wall collision
            if (grounded && (state == MOVE || state == FALL || state == BASH)) {
                if (wBlocked && eBlocked) y = -1;
                else if (wBlocked) x = 1.6f;
                else if (eBlocked) x = -1.6f;
            }

            UpdatePos(posX+x,posY+y);
        }

        bool Entity::EntityCollides(Entity* entity) {
            bool trueX = false;
            bool trueY = false;

            if (entity->GetPos(true)-entity->GetCol(1) <= posX+limitE && entity->GetPos(true)+entity->GetCol(3) >= posX-limitW) trueX = true;
            if (entity->GetPos(false)-entity->GetCol(0) <= posY+limitS && entity->GetPos(false)+entity->GetCol(2) >= posY-limitN) trueY = true;

            if (trueX && trueY) return true;
            else return false;
        }

        void Entity::SetSprite(bn::sprite_item spr) {
            ResetActions();
            projection->set_item(spr);
        }

        ActionState Entity::GetState() {
            return state;
        }

        void Entity::ReleaseProjection() {
            projection.reset();
        }

        void Entity::LoadProjection() {
            ReleaseProjection();
            projection = sprite.create_sprite(GetPos(true),GetPos(false));
            projection->set_bg_priority(0);
            projection->set_z_order(10);
            projection->set_camera(scene->GetCamera());
        }

        void Entity::LoadProjection(bn::sprite_item spr) {
            sprite = spr;
            LoadProjection();
        }