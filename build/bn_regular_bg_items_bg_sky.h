#ifndef BN_REGULAR_BG_ITEMS_BG_SKY_H
#define BN_REGULAR_BG_ITEMS_BG_SKY_H

#include "bn_regular_bg_item.h"

//{{BLOCK(bg_sky_bn_gfx)

//======================================================================
//
//	bg_sky_bn_gfx, 512x256@4, 
//	+ palette 16 entries, not compressed
//	+ 336 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x32 
//	Total size: 32 + 10752 + 4096 = 14880
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BG_SKY_BN_GFX_H
#define GRIT_BG_SKY_BN_GFX_H

#define bg_sky_bn_gfxTilesLen 10752
extern const bn::tile bg_sky_bn_gfxTiles[336];

#define bg_sky_bn_gfxMapLen 4096
extern const bn::regular_bg_map_cell bg_sky_bn_gfxMap[2048];

#define bg_sky_bn_gfxPalLen 32
extern const bn::color bg_sky_bn_gfxPal[16];

#endif // GRIT_BG_SKY_BN_GFX_H

//}}BLOCK(bg_sky_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item bg_sky(
            regular_bg_tiles_item(span<const tile>(bg_sky_bn_gfxTiles, 336), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(bg_sky_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(bg_sky_bn_gfxMap[0], size(64, 32), compression_type::NONE, 1, false));
}

#endif

