
//
// bitmap/psd.cpp
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 16
//	structs: 2
//

// <0473525A> bitmap/psd.cpp:58
// member variables: 8
// struct size: 26
struct PSDHeader_t {
	unsigned int m_nSignature; /* 0 4 */
	short unsigned int m_nVersion; /* 4 2 */
	unsigned char m_pReserved[6]; /* 6 6 */
	short unsigned int m_nChannels; /* 12 2 */
	unsigned int m_nRows; /* 14 4 */
	unsigned int m_nColumns; /* 18 4 */
	short unsigned int m_nDepth; /* 22 2 */
	short unsigned int m_nMode; /* 24 2 */
} __attribute__((__packed__));

// <047352F0> bitmap/psd.cpp:70
// member variables: 3
// struct size: 24
struct PSDPalette_t {
	unsigned char * m_pRed; /* 0 8 */
	unsigned char * m_pGreen; /* 8 8 */
	unsigned char * m_pBlue; /* 16 8 */
};

// <0473B004> bitmap/psd.cpp:141
// variable: 1
// function calls: 6
bool PSDGetInfo(const char* pFileName, const char* pPathID, int* pWidth, int* pHeight, ImageFormat* pImageFormat, float* pSourceGamma)
{
	CUtlBuffer buf; // 143
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 150
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <0473A6C1> bitmap/psd.cpp:177
// variables: 6
// function calls: 16
PSDImageResources PSDGetImageResources(const char* pFileName, const char* pPathID, CUtlBuffer& tempBuf)
{
	CUtlStreamBuffer buf; // 179
	PSDHeader_t header; // 188
	unsigned int numBytesPalette; // 192
	unsigned int numBytesImgResources; // 196
	PSDImageResources imgres; // 200
	{
		PSDImageResources imgres; // 183
		PSDImageResources::PSDImageResources(
					unsigned int numBytes,
					const unsigned char* pvBuffer);  // 183
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 192
	DWordSwapC<unsigned int>(unsigned int dw); // 192
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 196
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1551
	CUtlBuffer::Purge(); // 197
	DWordSwapC<unsigned int>(unsigned int dw); // 196
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 199
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 200
	PSDImageResources::PSDImageResources(
				unsigned int numBytes,
				const unsigned char* pvBuffer);  // 200
} /* size: 0, variables: 5, inline expansions: 15 (0 bytes) */

// <0473A652> bitmap/psd.cpp:208
// variables: 7
inline void CMYKToRGB(RGBA8888_t& color)
{
	unsigned char nCyan; // 210
	unsigned char nMagenta; // 211
	unsigned char nYellow; // 212
	unsigned char nBlack; // 213
	int nCyanBlack; // 215
	int nMagentaBlack; // 216
	int nYellowBlack; // 217
} /* size: 0, variables: 7 */

// <0473A27E> bitmap/psd.cpp:228
// variables: 11
// function calls: 11
void PSDConvertToRGBA8888(int nChannelsCount, PSDMode_t mode, PSDPalette_t& palette, Bitmap_t& bitmap)
{
	bool bShouldFillInAlpha; // 230
	unsigned char* pDest; // 231
	{
		int j; // 243
		{
			int k; // 245
			{
				unsigned char nPaletteIndex; // 247
			}
			Bitmap_t::Width(); // 245
		}
		Bitmap_t::Height(); // 243
	}
	{
		int j; // 260
		{
			int k; // 262
			Bitmap_t::Width(); // 262
		}
		Bitmap_t::Height(); // 260
	}
	{
		int j; // 275
		{
			int k; // 277
			CMYKToRGB(RGBA8888_t& color); // 279
			Bitmap_t::Width(); // 277
		}
		Bitmap_t::Height(); // 275
	}
	{
		int j; // 290
		{
			int k; // 292
			Bitmap_t::Width(); // 292
		}
		Bitmap_t::Height(); // 290
	}
	Bitmap_t::GetBits(); // 231
	Bitmap_t::GetBits(); // 289
} /* size: 618, variables: 2, inline expansions: 2 (8 bytes) */

// <0473BF09> bitmap/psd.cpp:301
// variables: 6
// function calls: 3
void UndoTransparencyCompositing(uint8* pRGBData, uint8* pTransparencyData, int nPixelCount, int nTransparencyPixelStride, int nRGBPixelStride)
{
	{
		int i; // 303
		{
			float flAlpha; // 305
			{
				float flR; // 308
				float flG; // 309
				float flB; // 310
				{
					float flInvAlpha; // 319
				}
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 325
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 326
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 324
			}
		}
	}
} /* size: 362 */

// <0473A1D9> bitmap/psd.cpp:301
// variables: 6
void UndoTransparencyCompositing(uint8* pRGBData, int nRGBPixelStride, uint8* pTransparencyData, int nTransparencyPixelStride, int nPixelCount)
{
	{
		int i; // 303
		{
			float flAlpha; // 305
			{
				float flR; // 308
				float flG; // 309
				float flB; // 310
				{
					float flInvAlpha; // 319
				}
			}
		}
	}
} /* size: 0 */

// <04739DA0> bitmap/psd.cpp:352
// variables: 9
// function calls: 9
void PSDReadUncompressedChannels(CUtlBuffer& buf, int nChannelsCount, int nTransparencyChannelIndex, PSDMode_t mode, PSDPalette_t& palette, Bitmap_t& bitmap)
{
	unsigned char* pChannelRow; // 356
	const char   __FUNCTION__; // 50891
	{
		int i; // 357
		{
			int nIndex; // 359
			unsigned char* pDest; // 362
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 360
			}
			{
				int j; // 363
				{
					int k; // 368
					Bitmap_t::Width(); // 368
				}
				Bitmap_t::Height(); // 363
				Bitmap_t::Width(); // 365
			}
			Bitmap_t::GetBits(); // 362
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 375
	}
	Min<int>(const int& val1,
		const int& val2);  // 354
	Bitmap_t::Width(); // 356
	Bitmap_t::Width(); // 378
	Bitmap_t::Height(); // 378
	Bitmap_t::GetBits(); // 378
} /* size: 0, variables: 2, inline expansions: 5 (17 bytes) */

// <00F32513> bitmap/psd.cpp:352
// variables: 9
// function calls: 9
void PSDReadUncompressedChannels(CUtlBuffer& buf, int nChannelsCount, int nTransparencyChannelIndex, PSDMode_t mode, PSDPalette_t& palette, Bitmap_t& bitmap)
{
	unsigned char* pChannelRow; // 356
	const char   __FUNCTION__; // 13553
	{
		int i; // 357
		{
			int nIndex; // 359
			unsigned char* pDest; // 362
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 360
			}
			{
				int j; // 363
				{
					int k; // 368
					Bitmap_t::Width(); // 368
				}
				Bitmap_t::Height(); // 363
				Bitmap_t::Width(); // 365
			}
			Bitmap_t::GetBits(); // 362
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 375
	}
	Min<int>(const int& val1,
		const int& val2);  // 354
	Bitmap_t::Width(); // 356
	Bitmap_t::Width(); // 378
	Bitmap_t::Height(); // 378
	Bitmap_t::GetBits(); // 378
} /* size: 0, variables: 2, inline expansions: 5 (17 bytes) */

// <005E3FA0> bitmap/psd.cpp:352
// variables: 9
// function calls: 9
void PSDReadUncompressedChannels(CUtlBuffer& buf, int nChannelsCount, int nTransparencyChannelIndex, PSDMode_t mode, PSDPalette_t& palette, Bitmap_t& bitmap)
{
	unsigned char* pChannelRow; // 356
	const char   __FUNCTION__; // 55979
	{
		int i; // 357
		{
			int nIndex; // 359
			unsigned char* pDest; // 362
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 360
			}
			{
				int j; // 363
				{
					int k; // 368
					Bitmap_t::Width(); // 368
				}
				Bitmap_t::Height(); // 363
				Bitmap_t::Width(); // 365
			}
			Bitmap_t::GetBits(); // 362
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 375
	}
	Min<int>(const int& val1,
		const int& val2);  // 354
	Bitmap_t::Width(); // 356
	Bitmap_t::Width(); // 378
	Bitmap_t::Height(); // 378
	Bitmap_t::GetBits(); // 378
} /* size: 0, variables: 2, inline expansions: 5 (17 bytes) */

// <04736E4B> bitmap/psd.cpp:387
// variables: 19
// function calls: 9
void PSDReadCompressedChannelsInternal<false>(CUtlBuffer& buf, int nChannelsCount, int nAlphaChannelIndex, int nTransparencyChannelIndex, PSDMode_t mode, PSDPalette_t& palette, Bitmap_t& bitmap)
{
	const char   __FUNCTION__; // 51028
	const char* pSrcData; // 395
	const char* pOrigSrcData; // 396
	uint8* pTransparencyRowBuf; // 397
	{
		int i; // 402
		{
			int nChannelIndex; // 405
			bool bSkipWritingBits; // 406
			bool bUndoTransparencyCompositing; // 407
			int nIndex; // 422
			uint8* pDest; // 425
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 423
			}
			{
				int j; // 433
				{
					unsigned int nPixelsRemaining; // 435
					{
						int nCount; // 438
						{
							char nBuffer; // 453
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 451
							}
						}
						{
							char nPattern; // 483
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 482
							}
						}
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 504
					}
					Bitmap_t::Width(); // 435
					Bitmap_t::Width(); // 509
					Bitmap_t::GetBits(); // 509
				}
				Bitmap_t::Height(); // 433
			}
			Bitmap_t::GetBits(); // 425
		}
	}
	Min<int>(const int& val1,
		const int& val2);  // 392
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 395
	Bitmap_t::Width(); // 400
} /* size: 1321, variables: 4, inline expansions: 4 (53 bytes) */

