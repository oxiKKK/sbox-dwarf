
//
// tier0/cvar.cpp
//
//	referenced by: libtier0.so
//
//	functions: 90
//	class: 1
//

// <000C94E3> tier0/cvar.cpp:36
// variable: 1
// function calls: 36
void CCvar::~CCvar()
{
	CConCommandMemberAccessor<CCvar>::~CConCommandMemberAccessor(); // 147
	CCommandMemberInitializer_Con_LogFlags_f::~CCommandMemberInitializer_Con_LogFlags_f(); // 36
	CConCommandMemberAccessor<CCvar>::~CConCommandMemberAccessor(); // 146
	CCommandMemberInitializer_Con_LogColor_f::~CCommandMemberInitializer_Con_LogColor_f(); // 36
	CConCommandMemberAccessor<CCvar>::~CConCommandMemberAccessor(); // 145
	CCommandMemberInitializer_Con_LogVerbosity_f::~CCommandMemberInitializer_Con_LogVerbosity_f(); // 36
	CConCommandMemberAccessor<CCvar>::~CConCommandMemberAccessor(); // 144
	CCommandMemberInitializer_Con_LogLevel_f::~CCommandMemberInitializer_Con_LogLevel_f(); // 36
	CConCommandMemberAccessor<CCvar>::~CConCommandMemberAccessor(); // 143
	CCommandMemberInitializer_Con_LogDumpChannels_f::~CCommandMemberInitializer_Con_LogDumpChannels_f(); // 36
	{
		int i; // 1721
		CUtlMemory<CCvar::QueuedConVarSet_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CCvar::QueuedConVarSet_t, CUtlMemory<CCvar::QueuedConVarSet_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 129
		QueuedConVarSet_t::~QueuedConVarSet_t(); // 1526
		Destruct<CCvar::QueuedConVarSet_t>(QueuedConVarSet_t* pMemory); // 1723
	}
	CUtlVectorBase<CCvar::QueuedConVarSet_t, CUtlMemory<CCvar::QueuedConVarSet_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CCvar::QueuedConVarSet_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CCvar::QueuedConVarSet_t, int>::Purge(); // 903
	CUtlMemory<CCvar::QueuedConVarSet_t, int>::Purge(); // 1799
	CUtlVectorBase<CCvar::QueuedConVarSet_t, CUtlMemory<CCvar::QueuedConVarSet_t, int> >::Purge(); // 560
	ValidateAlignment<CCvar::QueuedConVarSet_t>(void); // 508
	CUtlMemory<CCvar::QueuedConVarSet_t, int>::Purge(); // 510
	CUtlMemory<CCvar::QueuedConVarSet_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CCvar::QueuedConVarSet_t, CUtlMemory<CCvar::QueuedConVarSet_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CCvar::QueuedConVarSet_t, CUtlMemory<CCvar::QueuedConVarSet_t, int> >::~CUtlVector(); // 36
	CThreadMutex::~CThreadMutex(); // 36
	CUtlVectorBase<IConVarListener::RemoveAll(); // 1798
	CUtlMemory<IConVarListener::IsExternallyAllocated(); // 905
	CUtlMemory<IConVarListener::Purge(); // 903
	CUtlMemory<IConVarListener::Purge(); // 1799
	CUtlVectorBase<IConVarListener::Purge(); // 560
	ValidateAlignment<IConVarListener*>(void); // 508
	CUtlMemory<IConVarListener::Purge(); // 510
	CUtlMemory<IConVarListener::~CUtlMemory(); // 562
	CUtlVectorBase<IConVarListener::~CUtlVectorBase(); // 410
	CUtlVector<IConVarListener::~CUtlVector(); // 36
} /* size: 456, inline expansions: 31 (1110 bytes) */

// <000C94C7> tier0/cvar.cpp:36
inline void CCvar::~CCvar()
{
} /* size: 0 */

