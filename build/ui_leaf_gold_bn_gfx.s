
@{{BLOCK(ui_leaf_gold_bn_gfx)

@=======================================================================
@
@	ui_leaf_gold_bn_gfx, 16x16@4, 
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
	.global ui_leaf_gold_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_leaf_gold_bn_gfxTiles
ui_leaf_gold_bn_gfxTiles:
	.word 0x00000000,0x30000000,0x30000000,0x30330000,0x43430000,0x54303300,0x21334300,0x13443000
	.word 0x00000003,0x00000034,0x00000034,0x00033035,0x00034342,0x03303454,0x03433124,0x00344314
	.word 0x54213000,0x26130000,0x61300000,0x13130000,0x61300000,0x13000000,0x30000000,0x00000000
	.word 0x00312454,0x00031624,0x00003164,0x00031314,0x00003164,0x00000314,0x00000031,0x00000003

	.section .rodata
	.align	2
	.global ui_leaf_gold_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_leaf_gold_bn_gfxPal
ui_leaf_gold_bn_gfxPal:
	.hword 0x0000,0x0153,0x03BF,0x0067,0x023B,0x43FF,0x02DD,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_leaf_gold_bn_gfx)
