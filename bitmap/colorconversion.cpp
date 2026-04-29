
//
// bitmap/colorconversion.cpp
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 174
//

// <04690F6B> bitmap/colorconversion.cpp:109
void GetUserFormatToRGBA8888Func_t(ImageFormat srcImageFormat)
{
} /* size: 0 */

// <04690F54> bitmap/colorconversion.cpp:184
void GetRGBA8888ToUserFormatFunc_t(ImageFormat dstImageFormat)
{
} /* size: 0 */

// <04690F15> bitmap/colorconversion.cpp:303
// variable: 1
void RescaleBitNumber(unsigned int nSrcValue, unsigned int nSrcBits, unsigned int nScaleToBits)
{
	unsigned int nMaxSrc; // 305
} /* size: 0, variables: 1 */

// <04690EA2> bitmap/colorconversion.cpp:320
// variables: 2
inline void GetColorBlockColorsBGRA8888(DXTColBlock* pBlock, BGRA8888_t* col_0, BGRA8888_t* col_1, BGRA8888_t* col_2, BGRA8888_t* col_3, uint16& wrd)
{
	uint16 color0; // 326
	uint16 color1; // 327
} /* size: 0, variables: 2 */

// <0467DE76> bitmap/colorconversion.cpp:395
// variables: 7
inline void DecodeColorBlock<RGBA8888_t>(RGBA8888_t* pOutputImage, DXTColBlock* pColorBlock, int width, BGRA8888_t* col_0, BGRA8888_t* col_1, BGRA8888_t* col_2, BGRA8888_t* col_3)
{
	const char   __FUNCTION__; // 44677
	uint32 bits; // 400
	int r; // 401
	int n; // 401
	const uint32  masks; // 404
	const int  shift; // 405
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 438
	}
} /* size: 0, variables: 6 */

// <0467D91F> bitmap/colorconversion.cpp:395
// variables: 7
inline void DecodeColorBlock<RGB888_t>(RGB888_t* pOutputImage, DXTColBlock* pColorBlock, int width, BGRA8888_t* col_0, BGRA8888_t* col_1, BGRA8888_t* col_2, BGRA8888_t* col_3)
{
	const char   __FUNCTION__; // 44677
	uint32 bits; // 400
	int r; // 401
	int n; // 401
	const uint32  masks; // 404
	const int  shift; // 405
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 438
	}
} /* size: 0, variables: 6 */

// <0467D77F> bitmap/colorconversion.cpp:395
// variables: 7
inline void DecodeColorBlock<BGR565_t>(BGR565_t* pOutputImage, DXTColBlock* pColorBlock, int width, BGRA8888_t* col_0, BGRA8888_t* col_1, BGRA8888_t* col_2, BGRA8888_t* col_3)
{
	const char   __FUNCTION__; // 44677
	uint32 bits; // 400
	int r; // 401
	int n; // 401
	const uint32  masks; // 404
	const int  shift; // 405
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 438
	}
} /* size: 0, variables: 6 */

// <0467D50B> bitmap/colorconversion.cpp:395
// variables: 7
// function calls: 4
void DecodeColorBlock<BGRA5551_t>(BGRA5551_t* pOutputImage, DXTColBlock* pColorBlock, int width, BGRA8888_t* col_0, BGRA8888_t* col_1, BGRA8888_t* col_2, BGRA8888_t* col_3)
{
	const char   __FUNCTION__; // 44677
	uint32 bits; // 400
	int r; // 401
	int n; // 401
	const uint32  masks; // 404
	const int  shift; // 405
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 438
	}
	BGRA5551_t::operator=(
			const BGRA8888_t& in);  // 426
	BGRA5551_t::operator=(
			const BGRA8888_t& in);  // 422
	BGRA5551_t::operator=(
			const BGRA8888_t& in);  // 434
	BGRA5551_t::operator=(
			const BGRA8888_t& in);  // 430
} /* size: 0, variables: 6, inline expansions: 4 (357 bytes) */

// <00E765E9> bitmap/colorconversion.cpp:395
// variables: 7
inline void DecodeColorBlock<RGBA8888_t>(RGBA8888_t* pOutputImage, DXTColBlock* pColorBlock, int width, BGRA8888_t* col_0, BGRA8888_t* col_1, BGRA8888_t* col_2, BGRA8888_t* col_3)
{
	const char   __FUNCTION__; // 7339
	uint32 bits; // 400
	int r; // 401
	int n; // 401
	const uint32  masks; // 404
	const int  shift; // 405
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 438
	}
} /* size: 0, variables: 6 */

// <00E76092> bitmap/colorconversion.cpp:395
// variables: 7
inline void DecodeColorBlock<RGB888_t>(RGB888_t* pOutputImage, DXTColBlock* pColorBlock, int width, BGRA8888_t* col_0, BGRA8888_t* col_1, BGRA8888_t* col_2, BGRA8888_t* col_3)
{
	const char   __FUNCTION__; // 7339
	uint32 bits; // 400
	int r; // 401
	int n; // 401
	const uint32  masks; // 404
	const int  shift; // 405
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 438
	}
} /* size: 0, variables: 6 */

// <00E75EF2> bitmap/colorconversion.cpp:395
// variables: 7
inline void DecodeColorBlock<BGR565_t>(BGR565_t* pOutputImage, DXTColBlock* pColorBlock, int width, BGRA8888_t* col_0, BGRA8888_t* col_1, BGRA8888_t* col_2, BGRA8888_t* col_3)
{
	const char   __FUNCTION__; // 7339
	uint32 bits; // 400
	int r; // 401
	int n; // 401
	const uint32  masks; // 404
	const int  shift; // 405
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 438
	}
} /* size: 0, variables: 6 */

// <00E75C7E> bitmap/colorconversion.cpp:395
// variables: 7
// function calls: 4
void DecodeColorBlock<BGRA5551_t>(BGRA5551_t* pOutputImage, DXTColBlock* pColorBlock, int width, BGRA8888_t* col_0, BGRA8888_t* col_1, BGRA8888_t* col_2, BGRA8888_t* col_3)
{
	const char   __FUNCTION__; // 7339
	uint32 bits; // 400
	int r; // 401
	int n; // 401
	const uint32  masks; // 404
	const int  shift; // 405
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 438
	}
	BGRA5551_t::operator=(
			const BGRA8888_t& in);  // 426
	BGRA5551_t::operator=(
			const BGRA8888_t& in);  // 422
	BGRA5551_t::operator=(
			const BGRA8888_t& in);  // 434
	BGRA5551_t::operator=(
			const BGRA8888_t& in);  // 430
} /* size: 0, variables: 6, inline expansions: 4 (357 bytes) */

// <00528076> bitmap/colorconversion.cpp:395
// variables: 7
inline void DecodeColorBlock<RGBA8888_t>(RGBA8888_t* pOutputImage, DXTColBlock* pColorBlock, int width, BGRA8888_t* col_0, BGRA8888_t* col_1, BGRA8888_t* col_2, BGRA8888_t* col_3)
{
	const char   __FUNCTION__; // 49765
	uint32 bits; // 400
	int r; // 401
	int n; // 401
	const uint32  masks; // 404
	const int  shift; // 405
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 438
	}
} /* size: 0, variables: 6 */

// <00527B1F> bitmap/colorconversion.cpp:395
// variables: 7
inline void DecodeColorBlock<RGB888_t>(RGB888_t* pOutputImage, DXTColBlock* pColorBlock, int width, BGRA8888_t* col_0, BGRA8888_t* col_1, BGRA8888_t* col_2, BGRA8888_t* col_3)
{
	const char   __FUNCTION__; // 49765
	uint32 bits; // 400
	int r; // 401
	int n; // 401
	const uint32  masks; // 404
	const int  shift; // 405
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 438
	}
} /* size: 0, variables: 6 */

// <0052797F> bitmap/colorconversion.cpp:395
// variables: 7
inline void DecodeColorBlock<BGR565_t>(BGR565_t* pOutputImage, DXTColBlock* pColorBlock, int width, BGRA8888_t* col_0, BGRA8888_t* col_1, BGRA8888_t* col_2, BGRA8888_t* col_3)
{
	const char   __FUNCTION__; // 49765
	uint32 bits; // 400
	int r; // 401
	int n; // 401
	const uint32  masks; // 404
	const int  shift; // 405
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 438
	}
} /* size: 0, variables: 6 */

// <0052770B> bitmap/colorconversion.cpp:395
// variables: 7
// function calls: 4
void DecodeColorBlock<BGRA5551_t>(BGRA5551_t* pOutputImage, DXTColBlock* pColorBlock, int width, BGRA8888_t* col_0, BGRA8888_t* col_1, BGRA8888_t* col_2, BGRA8888_t* col_3)
{
	const char   __FUNCTION__; // 49765
	uint32 bits; // 400
	int r; // 401
	int n; // 401
	const uint32  masks; // 404
	const int  shift; // 405
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 438
	}
	BGRA5551_t::operator=(
			const BGRA8888_t& in);  // 426
	BGRA5551_t::operator=(
			const BGRA8888_t& in);  // 422
	BGRA5551_t::operator=(
			const BGRA8888_t& in);  // 434
	BGRA5551_t::operator=(
			const BGRA8888_t& in);  // 430
} /* size: 0, variables: 6, inline expansions: 4 (0 bytes) */

// <0467DD6E> bitmap/colorconversion.cpp:447
// variables: 10
inline void DecodeAlphaImageDataBlock<RGBA8888_t>(RGBA8888_t* pImPos, DXTAlphaImageDataBlock* pAlphaBlock, int width, int nChannelSelect)
{
	const char   __FUNCTION__; // 44740
	BYTE gBits; // 449
	BGRA8888_t gACol; // 450
	const uint32  mask; // 457
	uint32 bits; // 459
	int row; // 497
	int pix; // 497
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 504
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 505
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 506
	}
} /* size: 0, variables: 7 */

// <00E764E1> bitmap/colorconversion.cpp:447
// variables: 10
inline void DecodeAlphaImageDataBlock<RGBA8888_t>(RGBA8888_t* pImPos, DXTAlphaImageDataBlock* pAlphaBlock, int width, int nChannelSelect)
{
	const char   __FUNCTION__; // 7402
	BYTE gBits; // 449
	BGRA8888_t gACol; // 450
	const uint32  mask; // 457
	uint32 bits; // 459
	int row; // 497
	int pix; // 497
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 504
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 505
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 506
	}
} /* size: 0, variables: 7 */

// <00527F6E> bitmap/colorconversion.cpp:447
// variables: 10
inline void DecodeAlphaImageDataBlock<RGBA8888_t>(RGBA8888_t* pImPos, DXTAlphaImageDataBlock* pAlphaBlock, int width, int nChannelSelect)
{
	const char   __FUNCTION__; // 49828
	BYTE gBits; // 449
	BGRA8888_t gACol; // 450
	const uint32  mask; // 457
	uint32 bits; // 459
	int row; // 497
	int pix; // 497
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 504
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 505
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 506
	}
} /* size: 0, variables: 7 */

// <0467DB48> bitmap/colorconversion.cpp:543
// variables: 11
void DecodeAlpha3BitLinear<RGBA8888_t>(RGBA8888_t* pImPos, DXTAlphaBlock3BitLinear* pAlphaBlock, int width, int nChannelSelect)
{
	const char   __FUNCTION__; // 44719
	BYTE gBits; // 545
	uint16 gAlphas; // 546
	BGRA8888_t gACol; // 547
	const uint32  mask; // 583
	uint32 bits; // 585
	int row; // 623
	int pix; // 623
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 630
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 631
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 632
	}
} /* size: 0, variables: 8 */

// <0467CE33> bitmap/colorconversion.cpp:543
// variables: 11
inline void DecodeAlpha3BitLinear<BGRA5551_t>(BGRA5551_t* pImPos, DXTAlphaBlock3BitLinear* pAlphaBlock, int width, int nChannelSelect)
{
	const char   __FUNCTION__; // 44719
	BYTE gBits; // 545
	uint16 gAlphas; // 546
	BGRA8888_t gACol; // 547
	const uint32  mask; // 583
	uint32 bits; // 585
	int row; // 623
	int pix; // 623
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 630
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 631
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 632
	}
} /* size: 0, variables: 8 */

// <00E762BB> bitmap/colorconversion.cpp:543
// variables: 11
void DecodeAlpha3BitLinear<RGBA8888_t>(RGBA8888_t* pImPos, DXTAlphaBlock3BitLinear* pAlphaBlock, int width, int nChannelSelect)
{
	const char   __FUNCTION__; // 7381
	BYTE gBits; // 545
	uint16 gAlphas; // 546
	BGRA8888_t gACol; // 547
	const uint32  mask; // 583
	uint32 bits; // 585
	int row; // 623
	int pix; // 623
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 630
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 631
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 632
	}
} /* size: 0, variables: 8 */

// <00E755A6> bitmap/colorconversion.cpp:543
// variables: 11
inline void DecodeAlpha3BitLinear<BGRA5551_t>(BGRA5551_t* pImPos, DXTAlphaBlock3BitLinear* pAlphaBlock, int width, int nChannelSelect)
{
	const char   __FUNCTION__; // 7381
	BYTE gBits; // 545
	uint16 gAlphas; // 546
	BGRA8888_t gACol; // 547
	const uint32  mask; // 583
	uint32 bits; // 585
	int row; // 623
	int pix; // 623
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 630
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 631
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 632
	}
} /* size: 0, variables: 8 */

// <00527D48> bitmap/colorconversion.cpp:543
// variables: 11
void DecodeAlpha3BitLinear<RGBA8888_t>(RGBA8888_t* pImPos, DXTAlphaBlock3BitLinear* pAlphaBlock, int width, int nChannelSelect)
{
	const char   __FUNCTION__; // 49807
	BYTE gBits; // 545
	uint16 gAlphas; // 546
	BGRA8888_t gACol; // 547
	const uint32  mask; // 583
	uint32 bits; // 585
	int row; // 623
	int pix; // 623
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 630
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 631
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 632
	}
} /* size: 0, variables: 8 */

