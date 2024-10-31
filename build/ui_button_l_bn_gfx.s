
@{{BLOCK(ui_button_l_bn_gfx)

@=======================================================================
@
@	ui_button_l_bn_gfx, 16x16@4, 
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
	.global ui_button_l_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_button_l_bn_gfxTiles
ui_button_l_bn_gfxTiles:
	.word 0xAAAAAAA0,0xFFFFFFFA,0xEEEEEEDA,0xEBEEEEDA,0xEBEEEEDA,0xEBEEEEDA,0xEBEEEEDA,0xBBEEEEDA
	.word 0x0AAAAAAA,0xAFFFFFFF,0xADEEEEEE,0xADEEEEEE,0xADEEEEEE,0xADEEEEEE,0xADEEEEEE,0xADEEEEEB
	.word 0xEEEEEEDA,0xCEEEEEDA,0xACEEEEDA,0xACEEEEDA,0x0ACCCCDA,0x00AAAAA0,0x00000000,0x00000000
	.word 0x0ACCCCCC,0x00AAAAAA,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global ui_button_l_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_button_l_bn_gfxPal
ui_button_l_bn_gfxPal:
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0067,0x00AB,0x010F,0x0170,0x0DFA,0x26DF

@}}BLOCK(ui_button_l_bn_gfx)
