
//
// tier0_perproject/concommandbase.cpp
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
//
//	functions: 31
//	class: 1
//

// <04428EDD> tier0_perproject/concommandbase.cpp:23
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class CDefaultAccessor : public IConCommandBaseAccessor {
public:
	/* class IConCommandBaseAccessor <ancestor>; */ /* 0 8 */
	void ~CDefaultAccessor(CDefaultAccessor* );
	void CDefaultAccessor(CDefaultAccessor* , CDefaultAccessor& );
	void CDefaultAccessor(CDefaultAccessor* , const CDefaultAccessor& );
	void CDefaultAccessor(CDefaultAccessor* );
	/* tier0_perproject/concommandbase.cpp:26 */
	virtual bool RegisterConCommandBase(CDefaultAccessor* , ConCommandBase* );
	void ~CDefaultAccessor(class CDefaultAccessor *); /* linkage=_ZN16CDefaultAccessorD4Ev */
	void CDefaultAccessor(class CDefaultAccessor *, class CDefaultAccessor &); /* linkage=_ZN16CDefaultAccessorC4EOS_ */
	void CDefaultAccessor(class CDefaultAccessor *, const class CDefaultAccessor  &); /* linkage=_ZN16CDefaultAccessorC4ERKS_ */
	void CDefaultAccessor(class CDefaultAccessor *); /* linkage=_ZN16CDefaultAccessorC4Ev */
	/* <442a285> tier0_perproject/concommandbase.cpp:26 */
	virtual bool RegisterConCommandBase(class CDefaultAccessor *, class ConCommandBase *); /* linkage=_ZN16CDefaultAccessor22RegisterConCommandBaseEP14ConCommandBase */
};

// <0442A285> tier0_perproject/concommandbase.cpp:26
void CDefaultAccessor::RegisterConCommandBase(ConCommandBase* pVar)
{
} /* size: 31 */

// <04429F10> tier0_perproject/concommandbase.cpp:26
inline void CDefaultAccessor::RegisterConCommandBase(ConCommandBase* pVar)
{
} /* size: 0 */

// <04429C1F> tier0_perproject/concommandbase.cpp:86
// function call: 1
void ConCommandBase::ConCommandBase(const char* pName, const char* pHelpString, ConVarFlags_t flags)
{
	{
	}
	ConCommandBase::Create(
		const char* pName,
		const char* pHelpString,
		ConVarFlags_t flags);  // 88
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04429BE2> tier0_perproject/concommandbase.cpp:86
void ConCommandBase::ConCommandBase(const char* pName, const char* pHelpString, ConVarFlags_t flags)
{
} /* size: 0 */

// <04429BB4> tier0_perproject/concommandbase.cpp:95
void ConCommandBase::IsCommand()
{
} /* size: 0 */

// <04429B86> tier0_perproject/concommandbase.cpp:104
void ConCommandBase::GetDLLIdentifier()
{
} /* size: 11 */

// <0442A340> tier0_perproject/concommandbase.cpp:117
void ConCommandBase::Create(const char* pName, const char* pHelpString, ConVarFlags_t flags)
{
	{
	}
} /* size: 0 */

// <04429AE9> tier0_perproject/concommandbase.cpp:117
// variables: 3
void ConCommandBase::Create(const char* pName, const char* pHelpString, ConVarFlags_t flags)
{
	const char* empty_string; // 119
	const char   __FUNCTION__; // 13213
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 124
	}
} /* size: 0, variables: 2 */

// <01BF33CA> tier0_perproject/concommandbase.cpp:117
// variables: 3
void ConCommandBase::Create(const char* pName, const char* pHelpString, ConVarFlags_t flags)
{
	const char* empty_string; // 119
	const char   __FUNCTION__; // 39795
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 124
	}
} /* size: 0, variables: 2 */

// <00E2CBB2> tier0_perproject/concommandbase.cpp:117
// variables: 3
void ConCommandBase::Create(const char* pName, const char* pHelpString, ConVarFlags_t flags)
{
	const char* empty_string; // 119
	const char   __FUNCTION__; // 19225
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 124
	}
} /* size: 0, variables: 2 */

// <0061FF78> tier0_perproject/concommandbase.cpp:117
// variables: 3
void ConCommandBase::Create(const char* pName, const char* pHelpString, ConVarFlags_t flags)
{
	const char* empty_string; // 119
	const char   __FUNCTION__; // 16004
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 124
	}
} /* size: 0, variables: 2 */

// <005A54EF> tier0_perproject/concommandbase.cpp:117
// variables: 3
void ConCommandBase::Create(const char* pName, const char* pHelpString, ConVarFlags_t flags)
{
	const char* empty_string; // 119
	const char   __FUNCTION__; // 64008
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 124
	}
} /* size: 0, variables: 2 */

// <00087A2C> tier0_perproject/concommandbase.cpp:117
// variables: 3
void ConCommandBase::Create(const char* pName, const char* pHelpString, ConVarFlags_t flags)
{
	const char* empty_string; // 119
	const char   __FUNCTION__; // 53749
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 124
	}
} /* size: 0, variables: 2 */

