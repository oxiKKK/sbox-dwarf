
//
// tier0/blockcompress.cpp
//
//	referenced by: libtier0.so
//
//	functions: 3
//

// <0003E7E8> tier0/blockcompress.cpp:20
inline uint32 BitMix32(uint32 a)
{
} /* size: 0 */

// <0003E373> tier0/blockcompress.cpp:33
// variables: 25
// function calls: 3
void FastCompress(const uint8* pSrcBuf, uint32 nSrcBufSize, uint8* pDstBuf, uint32 nDstBufSize)
{
	uint8* pDst; // 46
	uint8* pBitBufDst; // 60
	uint8* pDstEnd; // 63
	uint nBitBuf; // 65
	uint nBitBufRemaining; // 66
	const uint8* pSrc; // 68
	const uint8* pSrcEnd; // 69
	const uint8* phraseHash; // 71
	const char   __FUNCTION__; // 9815
	uint32 nBytesWritten; // 159
	{
		const uint  nMaxMatchLen; // 74
		uint c0; // 76
		uint nMatchLen; // 77
		uint nMatchDist; // 78
		{
			uint c1; // 82
			uint c2; // 83
			uint32 nHashIndex; // 85
			const uint8* pPossibleMatch; // 86
			BitMix32(uint32 a); // 85
		}
		{
			uint nMatchCode; // 116
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 113
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 117
			}
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 139
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 79
		V_memcpy(void* dest,
			const void* src,
			uint count);  // 142
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 156
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 160
	}
} /* size: 0, variables: 10 */

// <0003E11A> tier0/blockcompress.cpp:166
// variables: 15
// function calls: 2
void FastDecompress(const uint8* pSrcBuf, uint32 nSrcBufSize, uint8* pDstBuf, uint32 nDstBufSize)
{
	uint nHeaderBits; // 171
	uint nDecompLen; // 172
	uint16 nBitBuf; // 187
	uint nBitBufRemaining; // 188
	const uint8* pSrc; // 190
	const uint8* pSrcEnd; // 191
	uint8* pDst; // 193
	uint8* pDstEnd; // 194
	{
		uint nMatchCode; // 212
		uint nMatchLen; // 213
		uint nMatchDist; // 214
		const uint8* pMatchSrc; // 216
		{
			uint c; // 223
			{
				uint i; // 224
			}
		}
		{
			uint i; // 232
		}
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 180
} /* size: 491, variables: 8, inline expansions: 2 (23 bytes) */

