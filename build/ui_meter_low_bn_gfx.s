
@{{BLOCK(ui_meter_low_bn_gfx)

@=======================================================================
@
@	ui_meter_low_bn_gfx, 16x16@4, 
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
	.global ui_meter_low_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_meter_low_bn_gfxTiles
ui_meter_low_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x44444400,0x13333340,0x15222210,0x15212210,0x15211210
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x15211210,0x15212210,0x15222210,0x14444410,0x11111100,0x00000000,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global ui_meter_low_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_meter_low_bn_gfxPal
ui_meter_low_bn_gfxPal:
	.hword 0x0000,0x00AB,0x09DA,0x22FF,0x010E,0x0171,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_meter_low_bn_gfx)
