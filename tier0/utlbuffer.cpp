
//
// tier0/utlbuffer.cpp
//
//	referenced by: libtier0.so
//
//	functions: 83
//

// <0054E138> tier0/utlbuffer.cpp:22
// function calls: 7
void CUtlBuffer::CUtlBuffer(int growSize, int initSize, int nFlags)
{
	{
		{
		}
	}
	{
		CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 472
		CUtlMemory<unsigned char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 23
		{
		}
		CUtlBuffer::IsReadOnly(); // 31
		IsMachineBigEndian(void); // 21
		CByteswap::SetTargetBigEndian(
					bool bigEndian);  // 21
		CByteswap::CByteswap(); // 23
	}
} /* size: 0 */

// <0054E0D5> tier0/utlbuffer.cpp:22
// variables: 2
void CUtlBuffer::CUtlBuffer(int growSize, int initSize, int nFlags)
{
	const char   __FUNCTION__; // 55661
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 29
	}
} /* size: 0, variables: 1 */

// <0054DEB7> tier0/utlbuffer.cpp:43
// function calls: 5
void CUtlBuffer::CUtlBuffer(const void* pBuffer, int nSize, int nFlags)
{
	{
		{
		}
		{
		}
	}
	{
		CUtlMemory<unsigned char, int>::CUtlMemory(
				unsigned char* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 44
		{
		}
		CUtlBuffer::IsReadOnly(); // 52
		{
		}
		IsMachineBigEndian(void); // 21
		CByteswap::SetTargetBigEndian(
					bool bigEndian);  // 21
		CByteswap::CByteswap(); // 44
	}
} /* size: 0 */

// <0054DE38> tier0/utlbuffer.cpp:43
// variables: 3
void CUtlBuffer::CUtlBuffer(const void* pBuffer, int nSize, int nFlags)
{
	const char   __FUNCTION__; // 55661
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 58
	}
} /* size: 0, variables: 1 */

// <0054DC6D> tier0/utlbuffer.cpp:72
// variables: 4
// function calls: 4
void CUtlBuffer::SetBufferType(bool bIsText, bool bContainsCRLF)
{
	const char   __FUNCTION__; // 52593
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 83
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
	CUtlBuffer::TellMaxPut(); // 76
	CUtlBuffer::IsText(); // 78
	CUtlBuffer::ContainsCRLF(); // 83
	CUtlBuffer::ContainsCRLF(); // 88
} /* size: 0, variables: 1, inline expansions: 4 (30 bytes) */

// <0054DA9D> tier0/utlbuffer.cpp:124
// variables: 2
// function calls: 4
void CUtlBuffer::SetExternalBuffer(void* pMemory, int nSize, int nInitialPut, int nFlags)
{
	const char   __FUNCTION__; // 33489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 134
	}
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 619
	CUtlMemory<unsigned char, int>::SetExternalBuffer(
				unsigned char* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 126
} /* size: 0, variables: 1, inline expansions: 4 (200 bytes) */

// <0054D8DE> tier0/utlbuffer.cpp:150
// variables: 2
// function calls: 4
void CUtlBuffer::AssumeMemory(void* pMemory, int nSize, int nInitialPut, int nFlags)
{
	const char   __FUNCTION__; // 6412
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 160
	}
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 645
	CUtlMemory<unsigned char, int>::AssumeMemory(
			unsigned char* pMemory,
			int numElements);  // 152
} /* size: 0, variables: 1, inline expansions: 4 (174 bytes) */

// <0054D846> tier0/utlbuffer.cpp:170
// function calls: 2
void* CUtlBuffer::DetachMemory()
{
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 656
	CUtlMemory<unsigned char, int>::DetachMemory(); // 178
} /* size: 67, inline expansions: 2 (36 bytes) */

// <0054D597> tier0/utlbuffer.cpp:185
// variables: 2
// function calls: 10
void CUtlBuffer::EnsureCapacity(int num)
{
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 189
	CUtlMemory<unsigned char, int>::NumAllocated(); // 191
	CUtlBuffer::IsGrowable(); // 191
	CUtlMemory<unsigned char, int>::IsGrowable(); // 881
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 888
	CUtlMemory<unsigned char, int>::EnsureCapacity(
			int num);  // 201
	{
		int nNumBytes; // 555
		unsigned char* pMemory; // 556
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 557
	}
	CUtlMemory<unsigned char, int>::ConvertToGrowableMemory(
				int nGrowSize);  // 546
	CUtlMemory<unsigned char, int>::ConvertToGrowableMemory(
				int nGrowSize);  // 193
} /* size: 297, inline expansions: 8 (389 bytes) */

// <0054F28E> tier0/utlbuffer.cpp:208
// variable: 1
// function calls: 6
void CUtlBuffer::Get(void* pMem, int size)
{
	{
		int Index; // 212
		CUtlMemory<unsigned char, int>::IsIdxValid(
				int i);  // 213
		CUtlMemory<unsigned char, int>::IsIdxValid(
				int i);  // 213
		{
		}
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 215
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 215
	}
	CUtlBuffer::Get(
		void* pMem,
		int size);  // 208
} /* size: 0, inline expansions: 1 (102 bytes) */

// <0054D532> tier0/utlbuffer.cpp:208
// variables: 3
void CUtlBuffer::Get(void* pMem, int size)
{
	const char   __FUNCTION__; // 55070
	{
		int Index; // 212
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
		}
	}
} /* size: 0, variables: 1 */

// <0054D38C> tier0/utlbuffer.cpp:225
// variables: 4
// function calls: 3
const void* CUtlBuffer::AccessGet(int size)
{
	const char   __FUNCTION__; // 54943
	{
		int Index; // 229
		void* pResult; // 231
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 230
		}
		CUtlMemory<unsigned char, int>::IsIdxValid(
				int i);  // 230
		CUtlMemory<unsigned char, int>::IsIdxValid(
				int i);  // 230
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 231
	}
} /* size: 0, variables: 1 */

// <0054D138> tier0/utlbuffer.cpp:244
// variables: 3
// function calls: 5
void CUtlBuffer::GetUpTo(void* pMem, int nSize)
{
	const char   __FUNCTION__; // 61934
	{
		int Index; // 248
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
		}
		CUtlMemory<unsigned char, int>::IsIdxValid(
				int i);  // 249
		CUtlMemory<unsigned char, int>::IsIdxValid(
				int i);  // 249
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 251
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 251
	}
} /* size: 0, variables: 1 */

// <0054F4BD> tier0/utlbuffer.cpp:262
// function calls: 6
void CUtlBuffer::EatWhiteSpace()
{
	CUtlBuffer::IsText(); // 264
	CUtlBuffer::IsValid(); // 264
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 268
	V_isspace(int c); // 268
	CUtlBuffer::EatWhiteSpace(); // 262
} /* size: 108, inline expansions: 6 (83 bytes) */

// <0054D11B> tier0/utlbuffer.cpp:262
void CUtlBuffer::EatWhiteSpace()
{
} /* size: 0 */

// <0054FEB6> tier0/utlbuffer.cpp:279
// variables: 5
// function calls: 16
void CUtlBuffer::EatCPPComment()
{
	CUtlBuffer::IsText(); // 281
	CUtlBuffer::IsValid(); // 281
	{
		const char* pPeek; // 284
		char prevChar; // 292
	}
	{
		const char* pPeek; // 284
		char prevChar; // 292
		{
			char c; // 293
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
			CUtlBuffer::GetChar(); // 293
			CUtlBuffer::IsValid(); // 293
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
			CUtlBuffer::GetChar(); // 293
		}
	}
	CUtlBuffer::EatCPPComment(); // 279
} /* size: 248, inline expansions: 3 (152 bytes) */

// <0054D0B2> tier0/utlbuffer.cpp:279
// variables: 3
void CUtlBuffer::EatCPPComment()
{
	{
		const char* pPeek; // 284
		char prevChar; // 292
		{
			char c; // 293
		}
	}
} /* size: 0 */

// <0054CDCA> tier0/utlbuffer.cpp:308
// variables: 2
// function calls: 9
void CUtlBuffer::EatCComment(int* pOutSkippedNewlineCount)
{
	{
		const char* pPeek; // 313
		{
			char c; // 337
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
			CUtlBuffer::GetChar(); // 337
		}
		CUtlBuffer::IsValid(); // 326
	}
	CUtlBuffer::IsText(); // 310
	CUtlBuffer::IsValid(); // 310
} /* size: 226, inline expansions: 2 (0 bytes) */

// <0054F6D0> tier0/utlbuffer.cpp:350
// function calls: 6
void CUtlBuffer::PeekWhiteSpace(int nOffset)
{
	CUtlBuffer::IsText(); // 352
	CUtlBuffer::IsValid(); // 352
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 357
	V_isspace(int c); // 357
	CUtlBuffer::PeekWhiteSpace(
			int nOffset);  // 350
} /* size: 106, inline expansions: 6 (81 bytes) */

// <0054CDA0> tier0/utlbuffer.cpp:350
void CUtlBuffer::PeekWhiteSpace(int nOffset)
{
} /* size: 0 */

// <0054F9C6> tier0/utlbuffer.cpp:369
// variables: 6
// function calls: 7
void CUtlBuffer::PeekStringLength()
{
	int nOffset; // 375
	int nStartingOffset; // 381
	CUtlBuffer::IsValid(); // 371
	CUtlBuffer::IsText(); // 376
	{
		int nPeekAmount; // 385
		const char* pTest; // 395
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 395
		{
			int i; // 399
		}
		CUtlBuffer::IsText(); // 397
		{
			int i; // 408
			V_isspace(int c); // 411
		}
	}
	CUtlBuffer::PeekStringLength(); // 369
} /* size: 298, variables: 2, inline expansions: 3 (220 bytes) */

// <0054CD2F> tier0/utlbuffer.cpp:369
// variables: 6
void CUtlBuffer::PeekStringLength()
{
	int nOffset; // 375
	int nStartingOffset; // 381
	{
		int nPeekAmount; // 385
		const char* pTest; // 395
		{
			int i; // 399
		}
		{
			int i; // 408
		}
	}
} /* size: 0, variables: 2 */

// <0054FC0C> tier0/utlbuffer.cpp:425
// variables: 5
// function calls: 3
void CUtlBuffer::PeekLineLength()
{
	int nOffset; // 430
	int nStartingOffset; // 431
	{
		int nPeekAmount; // 435
		const char* pTest; // 445
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 445
		{
			int i; // 447
		}
	}
	CUtlBuffer::PeekLineLength(); // 425
} /* size: 214, variables: 2, inline expansions: 1 (137 bytes) */

// <0054CCCF> tier0/utlbuffer.cpp:425
// variables: 5
void CUtlBuffer::PeekLineLength()
{
	int nOffset; // 430
	int nStartingOffset; // 431
	{
		int nPeekAmount; // 435
		const char* pTest; // 445
		{
			int i; // 447
		}
	}
} /* size: 0, variables: 2 */

// <0054FD22> tier0/utlbuffer.cpp:466
// function calls: 4
void CUtlBuffer::PeekStringMatch(int nOffset, const char* pString, int nLen)
{
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 470
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 470
	CUtlBuffer::PeekStringMatch(
			int nOffset,
			const char* pString,
			int nLen);  // 466
} /* size: 79, inline expansions: 4 (68 bytes) */

// <0054CC8B> tier0/utlbuffer.cpp:466
void CUtlBuffer::PeekStringMatch(int nOffset, const char* pString, int nLen)
{
} /* size: 0 */

