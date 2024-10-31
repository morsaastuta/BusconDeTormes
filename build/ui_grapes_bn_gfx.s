
@{{BLOCK(ui_grapes_bn_gfx)

@=======================================================================
@
@	ui_grapes_bn_gfx, 16x16@4, 
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
	.global ui_grapes_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_grapes_bn_gfxTiles
ui_grapes_bn_gfxTiles:
	.word 0x00000000,0x00030000,0x03400000,0x30000000,0x10000000,0x30330000,0x23423000,0x41343000
	.word 0x00000000,0x00000010,0x00000003,0x00000000,0x00000330,0x00003543,0x00001514,0x00000133
	.word 0x14230000,0x13510000,0x42300000,0x55100000,0x11000000,0x51000000,0x10000000,0x00000000
	.word 0x00000342,0x00000154,0x00000313,0x00000341,0x00000155,0x00000013,0x00000001,0x00000000

	.section .rodata
	.align	2
	.global ui_grapes_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_grapes_bn_gfxPal
ui_grapes_bn_gfxPal:
	.hword 0x0000,0x0153,0x7FFF,0x023B,0x03BF,0x02DD,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_grapes_bn_gfx)
