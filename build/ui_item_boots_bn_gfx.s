
@{{BLOCK(ui_item_boots_bn_gfx)

@=======================================================================
@
@	ui_item_boots_bn_gfx, 16x16@4, 
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
	.global ui_item_boots_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_item_boots_bn_gfxTiles
ui_item_boots_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x66600000,0x77600000,0x55300000,0x93000000,0x53000000
	.word 0x00000000,0x00000000,0x00000000,0x00066666,0x00067777,0x00035555,0x00003999,0x00444555
	.word 0x53000000,0x57330000,0x55773000,0x55553000,0x99993000,0x33333000,0x00000000,0x00000000
	.word 0x00188455,0x00122845,0x00012245,0x00001195,0x00003999,0x00003333,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global ui_item_boots_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_item_boots_bn_gfxPal
ui_item_boots_bn_gfxPal:
	.hword 0x0000,0x1909,0x6B5B,0x0089,0x29AD,0x0972,0x00AB,0x11D5
	.hword 0x7FFF,0x010E,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_item_boots_bn_gfx)
