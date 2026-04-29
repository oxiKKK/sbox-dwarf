
//
// bitmap/tgaloader.cpp
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 54
//

// <04765F86> bitmap/tgaloader.cpp:62
// variables: 6
// function calls: 4
void ReadFile(const char* pFileName, CTempImage& image, int maxbytes)
{
	const char   __FUNCTION__; // 6884
	FileHandle_t fileHandle; // 71
	int64 pos; // 77
	int len; // 98
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 64
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 65
	}
	CUtlMemory<unsigned char, int>::IsGrowable(); // 881
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 888
	CUtlMemory<unsigned char, int>::EnsureCapacity(
			int num);  // 92
	CUtlMemory<unsigned char, int>::Base(); // 98
} /* size: 0, variables: 4, inline expansions: 4 (176 bytes) */

// <00F75BED> bitmap/tgaloader.cpp:62
// variables: 6
// function calls: 4
void ReadFile(const char* pFileName, CTempImage& image, int maxbytes)
{
	const char   __FUNCTION__; // 65022
	FileHandle_t fileHandle; // 71
	int64 pos; // 77
	int len; // 98
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 64
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 65
	}
	CUtlMemory<unsigned char, int>::IsGrowable(); // 881
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 888
	CUtlMemory<unsigned char, int>::EnsureCapacity(
			int num);  // 92
	CUtlMemory<unsigned char, int>::Base(); // 98
} /* size: 0, variables: 4, inline expansions: 4 (0 bytes) */

// <0062767A> bitmap/tgaloader.cpp:62
// variables: 6
// function calls: 4
void ReadFile(const char* pFileName, CTempImage& image, int maxbytes)
{
	const char   __FUNCTION__; // 41912
	FileHandle_t fileHandle; // 71
	int64 pos; // 77
	int len; // 98
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 64
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 65
	}
	CUtlMemory<unsigned char, int>::IsGrowable(); // 881
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 888
	CUtlMemory<unsigned char, int>::EnsureCapacity(
			int num);  // 92
	CUtlMemory<unsigned char, int>::Base(); // 98
} /* size: 0, variables: 4, inline expansions: 4 (0 bytes) */

// <04765F63> bitmap/tgaloader.cpp:111
void ReadHeader(CUtlBuffer& buf, TGAHeader_t& header)
{
} /* size: 0 */

// <04765E6C> bitmap/tgaloader.cpp:128
// variable: 1
// function call: 1
void GetInfo(CUtlBuffer& buf, int* width, int* height, ImageFormat* imageFormat, float* sourceGamma)
{
	TGAHeader_t header; // 131
	ReadHeader(CUtlBuffer& buf,
			TGAHeader_t& header);  // 133
} /* size: 212, variables: 1, inline expansions: 1 (14 bytes) */

// <04765E52> bitmap/tgaloader.cpp:174
void TGAHeaderSize(void)
{
} /* size: 0 */

// <04765A75> bitmap/tgaloader.cpp:183
// variables: 2
// function calls: 12
void GetInfo(const char* pFileName, int* width, int* height, ImageFormat* imageFormat, float* sourceGamma)
{
	CTempImage image; // 187
	CUtlBuffer buf; // 194
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 187
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 197
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 197
} /* size: 313, variables: 2, inline expansions: 12 (285 bytes) */

// <0476595D> bitmap/tgaloader.cpp:204
// variables: 2
// function calls: 2
void OutputRowRGBA8888(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	{
		int i; // 206
		{
			unsigned char* pSrc; // 208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 208
		}
	}
} /* size: 0 */

// <0476584B> bitmap/tgaloader.cpp:217
// variables: 2
// function calls: 2
void OutputRowABGR8888(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	{
		int i; // 219
		{
			unsigned char* pSrc; // 221
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 221
		}
	}
} /* size: 0 */

// <04765739> bitmap/tgaloader.cpp:230
// variables: 2
// function calls: 2
void OutputRowRGB888(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	{
		int i; // 232
		{
			unsigned char* pSrc; // 234
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 234
		}
	}
} /* size: 0 */

// <04765627> bitmap/tgaloader.cpp:242
// variables: 2
// function calls: 2
void OutputRowBGR888(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	{
		int i; // 244
		{
			unsigned char* pSrc; // 246
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 246
		}
	}
} /* size: 0 */

