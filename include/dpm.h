#pragma once

#include "seeker.h"

struct Data {
    // Position
    int scene; int posX; int posY;

    // Stats
    int hpMax; int hp; float mpMax; float mp; int love;

    // Materials
    int coin; int ingot; int leaf; int rose;

    // Level
    int swordLv; int shieldLv;

    // Items
    bool boots; bool shield; bool hook; bool picklock; bool pickaxe;

    // Equipment
    ItemSlot slotL; ItemSlot slotR;

    // Progress
    // STAGE 1 -------------------------------------
    bool madreT; // Hablado con Madre
    bool calderero1T; // Hablado con Calderero 1
    bool calderero1B; // Comprado ROSA a Calderero 1
    bool doncella1R; // Dado ROSA a Doncella 1
    bool ciegoI; // Iniciado encuentro con Ciego
    bool ciegoO; // Finalizado encuentro con Ciego
    // STAGE 2 -------------------------------------
    bool calderero2T; // Hablado con Calderero 2
    bool rosa2; // Obtenida ROSA en Zona 2
    bool doncella2T; // Hablado con Doncella 2
    bool doncella2R; // Dado ROSA a Doncella 2
    bool campana; // Tocada la campana
    bool iglesiaI; // Iniciado encuentro con Clérigo y Fraile
    bool clerigo; // Derrotado a Clérigo
    bool fraile; // Derrotado a Fraile
    bool iglesiaO; // Finalizado encuentro con Clérigo y Fraile
    // HP UPGRADES -------------------------------------------------
    bool bunch1; bool bunch2; bool bunch3;
    // WELLS ---------------------------------------
    bool wellA1; bool wellA2; bool wellA3;
    bool wellB1; bool wellB2;
};

class Seeker;

class DPM {

    protected:

        Seeker* s;
        Data data;

    public:

        DPM(Seeker* sk);

        void InitData();

        void SaveData();
        void SaveProgress();

        void LoadData();
        void LoadProgress();

        void ClearData();
};