
@{{BLOCK(ui_button_b_bn_gfx)

@=======================================================================
@
@	ui_button_b_bn_gfx, 16x16@4, 
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
	.global ui_button_b_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_button_b_bn_gfxTiles
ui_button_b_bn_gfxTiles:
	.word 0xAAA00000,0xFFFAA000,0xEEEFFA00,0xEEEEEFA0,0xBBEEEFA0,0xEBEEEEDA,0xEBEEEEDA,0xBBEEEEDA
	.word 0x00000AAA,0x000AAFFF,0x00AFFEEE,0x0AFEEEEE,0x0AFEEEBB,0xADEEEBEE,0xADEEEBEE,0xADEEEEBB
	.word 0xEBEEEEDA,0xEBEEEEDA,0xBBEEEEDA,0xEEEEEDA0,0xEEEEEDA0,0xEEEDDA00,0xCCCAA000,0xAAA00000
	.word 0xADEEEBEE,0xADEEEBEE,0xADEEEEBB,0x0ADEEEEE,0x0ADEEEEE,0x00ADDEEE,0x000AACCC,0x00000AAA

	.section .rodata
	.align	2
	.global ui_button_b_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_button_b_bn_gfxPal
ui_button_b_bn_gfxPal:
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0067,0x00AB,0x010F,0x0170,0x0DFA,0x26DF

@}}BLOCK(ui_button_b_bn_gfx)
