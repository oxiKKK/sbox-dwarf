
//
// bitmap/bitmap.cpp
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 58
//

// <046634F5> bitmap/bitmap.cpp:24
// variables: 4
// function calls: 19
bool IsPFMFile(CUtlBuffer& buf)
{
	int nGet; // 26
	char c0; // 27
	char c1; // 28
	char c2; // 29
	CUtlBuffer::TellGet(); // 26
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
	CUtlBuffer::GetChar(); // 27
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
	CUtlBuffer::GetChar(); // 28
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
	CUtlBuffer::GetChar(); // 29
} /* size: 0, variables: 4, inline expansions: 19 (0 bytes) */

// <04663334> bitmap/bitmap.cpp:39
// variables: 5
// function calls: 4
bool IsEXRFile(CUtlBuffer& buf)
{
	size_t nSize; // 41
	const uint8* pBuf; // 42
	EXRVersion version; // 44
	EXRHeader header; // 50
	bool bSuccess; // 52
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 42
	CUtlMemory<unsigned char, int>::AllocSize(); // 378
	CUtlBuffer::AllocSize(); // 41
} /* size: 0, variables: 5, inline expansions: 4 (0 bytes) */

// <04663122> bitmap/bitmap.cpp:61
// variables: 2
// function calls: 7
int ReadIntFromUtlBuffer(CUtlBuffer& buf)
{
	int val; // 63
	int c; // 64
	CUtlBuffer::IsValid(); // 65
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
	CUtlBuffer::GetChar(); // 67
} /* size: 0, variables: 2, inline expansions: 7 (0 bytes) */

// <04663105> bitmap/bitmap.cpp:81
inline bool IsWhitespace(char c)
{
} /* size: 0 */

// <046630DE> bitmap/bitmap.cpp:86
// variable: 1
void EatWhiteSpace(CUtlBuffer& buf)
{
	{
		char c; // 90
	}
} /* size: 0 */

// <04662480> bitmap/bitmap.cpp:104
// variables: 7
// function calls: 41
bool PFMGetInfo_AndAdvanceToTextureBits(CUtlBuffer& pfmBuffer, int& nWidth, int& nHeight, ImageFormat& imageFormat)
{
	const char   __FUNCTION__; // 51445
	char c; // 112
	int nScale; // 141
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 109
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 123
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 129
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
	CUtlBuffer::GetChar(); // 107
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
	CUtlBuffer::GetChar(); // 112
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
	CUtlBuffer::GetChar(); // 127
	CUtlBuffer::IsValid(); // 88
	{
		char c; // 90
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
		CUtlBuffer::GetChar(); // 90
		IsWhitespace(char c); // 91
	}
	EatWhiteSpace(CUtlBuffer& buf); // 133
	CUtlBuffer::IsValid(); // 137
	CUtlBuffer::IsValid(); // 144
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
	CUtlBuffer::GetChar(); // 144
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
	CUtlBuffer::GetChar(); // 137
} /* size: 0, variables: 3, inline expansions: 34 (0 bytes) */

// <00E5ABF3> bitmap/bitmap.cpp:104
// variables: 7
// function calls: 41
bool PFMGetInfo_AndAdvanceToTextureBits(CUtlBuffer& pfmBuffer, int& nWidth, int& nHeight, ImageFormat& imageFormat)
{
	const char   __FUNCTION__; // 14107
	char c; // 112
	int nScale; // 141
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 109
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 123
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 129
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
	CUtlBuffer::GetChar(); // 107
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
	CUtlBuffer::GetChar(); // 112
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
	CUtlBuffer::GetChar(); // 127
	CUtlBuffer::IsValid(); // 88
	{
		char c; // 90
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
		CUtlBuffer::GetChar(); // 90
		IsWhitespace(char c); // 91
	}
	EatWhiteSpace(CUtlBuffer& buf); // 133
	CUtlBuffer::IsValid(); // 137
	CUtlBuffer::IsValid(); // 144
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
	CUtlBuffer::GetChar(); // 144
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
	CUtlBuffer::GetChar(); // 137
} /* size: 0, variables: 3, inline expansions: 34 (951 bytes) */

// <0050C680> bitmap/bitmap.cpp:104
// variables: 7
// function calls: 41
bool PFMGetInfo_AndAdvanceToTextureBits(CUtlBuffer& pfmBuffer, int& nWidth, int& nHeight, ImageFormat& imageFormat)
{
	const char   __FUNCTION__; // 56533
	char c; // 112
	int nScale; // 141
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 109
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 123
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 129
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
	CUtlBuffer::GetChar(); // 107
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
	CUtlBuffer::GetChar(); // 112
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
	CUtlBuffer::GetChar(); // 127
	CUtlBuffer::IsValid(); // 88
	{
		char c; // 90
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
		CUtlBuffer::GetChar(); // 90
		IsWhitespace(char c); // 91
	}
	EatWhiteSpace(CUtlBuffer& buf); // 133
	CUtlBuffer::IsValid(); // 137
	CUtlBuffer::IsValid(); // 144
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
	CUtlBuffer::GetChar(); // 144
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
	CUtlBuffer::GetChar(); // 137
} /* size: 0, variables: 3, inline expansions: 34 (951 bytes) */

