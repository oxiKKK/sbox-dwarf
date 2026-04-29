
//
// tier0_perproject/convarref.cpp
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
//	functions: 28
//	class: 1
//

// <04444D18> tier0_perproject/convarref.cpp:15
void CPlaceholderConVar::~CPlaceholderConVar()
{
} /* size: 29 */

// <04444C8C> tier0_perproject/convarref.cpp:15
// function call: 1
void CPlaceholderConVar::~CPlaceholderConVar()
{
	CPlaceholderConVar::~CPlaceholderConVar(); // 15
} /* size: 56, inline expansions: 1 (29 bytes) */

// <04444C70> tier0_perproject/convarref.cpp:15
inline void CPlaceholderConVar::~CPlaceholderConVar()
{
} /* size: 0 */

// <04444172> tier0_perproject/convarref.cpp:15
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 144
class CPlaceholderConVar : public ConVar {
public:
	/* class ConVar <ancestor>; */ /* 0 0 */
	void CPlaceholderConVar(CPlaceholderConVar* , CPlaceholderConVar& );
	void CPlaceholderConVar(CPlaceholderConVar* , const CPlaceholderConVar& );
	/* tier0_perproject/convarref.cpp:18 */
	void CPlaceholderConVar(CPlaceholderConVar* , const char* );
	/* tier0_perproject/convarref.cpp:25 */
	virtual void SetValue(CPlaceholderConVar* , const char* );
	/* tier0_perproject/convarref.cpp:26 */
	virtual void SetValue(CPlaceholderConVar* , float);
	/* tier0_perproject/convarref.cpp:27 */
	virtual void SetValue(CPlaceholderConVar* , int);
	/* tier0_perproject/convarref.cpp:28 */
	virtual const char* GetName(const CPlaceholderConVar* );
	/* tier0_perproject/convarref.cpp:29 */
	virtual bool IsFlagSet(const CPlaceholderConVar* , ConVarFlags_t);
	virtual void ~CPlaceholderConVar(CPlaceholderConVar* );
	void CPlaceholderConVar(class CPlaceholderConVar *, class CPlaceholderConVar &); /* linkage=_ZN18CPlaceholderConVarC4EOS_ */
	void CPlaceholderConVar(class CPlaceholderConVar *, const class CPlaceholderConVar  &); /* linkage=_ZN18CPlaceholderConVarC4ERKS_ */
	void CPlaceholderConVar(class CPlaceholderConVar *, const char  *); /* linkage=_ZN18CPlaceholderConVarC4EPKc */
	/* <4445229> tier0_perproject/convarref.cpp:25 */
	virtual void SetValue(class CPlaceholderConVar *, const char  *); /* linkage=_ZN18CPlaceholderConVar8SetValueEPKc */
	/* <4445259> tier0_perproject/convarref.cpp:26 */
	virtual void SetValue(class CPlaceholderConVar *, float); /* linkage=_ZN18CPlaceholderConVar8SetValueEf */
	/* <4445289> tier0_perproject/convarref.cpp:27 */
	virtual void SetValue(class CPlaceholderConVar *, int); /* linkage=_ZN18CPlaceholderConVar8SetValueEi */
	/* <44452b9> tier0_perproject/convarref.cpp:28 */
	virtual const char  * GetName(const class CPlaceholderConVar  *); /* linkage=_ZNK18CPlaceholderConVar7GetNameEv */
	/* <44452e2> tier0_perproject/convarref.cpp:29 */
	virtual bool IsFlagSet(const class CPlaceholderConVar  *, enum ConVarFlags_t); /* linkage=_ZNK18CPlaceholderConVar9IsFlagSetE13ConVarFlags_t */
	virtual void ~CPlaceholderConVar(class CPlaceholderConVar *); /* linkage=_ZN18CPlaceholderConVarD4Ev */
};

// <04444E33> tier0_perproject/convarref.cpp:18
void CPlaceholderConVar::CPlaceholderConVar(const char* pName)
{
} /* size: 0 */

// <04444E0E> tier0_perproject/convarref.cpp:18
inline void CPlaceholderConVar::CPlaceholderConVar(const char* pName)
{
} /* size: 0 */

// <04445229> tier0_perproject/convarref.cpp:25
void CPlaceholderConVar::SetValue(const char* pValue)
{
} /* size: 5 */

// <04444DE9> tier0_perproject/convarref.cpp:25
inline void CPlaceholderConVar::SetValue(const char* pValue)
{
} /* size: 0 */

// <04445259> tier0_perproject/convarref.cpp:26
void CPlaceholderConVar::SetValue(float flValue)
{
} /* size: 5 */

// <04444DC4> tier0_perproject/convarref.cpp:26
inline void CPlaceholderConVar::SetValue(float flValue)
{
} /* size: 0 */

// <04445289> tier0_perproject/convarref.cpp:27
void CPlaceholderConVar::SetValue(int nValue)
{
} /* size: 5 */

