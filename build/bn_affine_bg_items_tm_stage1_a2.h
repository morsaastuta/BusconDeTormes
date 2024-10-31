#ifndef BN_AFFINE_BG_ITEMS_TM_STAGE1_A2_H
#define BN_AFFINE_BG_ITEMS_TM_STAGE1_A2_H

#include "bn_affine_bg_item.h"

//{{BLOCK(tm_stage1_a2_bn_gfx)

//======================================================================
//
//	tm_stage1_a2_bn_gfx, 768x512@8, 
//	+ palette 32 entries, not compressed
//	+ 133 tiles (t reduced) not compressed
//	+ affine map, not compressed, 96x64 
//	Total size: 64 + 8512 + 6144 = 14720
//
//	Time-stamp: 2024-08-20, 19:03:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_TM_STAGE1_A2_BN_GFX_H
#define GRIT_TM_STAGE1_A2_BN_GFX_H

#define tm_stage1_a2_bn_gfxTilesLen 8512
extern const bn::tile tm_stage1_a2_bn_gfxTiles[266];

#define tm_stage1_a2_bn_gfxMapLen 6144
extern const bn::affine_bg_map_cell tm_stage1_a2_bn_gfxMap[6144];

#define tm_stage1_a2_bn_gfxPalLen 64
extern const bn::color tm_stage1_a2_bn_gfxPal[32];

#endif // GRIT_TM_STAGE1_A2_BN_GFX_H

//}}BLOCK(tm_stage1_a2_bn_gfx)

namespace bn::affine_bg_items
{
    constexpr inline affine_bg_item tm_stage1_a2(
            affine_bg_tiles_item(span<const tile>(tm_stage1_a2_bn_gfxTiles, 266), compression_type::NONE), 
            bg_palette_item(span<const color>(tm_stage1_a2_bn_gfxPal, 32), bpp_mode::BPP_8, compression_type::NONE),
            affine_bg_map_item(tm_stage1_a2_bn_gfxMap[0], size(96, 64), compression_type::NONE, 1, true));
}

#endif

