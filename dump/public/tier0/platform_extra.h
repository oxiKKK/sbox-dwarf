
//
// public/tier0/platform_extra.h
//
//	referenced by: libengine2.so
//				   libfilesystem_stdio.so
//				   libtier0.so
//
//	functions: 25
//	classes: 3
//

// <000B1149> ../public/tier0/platform_extra.h:13
void Plat_TranslateSymbolicLinks(const char *, CBufferString *)
{
} /* size: 0 */

// <001281C2> ../public/tier0/platform_extra.h:15
bool Plat_GetCurrentDirectory(CBufferString *, bool)
{
} /* size: 0 */

// <012598BD> ../public/tier0/platform_extra.h:16
bool Plat_SetCurrentDirectory(const char *)
{
} /* size: 0 */

// <00128270> ../public/tier0/platform_extra.h:22
void Plat_GetModuleFilename(CBufferString *)
{
} /* size: 0 */

// <012598D7> ../public/tier0/platform_extra.h:23
void Plat_SetModuleFilename(const char *)
{
} /* size: 0 */

// <0009CAD3> ../public/tier0/platform_extra.h:26
bool Plat_GetExecutablePathUTF8(CBufferString *)
{
} /* size: 0 */

// <000B0C6C> ../public/tier0/platform_extra.h:31
bool Plat_GetFileType(const char *, CBufferString *)
{
} /* size: 0 */

// <00043835> ../public/tier0/platform_extra.h:36
bool V_MakeAbsolutePathBuffer(CBufferString *, const char *, const char *)
{
} /* size: 0 */

// <000B16A9> ../public/tier0/platform_extra.h:37
bool V_MakeAbsoluteVPKPathNameBuffer(CBufferString *, const char *, const char *)
{
} /* size: 0 */

// <00043813> ../public/tier0/platform_extra.h:39
bool V_MakeRelativePathBuffer(const char *, const char *, CBufferString *)
{
} /* size: 0 */

// <00602AA0> ../public/tier0/platform_extra.h:95
// member functions: 6
// member variables: 2
// class size: 408
class CUnicodeConvertAndCaseStr<char, wchar_t, 100> {
	/* ../public/tier0/platform_extra.h:98 */
	void CUnicodeConvertAndCaseStr(CUnicodeConvertAndCaseStr<char, wchar_t, 100>* );
	/* ../public/tier0/platform_extra.h:102 */
	void CUnicodeConvertAndCaseStr(CUnicodeConvertAndCaseStr<char, wchar_t, 100>* , const char* , int, EStringConvertErrorPolicy);
	/* ../public/tier0/platform_extra.h:107 */
	void ~CUnicodeConvertAndCaseStr(CUnicodeConvertAndCaseStr<char, wchar_t, 100>* );
	/* ../public/tier0/platform_extra.h:115 */
	wchar_t* Convert(CUnicodeConvertAndCaseStr<char, wchar_t, 100>* , const char* , int, EStringConvertErrorPolicy);
	/* ../public/tier0/platform_extra.h:124 */
	const wchar_t* String(const CUnicodeConvertAndCaseStr<char, wchar_t, 100>* );
	/* ../public/tier0/platform_extra.h:128 */
	const wchar_t* operator wchar_t const*(const CUnicodeConvertAndCaseStr<char, wchar_t, 100>* );
protected:
	wchar_t m_fixedBuf[100]; /* 0 400 */
	wchar_t * m_pPtr; /* 400 8 */
};

// <00602BEA> ../public/tier0/platform_extra.h:95
// member functions: 6
// member variables: 2
// class size: 408
class CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100> {
	/* ../public/tier0/platform_extra.h:98 */
	void CUnicodeConvertAndCaseStr(CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>* );
	/* ../public/tier0/platform_extra.h:102 */
	void CUnicodeConvertAndCaseStr(CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>* , const short unsigned int* , int, EStringConvertErrorPolicy);
	/* ../public/tier0/platform_extra.h:107 */
	void ~CUnicodeConvertAndCaseStr(CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>* );
	/* ../public/tier0/platform_extra.h:115 */
	wchar_t* Convert(CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>* , const short unsigned int* , int, EStringConvertErrorPolicy);
	/* ../public/tier0/platform_extra.h:124 */
	const wchar_t* String(const CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>* );
	/* ../public/tier0/platform_extra.h:128 */
	const wchar_t* operator wchar_t const*(const CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>* );
protected:
	wchar_t m_fixedBuf[100]; /* 0 400 */
	wchar_t * m_pPtr; /* 400 8 */
};

