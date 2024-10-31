#ifndef BN_SPRITE_ITEMS_S_ZAFIO_H
#define BN_SPRITE_ITEMS_S_ZAFIO_H

#include "bn_sprite_item.h"

//{{BLOCK(s_zafio_bn_gfx)

//======================================================================
//
//	s_zafio_bn_gfx, 64x2112@4, 
//	+ palette 16 entries, not compressed
//	+ 2112 tiles not compressed
//	Total size: 32 + 67584 = 67616
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_S_ZAFIO_BN_GFX_H
#define GRIT_S_ZAFIO_BN_GFX_H

#define s_zafio_bn_gfxTilesLen 67584
extern const bn::tile s_zafio_bn_gfxTiles[2112];

#define s_zafio_bn_gfxPalLen 32
extern const bn::color s_zafio_bn_gfxPal[16];

#endif // GRIT_S_ZAFIO_BN_GFX_H

//}}BLOCK(s_zafio_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item s_zafio(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(s_zafio_bn_gfxTiles, 2112), bpp_mode::BPP_4, compression_type::NONE, 33), 
            sprite_palette_item(span<const color>(s_zafio_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

