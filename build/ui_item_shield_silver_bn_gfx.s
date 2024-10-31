
@{{BLOCK(ui_item_shield_silver_bn_gfx)

@=======================================================================
@
@	ui_item_shield_silver_bn_gfx, 16x16@4, 
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
	.global ui_item_shield_silver_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_item_shield_silver_bn_gfxTiles
ui_item_shield_silver_bn_gfxTiles:
	.word 0x22200000,0x16622000,0x43366200,0x23333620,0x44333620,0x66433362,0x36643362,0x33642112
	.word 0x00000222,0x00022661,0x00266334,0x02633332,0x02633344,0x26333466,0x26334663,0x21124633
	.word 0x33142442,0x31141145,0x11411145,0x44111450,0x21111450,0x21144500,0x24455000,0x25500000
	.word 0x24424133,0x54114113,0x54111411,0x05411144,0x05411112,0x00544112,0x00055442,0x00000552

	.section .rodata
	.align	2
	.global ui_item_shield_silver_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_item_shield_silver_bn_gfxPal
ui_item_shield_silver_bn_gfxPal:
	.hword 0x0000,0x4A94,0x1909,0x5B18,0x29AD,0x0C85,0x6B5B,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_item_shield_silver_bn_gfx)
