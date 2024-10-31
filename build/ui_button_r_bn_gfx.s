
@{{BLOCK(ui_button_r_bn_gfx)

@=======================================================================
@
@	ui_button_r_bn_gfx, 16x16@4, 
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
	.global ui_button_r_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_button_r_bn_gfxTiles
ui_button_r_bn_gfxTiles:
	.word 0xAAAAAAA0,0xFFFFFFFA,0xEEEEEEDA,0xBEEEEEDA,0xBEEEEEDA,0xBEEEEEDA,0xBEEEEEDA,0xBEEEEEDA
	.word 0x0AAAAAAA,0xAFFFFFFF,0xADEEEEEE,0xADEEEBBB,0xADEEEBEE,0xADEEEEBB,0xADEEEBEE,0xADEEEBEE
	.word 0xCCCCCCA0,0xAAAAAA00,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0xADEEEEEE,0xADEEEEEC,0xADEEEECA,0xADEEEECA,0xADCCCCA0,0x0AAAAA00,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global ui_button_r_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_button_r_bn_gfxPal
ui_button_r_bn_gfxPal:
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0067,0x00AB,0x010F,0x0170,0x0DFA,0x26DF

@}}BLOCK(ui_button_r_bn_gfx)
