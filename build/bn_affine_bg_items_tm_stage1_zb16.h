#ifndef BN_AFFINE_BG_ITEMS_TM_STAGE1_ZB16_H
#define BN_AFFINE_BG_ITEMS_TM_STAGE1_ZB16_H

#include "bn_affine_bg_item.h"

//{{BLOCK(tm_stage1_zb16_bn_gfx)

//======================================================================
//
//	tm_stage1_zb16_bn_gfx, 768x768@8, 
//	+ palette 32 entries, not compressed
//	+ 202 tiles (t reduced) not compressed
//	+ affine map, not compressed, 96x96 
//	Total size: 64 + 12928 + 9216 = 22208
//
//	Time-stamp: 2024-08-20, 19:03:06
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_TM_STAGE1_ZB16_BN_GFX_H
#define GRIT_TM_STAGE1_ZB16_BN_GFX_H

#define tm_stage1_zb16_bn_gfxTilesLen 12928
extern const bn::tile tm_stage1_zb16_bn_gfxTiles[404];

#define tm_stage1_zb16_bn_gfxMapLen 9216
extern const bn::affine_bg_map_cell tm_stage1_zb16_bn_gfxMap[9216];

#define tm_stage1_zb16_bn_gfxPalLen 64
extern const bn::color tm_stage1_zb16_bn_gfxPal[32];

#endif // GRIT_TM_STAGE1_ZB16_BN_GFX_H

//}}BLOCK(tm_stage1_zb16_bn_gfx)

namespace bn::affine_bg_items
{
    constexpr inline affine_bg_item tm_stage1_zb16(
            affine_bg_tiles_item(span<const tile>(tm_stage1_zb16_bn_gfxTiles, 404), compression_type::NONE), 
            bg_palette_item(span<const color>(tm_stage1_zb16_bn_gfxPal, 32), bpp_mode::BPP_8, compression_type::NONE),
            affine_bg_map_item(tm_stage1_zb16_bn_gfxMap[0], size(96, 96), compression_type::NONE, 1, true));
}

#endif

