
@{{BLOCK(ui_rose_red_bn_gfx)

@=======================================================================
@
@	ui_rose_red_bn_gfx, 16x16@4, 
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
	.global ui_rose_red_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_rose_red_bn_gfxTiles
ui_rose_red_bn_gfxTiles:
	.word 0x00000000,0x03300000,0x36630000,0x44763000,0x66776300,0x44676300,0x94467630,0x79467630
	.word 0x00000000,0x00000033,0x00000366,0x00000367,0x00003977,0x00039476,0x00039476,0x00039646
	.word 0x66691300,0x46191300,0x61813000,0x12330000,0x33000000,0x00000000,0x00000000,0x00000000
	.word 0x00003164,0x00003166,0x00003811,0x00000325,0x00035352,0x00003553,0x00000330,0x00000000

	.section .rodata
	.align	2
	.global ui_rose_red_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_rose_red_bn_gfxPal
ui_rose_red_bn_gfxPal:
	.hword 0x0000,0x080D,0x020E,0x0067,0x1C16,0x018A,0x0813,0x2897
	.hword 0x02B3,0x0C11,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_rose_red_bn_gfx)
