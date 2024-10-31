#ifndef BN_SPRITE_ITEMS_EMPTY64X32_H
#define BN_SPRITE_ITEMS_EMPTY64X32_H

#include "bn_sprite_item.h"

//{{BLOCK(empty64x32_bn_gfx)

//======================================================================
//
//	empty64x32_bn_gfx, 64x32@4, 
//	+ palette 16 entries, not compressed
//	+ 32 tiles not compressed
//	Total size: 32 + 1024 = 1056
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_EMPTY64X32_BN_GFX_H
#define GRIT_EMPTY64X32_BN_GFX_H

#define empty64x32_bn_gfxTilesLen 1024
extern const bn::tile empty64x32_bn_gfxTiles[32];

#define empty64x32_bn_gfxPalLen 32
extern const bn::color empty64x32_bn_gfxPal[16];

#endif // GRIT_EMPTY64X32_BN_GFX_H

//}}BLOCK(empty64x32_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item empty64x32(sprite_shape_size(sprite_shape::WIDE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(empty64x32_bn_gfxTiles, 32), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(empty64x32_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif
