
//
// tier0/tier0_strtools.cpp
//
//	referenced by: libtier0.so
//
//	functions: 161
//	classes: 3
//	struct: 1
//

// <005FAE27> tier0/tier0_strtools.cpp:32
inline char TOLOWERC(char x)
{
} /* size: 0 */

// <005FAE06> tier0/tier0_strtools.cpp:36
inline char TOUPPERC(char x)
{
} /* size: 0 */

// <005FAD91> tier0/tier0_strtools.cpp:41
// function call: 1
int V_tier0_strlen(const char* str)
{
	V_strlen(const char* str); // 44
} /* size: 27, inline expansions: 1 (12 bytes) */

// <005FACE9> tier0/tier0_strtools.cpp:47
// function call: 1
char* V_tier0_strcpy(char* dest, const char* src)
{
	strcpy(char* __dest,
		const char* __src);  // 49
} /* size: 9, inline expansions: 1 (5 bytes) */

// <005FAC80> tier0/tier0_strtools.cpp:52
int V_tier0_strcmp(const char* s1, const char* s2)
{
} /* size: 9 */

// <005FABD1> tier0/tier0_strtools.cpp:57
// function call: 1
wchar_t* V_tier0_wcscpy(wchar_t* dest, const wchar_t* src)
{
	wcscpy(wchar_t* __dest,
		const wchar_t* __src);  // 59
} /* size: 9, inline expansions: 1 (5 bytes) */

// <005FAB68> tier0/tier0_strtools.cpp:62
int V_tier0_wcscmp(const wchar_t* s1, const wchar_t* s2)
{
} /* size: 12 */

// <005FAAF4> tier0/tier0_strtools.cpp:67
// variables: 2
int V_strcmp32(const uchar32* s1, const uchar32* s2)
{
	const uchar32* scan1; // 69
	const uchar32* scan2; // 70
} /* size: 70, variables: 2 */

// <005FAA56> tier0/tier0_strtools.cpp:101
// function call: 1
const char* V_tier0_strchr(const char* s, char c)
{
	strchr(const char* __s,
		int __c);  // 103
} /* size: 13, inline expansions: 1 (5 bytes) */

// <005FA9C5> tier0/tier0_strtools.cpp:106
// variable: 1
// function call: 1
const char* V_tier0_strrchr(const char* s, char c)
{
	int len; // 108
	V_strlen(const char* str); // 108
} /* size: 84, variables: 1, inline expansions: 1 (22 bytes) */

// <005FA95E> tier0/tier0_strtools.cpp:115
const wchar_t* V_tier0_wcschr(const wchar_t* s, wchar_t c)
{
} /* size: 9 */

// <005FA915> tier0/tier0_strtools.cpp:120
const uchar32* V_strchr32(const uchar32* pch32, uchar32 ch32)
{
} /* size: 44 */

// <005FA86E> tier0/tier0_strtools.cpp:135
// function call: 1
const char* V_tier0_strstr(const char* s1, const char* search)
{
	strstr(const char* __haystack,
		const char* __needle);  // 137
} /* size: 9, inline expansions: 1 (5 bytes) */

// <005FA759> tier0/tier0_strtools.cpp:145
// variables: 6
const uchar32* V_strstr32(const uchar32* pStr, const uchar32* pSearch)
{
	const char   __FUNCTION__; // 55541
	const uchar32* pLetter; // 153
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 147
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 148
	}
	{
		const uchar32* pMatch; // 162
		const uchar32* pTest; // 163
	}
} /* size: 0, variables: 2 */

// <005FA4C6> tier0/tier0_strtools.cpp:261
// variable: 1
bool V_isstrlower_fast(const char* pch)
{
	const char* pCurrent; // 263
} /* size: 67, variables: 1 */

// <005F9CF3> tier0/tier0_strtools.cpp:532
// variables: 2
int V_wcsicmp(const wchar_t* s1, const wchar_t* s2)
{
	wint_t c1; // 534
	wint_t c2; // 535
} /* size: 101, variables: 2 */

// <005F9C50> tier0/tier0_strtools.cpp:552
// variables: 2
int V_wcsnicmp_cch(const wchar_t* s, const wchar_t* t, size_t n)
{
	wint_t c1; // 554
	wint_t c2; // 555
} /* size: 118, variables: 2 */

// <005F9AF9> tier0/tier0_strtools.cpp:573
// variables: 6
const wchar_t* V_wcsistr(const wchar_t* pStr, const wchar_t* pSearch)
{
	const char   __FUNCTION__; // 46950
	const wchar_t* pLetter; // 581
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 575
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 576
	}
	{
		const wchar_t* pMatch; // 590
		const wchar_t* pTest; // 591
	}
} /* size: 0, variables: 2 */

// <005F9741> tier0/tier0_strtools.cpp:697
// variables: 4
// function call: 1
void _V_wcsncpy_bytes(wchar_t* pDest, const wchar_t* pSrc, int maxLenInBytes)
{
	const char   __FUNCTION__; // 29710
	int maxLen; // 701
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 699
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 713
	}
	wcsncpy(wchar_t* __dest,
		const wchar_t* __src,
		size_t __n);  // 704
} /* size: 0, variables: 2, inline expansions: 1 (12 bytes) */

// <005F9599> tier0/tier0_strtools.cpp:721
// variables: 6
// function call: 1
wchar_t* _V_wcsncat_cch(wchar_t* pDest, const wchar_t* pSrc, int maxLenInChars, int nMaxCharsToCopy)
{
	int charstocopy; // 723
	const char   __FUNCTION__; // 59539
	int len; // 727
	int srclen; // 728
	wchar_t* pOut; // 752
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 725
	}
	wcsncat(wchar_t* __dest,
		const wchar_t* __src,
		size_t __n);  // 752
} /* size: 0, variables: 5, inline expansions: 1 (13 bytes) */

// <005F9477> tier0/tier0_strtools.cpp:756
// variables: 5
void _V_strncpy32_bytes(uchar32* pDest, const uchar32* pSrc, int maxLenInBytes)
{
	const char   __FUNCTION__; // 61372
	int maxLen; // 760
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 758
	}
	{
		uchar32* pLast; // 763
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 776
	}
} /* size: 0, variables: 2 */

// <005E8A2F> tier0/tier0_strtools.cpp:781
// variable: 1
const char* FindNextFormatSpecifier<char>(const char* pStr, bool* pLong)
{
	{
		bool bIsFlag; // 801
	}
} /* size: 330 */

// <005E89B6> tier0/tier0_strtools.cpp:781
// variable: 1
const wchar_t* FindNextFormatSpecifier<wchar_t>(const wchar_t* pStr, bool* pLong)
{
	{
		bool bIsFlag; // 801
	}
} /* size: 311 */

// <005F922F> tier0/tier0_strtools.cpp:916
// variables: 5
void ValidateStringFormatSpecifiers(const wchar_t* pStr)
{
	const wchar_t* pFmt; // 918
	const char   __FUNCTION__; // 53741
	{
		bool bLong; // 921
		{
			char charStr; // 931
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 937
			}
		}
	}
} /* size: 240, variables: 2 */

// <005F90C7> tier0/tier0_strtools.cpp:955
// variables: 2
int V_snprintfNoSecurityDoNotUse(char* pDest, int maxLenInChars, const char* pFormat, ...)
{
	va_list params; // 957
	int len; // 960
} /* size: 172, variables: 2 */

// <005F8DAD> tier0/tier0_strtools.cpp:990
// variables: 4
// function call: 1
int V_vsnprintfRet(char* pDest, int maxLenInChars, const char* pFormat, typedef __va_list_tag __va_list_tag* params, bool* pbTruncated)
{
	const char   __FUNCTION__; // 59539
	int len; // 996
	bool bTruncated; // 998
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
	vsnprintf(char* __s,
			size_t __n,
			const char* __fmt,
			typedef __va_list_tag __va_list_tag* __ap);  // 996
} /* size: 0, variables: 3, inline expansions: 1 (60 bytes) */

// <005F8C2D> tier0/tier0_strtools.cpp:1013
// variables: 4
int V_vsnprintfWarnTrunc(char* pDest, int maxLenInChars, bool bQuietTruncation, const char* pFormat, typedef __va_list_tag __va_list_tag* params)
{
	bool bTruncated; // 1015
	int len; // 1016
	const char   __FUNCTION__; // 2130
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1021
	}
} /* size: 161, variables: 3 */

// <005F8B5A> tier0/tier0_strtools.cpp:1027
// variables: 2
int V_snprintfWarnTrunc(char* pDest, int maxLenInChars, bool bQuietTruncation, const char* pFormat, ...)
{
	va_list params; // 1029
	int len; // 1032
} /* size: 168, variables: 2 */

// <005F8865> tier0/tier0_strtools.cpp:1091
// variables: 2
// function call: 1
int V_snwprintf_bytes(wchar_t* pDest, int maxLenInBytes, const wchar_t* pFormat, ...)
{
	va_list params; // 1093
	int len; // 1096
	V_vsnwprintf_bytes(wchar_t* pDest,
				int maxLenInBytes,
				const wchar_t* pFormat,
				typedef __va_list_tag __va_list_tag* l);  // 1096
} /* size: 179, variables: 2, inline expansions: 1 (19 bytes) */

