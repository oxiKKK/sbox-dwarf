
//
// public/tier0/concommandbase.h
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
//	functions: 12
//	classes: 3
//

// <04428DBE> ../public/tier0/concommandbase.h:22
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class IConCommandBaseAccessor {
	void ~IConCommandBaseAccessor(IConCommandBaseAccessor* );
	void IConCommandBaseAccessor(IConCommandBaseAccessor* , IConCommandBaseAccessor& );
	void IConCommandBaseAccessor(IConCommandBaseAccessor* , const IConCommandBaseAccessor& );
	void IConCommandBaseAccessor(IConCommandBaseAccessor* );
	int ()(void) * * _vptr.IConCommandBaseAccessor; /* 0 8 */
	/* ../public/tier0/concommandbase.h:27 */
	virtual bool RegisterConCommandBase(IConCommandBaseAccessor* , ConCommandBase* );
	void ~IConCommandBaseAccessor(class IConCommandBaseAccessor *); /* linkage=_ZN23IConCommandBaseAccessorD4Ev */
	void IConCommandBaseAccessor(class IConCommandBaseAccessor *, class IConCommandBaseAccessor &); /* linkage=_ZN23IConCommandBaseAccessorC4EOS_ */
	void IConCommandBaseAccessor(class IConCommandBaseAccessor *, const class IConCommandBaseAccessor  &); /* linkage=_ZN23IConCommandBaseAccessorC4ERKS_ */
	void IConCommandBaseAccessor(class IConCommandBaseAccessor *); /* linkage=_ZN23IConCommandBaseAccessorC4Ev */
	virtual bool RegisterConCommandBase(class IConCommandBaseAccessor *, class ConCommandBase *); /* linkage=_ZN23IConCommandBaseAccessor22RegisterConCommandBaseEP14ConCommandBase */
};

// <044288AD> ../public/tier0/concommandbase.h:31
// member functions: 40
// member variables: 7
// static member variables: 2
// vtable entries: 11
// class size: 48
class ConCommandBase {
	void ConCommandBase(ConCommandBase* , const ConCommandBase& );
	int ()(void) * * _vptr.ConCommandBase; /* 0 8 */
	/* ../public/tier0/concommandbase.h:43 */
	void ConCommandBase(ConCommandBase* );
	/* tier0_perproject/concommandbase.cpp:86 */
	void ConCommandBase(ConCommandBase* , const char* , const char* , ConVarFlags_t);
	/* ../public/tier0/concommandbase.h:46 */
	virtual void ~ConCommandBase(ConCommandBase* );
	/* tier0_perproject/concommandbase.cpp:95 */
	virtual bool IsCommand(const ConCommandBase* );
	/* tier0_perproject/concommandbase.cpp:178 */
	virtual bool IsFlagSet(const ConCommandBase* , ConVarFlags_t);
	/* tier0_perproject/concommandbase.cpp:187 */
	virtual void AddFlags(ConCommandBase* , ConVarFlags_t);
	/* tier0_perproject/concommandbase.cpp:195 */
	virtual void RemoveFlags(ConCommandBase* , ConVarFlags_t);
	/* tier0_perproject/concommandbase.cpp:201 */
	virtual ConVarFlags_t GetFlags(const ConCommandBase* );
	/* tier0_perproject/concommandbase.cpp:167 */
	virtual const char* GetName(const ConCommandBase* );
	/* tier0_perproject/concommandbase.cpp:249 */
	virtual const char* GetHelpText(const ConCommandBase* );
	/* tier0_perproject/concommandbase.cpp:210 */
	const ConCommandBase* GetNext(const ConCommandBase* );
	/* tier0_perproject/concommandbase.cpp:215 */
	ConCommandBase* GetNext(ConCommandBase* );
	/* tier0_perproject/concommandbase.cpp:258 */
	virtual bool IsRegistered(const ConCommandBase* );
	/* tier0_perproject/concommandbase.cpp:104 */
	virtual CVarDLLIdentifier_t GetDLLIdentifier(const ConCommandBase* );
	/* ../public/tier0/concommandbase.h:74 */
	bool IsPlaceholder(const ConCommandBase* );
protected:
	/* tier0_perproject/concommandbase.cpp:117 */
	virtual void Create(ConCommandBase* , const char* , const char* , ConVarFlags_t);
	/* tier0_perproject/concommandbase.cpp:146 */
	virtual void Init(ConCommandBase* );
	/* tier0_perproject/concommandbase.cpp:154 */
	void Shutdown(ConCommandBase* );
	/* tier0_perproject/concommandbase.cpp:226 */
	char* CopyString(ConCommandBase* , const char* );
private:
	ConCommandBase * m_pNext; /* 8 8 */
protected:
	bool m_bRegistered; /* 16 1 */
	bool m_bPlaceholder; /* 17 1 */
private:
	const char * m_pszName; /* 24 8 */
	const char * m_pszHelpString; /* 32 8 */
	ConVarFlags_t m_nFlags; /* 40 8 */
protected:
	static class ConCommandBase * s_pConCommandBases; /* 0 0 */
	static class IConCommandBaseAccessor * s_pAccessor; /* 0 0 */
	void Shutdown(class ConCommandBase *); /* linkage=_ZN14ConCommandBase8ShutdownEv */
	virtual void Init(class ConCommandBase *); /* linkage=_ZN14ConCommandBase4InitEv */
	virtual CVarDLLIdentifier_t GetDLLIdentifier(const class ConCommandBase  *); /* linkage=_ZNK14ConCommandBase16GetDLLIdentifierEv */
	virtual bool IsRegistered(const class ConCommandBase  *); /* linkage=_ZNK14ConCommandBase12IsRegisteredEv */
	virtual const char  * GetHelpText(const class ConCommandBase  *); /* linkage=_ZNK14ConCommandBase11GetHelpTextEv */
	virtual const char  * GetName(const class ConCommandBase  *); /* linkage=_ZNK14ConCommandBase7GetNameEv */
	virtual enum ConVarFlags_t GetFlags(const class ConCommandBase  *); /* linkage=_ZNK14ConCommandBase8GetFlagsEv */
	virtual void RemoveFlags(class ConCommandBase *, enum ConVarFlags_t); /* linkage=_ZN14ConCommandBase11RemoveFlagsE13ConVarFlags_t */
	/* <442a2d4> tier0_perproject/concommandbase.cpp:187 */
	virtual void AddFlags(class ConCommandBase *, enum ConVarFlags_t); /* linkage=_ZN14ConCommandBase8AddFlagsE13ConVarFlags_t */
	virtual bool IsFlagSet(const class ConCommandBase  *, enum ConVarFlags_t); /* linkage=_ZNK14ConCommandBase9IsFlagSetE13ConVarFlags_t */
	void ConCommandBase(class ConCommandBase *, const class ConCommandBase  &); /* linkage=_ZN14ConCommandBaseC4ERKS_ */
	void ConCommandBase(class ConCommandBase *); /* linkage=_ZN14ConCommandBaseC4Ev */
	void ConCommandBase(class ConCommandBase *, const char  *, const char  *, enum ConVarFlags_t); /* linkage=_ZN14ConCommandBaseC4EPKcS1_13ConVarFlags_t */
	virtual void ~ConCommandBase(class ConCommandBase *); /* linkage=_ZN14ConCommandBaseD4Ev */
	virtual bool IsCommand(const class ConCommandBase  *); /* linkage=_ZNK14ConCommandBase9IsCommandEv */
	/* <442a3a1> tier0_perproject/concommandbase.cpp:210 */
	const class ConCommandBase  * GetNext(const class ConCommandBase  *); /* linkage=_ZNK14ConCommandBase7GetNextEv */
	class ConCommandBase * GetNext(class ConCommandBase *); /* linkage=_ZN14ConCommandBase7GetNextEv */
	bool IsPlaceholder(const class ConCommandBase  *); /* linkage=_ZNK14ConCommandBase13IsPlaceholderEv */
	/* <442a340> tier0_perproject/concommandbase.cpp:117 */
	virtual void Create(class ConCommandBase *, const char  *, const char  *, enum ConVarFlags_t); /* linkage=_ZN14ConCommandBase6CreateEPKcS1_13ConVarFlags_t */
	char * CopyString(class ConCommandBase *, const char  *); /* linkage=_ZN14ConCommandBase10CopyStringEPKc */
};

