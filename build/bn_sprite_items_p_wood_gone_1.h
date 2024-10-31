#ifndef BN_SPRITE_ITEMS_P_WOOD_GONE_1_H
#define BN_SPRITE_ITEMS_P_WOOD_GONE_1_H

#include "bn_sprite_item.h"

//{{BLOCK(p_wood_gone_1_bn_gfx)

//======================================================================
//
//	p_wood_gone_1_bn_gfx, 16x16@4, 
//	+ palette 16 entries, not compressed
//	+ 4 tiles not compressed
//	Total size: 32 + 128 = 160
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_P_WOOD_GONE_1_BN_GFX_H
#define GRIT_P_WOOD_GONE_1_BN_GFX_H

#define p_wood_gone_1_bn_gfxTilesLen 128
extern const bn::tile p_wood_gone_1_bn_gfxTiles[4];

#define p_wood_gone_1_bn_gfxPalLen 32
extern const bn::color p_wood_gone_1_bn_gfxPal[16];

#endif // GRIT_P_WOOD_GONE_1_BN_GFX_H

//}}BLOCK(p_wood_gone_1_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item p_wood_gone_1(sprite_shape_size(sprite_shape::SQUARE, sprite_size::NORMAL), 
            sprite_tiles_item(span<const tile>(p_wood_gone_1_bn_gfxTiles, 4), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(p_wood_gone_1_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

