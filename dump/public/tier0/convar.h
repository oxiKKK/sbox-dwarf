
//
// public/tier0/convar.h
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
//	functions: 178
//	classes: 19
//

// <02EB082A> ../public/tier0/convar.h:55
void ICommandCallback::ICommandCallback()
{
} /* size: 0 */

// <02EB080E> ../public/tier0/convar.h:55
inline void ICommandCallback::ICommandCallback()
{
} /* size: 0 */

// <00402818> ../public/tier0/convar.h:55
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class ICommandCallback {
	void ICommandCallback(ICommandCallback* , ICommandCallback& );
	void ICommandCallback(ICommandCallback* , const ICommandCallback& );
	void ICommandCallback(ICommandCallback* );
	void ~ICommandCallback(ICommandCallback* );
	int ()(void) * * _vptr.ICommandCallback; /* 0 8 */
	/* ../public/tier0/convar.h:58 */
	virtual void CommandCallback(ICommandCallback* , const CCommandContext& , const CCommand& );
	void ICommandCallback(class ICommandCallback *, class ICommandCallback &); /* linkage=_ZN16ICommandCallbackC4EOS_ */
	void ICommandCallback(class ICommandCallback *, const class ICommandCallback  &); /* linkage=_ZN16ICommandCallbackC4ERKS_ */
	void ICommandCallback(class ICommandCallback *); /* linkage=_ZN16ICommandCallbackC4Ev */
	void ~ICommandCallback(class ICommandCallback *); /* linkage=_ZN16ICommandCallbackD4Ev */
	virtual void CommandCallback(class ICommandCallback *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN16ICommandCallback15CommandCallbackERK15CCommandContextRK8CCommand */
};

// <02EB07F7> ../public/tier0/convar.h:61
void ICommandCompletionCallback::ICommandCompletionCallback()
{
} /* size: 0 */

// <02EB07DB> ../public/tier0/convar.h:61
inline void ICommandCompletionCallback::ICommandCompletionCallback()
{
} /* size: 0 */

// <004028EA> ../public/tier0/convar.h:61
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class ICommandCompletionCallback {
	void ICommandCompletionCallback(ICommandCompletionCallback* , ICommandCompletionCallback& );
	void ICommandCompletionCallback(ICommandCompletionCallback* , const ICommandCompletionCallback& );
	void ICommandCompletionCallback(ICommandCompletionCallback* );
	void ~ICommandCompletionCallback(ICommandCompletionCallback* );
	int ()(void) * * _vptr.ICommandCompletionCallback; /* 0 8 */
	/* ../public/tier0/convar.h:64 */
	virtual int CommandCompletionCallback(ICommandCompletionCallback* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	void ICommandCompletionCallback(class ICommandCompletionCallback *, class ICommandCompletionCallback &); /* linkage=_ZN26ICommandCompletionCallbackC4EOS_ */
	void ICommandCompletionCallback(class ICommandCompletionCallback *, const class ICommandCompletionCallback  &); /* linkage=_ZN26ICommandCompletionCallbackC4ERKS_ */
	void ICommandCompletionCallback(class ICommandCompletionCallback *); /* linkage=_ZN26ICommandCompletionCallbackC4Ev */
	void ~ICommandCompletionCallback(class ICommandCompletionCallback *); /* linkage=_ZN26ICommandCompletionCallbackD4Ev */
	virtual int CommandCompletionCallback(class ICommandCompletionCallback *, const char  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN26ICommandCompletionCallback25CommandCompletionCallbackEPKcR10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEE */
};

// <0007C6A6> ../public/tier0/convar.h:91
// member functions: 2
// class size: 1
class CCommandContext {
	/* ../public/tier0/convar.h:95 */
	void CCommandContext(CCommandContext* );
	void CCommandContext(class CCommandContext *); /* linkage=_ZN15CCommandContextC4Ev */
};

// <0134378F> ../public/tier0/convar.h:95
void CCommandContext::CCommandContext()
{
} /* size: 0 */

// <01343776> ../public/tier0/convar.h:95
inline void CCommandContext::CCommandContext()
{
} /* size: 0 */

// <0007C3EE> ../public/tier0/convar.h:105
// member functions: 32
// member variables: 5
// class size: 1,544
class CCommand {
	/* ../public/tier0/convar.h:108 */
	void CCommand(CCommand* );
	/* ../public/tier0/convar.h:109 */
	void CCommand(CCommand* , int, const char** );
	/* ../public/tier0/convar.h:110 */
	void CCommand(CCommand* , const CCommand& );
	/* ../public/tier0/convar.h:111 */
	CCommand& operator=(CCommand* , const CCommand& );
	/* ../public/tier0/convar.h:119 */
	bool Tokenize(CCommand* , const char* , const characterset_t* );
	/* ../public/tier0/convar.h:121 */
	void Reset(CCommand* );
	/* ../public/tier0/convar.h:128 */
	int ArgC(const CCommand* );
	/* ../public/tier0/convar.h:129 */
	const char* * ArgV(const CCommand* );
	/* ../public/tier0/convar.h:130 */
	const char* ArgS(const CCommand* );
	/* ../public/tier0/convar.h:131 */
	const char* GetCommandString(const CCommand* );
	/* ../public/tier0/convar.h:132 */
	const char* operator[](const CCommand* , int);
	/* ../public/tier0/convar.h:133 */
	const char* Arg(const CCommand* , int);
	/* ../public/tier0/convar.h:136 */
	const char* FindArg(const CCommand* , const char* );
	/* ../public/tier0/convar.h:137 */
	int FindArgInt(const CCommand* , const char* , int);
	/* ../public/tier0/convar.h:139 */
	CCommand StripArg0(const CCommand* );
	/* ../public/tier0/convar.h:141 */
	int MaxCommandLength(void);
private:
	int m_nArgc; /* 0 4 */
	int m_nArgv0Size; /* 4 4 */
	char m_pArgSBuffer[512]; /* 8 512 */
	char m_pArgvBuffer[512]; /* 520 512 */
	const char * m_ppArgv[64]; /* 1032 512 */
	void CCommand(class CCommand *); /* linkage=_ZN8CCommandC4Ev */
	void CCommand(class CCommand *, int, const char  * *); /* linkage=_ZN8CCommandC4EiPPKc */
	void CCommand(class CCommand *, const class CCommand  &); /* linkage=_ZN8CCommandC4ERKS_ */
	class CCommand & operator=(class CCommand *, const class CCommand  &); /* linkage=_ZN8CCommandaSERKS_ */
	bool Tokenize(class CCommand *, const char  *, const class characterset_t  *); /* linkage=_ZN8CCommand8TokenizeEPKcPK14characterset_t */
	void Reset(class CCommand *); /* linkage=_ZN8CCommand5ResetEv */
	int ArgC(const class CCommand  *); /* linkage=_ZNK8CCommand4ArgCEv */
	const char  * * ArgV(const class CCommand  *); /* linkage=_ZNK8CCommand4ArgVEv */
	const char  * ArgS(const class CCommand  *); /* linkage=_ZNK8CCommand4ArgSEv */
	const char  * GetCommandString(const class CCommand  *); /* linkage=_ZNK8CCommand16GetCommandStringEv */
	const char  * operator[](const class CCommand  *, int); /* linkage=_ZNK8CCommandixEi */
	const char  * Arg(const class CCommand  *, int); /* linkage=_ZNK8CCommand3ArgEi */
	const char  * FindArg(const class CCommand  *, const char  *); /* linkage=_ZNK8CCommand7FindArgEPKc */
	int FindArgInt(const class CCommand  *, const char  *, int); /* linkage=_ZNK8CCommand10FindArgIntEPKci */
	class CCommand StripArg0(const class CCommand  *); /* linkage=_ZNK8CCommand9StripArg0Ev */
	int MaxCommandLength(void); /* linkage=_ZN8CCommand16MaxCommandLengthEv */
};

// <0442FED8> ../public/tier0/convar.h:105
// member functions: 32
// member variables: 5
// class size: 1,544
class CCommand {
	/* ../public/tier0/convar.h:145 */
	enum {
		COMMAND_MAX_ARGC = 64,
		COMMAND_MAX_LENGTH = 512,
	};
	/* ../public/tier0/convar.h:108 */
	void CCommand(CCommand* );
	/* ../public/tier0/convar.h:109 */
	void CCommand(CCommand* , int, const char** );
	/* ../public/tier0/convar.h:110 */
	void CCommand(CCommand* , const CCommand& );
	/* ../public/tier0/convar.h:111 */
	CCommand& operator=(CCommand* , const CCommand& );
	/* ../public/tier0/convar.h:119 */
	bool Tokenize(CCommand* , const char* , const characterset_t* );
	/* ../public/tier0/convar.h:121 */
	void Reset(CCommand* );
	/* ../public/tier0/convar.h:128 */
	int ArgC(const CCommand* );
	/* ../public/tier0/convar.h:129 */
	const char* * ArgV(const CCommand* );
	/* ../public/tier0/convar.h:130 */
	const char* ArgS(const CCommand* );
	/* ../public/tier0/convar.h:131 */
	const char* GetCommandString(const CCommand* );
	/* ../public/tier0/convar.h:132 */
	const char* operator[](const CCommand* , int);
	/* ../public/tier0/convar.h:133 */
	const char* Arg(const CCommand* , int);
	/* ../public/tier0/convar.h:136 */
	const char* FindArg(const CCommand* , const char* );
	/* ../public/tier0/convar.h:137 */
	int FindArgInt(const CCommand* , const char* , int);
	/* ../public/tier0/convar.h:139 */
	CCommand StripArg0(const CCommand* );
	/* ../public/tier0/convar.h:141 */
	int MaxCommandLength(void);
private:
	int m_nArgc; /* 0 4 */
	int m_nArgv0Size; /* 4 4 */
	char m_pArgSBuffer[512]; /* 8 512 */
	char m_pArgvBuffer[512]; /* 520 512 */
	const char * m_ppArgv[64]; /* 1032 512 */
	void CCommand(class CCommand *); /* linkage=_ZN8CCommandC4Ev */
	void CCommand(class CCommand *, int, const char  * *); /* linkage=_ZN8CCommandC4EiPPKc */
	void CCommand(class CCommand *, const class CCommand  &); /* linkage=_ZN8CCommandC4ERKS_ */
	class CCommand & operator=(class CCommand *, const class CCommand  &); /* linkage=_ZN8CCommandaSERKS_ */
	bool Tokenize(class CCommand *, const char  *, const class characterset_t  *); /* linkage=_ZN8CCommand8TokenizeEPKcPK14characterset_t */
	void Reset(class CCommand *); /* linkage=_ZN8CCommand5ResetEv */
	int ArgC(const class CCommand  *); /* linkage=_ZNK8CCommand4ArgCEv */
	const char  * * ArgV(const class CCommand  *); /* linkage=_ZNK8CCommand4ArgVEv */
	const char  * ArgS(const class CCommand  *); /* linkage=_ZNK8CCommand4ArgSEv */
	const char  * GetCommandString(const class CCommand  *); /* linkage=_ZNK8CCommand16GetCommandStringEv */
	const char  * operator[](const class CCommand  *, int); /* linkage=_ZNK8CCommandixEi */
	const char  * Arg(const class CCommand  *, int); /* linkage=_ZNK8CCommand3ArgEi */
	const char  * FindArg(const class CCommand  *, const char  *); /* linkage=_ZNK8CCommand7FindArgEPKc */
	int FindArgInt(const class CCommand  *, const char  *, int); /* linkage=_ZNK8CCommand10FindArgIntEPKci */
	class CCommand StripArg0(const class CCommand  *); /* linkage=_ZNK8CCommand9StripArg0Ev */
	int MaxCommandLength(void); /* linkage=_ZN8CCommand16MaxCommandLengthEv */
};

// <0443CEFE> ../public/tier0/convar.h:108
void CCommand::CCommand()
{
} /* size: 0 */

// <0443CEE5> ../public/tier0/convar.h:108
inline void CCommand::CCommand()
{
} /* size: 0 */

// <0443CECC> ../public/tier0/convar.h:121
inline void CCommand::Reset()
{
} /* size: 0 */

// <0443CEB0> ../public/tier0/convar.h:157
inline void CCommand::ArgC()
{
} /* size: 0 */

// <01B4EA24> ../public/tier0/convar.h:162
inline void CCommand::ArgV()
{
} /* size: 0 */

// <0443CE94> ../public/tier0/convar.h:167
inline void CCommand::ArgS()
{
} /* size: 0 */

// <0443CE6C> ../public/tier0/convar.h:177
inline void CCommand::Arg(int nIndex)
{
} /* size: 0 */

// <036262F6> ../public/tier0/convar.h:187
inline void CCommand::operator[](int nIndex)
{
} /* size: 0 */

// <044318EC> ../public/tier0/convar.h:196
// member functions: 27
// member variables: 6
// vtable entries: 5
// class size: 104
class ConCommand : public ConCommandBase {
	/* ../public/tier0/convar.h:200 */
	struct CallbackInfo_t {
		/* ../public/tier0/convar.h:209 */
		union {
			FnCommandCallback_t m_fnCommandCallback; /* 0 8 */
			FnCommandCallbackVoid_t m_fnVoidCommandCallback; /* 0 8 */
			FnCommandCallbackNoContext_t m_fnContextlessCommandCallback; /* 0 8 */
			ICommandCallback * m_pCommandCallback; /* 0 8 */
		};
		/* ../public/tier0/convar.h:202 */
		void CallbackInfo_t(CallbackInfo_t* );
		union {
			FnCommandCallback_t m_fnCommandCallback; /* 0 8 */
			FnCommandCallbackVoid_t m_fnVoidCommandCallback; /* 0 8 */
			FnCommandCallbackNoContext_t m_fnContextlessCommandCallback; /* 0 8 */
			ICommandCallback * m_pCommandCallback; /* 0 8 */
		}; /* 0 8 */
		bool m_bUsingCommandCallbackInterface:1; /* 8: 0 1 */
		bool m_bHasVoidCommandCallback:1; /* 8: 1 1 */
		bool m_bHasContextlessCommandCallback:1; /* 8: 2 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/convar.h:274 */
	union {
		FnCommandCompletionCallback m_fnCompletionCallback; /* 0 8 */
		ICommandCompletionCallback * m_pCommandCompletionCallback; /* 0 8 */
	};
public:
	/* class ConCommandBase <ancestor>; */ /* 0 0 */
	void ConCommand(ConCommand* , const ConCommand& );
	/* tier0_perproject/convar.cpp:191 */
	void ConCommand(ConCommand* , const char* , FnCommandCallback_t, const char* , int64, FnCommandCompletionCallback);
	/* tier0_perproject/convar.cpp:234 */
	void ConCommand(ConCommand* , const char* , FnCommandCallbackNoContext_t, const char* , int64, FnCommandCompletionCallback);
	/* tier0_perproject/convar.cpp:212 */
	void ConCommand(ConCommand* , const char* , FnCommandCallbackVoid_t, const char* , int64, FnCommandCompletionCallback);
	/* tier0_perproject/convar.cpp:256 */
	void ConCommand(ConCommand* , const char* , ICommandCallback* , const char* , int64, ICommandCompletionCallback* );
	/* tier0_perproject/convar.cpp:284 */
	virtual void ~ConCommand(ConCommand* );
	/* tier0_perproject/convar.cpp:299 */
	virtual bool IsCommand(const ConCommand* );
	/* tier0_perproject/convar.cpp:360 */
	virtual int AutoCompleteSuggest(ConCommand* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* tier0_perproject/convar.cpp:380 */
	virtual bool CanAutoComplete(ConCommand* );
	/* tier0_perproject/convar.cpp:308 */
	virtual void Dispatch(ConCommand* , const CCommandContext& , const CCommand& );
	/* ../public/tier0/convar.h:245 */
	void Run(ConCommand* , const char* );
	/* ../public/tier0/convar.h:255 */
	CUtlVector<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >& GetCallbacks(ConCommand* );
protected:
	/* tier0_perproject/convar.cpp:276 */
	virtual void Create(ConCommand* , const char* , const char* , ConVarFlags_t);
private:
	union {
		FnCommandCompletionCallback m_fnCompletionCallback; /* 48 8 */
		ICommandCompletionCallback * m_pCommandCompletionCallback; /* 48 8 */
	}; /* 48 8 */
	bool m_bHasCompletionCallback:1; /* 56: 0 1 */
	bool m_bCompletionUsingCommandCallbackInterface:1; /* 56: 1 1 */
	CUtlVector<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> > m_Callbacks; /* 64 32 */
	ConCommand * m_pParent; /* 96 8 */
	void ConCommand(class ConCommand *, const class ConCommand  &); /* linkage=_ZN10ConCommandC4ERKS_ */
	void ConCommand(class ConCommand *, const char  *, FnCommandCallback_t, const char  *, int64, FnCommandCompletionCallback); /* linkage=_ZN10ConCommandC4EPKcPFvRK15CCommandContextRK8CCommandES1_xPFvS1_R10CUtlVectorI10CUtlString10CUtlMemoryISB_iEEE */
	void ConCommand(class ConCommand *, const char  *, FnCommandCallbackNoContext_t, const char  *, int64, FnCommandCompletionCallback); /* linkage=_ZN10ConCommandC4EPKcPFvRK8CCommandES1_xPFvS1_R10CUtlVectorI10CUtlString10CUtlMemoryIS8_iEEE */
	void ConCommand(class ConCommand *, const char  *, FnCommandCallbackVoid_t, const char  *, int64, FnCommandCompletionCallback); /* linkage=_ZN10ConCommandC4EPKcPFvvES1_xPFvS1_R10CUtlVectorI10CUtlString10CUtlMemoryIS5_iEEE */
	void ConCommand(class ConCommand *, const char  *, class ICommandCallback *, const char  *, int64, class ICommandCompletionCallback *); /* linkage=_ZN10ConCommandC4EPKcP16ICommandCallbackS1_xP26ICommandCompletionCallback */
	virtual void ~ConCommand(class ConCommand *); /* linkage=_ZN10ConCommandD4Ev */
	virtual bool IsCommand(const class ConCommand  *); /* linkage=_ZNK10ConCommand9IsCommandEv */
	virtual int AutoCompleteSuggest(class ConCommand *, const char  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN10ConCommand19AutoCompleteSuggestEPKcR10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEE */
	virtual bool CanAutoComplete(class ConCommand *); /* linkage=_ZN10ConCommand15CanAutoCompleteEv */
	virtual void Dispatch(class ConCommand *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN10ConCommand8DispatchERK15CCommandContextRK8CCommand */
	void Run(class ConCommand *, const char  *); /* linkage=_ZN10ConCommand3RunEPKc */
	class CUtlVector<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> > & GetCallbacks(class ConCommand *); /* linkage=_ZN10ConCommand12GetCallbacksEv */
	/* <443d51c> tier0_perproject/convar.cpp:276 */
	virtual void Create(class ConCommand *, const char  *, const char  *, enum ConVarFlags_t); /* linkage=_ZN10ConCommand6CreateEPKcS1_13ConVarFlags_t */
};

// <0443CE55> ../public/tier0/convar.h:202
void CallbackInfo_t::CallbackInfo_t()
{
} /* size: 0 */

// <0443CE3C> ../public/tier0/convar.h:202
inline void CallbackInfo_t::CallbackInfo_t()
{
} /* size: 0 */

// <04E31E6D> ../public/tier0/convar.h:225
void ConCommand::ConCommand(const char* pName, FnCommandCallback_t callback, const char* pHelpString, int64 flags, FnCommandCompletionCallback completionFunc)
{
} /* size: 0 */

// <02E0F3FC> ../public/tier0/convar.h:231
void ConCommand::ConCommand(const char* pName, ICommandCallback* pCallback, const char* pHelpString, int64 flags, ICommandCompletionCallback* pCommandCompletionCallback)
{
} /* size: 0 */

// <04E31E51> ../public/tier0/convar.h:234
void ConCommand::~ConCommand()
{
} /* size: 0 */

// <013435ED> ../public/tier0/convar.h:245
// variables: 2
// function calls: 3
void ConCommand::Run(const char* arguments)
{
	CCommandContext ctx; // 247
	CCommand cmd; // 249
	CCommandContext::CCommandContext(); // 247
	CCommand::Reset(); // 108
	CCommand::CCommand(); // 249
} /* size: 121, variables: 2, inline expansions: 3 (36 bytes) */

// <0443CE23> ../public/tier0/convar.h:255
inline void ConCommand::GetCallbacks()
{
} /* size: 0 */

// <044333CC> ../public/tier0/convar.h:293
// member functions: 101
// member variables: 10
// vtable entries: 23
// class size: 144
class ConVar : public ConCommandBase, public IConVar {
	/* ../public/tier0/convar.h:406 */
	struct CVValue_t {
		char * m_pszString; /* 0 8 */
		int m_StringLength; /* 8 4 */
		float m_fValue; /* 12 4 */
		int m_nValue; /* 16 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class ConCommandBase <ancestor>; */ /* 0 0 */
	/* class IConVar <ancestor>; */ /* 48 8 */
	/* ../public/tier0/convar.h:301 */
	void ConVar(ConVar* , const char* , const char* , int64);
	/* ../public/tier0/convar.h:305 */
	void ConVar(ConVar* , const char* , const char* , int64, const char* );
	/* ../public/tier0/convar.h:310 */
	void ConVar(ConVar* , const char* , const char* , int64, const char* , bool, float, bool, float);
	/* ../public/tier0/convar.h:315 */
	void ConVar(ConVar* , const char* , const char* , int64, const char* , FnChangeCallback_t);
	/* ../public/tier0/convar.h:320 */
	void ConVar(ConVar* , const char* , const char* , int64, const char* , bool, float, bool, float, FnChangeCallback_t);
	/* tier0_perproject/convar.cpp:397 */
	virtual void ~ConVar(ConVar* );
	/* tier0_perproject/convar.cpp:448 */
	virtual bool IsFlagSet(const ConVar* , ConVarFlags_t);
	/* tier0_perproject/convar.cpp:458 */
	virtual const char* GetHelpText(const ConVar* );
	/* tier0_perproject/convar.cpp:468 */
	virtual bool IsRegistered(const ConVar* );
	/* tier0_perproject/convar.cpp:473 */
	virtual const char* GetName(const ConVar* );
	/* tier0_perproject/convar.cpp:478 */
	virtual const char* GetBaseName(const ConVar* );
	/* tier0_perproject/convar.cpp:463 */
	virtual void AddFlags(ConVar* , ConVarFlags_t);
	/* tier0_perproject/convar.cpp:453 */
	virtual ConVarFlags_t GetFlags(const ConVar* );
	/* tier0_perproject/convar.cpp:487 */
	virtual bool IsCommand(const ConVar* );
	/* tier0_perproject/convar.cpp:419 */
	void InstallChangeCallback(ConVar* , FnChangeCallback_t, bool);
	/* tier0_perproject/convar.cpp:443 */
	void RemoveChangeCallback(ConVar* , FnChangeCallback_t);
	/* ../public/tier0/convar.h:344 */
	int GetChangeCallbackCount(const ConVar* );
	/* ../public/tier0/convar.h:345 */
	FnChangeCallback_t GetChangeCallback(const ConVar* , int);
	/* ../public/tier0/convar.h:493 */
	float GetFloat(const ConVar* );
	/* ../public/tier0/convar.h:502 */
	int GetInt(const ConVar* );
	/* ../public/tier0/convar.h:511 */
	Color GetColor(const ConVar* );
	/* ../public/tier0/convar.h:351 */
	bool GetBool(const ConVar* );
	/* ../public/tier0/convar.h:535 */
	const char* GetString(const ConVar* );
	/* tier0_perproject/convar.cpp:819 */
	virtual void SetValue(ConVar* , const char* );
	/* tier0_perproject/convar.cpp:829 */
	virtual void SetValue(ConVar* , float);
	/* tier0_perproject/convar.cpp:839 */
	virtual void SetValue(ConVar* , int);
	/* tier0_perproject/convar.cpp:849 */
	virtual void SetValue(ConVar* , Color);
	/* tier0_perproject/convar.cpp:858 */
	void Revert(ConVar* );
	/* ../public/tier0/convar.h:371 */
	bool HasMin(const ConVar* );
	/* ../public/tier0/convar.h:375 */
	bool HasMax(const ConVar* );
	/* ../public/tier0/convar.h:380 */
	bool GetMin(const ConVar* , float& );
	/* ../public/tier0/convar.h:385 */
	bool GetMax(const ConVar* , float& );
	/* ../public/tier0/convar.h:391 */
	float GetMinValue(const ConVar* );
	/* ../public/tier0/convar.h:395 */
	float GetMaxValue(const ConVar* );
	/* ../public/tier0/convar.h:400 */
	const char* GetDefault(const ConVar* );
	/* ../public/tier0/convar.h:416 */
	CVValue_t& GetRawValue(ConVar* );
	/* ../public/tier0/convar.h:420 */
	const CVValue_t& GetRawValue(const ConVar* );
	/* ../public/tier0/convar.h:426 */
	virtual float GetFloatVirtualized(const ConVar* );
	/* ../public/tier0/convar.h:432 */
	virtual int GetIntVirtualized(const ConVar* );
	/* ../public/tier0/convar.h:437 */
	virtual bool GetBoolVirtualized(const ConVar* );
private:
	/* tier0_perproject/convar.cpp:501 */
	bool InternalSetColorFromString(ConVar* , const char* );
	/* tier0_perproject/convar.cpp:545 */
	virtual void InternalSetValue(ConVar* , const char* );
	/* tier0_perproject/convar.cpp:668 */
	virtual void InternalSetFloatValue(ConVar* , float);
	/* tier0_perproject/convar.cpp:693 */
	virtual void InternalSetIntValue(ConVar* , int);
	/* tier0_perproject/convar.cpp:722 */
	virtual void InternalSetColorValue(ConVar* , Color);
	/* tier0_perproject/convar.cpp:647 */
	virtual bool ClampValue(ConVar* , float& );
	/* tier0_perproject/convar.cpp:606 */
	virtual void ChangeStringValue(ConVar* , const char* , float);
	/* tier0_perproject/convar.cpp:744 */
	void Construct(ConVar* , const char* , const char* , ConVarFlags_t, const char* , bool, float, bool, float, FnChangeCallback_t);
	/* tier0_perproject/convar.cpp:496 */
	virtual void Init(ConVar* );
protected:
	ConVar * m_pParent; /* 56 8 */
	const char * m_pszDefaultValue; /* 64 8 */
	CVValue_t m_Value; /* 72 24 */
	float m_fMinVal; /* 96 4 */
	float m_fMaxVal; /* 100 4 */
	bool m_bHasMin; /* 104 1 */
	bool m_bHasMax; /* 105 1 */
	CUtlVector<void (*)(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> > m_fnChangeCallbacks; /* 112 32* /
	/* ../public/tier0/convar.h:483 */
	virtual void OnValueChanged(ConVar* );
	void Revert(class ConVar *); /* linkage=_ZN6ConVar6RevertEv */
	void ConVar(class ConVar *, const char  *, const char  *, int64); /* linkage=_ZN6ConVarC4EPKcS1_x */
	void ConVar(class ConVar *, const char  *, const char  *, int64, const char  *); /* linkage=_ZN6ConVarC4EPKcS1_xS1_ */
	void ConVar(class ConVar *, const char  *, const char  *, int64, const char  *, bool, float, bool, float); /* linkage=_ZN6ConVarC4EPKcS1_xS1_bfbf */
	void ConVar(class ConVar *, const char  *, const char  *, int64, const char  *, FnChangeCallback_t); /* linkage=_ZN6ConVarC4EPKcS1_xS1_PFvP7IConVarS1_fE */
	void ConVar(class ConVar *, const char  *, const char  *, int64, const char  *, bool, float, bool, float, FnChangeCallback_t); /* linkage=_ZN6ConVarC4EPKcS1_xS1_bfbfPFvP7IConVarS1_fE */
	virtual void ~ConVar(class ConVar *); /* linkage=_ZN6ConVarD4Ev */
	/* <443d2b6> tier0_perproject/convar.cpp:448 */
	virtual bool IsFlagSet(const class ConVar  *, enum ConVarFlags_t); /* linkage=_ZNK6ConVar9IsFlagSetE13ConVarFlags_t */
	virtual const char  * GetHelpText(const class ConVar  *); /* linkage=_ZNK6ConVar11GetHelpTextEv */
	virtual bool IsRegistered(const class ConVar  *); /* linkage=_ZNK6ConVar12IsRegisteredEv */
	/* <443d359> tier0_perproject/convar.cpp:473 */
	virtual const char  * GetName(const class ConVar  *); /* linkage=_ZNK6ConVar7GetNameEv */
	virtual const char  * GetBaseName(const class ConVar  *); /* linkage=_ZNK6ConVar11GetBaseNameEv */
	/* <443d2ec> tier0_perproject/convar.cpp:463 */
	virtual void AddFlags(class ConVar *, enum ConVarFlags_t); /* linkage=_ZN6ConVar8AddFlagsE13ConVarFlags_t */
	virtual enum ConVarFlags_t GetFlags(const class ConVar  *); /* linkage=_ZNK6ConVar8GetFlagsEv */
	virtual bool IsCommand(const class ConVar  *); /* linkage=_ZNK6ConVar9IsCommandEv */
	void InstallChangeCallback(class ConVar *, FnChangeCallback_t, bool); /* linkage=_ZN6ConVar21InstallChangeCallbackEPFvP7IConVarPKcfEb */
	void RemoveChangeCallback(class ConVar *, FnChangeCallback_t); /* linkage=_ZN6ConVar20RemoveChangeCallbackEPFvP7IConVarPKcfE */
	int GetChangeCallbackCount(const class ConVar  *); /* linkage=_ZNK6ConVar22GetChangeCallbackCountEv */
	FnChangeCallback_t GetChangeCallback(const class ConVar  *, int); /* linkage=_ZNK6ConVar17GetChangeCallbackEi */
	float GetFloat(const class ConVar  *); /* linkage=_ZNK6ConVar8GetFloatEv */
	int GetInt(const class ConVar  *); /* linkage=_ZNK6ConVar6GetIntEv */
	class Color GetColor(const class ConVar  *); /* linkage=_ZNK6ConVar8GetColorEv */
	bool GetBool(const class ConVar  *); /* linkage=_ZNK6ConVar7GetBoolEv */
	const char  * GetString(const class ConVar  *); /* linkage=_ZNK6ConVar9GetStringEv */
	/* <443d406> tier0_perproject/convar.cpp:819 */
	virtual void SetValue(class ConVar *, const char  *); /* linkage=_ZN6ConVar8SetValueEPKc */
	/* <443d462> tier0_perproject/convar.cpp:829 */
	virtual void SetValue(class ConVar *, float); /* linkage=_ZN6ConVar8SetValueEf */
	/* <443d4c0> tier0_perproject/convar.cpp:839 */
	virtual void SetValue(class ConVar *, int); /* linkage=_ZN6ConVar8SetValueEi */
	virtual void SetValue(class ConVar *, class Color); /* linkage=_ZN6ConVar8SetValueE5Color */
	bool HasMin(const class ConVar  *); /* linkage=_ZNK6ConVar6HasMinEv */
	bool HasMax(const class ConVar  *); /* linkage=_ZNK6ConVar6HasMaxEv */
	bool GetMin(const class ConVar  *, float &); /* linkage=_ZNK6ConVar6GetMinERf */
	bool GetMax(const class ConVar  *, float &); /* linkage=_ZNK6ConVar6GetMaxERf */
	float GetMinValue(const class ConVar  *); /* linkage=_ZNK6ConVar11GetMinValueEv */
	float GetMaxValue(const class ConVar  *); /* linkage=_ZNK6ConVar11GetMaxValueEv */
	const char  * GetDefault(const class ConVar  *); /* linkage=_ZNK6ConVar10GetDefaultEv */
	class CVValue_t & GetRawValue(class ConVar *); /* linkage=_ZN6ConVar11GetRawValueEv */
	const class CVValue_t  & GetRawValue(const class ConVar  *); /* linkage=_ZNK6ConVar11GetRawValueEv */
	virtual float GetFloatVirtualized(const class ConVar  *); /* linkage=_ZNK6ConVar19GetFloatVirtualizedEv */
	virtual int GetIntVirtualized(const class ConVar  *); /* linkage=_ZNK6ConVar17GetIntVirtualizedEv */
	virtual bool GetBoolVirtualized(const class ConVar  *); /* linkage=_ZNK6ConVar18GetBoolVirtualizedEv */
	bool InternalSetColorFromString(class ConVar *, const char  *); /* linkage=_ZN6ConVar26InternalSetColorFromStringEPKc */
	virtual void InternalSetValue(class ConVar *, const char  *); /* linkage=_ZN6ConVar16InternalSetValueEPKc */
	virtual void InternalSetFloatValue(class ConVar *, float); /* linkage=_ZN6ConVar21InternalSetFloatValueEf */
	virtual void InternalSetIntValue(class ConVar *, int); /* linkage=_ZN6ConVar19InternalSetIntValueEi */
	/* <443d3b2> tier0_perproject/convar.cpp:722 */
	virtual void InternalSetColorValue(class ConVar *, class Color); /* linkage=_ZN6ConVar21InternalSetColorValueE5Color */
	/* <443d382> tier0_perproject/convar.cpp:647 */
	virtual bool ClampValue(class ConVar *, float &); /* linkage=_ZN6ConVar10ClampValueERf */
	virtual void ChangeStringValue(class ConVar *, const char  *, float); /* linkage=_ZN6ConVar17ChangeStringValueEPKcf */
	void Construct(class ConVar *, const char  *, const char  *, enum ConVarFlags_t, const char  *, bool, float, bool, float, FnChangeCallback_t); /* linkage=_ZN6ConVar9ConstructEPKcS1_13ConVarFlags_tS1_bfbfPFvP7IConVarS1_fE */
	virtual void Init(class ConVar *); /* linkage=_ZN6ConVar4InitEv */
	/* <443d28d> ../public/tier0/convar.h:483 */
	virtual void OnValueChanged(class ConVar *); /* linkage=_ZN6ConVar14OnValueChangedEv */
};

// <05E827BF> ../public/tier0/convar.h:301
void ConVar::ConVar(const char* pName, const char* pDefaultValue, int64 flags)
{
} /* size: 0 */

// <05E8277F> ../public/tier0/convar.h:301
inline void ConVar::ConVar(const char* pName, const char* pDefaultValue, int64 flags)
{
} /* size: 0 */

// <04026C0F> ../public/tier0/convar.h:301
// function calls: 7
void ConVar::ConVar(const char* pName, const char* pDefaultValue, int64 flags)
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
} /* size: 124, inline expansions: 7 (117 bytes) */

// <05E82547> ../public/tier0/convar.h:305
// function calls: 7
void ConVar::ConVar(const char* pName, const char* pDefaultValue, int64 flags, const char* pHelpString)
{
	ConCommandBase::ConCommandBase(); // 307
	IConVar::IConVar(); // 307
	CUtlMemory<void (::ValidateGrowSize()(IConVar*, char const*, float), int>* this); // 475
	CUtlMemory<void (::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<void (::ResetDbgInfo()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 530
	CUtlVectorBase<void (::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<void (::CUtlVector()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 307
} /* size: 121, inline expansions: 7 (117 bytes) */

// <05E824FA> ../public/tier0/convar.h:305
inline void ConVar::ConVar(const char* pName, const char* pDefaultValue, int64 flags, const char* pHelpString)
{
} /* size: 0 */

// <03DAF7BF> ../public/tier0/convar.h:305
void ConVar::ConVar(const char* pName, const char* pDefaultValue, int64 flags, const char* pHelpString)
{
} /* size: 0 */

// <003DB741> ../public/tier0/convar.h:315
void ConVar::ConVar(const char* pName, const char* pDefaultValue, int64 flags, const char* pHelpString, FnChangeCallback_t callback)
{
} /* size: 0 */

// <003DB6E7> ../public/tier0/convar.h:315
inline void ConVar::ConVar(const char* pName, const char* pDefaultValue, int64 flags, const char* pHelpString, FnChangeCallback_t callback)
{
} /* size: 0 */

// <003445E2> ../public/tier0/convar.h:315
// function calls: 7
void ConVar::ConVar(const char* pName, const char* pDefaultValue, int64 flags, const char* pHelpString, FnChangeCallback_t callback)
{
	ConCommandBase::ConCommandBase(); // 317
	IConVar::IConVar(); // 317
	CUtlMemory<void (::ValidateGrowSize()(IConVar*, char const*, float), int>* this); // 475
	CUtlMemory<void (::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<void (::ResetDbgInfo()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 530
	CUtlVectorBase<void (::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<void (::CUtlVector()(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >* this); // 317
} /* size: 121, inline expansions: 7 (117 bytes) */

// <0024CB98> ../public/tier0/convar.h:320
void ConVar::ConVar(const char* pName, const char* pDefaultValue, int64 flags, const char* pHelpString, bool bMin, float fMin, bool bMax, float fMax, FnChangeCallback_t callback)
{
} /* size: 0 */

// <0024CB0A> ../public/tier0/convar.h:320
inline void ConVar::ConVar(const char* pName, const char* pDefaultValue, int64 flags, const char* pHelpString, bool bMin, float fMin, bool bMax, float fMax, FnChangeCallback_t callback)
{
} /* size: 0 */

// <05E4BFE3> ../public/tier0/convar.h:327
void ConVar::~ConVar()
{
} /* size: 0 */

// <05E824E1> ../public/tier0/convar.h:351
void ConVar::GetBool()
{
} /* size: 0 */

// <05BE173C> ../public/tier0/convar.h:351
inline void ConVar::GetBool()
{
} /* size: 0 */

// <013435D4> ../public/tier0/convar.h:371
inline void ConVar::HasMin()
{
} /* size: 0 */

// <013435BB> ../public/tier0/convar.h:375
inline void ConVar::HasMax()
{
} /* size: 0 */

// <013435A2> ../public/tier0/convar.h:391
inline void ConVar::GetMinValue()
{
} /* size: 0 */

// <01343589> ../public/tier0/convar.h:395
inline void ConVar::GetMaxValue()
{
} /* size: 0 */

// <01343570> ../public/tier0/convar.h:400
inline void ConVar::GetDefault()
{
} /* size: 0 */

// <05E824C8> ../public/tier0/convar.h:426
void ConVar::GetFloatVirtualized()
{
} /* size: 0 */

// <04444F9B> ../public/tier0/convar.h:426
// function call: 1
void ConVar::GetFloatVirtualized()
{
	ConVar::GetFloat(); // 428
} /* size: 14, inline expansions: 1 (4 bytes) */

// <05E824AF> ../public/tier0/convar.h:432
void ConVar::GetIntVirtualized()
{
} /* size: 0 */

// <04444F3D> ../public/tier0/convar.h:432
// function call: 1
void ConVar::GetIntVirtualized()
{
	ConVar::GetInt(); // 434
} /* size: 12, inline expansions: 1 (4 bytes) */

// <05E82496> ../public/tier0/convar.h:437
void ConVar::GetBoolVirtualized()
{
} /* size: 0 */

// <04444EAF> ../public/tier0/convar.h:437
// function calls: 2
void ConVar::GetBoolVirtualized()
{
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 439
} /* size: 17, inline expansions: 2 (16 bytes) */

// <05E8247D> ../public/tier0/convar.h:483
void ConVar::OnValueChanged()
{
} /* size: 0 */

// <0443CC72> ../public/tier0/convar.h:483
inline void ConVar::OnValueChanged()
{
} /* size: 0 */

// <05E82464> ../public/tier0/convar.h:493
inline void ConVar::GetFloat()
{
} /* size: 0 */

// <04ADF411> ../public/tier0/convar.h:493
void ConVar::GetFloat()
{
} /* size: 0 */

// <05E8244B> ../public/tier0/convar.h:502
inline void ConVar::GetInt()
{
} /* size: 0 */

// <04ADF3F8> ../public/tier0/convar.h:502
void ConVar::GetInt()
{
} /* size: 0 */

// <0393EDB8> ../public/tier0/convar.h:511
// variable: 1
inline void ConVar::GetColor()
{
	unsigned char* pColorElement; // 513
} /* size: 0, variables: 1 */

// <04ADF3D2> ../public/tier0/convar.h:535
// variable: 1
inline void ConVar::GetString()
{
	const char* str; // 537
} /* size: 0, variables: 1 */

// <00462A54> ../public/tier0/convar.h:547
// member functions: 14
// member variables: 6
// vtable entries: 2
// class size: 160
class CConCommandMemberAccessor<CInputService> : public ConCommand, public ICommandCallback, public ICommandCompletionCallback {
public:
	/* class ConCommand <ancestor>; */ /* 0 0 */
	/* class ICommandCallback <ancestor>; */ /* 104 8 */
	/* class ICommandCompletionCallback <ancestor>; */ /* 112 8 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CInputService>* , const CConCommandMemberAccessor<CInputService>& );
	/* ../public/tier0/convar.h:554 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CInputService>* , CInputService* , const char* , FnMemberCommandCallback_t, const char* , ConVarFlags_t, FnMemberCommandCompletionCallback_t);
	/* ../public/tier0/convar.h:550 */
	typedef void ()(CInputService* , const CCommandContext& , const CCommand& ) CInputService::* FnMemberCommandCallback_t;
	/* ../public/tier0/convar.h:551 */
	typedef void ()(CInputService* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& ) CInputService::* FnMemberCommandCompletionCallback_t;
	/* ../public/tier0/convar.h:563 */
	virtual void ~CConCommandMemberAccessor(CConCommandMemberAccessor<CInputService>* );
	/* ../public/tier0/convar.h:568 */
	void SetOwner(CConCommandMemberAccessor<CInputService>* , CInputService* );
	/* ../public/tier0/convar.h:573 */
	virtual void CommandCallback(CConCommandMemberAccessor<CInputService>* , const CCommandContext& , const CCommand& );
	/* ../public/tier0/convar.h:579 */
	virtual int CommandCompletionCallback(CConCommandMemberAccessor<CInputService>* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
private:
	CInputService * m_pOwner; /* 120 8 */
	FnMemberCommandCallback_t m_Func; /* 128 8 */
	FnMemberCommandCompletionCallback_t m_CompletionFunc; /* 144 8 */
	void CConCommandMemberAccessor(class CConCommandMemberAccessor<CInputService> *, const class CConCommandMemberAccessor<CInputService>  &); /* linkage=_ZN25CConCommandMemberAccessorI13CInputServiceEC4ERKS1_ */
	void CConCommandMemberAccessor(class CConCommandMemberAccessor<CInputService> *, class CInputService *, const char  *, FnMemberCommandCallback_t, const char  *, enum ConVarFlags_t, FnMemberCommandCompletionCallback_t); /* linkage=_ZN25CConCommandMemberAccessorI13CInputServiceEC4EPS0_PKcMS0_FvRK15CCommandContextRK8CCommandES4_13ConVarFlags_tMS0_FvS4_R10CUtlVectorI10CUtlString10CUtlMemoryISF_iEEE */
	virtual void ~CConCommandMemberAccessor(class CConCommandMemberAccessor<CInputService> *); /* linkage=_ZN25CConCommandMemberAccessorI13CInputServiceED4Ev */
	void SetOwner(class CConCommandMemberAccessor<CInputService> *, class CInputService *); /* linkage=_ZN25CConCommandMemberAccessorI13CInputServiceE8SetOwnerEPS0_ */
	/* <4d65aa> ../public/tier0/convar.h:573 */
	virtual void CommandCallback(class CConCommandMemberAccessor<CInputService> *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN25CConCommandMemberAccessorI13CInputServiceE15CommandCallbackERK15CCommandContextRK8CCommand */
	/* <4d65fe> ../public/tier0/convar.h:579 */
	virtual int CommandCompletionCallback(class CConCommandMemberAccessor<CInputService> *, const char  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN25CConCommandMemberAccessorI13CInputServiceE25CommandCompletionCallbackEPKcR10CUtlVectorI10CUtlString10CUtlMemoryIS5_iEE */
};

// <0062633F> ../public/tier0/convar.h:547
// member functions: 8
// member variables: 6
// vtable entries: 2
// class size: 160
class CConCommandMemberAccessor<CSoundService> : public ConCommand, public ICommandCallback, public ICommandCompletionCallback {
public:
	/* class ConCommand <ancestor>; */ /* 0 0 */
	/* class ICommandCallback <ancestor>; */ /* 104 8 */
	/* class ICommandCompletionCallback <ancestor>; */ /* 112 8 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CSoundService>* , const CConCommandMemberAccessor<CSoundService>& );
	/* ../public/tier0/convar.h:554 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CSoundService>* , CSoundService* , const char* , FnMemberCommandCallback_t, const char* , ConVarFlags_t, FnMemberCommandCompletionCallback_t);
	/* ../public/tier0/convar.h:550 */
	typedef void ()(CSoundService* , const CCommandContext& , const CCommand& ) CSoundService::* FnMemberCommandCallback_t;
	/* ../public/tier0/convar.h:551 */
	typedef void ()(CSoundService* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& ) CSoundService::* FnMemberCommandCompletionCallback_t;
	/* ../public/tier0/convar.h:563 */
	virtual void ~CConCommandMemberAccessor(CConCommandMemberAccessor<CSoundService>* );
	/* ../public/tier0/convar.h:568 */
	void SetOwner(CConCommandMemberAccessor<CSoundService>* , CSoundService* );
	/* ../public/tier0/convar.h:573 */
	virtual void CommandCallback(CConCommandMemberAccessor<CSoundService>* , const CCommandContext& , const CCommand& );
	/* ../public/tier0/convar.h:579 */
	virtual int CommandCompletionCallback(CConCommandMemberAccessor<CSoundService>* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
private:
	CSoundService * m_pOwner; /* 120 8 */
	FnMemberCommandCallback_t m_Func; /* 128 8 */
	FnMemberCommandCompletionCallback_t m_CompletionFunc; /* 144 8 */
};

// <00F14FE5> ../public/tier0/convar.h:547
// member functions: 8
// member variables: 6
// vtable entries: 2
// class size: 160
class CConCommandMemberAccessor<CWorldRendererMgr> : public ConCommand, public ICommandCallback, public ICommandCompletionCallback {
public:
	/* class ConCommand <ancestor>; */ /* 0 0 */
	/* class ICommandCallback <ancestor>; */ /* 104 8 */
	/* class ICommandCompletionCallback <ancestor>; */ /* 112 8 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CWorldRendererMgr>* , const CConCommandMemberAccessor<CWorldRendererMgr>& );
	/* ../public/tier0/convar.h:554 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CWorldRendererMgr>* , CWorldRendererMgr* , const char* , FnMemberCommandCallback_t, const char* , ConVarFlags_t, FnMemberCommandCompletionCallback_t);
	/* ../public/tier0/convar.h:550 */
	typedef void ()(CWorldRendererMgr* , const CCommandContext& , const CCommand& ) CWorldRendererMgr::* FnMemberCommandCallback_t;
	/* ../public/tier0/convar.h:551 */
	typedef void ()(CWorldRendererMgr* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& ) CWorldRendererMgr::* FnMemberCommandCompletionCallback_t;
	/* ../public/tier0/convar.h:563 */
	virtual void ~CConCommandMemberAccessor(CConCommandMemberAccessor<CWorldRendererMgr>* );
	/* ../public/tier0/convar.h:568 */
	void SetOwner(CConCommandMemberAccessor<CWorldRendererMgr>* , CWorldRendererMgr* );
	/* ../public/tier0/convar.h:573 */
	virtual void CommandCallback(CConCommandMemberAccessor<CWorldRendererMgr>* , const CCommandContext& , const CCommand& );
	/* ../public/tier0/convar.h:579 */
	virtual int CommandCompletionCallback(CConCommandMemberAccessor<CWorldRendererMgr>* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
private:
	CWorldRendererMgr * m_pOwner; /* 120 8 */
	FnMemberCommandCallback_t m_Func; /* 128 8 */
	FnMemberCommandCompletionCallback_t m_CompletionFunc; /* 144 8 */
};

// <02DAC9AF> ../public/tier0/convar.h:547
// member functions: 8
// member variables: 6
// vtable entries: 2
// class size: 160
class CConCommandMemberAccessor<CSceneSystem> : public ConCommand, public ICommandCallback, public ICommandCompletionCallback {
public:
	/* class ConCommand <ancestor>; */ /* 0 0 */
	/* class ICommandCallback <ancestor>; */ /* 104 8 */
	/* class ICommandCompletionCallback <ancestor>; */ /* 112 8 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CSceneSystem>* , const CConCommandMemberAccessor<CSceneSystem>& );
	/* ../public/tier0/convar.h:554 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CSceneSystem>* , CSceneSystem* , const char* , FnMemberCommandCallback_t, const char* , ConVarFlags_t, FnMemberCommandCompletionCallback_t);
	/* ../public/tier0/convar.h:550 */
	typedef void ()(CSceneSystem* , const CCommandContext& , const CCommand& ) CSceneSystem::* FnMemberCommandCallback_t;
	/* ../public/tier0/convar.h:551 */
	typedef void ()(CSceneSystem* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& ) CSceneSystem::* FnMemberCommandCompletionCallback_t;
	/* ../public/tier0/convar.h:563 */
	virtual void ~CConCommandMemberAccessor(CConCommandMemberAccessor<CSceneSystem>* );
	/* ../public/tier0/convar.h:568 */
	void SetOwner(CConCommandMemberAccessor<CSceneSystem>* , CSceneSystem* );
	/* ../public/tier0/convar.h:573 */
	virtual void CommandCallback(CConCommandMemberAccessor<CSceneSystem>* , const CCommandContext& , const CCommand& );
	/* ../public/tier0/convar.h:579 */
	virtual int CommandCompletionCallback(CConCommandMemberAccessor<CSceneSystem>* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
private:
	CSceneSystem * m_pOwner; /* 120 8 */
	FnMemberCommandCallback_t m_Func; /* 128 8 */
	FnMemberCommandCompletionCallback_t m_CompletionFunc; /* 144 8 */
};

// <0015EE84> ../public/tier0/convar.h:547
// member functions: 14
// member variables: 6
// vtable entries: 2
// class size: 160
class CConCommandMemberAccessor<CRenderDeviceBase> : public ConCommand, public ICommandCallback, public ICommandCompletionCallback {
public:
	/* class ConCommand <ancestor>; */ /* 0 0 */
	/* class ICommandCallback <ancestor>; */ /* 104 8 */
	/* class ICommandCompletionCallback <ancestor>; */ /* 112 8 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CRenderDeviceBase>* , const CConCommandMemberAccessor<CRenderDeviceBase>& );
	/* ../public/tier0/convar.h:554 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CRenderDeviceBase>* , CRenderDeviceBase* , const char* , FnMemberCommandCallback_t, const char* , ConVarFlags_t, FnMemberCommandCompletionCallback_t);
	/* ../public/tier0/convar.h:550 */
	typedef void ()(CRenderDeviceBase* , const CCommandContext& , const CCommand& ) CRenderDeviceBase::* FnMemberCommandCallback_t;
	/* ../public/tier0/convar.h:551 */
	typedef void ()(CRenderDeviceBase* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& ) CRenderDeviceBase::* FnMemberCommandCompletionCallback_t;
	/* ../public/tier0/convar.h:563 */
	virtual void ~CConCommandMemberAccessor(CConCommandMemberAccessor<CRenderDeviceBase>* );
	/* ../public/tier0/convar.h:568 */
	void SetOwner(CConCommandMemberAccessor<CRenderDeviceBase>* , CRenderDeviceBase* );
	/* ../public/tier0/convar.h:573 */
	virtual void CommandCallback(CConCommandMemberAccessor<CRenderDeviceBase>* , const CCommandContext& , const CCommand& );
	/* ../public/tier0/convar.h:579 */
	virtual int CommandCompletionCallback(CConCommandMemberAccessor<CRenderDeviceBase>* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
private:
	CRenderDeviceBase * m_pOwner; /* 120 8 */
	FnMemberCommandCallback_t m_Func; /* 128 8 */
	FnMemberCommandCompletionCallback_t m_CompletionFunc; /* 144 8 */
	void CConCommandMemberAccessor(class CConCommandMemberAccessor<CRenderDeviceBase> *, const class CConCommandMemberAccessor<CRenderDeviceBase>  &); /* linkage=_ZN25CConCommandMemberAccessorI17CRenderDeviceBaseEC4ERKS1_ */
	void CConCommandMemberAccessor(class CConCommandMemberAccessor<CRenderDeviceBase> *, class CRenderDeviceBase *, const char  *, FnMemberCommandCallback_t, const char  *, enum ConVarFlags_t, FnMemberCommandCompletionCallback_t); /* linkage=_ZN25CConCommandMemberAccessorI17CRenderDeviceBaseEC4EPS0_PKcMS0_FvRK15CCommandContextRK8CCommandES4_13ConVarFlags_tMS0_FvS4_R10CUtlVectorI10CUtlString10CUtlMemoryISF_iEEE */
	virtual void ~CConCommandMemberAccessor(class CConCommandMemberAccessor<CRenderDeviceBase> *); /* linkage=_ZN25CConCommandMemberAccessorI17CRenderDeviceBaseED4Ev */
	void SetOwner(class CConCommandMemberAccessor<CRenderDeviceBase> *, class CRenderDeviceBase *); /* linkage=_ZN25CConCommandMemberAccessorI17CRenderDeviceBaseE8SetOwnerEPS0_ */
	/* <1aebf4> ../public/tier0/convar.h:573 */
	virtual void CommandCallback(class CConCommandMemberAccessor<CRenderDeviceBase> *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN25CConCommandMemberAccessorI17CRenderDeviceBaseE15CommandCallbackERK15CCommandContextRK8CCommand */
	/* <1aec48> ../public/tier0/convar.h:579 */
	virtual int CommandCompletionCallback(class CConCommandMemberAccessor<CRenderDeviceBase> *, const char  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN25CConCommandMemberAccessorI17CRenderDeviceBaseE25CommandCompletionCallbackEPKcR10CUtlVectorI10CUtlString10CUtlMemoryIS5_iEE */
};

// <002DEB31> ../public/tier0/convar.h:547
// member functions: 8
// member variables: 6
// vtable entries: 2
// class size: 160
class CConCommandMemberAccessor<CTextureManagerBase> : public ConCommand, public ICommandCallback, public ICommandCompletionCallback {
public:
	/* class ConCommand <ancestor>; */ /* 0 0 */
	/* class ICommandCallback <ancestor>; */ /* 104 8 */
	/* class ICommandCompletionCallback <ancestor>; */ /* 112 8 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CTextureManagerBase>* , const CConCommandMemberAccessor<CTextureManagerBase>& );
	/* ../public/tier0/convar.h:554 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CTextureManagerBase>* , CTextureManagerBase* , const char* , FnMemberCommandCallback_t, const char* , ConVarFlags_t, FnMemberCommandCompletionCallback_t);
	/* ../public/tier0/convar.h:550 */
	typedef void ()(CTextureManagerBase* , const CCommandContext& , const CCommand& ) CTextureManagerBase::* FnMemberCommandCallback_t;
	/* ../public/tier0/convar.h:551 */
	typedef void ()(CTextureManagerBase* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& ) CTextureManagerBase::* FnMemberCommandCompletionCallback_t;
	/* ../public/tier0/convar.h:563 */
	virtual void ~CConCommandMemberAccessor(CConCommandMemberAccessor<CTextureManagerBase>* );
	/* ../public/tier0/convar.h:568 */
	void SetOwner(CConCommandMemberAccessor<CTextureManagerBase>* , CTextureManagerBase* );
	/* ../public/tier0/convar.h:573 */
	virtual void CommandCallback(CConCommandMemberAccessor<CTextureManagerBase>* , const CCommandContext& , const CCommand& );
	/* ../public/tier0/convar.h:579 */
	virtual int CommandCompletionCallback(CConCommandMemberAccessor<CTextureManagerBase>* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
private:
	CTextureManagerBase * m_pOwner; /* 120 8 */
	FnMemberCommandCallback_t m_Func; /* 128 8 */
	FnMemberCommandCompletionCallback_t m_CompletionFunc; /* 144 8 */
};

// <004CE5FC> ../public/tier0/convar.h:547
// member functions: 8
// member variables: 6
// vtable entries: 2
// class size: 160
class CConCommandMemberAccessor<CFramebufferMgrVulkan> : public ConCommand, public ICommandCallback, public ICommandCompletionCallback {
public:
	/* class ConCommand <ancestor>; */ /* 0 0 */
	/* class ICommandCallback <ancestor>; */ /* 104 8 */
	/* class ICommandCompletionCallback <ancestor>; */ /* 112 8 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CFramebufferMgrVulkan>* , const CConCommandMemberAccessor<CFramebufferMgrVulkan>& );
	/* ../public/tier0/convar.h:554 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CFramebufferMgrVulkan>* , CFramebufferMgrVulkan* , const char* , FnMemberCommandCallback_t, const char* , ConVarFlags_t, FnMemberCommandCompletionCallback_t);
	/* ../public/tier0/convar.h:550 */
	typedef void ()(CFramebufferMgrVulkan* , const CCommandContext& , const CCommand& ) CFramebufferMgrVulkan::* FnMemberCommandCallback_t;
	/* ../public/tier0/convar.h:551 */
	typedef void ()(CFramebufferMgrVulkan* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& ) CFramebufferMgrVulkan::* FnMemberCommandCompletionCallback_t;
	/* ../public/tier0/convar.h:563 */
	virtual void ~CConCommandMemberAccessor(CConCommandMemberAccessor<CFramebufferMgrVulkan>* );
	/* ../public/tier0/convar.h:568 */
	void SetOwner(CConCommandMemberAccessor<CFramebufferMgrVulkan>* , CFramebufferMgrVulkan* );
	/* ../public/tier0/convar.h:573 */
	virtual void CommandCallback(CConCommandMemberAccessor<CFramebufferMgrVulkan>* , const CCommandContext& , const CCommand& );
	/* ../public/tier0/convar.h:579 */
	virtual int CommandCompletionCallback(CConCommandMemberAccessor<CFramebufferMgrVulkan>* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
private:
	CFramebufferMgrVulkan * m_pOwner; /* 120 8 */
	FnMemberCommandCallback_t m_Func; /* 128 8 */
	FnMemberCommandCompletionCallback_t m_CompletionFunc; /* 144 8 */
};

// <00575652> ../public/tier0/convar.h:547
// member functions: 8
// member variables: 6
// vtable entries: 2
// class size: 160
class CConCommandMemberAccessor<CMemoryManagerVulkan> : public ConCommand, public ICommandCallback, public ICommandCompletionCallback {
public:
	/* class ConCommand <ancestor>; */ /* 0 0 */
	/* class ICommandCallback <ancestor>; */ /* 104 8 */
	/* class ICommandCompletionCallback <ancestor>; */ /* 112 8 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CMemoryManagerVulkan>* , const CConCommandMemberAccessor<CMemoryManagerVulkan>& );
	/* ../public/tier0/convar.h:554 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CMemoryManagerVulkan>* , CMemoryManagerVulkan* , const char* , FnMemberCommandCallback_t, const char* , ConVarFlags_t, FnMemberCommandCompletionCallback_t);
	/* ../public/tier0/convar.h:550 */
	typedef void ()(CMemoryManagerVulkan* , const CCommandContext& , const CCommand& ) CMemoryManagerVulkan::* FnMemberCommandCallback_t;
	/* ../public/tier0/convar.h:551 */
	typedef void ()(CMemoryManagerVulkan* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& ) CMemoryManagerVulkan::* FnMemberCommandCompletionCallback_t;
	/* ../public/tier0/convar.h:563 */
	virtual void ~CConCommandMemberAccessor(CConCommandMemberAccessor<CMemoryManagerVulkan>* );
	/* ../public/tier0/convar.h:568 */
	void SetOwner(CConCommandMemberAccessor<CMemoryManagerVulkan>* , CMemoryManagerVulkan* );
	/* ../public/tier0/convar.h:573 */
	virtual void CommandCallback(CConCommandMemberAccessor<CMemoryManagerVulkan>* , const CCommandContext& , const CCommand& );
	/* ../public/tier0/convar.h:579 */
	virtual int CommandCompletionCallback(CConCommandMemberAccessor<CMemoryManagerVulkan>* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
private:
	CMemoryManagerVulkan * m_pOwner; /* 120 8 */
	FnMemberCommandCallback_t m_Func; /* 128 8 */
	FnMemberCommandCompletionCallback_t m_CompletionFunc; /* 144 8 */
};

// <006C4720> ../public/tier0/convar.h:547
// member functions: 8
// member variables: 6
// vtable entries: 2
// class size: 160
class CConCommandMemberAccessor<CPipelineManagerVulkan> : public ConCommand, public ICommandCallback, public ICommandCompletionCallback {
public:
	/* class ConCommand <ancestor>; */ /* 0 0 */
	/* class ICommandCallback <ancestor>; */ /* 104 8 */
	/* class ICommandCompletionCallback <ancestor>; */ /* 112 8 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CPipelineManagerVulkan>* , const CConCommandMemberAccessor<CPipelineManagerVulkan>& );
	/* ../public/tier0/convar.h:554 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CPipelineManagerVulkan>* , CPipelineManagerVulkan* , const char* , FnMemberCommandCallback_t, const char* , ConVarFlags_t, FnMemberCommandCompletionCallback_t);
	/* ../public/tier0/convar.h:550 */
	typedef void ()(CPipelineManagerVulkan* , const CCommandContext& , const CCommand& ) CPipelineManagerVulkan::* FnMemberCommandCallback_t;
	/* ../public/tier0/convar.h:551 */
	typedef void ()(CPipelineManagerVulkan* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& ) CPipelineManagerVulkan::* FnMemberCommandCompletionCallback_t;
	/* ../public/tier0/convar.h:563 */
	virtual void ~CConCommandMemberAccessor(CConCommandMemberAccessor<CPipelineManagerVulkan>* );
	/* ../public/tier0/convar.h:568 */
	void SetOwner(CConCommandMemberAccessor<CPipelineManagerVulkan>* , CPipelineManagerVulkan* );
	/* ../public/tier0/convar.h:573 */
	virtual void CommandCallback(CConCommandMemberAccessor<CPipelineManagerVulkan>* , const CCommandContext& , const CCommand& );
	/* ../public/tier0/convar.h:579 */
	virtual int CommandCompletionCallback(CConCommandMemberAccessor<CPipelineManagerVulkan>* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
private:
	CPipelineManagerVulkan * m_pOwner; /* 120 8 */
	FnMemberCommandCallback_t m_Func; /* 128 8 */
	FnMemberCommandCompletionCallback_t m_CompletionFunc; /* 144 8 */
};

// <00BB36B9> ../public/tier0/convar.h:547
// member functions: 8
// member variables: 6
// vtable entries: 2
// class size: 160
class CConCommandMemberAccessor<CShaderTableVulkan> : public ConCommand, public ICommandCallback, public ICommandCompletionCallback {
public:
	/* class ConCommand <ancestor>; */ /* 0 0 */
	/* class ICommandCallback <ancestor>; */ /* 104 8 */
	/* class ICommandCompletionCallback <ancestor>; */ /* 112 8 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CShaderTableVulkan>* , const CConCommandMemberAccessor<CShaderTableVulkan>& );
	/* ../public/tier0/convar.h:554 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CShaderTableVulkan>* , CShaderTableVulkan* , const char* , FnMemberCommandCallback_t, const char* , ConVarFlags_t, FnMemberCommandCompletionCallback_t);
	/* ../public/tier0/convar.h:550 */
	typedef void ()(CShaderTableVulkan* , const CCommandContext& , const CCommand& ) CShaderTableVulkan::* FnMemberCommandCallback_t;
	/* ../public/tier0/convar.h:551 */
	typedef void ()(CShaderTableVulkan* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& ) CShaderTableVulkan::* FnMemberCommandCompletionCallback_t;
	/* ../public/tier0/convar.h:563 */
	virtual void ~CConCommandMemberAccessor(CConCommandMemberAccessor<CShaderTableVulkan>* );
	/* ../public/tier0/convar.h:568 */
	void SetOwner(CConCommandMemberAccessor<CShaderTableVulkan>* , CShaderTableVulkan* );
	/* ../public/tier0/convar.h:573 */
	virtual void CommandCallback(CConCommandMemberAccessor<CShaderTableVulkan>* , const CCommandContext& , const CCommand& );
	/* ../public/tier0/convar.h:579 */
	virtual int CommandCompletionCallback(CConCommandMemberAccessor<CShaderTableVulkan>* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
private:
	CShaderTableVulkan * m_pOwner; /* 120 8 */
	FnMemberCommandCallback_t m_Func; /* 128 8 */
	FnMemberCommandCompletionCallback_t m_CompletionFunc; /* 144 8 */
};

// <000C7D9F> ../public/tier0/convar.h:547
// member functions: 14
// member variables: 6
// vtable entries: 2
// class size: 160
class CConCommandMemberAccessor<CCvar> : public ConCommand, public ICommandCallback, public ICommandCompletionCallback {
public:
	/* class ConCommand <ancestor>; */ /* 0 0 */
	/* class ICommandCallback <ancestor>; */ /* 104 8 */
	/* class ICommandCompletionCallback <ancestor>; */ /* 112 8 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CCvar>* , const CConCommandMemberAccessor<CCvar>& );
	/* ../public/tier0/convar.h:554 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CCvar>* , CCvar* , const char* , FnMemberCommandCallback_t, const char* , ConVarFlags_t, FnMemberCommandCompletionCallback_t);
	/* ../public/tier0/convar.h:550 */
	typedef void ()(CCvar* , const CCommandContext& , const CCommand& ) CCvar::* FnMemberCommandCallback_t;
	/* ../public/tier0/convar.h:551 */
	typedef void ()(CCvar* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& ) CCvar::* FnMemberCommandCompletionCallback_t;
	/* ../public/tier0/convar.h:563 */
	virtual void ~CConCommandMemberAccessor(CConCommandMemberAccessor<CCvar>* );
	/* ../public/tier0/convar.h:568 */
	void SetOwner(CConCommandMemberAccessor<CCvar>* , CCvar* );
	/* ../public/tier0/convar.h:573 */
	virtual void CommandCallback(CConCommandMemberAccessor<CCvar>* , const CCommandContext& , const CCommand& );
	/* ../public/tier0/convar.h:579 */
	virtual int CommandCompletionCallback(CConCommandMemberAccessor<CCvar>* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
private:
	CCvar * m_pOwner; /* 120 8 */
	FnMemberCommandCallback_t m_Func; /* 128 8 */
	FnMemberCommandCompletionCallback_t m_CompletionFunc; /* 144 8 */
	void CConCommandMemberAccessor(class CConCommandMemberAccessor<CCvar> *, const class CConCommandMemberAccessor<CCvar>  &); /* linkage=_ZN25CConCommandMemberAccessorI5CCvarEC4ERKS1_ */
	void CConCommandMemberAccessor(class CConCommandMemberAccessor<CCvar> *, class CCvar *, const char  *, FnMemberCommandCallback_t, const char  *, enum ConVarFlags_t, FnMemberCommandCompletionCallback_t); /* linkage=_ZN25CConCommandMemberAccessorI5CCvarEC4EPS0_PKcMS0_FvRK15CCommandContextRK8CCommandES4_13ConVarFlags_tMS0_FvS4_R10CUtlVectorI10CUtlString10CUtlMemoryISF_iEEE */
	virtual void ~CConCommandMemberAccessor(class CConCommandMemberAccessor<CCvar> *); /* linkage=_ZN25CConCommandMemberAccessorI5CCvarED4Ev */
	void SetOwner(class CConCommandMemberAccessor<CCvar> *, class CCvar *); /* linkage=_ZN25CConCommandMemberAccessorI5CCvarE8SetOwnerEPS0_ */
	/* <d732a> ../public/tier0/convar.h:573 */
	virtual void CommandCallback(class CConCommandMemberAccessor<CCvar> *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN25CConCommandMemberAccessorI5CCvarE15CommandCallbackERK15CCommandContextRK8CCommand */
	/* <d737e> ../public/tier0/convar.h:579 */
	virtual int CommandCompletionCallback(class CConCommandMemberAccessor<CCvar> *, const char  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN25CConCommandMemberAccessorI5CCvarE25CommandCompletionCallbackEPKcR10CUtlVectorI10CUtlString10CUtlMemoryIS5_iEE */
};

// <00040C72> ../public/tier0/convar.h:547
// member functions: 14
// member variables: 6
// vtable entries: 2
// class size: 160
class CConCommandMemberAccessor<CSchemaSystem> : public ConCommand, public ICommandCallback, public ICommandCompletionCallback {
public:
	/* class ConCommand <ancestor>; */ /* 0 0 */
	/* class ICommandCallback <ancestor>; */ /* 104 8 */
	/* class ICommandCompletionCallback <ancestor>; */ /* 112 8 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CSchemaSystem>* , const CConCommandMemberAccessor<CSchemaSystem>& );
	/* ../public/tier0/convar.h:554 */
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CSchemaSystem>* , CSchemaSystem* , const char* , FnMemberCommandCallback_t, const char* , ConVarFlags_t, FnMemberCommandCompletionCallback_t);
	/* ../public/tier0/convar.h:550 */
	typedef void ()(CSchemaSystem* , const CCommandContext& , const CCommand& ) CSchemaSystem::* FnMemberCommandCallback_t;
	/* ../public/tier0/convar.h:551 */
	typedef void ()(CSchemaSystem* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& ) CSchemaSystem::* FnMemberCommandCompletionCallback_t;
	/* ../public/tier0/convar.h:563 */
	virtual void ~CConCommandMemberAccessor(CConCommandMemberAccessor<CSchemaSystem>* );
	/* ../public/tier0/convar.h:568 */
	void SetOwner(CConCommandMemberAccessor<CSchemaSystem>* , CSchemaSystem* );
	/* ../public/tier0/convar.h:573 */
	virtual void CommandCallback(CConCommandMemberAccessor<CSchemaSystem>* , const CCommandContext& , const CCommand& );
	/* ../public/tier0/convar.h:579 */
	virtual int CommandCompletionCallback(CConCommandMemberAccessor<CSchemaSystem>* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
private:
	CSchemaSystem * m_pOwner; /* 120 8 */
	FnMemberCommandCallback_t m_Func; /* 128 8 */
	FnMemberCommandCompletionCallback_t m_CompletionFunc; /* 144 8 */
	void CConCommandMemberAccessor(class CConCommandMemberAccessor<CSchemaSystem> *, const class CConCommandMemberAccessor<CSchemaSystem>  &); /* linkage=_ZN25CConCommandMemberAccessorI13CSchemaSystemEC4ERKS1_ */
	void CConCommandMemberAccessor(class CConCommandMemberAccessor<CSchemaSystem> *, class CSchemaSystem *, const char  *, FnMemberCommandCallback_t, const char  *, enum ConVarFlags_t, FnMemberCommandCompletionCallback_t); /* linkage=_ZN25CConCommandMemberAccessorI13CSchemaSystemEC4EPS0_PKcMS0_FvRK15CCommandContextRK8CCommandES4_13ConVarFlags_tMS0_FvS4_R10CUtlVectorI10CUtlString10CUtlMemoryISF_iEEE */
	virtual void ~CConCommandMemberAccessor(class CConCommandMemberAccessor<CSchemaSystem> *); /* linkage=_ZN25CConCommandMemberAccessorI13CSchemaSystemED4Ev */
	void SetOwner(class CConCommandMemberAccessor<CSchemaSystem> *, class CSchemaSystem *); /* linkage=_ZN25CConCommandMemberAccessorI13CSchemaSystemE8SetOwnerEPS0_ */
	/* <104cb4> ../public/tier0/convar.h:573 */
	virtual void CommandCallback(class CConCommandMemberAccessor<CSchemaSystem> *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN25CConCommandMemberAccessorI13CSchemaSystemE15CommandCallbackERK15CCommandContextRK8CCommand */
	/* <104d08> ../public/tier0/convar.h:579 */
	virtual int CommandCompletionCallback(class CConCommandMemberAccessor<CSchemaSystem> *, const char  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN25CConCommandMemberAccessorI13CSchemaSystemE25CommandCompletionCallbackEPKcR10CUtlVectorI10CUtlString10CUtlMemoryIS5_iEE */
};

// <02EB07A6> ../public/tier0/convar.h:554
void CConCommandMemberAccessor<CSceneSystem>::CConCommandMemberAccessor(CSceneSystem* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <02EB073F> ../public/tier0/convar.h:554
inline void CConCommandMemberAccessor<CSceneSystem>::CConCommandMemberAccessor(CSceneSystem* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <00F2B8DB> ../public/tier0/convar.h:554
void CConCommandMemberAccessor<CWorldRendererMgr>::CConCommandMemberAccessor(CWorldRendererMgr* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <00F2B874> ../public/tier0/convar.h:554
inline void CConCommandMemberAccessor<CWorldRendererMgr>::CConCommandMemberAccessor(CWorldRendererMgr* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <00677AA1> ../public/tier0/convar.h:554
void CConCommandMemberAccessor<CSoundService>::CConCommandMemberAccessor(CSoundService* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <00677A3A> ../public/tier0/convar.h:554
inline void CConCommandMemberAccessor<CSoundService>::CConCommandMemberAccessor(CSoundService* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <004B7A4B> ../public/tier0/convar.h:554
void CConCommandMemberAccessor<CInputService>::CConCommandMemberAccessor(CInputService* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <004B79E4> ../public/tier0/convar.h:554
inline void CConCommandMemberAccessor<CInputService>::CConCommandMemberAccessor(CInputService* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <00BBD320> ../public/tier0/convar.h:554
void CConCommandMemberAccessor<CShaderTableVulkan>::CConCommandMemberAccessor(CShaderTableVulkan* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <00BBD2B9> ../public/tier0/convar.h:554
inline void CConCommandMemberAccessor<CShaderTableVulkan>::CConCommandMemberAccessor(CShaderTableVulkan* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <007111B5> ../public/tier0/convar.h:554
void CConCommandMemberAccessor<CPipelineManagerVulkan>::CConCommandMemberAccessor(CPipelineManagerVulkan* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <0071114E> ../public/tier0/convar.h:554
inline void CConCommandMemberAccessor<CPipelineManagerVulkan>::CConCommandMemberAccessor(CPipelineManagerVulkan* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <0058F9A6> ../public/tier0/convar.h:554
void CConCommandMemberAccessor<CMemoryManagerVulkan>::CConCommandMemberAccessor(CMemoryManagerVulkan* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <0058F93F> ../public/tier0/convar.h:554
inline void CConCommandMemberAccessor<CMemoryManagerVulkan>::CConCommandMemberAccessor(CMemoryManagerVulkan* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <004D8150> ../public/tier0/convar.h:554
void CConCommandMemberAccessor<CFramebufferMgrVulkan>::CConCommandMemberAccessor(CFramebufferMgrVulkan* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <004D80E9> ../public/tier0/convar.h:554
inline void CConCommandMemberAccessor<CFramebufferMgrVulkan>::CConCommandMemberAccessor(CFramebufferMgrVulkan* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <00306E4C> ../public/tier0/convar.h:554
void CConCommandMemberAccessor<CTextureManagerBase>::CConCommandMemberAccessor(CTextureManagerBase* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <00306DE5> ../public/tier0/convar.h:554
inline void CConCommandMemberAccessor<CTextureManagerBase>::CConCommandMemberAccessor(CTextureManagerBase* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <00179850> ../public/tier0/convar.h:554
void CConCommandMemberAccessor<CRenderDeviceBase>::CConCommandMemberAccessor(CRenderDeviceBase* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <001797E9> ../public/tier0/convar.h:554
inline void CConCommandMemberAccessor<CRenderDeviceBase>::CConCommandMemberAccessor(CRenderDeviceBase* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <000CE07B> ../public/tier0/convar.h:554
void CConCommandMemberAccessor<CCvar>::CConCommandMemberAccessor(CCvar* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <000CE014> ../public/tier0/convar.h:554
inline void CConCommandMemberAccessor<CCvar>::CConCommandMemberAccessor(CCvar* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <000D9DCF> ../public/tier0/convar.h:554
void CConCommandMemberAccessor<CSchemaSystem>::CConCommandMemberAccessor(CSchemaSystem* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <000D9D68> ../public/tier0/convar.h:554
inline void CConCommandMemberAccessor<CSchemaSystem>::CConCommandMemberAccessor(CSchemaSystem* pOwner, const char* pName, FnMemberCommandCallback_t callback, const char* pHelpString, ConVarFlags_t flags, FnMemberCommandCompletionCallback_t completionFunc)
{
} /* size: 0 */

// <02EB06DB> ../public/tier0/convar.h:563
void CConCommandMemberAccessor<CSceneSystem>::~CConCommandMemberAccessor()
{
} /* size: 68 */

// <02EB0635> ../public/tier0/convar.h:563
// function call: 1
void CConCommandMemberAccessor<CSceneSystem>::~CConCommandMemberAccessor()
{
	CConCommandMemberAccessor<CSceneSystem>::~CConCommandMemberAccessor(); // 566
} /* size: 84, inline expansions: 1 (50 bytes) */

// <02EB061C> ../public/tier0/convar.h:563
inline void CConCommandMemberAccessor<CSceneSystem>::~CConCommandMemberAccessor()
{
} /* size: 0 */

// <00F2B810> ../public/tier0/convar.h:563
void CConCommandMemberAccessor<CWorldRendererMgr>::~CConCommandMemberAccessor()
{
} /* size: 68 */

// <00F2B76A> ../public/tier0/convar.h:563
// function call: 1
void CConCommandMemberAccessor<CWorldRendererMgr>::~CConCommandMemberAccessor()
{
	CConCommandMemberAccessor<CWorldRendererMgr>::~CConCommandMemberAccessor(); // 566
} /* size: 84, inline expansions: 1 (50 bytes) */

// <00F2B751> ../public/tier0/convar.h:563
inline void CConCommandMemberAccessor<CWorldRendererMgr>::~CConCommandMemberAccessor()
{
} /* size: 0 */

// <006779D6> ../public/tier0/convar.h:563
void CConCommandMemberAccessor<CSoundService>::~CConCommandMemberAccessor()
{
} /* size: 68 */

// <00677930> ../public/tier0/convar.h:563
// function call: 1
void CConCommandMemberAccessor<CSoundService>::~CConCommandMemberAccessor()
{
	CConCommandMemberAccessor<CSoundService>::~CConCommandMemberAccessor(); // 566
} /* size: 84, inline expansions: 1 (50 bytes) */

// <00677917> ../public/tier0/convar.h:563
inline void CConCommandMemberAccessor<CSoundService>::~CConCommandMemberAccessor()
{
} /* size: 0 */

// <004B7980> ../public/tier0/convar.h:563
void CConCommandMemberAccessor<CInputService>::~CConCommandMemberAccessor()
{
} /* size: 68 */

// <004B78DA> ../public/tier0/convar.h:563
// function call: 1
void CConCommandMemberAccessor<CInputService>::~CConCommandMemberAccessor()
{
	CConCommandMemberAccessor<CInputService>::~CConCommandMemberAccessor(); // 566
} /* size: 84, inline expansions: 1 (50 bytes) */

// <004B78C1> ../public/tier0/convar.h:563
inline void CConCommandMemberAccessor<CInputService>::~CConCommandMemberAccessor()
{
} /* size: 0 */

// <00BBD254> ../public/tier0/convar.h:563
void CConCommandMemberAccessor<CShaderTableVulkan>::~CConCommandMemberAccessor()
{
} /* size: 68 */

// <00BBD1AD> ../public/tier0/convar.h:563
// function call: 1
void CConCommandMemberAccessor<CShaderTableVulkan>::~CConCommandMemberAccessor()
{
	CConCommandMemberAccessor<CShaderTableVulkan>::~CConCommandMemberAccessor(); // 566
} /* size: 84, inline expansions: 1 (50 bytes) */

// <00BBD194> ../public/tier0/convar.h:563
inline void CConCommandMemberAccessor<CShaderTableVulkan>::~CConCommandMemberAccessor()
{
} /* size: 0 */

// <007110E9> ../public/tier0/convar.h:563
void CConCommandMemberAccessor<CPipelineManagerVulkan>::~CConCommandMemberAccessor()
{
} /* size: 68 */

// <00711042> ../public/tier0/convar.h:563
// function call: 1
void CConCommandMemberAccessor<CPipelineManagerVulkan>::~CConCommandMemberAccessor()
{
	CConCommandMemberAccessor<CPipelineManagerVulkan>::~CConCommandMemberAccessor(); // 566
} /* size: 84, inline expansions: 1 (50 bytes) */

// <00711029> ../public/tier0/convar.h:563
inline void CConCommandMemberAccessor<CPipelineManagerVulkan>::~CConCommandMemberAccessor()
{
} /* size: 0 */

// <0058F8DB> ../public/tier0/convar.h:563
void CConCommandMemberAccessor<CMemoryManagerVulkan>::~CConCommandMemberAccessor()
{
} /* size: 68 */

// <0058F835> ../public/tier0/convar.h:563
// function call: 1
void CConCommandMemberAccessor<CMemoryManagerVulkan>::~CConCommandMemberAccessor()
{
	CConCommandMemberAccessor<CMemoryManagerVulkan>::~CConCommandMemberAccessor(); // 566
} /* size: 84, inline expansions: 1 (50 bytes) */

// <0058F81C> ../public/tier0/convar.h:563
inline void CConCommandMemberAccessor<CMemoryManagerVulkan>::~CConCommandMemberAccessor()
{
} /* size: 0 */

// <004D8085> ../public/tier0/convar.h:563
void CConCommandMemberAccessor<CFramebufferMgrVulkan>::~CConCommandMemberAccessor()
{
} /* size: 68 */

// <004D7FDF> ../public/tier0/convar.h:563
// function call: 1
void CConCommandMemberAccessor<CFramebufferMgrVulkan>::~CConCommandMemberAccessor()
{
	CConCommandMemberAccessor<CFramebufferMgrVulkan>::~CConCommandMemberAccessor(); // 566
} /* size: 84, inline expansions: 1 (50 bytes) */

// <004D7FC6> ../public/tier0/convar.h:563
inline void CConCommandMemberAccessor<CFramebufferMgrVulkan>::~CConCommandMemberAccessor()
{
} /* size: 0 */

// <00306D81> ../public/tier0/convar.h:563
void CConCommandMemberAccessor<CTextureManagerBase>::~CConCommandMemberAccessor()
{
} /* size: 68 */

// <00306CDB> ../public/tier0/convar.h:563
// function call: 1
void CConCommandMemberAccessor<CTextureManagerBase>::~CConCommandMemberAccessor()
{
	CConCommandMemberAccessor<CTextureManagerBase>::~CConCommandMemberAccessor(); // 566
} /* size: 84, inline expansions: 1 (50 bytes) */

// <00306CC2> ../public/tier0/convar.h:563
inline void CConCommandMemberAccessor<CTextureManagerBase>::~CConCommandMemberAccessor()
{
} /* size: 0 */

// <00179785> ../public/tier0/convar.h:563
void CConCommandMemberAccessor<CRenderDeviceBase>::~CConCommandMemberAccessor()
{
} /* size: 68 */

// <001796DF> ../public/tier0/convar.h:563
// function call: 1
void CConCommandMemberAccessor<CRenderDeviceBase>::~CConCommandMemberAccessor()
{
	CConCommandMemberAccessor<CRenderDeviceBase>::~CConCommandMemberAccessor(); // 566
} /* size: 84, inline expansions: 1 (50 bytes) */

// <001796C6> ../public/tier0/convar.h:563
inline void CConCommandMemberAccessor<CRenderDeviceBase>::~CConCommandMemberAccessor()
{
} /* size: 0 */

// <000CDFB1> ../public/tier0/convar.h:563
void CConCommandMemberAccessor<CCvar>::~CConCommandMemberAccessor()
{
} /* size: 68 */

// <000CDF0C> ../public/tier0/convar.h:563
// function call: 1
void CConCommandMemberAccessor<CCvar>::~CConCommandMemberAccessor()
{
	CConCommandMemberAccessor<CCvar>::~CConCommandMemberAccessor(); // 566
} /* size: 84, inline expansions: 1 (50 bytes) */

// <000CDEF3> ../public/tier0/convar.h:563
inline void CConCommandMemberAccessor<CCvar>::~CConCommandMemberAccessor()
{
} /* size: 0 */

// <000D9D04> ../public/tier0/convar.h:563
void CConCommandMemberAccessor<CSchemaSystem>::~CConCommandMemberAccessor()
{
} /* size: 68 */

// <000D9C5E> ../public/tier0/convar.h:563
// function call: 1
void CConCommandMemberAccessor<CSchemaSystem>::~CConCommandMemberAccessor()
{
	CConCommandMemberAccessor<CSchemaSystem>::~CConCommandMemberAccessor(); // 566
} /* size: 84, inline expansions: 1 (50 bytes) */

// <000D9C45> ../public/tier0/convar.h:563
inline void CConCommandMemberAccessor<CSchemaSystem>::~CConCommandMemberAccessor()
{
} /* size: 0 */

// <02EB05F6> ../public/tier0/convar.h:568
inline void CConCommandMemberAccessor<CSceneSystem>::SetOwner(CSceneSystem* pOwner)
{
} /* size: 0 */

// <00F2B72B> ../public/tier0/convar.h:568
inline void CConCommandMemberAccessor<CWorldRendererMgr>::SetOwner(CWorldRendererMgr* pOwner)
{
} /* size: 0 */

// <006778F1> ../public/tier0/convar.h:568
inline void CConCommandMemberAccessor<CSoundService>::SetOwner(CSoundService* pOwner)
{
} /* size: 0 */

// <004B789B> ../public/tier0/convar.h:568
inline void CConCommandMemberAccessor<CInputService>::SetOwner(CInputService* pOwner)
{
} /* size: 0 */

// <00BBD16E> ../public/tier0/convar.h:568
inline void CConCommandMemberAccessor<CShaderTableVulkan>::SetOwner(CShaderTableVulkan* pOwner)
{
} /* size: 0 */

// <00711003> ../public/tier0/convar.h:568
inline void CConCommandMemberAccessor<CPipelineManagerVulkan>::SetOwner(CPipelineManagerVulkan* pOwner)
{
} /* size: 0 */

// <0058F7F6> ../public/tier0/convar.h:568
inline void CConCommandMemberAccessor<CMemoryManagerVulkan>::SetOwner(CMemoryManagerVulkan* pOwner)
{
} /* size: 0 */

// <004D7FA0> ../public/tier0/convar.h:568
inline void CConCommandMemberAccessor<CFramebufferMgrVulkan>::SetOwner(CFramebufferMgrVulkan* pOwner)
{
} /* size: 0 */

// <00306C9C> ../public/tier0/convar.h:568
inline void CConCommandMemberAccessor<CTextureManagerBase>::SetOwner(CTextureManagerBase* pOwner)
{
} /* size: 0 */

// <001796A0> ../public/tier0/convar.h:568
inline void CConCommandMemberAccessor<CRenderDeviceBase>::SetOwner(CRenderDeviceBase* pOwner)
{
} /* size: 0 */

// <000CDECD> ../public/tier0/convar.h:568
inline void CConCommandMemberAccessor<CCvar>::SetOwner(CCvar* pOwner)
{
} /* size: 0 */

// <000D9C1F> ../public/tier0/convar.h:568
inline void CConCommandMemberAccessor<CSchemaSystem>::SetOwner(CSchemaSystem* pOwner)
{
} /* size: 0 */

// <02F3018D> ../public/tier0/convar.h:573
void CConCommandMemberAccessor<CSceneSystem>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	{
	}
} /* size: 131 */

// <02E12929> ../public/tier0/convar.h:573
// variables: 2
inline void CConCommandMemberAccessor<CSceneSystem>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	const char   __FUNCTION__; // 63574
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 575
	}
} /* size: 0, variables: 1 */

// <00F43F29> ../public/tier0/convar.h:573
void CConCommandMemberAccessor<CWorldRendererMgr>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	{
	}
} /* size: 131 */

// <00F210E5> ../public/tier0/convar.h:573
// variables: 2
inline void CConCommandMemberAccessor<CWorldRendererMgr>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	const char   __FUNCTION__; // 52557
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 575
	}
} /* size: 0, variables: 1 */

// <0068E1C6> ../public/tier0/convar.h:573
void CConCommandMemberAccessor<CSoundService>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	{
	}
} /* size: 131 */

// <0066C625> ../public/tier0/convar.h:573
// variables: 2
inline void CConCommandMemberAccessor<CSoundService>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	const char   __FUNCTION__; // 63502
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 575
	}
} /* size: 0, variables: 1 */

// <004D65AA> ../public/tier0/convar.h:573
void CConCommandMemberAccessor<CInputService>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	{
	}
} /* size: 131 */

// <004A84B1> ../public/tier0/convar.h:573
// variables: 2
inline void CConCommandMemberAccessor<CInputService>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	const char   __FUNCTION__; // 37450
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 575
	}
} /* size: 0, variables: 1 */

// <00BC4DE9> ../public/tier0/convar.h:573
void CConCommandMemberAccessor<CShaderTableVulkan>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	{
	}
} /* size: 131 */

// <00BB6503> ../public/tier0/convar.h:573
// variables: 2
inline void CConCommandMemberAccessor<CShaderTableVulkan>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	const char   __FUNCTION__; // 61886
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 575
	}
} /* size: 0, variables: 1 */

// <00746050> ../public/tier0/convar.h:573
void CConCommandMemberAccessor<CPipelineManagerVulkan>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	{
	}
} /* size: 131 */

// <006F043D> ../public/tier0/convar.h:573
// variables: 2
inline void CConCommandMemberAccessor<CPipelineManagerVulkan>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	const char   __FUNCTION__; // 56915
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 575
	}
} /* size: 0, variables: 1 */

// <005A5ED5> ../public/tier0/convar.h:573
void CConCommandMemberAccessor<CMemoryManagerVulkan>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	{
	}
} /* size: 131 */

// <005849AA> ../public/tier0/convar.h:573
// variables: 2
inline void CConCommandMemberAccessor<CMemoryManagerVulkan>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	const char   __FUNCTION__; // 35419
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 575
	}
} /* size: 0, variables: 1 */

// <004DE185> ../public/tier0/convar.h:573
void CConCommandMemberAccessor<CFramebufferMgrVulkan>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	{
	}
} /* size: 131 */

// <004D4996> ../public/tier0/convar.h:573
// variables: 2
inline void CConCommandMemberAccessor<CFramebufferMgrVulkan>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	const char   __FUNCTION__; // 7897
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 575
	}
} /* size: 0, variables: 1 */

// <003467A1> ../public/tier0/convar.h:573
void CConCommandMemberAccessor<CTextureManagerBase>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	{
	}
} /* size: 131 */

// <002F6C4C> ../public/tier0/convar.h:573
// variables: 2
inline void CConCommandMemberAccessor<CTextureManagerBase>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	const char   __FUNCTION__; // 55803
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 575
	}
} /* size: 0, variables: 1 */

// <001AEBF4> ../public/tier0/convar.h:573
void CConCommandMemberAccessor<CRenderDeviceBase>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	{
	}
} /* size: 131 */

// <0016E2BF> ../public/tier0/convar.h:573
// variables: 2
inline void CConCommandMemberAccessor<CRenderDeviceBase>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	const char   __FUNCTION__; // 2631
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 575
	}
} /* size: 0, variables: 1 */

// <000D732A> ../public/tier0/convar.h:573
void CConCommandMemberAccessor<CCvar>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	{
	}
} /* size: 131 */

// <000C92D2> ../public/tier0/convar.h:573
// variables: 2
inline void CConCommandMemberAccessor<CCvar>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	const char   __FUNCTION__; // 53709
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 575
	}
} /* size: 0, variables: 1 */

// <00104CB4> ../public/tier0/convar.h:573
void CConCommandMemberAccessor<CSchemaSystem>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	{
	}
} /* size: 131 */

// <000840D6> ../public/tier0/convar.h:573
// variables: 2
inline void CConCommandMemberAccessor<CSchemaSystem>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	const char   __FUNCTION__; // 52933
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 575
	}
} /* size: 0, variables: 1 */

// <002D9CE5> ../public/tier0/convar.h:573
// variables: 2
inline void CConCommandMemberAccessor<CTextureManagerBase>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	const char   __FUNCTION__; // 38337
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 575
	}
} /* size: 0, variables: 1 */

// <0016C724> ../public/tier0/convar.h:573
// variables: 2
inline void CConCommandMemberAccessor<CRenderDeviceBase>::CommandCallback(const CCommandContext& ctx, const CCommand& command)
{
	const char   __FUNCTION__; // 32006
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 575
	}
} /* size: 0, variables: 1 */

// <02F30362> ../public/tier0/convar.h:579
// function call: 1
void CConCommandMemberAccessor<CSceneSystem>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	{
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 583
} /* size: 119, inline expansions: 1 (0 bytes) */

// <02E128B1> ../public/tier0/convar.h:579
// variables: 2
inline void CConCommandMemberAccessor<CSceneSystem>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 63844
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 581
	}
} /* size: 0, variables: 1 */

// <00F43F7D> ../public/tier0/convar.h:579
// function call: 1
void CConCommandMemberAccessor<CWorldRendererMgr>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	{
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 583
} /* size: 119, inline expansions: 1 (0 bytes) */

// <00F2106D> ../public/tier0/convar.h:579
// variables: 2
inline void CConCommandMemberAccessor<CWorldRendererMgr>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 52807
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 581
	}
} /* size: 0, variables: 1 */

// <0068E21A> ../public/tier0/convar.h:579
// function call: 1
void CConCommandMemberAccessor<CSoundService>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	{
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 583
} /* size: 119, inline expansions: 1 (0 bytes) */

// <0066C5AC> ../public/tier0/convar.h:579
// variables: 2
inline void CConCommandMemberAccessor<CSoundService>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 63742
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 581
	}
} /* size: 0, variables: 1 */

// <004D65FE> ../public/tier0/convar.h:579
// function call: 1
void CConCommandMemberAccessor<CInputService>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	{
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 583
} /* size: 119, inline expansions: 1 (0 bytes) */

// <004A8438> ../public/tier0/convar.h:579
// variables: 2
inline void CConCommandMemberAccessor<CInputService>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 37695
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 581
	}
} /* size: 0, variables: 1 */

// <00BC4E3D> ../public/tier0/convar.h:579
// function call: 1
void CConCommandMemberAccessor<CShaderTableVulkan>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	{
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 583
} /* size: 119, inline expansions: 1 (0 bytes) */

// <00BB648C> ../public/tier0/convar.h:579
// variables: 2
inline void CConCommandMemberAccessor<CShaderTableVulkan>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 62116
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 581
	}
} /* size: 0, variables: 1 */

// <007460A4> ../public/tier0/convar.h:579
// function call: 1
void CConCommandMemberAccessor<CPipelineManagerVulkan>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	{
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 583
} /* size: 119, inline expansions: 1 (0 bytes) */

// <006F03C6> ../public/tier0/convar.h:579
// variables: 2
inline void CConCommandMemberAccessor<CPipelineManagerVulkan>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 57170
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 581
	}
} /* size: 0, variables: 1 */

// <005A5F29> ../public/tier0/convar.h:579
// function call: 1
void CConCommandMemberAccessor<CMemoryManagerVulkan>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	{
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 583
} /* size: 119, inline expansions: 1 (0 bytes) */

// <00584933> ../public/tier0/convar.h:579
// variables: 2
inline void CConCommandMemberAccessor<CMemoryManagerVulkan>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 35664
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 581
	}
} /* size: 0, variables: 1 */

// <004DE1D9> ../public/tier0/convar.h:579
// function call: 1
void CConCommandMemberAccessor<CFramebufferMgrVulkan>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	{
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 583
} /* size: 119, inline expansions: 1 (0 bytes) */

// <004D491E> ../public/tier0/convar.h:579
// variables: 2
inline void CConCommandMemberAccessor<CFramebufferMgrVulkan>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 7939
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 581
	}
} /* size: 0, variables: 1 */

// <003467F5> ../public/tier0/convar.h:579
// function call: 1
void CConCommandMemberAccessor<CTextureManagerBase>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	{
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 583
} /* size: 119, inline expansions: 1 (0 bytes) */

// <002F6BD4> ../public/tier0/convar.h:579
// variables: 2
inline void CConCommandMemberAccessor<CTextureManagerBase>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 56073
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 581
	}
} /* size: 0, variables: 1 */

// <001AEC48> ../public/tier0/convar.h:579
// function call: 1
void CConCommandMemberAccessor<CRenderDeviceBase>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	{
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 583
} /* size: 119, inline expansions: 1 (0 bytes) */

// <0016E248> ../public/tier0/convar.h:579
// variables: 2
inline void CConCommandMemberAccessor<CRenderDeviceBase>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 2896
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 581
	}
} /* size: 0, variables: 1 */

