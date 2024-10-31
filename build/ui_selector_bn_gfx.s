
@{{BLOCK(ui_selector_bn_gfx)

@=======================================================================
@
@	ui_selector_bn_gfx, 16x32@4, 
@	+ palette 16 entries, not compressed
@	+ 8 tiles not compressed
@	Total size: 32 + 256 = 288
@
@	Time-stamp: 2024-08-20, 19:03:06
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global ui_selector_bn_gfxTiles		@ 256 unsigned chars
	.hidden ui_selector_bn_gfxTiles
ui_selector_bn_gfxTiles:
	.word 0x00033333,0x00011143,0x00000043,0x00000043,0x00000043,0x00000000,0x00000000,0x00000000
	.word 0x33333000,0x34111000,0x34000000,0x34000000,0x34000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000043,0x00000043,0x00000043,0x00022243,0x00033333
	.word 0x00000000,0x00000000,0x00000000,0x34000000,0x34000000,0x34000000,0x34222000,0x33333000
	.word 0x00000000,0x00333330,0x00111430,0x00000430,0x00000430,0x00000430,0x00000000,0x00000000
	.word 0x00000000,0x03333300,0x03411100,0x03400000,0x03400000,0x03400000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000430,0x00000430,0x00000430,0x00222430,0x00333330,0x00000000
	.word 0x00000000,0x00000000,0x03400000,0x03400000,0x03400000,0x03422200,0x03333300,0x00000000

	.section .rodata
	.align	2
	.global ui_selector_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_selector_bn_gfxPal
ui_selector_bn_gfxPal:
	.hword 0x0000,0x1278,0x777B,0x477D,0x26DD,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_selector_bn_gfx)