// <00527033> bitmap/colorconversion.cpp:543
// variables: 11
inline void DecodeAlpha3BitLinear<BGRA5551_t>(BGRA5551_t* pImPos, DXTAlphaBlock3BitLinear* pAlphaBlock, int width, int nChannelSelect)
{
	const char   __FUNCTION__; // 49807
	BYTE gBits; // 545
	uint16 gAlphas; // 546
	BGRA8888_t gACol; // 547
	const uint32  mask; // 583
	uint32 bits; // 585
	int row; // 623
	int pix; // 623
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 630
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 631
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 632
	}
} /* size: 0, variables: 8 */

// <04685569> bitmap/colorconversion.cpp:668
// variables: 28
// function calls: 12
void ConvertFromDXT1<RGBA8888_t>(const uint8* src, RGBA8888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 44656
	int realWidth; // 678
	int realHeight; // 679
	RGBA8888_t* realDst; // 680
	int xblocks; // 697
	int yblocks; // 697
	RGBA8888_t* pDstScan; // 700
	uint32* pSrcScan; // 701
	DXTColBlock* pBlock; // 703
	BGRA8888_t col_0; // 704
	BGRA8888_t col_1; // 704
	BGRA8888_t col_2; // 704
	BGRA8888_t col_3; // 704
	uint16 wrdDummy; // 705
	int i; // 707
	int j; // 707
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 672
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 674
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 676
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 692
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 694
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 695
	}
	{
		int x; // 726
		int y; // 726
	}
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 426
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 422
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 434
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<RGBA8888_t>(RGBA8888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 719
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 714
} /* size: 0, variables: 16, inline expansions: 12 (936 bytes) */

// <04683858> bitmap/colorconversion.cpp:668
// variables: 28
// function calls: 12
void ConvertFromDXT1<BGRA8888_t>(const uint8* src, BGRA8888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 44656
	int realWidth; // 678
	int realHeight; // 679
	BGRA8888_t* realDst; // 680
	int xblocks; // 697
	int yblocks; // 697
	BGRA8888_t* pDstScan; // 700
	uint32* pSrcScan; // 701
	DXTColBlock* pBlock; // 703
	BGRA8888_t col_0; // 704
	BGRA8888_t col_1; // 704
	BGRA8888_t col_2; // 704
	BGRA8888_t col_3; // 704
	uint16 wrdDummy; // 705
	int i; // 707
	int j; // 707
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 672
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 674
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 676
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 692
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 694
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 695
	}
	{
		int x; // 726
		int y; // 726
		BGRA8888_t::operator=(
				const BGRA8888_t& in);  // 731
	}
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 426
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 434
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<BGRA8888_t>(BGRA8888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 719
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 714
} /* size: 0, variables: 16, inline expansions: 11 (923 bytes) */

// <046830D7> bitmap/colorconversion.cpp:668
// variables: 28
// function calls: 12
void ConvertFromDXT1<RGB888_t>(const uint8* src, RGB888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 44656
	int realWidth; // 678
	int realHeight; // 679
	RGB888_t* realDst; // 680
	int xblocks; // 697
	int yblocks; // 697
	RGB888_t* pDstScan; // 700
	uint32* pSrcScan; // 701
	DXTColBlock* pBlock; // 703
	BGRA8888_t col_0; // 704
	BGRA8888_t col_1; // 704
	BGRA8888_t col_2; // 704
	BGRA8888_t col_3; // 704
	uint16 wrdDummy; // 705
	int i; // 707
	int j; // 707
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 672
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 674
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 676
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 692
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 694
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 695
	}
	{
		int x; // 726
		int y; // 726
	}
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 426
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 422
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 434
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<RGB888_t>(RGB888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 719
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 714
} /* size: 0, variables: 16, inline expansions: 12 (933 bytes) */

// <04682195> bitmap/colorconversion.cpp:668
// variables: 28
// function calls: 12
void ConvertFromDXT1<BGR565_t>(const uint8* src, BGR565_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 44656
	int realWidth; // 678
	int realHeight; // 679
	BGR565_t* realDst; // 680
	int xblocks; // 697
	int yblocks; // 697
	BGR565_t* pDstScan; // 700
	uint32* pSrcScan; // 701
	DXTColBlock* pBlock; // 703
	BGRA8888_t col_0; // 704
	BGRA8888_t col_1; // 704
	BGRA8888_t col_2; // 704
	BGRA8888_t col_3; // 704
	uint16 wrdDummy; // 705
	int i; // 707
	int j; // 707
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 672
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 674
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 676
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 692
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 694
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 695
	}
	{
		int x; // 726
		int y; // 726
	}
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 430
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 426
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 422
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 434
	{
	}
	DecodeColorBlock<BGR565_t>(BGR565_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 719
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 714
} /* size: 0, variables: 16, inline expansions: 12 (1068 bytes) */

// <04681B85> bitmap/colorconversion.cpp:668
// variables: 28
// function calls: 7
void ConvertFromDXT1<BGRA5551_t>(const uint8* src, BGRA5551_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 44656
	int realWidth; // 678
	int realHeight; // 679
	BGRA5551_t* realDst; // 680
	int xblocks; // 697
	int yblocks; // 697
	BGRA5551_t* pDstScan; // 700
	uint32* pSrcScan; // 701
	DXTColBlock* pBlock; // 703
	BGRA8888_t col_0; // 704
	BGRA8888_t col_1; // 704
	BGRA8888_t col_2; // 704
	BGRA8888_t col_3; // 704
	uint16 wrdDummy; // 705
	int i; // 707
	int j; // 707
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 672
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 674
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 676
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 692
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 694
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 695
	}
	{
		int x; // 726
		int y; // 726
	}
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 714
} /* size: 0, variables: 16, inline expansions: 7 (506 bytes) */

// <00E7DCDC> bitmap/colorconversion.cpp:668
// variables: 28
// function calls: 12
void ConvertFromDXT1<RGBA8888_t>(const uint8* src, RGBA8888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 7318
	int realWidth; // 678
	int realHeight; // 679
	RGBA8888_t* realDst; // 680
	int xblocks; // 697
	int yblocks; // 697
	RGBA8888_t* pDstScan; // 700
	uint32* pSrcScan; // 701
	DXTColBlock* pBlock; // 703
	BGRA8888_t col_0; // 704
	BGRA8888_t col_1; // 704
	BGRA8888_t col_2; // 704
	BGRA8888_t col_3; // 704
	uint16 wrdDummy; // 705
	int i; // 707
	int j; // 707
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 672
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 674
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 676
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 692
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 694
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 695
	}
	{
		int x; // 726
		int y; // 726
	}
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 426
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 422
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 434
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<RGBA8888_t>(RGBA8888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 719
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 714
} /* size: 0, variables: 16, inline expansions: 12 (936 bytes) */

// <00E7BFCB> bitmap/colorconversion.cpp:668
// variables: 28
// function calls: 12
void ConvertFromDXT1<BGRA8888_t>(const uint8* src, BGRA8888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 7318
	int realWidth; // 678
	int realHeight; // 679
	BGRA8888_t* realDst; // 680
	int xblocks; // 697
	int yblocks; // 697
	BGRA8888_t* pDstScan; // 700
	uint32* pSrcScan; // 701
	DXTColBlock* pBlock; // 703
	BGRA8888_t col_0; // 704
	BGRA8888_t col_1; // 704
	BGRA8888_t col_2; // 704
	BGRA8888_t col_3; // 704
	uint16 wrdDummy; // 705
	int i; // 707
	int j; // 707
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 672
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 674
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 676
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 692
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 694
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 695
	}
	{
		int x; // 726
		int y; // 726
		BGRA8888_t::operator=(
				const BGRA8888_t& in);  // 731
	}
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 426
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 434
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<BGRA8888_t>(BGRA8888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 719
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 714
} /* size: 0, variables: 16, inline expansions: 11 (923 bytes) */

// <00E7B84A> bitmap/colorconversion.cpp:668
// variables: 28
// function calls: 12
void ConvertFromDXT1<RGB888_t>(const uint8* src, RGB888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 7318
	int realWidth; // 678
	int realHeight; // 679
	RGB888_t* realDst; // 680
	int xblocks; // 697
	int yblocks; // 697
	RGB888_t* pDstScan; // 700
	uint32* pSrcScan; // 701
	DXTColBlock* pBlock; // 703
	BGRA8888_t col_0; // 704
	BGRA8888_t col_1; // 704
	BGRA8888_t col_2; // 704
	BGRA8888_t col_3; // 704
	uint16 wrdDummy; // 705
	int i; // 707
	int j; // 707
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 672
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 674
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 676
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 692
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 694
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 695
	}
	{
		int x; // 726
		int y; // 726
	}
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 426
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 422
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 434
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<RGB888_t>(RGB888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 719
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 714
} /* size: 0, variables: 16, inline expansions: 12 (933 bytes) */

// <00E7A908> bitmap/colorconversion.cpp:668
// variables: 28
// function calls: 12
void ConvertFromDXT1<BGR565_t>(const uint8* src, BGR565_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 7318
	int realWidth; // 678
	int realHeight; // 679
	BGR565_t* realDst; // 680
	int xblocks; // 697
	int yblocks; // 697
	BGR565_t* pDstScan; // 700
	uint32* pSrcScan; // 701
	DXTColBlock* pBlock; // 703
	BGRA8888_t col_0; // 704
	BGRA8888_t col_1; // 704
	BGRA8888_t col_2; // 704
	BGRA8888_t col_3; // 704
	uint16 wrdDummy; // 705
	int i; // 707
	int j; // 707
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 672
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 674
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 676
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 692
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 694
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 695
	}
	{
		int x; // 726
		int y; // 726
	}
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 430
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 426
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 422
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 434
	{
	}
	DecodeColorBlock<BGR565_t>(BGR565_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 719
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 714
} /* size: 0, variables: 16, inline expansions: 12 (1068 bytes) */

// <00E7A2F8> bitmap/colorconversion.cpp:668
// variables: 28
// function calls: 7
void ConvertFromDXT1<BGRA5551_t>(const uint8* src, BGRA5551_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 7318
	int realWidth; // 678
	int realHeight; // 679
	BGRA5551_t* realDst; // 680
	int xblocks; // 697
	int yblocks; // 697
	BGRA5551_t* pDstScan; // 700
	uint32* pSrcScan; // 701
	DXTColBlock* pBlock; // 703
	BGRA8888_t col_0; // 704
	BGRA8888_t col_1; // 704
	BGRA8888_t col_2; // 704
	BGRA8888_t col_3; // 704
	uint16 wrdDummy; // 705
	int i; // 707
	int j; // 707
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 672
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 674
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 676
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 692
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 694
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 695
	}
	{
		int x; // 726
		int y; // 726
	}
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 714
} /* size: 0, variables: 16, inline expansions: 7 (506 bytes) */

// <0052F769> bitmap/colorconversion.cpp:668
// variables: 28
// function calls: 12
void ConvertFromDXT1<RGBA8888_t>(const uint8* src, RGBA8888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 49744
	int realWidth; // 678
	int realHeight; // 679
	RGBA8888_t* realDst; // 680
	int xblocks; // 697
	int yblocks; // 697
	RGBA8888_t* pDstScan; // 700
	uint32* pSrcScan; // 701
	DXTColBlock* pBlock; // 703
	BGRA8888_t col_0; // 704
	BGRA8888_t col_1; // 704
	BGRA8888_t col_2; // 704
	BGRA8888_t col_3; // 704
	uint16 wrdDummy; // 705
	int i; // 707
	int j; // 707
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 672
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 674
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 676
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 692
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 694
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 695
	}
	{
		int x; // 726
		int y; // 726
	}
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 426
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 422
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 434
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<RGBA8888_t>(RGBA8888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 719
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 714
} /* size: 0, variables: 16, inline expansions: 12 (0 bytes) */

// <0052DA58> bitmap/colorconversion.cpp:668
// variables: 28
// function calls: 12
void ConvertFromDXT1<BGRA8888_t>(const uint8* src, BGRA8888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 49744
	int realWidth; // 678
	int realHeight; // 679
	BGRA8888_t* realDst; // 680
	int xblocks; // 697
	int yblocks; // 697
	BGRA8888_t* pDstScan; // 700
	uint32* pSrcScan; // 701
	DXTColBlock* pBlock; // 703
	BGRA8888_t col_0; // 704
	BGRA8888_t col_1; // 704
	BGRA8888_t col_2; // 704
	BGRA8888_t col_3; // 704
	uint16 wrdDummy; // 705
	int i; // 707
	int j; // 707
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 672
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 674
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 676
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 692
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 694
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 695
	}
	{
		int x; // 726
		int y; // 726
		BGRA8888_t::operator=(
				const BGRA8888_t& in);  // 731
	}
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 426
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 434
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<BGRA8888_t>(BGRA8888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 719
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 714
} /* size: 0, variables: 16, inline expansions: 11 (0 bytes) */

// <0052D2D7> bitmap/colorconversion.cpp:668
// variables: 28
// function calls: 12
void ConvertFromDXT1<RGB888_t>(const uint8* src, RGB888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 49744
	int realWidth; // 678
	int realHeight; // 679
	RGB888_t* realDst; // 680
	int xblocks; // 697
	int yblocks; // 697
	RGB888_t* pDstScan; // 700
	uint32* pSrcScan; // 701
	DXTColBlock* pBlock; // 703
	BGRA8888_t col_0; // 704
	BGRA8888_t col_1; // 704
	BGRA8888_t col_2; // 704
	BGRA8888_t col_3; // 704
	uint16 wrdDummy; // 705
	int i; // 707
	int j; // 707
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 672
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 674
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 676
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 692
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 694
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 695
	}
	{
		int x; // 726
		int y; // 726
	}
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 426
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 422
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 434
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<RGB888_t>(RGB888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 719
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 714
} /* size: 0, variables: 16, inline expansions: 12 (0 bytes) */

// <0052C395> bitmap/colorconversion.cpp:668
// variables: 28
// function calls: 12
void ConvertFromDXT1<BGR565_t>(const uint8* src, BGR565_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 49744
	int realWidth; // 678
	int realHeight; // 679
	BGR565_t* realDst; // 680
	int xblocks; // 697
	int yblocks; // 697
	BGR565_t* pDstScan; // 700
	uint32* pSrcScan; // 701
	DXTColBlock* pBlock; // 703
	BGRA8888_t col_0; // 704
	BGRA8888_t col_1; // 704
	BGRA8888_t col_2; // 704
	BGRA8888_t col_3; // 704
	uint16 wrdDummy; // 705
	int i; // 707
	int j; // 707
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 672
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 674
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 676
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 692
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 694
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 695
	}
	{
		int x; // 726
		int y; // 726
	}
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 430
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 426
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 422
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 434
	{
	}
	DecodeColorBlock<BGR565_t>(BGR565_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 719
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 714
} /* size: 0, variables: 16, inline expansions: 12 (0 bytes) */

