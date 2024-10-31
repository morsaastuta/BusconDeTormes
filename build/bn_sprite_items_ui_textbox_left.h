#ifndef BN_SPRITE_ITEMS_UI_TEXTBOX_LEFT_H
#define BN_SPRITE_ITEMS_UI_TEXTBOX_LEFT_H

#include "bn_sprite_item.h"

//{{BLOCK(ui_textbox_left_bn_gfx)

//======================================================================
//
//	ui_textbox_left_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2024-08-20, 19:03:06
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_UI_TEXTBOX_LEFT_BN_GFX_H
#define GRIT_UI_TEXTBOX_LEFT_BN_GFX_H

#define ui_textbox_left_bn_gfxTilesLen 2048
extern const bn::tile ui_textbox_left_bn_gfxTiles[64];

#define ui_textbox_left_bn_gfxPalLen 32
extern const bn::color ui_textbox_left_bn_gfxPal[16];

#endif // GRIT_UI_TEXTBOX_LEFT_BN_GFX_H

//}}BLOCK(ui_textbox_left_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item ui_textbox_left(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(ui_textbox_left_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(ui_textbox_left_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