// <0054C832> tier0/utlbuffer.cpp:478
// variables: 5
// function calls: 13
void CUtlBuffer::PeekDelimitedStringLength(CUtlCharConversion* pConv, bool bActualSize)
{
	int nOffset; // 484
	int nActualStart; // 494
	int nLen; // 496
	{
		char c; // 506
		{
			int nLength; // 511
			CUtlCharConversion::MaxConversionLength(); // 511
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 515
		}
		CUtlCharConversion::GetEscapeChar(); // 509
		CUtlCharConversion::GetDelimiterLength(); // 500
		CUtlCharConversion::GetDelimiter(); // 500
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 506
	}
	CUtlBuffer::IsText(); // 480
	CUtlCharConversion::GetDelimiterLength(); // 490
	CUtlCharConversion::GetDelimiter(); // 490
	CUtlCharConversion::GetDelimiterLength(); // 495
	CUtlCharConversion::GetDelimiterLength(); // 520
} /* size: 387, variables: 3, inline expansions: 5 (5 bytes) */

// <0054C306> tier0/utlbuffer.cpp:527
// variables: 3
// function calls: 16
void CUtlBuffer::GetString(CBufferString* pStrBuf)
{
	int nLen; // 537
	int nMaxChars; // 554
	char* pString; // 555
	{
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
		CUtlBuffer::GetChar(); // 579
		_DebuggerBreakInlineExpressionWrapper(void); // 579
	}
	CUtlBuffer::IsValid(); // 529
	CUtlBuffer::IsText(); // 539
	CUtlBuffer::IsText(); // 577
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 531
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 546
} /* size: 0, variables: 3, inline expansions: 9 (114 bytes) */

// <0054C0FD> tier0/utlbuffer.cpp:583
// variables: 3
// function calls: 4
void CUtlBuffer::GetString(char* pString, int nMaxChars)
{
	const char   __FUNCTION__; // 54943
	CBufferString wrapBufPtr; // 586
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 585
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 586
	CBufferString::SetFixedPtr(
			char* pBuffer,
			int nBufferChars,
			int nStringChars,
			bool bFreeBuffer);  // 587
	CBufferString::~CBufferString(); // 589
} /* size: 0, variables: 2, inline expansions: 4 (56 bytes) */

// <0054BDD8> tier0/utlbuffer.cpp:595
// variables: 5
// function calls: 9
void CUtlBuffer::GetLine(CBufferString* pLine)
{
	const char   __FUNCTION__; // 61934
	int nLen; // 607
	int nMaxChars; // 618
	char* pString; // 619
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 597
	}
	CUtlBuffer::IsText(); // 597
	CUtlBuffer::ContainsCRLF(); // 597
	CUtlBuffer::IsValid(); // 599
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 601
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 610
} /* size: 0, variables: 4, inline expansions: 9 (134 bytes) */

// <0054BBF6> tier0/utlbuffer.cpp:639
// variable: 1
// function calls: 4
void CUtlBuffer::GetLine(char* pLine, int nMaxChars)
{
	CBufferString wrapBufPtr; // 646
	CBufferString::SetFixedPtr(
			char* pBuffer,
			int nBufferChars,
			int nStringChars,
			bool bFreeBuffer);  // 647
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 646
	CBufferString::~CBufferString(); // 649
} /* size: 130, variables: 1, inline expansions: 4 (56 bytes) */

// <00551938> tier0/utlbuffer.cpp:656
// variables: 2
// function calls: 11
void CUtlBuffer::GetDelimitedCharInternal(CUtlCharConversion* pConv)
{
	char c; // 658
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
	CUtlBuffer::GetChar(); // 658
	CUtlCharConversion::GetEscapeChar(); // 659
	{
		int nLength; // 661
		CUtlCharConversion::MaxConversionLength(); // 661
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 665
	}
	CUtlBuffer::GetDelimitedCharInternal(
				CUtlCharConversion* pConv);  // 656
} /* size: 206, variables: 1, inline expansions: 8 (235 bytes) */

// <0054BBB2> tier0/utlbuffer.cpp:656
// variables: 2
void CUtlBuffer::GetDelimitedCharInternal(CUtlCharConversion* pConv)
{
	char c; // 658
	{
		int nLength; // 661
	}
} /* size: 0, variables: 1 */

// <0054B9AD> tier0/utlbuffer.cpp:672
// function calls: 7
void CUtlBuffer::GetDelimitedChar(CUtlCharConversion* pConv)
{
	CUtlBuffer::IsText(); // 674
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
	CUtlBuffer::GetChar(); // 675
} /* size: 89, inline expansions: 7 (185 bytes) */

// <00551C7F> tier0/utlbuffer.cpp:679
// variable: 1
// function calls: 14
void CUtlBuffer::GetDelimitedString(CUtlCharConversion* pConv, CBufferString* pStrBuf)
{
	CUtlBuffer::IsText(); // 681
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 687
	CUtlBuffer::IsValid(); // 689
	CUtlCharConversion::GetDelimiterLength(); // 695
	CUtlCharConversion::GetDelimiter(); // 695
	CUtlCharConversion::GetDelimiterLength(); // 701
	CUtlBuffer::IsValid(); // 703
	{
		char c; // 711
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 712
		CUtlCharConversion::GetDelimiterLength(); // 705
		CUtlCharConversion::GetDelimiter(); // 705
		CUtlCharConversion::GetDelimiterLength(); // 707
	}
	CUtlBuffer::GetDelimitedString(
				CUtlCharConversion* pConv,
				CBufferString* pStrBuf);  // 679
} /* size: 379, inline expansions: 10 (235 bytes) */

// <0054B969> tier0/utlbuffer.cpp:679
// variable: 1
void CUtlBuffer::GetDelimitedString(CUtlCharConversion* pConv, CBufferString* pStrBuf)
{
	{
		char c; // 711
	}
} /* size: 0 */

// <0054B77A> tier0/utlbuffer.cpp:716
// variable: 1
// function calls: 4
void CUtlBuffer::GetDelimitedString(CUtlCharConversion* pConv, char* pString, int nMaxChars)
{
	CBufferString wrapBufPtr; // 718
	CBufferString::SetFixedPtr(
			char* pBuffer,
			int nBufferChars,
			int nStringChars,
			bool bFreeBuffer);  // 719
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 718
	CBufferString::~CBufferString(); // 721
} /* size: 135, variables: 1, inline expansions: 4 (56 bytes) */