// <001752EF> tier0_perproject/concommandbase.cpp:117
// variables: 3
void ConCommandBase::Create(const char* pName, const char* pHelpString, ConVarFlags_t flags)
{
	const char* empty_string; // 119
	const char   __FUNCTION__; // 39856
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 124
	}
} /* size: 0, variables: 2 */

// <04429A67> tier0_perproject/concommandbase.cpp:146
// function call: 1
void ConCommandBase::Init()
{
	CDefaultAccessor::RegisterConCommandBase(
				ConCommandBase* pVar);  // 150
} /* size: 66, inline expansions: 1 (19 bytes) */

// <04429A21> tier0_perproject/concommandbase.cpp:154
void ConCommandBase::Shutdown()
{
} /* size: 33 */

// <044299F3> tier0_perproject/concommandbase.cpp:167
void ConCommandBase::GetName()
{
} /* size: 9 */

// <044299B1> tier0_perproject/concommandbase.cpp:178
void ConCommandBase::IsFlagSet(ConVarFlags_t flag)
{
} /* size: 12 */

// <0442A2D4> tier0_perproject/concommandbase.cpp:187
// function call: 1
void ConCommandBase::AddFlags(ConVarFlags_t flags)
{
	operator|=(ConVarFlags_t& a,
			ConVarFlags_t b);  // 189
} /* size: 9, inline expansions: 1 (4 bytes) */

// <0442998C> tier0_perproject/concommandbase.cpp:187
void ConCommandBase::AddFlags(ConVarFlags_t flags)
{
} /* size: 0 */

// <044298F3> tier0_perproject/concommandbase.cpp:195
// function calls: 2
void ConCommandBase::RemoveFlags(ConVarFlags_t flags)
{
	operator~(ConVarFlags_t a); // 197
	operator&=(ConVarFlags_t& a,
			ConVarFlags_t b);  // 197
} /* size: 12, inline expansions: 2 (7 bytes) */

// <044298C5> tier0_perproject/concommandbase.cpp:201
void ConCommandBase::GetFlags()
{
} /* size: 9 */

// <0442A3A1> tier0_perproject/concommandbase.cpp:210
void ConCommandBase::GetNext()
{
} /* size: 0 */

// <0442974B> tier0_perproject/concommandbase.cpp:226
// variables: 2
// function calls: 2
void ConCommandBase::CopyString(const char* from)
{
	int len; // 228
	char* to; // 229
	V_strlen(const char* str); // 231
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 240
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <0442971D> tier0_perproject/concommandbase.cpp:249
void ConCommandBase::GetHelpText()
{
} /* size: 9 */

// <044296EF> tier0_perproject/concommandbase.cpp:258
void ConCommandBase::IsRegistered()
{
} /* size: 9 */

// <04429591> tier0_perproject/concommandbase.cpp:270
// variable: 1
// function calls: 3
void AddDeferredConVarRef(ConVarRef* pVar, const char* pName, bool bIgnoreMissing)
{
	CDeferredConVarRef* pRef; // 272
	CUtlString::operator=(
			const char* src);  // 273
	CUtlString::CUtlString(); // 130
	CDeferredConVarRef::CDeferredConVarRef(); // 272
} /* size: 100, variables: 1, inline expansions: 3 (30 bytes) */

// <04429449> tier0_perproject/concommandbase.cpp:282
// variables: 3
// function calls: 2
void RemoveDeferredConVarRef(ConVarRef* pVar)
{
	CDeferredConVarRef** pPrev; // 284
	CDeferredConVarRef* pRef; // 285
	{
		CDeferredConVarRef* pNext; // 288
		CUtlString::~CUtlString(); // 130
		CDeferredConVarRef::~CDeferredConVarRef(); // 291
	}
} /* size: 128, variables: 2 */

// <04429398> tier0_perproject/concommandbase.cpp:300
// variable: 1
// function calls: 2
const char* FindDeferredConVarRef(const ConVarRef* pVar)
{
	CDeferredConVarRef* pRef; // 302
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 307
} /* size: 80, variables: 1, inline expansions: 2 (50 bytes) */

// <04429371> tier0_perproject/concommandbase.cpp:316
// variable: 1
CDeferredConVarRef* DetachDeferredConVarRefList(void)
{
	CDeferredConVarRef* pList; // 318
} /* size: 0, variables: 1 */

// <04429223> tier0_perproject/concommandbase.cpp:323
// variable: 1
// function calls: 4
void InitDeferredConVarRefs(CDeferredConVarRef* pList)
{
	{
		CDeferredConVarRef* pNext; // 328
		CUtlString::Get(); // 99
		CUtlString::String(); // 331
		CUtlString::~CUtlString(); // 130
		CDeferredConVarRef::~CDeferredConVarRef(); // 333
	}
} /* size: 113 */

