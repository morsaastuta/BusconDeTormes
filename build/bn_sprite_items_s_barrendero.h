#ifndef BN_SPRITE_ITEMS_S_BARRENDERO_H
#define BN_SPRITE_ITEMS_S_BARRENDERO_H

#include "bn_sprite_item.h"

//{{BLOCK(s_barrendero_bn_gfx)

//======================================================================
//
//	s_barrendero_bn_gfx, 64x1792@4, 
//	+ palette 16 entries, not compressed
//	+ 1792 tiles not compressed
//	Total size: 32 + 57344 = 57376
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_S_BARRENDERO_BN_GFX_H
#define GRIT_S_BARRENDERO_BN_GFX_H

#define s_barrendero_bn_gfxTilesLen 57344
extern const bn::tile s_barrendero_bn_gfxTiles[1792];

#define s_barrendero_bn_gfxPalLen 32
extern const bn::color s_barrendero_bn_gfxPal[16];

#endif // GRIT_S_BARRENDERO_BN_GFX_H

//}}BLOCK(s_barrendero_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item s_barrendero(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(s_barrendero_bn_gfxTiles, 1792), bpp_mode::BPP_4, compression_type::NONE, 28), 
            sprite_palette_item(span<const color>(s_barrendero_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