// <0054B6AE> tier0/utlbuffer.cpp:727
// function calls: 2
void CUtlBuffer::CheckGet(int nSize)
{
	CUtlBuffer::TellMaxPut(); // 732
	CUtlMemory<unsigned char, int>::NumAllocated(); // 738
} /* size: 120, inline expansions: 2 (0 bytes) */

// <0054F615> tier0/utlbuffer.cpp:754
// variable: 1
// function call: 1
void CUtlBuffer::CheckPeekGet(int nOffset, int nSize)
{
	bool bOk; // 760
	CUtlBuffer::CheckPeekGet(
			int nOffset,
			int nSize);  // 754
} /* size: 45, variables: 1, inline expansions: 1 (19 bytes) */

// <0054B66A> tier0/utlbuffer.cpp:754
// variable: 1
void CUtlBuffer::CheckPeekGet(int nOffset, int nSize)
{
	bool bOk; // 760
} /* size: 0, variables: 1 */

// <0054F847> tier0/utlbuffer.cpp:770
// variable: 1
// function calls: 5
void CUtlBuffer::CheckArbitraryPeekGet(int nOffset, int& nIncrement)
{
	int nMaxGet; // 786
	CUtlBuffer::TellGet(); // 772
	CUtlBuffer::TellMaxPut(); // 772
	CUtlBuffer::TellMaxPut(); // 786
	CUtlBuffer::TellGet(); // 786
	CUtlBuffer::CheckArbitraryPeekGet(
				int nOffset,
				int& nIncrement);  // 770
} /* size: 105, variables: 1, inline expansions: 5 (44 bytes) */

// <0054B626> tier0/utlbuffer.cpp:770
// variable: 1
void CUtlBuffer::CheckArbitraryPeekGet(int nOffset, int& nIncrement)
{
	int nMaxGet; // 786
} /* size: 0, variables: 1 */

// <0054B462> tier0/utlbuffer.cpp:798
// variables: 3
// function calls: 3
const void* CUtlBuffer::PeekGet(int nMaxSize, int nOffset)
{
	int Index; // 803
	const char   __FUNCTION__; // 61934
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 804
	}
	CUtlMemory<unsigned char, int>::IsIdxValid(
			int i);  // 804
	CUtlMemory<unsigned char, int>::IsIdxValid(
			int i);  // 804
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 806
} /* size: 0, variables: 2, inline expansions: 3 (47 bytes) */

// <0054B385> tier0/utlbuffer.cpp:813
// function calls: 2
void CUtlBuffer::SeekGet(SeekType_t type, int offset)
{
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 837
} /* size: 112, inline expansions: 2 (0 bytes) */

// <005502F3> tier0/utlbuffer.cpp:851
// variables: 10
// function calls: 67
void CUtlBuffer::VaScanf(const char* pFmt, typedef __va_list_tag __va_list_tag* list)
{
	int numScanned; // 857
	char c; // 858
	{
	}
	CUtlBuffer::IsText(); // 854
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 1066
	{
		char type; // 878
		{
			uint32* pArg; // 981
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 913
			StringToNumber<unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
			CUtlBuffer::BGetTypeText<unsigned int>(
							unsigned int& value,
							int nRadix);  // 982
		}
		{
			int32* pArg; // 965
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 913
			StringToNumber<int>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
			CUtlBuffer::BGetTypeText<int>(
						int& value,
						int nRadix);  // 966
		}
		{
			uint32* pArg; // 973
			StringToNumber<unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 913
			CUtlBuffer::BGetTypeText<unsigned int>(
							unsigned int& value,
							int nRadix);  // 974
		}
		{
			char* ch; // 886
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 889
		}
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<long long unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<long long unsigned int>(
							long long unsigned int& value,
							int nRadix);  // 950
		StringToNumber<long long unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		CUtlBuffer::BGetTypeText<long long unsigned int>(
							long long unsigned int& value,
							int nRadix);  // 945
		{
			char* s; // 1036
		}
		{
			char subtype; // 990
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 913
			StringToNumber<long long unsigned int>(char* pString,
								char** ppEnd,
								int nRadix);  // 915
			CUtlBuffer::BGetTypeText<long long unsigned int>(
								long long unsigned int& value,
								int nRadix);  // 1011
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 913
			StringToNumber<long long int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
			CUtlBuffer::BGetTypeText<long long int>(
							long long int& value,
							int nRadix);  // 1001
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 913
			StringToNumber<double>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
			CUtlBuffer::BGetTypeText<double>(
						double& value,
						int nRadix);  // 994
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 913
			StringToNumber<long long unsigned int>(char* pString,
								char** ppEnd,
								int nRadix);  // 915
			CUtlBuffer::BGetTypeText<long long unsigned int>(
								long long unsigned int& value,
								int nRadix);  // 1006
		}
		{
			float* pArg; // 1028
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 913
			StringToNumber<float>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
			CUtlBuffer::BGetTypeText<float>(
						float& value,
						int nRadix);  // 1029
		}
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short int>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short int>(
					short int& value,
					int nRadix);  // 904
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 909
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<long long int>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
		CUtlBuffer::BGetTypeText<long long int>(
						long long int& value,
						int nRadix);  // 940
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<signed char>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
		CUtlBuffer::BGetTypeText<signed char>(
						signed char& value,
						int nRadix);  // 918
		StringToNumber<unsigned char>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		CUtlBuffer::BGetTypeText<unsigned char>(
						unsigned char& value,
						int nRadix);  // 923
		{
		}
	}
	CUtlBuffer::TellMaxPut(); // 862
	CUtlBuffer::VaScanf(
		const char* pFmt,
		typedef __va_list_tag __va_list_tag* list);  // 851
} /* size: 0, variables: 2, inline expansions: 5 (2664 bytes) */

