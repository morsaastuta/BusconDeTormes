
@{{BLOCK(ui_sfx_on_bn_gfx)

@=======================================================================
@
@	ui_sfx_on_bn_gfx, 16x16@4, 
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
	.global ui_sfx_on_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_sfx_on_bn_gfxTiles
ui_sfx_on_bn_gfxTiles:
	.word 0x22222220,0x11111112,0x11111112,0x11111112,0x31111112,0x33111112,0x33331112,0x33331112
	.word 0x02222222,0x21111111,0x21111111,0x21111111,0x21113113,0x21111313,0x21111113,0x21113313
	.word 0x33331112,0x33111112,0x31111112,0x11111112,0x11111112,0x44444443,0x44444443,0x33333330
	.word 0x21111113,0x21111313,0x21113113,0x21111111,0x21111111,0x34444444,0x34444444,0x03333333

	.section .rodata
	.align	2
	.global ui_sfx_on_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_sfx_on_bn_gfxPal
ui_sfx_on_bn_gfxPal:
	.hword 0x0000,0x09DA,0x010E,0x00AB,0x0171,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_sfx_on_bn_gfx)
