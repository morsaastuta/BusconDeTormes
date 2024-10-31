
@{{BLOCK(p_wood_hurt_1_bn_gfx)

@=======================================================================
@
@	p_wood_hurt_1_bn_gfx, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2024-08-20, 19:03:06
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global p_wood_hurt_1_bn_gfxTiles		@ 128 unsigned chars
	.hidden p_wood_hurt_1_bn_gfxTiles
p_wood_hurt_1_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x0000FFFF,0xFFFEEEEE,0xDEEEEECC,0x0BBCEEEE,0xBCDCDCCD,0xDDEEEEEE
	.word 0x00000000,0x00000000,0x00000000,0xFFFFFEFF,0xEDDEE0BD,0xBBC00DC0,0xEDDBC0CB,0xB00EEDDC
	.word 0xBBCEDDEE,0xCEDCCCDC,0xBBBBBBBC,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x0CBCC000,0x00EB0DCB,0xDBBBB0BB,0x0000BEE0,0x0000000E,0x00000E00,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global p_wood_hurt_1_bn_gfxPal		@ 32 unsigned chars
	.hidden p_wood_hurt_1_bn_gfxPal
p_wood_hurt_1_bn_gfxPal:
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0867,0x0CA9,0x10CA,0x150C,0x2190

@}}BLOCK(p_wood_hurt_1_bn_gfx)