// <005F868E> tier0/tier0_strtools.cpp:1123
// variables: 3
// function call: 1
int V_vsnwprintf_cch(wchar_t* pDest, int maxLenInChars, const wchar_t* pFormat, typedef __va_list_tag __va_list_tag* params)
{
	const char   __FUNCTION__; // 29710
	int len; // 1134
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1125
	}
	vswprintf(wchar_t* __s,
			size_t __n,
			const wchar_t* __fmt,
			typedef __va_list_tag __va_list_tag* __ap);  // 1134
} /* size: 0, variables: 2, inline expansions: 1 (64 bytes) */

// <005F8489> tier0/tier0_strtools.cpp:1151
// variables: 4
// function call: 1
int V_vsnwprintfRet_cch(wchar_t* pDest, int maxLenInChars, const wchar_t* pFormat, typedef __va_list_tag __va_list_tag* params, bool* pbTruncated)
{
	const char   __FUNCTION__; // 1445
	int len; // 1162
	bool bTruncated; // 1167
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1153
	}
	vswprintf(wchar_t* __s,
			size_t __n,
			const wchar_t* __fmt,
			typedef __va_list_tag __va_list_tag* __ap);  // 1162
} /* size: 0, variables: 3, inline expansions: 1 (66 bytes) */

// <005F8311> tier0/tier0_strtools.cpp:1182
// variables: 3
// function call: 1
int V_vsnprintfcat(char* pDest, int maxLenInChars, const char* pFormat, typedef __va_list_tag __va_list_tag* params)
{
	int usedLength; // 1184
	const char   __FUNCTION__; // 59539
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1188
	}
	V_strlen(const char* str); // 1184
} /* size: 0, variables: 2, inline expansions: 1 (16 bytes) */

// <005F825D> tier0/tier0_strtools.cpp:1196
// variables: 2
int V_snprintfcat(char* pDest, int maxLenInChars, const char* pFormat, ...)
{
	va_list params; // 1198
	int len; // 1201
} /* size: 172, variables: 2 */

// <005F8181> tier0/tier0_strtools.cpp:1206
// function call: 1
int V_vscprintf(const char* pFormat, typedef __va_list_tag __va_list_tag* params)
{
	vsnprintf(char* __s,
			size_t __n,
			const char* __fmt,
			typedef __va_list_tag __va_list_tag* __ap);  // 1213
} /* size: 53, inline expansions: 1 (27 bytes) */

// <005F7F53> tier0/tier0_strtools.cpp:1251
int V_tier0_isgraph(int c)
{
} /* size: 9 */

// <005F7F32> tier0/tier0_strtools.cpp:1260
int V_isbreakablewspace(wchar_t ch)
{
} /* size: 0 */

// <005F7F12> tier0/tier0_strtools.cpp:1265
int V_isbreakablewspace32(uchar32 ch)
{
} /* size: 0 */

// <005F7EC2> tier0/tier0_strtools.cpp:1278
int V_towupper(uchar32 c)
{
} /* size: 9 */

// <005F7E72> tier0/tier0_strtools.cpp:1289
int V_towlower(uchar32 c)
{
} /* size: 9 */

// <005F7E22> tier0/tier0_strtools.cpp:1300
int V_iswalpha(uchar32 c)
{
} /* size: 9 */

// <005F7DD2> tier0/tier0_strtools.cpp:1311
int V_iswalnum(uchar32 c)
{
} /* size: 9 */

// <005F7D82> tier0/tier0_strtools.cpp:1322
int V_iswdigit(uchar32 c)
{
} /* size: 9 */

// <005F7D32> tier0/tier0_strtools.cpp:1356
int V_iswspace(uchar32 c)
{
} /* size: 9 */

// <005F7CE2> tier0/tier0_strtools.cpp:1372
int V_iswcntrl(uchar32 c)
{
} /* size: 9 */

// <005F7C92> tier0/tier0_strtools.cpp:1388
int V_iswupper(uchar32 c)
{
} /* size: 9 */

// <005F7C42> tier0/tier0_strtools.cpp:1399
int V_iswlower(uchar32 c)
{
} /* size: 9 */

// <005F79AC> tier0/tier0_strtools.cpp:1445
uint64 V_wcstoui64(const wchar_t* nptr, wchar_t** endptr, int base)
{
} /* size: 9 */

// <005F76D6> tier0/tier0_strtools.cpp:1606
// variables: 6
float64 V_atofloat64(const char* str)
{
	double val; // 1611
	int sign; // 1612
	int c; // 1613
	int decimal; // 1614
	int total; // 1614
	int exponent; // 1669
} /* size: 0, variables: 6 */

// <005F7668> tier0/tier0_strtools.cpp:1705
size_t V_strspn(const char* str, const char* strCharSet)
{
} /* size: 9 */

// <005F75FA> tier0/tier0_strtools.cpp:1710
size_t _V_strcspn(const char* str, const char* strCharSet)
{
} /* size: 9 */

// <005F72E7> tier0/tier0_strtools.cpp:1729
// variables: 12
// function calls: 3
char* V_PrettifyMem(float value, int digitsafterdecimal, bool usebinaryonek)
{
	char output; // 1731
	int current; // 1732
	float onekb; // 1734
	float onemb; // 1735
	char* out; // 1737
	char suffix; // 1740
	char val; // 1758
	char* i; // 1778
	char* o; // 1779
	char* dot; // 1782
	int pos; // 1789
	{
		char fmt; // 1770
	}
	FloatMakePositive(vec_t f); // 1764
	strstr(char* __haystack,
		const char* __needle);  // 1782
	strstr(char* __haystack,
		const char* __needle);  // 1785
} /* size: 615, variables: 11, inline expansions: 3 (33 bytes) */

// <005F704C> tier0/tier0_strtools.cpp:1819
// variables: 9
// function calls: 3
char* V_PrettifyFloat(float value, int digitsafterdecimal)
{
	char output; // 1821
	int current; // 1822
	char* out; // 1824
	char val; // 1827
	char* i; // 1847
	char* o; // 1848
	char* dot; // 1851
	int pos; // 1858
	{
		char fmt; // 1839
	}
	FloatMakePositive(vec_t f); // 1833
	strstr(char* __haystack,
		const char* __needle);  // 1851
	strstr(char* __haystack,
		const char* __needle);  // 1854
} /* size: 415, variables: 8, inline expansions: 3 (33 bytes) */

// <005F6E0F> tier0/tier0_strtools.cpp:1968
// variable: 1
void CFormatNumber_DontUseDirectly_UseFormatNumberMacro::FormatNumberInternal(uint64 nNum)
{
	{
		uint64 j; // 1978
	}
} /* size: 179 */

// <005F6D6F> tier0/tier0_strtools.cpp:1993
// variables: 2
void CFormatNumber_DontUseDirectly_UseFormatNumberMacro::FormatNumberInternal64(int64 nNum)
{
	bool bIsNegative; // 1995
	uint64 nUnsigned; // 1996
} /* size: 57, variables: 2 */

// <005F6C7F> tier0/tier0_strtools.cpp:2016
char* _V_StringAfterPrefixCaseSensitive(char* str, const char* prefix)
{
} /* size: 59 */

// <005F6B96> tier0/tier0_strtools.cpp:2028
// variable: 1
// function call: 1
int V_IndexAfterPrefix(const char* pName, const char* prefix, int nDefault)
{
	const char* pIndexStr; // 2033
	StringAfterPrefix<char const>(const char* str,
					const char* prefix);  // 2033
} /* size: 71, variables: 1, inline expansions: 1 (5 bytes) */

// <005F6B35> tier0/tier0_strtools.cpp:2047
// function call: 1
char* _V_StringAfterLeadingWhitespace(char* str)
{
	V_isspace(int c); // 2049
} /* size: 41, inline expansions: 1 (19 bytes) */

// <005F69DB> tier0/tier0_strtools.cpp:2055
// variables: 2
// function calls: 3
bool _V_strEndsWith(const char* pStr, const char* pSuffix, bool bCaseSensitive)
{
	int nSuffixLen; // 2057
	int nStringLen; // 2058
	V_strlen(const char* str); // 2057
	V_strlen(const char* str); // 2058
	V_strcmp(const char* s1,
		const char* s2);  // 2065
} /* size: 173, variables: 2, inline expansions: 3 (45 bytes) */

// <005F68D8> tier0/tier0_strtools.cpp:2074
// variables: 3
// function calls: 2
void V_StripTrailingWhitespace(char* ppline)
{
	const char   __FUNCTION__; // 23271
	int len; // 2078
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2076
	}
	V_strlen(const char* str); // 2078
	V_isspace(int c); // 2081
} /* size: 0, variables: 2, inline expansions: 2 (20 bytes) */

