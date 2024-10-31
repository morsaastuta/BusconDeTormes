#pragma once

#include "bn_sram.h"

#include "dpm.h"
#include "boolean_storage.h"

        DPM::DPM(Seeker *sk) : s(sk) {}

        void DPM::InitData() {

            // Player data
            data.scene = 100; data.posX = 64; data.posY = 430;
            data.hpMax = 3; data.hp = 3; data.mpMax = 3; data.mp = 0;
            data.coin = 0; data.ingot = 0; data.leaf = 0; data.rose = 0;

            // Equipment data
            data.swordLv = 0; data.shieldLv = 0;
            data.shield = false; data.boots = false; data.hook = false; data.picklock = false; data.pickaxe = false;
            data.slotL = NONE; data.slotR = NONE;

            // Boolean storage
            SaveProgress();

            bn::sram::write(data);
        }

        void DPM::SaveData() {

            // Player data
            data.scene = s->warpIdx; data.posX = s->GetPos(true).integer(); data.posY = s->GetPos(false).integer();
            data.hpMax = s->hpMax; data.hp = s->hp; data.mpMax = s->mpMax; data.mp = s->mp;
            data.coin = s->coin; data.ingot = s->ingot; data.leaf = s->leaf; data.rose = s->rose;

            // Equipment data
            data.swordLv = s->swordLv; data.shieldLv = s->shieldLv;
            data.shield = s->shield; data.boots = s->boots; data.hook = s->hook; data.picklock = s->picklock; data.pickaxe = s->pickaxe;
            data.slotL = s->slotL; data.slotR = s->slotR;

            // Boolean storage
            SaveProgress();

            bn::sram::write(data);
        }

        void DPM::LoadData() {

            bn::sram::read(data);

            if (data.hpMax == -1) {
                InitData();
                bn::sram::read(data);
            }

            // Player data
            s->hpMax = data.hpMax; s->hp = data.hp; s->mpMax = data.mpMax; s->mp = data.mp;
            s->coin = data.coin; s->ingot = data.ingot; s->leaf = data.leaf; s->rose = data.rose;

            // Equipment data
            s->swordLv = data.swordLv; s->shieldLv = data.shieldLv;
            s->shield = data.shield; s->boots = data.boots; s->hook = data.hook; s->picklock = data.picklock; s->pickaxe = data.pickaxe;
            s->slotL = data.slotL; s->slotR = data.slotR;

            // Boolean storage
            LoadProgress();

            s->Warp(data.scene, data.posX, data.posY);
            s->LoadScene();
        }

        void DPM::SaveProgress() {
            // Scene 1 data
            data.madreT = s->bs->madreT;
            data.calderero1T = s->bs->calderero1T; data.calderero1B = s->bs->calderero1B;
            data.doncella1R = s->bs->doncella1R;
            data.ciegoI = s->bs->ciegoI; data.ciegoO = s->bs->ciegoO;

            // Scene 2 data
            data.calderero2T = s->bs->calderero2T;
            data.rosa2 = s->bs->rosa2;
            data.doncella2T = s->bs->doncella2T; data.doncella2R = s->bs->doncella2R;
            data.campana = s->bs->campana;
            data.clerigo = s->bs->clerigo; data.fraile = s->bs->fraile;
            data.iglesiaI = s->bs->iglesiaI; data.iglesiaO = s->bs->iglesiaO;

            // Bunch data
            data.bunch1 = s->bs->bunch1; data.bunch2 = s->bs->bunch2; data.bunch3 = s->bs->bunch3;

            // Well data
            data.wellA1 = s->bs->wellA1; data.wellA2 = s->bs->wellA2; data.wellA3 = s->bs->wellA3;
            data.wellB1 = s->bs->wellB1; data.wellB2 = s->bs->wellB2;
        }

        void DPM::LoadProgress() {
            // Scene 1 data
            s->bs->madreT = data.madreT;
            s->bs->calderero1T = data.calderero1T; s->bs->calderero1B = data.calderero1B;
            s->bs->doncella1R = data.doncella1R;
            s->bs->ciegoI = data.ciegoI; s->bs->ciegoO = data.ciegoO;

            // Scene 2 data
            s->bs->calderero2T = data.calderero2T;
            s->bs->rosa2 = data.rosa2;
            s->bs->doncella2T = data.doncella2T; s->bs->doncella2R = data.doncella2R;
            s->bs->campana = data.campana;
            s->bs->clerigo = data.clerigo; s->bs->fraile = data.fraile;
            s->bs->iglesiaI = data.iglesiaI; s->bs->iglesiaO = data.iglesiaO;

            // Bunch data
            s->bs->bunch1 = data.bunch1; s->bs->bunch2 = data.bunch2; s->bs->bunch3 = data.bunch3;

            // Well data
            s->bs->wellA1 = data.wellA1; s->bs->wellA2 = data.wellA2; s->bs->wellA3 = data.wellA3;
            s->bs->wellB1 = data.wellB1; s->bs->wellB2 = data.wellB2;
        }

        void DPM::ClearData() {
            bn::sram::clear(bn::sram::size());
        }