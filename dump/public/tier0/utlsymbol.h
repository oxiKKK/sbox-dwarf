
//
// public/tier0/utlsymbol.h
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
//	functions: 12
//	classes: 3
//

// <00017920> ../public/tier0/utlsymbol.h:29
// member functions: 34
// member variable: 1
// static member variables: 2
// class size: 2
class CUtlSymbol {
	/* ../public/tier0/utlsymbol.h:35 */
	void CUtlSymbol(CUtlSymbol* );
	/* ../public/tier0/utlsymbol.h:36 */
	void CUtlSymbol(CUtlSymbol* , UtlSymId_t);
	/* ../public/tier0/utlsymbol.h:37 */
	void CUtlSymbol(CUtlSymbol* , const char* );
	/* ../public/tier0/utlsymbol.h:38 */
	void CUtlSymbol(CUtlSymbol* , const char* , int);
	/* ../public/tier0/utlsymbol.h:39 */
	void CUtlSymbol(CUtlSymbol* , const CUtlSymbol& );
	/* ../public/tier0/utlsymbol.h:42 */
	CUtlSymbol& operator=(CUtlSymbol* , const CUtlSymbol& );
	/* ../public/tier0/utlsymbol.h:45 */
	bool operator==(const CUtlSymbol* , const CUtlSymbol& );
	/* ../public/tier0/utlsymbol.h:46 */
	bool operator==(const CUtlSymbol* , UtlSymId_t);
	/* ../public/tier0/utlsymbol.h:47 */
	bool operator==(const CUtlSymbol* , const char* );
	/* ../public/tier0/utlsymbol.h:50 */
	bool IsValid(const CUtlSymbol* );
	/* ../public/tier0/utlsymbol.h:53 */
	UtlSymId_t operator UtlSymId_t(const CUtlSymbol* );
	/* ../public/tier0/utlsymbol.h:56 */
	const char* String(const CUtlSymbol* );
	/* ../public/tier0/utlsymbol.h:59 */
	void DisableStaticSymbolTable(void);
	/* ../public/tier0/utlsymbol.h:60 */
	void SetStaticSymbolTablePageSize(uint);
	/* ../public/tier0/utlsymbol.h:63 */
	CUtlSymbol Find(const char* );
protected:
	UtlSymId_t m_Id; /* 0 2 */
	/* ../public/tier0/utlsymbol.h:69 */
	void Initialize(void);
	/* ../public/tier0/utlsymbol.h:72 */
	CUtlSymbolTableMT* CurrTable(void);
	static class CUtlSymbolTableMT * s_pSymbolTable; /* 0 0 */
	static bool s_bAllowStaticSymbolTable; /* 0 0 */
	void CUtlSymbol(class CUtlSymbol *); /* linkage=_ZN10CUtlSymbolC4Ev */
	void CUtlSymbol(class CUtlSymbol *, UtlSymId_t); /* linkage=_ZN10CUtlSymbolC4Et */
	void CUtlSymbol(class CUtlSymbol *, const char  *); /* linkage=_ZN10CUtlSymbolC4EPKc */
	void CUtlSymbol(class CUtlSymbol *, const char  *, int); /* linkage=_ZN10CUtlSymbolC4EPKci */
	void CUtlSymbol(class CUtlSymbol *, const class CUtlSymbol  &); /* linkage=_ZN10CUtlSymbolC4ERKS_ */
	class CUtlSymbol & operator=(class CUtlSymbol *, const class CUtlSymbol  &); /* linkage=_ZN10CUtlSymbolaSERKS_ */
	bool operator==(const class CUtlSymbol  *, const class CUtlSymbol  &); /* linkage=_ZNK10CUtlSymboleqERKS_ */
	bool operator==(const class CUtlSymbol  *, UtlSymId_t); /* linkage=_ZNK10CUtlSymboleqEt */
	bool operator==(const class CUtlSymbol  *, const char  *); /* linkage=_ZNK10CUtlSymboleqEPKc */
	bool IsValid(const class CUtlSymbol  *); /* linkage=_ZNK10CUtlSymbol7IsValidEv */
	UtlSymId_t operator UtlSymId_t(const class CUtlSymbol  *); /* linkage=_ZNK10CUtlSymbolcvtEv */
	const char  * String(const class CUtlSymbol  *); /* linkage=_ZNK10CUtlSymbol6StringEv */
	void DisableStaticSymbolTable(void); /* linkage=_ZN10CUtlSymbol24DisableStaticSymbolTableEv */
	void SetStaticSymbolTablePageSize(uint); /* linkage=_ZN10CUtlSymbol28SetStaticSymbolTablePageSizeEj */
	class CUtlSymbol Find(const char  *); /* linkage=_ZN10CUtlSymbol4FindEPKc */
	/* <451ea29> tier0_perproject/utlsymbol.cpp:32 */
	void Initialize(void); /* linkage=_ZN10CUtlSymbol10InitializeEv */
	/* <451ea5b> tier0_perproject/utlsymbol.cpp:63 */
	class CUtlSymbolTableMT * CurrTable(void); /* linkage=_ZN10CUtlSymbol9CurrTableEv */
};

