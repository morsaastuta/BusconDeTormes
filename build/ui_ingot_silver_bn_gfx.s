
@{{BLOCK(ui_ingot_silver_bn_gfx)

@=======================================================================
@
@	ui_ingot_silver_bn_gfx, 16x16@4, 
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
	.global ui_ingot_silver_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_ingot_silver_bn_gfxTiles
ui_ingot_silver_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x40000000,0x14400000,0x21144000,0x22211440,0x22222114
	.word 0x00000000,0x00000000,0x00000440,0x00044114,0x04411221,0x41162222,0x43666622,0x43552666
	.word 0x66666534,0x26651134,0x55111134,0x55111334,0x35133440,0x43344000,0x04400000,0x00000000
	.word 0x43555526,0x43355555,0x04433555,0x00044335,0x00000443,0x00000004,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global ui_ingot_silver_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_ingot_silver_bn_gfxPal
ui_ingot_silver_bn_gfxPal:
	.hword 0x0000,0x4E70,0x739C,0x3126,0x0067,0x5AD6,0x7FFF,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_ingot_silver_bn_gfx)
