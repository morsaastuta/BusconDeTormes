#ifndef BN_AFFINE_BG_ITEMS_TM_STAGE2_02_H
#define BN_AFFINE_BG_ITEMS_TM_STAGE2_02_H

#include "bn_affine_bg_item.h"

//{{BLOCK(tm_stage2_02_bn_gfx)

//======================================================================
//
//	tm_stage2_02_bn_gfx, 256x512@8, 
//	+ palette 32 entries, not compressed
//	+ 173 tiles (t reduced) not compressed
//	+ affine map, not compressed, 32x64 
//	Total size: 64 + 11072 + 2048 = 13184
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_TM_STAGE2_02_BN_GFX_H
#define GRIT_TM_STAGE2_02_BN_GFX_H

#define tm_stage2_02_bn_gfxTilesLen 11072
extern const bn::tile tm_stage2_02_bn_gfxTiles[346];

#define tm_stage2_02_bn_gfxMapLen 2048
extern const bn::affine_bg_map_cell tm_stage2_02_bn_gfxMap[2048];

#define tm_stage2_02_bn_gfxPalLen 64
extern const bn::color tm_stage2_02_bn_gfxPal[32];

#endif // GRIT_TM_STAGE2_02_BN_GFX_H

//}}BLOCK(tm_stage2_02_bn_gfx)

namespace bn::affine_bg_items
{
    constexpr inline affine_bg_item tm_stage2_02(
            affine_bg_tiles_item(span<const tile>(tm_stage2_02_bn_gfxTiles, 346), compression_type::NONE), 
            bg_palette_item(span<const color>(tm_stage2_02_bn_gfxPal, 32), bpp_mode::BPP_8, compression_type::NONE),
            affine_bg_map_item(tm_stage2_02_bn_gfxMap[0], size(32, 64), compression_type::NONE, 1, true));
}

#endif

