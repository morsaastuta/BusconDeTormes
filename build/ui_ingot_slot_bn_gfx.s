
@{{BLOCK(ui_ingot_slot_bn_gfx)

@=======================================================================
@
@	ui_ingot_slot_bn_gfx, 16x16@4, 
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
	.global ui_ingot_slot_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_ingot_slot_bn_gfxTiles
ui_ingot_slot_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x20000000,0x32200000,0x33322000,0x33333220
	.word 0x00000000,0x00000000,0x00000000,0x00000220,0x00022332,0x02233333,0x02311333,0x02333113
	.word 0x13311320,0x31133320,0x33333320,0x33333220,0x23322000,0x02200000,0x00000000,0x00000000
	.word 0x02333331,0x02233333,0x00022333,0x00000223,0x00000002,0x00000000,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global ui_ingot_slot_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_ingot_slot_bn_gfxPal
ui_ingot_slot_bn_gfxPal:
	.hword 0x0000,0x00AB,0x0067,0x0170,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_ingot_slot_bn_gfx)