// <04662185> bitmap/bitmap.cpp:162
// variables: 9
// function calls: 3
bool PFMReadFileRGBA32323232F(CUtlBuffer& fileBuffer, Bitmap_t& bitmap, float pfmScale)
{
	int nWidth; // 164
	int nHeight; // 164
	ImageFormat imageFormat; // 165
	const char   __FUNCTION__; // 29613
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 167
	}
	{
		int y; // 173
		{
			float* pOut; // 179
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 175
			}
			{
				int x; // 181
			}
			CUtlBuffer::IsValid(); // 175
			Bitmap_t::GetPixel(
				int x,
				int y);  // 179
			CUtlBuffer::IsValid(); // 176
		}
	}
} /* size: 0, variables: 4 */

// <00E5A8F8> bitmap/bitmap.cpp:162
// variables: 9
// function calls: 3
bool PFMReadFileRGBA32323232F(CUtlBuffer& fileBuffer, Bitmap_t& bitmap, float pfmScale)
{
	int nWidth; // 164
	int nHeight; // 164
	ImageFormat imageFormat; // 165
	const char   __FUNCTION__; // 57811
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 167
	}
	{
		int y; // 173
		{
			float* pOut; // 179
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 175
			}
			{
				int x; // 181
			}
			CUtlBuffer::IsValid(); // 175
			Bitmap_t::GetPixel(
				int x,
				int y);  // 179
			CUtlBuffer::IsValid(); // 176
		}
	}
} /* size: 0, variables: 4 */

// <0050C385> bitmap/bitmap.cpp:162
// variables: 9
// function calls: 3
bool PFMReadFileRGBA32323232F(CUtlBuffer& fileBuffer, Bitmap_t& bitmap, float pfmScale)
{
	int nWidth; // 164
	int nHeight; // 164
	ImageFormat imageFormat; // 165
	const char   __FUNCTION__; // 34701
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 167
	}
	{
		int y; // 173
		{
			float* pOut; // 179
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 175
			}
			{
				int x; // 181
			}
			CUtlBuffer::IsValid(); // 175
			Bitmap_t::GetPixel(
				int x,
				int y);  // 179
			CUtlBuffer::IsValid(); // 176
		}
	}
} /* size: 0, variables: 4 */

// <04661EBE> bitmap/bitmap.cpp:204
// variables: 9
// function calls: 3
bool PFMReadFileRGB323232F(CUtlBuffer& fileBuffer, Bitmap_t& bitmap, float pfmScale)
{
	int nWidth; // 207
	int nHeight; // 207
	ImageFormat imageFormat; // 208
	const char   __FUNCTION__; // 47516
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 210
	}
	{
		int y; // 216
		{
			float* pRow; // 224
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 218
			}
			{
				int x; // 227
			}
			CUtlBuffer::IsValid(); // 218
			Bitmap_t::GetPixel(
				int x,
				int y);  // 224
			CUtlBuffer::IsValid(); // 219
		}
	}
} /* size: 0, variables: 4 */

// <00E5A631> bitmap/bitmap.cpp:204
// variables: 9
// function calls: 3
bool PFMReadFileRGB323232F(CUtlBuffer& fileBuffer, Bitmap_t& bitmap, float pfmScale)
{
	int nWidth; // 207
	int nHeight; // 207
	ImageFormat imageFormat; // 208
	const char   __FUNCTION__; // 10178
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 210
	}
	{
		int y; // 216
		{
			float* pRow; // 224
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 218
			}
			{
				int x; // 227
			}
			CUtlBuffer::IsValid(); // 218
			Bitmap_t::GetPixel(
				int x,
				int y);  // 224
			CUtlBuffer::IsValid(); // 219
		}
	}
} /* size: 0, variables: 4 */

// <04661B9E> bitmap/bitmap.cpp:240
// variables: 12
// function calls: 3
bool PFMReadFileR32F(CUtlBuffer& fileBuffer, Bitmap_t& bitmap, float pfmScale)
{
	int nWidth; // 243
	int nHeight; // 243
	ImageFormat fileImageFormat; // 244
	const char   __FUNCTION__; // 43587
	float flMin; // 251
	float flMax; // 252
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 246
	}
	{
		int y; // 255
		{
			float* pRow; // 263
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 257
			}
			{
				int x; // 265
				{
					float flDummy; // 273
				}
			}
			CUtlBuffer::IsValid(); // 257
			Bitmap_t::GetPixel(
				int x,
				int y);  // 263
			CUtlBuffer::IsValid(); // 258
		}
	}
} /* size: 0, variables: 6 */

