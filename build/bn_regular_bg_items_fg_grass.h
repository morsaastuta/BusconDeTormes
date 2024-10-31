#ifndef BN_REGULAR_BG_ITEMS_FG_GRASS_H
#define BN_REGULAR_BG_ITEMS_FG_GRASS_H

#include "bn_regular_bg_item.h"

//{{BLOCK(fg_grass_bn_gfx)

//======================================================================
//
//	fg_grass_bn_gfx, 512x256@4, 
//	+ palette 16 entries, not compressed
//	+ 340 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x32 
//	Total size: 32 + 10880 + 4096 = 15008
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_FG_GRASS_BN_GFX_H
#define GRIT_FG_GRASS_BN_GFX_H

#define fg_grass_bn_gfxTilesLen 10880
extern const bn::tile fg_grass_bn_gfxTiles[340];

#define fg_grass_bn_gfxMapLen 4096
extern const bn::regular_bg_map_cell fg_grass_bn_gfxMap[2048];

#define fg_grass_bn_gfxPalLen 32
extern const bn::color fg_grass_bn_gfxPal[16];

#endif // GRIT_FG_GRASS_BN_GFX_H

//}}BLOCK(fg_grass_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item fg_grass(
            regular_bg_tiles_item(span<const tile>(fg_grass_bn_gfxTiles, 340), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(fg_grass_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(fg_grass_bn_gfxMap[0], size(64, 32), compression_type::NONE, 1, false));
}

#endif

