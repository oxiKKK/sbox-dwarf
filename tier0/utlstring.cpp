
//
// tier0/utlstring.cpp
//
//	referenced by: libtier0.so
//
//	functions: 67
//

// <0058157E> tier0/utlstring.cpp:10
// function calls: 3
void CUtlString::CUtlString(const CBufferString& string)
{
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 13
} /* size: 49, inline expansions: 3 (80 bytes) */

// <00581556> tier0/utlstring.cpp:10
void CUtlString::CUtlString(const CBufferString& string)
{
} /* size: 0 */

// <0058147B> tier0/utlstring.cpp:16
// function calls: 3
void CUtlString::operator=(const CBufferString& string)
{
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 18
} /* size: 66, inline expansions: 3 (80 bytes) */

// <0058138F> tier0/utlstring.cpp:22
// function calls: 3
void CUtlString::operator==(const CBufferString& src)
{
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 24
} /* size: 42, inline expansions: 3 (80 bytes) */

// <005812A3> tier0/utlstring.cpp:27
// function calls: 3
void CUtlString::operator+=(const CBufferString& rhs)
{
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 29
} /* size: 42, inline expansions: 3 (80 bytes) */

// <005811C2> tier0/utlstring.cpp:36
// function calls: 4
int UtlStringFastCompareLess(const CUtlString& lhs, const CUtlString& rhs)
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 38
	CUtlString::Get(); // 99
	CUtlString::String(); // 38
} /* size: 36, inline expansions: 4 (54 bytes) */

// <00581125> tier0/utlstring.cpp:53
// variable: 1
void* CUtlString::AllocMemoryBlock(uint32 length)
{
	void* pMemoryBlock; // 55
} /* size: 69, variables: 1 */

// <005810E0> tier0/utlstring.cpp:71
void CUtlString::FreeMemoryBlock()
{
} /* size: 12 */

// <00581017> tier0/utlstring.cpp:77
// function call: 1
void CUtlString::Acquire(CBufferString* pStr, bool bExact)
{
	CUtlString::SetPtr(
		char* pchString);  // 79
} /* size: 69, inline expansions: 1 (25 bytes) */

// <00581D44> tier0/utlstring.cpp:84
// function calls: 4
void CUtlString::SetDirect(const char* pValue, int nChars)
{
	V_strlen(const char* str); // 90
	{
	}
	{
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 96
	CUtlString::SetDirect(
			const char* pValue,
			int nChars);  // 84
} /* size: 0, inline expansions: 4 (189 bytes) */

// <00580F8E> tier0/utlstring.cpp:84
// variables: 3
void CUtlString::SetDirect(const char* pValue, int nChars)
{
	const char   __FUNCTION__; // 20102
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 90
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 94
	}
} /* size: 0, variables: 1 */

// <00580ED0> tier0/utlstring.cpp:105
// variable: 1
// function call: 1
void CUtlString::Set(const char* pValue)
{
	int length; // 107
	V_strlen(const char* str); // 107
} /* size: 54, variables: 1, inline expansions: 1 (18 bytes) */

// <00580E02> tier0/utlstring.cpp:112
// variable: 1
void CUtlString::Convert(const wchar_t* pValue)
{
	int nBytes; // 120
} /* size: 102, variables: 1 */

// <00580C5D> tier0/utlstring.cpp:126
// variable: 1
// function calls: 4
void CUtlString::SetLength(int nLen)
{
	{
		int prevLen; // 130
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 130
		memset(void* __dest,
			int __ch,
			size_t __len);  // 51
		V_memset(void* dest,
			int fill,
			int count);  // 134
	}
} /* size: 128 */

// <00580BEC> tier0/utlstring.cpp:143
// variable: 1
void CUtlString::GetForModify()
{
	{
		void* pMemoryBlock; // 150
	}
} /* size: 53 */

// <00580B47> tier0/utlstring.cpp:158
// function calls: 2
void CUtlString::operator[](int i)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 163
} /* size: 63, inline expansions: 2 (22 bytes) */

// <00580AE8> tier0/utlstring.cpp:171
// variable: 1
void CUtlString::Purge()
{
	{
		void* pMemoryBlock; // 175
	}
} /* size: 49 */

