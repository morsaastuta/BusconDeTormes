#pragma once

class BooleanStorage {

    public:

        BooleanStorage() {
            madreT = false;
            calderero1T = false;
            calderero1B = false;
            doncella1R = false;
            ciegoI = false;
            ciegoO = false;

            calderero2T = false;
            rosa2 = false;
            doncella2T = false;
            doncella2R = false;
            campana = false;
            iglesiaI = false;
            clerigo = false;
            fraile = false;
            iglesiaO = false;

            bunch1 = false; bunch2 = false; bunch3 = false;

            wellA1 = false; wellA2 = false; wellA3 = false;
            wellB1 = false; wellB2 = false;
        }

        // Progress
        // STAGE 1 -----------------------------------------------------
        bool madreT; // Hablado con Madre
        bool calderero1T; // Hablado con Calderero 1
        bool calderero1B; // Comprado ROSA a Calderero 1
        bool doncella1R; // Dado ROSA a Doncella 1
        bool ciegoI; // Iniciado encuentro con Ciego
        bool ciegoO; // Finalizado encuentro con Ciego
        // STAGE 2 -----------------------------------------------------
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
        // WELLS -------------------------------------------------------
        bool wellA1; bool wellA2; bool wellA3;
        bool wellB1; bool wellB2;
};