// <0052BD85> bitmap/colorconversion.cpp:668
// variables: 28
// function calls: 7
void ConvertFromDXT1<BGRA5551_t>(const uint8* src, BGRA5551_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 49744
	int realWidth; // 678
	int realHeight; // 679
	BGRA5551_t* realDst; // 680
	int xblocks; // 697
	int yblocks; // 697
	BGRA5551_t* pDstScan; // 700
	uint32* pSrcScan; // 701
	DXTColBlock* pBlock; // 703
	BGRA8888_t col_0; // 704
	BGRA8888_t col_1; // 704
	BGRA8888_t col_2; // 704
	BGRA8888_t col_3; // 704
	uint16 wrdDummy; // 705
	int i; // 707
	int j; // 707
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 671
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 672
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 673
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 674
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 676
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 692
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 694
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 695
	}
	{
		int x; // 726
		int y; // 726
	}
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 714
} /* size: 0, variables: 16, inline expansions: 7 (0 bytes) */

// <04684CDF> bitmap/colorconversion.cpp:738
// variables: 22
// function calls: 13
void ConvertFromDXT3<RGBA8888_t>(const uint8* src, RGBA8888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 44656
	int realWidth; // 740
	int realHeight; // 741
	RGBA8888_t* realDst; // 742
	int xblocks; // 759
	int yblocks; // 759
	RGBA8888_t* pDstScan; // 763
	uint32* pSrcScan; // 764
	DXTColBlock* pBlock; // 766
	DXTAlphaImageDataBlock* pAlphaBlock; // 767
	BGRA8888_t col_0; // 769
	BGRA8888_t col_1; // 769
	BGRA8888_t col_2; // 769
	BGRA8888_t col_3; // 769
	uint16 wrd; // 770
	int i; // 772
	int j; // 772
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 754
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 756
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 757
	}
	{
		int x; // 806
		int y; // 806
	}
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 426
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 422
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 434
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<RGBA8888_t>(RGBA8888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 795
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 789
	{
	}
	{
	}
	{
	}
	DecodeAlphaImageDataBlock<RGBA8888_t>(RGBA8888_t* pImPos,
						DXTAlphaImageDataBlock* pAlphaBlock,
						int width,
						int nChannelSelect);  // 799
} /* size: 0, variables: 17, inline expansions: 13 (1627 bytes) */

// <04680D4C> bitmap/colorconversion.cpp:738
// variables: 22
// function calls: 13
void ConvertFromDXT3<BGRA8888_t>(const uint8* src, BGRA8888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 44656
	int realWidth; // 740
	int realHeight; // 741
	BGRA8888_t* realDst; // 742
	int xblocks; // 759
	int yblocks; // 759
	BGRA8888_t* pDstScan; // 763
	uint32* pSrcScan; // 764
	DXTColBlock* pBlock; // 766
	DXTAlphaImageDataBlock* pAlphaBlock; // 767
	BGRA8888_t col_0; // 769
	BGRA8888_t col_1; // 769
	BGRA8888_t col_2; // 769
	BGRA8888_t col_3; // 769
	uint16 wrd; // 770
	int i; // 772
	int j; // 772
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 754
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 756
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 757
	}
	{
		int x; // 806
		int y; // 806
		BGRA8888_t::operator=(
				const BGRA8888_t& in);  // 811
	}
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 426
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 434
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<BGRA8888_t>(BGRA8888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 795
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 789
	{
	}
	{
	}
	{
	}
	DecodeAlphaImageDataBlock<BGRA8888_t>(BGRA8888_t* pImPos,
						DXTAlphaImageDataBlock* pAlphaBlock,
						int width,
						int nChannelSelect);  // 799
} /* size: 0, variables: 17, inline expansions: 12 (1684 bytes) */

// <00E7D452> bitmap/colorconversion.cpp:738
// variables: 22
// function calls: 13
void ConvertFromDXT3<RGBA8888_t>(const uint8* src, RGBA8888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 7318
	int realWidth; // 740
	int realHeight; // 741
	RGBA8888_t* realDst; // 742
	int xblocks; // 759
	int yblocks; // 759
	RGBA8888_t* pDstScan; // 763
	uint32* pSrcScan; // 764
	DXTColBlock* pBlock; // 766
	DXTAlphaImageDataBlock* pAlphaBlock; // 767
	BGRA8888_t col_0; // 769
	BGRA8888_t col_1; // 769
	BGRA8888_t col_2; // 769
	BGRA8888_t col_3; // 769
	uint16 wrd; // 770
	int i; // 772
	int j; // 772
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 754
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 756
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 757
	}
	{
		int x; // 806
		int y; // 806
	}
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 426
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 422
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 434
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<RGBA8888_t>(RGBA8888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 795
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 789
	{
	}
	{
	}
	{
	}
	DecodeAlphaImageDataBlock<RGBA8888_t>(RGBA8888_t* pImPos,
						DXTAlphaImageDataBlock* pAlphaBlock,
						int width,
						int nChannelSelect);  // 799
} /* size: 0, variables: 17, inline expansions: 13 (1627 bytes) */

// <00E794BF> bitmap/colorconversion.cpp:738
// variables: 22
// function calls: 13
void ConvertFromDXT3<BGRA8888_t>(const uint8* src, BGRA8888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 7318
	int realWidth; // 740
	int realHeight; // 741
	BGRA8888_t* realDst; // 742
	int xblocks; // 759
	int yblocks; // 759
	BGRA8888_t* pDstScan; // 763
	uint32* pSrcScan; // 764
	DXTColBlock* pBlock; // 766
	DXTAlphaImageDataBlock* pAlphaBlock; // 767
	BGRA8888_t col_0; // 769
	BGRA8888_t col_1; // 769
	BGRA8888_t col_2; // 769
	BGRA8888_t col_3; // 769
	uint16 wrd; // 770
	int i; // 772
	int j; // 772
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 754
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 756
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 757
	}
	{
		int x; // 806
		int y; // 806
		BGRA8888_t::operator=(
				const BGRA8888_t& in);  // 811
	}
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 426
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 434
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<BGRA8888_t>(BGRA8888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 795
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 789
	{
	}
	{
	}
	{
	}
	DecodeAlphaImageDataBlock<BGRA8888_t>(BGRA8888_t* pImPos,
						DXTAlphaImageDataBlock* pAlphaBlock,
						int width,
						int nChannelSelect);  // 799
} /* size: 0, variables: 17, inline expansions: 12 (1684 bytes) */

// <0052EEDF> bitmap/colorconversion.cpp:738
// variables: 22
// function calls: 13
void ConvertFromDXT3<RGBA8888_t>(const uint8* src, RGBA8888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 49744
	int realWidth; // 740
	int realHeight; // 741
	RGBA8888_t* realDst; // 742
	int xblocks; // 759
	int yblocks; // 759
	RGBA8888_t* pDstScan; // 763
	uint32* pSrcScan; // 764
	DXTColBlock* pBlock; // 766
	DXTAlphaImageDataBlock* pAlphaBlock; // 767
	BGRA8888_t col_0; // 769
	BGRA8888_t col_1; // 769
	BGRA8888_t col_2; // 769
	BGRA8888_t col_3; // 769
	uint16 wrd; // 770
	int i; // 772
	int j; // 772
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 754
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 756
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 757
	}
	{
		int x; // 806
		int y; // 806
	}
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 426
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 422
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 434
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<RGBA8888_t>(RGBA8888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 795
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 789
	{
	}
	{
	}
	{
	}
	DecodeAlphaImageDataBlock<RGBA8888_t>(RGBA8888_t* pImPos,
						DXTAlphaImageDataBlock* pAlphaBlock,
						int width,
						int nChannelSelect);  // 799
} /* size: 0, variables: 17, inline expansions: 13 (0 bytes) */

// <0052AF4C> bitmap/colorconversion.cpp:738
// variables: 22
// function calls: 13
void ConvertFromDXT3<BGRA8888_t>(const uint8* src, BGRA8888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 49744
	int realWidth; // 740
	int realHeight; // 741
	BGRA8888_t* realDst; // 742
	int xblocks; // 759
	int yblocks; // 759
	BGRA8888_t* pDstScan; // 763
	uint32* pSrcScan; // 764
	DXTColBlock* pBlock; // 766
	DXTAlphaImageDataBlock* pAlphaBlock; // 767
	BGRA8888_t col_0; // 769
	BGRA8888_t col_1; // 769
	BGRA8888_t col_2; // 769
	BGRA8888_t col_3; // 769
	uint16 wrd; // 770
	int i; // 772
	int j; // 772
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 754
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 756
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 757
	}
	{
		int x; // 806
		int y; // 806
		BGRA8888_t::operator=(
				const BGRA8888_t& in);  // 811
	}
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 426
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 434
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<BGRA8888_t>(BGRA8888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 795
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 789
	{
	}
	{
	}
	{
	}
	DecodeAlphaImageDataBlock<BGRA8888_t>(BGRA8888_t* pImPos,
						DXTAlphaImageDataBlock* pAlphaBlock,
						int width,
						int nChannelSelect);  // 799
} /* size: 0, variables: 17, inline expansions: 12 (0 bytes) */

// <0468457E> bitmap/colorconversion.cpp:818
// variables: 22
// function calls: 12
void ConvertFromDXT5<RGBA8888_t>(const uint8* src, RGBA8888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 44656
	int realWidth; // 820
	int realHeight; // 821
	RGBA8888_t* realDst; // 822
	int xblocks; // 839
	int yblocks; // 839
	RGBA8888_t* pDstScan; // 843
	uint32* pSrcScan; // 844
	DXTColBlock* pBlock; // 846
	DXTAlphaBlock3BitLinear* pAlphaBlock; // 847
	BGRA8888_t col_0; // 849
	BGRA8888_t col_1; // 849
	BGRA8888_t col_2; // 849
	BGRA8888_t col_3; // 849
	uint16 wrd; // 850
	int i; // 852
	int j; // 852
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 834
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 836
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 837
	}
	{
		int x; // 886
		int y; // 886
	}
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 426
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 422
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 434
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<RGBA8888_t>(RGBA8888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 875
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 869
} /* size: 0, variables: 17, inline expansions: 12 (955 bytes) */

// <04680348> bitmap/colorconversion.cpp:818
// variables: 22
// function calls: 12
void ConvertFromDXT5<BGRA8888_t>(const uint8* src, BGRA8888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 44656
	int realWidth; // 820
	int realHeight; // 821
	BGRA8888_t* realDst; // 822
	int xblocks; // 839
	int yblocks; // 839
	BGRA8888_t* pDstScan; // 843
	uint32* pSrcScan; // 844
	DXTColBlock* pBlock; // 846
	DXTAlphaBlock3BitLinear* pAlphaBlock; // 847
	BGRA8888_t col_0; // 849
	BGRA8888_t col_1; // 849
	BGRA8888_t col_2; // 849
	BGRA8888_t col_3; // 849
	uint16 wrd; // 850
	int i; // 852
	int j; // 852
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 834
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 836
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 837
	}
	{
		int x; // 886
		int y; // 886
		BGRA8888_t::operator=(
				const BGRA8888_t& in);  // 891
	}
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 426
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 434
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<BGRA8888_t>(BGRA8888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 875
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 869
} /* size: 0, variables: 17, inline expansions: 11 (943 bytes) */

// <0467E71C> bitmap/colorconversion.cpp:818
// variables: 22
// function calls: 8
void ConvertFromDXT5<BGRA5551_t>(const uint8* src, BGRA5551_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 44656
	int realWidth; // 820
	int realHeight; // 821
	BGRA5551_t* realDst; // 822
	int xblocks; // 839
	int yblocks; // 839
	BGRA5551_t* pDstScan; // 843
	uint32* pSrcScan; // 844
	DXTColBlock* pBlock; // 846
	DXTAlphaBlock3BitLinear* pAlphaBlock; // 847
	BGRA8888_t col_0; // 849
	BGRA8888_t col_1; // 849
	BGRA8888_t col_2; // 849
	BGRA8888_t col_3; // 849
	uint16 wrd; // 850
	int i; // 852
	int j; // 852
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 834
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 836
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 837
	}
	{
		int x; // 886
		int y; // 886
	}
	{
	}
	{
	}
	{
	}
	DecodeAlpha3BitLinear<BGRA5551_t>(BGRA5551_t* pImPos,
						DXTAlphaBlock3BitLinear* pAlphaBlock,
						int width,
						int nChannelSelect);  // 879
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 869
} /* size: 0, variables: 17, inline expansions: 8 (1657 bytes) */

// <00E7CCF1> bitmap/colorconversion.cpp:818
// variables: 22
// function calls: 12
void ConvertFromDXT5<RGBA8888_t>(const uint8* src, RGBA8888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 7318
	int realWidth; // 820
	int realHeight; // 821
	RGBA8888_t* realDst; // 822
	int xblocks; // 839
	int yblocks; // 839
	RGBA8888_t* pDstScan; // 843
	uint32* pSrcScan; // 844
	DXTColBlock* pBlock; // 846
	DXTAlphaBlock3BitLinear* pAlphaBlock; // 847
	BGRA8888_t col_0; // 849
	BGRA8888_t col_1; // 849
	BGRA8888_t col_2; // 849
	BGRA8888_t col_3; // 849
	uint16 wrd; // 850
	int i; // 852
	int j; // 852
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 834
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 836
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 837
	}
	{
		int x; // 886
		int y; // 886
	}
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 426
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 422
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 434
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<RGBA8888_t>(RGBA8888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 875
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 869
} /* size: 0, variables: 17, inline expansions: 12 (955 bytes) */

