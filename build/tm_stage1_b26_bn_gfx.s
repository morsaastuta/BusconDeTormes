
@{{BLOCK(tm_stage1_b26_bn_gfx)

@=======================================================================
@
@	tm_stage1_b26_bn_gfx, 512x512@8, 
@	+ palette 32 entries, not compressed
@	+ 53 tiles (t reduced) not compressed
@	+ affine map, not compressed, 64x64 
@	Total size: 64 + 3392 + 4096 = 7552
@
@	Time-stamp: 2024-08-20, 19:03:06
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global tm_stage1_b26_bn_gfxTiles		@ 3392 unsigned chars
	.hidden tm_stage1_b26_bn_gfxTiles
tm_stage1_b26_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x08080808,0x08080F0D,0x11111111,0x11110D09,0x090D0D0D,0x0909090D,0x0D0D090D,0x0C0C0C0C
	.word 0x09090D0D,0x08080808,0x0917090D,0x08080801,0x0909090D,0x11110909,0x010C0C0C,0x01170101
	.word 0x0F0A0808,0x0A0A080A,0x090E1111,0x040E0A0E,0x0E090101,0x0E0A0E09,0x0C010901,0x0C0E0C0C
	.word 0x08090108,0x08080808,0x0F090F08,0x08080808,0x09090911,0x11111111,0x0C0C0C09,0x09090C0C
	.word 0x08080808,0x08080F0D,0x11111111,0x1111090D,0x0D0D0D0D,0x09090909,0x0C0C0C0D,0x0C0C0C0C
	.word 0x0808080D,0x08080808,0x08080F0D,0x08080808,0x01110D0D,0x11110109,0x090C0C0C,0x0C0C0C01

	.word 0x0F080808,0x08080809,0x01111111,0x11111101,0x0917090D,0x09090107,0x0C090C0C,0x0C0C0C0C
	.word 0x08010808,0x08080808,0x0F010F08,0x08080808,0x09090111,0x11111111,0x170C0C0C,0x09010909
	.word 0x0A0A0A0A,0x0A0A0A0A,0x0A040A0A,0x0A0A040A,0x0E0A0A04,0x0A0E0A0E,0x040A0E0C,0x0E0E0E04
	.word 0x040A0808,0x04010E17,0x09041108,0x01010109,0x17090911,0x17010909,0x090C0C0C,0x01090109
	.word 0x0A0A0A0A,0x0A0A0A0A,0x0A040A0E,0x0A040A0A,0x0E0A0E0E,0x040A0E0A,0x0A040E04,0x0A0E040E
	.word 0x0409040E,0x0E040901,0x09010904,0x09090909,0x09091707,0x09170909,0x17080C0C,0x09010509
	.word 0x17091108,0x09090909,0x09090911,0x09170901,0x17090901,0x17090109,0x0909170C,0x01010917
	.word 0x170C0808,0x01090909,0x01110808,0x09010909,0x09011111,0x01090101,0x01090901,0x09010101

	.word 0x17091709,0x01010909,0x09170909,0x09090917,0x09170909,0x09011717,0x17090101,0x09090909
	.word 0x01010701,0x09090909,0x09010101,0x09170901,0x01090109,0x09170917,0x17010909,0x17090909
	.word 0x0A0A0A0A,0x0A0A0A0A,0x0A0A040A,0x0E0A040A,0x0A0E0A04,0x0E0E0A0E,0x0E040E0A,0x040E040A
	.word 0x0109040E,0x0E040904,0x09090909,0x04090109,0x09091709,0x07170909,0x09050109,0x01170117
	.word 0x0A0A0A0A,0x0A0A0A0A,0x0A040A0A,0x040A040A,0x0E0A0E0A,0x0E0A0A0E,0x040E0E0E,0x040E0A04
	.word 0x170E0104,0x01040A04,0x09010101,0x01170409,0x09090117,0x09090917,0x09090901,0x17010909
	.word 0x09090101,0x09170917,0x17090909,0x09091709,0x17170109,0x09091709,0x09090909,0x01010917
	.word 0x09090909,0x01070101,0x01091709,0x01010109,0x17091709,0x09010901,0x09090917,0x09090117

	.word 0x09090909,0x09090917,0x01091709,0x09090909,0x09010917,0x17090917,0x17090101,0x09170909
	.word 0x09090901,0x01090917,0x09090109,0x09090901,0x01010901,0x09090109,0x01010109,0x17090901
	.word 0x01080808,0x09011709,0x090F0808,0x08090107,0x09091111,0x09010909,0x0C0C0C0C,0x0C0C0C0C
	.word 0x08080808,0x08080808,0x08080808,0x0F080808,0x11111111,0x0D111111,0x0C0C0C0C,0x0C0C0C0D
	.word 0x08080808,0x09090808,0x08080808,0x09010108,0x11111111,0x11070101,0x0C0C0901,0x0C0C0C0C
	.word 0x08080909,0x08080808,0x08090909,0x08080808,0x0909090D,0x11111111,0x0C0C0C0C,0x0C0C0C09
	.word 0x0D080808,0x08080808,0x0D0F0808,0x0808080F,0x0D0D1111,0x01111109,0x0C0C0C0C,0x010C0C0C
	.word 0x08080808,0x08080808,0x08080808,0x0F080808,0x11111111,0x09111111,0x0C0C0C0C,0x0C0C0C0D

	.word 0x0C080808,0x08080909,0x09110808,0x08110109,0x09091101,0x11010101,0x0C091701,0x0C0C0C0C
	.word 0x080C0907,0x08080808,0x08080909,0x08080808,0x11091717,0x11111111,0x0C0C0C0C,0x0C0C0C0D
	.word 0x0C080808,0x08090101,0x11080811,0x11010109,0x01111101,0x09090107,0x0109010C,0x010C0C0C
	.word 0x11010808,0x0C080808,0x11091108,0x11080808,0x17010911,0x01110911,0x09091709,0x09091709
	.word 0x09110808,0x17010917,0x17051111,0x17171709,0x09010109,0x09091717,0x01090907,0x09090109
	.word 0x09011709,0x09010101,0x17090101,0x17010101,0x01170909,0x09010101,0x17090909,0x09090109
	.word 0x01090C08,0x09090101,0x09091108,0x07010101,0x01090911,0x01010109,0x09090C0C,0x0C0C0901
	.word 0x010C0808,0x08080109,0x09111108,0x08080901,0x01170911,0x11110909,0x09090901,0x17091709

	.word 0x09011701,0x09170909,0x09010117,0x17010909,0x01010901,0x09010901,0x01010109,0x01090101
	.word 0x09010108,0x09010101,0x01010111,0x09010901,0x01090109,0x01090101,0x09010909,0x01010101
	.word 0x17090117,0x01011709,0x09171717,0x09090517,0x17170909,0x09010109,0x09010909,0x07090901
	.word 0x01010109,0x09170109,0x01010117,0x01010917,0x01010109,0x09091701,0x09010909,0x09090917
	.word 0x01010101,0x01090101,0x09010109,0x17090901,0x07010909,0x01090101,0x01010101,0x01010901
	.word 0x01010101,0x09090109,0x01170109,0x01010901,0x17090901,0x17090117,0x09170909,0x09170909
	.word 0x09091709,0x01170109,0x09090117,0x17010109,0x01090109,0x01090101,0x01010901,0x09010101
	.word 0x01010109,0x01010109,0x01090109,0x09010101,0x01010901,0x09010901,0x01010101,0x09090109

	.word 0x01010909,0x09170901,0x01010107,0x09090909,0x09010101,0x09090909,0x01090101,0x09170909
	.word 0x05010101,0x17010901,0x01010901,0x09170109,0x09091709,0x09091701,0x09170917,0x01090909
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x000A0000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x0A000000,0x00000000,0x00000600,0x00060006
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00060000,0x00000600,0x0A000600,0x06060000

	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000006,0x06060000,0x00000000,0x00060600,0x000A0000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x0000000A,0x06000600,0x00060000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000A00,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00060000,0x00000000,0x06000000,0x00000000
	.word 0x14000000,0x00000000,0x00000000,0x00000006,0x00000000,0x0000060A,0x00000000,0x00000614

	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000006
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x16160000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00001616,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00060000,0x00000000
	.word 0x06000000,0x00000000,0x0A000000,0x00000006,0x00000000,0x0000060A,0x00000000,0x00000602

	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00060000,0x00000000,0x00000600
	.word 0x00000000,0x00000600,0x00000000,0x00000200,0x00000000,0x00000006,0x00000000,0x00000006
	.word 0x00000000,0x00000000,0x00000000,0x06000000,0x00000600,0x0A000000,0x00060000,0x02060000
	.word 0x000A0000,0x14060000,0x0A140000,0x140A0000,0x14140000,0x00140A00,0x02000000,0x00000200
	.word 0x00000006,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00060000,0x00000000
	.word 0x06000000,0x00000000,0x14000000,0x0600000A,0x14000A00,0x0006000A,0x00000002,0x00020002
	.word 0x00000000,0x06000000,0x00000000,0x0A000000,0x00000000,0x00000600,0x0A000000,0x06060000
	.word 0x00000000,0x060A0006,0x000A0000,0x0600060A,0x0A000000,0x0A020A06,0x02000000,0x020A020A

	.word 0x06060000,0x0600060A,0x06060606,0x06060606,0x060A0606,0x06060606,0x0A060A00,0x06060614
	.word 0x06060A14,0x06060606,0x060A0606,0x0606060A,0x0A060602,0x06060A06,0x0A0A020A,0x0A020A02
	.word 0x000A0606,0x0606000A,0x0A06060A,0x06060A0A,0x0606060A,0x060A0614,0x06060A06,0x06060A06
	.word 0x06060606,0x06060606,0x0A06060A,0x06060606,0x06060A14,0x060A140A,0x020A020A,0x0A020A0A
	.word 0x0A06060A,0x06000A00,0x06060A06,0x060A0A0A,0x06060606,0x06061406,0x06060606,0x060A0606
	.word 0x06060606,0x06060606,0x0606060A,0x0606060A,0x06140A06,0x0A020A06,0x020A0602,0x020A060A
	.word 0x0A060006,0x00000606,0x06060606,0x06060606,0x06060606,0x06060A06,0x14060606,0x000A060A
	.word 0x06060606,0x140A0606,0x0A060606,0x06060A06,0x060A0606,0x1406060A,0x020A020A,0x0A020A0A

	.word 0x00000006,0x00000000,0x0000000A,0x00000000,0x00060000,0x00000000,0x00000606,0x0000000A
	.word 0x06000A06,0x00000000,0x0A060006,0x00000A00,0x060A140A,0x0000000A,0x0A020A02,0x00000002
	.word 0x00000000,0x00000A00,0x00000000,0x00060A00,0x00000000,0x00061400,0x00000000,0x000A0000
	.word 0x06000000,0x00020000,0x00000000,0x0600000A,0x00000000,0x0A000014,0x00000000,0x02000200
	.word 0x06000000,0x00000000,0x0A060000,0x00000000,0x000A0000,0x00000000,0x000A0000,0x00000000
	.word 0x00020600,0x00000000,0x00020A00,0x00000600,0x00000A00,0x0000000A,0x00000200,0x00000002
	.word 0x00000000,0x03031600,0x00000000,0x03031516,0x16000000,0x03151515,0x15160000,0x15151515
	.word 0x15151600,0x15151515,0x15121600,0x12151215,0x12121600,0x12121512,0x0B0B0000,0x0B0B0B0B

	.word 0x00160303,0x00000000,0x16030303,0x00000000,0x03030303,0x00000016,0x16030315,0x0000000B
	.word 0x03161212,0x00000B03,0x03031612,0x000B1215,0x15151612,0x000B1212,0x0B0B000B,0x000B0B0B
	.word 0x00000000,0x00060A00,0x00000000,0x00061400,0x00060000,0x060A0000,0x06000000,0x0A020000
	.word 0x00000000,0x0A14000A,0x00000000,0x14000014,0x000A0000,0x14001400,0x02000000,0x00000200
	.word 0x06000000,0x0000000A,0x06000000,0x00000014,0x0A000000,0x00000014,0x020A0000,0x00000000
	.word 0x140A0000,0x00060000,0x0202000A,0x000A0000,0x00140014,0x00000A00,0x00020002,0x00000200
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x01010101,0x01000000,0x13131313
	.word 0x10010000,0x13131310,0x10090100,0x09100910,0x09091600,0x09091010,0x16160000,0x16161616

	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000001,0x00000000
	.word 0x01000113,0x00000101,0x10011609,0x00161313,0x10161609,0x00160910,0x16001616,0x00161616

	.section .rodata
	.align	2
	.global tm_stage1_b26_bn_gfxMap		@ 4096 unsigned chars
	.hidden tm_stage1_b26_bn_gfxMap
tm_stage1_b26_bn_gfxMap:
	.byte 0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x0D,0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x19,0x1A,0x1B,0x1C,0x1D,0x1E
	.byte 0x1F,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x22,0x23,0x24,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x1F,0x20,0x19,0x1A,0x1D,0x1E,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x20,0x00,0x00,0x23,0x24,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x25,0x26,0x00,0x00,0x00,0x00,0x27,0x28,0x29,0x2A,0x2B,0x2C
	.byte 0x2D,0x2E,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x30,0x31,0x32,0x25,0x26,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x2D,0x2E,0x27,0x28,0x2B,0x2C,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x25,0x26,0x00,0x00,0x33,0x34,0x00,0x00,0x2D,0x2E,0x00,0x00,0x31,0x32,0x00,0x00

	.byte 0x01,0x02,0x01,0x02,0x05,0x06,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A
	.byte 0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A
	.byte 0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A
	.byte 0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A
	.byte 0x0D,0x0E,0x0D,0x0E,0x11,0x12,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16
	.byte 0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16
	.byte 0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16
	.byte 0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16

	.byte 0x03,0x04,0x03,0x04,0x07,0x08,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C
	.byte 0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C
	.byte 0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C
	.byte 0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C
	.byte 0x0F,0x10,0x0F,0x10,0x13,0x14,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18
	.byte 0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18
	.byte 0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18
	.byte 0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18

	.byte 0x03,0x04,0x03,0x04,0x07,0x08,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C
	.byte 0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C
	.byte 0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C
	.byte 0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C,0x0B,0x0C
	.byte 0x0F,0x10,0x0F,0x10,0x13,0x14,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18
	.byte 0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18
	.byte 0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18
	.byte 0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18,0x17,0x18

	.section .rodata
	.align	2
	.global tm_stage1_b26_bn_gfxPal		@ 64 unsigned chars
	.hidden tm_stage1_b26_bn_gfxPal
tm_stage1_b26_bn_gfxPal:
	.hword 0x0000,0x00CF,0x018B,0x15D0,0x016D,0x2277,0x06D4,0x0089
	.hword 0x25F2,0x0151,0x022F,0x08E9,0x3AD9,0x1970,0x01AD,0x0D0E
	.hword 0x01D4,0x08EC,0x096B,0x0E97,0x01CE,0x094F,0x00EB,0x1592
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(tm_stage1_b26_bn_gfx)