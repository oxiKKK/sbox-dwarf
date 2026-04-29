
//
// public/tier0/tier0_strtools.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 192
//	classes: 2
//	structs: 2
//

// <0004C332> ../public/tier0/tier0_strtools.h:84
inline int V_wcslen(const wchar_t* pwch)
{
} /* size: 0 */

// <0060F85E> ../public/tier0/tier0_strtools.h:95
// variable: 1
inline int V_strlen16(const uchar16* puc16)
{
	int nElems; // 98
} /* size: 0, variables: 1 */

// <008C4624> ../public/tier0/tier0_strtools.h:107
// variable: 1
inline int V_strlen32(const uchar32* puc32)
{
	int nElems; // 110
} /* size: 0, variables: 1 */

// <0135699E> ../public/tier0/tier0_strtools.h:119
inline char* V_strcpy(char* dest, const char* src)
{
} /* size: 0 */

// <0015E7EF> ../public/tier0/tier0_strtools.h:129
inline int V_strcmp(const char* s1, const char* s2)
{
} /* size: 0 */

// <026286FB> ../public/tier0/tier0_strtools.h:149
inline int V_wcscmp(const wchar_t* s1, const wchar_t* s2)
{
} /* size: 0 */

// <01C06A0F> ../public/tier0/tier0_strtools.h:181
inline const char* V_strchr(const char* s, char c)
{
} /* size: 0 */

// <007586E6> ../public/tier0/tier0_strtools.h:189
inline char* V_strchr(char* s, char c)
{
} /* size: 0 */

// <001814F2> ../public/tier0/tier0_strtools.h:199
inline const char* V_strrchr(const char* s, char c)
{
} /* size: 0 */

// <04C3E925> ../public/tier0/tier0_strtools.h:207
inline char* V_strrchr(char* s, char c)
{
} /* size: 0 */

// <004D5E71> ../public/tier0/tier0_strtools.h:242
inline const char* V_strstr(const char* s1, const char* search)
{
} /* size: 0 */

// <005AE363> ../public/tier0/tier0_strtools.h:250
inline char* V_strstr(char* s1, const char* search)
{
} /* size: 0 */

// <01FA75C9> ../public/tier0/tier0_strtools.h:270
int _V_strncmp(const char *, const char *, int)
{
} /* size: 0 */

// <0554CABC> ../public/tier0/tier0_strtools.h:271
inline int V_strncmp<long unsigned int>(const char* s1, const char* s2, long unsigned int count)
{
} /* size: 0 */

// <01FA8E16> ../public/tier0/tier0_strtools.h:271
inline int V_strncmp<int>(const char* s1, const char* s2, int count)
{
} /* size: 0 */

// <06E9223C> ../public/tier0/tier0_strtools.h:276
int V_strnlen(const char *, int)
{
} /* size: 0 */

// <00543483> ../public/tier0/tier0_strtools.h:277
const char* V_strnchr(const char *, char, int)
{
} /* size: 0 */

// <04C38F36> ../public/tier0/tier0_strtools.h:286
char* V_strlower_fast(char *)
{
} /* size: 0 */

// <068DB17B> ../public/tier0/tier0_strtools.h:287
char* V_strupper_fast(char *)
{
} /* size: 0 */

// <00128722> ../public/tier0/tier0_strtools.h:292
const char* V_stristr_fast(const char *, const char *)
{
} /* size: 0 */

// <0054355B> ../public/tier0/tier0_strtools.h:298
const char* _V_strnistr_fast(const char *, const char *, int)
{
} /* size: 0 */

// <00543B20> ../public/tier0/tier0_strtools.h:299
inline const char* V_strnistr_fast<int>(const char* pStr, const char* pSearch, int n)
{
} /* size: 0 */

// <00543A6F> ../public/tier0/tier0_strtools.h:299
inline const char* V_strnistr_fast<long long int>(const char* pStr, const char* pSearch, long long int n)
{
} /* size: 0 */

// <00128D9B> ../public/tier0/tier0_strtools.h:305
int V_stricmp_fast(const char *, const char *)
{
} /* size: 0 */

// <00127FE9> ../public/tier0/tier0_strtools.h:307
int _V_strnicmp_fast(const char *, const char *, int)
{
} /* size: 0 */

// <00133550> ../public/tier0/tier0_strtools.h:308
inline int V_strnicmp_fast<int>(const char* s1, const char* s2, int n)
{
} /* size: 0 */

// <00256DC4> ../public/tier0/tier0_strtools.h:319
int V_stricmp_fast_NegativeForUnequal(const char *, const char *)
{
} /* size: 0 */

// <001283FB> ../public/tier0/tier0_strtools.h:349
void _V_strncpy(char *, const char *, int)
{
} /* size: 0 */

// <068F4B22> ../public/tier0/tier0_strtools.h:350
inline void V_strncpy<<unnamed enum> >(char* pDest, const char* pSrc, maxLenInChars)
{
} /* size: 0 */

// <010027DB> ../public/tier0/tier0_strtools.h:350
inline void V_strncpy<unsigned int>(char* pDest, const char* pSrc, unsigned int maxLenInChars)
{
} /* size: 0 */

// <004B8625> ../public/tier0/tier0_strtools.h:350
inline void V_strncpy<int>(char* pDest, const char* pSrc, int maxLenInChars)
{
} /* size: 0 */

// <00135DFD> ../public/tier0/tier0_strtools.h:350
inline void V_strncpy<long unsigned int>(char* pDest, const char* pSrc, long unsigned int maxLenInChars)
{
} /* size: 0 */

// <0685C2CF> ../public/tier0/tier0_strtools.h:355
void V_strcpy_safe<4096>(char& pDest, const char* pSrc)
{
} /* size: 0 */