// <00E78ABB> bitmap/colorconversion.cpp:818
// variables: 22
// function calls: 12
void ConvertFromDXT5<BGRA8888_t>(const uint8* src, BGRA8888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 7318
	int realWidth; // 820
	int realHeight; // 821
	BGRA8888_t* realDst; // 822
	int xblocks; // 839
	int yblocks; // 839
	BGRA8888_t* pDstScan; // 843
	uint32* pSrcScan; // 844
	DXTColBlock* pBlock; // 846
	DXTAlphaBlock3BitLinear* pAlphaBlock; // 847
	BGRA8888_t col_0; // 849
	BGRA8888_t col_1; // 849
	BGRA8888_t col_2; // 849
	BGRA8888_t col_3; // 849
	uint16 wrd; // 850
	int i; // 852
	int j; // 852
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 834
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 836
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 837
	}
	{
		int x; // 886
		int y; // 886
		BGRA8888_t::operator=(
				const BGRA8888_t& in);  // 891
	}
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 426
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 434
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<BGRA8888_t>(BGRA8888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 875
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 869
} /* size: 0, variables: 17, inline expansions: 11 (943 bytes) */

// <00E76E8F> bitmap/colorconversion.cpp:818
// variables: 22
// function calls: 8
void ConvertFromDXT5<BGRA5551_t>(const uint8* src, BGRA5551_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 7318
	int realWidth; // 820
	int realHeight; // 821
	BGRA5551_t* realDst; // 822
	int xblocks; // 839
	int yblocks; // 839
	BGRA5551_t* pDstScan; // 843
	uint32* pSrcScan; // 844
	DXTColBlock* pBlock; // 846
	DXTAlphaBlock3BitLinear* pAlphaBlock; // 847
	BGRA8888_t col_0; // 849
	BGRA8888_t col_1; // 849
	BGRA8888_t col_2; // 849
	BGRA8888_t col_3; // 849
	uint16 wrd; // 850
	int i; // 852
	int j; // 852
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 834
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 836
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 837
	}
	{
		int x; // 886
		int y; // 886
	}
	{
	}
	{
	}
	{
	}
	DecodeAlpha3BitLinear<BGRA5551_t>(BGRA5551_t* pImPos,
						DXTAlphaBlock3BitLinear* pAlphaBlock,
						int width,
						int nChannelSelect);  // 879
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 869
} /* size: 0, variables: 17, inline expansions: 8 (1657 bytes) */

// <0052E77E> bitmap/colorconversion.cpp:818
// variables: 22
// function calls: 12
void ConvertFromDXT5<RGBA8888_t>(const uint8* src, RGBA8888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 49744
	int realWidth; // 820
	int realHeight; // 821
	RGBA8888_t* realDst; // 822
	int xblocks; // 839
	int yblocks; // 839
	RGBA8888_t* pDstScan; // 843
	uint32* pSrcScan; // 844
	DXTColBlock* pBlock; // 846
	DXTAlphaBlock3BitLinear* pAlphaBlock; // 847
	BGRA8888_t col_0; // 849
	BGRA8888_t col_1; // 849
	BGRA8888_t col_2; // 849
	BGRA8888_t col_3; // 849
	uint16 wrd; // 850
	int i; // 852
	int j; // 852
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 834
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 836
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 837
	}
	{
		int x; // 886
		int y; // 886
	}
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 426
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 422
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 434
	RGBA8888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<RGBA8888_t>(RGBA8888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 875
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 869
} /* size: 0, variables: 17, inline expansions: 12 (0 bytes) */

// <0052A548> bitmap/colorconversion.cpp:818
// variables: 22
// function calls: 12
void ConvertFromDXT5<BGRA8888_t>(const uint8* src, BGRA8888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 49744
	int realWidth; // 820
	int realHeight; // 821
	BGRA8888_t* realDst; // 822
	int xblocks; // 839
	int yblocks; // 839
	BGRA8888_t* pDstScan; // 843
	uint32* pSrcScan; // 844
	DXTColBlock* pBlock; // 846
	DXTAlphaBlock3BitLinear* pAlphaBlock; // 847
	BGRA8888_t col_0; // 849
	BGRA8888_t col_1; // 849
	BGRA8888_t col_2; // 849
	BGRA8888_t col_3; // 849
	uint16 wrd; // 850
	int i; // 852
	int j; // 852
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 834
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 836
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 837
	}
	{
		int x; // 886
		int y; // 886
		BGRA8888_t::operator=(
				const BGRA8888_t& in);  // 891
	}
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 426
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 434
	BGRA8888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<BGRA8888_t>(BGRA8888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 875
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 869
} /* size: 0, variables: 17, inline expansions: 11 (0 bytes) */

// <0052891C> bitmap/colorconversion.cpp:818
// variables: 22
// function calls: 8
void ConvertFromDXT5<BGRA5551_t>(const uint8* src, BGRA5551_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 49744
	int realWidth; // 820
	int realHeight; // 821
	BGRA5551_t* realDst; // 822
	int xblocks; // 839
	int yblocks; // 839
	BGRA5551_t* pDstScan; // 843
	uint32* pSrcScan; // 844
	DXTColBlock* pBlock; // 846
	DXTAlphaBlock3BitLinear* pAlphaBlock; // 847
	BGRA8888_t col_0; // 849
	BGRA8888_t col_1; // 849
	BGRA8888_t col_2; // 849
	BGRA8888_t col_3; // 849
	uint16 wrd; // 850
	int i; // 852
	int j; // 852
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 834
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 836
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 837
	}
	{
		int x; // 886
		int y; // 886
	}
	{
	}
	{
	}
	{
	}
	DecodeAlpha3BitLinear<BGRA5551_t>(BGRA5551_t* pImPos,
						DXTAlphaBlock3BitLinear* pAlphaBlock,
						int width,
						int nChannelSelect);  // 879
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 869
} /* size: 0, variables: 17, inline expansions: 8 (0 bytes) */

// <0467FC48> bitmap/colorconversion.cpp:898
// variables: 21
// function calls: 12
void ConvertFromDXT5IgnoreAlpha<RGB888_t>(const uint8* src, RGB888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 44761
	int realWidth; // 900
	int realHeight; // 901
	RGB888_t* realDst; // 902
	int xblocks; // 919
	int yblocks; // 919
	RGB888_t* pDstScan; // 923
	uint32* pSrcScan; // 924
	DXTColBlock* pBlock; // 926
	BGRA8888_t col_0; // 928
	BGRA8888_t col_1; // 928
	BGRA8888_t col_2; // 928
	BGRA8888_t col_3; // 928
	uint16 wrd; // 929
	int i; // 931
	int j; // 931
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 914
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 916
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 917
	}
	{
		int x; // 957
		int y; // 957
	}
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 426
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 422
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 434
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<RGB888_t>(RGB888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 950
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 944
} /* size: 0, variables: 16, inline expansions: 12 (930 bytes) */

// <0467EE18> bitmap/colorconversion.cpp:898
// variables: 21
// function calls: 12
void ConvertFromDXT5IgnoreAlpha<BGR565_t>(const uint8* src, BGR565_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 44761
	int realWidth; // 900
	int realHeight; // 901
	BGR565_t* realDst; // 902
	int xblocks; // 919
	int yblocks; // 919
	BGR565_t* pDstScan; // 923
	uint32* pSrcScan; // 924
	DXTColBlock* pBlock; // 926
	BGRA8888_t col_0; // 928
	BGRA8888_t col_1; // 928
	BGRA8888_t col_2; // 928
	BGRA8888_t col_3; // 928
	uint16 wrd; // 929
	int i; // 931
	int j; // 931
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 914
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 916
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 917
	}
	{
		int x; // 957
		int y; // 957
	}
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 430
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 426
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 422
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 434
	{
	}
	DecodeColorBlock<BGR565_t>(BGR565_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 950
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 944
} /* size: 0, variables: 16, inline expansions: 12 (1064 bytes) */

// <00E783BB> bitmap/colorconversion.cpp:898
// variables: 21
// function calls: 12
void ConvertFromDXT5IgnoreAlpha<RGB888_t>(const uint8* src, RGB888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 7423
	int realWidth; // 900
	int realHeight; // 901
	RGB888_t* realDst; // 902
	int xblocks; // 919
	int yblocks; // 919
	RGB888_t* pDstScan; // 923
	uint32* pSrcScan; // 924
	DXTColBlock* pBlock; // 926
	BGRA8888_t col_0; // 928
	BGRA8888_t col_1; // 928
	BGRA8888_t col_2; // 928
	BGRA8888_t col_3; // 928
	uint16 wrd; // 929
	int i; // 931
	int j; // 931
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 914
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 916
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 917
	}
	{
		int x; // 957
		int y; // 957
	}
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 426
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 422
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 434
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<RGB888_t>(RGB888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 950
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 944
} /* size: 0, variables: 16, inline expansions: 12 (930 bytes) */

// <00E7758B> bitmap/colorconversion.cpp:898
// variables: 21
// function calls: 12
void ConvertFromDXT5IgnoreAlpha<BGR565_t>(const uint8* src, BGR565_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 7423
	int realWidth; // 900
	int realHeight; // 901
	BGR565_t* realDst; // 902
	int xblocks; // 919
	int yblocks; // 919
	BGR565_t* pDstScan; // 923
	uint32* pSrcScan; // 924
	DXTColBlock* pBlock; // 926
	BGRA8888_t col_0; // 928
	BGRA8888_t col_1; // 928
	BGRA8888_t col_2; // 928
	BGRA8888_t col_3; // 928
	uint16 wrd; // 929
	int i; // 931
	int j; // 931
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 914
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 916
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 917
	}
	{
		int x; // 957
		int y; // 957
	}
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 430
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 426
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 422
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 434
	{
	}
	DecodeColorBlock<BGR565_t>(BGR565_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 950
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 944
} /* size: 0, variables: 16, inline expansions: 12 (1064 bytes) */

// <00529E48> bitmap/colorconversion.cpp:898
// variables: 21
// function calls: 12
void ConvertFromDXT5IgnoreAlpha<RGB888_t>(const uint8* src, RGB888_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 49849
	int realWidth; // 900
	int realHeight; // 901
	RGB888_t* realDst; // 902
	int xblocks; // 919
	int yblocks; // 919
	RGB888_t* pDstScan; // 923
	uint32* pSrcScan; // 924
	DXTColBlock* pBlock; // 926
	BGRA8888_t col_0; // 928
	BGRA8888_t col_1; // 928
	BGRA8888_t col_2; // 928
	BGRA8888_t col_3; // 928
	uint16 wrd; // 929
	int i; // 931
	int j; // 931
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 914
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 916
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 917
	}
	{
		int x; // 957
		int y; // 957
	}
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 426
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 422
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 434
	RGB888_t::operator=(
			const BGRA8888_t& in);  // 430
	{
	}
	DecodeColorBlock<RGB888_t>(RGB888_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 950
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 944
} /* size: 0, variables: 16, inline expansions: 12 (0 bytes) */

// <00529018> bitmap/colorconversion.cpp:898
// variables: 21
// function calls: 12
void ConvertFromDXT5IgnoreAlpha<BGR565_t>(const uint8* src, BGR565_t* dst, int width, int height)
{
	const char   __FUNCTION__; // 49849
	int realWidth; // 900
	int realHeight; // 901
	BGR565_t* realDst; // 902
	int xblocks; // 919
	int yblocks; // 919
	BGR565_t* pDstScan; // 923
	uint32* pSrcScan; // 924
	DXTColBlock* pBlock; // 926
	BGRA8888_t col_0; // 928
	BGRA8888_t col_1; // 928
	BGRA8888_t col_2; // 928
	BGRA8888_t col_3; // 928
	uint16 wrd; // 929
	int i; // 931
	int j; // 931
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 914
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 916
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 917
	}
	{
		int x; // 957
		int y; // 957
	}
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 430
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 426
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 422
	BGR565_t::operator=(
			const BGRA8888_t& in);  // 434
	{
	}
	DecodeColorBlock<BGR565_t>(BGR565_t* pOutputImage,
					DXTColBlock* pColorBlock,
					int width,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3);  // 950
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 331
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 332
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 333
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 336
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 337
	RescaleBitNumber(unsigned int nSrcValue,
			unsigned int nSrcBits,
			unsigned int nScaleToBits);  // 338
	GetColorBlockColorsBGRA8888(DXTColBlock* pBlock,
					BGRA8888_t* col_0,
					BGRA8888_t* col_1,
					BGRA8888_t* col_2,
					BGRA8888_t* col_3,
					uint16& wrd);  // 944
} /* size: 0, variables: 16, inline expansions: 12 (0 bytes) */

// <04684298> bitmap/colorconversion.cpp:970
// variables: 17
void ConvertFromATIxN<RGBA8888_t>(const uint8* src, RGBA8888_t* dst, int width, int height, bool bATI2N)
{
	const char   __FUNCTION__; // 44677
	int realWidth; // 972
	int realHeight; // 973
	RGBA8888_t* realDst; // 974
	int xblocks; // 991
	int yblocks; // 991
	RGBA8888_t* pDstScan; // 995
	uint32* pSrcScan; // 996
	DXTAlphaBlock3BitLinear* pBlock; // 998
	int nBytesPerBlock; // 1000
	int i; // 1002
	int j; // 1002
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 986
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 989
	}
	{
		int x; // 1025
		int y; // 1025
	}
} /* size: 0, variables: 12 */

// <04680A44> bitmap/colorconversion.cpp:970
// variables: 17
// function call: 1
void ConvertFromATIxN<BGRA8888_t>(const uint8* src, BGRA8888_t* dst, int width, int height, bool bATI2N)
{
	const char   __FUNCTION__; // 44677
	int realWidth; // 972
	int realHeight; // 973
	BGRA8888_t* realDst; // 974
	int xblocks; // 991
	int yblocks; // 991
	BGRA8888_t* pDstScan; // 995
	uint32* pSrcScan; // 996
	DXTAlphaBlock3BitLinear* pBlock; // 998
	int nBytesPerBlock; // 1000
	int i; // 1002
	int j; // 1002
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 986
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 989
	}
	{
		int x; // 1025
		int y; // 1025
		BGRA8888_t::operator=(
				const BGRA8888_t& in);  // 1030
	}
} /* size: 0, variables: 12 */

