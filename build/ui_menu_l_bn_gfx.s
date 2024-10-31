
@{{BLOCK(ui_menu_l_bn_gfx)

@=======================================================================
@
@	ui_menu_l_bn_gfx, 16x16@4, 
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
	.global ui_menu_l_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_menu_l_bn_gfxTiles
ui_menu_l_bn_gfxTiles:
	.word 0x11111110,0x44444441,0x22222241,0x23222241,0x23222241,0x23222241,0x23222241,0x33222241
	.word 0x01111111,0x14444444,0x14222222,0x14222222,0x14222222,0x14222222,0x14222222,0x14222223
	.word 0x22222241,0x42222241,0x14222241,0x14222241,0x01444441,0x00111110,0x00000000,0x00000000
	.word 0x01444444,0x00111111,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global ui_menu_l_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_menu_l_bn_gfxPal
ui_menu_l_bn_gfxPal:
	.hword 0x0000,0x0067,0x052F,0x0069,0x00A9,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_menu_l_bn_gfx)
