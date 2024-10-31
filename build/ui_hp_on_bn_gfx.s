
@{{BLOCK(ui_hp_on_bn_gfx)

@=======================================================================
@
@	ui_hp_on_bn_gfx, 16x16@4, 
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
	.global ui_hp_on_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_hp_on_bn_gfxTiles
ui_hp_on_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000088,0x00111336,0x01777160
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x12257740,0x22255740,0x22555740,0x55555740,0x55557740,0x77771400,0x11114000,0x44440000
	.word 0x00000000,0x00000001,0x00000001,0x00000001,0x00000001,0x00000001,0x00000004,0x00000000

	.section .rodata
	.align	2
	.global ui_hp_on_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_hp_on_bn_gfxPal
ui_hp_on_bn_gfxPal:
	.hword 0x0000,0x388D,0x7E1E,0x024F,0x0C68,0x4D15,0x01CB,0x40CF
	.hword 0x0316,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_hp_on_bn_gfx)
