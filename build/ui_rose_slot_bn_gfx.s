
@{{BLOCK(ui_rose_slot_bn_gfx)

@=======================================================================
@
@	ui_rose_slot_bn_gfx, 16x16@4, 
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
	.global ui_rose_slot_bn_gfxTiles		@ 128 unsigned chars
	.hidden ui_rose_slot_bn_gfxTiles
ui_rose_slot_bn_gfxTiles:
	.word 0x00000000,0x01100000,0x13310000,0x34431000,0x33443100,0x44343100,0x34434310,0x43434310
	.word 0x00000000,0x00000011,0x00000133,0x00000134,0x00001344,0x00013443,0x00013443,0x00013443
	.word 0x33343100,0x43343100,0x43331000,0x32110000,0x11000000,0x00000000,0x00000000,0x00000000
	.word 0x00001344,0x00001344,0x00001233,0x00000122,0x00012122,0x00001221,0x00000110,0x00000000

	.section .rodata
	.align	2
	.global ui_rose_slot_bn_gfxPal		@ 32 unsigned chars
	.hidden ui_rose_slot_bn_gfxPal
ui_rose_slot_bn_gfxPal:
	.hword 0x0000,0x0067,0x010F,0x00AB,0x0170,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(ui_rose_slot_bn_gfx)
