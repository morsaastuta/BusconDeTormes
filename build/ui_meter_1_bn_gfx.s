
@{{BLOCK(ui_meter_1_bn_gfx)

@=======================================================================
@
@	ui_meter_1_bn_gfx, 32x16@4, 
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
	.global ui_meter_1_bn_gfxTiles		@ 256 unsigned chars
	.hidden ui_meter_1_bn_gfxTiles
ui_meter_1_bn_gfxTiles:
	.word 0x00000000,0x44444400,0x77777740,0x11111754,0x22221152,0x27772222,0x26627772,0x23321152
	.word 0x00000000,0x44444444,0x77777777,0x11111111,0x22222222,0x25552555,0x25552555,0x25552555
	.word 0x00000000,0x44444444,0x77777777,0x11111111,0x22222222,0x25552555,0x25552555,0x25552555
	.word 0x00000000,0x00044444,0x00477777,0x04571111,0x02511222,0x02222555,0x02777255,0x02511255
	.word 0x23321152,0x23324442,0x23332222,0x44441152,0x11111552,0x55555520,0x22222200,0x00000000
	.word 0x25552555,0x25552555,0x25552555,0x44444444,0x11111111,0x55555555,0x22222222,0x00000000
	.word 0x25552555,0x25552555,0x25552555,0x44444444,0x11111111,0x55555555,0x22222222,0x00000000
	.word 0x02511255,0x02444255,0x02222555,0x02511444,0x02551111,0x00255555,0x00022222,0x00000000

	.section .rodata
	.align	2
	.global ui_meter_1_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_meter_1_bn_gfxPal
ui_meter_1_bn_gfxPal:
	.hword 0x0000,0x09DA,0x00AB,0x2EFD,0x010E,0x0171,0x47BF,0x22FF
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_meter_1_bn_gfx)
