#ifndef BN_SPRITE_ITEMS_EMPTY32X16_H
#define BN_SPRITE_ITEMS_EMPTY32X16_H

#include "bn_sprite_item.h"

//{{BLOCK(empty32x16_bn_gfx)

//======================================================================
//
//	empty32x16_bn_gfx, 32x16@4, 
//	+ palette 16 entries, not compressed
//	+ 8 tiles not compressed
//	Total size: 32 + 256 = 288
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_EMPTY32X16_BN_GFX_H
#define GRIT_EMPTY32X16_BN_GFX_H

#define empty32x16_bn_gfxTilesLen 256
extern const bn::tile empty32x16_bn_gfxTiles[8];

#define empty32x16_bn_gfxPalLen 32
extern const bn::color empty32x16_bn_gfxPal[16];

#endif // GRIT_EMPTY32X16_BN_GFX_H

//}}BLOCK(empty32x16_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item empty32x16(sprite_shape_size(sprite_shape::WIDE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(empty32x16_bn_gfxTiles, 8), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(empty32x16_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