// <00602D24> ../public/tier0/platform_extra.h:95
// member functions: 12
// member variables: 2
// class size: 408
class CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100> {
	/* ../public/tier0/platform_extra.h:98 */
	void CUnicodeConvertAndCaseStr(CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>* );
	/* ../public/tier0/platform_extra.h:102 */
	void CUnicodeConvertAndCaseStr(CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>* , const wchar_t* , int, EStringConvertErrorPolicy);
	/* ../public/tier0/platform_extra.h:107 */
	void ~CUnicodeConvertAndCaseStr(CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>* );
	/* ../public/tier0/platform_extra.h:115 */
	wchar_t* Convert(CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>* , const wchar_t* , int, EStringConvertErrorPolicy);
	/* ../public/tier0/platform_extra.h:124 */
	const wchar_t* String(const CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>* );
	/* ../public/tier0/platform_extra.h:128 */
	const wchar_t* operator wchar_t const*(const CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>* );
protected:
	wchar_t m_fixedBuf[100]; /* 0 400 */
	wchar_t * m_pPtr; /* 400 8 */
	void CUnicodeConvertAndCaseStr(class CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100> *); /* linkage=_ZN25CUnicodeConvertAndCaseStrIwwLi100EEC4Ev */
	void CUnicodeConvertAndCaseStr(class CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100> *, const wchar_t  *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN25CUnicodeConvertAndCaseStrIwwLi100EEC4EPKwi25EStringConvertErrorPolicy */
	void ~CUnicodeConvertAndCaseStr(class CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100> *); /* linkage=_ZN25CUnicodeConvertAndCaseStrIwwLi100EED4Ev */
	wchar_t * Convert(class CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100> *, const wchar_t  *, int, enum EStringConvertErrorPolicy); /* linkage=_ZN25CUnicodeConvertAndCaseStrIwwLi100EE7ConvertEPKwi25EStringConvertErrorPolicy */
	const wchar_t  * String(const class CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>  *); /* linkage=_ZNK25CUnicodeConvertAndCaseStrIwwLi100EE6StringEv */
	const wchar_t  * operator wchar_t const*(const class CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>  *); /* linkage=_ZNK25CUnicodeConvertAndCaseStrIwwLi100EEcvPKwEv */
};

// <006056DB> ../public/tier0/platform_extra.h:98
void CUnicodeConvertAndCaseStr<char, wchar_t, 100>::CUnicodeConvertAndCaseStr()
{
} /* size: 0 */

// <006056C2> ../public/tier0/platform_extra.h:98
inline void CUnicodeConvertAndCaseStr<char, wchar_t, 100>::CUnicodeConvertAndCaseStr()
{
} /* size: 0 */

// <00605616> ../public/tier0/platform_extra.h:98
void CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>::CUnicodeConvertAndCaseStr()
{
} /* size: 0 */

// <006055FD> ../public/tier0/platform_extra.h:98
inline void CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>::CUnicodeConvertAndCaseStr()
{
} /* size: 0 */

// <00605551> ../public/tier0/platform_extra.h:98
void CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>::CUnicodeConvertAndCaseStr()
{
} /* size: 0 */

// <00605538> ../public/tier0/platform_extra.h:98
inline void CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>::CUnicodeConvertAndCaseStr()
{
} /* size: 0 */

// <006056AB> ../public/tier0/platform_extra.h:107
void CUnicodeConvertAndCaseStr<char, wchar_t, 100>::~CUnicodeConvertAndCaseStr()
{
} /* size: 0 */

// <00605692> ../public/tier0/platform_extra.h:107
inline void CUnicodeConvertAndCaseStr<char, wchar_t, 100>::~CUnicodeConvertAndCaseStr()
{
} /* size: 0 */

// <006055E6> ../public/tier0/platform_extra.h:107
void CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>::~CUnicodeConvertAndCaseStr()
{
} /* size: 0 */

// <006055CD> ../public/tier0/platform_extra.h:107
inline void CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>::~CUnicodeConvertAndCaseStr()
{
} /* size: 0 */

// <00605521> ../public/tier0/platform_extra.h:107
void CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>::~CUnicodeConvertAndCaseStr()
{
} /* size: 0 */

// <00605508> ../public/tier0/platform_extra.h:107
inline void CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>::~CUnicodeConvertAndCaseStr()
{
} /* size: 0 */

// <0060562D> ../public/tier0/platform_extra.h:115
// variables: 2
inline void CUnicodeConvertAndCaseStr<char, wchar_t, 100>::Convert(const char* str, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	const char   __FUNCTION__; // 37751
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 118
	}
} /* size: 0, variables: 1 */

// <00605568> ../public/tier0/platform_extra.h:115
// variables: 2
inline void CUnicodeConvertAndCaseStr<short unsigned int, wchar_t, 100>::Convert(const short unsigned int* str, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	const char   __FUNCTION__; // 37751
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 118
	}
} /* size: 0, variables: 1 */

// <0060548E> ../public/tier0/platform_extra.h:115
// variables: 2
inline void CUnicodeConvertAndCaseStr<wchar_t, wchar_t, 100>::Convert(const wchar_t* str, int nStringCaseFlags, EStringConvertErrorPolicy ePolicy)
{
	const char   __FUNCTION__; // 37751
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 118
	}
} /* size: 0, variables: 1 */

