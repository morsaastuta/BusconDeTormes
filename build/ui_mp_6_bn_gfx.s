
@{{BLOCK(ui_mp_6_bn_gfx)

@=======================================================================
@
@	ui_mp_6_bn_gfx, 16x16@4, 
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
	.global ui_mp_6_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_mp_6_bn_gfxTiles
ui_mp_6_bn_gfxTiles:
	.word 0x02222000,0x25999200,0xF3559200,0xFF332000,0x8FFAA200,0xB4444200,0x0BB42000,0xB0004200
	.word 0x00000000,0x00000002,0x0000002F,0x00000028,0x000022F7,0x0002F000,0x002FDD00,0x02FCDEE0
	.word 0x70004200,0xEEE08200,0xEEED8200,0xCC6D8200,0x66D82000,0xDD820000,0x48200000,0x22000000
	.word 0x02ACEEEB,0x02ACCCEE,0x028CCCCC,0x0246CCCC,0x00246CCC,0x00024666,0x00002444,0x00000222

	.section .rodata
	.align	2
	.global ui_mp_6_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_mp_6_bn_gfxPal
ui_mp_6_bn_gfxPal:
	.hword 0x0000,0x0000,0x0067,0x052F,0x3DE4,0x0170,0x02AA,0x15F6
	.hword 0x5E68,0x0DFA,0x6F6F,0x2EDF,0x03F5,0x7FFF,0x2BFF,0x7FF3

@}}BLOCK(ui_mp_6_bn_gfx)
