#ifndef BN_REGULAR_BG_ITEMS_FG_RIVER_H
#define BN_REGULAR_BG_ITEMS_FG_RIVER_H

#include "bn_regular_bg_item.h"

//{{BLOCK(fg_river_bn_gfx)

//======================================================================
//
//	fg_river_bn_gfx, 512x256@4, 
//	+ palette 64 entries, not compressed
//	+ 536 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x32 
//	Total size: 128 + 17152 + 4096 = 21376
//
//	Time-stamp: 2024-08-20, 19:03:06
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_FG_RIVER_BN_GFX_H
#define GRIT_FG_RIVER_BN_GFX_H

#define fg_river_bn_gfxTilesLen 17152
extern const bn::tile fg_river_bn_gfxTiles[536];

#define fg_river_bn_gfxMapLen 4096
extern const bn::regular_bg_map_cell fg_river_bn_gfxMap[2048];

#define fg_river_bn_gfxPalLen 128
extern const bn::color fg_river_bn_gfxPal[64];

#endif // GRIT_FG_RIVER_BN_GFX_H

//}}BLOCK(fg_river_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item fg_river(
            regular_bg_tiles_item(span<const tile>(fg_river_bn_gfxTiles, 536), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(fg_river_bn_gfxPal, 64), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(fg_river_bn_gfxMap[0], size(64, 32), compression_type::NONE, 1, false));
}

#endif