// <04765589> bitmap/tgaloader.cpp:254
// variables: 2
void OutputRowRGB565(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	const char   __FUNCTION__; // 7053
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
	}
} /* size: 0, variables: 1 */

// <00F751F0> bitmap/tgaloader.cpp:254
// variables: 2
void OutputRowRGB565(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	const char   __FUNCTION__; // 65191
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
	}
} /* size: 0, variables: 1 */

// <00626C7D> bitmap/tgaloader.cpp:254
// variables: 2
void OutputRowRGB565(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	const char   __FUNCTION__; // 42081
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
	}
} /* size: 0, variables: 1 */

// <04765465> bitmap/tgaloader.cpp:259
// variables: 2
// function calls: 2
void OutputRowI8(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	{
		int i; // 261
		{
			unsigned char* pSrc; // 263
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 263
		}
	}
} /* size: 0 */

// <04765341> bitmap/tgaloader.cpp:278
// variables: 2
// function calls: 2
void OutputRowIA88(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	{
		int i; // 280
		{
			unsigned char* pSrc; // 282
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 282
		}
	}
} /* size: 0 */

// <04765229> bitmap/tgaloader.cpp:298
// variables: 2
// function calls: 2
void OutputRowA8(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	{
		int i; // 300
		{
			unsigned char* pSrc; // 302
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 302
		}
	}
} /* size: 0 */

// <04765111> bitmap/tgaloader.cpp:308
// variables: 2
// function calls: 2
void OutputRowRGB888BlueScreen(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	{
		int i; // 310
		{
			unsigned char* pSrc; // 312
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 312
		}
	}
} /* size: 0 */

// <04764FF9> bitmap/tgaloader.cpp:320
// variables: 2
// function calls: 2
void OutputRowBGR888BlueScreen(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	{
		int i; // 322
		{
			unsigned char* pSrc; // 324
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 324
		}
	}
} /* size: 0 */

// <04764EE1> bitmap/tgaloader.cpp:332
// variables: 2
// function calls: 2
void OutputRowARGB8888(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	{
		int i; // 334
		{
			unsigned char* pSrc; // 336
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 336
		}
	}
} /* size: 0 */

// <04764DC9> bitmap/tgaloader.cpp:345
// variables: 2
// function calls: 2
void OutputRowBGRA8888(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	{
		int i; // 347
		{
			unsigned char* pSrc; // 349
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 349
		}
	}
} /* size: 0 */

// <04764CB1> bitmap/tgaloader.cpp:358
// variables: 2
// function calls: 2
void OutputRowBGRX8888(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	{
		int i; // 360
		{
			unsigned char* pSrc; // 362
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 362
		}
	}
} /* size: 0 */

// <04764B84> bitmap/tgaloader.cpp:371
// variables: 3
// function calls: 2
void OutputRowBGR565(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	{
		int i; // 373
		{
			unsigned char* pSrc; // 375
			short unsigned int rgba; // 376
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 375
		}
	}
} /* size: 0 */

// <04764A57> bitmap/tgaloader.cpp:385
// variables: 3
// function calls: 2
void OutputRowBGRX5551(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	{
		int i; // 387
		{
			unsigned char* pSrc; // 389
			short unsigned int rgba; // 390
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 389
		}
	}
} /* size: 0 */

// <04763F41> bitmap/tgaloader.cpp:443
// variables: 7
// function calls: 36
void ReadRow8BitUncompressedWithColormap(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	int i; // 446
	unsigned char* colormapEntry; // 447
	const char   __FUNCTION__; // 7503
	{
		int pal; // 454
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlBuffer::IsText(); // 1047
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 454
	}
	{
		int pal; // 467
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlBuffer::IsText(); // 1047
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 467
	}
	{
		int pal; // 480
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlBuffer::IsText(); // 1047
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 480
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 491
	}
} /* size: 0, variables: 3 */

// <00F73BA8> bitmap/tgaloader.cpp:443
// variables: 7
// function calls: 36
void ReadRow8BitUncompressedWithColormap(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	int i; // 446
	unsigned char* colormapEntry; // 447
	const char   __FUNCTION__; // 105
	{
		int pal; // 454
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlBuffer::IsText(); // 1047
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 454
	}
	{
		int pal; // 467
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlBuffer::IsText(); // 1047
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 467
	}
	{
		int pal; // 480
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlBuffer::IsText(); // 1047
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 480
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 491
	}
} /* size: 0, variables: 3 */

