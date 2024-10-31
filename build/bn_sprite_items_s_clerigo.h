#ifndef BN_SPRITE_ITEMS_S_CLERIGO_H
#define BN_SPRITE_ITEMS_S_CLERIGO_H

#include "bn_sprite_item.h"

//{{BLOCK(s_clerigo_bn_gfx)

//======================================================================
//
//	s_clerigo_bn_gfx, 64x3072@4, 
//	+ palette 16 entries, not compressed
//	+ 3072 tiles not compressed
//	Total size: 32 + 98304 = 98336
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_S_CLERIGO_BN_GFX_H
#define GRIT_S_CLERIGO_BN_GFX_H

#define s_clerigo_bn_gfxTilesLen 98304
extern const bn::tile s_clerigo_bn_gfxTiles[3072];

#define s_clerigo_bn_gfxPalLen 32
extern const bn::color s_clerigo_bn_gfxPal[16];

#endif // GRIT_S_CLERIGO_BN_GFX_H

//}}BLOCK(s_clerigo_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item s_clerigo(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(s_clerigo_bn_gfxTiles, 3072), bpp_mode::BPP_4, compression_type::NONE, 48), 
            sprite_palette_item(span<const color>(s_clerigo_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

