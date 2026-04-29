
//
// public/tier0/stackannotations.h
//
//	referenced by: libengine2.so
//				   libtier0.so
//
//	functions: 30
//	classes: 9
//

// <00485A6F> ../public/tier0/stackannotations.h:23
// member functions: 8
// member variables: 3
// vtable entry: 1
// class size: 32
class IStack_Annotation {
	void IStack_Annotation(IStack_Annotation* , const IStack_Annotation& );
	int ()(void) * * _vptr.IStack_Annotation; /* 0 8 */
	/* tier0/stacktools.cpp:896 */
	void IStack_Annotation(IStack_Annotation* , const CCallStackMarkerBase& );
	/* tier0/stacktools.cpp:915 */
	virtual void ~IStack_Annotation(IStack_Annotation* );
	/* ../public/tier0/stackannotations.h:31 */
	virtual void Resolve(IStack_Annotation* , IAnnotationPackager* );
private:
	IStack_Annotation * m_pPrevAnnotation; /* 8 8 */
	CCallStackMarkerBase m_AnnotationMarker; /* 16 16 */
	void IStack_Annotation(class IStack_Annotation *, const class IStack_Annotation  &); /* linkage=_ZN17IStack_AnnotationC4ERKS_ */
	void IStack_Annotation(class IStack_Annotation *, const class CCallStackMarkerBase  &); /* linkage=_ZN17IStack_AnnotationC4ERK20CCallStackMarkerBase */
	virtual void ~IStack_Annotation(class IStack_Annotation *); /* linkage=_ZN17IStack_AnnotationD4Ev */
	virtual void Resolve(class IStack_Annotation *, class IAnnotationPackager *); /* linkage=_ZN17IStack_Annotation7ResolveEP19IAnnotationPackager */
};

// <04455FF2> ../public/tier0/stackannotations.h:28
void IStack_Annotation::IStack_Annotation(const CCallStackMarkerBase& leafMarker)
{
} /* size: 0 */

// <04455FB8> ../public/tier0/stackannotations.h:29
void IStack_Annotation::~IStack_Annotation()
{
} /* size: 0 */

// <023A5C44> ../public/tier0/stackannotations.h:56
void IterateCapturedStackAnnotations(const void* const *, int, FN_IterateStackAnnotationCallback, void *)
{
} /* size: 0 */

// <04457340> ../public/tier0/stackannotations.h:62
void CStackAnnotation_SimpleString::~CStackAnnotation_SimpleString()
{
} /* size: 19 */

// <044572B4> ../public/tier0/stackannotations.h:62
// function call: 1
void CStackAnnotation_SimpleString::~CStackAnnotation_SimpleString()
{
	CStackAnnotation_SimpleString::~CStackAnnotation_SimpleString(); // 62
} /* size: 46, inline expansions: 1 (19 bytes) */

// <04457298> ../public/tier0/stackannotations.h:62
inline void CStackAnnotation_SimpleString::~CStackAnnotation_SimpleString()
{
} /* size: 0 */

// <022487E7> ../public/tier0/stackannotations.h:62
// member functions: 8
// member variables: 2
// vtable entry: 1
// class size: 40
class CStackAnnotation_SimpleString : public IStack_Annotation {
public:
	/* class IStack_Annotation <ancestor>; */ /* 0 0 */
	/* ../public/tier0/stackannotations.h:65 */
	void CStackAnnotation_SimpleString(CStackAnnotation_SimpleString* , const char* , const CCallStackMarkerBase& );
	/* ../public/tier0/stackannotations.h:66 */
	virtual void Resolve(CStackAnnotation_SimpleString* , IAnnotationPackager* );
	const char * m_szString; /* 32 8 */
	virtual void ~CStackAnnotation_SimpleString(CStackAnnotation_SimpleString* );
	void CStackAnnotation_SimpleString(class CStackAnnotation_SimpleString *, class CStackAnnotation_SimpleString &); /* linkage=_ZN29CStackAnnotation_SimpleStringC4EOS_ */
	void CStackAnnotation_SimpleString(class CStackAnnotation_SimpleString *, const class CStackAnnotation_SimpleString  &); /* linkage=_ZN29CStackAnnotation_SimpleStringC4ERKS_ */
	void CStackAnnotation_SimpleString(class CStackAnnotation_SimpleString *, const char  *, const class CCallStackMarkerBase  &); /* linkage=_ZN29CStackAnnotation_SimpleStringC4EPKcRK20CCallStackMarkerBase */
	virtual void Resolve(class CStackAnnotation_SimpleString *, class IAnnotationPackager *); /* linkage=_ZN29CStackAnnotation_SimpleString7ResolveEP19IAnnotationPackager */
	virtual void ~CStackAnnotation_SimpleString(class CStackAnnotation_SimpleString *); /* linkage=_ZN29CStackAnnotation_SimpleStringD4Ev */
};