// <00E5A311> bitmap/bitmap.cpp:240
// variables: 12
// function calls: 3
bool PFMReadFileR32F(CUtlBuffer& fileBuffer, Bitmap_t& bitmap, float pfmScale)
{
	int nWidth; // 243
	int nHeight; // 243
	ImageFormat fileImageFormat; // 244
	const char   __FUNCTION__; // 6249
	float flMin; // 251
	float flMax; // 252
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 246
	}
	{
		int y; // 255
		{
			float* pRow; // 263
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 257
			}
			{
				int x; // 265
				{
					float flDummy; // 273
				}
			}
			CUtlBuffer::IsValid(); // 257
			Bitmap_t::GetPixel(
				int x,
				int y);  // 263
			CUtlBuffer::IsValid(); // 258
		}
	}
} /* size: 0, variables: 6 */

// <0050BD9E> bitmap/bitmap.cpp:240
// variables: 12
// function calls: 3
bool PFMReadFileR32F(CUtlBuffer& fileBuffer, Bitmap_t& bitmap, float pfmScale)
{
	int nWidth; // 243
	int nHeight; // 243
	ImageFormat fileImageFormat; // 244
	const char   __FUNCTION__; // 48675
	float flMin; // 251
	float flMax; // 252
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 246
	}
	{
		int y; // 255
		{
			float* pRow; // 263
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 257
			}
			{
				int x; // 265
				{
					float flDummy; // 273
				}
			}
			CUtlBuffer::IsValid(); // 257
			Bitmap_t::GetPixel(
				int x,
				int y);  // 263
			CUtlBuffer::IsValid(); // 258
		}
	}
} /* size: 0, variables: 6 */

// <04661833> bitmap/bitmap.cpp:290
// variables: 9
// function calls: 4
bool PFMReadFile(CUtlBuffer& buf, Bitmap_t* pBitmap, bool bLoadHeaderDataOnly)
{
	int nWidth; // 293
	int nHeight; // 293
	ImageFormat fmt; // 294
	int nRowBytes; // 306
	const char   __FUNCTION__; // 46005
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 307
	}
	{
		int y; // 310
		{
			void* pDest; // 316
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 312
			}
			CUtlBuffer::IsValid(); // 312
			CUtlBuffer::IsValid(); // 313
			Bitmap_t::GetPixel(
				int x,
				int y);  // 316
		}
	}
	Bitmap_t::Stride(); // 307
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <00E59FA6> bitmap/bitmap.cpp:290
// variables: 9
// function calls: 4
bool PFMReadFile(CUtlBuffer& buf, Bitmap_t* pBitmap, bool bLoadHeaderDataOnly)
{
	int nWidth; // 293
	int nHeight; // 293
	ImageFormat fmt; // 294
	int nRowBytes; // 306
	const char   __FUNCTION__; // 8667
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 307
	}
	{
		int y; // 310
		{
			void* pDest; // 316
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 312
			}
			CUtlBuffer::IsValid(); // 312
			CUtlBuffer::IsValid(); // 313
			Bitmap_t::GetPixel(
				int x,
				int y);  // 316
		}
	}
	Bitmap_t::Stride(); // 307
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <0050BA33> bitmap/bitmap.cpp:290
// variables: 9
// function calls: 4
bool PFMReadFile(CUtlBuffer& buf, Bitmap_t* pBitmap, bool bLoadHeaderDataOnly)
{
	int nWidth; // 293
	int nHeight; // 293
	ImageFormat fmt; // 294
	int nRowBytes; // 306
	const char   __FUNCTION__; // 51093
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 307
	}
	{
		int y; // 310
		{
			void* pDest; // 316
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 312
			}
			CUtlBuffer::IsValid(); // 312
			CUtlBuffer::IsValid(); // 313
			Bitmap_t::GetPixel(
				int x,
				int y);  // 316
		}
	}
	Bitmap_t::Stride(); // 307
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <0466124D> bitmap/bitmap.cpp:327
// variables: 16
// function calls: 9
bool EXRReadFile(CUtlBuffer& buf, Bitmap_t* pBitmap, bool bLoadHeaderDataOnly)
{
	size_t nSize; // 329
	const uint8* pBuf; // 330
	const char* pErrorMsg; // 331
	EXRVersion version; // 333
	EXRHeader header; // 339
	EXRImage exrImg; // 356
	int idxR; // 366
	int idxG; // 367
	int idxB; // 368
	int idxA; // 369
	{
		int i; // 348
	}
	{
		int c; // 370
		V_strcmp(const char* s1,
			const char* s2);  // 372
		V_strcmp(const char* s1,
			const char* s2);  // 376
		V_strcmp(const char* s1,
			const char* s2);  // 380
		V_strcmp(const char* s1,
			const char* s2);  // 384
	}
	{
		int nY; // 413
		{
			int nX; // 415
			{
				const int  i; // 417
				float* pPixel; // 418
				Bitmap_t::GetPixel(
					int x,
					int y);  // 418
			}
		}
	}
	CUtlMemory<unsigned char, int>::AllocSize(); // 378
	CUtlBuffer::AllocSize(); // 329
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 330
} /* size: 0, variables: 10, inline expansions: 4 (0 bytes) */

