
@{{BLOCK(tm_stage1_zb11_bn_gfx)

@=======================================================================
@
@	tm_stage1_zb11_bn_gfx, 256x512@8, 
@	+ palette 32 entries, not compressed
@	+ 81 tiles (t reduced) not compressed
@	+ affine map, not compressed, 32x64 
@	Total size: 64 + 5184 + 2048 = 7296
@
@	Time-stamp: 2024-08-20, 19:03:05
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global tm_stage1_zb11_bn_gfxTiles		@ 5184 unsigned chars
	.hidden tm_stage1_zb11_bn_gfxTiles
tm_stage1_zb11_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x0B0B0B0B,0x0B0B0B0B,0x0B0B0C0B,0x100B0C0B,0x0B100B0C,0x10100B10,0x100C100B,0x0C100C0B
	.word 0x09070C10,0x100C070C,0x07070707,0x0C070907,0x07070507,0x11050707,0x070A0907,0x09050905
	.word 0x0B0B0B0B,0x0B0B0B0B,0x0B0C0B0B,0x0C0B0C0B,0x100B100B,0x100B0B10,0x0C101010,0x0C100B0C
	.word 0x0510090C,0x090C0B0C,0x07090909,0x09050C07,0x07070905,0x07070705,0x07070709,0x05090707
	.word 0x0B0B0E0B,0x0C0E0E0E,0x0B0B0B07,0x0E0B0E0B,0x0B0C070E,0x0C100810,0x0C080F08,0x10080C08
	.word 0x08070F08,0x10080808,0x07080F08,0x0F07070F,0x0F070F08,0x0E0F0F0F,0x0E0F1207,0x080E0812

	.word 0x0B0B0E0B,0x0B0B0B0B,0x0B0C0B10,0x0B0C0B0B,0x10081008,0x0C0B100C,0x080C100C,0x0B100C10
	.word 0x0C0F0C10,0x100C0808,0x070F0F0C,0x0709070C,0x120E0E0E,0x0907070F,0x12070808,0x07090912
	.word 0x0B0B0B0B,0x0B0B0B0B,0x0B0C0B0C,0x0B0B0C0B,0x100B0B10,0x0B100B10,0x0C0B100C,0x1010100C
	.word 0x0C0B0C09,0x0C091005,0x070C0509,0x09090907,0x05070707,0x05090707,0x07070909,0x09070707
	.word 0x0B0B0B0B,0x0B0B0B0B,0x0B0C0B10,0x0B0C0B0B,0x100B1010,0x0C0B100B,0x0B0C100C,0x0B100C10
	.word 0x0C070C10,0x100C0709,0x0709070C,0x07070707,0x07070511,0x07050707,0x05090509,0x07090A07
	.word 0x07070909,0x07050705,0x05070707,0x07070507,0x05050907,0x07070507,0x07070707,0x09090705
	.word 0x07070707,0x09110909,0x09070507,0x09090907,0x05070507,0x07090709,0x07070705,0x07070905

	.word 0x07070707,0x07070705,0x09070507,0x07070707,0x07090705,0x05070705,0x05070909,0x07050707
	.word 0x07070709,0x09070705,0x07070907,0x07070709,0x09090709,0x07070907,0x09090907,0x05070709
	.word 0x05070905,0x09090507,0x07050505,0x07070A05,0x05050707,0x07090907,0x07090707,0x11070709
	.word 0x09090907,0x07050907,0x09090905,0x09090705,0x09090907,0x07070509,0x07090707,0x07070705
	.word 0x09090909,0x09070909,0x07090907,0x05070709,0x11090707,0x09070909,0x09090909,0x09090709
	.word 0x09090909,0x07070907,0x09050907,0x09090709,0x05070709,0x05070905,0x07050707,0x07050707
	.word 0x08070F0F,0x08080712,0x080F0E0E,0x07121207,0x070F0808,0x12120708,0x07120808,0x12121207
	.word 0x0F120808,0x0E0E0F07,0x120F0808,0x08080E0F,0x0F090707,0x08090709,0x09070707,0x09090905

	.word 0x0F120708,0x0F090707,0x0E0F1207,0x0E0F0709,0x080E0F12,0x0E0F0907,0x07070F12,0x12070708
	.word 0x1212120E,0x0E120707,0x09070908,0x08071212,0x05090708,0x07120809,0x09070807,0x07070507
	.word 0x090F0F0F,0x09090909,0x0F080E0E,0x07090907,0x0808080E,0x07070912,0x12080808,0x09090909
	.word 0x07121212,0x0F0F0F09,0x09070909,0x0F080E0F,0x12090705,0x12080808,0x07070507,0x07121212
	.word 0x07050909,0x05090705,0x050A0707,0x05050507,0x07090907,0x07070505,0x09070711,0x07070907
	.word 0x07090507,0x07090909,0x0507090F,0x05090909,0x09050707,0x07090909,0x05070707,0x07070907
	.word 0x07070507,0x09050907,0x07070905,0x05090907,0x09070907,0x09070909,0x09090709,0x07090909
	.word 0x09090907,0x09090907,0x09070907,0x07090909,0x09090709,0x07090709,0x09090909,0x07070907

	.word 0x09090707,0x07050709,0x09090911,0x07070707,0x07090909,0x07070707,0x09070909,0x07050707
	.word 0x0A090909,0x05090709,0x09090709,0x07050907,0x07070507,0x07070509,0x07050705,0x09070707
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00020200,0x00000000,0x02040402,0x00000000,0x04040402
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x02020200
	.word 0x02000202,0x0B040404,0x04030402,0x04040404,0x04040404,0x04040404,0x04040404,0x04040404
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x02030000,0x00000002
	.word 0x0B0B0303,0x0000020B,0x040B0B0B,0x04030404,0x0B040B04,0x04040404,0x040B040B,0x04040404

	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000202,0x00000200
	.word 0x00030B0B,0x030B0B03,0x020B0404,0x0B0B0B0B,0x0B0B0404,0x04040B0B,0x0B040B04,0x040B040B
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00020203,0x00000000
	.word 0x0204040B,0x02020200,0x04040404,0x04040402,0x04040404,0x04040404,0x04040404,0x04040404
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000002,0x00000000,0x00000204,0x00000000,0x00020404,0x00000000
	.word 0x00000000,0x0B040403,0x00000000,0x040B0300,0x00000000,0x0B030B00,0x00000000,0x030B0402
	.word 0x00020000,0x0B040200,0x02040200,0x04040402,0x04040300,0x04040404,0x04040300,0x0B04040B

	.word 0x04040404,0x0B040404,0x040B0404,0x0B0B0B04,0x0B040B04,0x0B030B0B,0x0B0B0B0B,0x0B0B030B
	.word 0x02020202,0x04040B03,0x03020404,0x0404040B,0x020B040B,0x04040404,0x0B0B0B04,0x0B040404
	.word 0x04040404,0x04040404,0x040B040B,0x04040404,0x040B0B0B,0x04040404,0x0B0B020B,0x04040404
	.word 0x0B030B04,0x0404040B,0x03040404,0x0B0B0B0B,0x0B040404,0x0202030B,0x04040404,0x02020B0B
	.word 0x040B0404,0x04040B0B,0x04040404,0x0404040B,0x04040404,0x0404040B,0x0B040404,0x04040B0B
	.word 0x020B0B04,0x0404040B,0x0B030B0B,0x04040404,0x040B0302,0x04040404,0x04040B02,0x04040404
	.word 0x0404040B,0x04040404,0x040B0B0B,0x04040B04,0x0B0B020B,0x040B040B,0x0B020B0B,0x0B0B0B0B
	.word 0x020B0404,0x03020202,0x0B040404,0x04040202,0x04040404,0x0B040B02,0x040B0404,0x040B0B0B

	.word 0x0000020B,0x00000000,0x00020404,0x00000000,0x000B030B,0x00000002,0x02040B03,0x00000204
	.word 0x0404040B,0x00020404,0x04040404,0x00000204,0x04040404,0x00020404,0x0B04040B,0x00020404
	.word 0x0B030000,0x04040B0B,0x030B0200,0x0B0B0B03,0x04040402,0x0202030B,0x04040202,0x0B020B04
	.word 0x04020000,0x0B020B0B,0x0B0B0203,0x0B02020B,0x030B0300,0x02020203,0x04030000,0x0B0B0B04
	.word 0x0B030B0B,0x040B040B,0x0B0B030B,0x0B0B0B0B,0x04040B02,0x0B0B020B,0x0404040B,0x0B020B04
	.word 0x04040404,0x02040404,0x0404040B,0x0B0B040B,0x0B040B0B,0x02030B04,0x0B0B0B0B,0x0B0B0303
	.word 0x04040404,0x0B0B0B04,0x0B040404,0x020B0B04,0x040B0B0B,0x0B0B030B,0x0B020B0B,0x040B0B03
	.word 0x040B0202,0x04040404,0x04040202,0x0404040B,0x0B0B020B,0x04040404,0x030B0B04,0x04040B0B

	.word 0x040B0B0B,0x04040404,0x0B0B0B03,0x0404040B,0x0B0B0303,0x0B0B0B0B,0x02030B04,0x02020202
	.word 0x020B0404,0x04040B02,0x0B040404,0x0404040B,0x04040404,0x04040B0B,0x0B040404,0x0B0B020B
	.word 0x0B040B04,0x0B0B020B,0x0B0B0404,0x0B030B0B,0x0B020B0B,0x030B0404,0x040B020B,0x0B040404
	.word 0x04040402,0x04040404,0x0B040B0B,0x0B040404,0x040B0303,0x0B0B040B,0x03030B0B,0x030B0B0B
	.word 0x0B0B0404,0x0000020B,0x030B0B0B,0x00020002,0x0B030202,0x02040204,0x040B020B,0x02040404
	.word 0x0B0B020B,0x02040404,0x0B02020B,0x030B0B0B,0x030B030B,0x00030B03,0x040B0B0B,0x00000304
	.word 0x04040200,0x04040404,0x03030000,0x0B04040B,0x03000000,0x04040B0B,0x02030000,0x0B0B0B02
	.word 0x04040300,0x0202020B,0x04030000,0x0B020B04,0x03000000,0x0B020B0B,0x0B0B0303,0x0B02020B

	.word 0x030B040B,0x04040404,0x0B0B0B04,0x04040404,0x0B020B0B,0x0404040B,0x0B0B030B,0x040B0B0B
	.word 0x04040403,0x0B0B030B,0x04040404,0x03030B04,0x04040404,0x02040404,0x0404040B,0x0B0B040B
	.word 0x040B040B,0x040B0B03,0x04040404,0x02020404,0x04040404,0x020B0B04,0x0B040404,0x03020B04
	.word 0x040B0B0B,0x0B0B030B,0x03020202,0x040B0B03,0x040B0202,0x04040404,0x04040B02,0x0404040B
	.word 0x0B030B04,0x030B0404,0x040B0202,0x0B040404,0x040B040B,0x04040404,0x04040B03,0x0404040B
	.word 0x0B0B0303,0x0B040404,0x02030B04,0x02020202,0x020B0404,0x0B0B0B02,0x020B0B04,0x0404040B
	.word 0x04040404,0x0B040B03,0x04040404,0x040B0B0B,0x0B040404,0x0B0B020B,0x0B0B0B04,0x0B030B0B
	.word 0x0B030B0B,0x03040404,0x040B0302,0x04040404,0x04040403,0x04040404,0x0B040B0B,0x0B040404

	.word 0x04040404,0x00020404,0x0B04040B,0x00030403,0x030B0404,0x00000000,0x030B0B0B,0x00020200
	.word 0x0B020203,0x00040402,0x040B020B,0x02040404,0x0B0B030B,0x02040304,0x0B03030B,0x0000030B
	.word 0x020B0300,0x030B0B02,0x04020000,0x0B0B0B04,0x04040300,0x04040404,0x04020000,0x040B0404
	.word 0x03030300,0x0B040B04,0x0B0B0B02,0x030B0B0B,0x020B0200,0x0B0B0302,0x0B040200,0x04040402
	.word 0x0B040B0B,0x02030B04,0x0B0B0B02,0x0B0B0303,0x02020204,0x0404040B,0x0B020204,0x04040404
	.word 0x0B020203,0x0404040B,0x0B0B0B0B,0x040B0B0B,0x0B0B0404,0x0B0B0B03,0x0B040404,0x0B0B030B
	.word 0x0B0B030B,0x04040B04,0x02030B0B,0x0B0B0B0B,0x0B0B0404,0x02020203,0x04040404,0x0B02020B
	.word 0x0B040404,0x0B030B0B,0x040B0404,0x0B03030B,0x0B0B0404,0x03020203,0x0B020B0B,0x0B0B0404

	.word 0x0B0B040B,0x04040404,0x040B030B,0x04040404,0x040B0B0B,0x04040404,0x0404040B,0x04040404
	.word 0x04040B04,0x04040404,0x040B040B,0x04040404,0x04040B0B,0x04040404,0x0B0B0B03,0x0B020B0B
	.word 0x040B0304,0x0B0B040B,0x02030404,0x030B0B0B,0x0B040404,0x04020202,0x04040404,0x0403020B
	.word 0x0B040404,0x0302020B,0x0B0B0B04,0x0B0B0B0B,0x020B0B0B,0x04040B0B,0x0B020B0B,0x0404040B
	.word 0x030B0B03,0x00030B03,0x040B0B0B,0x00000204,0x04040404,0x00020404,0x04040B04,0x00000304
	.word 0x040B040B,0x00030003,0x0B0B0B02,0x020B030B,0x03020B0B,0x020B0B02,0x02040404,0x0304040B
	.word 0x0B040402,0x04040402,0x030B0400,0x0B040B02,0x03020B03,0x040B0302,0x04040303,0x0B030204
	.word 0x04040404,0x03040404,0x04040402,0x0B040B04,0x04040200,0x0B0B040B,0x04040B02,0x020B0B0B

	.word 0x04040404,0x02020B04,0x04040B04,0x0202020B,0x0B04040B,0x0B0B020B,0x030B0B0B,0x04040B03
	.word 0x04030202,0x04040404,0x040B0B02,0x04040404,0x040B0B02,0x04040404,0x0B0B0B02,0x04040404
	.word 0x040B0202,0x04040404,0x040B0202,0x04040404,0x0B0B020B,0x04040404,0x0B020B04,0x0B040404
	.word 0x020B0404,0x0B0B0B0B,0x0B040B04,0x04040202,0x0B0B0404,0x040B0B02,0x020B0B0B,0x0B0B0202
	.word 0x02020B04,0x0B0B0203,0x020B0B04,0x04040B02,0x020B040B,0x04040B02,0x0B020B04,0x040B0B02
	.word 0x0B0B0202,0x0B0B020B,0x04040404,0x02020404,0x0404040B,0x0B040404,0x04040B04,0x020B0B04
	.word 0x040B0202,0x04040404,0x0B030202,0x040B0404,0x0B030B0B,0x0B04040B,0x030B0404,0x0B0B0B03
	.word 0x04040404,0x02020204,0x04040404,0x020B0B04,0x04040404,0x020B0B04,0x04040404,0x020B0B0B

	.word 0x02040404,0x0304040B,0x030B040B,0x00040B03,0x03030B04,0x030B0302,0x0402030B,0x03030404
	.word 0x04040402,0x04040404,0x040B040B,0x03040404,0x0B040B0B,0x00000304,0x0B0B0B03,0x03030404
	.word 0x0B0B0202,0x0B020B0B,0x02020200,0x04040B02,0x04020000,0x0B040404,0x040B0200,0x040B0404
	.word 0x040B0200,0x0B040403,0x03030000,0x030B0300,0x00000000,0x00030300,0x00000000,0x00000000
	.word 0x040B0202,0x0B0B040B,0x0B02020B,0x0B020B04,0x040B020B,0x040B0404,0x0B0B030B,0x04040404
	.word 0x0403030B,0x0404040B,0x03000002,0x04040304,0x03000000,0x04020003,0x00000000,0x03000000
	.word 0x040B020B,0x0B02020B,0x0B040B04,0x02020B0B,0x0404040B,0x0B0B0404,0x04040404,0x0B040B04
	.word 0x04040404,0x020B040B,0x04030404,0x030B0B04,0x0B030304,0x0D03030B,0x02110003,0x0D0D0303

	.word 0x0B0B040B,0x0202020B,0x02020202,0x040B0202,0x0B0B0202,0x04040404,0x040B0202,0x0404040B
	.word 0x0B0B0303,0x04040B04,0x0303110D,0x04040B0B,0x0311120D,0x0B0B0B03,0x1211120D,0x03030312
	.word 0x0B040B0B,0x02020B04,0x040B020B,0x0B02020B,0x04040B04,0x0B020B04,0x04040404,0x0B020B0B
	.word 0x0B040404,0x03030B04,0x04040304,0x0303030B,0x0B030002,0x00000003,0x03030000,0x00000000
	.word 0x0B0B030B,0x03030B0B,0x030B0404,0x00020202,0x0404040B,0x00020404,0x04040B04,0x00020B04
	.word 0x0404030B,0x00020B04,0x0B030003,0x0000030B,0x03000003,0x00000003,0x00000000,0x00000000
	.word 0x12110000,0x0D0D0D0D,0x12110000,0x0D0D0D0D,0x12110000,0x0D0D0D12,0x12110000,0x0D0D1212
	.word 0x11110000,0x0D0D1206,0x11110000,0x0D0D1106,0x12110000,0x0D0D0D11,0x12110000,0x0D0D0D12

	.word 0x12010D0D,0x00001112,0x12010D0D,0x00001112,0x12010D0D,0x00001112,0x010D0D0D,0x00001112
	.word 0x010D0D0D,0x00001112,0x010D0D0D,0x00001112,0x010D0D0D,0x00001112,0x010D0D0D,0x00001112
	.word 0x12110000,0x0D0D120D,0x12110000,0x0D0D0D12,0x12110000,0x0D0D0D12,0x12110000,0x0D0D0D12
	.word 0x12110000,0x0D120D12,0x12110000,0x0D0D120D,0x12110000,0x0D120D12,0x12110000,0x0D0D120D
	.word 0x010D0D0D,0x00001112,0x12010D0D,0x00001112,0x12110D0D,0x00001112,0x12110D0D,0x00001112
	.word 0x1106110D,0x00001112,0x1106110D,0x00001112,0x1211120D,0x00001112,0x1211120D,0x00001112
	.word 0x12110000,0x0D0D0D12,0x12110000,0x0D0D0D0D,0x12110000,0x0D0D0D0D,0x12110000,0x0D0D0D0D
	.word 0x12110000,0x0D0D0D12,0x12110000,0x0D0D0D12,0x12110000,0x0D0D1201,0x12110000,0x12120111

	.word 0x1211120D,0x00001112,0x1201120D,0x00001112,0x1211120D,0x00001101,0x0101120D,0x00000006
	.word 0x0101120D,0x00000006,0x1201120D,0x00000612,0x12011212,0x00000612,0x1201120D,0x00000612
	.word 0x01110000,0x0D011101,0x06000000,0x12110601,0x06000000,0x0D110601,0x06000000,0x0D110601
	.word 0x06000000,0x0D110D0D,0x06000000,0x0D110D0D,0x0D110000,0x0D0D110D,0x0D110000,0x0D0D110D
	.word 0x12011212,0x00001112,0x1201120D,0x00001112,0x1201120D,0x00001112,0x1201120D,0x00001112
	.word 0x1212010D,0x00001112,0x1212010D,0x00001112,0x1212010D,0x00001112,0x12120112,0x00001112
	.word 0x12110000,0x120D110D,0x0D110000,0x0D0D1112,0x12110000,0x1212110D,0x06000000,0x12121112
	.word 0x06000000,0x12011101,0x01060000,0x01011101,0x01060000,0x01111111,0x11110000,0x11011111

	.word 0x1212010D,0x00001112,0x12120112,0x00001112,0x12111111,0x00001112,0x12110611,0x00001112
	.word 0x12110611,0x00001112,0x12111112,0x00000006,0x01011101,0x00000006,0x01011101,0x00000006
	.word 0x11111100,0x01111111,0x11111100,0x11110111,0x11111100,0x11010111,0x06111106,0x01010101
	.word 0x06111106,0x11010101,0x06111106,0x01110111,0x06111106,0x11111111,0x06060606,0x06060606
	.word 0x11011111,0x00000006,0x01111111,0x00000611,0x11011111,0x00110111,0x11111111,0x00110101
	.word 0x11110601,0x06010111,0x11110611,0x06011101,0x11060606,0x06111111,0x06060606,0x06060606
	.word 0x00000000,0x00000000,0x00000000,0x04000000,0x00000400,0x0B000000,0x00040000,0x03040000
	.word 0x000B0000,0x02040000,0x0B020000,0x020B0000,0x02020000,0x00020B00,0x03000000,0x00000300

	.word 0x00000004,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00040000,0x00000000
	.word 0x04000000,0x00000000,0x02000000,0x0400000B,0x02000B00,0x0004000B,0x00000003,0x00030003
	.word 0x0F07070F,0x07090509,0x0E0F0F0E,0x07080909,0x07120E08,0x08090808,0x120E0808,0x07070807
	.word 0x12080808,0x07070707,0x0F070807,0x07071212,0x07070F12,0x1212120F,0x0F0F0E12,0x08121212
	.word 0x08080709,0x07070707,0x07070707,0x0707070A,0x070F0707,0x0F070F0F,0x0F090912,0x1208120F
	.word 0x09090912,0x07120F07,0x07090912,0x12120909,0x09070508,0x0F090F07,0x07050E08,0x09070709
	.word 0x0F0F0F07,0x07070707,0x0E0E0E0F,0x07050F0F,0x0808080E,0x050F0808,0x08080808,0x090F0708
	.word 0x07070712,0x09071207,0x12121207,0x07090712,0x07090707,0x09070909,0x09070705,0x07090909

	.word 0x05070507,0x09090707,0x07050707,0x07070705,0x07050707,0x07090505,0x05070909,0x07070707
	.word 0x09091109,0x07070707,0x07090909,0x07050709,0x09070907,0x07050705,0x05090707,0x05070707
	.word 0x0E0E0812,0x07071212,0x07080712,0x08090F12,0x07070712,0x070F090F,0x0707070E,0x09090E0F
	.word 0x0F120708,0x0908080E,0x07070F08,0x08080708,0x070F0E08,0x08070807,0x0F0E0807,0x0707070F
	.word 0x070E0808,0x07090709,0x08080807,0x09070708,0x07090709,0x0F0F0707,0x09070907,0x0E0E0F07
	.word 0x09070507,0x08080E12,0x12070709,0x0808080F,0x120F0907,0x08080807,0x07121207,0x07080708
	.word 0x09070507,0x07070909,0x07070707,0x11090909,0x07070F0F,0x09090907,0x070F0E0E,0x0F0F0707
	.word 0x0F080808,0x0E0E0F07,0x12070808,0x08081209,0x12070808,0x12120707,0x07121209,0x05070507

	.word 0x07090509,0x07050707,0x07090905,0x05090707,0x09090709,0x07090709,0x0909090F,0x09070909
	.word 0x07090F0E,0x07090909,0x09091207,0x07090709,0x09070912,0x09070909,0x07090707,0x09090909

	.section .rodata
	.align	2
	.global tm_stage1_zb11_bn_gfxMap		@ 2048 unsigned chars
	.hidden tm_stage1_zb11_bn_gfxMap
tm_stage1_zb11_bn_gfxMap:
	.byte 0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
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
	.byte 0x00,0x00,0x11,0x12,0x13,0x14,0x15,0x16,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x12,0x13,0x14,0x15,0x16,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x23,0x24,0x25,0x26,0x27,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x23,0x24,0x25,0x26,0x27,0x28,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x2F,0x30,0x31,0x32,0x33,0x34,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x30,0x31,0x32,0x33,0x34,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x35,0x36,0x37,0x38,0x39,0x3A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x35,0x36,0x37,0x38,0x39,0x3A,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x3B,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3B,0x3C,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x3D,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3D,0x3E,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x3F,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x40,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x41,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x42,0x00,0x00,0x00,0x00,0x00,0x00

	.byte 0x00,0x00,0x00,0x00,0x43,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x43,0x44,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x00,0x00,0x00,0x00,0x45,0x46,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x47,0x48,0x47,0x48,0x00,0x00,0x00,0x00,0x45,0x46,0x00,0x00,0x00,0x00,0x00,0x00
	.byte 0x03,0x04,0x03,0x04,0x05,0x06,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02
	.byte 0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02,0x01,0x02
	.byte 0x0B,0x0C,0x0B,0x0C,0x0D,0x0E,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A
	.byte 0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A,0x09,0x0A

	.byte 0x49,0x4A,0x49,0x4A,0x4B,0x4C,0x07,0x08,0x07,0x08,0x07,0x08,0x07,0x08,0x07,0x08
	.byte 0x07,0x08,0x07,0x08,0x07,0x08,0x07,0x08,0x07,0x08,0x07,0x08,0x07,0x08,0x07,0x08
	.byte 0x4D,0x4E,0x4D,0x4E,0x4F,0x50,0x0F,0x10,0x0F,0x10,0x0F,0x10,0x0F,0x10,0x0F,0x10
	.byte 0x0F,0x10,0x0F,0x10,0x0F,0x10,0x0F,0x10,0x0F,0x10,0x0F,0x10,0x0F,0x10,0x0F,0x10
	.byte 0x49,0x4A,0x49,0x4A,0x4B,0x4C,0x07,0x08,0x07,0x08,0x07,0x08,0x07,0x08,0x07,0x08
	.byte 0x07,0x08,0x07,0x08,0x07,0x08,0x07,0x08,0x07,0x08,0x07,0x08,0x07,0x08,0x07,0x08
	.byte 0x4D,0x4E,0x4D,0x4E,0x4F,0x50,0x0F,0x10,0x0F,0x10,0x0F,0x10,0x0F,0x10,0x0F,0x10
	.byte 0x0F,0x10,0x0F,0x10,0x0F,0x10,0x0F,0x10,0x0F,0x10,0x0F,0x10,0x0F,0x10,0x0F,0x10

	.section .rodata
	.align	2
	.global tm_stage1_zb11_bn_gfxPal		@ 64 unsigned chars
	.hidden tm_stage1_zb11_bn_gfxPal
tm_stage1_zb11_bn_gfxPal:
	.hword 0x0000,0x00CA,0x01CE,0x018B,0x06D4,0x1592,0x0046,0x0151
	.hword 0x01D4,0x00CF,0x2277,0x022F,0x016D,0x012C,0x0E97,0x00CD
	.hword 0x01AD,0x0089,0x00EB,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(tm_stage1_zb11_bn_gfx)