// <00E7CA0B> bitmap/colorconversion.cpp:970
// variables: 17
void ConvertFromATIxN<RGBA8888_t>(const uint8* src, RGBA8888_t* dst, int width, int height, bool bATI2N)
{
	const char   __FUNCTION__; // 7339
	int realWidth; // 972
	int realHeight; // 973
	RGBA8888_t* realDst; // 974
	int xblocks; // 991
	int yblocks; // 991
	RGBA8888_t* pDstScan; // 995
	uint32* pSrcScan; // 996
	DXTAlphaBlock3BitLinear* pBlock; // 998
	int nBytesPerBlock; // 1000
	int i; // 1002
	int j; // 1002
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 986
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 989
	}
	{
		int x; // 1025
		int y; // 1025
	}
} /* size: 0, variables: 12 */

// <00E791B7> bitmap/colorconversion.cpp:970
// variables: 17
// function call: 1
void ConvertFromATIxN<BGRA8888_t>(const uint8* src, BGRA8888_t* dst, int width, int height, bool bATI2N)
{
	const char   __FUNCTION__; // 7339
	int realWidth; // 972
	int realHeight; // 973
	BGRA8888_t* realDst; // 974
	int xblocks; // 991
	int yblocks; // 991
	BGRA8888_t* pDstScan; // 995
	uint32* pSrcScan; // 996
	DXTAlphaBlock3BitLinear* pBlock; // 998
	int nBytesPerBlock; // 1000
	int i; // 1002
	int j; // 1002
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 986
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 989
	}
	{
		int x; // 1025
		int y; // 1025
		BGRA8888_t::operator=(
				const BGRA8888_t& in);  // 1030
	}
} /* size: 0, variables: 12 */

// <0052E498> bitmap/colorconversion.cpp:970
// variables: 17
void ConvertFromATIxN<RGBA8888_t>(const uint8* src, RGBA8888_t* dst, int width, int height, bool bATI2N)
{
	const char   __FUNCTION__; // 49765
	int realWidth; // 972
	int realHeight; // 973
	RGBA8888_t* realDst; // 974
	int xblocks; // 991
	int yblocks; // 991
	RGBA8888_t* pDstScan; // 995
	uint32* pSrcScan; // 996
	DXTAlphaBlock3BitLinear* pBlock; // 998
	int nBytesPerBlock; // 1000
	int i; // 1002
	int j; // 1002
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 986
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 989
	}
	{
		int x; // 1025
		int y; // 1025
	}
} /* size: 0, variables: 12 */

// <0052AC44> bitmap/colorconversion.cpp:970
// variables: 17
// function call: 1
void ConvertFromATIxN<BGRA8888_t>(const uint8* src, BGRA8888_t* dst, int width, int height, bool bATI2N)
{
	const char   __FUNCTION__; // 49765
	int realWidth; // 972
	int realHeight; // 973
	BGRA8888_t* realDst; // 974
	int xblocks; // 991
	int yblocks; // 991
	BGRA8888_t* pDstScan; // 995
	uint32* pSrcScan; // 996
	DXTAlphaBlock3BitLinear* pBlock; // 998
	int nBytesPerBlock; // 1000
	int i; // 1002
	int j; // 1002
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 986
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 988
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 989
	}
	{
		int x; // 1025
		int y; // 1025
		BGRA8888_t::operator=(
				const BGRA8888_t& in);  // 1030
	}
} /* size: 0, variables: 12 */

// <0467DFD2> bitmap/colorconversion.cpp:1037
void ConvertFromBC7<RGBA8888_t>(const uint8_t* compressed, RGBA8888_t* dst, int width, int height)
{
} /* size: 0 */

// <0468403C> bitmap/colorconversion.cpp:1122
void ConvertFromBC6h<RGBA8888_t, true>(const uint8_t* compressed, RGBA8888_t* dst, int width, int height)
{
} /* size: 0 */

// <04683F98> bitmap/colorconversion.cpp:1122
void ConvertFromBC6h<RGBA32323232F_t, false>(const uint8_t* compressed, RGBA32323232F_t* dst, int width, int height)
{
} /* size: 0 */

// <0469209D> bitmap/colorconversion.cpp:1235
void ConvertToATIxN(const uint8* src, ImageFormat srcImageFormat, uint8* dst, ImageFormat dstImageFormat, int width, int height, int srcStride, int dstStride, bool bDXT5GA)
{
	{
	}
} /* size: 0 */

// <04690DDD> bitmap/colorconversion.cpp:1235
// variables: 2
void ConvertToATIxN(const uint8* src, ImageFormat srcImageFormat, uint8* dst, ImageFormat dstImageFormat, int width, int height, int srcStride, int dstStride, bool bDXT5GA)
{
	const char   __FUNCTION__; // 44635
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1306
	}
} /* size: 0, variables: 1 */

// <00E89550> bitmap/colorconversion.cpp:1235
// variables: 2
void ConvertToATIxN(const uint8* src, ImageFormat srcImageFormat, uint8* dst, ImageFormat dstImageFormat, int width, int height, int srcStride, int dstStride, bool bDXT5GA)
{
	const char   __FUNCTION__; // 7297
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1306
	}
} /* size: 0, variables: 1 */

// <0053AFDD> bitmap/colorconversion.cpp:1235
// variables: 2
void ConvertToATIxN(const uint8* src, ImageFormat srcImageFormat, uint8* dst, ImageFormat dstImageFormat, int width, int height, int srcStride, int dstStride, bool bDXT5GA)
{
	const char   __FUNCTION__; // 49723
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1306
	}
} /* size: 0, variables: 1 */

// <04692134> bitmap/colorconversion.cpp:1312
void ConvertToDXT(const uint8* src, ImageFormat srcImageFormat, uint8* dst, ImageFormat dstImageFormat, int width, int height, int srcStride, int dstStride)
{
	{
	}
} /* size: 0 */

// <04690D2B> bitmap/colorconversion.cpp:1312
// variables: 2
void ConvertToDXT(const uint8* src, ImageFormat srcImageFormat, uint8* dst, ImageFormat dstImageFormat, int width, int height, int srcStride, int dstStride)
{
	const char   __FUNCTION__; // 44614
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1540
	}
} /* size: 0, variables: 1 */

// <00E8949E> bitmap/colorconversion.cpp:1312
// variables: 2
void ConvertToDXT(const uint8* src, ImageFormat srcImageFormat, uint8* dst, ImageFormat dstImageFormat, int width, int height, int srcStride, int dstStride)
{
	const char   __FUNCTION__; // 7276
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1540
	}
} /* size: 0, variables: 1 */

// <0053AF2B> bitmap/colorconversion.cpp:1312
// variables: 2
void ConvertToDXT(const uint8* src, ImageFormat srcImageFormat, uint8* dst, ImageFormat dstImageFormat, int width, int height, int srcStride, int dstStride)
{
	const char   __FUNCTION__; // 49702
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1540
	}
} /* size: 0, variables: 1 */