// <0466122C> bitmap/bitmap.cpp:435
ImageFormat TGAComputeImageFormat(const TGAHeader_t& header)
{
} /* size: 0 */

// <04661116> bitmap/bitmap.cpp:483
// variables: 14
void DecompressImage(CUtlBuffer& buf, const TGAHeader_t& header, Bitmap_t* pBitmap)
{
	int nBytesPerPixel; // 485
	int nSize; // 486
	uint8* pDst; // 487
	uint8* pLast; // 488
	uint8 pRepeat; // 489
	const char   __FUNCTION__; // 43587
	{
		uint8 nPacketHeader; // 494
		int nPixelsInPacket; // 495
		int nBytesInPacket; // 496
		bool bIsRunLengthPacket; // 497
		{
			int i; // 507
		}
		{
			int i; // 512
			{
				int j; // 514
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 529
	}
} /* size: 0, variables: 6 */

// <00E59889> bitmap/bitmap.cpp:483
// variables: 14
void DecompressImage(CUtlBuffer& buf, const TGAHeader_t& header, Bitmap_t* pBitmap)
{
	int nBytesPerPixel; // 485
	int nSize; // 486
	uint8* pDst; // 487
	uint8* pLast; // 488
	uint8 pRepeat; // 489
	const char   __FUNCTION__; // 6249
	{
		uint8 nPacketHeader; // 494
		int nPixelsInPacket; // 495
		int nBytesInPacket; // 496
		bool bIsRunLengthPacket; // 497
		{
			int i; // 507
		}
		{
			int i; // 512
			{
				int j; // 514
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 529
	}
} /* size: 0, variables: 6 */

// <0050B316> bitmap/bitmap.cpp:483
// variables: 14
void DecompressImage(CUtlBuffer& buf, const TGAHeader_t& header, Bitmap_t* pBitmap)
{
	int nBytesPerPixel; // 485
	int nSize; // 486
	uint8* pDst; // 487
	uint8* pLast; // 488
	uint8 pRepeat; // 489
	const char   __FUNCTION__; // 48675
	{
		uint8 nPacketHeader; // 494
		int nPixelsInPacket; // 495
		int nBytesInPacket; // 496
		bool bIsRunLengthPacket; // 497
		{
			int i; // 507
		}
		{
			int i; // 512
			{
				int j; // 514
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 529
	}
} /* size: 0, variables: 6 */

// <04660E83> bitmap/bitmap.cpp:536
// variables: 8
// function calls: 7
void DepalettizeImage(Bitmap_t* pBitmap, const TGAHeader_t& header, const uint8* pColorMap)
{
	int nPixelSize; // 539
	uint8* pDst; // 540
	uint8* pSrc; // 541
	const char   __FUNCTION__; // 43309
	{
		const uint8* pEntry; // 555
	}
	{
		const uint8* pEntry; // 564
	}
	{
		const uint8* pEntry; // 574
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 583
	}
	Bitmap_t::GetBits(); // 540
	Bitmap_t::Width(); // 540
	Bitmap_t::Height(); // 540
	Bitmap_t::GetBits(); // 553
	Bitmap_t::GetBits(); // 572
	Bitmap_t::GetBits(); // 545
	Bitmap_t::GetBits(); // 562
} /* size: 0, variables: 4, inline expansions: 7 (0 bytes) */

// <00E595F6> bitmap/bitmap.cpp:536
// variables: 8
// function calls: 7
void DepalettizeImage(Bitmap_t* pBitmap, const TGAHeader_t& header, const uint8* pColorMap)
{
	int nPixelSize; // 539
	uint8* pDst; // 540
	uint8* pSrc; // 541
	const char   __FUNCTION__; // 5971
	{
		const uint8* pEntry; // 555
	}
	{
		const uint8* pEntry; // 564
	}
	{
		const uint8* pEntry; // 574
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 583
	}
	Bitmap_t::GetBits(); // 540
	Bitmap_t::Width(); // 540
	Bitmap_t::Height(); // 540
	Bitmap_t::GetBits(); // 553
	Bitmap_t::GetBits(); // 572
	Bitmap_t::GetBits(); // 545
	Bitmap_t::GetBits(); // 562
} /* size: 0, variables: 4, inline expansions: 7 (4 bytes) */

// <0050B083> bitmap/bitmap.cpp:536
// variables: 8
// function calls: 7
void DepalettizeImage(Bitmap_t* pBitmap, const TGAHeader_t& header, const uint8* pColorMap)
{
	int nPixelSize; // 539
	uint8* pDst; // 540
	uint8* pSrc; // 541
	const char   __FUNCTION__; // 48397
	{
		const uint8* pEntry; // 555
	}
	{
		const uint8* pEntry; // 564
	}
	{
		const uint8* pEntry; // 574
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 583
	}
	Bitmap_t::GetBits(); // 540
	Bitmap_t::Width(); // 540
	Bitmap_t::Height(); // 540
	Bitmap_t::GetBits(); // 553
	Bitmap_t::GetBits(); // 572
	Bitmap_t::GetBits(); // 545
	Bitmap_t::GetBits(); // 562
} /* size: 0, variables: 4, inline expansions: 7 (4 bytes) */

// <04660288> bitmap/bitmap.cpp:592
// variables: 12
// function calls: 35
bool TGAReadFile(CUtlBuffer& buf, Bitmap_t* pBitmap, bool bLoadHeaderDataOnly)
{
	TGAHeader_t header; // 595
	ImageFormat dstFormat; // 613
	uint8 pColorMap; // 644
	{
		int nColormapByteCount; // 648
		CUtlBuffer::IsValid(); // 654
	}
	{
		int nBytesPerPixel; // 667
		Bitmap_t::GetBits(); // 668
		CUtlBuffer::IsValid(); // 669
	}
	CUtlBuffer::IsValid(); // 600
	TGAComputeImageFormat(const TGAHeader_t& header); // 613
	{
		uint8 nPacketHeader; // 494
		int nPixelsInPacket; // 495
		int nBytesInPacket; // 496
		bool bIsRunLengthPacket; // 497
		{
			int i; // 512
			{
				int j; // 514
			}
		}
		{
			int i; // 507
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
			CUtlBuffer::IsText(); // 1047
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 690
			CUtlBuffer::BGetTypeBin<unsigned char>(
							unsigned char& dest);  // 672
			CUtlBuffer::BGetTypeBin<unsigned char>(
							unsigned char& dest);  // 1049
			CUtlBuffer::BGetUnsignedChar(
					unsigned char* pOutUChar);  // 944
			CUtlBuffer::GetUnsignedChar(); // 509
		}
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
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
		CUtlBuffer::IsText(); // 1047
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 494
	}
	{
	}
	DecompressImage(CUtlBuffer& buf,
			const TGAHeader_t& header,
			Bitmap_t* pBitmap);  // 663
	CUtlBuffer::IsValid(); // 631
	Bitmap_t::Format(); // 683
	Bitmap_t::Height(); // 683
	Bitmap_t::Width(); // 683
	Bitmap_t::GetBits(); // 683
} /* size: 0, variables: 3, inline expansions: 8 (0 bytes) */

// <0465F938> bitmap/bitmap.cpp:693
// variables: 8
// function calls: 31
BitmapFileType_t LoadBitmapFile(CUtlBuffer& buf, Bitmap_t* pBitmap)
{
	{
		int nFileSize; // 731
		int nPNGWidth; // 739
		int nPNGHeight; // 740
		CUtlBuffer bufOutput; // 741
		CUtlBuffer::TellPut(); // 731
		CUtlBuffer::IsEntireDataInMemory(); // 732
		CUtlBuffer::TellMaxPut(); // 735
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 742
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 656
		CUtlMemory<unsigned char, int>::DetachMemory(); // 668
		CUtlMemory<unsigned char, int>::Detach(); // 1567
		CUtlBuffer::Clear(); // 1568
		CUtlBuffer::Detach(); // 747
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
		CUtlBuffer::~CUtlBuffer(); // 749
	}
	{
		int nFileSize; // 754
		int nJpegWidth; // 762
		int nJpegHeight; // 763
		CUtlBuffer bufOutput; // 764
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
		CUtlBuffer::~CUtlBuffer(); // 772
		CUtlBuffer::TellPut(); // 754
		CUtlBuffer::IsEntireDataInMemory(); // 755
		CUtlBuffer::TellMaxPut(); // 758
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 765
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 656
		CUtlMemory<unsigned char, int>::DetachMemory(); // 668
		CUtlMemory<unsigned char, int>::Detach(); // 1567
		CUtlBuffer::Clear(); // 1568
		CUtlBuffer::Detach(); // 770
	}
} /* size: 0 */

// <0465F824> bitmap/bitmap.cpp:787
BitmapFileType_t LoadBitmapHeader(CUtlBuffer& buf, Bitmap_t* pBitmap)
{
} /* size: 0 */

// <0466407F> bitmap/bitmap.cpp:892
// function call: 1
void Bitmap_t::IsValid()
{
	{
	}
	{
	}
	Bitmap_t::IsValid(); // 892
} /* size: 0, inline expansions: 1 (37 bytes) */

// <0465F796> bitmap/bitmap.cpp:892
// variables: 3
void Bitmap_t::IsValid()
{
	const char   __FUNCTION__; // 36923
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 1 */

// <00E57F09> bitmap/bitmap.cpp:892
// variables: 3
void Bitmap_t::IsValid()
{
	const char   __FUNCTION__; // 65121
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 1 */

// <00509996> bitmap/bitmap.cpp:892
// variables: 3
void Bitmap_t::IsValid()
{
	const char   __FUNCTION__; // 42011
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 896
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 897
	}
} /* size: 0, variables: 1 */

// <04664109> bitmap/bitmap.cpp:903
// function call: 1
void Bitmap_t::Clear()
{
	Bitmap_t::Reset(); // 909
} /* size: 79, inline expansions: 1 (26 bytes) */

// <0465F779> bitmap/bitmap.cpp:903
void Bitmap_t::Clear()
{
} /* size: 0 */

// <0465F547> bitmap/bitmap.cpp:912
// variables: 4
// function calls: 5
void Bitmap_t::Init(int xs, int ys, ImageFormat imageFormat, int nStride)
{
	const char   __FUNCTION__; // 33104
	int nPixSize; // 924
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 918
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 919
	}
	Bitmap_t::Reset(); // 909
	Bitmap_t::Clear(); // 920
	SizeInBytes(ImageFormat fmt); // 924
	Bitmap_t::Reset(); // 909
	Bitmap_t::Clear(); // 948
} /* size: 0, variables: 2, inline expansions: 5 (149 bytes) */

// <00E57CBA> bitmap/bitmap.cpp:912
// variables: 4
// function calls: 5
void Bitmap_t::Init(int xs, int ys, ImageFormat imageFormat, int nStride)
{
	const char   __FUNCTION__; // 61302
	int nPixSize; // 924
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 918
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 919
	}
	Bitmap_t::Reset(); // 909
	Bitmap_t::Clear(); // 920
	SizeInBytes(ImageFormat fmt); // 924
	Bitmap_t::Reset(); // 909
	Bitmap_t::Clear(); // 948
} /* size: 0, variables: 2, inline expansions: 5 (149 bytes) */

// <00509747> bitmap/bitmap.cpp:912
// variables: 4
// function calls: 5
void Bitmap_t::Init(int xs, int ys, ImageFormat imageFormat, int nStride)
{
	const char   __FUNCTION__; // 38192
	int nPixSize; // 924
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 918
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 919
	}
	Bitmap_t::Reset(); // 909
	Bitmap_t::Clear(); // 920
	SizeInBytes(ImageFormat fmt); // 924
	Bitmap_t::Reset(); // 909
	Bitmap_t::Clear(); // 948
} /* size: 0, variables: 2, inline expansions: 5 (149 bytes) */

// <0465F30B> bitmap/bitmap.cpp:965
// variables: 4
// function calls: 3
void Bitmap_t::SetBuffer(int nWidth, int nHeight, ImageFormat imageFormat, unsigned char* pBits, bool bAssumeOwnership, int nStride)
{
	const char   __FUNCTION__; // 36190
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 967
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 968
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 994
	}
	Bitmap_t::Reset(); // 909
	Bitmap_t::Clear(); // 971
	SizeInBytes(ImageFormat fmt); // 977
} /* size: 0, variables: 1, inline expansions: 3 (65 bytes) */

// <00E57A7E> bitmap/bitmap.cpp:965
// variables: 4
// function calls: 3
void Bitmap_t::SetBuffer(int nWidth, int nHeight, ImageFormat imageFormat, unsigned char* pBits, bool bAssumeOwnership, int nStride)
{
	const char   __FUNCTION__; // 64388
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 967
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 968
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 994
	}
	Bitmap_t::Reset(); // 909
	Bitmap_t::Clear(); // 971
	SizeInBytes(ImageFormat fmt); // 977
} /* size: 0, variables: 1, inline expansions: 3 (65 bytes) */

// <0050950B> bitmap/bitmap.cpp:965
// variables: 4
// function calls: 3
void Bitmap_t::SetBuffer(int nWidth, int nHeight, ImageFormat imageFormat, unsigned char* pBits, bool bAssumeOwnership, int nStride)
{
	const char   __FUNCTION__; // 41278
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 967
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 968
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 994
	}
	Bitmap_t::Reset(); // 909
	Bitmap_t::Clear(); // 971
	SizeInBytes(ImageFormat fmt); // 977
} /* size: 0, variables: 1, inline expansions: 3 (65 bytes) */

// <0465EC83> bitmap/bitmap.cpp:997
// variables: 6
// function calls: 14
void Bitmap_t::GetColor(int x, int y)
{
	const char   __FUNCTION__; // 33940
	byte* ptr; // 1004
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 999
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1028
	}
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1025
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1010
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1013
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 46
	Color::Color(
		int _r,
		int _g,
		int _b);  // 1016
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 46
	Color::Color(
		int _r,
		int _g,
		int _b);  // 1019
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1022
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1029
} /* size: 0, variables: 2, inline expansions: 14 (0 bytes) */