// <0473668E> bitmap/psd.cpp:387
// variables: 19
// function calls: 19
void PSDReadCompressedChannelsInternal<true>(CUtlBuffer& buf, int nChannelsCount, int nAlphaChannelIndex, int nTransparencyChannelIndex, PSDMode_t mode, PSDPalette_t& palette, Bitmap_t& bitmap)
{
	const char   __FUNCTION__; // 51028
	const char* pSrcData; // 395
	const char* pOrigSrcData; // 396
	uint8* pTransparencyRowBuf; // 397
	{
		int i; // 402
		{
			int nChannelIndex; // 405
			bool bSkipWritingBits; // 406
			bool bUndoTransparencyCompositing; // 407
			int nIndex; // 422
			uint8* pDest; // 425
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 423
			}
			{
				int j; // 433
				{
					unsigned int nPixelsRemaining; // 435
					{
						int nCount; // 438
						{
							char nBuffer; // 453
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 451
							}
						}
						{
							char nPattern; // 483
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 482
							}
							CUtlMemory<unsigned char, int>::operator[](
									int i);  // 624
							CUtlBuffer::PeekGet(
								int offset);  // 690
							CUtlBuffer::BGetTypeBin<char>(
										char& dest);  // 672
							CUtlBuffer::BGetTypeBin<char>(
										char& dest);  // 1040
							CUtlBuffer::BGetChar(
								char* pOutChar);  // 937
							CUtlBuffer::GetChar(); // 486
						}
						CUtlMemory<unsigned char, int>::operator[](
								int i);  // 624
						CUtlBuffer::PeekGet(
							int offset);  // 690
						CUtlBuffer::BGetTypeBin<char>(
									char& dest);  // 672
						CUtlBuffer::BGetTypeBin<char>(
									char& dest);  // 1040
						CUtlBuffer::BGetChar(
							char* pOutChar);  // 937
						CUtlBuffer::GetChar(); // 441
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 504
					}
					Bitmap_t::Width(); // 435
					Bitmap_t::Width(); // 509
					Bitmap_t::GetBits(); // 509
				}
				Bitmap_t::Height(); // 433
			}
			Bitmap_t::GetBits(); // 425
		}
	}
	Min<int>(const int& val1,
		const int& val2);  // 392
	Bitmap_t::Width(); // 400
} /* size: 1316, variables: 4, inline expansions: 2 (33 bytes) */