// <00581F87> tier0/utlstring.cpp:181
// function calls: 5
void CUtlString::IsEqual_CaseSensitive(const char* src)
{
	CUtlString::Get(); // 187
	V_strcmp(const char* s1,
		const char* s2);  // 187
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 185
	CUtlString::IsEqual_CaseSensitive(
				const char* src);  // 181
} /* size: 70, inline expansions: 5 (59 bytes) */

// <00580AC0> tier0/utlstring.cpp:181
void CUtlString::IsEqual_CaseSensitive(const char* src)
{
} /* size: 0 */

// <005809C8> tier0/utlstring.cpp:190
// function calls: 3
void CUtlString::IsEqual_FastCaseInsensitive(const char* src)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 194
	CUtlString::Get(); // 196
} /* size: 70, inline expansions: 3 (37 bytes) */

// <00580983> tier0/utlstring.cpp:200
void CUtlString::ToLowerFast()
{
} /* size: 25 */

// <0058093E> tier0/utlstring.cpp:210
void CUtlString::ToUpperFast()
{
} /* size: 25 */

// <00580729> tier0/utlstring.cpp:220
// variables: 3
// function calls: 3
void CUtlString::UnicodeCaseConvert(int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	char stackbuf; // 227
	int nChars; // 228
	{
		CUtlString replacement; // 236
		CUtlString::CUtlString(); // 236
		CUtlString::Access(); // 238
		CUtlString::~CUtlString(); // 241
	}
} /* size: 246, variables: 2 */

// <00580629> tier0/utlstring.cpp:244
// function calls: 4
void CUtlString::operator==(const CUtlString& src)
{
	CUtlString::IsEmpty(); // 246
	CUtlString::IsEmpty(); // 257
	CUtlString::IsEmpty(); // 248
	V_strcmp(const char* s1,
		const char* s2);  // 262
} /* size: 81, inline expansions: 4 (51 bytes) */

// <0058040C> tier0/utlstring.cpp:266
// variables: 3
// function calls: 6
void CUtlString::operator+=(const CUtlString& rhs)
{
	const int  lhsLength; // 268
	const int  rhsLength; // 269
	const int  requestedLength; // 276
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 268
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 269
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 279
} /* size: 137, variables: 3, inline expansions: 6 (63 bytes) */

// <00580216> tier0/utlstring.cpp:284
// variables: 3
// function calls: 5
void CUtlString::operator+=(const char* rhs)
{
	const int  lhsLength; // 286
	const int  rhsLength; // 287
	const int  requestedLength; // 288
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 286
	V_strlen(const char* str); // 287
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 296
} /* size: 166, variables: 3, inline expansions: 5 (89 bytes) */

// <00580144> tier0/utlstring.cpp:301
// variable: 1
// function calls: 2
void CUtlString::operator+=(char c)
{
	const int  lhsLength; // 303
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 303
} /* size: 90, variables: 1, inline expansions: 2 (28 bytes) */

// <00580047> tier0/utlstring.cpp:311
// variables: 3
void CUtlString::operator+=(int rhs)
{
	const char   __FUNCTION__; // 16291
	char tmpBuf; // 315
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 313
	}
} /* size: 97, variables: 2 */

// <0057FF86> tier0/utlstring.cpp:321
// variable: 1
void CUtlString::operator+=(double rhs)
{
	char tmpBuf; // 323
} /* size: 110, variables: 1 */

// <0057FDEA> tier0/utlstring.cpp:329
// variables: 7
// function calls: 4
void CUtlString::MatchesPattern(const CUtlString& Pattern, int nFlags)
{
	const char* pszSource; // 331
	const char* pszPattern; // 332
	bool bExact; // 333
	{
		int nLength; // 355
		{
			const char* pszStartPattern; // 365
			const char* pszSearch; // 366
			{
				int i; // 368
			}
		}
	}
	CUtlString::Get(); // 99
	CUtlString::String(); // 331
	CUtlString::Get(); // 99
	CUtlString::String(); // 332
} /* size: 381, variables: 3, inline expansions: 4 (58 bytes) */

// <0057FD4F> tier0/utlstring.cpp:407
// variables: 2
void CUtlString::Format(const char* pFormat, ...)
{
	va_list marker; // 409
	int len; // 412
} /* size: 179, variables: 2 */