// <00180F06> ../public/tier0/utlsymbol.h:29
// member functions: 34
// member variable: 1
// static member variables: 2
// class size: 2
class CUtlSymbol {
	/* ../public/tier0/utlsymbol.h:35 */
	void CUtlSymbol(CUtlSymbol* );
	/* ../public/tier0/utlsymbol.h:36 */
	void CUtlSymbol(CUtlSymbol* , UtlSymId_t);
	/* ../public/tier0/utlsymbol.h:37 */
	void CUtlSymbol(CUtlSymbol* , const char* );
	/* ../public/tier0/utlsymbol.h:38 */
	void CUtlSymbol(CUtlSymbol* , const char* , int);
	/* ../public/tier0/utlsymbol.h:39 */
	void CUtlSymbol(CUtlSymbol* , const CUtlSymbol& );
	/* ../public/tier0/utlsymbol.h:42 */
	CUtlSymbol& operator=(CUtlSymbol* , const CUtlSymbol& );
	/* ../public/tier0/utlsymbol.h:45 */
	bool operator==(const CUtlSymbol* , const CUtlSymbol& );
	/* ../public/tier0/utlsymbol.h:46 */
	bool operator==(const CUtlSymbol* , UtlSymId_t);
	/* ../public/tier0/utlsymbol.h:47 */
	bool operator==(const CUtlSymbol* , const char* );
	/* ../public/tier0/utlsymbol.h:50 */
	bool IsValid(const CUtlSymbol* );
	/* ../public/tier0/utlsymbol.h:53 */
	UtlSymId_t operator UtlSymId_t(const CUtlSymbol* );
	/* ../public/tier0/utlsymbol.h:56 */
	const char* String(const CUtlSymbol* );
	/* ../public/tier0/utlsymbol.h:59 */
	void DisableStaticSymbolTable(void);
	/* ../public/tier0/utlsymbol.h:60 */
	void SetStaticSymbolTablePageSize(uint);
	/* ../public/tier0/utlsymbol.h:63 */
	CUtlSymbol Find(const char* );
protected:
	UtlSymId_t m_Id; /* 0 2 */
	/* ../public/tier0/utlsymbol.h:69 */
	void Initialize(void);
	/* ../public/tier0/utlsymbol.h:72 */
	CUtlSymbolTableMT* CurrTable(void);
	static class CUtlSymbolTableMT * s_pSymbolTable; /* 0 0 */
	static bool s_bAllowStaticSymbolTable; /* 0 0 */
	/* ../public/tier0/utlsymbol.h:32 */
	typedef UtlSymId_t SymId_t;
	void CUtlSymbol(class CUtlSymbol *); /* linkage=_ZN10CUtlSymbolC4Ev */
	void CUtlSymbol(class CUtlSymbol *, UtlSymId_t); /* linkage=_ZN10CUtlSymbolC4Et */
	void CUtlSymbol(class CUtlSymbol *, const char  *); /* linkage=_ZN10CUtlSymbolC4EPKc */
	void CUtlSymbol(class CUtlSymbol *, const char  *, int); /* linkage=_ZN10CUtlSymbolC4EPKci */
	void CUtlSymbol(class CUtlSymbol *, const class CUtlSymbol  &); /* linkage=_ZN10CUtlSymbolC4ERKS_ */
	class CUtlSymbol & operator=(class CUtlSymbol *, const class CUtlSymbol  &); /* linkage=_ZN10CUtlSymbolaSERKS_ */
	bool operator==(const class CUtlSymbol  *, const class CUtlSymbol  &); /* linkage=_ZNK10CUtlSymboleqERKS_ */
	bool operator==(const class CUtlSymbol  *, UtlSymId_t); /* linkage=_ZNK10CUtlSymboleqEt */
	bool operator==(const class CUtlSymbol  *, const char  *); /* linkage=_ZNK10CUtlSymboleqEPKc */
	bool IsValid(const class CUtlSymbol  *); /* linkage=_ZNK10CUtlSymbol7IsValidEv */
	UtlSymId_t operator UtlSymId_t(const class CUtlSymbol  *); /* linkage=_ZNK10CUtlSymbolcvtEv */
	const char  * String(const class CUtlSymbol  *); /* linkage=_ZNK10CUtlSymbol6StringEv */
	void DisableStaticSymbolTable(void); /* linkage=_ZN10CUtlSymbol24DisableStaticSymbolTableEv */
	void SetStaticSymbolTablePageSize(uint); /* linkage=_ZN10CUtlSymbol28SetStaticSymbolTablePageSizeEj */
	class CUtlSymbol Find(const char  *); /* linkage=_ZN10CUtlSymbol4FindEPKc */
	/* <451ea29> tier0_perproject/utlsymbol.cpp:32 */
	void Initialize(void); /* linkage=_ZN10CUtlSymbol10InitializeEv */
	/* <451ea5b> tier0_perproject/utlsymbol.cpp:63 */
	class CUtlSymbolTableMT * CurrTable(void); /* linkage=_ZN10CUtlSymbol9CurrTableEv */
};

