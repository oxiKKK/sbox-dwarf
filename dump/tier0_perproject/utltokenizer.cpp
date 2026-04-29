
//
// tier0_perproject/utltokenizer.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 89
//

// <06E9B227> tier0_perproject/utltokenizer.cpp:11
// variables: 2
inline bool IsDelimiter(const characterset_t& charSet, char nChar, char nPrevChar, bool bWhiteSpaceIsDelimiter)
{
	bool bUnescapedQuote; // 13
	bool bWhitespaceOrInvalidChar; // 14
} /* size: 0, variables: 2 */

// <06E9B1FA> tier0_perproject/utltokenizer.cpp:21
void CUtlTokenReference::CUtlTokenReference()
{
} /* size: 23 */

// <06E9B1AA> tier0_perproject/utltokenizer.cpp:35
void CUtlTokenReference::CUtlTokenReference(const CUtlTokenReference& other)
{
} /* size: 0 */

// <06E9BA5C> tier0_perproject/utltokenizer.cpp:49
void CUtlTokenReference::MakeInvalid()
{
} /* size: 0 */

// <06E9BA99> tier0_perproject/utltokenizer.cpp:67
void CUtlTokenReference::Init(const char* pPreambleStart, const char* pStart, const char* pEnd, int nTokenNumber)
{
} /* size: 0 */

// <06E9B0D9> tier0_perproject/utltokenizer.cpp:85
void CUtlTokenReference::~CUtlTokenReference()
{
} /* size: 25 */

// <06E9AF83> tier0_perproject/utltokenizer.cpp:96
// variable: 1
// function calls: 3
void CUtlTokenReference::AsString()
{
	{
		int nLen; // 100
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 102
	}
	CUtlTokenReference::IsValid(); // 98
} /* size: 128, inline expansions: 1 (23 bytes) */

