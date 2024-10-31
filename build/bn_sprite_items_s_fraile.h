#ifndef BN_SPRITE_ITEMS_S_FRAILE_H
#define BN_SPRITE_ITEMS_S_FRAILE_H

#include "bn_sprite_item.h"

//{{BLOCK(s_fraile_bn_gfx)

//======================================================================
//
//	s_fraile_bn_gfx, 64x2624@4, 
//	+ palette 16 entries, not compressed
//	+ 2624 tiles not compressed
//	Total size: 32 + 83968 = 84000
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_S_FRAILE_BN_GFX_H
#define GRIT_S_FRAILE_BN_GFX_H

#define s_fraile_bn_gfxTilesLen 83968
extern const bn::tile s_fraile_bn_gfxTiles[2624];

#define s_fraile_bn_gfxPalLen 32
extern const bn::color s_fraile_bn_gfxPal[16];

#endif // GRIT_S_FRAILE_BN_GFX_H

//}}BLOCK(s_fraile_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item s_fraile(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(s_fraile_bn_gfxTiles, 2624), bpp_mode::BPP_4, compression_type::NONE, 41), 
            sprite_palette_item(span<const color>(s_fraile_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