// <0588AD34> ../../public/tier0/utlsymbol.h:29
// member functions: 34
// member variable: 1
// static member variables: 2
// class size: 2
class CUtlSymbol {
	/* ../../public/tier0/utlsymbol.h:35 */
	void CUtlSymbol(CUtlSymbol* );
	/* ../../public/tier0/utlsymbol.h:36 */
	void CUtlSymbol(CUtlSymbol* , UtlSymId_t);
	/* ../../public/tier0/utlsymbol.h:37 */
	void CUtlSymbol(CUtlSymbol* , const char* );
	/* ../../public/tier0/utlsymbol.h:38 */
	void CUtlSymbol(CUtlSymbol* , const char* , int);
	/* ../../public/tier0/utlsymbol.h:39 */
	void CUtlSymbol(CUtlSymbol* , const CUtlSymbol& );
	/* ../../public/tier0/utlsymbol.h:42 */
	CUtlSymbol& operator=(CUtlSymbol* , const CUtlSymbol& );
	/* ../../public/tier0/utlsymbol.h:45 */
	bool operator==(const CUtlSymbol* , const CUtlSymbol& );
	/* ../../public/tier0/utlsymbol.h:46 */
	bool operator==(const CUtlSymbol* , UtlSymId_t);
	/* ../../public/tier0/utlsymbol.h:47 */
	bool operator==(const CUtlSymbol* , const char* );
	/* ../../public/tier0/utlsymbol.h:50 */
	bool IsValid(const CUtlSymbol* );
	/* ../../public/tier0/utlsymbol.h:53 */
	UtlSymId_t operator UtlSymId_t(const CUtlSymbol* );
	/* ../../public/tier0/utlsymbol.h:56 */
	const char* String(const CUtlSymbol* );
	/* ../../public/tier0/utlsymbol.h:59 */
	void DisableStaticSymbolTable(void);
	/* ../../public/tier0/utlsymbol.h:60 */
	void SetStaticSymbolTablePageSize(uint);
	/* ../../public/tier0/utlsymbol.h:63 */
	CUtlSymbol Find(const char* );
protected:
	UtlSymId_t m_Id; /* 0 2 */
	/* ../../public/tier0/utlsymbol.h:69 */
	void Initialize(void);
	/* ../../public/tier0/utlsymbol.h:72 */
	CUtlSymbolTableMT* CurrTable(void);
	static class CUtlSymbolTableMT * s_pSymbolTable; /* 0 0 */
	static bool s_bAllowStaticSymbolTable; /* 0 0 */
	void CUtlSymbol(class CUtlSymbol *); /* linkage=_ZN10CUtlSymbolC4Ev */
	void CUtlSymbol(class CUtlSymbol *, UtlSymId_t); /* linkage=_ZN10CUtlSymbolC4Et */
	void CUtlSymbol(class CUtlSymbol *, const char  *); /* linkage=_ZN10CUtlSymbolC4EPKc */
	void CUtlSymbol(class CUtlSymbol *, const char  *, int); /* linkage=_ZN10CUtlSymbolC4EPKci */
	void CUtlSymbol(class CUtlSymbol *, const class CUtlSymbol  &); /* linkage=_ZN10CUtlSymbolC4ERKS_ */
	class CUtlSymbol & operator=(class CUtlSymbol *, const class CUtlSymbol  &); /* linkage=_ZN10CUtlSymbolaSERKS_ */
	bool operator==(const class CUtlSymbol  *, const class CUtlSymbol  &); /* linkage=_ZNK10CUtlSymboleqERKS_ */
	bool operator==(const class CUtlSymbol  *, UtlSymId_t); /* linkage=_ZNK10CUtlSymboleqEt */
	bool operator==(const class CUtlSymbol  *, const char  *); /* linkage=_ZNK10CUtlSymboleqEPKc */
	bool IsValid(const class CUtlSymbol  *); /* linkage=_ZNK10CUtlSymbol7IsValidEv */
	UtlSymId_t operator UtlSymId_t(const class CUtlSymbol  *); /* linkage=_ZNK10CUtlSymbolcvtEv */
	const char  * String(const class CUtlSymbol  *); /* linkage=_ZNK10CUtlSymbol6StringEv */
	void DisableStaticSymbolTable(void); /* linkage=_ZN10CUtlSymbol24DisableStaticSymbolTableEv */
	void SetStaticSymbolTablePageSize(uint); /* linkage=_ZN10CUtlSymbol28SetStaticSymbolTablePageSizeEj */
	class CUtlSymbol Find(const char  *); /* linkage=_ZN10CUtlSymbol4FindEPKc */
	/* <451ea29> tier0_perproject/utlsymbol.cpp:32 */
	void Initialize(void); /* linkage=_ZN10CUtlSymbol10InitializeEv */
	/* <451ea5b> tier0_perproject/utlsymbol.cpp:63 */
	class CUtlSymbolTableMT * CurrTable(void); /* linkage=_ZN10CUtlSymbol9CurrTableEv */
};

