#pragma once

#include "entity.h"

class Seeker;

class Foe : public Entity {

    protected:

        // Foe data
        Seeker* seeker;
        int coin = 0;

        // Action variables
        bool seekerDetected = false;
        bool limitFound = false;
        bool right = true;
        bool immortal = false;

        // Sprite
        int hitIdx = 0;
        int deadIdx = 0;
        int deathLength = 0;


    public:
    
        int damage = 0;

        Foe(bn::sprite_item p, int x, int y, Seeker *s);

        void ChangeHP(int value);
        void ForceHP(int value);

        void Collide();

        bool CollisionCheck();

        int GetHP();

        void SetHP(int h);

        bool Detect();

        void Flinch(bool d);

        void CommonUpdate();

        void SetStateHit();

        void SetStateKO();

        void CheckBorder();

        void BossDeath(int sc);
};