
@{{BLOCK(ui_item_hp_bn_gfx)

@=======================================================================
@
@	ui_item_hp_bn_gfx, 16x16@4, 
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
	.global ui_item_hp_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_item_hp_bn_gfxTiles
ui_item_hp_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x60000000,0x26000000,0x22600000,0x22600000
	.word 0x00000000,0x00000000,0x00000000,0x00000580,0x00003566,0x00003677,0x00000672,0x00000177
	.word 0x74600000,0x44100000,0x11000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000144,0x00000014,0x00000001,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global ui_item_hp_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_item_hp_bn_gfxPal
ui_item_hp_bn_gfxPal:
	.hword 0x0000,0x300A,0x75DD,0x018A,0x4490,0x02B3,0x404C,0x4513
	.hword 0x020E,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_item_hp_bn_gfx)