// <000C43EF> tier0/cvar.cpp:36
// member functions: 101
// member variables: 14
// vtable entries: 22
// class size: 1,336
class CCvar : public CTier0AppSystem<ICvar, 0> {
	/* tier0/cvar.cpp:122 */
	enum ConVarSetType_t {
		CONVAR_SET_STRING = 0,
		CONVAR_SET_INT = 1,
		CONVAR_SET_FLOAT = 2,
	};
	/* tier0/cvar.cpp:129 */
	struct QueuedConVarSet_t {
		ConVar * m_pConVar; /* 0 8 */
		ConVarSetType_t m_nType; /* 8 4 */
		int m_nInt; /* 12 4 */
		float m_flFloat; /* 16 4 */
		CUtlString m_String; /* 24 8 */
		void ~QueuedConVarSet_t(QueuedConVarSet_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tier0/cvar.cpp:143 */
	class CCommandMemberInitializer_Con_LogDumpChannels_f {
		/* tier0/cvar.cpp:143 */
		void CCommandMemberInitializer_Con_LogDumpChannels_f(CCommandMemberInitializer_Con_LogDumpChannels_f* );
	private:
		CConCommandMemberAccessor<CCvar> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_Con_LogDumpChannels_f(CCommandMemberInitializer_Con_LogDumpChannels_f* );
	};
	/* tier0/cvar.cpp:144 */
	class CCommandMemberInitializer_Con_LogLevel_f {
		/* tier0/cvar.cpp:144 */
		void CCommandMemberInitializer_Con_LogLevel_f(CCommandMemberInitializer_Con_LogLevel_f* );
	private:
		CConCommandMemberAccessor<CCvar> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_Con_LogLevel_f(CCommandMemberInitializer_Con_LogLevel_f* );
	};
	/* tier0/cvar.cpp:145 */
	class CCommandMemberInitializer_Con_LogVerbosity_f {
		/* tier0/cvar.cpp:145 */
		void CCommandMemberInitializer_Con_LogVerbosity_f(CCommandMemberInitializer_Con_LogVerbosity_f* );
	private:
		CConCommandMemberAccessor<CCvar> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_Con_LogVerbosity_f(CCommandMemberInitializer_Con_LogVerbosity_f* );
	};
	/* tier0/cvar.cpp:146 */
	class CCommandMemberInitializer_Con_LogColor_f {
		/* tier0/cvar.cpp:146 */
		void CCommandMemberInitializer_Con_LogColor_f(CCommandMemberInitializer_Con_LogColor_f* );
	private:
		CConCommandMemberAccessor<CCvar> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_Con_LogColor_f(CCommandMemberInitializer_Con_LogColor_f* );
	};
	/* tier0/cvar.cpp:147 */
	class CCommandMemberInitializer_Con_LogFlags_f {
		/* tier0/cvar.cpp:147 */
		void CCommandMemberInitializer_Con_LogFlags_f(CCommandMemberInitializer_Con_LogFlags_f* );
	private:
		CConCommandMemberAccessor<CCvar> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_Con_LogFlags_f(CCommandMemberInitializer_Con_LogFlags_f* );
	};
public:
	/* class CTier0AppSystem<ICvar, 0> <ancestor>; */ /* 0 8 */
	void CCvar(CCvar* , CCvar& );
	void CCvar(CCvar* , const CCvar& );
	/* tier0/cvar.cpp:195 */
	void CCvar(CCvar* );
	/* tier0/cvar.cpp:204 */
	virtual bool Connect(CCvar* , CreateInterfaceFn);
	/* tier0/cvar.cpp:212 */
	virtual void Disconnect(CCvar* );
	/* tier0/cvar.cpp:232 */
	virtual void* QueryInterface(CCvar* , const char* );
	/* tier0/cvar.cpp:217 */
	virtual InitReturnVal_t Init(CCvar* );
	/* tier0/cvar.cpp:227 */
	virtual void Shutdown(CCvar* );
	/* tier0/cvar.cpp:244 */
	virtual CVarDLLIdentifier_t AllocateDLLIdentifier(CCvar* );
	/* tier0/cvar.cpp:254 */
	virtual void RegisterConCommand(CCvar* , ConCommandBase* );
	/* tier0/cvar.cpp:434 */
	virtual void UnregisterConCommand(CCvar* , ConCommandBase* );
	/* tier0/cvar.cpp:472 */
	virtual void UnregisterConCommands(CCvar* , CVarDLLIdentifier_t);
	/* tier0/cvar.cpp:584 */
	virtual const char* GetCommandLineValue(CCvar* , const char* );
	/* tier0/cvar.cpp:514 */
	virtual ConCommandBase* FindCommandBase(CCvar* , const char* );
	/* tier0/cvar.cpp:509 */
	virtual const ConCommandBase* FindCommandBase(const CCvar* , const char* );
	/* tier0/cvar.cpp:542 */
	virtual ConVar* FindVar(CCvar* , const char* );
	/* tier0/cvar.cpp:523 */
	virtual const ConVar* FindVar(const CCvar* , const char* );
	/* tier0/cvar.cpp:574 */
	virtual ConCommand* FindCommand(CCvar* , const char* );
	/* tier0/cvar.cpp:565 */
	virtual const ConCommand* FindCommand(const CCvar* , const char* );
	/* tier0/cvar.cpp:596 */
	virtual void CallGlobalChangeCallbacks(CCvar* , ConVar* , const char* , float);
	/* tier0/cvar.cpp:604 */
	virtual void InstallConVarListener(CCvar* , IConVarListener* );
	/* tier0/cvar.cpp:610 */
	virtual void RemoveConVarListener(CCvar* , IConVarListener* );
	/* tier0/cvar.cpp:958 */
	virtual void ResetConVarsToDefaultValues(CCvar* , const char* );
	/* tier0/cvar.cpp:978 */
	virtual const characterset_t* GetDefaultCommandBreakSet(const CCvar* );
private:
	/* tier0/cvar.cpp:771 */
	bool Con_LogLevelCallback(const LoggingChannel_t* , const char* );
	/* tier0/cvar.cpp:807 */
	bool Con_LogVerbosityCallback(const LoggingChannel_t* , const char* );
	/* tier0/cvar.cpp:841 */
	bool Con_LogColorCallback(const LoggingChannel_t* , const char* );
	/* tier0/cvar.cpp:850 */
	bool Con_LogFlagsCallback(const LoggingChannel_t* , const char* );
	/* tier0/cvar.cpp:692 */
	void Con_LogFunctionHelper(const CCommand& , LogFunctionActionFunc);
	/* tier0/cvar.cpp:79 */
	typedef bool (*LogFunctionActionFunc)(const LoggingChannel_t* , const char* );
	/* tier0/cvar.cpp:620 */
	void Con_LogLevel_CompletionHelper(CCvar* , const char* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	int m_nNextDLLIdentifier; /* 8 4 */
	ConCommandBase * m_pConCommandList; /* 16 8 */
	CConCommandHash m_CommandHash; /* 24 112 */
	CUtlVector<IConVarListener*, CUtlMemory<IConVarListener*, int> > m_ConVarListeners; /* 136 32 */
	CThreadMutex m_Mutex; /* 168 72 */
	characterset_t m_DefaultBreakSet; /* 240 256 */
protected:
	/* tier0/cvar.cpp:171 */
	virtual ICVarIteratorInternal* FactoryInternalIterator(CCvar* );
	CUtlVector<CCvar::QueuedConVarSet_t, CUtlMemory<CCvar::QueuedConVarSet_t, int> > m_QueuedConVarSets; /* 496 32 */
	bool m_bMaterialSystemThreadSetAllowed; /* 528 1 */
private:
	/* tier0/cvar.cpp:918 */
	void Con_LogDumpChannels_f(CCvar* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_Con_LogDumpChannels_f m_Con_LogDumpChannels_f_register; /* 536 160 */
	/* tier0/cvar.cpp:898 */
	void Con_LogLevel_f(CCvar* , const CCommandContext& , const CCommand& );
	/* tier0/cvar.cpp:640 */
	void Con_LogLevel_Completion(CCvar* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	CCommandMemberInitializer_Con_LogLevel_f m_Con_LogLevel_f_register; /* 696 160 */
	/* tier0/cvar.cpp:903 */
	void Con_LogVerbosity_f(CCvar* , const CCommandContext& , const CCommand& );
	/* tier0/cvar.cpp:645 */
	void Con_LogVerbosity_Completion(CCvar* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	CCommandMemberInitializer_Con_LogVerbosity_f m_Con_LogVerbosity_f_register; /* 856 160 */
	/* tier0/cvar.cpp:908 */
	void Con_LogColor_f(CCvar* , const CCommandContext& , const CCommand& );
	/* tier0/cvar.cpp:650 */
	void Con_LogColor_Completion(CCvar* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	CCommandMemberInitializer_Con_LogColor_f m_Con_LogColor_f_register; /* 1016 160 */
	/* tier0/cvar.cpp:913 */
	void Con_LogFlags_f(CCvar* , const CCommandContext& , const CCommand& );
	/* tier0/cvar.cpp:655 */
	void Con_LogFlags_Completion(CCvar* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	CCommandMemberInitializer_Con_LogFlags_f m_Con_LogFlags_f_register; /* 1176 160 */
	/* tier0/cvar.cpp:102 */
	class CCVarIteratorInternal : public ICVarIteratorInternal {
	public:
		/* class ICVarIteratorInternal <ancestor>; */ /* 0 8 */
		void CCVarIteratorInternal(CCVarIteratorInternal* , CCVarIteratorInternal& );
		void CCVarIteratorInternal(CCVarIteratorInternal* , const CCVarIteratorInternal& );
		/* tier0/cvar.cpp:105 */
		void CCVarIteratorInternal(CCVarIteratorInternal* , CCvar* );
		/* tier0/cvar.cpp:150 */
		virtual void SetFirst(CCVarIteratorInternal* );
		/* tier0/cvar.cpp:155 */
		virtual void Next(CCVarIteratorInternal* );
		/* tier0/cvar.cpp:160 */
		virtual bool IsValid(const CCVarIteratorInternal* );
		/* tier0/cvar.cpp:165 */
		virtual ConCommandBase* Get(CCVarIteratorInternal* );
	protected:
		const class CCvar * m_pOuter; /* 8 8 */
		const class CConCommandHash * m_pHash; /* 16 8 */
		CCommandHashIterator_t m_hashIter; /* 24 16 */
		virtual void ~CCVarIteratorInternal(CCVarIteratorInternal* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	void ~CCvar(CCvar* );
	void CCvar(class CCvar *, class CCvar &); /* linkage=_ZN5CCvarC4EOS_ */
	void CCvar(class CCvar *, const class CCvar  &); /* linkage=_ZN5CCvarC4ERKS_ */
	void CCvar(class CCvar *); /* linkage=_ZN5CCvarC4Ev */
	virtual bool Connect(class CCvar *, CreateInterfaceFn); /* linkage=_ZN5CCvar7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CCvar *); /* linkage=_ZN5CCvar10DisconnectEv */
	virtual void * QueryInterface(class CCvar *, const char  *); /* linkage=_ZN5CCvar14QueryInterfaceEPKc */
	virtual enum InitReturnVal_t Init(class CCvar *); /* linkage=_ZN5CCvar4InitEv */
	virtual void Shutdown(class CCvar *); /* linkage=_ZN5CCvar8ShutdownEv */
	virtual CVarDLLIdentifier_t AllocateDLLIdentifier(class CCvar *); /* linkage=_ZN5CCvar21AllocateDLLIdentifierEv */
	virtual void RegisterConCommand(class CCvar *, class ConCommandBase *); /* linkage=_ZN5CCvar18RegisterConCommandEP14ConCommandBase */
	/* <d76c6> tier0/cvar.cpp:434 */
	virtual void UnregisterConCommand(class CCvar *, class ConCommandBase *); /* linkage=_ZN5CCvar20UnregisterConCommandEP14ConCommandBase */
	virtual void UnregisterConCommands(class CCvar *, CVarDLLIdentifier_t); /* linkage=_ZN5CCvar21UnregisterConCommandsEi */
	virtual const char  * GetCommandLineValue(class CCvar *, const char  *); /* linkage=_ZN5CCvar19GetCommandLineValueEPKc */
	/* <d7506> tier0/cvar.cpp:514 */
	virtual class ConCommandBase * FindCommandBase(class CCvar *, const char  *); /* linkage=_ZN5CCvar15FindCommandBaseEPKc */
	virtual const class ConCommandBase  * FindCommandBase(const class CCvar  *, const char  *); /* linkage=_ZNK5CCvar15FindCommandBaseEPKc */
	virtual class ConVar * FindVar(class CCvar *, const char  *); /* linkage=_ZN5CCvar7FindVarEPKc */
	virtual const class ConVar  * FindVar(const class CCvar  *, const char  *); /* linkage=_ZNK5CCvar7FindVarEPKc */
	virtual class ConCommand * FindCommand(class CCvar *, const char  *); /* linkage=_ZN5CCvar11FindCommandEPKc */
	virtual const class ConCommand  * FindCommand(const class CCvar  *, const char  *); /* linkage=_ZNK5CCvar11FindCommandEPKc */
	virtual void CallGlobalChangeCallbacks(class CCvar *, class ConVar *, const char  *, float); /* linkage=_ZN5CCvar25CallGlobalChangeCallbacksEP6ConVarPKcf */
	virtual void InstallConVarListener(class CCvar *, class IConVarListener *); /* linkage=_ZN5CCvar21InstallConVarListenerEP15IConVarListener */
	virtual void RemoveConVarListener(class CCvar *, class IConVarListener *); /* linkage=_ZN5CCvar20RemoveConVarListenerEP15IConVarListener */
	virtual void ResetConVarsToDefaultValues(class CCvar *, const char  *); /* linkage=_ZN5CCvar27ResetConVarsToDefaultValuesEPKc */
	virtual const class characterset_t  * GetDefaultCommandBreakSet(const class CCvar  *); /* linkage=_ZNK5CCvar25GetDefaultCommandBreakSetEv */
	bool Con_LogLevelCallback(const class LoggingChannel_t  *, const char  *); /* linkage=_ZN5CCvar20Con_LogLevelCallbackEPK16LoggingChannel_tPKc */
	bool Con_LogVerbosityCallback(const class LoggingChannel_t  *, const char  *); /* linkage=_ZN5CCvar24Con_LogVerbosityCallbackEPK16LoggingChannel_tPKc */
	bool Con_LogColorCallback(const class LoggingChannel_t  *, const char  *); /* linkage=_ZN5CCvar20Con_LogColorCallbackEPK16LoggingChannel_tPKc */
	bool Con_LogFlagsCallback(const class LoggingChannel_t  *, const char  *); /* linkage=_ZN5CCvar20Con_LogFlagsCallbackEPK16LoggingChannel_tPKc */
	void Con_LogFunctionHelper(const class CCommand  &, LogFunctionActionFunc); /* linkage=_ZN5CCvar21Con_LogFunctionHelperERK8CCommandPFbPK16LoggingChannel_tPKcE */
	void Con_LogLevel_CompletionHelper(class CCvar *, const char  *, const char  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN5CCvar29Con_LogLevel_CompletionHelperEPKcS1_R10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEE */
	/* <d7417> tier0/cvar.cpp:171 */
	virtual class ICVarIteratorInternal * FactoryInternalIterator(class CCvar *); /* linkage=_ZN5CCvar23FactoryInternalIteratorEv */
	void Con_LogDumpChannels_f(class CCvar *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN5CCvar21Con_LogDumpChannels_fERK15CCommandContextRK8CCommand */
	void Con_LogLevel_f(class CCvar *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN5CCvar14Con_LogLevel_fERK15CCommandContextRK8CCommand */
	void Con_LogLevel_Completion(class CCvar *, const char  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN5CCvar23Con_LogLevel_CompletionEPKcR10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEE */
	void Con_LogVerbosity_f(class CCvar *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN5CCvar18Con_LogVerbosity_fERK15CCommandContextRK8CCommand */
	void Con_LogVerbosity_Completion(class CCvar *, const char  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN5CCvar27Con_LogVerbosity_CompletionEPKcR10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEE */
	void Con_LogColor_f(class CCvar *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN5CCvar14Con_LogColor_fERK15CCommandContextRK8CCommand */
	void Con_LogColor_Completion(class CCvar *, const char  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN5CCvar23Con_LogColor_CompletionEPKcR10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEE */
	void Con_LogFlags_f(class CCvar *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN5CCvar14Con_LogFlags_fERK15CCommandContextRK8CCommand */
	void Con_LogFlags_Completion(class CCvar *, const char  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN5CCvar23Con_LogFlags_CompletionEPKcR10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEE */
};

// <000C9DDF> tier0/cvar.cpp:102
// function call: 1
void CCVarIteratorInternal::~CCVarIteratorInternal()
{
	ICVarIteratorInternal::~ICVarIteratorInternal(); // 102
} /* size: 5, inline expansions: 1 (0 bytes) */

// <000C9D2B> tier0/cvar.cpp:102
// function calls: 2
void CCVarIteratorInternal::~CCVarIteratorInternal()
{
	ICVarIteratorInternal::~ICVarIteratorInternal(); // 102
	CCVarIteratorInternal::~CCVarIteratorInternal(); // 102
} /* size: 14, inline expansions: 2 (0 bytes) */

// <000C9D0F> tier0/cvar.cpp:102
inline void CCVarIteratorInternal::~CCVarIteratorInternal()
{
} /* size: 0 */

// <000D670A> tier0/cvar.cpp:105
void CCVarIteratorInternal::CCVarIteratorInternal(CCvar* outer)
{
} /* size: 0 */

// <000D66E5> tier0/cvar.cpp:105
inline void CCVarIteratorInternal::CCVarIteratorInternal(CCvar* outer)
{
} /* size: 0 */

// <000CA1DA> tier0/cvar.cpp:129
void QueuedConVarSet_t::~QueuedConVarSet_t()
{
} /* size: 0 */

// <000CA1BE> tier0/cvar.cpp:129
inline void QueuedConVarSet_t::~QueuedConVarSet_t()
{
} /* size: 0 */

// <000D66CE> tier0/cvar.cpp:143
void CCommandMemberInitializer_Con_LogDumpChannels_f::CCommandMemberInitializer_Con_LogDumpChannels_f()
{
} /* size: 0 */

// <000D66B5> tier0/cvar.cpp:143
inline void CCommandMemberInitializer_Con_LogDumpChannels_f::CCommandMemberInitializer_Con_LogDumpChannels_f()
{
} /* size: 0 */

// <000D5F4C> tier0/cvar.cpp:143
void CCommandMemberInitializer_Con_LogDumpChannels_f::~CCommandMemberInitializer_Con_LogDumpChannels_f()
{
} /* size: 0 */

// <000D5F30> tier0/cvar.cpp:143
inline void CCommandMemberInitializer_Con_LogDumpChannels_f::~CCommandMemberInitializer_Con_LogDumpChannels_f()
{
} /* size: 0 */

// <000D669E> tier0/cvar.cpp:144
void CCommandMemberInitializer_Con_LogLevel_f::CCommandMemberInitializer_Con_LogLevel_f()
{
} /* size: 0 */

// <000D6685> tier0/cvar.cpp:144
inline void CCommandMemberInitializer_Con_LogLevel_f::CCommandMemberInitializer_Con_LogLevel_f()
{
} /* size: 0 */

// <000D5F19> tier0/cvar.cpp:144
void CCommandMemberInitializer_Con_LogLevel_f::~CCommandMemberInitializer_Con_LogLevel_f()
{
} /* size: 0 */

// <000D5EFD> tier0/cvar.cpp:144
inline void CCommandMemberInitializer_Con_LogLevel_f::~CCommandMemberInitializer_Con_LogLevel_f()
{
} /* size: 0 */

// <000D666E> tier0/cvar.cpp:145
void CCommandMemberInitializer_Con_LogVerbosity_f::CCommandMemberInitializer_Con_LogVerbosity_f()
{
} /* size: 0 */

// <000D6655> tier0/cvar.cpp:145
inline void CCommandMemberInitializer_Con_LogVerbosity_f::CCommandMemberInitializer_Con_LogVerbosity_f()
{
} /* size: 0 */

// <000D5EE6> tier0/cvar.cpp:145
void CCommandMemberInitializer_Con_LogVerbosity_f::~CCommandMemberInitializer_Con_LogVerbosity_f()
{
} /* size: 0 */

// <000D5ECA> tier0/cvar.cpp:145
inline void CCommandMemberInitializer_Con_LogVerbosity_f::~CCommandMemberInitializer_Con_LogVerbosity_f()
{
} /* size: 0 */

// <000D663E> tier0/cvar.cpp:146
void CCommandMemberInitializer_Con_LogColor_f::CCommandMemberInitializer_Con_LogColor_f()
{
} /* size: 0 */

// <000D6625> tier0/cvar.cpp:146
inline void CCommandMemberInitializer_Con_LogColor_f::CCommandMemberInitializer_Con_LogColor_f()
{
} /* size: 0 */

// <000D5EB3> tier0/cvar.cpp:146
void CCommandMemberInitializer_Con_LogColor_f::~CCommandMemberInitializer_Con_LogColor_f()
{
} /* size: 0 */

// <000D5E97> tier0/cvar.cpp:146
inline void CCommandMemberInitializer_Con_LogColor_f::~CCommandMemberInitializer_Con_LogColor_f()
{
} /* size: 0 */

// <000D660E> tier0/cvar.cpp:147
void CCommandMemberInitializer_Con_LogFlags_f::CCommandMemberInitializer_Con_LogFlags_f()
{
} /* size: 0 */

// <000D65F5> tier0/cvar.cpp:147
inline void CCommandMemberInitializer_Con_LogFlags_f::CCommandMemberInitializer_Con_LogFlags_f()
{
} /* size: 0 */

// <000D5E80> tier0/cvar.cpp:147
void CCommandMemberInitializer_Con_LogFlags_f::~CCommandMemberInitializer_Con_LogFlags_f()
{
} /* size: 0 */

// <000D5E64> tier0/cvar.cpp:147
inline void CCommandMemberInitializer_Con_LogFlags_f::~CCommandMemberInitializer_Con_LogFlags_f()
{
} /* size: 0 */

// <000D71F0> tier0/cvar.cpp:150
// variables: 2
// function calls: 4
void CCVarIteratorInternal::SetFirst()
{
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Count(); // 145
	{
		int bucket; // 147
		{
			CCommandHashHandle_t iElement; // 149
			CUtlMemory<long long int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::operator[](
					int i);  // 149
		}
	}
	CConCommandHash::First(); // 152
} /* size: 73, inline expansions: 2 (53 bytes) */

// <000D65DC> tier0/cvar.cpp:150
void CCVarIteratorInternal::SetFirst()
{
} /* size: 0 */

// <000D6365> tier0/cvar.cpp:155
// variables: 2
// function calls: 9
void CCVarIteratorInternal::Next()
{
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::operator[](
			intp i);  // 368
	InternalElement(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this,
			long long int i);  // 550
	Next(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this,
		long long int i);  // 166
	CCommandHashIterator_t::CCommandHashIterator_t(
				int _bucket,
				const CCommandHashHandle_t& _handle);  // 171
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Count(); // 175
	{
		int bucket; // 176
		{
			CCommandHashHandle_t bucketHandle; // 178
			CUtlMemory<long long int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::operator[](
					int i);  // 178
		}
	}
	CConCommandHash::Next(
		const CCommandHashIterator_t& iter);  // 163
	CConCommandHash::Next(
		const CCommandHashIterator_t& iter);  // 157
} /* size: 0, inline expansions: 7 (460 bytes) */

// <000D62A7> tier0/cvar.cpp:160
// function calls: 3
void CCVarIteratorInternal::IsValid()
{
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::operator[](
			intp i);  // 422
	CUtlFixedLinkedList<CConCommandHash::HashEntry_t>::IsValidIndex(
			intp i);  // 189
	CConCommandHash::IsValidIterator(
			const CCommandHashIterator_t& iter);  // 162
} /* size: 44, inline expansions: 3 (54 bytes) */

// <000D6107> tier0/cvar.cpp:165
// variables: 2
// function calls: 4
void CCVarIteratorInternal::Get()
{
	const char   __FUNCTION__; // 41238
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 167
	}
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::operator[](
			intp i);  // 494
	operator[](const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
			long long int i);  // 131
	CConCommandHash::operator[](
			CCommandHashHandle_t hHash);  // 86
	CConCommandHash::operator[](
			const CCommandHashIterator_t& iter);  // 168
} /* size: 0, variables: 1, inline expansions: 4 (144 bytes) */

// <000D7417> tier0/cvar.cpp:171
// function calls: 3
void CCvar::FactoryInternalIterator()
{
	ICVarIteratorInternal::ICVarIteratorInternal(); // 107
	CCommandHashIterator_t::CCommandHashIterator_t(
				int _bucket,
				const CCommandHashHandle_t& _handle);  // 107
	CCVarIteratorInternal::CCVarIteratorInternal(
				CCvar* outer);  // 173
} /* size: 90, inline expansions: 3 (50 bytes) */

// <000D60EE> tier0/cvar.cpp:171
void CCvar::FactoryInternalIterator()
{
} /* size: 0 */

// <000D60CD> tier0/cvar.cpp:180
void* __CreateCCvarICvar_interface(void)
{
} /* size: 12 */

// <000D6097> tier0/cvar.cpp:186
CreateInterfaceFn Import_GetICVarFactory(void)
{
} /* size: 9 */

// <000D5050> tier0/cvar.cpp:195
// function calls: 56
void CCvar::CCvar()
{
	IAppSystem::IAppSystem(); // 37
	ICvar::ICvar(); // 120
	CBaseAppSystem<ICvar>::CBaseAppSystem(); // 171
	CTier0AppSystem<ICvar, 0>::CTier0AppSystem(); // 196
	ConstructList(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this); // 454
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::Grow(
		int num);  // 193
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::Init(
		int nGrowSize,
		int nInitSize);  // 161
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::CUtlFixedMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::InvalidIterator(); // 448
	ResetDbgInfo(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this); // 455
	CUtlLinkedList(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
			int growSize,
			int initSize);  // 404
	CUtlFixedLinkedList<CConCommandHash::HashEntry_t>::CUtlFixedLinkedList(
				int growSize,
				int initSize);  // 986
	CUtlMemory<long long int, int>::ValidateGrowSize(); // 475
	CUtlMemory<long long int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<long long int, CUtlMemory<long long int, int> >::CUtlVector(); // 986
	CConCommandHash::CConCommandHash(); // 196
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CCvar>::CConCommandMemberAccessor(
					CCvar* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 143
	CConCommandMemberAccessor<CCvar>::SetOwner(
		CCvar* pOwner);  // 143
	CCommandMemberInitializer_Con_LogDumpChannels_f::CCommandMemberInitializer_Con_LogDumpChannels_f(); // 196
	CUtlMemory<IConVarListener::ValidateGrowSize(); // 475
	CUtlMemory<IConVarListener::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IConVarListener::ResetDbgInfo(); // 530
	CUtlVectorBase<IConVarListener::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IConVarListener::CUtlVector(); // 196
	CThreadMutex::CThreadMutex(
			const char* pName);  // 196
	characterset_t::characterset_t(); // 196
	CUtlMemory<CCvar::QueuedConVarSet_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CCvar::QueuedConVarSet_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCvar::QueuedConVarSet_t, CUtlMemory<CCvar::QueuedConVarSet_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CCvar::QueuedConVarSet_t, CUtlMemory<CCvar::QueuedConVarSet_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCvar::QueuedConVarSet_t, CUtlMemory<CCvar::QueuedConVarSet_t, int> >::CUtlVector(); // 196
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CCvar>::CConCommandMemberAccessor(
					CCvar* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 144
	CConCommandMemberAccessor<CCvar>::SetOwner(
		CCvar* pOwner);  // 144
	CCommandMemberInitializer_Con_LogLevel_f::CCommandMemberInitializer_Con_LogLevel_f(); // 196
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CCvar>::CConCommandMemberAccessor(
					CCvar* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 145
	CConCommandMemberAccessor<CCvar>::SetOwner(
		CCvar* pOwner);  // 145
	CCommandMemberInitializer_Con_LogVerbosity_f::CCommandMemberInitializer_Con_LogVerbosity_f(); // 196
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CCvar>::CConCommandMemberAccessor(
					CCvar* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 146
	CConCommandMemberAccessor<CCvar>::SetOwner(
		CCvar* pOwner);  // 146
	CCommandMemberInitializer_Con_LogColor_f::CCommandMemberInitializer_Con_LogColor_f(); // 196
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CCvar>::CConCommandMemberAccessor(
					CCvar* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 147
	CConCommandMemberAccessor<CCvar>::SetOwner(
		CCvar* pOwner);  // 147
	CCommandMemberInitializer_Con_LogFlags_f::CCommandMemberInitializer_Con_LogFlags_f(); // 196
} /* size: 983, inline expansions: 56 (1798 bytes) */

// <000D5037> tier0/cvar.cpp:195
void CCvar::CCvar()
{
} /* size: 0 */

// <000D4F86> tier0/cvar.cpp:204
// function call: 1
void CCvar::Connect(CreateInterfaceFn factory)
{
	CTier0AppSystem<ICvar, 0>::Connect(
		CreateInterfaceFn factory);  // 206
} /* size: 72, inline expansions: 1 (18 bytes) */

// <000D4F13> tier0/cvar.cpp:212
// function call: 1
void CCvar::Disconnect()
{
	CTier0AppSystem<ICvar, 0>::Disconnect(); // 214
} /* size: 9, inline expansions: 1 (5 bytes) */

// <000D4E64> tier0/cvar.cpp:217
// variable: 1
// function call: 1
void CCvar::Init()
{
	InitReturnVal_t nRetVal; // 219
	CTier0AppSystem<ICvar, 0>::Init(); // 219
} /* size: 68, variables: 1, inline expansions: 1 (22 bytes) */

// <000D4DF1> tier0/cvar.cpp:227
// function call: 1
void CCvar::Shutdown()
{
	CTier0AppSystem<ICvar, 0>::Shutdown(); // 229
} /* size: 33, inline expansions: 1 (28 bytes) */

// <000D4D57> tier0/cvar.cpp:232
// function call: 1
void* CCvar::QueryInterface(const char* pInterfaceName)
{
	V_strcmp(const char* s1,
		const char* s2);  // 235
} /* size: 48, inline expansions: 1 (15 bytes) */

// <000D4D29> tier0/cvar.cpp:244
void CCvar::AllocateDLLIdentifier()
{
} /* size: 14 */

// <000D38C3> tier0/cvar.cpp:254
// variables: 15
// function calls: 66
void CCvar::RegisterConCommand(ConCommandBase* variable)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_277; // 277
	const char* pName; // 279
	const ConCommandBase* pOther; // 289
	const char   __FUNCTION__; // 35694
	{
		ConCommand* pChildCmd; // 295
		ConCommand* pParentCmd; // 296
		{
			int i; // 310
			CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Count(); // 310
			CUtlMemory<ConCommand::CallbackInfo_t, int>::Base(); // 112
			CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Base(); // 368
			CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::ResetDbgInfo(); // 824
			CUtlMemory<ConCommand::CallbackInfo_t, int>::IsGrowable(); // 823
			CUtlMemory<ConCommand::CallbackInfo_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<ConCommand::CallbackInfo_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<ConCommand::CallbackInfo_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::GrowMemory(
					int num);  // 1198
			CopyConstruct<ConCommand::CallbackInfo_t>(CallbackInfo_t* pMemory,
									const CallbackInfo_t& src);  // 1201
			CUtlMemory<ConCommand::CallbackInfo_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Element(
				int i);  // 1201
			CUtlMemory<ConCommand::CallbackInfo_t, int>::NumAllocated(); // 1196
			CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::AddToTail(
					const CallbackInfo_t& src);  // 312
			CUtlMemory<ConCommand::CallbackInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::operator[](
					int i);  // 312
		}
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::Count(); // 308
		CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::RemoveAll(); // 315
		V_strlen(const char* str); // 319
		V_strlen(const char* str); // 321
	}
	{
		ConVar* pChildVar; // 344
		ConVar* pParentVar; // 345
		{
			const int64   nFlags; // 395
			const const char*  szFlags; // 397
			{
				int i; // 369
				CUtlVectorBase<void (::Count()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int this); // 369
				CUtlMemory<void (::Base()(IConVar*, char const*, float), int>* this); // 112
				CUtlVectorBase<void (::Base()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 368
				CUtlVectorBase<void (::ResetDbgInfo()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 824
				CUtlMemory<void (::IsGrowable()(IConVar*, char const*, float), int>* this); // 823
				CUtlMemory<void (::IsExternallyAllocated()(IConVar*, char const*, float), int>* this); // 859
				CUtlMemory<void (::IsExternallyAllocated()(IConVar*, char const*, float), int>* this); // 861
				CUtlMemory<void (::Grow(
					int num);  // 806
				CUtlVectorBase<void (::GrowMemory(
						int num);  // 1198
				CUtlMemory<void (::operator[](
						int i);  // 602
				CUtlVectorBase<void (::Element(
					int i);  // 1201
				CopyConstruct<void (*)(IConVar*, char const*, float)>(void ()(IConVar *, const char *, float)** pMemory,
											void ()(IConVar *, const char *, float)* const& src); // 1201
				CUtlMemory<void (::NumAllocated()(IConVar*, char const*, float), int>* this); // 1196
				CUtlVectorBase<void (::AddToTail(
						void ()(IConVar *, const char *, float)* const& src);  // 371
				CUtlMemory<void (::operator[](
						int i);  // 588
				CUtlVectorBase<void (::operator[](
						int i);  // 371
			}
			{
				int k; // 402
			}
			operator|=(ConVarFlags_t& a,
					ConVarFlags_t b);  // 364
			CUtlVectorBase<void (::Count()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int this); // 367
			CUtlVectorBase<void (::RemoveAll()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 374
			V_strlen(const char* str); // 378
			V_strlen(const char* str); // 380
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 424
	}
	{
		int i; // 428
		CUtlVectorBase<IConVarListener::Count(); // 428
		CUtlMemory<IConVarListener::operator[](
				int i);  // 588
		CUtlVectorBase<IConVarListener::operator[](
				int i);  // 430
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 277
	HashStringFastCaseless(const char* pszKey); // 126
	CConCommandHash::Find(
		const char* name);  // 199
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::operator[](
			intp i);  // 500
	operator[](const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this,
			long long int i);  // 136
	CConCommandHash::operator[](
			CCommandHashHandle_t hHash);  // 206
	CConCommandHash::FindPtr(
		const char* name);  // 516
	CCvar::FindCommandBase(
			const char* name);  // 289
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 432
	HashStringFastCaseless(const char* pszKey); // 126
	CConCommandHash::Find(
		const char* name);  // 199
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::operator[](
			intp i);  // 500
	operator[](const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this,
			long long int i);  // 136
	CConCommandHash::operator[](
			CCommandHashHandle_t hHash);  // 206
	CConCommandHash::FindPtr(
		const char* name);  // 516
	CCvar::FindCommandBase(
			const char* name);  // 424
	CConCommandHash::Insert(
		ConCommandBase* cmd);  // 426
} /* size: 2176, variables: 4, inline expansions: 21 (646 bytes) */

// <000D76C6> tier0/cvar.cpp:434
// variables: 4
// function calls: 7
void CCvar::UnregisterConCommand(ConCommandBase* pCommandToRemove)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_440; // 440
	ConCommandBase* pPrev; // 445
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 440
	{
		ConCommandBase* pCommand; // 446
		{
			CCommandHashHandle_t hHash; // 463
		}
	}
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 470
	CCvar::UnregisterConCommand(
				ConCommandBase* pCommandToRemove);  // 434
} /* size: 262, variables: 2, inline expansions: 7 (528 bytes) */

// <000D3865> tier0/cvar.cpp:434
// variables: 4
void CCvar::UnregisterConCommand(ConCommandBase* pCommandToRemove)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_440; // 440
	ConCommandBase* pPrev; // 445
	{
		ConCommandBase* pCommand; // 446
		{
			CCommandHashHandle_t hHash; // 463
		}
	}
} /* size: 0, variables: 2 */

// <000D3735> tier0/cvar.cpp:472
// variables: 3
// function call: 1
void CCvar::UnregisterConCommands(CVarDLLIdentifier_t id)
{
	ConCommandBase* pNewList; // 474
	ConCommandBase* pCommand; // 475
	ConCommandBase* pNext; // 475
	CConCommandHash::Insert(
		ConCommandBase* cmd);  // 489
} /* size: 173, variables: 3, inline expansions: 1 (30 bytes) */

// <000D370F> tier0/cvar.cpp:509
void CCvar::FindCommandBase(const char* name)
{
} /* size: 0 */

// <000D7506> tier0/cvar.cpp:514
// function calls: 6
void CCvar::FindCommandBase(const char* name)
{
	HashStringFastCaseless(const char* pszKey); // 126
	CConCommandHash::Find(
		const char* name);  // 199
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::operator[](
			intp i);  // 500
	operator[](const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this,
			long long int i);  // 136
	CConCommandHash::operator[](
			CCommandHashHandle_t hHash);  // 206
	CConCommandHash::FindPtr(
		const char* name);  // 516
} /* size: 71, inline expansions: 6 (71 bytes) */

// <000D344E> tier0/cvar.cpp:523
// variables: 3
// function calls: 7
void CCvar::FindVar(const char* var_name)
{
	const ConCommandBase* var; // 525
	const char   __FUNCTION__; // 29373
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 534
	}
	HashStringFastCaseless(const char* pszKey); // 126
	CConCommandHash::Find(
		const char* name);  // 199
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::operator[](
			intp i);  // 500
	operator[](const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this,
			long long int i);  // 136
	CConCommandHash::operator[](
			CCommandHashHandle_t hHash);  // 206
	CConCommandHash::FindPtr(
		const char* name);  // 516
	CCvar::FindCommandBase(
			const char* name);  // 525
} /* size: 0, variables: 2, inline expansions: 7 (106 bytes) */

// <000D319E> tier0/cvar.cpp:542
// variables: 3
// function calls: 7
void CCvar::FindVar(const char* var_name)
{
	ConCommandBase* var; // 544
	const char   __FUNCTION__; // 29373
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 553
	}
	HashStringFastCaseless(const char* pszKey); // 126
	CConCommandHash::Find(
		const char* name);  // 199
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::operator[](
			intp i);  // 500
	operator[](const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this,
			long long int i);  // 136
	CConCommandHash::operator[](
			CCommandHashHandle_t hHash);  // 206
	CConCommandHash::FindPtr(
		const char* name);  // 516
	CCvar::FindCommandBase(
			const char* name);  // 544
} /* size: 0, variables: 2, inline expansions: 7 (106 bytes) */

// <000D2F5D> tier0/cvar.cpp:565
// variable: 1
// function calls: 7
void CCvar::FindCommand(const char* pCommandName)
{
	const ConCommandBase* var; // 567
	HashStringFastCaseless(const char* pszKey); // 126
	CConCommandHash::Find(
		const char* name);  // 199
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::operator[](
			intp i);  // 500
	operator[](const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this,
			long long int i);  // 136
	CConCommandHash::operator[](
			CCommandHashHandle_t hHash);  // 206
	CConCommandHash::FindPtr(
		const char* name);  // 516
	CCvar::FindCommandBase(
			const char* name);  // 567
} /* size: 135, variables: 1, inline expansions: 7 (106 bytes) */

// <000D2D1C> tier0/cvar.cpp:574
// variable: 1
// function calls: 7
void CCvar::FindCommand(const char* pCommandName)
{
	ConCommandBase* var; // 576
	HashStringFastCaseless(const char* pszKey); // 126
	CConCommandHash::Find(
		const char* name);  // 199
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::operator[](
			intp i);  // 500
	operator[](const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this,
			long long int i);  // 136
	CConCommandHash::operator[](
			CCommandHashHandle_t hHash);  // 206
	CConCommandHash::FindPtr(
		const char* name);  // 516
	CCvar::FindCommandBase(
			const char* name);  // 576
} /* size: 135, variables: 1, inline expansions: 7 (106 bytes) */

// <000D2B9D> tier0/cvar.cpp:584
// variables: 2
// function calls: 3
void CCvar::GetCommandLineValue(const char* pVariableName)
{
	int nLen; // 586
	char* pSearch; // 587
	V_strlen(const char* str); // 586
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 589
} /* size: 299, variables: 2, inline expansions: 3 (53 bytes) */

// <000D2A49> tier0/cvar.cpp:596
// variable: 1
// function calls: 3
void CCvar::CallGlobalChangeCallbacks(ConVar* var, const char* pOldString, float flOldValue)
{
	{
		int i; // 598
		CUtlVectorBase<IConVarListener::Count(); // 598
		CUtlMemory<IConVarListener::operator[](
				int i);  // 588
		CUtlVectorBase<IConVarListener::operator[](
				int i);  // 600
	}
} /* size: 113 */

// <000D264D> tier0/cvar.cpp:604
// variables: 3
// function calls: 17
void CCvar::InstallConVarListener(IConVarListener* pConVarListener)
{
	const char   __FUNCTION__; // 22567
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 606
	}
	{
		int i; // 1531
		CUtlVectorBase<IConVarListener::Count(); // 1531
		CUtlMemory<IConVarListener::operator[](
				int i);  // 609
		CUtlVectorBase<IConVarListener::Element(
			int i);  // 1533
	}
	CUtlVectorBase<IConVarListener::Find(
		IConVarListener* const& src);  // 606
	CUtlMemory<IConVarListener::NumAllocated(); // 1196
	CUtlMemory<IConVarListener::Base(); // 112
	CUtlVectorBase<IConVarListener::Base(); // 368
	CUtlVectorBase<IConVarListener::ResetDbgInfo(); // 824
	CUtlMemory<IConVarListener::IsGrowable(); // 823
	CUtlMemory<IConVarListener::IsExternallyAllocated(); // 859
	CUtlMemory<IConVarListener::IsExternallyAllocated(); // 861
	CUtlMemory<IConVarListener::Grow(
		int num);  // 806
	CUtlVectorBase<IConVarListener::GrowMemory(
			int num);  // 1198
	CUtlMemory<IConVarListener::operator[](
			int i);  // 602
	CUtlVectorBase<IConVarListener::Element(
		int i);  // 1201
	CopyConstruct<IConVarListener*>(IConVarListener** pMemory,
					IConVarListener* const& src);  // 1201
	CUtlVectorBase<IConVarListener::AddToTail(
			IConVarListener* const& src);  // 607
} /* size: 0, variables: 1, inline expansions: 14 (1031 bytes) */

// <000D234A> tier0/cvar.cpp:610
// variable: 1
// function calls: 13
void CCvar::RemoveConVarListener(IConVarListener* pConVarListener)
{
	{
		int i; // 1531
		CUtlVectorBase<IConVarListener::Count(); // 1531
		CUtlMemory<IConVarListener::operator[](
				int i);  // 609
		CUtlVectorBase<IConVarListener::Element(
			int i);  // 1533
	}
	CUtlVectorBase<IConVarListener::Find(
		IConVarListener* const& src);  // 1617
	CUtlMemory<IConVarListener::operator[](
			int i);  // 602
	CUtlVectorBase<IConVarListener::Element(
		int i);  // 1114
	CUtlMemory<IConVarListener::operator[](
			int i);  // 602
	CUtlVectorBase<IConVarListener::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<IConVarListener::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<IConVarListener::Remove(
		int elem);  // 1620
	CUtlVectorBase<IConVarListener::FindAndRemove(
			IConVarListener* const& src);  // 612
} /* size: 149, inline expansions: 10 (377 bytes) */

// <000D1BFF> tier0/cvar.cpp:620
// variables: 3
// function calls: 26
void CCvar::Con_LogLevel_CompletionHelper(const char* pPartial, const char* pCommandName, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	int nLen; // 627
	{
		LoggingChannelID_t i; // 629
		{
			const LoggingChannel_t* pChannel; // 632
			V_strnicmp_fast<int>(const char* s1,
						const char* s2,
						int n);  // 633
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 803
			CBufferString::Access(); // 635
			CUtlString::CUtlString(
					const char* pString);  // 635
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CUtlString, int>::IsGrowable(); // 823
			CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CUtlString, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1249
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 1514
			Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1252
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
					CUtlString& src);  // 635
			CUtlString::~CUtlString(); // 635
			CBufferString::~CBufferString(); // 1484
			CFmtBufferStringN<50>::~CFmtBufferStringN(); // 635
		}
	}
	V_strlen(const char* str); // 622
	V_isspace(int c); // 623
	V_strlen(const char* str); // 627
} /* size: 689, variables: 1, inline expansions: 3 (48 bytes) */

// <000D1B70> tier0/cvar.cpp:640
void CCvar::Con_LogLevel_Completion(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
} /* size: 19 */

// <000D1AE1> tier0/cvar.cpp:645
void CCvar::Con_LogVerbosity_Completion(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
} /* size: 19 */

// <000D1A52> tier0/cvar.cpp:650
void CCvar::Con_LogColor_Completion(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
} /* size: 19 */

// <000D19C3> tier0/cvar.cpp:655
void CCvar::Con_LogFlags_Completion(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
} /* size: 19 */

// <000D19B8> tier0/cvar.cpp:660
void LogFunction_PrintUsage(void)
{
} /* size: 0 */

// <000D14DE> tier0/cvar.cpp:692
// variables: 16
// function calls: 8
void Con_LogFunctionHelper(const CCommand& srcArgs, LogFunctionActionFunc callbackFunction)
{
	int nArgs; // 694
	const CCommand* pArgs; // 696
	CCommand cmdLineArgs; // 699
	int nMaxChannelArg; // 706
	const char* pParameter; // 707
	const int  nMaxSpecifiers; // 725
	int nSpecifierCount; // 726
	ChannelSpecifier_t channelSpecifier; // 734
	const char   __FUNCTION__; // 22567
	{
		int nArg; // 735
		{
			const char* pSpecifier; // 737
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 738
			}
			CCommand::ArgV(); // 737
		}
	}
	{
		LoggingChannelID_t channelID; // 743
		{
			const LoggingChannel_t* pLoggingChannel; // 745
			int nSpecifier; // 746
			bool bReachedEnd; // 756
			LogFunction_PrintUsage(void); // 660
			LogFunction_PrintUsage(void); // 764
		}
	}
	CCommand::ArgC(); // 694
	CCommand::Reset(); // 108
	CCommand::CCommand(); // 699
	CCommand::ArgV(); // 716
	LogFunction_PrintUsage(void); // 730
} /* size: 0, variables: 9, inline expansions: 5 (3 bytes) */

// <000D12F3> tier0/cvar.cpp:771
// variables: 2
void Con_LogLevelCallback(const LoggingChannel_t* pChannel, const char* pParameter)
{
	LoggingVerbosity_t verbosity; // 773
	const char* pVerbosity; // 774
} /* size: 375, variables: 2 */

// <000D113F> tier0/cvar.cpp:807
// variable: 1
void Con_LogVerbosityCallback(const LoggingChannel_t* pChannel, const char* pParameter)
{
	LoggingVerbosity_t verbosity; // 809
} /* size: 313, variables: 1 */

// <000D0FE0> tier0/cvar.cpp:841
// variable: 1
// function calls: 2
void Con_LogColorCallback(const LoggingChannel_t* pChannel, const char* pParameter)
{
	int color; // 843
	V_hextobinary<int, long unsigned int>(const char* in,
						int numchars,
						byte* out,
						long unsigned int maxoutputbytes);  // 844
	DWordSwapC<int>(int dw); // 845
} /* size: 161, variables: 1, inline expansions: 2 (22 bytes) */

// <000D0DA3> tier0/cvar.cpp:850
// variables: 4
void Con_LogFlagsCallback(const LoggingChannel_t* pChannel, const char* pParameter)
{
	bool bEnable; // 852
	const char* pFlag; // 867
	LoggingChannelFlags_t flag; // 868
	LoggingChannelFlags_t currentFlags; // 883
} /* size: 473, variables: 4 */

// <000D0D22> tier0/cvar.cpp:898
void CCvar::Con_LogLevel_f(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 19 */

// <000D0CA1> tier0/cvar.cpp:903
void CCvar::Con_LogVerbosity_f(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 19 */

// <000D0C20> tier0/cvar.cpp:908
void CCvar::Con_LogColor_f(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 19 */

// <000D0B9F> tier0/cvar.cpp:913
void CCvar::Con_LogFlags_f(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 19 */

// <000D073C> tier0/cvar.cpp:918
// variables: 7
// function calls: 3
void CCvar::Con_LogDumpChannels_f(const CCommandContext& ctx, const CCommand& args)
{
	int nChannelCount; // 923
	{
		int i; // 924
		{
			const LoggingChannel_t* pChannel; // 926
			const char* pVerbosity; // 928
			uint32 color; // 936
			const int  nMaxLen; // 939
			char buf; // 940
			DWordSwapC<int>(int dw); // 936
			V_strncat<int>(char* pDest,
					const char* pSrc,
					int maxLenInChars,
					int nMaxCharsToCopy);  // 948
			V_strncat<int>(char* pDest,
					const char* pSrc,
					int maxLenInChars,
					int nMaxCharsToCopy);  // 944
		}
	}
} /* size: 781, variables: 1 */

// <000D0244> tier0/cvar.cpp:958
// variables: 5
// function calls: 17
void CCvar::ResetConVarsToDefaultValues(const char* pMatchStr)
{
	Iterator iter; // 960
	{
		ConCommandBase* var; // 963
		ConVar* cv; // 967
		Iterator::Get(); // 963
		V_strlen(const char* str); // 970
		V_memcmp(const void* m1,
			const void* m2,
			int count);  // 970
	}
	ICVarIteratorInternal::ICVarIteratorInternal(); // 107
	CCommandHashIterator_t::CCommandHashIterator_t(
				int _bucket,
				const CCommandHashHandle_t& _handle);  // 107
	CCVarIteratorInternal::CCVarIteratorInternal(
				CCvar* outer);  // 173
	CCvar::FactoryInternalIterator(); // 120
	Iterator::Iterator(
		ICvar* icvar);  // 960
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Count(); // 145
	{
		int bucket; // 147
		{
			CCommandHashHandle_t iElement; // 149
			CUtlMemory<long long int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::operator[](
					int i);  // 149
		}
	}
	CConCommandHash::First(); // 152
	CCVarIteratorInternal::SetFirst(); // 130
	Iterator::SetFirst(); // 961
	Iterator::IsValid(); // 961
	Iterator::Next(); // 961
	Iterator::~Iterator(); // 976
} /* size: 443, variables: 1, inline expansions: 12 (575 bytes) */

// <000D0216> tier0/cvar.cpp:978
void CCvar::GetDefaultCommandBreakSet()
{
} /* size: 12 */

// <000CFE4D> tier0/cvar.cpp:986
// function calls: 14
void CConCommandHash::CConCommandHash()
{
	CUtlMemory<long long int, int>::ValidateGrowSize(); // 475
	CUtlMemory<long long int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<long long int, CUtlMemory<long long int, int> >::CUtlVector(); // 986
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::Grow(
		int num);  // 193
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::Init(
		int nGrowSize,
		int nInitSize);  // 161
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::CUtlFixedMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::InvalidIterator(); // 448
	ConstructList(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this); // 454
	ResetDbgInfo(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this); // 455
	CUtlLinkedList(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
			int growSize,
			int initSize);  // 404
	CUtlFixedLinkedList<CConCommandHash::HashEntry_t>::CUtlFixedLinkedList(
				int growSize,
				int initSize);  // 986
} /* size: 0, inline expansions: 14 (0 bytes) */

// <000CFE30> tier0/cvar.cpp:986
void CConCommandHash::CConCommandHash()
{
} /* size: 0 */

// <000CFB93> tier0/cvar.cpp:991
// variables: 2
// function calls: 11
void CConCommandHash::~CConCommandHash()
{
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::Purge(); // 167
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::~CUtlFixedMemory(); // 462
	~CUtlLinkedList(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this); // 400
	CUtlFixedLinkedList<CConCommandHash::HashEntry_t>::~CUtlFixedLinkedList(); // 994
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::RemoveAll(); // 1798
	CUtlMemory<long long int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<long long int, int>::Purge(); // 903
	CUtlMemory<long long int, int>::Purge(); // 1799
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Purge(); // 560
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<long long int, CUtlMemory<long long int, int> >::~CUtlVector(); // 994
} /* size: 117, inline expansions: 11 (347 bytes) */

// <000CFB76> tier0/cvar.cpp:991
void CConCommandHash::~CConCommandHash()
{
} /* size: 0 */

// <000CF87C> tier0/cvar.cpp:996
// variables: 2
// function calls: 11
void CConCommandHash::Purge(bool bReinitialize)
{
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::RemoveAll(); // 1798
	CUtlMemory<long long int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<long long int, int>::Purge(); // 903
	CUtlMemory<long long int, int>::Purge(); // 1799
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Purge(); // 998
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::Purge(); // 643
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::InvalidIterator(); // 648
	ResetDbgInfo(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this); // 650
	Purge(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this); // 999
} /* size: 226, inline expansions: 11 (303 bytes) */

// <000CF31D> tier0/cvar.cpp:1007
// variables: 4
// function calls: 20
void CConCommandHash::Init()
{
	int nGrowSize; // 1020
	{
		int iBucket; // 1014
		CUtlMemory<long long int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::operator[](
				int i);  // 1016
	}
	CUtlMemory<long long int, int>::NumAllocated(); // 782
	CUtlMemory<long long int, int>::IsGrowable(); // 823
	CUtlMemory<long long int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<long long int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<long long int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::ShiftElementsRight(
				int elem,
				int num);  // 1446
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::SetCount(
		int count);  // 1013
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::Purge(); // 189
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::Grow(
		int num);  // 193
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::Init(
		int nGrowSize,
		int nInitSize);  // 629
	ResetDbgInfo(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this); // 630
	SetGrowSize(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
			int growSize);  // 1021
} /* size: 334, variables: 1, inline expansions: 18 (1305 bytes) */

// <000D7AF7> tier0/cvar.cpp:1028
// variable: 1
void CConCommandHash::Insert(ConCommandBase* cmd)
{
	CCommandHashHandle_t hHash; // 1031
} /* size: 0, variables: 1 */

// <000CEF8B> tier0/cvar.cpp:1042
// variables: 4
// function calls: 11
void CConCommandHash::FastInsert(ConCommandBase* cmd)
{
	intp iHashData; // 1045
	HashEntry_t* pHashData; // 1046
	HashKey_t key; // 1050
	int iBucket; // 1057
	HashEntry_t::HashEntry_t(); // 1479
	Construct<CConCommandHash::HashEntry_t>(HashEntry_t* pMemory); // 741
	Alloc(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
		bool multilist);  // 1045
	HashStringFastCaseless(const char* pszKey); // 194
	Hash(const ConCommandBase* cmd); // 1050
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::operator[](
			intp i);  // 494
	operator[](const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
			long long int i);  // 1046
	CUtlMemory<long long int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::operator[](
			int i);  // 1058
	CUtlMemory<long long int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::operator[](
			int i);  // 1059
} /* size: 111, variables: 4, inline expansions: 11 (61 bytes) */

// <000CE97C> tier0/cvar.cpp:1067
// variables: 3
// function calls: 19
void CConCommandHash::Remove(CCommandHashHandle_t hHash)
{
	HashEntry_t* entry; // 1069
	HashKey_t iBucket; // 1070
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::operator[](
			intp i);  // 494
	operator[](const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
			long long int i);  // 1069
	CUtlMemory<long long int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::operator[](
			int i);  // 1071
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 81
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::HeaderToBlock(
			const BlockHeader_t* pHeader);  // 131
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::IsInBlock(
			intp i,
			BlockHeader_t* pBlockHeader);  // 85
	{
		BlockHeader_t* pbh; // 88
		CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 90
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::GetIndex(
		const Iterator_t& it);  // 86
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::IsIdxAfter(
			intp i,
			const Iterator_t& it);  // 591
	IsValidIndex(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this,
			long long int i);  // 749
	CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::operator[](
			intp i);  // 367
	InternalElement(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
			long long int i);  // 752
	Destruct<CConCommandHash::HashEntry_t>(HashEntry_t* pMemory); // 753
	{
	}
	Free(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
		long long int elem);  // 907
	Remove(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
		long long int elem);  // 1083
	Next(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this,
		long long int i);  // 1074
} /* size: 0, variables: 2, inline expansions: 17 (1231 bytes) */

// <000CE8F6> tier0/cvar.cpp:1089
// function call: 1
void CConCommandHash::RemoveAll()
{
	CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::RemoveAll(); // 1091
} /* size: 0, inline expansions: 1 (0 bytes) */

// <000CE704> tier0/cvar.cpp:1098
// variables: 3
// function calls: 5
void CConCommandHash::Find(const char* name, HashKey_t hashkey)
{
	int iBucket; // 1101
	{
		IndexLocalType_t iElement; // 1103
		{
			const HashEntry_t& element; // 1105
			CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::operator[](
					intp i);  // 500
			operator[](const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this,
					long long int i);  // 1105
		}
		CUtlMemory<long long int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::operator[](
				int i);  // 1103
		Next(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this,
			long long int i);  // 1103
	}
} /* size: 108, variables: 1 */

// <000CE27F> tier0/cvar.cpp:1120
// variables: 8
// function calls: 11
void CConCommandHash::Find(const ConCommandBase* cmd)
{
	HashKey_t hashkey; // 1130
	int iBucket; // 1131
	const char   __FUNCTION__; // 58322
	CCommandHashHandle_t dbghand; // 1152
	{
		IndexLocalType_t iElement; // 1134
		{
			const HashEntry_t& element; // 1136
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1142
			}
			CUtlFixedMemory<UtlLinkedListElem_t<CConCommandHash::HashEntry_t, long long int> >::operator[](
					intp i);  // 500
			operator[](const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this,
					long long int i);  // 1136
			HashStringFastCaseless(const char* pszKey); // 126
			CConCommandHash::Find(
				const char* name);  // 1142
		}
		CUtlMemory<long long int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::operator[](
				int i);  // 1134
		Next(const CUtlLinkedList<CConCommandHash::HashEntry_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this,
			long long int i);  // 1134
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1154
	}
	HashStringFastCaseless(const char* pszKey); // 194
	Hash(const ConCommandBase* cmd); // 1130
	HashStringFastCaseless(const char* pszKey); // 126
	CConCommandHash::Find(
		const char* name);  // 1152
} /* size: 285, variables: 4, inline expansions: 4 (74 bytes) */