// <00E573F6> bitmap/bitmap.cpp:997
// variables: 6
// function calls: 14
void Bitmap_t::GetColor(int x, int y)
{
	const char   __FUNCTION__; // 62138
	byte* ptr; // 1004
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 999
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1028
	}
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1025
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1010
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1013
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 46
	Color::Color(
		int _r,
		int _g,
		int _b);  // 1016
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 46
	Color::Color(
		int _r,
		int _g,
		int _b);  // 1019
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1022
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1029
} /* size: 0, variables: 2, inline expansions: 14 (78 bytes) */

// <00508E83> bitmap/bitmap.cpp:997
// variables: 6
// function calls: 14
void Bitmap_t::GetColor(int x, int y)
{
	const char   __FUNCTION__; // 39028
	byte* ptr; // 1004
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 999
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1000
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1028
	}
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1025
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1010
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1013
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 46
	Color::Color(
		int _r,
		int _g,
		int _b);  // 1016
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 46
	Color::Color(
		int _r,
		int _g,
		int _b);  // 1019
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1022
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1029
} /* size: 0, variables: 2, inline expansions: 14 (78 bytes) */

// <0465EAC6> bitmap/bitmap.cpp:1033
// variables: 6
void Bitmap_t::SetColor(int x, int y, Color c)
{
	const char   __FUNCTION__; // 33940
	byte* ptr; // 1040
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1035
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1036
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1037
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1086
	}
} /* size: 0, variables: 2 */

