
@{{BLOCK(ui_sfx_off_bn_gfx)

@=======================================================================
@
@	ui_sfx_off_bn_gfx, 16x16@4, 
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
	.global ui_sfx_off_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_sfx_off_bn_gfxTiles
ui_sfx_off_bn_gfxTiles:
	.word 0x44444440,0x11111114,0x11111114,0x11111114,0x41111114,0x44111114,0x14441114,0x41441114
	.word 0x04444444,0x41111111,0x41111111,0x41114111,0x41111414,0x41111141,0x41111114,0x41114414
	.word 0x44141114,0x44411114,0x41141114,0x11111114,0x11111114,0x33333332,0x33333332,0x22222220
	.word 0x41111114,0x41111414,0x41114114,0x41111111,0x41111111,0x23333333,0x23333333,0x02222222

	.section .rodata
	.align	2
	.global ui_sfx_off_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_sfx_off_bn_gfxPal
ui_sfx_off_bn_gfxPal:
	.hword 0x0000,0x09DA,0x00AB,0x0171,0x010E,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_sfx_off_bn_gfx)
