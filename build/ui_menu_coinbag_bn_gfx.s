
@{{BLOCK(ui_menu_coinbag_bn_gfx)

@=======================================================================
@
@	ui_menu_coinbag_bn_gfx, 16x16@4, 
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
	.global ui_menu_coinbag_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_menu_coinbag_bn_gfxTiles
ui_menu_coinbag_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x30000000,0x13300000,0x11530000,0x55530000,0x55300000,0x55230000
	.word 0x00000000,0x00000000,0x00000033,0x00000351,0x00000355,0x00000355,0x00000035,0x00000325
	.word 0x22430000,0x24553000,0x25555300,0x42555300,0x54551300,0x11113000,0x33330000,0x00000000
	.word 0x00000342,0x00003554,0x00035555,0x00035555,0x00031555,0x00003111,0x00000333,0x00000000

	.section .rodata
	.align	2
	.global ui_menu_coinbag_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_menu_coinbag_bn_gfxPal
ui_menu_coinbag_bn_gfxPal:
	.hword 0x0000,0x00AB,0x2EDF,0x0067,0x010F,0x0170,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_menu_coinbag_bn_gfx)
