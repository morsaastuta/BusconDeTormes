#ifndef BN_REGULAR_BG_ITEMS_BG_CHURCH_H
#define BN_REGULAR_BG_ITEMS_BG_CHURCH_H

#include "bn_regular_bg_item.h"

//{{BLOCK(bg_church_bn_gfx)

//======================================================================
//
//	bg_church_bn_gfx, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 17 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 32 + 544 + 2048 = 2624
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BG_CHURCH_BN_GFX_H
#define GRIT_BG_CHURCH_BN_GFX_H

#define bg_church_bn_gfxTilesLen 544
extern const bn::tile bg_church_bn_gfxTiles[17];

#define bg_church_bn_gfxMapLen 2048
extern const bn::regular_bg_map_cell bg_church_bn_gfxMap[1024];

#define bg_church_bn_gfxPalLen 32
extern const bn::color bg_church_bn_gfxPal[16];

#endif // GRIT_BG_CHURCH_BN_GFX_H

//}}BLOCK(bg_church_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item bg_church(
            regular_bg_tiles_item(span<const tile>(bg_church_bn_gfxTiles, 17), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(bg_church_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(bg_church_bn_gfxMap[0], size(32, 32), compression_type::NONE, 1, false));
}

#endif