// <04690780> bitmap/colorconversion.cpp:1546
// variables: 3
// function calls: 8
void ConvertToETC(const uint8* src, ImageFormat srcImageFormat, uint8* dst, ImageFormat dstImageFormat, int width, int height, int srcStride, int dstStride)
{
	RGBA8888_t* pRGBADXTDecompressed; // 1551
	FloatBitMap_t floatBitmap; // 1588
	{
		uint32_t nImageBytes; // 1561
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 900
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 901
	CSOAContainer::Init(); // 1482
	CSOAContainer::CSOAContainer(); // 461
	FloatBitMap_t::FloatBitMap_t(); // 1588
	FloatBitMap_t::~FloatBitMap_t(); // 1588
} /* size: 1167, variables: 2, inline expansions: 8 (2368 bytes) */

// <046906C0> bitmap/colorconversion.cpp:1599
// variables: 4
void ConvertImageFormat_RGBA16161616_To_RGB323232F(short unsigned int* pSrcImage, float* pDstImage, int width, int height)
{
	int srcSize; // 1601
	short unsigned int* pSrcEnd; // 1602
	short unsigned int* pSrcScan; // 1603
	float* pDstScan; // 1604
} /* size: 116, variables: 4 */

// <04690600> bitmap/colorconversion.cpp:1614
// variables: 4
void ConvertImageFormat_RGB323232F_To_RGBA16161616(float* pSrcImage, short unsigned int* pDstImage, int width, int height)
{
	int srcSize; // 1616
	float* pSrcEnd; // 1617
	float* pSrcScan; // 1618
	short unsigned int* pDstScan; // 1619
} /* size: 154, variables: 4 */

// <0468FF58> bitmap/colorconversion.cpp:1630
// variables: 44
// function calls: 18
void ConvertImageFormat_RGBA16161616F_To_RGB323232F(float16* pSrcImage, float* pDstImage, int width, int height, size_t nSrcStride, size_t nDstStride)
{
	{
		int srcSize; // 1634
		float16* pSrcEnd; // 1635
		float16* pSrcScan; // 1636
		float* pDstScan; // 1637
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		IsInfinity(union float16bits in); // 631
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 1640
		IsInfinity(union float16bits in); // 631
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 1641
		IsInfinity(union float16bits in); // 631
		{
			const float  half_denorm; // 642
			float mantissa; // 643
			float sgn; // 644
		}
		{
			unsigned int mantissa; // 650
			unsigned int biased_exponent; // 651
			unsigned int sign; // 652
		}
		Convert16bitFloatTo32bits(short unsigned int input); // 477
		float16::GetFloat(); // 1642
	}
	{
		int y; // 1649
		{
			const float16* pSrcScan; // 1651
			float* pDstScan; // 1652
			{
				int x; // 1653
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				IsInfinity(union float16bits in); // 631
				Convert16bitFloatTo32bits(short unsigned int input); // 477
				float16::GetFloat(); // 1655
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				IsInfinity(union float16bits in); // 631
				Convert16bitFloatTo32bits(short unsigned int input); // 477
				float16::GetFloat(); // 1657
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 477
				float16::GetFloat(); // 1656
			}
		}
	}
} /* size: 1478 */

// <0468FADD> bitmap/colorconversion.cpp:1666
// variables: 29
// function calls: 12
void ConvertImageFormat_RGBA16161616F_To_RGBA323232F(float16* pSrcImage, float* pDstImage, int width, int height, size_t src_stride)
{
	size_t s_stride; // 1668
	{
		int y; // 1669
		{
			const float16* pSrcScan; // 1671
			float* pDstScan; // 1672
			{
				int x; // 1673
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				IsInfinity(union float16bits in); // 631
				Convert16bitFloatTo32bits(short unsigned int input); // 477
				float16::GetFloat(); // 1675
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				IsInfinity(union float16bits in); // 631
				Convert16bitFloatTo32bits(short unsigned int input); // 477
				float16::GetFloat(); // 1677
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 477
				float16::GetFloat(); // 1676
				IsInfinity(union float16bits in); // 631
				{
					const float  half_denorm; // 642
					float mantissa; // 643
					float sgn; // 644
				}
				{
					unsigned int mantissa; // 650
					unsigned int biased_exponent; // 651
					unsigned int sign; // 652
				}
				Convert16bitFloatTo32bits(short unsigned int input); // 477
				float16::GetFloat(); // 1678
			}
		}
	}
} /* size: 988, variables: 1 */

// <0468F80D> bitmap/colorconversion.cpp:1687
// variables: 10
// function calls: 6
void ConvertImageFormat_RGB323232F_To_RGBA16161616F(float* pSrcImage, float16* pDstImage, int width, int height)
{
	int srcSize; // 1689
	float* pSrcEnd; // 1690
	float* pSrcScan; // 1691
	float16* pDstScan; // 1692
	{
		int new_exp; // 586
		{
			unsigned int exp_val; // 599
		}
	}
	ConvertFloatTo16bits(float input); // 481
	float16::SetFloat(
		float in);  // 1695
	{
		int new_exp; // 586
		{
			unsigned int exp_val; // 599
		}
	}
	ConvertFloatTo16bits(float input); // 481
	float16::SetFloat(
		float in);  // 1696
	{
		int new_exp; // 586
		{
			unsigned int exp_val; // 599
		}
	}
	ConvertFloatTo16bits(float input); // 481
	float16::SetFloat(
		float in);  // 1697
} /* size: 905, variables: 4, inline expansions: 6 (1605 bytes) */

// <0468D668> bitmap/colorconversion.cpp:1701
// variables: 10
// function calls: 112
void ConvertImageFormat_RGB323232F_To_RGBA8888(float* pSrcImage, uint8* dst, int width, int height)
{
	FloatBitMap_t flbm; // 1703
	{
		int y; // 1707
		{
			int x; // 1709
			{
				float* pf; // 1711
				PixRGBAF fpix; // 1712
				PixRGBAF::PixRGBAF(); // 1712
				CSOAContainer::NumCols(); // 524
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 620
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumSlices(); // 526
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 621
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumSlices(); // 526
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 622
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumSlices(); // 526
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 623
				FloatBitMap_t::WritePixelRGBAF(
						int x,
						int y,
						int z,
						PixRGBAF value);  // 1718
			}
		}
	}
	{
		int y; // 1726
		{
			int x; // 1728
			{
				PixRGBAF fpix; // 1730
				PixRGBA8 pix8; // 1731
				uint8* pch; // 1733
				PixRGBAF_to_8(const PixRGBAF& f); // 1731
				CSOAContainer::NumCols(); // 606
				{
				}
				CSOAContainer::NumRows(); // 607
				{
				}
				CSOAContainer::NumSlices(); // 608
				{
				}
				PixRGBAF::PixRGBAF(); // 610
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 611
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 612
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 613
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 614
				FloatBitMap_t::PixelRGBAF(
						int x,
						int y,
						int z);  // 1730
			}
		}
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 901
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 900
	CSOAContainer::Init(); // 1482
	CSOAContainer::CSOAContainer(); // 461
	FloatBitMap_t::FloatBitMap_t(); // 1703
	FloatBitMap_t::~FloatBitMap_t(); // 1741
} /* size: 0, variables: 1, inline expansions: 8 (1217 bytes) */

// <0468B4C3> bitmap/colorconversion.cpp:1743
// variables: 10
// function calls: 112
void ConvertImageFormat_RGB323232F_To_BGRA8888(float* pSrcImage, uint8* dst, int width, int height)
{
	FloatBitMap_t flbm; // 1745
	{
		int y; // 1749
		{
			int x; // 1751
			{
				float* pf; // 1753
				PixRGBAF fpix; // 1754
				PixRGBAF::PixRGBAF(); // 1754
				CSOAContainer::NumCols(); // 524
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 620
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumSlices(); // 526
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 621
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumSlices(); // 526
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 622
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumSlices(); // 526
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 623
				FloatBitMap_t::WritePixelRGBAF(
						int x,
						int y,
						int z,
						PixRGBAF value);  // 1760
			}
		}
	}
	{
		int y; // 1768
		{
			int x; // 1770
			{
				PixRGBAF fpix; // 1772
				PixRGBA8 pix8; // 1773
				uint8* pch; // 1775
				PixRGBAF_to_8(const PixRGBAF& f); // 1773
				CSOAContainer::NumCols(); // 606
				{
				}
				CSOAContainer::NumRows(); // 607
				{
				}
				CSOAContainer::NumSlices(); // 608
				{
				}
				PixRGBAF::PixRGBAF(); // 610
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 611
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 612
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 613
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 614
				FloatBitMap_t::PixelRGBAF(
						int x,
						int y,
						int z);  // 1772
			}
		}
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 901
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 900
	CSOAContainer::Init(); // 1482
	CSOAContainer::CSOAContainer(); // 461
	FloatBitMap_t::FloatBitMap_t(); // 1745
	FloatBitMap_t::~FloatBitMap_t(); // 1783
} /* size: 0, variables: 1, inline expansions: 8 (1217 bytes) */

// <0468B44E> bitmap/colorconversion.cpp:1785
// variables: 5
void ConvertImageFormat_RGB323232F_To_BGRX8888(const uint8* src_, uint8* dst, int numPixels)
{
	float* src; // 1787
	float* pEndSrc; // 1788
	{
		float flRed; // 1791
		float flGreen; // 1795
		float flBlue; // 1799
	}
} /* size: 0, variables: 2 */

// <0468B0CF> bitmap/colorconversion.cpp:1876
// variables: 12
// function calls: 8
void ConvertImageFormat_RGBA16161616_To_RGBA16161616F(short unsigned int* pSrcImage, float* pDstImage, int width, int height)
{
	int srcSize; // 1878
	short unsigned int* pSrcEnd; // 1879
	short unsigned int* pSrcScan; // 1880
	float16* pDstScan; // 1881
	{
		int new_exp; // 586
		{
			unsigned int exp_val; // 599
		}
	}
	ConvertFloatTo16bits(float input); // 481
	float16::SetFloat(
		float in);  // 1885
	{
		int new_exp; // 586
		{
			unsigned int exp_val; // 599
		}
	}
	ConvertFloatTo16bits(float input); // 481
	float16::SetFloat(
		float in);  // 1886
	{
		int new_exp; // 586
		{
			unsigned int exp_val; // 599
		}
	}
	ConvertFloatTo16bits(float input); // 481
	float16::SetFloat(
		float in);  // 1887
	{
		int new_exp; // 586
		{
			unsigned int exp_val; // 599
		}
	}
	ConvertFloatTo16bits(float input); // 481
	float16::SetFloat(
		float in);  // 1884
} /* size: 1249, variables: 4, inline expansions: 8 (2158 bytes) */

// <0468AEF9> bitmap/colorconversion.cpp:1891
// variables: 12
// function calls: 3
void ConvertImageFormat_RGBA16161616F_To_RGBA16161616(float16* pSrcImage, short unsigned int* pDstImage, int width, int height)
{
	int srcSize; // 1893
	float16* pSrcEnd; // 1894
	float16* pSrcScan; // 1895
	short unsigned int* pDstScan; // 1896
	{
		int i; // 1899
		{
			float val; // 1902
			{
				const float  half_denorm; // 642
				float mantissa; // 643
				float sgn; // 644
			}
			{
				unsigned int mantissa; // 650
				unsigned int biased_exponent; // 651
				unsigned int sign; // 652
			}
			IsInfinity(union float16bits in); // 631
			Convert16bitFloatTo32bits(short unsigned int input); // 477
			float16::GetFloat(); // 1903
		}
	}
} /* size: 298, variables: 4 */

// <0467DB25> bitmap/colorconversion.cpp:1913
inline void ShiftRightOrLeft<-7>(int nBitsIn)
{
} /* size: 0 */

// <0467DB03> bitmap/colorconversion.cpp:1913
inline void ShiftRightOrLeft<6>(int nBitsIn)
{
} /* size: 0 */

// <0467DAE1> bitmap/colorconversion.cpp:1913
inline void ShiftRightOrLeft<19>(int nBitsIn)
{
} /* size: 0 */

// <0467DABF> bitmap/colorconversion.cpp:1913
inline void ShiftRightOrLeft<0>(int nBitsIn)
{
} /* size: 0 */

// <0468408E> bitmap/colorconversion.cpp:1920
// variables: 5
// function calls: 3
void ShuffleImageFormatBits<short unsigned int, unsigned int, 4278190080, 31744, -7, 992, 6, 31, 19, 0, 0>(const uint8* pSrc, uint8* pDst, int nWidth, int nHeight, int nSrcStride, int nDstStride)
{
	{
		const short unsigned int* pSrc16; // 1927
		unsigned int* pOut; // 1928
		{
			int nX; // 1929
			{
				short unsigned int nPixIn; // 1931
				unsigned int nPixOut; // 1932
				ShiftRightOrLeft<-7>(int nBitsIn); // 1933
				ShiftRightOrLeft<6>(int nBitsIn); // 1934
				ShiftRightOrLeft<19>(int nBitsIn); // 1935
			}
		}
	}
} /* size: 136 */

// <04689DB5> bitmap/colorconversion.cpp:1962
// variables: 32
// function calls: 21
void ConvertImageFormat(const uint8* src, ImageFormat srcImageFormat, uint8* dst, ImageFormat dstImageFormat, int width, int height, int srcStride, int dstStride)
{
	const char   __FUNCTION__; // 44698
	{
		int nPixelSize; // 1977
		int nMinimumBytesPerRow; // 1978
		int nColumns; // 1979
		int nRows; // 1980
		{
			int nWidthInBlocks; // 1985
			int nHeightInBlocks; // 1986
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2006
			}
		}
		SizeInBytes(ImageFormat fmt); // 1977
		IsCompressed(ImageFormat fmt); // 1983
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2045
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2051
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2065
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2071
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2080
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2086
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2092
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2098
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2104
	}
	{
		int memRequired; // 2127
		GetMemRequired(int width,
				int height,
				int depth,
				ImageFormat imageFormat,
				bool mipmap,
				int* pAdjustedHeight);  // 2128
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2129
	}
	{
		int line; // 2342
		int srcPixelSize; // 2343
		int dstPixelSize; // 2344
		UserFormatToRGBA8888Func_t userFormatToRGBA8888Func; // 2392
		RGBA8888ToUserFormatFunc_t RGBA8888ToUserFormatFunc; // 2393
		bool bUseHeap; // 2403
		uint8* lineBufRGBA8888; // 2404
		{
			const BitShufflingConverterFunctionTableEntry& pCheck; // 2381
			BitShufflingConverterFunctionTableEntry& __for_range; // 18185
			BitShufflingConverterFunctionTableEntry* __for_begin; // 18191
			BitShufflingConverterFunctionTableEntry* __for_end; // 18191
		}
		SizeInBytes(ImageFormat fmt); // 2343
		SizeInBytes(ImageFormat fmt); // 2344
		GetUserFormatToRGBA8888Func_t(ImageFormat srcImageFormat); // 2395
		GetRGBA8888ToUserFormatFunc_t(ImageFormat dstImageFormat); // 2396
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2373
	}
	{
	}
	ConvertToATIxN(const uint8* src,
			ImageFormat srcImageFormat,
			uint8* dst,
			ImageFormat dstImageFormat,
			int width,
			int height,
			int srcStride,
			int dstStride,
			bool bDXT5GA);  // 2147
	{
	}
	ConvertToDXT(const uint8* src,
			ImageFormat srcImageFormat,
			uint8* dst,
			ImageFormat dstImageFormat,
			int width,
			int height,
			int srcStride,
			int dstStride);  // 2142
	{
		float flRed; // 1791
		float flGreen; // 1795
		float flBlue; // 1799
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 1800
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1803
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1804
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1805
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 1792
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 1796
	}
	ConvertImageFormat_RGB323232F_To_BGRX8888(const uint8* src_,
							uint8* dst,
							int numPixels);  // 2105
} /* size: 0, variables: 1, inline expansions: 3 (529 bytes) */

// <00E82528> bitmap/colorconversion.cpp:1962
// variables: 32
// function calls: 21
void ConvertImageFormat(const uint8* src, ImageFormat srcImageFormat, uint8* dst, ImageFormat dstImageFormat, int width, int height, int srcStride, int dstStride)
{
	const char   __FUNCTION__; // 7360
	{
		int nPixelSize; // 1977
		int nMinimumBytesPerRow; // 1978
		int nColumns; // 1979
		int nRows; // 1980
		{
			int nWidthInBlocks; // 1985
			int nHeightInBlocks; // 1986
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2006
			}
		}
		SizeInBytes(ImageFormat fmt); // 1977
		IsCompressed(ImageFormat fmt); // 1983
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2045
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2051
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2065
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2071
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2080
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2086
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2092
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2098
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2104
	}
	{
		int memRequired; // 2127
		GetMemRequired(int width,
				int height,
				int depth,
				ImageFormat imageFormat,
				bool mipmap,
				int* pAdjustedHeight);  // 2128
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2129
	}
	{
		int line; // 2342
		int srcPixelSize; // 2343
		int dstPixelSize; // 2344
		UserFormatToRGBA8888Func_t userFormatToRGBA8888Func; // 2392
		RGBA8888ToUserFormatFunc_t RGBA8888ToUserFormatFunc; // 2393
		bool bUseHeap; // 2403
		uint8* lineBufRGBA8888; // 2404
		{
			const BitShufflingConverterFunctionTableEntry& pCheck; // 2381
			BitShufflingConverterFunctionTableEntry& __for_range; // 46383
			BitShufflingConverterFunctionTableEntry* __for_begin; // 46389
			BitShufflingConverterFunctionTableEntry* __for_end; // 46389
		}
		SizeInBytes(ImageFormat fmt); // 2343
		SizeInBytes(ImageFormat fmt); // 2344
		GetUserFormatToRGBA8888Func_t(ImageFormat srcImageFormat); // 2395
		GetRGBA8888ToUserFormatFunc_t(ImageFormat dstImageFormat); // 2396
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2373
	}
	{
	}
	ConvertToATIxN(const uint8* src,
			ImageFormat srcImageFormat,
			uint8* dst,
			ImageFormat dstImageFormat,
			int width,
			int height,
			int srcStride,
			int dstStride,
			bool bDXT5GA);  // 2147
	{
	}
	ConvertToDXT(const uint8* src,
			ImageFormat srcImageFormat,
			uint8* dst,
			ImageFormat dstImageFormat,
			int width,
			int height,
			int srcStride,
			int dstStride);  // 2142
	{
		float flRed; // 1791
		float flGreen; // 1795
		float flBlue; // 1799
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 1800
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1803
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1804
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1805
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 1792
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 1796
	}
	ConvertImageFormat_RGB323232F_To_BGRX8888(const uint8* src_,
							uint8* dst,
							int numPixels);  // 2105
} /* size: 0, variables: 1, inline expansions: 3 (529 bytes) */

// <00533FB5> bitmap/colorconversion.cpp:1962
// variables: 32
// function calls: 21
void ConvertImageFormat(const uint8* src, ImageFormat srcImageFormat, uint8* dst, ImageFormat dstImageFormat, int width, int height, int srcStride, int dstStride)
{
	const char   __FUNCTION__; // 49786
	{
		int nPixelSize; // 1977
		int nMinimumBytesPerRow; // 1978
		int nColumns; // 1979
		int nRows; // 1980
		{
			int nWidthInBlocks; // 1985
			int nHeightInBlocks; // 1986
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2006
			}
		}
		SizeInBytes(ImageFormat fmt); // 1977
		IsCompressed(ImageFormat fmt); // 1983
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2045
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2051
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2065
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2071
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2080
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2086
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2092
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2098
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2104
	}
	{
		int memRequired; // 2127
		GetMemRequired(int width,
				int height,
				int depth,
				ImageFormat imageFormat,
				bool mipmap,
				int* pAdjustedHeight);  // 2128
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2129
	}
	{
		int line; // 2342
		int srcPixelSize; // 2343
		int dstPixelSize; // 2344
		UserFormatToRGBA8888Func_t userFormatToRGBA8888Func; // 2392
		RGBA8888ToUserFormatFunc_t RGBA8888ToUserFormatFunc; // 2393
		bool bUseHeap; // 2403
		uint8* lineBufRGBA8888; // 2404
		{
			const BitShufflingConverterFunctionTableEntry& pCheck; // 2381
			BitShufflingConverterFunctionTableEntry& __for_range; // 23273
			BitShufflingConverterFunctionTableEntry* __for_begin; // 23279
			BitShufflingConverterFunctionTableEntry* __for_end; // 23279
		}
		SizeInBytes(ImageFormat fmt); // 2343
		SizeInBytes(ImageFormat fmt); // 2344
		GetUserFormatToRGBA8888Func_t(ImageFormat srcImageFormat); // 2395
		GetRGBA8888ToUserFormatFunc_t(ImageFormat dstImageFormat); // 2396
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2373
	}
	{
	}
	ConvertToATIxN(const uint8* src,
			ImageFormat srcImageFormat,
			uint8* dst,
			ImageFormat dstImageFormat,
			int width,
			int height,
			int srcStride,
			int dstStride,
			bool bDXT5GA);  // 2147
	{
	}
	ConvertToDXT(const uint8* src,
			ImageFormat srcImageFormat,
			uint8* dst,
			ImageFormat dstImageFormat,
			int width,
			int height,
			int srcStride,
			int dstStride);  // 2142
	{
		float flRed; // 1791
		float flGreen; // 1795
		float flBlue; // 1799
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 1800
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1803
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1804
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1805
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 1792
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 1796
	}
	ConvertImageFormat_RGB323232F_To_BGRX8888(const uint8* src_,
							uint8* dst,
							int numPixels);  // 2105
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <04689B40> bitmap/colorconversion.cpp:2426
// variables: 12
// function calls: 4
void ConvertIA88ImageToNormalMapRGBA8888(const uint8* src, int width, int height, uint8* dst, float bumpScale)
{
	float heightScale; // 2430
	float c; // 2431
	float cx; // 2431
	float cy; // 2431
	float maxDim; // 2432
	float ooMaxDim; // 2433
	int s; // 2435
	int t; // 2435
	{
		uint8* dstPixel; // 2438
		{
			Vector xVect; // 2457
			Vector yVect; // 2457
			Vector normal; // 2457
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 2466
			Vector::Vector(); // 2457
			Vector::Vector(); // 2457
			Vector::Vector(); // 2457
		}
	}
} /* size: 0, variables: 8 */

// <04689AA4> bitmap/colorconversion.cpp:2480
// variables: 2
void ConvertNormalMapRGBA8888ToDUDVMapUVWQ8888(const uint8* src, int width, int height, uint8* dst_)
{
	const unsigned char* lastPixel; // 2482
	char* dst; // 2483
} /* size: 0, variables: 2 */

// <046899F5> bitmap/colorconversion.cpp:2494
// variables: 3
void ConvertNormalMapRGBA8888ToDUDVMapUVLX8888(const uint8* src, int width, int height, uint8* dst_)
{
	const unsigned char* lastPixel; // 2496
	char* dst; // 2497
	{
		uint8* pUDst; // 2504
	}
} /* size: 0, variables: 2 */

// <046898D0> bitmap/colorconversion.cpp:2511
// function call: 1
void ConvertNormalMapARGB8888ToDXT5GA(const unsigned char* src, unsigned char* dst, int width, int height)
{
	{
	}
	ConvertToATIxN(const uint8* src,
			ImageFormat srcImageFormat,
			uint8* dst,
			ImageFormat dstImageFormat,
			int width,
			int height,
			int srcStride,
			int dstStride,
			bool bDXT5GA);  // 2514
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04689834> bitmap/colorconversion.cpp:2517
// variables: 2
void ConvertNormalMapRGBA8888ToDUDVMapUV88(const uint8* src, int width, int height, uint8* dst_)
{
	const unsigned char* lastPixel; // 2520
	char* dst; // 2521
} /* size: 0, variables: 2 */

// <0468973D> bitmap/colorconversion.cpp:2530
// variables: 3
// function call: 1
void NormalizeNormalMapRGBA8888(uint8* src, int numTexels)
{
	uint8* lastPixel; // 2532
	{
		uint8* pixel; // 2534
		{
			Vector tmpVect; // 2536
			Vector::Vector(); // 2536
		}
	}
} /* size: 0, variables: 1 */

// <046921C2> bitmap/colorconversion.cpp:2552
// variables: 5
// function call: 1
void RotateImageLeft(const uint8* src, uint8* dst, int widthHeight, ImageFormat imageFormat)
{
	int x; // 2562
	int y; // 2562
	uint8 tmp; // 2564
	int halfWidthHeight; // 2565
	int sizeInBytes; // 2566
	IsCompressed(ImageFormat fmt); // 2557
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <04691B12> bitmap/colorconversion.cpp:2552
// variables: 5
// function calls: 9
void RotateImageLeft(const uint8* src, uint8* dst, int widthHeight, ImageFormat imageFormat)
{
	int x; // 2562
	int y; // 2562
	uint8 tmp; // 2564
	int halfWidthHeight; // 2565
	int sizeInBytes; // 2566
	SizeInBytes(ImageFormat fmt); // 2566
	{
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2573
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2575
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2576
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2577
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2578
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2579
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2580
} /* size: 0, variables: 5, inline expansions: 9 (0 bytes) */

// <04689687> bitmap/colorconversion.cpp:2552
// variables: 7
void RotateImageLeft(const uint8* src, uint8* dst, int widthHeight, ImageFormat imageFormat)
{
	int x; // 2562
	int y; // 2562
	uint8 tmp; // 2564
	int halfWidthHeight; // 2565
	int sizeInBytes; // 2566
	const char   __FUNCTION__; // 44656
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2567
	}
} /* size: 0, variables: 6 */

// <00E81DFA> bitmap/colorconversion.cpp:2552
// variables: 7
void RotateImageLeft(const uint8* src, uint8* dst, int widthHeight, ImageFormat imageFormat)
{
	int x; // 2562
	int y; // 2562
	uint8 tmp; // 2564
	int halfWidthHeight; // 2565
	int sizeInBytes; // 2566
	const char   __FUNCTION__; // 7318
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2567
	}
} /* size: 0, variables: 6 */

// <00533887> bitmap/colorconversion.cpp:2552
// variables: 7
void RotateImageLeft(const uint8* src, uint8* dst, int widthHeight, ImageFormat imageFormat)
{
	int x; // 2562
	int y; // 2562
	uint8 tmp; // 2564
	int halfWidthHeight; // 2565
	int sizeInBytes; // 2566
	const char   __FUNCTION__; // 49744
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2567
	}
} /* size: 0, variables: 6 */

// <0468946E> bitmap/colorconversion.cpp:2588
// function calls: 4
void RotateImage180(const uint8* src, uint8* dst, int widthHeight, ImageFormat imageFormat)
{
	IsCompressed(ImageFormat fmt); // 2557
	RotateImageLeft(const uint8* src,
			uint8* dst,
			int widthHeight,
			ImageFormat imageFormat);  // 2592
	IsCompressed(ImageFormat fmt); // 2557
	RotateImageLeft(const uint8* src,
			uint8* dst,
			int widthHeight,
			ImageFormat imageFormat);  // 2594
} /* size: 0, inline expansions: 4 (0 bytes) */

// <046890DD> bitmap/colorconversion.cpp:2599
// variables: 9
// function calls: 6
void FlipImageVertically(void* pSrc, void* pDst, int nWidth, int nHeight, ImageFormat imageFormat, int nDstStride)
{
	int nSizeInBytes; // 2604
	int nRowBytes; // 2605
	int nSrcStride; // 2606
	uint8* pSrcRow; // 2612
	uint8* pDstRow; // 2613
	{
		uint8* pTemp; // 2616
		int nHalfHeight; // 2617
		{
			int i; // 2618
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2620
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2621
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2622
		}
	}
	{
		int i; // 2630
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2632
	}
	IsCompressed(ImageFormat fmt); // 2601
	SizeInBytes(ImageFormat fmt); // 2604
} /* size: 0, variables: 5, inline expansions: 2 (0 bytes) */

// <04688CE3> bitmap/colorconversion.cpp:2641
// variables: 15
// function calls: 6
void FlipImageHorizontally(void* pSrc, void* pDst, int nWidth, int nHeight, ImageFormat imageFormat, int nDstStride)
{
	uint8 tmp; // 2646
	int nSizeInBytes; // 2647
	int nRowBytes; // 2648
	const char   __FUNCTION__; // 44719
	int nSrcStride; // 2650
	int x; // 2656
	int y; // 2656
	uint8* pSrcRow; // 2657
	uint8* pDstRow; // 2658
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2649
	}
	{
		int nHalfWidth; // 2661
		{
			uint8* pSrcPixel; // 2664
			uint8* pDstPixel; // 2665
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2668
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2669
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2670
		}
	}
	{
		uint8* pSrcPixel; // 2684
		uint8* pDstPixel; // 2685
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2688
	}
	IsCompressed(ImageFormat fmt); // 2643
	SizeInBytes(ImageFormat fmt); // 2647
} /* size: 0, variables: 9, inline expansions: 2 (0 bytes) */