// <04EC470A> ../public/tier0/tier0_strtools.h:355
void V_strcpy_safe<1024>(char& pDest, const char* pSrc)
{
} /* size: 0 */

// <034690B0> ../public/tier0/tier0_strtools.h:355
void V_strcpy_safe<32>(char& pDest, const char* pSrc)
{
} /* size: 0 */

// <004B84F1> ../public/tier0/tier0_strtools.h:355
void V_strcpy_safe<256>(char& pDest, const char* pSrc)
{
} /* size: 0 */

// <00B084B6> ../public/tier0/tier0_strtools.h:355
void V_strcpy_safe<64>(char& pDest, const char* pSrc)
{
} /* size: 0 */

// <008C17A2> ../public/tier0/tier0_strtools.h:355
void V_strcpy_safe<512>(char& pDest, const char* pSrc)
{
} /* size: 0 */

// <008C176A> ../public/tier0/tier0_strtools.h:355
void V_strcpy_safe<128>(char& pDest, const char* pSrc)
{
} /* size: 0 */

// <0083D663> ../public/tier0/tier0_strtools.h:355
void V_strcpy_safe<255>(char& pDest, const char* pSrc)
{
} /* size: 0 */

// <001E53F4> ../public/tier0/tier0_strtools.h:355
void V_strcpy_safe<8192>(char& pDest, const char* pSrc)
{
} /* size: 0 */

// <00435828> ../public/tier0/tier0_strtools.h:355
void V_strcpy_safe<1500>(char& pDest, const char* pSrc)
{
} /* size: 0 */

// <000A905C> ../public/tier0/tier0_strtools.h:355
void V_strcpy_safe<49>(char& pDest, const char* pSrc)
{
} /* size: 0 */

// <00043D19> ../public/tier0/tier0_strtools.h:355
void V_strcpy_safe<8>(char& pDest, const char* pSrc)
{
} /* size: 0 */

// <0004A8BC> ../public/tier0/tier0_strtools.h:355
void V_strcpy_safe<16>(char& pDest, const char* pSrc)
{
} /* size: 0 */

// <004A71E2> ../public/tier0/tier0_strtools.h:361
char* _V_strncat(char *, const char *, int, int)
{
} /* size: 0 */

// <04EC478C> ../public/tier0/tier0_strtools.h:362
inline char* V_strncat<int>(char* pDest, const char* pSrc, int maxLenInChars, int nMaxCharsToCopy)
{
} /* size: 0 */

// <004B6337> ../public/tier0/tier0_strtools.h:362
inline char* V_strncat<long unsigned int>(char* pDest, const char* pSrc, long unsigned int maxLenInChars, int nMaxCharsToCopy)
{
} /* size: 0 */

// <034687A4> ../public/tier0/tier0_strtools.h:366
char* V_strcat_safe<64>(char& pDest, const char* pSrc, int nMaxCharsToCopy)
{
} /* size: 0 */

// <023AC649> ../public/tier0/tier0_strtools.h:366
char* V_strcat_safe<4096>(char& pDest, const char* pSrc, int nMaxCharsToCopy)
{
} /* size: 0 */

// <023AA6F9> ../public/tier0/tier0_strtools.h:366
char* V_strcat_safe<512>(char& pDest, const char* pSrc, int nMaxCharsToCopy)
{
} /* size: 0 */

// <001E5390> ../public/tier0/tier0_strtools.h:366
char* V_strcat_safe<8192>(char& pDest, const char* pSrc, int nMaxCharsToCopy)
{
} /* size: 0 */

// <004357C4> ../public/tier0/tier0_strtools.h:366
char* V_strcat_safe<1500>(char& pDest, const char* pSrc, int nMaxCharsToCopy)
{
} /* size: 0 */

// <0260E254> ../public/tier0/tier0_strtools.h:378
void _V_wcsncpy_bytes(wchar_t *, const wchar_t *, int)
{
} /* size: 0 */

// <02614F94> ../public/tier0/tier0_strtools.h:383
void V_wcscpy_safe<256>(wchar_t& pDest, const wchar_t* pSrc)
{
} /* size: 0 */

// <005E8AE7> ../public/tier0/tier0_strtools.h:387
inline void V_wcsncpy_cch<int>(wchar_t* pDest, const wchar_t* pSrc, int maxLenInChars)
{
} /* size: 0 */

// <000604D7> ../public/tier0/tier0_strtools.h:434
int V_vsnprintf(char *, int, const char *, typedef __va_list_tag __va_list_tag *)
{
} /* size: 0 */

// <00043A0C> ../public/tier0/tier0_strtools.h:451
int V_vsnprintfSize(char *, int, const char *, typedef __va_list_tag __va_list_tag *)
{
} /* size: 0 */

// <005FB517> ../public/tier0/tier0_strtools.h:457
inline int V_vsnwprintf_bytes(wchar_t* pDest, int maxLenInBytes, const wchar_t* pFormat, typedef __va_list_tag __va_list_tag* l)
{
} /* size: 0 */

// <00201537> ../public/tier0/tier0_strtools.h:461
int V_snwprintf_cch(wchar_t *, int, const wchar_t *, ...)
{
} /* size: 0 */

// <068328A4> ../public/tier0/tier0_strtools.h:485
// variables: 2
int V_sprintf_safe<32>(char& pDest, const char* pFormat, ...)
{
	va_list params; // 487
	int result; // 489
} /* size: 0, variables: 2 */

// <068327E9> ../public/tier0/tier0_strtools.h:485
// variables: 2
int V_sprintf_safe<8>(char& pDest, const char* pFormat, ...)
{
	va_list params; // 487
	int result; // 489
} /* size: 0, variables: 2 */