// <0054B22E> tier0/utlbuffer.cpp:851
// variables: 13
void CUtlBuffer::VaScanf(const char* pFmt, typedef __va_list_tag __va_list_tag* list)
{
	const char   __FUNCTION__; // 61934
	int numScanned; // 857
	char c; // 858
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 853
	}
	{
		char type; // 878
		{
			char* ch; // 886
		}
		{
			int32* pArg; // 965
		}
		{
			uint32* pArg; // 973
		}
		{
			uint32* pArg; // 981
		}
		{
			char subtype; // 990
		}
		{
			float* pArg; // 1028
		}
		{
			char* s; // 1036
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1049
		}
	}
} /* size: 0, variables: 3 */

// <0054B193> tier0/utlbuffer.cpp:1078
// variables: 2
void CUtlBuffer::Scanf(const char* pFmt, ...)
{
	va_list args; // 1080
	int count; // 1083
} /* size: 179, variables: 2 */

// <0054AD30> tier0/utlbuffer.cpp:1094
// variables: 12
// function calls: 12
void CUtlBuffer::GetToken(const char* pToken)
{
	const char   __FUNCTION__; // 40958
	int nLen; // 1099
	int nMaxSize; // 1103
	int nSizeRemaining; // 1108
	int nGet; // 1110
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1096
	}
	{
		bool bOverFlow; // 1113
		int nSizeToCheck; // 1114
		const char* pBufStart; // 1118
		const char* pFoundEnd; // 1119
		size_t nOffset; // 1125
		bool bPotentialMismatch; // 1126
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 1118
		V_strnistr_fast<int>(const char* pStr,
					const char* pSearch,
					int n);  // 1119
		CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
		CUtlBuffer::SizeAllocated(); // 1126
		CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
		CUtlBuffer::SizeAllocated(); // 1137
	}
	V_strlen(const char* str); // 1099
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 1103
	CUtlBuffer::TellGet(); // 1103
	CUtlBuffer::TellMaxPut(); // 1108
} /* size: 0, variables: 5, inline expansions: 5 (30 bytes) */

// <0054A5C6> tier0/utlbuffer.cpp:1162
// variables: 10
// function calls: 24
void CUtlBuffer::ParseToken(const char* pStartingDelim, const char* pEndingDelim, CBufferString* pStrBuf)
{

parseFailed: // 1230
	int nCharsToCopy; // 1164
	int nCurrentGet; // 1165
	size_t nEndingDelimLen; // 1167
	char emptyBuf; // 1172
	const char   __FUNCTION__; // 55661
	int nStartGet; // 1182
	char nCurrChar; // 1183
	int nTokenStart; // 1184
	char* pString; // 1206
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1179
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1169
	V_strlen(const char* str); // 1180
	CUtlBuffer::TellGet(); // 1182
	V_isspace(int c); // 1189
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
	CUtlBuffer::GetChar(); // 1191
	CUtlBuffer::TellGet(); // 1201
	CUtlBuffer::TellGet(); // 1205
	CUtlBuffer::IsValid(); // 1213
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 798
	CBufferString::GetTailChar(); // 796
	CBufferString::GetTailChar(); // 1219
	V_isspace(int c); // 1219
	CBufferString::Length(); // 983
	CBufferString::RemoveTail(
			int nChars);  // 1222
	FastASCIIToLower<int>(int c); // 1191
	FastASCIIToLower<int>(int c); // 1191
} /* size: 0, variables: 9, goto labels: 1, inline expansions: 24 (583 bytes) */

// <0054A3C8> tier0/utlbuffer.cpp:1236
// variable: 1
// function calls: 4
void CUtlBuffer::ParseToken(const char* pStartingDelim, const char* pEndingDelim, char* pString, int nMaxLen)
{
	CBufferString wrapBufPtr; // 1238
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 1238
	CBufferString::SetFixedPtr(
			char* pBuffer,
			int nBufferChars,
			int nStringChars,
			bool bFreeBuffer);  // 1239
	CBufferString::~CBufferString(); // 1241
} /* size: 152, variables: 1, inline expansions: 4 (56 bytes) */

// <00549AFE> tier0/utlbuffer.cpp:1247
// variables: 3
// function calls: 31
void CUtlBuffer::ParseToken(const characterset_t* pBreaks, CBufferString* pTokenBuf, bool bParseComments)
{
	char c; // 1268
	int nLen; // 1305
	{
		int nLen; // 1277
		CUtlBuffer::IsValid(); // 1278
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
		CUtlBuffer::GetChar(); // 1280
		CBufferString::IsCurBufferFull(); // 833
		CBufferString::IsFixedFull(); // 1285
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 1289
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1249
	CUtlBuffer::IsValid(); // 1254
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
	CUtlBuffer::GetChar(); // 1268
	CBufferString::AppendChar(
			char ch,
			bool bExact);  // 1312
	CBufferString::IsCurBufferFull(); // 833
	CBufferString::IsFixedFull(); // 1308
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
	CUtlBuffer::GetChar(); // 1315
	CUtlBuffer::IsValid(); // 1316
	CBufferString::AppendChar(
			char ch,
			bool bExact);  // 1300
} /* size: 650, variables: 2, inline expansions: 21 (507 bytes) */

// <005498AF> tier0/utlbuffer.cpp:1329
// variables: 3
// function calls: 4
void CUtlBuffer::ParseToken(const characterset_t* pBreaks, char* pTokenBuf, int nMaxLen, bool bParseComments)
{
	const char   __FUNCTION__; // 55661
	CBufferString wrapBufPtr; // 1332
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1331
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 1332
	CBufferString::SetFixedPtr(
			char* pBuffer,
			int nBufferChars,
			int nStringChars,
			bool bFreeBuffer);  // 1333
	CBufferString::~CBufferString(); // 1335
} /* size: 0, variables: 2, inline expansions: 4 (56 bytes) */

// <00552303> tier0/utlbuffer.cpp:1341
// variable: 1
// function calls: 6
void CUtlBuffer::Put(const void* pMem, int size)
{
	{
		int Index; // 1345
		CUtlMemory<unsigned char, int>::IsIdxValid(
				int i);  // 1346
		CUtlMemory<unsigned char, int>::IsIdxValid(
				int i);  // 1346
		{
		}
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1349
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 1349
	}
	CUtlBuffer::Put(
		const void* pMem,
		int size);  // 1341
} /* size: 0, inline expansions: 1 (212 bytes) */

// <00549830> tier0/utlbuffer.cpp:1341
// variables: 3
void CUtlBuffer::Put(const void* pMem, int size)
{
	const char   __FUNCTION__; // 55070
	{
		int Index; // 1345
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1346
		}
	}
} /* size: 0, variables: 1 */