// <0057FAC2> tier0/utlstring.cpp:422
// variables: 7
// function calls: 2
void CUtlString::FormatV(const char* pFormat, typedef __va_list_tag __va_list_tag* marker)
{
	char tmpBuf; // 424
	char* pBuf; // 425
	int nBufLen; // 426
	int nFullLen; // 427
	const char   __FUNCTION__; // 15294
	{
		va_list reuseArgs; // 439
	}
	{
		int* _pCrash; // 458
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 458
	CUtlString::Clear(); // 447
} /* size: 408, variables: 5, inline expansions: 2 (46 bytes) */

// <0057F9B6> tier0/utlstring.cpp:479
// variables: 2
// function calls: 3
void CUtlString::StripTrailingSlash()
{
	int nLastChar; // 484
	char c; // 485
	CUtlString::IsEmpty(); // 481
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 484
} /* size: 93, variables: 2, inline expansions: 3 (37 bytes) */

// <0057F94D> tier0/utlstring.cpp:492
void CUtlString::FixSlashes(char cSeparator)
{
} /* size: 25 */

// <0057F8E4> tier0/utlstring.cpp:500
void CUtlString::RemoveDotSlashes(char cSeparator)
{
} /* size: 25 */

// <0057F86D> tier0/utlstring.cpp:508
void CUtlString::FixupPathName()
{
} /* size: 65 */

// <0057F666> tier0/utlstring.cpp:521
// variable: 1
// function calls: 7
void CUtlString::TrimLeft(char cTarget)
{
	int nIndex; // 523
	CUtlString::IsEmpty(); // 525
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 538
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 538
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 539
} /* size: 155, variables: 1, inline expansions: 7 (89 bytes) */

// <0057F3F9> tier0/utlstring.cpp:544
// variables: 3
// function calls: 7
void CUtlString::TrimLeft(const char* szTargets)
{
	int i; // 546
	{
		bool bWhitespace; // 555
		{
			int j; // 557
		}
	}
	CUtlString::IsEmpty(); // 548
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 575
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 99
	V_memmove(void* dest,
			const void* src,
			int count);  // 575
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 576
} /* size: 214, variables: 1, inline expansions: 7 (124 bytes) */

// <0057F2FF> tier0/utlstring.cpp:583
// variables: 2
// function calls: 2
void CUtlString::TrimRight(char cTarget)
{
	const int  nLastCharIndex; // 585
	int nIndex; // 586
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 585
} /* size: 128, variables: 2, inline expansions: 2 (31 bytes) */

// <0057F1CF> tier0/utlstring.cpp:604
// variables: 4
// function calls: 2
void CUtlString::TrimRight(const char* szTargets)
{
	const int  nLastCharIndex; // 606
	int i; // 607
	{
		bool bWhitespace; // 611
		{
			int j; // 613
		}
	}
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 606
} /* size: 169, variables: 2, inline expansions: 2 (33 bytes) */

// <0057F13F> tier0/utlstring.cpp:637
void CUtlString::Trim(char cTarget)
{
} /* size: 44 */

// <0057F0B4> tier0/utlstring.cpp:644
void CUtlString::Trim(const char* szTargets)
{
} /* size: 39 */

// <0057EE71> tier0/utlstring.cpp:651
// variables: 3
// function calls: 7
void CUtlString::Slice(int32 nStart, int32 nEnd)
{
	int length; // 653
	const char* pIn; // 674
	CUtlString ret; // 676
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 653
	CUtlString::CUtlString(); // 672
	CUtlString::CUtlString(); // 676
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 678
	CUtlString::~CUtlString(); // 679
} /* size: 275, variables: 3, inline expansions: 7 (147 bytes) */

// <0057EDEB> tier0/utlstring.cpp:682
void CUtlString::Left(int32 nChars)
{
} /* size: 67 */

// <0057ED60> tier0/utlstring.cpp:687
void CUtlString::Right(int32 nChars)
{
} /* size: 70 */

// <0057EADA> tier0/utlstring.cpp:692
// variables: 3
// function calls: 8
void CUtlString::Replace(char cFrom, char cTo)
{
	CUtlString ret; // 699
	int len; // 700
	{
		int i; // 701
	}
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 699
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 700
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 707
	CUtlString::~CUtlString(); // 708
	CUtlString::CUtlString(); // 696
} /* size: 277, variables: 2, inline expansions: 8 (177 bytes) */

// <0057E917> tier0/utlstring.cpp:710
// variables: 4
// function calls: 3
void CUtlString::Replace(char cFrom, const char* pReplacement)
{
	CUtlString ret; // 713
	const char* pSrc; // 714
	{
		const char* pNextOccurrence; // 719
		int nNumCharsToCopy; // 725
		strchr(const char* __s,
			int __c);  // 186
		V_strchr(const char* s,
			char c);  // 719
	}
	CUtlString::CUtlString(); // 713
} /* size: 157, variables: 2, inline expansions: 1 (7 bytes) */

// <0057E6FD> tier0/utlstring.cpp:738
// variables: 5
// function calls: 4
void CUtlString::Remove(const char* pTextToRemove, bool bCaseSensitive)
{
	int nTextToRemoveLength; // 740
	CUtlString outputString; // 741
	const char* pSrc; // 742
	{
		const char* pNextOccurrence; // 747
		int nNumCharsToCopy; // 755
		strstr(const char* __haystack,
			const char* __needle);  // 247
		V_strstr(const char* s1,
			const char* search);  // 747
	}
	V_strlen(const char* str); // 740
	CUtlString::CUtlString(); // 741
} /* size: 190, variables: 3, inline expansions: 2 (19 bytes) */

// <0057E487> tier0/utlstring.cpp:771
// variables: 3
// function calls: 6
void CUtlString::RemoveFromStart(const char* pTextToRemoveFromStart, bool bCaseSensitive)
{
	int nTextToRemoveLength; // 773
	const char* pSrc; // 774
	{
		CUtlString outputString; // 777
		CUtlString::CUtlString(
				const char* pString);  // 777
	}
	V_strlen(const char* str); // 773
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 775
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 775
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 781
} /* size: 193, variables: 2, inline expansions: 5 (100 bytes) */

// <0057E161> tier0/utlstring.cpp:785
// variables: 5
// function calls: 7
void CUtlString::Replace(const char* pchFrom, const char* pchTo, bool bCaseSensitive)
{
	int nTextToReplaceLength; // 792
	CUtlString outputString; // 793
	const char* pSrc; // 794
	{
		const char* pNextOccurrence; // 799
		int nNumCharsToCopy; // 807
		strstr(const char* __haystack,
			const char* __needle);  // 247
		V_strstr(const char* s1,
			const char* search);  // 799
	}
	V_strlen(const char* str); // 792
	CUtlString::CUtlString(); // 793
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 822
	CUtlString::~CUtlString(); // 824
} /* size: 360, variables: 3, inline expansions: 5 (123 bytes) */

// <0057E109> tier0/utlstring.cpp:826
// variable: 1
void CUtlString::Swap(CUtlString& src)
{
	char* tmp; // 828
} /* size: 17, variables: 1 */

// <0057DF47> tier0/utlstring.cpp:833
// variables: 2
// function calls: 5
void CUtlString::Ellipsify(int nMaxLengthIncludingEllipses)
{
	CUtlString ret; // 835
	{
		int nCurLength; // 838
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 838
	}
	CUtlString::Get(); // 99
	CUtlString::String(); // 835
	CUtlString::CUtlString(
			const char* pString);  // 835
} /* size: 116, variables: 1, inline expansions: 3 (46 bytes) */

// <0057DCF4> tier0/utlstring.cpp:848
// variables: 2
// function calls: 8
void CUtlString::AbsPath(const char* pStartingDir)
{
	CPathBufferString pathBuf; // 850
	CUtlString newStr; // 852
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 850
	CUtlString::Get(); // 99
	CUtlString::String(); // 851
	CUtlString::CUtlString(); // 852
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 855
} /* size: 163, variables: 2, inline expansions: 8 (116 bytes) */

// <0057DBF9> tier0/utlstring.cpp:857
// variable: 1
// function calls: 3
void CUtlString::UnqualifiedFilenameAlloc()
{
	const char* pFilename; // 859
	CUtlString::Get(); // 99
	CUtlString::String(); // 859
	CUtlString::CUtlString(
			const char* pString);  // 860
} /* size: 65, variables: 1, inline expansions: 3 (52 bytes) */

// <0057D9F2> tier0/utlstring.cpp:863
// variables: 2
// function calls: 8
void CUtlString::DirName()
{
	CPathBufferString pathBuf; // 865
	CUtlString newStr; // 867
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 865
	CUtlString::Get(); // 99
	CUtlString::String(); // 866
	CUtlString::CUtlString(); // 867
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 870
} /* size: 168, variables: 2, inline expansions: 8 (116 bytes) */

// <0057D738> tier0/utlstring.cpp:872
// variables: 2
// function calls: 9
void CUtlString::StripExtension()
{
	CPathBufferString pathBuf; // 874
	CUtlString newStr; // 876
	CUtlString::Get(); // 99
	CUtlString::String(); // 874
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 874
	CUtlString::CUtlString(); // 876
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 879
} /* size: 185, variables: 2, inline expansions: 9 (160 bytes) */

// <0057D531> tier0/utlstring.cpp:881
// variables: 2
// function calls: 8
void CUtlString::StripFilename()
{
	CPathBufferString pathBuf; // 883
	CUtlString newStr; // 885
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 883
	CUtlString::Get(); // 99
	CUtlString::String(); // 884
	CUtlString::CUtlString(); // 885
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 888
} /* size: 165, variables: 2, inline expansions: 8 (116 bytes) */

// <0057D32F> tier0/utlstring.cpp:890
// variables: 2
// function calls: 8
void CUtlString::GetBaseFilename()
{
	CPathBufferString pathBuf; // 892
	CUtlString newStr; // 894
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 892
	CUtlString::Get(); // 99
	CUtlString::String(); // 893
	CUtlString::CUtlString(); // 894
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 897
} /* size: 163, variables: 2, inline expansions: 8 (116 bytes) */

// <0057D12D> tier0/utlstring.cpp:899
// variables: 2
// function calls: 8
void CUtlString::GetExtensionAlloc()
{
	CPathBufferString pathBuf; // 901
	CUtlString newStr; // 903
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 901
	CUtlString::Get(); // 99
	CUtlString::String(); // 902
	CUtlString::CUtlString(); // 903
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 906
} /* size: 163, variables: 2, inline expansions: 8 (116 bytes) */

// <0057CF3E> tier0/utlstring.cpp:908
// variables: 2
// function calls: 6
void PathJoin(const char* pStr1, const char* pStr2)
{
	CPathBufferString pathBuf; // 910
	CUtlString newStr; // 912
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 910
	CUtlString::CUtlString(); // 912
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 915
} /* size: 151, variables: 2, inline expansions: 6 (82 bytes) */

// <0057CE5A> tier0/utlstring.cpp:917
// variable: 1
// function calls: 2
void CUtlString::operator+(const char* pOther)
{
	CUtlString s; // 919
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 919
} /* size: 65, variables: 1, inline expansions: 2 (46 bytes) */

// <0057CD76> tier0/utlstring.cpp:924
// variable: 1
// function calls: 2
void CUtlString::operator+(const CUtlString& other)
{
	CUtlString s; // 926
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 926
} /* size: 65, variables: 1, inline expansions: 2 (46 bytes) */

// <0057CC90> tier0/utlstring.cpp:931
// variable: 1
// function calls: 2
void CUtlString::operator+(int rhs)
{
	CUtlString ret; // 933
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 933
} /* size: 65, variables: 1, inline expansions: 2 (46 bytes) */

// <0057CC26> tier0/utlstring.cpp:938
void CUtlString::Append(const char* pchAddition)
{
} /* size: 9 */

// <0057CA09> tier0/utlstring.cpp:943
// variables: 6
// function calls: 4
void CUtlString::Append(const char* pchAddition, int nChars)
{
	int nStrLen; // 945
	const int  lhsLength; // 952
	const int  rhsLength; // 953
	const int  requestedLength; // 954
	const int  allocatedLength; // 957
	const int  copyLength; // 958
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 952
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 959
} /* size: 152, variables: 6, inline expansions: 4 (51 bytes) */

// <0057C946> tier0/utlstring.cpp:964
// variable: 1
// function call: 1
void GetEmptyString(void)
{
	const CUtlString  s_emptyString; // 966
	CUtlString::CUtlString(); // 966
} /* size: 130, variables: 1, inline expansions: 1 (11 bytes) */

// <0057C756> tier0/utlstring.cpp:972
// variables: 4
// function calls: 3
CUtlString JsonEscape(const char* pString)
{
	CUtlString buffer; // 974
	{
		const char* p; // 975
		const char* pLast; // 975
		{
			char utf16; // 987
		}
		CUtlString::Append(
			const char  chAddition);  // 994
		CUtlString::Append(
			const char  chAddition);  // 995
	}
	CUtlString::CUtlString(); // 974
} /* size: 242, variables: 1, inline expansions: 1 (7 bytes) */