// <00625635> bitmap/tgaloader.cpp:443
// variables: 7
// function calls: 36
void ReadRow8BitUncompressedWithColormap(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	int i; // 446
	unsigned char* colormapEntry; // 447
	const char   __FUNCTION__; // 42531
	{
		int pal; // 454
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlBuffer::IsText(); // 1047
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 454
	}
	{
		int pal; // 467
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlBuffer::IsText(); // 1047
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 467
	}
	{
		int pal; // 480
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlBuffer::IsText(); // 1047
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 480
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 491
	}
} /* size: 0, variables: 3 */

// <04763E05> bitmap/tgaloader.cpp:501
// variables: 5
void ReadRow8BitUncompressedWithoutColormap(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	int nSize; // 504
	uint8* pSrc; // 505
	const char   __FUNCTION__; // 7574
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 507
	}
	{
		int i; // 511
	}
} /* size: 0, variables: 3 */

// <00F73A6C> bitmap/tgaloader.cpp:501
// variables: 5
void ReadRow8BitUncompressedWithoutColormap(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	int nSize; // 504
	uint8* pSrc; // 505
	const char   __FUNCTION__; // 176
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 507
	}
	{
		int i; // 511
	}
} /* size: 0, variables: 3 */

// <006254F9> bitmap/tgaloader.cpp:501
// variables: 5
void ReadRow8BitUncompressedWithoutColormap(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	int nSize; // 504
	uint8* pSrc; // 505
	const char   __FUNCTION__; // 42602
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 507
	}
	{
		int i; // 511
	}
} /* size: 0, variables: 3 */

// <04763CC9> bitmap/tgaloader.cpp:522
// variables: 5
void ReadRow24BitUncompressedWithoutColormap(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	int nSize; // 525
	uint8* pSrc; // 526
	const char   __FUNCTION__; // 7601
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 528
	}
	{
		int i; // 532
	}
} /* size: 0, variables: 3 */

// <00F73930> bitmap/tgaloader.cpp:522
// variables: 5
void ReadRow24BitUncompressedWithoutColormap(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	int nSize; // 525
	uint8* pSrc; // 526
	const char   __FUNCTION__; // 203
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 528
	}
	{
		int i; // 532
	}
} /* size: 0, variables: 3 */

// <006253BD> bitmap/tgaloader.cpp:522
// variables: 5
void ReadRow24BitUncompressedWithoutColormap(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	int nSize; // 525
	uint8* pSrc; // 526
	const char   __FUNCTION__; // 42629
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 528
	}
	{
		int i; // 532
	}
} /* size: 0, variables: 3 */

// <04763B8F> bitmap/tgaloader.cpp:545
// variables: 5
void ReadRow32BitUncompressedWithoutColormap(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	int nSize; // 548
	uint8* pSrc; // 549
	const char   __FUNCTION__; // 7601
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 551
	}
	{
		int i; // 555
	}
} /* size: 0, variables: 3 */

// <00F737F6> bitmap/tgaloader.cpp:545
// variables: 5
void ReadRow32BitUncompressedWithoutColormap(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	int nSize; // 548
	uint8* pSrc; // 549
	const char   __FUNCTION__; // 203
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 551
	}
	{
		int i; // 555
	}
} /* size: 0, variables: 3 */

// <00625283> bitmap/tgaloader.cpp:545
// variables: 5
void ReadRow32BitUncompressedWithoutColormap(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	int nSize; // 548
	uint8* pSrc; // 549
	const char   __FUNCTION__; // 42629
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 551
	}
	{
		int i; // 555
	}
} /* size: 0, variables: 3 */

