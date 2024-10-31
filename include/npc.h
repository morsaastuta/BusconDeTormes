#pragma once

#include "bn_string.h"

#include "entity.h"

class Seeker;

class NPC : public Entity {

    protected:

        // NPC data
        Seeker* seeker;
        bool dialoguing = false;
        int type;
        std::vector<bn::string_view> dialogues1;
        std::vector<bn::string_view> dialogues2;
        bool right = true;
        int index = 0;
        int shownLines = 0;
        int maxLines = 3;
        bool deco = false;
        bool prompt = false;


    public:

        // So the main loop knows when to take it away
        bool departed = false;

        NPC(bn::sprite_item p, int x, int y, Seeker *s);

        void Update() override;

        void Interact();

        void EndInteraction();

        void LookAt();

        virtual void EventCheck();

        virtual void SetAnim(int idx);
};