// <04453335> ../public/tier0/stackannotations.h:62
// member functions: 10
// member variables: 2
// vtable entry: 1
// class size: 40
class CStackAnnotation_SimpleString : public IStack_Annotation {
public:
	/* class IStack_Annotation <ancestor>; */ /* 0 0 */
	void CStackAnnotation_SimpleString(CStackAnnotation_SimpleString* , CStackAnnotation_SimpleString& );
	void CStackAnnotation_SimpleString(CStackAnnotation_SimpleString* , const CStackAnnotation_SimpleString& );
	/* ../public/tier0/stackannotations.h:65 */
	void CStackAnnotation_SimpleString(CStackAnnotation_SimpleString* , const char* , const CCallStackMarkerBase& );
	/* ../public/tier0/stackannotations.h:66 */
	virtual void Resolve(CStackAnnotation_SimpleString* , IAnnotationPackager* );
	const char * m_szString; /* 32 8 */
	virtual void ~CStackAnnotation_SimpleString(CStackAnnotation_SimpleString* );
	void CStackAnnotation_SimpleString(class CStackAnnotation_SimpleString *, class CStackAnnotation_SimpleString &); /* linkage=_ZN29CStackAnnotation_SimpleStringC4EOS_ */
	void CStackAnnotation_SimpleString(class CStackAnnotation_SimpleString *, const class CStackAnnotation_SimpleString  &); /* linkage=_ZN29CStackAnnotation_SimpleStringC4ERKS_ */
	void CStackAnnotation_SimpleString(class CStackAnnotation_SimpleString *, const char  *, const class CCallStackMarkerBase  &); /* linkage=_ZN29CStackAnnotation_SimpleStringC4EPKcRK20CCallStackMarkerBase */
	virtual void Resolve(class CStackAnnotation_SimpleString *, class IAnnotationPackager *); /* linkage=_ZN29CStackAnnotation_SimpleString7ResolveEP19IAnnotationPackager */
	virtual void ~CStackAnnotation_SimpleString(class CStackAnnotation_SimpleString *); /* linkage=_ZN29CStackAnnotation_SimpleStringD4Ev */
};

// <00489902> ../public/tier0/stackannotations.h:62
// member functions: 8
// member variables: 2
// vtable entry: 1
// class size: 40
class CStackAnnotation_SimpleString : public IStack_Annotation {
public:
	/* class IStack_Annotation <ancestor>; */ /* 0 32 */
	/* ../public/tier0/stackannotations.h:65 */
	void CStackAnnotation_SimpleString(CStackAnnotation_SimpleString* , const char* , const CCallStackMarkerBase& );
	/* ../public/tier0/stackannotations.h:66 */
	virtual void Resolve(CStackAnnotation_SimpleString* , IAnnotationPackager* );
	const char * m_szString; /* 32 8 */
	virtual void ~CStackAnnotation_SimpleString(CStackAnnotation_SimpleString* );
	void CStackAnnotation_SimpleString(class CStackAnnotation_SimpleString *, class CStackAnnotation_SimpleString &); /* linkage=_ZN29CStackAnnotation_SimpleStringC4EOS_ */
	void CStackAnnotation_SimpleString(class CStackAnnotation_SimpleString *, const class CStackAnnotation_SimpleString  &); /* linkage=_ZN29CStackAnnotation_SimpleStringC4ERKS_ */
	void CStackAnnotation_SimpleString(class CStackAnnotation_SimpleString *, const char  *, const class CCallStackMarkerBase  &); /* linkage=_ZN29CStackAnnotation_SimpleStringC4EPKcRK20CCallStackMarkerBase */
	virtual void Resolve(class CStackAnnotation_SimpleString *, class IAnnotationPackager *); /* linkage=_ZN29CStackAnnotation_SimpleString7ResolveEP19IAnnotationPackager */
	virtual void ~CStackAnnotation_SimpleString(class CStackAnnotation_SimpleString *); /* linkage=_ZN29CStackAnnotation_SimpleStringD4Ev */
};

// <0445B3A2> ../public/tier0/stackannotations.h:65
void CStackAnnotation_SimpleString::CStackAnnotation_SimpleString(const char* szString, const CCallStackMarkerBase& marker)
{
} /* size: 0 */