// <005F681E> tier0/tier0_strtools.cpp:2092
// variables: 3
// function call: 1
void V_StripLeadingWhitespace(char* ppline)
{
	const char   __FUNCTION__; // 12305
	int skip; // 2097
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2094
	}
	V_isspace(int c); // 2098
} /* size: 0, variables: 2, inline expansions: 1 (28 bytes) */

// <005F67B6> tier0/tier0_strtools.cpp:2112
void V_StripSurroundingWhitespace(char* ppline)
{
} /* size: 31 */

// <005F6687> tier0/tier0_strtools.cpp:2122
// variables: 4
// function call: 1
void V_StripSurroundingQuotes(char* ppline)
{
	const char   __FUNCTION__; // 12305
	int len; // 2126
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2124
	}
	{
		int i; // 2129
	}
	V_strlen(const char* str); // 2126
} /* size: 0, variables: 2, inline expansions: 1 (5 bytes) */

// <005F65AC> tier0/tier0_strtools.cpp:2140
// variable: 1
// function calls: 2
int V_normalizeFloatString(char* pFloat)
{
	int len; // 2142
	V_strlen(const char* str); // 2142
	strchr(char* __s,
		int __c);  // 2145
} /* size: 191, variables: 1, inline expansions: 2 (35 bytes) */

// <005F6503> tier0/tier0_strtools.cpp:2164
// variable: 1
// function call: 1
int V_normalizeFloatWString(wchar_t* pFloat)
{
	int len; // 2166
	V_wcslen(const wchar_t* pwch); // 2166
} /* size: 142, variables: 1, inline expansions: 1 (10 bytes) */

// <005F64AE> tier0/tier0_strtools.cpp:2190
// variable: 1
bool CopyToMaxChars(char* pOut, int outSize, const char* pIn, int nCharsToCopy)
{
	int iOut; // 2195
} /* size: 0, variables: 1 */

// <005F5F62> tier0/tier0_strtools.cpp:2319
// function call: 1
void _V_StrLeft(const char* pStr, int nChars, char* pOut, int outSize)
{
	V_StrSlice<int>(const char* pStr,
			int firstChar,
			int lastCharNonInclusive,
			char* pOut,
			int outSize);  // 2329
} /* size: 39, inline expansions: 1 (15 bytes) */

// <005F5DAB> tier0/tier0_strtools.cpp:2333
// variable: 1
// function calls: 3
void _V_StrRight(const char* pStr, int nChars, char* pOut, int outSize)
{
	int len; // 2335
	V_strlen(const char* str); // 2335
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 2338
	V_StrSlice<int>(const char* pStr,
			int firstChar,
			int lastCharNonInclusive,
			char* pOut,
			int outSize);  // 2342
} /* size: 116, variables: 1, inline expansions: 3 (73 bytes) */

// <005F5CDB> tier0/tier0_strtools.cpp:2346
// variables: 4
// function calls: 2
int V_StrTrim(char* pStr)
{
	char* pSource; // 2348
	char* pDest; // 2349
	char* pLastWhiteBlock; // 2358
	char* pStart; // 2359
	V_isspace(int c); // 2352
	V_isspace(int c); // 2363
} /* size: 131, variables: 4, inline expansions: 2 (38 bytes) */

// <005F5C50> tier0/tier0_strtools.cpp:2387
// variable: 1
// function call: 1
char* TrimRight(char* pString)
{
	char* pEnd; // 2389
	V_strlen(const char* str); // 2389
} /* size: 93, variables: 1, inline expansions: 1 (10 bytes) */

// <005F5C07> tier0/tier0_strtools.cpp:2403
// variable: 1
const char* SkipBlanks(const char* pString)
{
	const char* p; // 2405
} /* size: 49, variables: 1 */

// <005F5AE3> tier0/tier0_strtools.cpp:2419
// variables: 8
char* V_AddBackSlashesToSpecialChars(const char* pSrc)
{
	int nSpaceNeeded; // 2422
	char* pRet; // 2432
	char* pOut; // 2433
	{
		const char* pScan; // 2423
		{
			const char* pCharSet; // 2426
		}
	}
	{
		const char* pScan; // 2435
		{
			bool bIsSpecial; // 2437
			{
				const char* pCharSet; // 2438
			}
		}
	}
} /* size: 307, variables: 3 */

// <005F5A7D> tier0/tier0_strtools.cpp:2457
// variables: 2
void V_DecodeBackslashSequencesInString(char* pStr)
{
	char* pDest; // 2459
	{
		char c; // 2465
	}
} /* size: 119, variables: 1 */

// <005F58F8> tier0/tier0_strtools.cpp:2494
// variables: 5
// function call: 1
int V_StringToIntArray(int* pVector, int count, const char* pString)
{
	char* pstr; // 2496
	char* pfront; // 2496
	char tempString; // 2496
	int j; // 2497
	int nFound; // 2514
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 2499
} /* size: 238, variables: 5, inline expansions: 1 (20 bytes) */

// <005F5763> tier0/tier0_strtools.cpp:2524
// variables: 5
// function call: 1
int V_StringToFloatArray(float* pVector, int count, const char* pString)
{
	char* pstr; // 2526
	char* pfront; // 2526
	char tempString; // 2526
	int j; // 2527
	int nFound; // 2551
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 2529
} /* size: 294, variables: 5, inline expansions: 1 (20 bytes) */

// <005F56F4> tier0/tier0_strtools.cpp:2561
void V_StringToVector(float* pVector, const char* pString)
{
} /* size: 17 */

// <005F559B> tier0/tier0_strtools.cpp:2566
// variables: 2
// function calls: 2
void V_StringToColor(Color* color, const char* pString)
{
	int tmp; // 2568
	int nCount; // 2569
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 69
	Color::Init(
		int _r,
		int _g,
		int _b,
		int _a);  // 2570
} /* size: 116, variables: 2, inline expansions: 2 (82 bytes) */

// <005E07F1> tier0/tier0_strtools.cpp:2573
// member functions: 4
// member variables: 3
// class size: 1,040
class CBoyerMooreSearch {
	/* tier0/tier0_strtools.cpp:2576 */
	void CBoyerMooreSearch(CBoyerMooreSearch* , const byte* , int);
	/* tier0/tier0_strtools.cpp:2578 */
	int Search(CBoyerMooreSearch* , const byte* , int);
private:
	int m_JumpTable[256]; /* 0 1024 */
	int m_nNeedleSize; /* 1024 4 */
	const byte * m_pNeedle; /* 1032 8 */
	void CBoyerMooreSearch(class CBoyerMooreSearch *, const byte  *, int); /* linkage=_ZN17CBoyerMooreSearchC4EPKhi */
	int Search(class CBoyerMooreSearch *, const byte  *, int); /* linkage=_ZN17CBoyerMooreSearch6SearchEPKhi */
};

// <005F552B> tier0/tier0_strtools.cpp:2586
// variables: 2
void CBoyerMooreSearch::CBoyerMooreSearch(const byte* pNeedle, int nNeedleSize)
{
	{
		int i; // 2591
	}
	{
		int i; // 2591
	}
} /* size: 0 */

// <005F54E8> tier0/tier0_strtools.cpp:2586
// variable: 1
void CBoyerMooreSearch::CBoyerMooreSearch(const byte* pNeedle, int nNeedleSize)
{
	{
		int i; // 2591
	}
} /* size: 0 */

// <005F544C> tier0/tier0_strtools.cpp:2606
// variables: 3
void CBoyerMooreSearch::Search(const byte* pHayStack, int nHayStackLength)
{
	int k; // 2613
	{
		int j; // 2616
		int i; // 2617
	}
} /* size: 203, variables: 1 */

// <005F5319> tier0/tier0_strtools.cpp:2635
// variables: 2
// function call: 1
int V_BoyerMooreSearch(const byte* pNeedle, int nNeedleLength, const byte* pHayStack, int nHayStackLength)
{
	CBoyerMooreSearch search; // 2637
	{
		int i; // 2591
	}
	CBoyerMooreSearch::CBoyerMooreSearch(
				const byte* pNeedle,
				int nNeedleSize);  // 2637
} /* size: 191, variables: 1, inline expansions: 1 (105 bytes) */

// <005F5280> tier0/tier0_strtools.cpp:2643
// variables: 2
const char* V_ParseLine(const char* pStrIn, char* pToken, int bufsize, bool* pbOverflowed)
{
	int maxpos; // 2650
	int len; // 2651
} /* size: 99, variables: 2 */

// <005F5200> tier0/tier0_strtools.cpp:2683
// variable: 1
// function call: 1
bool V_TokenWaiting(const char* buffer)
{
	const char* p; // 2685
	V_isspace(int c); // 2688
} /* size: 73, variables: 1, inline expansions: 1 (23 bytes) */

// <005F519A> tier0/tier0_strtools.cpp:2709
const char* nexttoken(char* token, const char* str, char sep)
{
} /* size: 78 */

// <005F5139> tier0/tier0_strtools.cpp:2739
// function call: 1
bool V_containsWhitespace(const char* pStr)
{
	V_isspace(int c); // 2745
} /* size: 59, inline expansions: 1 (17 bytes) */

