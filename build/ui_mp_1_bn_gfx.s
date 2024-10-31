
@{{BLOCK(ui_mp_1_bn_gfx)

@=======================================================================
@
@	ui_mp_1_bn_gfx, 16x16@4, 
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
	.global ui_mp_1_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_mp_1_bn_gfxTiles
ui_mp_1_bn_gfxTiles:
	.word 0x03333000,0x36999300,0xF4669300,0xFF443000,0x8FFAA300,0xB5555300,0x0BB53000,0xB0005300
	.word 0x00000000,0x00000003,0x0000003F,0x00000038,0x000033F7,0x0003F000,0x003FCC00,0x03F0C000
	.word 0x70005300,0x00008300,0x000C8300,0x000C8300,0x00C83000,0xCC830000,0x58300000,0x33000000
	.word 0x03A0000B,0x03A00000,0x03800000,0x035E0000,0x0035E000,0x00035DEE,0x00003555,0x00000333

	.section .rodata
	.align	2
	.global ui_mp_1_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_mp_1_bn_gfxPal
ui_mp_1_bn_gfxPal:
	.hword 0x0000,0x0000,0x0000,0x0067,0x052F,0x3DE4,0x0170,0x15F6
	.hword 0x5E68,0x0DFA,0x6F6F,0x2EDF,0x7FFF,0x03F5,0x2BFF,0x7FF3

@}}BLOCK(ui_mp_1_bn_gfx)