// <055FBFFC> ../public/tier0/tier0_strtools.h:485
// variables: 2
int V_sprintf_safe<512>(char& pDest, const char* pFormat, ...)
{
	va_list params; // 487
	int result; // 489
} /* size: 187, variables: 2 */

// <046CEE57> ../public/tier0/tier0_strtools.h:485
// variables: 2
int V_sprintf_safe<64>(char& pDest, const char* pFormat, ...)
{
	va_list params; // 487
	int result; // 489
} /* size: 187, variables: 2 */

// <046CAC32> ../public/tier0/tier0_strtools.h:485
// variables: 2
int V_sprintf_safe<80>(char& pDest, const char* pFormat, ...)
{
	va_list params; // 487
	int result; // 489
} /* size: 0, variables: 2 */

// <00744855> ../public/tier0/tier0_strtools.h:485
// variables: 2
int V_sprintf_safe<518>(char& pDest, const char* pFormat, ...)
{
	va_list params; // 487
	int result; // 489
} /* size: 187, variables: 2 */

// <00133DA4> ../public/tier0/tier0_strtools.h:485
// variables: 2
int V_sprintf_safe<4096>(char& pDest, const char* pFormat, ...)
{
	va_list params; // 487
	int result; // 489
} /* size: 187, variables: 2 */

// <00133CD3> ../public/tier0/tier0_strtools.h:485
// variables: 2
int V_sprintf_safe<200>(char& pDest, const char* pFormat, ...)
{
	va_list params; // 487
	int result; // 489
} /* size: 187, variables: 2 */

// <009E15A3> ../public/tier0/tier0_strtools.h:485
// variables: 2
int V_sprintf_safe<1024>(char& pDest, const char* pFormat, ...)
{
	va_list params; // 487
	int result; // 489
} /* size: 0, variables: 2 */

// <0083D6A1> ../public/tier0/tier0_strtools.h:485
// variables: 2
int V_sprintf_safe<255>(char& pDest, const char* pFormat, ...)
{
	va_list params; // 487
	int result; // 489
} /* size: 187, variables: 2 */

// <001F72FD> ../public/tier0/tier0_strtools.h:485
// variables: 2
int V_sprintf_safe<100>(char& pDest, const char* pFormat, ...)
{
	va_list params; // 487
	int result; // 489
} /* size: 187, variables: 2 */

// <002D88C1> ../../public/tier0/tier0_strtools.h:485
// variables: 2
int V_sprintf_safe<20>(char& pDest, const char* pFormat, ...)
{
	va_list params; // 487
	int result; // 489
} /* size: 187, variables: 2 */

// <0002672F> ../public/tier0/tier0_strtools.h:485
// variables: 2
int V_sprintf_safe<2048>(char& pDest, const char* pFormat, ...)
{
	va_list params; // 487
	int result; // 489
} /* size: 187, variables: 2 */

// <000929EC> ../public/tier0/tier0_strtools.h:485
// variables: 2
int V_sprintf_safe<12>(char& pDest, const char* pFormat, ...)
{
	va_list params; // 487
	int result; // 489
} /* size: 187, variables: 2 */

// <0004AD7A> ../public/tier0/tier0_strtools.h:485
// variables: 2
int V_sprintf_safe<5>(char& pDest, const char* pFormat, ...)
{
	va_list params; // 487
	int result; // 489
} /* size: 187, variables: 2 */

// <0004ACC0> ../public/tier0/tier0_strtools.h:485
// variables: 2
int V_sprintf_safe<3>(char& pDest, const char* pFormat, ...)
{
	va_list params; // 487
	int result; // 489
} /* size: 187, variables: 2 */

// <0004AB4C> ../public/tier0/tier0_strtools.h:485
// variables: 2
int V_sprintf_safe<16>(char& pDest, const char* pFormat, ...)
{
	va_list params; // 487
	int result; // 489
} /* size: 187, variables: 2 */

// <0685C580> ../public/tier0/tier0_strtools.h:495
int V_vsprintf_safe<512>(char& pDest, const char* pFormat, typedef __va_list_tag __va_list_tag* params)
{
} /* size: 0 */

// <05BB8EBF> ../public/tier0/tier0_strtools.h:565
inline int FastASCIIToLower<int>(int c)
{
} /* size: 0 */

// <0019FBD9> ../public/tier0/tier0_strtools.h:565
inline char FastASCIIToLower<char>(char c)
{
} /* size: 0 */

// <05AE54B1> ../public/tier0/tier0_strtools.h:603
inline bool V_isdigit(char c)
{
} /* size: 0 */

// <0015E7C9> ../public/tier0/tier0_strtools.h:608
inline bool V_isempty(const char* pszString)
{
} /* size: 0 */

// <0032ACAA> ../../public/tier0/tier0_strtools.h:618
inline bool V_isalpha(char c)
{
} /* size: 0 */

// <06813031> ../public/tier0/tier0_strtools.h:623
inline bool V_isalnum(char c)
{
} /* size: 0 */

// <056E8948> ../public/tier0/tier0_strtools.h:628
inline bool V_isxdigit(char c)
{
} /* size: 0 */

// <0023F724> ../public/tier0/tier0_strtools.h:633
inline bool V_isprint(char c)
{
} /* size: 0 */

// <005FB443> ../public/tier0/tier0_strtools.h:638
inline bool V_iscntrl(char c)
{
} /* size: 0 */

// <066D2C6C> ../public/tier0/tier0_strtools.h:643
inline bool V_isupper(char c)
{
} /* size: 0 */