// <005F50E0> tier0/tier0_strtools.cpp:2752
// function call: 1
bool V_isdigit_str(const char* pStr)
{
	V_isdigit(char c); // 2758
} /* size: 67, inline expansions: 1 (3 bytes) */

// <005F5073> tier0/tier0_strtools.cpp:2765
// function call: 1
bool V_isalnum_str(const char* pStr)
{
	V_isalnum(char c); // 2771
} /* size: 76, inline expansions: 1 (20 bytes) */

// <005F501A> tier0/tier0_strtools.cpp:2778
// function call: 1
bool V_isalpha_str(const char* pStr)
{
	V_isalpha(char c); // 2784
} /* size: 67, inline expansions: 1 (6 bytes) */

// <005F4F8D> tier0/tier0_strtools.cpp:2791
// variables: 2
bool V_AppearsToBeANumber(const char* pString)
{
	char* endptr; // 2794
	double ret; // 2795
} /* size: 115, variables: 2 */

// <005F4EFF> tier0/tier0_strtools.cpp:2800
// variables: 2
bool V_isvalidhex(const char* in, int inputchars)
{
	{
		int i; // 2807
		{
			char c; // 2809
		}
	}
} /* size: 79 */

// <005F4EE0> tier0/tier0_strtools.cpp:2826
unsigned char V_nibble(char c)
{
} /* size: 0 */

// <005F4A76> tier0/tier0_strtools.cpp:2890
void StrReplaceChar(char* pStr, char nOrigChar, char nNewChar)
{
} /* size: 51 */

// <005F4A14> tier0/tier0_strtools.cpp:2903
// variables: 2
void V_TranslateLineFeedsToUnix(char* pStr)
{
	char* pIn; // 2905
	char* pOut; // 2906
} /* size: 84, variables: 2 */

// <005F49B2> tier0/tier0_strtools.cpp:2919
void V_RemoveFormatSpecifications(const char* pszFrom, char* pszTo, size_t sizeDest)
{
} /* size: 84 */

// <005F46A7> tier0/tier0_strtools.cpp:2940
// variables: 3
// function calls: 9
CUtlString V_RandomString(int nLen)
{
	CBufferStringN<100> out; // 2942
	{
		int i; // 2943
		{
			char c; // 2945
			V_isalnum(char c); // 2951
			CBufferString::AppendChar(
					char ch,
					bool bExact);  // 2953
		}
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<100>::CBufferStringN(); // 2942
	CUtlString::CUtlString(); // 86
	AcquireBuffer(CBufferString* pStr,
			bool bExact);  // 2955
	CBufferString::~CBufferString(); // 587
	CBufferStringN<100>::~CBufferStringN(); // 2956
} /* size: 248, variables: 1, inline expansions: 7 (93 bytes) */

// <005F44A9> tier0/tier0_strtools.cpp:2961
// variables: 4
// function calls: 4
void CUtlCharConversion::CUtlCharConversion(char nEscapeChar, const char* pDelimiter, int nCount, const ConversionArray_t* pArray)
{
	{
		{
			int i; // 2971
			{
				ConversionInfo_t& info; // 2974
				{
				}
			}
		}
	}
	{
		V_strlen(const char* str); // 2966
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 2969
		{
			int i; // 2971
			{
				ConversionInfo_t& info; // 2974
				V_strlen(const char* str); // 2977
				{
				}
			}
		}
	}
} /* size: 0 */

// <005F4416> tier0/tier0_strtools.cpp:2961
// variables: 4
void CUtlCharConversion::CUtlCharConversion(char nEscapeChar, const char* pDelimiter, int nCount, const ConversionArray_t* pArray)
{
	const char   __FUNCTION__; // 61372
	{
		int i; // 2971
		{
			ConversionInfo_t& info; // 2974
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2975
			}
		}
	}
} /* size: 0, variables: 1 */

// <005F4312> tier0/tier0_strtools.cpp:2988
// variables: 2
// function call: 1
void CUtlCharConversion::FindConversion(const char* pString, int* pLength)
{
	{
		int i; // 2993
		{
			ConversionInfo_t* pConvInfo; // 2995
			V_strncmp<int>(const char* s1,
					const char* s2,
					int count);  // 2996
		}
	}
} /* size: 161 */

// <005E0B80> tier0/tier0_strtools.cpp:3011
// member functions: 10
// member variables: 2
// vtable entry: 1
// class size: 4,648
class CUtlCStringConversion : public CUtlCharConversion {
public:
	/* class CUtlCharConversion <ancestor>; */ /* 0 4392 */
	void ~CUtlCStringConversion(CUtlCStringConversion* );
	void CUtlCStringConversion(CUtlCStringConversion* , CUtlCStringConversion& );
	void CUtlCStringConversion(CUtlCStringConversion* , const CUtlCStringConversion& );
	/* tier0/tier0_strtools.cpp:3023 */
	void CUtlCStringConversion(CUtlCStringConversion* , char, const char* , int, const ConversionArray_t* );
	/* tier0/tier0_strtools.cpp:3034 */
	virtual char FindConversion(CUtlCStringConversion* , const char* , int* );
private:
	char m_pConversion[256]; /* 4392 256 */
	void ~CUtlCStringConversion(class CUtlCStringConversion *); /* linkage=_ZN21CUtlCStringConversionD4Ev */
	void CUtlCStringConversion(class CUtlCStringConversion *, class CUtlCStringConversion &); /* linkage=_ZN21CUtlCStringConversionC4EOS_ */
	void CUtlCStringConversion(class CUtlCStringConversion *, const class CUtlCStringConversion  &); /* linkage=_ZN21CUtlCStringConversionC4ERKS_ */
	void CUtlCStringConversion(class CUtlCStringConversion *, char, const char  *, int, const class ConversionArray_t  *); /* linkage=_ZN21CUtlCStringConversionC4EcPKciPKN18CUtlCharConversion17ConversionArray_tE */
	virtual char FindConversion(class CUtlCStringConversion *, const char  *, int *); /* linkage=_ZN21CUtlCStringConversion14FindConversionEPKcPi */
};

