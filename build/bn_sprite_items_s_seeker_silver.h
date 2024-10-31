#ifndef BN_SPRITE_ITEMS_S_SEEKER_SILVER_H
#define BN_SPRITE_ITEMS_S_SEEKER_SILVER_H

#include "bn_sprite_item.h"

//{{BLOCK(s_seeker_silver_bn_gfx)

//======================================================================
//
//	s_seeker_silver_bn_gfx, 64x6400@8, 
//	+ palette 48 entries, not compressed
//	+ 6400 tiles not compressed
//	Total size: 96 + 409600 = 409696
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_S_SEEKER_SILVER_BN_GFX_H
#define GRIT_S_SEEKER_SILVER_BN_GFX_H

#define s_seeker_silver_bn_gfxTilesLen 409600
extern const bn::tile s_seeker_silver_bn_gfxTiles[12800];

#define s_seeker_silver_bn_gfxPalLen 96
extern const bn::color s_seeker_silver_bn_gfxPal[48];

#endif // GRIT_S_SEEKER_SILVER_BN_GFX_H

//}}BLOCK(s_seeker_silver_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item s_seeker_silver(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(s_seeker_silver_bn_gfxTiles, 12800), bpp_mode::BPP_8, compression_type::NONE, 100), 
            sprite_palette_item(span<const color>(s_seeker_silver_bn_gfxPal, 48), bpp_mode::BPP_8, compression_type::NONE));
}

#endif