// <00549629> tier0/utlbuffer.cpp:1361
// variables: 5
// function calls: 3
void* CUtlBuffer::AccessPut(int size)
{
	int nReserveSize; // 1369
	const char   __FUNCTION__; // 54943
	{
		int Index; // 1373
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1374
		}
		{
			void* pResult; // 1377
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1377
		}
		CUtlMemory<unsigned char, int>::IsIdxValid(
				int i);  // 1374
		CUtlMemory<unsigned char, int>::IsIdxValid(
				int i);  // 1374
	}
} /* size: 0, variables: 2 */

// <00548F02> tier0/utlbuffer.cpp:1391
// variables: 7
// function calls: 24
void CUtlBuffer::PutString(const char* pString)
{
	{
		int nLen; // 1398
		V_strlen(const char* str); // 1398
	}
	{
		int nTabCount; // 1409
		int nLen; // 1434
		{
			const char* pEndl; // 1417
			{
				size_t nSize; // 1420
				{
					int i; // 1262
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 1166
					CUtlBuffer::PeekPut(
						int offset);  // 1210
					CUtlBuffer::PutTypeBin<char>(
							char src);  // 1204
					CUtlBuffer::PutTypeBin<char>(
							char src);  // 1264
				}
				CUtlBuffer::PutTabs(); // 1425
				strchr(const char* __s,
					int __c);  // 186
				V_strchr(const char* s,
					char c);  // 1426
			}
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1256
			CUtlBuffer::WasLastCharacterCR(); // 1412
			strchr(const char* __s,
				int __c);  // 186
			V_strchr(const char* s,
				char c);  // 1417
			{
				int i; // 1262
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 1166
				CUtlBuffer::PeekPut(
					int offset);  // 1210
				CUtlBuffer::PutTypeBin<char>(
						char src);  // 1204
				CUtlBuffer::PutTypeBin<char>(
						char src);  // 1264
			}
			CUtlBuffer::PutTabs(); // 1414
		}
		V_strlen(const char* str); // 1434
	}
	CUtlBuffer::IsText(); // 1393
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1204
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1404
} /* size: 456, inline expansions: 5 (82 bytes) */

// <00547A19> tier0/utlbuffer.cpp:1444
// variables: 9
// function calls: 81
void CUtlBuffer::PutJSONString(const char* pchValue)
{
	const char   __FUNCTION__; // 52593
	int i; // 1459
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1449
	}
	CUtlBuffer::IsText(); // 1449
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::IsText(); // 1253
	CUtlBuffer::WasLastCharacterCR(); // 1303
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1305
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1204
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1308
	CUtlBuffer::PutChar(
		char c);  // 1452
	CUtlBuffer::IsText(); // 1253
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1303
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1305
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1204
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1308
	CUtlBuffer::PutChar(
		char c);  // 1483
	CUtlBuffer::IsText(); // 1253
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1303
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1305
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1204
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1308
	CUtlBuffer::PutChar(
		char c);  // 1494
	CUtlBuffer::IsText(); // 1253
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1303
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1305
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1204
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1308
	CUtlBuffer::PutChar(
		char c);  // 1488
	CUtlBuffer::IsText(); // 1253
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1303
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1305
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1204
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1308
	CUtlBuffer::PutChar(
		char c);  // 1484
	CUtlBuffer::IsText(); // 1253
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1303
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1305
	CUtlBuffer::PutChar(
		char c);  // 1455
} /* size: 0, variables: 2, inline expansions: 57 (2542 bytes) */

// <005479D9> tier0/utlbuffer.cpp:1501
// variable: 1
inline void CUtlBuffer::PutDelimitedCharInternal(CUtlCharConversion* pConv, char c)
{
	int l; // 1503
} /* size: 0, variables: 1 */

// <00546F6D> tier0/utlbuffer.cpp:1515
// variables: 3
// function calls: 40
void CUtlBuffer::PutDelimitedChar(CUtlCharConversion* pConv, char c)
{
	CUtlBuffer::IsText(); // 1517
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1303
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1305
	CUtlBuffer::PutChar(
		char c);  // 1506
	CUtlCharConversion::GetConversionLength(
				char c);  // 1503
	CUtlCharConversion::GetEscapeChar(); // 1510
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1303
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1305
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1204
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1308
	CUtlBuffer::PutChar(
		char c);  // 1510
	CUtlCharConversion::GetConversionString(
				char c);  // 1511
	CUtlBuffer::PutDelimitedCharInternal(
				CUtlCharConversion* pConv,
				char c);  // 1523
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1204
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1308
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1303
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1305
	CUtlBuffer::PutChar(
		char c);  // 1519
} /* size: 608, inline expansions: 28 (1367 bytes) */

