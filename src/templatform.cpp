#pragma once

#include "bn_core.h"

#include "templatform.h"
#include "seeker.h"

        Templatform::Templatform(int x, int y, Seeker *s, int type, int size, int count) : Entity(bn::sprite_items::empty16x16, x, y, s->GetScene()), seeker(s), countdownMax(count), countdown(count) {

            switch(size) {
                case 1: // 16x16
                    limitN = 4;
                    limitW = 4;
                    limitS = 0;
                    limitE = 4;
                    if (type == 0) {
                    } else if (type == 1) {
                        full = bn::sprite_items::p_wood_full_1;
                        hurt = bn::sprite_items::p_wood_hurt_1;
                        gone = bn::sprite_items::p_wood_gone_1;
                    }
                    dead = bn::sprite_items::empty16x16;
                case 2: // 32x16
                    limitN = 8;
                    limitW = 8;
                    limitS = -4;
                    limitE = 8;
                    if (type == 0) {
                        full = bn::sprite_items::p_rock_full_2;
                        hurt = bn::sprite_items::p_rock_hurt_2;
                        gone = bn::sprite_items::p_rock_gone_2;
                    } else if (type == 1) {
                    }
                    dead = bn::sprite_items::empty32x16;
                    break;
                case 3: // 64x32
                    limitN = 16;
                    limitW = 16;
                    limitS = -12;
                    limitE = 8;
                    if (type == 0) {
                        full = bn::sprite_items::p_rock_full_3;
                        hurt = bn::sprite_items::p_rock_hurt_3;
                        gone = bn::sprite_items::p_rock_gone_3;
                    } else if (type == 1) {
                        full = bn::sprite_items::p_wood_full_3;
                        hurt = bn::sprite_items::p_wood_hurt_3;
                        gone = bn::sprite_items::p_wood_gone_3;
                    }
                    dead = bn::sprite_items::empty64x32;
                    break;
            }
            
            LoadProjection(full.value());
            projection->set_z_order(10);
        }

        void Templatform::Update() {
            if (!departed) {
                if (!on && seeker->GetVel(false) > 0 && seeker->GetPos(false)+seeker->GetCol(2) < GetPos(false)+limitS && seeker->EntityCollides(this)) {
                    on = true;
                    seeker->overgrounded = true;
                    if (!counted) {
                        LoadProjection(hurt.value());
                        countdown = 0;
                        counted = true;
                    }
                }
                if (countdown < countdownMax) {
                    countdown++;
                    if (countdown == countdownMax-20) LoadProjection(gone.value());
                    else if (countdown == countdownMax) {
                        ReleaseProjection();
                        departed = true;
                        if (on) {
                            on = false;
                            seeker->overgrounded = false;
                        }
                    }
                }
                if (on && !seeker->EntityCollides(this)) {
                    on = false;
                    seeker->overgrounded = false;
                }
            } else {
                countup++;
                if (countup == countupMax-40) LoadProjection(gone.value());
                else if (countup == countupMax-20) LoadProjection(hurt.value());
                else if (countup == countupMax) {
                    LoadProjection(full.value());
                    departed = false;
                    counted = false;
                    countup = 0;
                }
            }
        }