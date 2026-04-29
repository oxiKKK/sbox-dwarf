
//
// public/tier0/icvar.h
//
//	referenced by: libengine2.so
//				   libtier0.so
//
//	functions: 16
//	classes: 2
//

// <014D5E22> ../public/tier0/icvar.h:27
void IConVarListener::IConVarListener()
{
} /* size: 0 */

// <014D5E06> ../public/tier0/icvar.h:27
inline void IConVarListener::IConVarListener()
{
} /* size: 0 */

// <014CAED5> ../public/tier0/icvar.h:27
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 8
class IConVarListener {
	void ~IConVarListener(IConVarListener* );
	void IConVarListener(IConVarListener* , IConVarListener& );
	void IConVarListener(IConVarListener* , const IConVarListener& );
	void IConVarListener(IConVarListener* );
	int ()(void) * * _vptr.IConVarListener; /* 0 8 */
	/* ../public/tier0/icvar.h:30 */
	virtual void OnConVarRegistered(IConVarListener* , const ConCommandBase* );
	/* ../public/tier0/icvar.h:31 */
	virtual void OnConVarChanged(IConVarListener* , ConVar* , const char* , float);
	void ~IConVarListener(class IConVarListener *); /* linkage=_ZN15IConVarListenerD4Ev */
	void IConVarListener(class IConVarListener *, class IConVarListener &); /* linkage=_ZN15IConVarListenerC4EOS_ */
	void IConVarListener(class IConVarListener *, const class IConVarListener  &); /* linkage=_ZN15IConVarListenerC4ERKS_ */
	void IConVarListener(class IConVarListener *); /* linkage=_ZN15IConVarListenerC4Ev */
	virtual void OnConVarRegistered(class IConVarListener *, const class ConCommandBase  *); /* linkage=_ZN15IConVarListener18OnConVarRegisteredEPK14ConCommandBase */
	virtual void OnConVarChanged(class IConVarListener *, class ConVar *, const char  *, float); /* linkage=_ZN15IConVarListener15OnConVarChangedEP6ConVarPKcf */
};

// <000D604D> ../public/tier0/icvar.h:37
void ICvar::ICvar()
{
} /* size: 0 */

// <000D6031> ../public/tier0/icvar.h:37
inline void ICvar::ICvar()
{
} /* size: 0 */