// <0054618F> tier0/utlbuffer.cpp:1526
// variables: 6
// function calls: 54
void CUtlBuffer::PutDelimitedString(CUtlCharConversion* pConv, const char* pString)
{
	int nLen; // 1540
	{
		int i; // 1541
		CUtlBuffer::IsText(); // 1253
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1256
		CUtlBuffer::WasLastCharacterCR(); // 1303
		{
			int i; // 1262
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1264
		}
		CUtlBuffer::PutTabs(); // 1305
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1308
		CUtlBuffer::PutChar(
			char c);  // 1506
		CUtlCharConversion::GetConversionLength(
					char c);  // 1503
		CUtlCharConversion::GetEscapeChar(); // 1510
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1256
		CUtlBuffer::WasLastCharacterCR(); // 1303
		{
			int i; // 1262
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1264
		}
		CUtlBuffer::PutTabs(); // 1305
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1308
		CUtlBuffer::PutChar(
			char c);  // 1510
		CUtlCharConversion::GetConversionString(
					char c);  // 1511
		CUtlBuffer::PutDelimitedCharInternal(
					CUtlCharConversion* pConv,
					char c);  // 1543
	}
	CUtlBuffer::IsText(); // 1528
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1534
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1536
	CUtlCharConversion::GetDelimiterLength(); // 1538
	CUtlCharConversion::GetDelimiter(); // 1538
	V_strlen(const char* str); // 1540
	CUtlBuffer::IsText(); // 1253
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1546
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1548
	CUtlCharConversion::GetDelimiterLength(); // 1550
	CUtlCharConversion::GetDelimiter(); // 1550
} /* size: 902, variables: 1, inline expansions: 15 (252 bytes) */

// <0055258D> tier0/utlbuffer.cpp:1554
// variables: 3
// function calls: 2
void CUtlBuffer::VaPrintf(const char* pFmt, typedef __va_list_tag __va_list_tag* list)
{
	char temp; // 1556
	int nLen; // 1557
	{
		int* _pCrash; // 1558
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1558
	CUtlBuffer::VaPrintf(
		const char* pFmt,
		typedef __va_list_tag __va_list_tag* list);  // 1554
} /* size: 243, variables: 2, inline expansions: 2 (146 bytes) */

// <005460FD> tier0/utlbuffer.cpp:1554
// variables: 4
void CUtlBuffer::VaPrintf(const char* pFmt, typedef __va_list_tag __va_list_tag* list)
{
	char temp; // 1556
	int nLen; // 1557
	const char   __FUNCTION__; // 40958
	{
		int* _pCrash; // 1558
	}
} /* size: 0, variables: 3 */

// <00546077> tier0/utlbuffer.cpp:1562
// variable: 1
void CUtlBuffer::Printf(const char* pFmt, ...)
{
	va_list args; // 1564
} /* size: 179, variables: 1 */

// <0054601D> tier0/utlbuffer.cpp:1575
void CUtlBuffer::SetOverflowFuncs(UtlBufferOverflowFunc_t getFunc, UtlBufferOverflowFunc_t putFunc)
{
} /* size: 21 */

// <00545FD0> tier0/utlbuffer.cpp:1585
void CUtlBuffer::OnPutOverflow(int nSize)
{
} /* size: 26 */

// <00545F83> tier0/utlbuffer.cpp:1590
void CUtlBuffer::OnGetOverflow(int nSize)
{
} /* size: 26 */

// <0054EF18> tier0/utlbuffer.cpp:1599
// variables: 2
// function calls: 13
void CUtlBuffer::PutOverflow(int nSize)
{
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 1601
	CUtlBuffer::IsGrowable(); // 1603
	{
		int nNumBytes; // 555
		unsigned char* pMemory; // 556
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 557
	}
	CUtlMemory<unsigned char, int>::ConvertToGrowableMemory(
				int nGrowSize);  // 546
	CUtlMemory<unsigned char, int>::ConvertToGrowableMemory(
				int nGrowSize);  // 1606
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 1609
	CUtlMemory<unsigned char, int>::IsGrowable(); // 823
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 859
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 861
	CUtlMemory<unsigned char, int>::Grow(
		int num);  // 1611
	CUtlBuffer::PutOverflow(
			int nSize);  // 1599
} /* size: 358, inline expansions: 11 (583 bytes) */

// <00545F59> tier0/utlbuffer.cpp:1599
void CUtlBuffer::PutOverflow(int nSize)
{
} /* size: 0 */

// <00545F18> tier0/utlbuffer.cpp:1617
void CUtlBuffer::GetOverflow(int nSize)
{
} /* size: 7 */

// <00545E4C> tier0/utlbuffer.cpp:1626
// function calls: 2
void CUtlBuffer::CheckPut(int nSize)
{
	CUtlBuffer::IsReadOnly(); // 1628
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1631
} /* size: 104, inline expansions: 2 (0 bytes) */

// <00545D9E> tier0/utlbuffer.cpp:1642
// variable: 1
void CUtlBuffer::SeekPut(SeekType_t type, int offset)
{
	int nNextPut; // 1644
} /* size: 84, variables: 1 */

// <005520D4> tier0/utlbuffer.cpp:1672
// function calls: 2
void CUtlBuffer::ActivateByteSwapping(bool bActivate)
{
	CByteswap::SetTargetBigEndian(
				bool bigEndian);  // 86
	CByteswap::ActivateByteSwapping(
				bool bActivate);  // 1674
} /* size: 28, inline expansions: 2 (46 bytes) */

// <00545D74> tier0/utlbuffer.cpp:1672
void CUtlBuffer::ActivateByteSwapping(bool bActivate)
{
} /* size: 0 */

// <00545D4A> tier0/utlbuffer.cpp:1677
void CUtlBuffer::SetBigEndian(bool bigEndian)
{
} /* size: 0 */

// <00545CE7> tier0/utlbuffer.cpp:1682
// function call: 1
void CUtlBuffer::IsBigEndian()
{
	CByteswap::IsTargetBigEndian(); // 1684
} /* size: 14, inline expansions: 1 (9 bytes) */

// <00552187> tier0/utlbuffer.cpp:1691
// variable: 1
// function calls: 4
void CUtlBuffer::AddNullTermination()
{
	CUtlBuffer::IsReadOnly(); // 1695
	{
		int Index; // 1700
		CUtlMemory<unsigned char, int>::IsIdxValid(
				int i);  // 1701
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1704
		{
		}
	}
	CUtlBuffer::AddNullTermination(); // 1691
} /* size: 0, inline expansions: 2 (178 bytes) */

// <00545C82> tier0/utlbuffer.cpp:1691
// variables: 3
void CUtlBuffer::AddNullTermination()
{
	const char   __FUNCTION__; // 39766
	{
		int Index; // 1700
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1701
		}
	}
} /* size: 0, variables: 1 */

