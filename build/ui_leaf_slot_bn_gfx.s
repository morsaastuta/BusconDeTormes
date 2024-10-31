
@{{BLOCK(ui_leaf_slot_bn_gfx)

@=======================================================================
@
@	ui_leaf_slot_bn_gfx, 16x16@4, 
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
	.global ui_leaf_slot_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_leaf_slot_bn_gfxTiles
ui_leaf_slot_bn_gfxTiles:
	.word 0x00000000,0x10000000,0x10000000,0x10110000,0x31210000,0x22101100,0x23112100,0x31321000
	.word 0x00000001,0x00000012,0x00000012,0x00011012,0x00012132,0x01101223,0x01211323,0x00123133
	.word 0x23231000,0x22310000,0x23100000,0x31310000,0x23100000,0x31000000,0x10000000,0x00000000
	.word 0x00132323,0x00013223,0x00001323,0x00013133,0x00001323,0x00000133,0x00000013,0x00000001

	.section .rodata
	.align	2
	.global ui_leaf_slot_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_leaf_slot_bn_gfxPal
ui_leaf_slot_bn_gfxPal:
	.hword 0x0000,0x0067,0x0170,0x00AB,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_leaf_slot_bn_gfx)