// <0445B371> ../public/tier0/stackannotations.h:65
inline void CStackAnnotation_SimpleString::CStackAnnotation_SimpleString(const char* szString, const CCallStackMarkerBase& marker)
{
} /* size: 0 */

// <0445B315> ../public/tier0/stackannotations.h:66
void CStackAnnotation_SimpleString::Resolve(IAnnotationPackager* pPackager)
{
} /* size: 22 */

// <02323DAD> ../public/tier0/stackannotations.h:90
// member functions: 2
// member variable: 1
// class size: 8
class CStackAnnotationVariableHandler<char*> {
	/* ../public/tier0/stackannotations.h:94 */
	void CStackAnnotationVariableHandler(CStackAnnotationVariableHandler<char*>* , const char* );
	/* ../public/tier0/stackannotations.h:93 */
	typedef const const char * ConstructorVarType;
	/* ../public/tier0/stackannotations.h:95 */
	void ResolveVar(const CStackAnnotationVariableHandler<char*>* , IAnnotationPackager* , const char* );
	const const char * m_VarStorage; /* 0 8 */
};

// <023F8A39> ../public/tier0/stackannotations.h:94
void CStackAnnotationVariableHandler<char::CStackAnnotationVariableHandler(ConstructorVarType var)
{
} /* size: 0 */

// <023F8A14> ../public/tier0/stackannotations.h:94
inline void CStackAnnotationVariableHandler<char::CStackAnnotationVariableHandler(ConstructorVarType var)
{
} /* size: 0 */

// <023F89E3> ../public/tier0/stackannotations.h:95
inline void CStackAnnotationVariableHandler<char::ResolveVar(IAnnotationPackager* pPackager, const char* pVarName)
{
} /* size: 0 */

// <023F89C7> ../public/tier0/stackannotations.h:102
void CStackAnnotationVariableHandler<char const::CStackAnnotationVariableHandler(ConstructorVarType var)
{
} /* size: 0 */

// <023F89A2> ../public/tier0/stackannotations.h:102
inline void CStackAnnotationVariableHandler<char const::CStackAnnotationVariableHandler(ConstructorVarType var)
{
} /* size: 0 */

// <02323E41> ../public/tier0/stackannotations.h:102
// member function: 1
// member variable: 1
// class size: 8
class CStackAnnotationVariableHandler<char const*> : public CStackAnnotationVariableHandler<char*> {
public:
	/* class CStackAnnotationVariableHandler<char*> <ancestor>; */ /* 0 8 */
	/* ../public/tier0/stackannotations.h:102 */
	void CStackAnnotationVariableHandler(CStackAnnotationVariableHandler<char const*>* , const char* );
};

// <023EE85B> ../public/tier0/stackannotations.h:596
void CStackAnnotation<char const::~CStackAnnotation()
{
} /* size: 19 */

// <023EE7CB> ../public/tier0/stackannotations.h:596
// function call: 1
void CStackAnnotation<char const::~CStackAnnotation()
{
	CStackAnnotation<char const::~CStackAnnotation(); // 596
} /* size: 46, inline expansions: 1 (19 bytes) */

// <023EE7AE> ../public/tier0/stackannotations.h:596
inline void CStackAnnotation<char const::~CStackAnnotation()
{
} /* size: 0 */

// <023E314E> ../public/tier0/stackannotations.h:596
// member functions: 5
// member variables: 5
// vtable entry: 1
// class size: 64
class CStackAnnotation<char const*, char const*, void, void, void, void, void, void, void> : public IStack_Annotation {
public:
	/* class IStack_Annotation <ancestor>; */ /* 0 0 */
	void CStackAnnotation(CStackAnnotation<char const*, char const*, void, void, void, void, void, void, void>* , CStackAnnotation<char const*, char const*, void, void, void, void, void, void, void>& );
	void CStackAnnotation(CStackAnnotation<char const*, char const*, void, void, void, void, void, void, void>* , const CStackAnnotation<char const*, char const*, void, void, void, void, void, void, void>& );
	/* ../public/tier0/stackannotations.h:599 */
	void CStackAnnotation(CStackAnnotation<char const*, char const*, void, void, void, void, void, void, void>* , const char* , const char* , const char* , const char* , const CCallStackMarkerBase& );
	/* ../public/tier0/stackannotations.h:606 */
	virtual void Resolve(CStackAnnotation<char const*, char const*, void, void, void, void, void, void, void>* , IAnnotationPackager* );
	const char * m_pVarDescA; /* 32 8 */
	CStackAnnotationVariableHandler<char const*> m_VarA; /* 40 8 */
	const char * m_pVarDescB; /* 48 8 */
	CStackAnnotationVariableHandler<char const*> m_VarB; /* 56 8 */
	virtual void ~CStackAnnotation(CStackAnnotation<char const*, char const*, void, void, void, void, void, void, void>* );
};