// <0524B762> ../public/tier0/tier0_strtools.h:653
inline bool V_isspace(int c)
{
} /* size: 0 */

// <004EC86D> ../public/tier0/tier0_strtools.h:695
int V_iswcntrl(uchar32)
{
} /* size: 0 */

// <005FB3FD> ../public/tier0/tier0_strtools.h:699
inline int V_iswspace32(uchar32 c)
{
} /* size: 0 */

// <0050A35D> ../public/tier0/tier0_strtools.h:705
inline int V_iswcntrl32(uchar32 c)
{
} /* size: 0 */

// <005EB35C> ../public/tier0/tier0_strtools.h:733
uchar32 V_towupper32(uchar32)
{
} /* size: 0 */

// <04735D3B> ../public/tier0/tier0_strtools.h:736
int64 V_strtoi64(const char *, char* *, int)
{
} /* size: 0 */

// <0465D667> ../public/tier0/tier0_strtools.h:737
uint64 V_strtoui64(const char *, char* *, int)
{
} /* size: 0 */

// <0561DFE6> ../public/tier0/tier0_strtools.h:738
double V_strtod(const char *, char* *)
{
} /* size: 0 */

// <002015F6> ../public/tier0/tier0_strtools.h:740
int64 V_wcstoi64(const wchar_t *, wchar_t* *, int)
{
} /* size: 0 */

// <00201583> ../public/tier0/tier0_strtools.h:742
double V_wcstod(const wchar_t *, wchar_t* *)
{
} /* size: 0 */

// <012584E8> ../public/tier0/tier0_strtools.h:745
int64 V_atoi64(const char *)
{
} /* size: 0 */

// <007E9B2A> ../public/tier0/tier0_strtools.h:746
uint64 V_atoui64(const char *)
{
} /* size: 0 */

// <04437B58> ../public/tier0/tier0_strtools.h:751
double V_atof(const char *)
{
} /* size: 0 */

// <02E0E5D1> ../public/tier0/tier0_strtools.h:752
float32 V_atofloat32(const char *)
{
} /* size: 0 */

// <01258502> ../public/tier0/tier0_strtools.h:753
float64 V_atofloat64(const char *)
{
} /* size: 0 */

// <068DB8D1> ../public/tier0/tier0_strtools.h:755
size_t V_strspn(const char *, const char *)
{
} /* size: 0 */

// <068DB843> ../public/tier0/tier0_strtools.h:756
size_t _V_strcspn(const char *, const char *)
{
} /* size: 0 */

// <069794A0> ../public/tier0/tier0_strtools.h:757
inline int V_strcspn(const char* s1, const char* search)
{
} /* size: 0 */

// <02345A17> ../public/tier0/tier0_strtools.h:788
char* V_PrettifyMem(float, int, bool)
{
} /* size: 0 */

// <02E0EEAB> ../public/tier0/tier0_strtools.h:794
char* V_PrettifyNum(int64)
{
} /* size: 0 */

