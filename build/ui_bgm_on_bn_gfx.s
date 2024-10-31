
@{{BLOCK(ui_bgm_on_bn_gfx)

@=======================================================================
@
@	ui_bgm_on_bn_gfx, 16x16@4, 
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
	.global ui_bgm_on_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_bgm_on_bn_gfxTiles
ui_bgm_on_bn_gfxTiles:
	.word 0xAAAAAAA0,0xFFFFFFFA,0xEEEEEEDA,0xEEEEEEDA,0xBBBEEEDA,0xEEBEEEDA,0xBBBEEEDA,0xEEBEEEDA
	.word 0x0AAAAAAA,0xAFFFFFFF,0xADEEEEEE,0xADEEBBBB,0xADEEBEEE,0xADEEBBBE,0xADEEBEEB,0xADEEBEEE
	.word 0xEEBEEEDA,0xEEBBEEDA,0xEEBBBEDA,0xEEBBBEDA,0xEEEEEEDA,0xCCCCCCDA,0xCCCCCCDA,0xAAAAAAA0
	.word 0xADEEBBEE,0xADEEBBBE,0xADEEBBBE,0xADEEEEEE,0xADEEEEEE,0xADCCCCCC,0xADCCCCCC,0x0AAAAAAA

	.section .rodata
	.align	2
	.global ui_bgm_on_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_bgm_on_bn_gfxPal
ui_bgm_on_bn_gfxPal:
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0067,0x00AB,0x010F,0x0170,0x0DFA,0x26DF

@}}BLOCK(ui_bgm_on_bn_gfx)
