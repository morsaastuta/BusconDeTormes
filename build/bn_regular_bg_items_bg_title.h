#ifndef BN_REGULAR_BG_ITEMS_BG_TITLE_H
#define BN_REGULAR_BG_ITEMS_BG_TITLE_H

#include "bn_regular_bg_item.h"

//{{BLOCK(bg_title_bn_gfx)

//======================================================================
//
//	bg_title_bn_gfx, 512x256@4, 
//	+ palette 16 entries, not compressed
//	+ 497 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x32 
//	Total size: 32 + 15904 + 4096 = 20032
//
//	Time-stamp: 2024-08-20, 19:03:06
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BG_TITLE_BN_GFX_H
#define GRIT_BG_TITLE_BN_GFX_H

#define bg_title_bn_gfxTilesLen 15904
extern const bn::tile bg_title_bn_gfxTiles[497];

#define bg_title_bn_gfxMapLen 4096
extern const bn::regular_bg_map_cell bg_title_bn_gfxMap[2048];

#define bg_title_bn_gfxPalLen 32
extern const bn::color bg_title_bn_gfxPal[16];

#endif // GRIT_BG_TITLE_BN_GFX_H

//}}BLOCK(bg_title_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item bg_title(
            regular_bg_tiles_item(span<const tile>(bg_title_bn_gfxTiles, 497), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(bg_title_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(bg_title_bn_gfxMap[0], size(64, 32), compression_type::NONE, 1, false));
}

#endif