// <005F41C7> tier0/tier0_strtools.cpp:3023
// variables: 2
// function calls: 2
void CUtlCStringConversion::CUtlCStringConversion(char nEscapeChar, const char* pDelimiter, int nCount, const ConversionArray_t* pArray)
{
	{
		int i; // 3027
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3026
	{
		int i; // 3027
	}
} /* size: 134, inline expansions: 2 (36 bytes) */

// <005F416D> tier0/tier0_strtools.cpp:3023
// variable: 1
void CUtlCStringConversion::CUtlCStringConversion(char nEscapeChar, const char* pDelimiter, int nCount, const ConversionArray_t* pArray)
{
	{
		int i; // 3027
	}
} /* size: 0 */

// <005F410C> tier0/tier0_strtools.cpp:3034
// variable: 1
void CUtlCStringConversion::FindConversion(const char* pString, int* pLength)
{
	char c; // 3036
} /* size: 25, variables: 1 */

// <005E0CBC> tier0/tier0_strtools.cpp:3065
// member functions: 10
// member variables: 2
// vtable entry: 1
// class size: 4,648
class CUtlJSONConversion : public CUtlCharConversion {
public:
	/* class CUtlCharConversion <ancestor>; */ /* 0 4392 */
	void ~CUtlJSONConversion(CUtlJSONConversion* );
	void CUtlJSONConversion(CUtlJSONConversion* , CUtlJSONConversion& );
	void CUtlJSONConversion(CUtlJSONConversion* , const CUtlJSONConversion& );
	/* tier0/tier0_strtools.cpp:3077 */
	void CUtlJSONConversion(CUtlJSONConversion* , char, const char* , int, const ConversionArray_t* );
	/* tier0/tier0_strtools.cpp:3088 */
	virtual char FindConversion(CUtlJSONConversion* , const char* , int* );
private:
	char m_pConversion[256]; /* 4392 256 */
	void ~CUtlJSONConversion(class CUtlJSONConversion *); /* linkage=_ZN18CUtlJSONConversionD4Ev */
	void CUtlJSONConversion(class CUtlJSONConversion *, class CUtlJSONConversion &); /* linkage=_ZN18CUtlJSONConversionC4EOS_ */
	void CUtlJSONConversion(class CUtlJSONConversion *, const class CUtlJSONConversion  &); /* linkage=_ZN18CUtlJSONConversionC4ERKS_ */
	void CUtlJSONConversion(class CUtlJSONConversion *, char, const char  *, int, const class ConversionArray_t  *); /* linkage=_ZN18CUtlJSONConversionC4EcPKciPKN18CUtlCharConversion17ConversionArray_tE */
	virtual char FindConversion(class CUtlJSONConversion *, const char  *, int *); /* linkage=_ZN18CUtlJSONConversion14FindConversionEPKcPi */
};

// <005F3F9E> tier0/tier0_strtools.cpp:3077
// variables: 2
// function calls: 2
void CUtlJSONConversion::CUtlJSONConversion(char nEscapeChar, const char* pDelimiter, int nCount, const ConversionArray_t* pArray)
{
	{
		int i; // 3081
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3080
	{
		int i; // 3081
	}
} /* size: 134, inline expansions: 2 (36 bytes) */

// <005F3F44> tier0/tier0_strtools.cpp:3077
// variable: 1
void CUtlJSONConversion::CUtlJSONConversion(char nEscapeChar, const char* pDelimiter, int nCount, const ConversionArray_t* pArray)
{
	{
		int i; // 3081
	}
} /* size: 0 */

// <005F3F06> tier0/tier0_strtools.cpp:3088
// variable: 1
void CUtlJSONConversion::FindConversion(const char* pString, int* pLength)
{
	char c; // 3090
} /* size: 0, variables: 1 */

// <005F3EE3> tier0/tier0_strtools.cpp:3106
CUtlCharConversion* GetJSONCharConversion(void)
{
} /* size: 12 */

// <005F3CF8> tier0/tier0_strtools.cpp:3138
// variables: 6
// function call: 1
const char* V_ParseToken(const char* pStrIn, char* pToken, int bufsize, bool* pbOverflowed, const characterset_t* pTokenBreakCharacters)
{

skipwhite: // 3170
	int maxpos; // 3145
	uint8 c; // 3146
	int len; // 3147
	const characterset_t* breaks; // 3148
	{
		bool built; // 3151
		characterset_t s_BreakSetIncludingColons; // 3152
		characterset_t::characterset_t(); // 3152
	}
} /* size: 618, variables: 4, goto labels: 1 */

// <005F3B9D> tier0/tier0_strtools.cpp:3272
// variables: 4
// function calls: 4
int V_CompareNameWithWildcards(const char* pszPattern, const char* pszName, bool bExactCase)
{
	const char* pszStarPattern; // 3277
	const char* pszStarName; // 3278
	{
		int c1; // 3321
		int c2; // 3322
		FastASCIIToLower<char>(char c); // 3321
		FastASCIIToLower<char>(char c); // 3322
	}
	FastASCIIToLower<char>(char c); // 3301
	FastASCIIToLower<char>(char c); // 3301
} /* size: 343, variables: 2, inline expansions: 2 (80 bytes) */

// <005F35E4> tier0/tier0_strtools.cpp:3342
// variables: 9
// function calls: 17
void V_LogMultiline(bool input, const char* label, const char* data, size_t len, CUtlString& output)
{
	const char   HEX; // 3344
	CBufferStringN<500> outBuf; // 3346
	const char* direction; // 3347
	const size_t  LINE_SIZE; // 3348
	char hex_line; // 3349
	char asc_line; // 3349
	{
		size_t line_len; // 3354
		{
			size_t i; // 3355
			{
				uint8 ch; // 3356
				V_isprint(char c); // 3357
			}
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 3352
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 3353
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<500>::CBufferStringN(); // 3346
	CUtlString::CUtlString(); // 86
	AcquireBuffer(CBufferString* pStr,
			bool bExact);  // 3368
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 3368
	CUtlString::~CUtlString(); // 3368
	CBufferString::~CBufferString(); // 587
	CBufferStringN<500>::~CBufferStringN(); // 3369
} /* size: 568, variables: 6, inline expansions: 12 (274 bytes) */

// <005F2E6A> tier0/tier0_strtools.cpp:3372
// variables: 9
// function calls: 26
void V_LogMultilineToArray(bool input, const char* label, const char* data, size_t len, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& output)
{
	const char   HEX; // 3374
	CBufferStringN<200> outBuf; // 3376
	const char* direction; // 3377
	const size_t  LINE_SIZE; // 3378
	char hex_line; // 3379
	char asc_line; // 3379
	{
		size_t line_len; // 3384
		{
			size_t i; // 3385
			{
				uint8 ch; // 3386
				V_isprint(char c); // 3387
			}
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 3382
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 3383
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 3394
		CUtlString::CUtlString(
				const char* pString);  // 3394
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1252
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1514
		Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				CUtlString& src);  // 3394
		CUtlString::~CUtlString(); // 3394
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3376
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3398
} /* size: 701, variables: 6, inline expansions: 5 (74 bytes) */

// <005F2E1E> tier0/tier0_strtools.cpp:3401
// variables: 2
char* AllocString(const char* pStr, int nMaxChars)
{
	int allocLen; // 3403
	char* pOut; // 3409
} /* size: 0, variables: 2 */

// <005F1DB3> tier0/tier0_strtools.cpp:3460
// variables: 7
// function calls: 35
void V_SplitString2(const char* pString, const char* const* pSeparators, int nSeparators, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& outStrings, bool bIncludeEmptyStrings)
{
	const char* pCurPos; // 3463
	{
		int iFirstSeparator; // 3466
		const char* pFirstSeparator; // 3467
		{
			int i; // 3468
			{
				const char* pTest; // 3470
			}
		}
		{
			int separatorLen; // 3481
			V_strlen(const char* str); // 3481
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1143
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1148
			CUtlString::CUtlString(); // 1479
			Construct<CUtlString>(CUtlString* pMemory); // 1148
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(); // 3484
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 3484
		}
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1143
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1148
		CUtlString::CUtlString(); // 1479
		Construct<CUtlString>(CUtlString* pMemory); // 1148
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(); // 3494
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 3494
	}
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 3462
} /* size: 583, variables: 1, inline expansions: 6 (335 bytes) */

// <005F1C78> tier0/tier0_strtools.cpp:3507
void V_SplitString(const char* pString, const char* pSeparator, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& outStrings, bool bIncludeEmptyStrings)
{
} /* size: 39 */

// <005F0C3C> tier0/tier0_strtools.cpp:3565
// variables: 8
// function calls: 35
void V_SplitStringOnSeparators(const char* pString, const char* pSeparators, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& outStrings, bool bIncludeEmptyStrings)
{
	const char* pCurPos; // 3568
	char search; // 3570
	int nSeparators; // 3573
	{
		int iFirstSeparator; // 3577
		const char* pFirstSeparator; // 3578
		{
			int i; // 3579
			{
				const char* pTest; // 3582
			}
		}
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1143
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1148
		CUtlString::CUtlString(); // 1479
		Construct<CUtlString>(CUtlString* pMemory); // 1148
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(); // 3595
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 3595
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1143
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1148
		CUtlString::CUtlString(); // 1479
		Construct<CUtlString>(CUtlString* pMemory); // 1148
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(); // 3605
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 3605
	}
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 3567
	V_strlen(const char* str); // 3573
} /* size: 545, variables: 3, inline expansions: 7 (315 bytes) */

// <005F046F> tier0/tier0_strtools.cpp:3612
// variables: 8
// function calls: 29
void V_SplitString2InPlace(char* pString, const char ** pSeparators, int nSeparators, CUtlVector<char const*, CUtlMemory<char const*, int> >& outStrings)
{
	const char   __FUNCTION__; // 19115
	char* pCurPos; // 3619
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3616
	}
	{
		int iFirstSeparator; // 3622
		char* pFirstSeparator; // 3623
		{
			int i; // 3624
			{
				char* pTest; // 3626
				V_stristr_fast(char* pStr,
						const char* pSearch);  // 3626
			}
		}
		{
			int separatorLen; // 3637
			V_strlen(const char* str); // 3637
			memset(void* __dest,
				int __ch,
				size_t __len);  // 51
			V_memset(void* dest,
				int fill,
				int count);  // 3638
			CUtlMemory<char const::NumAllocated(); // 1196
			CUtlMemory<char const::operator[](
					int i);  // 602
			CUtlVectorBase<char const::Element(
				int i);  // 1201
			CopyConstruct<char const*>(const char ** pMemory,
							const char* const& src);  // 1201
			CUtlMemory<char const::Base(); // 112
			CUtlVectorBase<char const::Base(); // 368
			CUtlVectorBase<char const::ResetDbgInfo(); // 824
			CUtlVectorBase<char const::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<char const::AddToTail(
					const char* const& src);  // 3639
		}
		CUtlMemory<char const::NumAllocated(); // 1196
		CUtlMemory<char const::operator[](
				int i);  // 602
		CUtlVectorBase<char const::Element(
			int i);  // 1201
		CopyConstruct<char const*>(const char ** pMemory,
						const char* const& src);  // 1201
		CUtlMemory<char const::Base(); // 112
		CUtlVectorBase<char const::Base(); // 368
		CUtlVectorBase<char const::ResetDbgInfo(); // 824
		CUtlVectorBase<char const::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<char const::AddToTail(
				const char* const& src);  // 3648
	}
	CUtlVectorBase<char const::Count(); // 3616
	CUtlVectorBase<char const::RemoveAll(); // 1798
	CUtlMemory<char const::IsExternallyAllocated(); // 905
	CUtlMemory<char const::Purge(); // 903
	CUtlMemory<char const::Purge(); // 1799
	CUtlVectorBase<char const::ResetDbgInfo(); // 1800
	CUtlVectorBase<char const::Purge(); // 3618
} /* size: 0, variables: 2, inline expansions: 7 (159 bytes) */

// <005F03DB> tier0/tier0_strtools.cpp:3655
void V_SplitStringInPlace(char* pString, const char* pSeparator, CUtlVector<char const*, CUtlMemory<char const*, int> >& outStrings)
{
} /* size: 35 */

// <005F038F> tier0/tier0_strtools.cpp:3661
// variables: 2
wchar_t* AllocWString(const wchar_t* pStr, int nMaxChars)
{
	int allocLen; // 3663
	wchar_t* pOut; // 3669
} /* size: 0, variables: 2 */

// <005EFC2F> tier0/tier0_strtools.cpp:3675
// variables: 6
// function calls: 28
void V_SplitWString2(const wchar_t* pString, const wchar_t ** pSeparators, int nSeparators, CUtlVector<wchar_t*, CUtlMemory<wchar_t*, int> >& outStrings)
{
	const wchar_t* pCurPos; // 3678
	{
		int iFirstSeparator; // 3681
		const wchar_t* pFirstSeparator; // 3682
		{
			int i; // 3683
			{
				const wchar_t* pTest; // 3685
			}
		}
		{
			int separatorLen; // 3696
			V_wcslen(const wchar_t* pwch); // 3696
			CUtlMemory<wchar_t::NumAllocated(); // 1247
			CUtlMemory<wchar_t::operator[](
					int i);  // 602
			CUtlVectorBase<wchar_t::Element(
				int i);  // 1252
			Construct<wchar_t*, wchar_t*>(wchar_t** pMemory); // 1252
			CUtlMemory<wchar_t::Base(); // 112
			CUtlVectorBase<wchar_t::Base(); // 368
			CUtlVectorBase<wchar_t::ResetDbgInfo(); // 824
			CUtlVectorBase<wchar_t::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<wchar_t::AddToTail(
					wchar_t *& src);  // 3699
		}
		V_wcslen(const wchar_t* pwch); // 3707
		V_wcsncpy_cch<int>(wchar_t* pDest,
					const wchar_t* pSrc,
					int maxLenInChars);  // 3670
		AllocWString(const wchar_t* pStr,
				int nMaxChars);  // 3709
		CUtlMemory<wchar_t::NumAllocated(); // 1247
		CUtlMemory<wchar_t::operator[](
				int i);  // 602
		CUtlVectorBase<wchar_t::Element(
			int i);  // 1252
		Construct<wchar_t*, wchar_t*>(wchar_t** pMemory); // 1252
		CUtlMemory<wchar_t::Base(); // 112
		CUtlVectorBase<wchar_t::Base(); // 368
		CUtlVectorBase<wchar_t::ResetDbgInfo(); // 824
		CUtlVectorBase<wchar_t::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<wchar_t::AddToTail(
				wchar_t *& src);  // 3709
	}
	CUtlVectorBase<wchar_t::RemoveAll(); // 1798
	CUtlMemory<wchar_t::Purge(); // 903
	CUtlMemory<wchar_t::IsExternallyAllocated(); // 905
	CUtlMemory<wchar_t::Purge(); // 1799
	CUtlVectorBase<wchar_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<wchar_t::Purge(); // 3677
} /* size: 466, variables: 1, inline expansions: 6 (187 bytes) */

// <005EFB9F> tier0/tier0_strtools.cpp:3717
void V_SplitWString(const wchar_t* pString, const wchar_t* pSeparator, CUtlVector<wchar_t*, CUtlMemory<wchar_t*, int> >& outStrings)
{
} /* size: 35 */

// <005EFB6D> tier0/tier0_strtools.cpp:3737
// variable: 1
bool V_IsMeanUnderscoreW(wchar_t wch)
{
	bool bIsMean; // 3739
} /* size: 0, variables: 1 */

// <005EFB1C> tier0/tier0_strtools.cpp:3764
// variable: 1
bool V_IsMeanSpaceW(wchar_t wch)
{
	bool bIsMean; // 3766
} /* size: 126, variables: 1 */

// <005EFACB> tier0/tier0_strtools.cpp:3851
// variable: 1
bool V_IsDeprecatedW(wchar_t wch)
{
	bool bIsDeprecated; // 3853
} /* size: 45, variables: 1 */

// <005EFA67> tier0/tier0_strtools.cpp:3878
// variables: 2
char cIntToHexDigit(int nValue)
{
	const char   __FUNCTION__; // 59539
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3880
	}
} /* size: 0, variables: 1 */

// <005EFA35> tier0/tier0_strtools.cpp:3888
// variable: 1
int iHexCharToInt(char cValue)
{
	int32 iValue; // 3890
} /* size: 0, variables: 1 */

// <005EF884> tier0/tier0_strtools.cpp:3905
// variables: 7
// function calls: 2
int V_URLEncodeInternal(char* pchDest, int nDestLen, const char* pchSource, int nSourceLen, bool bUsePlusForSpace)
{
	const char   __FUNCTION__; // 1445
	int iDestPos; // 3914
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3910
	}
	{
		int i; // 3915
		{
			uint8 iValue; // 3931
			{
				char cHexDigit1; // 3939
				char cHexDigit2; // 3941
				cIntToHexDigit(int nValue); // 3941
				cIntToHexDigit(int nValue); // 3939
			}
		}
	}
} /* size: 0, variables: 2 */

// <005EF5EF> tier0/tier0_strtools.cpp:3965
// variables: 9
// function calls: 4
int V_URLDecodeInternal(char* pchDecodeDest, int nDecodeDestLen, const char* pchEncodedSource, int nEncodedSourceLen, bool bUsePlusForSpace)
{
	const char   __FUNCTION__; // 1445
	int iDestPos; // 3973
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3969
	}
	{
		int i; // 3974
		{
			char cHexDigit1; // 3987
			char cHexDigit2; // 3988
			bool bValid; // 3994
			int iValue; // 3995
			{
				int iValue2; // 3999
				iHexCharToInt(char cValue); // 3888
				iHexCharToInt(char cValue); // 3999
			}
			iHexCharToInt(char cValue); // 3888
			iHexCharToInt(char cValue); // 3995
		}
	}
} /* size: 0, variables: 2 */

// <005EF544> tier0/tier0_strtools.cpp:4042
int V_URLEncode(char* pchDest, int nDestLen, const char* pchSource, int nSourceLen)
{
} /* size: 15 */

// <005EF499> tier0/tier0_strtools.cpp:4056
int V_URLDecode(char* pchDecodeDest, int nDecodeDestLen, const char* pchEncodedSource, int nEncodedSourceLen)
{
} /* size: 15 */

// <005EF3EE> tier0/tier0_strtools.cpp:4068
int V_URLEncodeRaw(char* pchDest, int nDestLen, const char* pchSource, int nSourceLen)
{
} /* size: 12 */

// <005EF343> tier0/tier0_strtools.cpp:4081
int V_URLDecodeRaw(char* pchDecodeDest, int nDecodeDestLen, const char* pchEncodedSource, int nEncodedSourceLen)
{
} /* size: 12 */

// <005E6C92> tier0/tier0_strtools.cpp:4087
// member variables: 3
// struct size: 24
struct HtmlEntity_t {
	short unsigned int uCharCode; /* 0 2 */
	const char * pchEntity; /* 8 8 */
	int nEntityLength; /* 16 4 */
};

// <005EF1B8> tier0/tier0_strtools.cpp:4109
// variables: 9
bool V_BasicHtmlEntityEncode(char* pDest, const int nDestSize, const char* pIn, const int nInSize, bool bPreserveWhitespace)
{
	const char   __FUNCTION__; // 52482
	int iOutput; // 4112
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4111
	}
	{
		int iInput; // 4113
		{
			bool bReplacementDone; // 4115
			{
				int i; // 4117
				{
					int j; // 4122
				}
			}
			{
				int i; // 4137
				{
					int j; // 4142
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <005EEE4F> tier0/tier0_strtools.cpp:4177
// variables: 14
// function calls: 3
bool V_HtmlEntityDecodeToUTF8(char* pDest, const int nDestSize, const char* pIn, const int nInSize)
{
	const char   __FUNCTION__; // 12305
	int iOutput; // 4180
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4179
	}
	{
		int iInput; // 4181
		{
			bool bReplacementDone; // 4183
			{
				uchar32 wrgchReplacement; // 4188
				char rgchReplacement; // 4189
				const char* pchEnd; // 4192
				{
					int cchReplacement; // 4234
					{
						int iBase; // 4198
						int iOffset; // 4199
					}
					{
						const FullHTMLEntity_t* pFullEntities; // 4215
						{
							int i; // 4216
							V_memcmp(const void* m1,
								const void* m2,
								int count);  // 4220
						}
					}
					{
						int i; // 4239
					}
					V_strlen(const char* str); // 4234
				}
				strstr(const char* __haystack,
					const char* __needle);  // 4192
			}
		}
	}
} /* size: 0, variables: 2 */

// <005EEB87> tier0/tier0_strtools.cpp:4296
// variables: 9
// function calls: 4
bool V_BBCodeToHTML(char* pDest, const int nDestSize, const char* pIn, const int nInSize)
{
	const char   __FUNCTION__; // 59539
	int iOutput; // 4299
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4298
	}
	{
		int iInput; // 4301
		{
			bool bFoundReplacement; // 4306
			{
				int r; // 4307
				{
					int nBBCodeLength; // 4309
					{
						int nHTMLReplacementLength; // 4312
						{
							int c; // 4313
						}
						V_strlen(const char* str); // 4312
					}
					V_strlen(const char* str); // 4309
					V_strnicmp_fast<int>(const char* s1,
								const char* s2,
								int n);  // 4310
				}
			}
			V_strnicmp_fast<int>(const char* s1,
						const char* s2,
						int n);  // 4324
		}
	}
} /* size: 0, variables: 2 */

// <005EEA24> tier0/tier0_strtools.cpp:4402
// variables: 4
// function call: 1
bool V_IsValidDomainNameCharacter(const char* pch, int* pAdvanceBytes)
{
	unsigned char ch; // 4411
	{
		uchar32 rgch32Buf; // 4414
		bool bError; // 4415
		int iAdvance; // 4416
		V_IsMeanUnderscoreW(wchar_t wch); // 4430
	}
} /* size: 290, variables: 1 */

// <005EE90F> tier0/tier0_strtools.cpp:4461
// variables: 4
bool V_IsValidURLCharacter(const char* pch, int* pAdvanceBytes)
{
	unsigned char ch; // 4469
	{
		uchar32 rgch32Buf; // 4472
		bool bError; // 4473
		int iAdvance; // 4474
	}
} /* size: 263, variables: 1 */

// <005EE5FE> tier0/tier0_strtools.cpp:4521
// variables: 7
// function calls: 5
bool V_ExtractDomainFromURL(const char* pchURL, char* pchDomain, int cchDomain)
{
	const char* k_pchSteamOpenUrl; // 4525
	const char* k_pchSteamOpenUrlExt; // 4526
	const char* pchOpenUrlSuffix; // 4528
	const char* pchDoubleSlash; // 4538
	int iAdvance; // 4575
	int iStrLen; // 4576
	char cLast; // 4577
	StringAfterPrefix<char const>(const char* str,
					const char* prefix);  // 4528
	strstr(const char* __haystack,
		const char* __needle);  // 4538
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 4560
	StringAfterPrefix<char const>(const char* str,
					const char* prefix);  // 4530
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 4565
} /* size: 360, variables: 7, inline expansions: 5 (78 bytes) */

// <005EE48D> tier0/tier0_strtools.cpp:4597
// variables: 3
// function calls: 2
bool V_URLContainsDomain(const char* pchURL, const char* pchDomain)
{
	char rgchExtractedDomain; // 4599
	{
		int cchExtractedDomain; // 4603
		int cchDomain; // 4608
		V_strlen(const char* str); // 4603
		V_strlen(const char* str); // 4608
	}
} /* size: 197, variables: 1 */

// <005ECEDF> tier0/tier0_strtools.cpp:4633
// variables: 30
// function calls: 51
void V_StripAndPreserveHTMLCore(CBufferString& outputBuffer, const char* pchHTML, const char ** rgszPreserveTags, uint cPreserveTags, const char ** rgszNoCloseTags, uint cNoCloseTags, uint cMaxResultSize)
{
	uint cHTMLCur; // 4643
	const int  nHTMLLength; // 4644
	bool bStripNewLines; // 4646
	bool bInStrippedTag; // 4657
	bool bInStrippedContentTag; // 4658
	bool bInPreservedTag; // 4659
	bool bInListItemTag; // 4660
	bool bLastCharWasWhitespace; // 4661
	bool bInComment; // 4662
	bool bInDoubleQuote; // 4663
	bool bInSingleQuote; // 4664
	int nPreTagDepth; // 4665
	CUtlVector<char const*, CUtlMemory<char const*, int> > vecTagStack; // 4666
	{
		uint i; // 4649
	}
	{
		int iContents; // 4668
		{
			char c; // 4675
			const char* pchCur; // 4678
			{
				int nMultibyteRemaining; // 4751
				wchar_t rgwch; // 4766
				CBufferString::Append(
					const char* pString,
					int nChars,
					bool bExact);  // 4761
			}
			{
				bool bPreserve; // 4786
				bool bEndTag; // 4787
				const char* szTagStart; // 4788
				{
					uint iTag; // 4803
					{
						const char* szTag; // 4805
						int cchTag; // 4806
						{
							bool bNoCloseTag; // 4845
							{
								uint iNoClose; // 4846
							}
							CUtlMemory<char const::operator[](
									int i);  // 602
							CUtlVectorBase<char const::Element(
								int i);  // 1201
							CopyConstruct<char const*>(const char ** pMemory,
											const char* const& src);  // 1201
							CUtlVectorBase<char const::ResetDbgInfo(); // 824
							CUtlVectorBase<char const::GrowMemory(
									int num);  // 1198
							CUtlVectorBase<char const::AddToTail(
									const char* const& src);  // 4857
						}
						CUtlMemory<char const::operator[](
								int i);  // 588
						CUtlVectorBase<char const::operator[](
								int i);  // 4824
						CUtlVectorBase<char const::Remove(
							int elem);  // 4826
						CUtlVectorBase<char const::Count(); // 4818
						CUtlVectorBase<char const::Remove(
							int elem);  // 4820
						V_strnicmp_fast<int>(const char* s1,
									const char* s2,
									int n);  // 4810
						V_isalnum(char c); // 4810
						V_strlen(const char* str); // 4806
					}
				}
				CBufferString::AppendChar(
						char ch,
						bool bExact);  // 4874
				V_strnicmp_fast<int>(const char* s1,
							const char* s2,
							int n);  // 4795
			}
			{
				const char* szTagStart; // 4881
				{
					char cLastChar; // 4907
					CBufferString::AppendChar(
							char ch,
							bool bExact);  // 4915
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 776
					CBufferString::String(); // 4911
				}
				V_strnicmp_fast<int>(const char* s1,
							const char* s2,
							int n);  // 4882
				CBufferString::AppendChar(
						char ch,
						bool bExact);  // 4897
				CBufferString::AppendChar(
						char ch,
						bool bExact);  // 4898
				CBufferString::AppendChar(
						char ch,
						bool bExact);  // 4922
				CBufferString::AppendChar(
						char ch,
						bool bExact);  // 4886
				CBufferString::AppendChar(
						char ch,
						bool bExact);  // 4893
			}
			V_strnicmp_fast<int>(const char* s1,
						const char* s2,
						int n);  // 4689
			V_strnicmp_fast<int>(const char* s1,
						const char* s2,
						int n);  // 4679
			V_strnicmp_fast<int>(const char* s1,
						const char* s2,
						int n);  // 4737
			V_isspace(int c); // 4931
			CBufferString::AppendChar(
					char ch,
					bool bExact);  // 4946
			CBufferString::AppendChar(
					char ch,
					bool bExact);  // 4937
			CBufferString::AppendChar(
					char ch,
					bool bExact);  // 4706
		}
	}
	{
		int iTagStack; // 4958
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 4960
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 4961
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 4962
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 4963
	}
	V_strlen(const char* str); // 4644
	CUtlMemory<char const::ValidateGrowSize(); // 475
	CUtlMemory<char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char const::ResetDbgInfo(); // 530
	CUtlVectorBase<char const::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char const::CUtlVector(); // 4666
	CBufferString::AppendChar(
			char ch,
			bool bExact);  // 4967
	CUtlMemory<char const::Purge(); // 903
	CUtlMemory<char const::Purge(); // 1799
	CUtlVectorBase<char const::Purge(); // 560
	CUtlVectorBase<char const::~CUtlVectorBase(); // 410
	CUtlVector<char const::~CUtlVector(); // 4968
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 4955
} /* size: 3586, variables: 13, inline expansions: 13 (703 bytes) */

// <005ECDEC> tier0/tier0_strtools.cpp:4974
// variable: 1
void V_StripAndPreserveHTML(CBufferString& outputBuffer, const char* pchHTML, const char ** rgszPreserveTags, uint cPreserveTags, uint cMaxResultSize)
{
	const char* rgszNoCloseTags; // 4976
} /* size: 94, variables: 1 */

// <005ECDC9> tier0/tier0_strtools.cpp:4986
inline char FastFilenameToLower(char c)
{
} /* size: 0 */

// <005ECC6B> tier0/tier0_strtools.cpp:4994
// variables: 4
// function calls: 4
bool V_AreFileNamesEqual(const char* pFileName1, const char* pFileName2, bool bDirectoryNames)
{
	const char* pS1; // 4996
	const char* pS2; // 4997
	{
		char c1; // 5000
		char c2; // 5001
		FastFilenameToLower(char c); // 5009
		FastFilenameToLower(char c); // 5010
		FastFilenameToLower(char c); // 5038
		FastFilenameToLower(char c); // 5039
	}
} /* size: 452, variables: 2 */

// <005EC9E3> tier0/tier0_strtools.cpp:5167
// variables: 8
// function calls: 2
void _V_FileBase(const char* in, char* out, int maxlen)
{
	const char   __FUNCTION__; // 2705
	int len; // 5179
	int start; // 5179
	int end; // 5179
	int maxcopy; // 5218
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5169
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5171
	}
	V_strlen(const char* str); // 5181
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 5221
} /* size: 0, variables: 5, inline expansions: 2 (30 bytes) */

// <005EC8F4> tier0/tier0_strtools.cpp:5228
// variables: 3
// function call: 1
void V_StripTrailingSlash(char* ppath)
{
	const char   __FUNCTION__; // 2130
	int len; // 5232
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5230
	}
	V_strlen(const char* str); // 5232
} /* size: 0, variables: 2, inline expansions: 1 (5 bytes) */

// <005EC747> tier0/tier0_strtools.cpp:5249
// variables: 2
// function calls: 3
void _V_StripExtension(const char* in, char* out, int outSize)
{
	int end; // 5255
	{
		int nChars; // 5263
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 5266
	}
	V_strlen(const char* str); // 5255
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 5275
} /* size: 186, variables: 1, inline expansions: 2 (31 bytes) */

// <005EC471> tier0/tier0_strtools.cpp:5287
// variables: 6
// function calls: 3
void _V_DefaultExtension(char* path, const char* extension, int pathStringLength)
{
	const char   __FUNCTION__; // 1445
	char* src; // 5293
	char pTemp; // 5311
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5289
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5290
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5291
	}
	V_strlen(const char* str); // 5298
	V_strncat<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars,
			int nMaxCharsToCopy);  // 5318
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 5315
} /* size: 0, variables: 3, inline expansions: 3 (58 bytes) */