// <06E9AC4F> tier0_perproject/utltokenizer.cpp:120
// variable: 1
// function calls: 5
void CUtlTokenReference::AsString(CBufferString* pOutResult)
{
	int nLen; // 122
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 913
	CBufferString::SetDirect(
			const char* pString,
			size_t nChars);  // 123
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <06E99E10> tier0_perproject/utltokenizer.cpp:176
// variables: 6
// function calls: 23
void UtlTokenizer_UnqescapeOrUnquoteString(const char* pStart, const char* pEnd, bool bPerformUnescape, CBufferString* pOutResult)
{
	const char   __FUNCTION__; // 25922
	bool bEscaped; // 208
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 193
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
	{
		const char* pStr; // 209
		{
			char c; // 211
			CBufferString::Append(
				char ch,
				bool bExact);  // 1023
			CBufferString::operator+=(
					char c);  // 237
		}
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1114
	CBufferString::operator=(
			const char* pSrc);  // 178
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 913
	CBufferString::SetDirect(
			const char* pString,
			size_t nChars);  // 183
	CBufferString::Length(); // 191
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 788
	CBufferString::operator[](
			int i);  // 193
	CBufferString::RemoveHead(
			int nChars);  // 194
	CBufferString::Length(); // 196
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 788
	CBufferString::operator[](
			int i);  // 198
	CBufferString::Length(); // 983
	CBufferString::RemoveTail(
			int nChars);  // 199
} /* size: 0, variables: 2, inline expansions: 21 (583 bytes) */

// <035047BE> tier0_perproject/utltokenizer.cpp:176
// variables: 6
// function calls: 23
void UtlTokenizer_UnqescapeOrUnquoteString(const char* pStart, const char* pEnd, bool bPerformUnescape, CBufferString* pOutResult)
{
	const char   __FUNCTION__; // 56805
	bool bEscaped; // 208
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 193
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
	{
		const char* pStr; // 209
		{
			char c; // 211
			CBufferString::Append(
				char ch,
				bool bExact);  // 1023
			CBufferString::operator+=(
					char c);  // 237
		}
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1114
	CBufferString::operator=(
			const char* pSrc);  // 178
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 913
	CBufferString::SetDirect(
			const char* pString,
			size_t nChars);  // 183
	CBufferString::Length(); // 191
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 788
	CBufferString::operator[](
			int i);  // 193
	CBufferString::RemoveHead(
			int nChars);  // 194
	CBufferString::Length(); // 196
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 788
	CBufferString::operator[](
			int i);  // 198
	CBufferString::Length(); // 983
	CBufferString::RemoveTail(
			int nChars);  // 199
} /* size: 0, variables: 2, inline expansions: 21 (583 bytes) */

// <006F5CC2> tier0_perproject/utltokenizer.cpp:176
// variables: 6
// function calls: 23
void UtlTokenizer_UnqescapeOrUnquoteString(const char* pStart, const char* pEnd, bool bPerformUnescape, CBufferString* pOutResult)
{
	const char   __FUNCTION__; // 7385
	bool bEscaped; // 208
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 193
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
	{
		const char* pStr; // 209
		{
			char c; // 211
			CBufferString::Append(
				char ch,
				bool bExact);  // 1023
			CBufferString::operator+=(
					char c);  // 237
		}
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1114
	CBufferString::operator=(
			const char* pSrc);  // 178
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 913
	CBufferString::SetDirect(
			const char* pString,
			size_t nChars);  // 183
	CBufferString::Length(); // 191
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 788
	CBufferString::operator[](
			int i);  // 193
	CBufferString::RemoveHead(
			int nChars);  // 194
	CBufferString::Length(); // 196
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 788
	CBufferString::operator[](
			int i);  // 198
	CBufferString::Length(); // 983
	CBufferString::RemoveTail(
			int nChars);  // 199
} /* size: 0, variables: 2, inline expansions: 21 (0 bytes) */

// <00D7E2D3> tier0_perproject/utltokenizer.cpp:176
// variables: 6
// function calls: 23
void UtlTokenizer_UnqescapeOrUnquoteString(const char* pStart, const char* pEnd, bool bPerformUnescape, CBufferString* pOutResult)
{
	const char   __FUNCTION__; // 20970
	bool bEscaped; // 208
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 193
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
	{
		const char* pStr; // 209
		{
			char c; // 211
			CBufferString::Append(
				char ch,
				bool bExact);  // 1023
			CBufferString::operator+=(
					char c);  // 237
		}
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1114
	CBufferString::operator=(
			const char* pSrc);  // 178
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 913
	CBufferString::SetDirect(
			const char* pString,
			size_t nChars);  // 183
	CBufferString::Length(); // 191
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 788
	CBufferString::operator[](
			int i);  // 193
	CBufferString::RemoveHead(
			int nChars);  // 194
	CBufferString::Length(); // 196
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 788
	CBufferString::operator[](
			int i);  // 198
	CBufferString::Length(); // 983
	CBufferString::RemoveTail(
			int nChars);  // 199
} /* size: 0, variables: 2, inline expansions: 21 (583 bytes) */

// <00345343> tier0_perproject/utltokenizer.cpp:176
// variables: 6
// function calls: 23
void UtlTokenizer_UnqescapeOrUnquoteString(const char* pStart, const char* pEnd, bool bPerformUnescape, CBufferString* pOutResult)
{
	const char   __FUNCTION__; // 55690
	bool bEscaped; // 208
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 193
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
	{
		const char* pStr; // 209
		{
			char c; // 211
			CBufferString::Append(
				char ch,
				bool bExact);  // 1023
			CBufferString::operator+=(
					char c);  // 237
		}
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1114
	CBufferString::operator=(
			const char* pSrc);  // 178
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 913
	CBufferString::SetDirect(
			const char* pString,
			size_t nChars);  // 183
	CBufferString::Length(); // 191
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 788
	CBufferString::operator[](
			int i);  // 193
	CBufferString::RemoveHead(
			int nChars);  // 194
	CBufferString::Length(); // 196
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 788
	CBufferString::operator[](
			int i);  // 198
	CBufferString::Length(); // 983
	CBufferString::RemoveTail(
			int nChars);  // 199
} /* size: 0, variables: 2, inline expansions: 21 (0 bytes) */

// <06E99DD9> tier0_perproject/utltokenizer.cpp:244
void UtlTokenizer_UnescapeString(const char* pStart, const char* pEnd, CBufferString* pOutResult)
{
} /* size: 0 */

// <06E99DA2> tier0_perproject/utltokenizer.cpp:252
void UtlTokenizer_UnquoteString(const char* pStart, const char* pEnd, CBufferString* pOutResult)
{
} /* size: 0 */

// <06E99CEF> tier0_perproject/utltokenizer.cpp:260
// function call: 1
void CUtlTokenReference::AsUnescapedString(CBufferString* pOutResult)
{
	UtlTokenizer_UnescapeString(const char* pStart,
					const char* pEnd,
					CBufferString* pOutResult);  // 262
} /* size: 25, inline expansions: 1 (18 bytes) */

// <06E99C3C> tier0_perproject/utltokenizer.cpp:268
// function call: 1
void CUtlTokenReference::AsUnquotedString(CBufferString* pOutResult)
{
	UtlTokenizer_UnquoteString(const char* pStart,
					const char* pEnd,
					CBufferString* pOutResult);  // 270
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06E9BB0A> tier0_perproject/utltokenizer.cpp:276
void CUtlTokenReference::IsValid()
{
} /* size: 34 */

// <06E99ADC> tier0_perproject/utltokenizer.cpp:294
// variables: 3
// function calls: 4
void MakeSafeIdentifier(CBufferString* pInOutStr)
{
	int nLen; // 299
	{
		int i; // 303
		{
			char* pChar; // 305
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 808
			CBufferString::GetForModify(); // 305
		}
	}
	CBufferString::Length(); // 299
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06E99926> tier0_perproject/utltokenizer.cpp:322
// variable: 1
// function calls: 5
void CUtlTokenReference::GetPreamble(CBufferString* pOutResult)
{
	int nLen; // 324
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 913
	CBufferString::SetDirect(
			const char* pString,
			size_t nChars);  // 325
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <06E9BF99> tier0_perproject/utltokenizer.cpp:331
// function calls: 5
void CUtlTokenReference::IsIdentifier(bool bIncludeBoolLiterals, bool bIncludeCppSeparators)
{
	CUtlTokenReference::IsValid(); // 333
	CUtlTokenReference::IsEqual(
		const char* pExpectedString,
		bool bCaseSensitive);  // 439
	CUtlTokenReference::IsEqual(
		const char* pExpectedString,
		bool bCaseSensitive);  // 439
	CUtlTokenReference::IsBool(); // 339
	CUtlTokenReference::IsIdentifier(
			bool bIncludeBoolLiterals,
			bool bIncludeCppSeparators);  // 331
} /* size: 151, inline expansions: 5 (202 bytes) */

// <06E998EF> tier0_perproject/utltokenizer.cpp:331
void CUtlTokenReference::IsIdentifier(bool bIncludeBoolLiterals, bool bIncludeCppSeparators)
{
} /* size: 0 */

// <06E99867> tier0_perproject/utltokenizer.cpp:351
// variable: 1
// function call: 1
void CUtlTokenReference::IsInteger()
{
	{
		const char* pChar; // 356
	}
	CUtlTokenReference::IsValid(); // 353
} /* size: 83, inline expansions: 1 (29 bytes) */

// <06E997DF> tier0_perproject/utltokenizer.cpp:368
// variable: 1
// function call: 1
void CUtlTokenReference::IsFloat()
{
	{
		const char* pChar; // 374
	}
	CUtlTokenReference::IsValid(); // 371
} /* size: 107, inline expansions: 1 (29 bytes) */

// <06E99724> tier0_perproject/utltokenizer.cpp:386
// function call: 1
void CUtlTokenReference::IsSpecialFloat(double* pOutValue)
{
	UtlTokenizer_IsSpecialFloat(const char* pStart,
					const char* pEnd,
					double* pOutValue);  // 388
} /* size: 35, inline expansions: 1 (17 bytes) */

// <06E9BE9A> tier0_perproject/utltokenizer.cpp:437
// function calls: 2
void CUtlTokenReference::IsBool()
{
	CUtlTokenReference::IsEqual(
		const char* pExpectedString,
		bool bCaseSensitive);  // 439
	CUtlTokenReference::IsEqual(
		const char* pExpectedString,
		bool bCaseSensitive);  // 439
} /* size: 77, inline expansions: 2 (53 bytes) */

// <06E995BE> tier0_perproject/utltokenizer.cpp:437
void CUtlTokenReference::IsBool()
{
} /* size: 0 */

// <06E99567> tier0_perproject/utltokenizer.cpp:445
// function call: 1
void CUtlTokenReference::IsStringLiteral()
{
	CUtlTokenReference::IsValid(); // 447
} /* size: 75, inline expansions: 1 (31 bytes) */

// <06E994C0> tier0_perproject/utltokenizer.cpp:456
// variable: 1
// function calls: 2
void CUtlTokenReference::IsWhitespace()
{
	{
		const char* pChar; // 461
		V_isspace(int c); // 463
	}
	CUtlTokenReference::IsValid(); // 458
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06E99397> tier0_perproject/utltokenizer.cpp:473
// function calls: 2
bool UtlTokenizer_IsMultilineString(const char* pStart, const char* pEnd)
{
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 478
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 479
} /* size: 112, inline expansions: 2 (34 bytes) */

// <06E991CB> tier0_perproject/utltokenizer.cpp:518
// function call: 1
void CUtlTokenReference::IsMultiLineStringLiteral()
{
	CUtlTokenReference::IsValid(); // 520
} /* size: 53, inline expansions: 1 (29 bytes) */

// <06E9BE31> tier0_perproject/utltokenizer.cpp:529
void CUtlTokenReference::IsEqual(const char* pExpectedString, bool bCaseSensitive)
{
} /* size: 23 */

// <06E99139> tier0_perproject/utltokenizer.cpp:537
// variable: 1
bool UtlTokenizer_IsEqual(const char* pStart, const char* pEnd, const char* pExpectedString, bool bCaseSensitive)
{
	{
		const char* pChar; // 542
	}
} /* size: 0 */

// <06E98487> tier0_perproject/utltokenizer.cpp:669
// function calls: 19
void CUtlTokenizer::CUtlTokenizer()
{
	characterset_t::characterset_t(); // 669
	CUtlMemory<CUtlTokenReference, int>::CUtlMemory(
			CUtlTokenReference* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CUtlTokenReference, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CUtlTokenReference, int>::CUtlMemoryFixedGrowable_Base(
					CUtlTokenReference* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, CUtlTokenReference>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CUtlTokenReference, 8>::CUtlVectorFixedGrowable(
				int growSize);  // 669
	CUtlTokenReference::CUtlTokenReference(); // 669
	CUtlTokenizer::Clear(); // 671
	CUtlString::CUtlString(); // 669
	CUtlMemory<TokenWarning_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TokenWarning_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::CUtlVector(); // 669
} /* size: 0, inline expansions: 19 (0 bytes) */

// <06E9846A> tier0_perproject/utltokenizer.cpp:669
void CUtlTokenizer::CUtlTokenizer()
{
} /* size: 0 */

// <06E97E9F> tier0_perproject/utltokenizer.cpp:677
// function calls: 23
void CUtlTokenizer::CUtlTokenizer(const char* pSource, const char* pFilename)
{
	characterset_t::characterset_t(); // 677
	{
	}
	AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, CUtlTokenReference>::AlignedByteArray_t(); // 228
	CUtlMemory<CUtlTokenReference, int>::CUtlMemory(
			CUtlTokenReference* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CUtlTokenReference, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CUtlTokenReference, int>::CUtlMemoryFixedGrowable_Base(
					CUtlTokenReference* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CUtlTokenReference, 8>::CUtlVectorFixedGrowable(
				int growSize);  // 677
	V_strlen(const char* str); // 716
	CUtlTokenizer::Clear(); // 727
	CUtlString::operator=(
			const char* src);  // 733
	CUtlTokenizer::Init(
		const char* pSrcStart,
		int nLength,
		const char* pFilename);  // 716
	CUtlTokenizer::Init(
		const char* pSource,
		const char* pFilename);  // 679
	CUtlTokenReference::CUtlTokenReference(); // 677
	CUtlString::CUtlString(); // 677
	CUtlMemory<TokenWarning_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TokenWarning_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::CUtlVector(); // 677
} /* size: 0, inline expansions: 23 (0 bytes) */

// <06E97E68> tier0_perproject/utltokenizer.cpp:677
void CUtlTokenizer::CUtlTokenizer(const char* pSource, const char* pFilename)
{
} /* size: 0 */

// <06E97900> tier0_perproject/utltokenizer.cpp:685
// function calls: 21
void CUtlTokenizer::CUtlTokenizer(const char* pSrcStart, int nLength, const char* pFilename)
{
	characterset_t::characterset_t(); // 685
	{
	}
	AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, CUtlTokenReference>::AlignedByteArray_t(); // 228
	CUtlMemory<CUtlTokenReference, int>::CUtlMemory(
			CUtlTokenReference* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CUtlTokenReference, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CUtlTokenReference, int>::CUtlMemoryFixedGrowable_Base(
					CUtlTokenReference* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CUtlTokenReference, 8>::CUtlVectorFixedGrowable(
				int growSize);  // 685
	CUtlTokenReference::CUtlTokenReference(); // 685
	CUtlTokenizer::Clear(); // 727
	CUtlString::operator=(
			const char* src);  // 733
	CUtlTokenizer::Init(
		const char* pSrcStart,
		int nLength,
		const char* pFilename);  // 687
	CUtlString::CUtlString(); // 685
	CUtlMemory<TokenWarning_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TokenWarning_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::CUtlVector(); // 685
} /* size: 344, inline expansions: 21 (560 bytes) */

// <06E978BC> tier0_perproject/utltokenizer.cpp:685
void CUtlTokenizer::CUtlTokenizer(const char* pSrcStart, int nLength, const char* pFilename)
{
} /* size: 0 */

// <06E9C189> tier0_perproject/utltokenizer.cpp:693
void CUtlTokenizer::Clear()
{
} /* size: 0 */

// <06E9C1DA> tier0_perproject/utltokenizer.cpp:714
// function calls: 4
void CUtlTokenizer::Init(const char* pSource, const char* pFilename)
{
	V_strlen(const char* str); // 716
	CUtlTokenizer::Clear(); // 727
	CUtlString::operator=(
			const char* src);  // 733
	CUtlTokenizer::Init(
		const char* pSrcStart,
		int nLength,
		const char* pFilename);  // 716
} /* size: 0, inline expansions: 4 (0 bytes) */

// <06E97868> tier0_perproject/utltokenizer.cpp:714
void CUtlTokenizer::Init(const char* pSource, const char* pFilename)
{
} /* size: 0 */

// <06E9C368> tier0_perproject/utltokenizer.cpp:721
// function calls: 2
void CUtlTokenizer::Init(const char* pSrcStart, int nLength, const char* pFilename)
{
	CUtlTokenizer::Clear(); // 727
	CUtlString::operator=(
			const char* src);  // 733
} /* size: 0, inline expansions: 2 (0 bytes) */

// <06E97824> tier0_perproject/utltokenizer.cpp:721
void CUtlTokenizer::Init(const char* pSrcStart, int nLength, const char* pFilename)
{
} /* size: 0 */

// <06E9769A> tier0_perproject/utltokenizer.cpp:741
// variable: 1
// function calls: 6
void CUtlTokenizer::Rewind()
{
	{
		int i; // 1721
		CUtlMemory<CUtlTokenReference, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Element(
			int i);  // 1723
		CUtlTokenReference::~CUtlTokenReference(); // 1526
		Destruct<CUtlTokenReference>(CUtlTokenReference* pMemory); // 1723
	}
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::RemoveAll(); // 745
	CUtlTokenReference::MakeInvalid(); // 746
} /* size: 201, inline expansions: 2 (156 bytes) */

// <06E97616> tier0_perproject/utltokenizer.cpp:752
void CUtlTokenizer::SetTokenDelimiters(const char* pDelimiterChars)
{
} /* size: 39 */

// <06E975B4> tier0_perproject/utltokenizer.cpp:762
void CUtlTokenizer::SetParseStringsAsAtomicTokens(bool bParseStringsAsAtomicTokens)
{
} /* size: 0 */

// <06E97552> tier0_perproject/utltokenizer.cpp:772
void CUtlTokenizer::SetSkipComments(bool bSkipComments)
{
} /* size: 0 */

// <06E974F0> tier0_perproject/utltokenizer.cpp:782
void CUtlTokenizer::SetSkipWhitespace(bool bSkipWhitespace)
{
} /* size: 0 */

// <06E9748E> tier0_perproject/utltokenizer.cpp:792
void CUtlTokenizer::SetWhitespaceIsDelimiter(bool bWhiteSpaceIsDelimiter)
{
} /* size: 0 */

// <06E9742C> tier0_perproject/utltokenizer.cpp:802
void CUtlTokenizer::SetAllowBackslashStringEscapes(bool bAllowBackslashStringEscapes)
{
} /* size: 0 */

// <06E9C475> tier0_perproject/utltokenizer.cpp:812
// function calls: 5
void CUtlTokenizer::PeekIdentifier(int nTokenIndex)
{
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::operator[](
			int i);  // 817
	CUtlTokenReference::IsValid(); // 333
	CUtlTokenReference::IsIdentifier(
			bool bIncludeBoolLiterals,
			bool bIncludeCppSeparators);  // 817
	CUtlTokenizer::PeekIdentifier(
			int nTokenIndex);  // 812
} /* size: 95, inline expansions: 5 (155 bytes) */

// <06E97402> tier0_perproject/utltokenizer.cpp:812
void CUtlTokenizer::PeekIdentifier(int nTokenIndex)
{
} /* size: 0 */

// <06E9C5DC> tier0_perproject/utltokenizer.cpp:823
// function calls: 4
void CUtlTokenizer::PeekAtomicToken(int nTokenIndex, const char* pExpectedString, bool bCaseSensitive)
{
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::operator[](
			int i);  // 828
	CUtlTokenReference::IsEqual(
		const char* pExpectedString,
		bool bCaseSensitive);  // 828
	CUtlTokenizer::PeekAtomicToken(
			int nTokenIndex,
			const char* pExpectedString,
			bool bCaseSensitive);  // 823
} /* size: 91, inline expansions: 4 (79 bytes) */

// <06E973BE> tier0_perproject/utltokenizer.cpp:823
void CUtlTokenizer::PeekAtomicToken(int nTokenIndex, const char* pExpectedString, bool bCaseSensitive)
{
} /* size: 0 */

// <06E972C1> tier0_perproject/utltokenizer.cpp:834
// function calls: 2
void CUtlTokenizer::PeekToken(int nTokenIndex, CUtlTokenReference* pOutToken)
{
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::operator[](
			int i);  // 841
} /* size: 109, inline expansions: 2 (0 bytes) */

// <06E96E9C> tier0_perproject/utltokenizer.cpp:850
// variable: 1
// function calls: 16
void CUtlTokenizer::ConsumeIdentifier(CUtlTokenReference* pOutToken)
{
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::operator[](
			int i);  // 817
	CUtlTokenReference::IsValid(); // 333
	CUtlTokenReference::IsIdentifier(
			bool bIncludeBoolLiterals,
			bool bIncludeCppSeparators);  // 817
	CUtlTokenizer::PeekIdentifier(
			int nTokenIndex);  // 812
	CUtlTokenizer::PeekIdentifier(
			int nTokenIndex);  // 852
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Head(); // 860
	{
		int i; // 1670
		CUtlTokenReference::~CUtlTokenReference(); // 1526
		Destruct<CUtlTokenReference>(CUtlTokenReference* pMemory); // 1671
	}
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1687
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::RemoveMultipleFromHead(
				int num);  // 861
} /* size: 319, inline expansions: 14 (446 bytes) */

// <06E9C75C> tier0_perproject/utltokenizer.cpp:868
// variable: 1
// function calls: 13
void CUtlTokenizer::ConsumeArbitraryToken(CUtlTokenReference* pOutToken)
{
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::operator[](
			int i);  // 875
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Head(); // 878
	{
		int i; // 1670
		CUtlTokenReference::~CUtlTokenReference(); // 1526
		Destruct<CUtlTokenReference>(CUtlTokenReference* pMemory); // 1671
	}
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1687
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::RemoveMultipleFromHead(
				int num);  // 879
	CUtlTokenizer::ConsumeArbitraryToken(
				CUtlTokenReference* pOutToken);  // 868
} /* size: 252, inline expansions: 11 (385 bytes) */

// <06E96E72> tier0_perproject/utltokenizer.cpp:868
void CUtlTokenizer::ConsumeArbitraryToken(CUtlTokenReference* pOutToken)
{
} /* size: 0 */

// <06E9CAB9> tier0_perproject/utltokenizer.cpp:886
// variable: 1
// function calls: 14
void CUtlTokenizer::ConsumeAtomicToken(const char* pExpectedString, bool bCaseSensitive)
{
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::operator[](
			int i);  // 828
	CUtlTokenReference::IsEqual(
		const char* pExpectedString,
		bool bCaseSensitive);  // 828
	CUtlTokenizer::PeekAtomicToken(
			int nTokenIndex,
			const char* pExpectedString,
			bool bCaseSensitive);  // 823
	CUtlTokenizer::PeekAtomicToken(
			int nTokenIndex,
			const char* pExpectedString,
			bool bCaseSensitive);  // 888
	{
		int i; // 1670
		CUtlTokenReference::~CUtlTokenReference(); // 1526
		Destruct<CUtlTokenReference>(CUtlTokenReference* pMemory); // 1671
	}
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1687
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::RemoveMultipleFromHead(
				int num);  // 892
	CUtlTokenizer::ConsumeAtomicToken(
				const char* pExpectedString,
				bool bCaseSensitive);  // 886
} /* size: 237, inline expansions: 12 (409 bytes) */

// <06E96E3B> tier0_perproject/utltokenizer.cpp:886
void CUtlTokenizer::ConsumeAtomicToken(const char* pExpectedString, bool bCaseSensitive)
{
} /* size: 0 */

// <06E964EE> tier0_perproject/utltokenizer.cpp:899
// variables: 4
// function calls: 33
void CUtlTokenizer::ConsumeUntilAtomic(const char* pExpectedString, bool bCaseSensitive, CUtlTokenReference* pOutConsumedSpan)
{
	const char* pPreambleStart; // 901
	const char* pStart; // 902
	const char* pEnd; // 910
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Head(); // 1336
	CUtlTokenReference::GetPreamblePtr(); // 1336
	CUtlTokenReference::IsValid(); // 1339
	CUtlTokenizer::GetCurrentPreamblePtr(); // 1333
	CUtlTokenizer::GetCurrentPreamblePtr(); // 901
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Head(); // 1352
	CUtlTokenReference::GetStartPtr(); // 1352
	CUtlTokenizer::GetCurrentReadPtr(); // 902
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::operator[](
			int i);  // 828
	CUtlTokenReference::IsEqual(
		const char* pExpectedString,
		bool bCaseSensitive);  // 828
	CUtlTokenizer::PeekAtomicToken(
			int nTokenIndex,
			const char* pExpectedString,
			bool bCaseSensitive);  // 823
	CUtlTokenizer::PeekAtomicToken(
			int nTokenIndex,
			const char* pExpectedString,
			bool bCaseSensitive);  // 904
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Head(); // 878
	{
		int i; // 1670
		CUtlTokenReference::~CUtlTokenReference(); // 1526
		Destruct<CUtlTokenReference>(CUtlTokenReference* pMemory); // 1671
	}
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1687
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::RemoveMultipleFromHead(
				int num);  // 879
	CUtlTokenizer::ConsumeArbitraryToken(
				CUtlTokenReference* pOutToken);  // 868
	CUtlTokenizer::ConsumeArbitraryToken(
				CUtlTokenReference* pOutToken);  // 239
	CUtlTokenizer::ConsumeNextToken(); // 906
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Head(); // 1352
	CUtlTokenReference::GetStartPtr(); // 1352
	CUtlTokenizer::GetCurrentReadPtr(); // 910
	CUtlTokenReference::Init(
		const char* pPreambleStart,
		const char* pStart,
		const char* pEnd,
		int nTokenNumber);  // 913
} /* size: 0, variables: 3, inline expansions: 31 (0 bytes) */

// <06E96422> tier0_perproject/utltokenizer.cpp:922
// function call: 1
void CUtlTokenizer::ConsumeArbitraryBytes(int nBytes)
{
	CUtlTokenReference::Init(
		const char* pPreambleStart,
		const char* pStart,
		const char* pEnd,
		int nTokenNumber);  // 939
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06E96250> tier0_perproject/utltokenizer.cpp:948
// variables: 2
// function calls: 6
void CUtlTokenizer::ReadUpThroughToken(int nTokenIndex)
{
	int nTokensNeeded; // 951
	{
		int i; // 952
	}
	CUtlMemory<CUtlTokenReference, int>::IsGrowable(); // 881
	CUtlMemory<CUtlTokenReference, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CUtlTokenReference, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::EnsureCapacity(
			int num);  // 950
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Count(); // 951
} /* size: 245, variables: 1, inline expansions: 6 (341 bytes) */

// <06E95D78> tier0_perproject/utltokenizer.cpp:966
// variables: 5
// function calls: 18
void CUtlTokenizer::ReadToken()
{
	int s_nDebugBreakForToken; // 968
	const char* pPreambleStart; // 974
	const char* pStart; // 975
	const char* pEnd; // 976
	CUtlTokenReference& t; // 980
	CUtlMemory<CUtlTokenReference, int>::NumAllocated(); // 1143
	CUtlMemory<CUtlTokenReference, int>::Base(); // 112
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Base(); // 368
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CUtlTokenReference, int>::IsGrowable(); // 823
	CUtlMemory<CUtlTokenReference, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlTokenReference, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlTokenReference, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::GrowMemory(
			int num);  // 1145
	CUtlTokenReference::CUtlTokenReference(); // 1479
	Construct<CUtlTokenReference>(CUtlTokenReference* pMemory); // 1148
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Element(
		int i);  // 1148
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::AddToTail(); // 980
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::operator[](
			int i);  // 980
	CUtlTokenReference::Init(
		const char* pPreambleStart,
		const char* pStart,
		const char* pEnd,
		int nTokenNumber);  // 981
	Plat_IsInDebugSession(void); // 971
} /* size: 618, variables: 5, inline expansions: 18 (1178 bytes) */

// <06E95BF7> tier0_perproject/utltokenizer.cpp:993
// variable: 1
// function calls: 6
void CUtlTokenizer::ResetLookahead()
{
	{
		int i; // 1721
		CUtlMemory<CUtlTokenReference, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Element(
			int i);  // 1723
		CUtlTokenReference::~CUtlTokenReference(); // 1526
		Destruct<CUtlTokenReference>(CUtlTokenReference* pMemory); // 1723
	}
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::RemoveAll(); // 995
	CUtlTokenReference::IsValid(); // 999
} /* size: 170, inline expansions: 2 (118 bytes) */

// <06E9581F> tier0_perproject/utltokenizer.cpp:1007
// variables: 10
// function calls: 6
void CUtlTokenizer::ConsumeMultilineStringDelimiter(const char* pExpected, const char* pExpectedCR)
{
	 PeekGetLen; // 1009
	int nLen; // 1011
	int nLenCR; // 1012
	const char* pStr; // 1014
	const char* pStrCR; // 1015
	bool bDelimiter; // 1017
	bool bDelimiterCR; // 1018
	int nConsume; // 1024
	V_strlen(const char* str); // 1011
	V_strlen(const char* str); // 1012
	operator()(const class* __closure,
			int nLength); // 1014
	operator()(const class* __closure,
			int nLength); // 1015
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 1017
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 1018
} /* size: 338, variables: 8, inline expansions: 6 (189 bytes) */

// <06E957ED> tier0_perproject/utltokenizer.cpp:1032
void CUtlTokenizer::ConsumeCPPComment()
{
} /* size: 122 */

// <06E953B2> tier0_perproject/utltokenizer.cpp:1071
// variable: 1
// function calls: 19
void CUtlTokenizer::ConsumeCComment()
{
	TokenWarning_t& warn; // 1100
	CUtlMemory<TokenWarning_t, int>::NumAllocated(); // 1143
	CUtlMemory<TokenWarning_t, int>::Base(); // 112
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::Base(); // 368
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<TokenWarning_t, int>::IsGrowable(); // 823
	CUtlMemory<TokenWarning_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<TokenWarning_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<TokenWarning_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlMemory<TokenWarning_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 171
	TokenWarning_t::TokenWarning_t(); // 1479
	Construct<TokenWarning_t>(TokenWarning_t* pMemory); // 1148
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::AddToTail(); // 1156
	CUtlMemory<TokenWarning_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::AddToTailGetPtr(); // 1100
	CUtlString::operator=(
			const char* src);  // 1102
} /* size: 475, variables: 1, inline expansions: 19 (1283 bytes) */

// <06E9449F> tier0_perproject/utltokenizer.cpp:1110
// variables: 22
// function calls: 39
void CUtlTokenizer::ReadTokenChars(const char ** pOutPreambleStart, const char ** pOutStart, const char ** pOutEnd)
{
	 AtEndOfBuffer; // 1114
	 PeekGet; // 1115
	 SeekGetCurrent; // 1116
	 GetChar; // 1117
	char nFirstChar; // 1159
	char nPrevChar; // 1247
	{
		const char* pPeekPos; // 1134
		operator()(const class* __closure); // 1134
		V_isspace(int c); // 1135
		operator()(const class* __closure); // 1138
	}
	{
		char nQuoteType; // 1168
		bool bWarnedForNewlineInStringLiteral; // 1199
		bool bPrevCharWasEscaped; // 1200
		char prevChar; // 1201
		char prevPrevChar; // 1202
		{
			bool bEscaped; // 1182
			operator()(const class* __closure); // 1184
			operator()(const class* __closure); // 1193
			operator()(const class* __closure); // 1189
			operator()(const class* __closure); // 1178
		}
		{
			char nCurChar; // 1205
			bool bCurrentCharIsEscaped; // 1206
			bool bUnescapedEndQuote; // 1207
			bool bSlashR; // 1214
			bool bSlashN; // 1215
			bool bSlashRN; // 1216
			{
				TokenWarning_t& warn; // 1222
				CUtlMemory<TokenWarning_t, int>::NumAllocated(); // 1143
				CUtlMemory<TokenWarning_t, int>::Base(); // 112
				CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::Base(); // 368
				CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::ResetDbgInfo(); // 824
				CUtlMemory<TokenWarning_t, int>::IsGrowable(); // 823
				CUtlMemory<TokenWarning_t, int>::IsExternallyAllocated(); // 859
				CUtlMemory<TokenWarning_t, int>::IsExternallyAllocated(); // 861
				CUtlMemory<TokenWarning_t, int>::Grow(
					int num);  // 806
				CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::GrowMemory(
						int num);  // 1145
				CUtlMemory<TokenWarning_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::Element(
					int i);  // 1148
				CUtlString::CUtlString(); // 171
				TokenWarning_t::TokenWarning_t(); // 1479
				Construct<TokenWarning_t>(TokenWarning_t* pMemory); // 1148
				CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::AddToTail(); // 1222
				CUtlString::operator=(
						const char* src);  // 1224
				CUtlMemory<TokenWarning_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::operator[](
						int i);  // 1222
			}
			operator()(const class* __closure); // 1205
		}
		operator()(const class* __closure); // 1203
	}
	{
		char nCurChar; // 1256
		operator()(const class* __closure); // 1250
		operator()(const class* __closure); // 1256
		IsDelimiter(const characterset_t& charSet,
				char nChar,
				char nPrevChar,
				bool bWhiteSpaceIsDelimiter);  // 1257
		operator()(const class* __closure,
				int nOffset); // 1259
		operator()(const class* __closure); // 1260
	}
	operator()(const class* __closure); // 1119
	operator()(const class* __closure); // 1127
	operator()(const class* __closure); // 1132
	operator()(const class* __closure); // 1152
	operator()(const class* __closure); // 1155
	operator()(const class* __closure); // 1159
	IsDelimiter(const characterset_t& charSet,
			char nChar,
			char nPrevChar,
			bool bWhiteSpaceIsDelimiter);  // 1240
} /* size: 1524, variables: 6, inline expansions: 7 (85 bytes) */

// <06E9CECD> tier0_perproject/utltokenizer.cpp:1273
void CUtlTokenizer::AnyTokensRemaining()
{
} /* size: 11 */

// <06E943EA> tier0_perproject/utltokenizer.cpp:1281
// function call: 1
void CUtlTokenizer::GetLineNumberForToken(const CUtlTokenReference& token)
{
	CUtlTokenReference::GetStartPtr(); // 1283
} /* size: 13, inline expansions: 1 (0 bytes) */

// <06E9CF17> tier0_perproject/utltokenizer.cpp:1293
// variables: 4
// function calls: 2
void CUtlTokenizer::GetLineNumberForSourcePosition(const char* pSrcPosition)
{
	int nDelta; // 1299
	const char* pCountStart; // 1300
	const char* pCountEnd; // 1301
	{
	}
	{
		const char* p; // 1319
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1296
	}
	CUtlTokenizer::GetLineNumberForSourcePosition(
					const char* pSrcPosition);  // 1293
} /* size: 0, variables: 3, inline expansions: 1 (10 bytes) */

// <06E94314> tier0_perproject/utltokenizer.cpp:1293
// variables: 4
void CUtlTokenizer::GetLineNumberForSourcePosition(const char* pSrcPosition)
{
	int nDelta; // 1299
	const char* pCountStart; // 1300
	const char* pCountEnd; // 1301
	{
	}
	{
		const char* p; // 1319
	}
} /* size: 0, variables: 3 */

// <06E9D029> tier0_perproject/utltokenizer.cpp:1333
// function calls: 5
void CUtlTokenizer::GetCurrentPreamblePtr()
{
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Head(); // 1336
	CUtlTokenReference::GetPreamblePtr(); // 1336
	CUtlTokenReference::IsValid(); // 1339
	CUtlTokenizer::GetCurrentPreamblePtr(); // 1333
} /* size: 0, inline expansions: 5 (0 bytes) */

// <06E942F7> tier0_perproject/utltokenizer.cpp:1333
void CUtlTokenizer::GetCurrentPreamblePtr()
{
} /* size: 0 */

// <06E9D180> tier0_perproject/utltokenizer.cpp:1349
// function calls: 3
void CUtlTokenizer::GetCurrentReadPtr()
{
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Head(); // 1352
	CUtlTokenReference::GetStartPtr(); // 1352
} /* size: 0, inline expansions: 3 (0 bytes) */

// <06E942DA> tier0_perproject/utltokenizer.cpp:1349
void CUtlTokenizer::GetCurrentReadPtr()
{
} /* size: 0 */

// <06E941AB> tier0_perproject/utltokenizer.cpp:1360
// function calls: 3
void CUtlTokenizer::GetCurrentLineNumber()
{
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Head(); // 1364
	CUtlTokenReference::GetStartPtr(); // 1364
} /* size: 61, inline expansions: 3 (7 bytes) */

// <06E93DBF> tier0_perproject/utltokenizer.cpp:1374
// variables: 2
// function calls: 15
void CUtlTokenizer::GetCurrentPreamble(CBufferString* pOutResult)
{
	const char* pStart; // 1376
	const char* pEnd; // 1377
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Head(); // 1336
	CUtlTokenReference::GetPreamblePtr(); // 1336
	CUtlTokenReference::IsValid(); // 1339
	CUtlTokenizer::GetCurrentPreamblePtr(); // 1333
	CUtlTokenizer::GetCurrentPreamblePtr(); // 1376
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Head(); // 1352
	CUtlTokenReference::GetStartPtr(); // 1352
	CUtlTokenizer::GetCurrentReadPtr(); // 1377
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 913
	CBufferString::SetDirect(
			const char* pString,
			size_t nChars);  // 1378
} /* size: 200, variables: 2, inline expansions: 15 (375 bytes) */

// <06E93C07> tier0_perproject/utltokenizer.cpp:1384
// function calls: 7
void CUtlTokenizer::GetCurrentSourceOffset()
{
	BIsSafeNumericCast<unsigned int, long int>(long int value); // 115
	AssertCast<unsigned int, long int>(long int value); // 1389
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Head(); // 1387
	CUtlTokenReference::IsValid(); // 1397
	AssertCast<unsigned int, long int>(long int value); // 1400
	CUtlTokenizer::GetSourceOffsetForToken(
				const CUtlTokenReference& token);  // 1387
} /* size: 0, inline expansions: 7 (0 bytes) */

// <06E9D265> tier0_perproject/utltokenizer.cpp:1395
// function calls: 3
void CUtlTokenizer::GetSourceOffsetForToken(const CUtlTokenReference& token)
{
	CUtlTokenReference::IsValid(); // 1397
	BIsSafeNumericCast<unsigned int, long int>(long int value); // 115
	AssertCast<unsigned int, long int>(long int value); // 1400
} /* size: 0, inline expansions: 3 (0 bytes) */

// <06E93BDD> tier0_perproject/utltokenizer.cpp:1395
void CUtlTokenizer::GetSourceOffsetForToken(const CUtlTokenReference& token)
{
} /* size: 0 */

// <06E93B7A> tier0_perproject/utltokenizer.cpp:1406
// function call: 1
void CUtlTokenizer::HasWarnings()
{
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::Count(); // 1408
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06E93B17> tier0_perproject/utltokenizer.cpp:1414
// function call: 1
void CUtlTokenizer::GetWarningCount()
{
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::Count(); // 1416
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06E93A5A> tier0_perproject/utltokenizer.cpp:1422
// function calls: 2
void CUtlTokenizer::GetWarning(int nIndex)
{
	CUtlMemory<TokenWarning_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::operator[](
			int i);  // 1424
} /* size: 0, inline expansions: 2 (0 bytes) */

// <06E939A6> tier0_perproject/utltokenizer.cpp:1430
// variable: 1
// function calls: 2
void CUtlTokenizer::IsDelimiterOrWhitespace(const CUtlTokenReference& token)
{
	{
		const char* p; // 1432
		CUtlTokenReference::GetStartPtr(); // 1432
		CUtlTokenReference::GetEndPtr(); // 1432
	}
} /* size: 0 */

// <06E938F1> tier0_perproject/utltokenizer.cpp:1450
// function calls: 2
void CUtlTokenizer::GetLastConsumedToken(CUtlTokenReference* pOutToken)
{
	CUtlTokenReference::IsValid(); // 1452
	CUtlTokenReference::MakeInvalid(); // 1463
} /* size: 0, inline expansions: 2 (0 bytes) */

// <06E92E43> tier0_perproject/utltokenizer.cpp:1471
// variables: 5
// function calls: 36
void CUtlTokenizer::ReadBalancedBlockAsSingleToken(const char* pOpenToken, const char* pCloseToken, CUtlTokenReference* pOutResult)
{
	const char* pPreambleStart; // 1476
	const char* pStart; // 1477
	int nBraceCount; // 1479
	const char* pEnd; // 1501
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::operator[](
			int i);  // 828
	CUtlTokenReference::IsEqual(
		const char* pExpectedString,
		bool bCaseSensitive);  // 828
	CUtlTokenizer::PeekAtomicToken(
			int nTokenIndex,
			const char* pExpectedString,
			bool bCaseSensitive);  // 823
	CUtlTokenizer::PeekAtomicToken(
			int nTokenIndex,
			const char* pExpectedString,
			bool bCaseSensitive);  // 1473
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Head(); // 1336
	CUtlTokenReference::GetPreamblePtr(); // 1336
	CUtlTokenReference::IsValid(); // 1339
	CUtlTokenizer::GetCurrentPreamblePtr(); // 1333
	CUtlTokenizer::GetCurrentPreamblePtr(); // 1476
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Head(); // 1352
	CUtlTokenReference::GetStartPtr(); // 1352
	CUtlTokenizer::GetCurrentReadPtr(); // 1477
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::operator[](
			int i);  // 828
	CUtlTokenReference::IsEqual(
		const char* pExpectedString,
		bool bCaseSensitive);  // 828
	CUtlTokenizer::PeekAtomicToken(
			int nTokenIndex,
			const char* pExpectedString,
			bool bCaseSensitive);  // 823
	CUtlTokenizer::PeekAtomicToken(
			int nTokenIndex,
			const char* pExpectedString,
			bool bCaseSensitive);  // 888
	{
		int i; // 1670
		CUtlTokenReference::~CUtlTokenReference(); // 1526
		Destruct<CUtlTokenReference>(CUtlTokenReference* pMemory); // 1671
	}
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1687
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::RemoveMultipleFromHead(
				int num);  // 892
	CUtlTokenizer::ConsumeAtomicToken(
				const char* pExpectedString,
				bool bCaseSensitive);  // 886
	CUtlTokenizer::ConsumeAtomicToken(
				const char* pExpectedString,
				bool bCaseSensitive);  // 1482
	CUtlTokenizer::AnyTokensRemaining(); // 1494
	CUtlMemory<CUtlTokenReference, int>::operator[](
			int i);  // 616
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Head(); // 1352
	CUtlTokenReference::GetStartPtr(); // 1352
	CUtlTokenizer::GetCurrentReadPtr(); // 1501
	CUtlTokenReference::Init(
		const char* pPreambleStart,
		const char* pStart,
		const char* pEnd,
		int nTokenNumber);  // 1502
} /* size: 0, variables: 4, inline expansions: 34 (0 bytes) */

