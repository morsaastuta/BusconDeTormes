#include "iostream"
#include "vector"

#include "bn_memory.h"
#include "bn_log.h"
#include "bn_core.h"
#include "bn_keypad.h"
#include "bn_string_view.h"
#include "bn_vector.h"
#include "bn_sprite_text_generator.h"

// Core
#include "scene.h"
#include "seeker.h"
#include "interface.h"

// Entities
#include "entity.h"
#include "item.h"
#include "foe.h"
#include "npc.h"
#include "templatform.h"
#include "warp.h"

int main()
{
    // Initialization
    bn::core::init();
    
    enum State {
        TITLE, LANG, START, SCENE, PAUSE, INVENTORY, SETTINGS
    };

    // First thing when opening the game: TITLE SCREEN (demo: SCENE)
    State state = TITLE;
    TextGenerator* labelText = new TextGenerator();
    TextGenerator* langText = new TextGenerator();
    Scene* scene = new Scene();
    Seeker* seeker;
    std::vector<Entity*> trash;

    int minWidth = 154;
    int minHeight = 114;

    while(true)
    {
        // Decides controls based on the current status (type of screen)
        switch(state) {

            case TITLE:

                if (bn::keypad::start_pressed()) {
                    state = LANG;
                    scene->SetSceneLanguage();
                
                    scene->lang = false;
                    labelText->GenerateTextC(0, -16*1.5f, "Select your preferred language:");
                    langText->GenerateTextC(0, 16*1.5f, "<- ENGLISH ->");
                }

                break;

            case LANG:

                if (bn::keypad::left_pressed() || bn::keypad::right_pressed()) {
                    if (!scene->lang) {
                        scene->lang = true;
                        labelText->GenerateTextC(0, -16*1.5f, "Selecciona tu idioma preferido:");
                        langText->GenerateTextC(0, 16*1.5f, "<- ESPAÑOL ->");
                    } else {
                        scene->lang = false;
                        labelText->GenerateTextC(0, -16*1.5f, "Select your preferred language:");
                        langText->GenerateTextC(0, 16*1.5f, "<- ENGLISH ->");
                    }
                }

                if (bn::keypad::start_pressed()) {
                    state = START;
                    labelText->Clear();
                    langText->Clear();
                }

                break;

            case START:

                seeker = new Seeker(scene);
                // Initialization of the Player according to the Map
                seeker->interface->Clear();
                delete seeker;
                seeker = NULL;
                seeker = new Seeker(scene);
                state = SCENE;

                break;

            case SCENE:

                // PLAYER MANAGEMENT
                // 1. Update the player
                seeker->Update();
                // 2. Update the scene's camera & backgrounds
                scene->Update(seeker);

                // NPC MANAGEMENT
                // 1. Update every NPC in the active list ONLY if they are close enough; every departed NPC will go to the trash for imminent deletion
                for(NPC* npc : scene->npcs) {
                    scene->Observe(npc);
                    if (npc->departed) trash.push_back(npc);
                }
                // 2. Remove all departed NPCs from active list
                scene->npcs.erase(
                    std::remove_if(
                        scene->npcs.begin(), scene->npcs.end(), [](NPC* npc) {
                            return npc->departed;
                        }
                    ), scene->npcs.end()
                );

                // BLOCKED DURING DIALOGUE
                if (!seeker->interface->dialoguing && seeker->hp > 0) {

                    // ITEM MANAGEMENT
                    // 1. Update every item in the active list ONLY if they are close enough; every departed item will go to the trash for imminent deletion
                    for(Item* item : scene->items) {
                        scene->Observe(item);
                        if (item->departed) trash.push_back(item);
                    }
                    // 2. Remove all departed NPCs from active list
                    scene->items.erase(
                        std::remove_if(
                            scene->items.begin(), scene->items.end(), [](Item* item) {
                                return item->departed;
                            }
                        ), scene->items.end()
                    );

                    // TEMPLATFORM MANAGEMENT
                    // 1. Update every templatform in the active list; every departed templatform will go to the trash for imminent deletion
                    for(Templatform* temp : scene->temps) {
                        scene->Observe(temp);
                    }

                    // FOE MANAGEMENT
                    // 1. Update every foe in the active list ONLY if they are close enough
                    for(Foe* foe : scene->foes) {
                        scene->Observe(foe);
                        if (foe->GetHP() <= 0) trash.push_back(foe);
                    }
                    // 2. Remove all foes with HP = 0 from active list
                    scene->foes.erase(
                        std::remove_if(
                            scene->foes.begin(), scene->foes.end(), [](Foe* foe) {
                                return foe->GetHP() <= 0;
                            }
                        ), scene->foes.end()
                    );

                    // WARP MANAGEMENT
                    // 1. Update every warp in the active list
                    for(Warp* warp : scene->warps) {
                        scene->Observe(warp);
                    }
                    // 2. If collision is found, warp
                    if (seeker->warped) seeker->LoadScene();

                    // PAUSE
                    if (bn::keypad::start_pressed()) {
                        state = PAUSE;
                        seeker->interface->Clear();
                        seeker->interface->Pause(scene->lang);
                        break;
                    }
                }

                // SLASH MANAGEMENT
                // 1. Trash all casts
                for(Entity* cast : scene->casts) {
                    trash.push_back(cast);
                }
                // 2. Remove all casts from active list
                scene->casts.erase(
                    std::remove_if(
                        scene->casts.begin(), scene->casts.end(), [](Entity* cast) {
                            return true;
                        }
                    ), scene->casts.end()
                );

                // TRASH MANAGEMENT
                // 1. Delete all trashed entities
                for(Entity* e : trash) {
                    e->ReleaseProjection();
                    delete e;
                    e = NULL;
                }
                trash.clear();
                
                break;

            case PAUSE:

                // Open menu
                if (bn::keypad::start_pressed()) {
                    state = SCENE;
                    seeker->interface->Clear();
                    seeker->interface->Load(seeker);
                    break;
                }

                break;
        }

        // Constant update at the end of the gameplay loop
        bn::core::update();
    }
}