// <00F2F5BE> bitmap/psd.cpp:387
// variables: 19
// function calls: 9
void PSDReadCompressedChannelsInternal<false>(CUtlBuffer& buf, int nChannelsCount, int nAlphaChannelIndex, int nTransparencyChannelIndex, PSDMode_t mode, PSDPalette_t& palette, Bitmap_t& bitmap)
{
	const char   __FUNCTION__; // 13690
	const char* pSrcData; // 395
	const char* pOrigSrcData; // 396
	uint8* pTransparencyRowBuf; // 397
	{
		int i; // 402
		{
			int nChannelIndex; // 405
			bool bSkipWritingBits; // 406
			bool bUndoTransparencyCompositing; // 407
			int nIndex; // 422
			uint8* pDest; // 425
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 423
			}
			{
				int j; // 433
				{
					unsigned int nPixelsRemaining; // 435
					{
						int nCount; // 438
						{
							char nBuffer; // 453
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 451
							}
						}
						{
							char nPattern; // 483
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 482
							}
						}
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 504
					}
					Bitmap_t::Width(); // 435
					Bitmap_t::Width(); // 509
					Bitmap_t::GetBits(); // 509
				}
				Bitmap_t::Height(); // 433
			}
			Bitmap_t::GetBits(); // 425
		}
	}
	Min<int>(const int& val1,
		const int& val2);  // 392
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 395
	Bitmap_t::Width(); // 400
} /* size: 1321, variables: 4, inline expansions: 4 (53 bytes) */

