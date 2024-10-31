
@{{BLOCK(ui_item_bunch_bn_gfx)

@=======================================================================
@
@	ui_item_bunch_bn_gfx, 16x16@4, 
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
	.global ui_item_bunch_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_item_bunch_bn_gfxTiles
ui_item_bunch_bn_gfxTiles:
	.word 0x00000000,0x00040000,0x04300000,0x40000000,0x10000000,0x40440000,0x24324000,0x31434000
	.word 0x00000000,0x00000010,0x00000004,0x00000000,0x00000440,0x00004534,0x00001513,0x00000144
	.word 0x13240000,0x14510000,0x32400000,0x55100000,0x11000000,0x51000000,0x10000000,0x00000000
	.word 0x00000432,0x00000153,0x00000414,0x00000431,0x00000155,0x00000014,0x00000001,0x00000000

	.section .rodata
	.align	2
	.global ui_item_bunch_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_item_bunch_bn_gfxPal
ui_item_bunch_bn_gfxPal:
	.hword 0x0000,0x0153,0x739C,0x0F18,0x023B,0x02DD,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_item_bunch_bn_gfx)