// <005EC22B> tier0/tier0_strtools.cpp:5349
// variable: 1
// function call: 1
void V_StripFilename(char* path)
{
	int length; // 5351
	V_strlen(const char* str); // 5353
} /* size: 105, variables: 1, inline expansions: 1 (10 bytes) */

// <005EC199> tier0/tier0_strtools.cpp:5383
bool V_AreSlashesCorrect(const char* pname, char separator)
{
} /* size: 54 */

// <005EBB03> tier0/tier0_strtools.cpp:5420
// variables: 2
// function calls: 18
bool V_PathsMatch(const char* pPath1, const char* pPath2)
{
	CPathBufferString path1Fixed; // 5422
	CPathBufferString path2Fixed; // 5423
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
			bool bGrowable);  // 5422
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 5423
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 5427
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 5427
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 5428
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 5428
} /* size: 320, variables: 2, inline expansions: 18 (446 bytes) */

// <005EB5A8> tier0/tier0_strtools.cpp:5433
// variables: 2
// function calls: 18
bool V_PathNamesAreEquivalent(const char* pFirst, const char* pSecond)
{
	CPathBufferString firstFixed; // 5435
	CPathBufferString secondFixed; // 5437
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
			bool bGrowable);  // 5435
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 5437
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 5440
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 5440
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 5441
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 5441
} /* size: 320, variables: 2, inline expansions: 18 (446 bytes) */

