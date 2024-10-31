
@{{BLOCK(ui_menu_a_bn_gfx)

@=======================================================================
@
@	ui_menu_a_bn_gfx, 16x16@4, 
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
	.global ui_menu_a_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_menu_a_bn_gfxTiles
ui_menu_a_bn_gfxTiles:
	.word 0x22200000,0x44422000,0x11144200,0x11111420,0x33111420,0x13311142,0x11311142,0x33311142
	.word 0x00000222,0x00022444,0x00244111,0x02411111,0x02411133,0x24111331,0x24111311,0x24111333
	.word 0x11311142,0x11311142,0x11311142,0x11111420,0x11111420,0x11144200,0x44422000,0x22200000
	.word 0x24111311,0x24111311,0x24111311,0x02411111,0x02411111,0x00244111,0x00022444,0x00000222

	.section .rodata
	.align	2
	.global ui_menu_a_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_menu_a_bn_gfxPal
ui_menu_a_bn_gfxPal:
	.hword 0x0000,0x052F,0x0067,0x0069,0x00A9,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_menu_a_bn_gfx)
