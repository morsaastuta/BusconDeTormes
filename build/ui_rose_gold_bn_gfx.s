
@{{BLOCK(ui_rose_gold_bn_gfx)

@=======================================================================
@
@	ui_rose_gold_bn_gfx, 16x16@4, 
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
	.global ui_rose_gold_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_rose_gold_bn_gfxTiles
ui_rose_gold_bn_gfxTiles:
	.word 0x00000000,0x04400000,0x43340000,0x88534000,0x33563400,0x88363400,0x78836340,0x27835340
	.word 0x00000000,0x00000044,0x00000433,0x00000435,0x00004755,0x00047853,0x00047823,0x00047383
	.word 0x38371400,0x23171400,0x31714000,0x17440000,0x44000000,0x00000000,0x00000000,0x00000000
	.word 0x00004136,0x00004133,0x00004711,0x00000417,0x00041471,0x00004114,0x00000440,0x00000000

	.section .rodata
	.align	2
	.global ui_rose_gold_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_rose_gold_bn_gfxPal
ui_rose_gold_bn_gfxPal:
	.hword 0x0000,0x0153,0x43FF,0x023B,0x0067,0x03BF,0x7FFF,0x01D8
	.hword 0x02DD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_rose_gold_bn_gfx)