// <00544C10> tier0/utlbuffer.cpp:1723
// variables: 18
// function calls: 59
void CUtlBuffer::ConvertCRLF(CUtlBuffer& outBuf)
{
	int nInCount; // 1731
	bool bFromCRLF; // 1736
	int nGet; // 1739
	int nPut; // 1740
	int nGetDelta; // 1741
	int nPutDelta; // 1742
	const char* pBase; // 1744
	intp nCurrGet; // 1745
	const char   __FUNCTION__; // 39665
	{
		const char* pCurr; // 1748
		{
			const char* pNext; // 1751
			intp nBytes; // 1758
			V_strnistr_fast<long long int>(const char* pStr,
							const char* pSearch,
							long long int n);  // 1751
			CUtlBuffer::IsText(); // 1253
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1256
			CUtlBuffer::WasLastCharacterCR(); // 1303
			{
				int i; // 1262
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 1166
				CUtlBuffer::PeekPut(
					int offset);  // 1210
				CUtlBuffer::PutTypeBin<char>(
						char src);  // 1204
				CUtlBuffer::PutTypeBin<char>(
						char src);  // 1264
			}
			CUtlBuffer::PutTabs(); // 1305
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1308
			CUtlBuffer::PutChar(
				char c);  // 1760
		}
		{
			const char* pNext; // 1773
			intp nBytes; // 1780
			CUtlBuffer::IsText(); // 1253
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1256
			CUtlBuffer::WasLastCharacterCR(); // 1303
			{
				int i; // 1262
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 1166
				CUtlBuffer::PeekPut(
					int offset);  // 1210
				CUtlBuffer::PutTypeBin<char>(
						char src);  // 1204
				CUtlBuffer::PutTypeBin<char>(
						char src);  // 1264
			}
			CUtlBuffer::PutTabs(); // 1305
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1308
			CUtlBuffer::PutChar(
				char c);  // 1782
			CUtlBuffer::IsText(); // 1253
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1256
			CUtlBuffer::WasLastCharacterCR(); // 1303
			{
				int i; // 1262
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 1166
				CUtlBuffer::PeekPut(
					int offset);  // 1210
				CUtlBuffer::PutTypeBin<char>(
						char src);  // 1204
				CUtlBuffer::PutTypeBin<char>(
						char src);  // 1264
			}
			CUtlBuffer::PutTabs(); // 1305
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1308
			CUtlBuffer::PutChar(
				char c);  // 1783
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1796
	}
	CUtlBuffer::IsText(); // 1725
	CUtlBuffer::IsText(); // 1725
	CUtlBuffer::ContainsCRLF(); // 1728
	CUtlBuffer::ContainsCRLF(); // 1728
	CUtlBuffer::TellMaxPut(); // 1731
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1551
	CUtlBuffer::Purge(); // 1733
	CUtlBuffer::IsText(); // 1432
	CUtlBuffer::ContainsCRLF(); // 1736
	CUtlBuffer::TellPut(); // 1740
	CUtlBuffer::TellGet(); // 1739
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 1744
	CUtlBuffer::TellMaxPut(); // 1796
} /* size: 0, variables: 9, inline expansions: 16 (219 bytes) */

// <0054492C> tier0/utlbuffer.cpp:1807
// function calls: 10
void CUtlBuffer::Swap(CUtlBuffer& buf)
{
	V_swap_through_temp<int>(int& x,
				int& y);  // 1809
	V_swap_through_temp<int>(int& x,
				int& y);  // 1810
	V_swap_through_temp<int>(int& x,
				int& y);  // 1811
	V_swap_through_temp<unsigned char>(unsigned char& x,
						unsigned char& y);  // 1812
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 535
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<unsigned char*>(unsigned char *& x,
						unsigned char *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<unsigned char, int>::Swap(
		CUtlMemory<unsigned char, int>& mem);  // 1813
} /* size: 0, inline expansions: 10 (222 bytes) */

// <0054471F> tier0/utlbuffer.cpp:1820
// function calls: 7
void CUtlBuffer::Swap(CUtlMemory<unsigned char, int>& mem)
{
	CUtlMemory<unsigned char, int>::Count(); // 1823
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 535
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<unsigned char*>(unsigned char *& x,
						unsigned char *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<unsigned char, int>::Swap(
		CUtlMemory<unsigned char, int>& mem);  // 1826
} /* size: 0, inline expansions: 7 (175 bytes) */

// <00544699> tier0/utlbuffer.cpp:1833
void CUtlInplaceBuffer::CUtlInplaceBuffer(int growSize, int initSize, int nFlags)
{
} /* size: 9 */

// <00544462> tier0/utlbuffer.cpp:1838
// variables: 4
// function calls: 4
void CUtlInplaceBuffer::InplaceGetLinePtr(char** ppszInBufferPtr, int* pnLineLength)
{
	const char   __FUNCTION__; // 33489
	int nLineLen; // 1842
	char* pszLine; // 1851
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1840
	}
	CUtlBuffer::IsText(); // 1840
	CUtlBuffer::ContainsCRLF(); // 1840
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 1851
} /* size: 0, variables: 3, inline expansions: 4 (67 bytes) */

// <00544333> tier0/utlbuffer.cpp:1864
// variables: 5
void CUtlInplaceBuffer::InplaceGetLinePtr()
{
	char* pszLine; // 1866
	int nLineLen; // 1867
	const char   __FUNCTION__; // 33489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1891
	}
} /* size: 0, variables: 3 */