// <005EB3FE> tier0/tier0_strtools.cpp:5449
// variables: 4
// function call: 1
bool _V_StripLastDir(char* dirName, int maxlen)
{
	int len; // 5456
	const char   __FUNCTION__; // 62487
	bool bHitColon; // 5466
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5458
	}
	V_strlen(const char* str); // 5456
} /* size: 0, variables: 3, inline expansions: 1 (13 bytes) */

// <005EAEC2> tier0/tier0_strtools.cpp:5589
// variable: 1
// function call: 1
void _V_ExtractFileExtension(const char* path, char* dest, int destSize)
{
	const char* extension; // 5592
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 5594
} /* size: 53, variables: 1, inline expansions: 1 (14 bytes) */

// <005EAE5B> tier0/tier0_strtools.cpp:5605
// variable: 1
const char* V_GetFileExtensionSafe(const char* path)
{
	const char* pExt; // 5607
} /* size: 29, variables: 1 */

// <005EA9A6> tier0/tier0_strtools.cpp:5879
// variables: 3
void _V_AppendSlash(char* pStr, int strSize, char separator)
{
	int len; // 5881
	const char   __FUNCTION__; // 59539
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5886
	}
} /* size: 0, variables: 2 */

// <005E9C04> tier0/tier0_strtools.cpp:6054
// variable: 1
// function calls: 4
bool _V_MakeRelativePath(const char* pFullPath, const char* pDirectory, char* pRelativePath, int nBufLen)
{
	CBufferString wrapOut; // 6056
	CBufferString::SetFixedPtr(
			char* pBuffer,
			int nBufferChars,
			int nStringChars,
			bool bFreeBuffer);  // 6057
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 6056
	CBufferString::~CBufferString(); // 6059
} /* size: 141, variables: 1, inline expansions: 4 (56 bytes) */

