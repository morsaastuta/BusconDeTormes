
@{{BLOCK(ui_leaf_green_bn_gfx)

@=======================================================================
@
@	ui_leaf_green_bn_gfx, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2024-08-20, 19:03:05
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global ui_leaf_green_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_leaf_green_bn_gfxTiles
ui_leaf_green_bn_gfxTiles:
	.word 0x00000000,0x20000000,0x20000000,0x20220000,0x42420000,0x54202200,0x31224200,0x12442000
	.word 0x00000002,0x00000024,0x00000024,0x00022025,0x00024243,0x02202454,0x02422134,0x00244214
	.word 0x54312000,0x33120000,0x31200000,0x12120000,0x31200000,0x12000000,0x20000000,0x00000000
	.word 0x00213454,0x00021334,0x00002134,0x00021214,0x00002134,0x00000214,0x00000021,0x00000002

	.section .rodata
	.align	2
	.global ui_leaf_green_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_leaf_green_bn_gfxPal
ui_leaf_green_bn_gfxPal:
	.hword 0x0000,0x018A,0x0067,0x02B3,0x020E,0x0758,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_leaf_green_bn_gfx)
