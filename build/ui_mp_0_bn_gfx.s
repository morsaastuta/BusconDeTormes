
@{{BLOCK(ui_mp_0_bn_gfx)

@=======================================================================
@
@	ui_mp_0_bn_gfx, 16x16@4, 
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
	.global ui_mp_0_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_mp_0_bn_gfxTiles
ui_mp_0_bn_gfxTiles:
	.word 0x05555000,0x58BBB500,0xF688B500,0xFF665000,0xAFFCC500,0xD7777500,0x0DD75000,0xD0007500
	.word 0x00000000,0x00000005,0x0000005F,0x0000005A,0x000055F9,0x0005F000,0x005FEE00,0x05F0E000
	.word 0x90007500,0x0000A500,0x000EA500,0x000EA500,0x00EA5000,0xEEA50000,0x7A500000,0x55000000
	.word 0x05C0000D,0x05C00000,0x05A00000,0x05750000,0x00575000,0x0005755E,0x00005777,0x00000555

	.section .rodata
	.align	2
	.global ui_mp_0_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_mp_0_bn_gfxPal
ui_mp_0_bn_gfxPal:
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0067,0x052F,0x3DE4
	.hword 0x0170,0x15F6,0x5E68,0x0DFA,0x6F6F,0x2EDF,0x7FFF,0x7FF3

@}}BLOCK(ui_mp_0_bn_gfx)
