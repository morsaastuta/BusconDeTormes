
@{{BLOCK(s_piedra_bn_gfx)

@=======================================================================
@
@	s_piedra_bn_gfx, 8x8@4, 
@	+ palette 16 entries, not compressed
@	+ 1 tiles not compressed
@	Total size: 32 + 32 = 64
@
@	Time-stamp: 2024-08-20, 19:03:05
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global s_piedra_bn_gfxTiles		@ 32 unsigned chars
	.hidden s_piedra_bn_gfxTiles
s_piedra_bn_gfxTiles:
	.word 0x00000000,0x00424000,0x01122400,0x03314210,0x03331310,0x03133330,0x00311300,0x00000000

	.section .rodata
	.align	2
	.global s_piedra_bn_gfxPal		@ 32 unsigned chars
	.hidden s_piedra_bn_gfxPal
s_piedra_bn_gfxPal:
	.hword 0x0000,0x1D2F,0x5F7E,0x18A9,0x3637,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(s_piedra_bn_gfx)
