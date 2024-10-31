#ifndef BN_SPRITE_ITEMS_S_CIEGO_H
#define BN_SPRITE_ITEMS_S_CIEGO_H

#include "bn_sprite_item.h"

//{{BLOCK(s_ciego_bn_gfx)

//======================================================================
//
//	s_ciego_bn_gfx, 64x3776@4, 
//	+ palette 16 entries, not compressed
//	+ 3776 tiles not compressed
//	Total size: 32 + 120832 = 120864
//
//	Time-stamp: 2024-08-20, 19:03:06
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_S_CIEGO_BN_GFX_H
#define GRIT_S_CIEGO_BN_GFX_H

#define s_ciego_bn_gfxTilesLen 120832
extern const bn::tile s_ciego_bn_gfxTiles[3776];

#define s_ciego_bn_gfxPalLen 32
extern const bn::color s_ciego_bn_gfxPal[16];

#endif // GRIT_S_CIEGO_BN_GFX_H

//}}BLOCK(s_ciego_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item s_ciego(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(s_ciego_bn_gfxTiles, 3776), bpp_mode::BPP_4, compression_type::NONE, 59), 
            sprite_palette_item(span<const color>(s_ciego_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

