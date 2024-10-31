
@{{BLOCK(ui_bgm_off_bn_gfx)

@=======================================================================
@
@	ui_bgm_off_bn_gfx, 16x16@4, 
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
	.global ui_bgm_off_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_bgm_off_bn_gfxTiles
ui_bgm_off_bn_gfxTiles:
	.word 0x44444440,0x33333334,0x11111154,0x11111154,0x22211154,0x11211154,0x22211154,0x11211154
	.word 0x04444444,0x43333333,0x45111111,0x45111122,0x45112111,0x45111211,0x45112121,0x45112112
	.word 0x21211154,0x12121154,0x11212154,0x11221154,0x11111154,0x22222254,0x22222254,0x44444440
	.word 0x45112211,0x45112221,0x45112221,0x45111111,0x45111111,0x45222222,0x45222222,0x04444444

	.section .rodata
	.align	2
	.global ui_bgm_off_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_bgm_off_bn_gfxPal
ui_bgm_off_bn_gfxPal:
	.hword 0x0000,0x0DFA,0x010F,0x26DF,0x0067,0x0170,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_bgm_off_bn_gfx)
