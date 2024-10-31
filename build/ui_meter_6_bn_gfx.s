
@{{BLOCK(ui_meter_6_bn_gfx)

@=======================================================================
@
@	ui_meter_6_bn_gfx, 32x16@4, 
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
	.global ui_meter_6_bn_gfxTiles		@ 256 unsigned chars
	.hidden ui_meter_6_bn_gfxTiles
ui_meter_6_bn_gfxTiles:
	.word 0x00000000,0x44444400,0x66666640,0x11111674,0x22221172,0x26662222,0x25526662,0x23321172
	.word 0x00000000,0x44444444,0x66666666,0x11111111,0x22222222,0x26662666,0x25552555,0x23332333
	.word 0x00000000,0x44444444,0x66666666,0x11111111,0x22222222,0x26662666,0x25552555,0x23332333
	.word 0x00000000,0x00044444,0x00466666,0x04761111,0x02711222,0x02222666,0x02666255,0x02711233
	.word 0x23321172,0x23324442,0x23332222,0x44441172,0x11111772,0x77777720,0x22222200,0x00000000
	.word 0x23332333,0x23332333,0x23332333,0x44444444,0x11111111,0x77777777,0x22222222,0x00000000
	.word 0x23332333,0x23332333,0x23332333,0x44444444,0x11111111,0x77777777,0x22222222,0x00000000
	.word 0x02711233,0x02444233,0x02222333,0x02711444,0x02771111,0x00277777,0x00022222,0x00000000

	.section .rodata
	.align	2
	.global ui_meter_6_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_meter_6_bn_gfxPal
ui_meter_6_bn_gfxPal:
	.hword 0x0000,0x09DA,0x00AB,0x2EFD,0x010E,0x47BF,0x22FF,0x0171
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_meter_6_bn_gfx)
