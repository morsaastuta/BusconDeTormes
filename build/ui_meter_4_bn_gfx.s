
@{{BLOCK(ui_meter_4_bn_gfx)

@=======================================================================
@
@	ui_meter_4_bn_gfx, 32x16@4, 
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
	.global ui_meter_4_bn_gfxTiles		@ 256 unsigned chars
	.hidden ui_meter_4_bn_gfxTiles
ui_meter_4_bn_gfxTiles:
	.word 0x00000000,0x44444400,0x77777740,0x11111764,0x22221162,0x27772222,0x25527772,0x23321162
	.word 0x00000000,0x44444444,0x77777777,0x11111111,0x22222222,0x27772777,0x25552555,0x23332333
	.word 0x00000000,0x44444444,0x77777777,0x11111111,0x22222222,0x26662777,0x26662555,0x26662333
	.word 0x00000000,0x00044444,0x00477777,0x04671111,0x02611222,0x02222666,0x02777266,0x02611266
	.word 0x23321162,0x23324442,0x23332222,0x44441162,0x11111662,0x66666620,0x22222200,0x00000000
	.word 0x23332333,0x23332333,0x23332333,0x44444444,0x11111111,0x66666666,0x22222222,0x00000000
	.word 0x26662333,0x26662333,0x26662333,0x44444444,0x11111111,0x66666666,0x22222222,0x00000000
	.word 0x02611266,0x02444266,0x02222666,0x02611444,0x02661111,0x00266666,0x00022222,0x00000000

	.section .rodata
	.align	2
	.global ui_meter_4_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_meter_4_bn_gfxPal
ui_meter_4_bn_gfxPal:
	.hword 0x0000,0x09DA,0x00AB,0x2EFD,0x010E,0x47BF,0x0171,0x22FF
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_meter_4_bn_gfx)
