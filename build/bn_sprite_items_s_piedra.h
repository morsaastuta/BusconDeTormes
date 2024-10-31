#ifndef BN_SPRITE_ITEMS_S_PIEDRA_H
#define BN_SPRITE_ITEMS_S_PIEDRA_H

#include "bn_sprite_item.h"

//{{BLOCK(s_piedra_bn_gfx)

//======================================================================
//
//	s_piedra_bn_gfx, 8x8@4, 
//	+ palette 16 entries, not compressed
//	+ 1 tiles not compressed
//	Total size: 32 + 32 = 64
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_S_PIEDRA_BN_GFX_H
#define GRIT_S_PIEDRA_BN_GFX_H

#define s_piedra_bn_gfxTilesLen 32
extern const bn::tile s_piedra_bn_gfxTiles[1];

#define s_piedra_bn_gfxPalLen 32
extern const bn::color s_piedra_bn_gfxPal[16];

#endif // GRIT_S_PIEDRA_BN_GFX_H

//}}BLOCK(s_piedra_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item s_piedra(sprite_shape_size(sprite_shape::SQUARE, sprite_size::SMALL), 
            sprite_tiles_item(span<const tile>(s_piedra_bn_gfxTiles, 1), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(s_piedra_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

