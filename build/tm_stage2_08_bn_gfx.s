
@{{BLOCK(tm_stage2_08_bn_gfx)

@=======================================================================
@
@	tm_stage2_08_bn_gfx, 256x512@8, 
@	+ palette 32 entries, not compressed
@	+ 67 tiles (t reduced) not compressed
@	+ affine map, not compressed, 32x64 
@	Total size: 64 + 4288 + 2048 = 6400
@
@	Time-stamp: 2024-08-20, 19:03:06
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global tm_stage2_08_bn_gfxTiles		@ 4288 unsigned chars
	.hidden tm_stage2_08_bn_gfxTiles
tm_stage2_08_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x0303030F,0x03030303,0x0303030F,0x03030303,0x0303030F,0x03030303,0x0303030F,0x03030303
	.word 0x0303030F,0x03030303,0x0303030F,0x03030303,0x03030303,0x03030303,0x0303080F,0x03030303
	.word 0x03030303,0x03030303,0x03030303,0x03030303,0x03030303,0x03030303,0x03030303,0x03030303
	.word 0x03030303,0x03030303,0x03030303,0x03030303,0x03030303,0x03030303,0x03030303,0x08030303
	.word 0x03030303,0x03030303,0x03030303,0x03030303,0x03030303,0x03030303,0x03030303,0x03030303
	.word 0x03030303,0x03030303,0x03030303,0x03030303,0x03030303,0x03030303,0x03030308,0x03030303

	.word 0x03030303,0x0F030303,0x03030303,0x0F030303,0x03030303,0x0F030303,0x03030303,0x0F030303
	.word 0x03030303,0x0F030303,0x03030303,0x0F030303,0x03030303,0x03030303,0x03030303,0x0F080303
	.word 0x0308080F,0x03080303,0x08080803,0x08080808,0x01010803,0x01010108,0x01010103,0x01010101
	.word 0x08080803,0x08080808,0x0308080F,0x08030303,0x03030303,0x03080803,0x0303080F,0x03030303
	.word 0x03030303,0x03080808,0x08080808,0x08080808,0x01010101,0x01010101,0x01010808,0x01080101
	.word 0x08080108,0x08080808,0x03030808,0x08080303,0x03030303,0x03030303,0x03030303,0x03030303
	.word 0x08080803,0x03030303,0x08080808,0x08080808,0x01010101,0x01010101,0x01010801,0x08080101
	.word 0x08080808,0x08010808,0x03030808,0x08080303,0x03030303,0x03030303,0x03030303,0x03030303

	.word 0x03030803,0x0F080803,0x08080808,0x03080808,0x08010101,0x03080101,0x01010101,0x03010101
	.word 0x08080808,0x03080808,0x03030308,0x0F080803,0x03080803,0x03030303,0x03030303,0x0F080303
	.word 0x00020000,0x00000000,0x0A0E1200,0x0A0A0A0A,0x14021200,0x12121214,0x000B0000,0x00000000
	.word 0x000B0000,0x00000000,0x0A0E1200,0x0A0A0A0A,0x14021200,0x12121214,0x000B0000,0x00000000
	.word 0x00000000,0x00000200,0x0A0A0A0A,0x00120E0A,0x14121212,0x00120214,0x00000000,0x00000B00
	.word 0x00000000,0x00000B00,0x0A0A0A0A,0x00120E0A,0x14121212,0x00120214,0x00000000,0x00000B00
	.word 0x000B0000,0x00000000,0x0A0E1200,0x0A0A0A0A,0x14021200,0x12121214,0x000B0000,0x00000000
	.word 0x000B0000,0x00000000,0x0A0E1200,0x0A0A0A0A,0x14021200,0x12121214,0x00020000,0x00000000

	.word 0x00000000,0x00000B00,0x0A0A0A0A,0x00120E0A,0x14121212,0x00120214,0x00000000,0x00000B00
	.word 0x00000000,0x00000B00,0x0A0A0A0A,0x00120E0A,0x14121212,0x00120214,0x00000000,0x00000200
	.word 0x0D020D0D,0x0D0E0D0D,0x0A0E1211,0x0A0A0A0A,0x1402120E,0x12121214,0x0E0B1111,0x11110E0E
	.word 0x110B0C11,0x0C11110C,0x0A0E1200,0x0A0A0A0A,0x14021200,0x12121214,0x000B0000,0x00000000
	.word 0x0D0D0D0D,0x0E0D020E,0x0A0A0A0A,0x11120E0A,0x14121212,0x0E120214,0x0C110E0E,0x0E0E0B0C
	.word 0x0C0C110C,0x0C0C0B11,0x0A0A0A0A,0x00120E0A,0x14121212,0x00120214,0x00000000,0x00000B00
	.word 0x000B0000,0x00000000,0x0A0E1200,0x0A0A0A0A,0x14021200,0x12121214,0x000B0000,0x00000000
	.word 0x000B0000,0x00000000,0x0A0E1200,0x0A0A0A0A,0x14021200,0x12121214,0x000B0000,0x00000000

	.word 0x00000000,0x00000B00,0x0A0A0A0A,0x00120E0A,0x14121212,0x00120214,0x00000000,0x00000B00
	.word 0x00000000,0x00000B00,0x0A0A0A0A,0x00120E0A,0x14121212,0x00120214,0x00000000,0x00000B00
	.word 0x000B0000,0x00000000,0x02000000,0x00000000,0x0B000000,0x00000000,0x000B0000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000B00,0x00000000,0x00000002,0x00000000,0x0000000B,0x00000000,0x00000B00
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x0D0D0D0D,0x0D0E0D0D,0x0E0E0E11,0x0E0E1111,0x11110E0E,0x0E11110E,0x0E111111,0x11110E0E
	.word 0x110C0C11,0x0C11110C,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.word 0x0D0D0D0D,0x0E0D0E0E,0x0E110E0E,0x11111111,0x0E0E1111,0x0E110E0E,0x0C110E0E,0x0E0E110C
	.word 0x0C0C110C,0x0C0C0C11,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x10101010,0x10101010,0x03030303,0x03030703,0x03030303,0x03030307,0x08080803,0x03080303
	.word 0x03070303,0x07070703,0x08080808,0x08080808,0x03070703,0x07070707,0x03030303,0x07070703
	.word 0x10101010,0x10101010,0x07030303,0x07070703,0x07070707,0x07070707,0x06060303,0x06060606
	.word 0x06060707,0x06060606,0x06060608,0x13130606,0x06060707,0x13131306,0x06060703,0x13131313
	.word 0x10101010,0x10101010,0x03030307,0x03070707,0x07070707,0x07070707,0x06060604,0x04060606
	.word 0x06131304,0x04060606,0x13131304,0x04060613,0x13131304,0x04061313,0x13131304,0x04131313

	.word 0x10101010,0x10101010,0x03030707,0x07030703,0x07070707,0x07070707,0x06060604,0x04060606
	.word 0x06060604,0x04060606,0x06060604,0x04131306,0x06060604,0x04131313,0x13060604,0x04131313
	.word 0x10101010,0x10101010,0x03030707,0x03030707,0x07070707,0x07070707,0x06060606,0x03030606
	.word 0x06131313,0x07070606,0x13131313,0x08060613,0x13131313,0x03071313,0x13131313,0x07031313
	.word 0x10101010,0x10101010,0x03030303,0x03030303,0x03030703,0x03030303,0x03030308,0x08080308
	.word 0x03070707,0x03030703,0x08080808,0x08080808,0x07070703,0x03070707,0x03070707,0x03030303
	.word 0x10101010,0x10101010,0x07070707,0x07070707,0x03030303,0x03030303,0x03030308,0x03030808
	.word 0x08080808,0x03080303,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.word 0x10101010,0x10101010,0x07070707,0x07070707,0x03030303,0x08080303,0x03030303,0x03030303
	.word 0x08080808,0x08030308,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x10101010,0x10101010,0x07070707,0x07070707,0x03030308,0x03080303,0x03030303,0x03030303
	.word 0x03080808,0x03030308,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x10101010,0x10101010,0x07070707,0x07070707,0x08030303,0x03030808,0x03030303,0x03030303
	.word 0x08080808,0x03030308,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x10101010,0x10101010,0x07070707,0x07070707,0x03080803,0x03030308,0x03030303,0x03030303
	.word 0x08080808,0x03080808,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.word 0x10101010,0x10101010,0x07070707,0x07070707,0x03030303,0x03030303,0x03080803,0x08030303
	.word 0x08080803,0x08080808,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x08080808,0x08080808,0x03030703,0x03030707,0x07070703,0x07070707,0x07070707,0x07070707
	.word 0x07070707,0x07070707,0x07070707,0x07030307,0x07070703,0x03070707,0x08080808,0x08080808
	.word 0x06060808,0x13131306,0x06060603,0x06060606,0x13060607,0x06061313,0x13130607,0x06131313
	.word 0x04040407,0x04040404,0x06060607,0x06060606,0x13060603,0x06060606,0x13130608,0x06061313
	.word 0x13131304,0x04060613,0x06060604,0x04060606,0x06060604,0x04060606,0x06060604,0x04060606
	.word 0x04040404,0x04040404,0x13060604,0x04061313,0x13130604,0x04131313,0x06060604,0x04060606

	.word 0x06060604,0x04131313,0x06060604,0x04060606,0x06060604,0x04060606,0x13130604,0x04060613
	.word 0x04040404,0x04040404,0x13131304,0x04131313,0x06060604,0x04060606,0x13131304,0x04060606
	.word 0x13131313,0x08080613,0x06060606,0x03060606,0x13060606,0x07061313,0x13131306,0x07131313
	.word 0x04040404,0x07040404,0x06060606,0x07060606,0x13060606,0x03131313,0x06060606,0x08131313
	.word 0x08080808,0x08080808,0x07070303,0x03070303,0x07070707,0x03070707,0x07070707,0x07070707
	.word 0x07070707,0x07070707,0x07030307,0x07070707,0x07070703,0x03070707,0x08080808,0x08080808
	.word 0x05050505,0x05050505,0x05050505,0x05050505,0x05050505,0x05050505,0x05050505,0x05050505
	.word 0x05050505,0x05050505,0x05050505,0x05050505,0x05050505,0x05050505,0x05050505,0x05050505

	.word 0x0D0D0D0D,0x0D0E0D0D,0x0E0E0E0D,0x110E0E11,0x11110E0D,0x1111110E,0x110E110D,0x11110C11
	.word 0x0C110E0D,0x0C0C110C,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x0D0D0D0D,0x0E0D0E0E,0x11110E0E,0x110E0E11,0x0E0E0E11,0x11111111,0x11110C0C,0x0E0E1111
	.word 0x0C0C110C,0x110C0C11,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x0D0D0D0D,0x0D0E0D0D,0x0E0E0E11,0x0E111111,0x1111110E,0x11110E0E,0x0E111111,0x0C0C1111
	.word 0x11110C0C,0x0C110C0C,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x0D0D0D0D,0x0D0D0D0D,0x11110E0E,0x0D0E0E0E,0x110E0E11,0x0D110E11,0x0E110C11,0x0D0E110E
	.word 0x1111110C,0x0D0E0E11,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x03000000,0x00000000,0x07030000,0x00000000,0x07070300
	.word 0x00000000,0x03000000,0x00000000,0x07070300,0x03000000,0x07070703,0x03080300,0x07070707
	.word 0x08030703,0x07070703,0x03070703,0x07070708,0x07070307,0x03070308,0x07070707,0x03070807
	.word 0x08030707,0x07070703,0x08070707,0x07030703,0x03070707,0x07030708,0x03070707,0x07070308
	.word 0x07070707,0x07070708,0x07070707,0x07070308,0x07070707,0x07070807,0x07070707,0x07070803
	.word 0x03070707,0x07070308,0x03070707,0x07070708,0x08070707,0x07070703,0x08030707,0x07070703
	.word 0x08070707,0x07070307,0x08070707,0x07070707,0x07080707,0x07070707,0x07080707,0x07070707

	.word 0x00000003,0x00000000,0x00030707,0x00000000,0x03070707,0x00000003,0x07070307,0x00030803
	.word 0x03070707,0x03070308,0x08070707,0x07070703,0x08030707,0x07070707,0x07080707,0x07070707
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000003,0x00000000,0x00000307,0x00000000,0x00030707,0x00000000
	.word 0x00000000,0x07030303,0x00000000,0x07070703,0x03000000,0x07070308,0x03000000,0x03080803
	.word 0x07030000,0x08030307,0x07030000,0x07030707,0x07070300,0x07070707,0x07070300,0x07070707
	.word 0x07070707,0x07080707,0x07070707,0x03080307,0x07070707,0x08030707,0x07070707,0x06070707
	.word 0x07070303,0x09090707,0x07070808,0x09090907,0x07080707,0x09090909,0x09030707,0x09090909

	.word 0x07070707,0x07030803,0x06070707,0x04060606,0x06060607,0x04060606,0x06060606,0x04090606
	.word 0x06060609,0x04090906,0x06060909,0x04090906,0x06060909,0x04090906,0x06060909,0x04090606
	.word 0x03080307,0x07070707,0x09090604,0x07070709,0x09090904,0x03090909,0x09090904,0x09090909
	.word 0x09090904,0x09090909,0x09090904,0x09090909,0x09090904,0x09090909,0x09090904,0x09090909
	.word 0x07030807,0x07070707,0x03070803,0x07070707,0x07070308,0x07070707,0x07070709,0x07070707
	.word 0x07070909,0x03070703,0x03090909,0x08080707,0x06090909,0x07030803,0x06060609,0x07070706
	.word 0x03070307,0x00000000,0x03070303,0x00000000,0x08030707,0x00000003,0x03080803,0x00000003
	.word 0x07030308,0x00000307,0x07070307,0x00000307,0x07070703,0x00030707,0x07070707,0x00030707

	.word 0x07070303,0x07070707,0x07030707,0x07070707,0x07070707,0x07070707,0x07070707,0x07070707
	.word 0x07070707,0x07070707,0x07070703,0x07070707,0x03030703,0x07070707,0x08080808,0x08080808
	.word 0x13131303,0x06131313,0x06060607,0x06060606,0x06060607,0x06131306,0x04040407,0x04040404
	.word 0x06060607,0x06060606,0x06060607,0x06060606,0x06060603,0x06060606,0x06060608,0x06060606
	.word 0x13131304,0x04060613,0x06060604,0x04060606,0x06060604,0x04131306,0x04040404,0x04040404
	.word 0x06060604,0x04060606,0x06060604,0x04060606,0x06060604,0x04060606,0x06060604,0x04060606
	.word 0x06060604,0x04130606,0x06060604,0x04060606,0x13130604,0x04060613,0x04040404,0x04040404
	.word 0x06060604,0x04060606,0x06060604,0x04060606,0x06060604,0x04060606,0x06060604,0x04060606

	.word 0x06131313,0x03060606,0x13131306,0x07060613,0x06060606,0x07060606,0x04040404,0x07040404
	.word 0x06060606,0x07060606,0x06060606,0x07060606,0x06060606,0x03060606,0x06060606,0x08060606
	.word 0x07070707,0x03070707,0x07070707,0x07070707,0x07070707,0x07070707,0x07070707,0x07070707
	.word 0x07070707,0x07070707,0x07070707,0x03070707,0x07030707,0x03070303,0x08080808,0x08080808
	.word 0x03070703,0x07070707,0x07070707,0x07070707,0x07070707,0x07070707,0x07070707,0x07070707
	.word 0x07070707,0x07070707,0x07070707,0x07070707,0x07070703,0x07070303,0x08080808,0x08080808
	.word 0x06060603,0x06060606,0x06060607,0x06060606,0x06060607,0x06060606,0x04040407,0x04040404
	.word 0x06060607,0x06060606,0x06060603,0x06060606,0x06060603,0x06060606,0x06060608,0x06060606

	.word 0x06060604,0x04060606,0x06060604,0x04060606,0x06060604,0x04060606,0x04040404,0x04040404
	.word 0x06060604,0x04060606,0x06060604,0x04060606,0x06060604,0x04060606,0x06060604,0x04060606
	.word 0x06060606,0x03060606,0x06060606,0x07060606,0x06060606,0x07060606,0x04040404,0x07040404
	.word 0x06060606,0x07060606,0x06060606,0x03060606,0x06060606,0x03060606,0x06060606,0x08060606
	.word 0x07070707,0x03070703,0x07070707,0x07070707,0x07070707,0x07070707,0x07070707,0x07070707
	.word 0x07070707,0x07070707,0x07070707,0x07070707,0x03070703,0x03070703,0x08080808,0x08080808

	.section .rodata
	.align	2
	.global tm_stage2_08_bn_gfxMap		@ 2048 unsigned chars
	.hidden tm_stage2_08_bn_gfxMap
tm_stage2_08_bn_gfxMap:
	.byte 0x01,0x02,0x03,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x05,0x06,0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x0F,0x10,0x11,0x12,0x0F,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,0x20,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x21,0x22,0x23,0x24,0x25,0x26,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27

	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27

	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27

	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27

	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27

	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27

	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27

	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27

	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27
	.byte 0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27

	.byte 0x03,0x04,0x28,0x29,0x13,0x14,0x13,0x14,0x13,0x14,0x13,0x14,0x13,0x14,0x13,0x14
	.byte 0x13,0x14,0x13,0x14,0x13,0x14,0x13,0x14,0x13,0x14,0x0D,0x0E,0x2A,0x2B,0x01,0x02
	.byte 0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x10,0x00,0x00,0x05,0x06
	.byte 0x03,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x0A,0x00,0x00,0x01,0x02
	.byte 0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x10,0x00,0x00,0x05,0x06

	.byte 0x03,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x0A,0x00,0x00,0x01,0x02
	.byte 0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x10,0x00,0x00,0x05,0x06
	.byte 0x03,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x0A,0x00,0x00,0x01,0x02
	.byte 0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x10,0x00,0x00,0x05,0x06

	.byte 0x03,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x0A,0x00,0x00,0x01,0x02
	.byte 0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x10,0x00,0x00,0x05,0x06
	.byte 0x03,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x0A,0x00,0x00,0x01,0x02
	.byte 0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x10,0x00,0x00,0x05,0x06

	.byte 0x03,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x2D,0x2E,0x2F
	.byte 0x30,0x31,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x0A,0x00,0x00,0x01,0x02
	.byte 0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x32,0x33,0x34,0x35
	.byte 0x36,0x37,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x10,0x00,0x00,0x05,0x06
	.byte 0x03,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x16,0x17,0x18
	.byte 0x19,0x1A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x0A,0x00,0x00,0x01,0x02
	.byte 0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x22,0x23,0x24
	.byte 0x25,0x26,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x10,0x00,0x00,0x05,0x06

	.byte 0x03,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x39,0x3A,0x3B
	.byte 0x3C,0x3D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0B,0x0C,0x00,0x00,0x01,0x02
	.byte 0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x3F,0x40,0x40
	.byte 0x41,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x12,0x00,0x00,0x05,0x06
	.byte 0x03,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1B,0x1C,0x1D,0x1E
	.byte 0x1F,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02
	.byte 0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x06

	.byte 0x03,0x04,0x13,0x14,0x0D,0x0E,0x13,0x14,0x13,0x14,0x13,0x14,0x13,0x14,0x13,0x14
	.byte 0x13,0x14,0x13,0x14,0x13,0x14,0x13,0x14,0x13,0x14,0x13,0x14,0x13,0x14,0x01,0x02
	.byte 0x07,0x08,0x00,0x00,0x0F,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x06
	.byte 0x03,0x04,0x00,0x00,0x09,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02
	.byte 0x07,0x08,0x00,0x00,0x0F,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x06

	.section .rodata
	.align	2
	.global tm_stage2_08_bn_gfxPal		@ 64 unsigned chars
	.hidden tm_stage2_08_bn_gfxPal
tm_stage2_08_bn_gfxPal:
	.hword 0x0000,0x14E8,0x3F19,0x2DAE,0x0C27,0x0421,0x6712,0x3A32
	.hword 0x214B,0x675C,0x0D30,0x1E75,0x0CA9,0x2190,0x150C,0x4AD6
	.hword 0x5319,0x10CA,0x08AB,0x737C,0x0867,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(tm_stage2_08_bn_gfx)
