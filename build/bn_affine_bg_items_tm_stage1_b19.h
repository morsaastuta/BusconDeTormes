#ifndef BN_AFFINE_BG_ITEMS_TM_STAGE1_B19_H
#define BN_AFFINE_BG_ITEMS_TM_STAGE1_B19_H

#include "bn_affine_bg_item.h"

//{{BLOCK(tm_stage1_b19_bn_gfx)

//======================================================================
//
//	tm_stage1_b19_bn_gfx, 512x768@8, 
//	+ palette 48 entries, not compressed
//	+ 222 tiles (t reduced) not compressed
//	+ affine map, not compressed, 64x96 
//	Total size: 96 + 14208 + 6144 = 20448
//
//	Time-stamp: 2024-08-20, 19:03:06
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_TM_STAGE1_B19_BN_GFX_H
#define GRIT_TM_STAGE1_B19_BN_GFX_H

#define tm_stage1_b19_bn_gfxTilesLen 14208
extern const bn::tile tm_stage1_b19_bn_gfxTiles[444];

#define tm_stage1_b19_bn_gfxMapLen 6144
extern const bn::affine_bg_map_cell tm_stage1_b19_bn_gfxMap[6144];

#define tm_stage1_b19_bn_gfxPalLen 96
extern const bn::color tm_stage1_b19_bn_gfxPal[48];

#endif // GRIT_TM_STAGE1_B19_BN_GFX_H

//}}BLOCK(tm_stage1_b19_bn_gfx)

namespace bn::affine_bg_items
{
    constexpr inline affine_bg_item tm_stage1_b19(
            affine_bg_tiles_item(span<const tile>(tm_stage1_b19_bn_gfxTiles, 444), compression_type::NONE), 
            bg_palette_item(span<const color>(tm_stage1_b19_bn_gfxPal, 48), bpp_mode::BPP_8, compression_type::NONE),
            affine_bg_map_item(tm_stage1_b19_bn_gfxMap[0], size(64, 96), compression_type::NONE, 1, true));
}

#endif

