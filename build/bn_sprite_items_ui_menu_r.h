#ifndef BN_SPRITE_ITEMS_UI_MENU_R_H
#define BN_SPRITE_ITEMS_UI_MENU_R_H

#include "bn_sprite_item.h"

//{{BLOCK(ui_menu_r_bn_gfx)

//======================================================================
//
//	ui_menu_r_bn_gfx, 16x16@4, 
//	+ palette 16 entries, not compressed
//	+ 4 tiles not compressed
//	Total size: 32 + 128 = 160
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_UI_MENU_R_BN_GFX_H
#define GRIT_UI_MENU_R_BN_GFX_H

#define ui_menu_r_bn_gfxTilesLen 128
extern const bn::tile ui_menu_r_bn_gfxTiles[4];

#define ui_menu_r_bn_gfxPalLen 32
extern const bn::color ui_menu_r_bn_gfxPal[16];

#endif // GRIT_UI_MENU_R_BN_GFX_H

//}}BLOCK(ui_menu_r_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item ui_menu_r(sprite_shape_size(sprite_shape::SQUARE, sprite_size::NORMAL), 
            sprite_tiles_item(span<const tile>(ui_menu_r_bn_gfxTiles, 4), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(ui_menu_r_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif
