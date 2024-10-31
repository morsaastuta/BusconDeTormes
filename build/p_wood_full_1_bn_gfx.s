
@{{BLOCK(p_wood_full_1_bn_gfx)

@=======================================================================
@
@	p_wood_full_1_bn_gfx, 16x16@4, 
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
	.global p_wood_full_1_bn_gfxTiles		@ 128 unsigned chars
	.hidden p_wood_full_1_bn_gfxTiles
p_wood_full_1_bn_gfxTiles:
	.word 0xFFFFFFFF,0xEEEEEEEE,0xCCDEEECC,0xEDCDEEEE,0xDCCDCCDD,0xDEEEEEEE,0xEEEDDEEE,0xDDCCCDDC
	.word 0xFFFFFFFF,0xCCDDEEDD,0xEDEEEDCC,0xDDDDCCDE,0xECDEEEEE,0xEEEEEDCD,0xDCCCDDEE,0xEEEDCCDE
	.word 0xCCBCBBCE,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0xDBBCBBBC,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global p_wood_full_1_bn_gfxPal		@ 32 unsigned chars
	.hidden p_wood_full_1_bn_gfxPal
p_wood_full_1_bn_gfxPal:
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0867,0x0CA9,0x10CA,0x150C,0x2190

@}}BLOCK(p_wood_full_1_bn_gfx)