// <023EA8BD> ../public/tier0/stackannotations.h:599
void CStackAnnotation<char const::CStackAnnotation(const char* pVarDescA, ConstructorVarType VarA, const char* pVarDescB, ConstructorVarType VarB, const CCallStackMarkerBase& marker)
{
} /* size: 0 */

// <023EA863> ../public/tier0/stackannotations.h:599
inline void CStackAnnotation<char const::CStackAnnotation(const char* pVarDescA, ConstructorVarType VarA, const char* pVarDescB, ConstructorVarType VarB, const CCallStackMarkerBase& marker)
{
} /* size: 0 */

// <023E4A34> ../public/tier0/stackannotations.h:606
// function calls: 2
void CStackAnnotation<char const::Resolve(IAnnotationPackager* pPackager)
{
	CStackAnnotationVariableHandler<char::ResolveVar(
			IAnnotationPackager* pPackager,
			const char* pVarName);  // 608
	CStackAnnotationVariableHandler<char::ResolveVar(
			IAnnotationPackager* pPackager,
			const char* pVarName);  // 609
} /* size: 113, inline expansions: 2 (67 bytes) */

// <0236C158> ../public/tier0/stackannotations.h:620
void CStackAnnotation<const ResourceNameInfo_t::~CStackAnnotation()
{
} /* size: 19 */

// <0236C0C9> ../public/tier0/stackannotations.h:620
// function call: 1
void CStackAnnotation<const ResourceNameInfo_t::~CStackAnnotation()
{
	CStackAnnotation<const ResourceNameInfo_t::~CStackAnnotation(); // 620
} /* size: 46, inline expansions: 1 (19 bytes) */

// <0236C0AC> ../public/tier0/stackannotations.h:620
inline void CStackAnnotation<const ResourceNameInfo_t::~CStackAnnotation()
{
} /* size: 0 */

// <0236876C> ../public/tier0/stackannotations.h:620
// function call: 1
void CStackAnnotation<char const::~CStackAnnotation()
{
	CStackAnnotation<char const::~CStackAnnotation(); // 620
} /* size: 46, inline expansions: 1 (19 bytes) */

// <022952EB> ../public/tier0/stackannotations.h:620
// member functions: 10
// member variables: 3
// vtable entry: 1
// class size: 48
class CStackAnnotation<const ResourceNameInfo_t*, void, void, void, void, void, void, void, void> : public IStack_Annotation {
public:
	/* class IStack_Annotation <ancestor>; */ /* 0 0 */
	void CStackAnnotation(CStackAnnotation<const ResourceNameInfo_t*, void, void, void, void, void, void, void, void>* , CStackAnnotation<const ResourceNameInfo_t*, void, void, void, void, void, void, void, void>& );
	void CStackAnnotation(CStackAnnotation<const ResourceNameInfo_t*, void, void, void, void, void, void, void, void>* , const CStackAnnotation<const ResourceNameInfo_t*, void, void, void, void, void, void, void, void>& );
	/* ../public/tier0/stackannotations.h:623 */
	void CStackAnnotation(CStackAnnotation<const ResourceNameInfo_t*, void, void, void, void, void, void, void, void>* , const char* , ResourceNameHandle_t, const CCallStackMarkerBase& );
	/* ../public/tier0/stackannotations.h:628 */
	virtual void Resolve(CStackAnnotation<const ResourceNameInfo_t*, void, void, void, void, void, void, void, void>* , IAnnotationPackager* );
	const char * m_pVarDescA; /* 32 8 */
	CStackAnnotationVariableHandler<const ResourceNameInfo_t*> m_VarA; /* 40 8 */
	virtual void ~CStackAnnotation(CStackAnnotation<const ResourceNameInfo_t*, void, void, void, void, void, void, void, void>* );
	void CStackAnnotation(class CStackAnnotation<const ResourceNameInfo_t*, void, void, void, void, void, void, void, void> *, class CStackAnnotation<const ResourceNameInfo_t*, void, void, void, void, void, void, void, void> &); /* linkage=_ZN16CStackAnnotationIPK18ResourceNameInfo_tvvvvvvvvEC4EOS3_ */
	void CStackAnnotation(class CStackAnnotation<const ResourceNameInfo_t*, void, void, void, void, void, void, void, void> *, const class CStackAnnotation<const ResourceNameInfo_t*, void, void, void, void, void, void, void, void>  &); /* linkage=_ZN16CStackAnnotationIPK18ResourceNameInfo_tvvvvvvvvEC4ERKS3_ */
	void CStackAnnotation(class CStackAnnotation<const ResourceNameInfo_t*, void, void, void, void, void, void, void, void> *, const char  *, ResourceNameHandle_t, const class CCallStackMarkerBase  &); /* linkage=_ZN16CStackAnnotationIPK18ResourceNameInfo_tvvvvvvvvEC4EPKcS2_RK20CCallStackMarkerBase */
	virtual void Resolve(class CStackAnnotation<const ResourceNameInfo_t*, void, void, void, void, void, void, void, void> *, class IAnnotationPackager *); /* linkage=_ZN16CStackAnnotationIPK18ResourceNameInfo_tvvvvvvvvE7ResolveEP19IAnnotationPackager */
	virtual void ~CStackAnnotation(class CStackAnnotation<const ResourceNameInfo_t*, void, void, void, void, void, void, void, void> *); /* linkage=_ZN16CStackAnnotationIPK18ResourceNameInfo_tvvvvvvvvED4Ev */
};