// <046965E4> ../public/tier0/tier0_strtools.h:803
// member functions: 24
// member variables: 2
// class size: 72
class CFormatNumber_DontUseDirectly_UseFormatNumberMacro {
	/* ../public/tier0/tier0_strtools.h:806 */
	void CFormatNumber_DontUseDirectly_UseFormatNumberMacro(CFormatNumber_DontUseDirectly_UseFormatNumberMacro* );
	/* ../public/tier0/tier0_strtools.h:808 */
	void FormatNumberInternal(CFormatNumber_DontUseDirectly_UseFormatNumberMacro* , uint64);
	/* ../public/tier0/tier0_strtools.h:809 */
	void FormatNumberInternal64(CFormatNumber_DontUseDirectly_UseFormatNumberMacro* , int64);
	/* ../public/tier0/tier0_strtools.h:811 */
	void CFormatNumber_DontUseDirectly_UseFormatNumberMacro(CFormatNumber_DontUseDirectly_UseFormatNumberMacro* , int64);
	/* ../public/tier0/tier0_strtools.h:812 */
	void CFormatNumber_DontUseDirectly_UseFormatNumberMacro(CFormatNumber_DontUseDirectly_UseFormatNumberMacro* , int32);
	/* ../public/tier0/tier0_strtools.h:813 */
	void CFormatNumber_DontUseDirectly_UseFormatNumberMacro(CFormatNumber_DontUseDirectly_UseFormatNumberMacro* , int16);
	/* ../public/tier0/tier0_strtools.h:815 */
	void FormatNumberInternalU64(CFormatNumber_DontUseDirectly_UseFormatNumberMacro* , uint64);
	/* ../public/tier0/tier0_strtools.h:819 */
	void CFormatNumber_DontUseDirectly_UseFormatNumberMacro(CFormatNumber_DontUseDirectly_UseFormatNumberMacro* , uint64);
	/* ../public/tier0/tier0_strtools.h:820 */
	void CFormatNumber_DontUseDirectly_UseFormatNumberMacro(CFormatNumber_DontUseDirectly_UseFormatNumberMacro* , uint32);
	/* ../public/tier0/tier0_strtools.h:821 */
	void CFormatNumber_DontUseDirectly_UseFormatNumberMacro(CFormatNumber_DontUseDirectly_UseFormatNumberMacro* , uint16);
	/* ../public/tier0/tier0_strtools.h:824 */
	const char* operator char const*(const CFormatNumber_DontUseDirectly_UseFormatNumberMacro* );
	/* ../public/tier0/tier0_strtools.h:825 */
	const char* AsString(CFormatNumber_DontUseDirectly_UseFormatNumberMacro* );
private:
	char m_szBuf[64]; /* 0 64 */
	char * pString; /* 64 8 */
	void CFormatNumber_DontUseDirectly_UseFormatNumberMacro(class CFormatNumber_DontUseDirectly_UseFormatNumberMacro *); /* linkage=_ZN50CFormatNumber_DontUseDirectly_UseFormatNumberMacroC4Ev */
	void FormatNumberInternal(class CFormatNumber_DontUseDirectly_UseFormatNumberMacro *, uint64); /* linkage=_ZN50CFormatNumber_DontUseDirectly_UseFormatNumberMacro20FormatNumberInternalEy */
	void FormatNumberInternal64(class CFormatNumber_DontUseDirectly_UseFormatNumberMacro *, int64); /* linkage=_ZN50CFormatNumber_DontUseDirectly_UseFormatNumberMacro22FormatNumberInternal64Ex */
	void CFormatNumber_DontUseDirectly_UseFormatNumberMacro(class CFormatNumber_DontUseDirectly_UseFormatNumberMacro *, int64); /* linkage=_ZN50CFormatNumber_DontUseDirectly_UseFormatNumberMacroC4Ex */
	void CFormatNumber_DontUseDirectly_UseFormatNumberMacro(class CFormatNumber_DontUseDirectly_UseFormatNumberMacro *, int32); /* linkage=_ZN50CFormatNumber_DontUseDirectly_UseFormatNumberMacroC4Ei */
	void CFormatNumber_DontUseDirectly_UseFormatNumberMacro(class CFormatNumber_DontUseDirectly_UseFormatNumberMacro *, int16); /* linkage=_ZN50CFormatNumber_DontUseDirectly_UseFormatNumberMacroC4Es */
	void FormatNumberInternalU64(class CFormatNumber_DontUseDirectly_UseFormatNumberMacro *, uint64); /* linkage=_ZN50CFormatNumber_DontUseDirectly_UseFormatNumberMacro23FormatNumberInternalU64Ey */
	void CFormatNumber_DontUseDirectly_UseFormatNumberMacro(class CFormatNumber_DontUseDirectly_UseFormatNumberMacro *, uint64); /* linkage=_ZN50CFormatNumber_DontUseDirectly_UseFormatNumberMacroC4Ey */
	void CFormatNumber_DontUseDirectly_UseFormatNumberMacro(class CFormatNumber_DontUseDirectly_UseFormatNumberMacro *, uint32); /* linkage=_ZN50CFormatNumber_DontUseDirectly_UseFormatNumberMacroC4Ej */
	void CFormatNumber_DontUseDirectly_UseFormatNumberMacro(class CFormatNumber_DontUseDirectly_UseFormatNumberMacro *, uint16); /* linkage=_ZN50CFormatNumber_DontUseDirectly_UseFormatNumberMacroC4Et */
	const char  * operator char const*(const class CFormatNumber_DontUseDirectly_UseFormatNumberMacro  *); /* linkage=_ZNK50CFormatNumber_DontUseDirectly_UseFormatNumberMacrocvPKcEv */
	const char  * AsString(class CFormatNumber_DontUseDirectly_UseFormatNumberMacro *); /* linkage=_ZN50CFormatNumber_DontUseDirectly_UseFormatNumberMacro8AsStringEv */
};

// <04704115> ../public/tier0/tier0_strtools.h:812
void CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(int32 nNum)
{
} /* size: 0 */

// <047040EF> ../public/tier0/tier0_strtools.h:812
inline void CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(int32 nNum)
{
} /* size: 0 */

// <0697947A> ../public/tier0/tier0_strtools.h:815
inline void CFormatNumber_DontUseDirectly_UseFormatNumberMacro::FormatNumberInternalU64(uint64 nNum)
{
} /* size: 0 */

// <0697945E> ../public/tier0/tier0_strtools.h:819
void CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(uint64 nNum)
{
} /* size: 0 */

// <06979438> ../public/tier0/tier0_strtools.h:819
inline void CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(uint64 nNum)
{
} /* size: 0 */

// <000C26F8> ../public/tier0/tier0_strtools.h:820
void CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(uint32 nNum)
{
} /* size: 0 */

// <000C26D2> ../public/tier0/tier0_strtools.h:820
inline void CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(uint32 nNum)
{
} /* size: 0 */

// <0697941F> ../public/tier0/tier0_strtools.h:825
inline void CFormatNumber_DontUseDirectly_UseFormatNumberMacro::AsString()
{
} /* size: 0 */

// <04C38F18> ../public/tier0/tier0_strtools.h:834
char* _V_StringAfterPrefix(char *, const char *)
{
} /* size: 0 */

// <04C3A95C> ../public/tier0/tier0_strtools.h:835
inline const char* StringAfterPrefix<char const>(const char* str, const char* prefix)
{
} /* size: 0 */

// <04C3A65D> ../public/tier0/tier0_strtools.h:835
inline char* StringAfterPrefix<char>(char* str, const char* prefix)
{
} /* size: 0 */

// <0022CD65> ../../public/tier0/tier0_strtools.h:839
char* _V_StringAfterPrefixCaseSensitive(char *, const char *)
{
} /* size: 0 */

// <00232AB2> ../../public/tier0/tier0_strtools.h:840
inline const char* StringAfterPrefixCaseSensitive<char const>(const char* str, const char* prefix)
{
} /* size: 0 */

// <04C3E8C4> ../public/tier0/tier0_strtools.h:845
inline bool StringHasPrefix(const char* str, const char* prefix)
{
} /* size: 0 */

// <004EC7AA> ../public/tier0/tier0_strtools.h:865
bool _V_strEndsWith(const char *, const char *, bool)
{
} /* size: 0 */

// <00107BC9> ../public/tier0/tier0_strtools.h:868
inline bool V_strEndsWith(const char* pStr, const char* pSuffix)
{
} /* size: 0 */

