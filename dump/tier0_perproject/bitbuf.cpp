
//
// tier0_perproject/bitbuf.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//
//	functions: 74
//

// <044215C7> tier0_perproject/bitbuf.cpp:21
inline int BitForBitnum(int bitnum)
{
} /* size: 0 */

// <0442155E> tier0_perproject/bitbuf.cpp:26
void InternalBitBufErrorHandler(BitBufErrorType errorType, const char* pDebugName)
{
} /* size: 0 */

// <01BEAE0A> tier0_perproject/bitbuf.cpp:35
void SetBitBufErrorHandler(BitBufErrorHandler fn)
{
} /* size: 0 */

// <044214FC> tier0_perproject/bitbuf.cpp:44
void bf_write::bf_write()
{
} /* size: 0 */

// <04421449> tier0_perproject/bitbuf.cpp:49
void bf_write::bf_write(const char* pDebugName, void* pData, int nBytes, int nBits)
{
} /* size: 0 */

// <04421373> tier0_perproject/bitbuf.cpp:57
void bf_write::bf_write(void* pData, int nBytes, int nBits)
{
} /* size: 0 */

// <04422876> tier0_perproject/bitbuf.cpp:63
void bf_write::StartWriting(void* pData, int nBytes, int iStartBit, int nBits)
{
	{
	}
	{
	}
	{
	}
} /* size: 0 */

// <0442123B> tier0_perproject/bitbuf.cpp:63
// variables: 4
void bf_write::StartWriting(void* pData, int nBytes, int iStartBit, int nBits)
{
	const char   __FUNCTION__; // 25370
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 67
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 1 */

// <01BEAB1C> tier0_perproject/bitbuf.cpp:63
// variables: 4
void bf_write::StartWriting(void* pData, int nBytes, int iStartBit, int nBits)
{
	const char   __FUNCTION__; // 51952
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 67
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 1 */

// <0442120A> tier0_perproject/bitbuf.cpp:97
void bf_write::Reset()
{
} /* size: 0 */

// <044211CB> tier0_perproject/bitbuf.cpp:104
void bf_write::SetAssertOnOverflow(bool bAssert)
{
} /* size: 0 */

// <0442119A> tier0_perproject/bitbuf.cpp:109
void bf_write::GetAssertOnOverflow()
{
} /* size: 0 */

// <04421169> tier0_perproject/bitbuf.cpp:115
void bf_write::GetDebugName()
{
} /* size: 0 */

// <0442112A> tier0_perproject/bitbuf.cpp:121
void bf_write::SetDebugName(const char* pDebugName)
{
} /* size: 0 */

// <044210EB> tier0_perproject/bitbuf.cpp:127
void bf_write::SeekToBit(int bitPos)
{
} /* size: 0 */

// <0442290D> tier0_perproject/bitbuf.cpp:133
// variables: 3
// function calls: 7
void bf_write::WriteSBitLong(int data, int numbits)
{
	int nValue; // 136
	int nPreserveBits; // 137
	int nSignExtension; // 138
	{
	}
	{
	}
	bf_write::GetNumBitsLeft(); // 445
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 144
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <04421039> tier0_perproject/bitbuf.cpp:133
// variables: 5
void bf_write::WriteSBitLong(int data, int numbits)
{
	int nValue; // 136
	int nPreserveBits; // 137
	int nSignExtension; // 138
	const char   __FUNCTION__; // 41809
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 142
	}
} /* size: 0, variables: 4 */

// <01BEA91A> tier0_perproject/bitbuf.cpp:133
// variables: 5
void bf_write::WriteSBitLong(int data, int numbits)
{
	int nValue; // 136
	int nPreserveBits; // 137
	int nSignExtension; // 138
	const char   __FUNCTION__; // 2855
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 142
	}
} /* size: 0, variables: 4 */

// <04420B3A> tier0_perproject/bitbuf.cpp:147
// variable: 1
// function calls: 14
void bf_write::WriteVarInt32(uint32 data)
{
	{
		uint8* target; // 152
	}
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	bf_write::GetNumBitsLeft(); // 445
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 202
	bf_write::GetNumBitsLeft(); // 445
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 205
} /* size: 0, inline expansions: 14 (0 bytes) */

// <04420510> tier0_perproject/bitbuf.cpp:209
// variables: 7
// function calls: 14
void bf_write::WriteVarInt64(uint64 data)
{

size10: // 298

size9: // 299

size8: // 300

size7: // 301

size6: // 302

size5: // 303

size4: // 304

size3: // 305

size2: // 306

size1: // 307
	const char   __FUNCTION__; // 41809
	{
		uint8* target; // 214
		uint32 part0; // 218
		uint32 part1; // 219
		uint32 part2; // 220
		int size; // 222
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 296
		}
	}
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	bf_write::GetNumBitsLeft(); // 445
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 316
	bf_write::GetNumBitsLeft(); // 445
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 319
} /* size: 0, variables: 1, goto labels: 10, inline expansions: 14 (0 bytes) */

