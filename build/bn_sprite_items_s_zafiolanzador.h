#ifndef BN_SPRITE_ITEMS_S_ZAFIOLANZADOR_H
#define BN_SPRITE_ITEMS_S_ZAFIOLANZADOR_H

#include "bn_sprite_item.h"

//{{BLOCK(s_zafiolanzador_bn_gfx)

//======================================================================
//
//	s_zafiolanzador_bn_gfx, 64x2304@4, 
//	+ palette 16 entries, not compressed
//	+ 2304 tiles not compressed
//	Total size: 32 + 73728 = 73760
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_S_ZAFIOLANZADOR_BN_GFX_H
#define GRIT_S_ZAFIOLANZADOR_BN_GFX_H

#define s_zafiolanzador_bn_gfxTilesLen 73728
extern const bn::tile s_zafiolanzador_bn_gfxTiles[2304];

#define s_zafiolanzador_bn_gfxPalLen 32
extern const bn::color s_zafiolanzador_bn_gfxPal[16];

#endif // GRIT_S_ZAFIOLANZADOR_BN_GFX_H

//}}BLOCK(s_zafiolanzador_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item s_zafiolanzador(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(s_zafiolanzador_bn_gfxTiles, 2304), bpp_mode::BPP_4, compression_type::NONE, 36), 
            sprite_palette_item(span<const color>(s_zafiolanzador_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