// <0050A32B> ../public/tier0/tier0_strtools.h:869
inline bool V_striEndsWith(const char* pStr, const char* pSuffix)
{
} /* size: 0 */

// <00171787> ../public/tier0/tier0_strtools.h:893
bool _V_StrSubst(const char *, const char *, const char *, char *, int, bool)
{
} /* size: 0 */

// <0017443B> ../public/tier0/tier0_strtools.h:895
inline bool V_StrSubst<long unsigned int>(const char* pIn, const char* pMatch, const char* pReplaceWith, char* pOut, long unsigned int outLen, bool bCaseSensitive)
{
} /* size: 0 */

// <005E895A> ../public/tier0/tier0_strtools.h:904
inline void V_StrSlice<int>(const char* pStr, int firstChar, int lastCharNonInclusive, char* pOut, int outSize)
{
} /* size: 0 */

// <0004A86A> ../public/tier0/tier0_strtools.h:925
// variable: 1
void V_ExtractSubstring<16>(char& dest, const char* pString, const char* pEnd)
{
	size_t nSourceSize; // 927
} /* size: 0, variables: 1 */

// <067D05D8> ../public/tier0/tier0_strtools.h:969
int V_StringToFloatArray(float *, int, const char *)
{
} /* size: 0 */

// <067D05FB> ../public/tier0/tier0_strtools.h:972
void V_StringToVector(float *, const char *)
{
} /* size: 0 */

// <067D059F> ../public/tier0/tier0_strtools.h:975
void V_StringToColor(Color *, const char *)
{
} /* size: 0 */

// <031F71D1> ../public/tier0/tier0_strtools.h:986
const char* nexttoken(char *, const char *, char)
{
} /* size: 0 */

// <000833B2> ../public/tier0/tier0_strtools.h:989
bool V_containsWhitespace(const char *)
{
} /* size: 0 */

// <031F727D> ../public/tier0/tier0_strtools.h:992
bool V_isdigit_str(const char *)
{
} /* size: 0 */

// <031F71B8> ../public/tier0/tier0_strtools.h:998
bool V_isalpha_str(const char *)
{
} /* size: 0 */

// <000CD8A8> ../public/tier0/tier0_strtools.h:1017
inline void V_hextobinary<int, long unsigned int>(const char* in, int numchars, byte* out, long unsigned int maxoutputbytes)
{
} /* size: 0 */

// <01711A20> ../public/tier0/tier0_strtools.h:1022
void _V_binarytohex(const byte *, int, char *, int)
{
} /* size: 0 */

// <0171604D> ../public/tier0/tier0_strtools.h:1023
inline void V_binarytohex<int, long unsigned int>(const byte* in, int inputbytes, char* out, long unsigned int outsize)
{
} /* size: 0 */

// <04C38F4F> ../public/tier0/tier0_strtools.h:1029
void StrReplaceChar(char *, char, char)
{
} /* size: 0 */

