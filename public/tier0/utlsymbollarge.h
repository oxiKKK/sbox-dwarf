
//
// public/tier0/utlsymbollarge.h
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
//	functions: 14
//	classes: 3
//

// <0003C9AF> ../public/tier0/utlsymbollarge.h:20
// member functions: 40
// member variable: 1
// class size: 8
class CUtlSymbolLarge {
	/* ../public/tier0/utlsymbollarge.h:133 */
	union {
		UtlSymLargeId_t m_Id; /* 0 8 */
		const char * m_pAsString; /* 0 8 */
	};
	/* ../public/tier0/utlsymbollarge.h:26 */
	void CUtlSymbolLarge(CUtlSymbolLarge* );
	/* ../public/tier0/utlsymbollarge.h:31 */
	void CUtlSymbolLarge(CUtlSymbolLarge* , UtlSymLargeId_t);
	/* ../public/tier0/utlsymbollarge.h:36 */
	void CUtlSymbolLarge(CUtlSymbolLarge* , const CUtlSymbolLarge& );
	/* ../public/tier0/utlsymbollarge.h:42 */
	CUtlSymbolLarge& operator=(CUtlSymbolLarge* , const CUtlSymbolLarge& );
	/* ../public/tier0/utlsymbollarge.h:49 */
	bool operator==(const CUtlSymbolLarge* , const CUtlSymbolLarge& );
	/* ../public/tier0/utlsymbollarge.h:55 */
	bool operator==(const CUtlSymbolLarge* , const UtlSymLargeId_t& );
	/* ../public/tier0/utlsymbollarge.h:61 */
	bool operator!=(const CUtlSymbolLarge* , const CUtlSymbolLarge& );
	/* ../public/tier0/utlsymbollarge.h:67 */
	bool operator!=(const CUtlSymbolLarge* , const UtlSymLargeId_t& );
	/* ../public/tier0/utlsymbollarge.h:72 */
	bool operator<(const CUtlSymbolLarge* , const CUtlSymbolLarge& );
	/* ../public/tier0/utlsymbollarge.h:78 */
	const UtlSymLargeId_t operator const UtlSymLargeId_t(const CUtlSymbolLarge* );
	/* ../public/tier0/utlsymbollarge.h:83 */
	UtlSymLargeId_t Id(const CUtlSymbolLarge* );
	/* ../public/tier0/utlsymbollarge.h:89 */
	const char* String(const CUtlSymbolLarge* );
	/* ../public/tier0/utlsymbollarge.h:96 */
	bool IsValid(const CUtlSymbolLarge* );
	/* ../public/tier0/utlsymbollarge.h:101 */
	bool IsNullString(const CUtlSymbolLarge* );
	/* ../public/tier0/utlsymbollarge.h:106 */
	bool operator!(const CUtlSymbolLarge* );
	/* ../public/tier0/utlsymbollarge.h:111 */
	const char* ToCStr(const CUtlSymbolLarge* );
private:
	/* ../public/tier0/utlsymbollarge.h:117 */
	const short int operator short int const(const CUtlSymbolLarge* );
	/* ../public/tier0/utlsymbollarge.h:122 */
	const short unsigned int operator short unsigned int const(const CUtlSymbolLarge* );
protected:
	/* ../public/tier0/utlsymbollarge.h:129 */
	void CUtlSymbolLarge(CUtlSymbolLarge* , const char* );
	/* ../public/tier0/utlsymbollarge.h:130 */
	bool operator==(const CUtlSymbolLarge* , const char* );
	union {
		UtlSymLargeId_t m_Id; /* 0 8 */
		const char * m_pAsString; /* 0 8 */
	} u; /* 0 8 */
	void CUtlSymbolLarge(class CUtlSymbolLarge *); /* linkage=_ZN15CUtlSymbolLargeC4Ev */
	void CUtlSymbolLarge(class CUtlSymbolLarge *, UtlSymLargeId_t); /* linkage=_ZN15CUtlSymbolLargeC4Ex */
	void CUtlSymbolLarge(class CUtlSymbolLarge *, const class CUtlSymbolLarge  &); /* linkage=_ZN15CUtlSymbolLargeC4ERKS_ */
	class CUtlSymbolLarge & operator=(class CUtlSymbolLarge *, const class CUtlSymbolLarge  &); /* linkage=_ZN15CUtlSymbolLargeaSERKS_ */
	bool operator==(const class CUtlSymbolLarge  *, const class CUtlSymbolLarge  &); /* linkage=_ZNK15CUtlSymbolLargeeqERKS_ */
	bool operator==(const class CUtlSymbolLarge  *, const UtlSymLargeId_t  &); /* linkage=_ZNK15CUtlSymbolLargeeqERKx */
	bool operator!=(const class CUtlSymbolLarge  *, const class CUtlSymbolLarge  &); /* linkage=_ZNK15CUtlSymbolLargeneERKS_ */
	bool operator!=(const class CUtlSymbolLarge  *, const UtlSymLargeId_t  &); /* linkage=_ZNK15CUtlSymbolLargeneERKx */
	bool operator<(const class CUtlSymbolLarge  *, const class CUtlSymbolLarge  &); /* linkage=_ZNK15CUtlSymbolLargeltERKS_ */
	const UtlSymLargeId_t  operator const UtlSymLargeId_t(const class CUtlSymbolLarge  *); /* linkage=_ZNK15CUtlSymbolLargecvKxEv */
	UtlSymLargeId_t Id(const class CUtlSymbolLarge  *); /* linkage=_ZNK15CUtlSymbolLarge2IdEv */
	const char  * String(const class CUtlSymbolLarge  *); /* linkage=_ZNK15CUtlSymbolLarge6StringEv */
	bool IsValid(const class CUtlSymbolLarge  *); /* linkage=_ZNK15CUtlSymbolLarge7IsValidEv */
	bool IsNullString(const class CUtlSymbolLarge  *); /* linkage=_ZNK15CUtlSymbolLarge12IsNullStringEv */
	bool operator!(const class CUtlSymbolLarge  *); /* linkage=_ZNK15CUtlSymbolLargentEv */
	const char  * ToCStr(const class CUtlSymbolLarge  *); /* linkage=_ZNK15CUtlSymbolLarge6ToCStrEv */
	const short int  operator short int const(const class CUtlSymbolLarge  *); /* linkage=_ZNK15CUtlSymbolLargecvKsEv */
	const short unsigned int  operator short unsigned int const(const class CUtlSymbolLarge  *); /* linkage=_ZNK15CUtlSymbolLargecvKtEv */
	void CUtlSymbolLarge(class CUtlSymbolLarge *, const char  *); /* linkage=_ZN15CUtlSymbolLargeC4EPKc */
	bool operator==(const class CUtlSymbolLarge  *, const char  *); /* linkage=_ZNK15CUtlSymbolLargeeqEPKc */
};

