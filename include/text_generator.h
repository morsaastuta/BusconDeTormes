#include "bn_string_view.h"
#include "bn_vector.h"
#include "bn_fixed.h"
#include "bn_sprite_text_generator.h"
#include "font.h"
#include "bn_sprite_ptr.h"
#include "bn_string.h"

class TextGenerator {

    private:

        bn::sprite_text_generator textgen;
        bn::vector<bn::sprite_ptr, 32> textspr;


    public:

        TextGenerator() : textgen(bn::sprite_text_generator(font)) {
            textgen.set_bg_priority(0);
            textgen.set_z_order(-5);
        }

        void GenerateText(bn::fixed fx, bn::fixed fy, bn::fixed text) {
            Clear();
            textgen.set_left_alignment();
            textgen.generate(fx, fy, bn::to_string<32>(text), textspr);
        }

        void GenerateText(bn::fixed fx, bn::fixed fy, bn::string_view text) {
            Clear();
            textgen.set_left_alignment();
            textgen.generate(fx, fy, text, textspr);
        }

        void GenerateTextC(bn::fixed fx, bn::fixed fy, bn::fixed text) {
            Clear();
            textgen.set_center_alignment();
            textgen.generate(fx, fy, bn::to_string<32>(text), textspr);
        }

        void GenerateTextC(bn::fixed fx, bn::fixed fy, bn::string_view text) {
            Clear();
            textgen.set_center_alignment();
            textgen.generate(fx, fy, text, textspr);
        }

        void Clear() {
            textspr.clear();
        }

};