// <000D737E> ../public/tier0/convar.h:579
// function call: 1
void CConCommandMemberAccessor<CCvar>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	{
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 583
} /* size: 119, inline expansions: 1 (0 bytes) */

// <000C9246> ../public/tier0/convar.h:579
// variables: 2
inline void CConCommandMemberAccessor<CCvar>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 53569
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 581
	}
} /* size: 0, variables: 1 */

// <00104D08> ../public/tier0/convar.h:579
// function call: 1
void CConCommandMemberAccessor<CSchemaSystem>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	{
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 583
} /* size: 119, inline expansions: 1 (0 bytes) */

// <0008405F> ../public/tier0/convar.h:579
// variables: 2
inline void CConCommandMemberAccessor<CSchemaSystem>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 53188
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 581
	}
} /* size: 0, variables: 1 */

// <002D9C6D> ../public/tier0/convar.h:579
// variables: 2
inline void CConCommandMemberAccessor<CTextureManagerBase>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 38607
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 581
	}
} /* size: 0, variables: 1 */

// <0016C6AD> ../public/tier0/convar.h:579
// variables: 2
inline void CConCommandMemberAccessor<CRenderDeviceBase>::CommandCompletionCallback(const char* pPartial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	const char   __FUNCTION__; // 32271
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 581
	}
} /* size: 0, variables: 1 */

