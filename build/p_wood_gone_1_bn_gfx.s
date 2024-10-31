
@{{BLOCK(p_wood_gone_1_bn_gfx)

@=======================================================================
@
@	p_wood_gone_1_bn_gfx, 16x16@4, 
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
	.global p_wood_gone_1_bn_gfxTiles		@ 128 unsigned chars
	.hidden p_wood_gone_1_bn_gfxTiles
p_wood_gone_1_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x0000000F,0x0000FFFE,0x00FEEEEC,0xFFEECCCE,0xDEBCEE00
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xFFF00000,0xDEE000B0
	.word 0x0BC0C00E,0x000EEED0,0x0DBCED00,0x0B000CBB,0xBB0BBB00,0xB0000000,0x00EE0000,0x0E000000
	.word 0xC00000CB,0x0B000000,0xCEE0000D,0x0C000000,0x0000E000,0xBB000E00,0x0BE00000,0x000E0000

	.section .rodata
	.align	2
	.global p_wood_gone_1_bn_gfxPal		@ 32 unsigned chars
	.hidden p_wood_gone_1_bn_gfxPal
p_wood_gone_1_bn_gfxPal:
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0867,0x0CA9,0x10CA,0x150C,0x2190

@}}BLOCK(p_wood_gone_1_bn_gfx)
