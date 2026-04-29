
//
// public/tier0/tier0_unicode.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 33
//	classes: 2
//

// <0004C3DF> ../public/tier0/tier0_unicode.h:29
inline bool V_UTF8IsLeading(char ch)
{
} /* size: 0 */

// <0004C3BD> ../public/tier0/tier0_unicode.h:33
inline bool V_UTF8IsTrailing(char ch)
{
} /* size: 0 */

// <0004C39B> ../public/tier0/tier0_unicode.h:37
inline bool V_UTF8IsSingle(char ch)
{
} /* size: 0 */

// <0060F724> ../public/tier0/tier0_unicode.h:42
inline bool V_IsValidUChar32(uchar32 uVal)
{
} /* size: 0 */

// <0004C378> ../public/tier0/tier0_unicode.h:50
inline int V_UChar32ToUTF8Len(uchar32 uVal)
{
} /* size: 0 */

// <0060F6DE> ../public/tier0/tier0_unicode.h:62
inline int V_UChar32ToUTF16Len(uchar32 uVal)
{
} /* size: 0 */

// <000438BD> ../public/tier0/tier0_unicode.h:69
int V_UTF8LenFromFirst(char)
{
} /* size: 0 */

// <056E39E9> ../public/tier0/tier0_unicode.h:71
int V_UChar32ToUTF8(uchar32, char *)
{
} /* size: 0 */

// <0060F6BB> ../public/tier0/tier0_unicode.h:75
inline int V_UChar32ToUTF32Len(uchar32 uVal)
{
} /* size: 0 */

// <0060F68C> ../public/tier0/tier0_unicode.h:76
inline int V_UChar32ToUTF32(uchar32 uVal, uchar32* pUTF32)
{
} /* size: 0 */

// <005E6F15> ../public/tier0/tier0_unicode.h:79
int V_UTF8ToUChar32(const char *, uchar32 &, bool &)
{
} /* size: 0 */

// <000431AB> ../public/tier0/tier0_unicode.h:82
int V_UTF16ToUChar32(const uchar16 *, uchar32 &, bool &)
{
} /* size: 0 */

// <002016AC> ../public/tier0/tier0_unicode.h:106
int V_UnicodeLength(const char *)
{
} /* size: 0 */

// <00043A34> ../public/tier0/tier0_unicode.h:128
char* V_UnicodeAdvance(char *, int)
{
} /* size: 0 */

// <000438EE> ../public/tier0/tier0_unicode.h:168
int V_UnicodeCaseConvert(const char *, char *, int, int, EStringConvertErrorPolicy)
{
} /* size: 0 */

// <055DFB4A> ../public/tier0/tier0_unicode.h:291
int V_UTF16ToUTF8(const uchar16 *, char *, int, EStringConvertErrorPolicy)
{
} /* size: 0 */

// <06E6927D> ../../public/tier0/tier0_unicode.h:293
int V_UTF32ToUTF8(const uchar32 *, char *, int, EStringConvertErrorPolicy)
{
} /* size: 0 */

// <0020167F> ../public/tier0/tier0_unicode.h:316
int V_UTF8CharsToUTF16(const char *, int, uchar16 *, int, EStringConvertErrorPolicy)
{
} /* size: 0 */

// <005E6EE8> ../public/tier0/tier0_unicode.h:317
int V_UTF8CharsToUTF32(const char *, int, uchar32 *, int, EStringConvertErrorPolicy)
{
} /* size: 0 */