// <005DC4FD> ../public/tier0/tier0_strtools.h:1047
// member functions: 22
// member variables: 8
// vtable entry: 1
// class size: 4,392
class CUtlCharConversion {
	/* ../public/tier0/tier0_strtools.h:1050 */
	struct ConversionArray_t {
		char m_nActualChar; /* 0 1 */
		const char * m_pReplacementString; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/tier0_strtools.h:1079 */
	struct ConversionInfo_t {
		int m_nLength; /* 0 4 */
		const char * m_pReplacementString; /* 8 8 */
	};
	void ~CUtlCharConversion(CUtlCharConversion* );
	void CUtlCharConversion(CUtlCharConversion* , CUtlCharConversion& );
	void CUtlCharConversion(CUtlCharConversion* , const CUtlCharConversion& );
	int ()(void) * * _vptr.CUtlCharConversion; /* 0 8 */
	/* tier0/tier0_strtools.cpp:2961 */
	void CUtlCharConversion(CUtlCharConversion* , char, const char* , int, const ConversionArray_t* );
	/* ../public/tier0/tier0_strtools.h:1058 */
	char GetEscapeChar(const CUtlCharConversion* );
	/* ../public/tier0/tier0_strtools.h:1059 */
	const char* GetDelimiter(const CUtlCharConversion* );
	/* ../public/tier0/tier0_strtools.h:1060 */
	int GetDelimiterLength(const CUtlCharConversion* );
	/* ../public/tier0/tier0_strtools.h:1062 */
	const char* GetConversionString(const CUtlCharConversion* , char);
	/* ../public/tier0/tier0_strtools.h:1066 */
	int GetConversionLength(const CUtlCharConversion* , char);
	/* ../public/tier0/tier0_strtools.h:1070 */
	int MaxConversionLength(const CUtlCharConversion* );
	/* tier0/tier0_strtools.cpp:2988 */
	virtual char FindConversion(CUtlCharConversion* , const char* , int* );
protected:
	char m_nEscapeChar; /* 8 1 */
	const char * m_pDelimiter; /* 16 8 */
	int m_nDelimiterLength; /* 24 4 */
	int m_nCount; /* 28 4 */
	int m_nMaxConversionLength; /* 32 4 */
	char m_pList[256]; /* 36 256 */
	ConversionInfo_t m_pReplacements[256]; /* 296 4096 */
	void CUtlCharConversion(class CUtlCharConversion *, char, const char  *, int, const class ConversionArray_t  *); /* linkage=_ZN18CUtlCharConversionC4EcPKciPKNS_17ConversionArray_tE */
	int MaxConversionLength(const class CUtlCharConversion  *); /* linkage=_ZNK18CUtlCharConversion19MaxConversionLengthEv */
	int GetConversionLength(const class CUtlCharConversion  *, char); /* linkage=_ZNK18CUtlCharConversion19GetConversionLengthEc */
	const char  * GetConversionString(const class CUtlCharConversion  *, char); /* linkage=_ZNK18CUtlCharConversion19GetConversionStringEc */
	int GetDelimiterLength(const class CUtlCharConversion  *); /* linkage=_ZNK18CUtlCharConversion18GetDelimiterLengthEv */
	const char  * GetDelimiter(const class CUtlCharConversion  *); /* linkage=_ZNK18CUtlCharConversion12GetDelimiterEv */
	char GetEscapeChar(const class CUtlCharConversion  *); /* linkage=_ZNK18CUtlCharConversion13GetEscapeCharEv */
	void ~CUtlCharConversion(class CUtlCharConversion *); /* linkage=_ZN18CUtlCharConversionD4Ev */
	void CUtlCharConversion(class CUtlCharConversion *, class CUtlCharConversion &); /* linkage=_ZN18CUtlCharConversionC4EOS_ */
	void CUtlCharConversion(class CUtlCharConversion *, const class CUtlCharConversion  &); /* linkage=_ZN18CUtlCharConversionC4ERKS_ */
	virtual char FindConversion(class CUtlCharConversion *, const char  *, int *); /* linkage=_ZN18CUtlCharConversion14FindConversionEPKcPi */
};

// <00256C71> ../public/tier0/tier0_strtools.h:1056
void CUtlCharConversion::CUtlCharConversion(char nEscapeChar, const char* pDelimiter, int nCount, const ConversionArray_t* pArray)
{
} /* size: 0 */

// <0054ED4A> ../public/tier0/tier0_strtools.h:1058
inline void CUtlCharConversion::GetEscapeChar()
{
} /* size: 0 */

// <0054ED31> ../public/tier0/tier0_strtools.h:1059
inline void CUtlCharConversion::GetDelimiter()
{
} /* size: 0 */

// <0054ED18> ../public/tier0/tier0_strtools.h:1060
inline void CUtlCharConversion::GetDelimiterLength()
{
} /* size: 0 */

// <0054ECF4> ../public/tier0/tier0_strtools.h:1062
inline void CUtlCharConversion::GetConversionString(char c)
{
} /* size: 0 */

// <0054ECD0> ../public/tier0/tier0_strtools.h:1066
inline void CUtlCharConversion::GetConversionLength(char c)
{
} /* size: 0 */

// <0054ECB7> ../public/tier0/tier0_strtools.h:1070
inline void CUtlCharConversion::MaxConversionLength()
{
} /* size: 0 */

// <055FB957> ../public/tier0/tier0_strtools.h:1118
CUtlCharConversion* GetCStringCharConversion(void)
{
} /* size: 0 */

// <056FC07E> ../public/tier0/tier0_strtools.h:1121
CUtlCharConversion* GetJSONCharConversion(void)
{
} /* size: 0 */

// <04EC3E51> ../public/tier0/tier0_strtools.h:1129
void CharacterSetBuild(characterset_t *, const char *)
{
} /* size: 0 */

// <0001150F> ../public/tier0/tier0_strtools.h:1131
// member functions: 2
// member variable: 1
// struct size: 256
struct characterset_t {
	char set[256]; /* 0 256 */
	/* ../public/tier0/tier0_strtools.h:1135 */
	void characterset_t(characterset_t* );
	/* ../public/tier0/tier0_strtools.h:1139 */
	void characterset_t(characterset_t* , const char* );
};

// <0000A5E7> ../../public/tier0/tier0_strtools.h:1131
// member functions: 2
// member variable: 1
// struct size: 256
struct characterset_t {
	char set[256]; /* 0 256 */
	/* ../../public/tier0/tier0_strtools.h:1135 */
	void characterset_t(characterset_t* );
	/* ../../public/tier0/tier0_strtools.h:1139 */
	void characterset_t(characterset_t* , const char* );
};

// <06E9B818> ../public/tier0/tier0_strtools.h:1135
void characterset_t::characterset_t()
{
} /* size: 0 */

// <06E9B7FF> ../public/tier0/tier0_strtools.h:1135
inline void characterset_t::characterset_t()
{
} /* size: 0 */

// <00371034> ../public/tier0/tier0_strtools.h:1139
void characterset_t::characterset_t(const char* pSetString)
{
} /* size: 0 */

// <0037100E> ../public/tier0/tier0_strtools.h:1139
inline void characterset_t::characterset_t(const char* pSetString)
{
} /* size: 0 */

// <01E7C902> ../public/tier0/tier0_strtools.h:1192
void V_SplitString(const char *, const char *, CUtlVector<char*, CUtlMemory<char*, int> > &)
{
} /* size: 0 */

// <000B7DE8> ../../public/tier0/tier0_strtools.h:1197
void V_SplitString2(const char *, const char* *, int, CUtlVector<char*, CUtlMemory<char*, int> > &)
{
} /* size: 0 */

// <00043857> ../public/tier0/tier0_strtools.h:1320
int V_GetPathOriginLength(const char *)
{
} /* size: 0 */

// <008A5319> ../public/tier0/tier0_strtools.h:1323
void _V_FileBase(const char *, char *, int)
{
} /* size: 0 */

// <008AB89A> ../public/tier0/tier0_strtools.h:1324
inline void V_FileBase<long unsigned int>(const char* in, char* out, long unsigned int maxlen)
{
} /* size: 0 */

// <005E853E> ../public/tier0/tier0_strtools.h:1348
inline void V_StripExtension<int>(const char* in, char* out, int outLen)
{
} /* size: 0 */

// <004A708B> ../public/tier0/tier0_strtools.h:1355
void _V_DefaultExtension(char *, const char *, int)
{
} /* size: 0 */

// <004B5896> ../public/tier0/tier0_strtools.h:1356
inline void V_DefaultExtension<long unsigned int>(char* path, const char* extension, long unsigned int pathStringLength)
{
} /* size: 0 */

// <066E7364> ../public/tier0/tier0_strtools.h:1364
void _V_SetExtension(char *, const char *, int)
{
} /* size: 0 */

// <066E7638> ../public/tier0/tier0_strtools.h:1365
inline void V_SetExtension<int>(char* path, const char* extension, int pathStringLength)
{
} /* size: 0 */

// <00385167> ../public/tier0/tier0_strtools.h:1365
inline void V_SetExtension<long unsigned int>(char* path, const char* extension, long unsigned int pathStringLength)
{
} /* size: 0 */

// <068025DD> ../public/tier0/tier0_strtools.h:1374
bool _V_StripLastDir(char *, int)
{
} /* size: 0 */

// <06803263> ../public/tier0/tier0_strtools.h:1375
inline bool V_StripLastDir<int>(char* dirName, int maxlen)
{
} /* size: 0 */

// <0073F305> ../public/tier0/tier0_strtools.h:1381
const char* V_UnqualifiedFileName(const char *)
{
} /* size: 0 */

// <00128D76> ../public/tier0/tier0_strtools.h:1384
void _V_ComposeFileName(const char *, const char *, char *, int)
{
} /* size: 0 */

// <00133EB7> ../public/tier0/tier0_strtools.h:1385
inline void V_ComposeFileName<long unsigned int>(const char* path, const char* filename, char* dest, long unsigned int destSize)
{
} /* size: 0 */

// <0017476B> ../public/tier0/tier0_strtools.h:1385
inline void V_ComposeFileName<int>(const char* path, const char* filename, char* dest, int destSize)
{
} /* size: 0 */

// <004A6E1B> ../public/tier0/tier0_strtools.h:1391
bool _V_ExtractFilePath(const char *, char *, int)
{
} /* size: 0 */

// <004B53C0> ../public/tier0/tier0_strtools.h:1392
inline bool V_ExtractFilePath<long unsigned int>(const char* path, char* dest, long unsigned int destSize)
{
} /* size: 0 */

// <00127FB7> ../public/tier0/tier0_strtools.h:1407
const char* V_GetFileExtension(const char *)
{
} /* size: 0 */

// <001288C3> ../public/tier0/tier0_strtools.h:1411
const char* V_GetFileExtensionSafe(const char *)
{
} /* size: 0 */

// <023F9C0D> ../public/tier0/tier0_strtools.h:1414
inline const char* V_GetFileName(const char* path)
{
} /* size: 0 */

// <066CCC9C> ../public/tier0/tier0_strtools.h:1419
bool V_RemoveDotSlashes(char *, char)
{
} /* size: 0 */

// <00127F62> ../public/tier0/tier0_strtools.h:1424
bool _V_MakeAbsolutePath(char *, int, const char *, const char *, bool)
{
} /* size: 0 */

// <001334EF> ../public/tier0/tier0_strtools.h:1425
inline bool V_MakeAbsolutePath<long unsigned int>(char* pOut, long unsigned int outLen, const char* pPath, const char* pStartingDir, bool bLowercaseName)
{
} /* size: 0 */

// <001747BA> ../public/tier0/tier0_strtools.h:1425
inline bool V_MakeAbsolutePath<int>(char* pOut, int outLen, const char* pPath, const char* pStartingDir, bool bLowercaseName)
{
} /* size: 0 */

// <00128D51> ../public/tier0/tier0_strtools.h:1446
void _V_FixupPathName(char *, int, const char *, bool)
{
} /* size: 0 */

// <00133E68> ../public/tier0/tier0_strtools.h:1447
inline void V_FixupPathName<int>(char* pOut, int nOutLen, const char* pPath, bool bLowercaseName)
{
} /* size: 0 */

// <009E7A40> ../public/tier0/tier0_strtools.h:1447
inline void V_FixupPathName<long unsigned int>(char* pOut, long unsigned int nOutLen, const char* pPath, bool bLowercaseName)
{
} /* size: 0 */

// <005E8484> ../public/tier0/tier0_strtools.h:1455
inline void V_AppendSlash<int>(char* pStr, int strSize, char separator)
{
} /* size: 0 */

// <00127FD0> ../public/tier0/tier0_strtools.h:1461
bool V_IsAbsolutePath(const char *)
{
} /* size: 0 */

// <000B1274> ../public/tier0/tier0_strtools.h:1464
bool V_IsFakePath(const char *)
{
} /* size: 0 */

// <04EC3D39> ../public/tier0/tier0_strtools.h:1479
void V_FixSlashes(char *, char)
{
} /* size: 0 */

// <000B0F63> ../public/tier0/tier0_strtools.h:1482
bool V_AreSlashesCorrect(const char *, char)
{
} /* size: 0 */

// <068025AF> ../public/tier0/tier0_strtools.h:1485
void V_FixDoubleSlashes(char *)
{
} /* size: 0 */

// <000432C1> ../public/tier0/tier0_strtools.h:1492
bool V_PathsMatch(const char *, const char *)
{
} /* size: 0 */

// <000B1013> ../public/tier0/tier0_strtools.h:1499
int LengthOfMatchingPaths(const char *, const char *)
{
} /* size: 0 */

// <0680258C> ../public/tier0/tier0_strtools.h:1503
bool V_PathContainsPath(const char *, const char *, bool)
{
} /* size: 0 */