// <00E81456> bitmap/colorconversion.cpp:2641
// variables: 15
// function calls: 6
void FlipImageHorizontally(void* pSrc, void* pDst, int nWidth, int nHeight, ImageFormat imageFormat, int nDstStride)
{
	uint8 tmp; // 2646
	int nSizeInBytes; // 2647
	int nRowBytes; // 2648
	const char   __FUNCTION__; // 7381
	int nSrcStride; // 2650
	int x; // 2656
	int y; // 2656
	uint8* pSrcRow; // 2657
	uint8* pDstRow; // 2658
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2649
	}
	{
		int nHalfWidth; // 2661
		{
			uint8* pSrcPixel; // 2664
			uint8* pDstPixel; // 2665
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2668
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2669
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2670
		}
	}
	{
		uint8* pSrcPixel; // 2684
		uint8* pDstPixel; // 2685
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2688
	}
	IsCompressed(ImageFormat fmt); // 2643
	SizeInBytes(ImageFormat fmt); // 2647
} /* size: 0, variables: 9, inline expansions: 2 (0 bytes) */

// <00532EE3> bitmap/colorconversion.cpp:2641
// variables: 15
// function calls: 6
void FlipImageHorizontally(void* pSrc, void* pDst, int nWidth, int nHeight, ImageFormat imageFormat, int nDstStride)
{
	uint8 tmp; // 2646
	int nSizeInBytes; // 2647
	int nRowBytes; // 2648
	const char   __FUNCTION__; // 49807
	int nSrcStride; // 2650
	int x; // 2656
	int y; // 2656
	uint8* pSrcRow; // 2657
	uint8* pDstRow; // 2658
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2649
	}
	{
		int nHalfWidth; // 2661
		{
			uint8* pSrcPixel; // 2664
			uint8* pDstPixel; // 2665
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2668
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2669
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2670
		}
	}
	{
		uint8* pSrcPixel; // 2684
		uint8* pDstPixel; // 2685
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2688
	}
	IsCompressed(ImageFormat fmt); // 2643
	SizeInBytes(ImageFormat fmt); // 2647
} /* size: 0, variables: 9, inline expansions: 2 (0 bytes) */

// <04688A46> bitmap/colorconversion.cpp:2704
// variables: 6
// function calls: 5
void SwapAxes(uint8* src, int widthHeight, ImageFormat imageFormat)
{
	int x; // 2712
	int y; // 2712
	uint8 tmp; // 2714
	int sizeInBytes; // 2715
	const char   __FUNCTION__; // 44572
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2716
	}
	IsCompressed(ImageFormat fmt); // 2707
	SizeInBytes(ImageFormat fmt); // 2715
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2722
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2723
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2724
} /* size: 0, variables: 5, inline expansions: 5 (0 bytes) */

// <00E811B9> bitmap/colorconversion.cpp:2704
// variables: 6
// function calls: 5
void SwapAxes(uint8* src, int widthHeight, ImageFormat imageFormat)
{
	int x; // 2712
	int y; // 2712
	uint8 tmp; // 2714
	int sizeInBytes; // 2715
	const char   __FUNCTION__; // 7234
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2716
	}
	IsCompressed(ImageFormat fmt); // 2707
	SizeInBytes(ImageFormat fmt); // 2715
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2722
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2723
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2724
} /* size: 0, variables: 5, inline expansions: 5 (0 bytes) */

// <00532C46> bitmap/colorconversion.cpp:2704
// variables: 6
// function calls: 5
void SwapAxes(uint8* src, int widthHeight, ImageFormat imageFormat)
{
	int x; // 2712
	int y; // 2712
	uint8 tmp; // 2714
	int sizeInBytes; // 2715
	const char   __FUNCTION__; // 49660
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2716
	}
	IsCompressed(ImageFormat fmt); // 2707
	SizeInBytes(ImageFormat fmt); // 2715
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2722
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2723
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2724
} /* size: 0, variables: 5, inline expansions: 5 (0 bytes) */

// <046886F4> bitmap/colorconversion.cpp:2731
// variables: 11
// function calls: 8
void RGBA8888ToRGBA16161616F(const uint8* src, uint8* dst, int numPixels)
{
	float flOO255; // 2733
	float16* pDest; // 2734
	const uint8* endSrc; // 2735
	{
		int new_exp; // 586
		{
			unsigned int exp_val; // 599
		}
	}
	ConvertFloatTo16bits(float input); // 481
	float16::SetFloat(
		float in);  // 2739
	{
		int new_exp; // 586
		{
			unsigned int exp_val; // 599
		}
	}
	ConvertFloatTo16bits(float input); // 481
	float16::SetFloat(
		float in);  // 2740
	{
		int new_exp; // 586
		{
			unsigned int exp_val; // 599
		}
	}
	ConvertFloatTo16bits(float input); // 481
	float16::SetFloat(
		float in);  // 2741
	{
		int new_exp; // 586
		{
			unsigned int exp_val; // 599
		}
	}
	ConvertFloatTo16bits(float input); // 481
	float16::SetFloat(
		float in);  // 2738
} /* size: 1249, variables: 3, inline expansions: 8 (2174 bytes) */

// <04688500> bitmap/colorconversion.cpp:2745
// variables: 7
// function calls: 4
void RGBA8888ToRG1616F(const uint8* src, uint8* dst, int numPixels)
{
	float flOO255; // 2747
	float16* pDest; // 2748
	const uint8* endSrc; // 2749
	{
		int new_exp; // 586
		{
			unsigned int exp_val; // 599
		}
	}
	ConvertFloatTo16bits(float input); // 481
	float16::SetFloat(
		float in);  // 2753
	{
		int new_exp; // 586
		{
			unsigned int exp_val; // 599
		}
	}
	ConvertFloatTo16bits(float input); // 481
	float16::SetFloat(
		float in);  // 2752
} /* size: 657, variables: 3, inline expansions: 4 (1064 bytes) */

// <046883BC> bitmap/colorconversion.cpp:2757
// variables: 5
// function calls: 2
void RGBA8888ToR16F(const uint8* src, uint8* dst, int numPixels)
{
	float flOO255; // 2759
	float16* pDest; // 2760
	const uint8* endSrc; // 2761
	{
		int new_exp; // 586
		{
			unsigned int exp_val; // 599
		}
	}
	ConvertFloatTo16bits(float input); // 481
	float16::SetFloat(
		float in);  // 2764
} /* size: 337, variables: 3, inline expansions: 2 (469 bytes) */

// <04688335> bitmap/colorconversion.cpp:2768
// variables: 2
void RGBA8888ToRGBA16161616(const uint8* src, uint8* dst, int numPixels)
{
	uint16* pDest; // 2770
	const uint8* endSrc; // 2771
} /* size: 121, variables: 2 */

// <046882AE> bitmap/colorconversion.cpp:2781
// variables: 2
void RGBA8888ToRG1616(const uint8* src, uint8* dst, int numPixels)
{
	uint16* pDest; // 2783
	const uint8* endSrc; // 2784
} /* size: 99, variables: 2 */