// <0007810C> ../public/tier0/tier0_unicode.h:472
// member functions: 70
// member variables: 10
// class size: 32
class CStrAutoEncode {
	/* ../public/tier0/tier0_unicode.h:476 */
	void CStrAutoEncode(CStrAutoEncode* , const char* );
	/* ../public/tier0/tier0_unicode.h:483 */
	void CStrAutoEncode(CStrAutoEncode* , const uchar16* );
	/* ../public/tier0/tier0_unicode.h:489 */
	void CStrAutoEncode(CStrAutoEncode* , const uchar32* );
	/* ../public/tier0/tier0_unicode.h:496 */
	void ~CStrAutoEncode(CStrAutoEncode* );
	/* ../public/tier0/tier0_unicode.h:501 */
	void Set(CStrAutoEncode* , const char* );
	/* ../public/tier0/tier0_unicode.h:510 */
	void Set(CStrAutoEncode* , const uchar16* );
	/* ../public/tier0/tier0_unicode.h:519 */
	void Set(CStrAutoEncode* , const uchar32* );
	/* ../public/tier0/tier0_unicode.h:528 */
	void SetCopy(CStrAutoEncode* , const char* , int);
	/* ../public/tier0/tier0_unicode.h:529 */
	void SetCopy(CStrAutoEncode* , const uchar16* , int);
	/* ../public/tier0/tier0_unicode.h:530 */
	void SetCopy(CStrAutoEncode* , const uchar32* , int);
	/* ../public/tier0/tier0_unicode.h:536 */
	void SetUTF8Copy(CStrAutoEncode* , const uchar16* );
	/* ../public/tier0/tier0_unicode.h:537 */
	void SetUTF8Copy(CStrAutoEncode* , const uchar32* );
	/* ../public/tier0/tier0_unicode.h:538 */
	void SetUTF16Copy(CStrAutoEncode* , const char* );
	/* ../public/tier0/tier0_unicode.h:539 */
	void SetUTF16Copy(CStrAutoEncode* , const uchar32* );
	/* ../public/tier0/tier0_unicode.h:540 */
	void SetUTF32Copy(CStrAutoEncode* , const char* );
	/* ../public/tier0/tier0_unicode.h:541 */
	void SetUTF32Copy(CStrAutoEncode* , const uchar16* );
	/* ../public/tier0/tier0_unicode.h:543 */
	CStrAutoEncode& Copy(CStrAutoEncode* , const CStrAutoEncode& );
	/* ../public/tier0/tier0_unicode.h:546 */
	const char* ToString(const CStrAutoEncode* );
	/* ../public/tier0/tier0_unicode.h:553 */
	const char* ToUTF8(const CStrAutoEncode* );
	/* ../public/tier0/tier0_unicode.h:558 */
	char* ToStringWritable(CStrAutoEncode* );
	/* ../public/tier0/tier0_unicode.h:564 */
	const uchar16* ToUTF16(const CStrAutoEncode* );
	/* ../public/tier0/tier0_unicode.h:569 */
	uchar16* ToUTF16Writable(CStrAutoEncode* );
	/* ../public/tier0/tier0_unicode.h:575 */
	const uchar32* ToUTF32(const CStrAutoEncode* );
	/* ../public/tier0/tier0_unicode.h:580 */
	uchar32* ToUTF32Writable(CStrAutoEncode* );
	/* ../public/tier0/tier0_unicode.h:587 */
	const wchar_t* ToWString(const CStrAutoEncode* );
	/* ../public/tier0/tier0_unicode.h:599 */
	wchar_t* ToWStringWritable(CStrAutoEncode* );
	/* ../public/tier0/tier0_unicode.h:609 */
	void Clear(CStrAutoEncode* );
	/* ../public/tier0/tier0_unicode.h:611 */
	bool IsEmpty(const CStrAutoEncode* );
	/* ../public/tier0/tier0_unicode.h:616 */
	bool HaveUTF8(const CStrAutoEncode* );
	/* ../public/tier0/tier0_unicode.h:620 */
	bool HaveUTF16(const CStrAutoEncode* );
	/* ../public/tier0/tier0_unicode.h:624 */
	bool HaveUTF32(const CStrAutoEncode* );
private:
	/* ../public/tier0/tier0_unicode.h:630 */
	void InitEmpty(CStrAutoEncode* );
	/* ../public/tier0/tier0_unicode.h:634 */
	void PopulateUTF8(const CStrAutoEncode* );
	/* ../public/tier0/tier0_unicode.h:638 */
	void PopulateUTF16(const CStrAutoEncode* );
	/* ../public/tier0/tier0_unicode.h:642 */
	void PopulateUTF32(const CStrAutoEncode* );
	const char * m_pch; /* 0 8 */
	const uchar16 * m_pch16; /* 8 8 */
	const uchar32 * m_pch32; /* 16 8 */
	bool m_bHaveUTF8:1; /* 24: 0 1 */
	bool m_bAllocatedUTF8:1; /* 24: 1 1 */
	bool m_bHaveUTF16:1; /* 24: 2 1 */
	bool m_bAllocatedUTF16:1; /* 24: 3 1 */
	bool m_bHaveUTF32:1; /* 24: 4 1 */
	bool m_bAllocatedUTF32:1; /* 24: 5 1 */
	bool m_bIsEmpty:1; /* 24: 6 1 */
	void CStrAutoEncode(class CStrAutoEncode *, const char  *); /* linkage=_ZN14CStrAutoEncodeC4EPKc */
	void CStrAutoEncode(class CStrAutoEncode *, const uchar16  *); /* linkage=_ZN14CStrAutoEncodeC4EPKt */
	void CStrAutoEncode(class CStrAutoEncode *, const uchar32  *); /* linkage=_ZN14CStrAutoEncodeC4EPKw */
	void ~CStrAutoEncode(class CStrAutoEncode *); /* linkage=_ZN14CStrAutoEncodeD4Ev */
	void Set(class CStrAutoEncode *, const char  *); /* linkage=_ZN14CStrAutoEncode3SetEPKc */
	void Set(class CStrAutoEncode *, const uchar16  *); /* linkage=_ZN14CStrAutoEncode3SetEPKt */
	void Set(class CStrAutoEncode *, const uchar32  *); /* linkage=_ZN14CStrAutoEncode3SetEPKw */
	void SetCopy(class CStrAutoEncode *, const char  *, int); /* linkage=_ZN14CStrAutoEncode7SetCopyEPKci */
	void SetCopy(class CStrAutoEncode *, const uchar16  *, int); /* linkage=_ZN14CStrAutoEncode7SetCopyEPKti */
	void SetCopy(class CStrAutoEncode *, const uchar32  *, int); /* linkage=_ZN14CStrAutoEncode7SetCopyEPKwi */
	void SetUTF8Copy(class CStrAutoEncode *, const uchar16  *); /* linkage=_ZN14CStrAutoEncode11SetUTF8CopyEPKt */
	void SetUTF8Copy(class CStrAutoEncode *, const uchar32  *); /* linkage=_ZN14CStrAutoEncode11SetUTF8CopyEPKw */
	void SetUTF16Copy(class CStrAutoEncode *, const char  *); /* linkage=_ZN14CStrAutoEncode12SetUTF16CopyEPKc */
	void SetUTF16Copy(class CStrAutoEncode *, const uchar32  *); /* linkage=_ZN14CStrAutoEncode12SetUTF16CopyEPKw */
	void SetUTF32Copy(class CStrAutoEncode *, const char  *); /* linkage=_ZN14CStrAutoEncode12SetUTF32CopyEPKc */
	void SetUTF32Copy(class CStrAutoEncode *, const uchar16  *); /* linkage=_ZN14CStrAutoEncode12SetUTF32CopyEPKt */
	class CStrAutoEncode & Copy(class CStrAutoEncode *, const class CStrAutoEncode  &); /* linkage=_ZN14CStrAutoEncode4CopyERKS_ */
	const char  * ToString(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode8ToStringEv */
	const char  * ToUTF8(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode6ToUTF8Ev */
	char * ToStringWritable(class CStrAutoEncode *); /* linkage=_ZN14CStrAutoEncode16ToStringWritableEv */
	const uchar16  * ToUTF16(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode7ToUTF16Ev */
	uchar16 * ToUTF16Writable(class CStrAutoEncode *); /* linkage=_ZN14CStrAutoEncode15ToUTF16WritableEv */
	const uchar32  * ToUTF32(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode7ToUTF32Ev */
	uchar32 * ToUTF32Writable(class CStrAutoEncode *); /* linkage=_ZN14CStrAutoEncode15ToUTF32WritableEv */
	const wchar_t  * ToWString(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode9ToWStringEv */
	wchar_t * ToWStringWritable(class CStrAutoEncode *); /* linkage=_ZN14CStrAutoEncode17ToWStringWritableEv */
	void Clear(class CStrAutoEncode *); /* linkage=_ZN14CStrAutoEncode5ClearEv */
	bool IsEmpty(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode7IsEmptyEv */
	bool HaveUTF8(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode8HaveUTF8Ev */
	bool HaveUTF16(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode9HaveUTF16Ev */
	bool HaveUTF32(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode9HaveUTF32Ev */
	void InitEmpty(class CStrAutoEncode *); /* linkage=_ZN14CStrAutoEncode9InitEmptyEv */
	void PopulateUTF8(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode12PopulateUTF8Ev */
	void PopulateUTF16(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode13PopulateUTF16Ev */
	void PopulateUTF32(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode13PopulateUTF32Ev */
};

// <0588AFF2> ../../public/tier0/tier0_unicode.h:472
// member functions: 70
// member variables: 10
// class size: 32
class CStrAutoEncode {
	/* ../../public/tier0/tier0_unicode.h:476 */
	void CStrAutoEncode(CStrAutoEncode* , const char* );
	/* ../../public/tier0/tier0_unicode.h:483 */
	void CStrAutoEncode(CStrAutoEncode* , const uchar16* );
	/* ../../public/tier0/tier0_unicode.h:489 */
	void CStrAutoEncode(CStrAutoEncode* , const uchar32* );
	/* ../../public/tier0/tier0_unicode.h:496 */
	void ~CStrAutoEncode(CStrAutoEncode* );
	/* ../../public/tier0/tier0_unicode.h:501 */
	void Set(CStrAutoEncode* , const char* );
	/* ../../public/tier0/tier0_unicode.h:510 */
	void Set(CStrAutoEncode* , const uchar16* );
	/* ../../public/tier0/tier0_unicode.h:519 */
	void Set(CStrAutoEncode* , const uchar32* );
	/* ../../public/tier0/tier0_unicode.h:528 */
	void SetCopy(CStrAutoEncode* , const char* , int);
	/* ../../public/tier0/tier0_unicode.h:529 */
	void SetCopy(CStrAutoEncode* , const uchar16* , int);
	/* ../../public/tier0/tier0_unicode.h:530 */
	void SetCopy(CStrAutoEncode* , const uchar32* , int);
	/* ../../public/tier0/tier0_unicode.h:536 */
	void SetUTF8Copy(CStrAutoEncode* , const uchar16* );
	/* ../../public/tier0/tier0_unicode.h:537 */
	void SetUTF8Copy(CStrAutoEncode* , const uchar32* );
	/* ../../public/tier0/tier0_unicode.h:538 */
	void SetUTF16Copy(CStrAutoEncode* , const char* );
	/* ../../public/tier0/tier0_unicode.h:539 */
	void SetUTF16Copy(CStrAutoEncode* , const uchar32* );
	/* ../../public/tier0/tier0_unicode.h:540 */
	void SetUTF32Copy(CStrAutoEncode* , const char* );
	/* ../../public/tier0/tier0_unicode.h:541 */
	void SetUTF32Copy(CStrAutoEncode* , const uchar16* );
	/* ../../public/tier0/tier0_unicode.h:543 */
	CStrAutoEncode& Copy(CStrAutoEncode* , const CStrAutoEncode& );
	/* ../../public/tier0/tier0_unicode.h:546 */
	const char* ToString(const CStrAutoEncode* );
	/* ../../public/tier0/tier0_unicode.h:553 */
	const char* ToUTF8(const CStrAutoEncode* );
	/* ../../public/tier0/tier0_unicode.h:558 */
	char* ToStringWritable(CStrAutoEncode* );
	/* ../../public/tier0/tier0_unicode.h:564 */
	const uchar16* ToUTF16(const CStrAutoEncode* );
	/* ../../public/tier0/tier0_unicode.h:569 */
	uchar16* ToUTF16Writable(CStrAutoEncode* );
	/* ../../public/tier0/tier0_unicode.h:575 */
	const uchar32* ToUTF32(const CStrAutoEncode* );
	/* ../../public/tier0/tier0_unicode.h:580 */
	uchar32* ToUTF32Writable(CStrAutoEncode* );
	/* ../../public/tier0/tier0_unicode.h:587 */
	const wchar_t* ToWString(const CStrAutoEncode* );
	/* ../../public/tier0/tier0_unicode.h:599 */
	wchar_t* ToWStringWritable(CStrAutoEncode* );
	/* ../../public/tier0/tier0_unicode.h:609 */
	void Clear(CStrAutoEncode* );
	/* ../../public/tier0/tier0_unicode.h:611 */
	bool IsEmpty(const CStrAutoEncode* );
	/* ../../public/tier0/tier0_unicode.h:616 */
	bool HaveUTF8(const CStrAutoEncode* );
	/* ../../public/tier0/tier0_unicode.h:620 */
	bool HaveUTF16(const CStrAutoEncode* );
	/* ../../public/tier0/tier0_unicode.h:624 */
	bool HaveUTF32(const CStrAutoEncode* );
private:
	/* ../../public/tier0/tier0_unicode.h:630 */
	void InitEmpty(CStrAutoEncode* );
	/* ../../public/tier0/tier0_unicode.h:634 */
	void PopulateUTF8(const CStrAutoEncode* );
	/* ../../public/tier0/tier0_unicode.h:638 */
	void PopulateUTF16(const CStrAutoEncode* );
	/* ../../public/tier0/tier0_unicode.h:642 */
	void PopulateUTF32(const CStrAutoEncode* );
	const char * m_pch; /* 0 8 */
	const uchar16 * m_pch16; /* 8 8 */
	const uchar32 * m_pch32; /* 16 8 */
	bool m_bHaveUTF8:1; /* 24: 0 1 */
	bool m_bAllocatedUTF8:1; /* 24: 1 1 */
	bool m_bHaveUTF16:1; /* 24: 2 1 */
	bool m_bAllocatedUTF16:1; /* 24: 3 1 */
	bool m_bHaveUTF32:1; /* 24: 4 1 */
	bool m_bAllocatedUTF32:1; /* 24: 5 1 */
	bool m_bIsEmpty:1; /* 24: 6 1 */
	void CStrAutoEncode(class CStrAutoEncode *, const char  *); /* linkage=_ZN14CStrAutoEncodeC4EPKc */
	void CStrAutoEncode(class CStrAutoEncode *, const uchar16  *); /* linkage=_ZN14CStrAutoEncodeC4EPKt */
	void CStrAutoEncode(class CStrAutoEncode *, const uchar32  *); /* linkage=_ZN14CStrAutoEncodeC4EPKw */
	void ~CStrAutoEncode(class CStrAutoEncode *); /* linkage=_ZN14CStrAutoEncodeD4Ev */
	void Set(class CStrAutoEncode *, const char  *); /* linkage=_ZN14CStrAutoEncode3SetEPKc */
	void Set(class CStrAutoEncode *, const uchar16  *); /* linkage=_ZN14CStrAutoEncode3SetEPKt */
	void Set(class CStrAutoEncode *, const uchar32  *); /* linkage=_ZN14CStrAutoEncode3SetEPKw */
	void SetCopy(class CStrAutoEncode *, const char  *, int); /* linkage=_ZN14CStrAutoEncode7SetCopyEPKci */
	void SetCopy(class CStrAutoEncode *, const uchar16  *, int); /* linkage=_ZN14CStrAutoEncode7SetCopyEPKti */
	void SetCopy(class CStrAutoEncode *, const uchar32  *, int); /* linkage=_ZN14CStrAutoEncode7SetCopyEPKwi */
	void SetUTF8Copy(class CStrAutoEncode *, const uchar16  *); /* linkage=_ZN14CStrAutoEncode11SetUTF8CopyEPKt */
	void SetUTF8Copy(class CStrAutoEncode *, const uchar32  *); /* linkage=_ZN14CStrAutoEncode11SetUTF8CopyEPKw */
	void SetUTF16Copy(class CStrAutoEncode *, const char  *); /* linkage=_ZN14CStrAutoEncode12SetUTF16CopyEPKc */
	void SetUTF16Copy(class CStrAutoEncode *, const uchar32  *); /* linkage=_ZN14CStrAutoEncode12SetUTF16CopyEPKw */
	void SetUTF32Copy(class CStrAutoEncode *, const char  *); /* linkage=_ZN14CStrAutoEncode12SetUTF32CopyEPKc */
	void SetUTF32Copy(class CStrAutoEncode *, const uchar16  *); /* linkage=_ZN14CStrAutoEncode12SetUTF32CopyEPKt */
	class CStrAutoEncode & Copy(class CStrAutoEncode *, const class CStrAutoEncode  &); /* linkage=_ZN14CStrAutoEncode4CopyERKS_ */
	const char  * ToString(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode8ToStringEv */
	const char  * ToUTF8(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode6ToUTF8Ev */
	char * ToStringWritable(class CStrAutoEncode *); /* linkage=_ZN14CStrAutoEncode16ToStringWritableEv */
	const uchar16  * ToUTF16(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode7ToUTF16Ev */
	uchar16 * ToUTF16Writable(class CStrAutoEncode *); /* linkage=_ZN14CStrAutoEncode15ToUTF16WritableEv */
	const uchar32  * ToUTF32(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode7ToUTF32Ev */
	uchar32 * ToUTF32Writable(class CStrAutoEncode *); /* linkage=_ZN14CStrAutoEncode15ToUTF32WritableEv */
	const wchar_t  * ToWString(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode9ToWStringEv */
	wchar_t * ToWStringWritable(class CStrAutoEncode *); /* linkage=_ZN14CStrAutoEncode17ToWStringWritableEv */
	void Clear(class CStrAutoEncode *); /* linkage=_ZN14CStrAutoEncode5ClearEv */
	bool IsEmpty(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode7IsEmptyEv */
	bool HaveUTF8(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode8HaveUTF8Ev */
	bool HaveUTF16(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode9HaveUTF16Ev */
	bool HaveUTF32(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode9HaveUTF32Ev */
	void InitEmpty(class CStrAutoEncode *); /* linkage=_ZN14CStrAutoEncode9InitEmptyEv */
	void PopulateUTF8(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode12PopulateUTF8Ev */
	void PopulateUTF16(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode13PopulateUTF16Ev */
	void PopulateUTF32(const class CStrAutoEncode  *); /* linkage=_ZNK14CStrAutoEncode13PopulateUTF32Ev */
};

// <03181B32> ../public/tier0/tier0_unicode.h:476
void CStrAutoEncode::CStrAutoEncode(const char* pch)
{
} /* size: 0 */

// <03181B0C> ../public/tier0/tier0_unicode.h:476
inline void CStrAutoEncode::CStrAutoEncode(const char* pch)
{
} /* size: 0 */

// <0018EDBD> ../../public/tier0/tier0_unicode.h:489
void CStrAutoEncode::CStrAutoEncode(const uchar32* pch32)
{
} /* size: 0 */

// <0018ED97> ../../public/tier0/tier0_unicode.h:489
inline void CStrAutoEncode::CStrAutoEncode(const uchar32* pch32)
{
} /* size: 0 */

// <06E2A96A> ../../public/tier0/tier0_unicode.h:496
void CStrAutoEncode::~CStrAutoEncode()
{
} /* size: 0 */

// <06E2A951> ../../public/tier0/tier0_unicode.h:496
inline void CStrAutoEncode::~CStrAutoEncode()
{
} /* size: 0 */

// <03181AB6> ../public/tier0/tier0_unicode.h:501
inline void CStrAutoEncode::Set(const char* pch)
{
} /* size: 0 */

// <0060F640> ../public/tier0/tier0_unicode.h:510
inline void CStrAutoEncode::Set(const uchar16* pch16)
{
} /* size: 0 */

// <0018ED41> ../../public/tier0/tier0_unicode.h:519
inline void CStrAutoEncode::Set(const uchar32* pch32)
{
} /* size: 0 */

// <0018ED28> ../../public/tier0/tier0_unicode.h:546
inline void CStrAutoEncode::ToString()
{
} /* size: 0 */

// <00A5C7CC> ../public/tier0/tier0_unicode.h:564
inline void CStrAutoEncode::ToUTF16()
{
} /* size: 0 */

// <00146DE0> ../../public/tier0/tier0_unicode.h:575
inline void CStrAutoEncode::ToUTF32()
{
} /* size: 0 */

// <00146DC7> ../../public/tier0/tier0_unicode.h:587
inline void CStrAutoEncode::ToWString()
{
} /* size: 0 */

// <005F3D55> ../public/tier0/tier0_unicode.h:611
inline void CStrAutoEncode::IsEmpty()
{
} /* size: 0 */

