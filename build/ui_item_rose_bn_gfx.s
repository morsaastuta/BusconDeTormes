
@{{BLOCK(ui_item_rose_bn_gfx)

@=======================================================================
@
@	ui_item_rose_bn_gfx, 16x16@4, 
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
	.global ui_item_rose_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_item_rose_bn_gfxTiles
ui_item_rose_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x44000000,0x31000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000044,0x00000433,0x00004344
	.word 0x41000000,0x10000000,0x50000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00004331,0x00000144,0x00000011,0x00000056,0x00000002,0x00000002,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global ui_item_rose_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_item_rose_bn_gfxPal
ui_item_rose_bn_gfxPal:
	.hword 0x0000,0x080C,0x018A,0x2897,0x0813,0x02B3,0x020E,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_item_rose_bn_gfx)