// <01BE9DF1> tier0_perproject/bitbuf.cpp:209
// variables: 7
// function calls: 14
void bf_write::WriteVarInt64(uint64 data)
{

size10: // 298

size9: // 299

size8: // 300

size7: // 301

size6: // 302

size5: // 303

size4: // 304

size3: // 305

size2: // 306

size1: // 307
	const char   __FUNCTION__; // 2855
	{
		uint8* target; // 214
		uint32 part0; // 218
		uint32 part1; // 219
		uint32 part2; // 220
		int size; // 222
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 296
		}
	}
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	bf_write::GetNumBitsLeft(); // 445
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 316
	bf_write::GetNumBitsLeft(); // 445
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 319
} /* size: 0, variables: 1, goto labels: 10, inline expansions: 14 (0 bytes) */

// <04420469> tier0_perproject/bitbuf.cpp:323
// function call: 1
void bf_write::WriteSignedVarInt32(int32 data)
{
	ZigZagEncode32(int32 n); // 325
} /* size: 0, inline expansions: 1 (0 bytes) */

// <044203C1> tier0_perproject/bitbuf.cpp:328
// function call: 1
void bf_write::WriteSignedVarInt64(int64 data)
{
	ZigZagEncode64(int64 n); // 330
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04422BFE> tier0_perproject/bitbuf.cpp:333
// variable: 1
void ByteSizeVarInt32(uint32 data)
{
	int size; // 335
} /* size: 0, variables: 1 */

// <04422C3B> tier0_perproject/bitbuf.cpp:343
// variable: 1
void ByteSizeVarInt64(uint64 data)
{
	int size; // 345
} /* size: 0, variables: 1 */

// <044202CF> tier0_perproject/bitbuf.cpp:353
// function calls: 2
void ByteSizeSignedVarInt32(int32 data)
{
	ZigZagEncode32(int32 n); // 355
	ByteSizeVarInt32(uint32 data); // 355
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04420231> tier0_perproject/bitbuf.cpp:358
// function calls: 2
void ByteSizeSignedVarInt64(int64 data)
{
	ZigZagEncode64(int64 n); // 360
	ByteSizeVarInt64(uint64 data); // 360
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0441FF25> tier0_perproject/bitbuf.cpp:363
// function calls: 7
void bf_write::WriteBitLong(unsigned int data, int numbits, bool bSigned)
{
	{
	}
	bf_write::GetNumBitsLeft(); // 445
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 368
} /* size: 0, inline expansions: 7 (0 bytes) */

// <04422C78> tier0_perproject/bitbuf.cpp:371
// variables: 2
// function call: 1
void bf_write::WriteBits(const void* pInData, int nBits)
{
	unsigned char* pIn; // 373
	int nBitsLeft; // 374
	{
	}
	bf_write::SetOverflowFlag(); // 379
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <04421C49> tier0_perproject/bitbuf.cpp:371
// variables: 10
// function calls: 34
void bf_write::WriteBits(const void* pInData, int nBits)
{
	unsigned char* pIn; // 373
	int nBitsLeft; // 374
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	bf_write::GetNumBitsLeft(); // 445
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 386
	{
		const uint32  iBitsRight; // 406
		const uint32  iBitsLeft; // 408
		const int  iBitsChanging; // 409
		unsigned int iDWord; // 410
		uint32 outWord; // 412
		{
		}
		LoadLittleDWord(const uint32* base,
				unsigned int dwordIndex);  // 412
		{
			uint32 curData; // 418
			StoreLittleDWord(uint32* base,
					unsigned int dwordIndex,
					uint32 dword);  // 422
		}
		StoreLittleDWord(uint32* base,
				unsigned int dwordIndex,
				uint32 dword);  // 432
		bf_write::GetNumBitsLeft(); // 445
		LoadLittleDWord(const uint32* base,
				unsigned int dwordIndex);  // 470
		LoadLittleDWord(const uint32* base,
				unsigned int dwordIndex);  // 471
		StoreLittleDWord(uint32* base,
				unsigned int dwordIndex,
				uint32 dword);  // 478
		StoreLittleDWord(uint32* base,
				unsigned int dwordIndex,
				uint32 dword);  // 479
		{
		}
		bf_write::SetOverflowFlag(); // 448
		bf_write::WriteUBitLong(
				unsigned int curData,
				int numbits,
				bool bCheckRange);  // 437
	}
	{
		int numbytes; // 396
		int numbits; // 397
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 399
	}
	{
	}
	bf_write::GetNumBitsLeft(); // 445
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 455
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	bf_write::GetNumBitsLeft(); // 445
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 447
	bf_write::IsOverflowed(); // 458
} /* size: 0, variables: 2, inline expansions: 22 (0 bytes) */

// <0441FE3A> tier0_perproject/bitbuf.cpp:371
// variables: 12
void bf_write::WriteBits(const void* pInData, int nBits)
{
	unsigned char* pIn; // 373
	int nBitsLeft; // 374
	const char   __FUNCTION__; // 22673
	{
		int numbytes; // 396
		int numbits; // 397
	}
	{
		const uint32  iBitsRight; // 406
		const uint32  iBitsLeft; // 408
		const int  iBitsChanging; // 409
		unsigned int iDWord; // 410
		uint32 outWord; // 412
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 407
		}
		{
			uint32 curData; // 418
		}
	}
} /* size: 0, variables: 3 */

// <01BE971B> tier0_perproject/bitbuf.cpp:371
// variables: 12
void bf_write::WriteBits(const void* pInData, int nBits)
{
	unsigned char* pIn; // 373
	int nBitsLeft; // 374
	const char   __FUNCTION__; // 49255
	{
		int numbytes; // 396
		int numbits; // 397
	}
	{
		const uint32  iBitsRight; // 406
		const uint32  iBitsLeft; // 408
		const int  iBitsChanging; // 409
		unsigned int iDWord; // 410
		uint32 outWord; // 412
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 407
		}
		{
			uint32 curData; // 418
		}
	}
} /* size: 0, variables: 3 */

// <0441F5F4> tier0_perproject/bitbuf.cpp:462
// function calls: 26
void bf_write::WriteBitsFromBuffer(bf_read* pIn, int nBits)
{
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 928
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 929
	bf_read::GetNumBitsLeft(); // 908
	{
	}
	bf_read::SetOverflowFlag(); // 911
	bf_read::ReadUBitLong(
			int numbits);  // 467
	bf_write::GetNumBitsLeft(); // 445
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 467
	bf_read::GetNumBitsLeft(); // 908
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 928
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 929
	{
	}
	bf_read::SetOverflowFlag(); // 911
	bf_read::ReadUBitLong(
			int numbits);  // 471
	{
	}
	bf_write::GetNumBitsLeft(); // 445
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 471
	bf_write::IsOverflowed(); // 472
	bf_read::IsOverflowed(); // 472
} /* size: 0, inline expansions: 26 (0 bytes) */

// <0441F29B> tier0_perproject/bitbuf.cpp:476
// variables: 3
// function calls: 9
void bf_write::WriteBitAngle(float fAngle, int numbits)
{
	int d; // 478
	unsigned int mask; // 479
	unsigned int shift; // 480
	GetBitForBitnum(int bitNum); // 23
	BitForBitnum(int bitnum); // 482
	{
	}
	bf_write::GetNumBitsLeft(); // 445
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 488
} /* size: 0, variables: 3, inline expansions: 9 (0 bytes) */

// <0441ED6C> tier0_perproject/bitbuf.cpp:491
// variables: 3
// function calls: 14
void bf_write::WriteLongLong(int64 val)
{
	uint32* pLongs; // 493
	const short int  endianIndex; // 496
	byte* idx; // 497
	bf_write::GetNumBitsLeft(); // 445
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 498
	bf_write::GetNumBitsLeft(); // 445
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 499
} /* size: 0, variables: 3, inline expansions: 14 (0 bytes) */

// <0441EC49> tier0_perproject/bitbuf.cpp:502
// function calls: 2
void bf_write::WriteFloat(float val)
{
	{
	}
	bf_write::SetOverflowFlag(); // 379
	bf_write::WriteBits(
			const void* pInData,
			int nBits);  // 507
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0441EB18> tier0_perproject/bitbuf.cpp:510
// function calls: 2
void bf_write::WriteBytes(const void* pBuf, int nBytes)
{
	{
	}
	bf_write::SetOverflowFlag(); // 379
	bf_write::WriteBits(
			const void* pInData,
			int nBits);  // 512
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0441E46E> tier0_perproject/bitbuf.cpp:515
// function calls: 19
void bf_write::WriteString(const char* pStr)
{
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	bf_write::GetNumBitsLeft(); // 445
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 144
	{
	}
	bf_write::WriteSBitLong(
			int data,
			int numbits);  // 259
	bf_write::WriteChar(
			int val);  // 521
	bf_write::IsOverflowed(); // 530
	bf_write::GetNumBitsLeft(); // 445
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 144
	bf_write::WriteSBitLong(
			int data,
			int numbits);  // 259
	bf_write::WriteChar(
			int val);  // 527
} /* size: 0, inline expansions: 19 (0 bytes) */

// <0441DDC4> tier0_perproject/bitbuf.cpp:533
// function calls: 19
void bf_write::WriteString(const wchar_t* pStr)
{
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	bf_write::GetNumBitsLeft(); // 445
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 144
	{
	}
	bf_write::WriteSBitLong(
			int data,
			int numbits);  // 261
	bf_write::WriteShort(
			int val);  // 539
	bf_write::IsOverflowed(); // 548
	bf_write::GetNumBitsLeft(); // 445
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 470
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 471
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 478
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 479
	{
	}
	bf_write::SetOverflowFlag(); // 448
	bf_write::WriteUBitLong(
			unsigned int curData,
			int numbits,
			bool bCheckRange);  // 144
	bf_write::WriteSBitLong(
			int data,
			int numbits);  // 261
	bf_write::WriteShort(
			int val);  // 545
} /* size: 0, inline expansions: 19 (0 bytes) */

// <0441DD97> tier0_perproject/bitbuf.cpp:555
void bf_read::bf_read()
{
} /* size: 0 */

// <0441DCAD> tier0_perproject/bitbuf.cpp:560
// function call: 1
void bf_read::bf_read(const void* pData, int nBytes, int nBits)
{
	{
	}
	bf_read::StartReading(
			const void* pData,
			int nBytes,
			int iStartBit,
			int nBits);  // 562
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0441DC69> tier0_perproject/bitbuf.cpp:560
void bf_read::bf_read(const void* pData, int nBytes, int nBits)
{
} /* size: 0 */

// <0441DB8F> tier0_perproject/bitbuf.cpp:565
// function call: 1
void bf_read::bf_read(const char* pDebugName, const void* pData, int nBytes, int nBits)
{
	{
	}
	bf_read::StartReading(
			const void* pData,
			int nBytes,
			int iStartBit,
			int nBits);  // 568
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0441DB3E> tier0_perproject/bitbuf.cpp:565
void bf_read::bf_read(const char* pDebugName, const void* pData, int nBytes, int nBits)
{
} /* size: 0 */

// <04422D4F> tier0_perproject/bitbuf.cpp:571
void bf_read::StartReading(const void* pData, int nBytes, int iStartBit, int nBits)
{
	{
	}
} /* size: 0 */

// <0441DAAE> tier0_perproject/bitbuf.cpp:571
// variables: 2
void bf_read::StartReading(const void* pData, int nBytes, int iStartBit, int nBits)
{
	const char   __FUNCTION__; // 25370
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 582
	}
} /* size: 0, variables: 1 */

// <01BE738F> tier0_perproject/bitbuf.cpp:571
// variables: 2
void bf_read::StartReading(const void* pData, int nBytes, int iStartBit, int nBits)
{
	const char   __FUNCTION__; // 51952
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 582
	}
} /* size: 0, variables: 1 */

// <0441DA7C> tier0_perproject/bitbuf.cpp:590
void bf_read::Reset()
{
} /* size: 0 */

// <0441DA3B> tier0_perproject/bitbuf.cpp:596
void bf_read::SetAssertOnOverflow(bool bAssert)
{
} /* size: 0 */

// <0441DA09> tier0_perproject/bitbuf.cpp:601
void bf_read::GetAssertOnOverflow()
{
} /* size: 0 */

// <0441D9C8> tier0_perproject/bitbuf.cpp:606
void bf_read::SetDebugName(const char* pName)
{
} /* size: 0 */

// <04422DBC> tier0_perproject/bitbuf.cpp:611
void bf_read::SetOverflowFlag()
{
	{
	}
} /* size: 0 */

// <0441D94A> tier0_perproject/bitbuf.cpp:611
// variables: 2
void bf_read::SetOverflowFlag()
{
	const char   __FUNCTION__; // 29151
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 615
	}
} /* size: 0, variables: 1 */

// <01BE722B> tier0_perproject/bitbuf.cpp:611
// variables: 2
void bf_read::SetOverflowFlag()
{
	const char   __FUNCTION__; // 55733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 615
	}
} /* size: 0, variables: 1 */

// <0441D890> tier0_perproject/bitbuf.cpp:620
// variables: 3
// function call: 1
void bf_read::CheckReadUBitLong(int numbits)
{
	int i; // 623
	int nBitValue; // 623
	unsigned int r; // 624
	bf_read::ReadOneBitNoCheck(); // 628
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <0441D2AF> tier0_perproject/bitbuf.cpp:636
// variables: 2
// function calls: 20
void bf_read::ReadBits(void* pOutData, int nBits)
{
	unsigned char* pOut; // 638
	int nBitsLeft; // 639
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 928
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 929
	bf_read::GetNumBitsLeft(); // 908
	{
	}
	bf_read::SetOverflowFlag(); // 911
	bf_read::ReadUBitLong(
			int numbits);  // 645
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 928
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 929
	bf_read::GetNumBitsLeft(); // 908
	{
	}
	bf_read::SetOverflowFlag(); // 911
	bf_read::ReadUBitLong(
			int numbits);  // 653
	bf_read::GetNumBitsLeft(); // 908
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 928
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 929
	{
	}
	bf_read::SetOverflowFlag(); // 911
	bf_read::ReadUBitLong(
			int numbits);  // 661
	bf_read::GetNumBitsLeft(); // 908
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 928
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 929
	{
	}
	bf_read::SetOverflowFlag(); // 911
	bf_read::ReadUBitLong(
			int numbits);  // 669
} /* size: 0, variables: 2, inline expansions: 20 (0 bytes) */

// <0441D09E> tier0_perproject/bitbuf.cpp:674
// variables: 3
// function calls: 7
void bf_read::ReadBitAngle(int numbits)
{
	float fReturn; // 676
	int i; // 677
	float shift; // 678
	GetBitForBitnum(int bitNum); // 23
	BitForBitnum(int bitnum); // 680
	bf_read::GetNumBitsLeft(); // 908
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 928
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 929
	{
	}
	bf_read::SetOverflowFlag(); // 911
	bf_read::ReadUBitLong(
			int numbits);  // 682
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <0441CE8B> tier0_perproject/bitbuf.cpp:688
// variables: 4
// function calls: 7
void bf_read::PeekUBitLong(int numbits)
{
	unsigned int r; // 690
	int i; // 691
	int nBitValue; // 691
	bf_read savebf; // 696
	bf_read::bf_read(); // 696
	GetBitForBitnum(int bitNum); // 23
	BitForBitnum(int bitnum); // 708
	bf_read::ReadOneBitNoCheck(); // 864
	bf_read::GetNumBitsLeft(); // 859
	{
	}
	bf_read::SetOverflowFlag(); // 861
	bf_read::ReadOneBit(); // 703
} /* size: 0, variables: 4, inline expansions: 7 (0 bytes) */

// <0441CCFC> tier0_perproject/bitbuf.cpp:721
// function calls: 5
void bf_read::ReadUBitLongNoInline(int numbits)
{
	bf_read::GetNumBitsLeft(); // 908
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 928
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 929
	{
	}
	bf_read::SetOverflowFlag(); // 911
	bf_read::ReadUBitLong(
			int numbits);  // 723
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0441CB43> tier0_perproject/bitbuf.cpp:726
// variables: 2
// function calls: 5
void bf_read::ReadUBitVarInternal(int sixbits)
{
	int encodingType; // 729
	int extrabits; // 732
	bf_read::GetNumBitsLeft(); // 908
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 928
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 929
	{
	}
	bf_read::SetOverflowFlag(); // 911
	bf_read::ReadUBitLong(
			int numbits);  // 733
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <04422DEA> tier0_perproject/bitbuf.cpp:737
// variables: 2
// function calls: 5
void bf_read::ReadSBitLong(int numbits)
{
	unsigned int r; // 739
	unsigned int s; // 740
	bf_read::GetNumBitsLeft(); // 908
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 928
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 929
	{
	}
	bf_read::SetOverflowFlag(); // 911
	bf_read::ReadUBitLong(
			int numbits);  // 739
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <0441CB03> tier0_perproject/bitbuf.cpp:737
// variables: 2
void bf_read::ReadSBitLong(int numbits)
{
	unsigned int r; // 739
	unsigned int s; // 740
} /* size: 0, variables: 2 */

// <0441C8C8> tier0_perproject/bitbuf.cpp:760
// variables: 5
// function calls: 5
void bf_read::ReadVarInt32()
{
	uint32 result; // 762
	int count; // 763
	uint32 b; // 764
	const char   __FUNCTION__; // 25370
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 772
	}
	bf_read::GetNumBitsLeft(); // 908
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 929
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 928
	{
	}
	bf_read::SetOverflowFlag(); // 911
	bf_read::ReadUBitLong(
			int numbits);  // 775
} /* size: 0, variables: 4, inline expansions: 5 (0 bytes) */

// <01BE61A9> tier0_perproject/bitbuf.cpp:760
// variables: 5
// function calls: 5
void bf_read::ReadVarInt32()
{
	uint32 result; // 762
	int count; // 763
	uint32 b; // 764
	const char   __FUNCTION__; // 51952
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 772
	}
	bf_read::GetNumBitsLeft(); // 908
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 929
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 928
	{
	}
	bf_read::SetOverflowFlag(); // 911
	bf_read::ReadUBitLong(
			int numbits);  // 775
} /* size: 0, variables: 4, inline expansions: 5 (0 bytes) */

// <0441C6E9> tier0_perproject/bitbuf.cpp:783
// variables: 3
// function calls: 5
void bf_read::ReadVarInt64()
{
	uint64 result; // 785
	int count; // 786
	uint64 b; // 787
	bf_read::GetNumBitsLeft(); // 908
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 929
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 928
	{
	}
	bf_read::SetOverflowFlag(); // 911
	bf_read::ReadUBitLong(
			int numbits);  // 795
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <0441C3D1> tier0_perproject/bitbuf.cpp:803
// function calls: 10
void bf_read::ReadBitLong(int numbits, bool bSigned)
{
	bf_read::GetNumBitsLeft(); // 908
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 928
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 929
	{
	}
	bf_read::SetOverflowFlag(); // 911
	bf_read::ReadUBitLong(
			int numbits);  // 739
	bf_read::ReadSBitLong(
			int numbits);  // 806
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 928
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 929
	{
	}
	bf_read::SetOverflowFlag(); // 911
	bf_read::ReadUBitLong(
			int numbits);  // 808
} /* size: 0, inline expansions: 10 (0 bytes) */

// <0441C07A> tier0_perproject/bitbuf.cpp:811
// variables: 4
// function calls: 10
void bf_read::ReadLongLong()
{
	int64 retval; // 813
	uint32* pLongs; // 814
	const short int  endianIndex; // 817
	byte* idx; // 818
	bf_read::GetNumBitsLeft(); // 908
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 929
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 928
	{
	}
	bf_read::SetOverflowFlag(); // 911
	bf_read::ReadUBitLong(
			int numbits);  // 819
	bf_read::GetNumBitsLeft(); // 908
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 928
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 929
	{
	}
	bf_read::SetOverflowFlag(); // 911
	bf_read::ReadUBitLong(
			int numbits);  // 820
} /* size: 0, variables: 4, inline expansions: 10 (0 bytes) */

// <0441BFCA> tier0_perproject/bitbuf.cpp:825
// variables: 3
void bf_read::ReadFloat()
{
	float ret; // 827
	const char   __FUNCTION__; // 22673
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 828
	}
} /* size: 0, variables: 2 */

// <01BE58AB> tier0_perproject/bitbuf.cpp:825
// variables: 3
void bf_read::ReadFloat()
{
	float ret; // 827
	const char   __FUNCTION__; // 49255
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 828
	}
} /* size: 0, variables: 2 */

// <0441BF0E> tier0_perproject/bitbuf.cpp:836
// function call: 1
void bf_read::ReadBytes(void* pOut, int nBytes)
{
	bf_read::IsOverflowed(); // 839
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0441BB00> tier0_perproject/bitbuf.cpp:842
// variables: 2
// function calls: 14
void bf_read::ReadString(CBufferString* pStr, bool bLine, int* pOutNumChars)
{
	bool bTooSmall; // 846
	{
		char val; // 849
		bf_read::GetNumBitsLeft(); // 908
		LoadLittleDWord(const uint32* base,
				unsigned int dwordIndex);  // 929
		LoadLittleDWord(const uint32* base,
				unsigned int dwordIndex);  // 928
		{
		}
		bf_read::SetOverflowFlag(); // 911
		bf_read::ReadUBitLong(
				int numbits);  // 722
		bf_read::ReadChar(); // 849
		CBufferString::IsCurBufferFull(); // 833
		CBufferString::IsFixedFull(); // 855
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 861
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 844
	CBufferString::Length(); // 866
	bf_read::IsOverflowed(); // 868
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <0441B83D> tier0_perproject/bitbuf.cpp:872
// variables: 2
// function calls: 10
void bf_read::ReadMemString(CUtlMemory<char, int>* pTargetMemory)
{
	int iChar; // 874
	{
		char nChar; // 877
		CUtlMemory<char, int>::IsGrowable(); // 881
		CUtlMemory<char, int>::IsExternallyAllocated(); // 888
		CUtlMemory<char, int>::EnsureCapacity(
				int num);  // 878
		CUtlMemory<char, int>::Element(
			int i);  // 879
		bf_read::GetNumBitsLeft(); // 908
		LoadLittleDWord(const uint32* base,
				unsigned int dwordIndex);  // 928
		LoadLittleDWord(const uint32* base,
				unsigned int dwordIndex);  // 929
		{
		}
		bf_read::SetOverflowFlag(); // 911
		bf_read::ReadUBitLong(
				int numbits);  // 722
		bf_read::ReadChar(); // 877
	}
} /* size: 0, variables: 1 */

// <0441B3DA> tier0_perproject/bitbuf.cpp:889
// variables: 4
// function calls: 14
void bf_read::ExciseBits(int startbit, int bitstoremove)
{
	int endbit; // 891
	int remaining_to_end; // 892
	bf_write temp; // 894
	{
		int i; // 899
		bf_write::WriteOneBitNoCheck(
					int nValue);  // 406
		bf_write::WriteOneBit(
				int nValue);  // 901
		bf_read::GetNumBitsLeft(); // 859
		bf_read::ReadOneBitNoCheck(); // 864
		{
		}
		bf_read::SetOverflowFlag(); // 861
		bf_read::ReadOneBit(); // 901
	}
	bf_write::bf_write(); // 894
	{
	}
	bf_write::StartWriting(
			void* pData,
			int nBytes,
			int iStartBit,
			int nBits);  // 895
	{
	}
	bf_read::SetOverflowFlag(); // 819
	bf_read::Seek(
		int iBit);  // 815
	bf_read::Seek(
		int iBit);  // 897
	{
	}
	bf_read::SetOverflowFlag(); // 819
	bf_read::Seek(
		int iBit);  // 815
	bf_read::Seek(
		int iBit);  // 904
} /* size: 0, variables: 3, inline expansions: 8 (0 bytes) */

// <0441B14A> tier0_perproject/bitbuf.cpp:910
// variables: 9
// function calls: 6
void bf_read::CompareBitsAt(int offset, bf_read* other, int otherOffset, int numbits)
{
	int overflow1; // 915
	int overflow2; // 916
	int x; // 918
	unsigned int iStartBit1; // 922
	unsigned int iStartBit2; // 923
	uint32* pData1; // 924
	uint32* pData2; // 925
	uint32* pData1End; // 926
	uint32* pData2End; // 927
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 932
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 934
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 944
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 945
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 946
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 947
} /* size: 0, variables: 9, inline expansions: 6 (0 bytes) */

