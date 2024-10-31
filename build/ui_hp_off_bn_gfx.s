
@{{BLOCK(ui_hp_off_bn_gfx)

@=======================================================================
@
@	ui_hp_off_bn_gfx, 16x16@4, 
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
	.global ui_hp_off_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_hp_off_bn_gfxTiles
ui_hp_off_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000044,0x00003552,0x00066320
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00011610,0x00001610,0x00000100,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global ui_hp_off_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_hp_off_bn_gfxPal
ui_hp_off_bn_gfxPal:
	.hword 0x0000,0x0C68,0x01CB,0x388D,0x0316,0x024F,0x40CF,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_hp_off_bn_gfx)