// <04763895> bitmap/tgaloader.cpp:569
// variables: 13
// function calls: 4
void DecompressRow(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	int bytesPerPixel; // 571
	int pixelsLeftInRow; // 572
	int numPixelsToProcess; // 573
	unsigned char* pLast; // 576
	uint8* pSrc; // 579
	int nCount; // 580
	unsigned char repeat; // 582
	const char   __FUNCTION__; // 7004
	{
		unsigned char packetHeader; // 588
		{
			int i; // 597
		}
	}
	{
		int i; // 617
		{
			int j; // 619
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 639
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 627
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 579
} /* size: 0, variables: 8, inline expansions: 4 (59 bytes) */

// <00F734FC> bitmap/tgaloader.cpp:569
// variables: 13
// function calls: 4
void DecompressRow(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	int bytesPerPixel; // 571
	int pixelsLeftInRow; // 572
	int numPixelsToProcess; // 573
	unsigned char* pLast; // 576
	uint8* pSrc; // 579
	int nCount; // 580
	unsigned char repeat; // 582
	const char   __FUNCTION__; // 65142
	{
		unsigned char packetHeader; // 588
		{
			int i; // 597
		}
	}
	{
		int i; // 617
		{
			int j; // 619
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 639
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 627
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 579
} /* size: 0, variables: 8, inline expansions: 4 (0 bytes) */

// <00624F89> bitmap/tgaloader.cpp:569
// variables: 13
// function calls: 4
void DecompressRow(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	int bytesPerPixel; // 571
	int pixelsLeftInRow; // 572
	int numPixelsToProcess; // 573
	unsigned char* pLast; // 576
	uint8* pSrc; // 579
	int nCount; // 580
	unsigned char repeat; // 582
	const char   __FUNCTION__; // 42032
	{
		unsigned char packetHeader; // 588
		{
			int i; // 597
		}
	}
	{
		int i; // 617
		{
			int j; // 619
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 639
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 627
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 579
} /* size: 0, variables: 8, inline expansions: 4 (0 bytes) */

// <04762D65> bitmap/tgaloader.cpp:646
// variables: 3
// function calls: 46
void ReadRow8BitCompressedWithColormap(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	const int  BYTES_PER_PIXEL; // 649
	CUtlVectorFixedGrowable<unsigned char, 2048> rowI_8; // 651
	CUtlBuffer uncompressedBuf; // 656
	CUtlMemory<unsigned char, int>::CUtlMemory(
			unsigned char* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned char, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::CUtlMemoryFixedGrowable_Base(
					unsigned char* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<2048, unsigned char, 1>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<2048, unsigned char>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<2048, unsigned char, 1>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned char, 2048, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned char, 2048>::CUtlVectorFixedGrowable(
				int growSize);  // 651
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::SetCount(
		int count);  // 652
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Count(); // 656
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Base(); // 656
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 658
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::RemoveAll(); // 1798
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::Purge_FixedGrowable(
				unsigned char* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::Purge_FixedGrowable(
				unsigned char* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<2048, unsigned char, 1>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned char, 2048, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Purge(); // 560
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned char, 2048, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned char, 2048>::~CUtlVectorFixedGrowable(); // 658
} /* size: 398, variables: 3, inline expansions: 46 (1081 bytes) */

// <04762269> bitmap/tgaloader.cpp:664
// variables: 3
// function calls: 46
void ReadRow8BitCompressedWithoutColormap(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	const int  BYTES_PER_PIXEL; // 667
	CUtlVectorFixedGrowable<unsigned char, 2048> rowI_8; // 669
	CUtlBuffer uncompressedBuf; // 674
	CUtlMemory<unsigned char, int>::CUtlMemory(
			unsigned char* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned char, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::CUtlMemoryFixedGrowable_Base(
					unsigned char* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<2048, unsigned char, 1>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<2048, unsigned char>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<2048, unsigned char, 1>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned char, 2048, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned char, 2048>::CUtlVectorFixedGrowable(
				int growSize);  // 669
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::SetCount(
		int count);  // 670
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Count(); // 674
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Base(); // 674
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 676
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::RemoveAll(); // 1798
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::Purge_FixedGrowable(
				unsigned char* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::Purge_FixedGrowable(
				unsigned char* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<2048, unsigned char, 1>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned char, 2048, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Purge(); // 560
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned char, 2048, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned char, 2048>::~CUtlVectorFixedGrowable(); // 676
} /* size: 398, variables: 3, inline expansions: 46 (1081 bytes) */

// <0476172D> bitmap/tgaloader.cpp:682
// variables: 3
// function calls: 46
void ReadRow24BitCompressedWithoutColormap(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	const int  BYTES_PER_PIXEL; // 685
	CUtlVectorFixedGrowable<unsigned char, 6144> rowBGR_888; // 687
	CUtlBuffer uncompressedBuf; // 692
	CUtlMemory<unsigned char, int>::CUtlMemory(
			unsigned char* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned char, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::CUtlMemoryFixedGrowable_Base(
					unsigned char* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<6144, unsigned char, 1>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<6144, unsigned char>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<6144, unsigned char, 1>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned char, 6144, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 6144, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 6144, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned char, 6144>::CUtlVectorFixedGrowable(
				int growSize);  // 687
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 6144, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 6144, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 6144, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 6144, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 6144, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 6144, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 6144, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 6144, int> >::SetCount(
		int count);  // 688
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 6144, int> >::Count(); // 692
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 6144, int> >::Base(); // 692
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 694
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 6144, int> >::RemoveAll(); // 1798
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::Purge_FixedGrowable(
				unsigned char* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::Purge_FixedGrowable(
				unsigned char* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<6144, unsigned char, 1>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned char, 6144, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 6144, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 6144, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 6144, int> >::Purge(); // 560
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned char, 6144, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 6144, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned char, 6144>::~CUtlVectorFixedGrowable(); // 694
} /* size: 403, variables: 3, inline expansions: 46 (1070 bytes) */

// <04760BEA> bitmap/tgaloader.cpp:700
// variables: 3
// function calls: 46
void ReadRow32BitCompressedWithoutColormap(CUtlBuffer& buf, const TGAHeader_t& header, unsigned char* pDst)
{
	const int  BYTES_PER_PIXEL; // 703
	CUtlVectorFixedGrowable<unsigned char, 8192> rowBGRA_8888; // 705
	CUtlBuffer uncompressedBuf; // 710
	CUtlMemory<unsigned char, int>::CUtlMemory(
			unsigned char* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned char, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::CUtlMemoryFixedGrowable_Base(
					unsigned char* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8192, unsigned char, 1>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8192, unsigned char>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<8192, unsigned char, 1>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned char, 8192, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8192, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8192, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned char, 8192>::CUtlVectorFixedGrowable(
				int growSize);  // 705
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8192, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8192, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8192, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8192, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8192, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8192, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8192, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8192, int> >::SetCount(
		int count);  // 706
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8192, int> >::Count(); // 710
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8192, int> >::Base(); // 710
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 712
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8192, int> >::RemoveAll(); // 1798
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::Purge_FixedGrowable(
				unsigned char* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::Purge_FixedGrowable(
				unsigned char* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8192, unsigned char, 1>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned char, 8192, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8192, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8192, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8192, int> >::Purge(); // 560
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned char, 8192, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8192, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned char, 8192>::~CUtlVectorFixedGrowable(); // 712
} /* size: 419, variables: 3, inline expansions: 46 (1078 bytes) */

// <04760BD2> bitmap/tgaloader.cpp:718
void GetReadRowFunc(const TGAHeader_t& header)
{
} /* size: 0 */

// <04760BA0> bitmap/tgaloader.cpp:789
// variable: 1
void ReadColormap(CUtlBuffer& buf, const TGAHeader_t& header)
{
	int numColormapBytes; // 791
} /* size: 0, variables: 1 */

// <04760849> bitmap/tgaloader.cpp:808
// variables: 5
// function calls: 9
void ReadSourceImage(CUtlBuffer& buf, TGAHeader_t& header, CTempImage& image)
{
	ReadRowFunc_t ReadRowFunc; // 811
	int memRequired; // 820
	unsigned char* pDstBits; // 826
	{
		int row; // 830
		CUtlMemory<unsigned char, int>::Base(); // 832
		SizeInBytes(ImageFormat fmt); // 833
	}
	{
		int row; // 839
		CUtlMemory<unsigned char, int>::Base(); // 841
		SizeInBytes(ImageFormat fmt); // 842
	}
	GetReadRowFunc(const TGAHeader_t& header); // 811
	GetMemRequired(int width,
			int height,
			int depth,
			ImageFormat imageFormat,
			bool mipmap,
			int* pAdjustedHeight);  // 820
	CUtlMemory<unsigned char, int>::IsGrowable(); // 881
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 888
	CUtlMemory<unsigned char, int>::EnsureCapacity(
			int num);  // 822
} /* size: 596, variables: 3, inline expansions: 5 (361 bytes) */

// <04760501> bitmap/tgaloader.cpp:878
// variables: 2
// function calls: 8
void Load(unsigned char* pOutputImage, CUtlBuffer& buf, int width, int height, ImageFormat imageFormat, float targetGamma, bool mipmap)
{
	TGAHeader_t header; // 881
	CTempImage tmpImage; // 901
	ReadHeader(CUtlBuffer& buf,
			TGAHeader_t& header);  // 884
	ReadColormap(CUtlBuffer& buf,
			const TGAHeader_t& header);  // 895
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 901
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 916
} /* size: 397, variables: 2, inline expansions: 8 (199 bytes) */

// <047600C5> bitmap/tgaloader.cpp:922
// variables: 4
// function calls: 12
void Load(unsigned char* pOutputImage, const char* pFileName, int width, int height, ImageFormat imageFormat, float targetGamma, bool mipmap)
{
	const char   __FUNCTION__; // 6791
	CTempImage vec; // 928
	CUtlBuffer buf; // 935
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 925
	}
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 928
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 939
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 939
} /* size: 0, variables: 3, inline expansions: 12 (285 bytes) */

// <00F6FD2C> bitmap/tgaloader.cpp:922
// variables: 4
// function calls: 12
void Load(unsigned char* pOutputImage, const char* pFileName, int width, int height, ImageFormat imageFormat, float targetGamma, bool mipmap)
{
	const char   __FUNCTION__; // 64929
	CTempImage vec; // 928
	CUtlBuffer buf; // 935
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 925
	}
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 928
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 939
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 939
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

// <006217B9> bitmap/tgaloader.cpp:922
// variables: 4
// function calls: 12
void Load(unsigned char* pOutputImage, const char* pFileName, int width, int height, ImageFormat imageFormat, float targetGamma, bool mipmap)
{
	const char   __FUNCTION__; // 41819
	CTempImage vec; // 928
	CUtlBuffer buf; // 935
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 925
	}
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 928
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 939
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 939
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

// <0475FDE6> bitmap/tgaloader.cpp:945
// variables: 2
// function calls: 6
void LoadRGBA8888(CUtlBuffer& buf, CUtlMemory<unsigned char, int>& outputData, int& outWidth, int& outHeight)
{
	TGAHeader_t header; // 947
	int memSize; // 967
	ReadHeader(CUtlBuffer& buf,
			TGAHeader_t& header);  // 950
	ReadColormap(CUtlBuffer& buf,
			const TGAHeader_t& header);  // 961
	GetMemRequired(int width,
			int height,
			int depth,
			ImageFormat imageFormat,
			bool mipmap,
			int* pAdjustedHeight);  // 967
	CUtlMemory<unsigned char, int>::IsGrowable(); // 881
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 888
	CUtlMemory<unsigned char, int>::EnsureCapacity(
			int num);  // 970
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <0475FA08> bitmap/tgaloader.cpp:983
// variables: 4
// function calls: 12
void LoadRGBA8888(const char* pFileName, CUtlMemory<unsigned char, int>& outputData, int& outWidth, int& outHeight)
{
	const char   __FUNCTION__; // 6977
	CTempImage vec; // 988
	CUtlBuffer buf; // 995
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 985
	}
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 988
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 999
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 999
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

// <00F6F66F> bitmap/tgaloader.cpp:983
// variables: 4
// function calls: 12
void LoadRGBA8888(const char* pFileName, CUtlMemory<unsigned char, int>& outputData, int& outWidth, int& outHeight)
{
	const char   __FUNCTION__; // 65115
	CTempImage vec; // 988
	CUtlBuffer buf; // 995
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 985
	}
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 988
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 999
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 999
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

// <006210FC> bitmap/tgaloader.cpp:983
// variables: 4
// function calls: 12
void LoadRGBA8888(const char* pFileName, CUtlMemory<unsigned char, int>& outputData, int& outWidth, int& outHeight)
{
	const char   __FUNCTION__; // 42005
	CTempImage vec; // 988
	CUtlBuffer buf; // 995
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 985
	}
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 988
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 999
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 999
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

