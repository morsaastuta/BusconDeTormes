
@{{BLOCK(ui_meter_0_bn_gfx)

@=======================================================================
@
@	ui_meter_0_bn_gfx, 32x16@4, 
@	+ palette 16 entries, not compressed
@	+ 8 tiles not compressed
@	Total size: 32 + 256 = 288
@
@	Time-stamp: 2024-08-20, 19:03:05
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global ui_meter_0_bn_gfxTiles		@ 256 unsigned chars
	.hidden ui_meter_0_bn_gfxTiles
ui_meter_0_bn_gfxTiles:
	.word 0x00000000,0x11111100,0x44444410,0x22222451,0x33332253,0x35553333,0x35534443,0x35532253
	.word 0x00000000,0x11111111,0x44444444,0x22222222,0x33333333,0x35553555,0x35553555,0x35553555
	.word 0x00000000,0x11111111,0x44444444,0x22222222,0x33333333,0x35553555,0x35553555,0x35553555
	.word 0x00000000,0x00011111,0x00144444,0x01542222,0x03522333,0x03333555,0x03444355,0x03522355
	.word 0x35532253,0x35531113,0x35553333,0x11112253,0x22222553,0x55555530,0x33333300,0x00000000
	.word 0x35553555,0x35553555,0x35553555,0x11111111,0x22222222,0x55555555,0x33333333,0x00000000
	.word 0x35553555,0x35553555,0x35553555,0x11111111,0x22222222,0x55555555,0x33333333,0x00000000
	.word 0x03522355,0x03111355,0x03333555,0x03522111,0x03552222,0x00355555,0x00033333,0x00000000

	.section .rodata
	.align	2
	.global ui_meter_0_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_meter_0_bn_gfxPal
ui_meter_0_bn_gfxPal:
	.hword 0x0000,0x010E,0x09DA,0x00AB,0x22FF,0x0171,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_meter_0_bn_gfx)