// <02342279> ../public/tier0/stackannotations.h:620
// member functions: 5
// member variables: 3
// vtable entry: 1
// class size: 48
class CStackAnnotation<char const*, void, void, void, void, void, void, void, void> : public IStack_Annotation {
public:
	/* class IStack_Annotation <ancestor>; */ /* 0 0 */
	void CStackAnnotation(CStackAnnotation<char const*, void, void, void, void, void, void, void, void>* , CStackAnnotation<char const*, void, void, void, void, void, void, void, void>& );
	void CStackAnnotation(CStackAnnotation<char const*, void, void, void, void, void, void, void, void>* , const CStackAnnotation<char const*, void, void, void, void, void, void, void, void>& );
	/* ../public/tier0/stackannotations.h:623 */
	void CStackAnnotation(CStackAnnotation<char const*, void, void, void, void, void, void, void, void>* , const char* , const char* , const CCallStackMarkerBase& );
	/* ../public/tier0/stackannotations.h:628 */
	virtual void Resolve(CStackAnnotation<char const*, void, void, void, void, void, void, void, void>* , IAnnotationPackager* );
	const char * m_pVarDescA; /* 32 8 */
	CStackAnnotationVariableHandler<char const*> m_VarA; /* 40 8 */
	virtual void ~CStackAnnotation(CStackAnnotation<char const*, void, void, void, void, void, void, void, void>* );
};

// <023574EF> ../public/tier0/stackannotations.h:623
void CStackAnnotation<const ResourceNameInfo_t::CStackAnnotation(const char* pVarDescA, ConstructorVarType VarA, const CCallStackMarkerBase& marker)
{
} /* size: 0 */

// <023574AF> ../public/tier0/stackannotations.h:623
inline void CStackAnnotation<const ResourceNameInfo_t::CStackAnnotation(const char* pVarDescA, ConstructorVarType VarA, const CCallStackMarkerBase& marker)
{
} /* size: 0 */

// <02356E24> ../public/tier0/stackannotations.h:623
void CStackAnnotation<char const::CStackAnnotation(const char* pVarDescA, ConstructorVarType VarA, const CCallStackMarkerBase& marker)
{
} /* size: 0 */

// <02356DE4> ../public/tier0/stackannotations.h:623
inline void CStackAnnotation<char const::CStackAnnotation(const char* pVarDescA, ConstructorVarType VarA, const CCallStackMarkerBase& marker)
{
} /* size: 0 */

// <0234779D> ../public/tier0/stackannotations.h:628
// function call: 1
void CStackAnnotation<char const::Resolve(IAnnotationPackager* pPackager)
{
	CStackAnnotationVariableHandler<char::ResolveVar(
			IAnnotationPackager* pPackager,
			const char* pVarName);  // 630
} /* size: 51, inline expansions: 1 (36 bytes) */

// <02347463> ../public/tier0/stackannotations.h:628
// function calls: 12
void CStackAnnotation<const ResourceNameInfo_t::Resolve(IAnnotationPackager* pPackager)
{
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 115
	CUtlSymbolLarge::String(); // 148
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 148
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CBufferString* pOutBuffer,
			bool bAppend);  // 116
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 118
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 119
	CStackAnnotationVariableHandler<const ResourceNameInfo_t::ResolveVar(
			IAnnotationPackager* pPackager,
			const char* pVarName);  // 630
} /* size: 270, inline expansions: 12 (490 bytes) */

