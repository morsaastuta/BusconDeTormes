
@{{BLOCK(ui_mp_3_bn_gfx)

@=======================================================================
@
@	ui_mp_3_bn_gfx, 16x16@4, 
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
	.global ui_mp_3_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_mp_3_bn_gfxTiles
ui_mp_3_bn_gfxTiles:
	.word 0x02222000,0x25999200,0xF3559200,0xFF332000,0x8FFAA200,0xB4444200,0x0BB42000,0xB0004200
	.word 0x00000000,0x00000002,0x0000002F,0x00000028,0x000022F7,0x0002F000,0x002FCC00,0x02F0C000
	.word 0x70004200,0x00EE8200,0xEEDC8200,0xDD6C8200,0xD6C82000,0xCC820000,0x48200000,0x22000000
	.word 0x02A0000B,0x02A00000,0x02800EEE,0x024EEEEE,0x0024DDDD,0x00024666,0x00002444,0x00000222

	.section .rodata
	.align	2
	.global ui_mp_3_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_mp_3_bn_gfxPal
ui_mp_3_bn_gfxPal:
	.hword 0x0000,0x0000,0x0067,0x052F,0x3DE4,0x0170,0x02AA,0x15F6
	.hword 0x5E68,0x0DFA,0x6F6F,0x2EDF,0x7FFF,0x03F5,0x2BFF,0x7FF3

@}}BLOCK(ui_mp_3_bn_gfx)