// <04D7CB09> ../public/tier0/utlsymbol.h:35
void CUtlSymbol::CUtlSymbol()
{
} /* size: 0 */

// <04D7CAF0> ../public/tier0/utlsymbol.h:35
inline void CUtlSymbol::CUtlSymbol()
{
} /* size: 0 */

// <06971B1A> ../public/tier0/utlsymbol.h:36
void CUtlSymbol::CUtlSymbol(UtlSymId_t id)
{
} /* size: 0 */

// <06971AF6> ../public/tier0/utlsymbol.h:36
inline void CUtlSymbol::CUtlSymbol(UtlSymId_t id)
{
} /* size: 0 */

// <0015147F> ../public/tier0/utlsymbol.h:37
void CUtlSymbol::CUtlSymbol(const char* pStr)
{
} /* size: 0 */

// <04D7CAD4> ../public/tier0/utlsymbol.h:39
void CUtlSymbol::CUtlSymbol(const CUtlSymbol& sym)
{
} /* size: 0 */

// <04D7CAAF> ../public/tier0/utlsymbol.h:39
inline void CUtlSymbol::CUtlSymbol(const CUtlSymbol& sym)
{
} /* size: 0 */

// <04D7CA8A> ../public/tier0/utlsymbol.h:42
inline void CUtlSymbol::operator=(const CUtlSymbol& src)
{
} /* size: 0 */

// <0007154C> ../public/tier0/utlsymbol.h:45
inline void CUtlSymbol::operator==(const CUtlSymbol& src)
{
} /* size: 0 */

// <02550C3A> ../public/tier0/utlsymbol.h:46
inline void CUtlSymbol::operator==(UtlSymId_t id)
{
} /* size: 0 */

// <067E089B> ../public/tier0/utlsymbol.h:50
inline void CUtlSymbol::IsValid()
{
} /* size: 0 */

// <067E0882> ../public/tier0/utlsymbol.h:53
inline void operator CUtlSymbol::UtlSymId_t()
{
} /* size: 0 */

