#pragma once

#include "foe_uva.h"
#include "seeker.h"

        Uva::Uva(int x, int y, Seeker *s, bool r) : Foe(bn::sprite_items::s_uva, x, y, s) {
            
            immortal = true;
            SetHP(1);
            damage = 1;

            velX = 1;
            velY = 0;
            speed = 2;

            right = r;

            limitN = 4;
            limitW = 4;
            limitS = 4;
            limitE = 4;

            projection->set_z_order(-1);
        }

        void Uva::Update() {
            if (CollisionCheck()) {
                if (velX > 0) seeker->Flip(true);
                else seeker->Flip(false);
                seeker->ChangeHP(-damage);
                hp = 0;
            } else Move();
            
            // Apply gravity after the straight counter ends
            straightCounter--;
            if (straightCounter <= 0) {
                if (velY < maxVelY) velY += gravity;
            }

            // Destroy upon landing or hitting a wall
            if (landing || wBlocked || eBlocked) hp = 0;

            // End
            UpdatePos();
            UpdateState();
            CheckColTile();
        }

        void Uva::Move() {
            projection->set_horizontal_flip(!right);
            if (right) velX = speed;
            else velX = -speed;
        }