// <000BC50E> ../public/tier0/icvar.h:37
// member functions: 34
// member variable: 1
// vtable entries: 17
// class size: 8
class ICvar : public IAppSystem {
	/* ../public/tier0/icvar.h:80 */
	class Iterator {
		/* ../public/tier0/icvar.h:83 */
		void Iterator(Iterator* , ICvar* );
		/* ../public/tier0/icvar.h:84 */
		void ~Iterator(Iterator* );
		/* ../public/tier0/icvar.h:85 */
		void SetFirst(Iterator* );
		/* ../public/tier0/icvar.h:86 */
		void Next(Iterator* );
		/* ../public/tier0/icvar.h:87 */
		bool IsValid(const Iterator* );
		/* ../public/tier0/icvar.h:88 */
		ConCommandBase* Get(Iterator* );
	private:
		ICVarIteratorInternal * m_pIter; /* 0 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/icvar.h:95 */
	class ICVarIteratorInternal {
		void ICVarIteratorInternal(ICVarIteratorInternal* , const ICVarIteratorInternal& );
		void ICVarIteratorInternal(ICVarIteratorInternal* );
		int ()(void) * * _vptr.ICVarIteratorInternal; /* 0 8 */
		/* ../public/tier0/icvar.h:98 */
		virtual void ~ICVarIteratorInternal(ICVarIteratorInternal* );
		/* ../public/tier0/icvar.h:99 */
		virtual void SetFirst(ICVarIteratorInternal* );
		/* ../public/tier0/icvar.h:100 */
		virtual void Next(ICVarIteratorInternal* );
		/* ../public/tier0/icvar.h:101 */
		virtual bool IsValid(const ICVarIteratorInternal* );
		/* ../public/tier0/icvar.h:102 */
		virtual ConCommandBase* Get(ICVarIteratorInternal* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void ~ICvar(ICvar* );
	void ICvar(ICvar* , ICvar& );
	void ICvar(ICvar* , const ICvar& );
	void ICvar(ICvar* );
	/* ../public/tier0/icvar.h:41 */
	virtual CVarDLLIdentifier_t AllocateDLLIdentifier(ICvar* );
	/* ../public/tier0/icvar.h:44 */
	virtual void RegisterConCommand(ICvar* , ConCommandBase* );
	/* ../public/tier0/icvar.h:45 */
	virtual void UnregisterConCommand(ICvar* , ConCommandBase* );
	/* ../public/tier0/icvar.h:46 */
	virtual void UnregisterConCommands(ICvar* , CVarDLLIdentifier_t);
	/* ../public/tier0/icvar.h:50 */
	virtual const char* GetCommandLineValue(ICvar* , const char* );
	/* ../public/tier0/icvar.h:53 */
	virtual ConCommandBase* FindCommandBase(ICvar* , const char* );
	/* ../public/tier0/icvar.h:54 */
	virtual const ConCommandBase* FindCommandBase(const ICvar* , const char* );
	/* ../public/tier0/icvar.h:55 */
	virtual ConVar* FindVar(ICvar* , const char* );
	/* ../public/tier0/icvar.h:56 */
	virtual const ConVar* FindVar(const ICvar* , const char* );
	/* ../public/tier0/icvar.h:57 */
	virtual ConCommand* FindCommand(ICvar* , const char* );
	/* ../public/tier0/icvar.h:58 */
	virtual const ConCommand* FindCommand(const ICvar* , const char* );
	/* ../public/tier0/icvar.h:60 */
	virtual void CallGlobalChangeCallbacks(ICvar* , ConVar* , const char* , float);
protected:
	/* ../public/tier0/icvar.h:106 */
	virtual ICVarIteratorInternal* FactoryInternalIterator(ICvar* );
	/* ../public/tier0/icvar.h:110 */
	virtual void InstallConVarListener(ICvar* , IConVarListener* );
	/* ../public/tier0/icvar.h:111 */
	virtual void RemoveConVarListener(ICvar* , IConVarListener* );
	/* ../public/tier0/icvar.h:113 */
	virtual void ResetConVarsToDefaultValues(ICvar* , const char* );
	/* ../public/tier0/icvar.h:115 */
	virtual const characterset_t* GetDefaultCommandBreakSet(const ICvar* );
};

// <000D6742> ../public/tier0/icvar.h:95
void ICVarIteratorInternal::ICVarIteratorInternal()
{
} /* size: 0 */

// <000D6726> ../public/tier0/icvar.h:95
inline void ICVarIteratorInternal::ICVarIteratorInternal()
{
} /* size: 0 */

// <000D6B36> ../public/tier0/icvar.h:98
void ICVarIteratorInternal::~ICVarIteratorInternal()
{
} /* size: 0 */

// <000D6B06> ../public/tier0/icvar.h:98
inline void ICVarIteratorInternal::~ICVarIteratorInternal()
{
} /* size: 0 */

// <014E5BF4> ../public/tier0/icvar.h:118
void Iterator::Iterator(ICvar* icvar)
{
} /* size: 0 */

// <014E5BCC> ../public/tier0/icvar.h:118
inline void Iterator::Iterator(ICvar* icvar)
{
} /* size: 0 */

// <014E5BB5> ../public/tier0/icvar.h:123
void Iterator::~Iterator()
{
} /* size: 0 */

// <014E5B99> ../public/tier0/icvar.h:123
inline void Iterator::~Iterator()
{
} /* size: 0 */

// <014E5B7D> ../public/tier0/icvar.h:128
inline void Iterator::SetFirst()
{
} /* size: 0 */

// <014E5B61> ../public/tier0/icvar.h:133
inline void Iterator::Next()
{
} /* size: 0 */

// <014E5B45> ../public/tier0/icvar.h:138
inline void Iterator::IsValid()
{
} /* size: 0 */

// <014E5B29> ../public/tier0/icvar.h:143
inline void Iterator::Get()
{
} /* size: 0 */

