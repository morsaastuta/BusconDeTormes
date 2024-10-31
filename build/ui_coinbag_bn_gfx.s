
@{{BLOCK(ui_coinbag_bn_gfx)

@=======================================================================
@
@	ui_coinbag_bn_gfx, 16x16@4, 
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
	.global ui_coinbag_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_coinbag_bn_gfxTiles
ui_coinbag_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x99000000,0xAE900000,0xEC900000,0xB9000000,0xFD900000
	.word 0x00000000,0x00000000,0x00000999,0x00009EAA,0x00009EEA,0x00009CEE,0x000009BE,0x00009DFF
	.word 0xDB900000,0xBCC90000,0xCECC9000,0xFCCC9000,0xDCCB9000,0xBBB90000,0x99900000,0x00000000
	.word 0x00009BDF,0x0009EEBF,0x009CEEEF,0x009ECECD,0x009BECCC,0x0009BBBB,0x00009999,0x00000000

	.section .rodata
	.align	2
	.global ui_coinbag_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_coinbag_bn_gfxPal
ui_coinbag_bn_gfxPal:
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0067,0x00AB,0x010F,0x05B4,0x15F6,0x0DFA,0x2EDF

@}}BLOCK(ui_coinbag_bn_gfx)
