#ifndef BN_SPRITE_ITEMS_S_JABALI_H
#define BN_SPRITE_ITEMS_S_JABALI_H

#include "bn_sprite_item.h"

//{{BLOCK(s_jabali_bn_gfx)

//======================================================================
//
//	s_jabali_bn_gfx, 64x1280@4, 
//	+ palette 16 entries, not compressed
//	+ 1280 tiles not compressed
//	Total size: 32 + 40960 = 40992
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_S_JABALI_BN_GFX_H
#define GRIT_S_JABALI_BN_GFX_H

#define s_jabali_bn_gfxTilesLen 40960
extern const bn::tile s_jabali_bn_gfxTiles[1280];

#define s_jabali_bn_gfxPalLen 32
extern const bn::color s_jabali_bn_gfxPal[16];

#endif // GRIT_S_JABALI_BN_GFX_H

//}}BLOCK(s_jabali_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item s_jabali(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(s_jabali_bn_gfxTiles, 1280), bpp_mode::BPP_4, compression_type::NONE, 20), 
            sprite_palette_item(span<const color>(s_jabali_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