// <0583A458> ../../public/tier0/utlsymbollarge.h:20
// member functions: 40
// member variable: 1
// class size: 8
class CUtlSymbolLarge {
	/* ../../public/tier0/utlsymbollarge.h:133 */
	union {
		UtlSymLargeId_t m_Id; /* 0 8 */
		const char * m_pAsString; /* 0 8 */
	};
	/* ../../public/tier0/utlsymbollarge.h:26 */
	void CUtlSymbolLarge(CUtlSymbolLarge* );
	/* ../../public/tier0/utlsymbollarge.h:31 */
	void CUtlSymbolLarge(CUtlSymbolLarge* , UtlSymLargeId_t);
	/* ../../public/tier0/utlsymbollarge.h:36 */
	void CUtlSymbolLarge(CUtlSymbolLarge* , const CUtlSymbolLarge& );
	/* ../../public/tier0/utlsymbollarge.h:42 */
	CUtlSymbolLarge& operator=(CUtlSymbolLarge* , const CUtlSymbolLarge& );
	/* ../../public/tier0/utlsymbollarge.h:49 */
	bool operator==(const CUtlSymbolLarge* , const CUtlSymbolLarge& );
	/* ../../public/tier0/utlsymbollarge.h:55 */
	bool operator==(const CUtlSymbolLarge* , const UtlSymLargeId_t& );
	/* ../../public/tier0/utlsymbollarge.h:61 */
	bool operator!=(const CUtlSymbolLarge* , const CUtlSymbolLarge& );
	/* ../../public/tier0/utlsymbollarge.h:67 */
	bool operator!=(const CUtlSymbolLarge* , const UtlSymLargeId_t& );
	/* ../../public/tier0/utlsymbollarge.h:72 */
	bool operator<(const CUtlSymbolLarge* , const CUtlSymbolLarge& );
	/* ../../public/tier0/utlsymbollarge.h:78 */
	const UtlSymLargeId_t operator const UtlSymLargeId_t(const CUtlSymbolLarge* );
	/* ../../public/tier0/utlsymbollarge.h:83 */
	UtlSymLargeId_t Id(const CUtlSymbolLarge* );
	/* ../../public/tier0/utlsymbollarge.h:89 */
	const char* String(const CUtlSymbolLarge* );
	/* ../../public/tier0/utlsymbollarge.h:96 */
	bool IsValid(const CUtlSymbolLarge* );
	/* ../../public/tier0/utlsymbollarge.h:101 */
	bool IsNullString(const CUtlSymbolLarge* );
	/* ../../public/tier0/utlsymbollarge.h:106 */
	bool operator!(const CUtlSymbolLarge* );
	/* ../../public/tier0/utlsymbollarge.h:111 */
	const char* ToCStr(const CUtlSymbolLarge* );
private:
	/* ../../public/tier0/utlsymbollarge.h:117 */
	const short int operator short int const(const CUtlSymbolLarge* );
	/* ../../public/tier0/utlsymbollarge.h:122 */
	const short unsigned int operator short unsigned int const(const CUtlSymbolLarge* );
protected:
	/* ../../public/tier0/utlsymbollarge.h:129 */
	void CUtlSymbolLarge(CUtlSymbolLarge* , const char* );
	/* ../../public/tier0/utlsymbollarge.h:130 */
	bool operator==(const CUtlSymbolLarge* , const char* );
	union {
		UtlSymLargeId_t m_Id; /* 0 8 */
		const char * m_pAsString; /* 0 8 */
	} u; /* 0 8 */
	void CUtlSymbolLarge(class CUtlSymbolLarge *); /* linkage=_ZN15CUtlSymbolLargeC4Ev */
	void CUtlSymbolLarge(class CUtlSymbolLarge *, UtlSymLargeId_t); /* linkage=_ZN15CUtlSymbolLargeC4Ex */
	void CUtlSymbolLarge(class CUtlSymbolLarge *, const class CUtlSymbolLarge  &); /* linkage=_ZN15CUtlSymbolLargeC4ERKS_ */
	class CUtlSymbolLarge & operator=(class CUtlSymbolLarge *, const class CUtlSymbolLarge  &); /* linkage=_ZN15CUtlSymbolLargeaSERKS_ */
	bool operator==(const class CUtlSymbolLarge  *, const class CUtlSymbolLarge  &); /* linkage=_ZNK15CUtlSymbolLargeeqERKS_ */
	bool operator==(const class CUtlSymbolLarge  *, const UtlSymLargeId_t  &); /* linkage=_ZNK15CUtlSymbolLargeeqERKx */
	bool operator!=(const class CUtlSymbolLarge  *, const class CUtlSymbolLarge  &); /* linkage=_ZNK15CUtlSymbolLargeneERKS_ */
	bool operator!=(const class CUtlSymbolLarge  *, const UtlSymLargeId_t  &); /* linkage=_ZNK15CUtlSymbolLargeneERKx */
	bool operator<(const class CUtlSymbolLarge  *, const class CUtlSymbolLarge  &); /* linkage=_ZNK15CUtlSymbolLargeltERKS_ */
	const UtlSymLargeId_t  operator const UtlSymLargeId_t(const class CUtlSymbolLarge  *); /* linkage=_ZNK15CUtlSymbolLargecvKxEv */
	UtlSymLargeId_t Id(const class CUtlSymbolLarge  *); /* linkage=_ZNK15CUtlSymbolLarge2IdEv */
	const char  * String(const class CUtlSymbolLarge  *); /* linkage=_ZNK15CUtlSymbolLarge6StringEv */
	bool IsValid(const class CUtlSymbolLarge  *); /* linkage=_ZNK15CUtlSymbolLarge7IsValidEv */
	bool IsNullString(const class CUtlSymbolLarge  *); /* linkage=_ZNK15CUtlSymbolLarge12IsNullStringEv */
	bool operator!(const class CUtlSymbolLarge  *); /* linkage=_ZNK15CUtlSymbolLargentEv */
	const char  * ToCStr(const class CUtlSymbolLarge  *); /* linkage=_ZNK15CUtlSymbolLarge6ToCStrEv */
	const short int  operator short int const(const class CUtlSymbolLarge  *); /* linkage=_ZNK15CUtlSymbolLargecvKsEv */
	const short unsigned int  operator short unsigned int const(const class CUtlSymbolLarge  *); /* linkage=_ZNK15CUtlSymbolLargecvKtEv */
	void CUtlSymbolLarge(class CUtlSymbolLarge *, const char  *); /* linkage=_ZN15CUtlSymbolLargeC4EPKc */
	bool operator==(const class CUtlSymbolLarge  *, const char  *); /* linkage=_ZNK15CUtlSymbolLargeeqEPKc */
};

