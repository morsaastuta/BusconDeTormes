#pragma once

#include "npc_well.h"
#include "seeker.h"
#include "dpm.h"
#include "boolean_storage.h"

        Well::Well(int x, int y, Seeker *s, int wID) : NPC(bn::sprite_items::empty, x, y, s) {

            type = 1;

            wellID = wID;

            limitN = 0;
            limitW = 20;
            limitS = 4;
            limitE = 20;

            // LENGTH -----------------------------------------------------------------------
            // First interaction
            dialogues1.push_back(bn::string_view("- Has encontrado un punto de descanso -"));
            dialogues1.push_back(bn::string_view("L: Guardar"));
            dialogues1.push_back(bn::string_view("R: Recuperar"));

            // Subsequent interactions
            dialogues2 = dialogues1;
        }

        void Well::EventCheck() {
            if (bn::keypad::l_pressed()) {
                seeker->dpm->SaveData();
                EndInteraction();
            } else if (bn::keypad::r_pressed()) {
                seeker->FullRecovery();
                EndInteraction();
            }

            switch (wellID) {
                case 10: seeker->bs->wellA1 = true; break;
                case 11: seeker->bs->wellA2 = true; break;
                case 12: seeker->bs->wellA3 = true; break;
                
                case 20: seeker->bs->wellB1 = true; break;
                case 21: seeker->bs->wellB2 = true; break;
            }
        }