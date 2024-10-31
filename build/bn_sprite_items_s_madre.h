#ifndef BN_SPRITE_ITEMS_S_MADRE_H
#define BN_SPRITE_ITEMS_S_MADRE_H

#include "bn_sprite_item.h"

//{{BLOCK(s_madre_bn_gfx)

//======================================================================
//
//	s_madre_bn_gfx, 64x320@4, 
//	+ palette 16 entries, not compressed
//	+ 320 tiles not compressed
//	Total size: 32 + 10240 = 10272
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_S_MADRE_BN_GFX_H
#define GRIT_S_MADRE_BN_GFX_H

#define s_madre_bn_gfxTilesLen 10240
extern const bn::tile s_madre_bn_gfxTiles[320];

#define s_madre_bn_gfxPalLen 32
extern const bn::color s_madre_bn_gfxPal[16];

#endif // GRIT_S_MADRE_BN_GFX_H

//}}BLOCK(s_madre_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item s_madre(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(s_madre_bn_gfxTiles, 320), bpp_mode::BPP_4, compression_type::NONE, 5), 
            sprite_palette_item(span<const color>(s_madre_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