// <00F2EE01> bitmap/psd.cpp:387
// variables: 19
// function calls: 19
void PSDReadCompressedChannelsInternal<true>(CUtlBuffer& buf, int nChannelsCount, int nAlphaChannelIndex, int nTransparencyChannelIndex, PSDMode_t mode, PSDPalette_t& palette, Bitmap_t& bitmap)
{
	const char   __FUNCTION__; // 13690
	const char* pSrcData; // 395
	const char* pOrigSrcData; // 396
	uint8* pTransparencyRowBuf; // 397
	{
		int i; // 402
		{
			int nChannelIndex; // 405
			bool bSkipWritingBits; // 406
			bool bUndoTransparencyCompositing; // 407
			int nIndex; // 422
			uint8* pDest; // 425
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 423
			}
			{
				int j; // 433
				{
					unsigned int nPixelsRemaining; // 435
					{
						int nCount; // 438
						{
							char nBuffer; // 453
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 451
							}
						}
						{
							char nPattern; // 483
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 482
							}
							CUtlMemory<unsigned char, int>::operator[](
									int i);  // 624
							CUtlBuffer::PeekGet(
								int offset);  // 690
							CUtlBuffer::BGetTypeBin<char>(
										char& dest);  // 672
							CUtlBuffer::BGetTypeBin<char>(
										char& dest);  // 1040
							CUtlBuffer::BGetChar(
								char* pOutChar);  // 937
							CUtlBuffer::GetChar(); // 486
						}
						CUtlMemory<unsigned char, int>::operator[](
								int i);  // 624
						CUtlBuffer::PeekGet(
							int offset);  // 690
						CUtlBuffer::BGetTypeBin<char>(
									char& dest);  // 672
						CUtlBuffer::BGetTypeBin<char>(
									char& dest);  // 1040
						CUtlBuffer::BGetChar(
							char* pOutChar);  // 937
						CUtlBuffer::GetChar(); // 441
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 504
					}
					Bitmap_t::Width(); // 435
					Bitmap_t::Width(); // 509
					Bitmap_t::GetBits(); // 509
				}
				Bitmap_t::Height(); // 433
			}
			Bitmap_t::GetBits(); // 425
		}
	}
	Min<int>(const int& val1,
		const int& val2);  // 392
	Bitmap_t::Width(); // 400
} /* size: 1316, variables: 4, inline expansions: 2 (33 bytes) */

// <04739D34> bitmap/psd.cpp:532
void PSDReadCompressedChannels(CUtlBuffer& buf, int nChannelsCount, int nAlphaChannelIndex, int nTransparencyChannelIndex, PSDMode_t mode, PSDPalette_t& palette, Bitmap_t& bitmap)
{
} /* size: 0 */

// <0473799C> bitmap/psd.cpp:744
// variables: 6
// function calls: 4
void PSDImageResources::FindElement(Resource eType)
{
	ResElement res; // 746
	const unsigned char* pvBuffer; // 749
	const unsigned char* pvBufferEnd; // 749
	{
		uint32 uSignature; // 758
		uint16 uType; // 763
		uint16 uLength; // 766
		WordSwapC<short unsigned int>(short unsigned int w); // 763
		WordSwapC<short unsigned int>(short unsigned int w); // 766
		DWordSwapC<unsigned int>(unsigned int dw); // 758
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 747
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <0473780C> bitmap/psd.cpp:785
// variables: 6
// function calls: 3
void PSDResFileInfo::FindElement(ResFileInfo eType)
{
	ResFileInfoElement res; // 787
	const unsigned char* pvBuffer; // 790
	const unsigned char* pvBufferEnd; // 790
	{
		uint16 uResLabel; // 798
		uint8 uType; // 801
		uint16 uLength; // 804
		WordSwapC<short unsigned int>(short unsigned int w); // 798
		WordSwapC<short unsigned int>(short unsigned int w); // 804
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 788
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

