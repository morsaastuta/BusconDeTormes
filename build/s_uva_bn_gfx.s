
@{{BLOCK(s_uva_bn_gfx)

@=======================================================================
@
@	s_uva_bn_gfx, 16x16@4, 
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
	.global s_uva_bn_gfxTiles		@ 128 unsigned chars
	.hidden s_uva_bn_gfxTiles
s_uva_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x70000000,0x57000000,0x55700000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000280,0x00004277,0x00004766,0x00000765
	.word 0x55700000,0x63700000,0x33100000,0x11000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000166,0x00000133,0x00000013,0x00000001,0x00000000,0x00000000,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global s_uva_bn_gfxPal		@ 32 unsigned chars
	.hidden s_uva_bn_gfxPal
s_uva_bn_gfxPal:
	.hword 0x0000,0x000E,0x02B3,0x0097,0x018A,0x3A7D,0x019B,0x0851
	.hword 0x020E,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(s_uva_bn_gfx)
