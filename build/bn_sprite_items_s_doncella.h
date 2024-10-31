#ifndef BN_SPRITE_ITEMS_S_DONCELLA_H
#define BN_SPRITE_ITEMS_S_DONCELLA_H

#include "bn_sprite_item.h"

//{{BLOCK(s_doncella_bn_gfx)

//======================================================================
//
//	s_doncella_bn_gfx, 64x448@4, 
//	+ palette 16 entries, not compressed
//	+ 448 tiles not compressed
//	Total size: 32 + 14336 = 14368
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_S_DONCELLA_BN_GFX_H
#define GRIT_S_DONCELLA_BN_GFX_H

#define s_doncella_bn_gfxTilesLen 14336
extern const bn::tile s_doncella_bn_gfxTiles[448];

#define s_doncella_bn_gfxPalLen 32
extern const bn::color s_doncella_bn_gfxPal[16];

#endif // GRIT_S_DONCELLA_BN_GFX_H

//}}BLOCK(s_doncella_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item s_doncella(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(s_doncella_bn_gfxTiles, 448), bpp_mode::BPP_4, compression_type::NONE, 7), 
            sprite_palette_item(span<const color>(s_doncella_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

