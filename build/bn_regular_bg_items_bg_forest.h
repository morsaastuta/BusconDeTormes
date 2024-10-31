#ifndef BN_REGULAR_BG_ITEMS_BG_FOREST_H
#define BN_REGULAR_BG_ITEMS_BG_FOREST_H

#include "bn_regular_bg_item.h"

//{{BLOCK(bg_forest_bn_gfx)

//======================================================================
//
//	bg_forest_bn_gfx, 512x256@4, 
//	+ palette 16 entries, not compressed
//	+ 881 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x32 
//	Total size: 32 + 28192 + 4096 = 32320
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BG_FOREST_BN_GFX_H
#define GRIT_BG_FOREST_BN_GFX_H

#define bg_forest_bn_gfxTilesLen 28192
extern const bn::tile bg_forest_bn_gfxTiles[881];

#define bg_forest_bn_gfxMapLen 4096
extern const bn::regular_bg_map_cell bg_forest_bn_gfxMap[2048];

#define bg_forest_bn_gfxPalLen 32
extern const bn::color bg_forest_bn_gfxPal[16];

#endif // GRIT_BG_FOREST_BN_GFX_H

//}}BLOCK(bg_forest_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item bg_forest(
            regular_bg_tiles_item(span<const tile>(bg_forest_bn_gfxTiles, 881), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(bg_forest_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(bg_forest_bn_gfxMap[0], size(64, 32), compression_type::NONE, 1, false));
}

#endif

