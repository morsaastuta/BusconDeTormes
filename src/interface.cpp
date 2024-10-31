#pragma once

#include "interface.h"
#include "seeker.h"
        
        Interface::Interface() {
            pauseText = new TextGenerator();

            coinText = new TextGenerator();
            msgText1 = new TextGenerator();
            msgText2 = new TextGenerator();
            msgText3 = new TextGenerator();
        }

        void Interface::Pause(bool l) {
            bn::sound_items::dialog.play();
            if (l) pauseText->GenerateTextC(pausePosX, pausePosY, "- PAUSADO -");
            else pauseText->GenerateTextC(pausePosX, pausePosY, "- PAUSED -");
        }

        void Interface::Load(Seeker *s) {

            Clear();
            seeker = s;

            int before = bn::sprite_palettes::available_colors_count();

            // Branch definition
            branch_l = lBranch.create_sprite(branchPosX,branchPosY);
            branch_r = rBranch.create_sprite(branchPosX+64,branchPosY);

            // HP definition
            if (s->hpMax >= 1) {
                if (s->hp >= 1) grape_0 = grapeOn.create_sprite(grapePosX[0],grapePosY[0]);
                else grape_0 = grapeOff.create_sprite(grapePosX[0],grapePosY[0]);
            }
            if (s->hpMax >= 2) {
                if (s->hp >= 2) grape_1 = grapeOn.create_sprite(grapePosX[1],grapePosY[1]);
                else grape_1 = grapeOff.create_sprite(grapePosX[1],grapePosY[1]);
            }
            if (s->hpMax >= 3) {
                if (s->hp >= 3) grape_2 = grapeOn.create_sprite(grapePosX[2],grapePosY[2]);
                else grape_2 = grapeOff.create_sprite(grapePosX[2],grapePosY[2]);
            }
            if (s->hpMax >= 4) {
                if (s->hp >= 4) grape_3 = grapeOn.create_sprite(grapePosX[3],grapePosY[3]);
                else grape_3 = grapeOff.create_sprite(grapePosX[3],grapePosY[3]);
            }
            if (s->hpMax >= 5) {
                if (s->hp >= 5) grape_4 = grapeOn.create_sprite(grapePosX[4],grapePosY[4]);
                else grape_4 = grapeOff.create_sprite(grapePosX[4],grapePosY[4]);
            }
            if (s->hpMax >= 6) {
                if (s->hp >= 6) grape_5 = grapeOn.create_sprite(grapePosX[5],grapePosY[5]);
                else grape_5 = grapeOff.create_sprite(grapePosX[5],grapePosY[5]);
            }
            if (s->hpMax >= 7) {
                if (s->hp >= 7) grape_6 = grapeOn.create_sprite(grapePosX[6],grapePosY[6]);
                else grape_6 = grapeOff.create_sprite(grapePosX[6],grapePosY[6]);
            }
            if (s->hpMax >= 8) {
                if (s->hp >= 8) grape_7 = grapeOn.create_sprite(grapePosX[7],grapePosY[7]);
                else grape_7 = grapeOff.create_sprite(grapePosX[7],grapePosY[7]);
            }
            if (s->hpMax >= 9) {
                if (s->hp >= 9) grape_8 = grapeOn.create_sprite(grapePosX[8],grapePosY[8]);
                else grape_8 = grapeOff.create_sprite(grapePosX[8],grapePosY[8]);
            }
            if (s->hpMax >= 10) {
                if (s->hp >= 10) grape_9 = grapeOn.create_sprite(grapePosX[9],grapePosY[9]);
                else grape_9 = grapeOff.create_sprite(grapePosX[9],grapePosY[9]);
            }

            // MP definition
            if (s->mp/s->mpMax >= 1)          jar = jar_8.create_sprite(jarPosX,jarPosY);
            else if (s->mp/s->mpMax >= 0.875f)   jar = jar_7.create_sprite(jarPosX,jarPosY);
            else if (s->mp/s->mpMax >= 0.75)      jar = jar_6.create_sprite(jarPosX,jarPosY);
            else if (s->mp/s->mpMax >= 0.625f)   jar = jar_5.create_sprite(jarPosX,jarPosY);
            else if (s->mp/s->mpMax >= 0.50)      jar = jar_4.create_sprite(jarPosX,jarPosY);
            else if (s->mp/s->mpMax >= 0.375f)   jar = jar_3.create_sprite(jarPosX,jarPosY);
            else if (s->mp/s->mpMax >= 0.25)      jar = jar_2.create_sprite(jarPosX,jarPosY);
            else if (s->mp/s->mpMax >= 0.125f)   jar = jar_1.create_sprite(jarPosX,jarPosY);
            else                                jar = jar_0.create_sprite(jarPosX,jarPosY);

            // Coin definition
            bag = coinBag.create_sprite(bagPosX,bagPosY);
            int zeros = 0;
            int tens = 10;
            while (s->coin >= tens) {
                zeros++;
                tens = tens * 10;
            }
            coinText->GenerateText(bagPosX-15-7*zeros, bagPosY+1, s->coin);

            // L&R item slots
            slot_l = slot.create_sprite(-slotX, slotY);
            slot_r = slot.create_sprite(slotX, slotY);
            switch(s->slotL) {
                case BOOTS: item_l = bootsItem.create_sprite(-slotX, slotY); break;
                case SHIELD:
                    switch(s->shieldLv) {
                        case 0: item_l = shieldItemA.create_sprite(-slotX, slotY); break;
                        case 1: item_l = shieldItemB.create_sprite(-slotX, slotY); break;
                        case 2: item_l = shieldItemC.create_sprite(-slotX, slotY); break;
                    } break;
            }
            switch(s->slotR) {
                case BOOTS: item_r = bootsItem.create_sprite(slotX, slotY); break;
                case SHIELD:
                    switch(s->shieldLv) {
                        case 0: item_r = shieldItemA.create_sprite(slotX, slotY); break;
                        case 1: item_r = shieldItemB.create_sprite(slotX, slotY); break;
                        case 2: item_r = shieldItemC.create_sprite(slotX, slotY); break;
                    } break;
            }
            button_l = lButton.create_sprite(-slotX-8, slotY-8);
            button_r = rButton.create_sprite(slotX+8, slotY-8);

            Order();
        }

        void Interface::Clear() {
            pauseText->Clear();
            branch_l.reset(); branch_r.reset();
            grape_0.reset(); grape_1.reset(); grape_2.reset(); grape_3.reset(); grape_4.reset(); grape_5.reset(); grape_6.reset(); grape_7.reset(); grape_8.reset(); grape_9.reset();
            jar.reset();
            bag.reset(); coinText->Clear();
            slot_l.reset(); slot_r.reset(); item_l.reset(); button_l.reset(); item_r.reset(); button_r.reset();
        }

        void Interface::Order() {
            if (branch_l) {
                branch_l->set_bg_priority(0); branch_l->set_z_order(-2);
                branch_r->set_bg_priority(0); branch_r->set_z_order(-2);
            }
            if (grape_0) {
                grape_0->set_bg_priority(0); grape_0->set_z_order(-3);
            }
            if (grape_1) {
                grape_1->set_bg_priority(0); grape_1->set_z_order(-3);
            }
            if (grape_2) {
                grape_2->set_bg_priority(0); grape_2->set_z_order(-3);
            }
            if (grape_3) {
                grape_3->set_bg_priority(0); grape_3->set_z_order(-3);
            }
            if (grape_4) {
                grape_4->set_bg_priority(0); grape_4->set_z_order(-3);
            }
            if (grape_5) {
                grape_5->set_bg_priority(0); grape_5->set_z_order(-3);
            }
            if (grape_6) {
                grape_6->set_bg_priority(0); grape_6->set_z_order(-3);
            }
            if (grape_7) {
                grape_7->set_bg_priority(0); grape_7->set_z_order(-3);
            }
            if (grape_8) {
                grape_8->set_bg_priority(0); grape_8->set_z_order(-3);
            }
            if (grape_9) {
                grape_9->set_bg_priority(0); grape_9->set_z_order(-3);
            }
            if (jar) {
                jar->set_bg_priority(0); jar->set_z_order(-3);
            }
            if (bag) {
                bag->set_bg_priority(0); bag->set_z_order(-2);
            }
            if (slot_l) {
                slot_l->set_bg_priority(0); slot_l->set_z_order(-2);
                button_l->set_bg_priority(0); button_l->set_z_order(-4);
            }
            if (item_l) {
                item_l->set_bg_priority(0); item_l->set_z_order(-3);
            }
            if (slot_r) {
                slot_r->set_bg_priority(0); slot_r->set_z_order(-2);
                button_r->set_bg_priority(0); button_r->set_z_order(-4);
            }
            if (item_r) {
                item_r->set_bg_priority(0); item_r->set_z_order(-3);
            }
            if (box_left) {
                box_left->set_bg_priority(0); box_left->set_z_order(-4);
                box_centerLeft->set_bg_priority(0); box_centerLeft->set_z_order(-4);
                box_centerRight->set_bg_priority(0); box_centerRight->set_z_order(-4);
                box_right->set_bg_priority(0); box_right->set_z_order(-4);
            }
        }

        void Interface::Intermission(bn::string_view msg1, bn::string_view msg2, bn::string_view msg3, bool c, int type) {
            if (!dialoguing) bn::sound_items::dialog.play();

            // L&R item slots
            slot_l.reset(); slot_r.reset(); item_l.reset(); button_l.reset(); item_r.reset(); button_r.reset();

            dialoguing = true;
            intermission = true;

            switch(type) {
                case 0:
                    box_left = lBox.create_sprite(boxX, boxY);
                    box_centerLeft = cBox.create_sprite(boxX/3, boxY);
                    box_centerRight = cBox.create_sprite(-boxX/3, boxY);
                    box_right = rBox.create_sprite(-boxX, boxY);
                    break;
                case 1:
                    box_left = lSign.create_sprite(boxX, boxY);
                    box_centerLeft = cSign.create_sprite(boxX/3, boxY);
                    box_centerRight = cSign.create_sprite(-boxX/3, boxY);
                    box_right = rSign.create_sprite(-boxX, boxY);
                    break;
            }
            Order();

            // Depending on the quantity of the currently shown lines, choose a line to write to
            if (!c) {
                msgText1->GenerateText(boxX-24, boxY-20, msg1);
                msgText2->GenerateText(boxX-24, boxY-8, msg2);
                msgText3->GenerateText(boxX-24, boxY+4, msg3);
            } else {
                msgText1->GenerateTextC(0, boxY-20, msg1);
                msgText2->GenerateTextC(0, boxY-8, msg2);
                msgText3->GenerateTextC(0, boxY+4, msg3);
            }
        }

        void Interface::ReceiveMessage(bn::string_view msg, int lines, int type) {
            if (!dialoguing) bn::sound_items::dialog.play();

            // L&R item slots
            slot_l.reset(); slot_r.reset(); item_l.reset(); button_l.reset(); item_r.reset(); button_r.reset();

            dialoguing = true;

            // Create a textbox if it's the first line
            if (lines == 0) {
                switch(type) {
                    case 0:
                        box_left = lBox.create_sprite(boxX, boxY);
                        box_centerLeft = cBox.create_sprite(boxX/3, boxY);
                        box_centerRight = cBox.create_sprite(-boxX/3, boxY);
                        box_right = rBox.create_sprite(-boxX, boxY);
                        break;
                    case 1:
                        box_left = lSign.create_sprite(boxX, boxY);
                        box_centerLeft = cSign.create_sprite(boxX/3, boxY);
                        box_centerRight = cSign.create_sprite(-boxX/3, boxY);
                        box_right = rSign.create_sprite(-boxX, boxY);
                        break;
                }
                Order();
            }

            // Depending on the quantity of the currently shown lines, choose a line to write to
            switch(lines) {
                case 0: msgText1->GenerateText(boxX-24, boxY-20, msg); break;
                case 1: msgText2->GenerateText(boxX-24, boxY-8, msg); break;
                case 2: msgText3->GenerateText(boxX-24, boxY+4, msg); break;
            }
        }

        void Interface::EndTransmission() {
            bn::sound_items::dialog.play();
            dialoguing = false;
            intermission = false;
            
            // Delete textbox and messages
            box_left.reset(); box_centerLeft.reset(); box_centerRight.reset(); box_right.reset();
            msgText1->Clear(); msgText2->Clear(); msgText3->Clear();

            // L&R item slots
            slot_l = slot.create_sprite(-slotX, slotY);
            slot_r = slot.create_sprite(slotX, slotY);
            switch(seeker->slotL) {
                case BOOTS: item_l = bootsItem.create_sprite(-slotX, slotY); break;
                case SHIELD:
                    switch(seeker->shieldLv) {
                        case 0: item_l = shieldItemA.create_sprite(-slotX, slotY); break;
                        case 1: item_l = shieldItemB.create_sprite(-slotX, slotY); break;
                        case 2: item_l = shieldItemC.create_sprite(-slotX, slotY); break;
                    } break;
            }
            switch(seeker->slotR) {
                case BOOTS: item_r = bootsItem.create_sprite(slotX, slotY); break;
                case SHIELD:
                    switch(seeker->shieldLv) {
                        case 0: item_r = shieldItemA.create_sprite(slotX, slotY); break;
                        case 1: item_r = shieldItemB.create_sprite(slotX, slotY); break;
                        case 2: item_r = shieldItemC.create_sprite(slotX, slotY); break;
                    } break;
            }
            button_l = lButton.create_sprite(-slotX-8, slotY-8);
            button_r = rButton.create_sprite(slotX+8, slotY-8);

            Order();
        }