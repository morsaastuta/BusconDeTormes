
@{{BLOCK(tm_stage2_16_bn_gfx)

@=======================================================================
@
@	tm_stage2_16_bn_gfx, 512x512@8, 
@	+ palette 32 entries, not compressed
@	+ 67 tiles (t reduced) not compressed
@	+ affine map, not compressed, 64x64 
@	Total size: 64 + 4288 + 4096 = 8448
@
@	Time-stamp: 2024-08-20, 19:03:06
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global tm_stage2_16_bn_gfxTiles		@ 4288 unsigned chars
	.hidden tm_stage2_16_bn_gfxTiles
tm_stage2_16_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x0704070F,0x04040404,0x0F0F0F14,0x0F0F0F0F,0x0F0F1410,0x0F0F0F0F,0x10141410,0x14101010
	.word 0x140F0F0F,0x0F0F1410,0x0F140F0F,0x0F0F0F10,0x0F0F0F0F,0x0F0F1410,0x140F0F0F,0x0F141410
	.word 0x04040F07,0x07040407,0x0F0F140F,0x0F0F0F0F,0x0F141014,0x140F0F0F,0x14101010,0x10101010
	.word 0x0F140F0F,0x0F141014,0x0F0F0F0F,0x0F0F100F,0x0F0F0F0F,0x0F0F100F,0x0F0F0F14,0x0F141014
	.word 0x100F0F0F,0x0F0F0F0F,0x10140F0F,0x0F0F0F14,0x11101414,0x14141410,0x11111111,0x10111011
	.word 0x0F14140F,0x10140F0F,0x140F1414,0x14141414,0x14141414,0x14141414,0x14141414,0x10141414

	.word 0x140F0F0F,0x0F0F0F0F,0x0F14140F,0x140F0F0F,0x14141414,0x14141414,0x11101111,0x10101010
	.word 0x0F0F1011,0x0F14140F,0x14140F10,0x0F0F0F14,0x14141410,0x14141414,0x14141410,0x14141414
	.word 0x0F0F0F04,0x0F0F0F0F,0x0F0F0F04,0x0F0F0F0F,0x0F0F0F04,0x0F0F0F0F,0x0F0F0F04,0x0F0F0F0F
	.word 0x0F0F0F04,0x0F0F0F0F,0x0F0F0F04,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F1404,0x0F0F0F0F
	.word 0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F
	.word 0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x140F0F0F
	.word 0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F
	.word 0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F14,0x0F0F0F0F

	.word 0x0F0F0F0F,0x040F0F0F,0x0F0F0F0F,0x040F0F0F,0x0F0F0F0F,0x040F0F0F,0x0F0F0F0F,0x040F0F0F
	.word 0x0F0F0F0F,0x040F0F0F,0x0F0F0F0F,0x040F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x04140F0F
	.word 0x0F0F0F04,0x0F0F0F0F,0x0F0F0F04,0x0F0F0F0F,0x0F0F0F04,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F
	.word 0x0F0F0F04,0x0F0F0F0F,0x0F0F0F04,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F
	.word 0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F
	.word 0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F
	.word 0x0F0F0F0F,0x040F0F0F,0x0F0F0F0F,0x040F0F0F,0x0F0F0F0F,0x040F0F0F,0x0F0F0F0F,0x0F0F0F0F
	.word 0x0F0F0F0F,0x040F0F0F,0x0F0F0F0F,0x040F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F

	.word 0x10101011,0x10101111,0x0F0F1411,0x10140F0F,0x0F0F0F10,0x100F140F,0x0F0F0F10,0x100F0F0F
	.word 0x0F0F1410,0x1014140F,0x11101111,0x11101011,0x1114140F,0x0F141414,0x100F0F0F,0x0F0F0F14
	.word 0x11111010,0x11101110,0x140F1414,0x140F0F14,0x0F140F14,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F
	.word 0x0F0F0F14,0x140F140F,0x11101111,0x11101010,0x0F0F0F0F,0x140F0F0F,0x0F0F0F0F,0x0F0F0F0F
	.word 0x10141014,0x10101010,0x11111111,0x11111011,0x14101011,0x14141414,0x10141011,0x14141410
	.word 0x14141011,0x14101014,0x10101011,0x14141414,0x10101011,0x10101010,0x11111111,0x11111111
	.word 0x14141011,0x14141410,0x11101111,0x11101111,0x10101414,0x10101014,0x14141414,0x10141014
	.word 0x14141414,0x14141414,0x14141414,0x10141410,0x10101010,0x10101010,0x11111111,0x11111111

	.word 0x0F141404,0x0F140F0F,0x1414140F,0x14141414,0x1010140F,0x10101014,0x1010100F,0x10101010
	.word 0x1414140F,0x14141414,0x0F141404,0x140F0F0F,0x0F0F0F0F,0x0F14140F,0x0F0F1404,0x0F0F0F0F
	.word 0x0F0F0F0F,0x0F141414,0x14141414,0x14141414,0x10101010,0x10101010,0x10101414,0x10141010
	.word 0x14141014,0x14141414,0x0F0F1414,0x14140F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F
	.word 0x1414140F,0x0F0F0F0F,0x14141414,0x14141414,0x10101010,0x10101010,0x10101410,0x14141010
	.word 0x14141414,0x14101414,0x0F0F1414,0x14140F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F
	.word 0x0F0F140F,0x0414140F,0x14141414,0x0F141414,0x14101010,0x0F141010,0x10101010,0x0F101010
	.word 0x14141414,0x0F141414,0x0F0F0F14,0x0414140F,0x0F14140F,0x0F0F0F0F,0x0F0F0F0F,0x04140F0F

	.word 0x0F141404,0x0F140F0F,0x10141004,0x10101414,0x10101404,0x14141410,0x140F0F0F,0x0F0F0F0F
	.word 0x0F0F0F04,0x0F0F0F0F,0x0F0F1404,0x0F0F0F0F,0x14141404,0x14140F0F,0x04040404,0x04040404
	.word 0x0F0F0F0F,0x0F141414,0x10101014,0x14141410,0x14141010,0x10101014,0x0F14140F,0x14140F0F
	.word 0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x14141414,0x14141414,0x040F0F04,0x04040F04
	.word 0x1414140F,0x0F0F0F0F,0x10141414,0x14101010,0x14101010,0x10101414,0x0F0F1414,0x0F14140F
	.word 0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x0F0F0F0F,0x14141414,0x14141414,0x040F0404,0x040F0F04
	.word 0x0F0F140F,0x0414140F,0x14141010,0x04101410,0x10141414,0x04141010,0x0F0F0F0F,0x0F0F0F14
	.word 0x0F0F0F0F,0x040F0F0F,0x0F0F0F0F,0x04140F0F,0x0F0F1414,0x04141414,0x04040404,0x04040404

	.word 0x000E0000,0x00000000,0x0C081300,0x0C0C0C0C,0x170E1300,0x13131317,0x000B0000,0x00000000
	.word 0x000B0000,0x00000000,0x0C081300,0x0C0C0C0C,0x170E1300,0x13131317,0x000B0000,0x00000000
	.word 0x00000000,0x00000E00,0x0C0C0C0C,0x0013080C,0x17131313,0x00130E17,0x00000000,0x00000B00
	.word 0x00000000,0x00000B00,0x0C0C0C0C,0x0013080C,0x17131313,0x00130E17,0x00000000,0x00000B00
	.word 0x000B0000,0x00000000,0x0C081300,0x0C0C0C0C,0x170E1300,0x13131317,0x000B0000,0x00000000
	.word 0x000B0000,0x00000000,0x0C081300,0x0C0C0C0C,0x170E1300,0x13131317,0x000E0000,0x00000000
	.word 0x00000000,0x00000B00,0x0C0C0C0C,0x0013080C,0x17131313,0x00130E17,0x00000000,0x00000B00
	.word 0x00000000,0x00000B00,0x0C0C0C0C,0x0013080C,0x17131313,0x00130E17,0x00000000,0x00000E00

	.word 0x020E0202,0x02020202,0x0C081308,0x0C0C0C0C,0x170E131B,0x13131317,0x080B0808,0x080D1B0D
	.word 0x1B0B0D0D,0x0D1B1B0D,0x0C081308,0x0C0C0C0C,0x170E1308,0x13131317,0x1B0B0D1B,0x0D0D1B1B
	.word 0x02020202,0x02020E02,0x0C0C0C0C,0x1B13080C,0x17131313,0x08130E17,0x1B1B0D08,0x0D0D0B0D
	.word 0x08080808,0x081B0B08,0x0C0C0C0C,0x0813080C,0x17131313,0x0D130E17,0x1B1B0D08,0x08080B0D
	.word 0x000B0000,0x00000000,0x0C081300,0x0C0C0C0C,0x170E1300,0x13131317,0x000B0000,0x00000000
	.word 0x000B0000,0x00000000,0x0C081300,0x0C0C0C0C,0x170E1300,0x13131317,0x000B0000,0x00000000
	.word 0x00000000,0x00000B00,0x0C0C0C0C,0x0013080C,0x17131313,0x00130E17,0x00000000,0x00000B00
	.word 0x00000000,0x00000B00,0x0C0C0C0C,0x0013080C,0x17131313,0x00130E17,0x00000000,0x00000B00

	.word 0x000B0000,0x00000000,0x0E000000,0x00000000,0x0B000000,0x00000000,0x000B0000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000B00,0x00000000,0x0000000E,0x00000000,0x0000000B,0x00000000,0x00000B00
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x170B1B08,0x1B1B171B,0x0C081300,0x0C0C0C0C,0x170E1300,0x13131317,0x000B0000,0x00000000
	.word 0x000B0000,0x00000000,0x0C081300,0x0C0C0C0C,0x170E1300,0x13131317,0x000B0000,0x00000000
	.word 0x1717171B,0x0D170B1B,0x0C0C0C0C,0x0013080C,0x17131313,0x00130E17,0x00000000,0x00000B00
	.word 0x00000000,0x00000B00,0x0C0C0C0C,0x0013080C,0x17131313,0x00130E17,0x00000000,0x00000B00

	.word 0x02020202,0x02020202,0x08080D0D,0x08080808,0x0D080808,0x080D1B1B,0x1B0D080D,0x08080D1B
	.word 0x08080D1B,0x1B1B1B0D,0x1B0D1B1B,0x080D1B1B,0x08080808,0x1B0D0808,0x080D1B1B,0x08080808
	.word 0x02020202,0x02020202,0x1B0D0D0D,0x08080D1B,0x0D0D0808,0x0D0D0D0D,0x1B1B0D08,0x08080D1B
	.word 0x1B080D0D,0x0D0D0808,0x0D080808,0x0D1B1B1B,0x1B1B0D1B,0x08080D1B,0x0D080808,0x1B1B1B1B
	.word 0x02020202,0x02020202,0x08080808,0x08080808,0x08081B1B,0x1B1B0D08,0x08080808,0x080D1B0D
	.word 0x1B1B0D0D,0x0D1B1B0D,0x08080808,0x0D080808,0x0D080808,0x0808080D,0x1B0D0D1B,0x0D0D1B1B
	.word 0x02020202,0x02020202,0x08080D0D,0x1B1B0D0D,0x080D1B1B,0x080D0808,0x1B1B0D08,0x0D0D0D0D
	.word 0x08080808,0x081B0D08,0x080D1B0D,0x08080808,0x0D0D0808,0x0D1B1B1B,0x1B1B0D08,0x0808080D

	.word 0x02020202,0x02020202,0x0808080D,0x08080808,0x1B1B0D08,0x080D0D1B,0x081B1B0D,0x1B1B0D08
	.word 0x08080808,0x0D1B1B0D,0x0D0D1B1B,0x0808080D,0x0808080D,0x1B1B0D0D,0x08080808,0x0D080808
	.word 0x02020202,0x02020202,0x1B0D0D0D,0x0D1B1B1B,0x08080808,0x0D1B1B0D,0x1B0D1B1B,0x1B1B0D0D
	.word 0x08080808,0x08080808,0x08080808,0x0D0D0808,0x0D0D0D0D,0x1B1B1B0D,0x0808081B,0x1B0D0808
	.word 0x1B171717,0x1B171B1B,0x00000000,0x0D08080D,0x0D000000,0x170D0D08,0x0D080000,0x001B080D
	.word 0x0D0D0800,0x00001B08,0x0D080D08,0x00000017,0x1B0D080D,0x00000000,0x00170808,0x00000000
	.word 0x17170D1B,0x08171B17,0x00000017,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.word 0x17171B08,0x1B1B171B,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x1717171B,0x0D17171B,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x17171B1B,0x1B1B1B17,0x00000000,0x1B000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x17171717,0x17171B1B,0x0D0D080D,0x00000000,0x08080D1B,0x0000000D,0x0D081700,0x00000808
	.word 0x0D1B0000,0x00080D0D,0x17000000,0x0D0D0D08,0x00000000,0x0D080817,0x00000000,0x0D0D1700

	.word 0x03030303,0x03030303,0x03030303,0x03030303,0x03030303,0x03030303,0x03030303,0x03030303
	.word 0x03030303,0x03030303,0x03030303,0x03030303,0x03030303,0x03030303,0x03030303,0x03030303
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x15000000
	.word 0x00000000,0x00000000,0x00000000,0x0A000000,0x00000000,0x0A000000,0x00000000,0x0A000000
	.word 0x00000016,0x00000000,0x00000019,0x00000000,0x00001915,0x00000000,0x00001518,0x00000000
	.word 0x0000000F,0x00000000,0x00000A0A,0x00000000,0x00000A0A,0x00000000,0x00000A0A,0x00000000
	.word 0x00000000,0x0A000000,0x00000000,0x0A000000,0x00000000,0x0A000000,0x00000000,0x0A000000
	.word 0x00000000,0x0A000000,0x00000000,0x0A000000,0x00000000,0x0A000000,0x00000000,0x0A000000

	.word 0x00000A0A,0x00000000,0x00000A0A,0x00000000,0x00000A0A,0x00000000,0x00000A0A,0x00000000
	.word 0x00000A0A,0x00000000,0x00000A0A,0x00000000,0x00000A0A,0x00000000,0x00000A0A,0x00000000
	.word 0x00000000,0x0E000000,0x00000000,0x05091200,0x00000000,0x09120000,0x00000000,0x09120000
	.word 0x00000000,0x09120000,0x00000000,0x09120000,0x00000000,0x09120000,0x00000000,0x09120000
	.word 0x00000E0E,0x00000000,0x12090505,0x00000000,0x00120905,0x00000000,0x00120905,0x00000000
	.word 0x00120905,0x00000000,0x00120905,0x00000000,0x00120905,0x00000000,0x00120905,0x00000000
	.word 0x00000000,0x09120000,0x00000000,0x09001212,0x09000000,0x09120000,0x00000000,0x09120012
	.word 0x00000000,0x09120000,0x00000000,0x09000000,0x00000000,0x09000000,0x00000000,0x09000000

	.word 0x00120905,0x00000000,0x12000912,0x00000012,0x00120909,0x00000900,0x00120912,0x00000012
	.word 0x00120912,0x00000000,0x00000905,0x00000000,0x00000905,0x00000000,0x00000905,0x00000000
	.word 0x0808080D,0x0D080808,0x0D080D0F,0x0808080D,0x0101010F,0x01010101,0x080D0D0D,0x0D080D08
	.word 0x1717171A,0x17171717,0x0101010F,0x01010101,0x0D0D0D08,0x0D08080D,0x0D080808,0x080D0808
	.word 0x0808080D,0x08080808,0x08080D08,0x0D0D0D0D,0x01010101,0x01010101,0x0D0D0D0D,0x0D0D0808
	.word 0x17171717,0x17171717,0x01010101,0x01010101,0x0D0D0D0D,0x0D0D0D0D,0x08080D0D,0x080D0D08
	.word 0x0808080D,0x0D080808,0x0D080808,0x0D0D0D08,0x01010101,0x01010101,0x0D0D0D0D,0x08080D0D
	.word 0x17171717,0x17171717,0x01010101,0x01010101,0x0D08080D,0x0D0D0D0D,0x080D0D0D,0x0D0D0808

	.word 0x0808080D,0x0D080808,0x08080D0D,0x0F0D0D08,0x01010101,0x0F010101,0x0D08080D,0x0D0D080D
	.word 0x17171717,0x1A171717,0x01010101,0x0F010101,0x080D080D,0x0D0D0D08,0x0D080D0D,0x0D08080D
	.word 0x00000000,0x09000000,0x00000000,0x09120000,0x00000000,0x09120000,0x00000000,0x12000900
	.word 0x09000000,0x00000012,0x00090000,0x00000000,0x00120000,0x00001200,0x12000000,0x00000912
	.word 0x00000905,0x00000000,0x00120912,0x00000000,0x00120912,0x00000000,0x09001209,0x00000000
	.word 0x00000009,0x00000912,0x00000009,0x00090000,0x12000012,0x00120000,0x09000012,0x00001212
	.word 0x06060606,0x06060606,0x1717171C,0x17171B1B,0x171B171A,0x1B171717,0x17171B1A,0x1B1B1B17
	.word 0x1B1B171A,0x1B171717,0x1B17171A,0x1717171B,0x171B1B1A,0x1B1B1717,0x06060606,0x06060606

	.word 0x06060606,0x06060606,0x17171717,0x17171717,0x1B17171B,0x1A1C1A17,0x1B1B1717,0x1A1A1A17
	.word 0x17171B1B,0x1A1A1A17,0x17171717,0x17171717,0x1717171B,0x1B171B1B,0x06060606,0x06060606
	.word 0x06060606,0x06060606,0x17171717,0x1B171717,0x1B171A1C,0x1717171B,0x17171A1C,0x1B1B1B17
	.word 0x17171A1A,0x17171B1B,0x17171717,0x171B1717,0x1B171717,0x1B171B1B,0x06060606,0x06060606
	.word 0x06060606,0x06060606,0x17171717,0x1C171B1B,0x171B1B1B,0x1A171717,0x17171717,0x1A1B1B17
	.word 0x1B1B1717,0x1A17171B,0x17171B1B,0x1A171B1B,0x1B17171B,0x1A171717,0x06060606,0x06060606

	.section .rodata
	.align	2
	.global tm_stage2_16_bn_gfxMap		@ 4096 unsigned chars
	.hidden tm_stage2_16_bn_gfxMap
tm_stage2_16_bn_gfxMap:
	.byte 0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0A,0x0B,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x1E,0x1F,0x20,0x21,0x22,0x23,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x24,0x25,0x26,0x27,0x28,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x2A,0x2B,0x2C,0x2D,0x2E,0x2F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x05,0x06,0x07,0x08,0x03,0x04,0x03,0x04,0x18,0x19,0x00,0x00,0x00,0x00,0x03,0x04
	.byte 0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x05,0x06
	.byte 0x07,0x08,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x10,0x11,0x12,0x13,0x0E,0x0F,0x0E,0x0F,0x1E,0x1F,0x00,0x00,0x00,0x00,0x0E,0x0F
	.byte 0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x10,0x11
	.byte 0x12,0x13,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x05,0x06,0x07,0x08,0x00,0x00,0x00,0x00,0x18,0x19,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x06
	.byte 0x07,0x08,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x10,0x11,0x12,0x13,0x00,0x00,0x00,0x00,0x1E,0x1F,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x11
	.byte 0x12,0x13,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x05,0x06,0x07,0x08,0x00,0x00,0x00,0x00,0x1A,0x1B,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x06
	.byte 0x07,0x08,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x10,0x11,0x12,0x13,0x00,0x00,0x00,0x00,0x20,0x21,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x11
	.byte 0x12,0x13,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x05,0x06,0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x06
	.byte 0x07,0x08,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x10,0x11,0x12,0x13,0x24,0x25,0x26,0x27,0x26,0x27,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x11
	.byte 0x12,0x13,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x05,0x06,0x07,0x08,0x2A,0x2B,0x2C,0x2D,0x2C,0x2D,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x06
	.byte 0x07,0x08,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x10,0x11,0x12,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x11
	.byte 0x12,0x13,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x05,0x06,0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x26,0x27,0x26,0x27,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x06
	.byte 0x07,0x08,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x10,0x11,0x12,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x2C,0x2D,0x2C,0x2D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x11
	.byte 0x12,0x13,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x05,0x06,0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x06
	.byte 0x07,0x08,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x10,0x11,0x12,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x11
	.byte 0x12,0x13,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x05,0x06,0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x27,0x26,0x27,0x28,0x29,0x05,0x06
	.byte 0x07,0x08,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x10,0x11,0x12,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x2D,0x2C,0x2D,0x2E,0x2F,0x10,0x11
	.byte 0x12,0x13,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x05,0x06,0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x06
	.byte 0x07,0x08,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x10,0x11,0x12,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x11
	.byte 0x12,0x13,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x05,0x06,0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x26,0x27,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x06
	.byte 0x07,0x08,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x10,0x11,0x12,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x2C,0x2D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x11
	.byte 0x12,0x13,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30
	.byte 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30

	.byte 0x05,0x06,0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x0A
	.byte 0x0A,0x0B,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04
	.byte 0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04
	.byte 0x10,0x11,0x12,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x14,0x15
	.byte 0x16,0x17,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F
	.byte 0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F

	.byte 0x05,0x06,0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x27,0x26,0x27
	.byte 0x26,0x27,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x10,0x11,0x12,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x2D,0x2C,0x2D
	.byte 0x2C,0x2D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x05,0x06,0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x10,0x11,0x12,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x05,0x06,0x07,0x08,0x24,0x25,0x1C,0x1D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x10,0x11,0x12,0x13,0x2A,0x2B,0x22,0x23,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x05,0x06,0x07,0x08,0x00,0x00,0x18,0x19,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x10,0x11,0x12,0x13,0x00,0x00,0x1E,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x05,0x06,0x07,0x08,0x31,0x32,0x18,0x19,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x31,0x32
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x31,0x32,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x10,0x11,0x12,0x13,0x33,0x34,0x1E,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x34
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x34,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x05,0x06,0x07,0x08,0x33,0x34,0x18,0x19,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x34
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x34,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x10,0x11,0x12,0x13,0x35,0x36,0x1E,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x35,0x36
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x35,0x36,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x05,0x06,0x07,0x08,0x37,0x38,0x1A,0x1B,0x00,0x00,0x39,0x3A,0x3B,0x3C,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x37,0x38
	.byte 0x39,0x3A,0x3B,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x37,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x10,0x11,0x12,0x13,0x3D,0x3E,0x20,0x21,0x00,0x00,0x3F,0x40,0x41,0x42,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3D,0x3E
	.byte 0x3F,0x40,0x41,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x3D,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02
	.byte 0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02
	.byte 0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02
	.byte 0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02
	.byte 0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D
	.byte 0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D
	.byte 0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D
	.byte 0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D,0x0C,0x0D

	.byte 0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04
	.byte 0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04
	.byte 0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04
	.byte 0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04,0x03,0x04
	.byte 0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F
	.byte 0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F
	.byte 0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F
	.byte 0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F,0x0E,0x0F

	.section .rodata
	.align	2
	.global tm_stage2_16_bn_gfxPal		@ 64 unsigned chars
	.hidden tm_stage2_16_bn_gfxPal
tm_stage2_16_bn_gfxPal:
	.hword 0x0000,0x0CA8,0x2190,0x0421,0x4AD6,0x2107,0x0845,0x3A32
	.hword 0x150C,0x18A4,0x539C,0x1E75,0x0D30,0x10CA,0x3F19,0x2DAE
	.hword 0x14E8,0x0C85,0x0C42,0x08AB,0x214B,0x171F,0x0598,0x0867
	.hword 0x37BF,0x025D,0x2908,0x0CA9,0x1CA5,0x0000,0x0000,0x0000

@}}BLOCK(tm_stage2_16_bn_gfx)