// <00E57239> bitmap/bitmap.cpp:1033
// variables: 6
void Bitmap_t::SetColor(int x, int y, Color c)
{
	const char   __FUNCTION__; // 62138
	byte* ptr; // 1040
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1035
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1036
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1037
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1086
	}
} /* size: 0, variables: 2 */

// <00508CC6> bitmap/bitmap.cpp:1033
// variables: 6
void Bitmap_t::SetColor(int x, int y, Color c)
{
	const char   __FUNCTION__; // 39028
	byte* ptr; // 1040
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1035
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1036
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1037
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1086
	}
} /* size: 0, variables: 2 */

// <0465E939> bitmap/bitmap.cpp:1091
// variables: 4
// function calls: 2
void Bitmap_t::MakeLogicalCopyOf(Bitmap_t& src, bool bTransferBufferOwnership)
{
	const char   __FUNCTION__; // 33501
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1108
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1124
	}
	Bitmap_t::Reset(); // 909
	Bitmap_t::Clear(); // 1098
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00E570AC> bitmap/bitmap.cpp:1091
// variables: 4
// function calls: 2
void Bitmap_t::MakeLogicalCopyOf(Bitmap_t& src, bool bTransferBufferOwnership)
{
	const char   __FUNCTION__; // 61699
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1108
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1124
	}
	Bitmap_t::Reset(); // 909
	Bitmap_t::Clear(); // 1098
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00508B39> bitmap/bitmap.cpp:1091
// variables: 4
// function calls: 2
void Bitmap_t::MakeLogicalCopyOf(Bitmap_t& src, bool bTransferBufferOwnership)
{
	const char   __FUNCTION__; // 38589
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1108
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1124
	}
	Bitmap_t::Reset(); // 909
	Bitmap_t::Clear(); // 1098
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0465E3B1> bitmap/bitmap.cpp:1132
// variables: 10
// function calls: 10
void Bitmap_t::Crop(int x0, int y0, int nWidth, int nHeight, const Bitmap_t* pImgSource)
{
	Bitmap_t temp; // 1135
	const char   __FUNCTION__; // 33104
	int nRowSize; // 1166
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1145
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1150
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1151
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1152
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1153
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1161
	}
	{
		int y; // 1167
		Bitmap_t::GetPixel(
			int x,
			int y);  // 1169
		Bitmap_t::GetPixel(
			int x,
			int y);  // 1169
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1169
	}
	Bitmap_t::Reset(); // 31
	Bitmap_t::Bitmap_t(); // 1135
	Bitmap_t::Width(); // 1152
	Bitmap_t::Height(); // 1153
	Bitmap_t::Format(); // 1156
	Bitmap_t::Clear(); // 32
	Bitmap_t::~Bitmap_t(); // 1171
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <00E56B24> bitmap/bitmap.cpp:1132
// variables: 10
// function calls: 10
void Bitmap_t::Crop(int x0, int y0, int nWidth, int nHeight, const Bitmap_t* pImgSource)
{
	Bitmap_t temp; // 1135
	const char   __FUNCTION__; // 61302
	int nRowSize; // 1166
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1145
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1150
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1151
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1152
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1153
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1161
	}
	{
		int y; // 1167
		Bitmap_t::GetPixel(
			int x,
			int y);  // 1169
		Bitmap_t::GetPixel(
			int x,
			int y);  // 1169
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1169
	}
	Bitmap_t::Reset(); // 31
	Bitmap_t::Bitmap_t(); // 1135
	Bitmap_t::Width(); // 1152
	Bitmap_t::Height(); // 1153
	Bitmap_t::Format(); // 1156
	Bitmap_t::Clear(); // 32
	Bitmap_t::~Bitmap_t(); // 1171
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <005085B1> bitmap/bitmap.cpp:1132
// variables: 10
// function calls: 10
void Bitmap_t::Crop(int x0, int y0, int nWidth, int nHeight, const Bitmap_t* pImgSource)
{
	Bitmap_t temp; // 1135
	const char   __FUNCTION__; // 38192
	int nRowSize; // 1166
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1145
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1150
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1151
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1152
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1153
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1161
	}
	{
		int y; // 1167
		Bitmap_t::GetPixel(
			int x,
			int y);  // 1169
		Bitmap_t::GetPixel(
			int x,
			int y);  // 1169
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1169
	}
	Bitmap_t::Reset(); // 31
	Bitmap_t::Bitmap_t(); // 1135
	Bitmap_t::Width(); // 1152
	Bitmap_t::Height(); // 1153
	Bitmap_t::Format(); // 1156
	Bitmap_t::Clear(); // 32
	Bitmap_t::~Bitmap_t(); // 1171
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <0465DEE7> bitmap/bitmap.cpp:1173
// variables: 10
// function calls: 6
void Bitmap_t::SetPixelData(const Bitmap_t& src, int nSrcX1, int nSrcY1, int nCopySizeX, int nCopySizeY, int nDestX1, int nDestY1)
{
	const char   __FUNCTION__; // 31688
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1178
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1183
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1190
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1191
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1192
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1193
	}
	{
		int y; // 1223
		{
			int x; // 1228
			{
				Color c; // 1230
			}
		}
	}
	Bitmap_t::Width(); // 1188
	Bitmap_t::Height(); // 1188
	Bitmap_t::Width(); // 1192
	Bitmap_t::Height(); // 1193
	Bitmap_t::Width(); // 1204
	Bitmap_t::Height(); // 1213
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <00E5665A> bitmap/bitmap.cpp:1173
// variables: 10
// function calls: 6
void Bitmap_t::SetPixelData(const Bitmap_t& src, int nSrcX1, int nSrcY1, int nCopySizeX, int nCopySizeY, int nDestX1, int nDestY1)
{
	const char   __FUNCTION__; // 59886
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1178
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1183
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1190
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1191
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1192
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1193
	}
	{
		int y; // 1223
		{
			int x; // 1228
			{
				Color c; // 1230
			}
		}
	}
	Bitmap_t::Width(); // 1188
	Bitmap_t::Height(); // 1188
	Bitmap_t::Width(); // 1192
	Bitmap_t::Height(); // 1193
	Bitmap_t::Width(); // 1204
	Bitmap_t::Height(); // 1213
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <005080E7> bitmap/bitmap.cpp:1173
// variables: 10
// function calls: 6
void Bitmap_t::SetPixelData(const Bitmap_t& src, int nSrcX1, int nSrcY1, int nCopySizeX, int nCopySizeY, int nDestX1, int nDestY1)
{
	const char   __FUNCTION__; // 36776
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1178
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1183
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1190
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1191
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1192
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1193
	}
	{
		int y; // 1223
		{
			int x; // 1228
			{
				Color c; // 1230
			}
		}
	}
	Bitmap_t::Width(); // 1188
	Bitmap_t::Height(); // 1188
	Bitmap_t::Width(); // 1192
	Bitmap_t::Height(); // 1193
	Bitmap_t::Width(); // 1204
	Bitmap_t::Height(); // 1213
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <0465DDDE> bitmap/bitmap.cpp:1236
// function calls: 2
void Bitmap_t::SetPixelData(const Bitmap_t& src, int nDestX1, int nDestY1)
{
	Bitmap_t::Height(); // 1238
	Bitmap_t::Width(); // 1238
} /* size: 0, inline expansions: 2 (0 bytes) */

