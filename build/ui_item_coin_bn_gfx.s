
@{{BLOCK(ui_item_coin_bn_gfx)

@=======================================================================
@
@	ui_item_coin_bn_gfx, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2024-08-20, 19:03:06
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global ui_item_coin_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_item_coin_bn_gfxTiles
ui_item_coin_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x44000000,0x22440000,0x11224000,0x44124000,0x54412400,0x55415400
	.word 0x00000000,0x00000000,0x00000044,0x00004455,0x00045511,0x00045244,0x00152455,0x00132555
	.word 0x55415400,0x55415400,0x54254000,0x22554000,0x35110000,0x11000000,0x00000000,0x00000000
	.word 0x00132555,0x00132555,0x00013255,0x00013322,0x00001133,0x00000011,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global ui_item_coin_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_item_coin_bn_gfxPal
ui_item_coin_bn_gfxPal:
	.hword 0x0000,0x0153,0x7FFF,0x02DD,0x023B,0x03BF,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_item_coin_bn_gfx)