// <005E9AAB> tier0/tier0_strtools.cpp:6062
// variables: 4
// function calls: 3
int LengthOfMatchingPaths(const char* pFilenamePath, const char* pMatchPath)
{
	const char* pStartPath; // 6064
	const char* pLastSeparator; // 6065
	{
		char c0; // 6068
		char c1; // 6069
		TOUPPERC(char x); // 6071
		TOUPPERC(char x); // 6072
		strchr(const char* __s,
			int __c);  // 6074
	}
} /* size: 245, variables: 2 */

// <005E96DA> tier0/tier0_strtools.cpp:6166
// function calls: 4
bool V_IsFakePath(const char* pStr)
{
	StringAfterPrefix<char const>(const char* str,
					const char* prefix);  // 847
	StringHasPrefix(const char* str,
			const char* prefix);  // 6171
	StringAfterPrefix<char const>(const char* str,
					const char* prefix);  // 847
	StringHasPrefix(const char* str,
			const char* prefix);  // 6175
} /* size: 99, inline expansions: 4 (54 bytes) */

// <005E9371> tier0/tier0_strtools.cpp:6182
// variables: 3
// function calls: 9
bool V_MakeAbsoluteVPKPathNameBuffer(CBufferString* pOut, const char* pInPathName, const char* pStartingDir)
{
	const char* pCurPath; // 6194
	int nLen; // 6195
	int nPrefixLen; // 6201
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 6196
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 6207
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 6211
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 6186
} /* size: 323, variables: 3, inline expansions: 9 (260 bytes) */

// <005E9146> tier0/tier0_strtools.cpp:6223
// variables: 2
// function calls: 4
bool V_MakeAbsoluteVPKPathName(char* pOut, int nBufLen, const char* pInPathName, const char* pStartingDir, bool bLowercaseName)
{
	CBufferString wrapOut; // 6225
	bool bRet; // 6227
	CBufferString::SetFixedPtr(
			char* pBuffer,
			int nBufferChars,
			int nStringChars,
			bool bFreeBuffer);  // 6226
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 6225
	CBufferString::~CBufferString(); // 6235
} /* size: 170, variables: 2, inline expansions: 4 (61 bytes) */

// <005E90F2> tier0/tier0_strtools.cpp:6240
void V_FixupPathSpaceToUnderscore(char* pPath)
{
} /* size: 14 */

// <005E90AB> tier0/tier0_strtools.cpp:6248
void V_FixupPathCharToUnderscore(char* pPath, char ch)
{
} /* size: 52 */

// <005E8FDA> tier0/tier0_strtools.cpp:6262
// variables: 3
// function call: 1
void V_FixInvalidPathCharacters(char* pFileName)
{
	int len; // 6267
	{
		int j; // 6268
		{
			char c; // 6270
		}
	}
	V_strlen(const char* str); // 6267
} /* size: 153, variables: 1, inline expansions: 1 (5 bytes) */

// <005E8E93> tier0/tier0_strtools.cpp:6297
// function call: 1
void _V_FixupPathName(char* pOut, int nOutLen, const char* pPath, bool bLowercaseName)
{
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 6299
} /* size: 92, inline expansions: 1 (7 bytes) */

// <005E8BF7> tier0/tier0_strtools.cpp:6311
// variables: 11
// function calls: 4
char* V_AbbreviatePathInPlace(char* pPath, const int nMaxCharsAllowed, const char* pReplacementString)
{
	int nLen; // 6313
	const int  nShortenLen; // 6320
	const int  nMinToShorten; // 6327
	char* pLastSeenSlash; // 6329
	char* pShortenToSlash; // 6330
	char* pStr; // 6331
	int nShortend; // 6332
	const char   __FUNCTION__; // 52482
	char* pStartOfShortendString; // 6381
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6379
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6382
	}
	V_strlen(const char* str); // 6313
	V_strlen(const char* str); // 6320
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 6384
} /* size: 0, variables: 9, inline expansions: 4 (96 bytes) */