// <056985F6> ../public/tier0/utlsymbollarge.h:26
void CUtlSymbolLarge::CUtlSymbolLarge()
{
} /* size: 0 */

// <056985DD> ../public/tier0/utlsymbollarge.h:26
inline void CUtlSymbolLarge::CUtlSymbolLarge()
{
} /* size: 0 */

// <067E070F> ../public/tier0/utlsymbollarge.h:31
void CUtlSymbolLarge::CUtlSymbolLarge(UtlSymLargeId_t id)
{
} /* size: 0 */

// <067E06EB> ../public/tier0/utlsymbollarge.h:31
inline void CUtlSymbolLarge::CUtlSymbolLarge(UtlSymLargeId_t id)
{
} /* size: 0 */

// <05698581> ../public/tier0/utlsymbollarge.h:36
void CUtlSymbolLarge::CUtlSymbolLarge(const CUtlSymbolLarge& sym)
{
} /* size: 0 */

// <0569855C> ../public/tier0/utlsymbollarge.h:36
inline void CUtlSymbolLarge::CUtlSymbolLarge(const CUtlSymbolLarge& sym)
{
} /* size: 0 */

// <0557C89D> ../public/tier0/utlsymbollarge.h:42
inline void CUtlSymbolLarge::operator=(const CUtlSymbolLarge& src)
{
} /* size: 0 */

// <0014F2A5> ../public/tier0/utlsymbollarge.h:49
inline void CUtlSymbolLarge::operator==(const CUtlSymbolLarge& src)
{
} /* size: 0 */

// <00106219> ../public/tier0/utlsymbollarge.h:67
inline void CUtlSymbolLarge::operator!=(const UtlSymLargeId_t& src)
{
} /* size: 0 */

// <000E8F17> ../public/tier0/utlsymbollarge.h:78
inline void operator const CUtlSymbolLarge::UtlSymLargeId_t()
{
} /* size: 0 */

// <06E2A60C> ../../public/tier0/utlsymbollarge.h:89
inline void CUtlSymbolLarge::String()
{
} /* size: 0 */

// <067E06B9> ../public/tier0/utlsymbollarge.h:96
inline void CUtlSymbolLarge::IsValid()
{
} /* size: 0 */

// <06E2A5F5> ../../public/tier0/utlsymbollarge.h:162
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <003452DD> ../public/tier0/utlsymbollarge.h:162
void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 30 */

// <040D0523> ../public/tier0/utlsymbollarge.h:162
// member function: 1
// class size: 1
class CSchemaTypeOf<CUtlSymbolLarge> {
	/* ../public/tier0/utlsymbollarge.h:162 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

