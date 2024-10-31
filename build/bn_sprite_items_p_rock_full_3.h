#ifndef BN_SPRITE_ITEMS_P_ROCK_FULL_3_H
#define BN_SPRITE_ITEMS_P_ROCK_FULL_3_H

#include "bn_sprite_item.h"

//{{BLOCK(p_rock_full_3_bn_gfx)

//======================================================================
//
//	p_rock_full_3_bn_gfx, 64x32@4, 
//	+ palette 16 entries, not compressed
//	+ 32 tiles not compressed
//	Total size: 32 + 1024 = 1056
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_P_ROCK_FULL_3_BN_GFX_H
#define GRIT_P_ROCK_FULL_3_BN_GFX_H

#define p_rock_full_3_bn_gfxTilesLen 1024
extern const bn::tile p_rock_full_3_bn_gfxTiles[32];

#define p_rock_full_3_bn_gfxPalLen 32
extern const bn::color p_rock_full_3_bn_gfxPal[16];

#endif // GRIT_P_ROCK_FULL_3_BN_GFX_H

//}}BLOCK(p_rock_full_3_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item p_rock_full_3(sprite_shape_size(sprite_shape::WIDE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(p_rock_full_3_bn_gfxTiles, 32), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(p_rock_full_3_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

