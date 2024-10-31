#pragma once

#include "npc.h"
#include "seeker.h"
#include "interface.h"

        NPC::NPC(bn::sprite_item p, int x, int y, Seeker *s) : Entity(p, x, y, s->GetScene()), seeker(s) {

            velX = 0;
            velY = 0;
        }

        void NPC::Update() {
            if (!deco) {
                // NPC specifics
                if (seeker->interface->dialoguing && dialoguing) {
                    if (bn::keypad::a_pressed() && !prompt) Interact();
                    EventCheck();
                } else if (!seeker->interface->dialoguing && !seeker->attacking && bn::keypad::up_pressed() && seeker->EntityCollides(this)) {
                    if (shownLines == 0) {
                        seeker->SetState(IDLE);
                        if (projection) LookAt();
                    }
                    Interact();
                }
            }

            if (projection) {
                UpdatePos();
                UpdateState();
            }
        }

        void NPC::Interact() {
            prompt = false;
            dialoguing = true;

            // If there are max lines showing, clear textbox
            if (shownLines >= maxLines) {
                seeker->interface->EndTransmission();
                shownLines = 0;
            }

            // If the current index is LOWER than the size of the dialogues, start sending messages 1 by 1
            if (index < dialogues1.size()) {
                while (shownLines < maxLines && index < dialogues1.size()) {
                    seeker->interface->ReceiveMessage(dialogues1[index], shownLines, type);
                    // Increase the number of lines showing
                    shownLines++;
                    // Increase the reading index
                    index++;
                }
            // If the current index is NOT LOWER to the dialogues size: end interaction, reset counters and change the dialogues
            } else EndInteraction();
        }

        void NPC::EndInteraction() {
            seeker->interface->EndTransmission();
            dialoguing = false;
            shownLines = 0;
            index = 0;
            dialogues1 = dialogues2;
        }

        void NPC::LookAt() {
            if (posX > seeker->GetPos(true)) {
                seeker->Flip(false);
                projection->set_horizontal_flip(true);
            } else {
                seeker->Flip(true);
                projection->set_horizontal_flip(false);
            }
        }

        void NPC::EventCheck() {}

        void NPC::SetAnim(int idx) {}