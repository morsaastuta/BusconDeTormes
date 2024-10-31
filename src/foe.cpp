#pragma once

#include "foe.h"
#include "seeker.h"
#include "scene.h"
#include "boolean_storage.h"

        Foe::Foe(bn::sprite_item p, int x, int y, Seeker *s) : Entity(p, x, y, s->GetScene()), seeker(s) {
            right = false;
        }

        void Foe::CommonUpdate() {

            Collide();
            
            // Mid-air specifications
            if (!grounded) {
                // Apply gravity
                if (velY < maxVelY) velY += gravity;
            }

            // Land when needed
            if (landing) {
                focused = false;
                landing = false;
            }

            // End
            UpdatePos();
            UpdateState();
            CheckColTile();
            CheckBorder();
        }

        void Foe::Collide() {
            if (CollisionCheck()) {
                if (seeker->GetPos(true) < posX) right = false;
                else right = true;

                seeker->Flip(right);
                seeker->ChangeHP(-damage);
            }
        }

        bool Foe::CollisionCheck() {
            return (seeker->EntityCollides(this) && state != HIT && state != KO && seeker->GetState() != ITEM_BOOTS && seeker->safeTimer == seeker->safeTimerMax);
        }

        void Foe::ChangeHP(int value) {
            if (!immortal) {
                if (state != HIT && state != KO) {
                    if (value < 0) {
                        // Set flip according to position of Seeker
                        if (seeker->GetPos(true) < GetPos(true)) {
                            projection->set_horizontal_flip(true);
                            right = false;
                        } else {
                            projection->set_horizontal_flip(false);
                            right = true;
                        }
                        // Set animation according to damage received
                        if (state == BLOCK) return;
                        else if (hp + value <= 0) Flinch(true);
                        else Flinch(false);
                    }

                    if (hp + value > 0) {
                        if (hp + value > hpMax) hp = hpMax;
                        else hp += value;
                    }
                }
            }
        }

        void Foe::ForceHP(int value) {
            if (hp + value <= 0) hp = 0;
            else hp += value;
        }

        int Foe::GetHP() {
            return hp;
        }

        void Foe::SetHP(int h) {
            hpMax = h;
            hp = hpMax;
        }

        bool Foe::Detect() {
            if (right) {
                if (seeker->GetPos(true) > GetPos(true)) return true;
            } else {
                if (seeker->GetPos(true) < GetPos(true)) return true;
            }
            
            return false;
        }

        void Foe::Flinch(bool d) {
            if (!d) SetStateHit();
            else SetStateKO();
            bn::sound_items::hit.play();

            if (overgrounded) overgrounded = false;
            if (grounded) velY = jumpSpeed/2;

            if (projection->horizontal_flip()) velX = speed;
            else velX = -speed;
        }

        void Foe::SetStateHit() {
            focused = false;
            ResetActions();

            state = HIT;
            focused = true;
            action2 = bn::create_sprite_animate_action_once(projection.value(), 30, sprite.tiles_item(), hitIdx, hitIdx);
        }

        void Foe::SetStateKO() {
            focused = false;
            ResetActions();

            state = KO;
            focused = true;
            switch (deathLength) {
                case 5:
                    action5 = bn::create_sprite_animate_action_once(projection.value(), 80/4, sprite.tiles_item(), deadIdx, deadIdx+1, deadIdx+2, deadIdx+3, deadIdx+3);
                    break;
                case 7:
                    action7 = bn::create_sprite_animate_action_once(projection.value(), 80/6, sprite.tiles_item(), deadIdx, deadIdx+1, deadIdx+2, deadIdx+3, deadIdx+4, deadIdx+5, deadIdx+5);
                    break;
                case 8:
                    action8 = bn::create_sprite_animate_action_once(projection.value(), 80/7, sprite.tiles_item(), deadIdx, deadIdx+1, deadIdx+2, deadIdx+3, deadIdx+4, deadIdx+5, deadIdx+6, deadIdx+6);
                    break;
            }

            seeker->ChangeCoin(coin);
        }

        void Foe::CheckBorder() {
            bool r = right;

            if (state != BASH && grounded && scene->GetOffsetIndex(this, 0, 0, limitS, 0) == 0 || scene->GetOffsetIndex(this, 0, 0, limitS, 0) >= scene->dTiles) {
                UpdatePos(posX-velX,posY);
                right = !right;
            }

            if (r == right) {
                if (wBlocked || eBlocked) right = !right;
            }

            if (!grounded) {
                if (GetPos(false) > scene->tilemap->dimensions().height()-36 || GetPos(false) < 36) {
                    if (maxVelY != 0) ChangeHP(-hpMax);
                    velY = 0;
                    maxVelY = 0;
                }
            }
        }

        void Foe::BossDeath(int sc) {
            hp = 0;
            switch(sc) {
                case 1:
                    seeker->bs->ciegoO = true;
                    seeker->warpX = seeker->GetPos(true).integer();
                    seeker->warpY = seeker->GetPos(false).integer();
                    seeker->warped = true;
                    break;
                case 2:
                    seeker->bs->clerigo = true;
                    if (seeker->bs->fraile) {
                        seeker->bs->iglesiaO = true;
                        seeker->warpX = seeker->GetPos(true).integer();
                        seeker->warpY = seeker->GetPos(false).integer();
                        seeker->warped = true;
                    }
                    break;
                case 3:
                    seeker->bs->fraile = true;
                    if (seeker->bs->clerigo) {
                        seeker->bs->iglesiaO = true;
                        seeker->warpX = seeker->GetPos(true).integer();
                        seeker->warpY = seeker->GetPos(false).integer();
                        seeker->warped = true;
                    }
                    break;
            }
        }