// <05E82878> ../public/tier0/concommandbase.h:43
void ConCommandBase::ConCommandBase()
{
} /* size: 0 */

// <05E8285F> ../public/tier0/concommandbase.h:43
inline void ConCommandBase::ConCommandBase()
{
} /* size: 0 */

// <05E82848> ../public/tier0/concommandbase.h:46
void ConCommandBase::~ConCommandBase()
{
} /* size: 0 */

// <05E82818> ../public/tier0/concommandbase.h:46
inline void ConCommandBase::~ConCommandBase()
{
} /* size: 0 */

// <04429F4E> ../public/tier0/concommandbase.h:46
// function call: 1
void ConCommandBase::~ConCommandBase()
{
	ConCommandBase::~ConCommandBase(); // 46
} /* size: 0, inline expansions: 1 (0 bytes) */

// <044450AB> ../public/tier0/concommandbase.h:74
inline void ConCommandBase::IsPlaceholder()
{
} /* size: 0 */

// <0012830C> ../public/tier0/concommandbase.h:123
void ConVar_Register(int64, IConCommandBaseAccessor *)
{
} /* size: 0 */

// <00128336> ../public/tier0/concommandbase.h:124
void ConVar_Unregister(void)
{
} /* size: 0 */

// <044296D8> ../public/tier0/concommandbase.h:130
void CDeferredConVarRef::CDeferredConVarRef()
{
} /* size: 0 */

// <044296BC> ../public/tier0/concommandbase.h:130
inline void CDeferredConVarRef::CDeferredConVarRef()
{
} /* size: 0 */

// <0442957A> ../public/tier0/concommandbase.h:130
void CDeferredConVarRef::~CDeferredConVarRef()
{
} /* size: 0 */

// <0442955E> ../public/tier0/concommandbase.h:130
inline void CDeferredConVarRef::~CDeferredConVarRef()
{
} /* size: 0 */

// <04427A08> ../public/tier0/concommandbase.h:130
// member functions: 4
// member variables: 4
// class size: 32
class CDeferredConVarRef {
	CUtlString m_name; /* 0 8 */
	bool m_bIgnoreMissing; /* 8 1 */
	ConVarRef * m_pVar; /* 16 8 */
	CDeferredConVarRef * m_pNext; /* 24 8 */
	void ~CDeferredConVarRef(CDeferredConVarRef* );
	void CDeferredConVarRef(CDeferredConVarRef* );
	void ~CDeferredConVarRef(class CDeferredConVarRef *); /* linkage=_ZN18CDeferredConVarRefD4Ev */
	void CDeferredConVarRef(class CDeferredConVarRef *); /* linkage=_ZN18CDeferredConVarRefC4Ev */
};