// <04444D9F> tier0_perproject/convarref.cpp:27
inline void CPlaceholderConVar::SetValue(int nValue)
{
} /* size: 0 */

// <044452B9> tier0_perproject/convarref.cpp:28
void CPlaceholderConVar::GetName()
{
} /* size: 9 */

// <04444D86> tier0_perproject/convarref.cpp:28
inline void CPlaceholderConVar::GetName()
{
} /* size: 0 */

// <044452E2> tier0_perproject/convarref.cpp:29
void CPlaceholderConVar::IsFlagSet(ConVarFlags_t nFlags)
{
} /* size: 7 */

// <04444D61> tier0_perproject/convarref.cpp:29
inline void CPlaceholderConVar::IsFlagSet(ConVarFlags_t nFlags)
{
} /* size: 0 */

// <04445312> tier0_perproject/convarref.cpp:32
// function calls: 10
ConVar* GetUnconnectedConVar(void)
{
	ConCommandBase::ConCommandBase(); // 302
	IConVar::IConVar(); // 302
	CUtlVectorBase<void (::ResetDbgInfo()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 530
	CUtlMemory<void (::ValidateGrowSize()(IConVar*, char const*, float), int>* this); // 475
	CUtlMemory<void (::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<void (::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<void (::CUtlVector()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 302
	ConVar::ConVar(
		const char* pName,
		const char* pDefaultValue,
		int64 flags);  // 19
	CPlaceholderConVar::CPlaceholderConVar(
				const char* pName);  // 34
	GetUnconnectedConVar(void); // 32
} /* size: 309, inline expansions: 10 (721 bytes) */

// <04444C48> tier0_perproject/convarref.cpp:32
// variable: 1
ConVar* GetUnconnectedConVar(void)
{
	CPlaceholderConVar s_UnconnectedConVar; // 34
} /* size: 0, variables: 1 */

// <044455DC> tier0_perproject/convarref.cpp:38
// function calls: 10
ConVar* GetDeferredConVar(void)
{
	ConCommandBase::ConCommandBase(); // 302
	IConVar::IConVar(); // 302
	CUtlVectorBase<void (::ResetDbgInfo()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 530
	CUtlMemory<void (::ValidateGrowSize()(IConVar*, char const*, float), int>* this); // 475
	CUtlMemory<void (::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<void (::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<void (::CUtlVector()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 302
	ConVar::ConVar(
		const char* pName,
		const char* pDefaultValue,
		int64 flags);  // 19
	CPlaceholderConVar::CPlaceholderConVar(
				const char* pName);  // 40
	GetDeferredConVar(void); // 38
} /* size: 309, inline expansions: 10 (721 bytes) */

// <04444C20> tier0_perproject/convarref.cpp:38
// variable: 1
ConVar* GetDeferredConVar(void)
{
	CPlaceholderConVar s_DeferredConVar; // 40
} /* size: 0, variables: 1 */

// <04444BBE> tier0_perproject/convarref.cpp:44
void ConVarRef::ConVarRef(const char* pName)
{
} /* size: 11 */

// <04444B22> tier0_perproject/convarref.cpp:49
void ConVarRef::ConVarRef(const char* pName, bool bIgnoreMissing)
{
} /* size: 0 */

// <04444AA5> tier0_perproject/convarref.cpp:54
void ConVarRef::~ConVarRef()
{
} /* size: 9 */

// <04444901> tier0_perproject/convarref.cpp:59
// variable: 1
// function calls: 3
void ConVarRef::Init(const char* pName, bool bIgnoreMissing)
{
	{
		int s_nWarnings; // 76
	}
	V_isempty(const char* pszString); // 68
	ConCommandBase::IsPlaceholder(); // 99
	ConVarRef::IsValid(); // 74
} /* size: 218, inline expansions: 3 (10 bytes) */

// <044448B3> tier0_perproject/convarref.cpp:87
void ConVarRef::ConVarRef(ConVar* pConVar)
{
} /* size: 0 */

// <0444483D> tier0_perproject/convarref.cpp:92
void ConVarRef::ConVarRef(IConVar* pConVar)
{
} /* size: 0 */

// <044458A6> tier0_perproject/convarref.cpp:97
// function call: 1
void ConVarRef::IsValid()
{
	ConCommandBase::IsPlaceholder(); // 99
} /* size: 0, inline expansions: 1 (0 bytes) */

// <044447F9> tier0_perproject/convarref.cpp:97
void ConVarRef::IsValid()
{
} /* size: 0 */

// <044446CD> tier0_perproject/convarref.cpp:102
// variable: 1
// function calls: 2
void ConVarRef::DoCheckAccess()
{
	{
		const char* pRefName; // 110
	}
	ConCommandBase::IsPlaceholder(); // 106
	Plat_IsInDebugSession(void); // 119
} /* size: 115, inline expansions: 2 (7 bytes) */