// <04688221> bitmap/colorconversion.cpp:2792
// variables: 2
void RGBA8888ToR16(const uint8* src, uint8* dst, int numPixels)
{
	uint16* pDest; // 2794
	const uint8* endSrc; // 2795
} /* size: 56, variables: 2 */

// <04688188> bitmap/colorconversion.cpp:2802
// variables: 3
void RGBA8888ToRGBA32323232F(const uint8* src, uint8* dst, int numPixels)
{
	float flOO255; // 2804
	float32* pDest; // 2805
	const uint8* endSrc; // 2806
} /* size: 137, variables: 3 */

// <046880EF> bitmap/colorconversion.cpp:2816
// variables: 3
void RGBA8888ToRGB323232F(const uint8* src, uint8* dst, int numPixels)
{
	float flOO255; // 2818
	float32* pDest; // 2819
	const uint8* endSrc; // 2820
} /* size: 116, variables: 3 */

// <04688056> bitmap/colorconversion.cpp:2829
// variables: 3
void RGBA8888ToRG3232F(const uint8* src, uint8* dst, int numPixels)
{
	float flOO255; // 2831
	float32* pDest; // 2832
	const uint8* endSrc; // 2833
} /* size: 119, variables: 3 */

// <04687FB7> bitmap/colorconversion.cpp:2841
// variables: 3
void RGBA8888ToR32F(const uint8* src, uint8* dst, int numPixels)
{
	float flOO255; // 2843
	float32* pDest; // 2844
	const uint8* endSrc; // 2845
} /* size: 98, variables: 3 */

// <04691A60> bitmap/colorconversion.cpp:2852
// function call: 1
void RGBA8888ToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2854
} /* size: 24, inline expansions: 1 (11 bytes) */

// <04687F85> bitmap/colorconversion.cpp:2852
void RGBA8888ToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
} /* size: 0 */

// <04687EF8> bitmap/colorconversion.cpp:2858
// variables: 2
void RGBA10101012ToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 2860
	{
		uint32* pSrc; // 2863
	}
} /* size: 116, variables: 1 */

// <04687E6B> bitmap/colorconversion.cpp:2878
// variables: 2
void BGRA10101012ToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 2880
	{
		uint32* pSrc; // 2883
	}
} /* size: 116, variables: 1 */

// <046919BA> bitmap/colorconversion.cpp:2898
// variable: 1
void RGBA8888ToABGR8888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 2900
} /* size: 106, variables: 1 */

// <04687DBA> bitmap/colorconversion.cpp:2910
// variable: 1
void RGBA8888ToRGB888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 2912
} /* size: 98, variables: 1 */

// <04687D48> bitmap/colorconversion.cpp:2921
// variable: 1
void RGBA8888ToBGR888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 2923
} /* size: 99, variables: 1 */

// <04687CD6> bitmap/colorconversion.cpp:2941
// variable: 1
void RGBA8888ToI8(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 2943
} /* size: 132, variables: 1 */

// <04687C64> bitmap/colorconversion.cpp:2950
// variable: 1
void RGBA8888ToIA88(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 2953
} /* size: 139, variables: 1 */

// <04687BF2> bitmap/colorconversion.cpp:2966
// variable: 1
void RGBA8888ToA8(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 2968
} /* size: 53, variables: 1 */

// <04687B80> bitmap/colorconversion.cpp:2975
// variable: 1
void RGBA8888ToRGB888_BLUESCREEN(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 2977
} /* size: 131, variables: 1 */

// <04687B0E> bitmap/colorconversion.cpp:2995
// variable: 1
void RGBA8888ToBGR888_BLUESCREEN(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 2997
} /* size: 131, variables: 1 */

// <04691A0D> bitmap/colorconversion.cpp:3027
// variable: 1
void RGBA8888ToBGRA8888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 3029
} /* size: 106, variables: 1 */

// <046879EB> bitmap/colorconversion.cpp:3039
// variable: 1
void RGBA8888ToBGRX8888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 3041
} /* size: 99, variables: 1 */

// <04687979> bitmap/colorconversion.cpp:3050
// variable: 1
void RGBA8888ToRGBX8888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 3052
} /* size: 98, variables: 1 */

// <046878F2> bitmap/colorconversion.cpp:3061
// variables: 2
void RGBA8888ToBGR565(const uint8* src, uint8* dst, int numPixels)
{
	short unsigned int* pDstShort; // 3063
	const uint8* endSrc; // 3064
} /* size: 119, variables: 2 */

// <0468786B> bitmap/colorconversion.cpp:3073
// variables: 2
void RGBA8888ToBGRX5551(const uint8* src, uint8* dst, int numPixels)
{
	short unsigned int* pDstShort; // 3075
	const uint8* endSrc; // 3076
} /* size: 119, variables: 2 */

// <046877E4> bitmap/colorconversion.cpp:3085
// variables: 2
void RGBA8888ToBGRA5551(const uint8* src, uint8* dst, int numPixels)
{
	short unsigned int* pDstShort; // 3087
	const uint8* endSrc; // 3088
} /* size: 99, variables: 2 */

// <0468775D> bitmap/colorconversion.cpp:3098
// variables: 2
void RGBA8888ToBGRA4444(const uint8* src, uint8* dst, int numPixels)
{
	short unsigned int* pDstShort; // 3100
	const uint8* endSrc; // 3101
} /* size: 126, variables: 2 */

// <046876EB> bitmap/colorconversion.cpp:3111
// variable: 1
void RGBA8888ToUV88(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 3113
} /* size: 59, variables: 1 */

// <04691FA0> bitmap/colorconversion.cpp:3121
// function calls: 2
void RGBA8888ToUVWQ8888(const uint8* src, uint8* dst, int numPixels)
{
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2854
	RGBA8888ToRGBA8888(const uint8* src,
				uint8* dst,
				int numPixels);  // 3123
} /* size: 24, inline expansions: 2 (28 bytes) */

// <046876B9> bitmap/colorconversion.cpp:3121
void RGBA8888ToUVWQ8888(const uint8* src, uint8* dst, int numPixels)
{
} /* size: 0 */

// <04687687> bitmap/colorconversion.cpp:3126
void RGBA8888ToUVLX8888(const uint8* src, uint8* dst, int numPixels)
{
} /* size: 0 */

// <046875FA> bitmap/colorconversion.cpp:3131
// variables: 2
void RGBA8888ToRGBA1010102(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 3133
	{
		uint32* pDst; // 3136
	}
} /* size: 118, variables: 1 */

// <0468756D> bitmap/colorconversion.cpp:3142
// variables: 2
void RGBA8888ToBGRA1010102(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 3144
	{
		uint32* pDst; // 3147
	}
} /* size: 117, variables: 1 */

// <046874BC> bitmap/colorconversion.cpp:3165
// variable: 1
void RGB888ToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 3167
} /* size: 102, variables: 1 */

// <0468744A> bitmap/colorconversion.cpp:3177
// variable: 1
void BGR888ToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 3179
} /* size: 103, variables: 1 */

// <046873D8> bitmap/colorconversion.cpp:3198
// variable: 1
void I8ToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 3200
} /* size: 101, variables: 1 */

// <04687366> bitmap/colorconversion.cpp:3210
// variable: 1
void IA88ToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 3212
} /* size: 101, variables: 1 */

// <046872F4> bitmap/colorconversion.cpp:3227
// variable: 1
void A8ToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 3229
} /* size: 65, variables: 1 */

// <04687282> bitmap/colorconversion.cpp:3239
// variable: 1
void RGB888_BLUESCREENToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 3241
} /* size: 105, variables: 1 */

// <04687210> bitmap/colorconversion.cpp:3261
// variable: 1
void BGR888_BLUESCREENToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 3263
} /* size: 107, variables: 1 */

// <0468719E> bitmap/colorconversion.cpp:3283
// variable: 1
void ARGB8888ToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 3285
} /* size: 106, variables: 1 */

// <0468715F> bitmap/colorconversion.cpp:3295
// variable: 1
void BGRA8888ToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 3297
} /* size: 0, variables: 1 */

// <046870ED> bitmap/colorconversion.cpp:3307
// variable: 1
void BGRX8888ToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* endSrc; // 3309
} /* size: 103, variables: 1 */

// <04687020> bitmap/colorconversion.cpp:3319
// variables: 5
void BGR565ToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
	short unsigned int* pSrcShort; // 3321
	short unsigned int* pEndSrc; // 3322
	{
		uint8 blue; // 3325
		uint8 green; // 3326
		uint8 red; // 3327
	}
} /* size: 129, variables: 2 */

// <04686F64> bitmap/colorconversion.cpp:3337
// variables: 5
void BGRX5551ToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
	short unsigned int* pSrcShort; // 3339
	short unsigned int* pEndSrc; // 3340
	{
		uint8 blue; // 3343
		uint8 green; // 3344
		uint8 red; // 3345
	}
} /* size: 111, variables: 2 */

// <04686E83> bitmap/colorconversion.cpp:3355
// variables: 6
void BGRA5551ToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
	short unsigned int* pSrcShort; // 3357
	short unsigned int* pEndSrc; // 3358
	{
		uint8 blue; // 3361
		uint8 green; // 3362
		uint8 red; // 3363
		bool alpha; // 3364
	}
} /* size: 156, variables: 2 */

// <04686DA2> bitmap/colorconversion.cpp:3382
// variables: 6
void BGRA4444ToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
	short unsigned int* pSrcShort; // 3384
	short unsigned int* pEndSrc; // 3385
	{
		uint8 blue; // 3388
		uint8 green; // 3389
		uint8 red; // 3390
		uint8 alpha; // 3391
	}
} /* size: 117, variables: 2 */

// <04686D30> bitmap/colorconversion.cpp:3402
// variable: 1
void UV88ToRGBA8888(const uint8* src, uint8* dst, int numPixels)
{
	const uint8* pEndSrc; // 3404
} /* size: 65, variables: 1 */

// <04686C45> bitmap/colorconversion.cpp:3424
// variables: 2
void RGBA16161616ToRGBA8888(const uint8* src_, uint8* dst, int numPixels)
{
	short unsigned int* src; // 3426
	short unsigned int* pEndSrc; // 3427
} /* size: 105, variables: 2 */

// <046867F5> bitmap/colorconversion.cpp:3437
// variables: 27
// function calls: 12
void RGBA16161616FToRGBA8888(const uint8* src_, uint8* dst, int numPixels)
{
	float flTmp; // 3440
	float16* src; // 3441
	float16* pEndSrc; // 3442
	{
		const float  half_denorm; // 642
		float mantissa; // 643
		float sgn; // 644
	}
	{
		unsigned int mantissa; // 650
		unsigned int biased_exponent; // 651
		unsigned int sign; // 652
	}
	IsInfinity(union float16bits in); // 631
	Convert16bitFloatTo32bits(short unsigned int input); // 477
	float16::GetFloat(); // 3449
	IsInfinity(union float16bits in); // 631
	{
		const float  half_denorm; // 642
		float mantissa; // 643
		float sgn; // 644
	}
	{
		unsigned int mantissa; // 650
		unsigned int biased_exponent; // 651
		unsigned int sign; // 652
	}
	Convert16bitFloatTo32bits(short unsigned int input); // 477
	float16::GetFloat(); // 3453
	IsInfinity(union float16bits in); // 631
	{
		const float  half_denorm; // 642
		float mantissa; // 643
		float sgn; // 644
	}
	{
		unsigned int mantissa; // 650
		unsigned int biased_exponent; // 651
		unsigned int sign; // 652
	}
	Convert16bitFloatTo32bits(short unsigned int input); // 477
	float16::GetFloat(); // 3457
	IsInfinity(union float16bits in); // 631
	{
		const float  half_denorm; // 642
		float mantissa; // 643
		float sgn; // 644
	}
	{
		unsigned int mantissa; // 650
		unsigned int biased_exponent; // 651
		unsigned int sign; // 652
	}
	Convert16bitFloatTo32bits(short unsigned int input); // 477
	float16::GetFloat(); // 3445
} /* size: 1069, variables: 3, inline expansions: 12 (1575 bytes) */

// <0468676E> bitmap/colorconversion.cpp:3462
// variables: 2
void RG1616ToRGBA8888(const uint8* src_, uint8* dst, int numPixels)
{
	short unsigned int* src; // 3464
	short unsigned int* pEndSrc; // 3465
} /* size: 115, variables: 2 */

// <046866E7> bitmap/colorconversion.cpp:3475
// variables: 2
void R16ToRGBA8888(const uint8* src_, uint8* dst, int numPixels)
{
	short unsigned int* src; // 3477
	short unsigned int* pEndSrc; // 3478
} /* size: 101, variables: 2 */

// <0468636C> bitmap/colorconversion.cpp:3486
// variables: 6
// function calls: 12
void RGBA32323232F_To_RGBA8888(const uint8* src_, uint8* dst, int numPixels)
{
	float* src; // 3488
	float* pEndSrc; // 3489
	{
		float flRed; // 3492
		float flGreen; // 3496
		float flBlue; // 3500
		float flAlpha; // 3504
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 3493
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 3497
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 3501
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 3505
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 3508
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 3509
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 3510
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 3511
	}
} /* size: 373, variables: 2 */

// <046860EB> bitmap/colorconversion.cpp:3515
// variables: 5
// function calls: 9
void RGB323232F_To_RGBA8888(const uint8* src_, uint8* dst, int numPixels)
{
	float* src; // 3517
	float* pEndSrc; // 3518
	{
		float flRed; // 3521
		float flGreen; // 3525
		float flBlue; // 3529
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 3530
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 3533
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 3534
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 3535
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 3522
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 3526
	}
} /* size: 733, variables: 2 */

// <04685F16> bitmap/colorconversion.cpp:3540
// variables: 4
// function calls: 6
void RG3232F_To_RGBA8888(const uint8* src_, uint8* dst, int numPixels)
{
	float* src; // 3542
	float* pEndSrc; // 3543
	{
		float flRed; // 3546
		float flGreen; // 3550
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 3551
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 3554
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 3555
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 3547
	}
} /* size: 335, variables: 2 */

// <04685DCF> bitmap/colorconversion.cpp:3561
// variables: 3
// function calls: 3
void R32F_To_RGBA8888(const uint8* src_, uint8* dst, int numPixels)
{
	float* src; // 3563
	float* pEndSrc; // 3564
	{
		float flRed; // 3567
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 3571
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 3568
	}
} /* size: 145, variables: 2 */

