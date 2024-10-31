
@{{BLOCK(ui_ingot_gold_bn_gfx)

@=======================================================================
@
@	ui_ingot_gold_bn_gfx, 16x16@4, 
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
	.global ui_ingot_gold_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_ingot_gold_bn_gfxTiles
ui_ingot_gold_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x40000000,0x34400000,0x53344000,0x55533440,0x55555334
	.word 0x00000000,0x00000000,0x00000440,0x00044334,0x04433553,0x43325555,0x41266255,0x41775662
	.word 0x62266714,0x56673314,0x77333314,0x77333114,0x17311440,0x41144000,0x04400000,0x00000000
	.word 0x41777756,0x41177777,0x04411777,0x00044117,0x00000441,0x00000004,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global ui_ingot_gold_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_ingot_gold_bn_gfxPal
ui_ingot_gold_bn_gfxPal:
	.hword 0x0000,0x0153,0x43FF,0x023B,0x0067,0x03BF,0x7FFF,0x02DD
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_ingot_gold_bn_gfx)
