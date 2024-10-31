#ifndef BN_SPRITE_ITEMS_UI_SELECTOR_H
#define BN_SPRITE_ITEMS_UI_SELECTOR_H

#include "bn_sprite_item.h"

//{{BLOCK(ui_selector_bn_gfx)

//======================================================================
//
//	ui_selector_bn_gfx, 16x32@4, 
//	+ palette 16 entries, not compressed
//	+ 8 tiles not compressed
//	Total size: 32 + 256 = 288
//
//	Time-stamp: 2024-08-20, 19:03:06
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_UI_SELECTOR_BN_GFX_H
#define GRIT_UI_SELECTOR_BN_GFX_H

#define ui_selector_bn_gfxTilesLen 256
extern const bn::tile ui_selector_bn_gfxTiles[8];

#define ui_selector_bn_gfxPalLen 32
extern const bn::color ui_selector_bn_gfxPal[16];

#endif // GRIT_UI_SELECTOR_BN_GFX_H

//}}BLOCK(ui_selector_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item ui_selector(sprite_shape_size(sprite_shape::SQUARE, sprite_size::NORMAL), 
            sprite_tiles_item(span<const tile>(ui_selector_bn_gfxTiles, 8), bpp_mode::BPP_4, compression_type::NONE, 2), 
            sprite_palette_item(span<const color>(ui_selector_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

