
@{{BLOCK(ui_item_shield_gold_bn_gfx)

@=======================================================================
@
@	ui_item_shield_gold_bn_gfx, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2024-08-20, 19:03:06
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global ui_item_shield_gold_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_item_shield_gold_bn_gfxTiles
ui_item_shield_gold_bn_gfxTiles:
	.word 0x86600000,0x72E66000,0x4AAE5600,0x8AAAA560,0x441AAE60,0xDD41AAE6,0x7DD4AA26,0x77948778
	.word 0x00000668,0x00066E27,0x0065EAA4,0x065AAAA8,0x06EAA144,0x6EAA1499,0x62AA4997,0x87784977
	.word 0x774B8448,0x744B1163,0x44B11163,0x88C11630,0x8CCCC630,0x7CC66300,0xB6633000,0x83300000
	.word 0x8448B477,0x3611B447,0x36111B44,0x03611C88,0x036CCCC8,0x00366CC7,0x0033366B,0x00000338

	.section .rodata
	.align	2
	.global ui_item_shield_gold_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_item_shield_gold_bn_gfxPal
ui_item_shield_gold_bn_gfxPal:
	.hword 0x0000,0x0DD8,0x3ABC,0x0CEA,0x02DD,0x739C,0x0CF1,0x03BF
	.hword 0x0153,0x43FF,0x0E38,0x023B,0x0D55,0x7FFF,0x3B3F,0x0000

@}}BLOCK(ui_item_shield_gold_bn_gfx)
