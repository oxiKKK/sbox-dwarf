
//
// public/appframework/tier1app.h
//
//	referenced by: libengine2.so
//
//	functions: 93
//	classes: 3
//

// <04636B21> ../public/appframework/tier1app.h:30
// function calls: 4
void CTier1Application::~CTier1Application()
{
	IApplication::~IApplication(); // 120
	CBaseAppSystem<IApplication>::~CBaseAppSystem(); // 171
	CTier0AppSystem<IApplication, 0>::~CTier0AppSystem(); // 225
	CTier1AppSystem<IApplication, 0>::~CTier1AppSystem(); // 30
} /* size: 5, inline expansions: 4 (0 bytes) */

// <046369DE> ../public/appframework/tier1app.h:30
// function calls: 5
void CTier1Application::~CTier1Application()
{
	IApplication::~IApplication(); // 120
	CBaseAppSystem<IApplication>::~CBaseAppSystem(); // 171
	CTier0AppSystem<IApplication, 0>::~CTier0AppSystem(); // 225
	CTier1AppSystem<IApplication, 0>::~CTier1AppSystem(); // 30
	CTier1Application::~CTier1Application(); // 30
} /* size: 14, inline expansions: 5 (0 bytes) */

// <046369C2> ../public/appframework/tier1app.h:30
inline void CTier1Application::~CTier1Application()
{
} /* size: 0 */

// <03308C89> ../public/appframework/tier1app.h:30
void CTier1Application::~CTier1Application()
{
} /* size: 0 */

// <00124D41> ../public/appframework/tier1app.h:30
// member functions: 66
// member variables: 2
// vtable entries: 29
// class size: 16
class CTier1Application : public CTier1AppSystem<IApplication, 0> {
public:
	/* class CTier1AppSystem<IApplication, 0> <ancestor>; */ /* 0 8 */
	void CTier1Application(CTier1Application* , CTier1Application& );
	void CTier1Application(CTier1Application* , const CTier1Application& );
	/* ../public/appframework/tier1app.h:33 */
	void CTier1Application(CTier1Application* , CAppSystemDict* );
	/* ../public/appframework/tier1app.h:35 */
	virtual const AppSystemInfo_t* GetDependencies(CTier1Application* );
	/* ../public/appframework/tier1app.h:45 */
	virtual void SetInitializationPhase(CTier1Application* , int);
	/* ../public/appframework/tier1app.h:50 */
	virtual int GetInitializationPhase(const CTier1Application* );
	/* ../public/appframework/tier1app.h:55 */
	virtual IAppSystem* AddSystem(CTier1Application* , IAppSystem* , const char* );
	/* ../public/appframework/tier1app.h:60 */
	virtual IAppSystem* AddSystemDontLoadStartupManifests(CTier1Application* , const char* , const char* );
	/* ../public/appframework/tier1app.h:68 */
	virtual void LoadStartupManifestGroup(CTier1Application* , const char* );
	/* ../public/appframework/tier1app.h:73 */
	virtual IAppSystem* AddSystem(CTier1Application* , const char* , const char* );
	/* ../public/appframework/tier1app.h:78 */
	virtual IAppSystem* AddSystem(CTier1Application* , PlatModule_t, const char* );
	/* ../public/appframework/tier1app.h:83 */
	virtual AppSystemBuildType_t GetBuildType(const CTier1Application* );
	/* ../public/appframework/tier1app.h:88 */
	virtual bool AddSystems(CTier1Application* , int, const AppSystemInfo_t* );
	/* ../public/appframework/tier1app.h:93 */
	virtual void* FindSystem(CTier1Application* , const char* );
	/* ../public/appframework/tier1app.h:98 */
	virtual void RemoveSystem(CTier1Application* , IAppSystem* );
	/* ../public/appframework/tier1app.h:103 */
	virtual KeyValues* GetGameInfo(CTier1Application* );
	/* ../public/appframework/tier1app.h:108 */
	virtual bool IsInToolsMode(const CTier1Application* );
	/* ../public/appframework/tier1app.h:113 */
	virtual bool IsInDeveloperMode(const CTier1Application* );
	/* ../public/appframework/tier1app.h:118 */
	virtual const char* GetContentPath(const CTier1Application* );
	/* ../public/appframework/tier1app.h:123 */
	virtual const char* GetModGameSubdir(const CTier1Application* );
	/* ../public/appframework/tier1app.h:128 */
	virtual bool IsConsoleApp(const CTier1Application* );
	/* ../public/appframework/tier1app.h:133 */
	virtual const char* GetExecutablePath(const CTier1Application* );
	/* ../public/appframework/tier1app.h:138 */
	virtual KeyValues* GetApplicationInfo(CTier1Application* );
	/* ../public/appframework/tier1app.h:143 */
	virtual void* GetAppInstance(const CTier1Application* );
	/* ../public/appframework/tier1app.h:148 */
	virtual CUtlString GetConsoleLogFilename(const CTier1Application* );
	/* ../public/appframework/tier1app.h:153 */
	virtual void ChangeLogFileSuffix(CTier1Application* , const char* );
	/* ../public/appframework/tier1app.h:159 */
	virtual AppGameMode_t GetGameMode(const CTier1Application* );
	/* ../public/appframework/tier1app.h:166 */
	virtual bool IsRunningOnCustomerMachine(const CTier1Application* );
	/* ../public/appframework/tier1app.h:171 */
	virtual bool IsLowViolence(const CTier1Application* );
	/* ../public/appframework/tier1app.h:176 */
	virtual void SetLowViolence(CTier1Application* , bool);
	/* ../public/appframework/tier1app.h:181 */
	virtual int GetTestGroup(const CTier1Application* );
	/* ../public/appframework/tier1app.h:186 */
	virtual void SetTestGroup(CTier1Application* , int);
protected:
	CAppSystemDict * m_pDict; /* 8 8 */
	virtual void ~CTier1Application(CTier1Application* );
	void CTier1Application(class CTier1Application *, class CTier1Application &); /* linkage=_ZN17CTier1ApplicationC4EOS_ */
	void CTier1Application(class CTier1Application *, const class CTier1Application  &); /* linkage=_ZN17CTier1ApplicationC4ERKS_ */
	void CTier1Application(class CTier1Application *, class CAppSystemDict *); /* linkage=_ZN17CTier1ApplicationC4EP14CAppSystemDict */
	/* <464c376> ../public/appframework/tier1app.h:35 */
	virtual const class AppSystemInfo_t  * GetDependencies(class CTier1Application *); /* linkage=_ZN17CTier1Application15GetDependenciesEv */
	virtual void SetInitializationPhase(class CTier1Application *, int); /* linkage=_ZN17CTier1Application22SetInitializationPhaseEi */
	virtual int GetInitializationPhase(const class CTier1Application  *); /* linkage=_ZNK17CTier1Application22GetInitializationPhaseEv */
	/* <24df12> ../public/appframework/tier1app.h:55 */
	virtual class IAppSystem * AddSystem(class CTier1Application *, class IAppSystem *, const char  *); /* linkage=_ZN17CTier1Application9AddSystemEP10IAppSystemPKc */
	virtual class IAppSystem * AddSystemDontLoadStartupManifests(class CTier1Application *, const char  *, const char  *); /* linkage=_ZN17CTier1Application33AddSystemDontLoadStartupManifestsEPKcS1_ */
	virtual void LoadStartupManifestGroup(class CTier1Application *, const char  *); /* linkage=_ZN17CTier1Application24LoadStartupManifestGroupEPKc */
	/* <464d576> ../public/appframework/tier1app.h:73 */
	virtual class IAppSystem * AddSystem(class CTier1Application *, const char  *, const char  *); /* linkage=_ZN17CTier1Application9AddSystemEPKcS1_ */
	virtual class IAppSystem * AddSystem(class CTier1Application *, PlatModule_t, const char  *); /* linkage=_ZN17CTier1Application9AddSystemEP13_PlatModule_tPKc */
	virtual enum AppSystemBuildType_t GetBuildType(const class CTier1Application  *); /* linkage=_ZNK17CTier1Application12GetBuildTypeEv */
	virtual bool AddSystems(class CTier1Application *, int, const class AppSystemInfo_t  *); /* linkage=_ZN17CTier1Application10AddSystemsEiPK15AppSystemInfo_t */
	virtual void * FindSystem(class CTier1Application *, const char  *); /* linkage=_ZN17CTier1Application10FindSystemEPKc */
	/* <24df7a> ../public/appframework/tier1app.h:98 */
	virtual void RemoveSystem(class CTier1Application *, class IAppSystem *); /* linkage=_ZN17CTier1Application12RemoveSystemEP10IAppSystem */
	/* <2f2ff64> ../public/appframework/tier1app.h:103 */
	virtual class KeyValues * GetGameInfo(class CTier1Application *); /* linkage=_ZN17CTier1Application11GetGameInfoEv */
	/* <2f2ffbe> ../public/appframework/tier1app.h:108 */
	virtual bool IsInToolsMode(const class CTier1Application  *); /* linkage=_ZNK17CTier1Application13IsInToolsModeEv */
	/* <27e105c> ../public/appframework/tier1app.h:113 */
	virtual bool IsInDeveloperMode(const class CTier1Application  *); /* linkage=_ZNK17CTier1Application17IsInDeveloperModeEv */
	virtual const char  * GetContentPath(const class CTier1Application  *); /* linkage=_ZNK17CTier1Application14GetContentPathEv */
	virtual const char  * GetModGameSubdir(const class CTier1Application  *); /* linkage=_ZNK17CTier1Application16GetModGameSubdirEv */
	/* <2f30018> ../public/appframework/tier1app.h:128 */
	virtual bool IsConsoleApp(const class CTier1Application  *); /* linkage=_ZNK17CTier1Application12IsConsoleAppEv */
	virtual const char  * GetExecutablePath(const class CTier1Application  *); /* linkage=_ZNK17CTier1Application17GetExecutablePathEv */
	virtual class KeyValues * GetApplicationInfo(class CTier1Application *); /* linkage=_ZN17CTier1Application18GetApplicationInfoEv */
	virtual void * GetAppInstance(const class CTier1Application  *); /* linkage=_ZNK17CTier1Application14GetAppInstanceEv */
	virtual class CUtlString GetConsoleLogFilename(const class CTier1Application  *); /* linkage=_ZNK17CTier1Application21GetConsoleLogFilenameEv */
	/* <24dcef> ../public/appframework/tier1app.h:153 */
	virtual void ChangeLogFileSuffix(class CTier1Application *, const char  *); /* linkage=_ZN17CTier1Application19ChangeLogFileSuffixEPKc */
	virtual enum AppGameMode_t GetGameMode(const class CTier1Application  *); /* linkage=_ZNK17CTier1Application11GetGameModeEv */
	virtual bool IsRunningOnCustomerMachine(const class CTier1Application  *); /* linkage=_ZNK17CTier1Application26IsRunningOnCustomerMachineEv */
	virtual bool IsLowViolence(const class CTier1Application  *); /* linkage=_ZNK17CTier1Application13IsLowViolenceEv */
	virtual void SetLowViolence(class CTier1Application *, bool); /* linkage=_ZN17CTier1Application14SetLowViolenceEb */
	virtual int GetTestGroup(const class CTier1Application  *); /* linkage=_ZNK17CTier1Application12GetTestGroupEv */
	virtual void SetTestGroup(class CTier1Application *, int); /* linkage=_ZN17CTier1Application12SetTestGroupEi */
	virtual void ~CTier1Application(class CTier1Application *); /* linkage=_ZN17CTier1ApplicationD4Ev */
};

// <0464AFFB> ../public/appframework/tier1app.h:33
void CTier1Application::CTier1Application(CAppSystemDict* pDict)
{
} /* size: 0 */

// <0464AFD6> ../public/appframework/tier1app.h:33
inline void CTier1Application::CTier1Application(CAppSystemDict* pDict)
{
} /* size: 0 */

// <0464C376> ../public/appframework/tier1app.h:35
// function calls: 3
void CTier1Application::GetDependencies()
{
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 41
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 41
	CTier1Application::GetDependencies(); // 35
} /* size: 127, inline expansions: 3 (96 bytes) */

// <0464AF92> ../public/appframework/tier1app.h:35
// variable: 1
inline void CTier1Application::GetDependencies()
{
	AppSystemInfo_t s_pDependencies; // 37
} /* size: 0, variables: 1 */

// <0464AEF2> ../public/appframework/tier1app.h:45
// function call: 1
void CTier1Application::SetInitializationPhase(int nPhase)
{
	{
	}
	CAppSystemDict::SetInitializationPhase(
				int nPhase);  // 47
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0330A4A7> ../public/appframework/tier1app.h:45
void CTier1Application::SetInitializationPhase(int nPhase)
{
} /* size: 13 */

// <0464AE94> ../public/appframework/tier1app.h:50
// function call: 1
void CTier1Application::GetInitializationPhase()
{
	CAppSystemDict::GetInitializationPhase(); // 52
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0330A464> ../public/appframework/tier1app.h:50
void CTier1Application::GetInitializationPhase()
{
} /* size: 13 */

// <0464AE1B> ../public/appframework/tier1app.h:55
void CTier1Application::AddSystem(IAppSystem* pAppSystem, const char* pInterfaceName)
{
} /* size: 13 */

// <00245577> ../public/appframework/tier1app.h:55
inline void CTier1Application::AddSystem(IAppSystem* pAppSystem, const char* pInterfaceName)
{
} /* size: 0 */

// <0464ACB1> ../public/appframework/tier1app.h:60
// variable: 1
// function calls: 3
void CTier1Application::AddSystemDontLoadStartupManifests(const char* pDLLName, const char* pInterfaceName)
{
	IAppSystem* pResult; // 63
	CAppSystemDict::SetStartupManifestsDisabled(
					bool bDisabled);  // 62
	CTier1Application::AddSystem(
			const char* pDLLName,
			const char* pInterfaceName);  // 63
	CAppSystemDict::SetStartupManifestsDisabled(
					bool bDisabled);  // 64
} /* size: 99, variables: 1, inline expansions: 3 (36 bytes) */

// <0464AC21> ../public/appframework/tier1app.h:68
// variables: 2
void CTier1Application::LoadStartupManifestGroup(const char* pGroupName)
{
	const char   __FUNCTION__; // 29850
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
} /* size: 27, variables: 1 */

// <0330A23D> ../public/appframework/tier1app.h:68
// variables: 2
void CTier1Application::LoadStartupManifestGroup(const char* pGroupName)
{
	const char   __FUNCTION__; // 64890
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
} /* size: 0, variables: 1 */

// <02F18B8A> ../public/appframework/tier1app.h:68
// variables: 2
void CTier1Application::LoadStartupManifestGroup(const char* pGroupName)
{
	const char   __FUNCTION__; // 63817
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
} /* size: 0, variables: 1 */

// <027D1E76> ../public/appframework/tier1app.h:68
// variables: 2
void CTier1Application::LoadStartupManifestGroup(const char* pGroupName)
{
	const char   __FUNCTION__; // 34233
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
} /* size: 0, variables: 1 */

// <02624B3F> ../public/appframework/tier1app.h:68
// variables: 2
void CTier1Application::LoadStartupManifestGroup(const char* pGroupName)
{
	const char   __FUNCTION__; // 23555
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
} /* size: 0, variables: 1 */

// <022BE704> ../public/appframework/tier1app.h:68
// variables: 2
void CTier1Application::LoadStartupManifestGroup(const char* pGroupName)
{
	const char   __FUNCTION__; // 19472
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
} /* size: 0, variables: 1 */

// <01F5E96C> ../public/appframework/tier1app.h:68
// variables: 2
void CTier1Application::LoadStartupManifestGroup(const char* pGroupName)
{
	const char   __FUNCTION__; // 34802
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
} /* size: 0, variables: 1 */

// <01E90248> ../public/appframework/tier1app.h:68
// variables: 2
void CTier1Application::LoadStartupManifestGroup(const char* pGroupName)
{
	const char   __FUNCTION__; // 59177
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
} /* size: 0, variables: 1 */

// <01DC26F9> ../public/appframework/tier1app.h:68
// variables: 2
void CTier1Application::LoadStartupManifestGroup(const char* pGroupName)
{
	const char   __FUNCTION__; // 45354
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
} /* size: 0, variables: 1 */

// <01CDAAB8> ../public/appframework/tier1app.h:68
// variables: 2
void CTier1Application::LoadStartupManifestGroup(const char* pGroupName)
{
	const char   __FUNCTION__; // 39532
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
} /* size: 0, variables: 1 */

// <01A10B68> ../public/appframework/tier1app.h:68
// variables: 2
void CTier1Application::LoadStartupManifestGroup(const char* pGroupName)
{
	const char   __FUNCTION__; // 181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
} /* size: 0, variables: 1 */

// <0194FEF1> ../public/appframework/tier1app.h:68
// variables: 2
void CTier1Application::LoadStartupManifestGroup(const char* pGroupName)
{
	const char   __FUNCTION__; // 55637
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
} /* size: 0, variables: 1 */

// <01726712> ../public/appframework/tier1app.h:68
// variables: 2
void CTier1Application::LoadStartupManifestGroup(const char* pGroupName)
{
	const char   __FUNCTION__; // 8623
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
} /* size: 0, variables: 1 */

// <015A432C> ../public/appframework/tier1app.h:68
// variables: 2
void CTier1Application::LoadStartupManifestGroup(const char* pGroupName)
{
	const char   __FUNCTION__; // 9656
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
} /* size: 0, variables: 1 */

// <014E2B03> ../public/appframework/tier1app.h:68
// variables: 2
void CTier1Application::LoadStartupManifestGroup(const char* pGroupName)
{
	const char   __FUNCTION__; // 9801
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
} /* size: 0, variables: 1 */

// <004CDCBC> ../public/appframework/tier1app.h:68
// variables: 2
void CTier1Application::LoadStartupManifestGroup(const char* pGroupName)
{
	const char   __FUNCTION__; // 37668
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
} /* size: 0, variables: 1 */

// <002453C8> ../public/appframework/tier1app.h:68
// variables: 2
void CTier1Application::LoadStartupManifestGroup(const char* pGroupName)
{
	const char   __FUNCTION__; // 20150
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
} /* size: 0, variables: 1 */

// <0464D576> ../public/appframework/tier1app.h:73
void CTier1Application::AddSystem(const char* pDLLName, const char* pInterfaceName)
{
} /* size: 15 */

// <0464ABF0> ../public/appframework/tier1app.h:73
inline void CTier1Application::AddSystem(const char* pDLLName, const char* pInterfaceName)
{
} /* size: 0 */

// <0464AB72> ../public/appframework/tier1app.h:78
void CTier1Application::AddSystem(PlatModule_t hModule, const char* pInterfaceName)
{
} /* size: 15 */

// <0464AB2F> ../public/appframework/tier1app.h:83
void CTier1Application::GetBuildType()
{
} /* size: 13 */

// <0464AAB6> ../public/appframework/tier1app.h:88
void CTier1Application::AddSystems(int nCount, const AppSystemInfo_t* pSystems)
{
} /* size: 13 */

// <0464AA53> ../public/appframework/tier1app.h:93
void* CTier1Application::FindSystem(const char* pInterfaceName)
{
} /* size: 13 */

// <0464A9F5> ../public/appframework/tier1app.h:98
void CTier1Application::RemoveSystem(IAppSystem* pAppSystem)
{
} /* size: 13 */

// <002451CD> ../public/appframework/tier1app.h:98
inline void CTier1Application::RemoveSystem(IAppSystem* pAppSystem)
{
} /* size: 0 */

// <0464A997> ../public/appframework/tier1app.h:103
// function call: 1
void CTier1Application::GetGameInfo()
{
	CAppSystemDict::GetGameInfo(); // 105
} /* size: 16, inline expansions: 1 (4 bytes) */

// <02F1893F> ../public/appframework/tier1app.h:103
inline void CTier1Application::GetGameInfo()
{
} /* size: 0 */

// <0464A939> ../public/appframework/tier1app.h:108
// function call: 1
void CTier1Application::IsInToolsMode()
{
	CAppSystemDict::IsInToolsMode(); // 110
} /* size: 16, inline expansions: 1 (4 bytes) */

// <02F18926> ../public/appframework/tier1app.h:108
inline void CTier1Application::IsInToolsMode()
{
} /* size: 0 */

// <0464A8DB> ../public/appframework/tier1app.h:113
// function call: 1
void CTier1Application::IsInDeveloperMode()
{
	CAppSystemDict::IsInDeveloperMode(); // 115
} /* size: 16, inline expansions: 1 (4 bytes) */

// <027D1B71> ../public/appframework/tier1app.h:113
inline void CTier1Application::IsInDeveloperMode()
{
} /* size: 0 */

// <0464A84C> ../public/appframework/tier1app.h:118
// function calls: 2
void CTier1Application::GetContentPath()
{
	CUtlString::IsEmpty(); // 426
	CAppSystemDict::GetContentPath(); // 120
} /* size: 30, inline expansions: 2 (41 bytes) */

// <0464A7BD> ../public/appframework/tier1app.h:123
// function calls: 2
void CTier1Application::GetModGameSubdir()
{
	CUtlString::IsEmpty(); // 431
	CAppSystemDict::GetModGameSubdir(); // 125
} /* size: 30, inline expansions: 2 (41 bytes) */

// <0464A75F> ../public/appframework/tier1app.h:128
// function call: 1
void CTier1Application::IsConsoleApp()
{
	CAppSystemDict::IsConsoleApp(); // 130
} /* size: 16, inline expansions: 1 (4 bytes) */

// <02F18791> ../public/appframework/tier1app.h:128
inline void CTier1Application::IsConsoleApp()
{
} /* size: 0 */

// <0464A6D0> ../public/appframework/tier1app.h:133
// function calls: 2
void CTier1Application::GetExecutablePath()
{
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 135
} /* size: 30, inline expansions: 2 (50 bytes) */

// <0464A672> ../public/appframework/tier1app.h:138
// function call: 1
void CTier1Application::GetApplicationInfo()
{
	CAppSystemDict::GetApplicationInfo(); // 140
} /* size: 16, inline expansions: 1 (4 bytes) */

// <0464A60F> ../public/appframework/tier1app.h:143
// function call: 1
void* CTier1Application::GetAppInstance()
{
	CAppSystemDict::GetAppInstance(); // 145
} /* size: 16, inline expansions: 1 (4 bytes) */

// <0464A55C> ../public/appframework/tier1app.h:148
// function calls: 2
void CTier1Application::GetConsoleLogFilename()
{
	CUtlString::CUtlString(); // 191
	CAppSystemDict::GetConsoleLogFilename(); // 150
} /* size: 0, inline expansions: 2 (0 bytes) */

// <03309BD5> ../public/appframework/tier1app.h:148
void CTier1Application::GetConsoleLogFilename()
{
} /* size: 68 */

// <0464A514> ../public/appframework/tier1app.h:153
void CTier1Application::ChangeLogFileSuffix(const char* suffix)
{
} /* size: 0 */

// <00244DB1> ../public/appframework/tier1app.h:153
inline void CTier1Application::ChangeLogFileSuffix(const char* suffix)
{
} /* size: 0 */

// <0464A482> ../public/appframework/tier1app.h:159
// function calls: 2
void CTier1Application::GetGameMode()
{
	CAppSystemDict::IsGameApp(); // 161
	CAppSystemDict::IsDedicatedServer(); // 163
} /* size: 30, inline expansions: 2 (0 bytes) */

// <0464A424> ../public/appframework/tier1app.h:166
// function call: 1
void CTier1Application::IsRunningOnCustomerMachine()
{
	CAppSystemDict::IsRunningOnCustomerMachine(); // 168
} /* size: 16, inline expansions: 1 (4 bytes) */

// <0464A3C6> ../public/appframework/tier1app.h:171
// function call: 1
void CTier1Application::IsLowViolence()
{
	CAppSystemDict::IsLowViolence(); // 173
} /* size: 16, inline expansions: 1 (4 bytes) */

// <0464A34C> ../public/appframework/tier1app.h:176
// function call: 1
void CTier1Application::SetLowViolence(bool bLowViolence)
{
	CAppSystemDict::SetLowViolence(
			bool bLowViolence);  // 178
} /* size: 16, inline expansions: 1 (7 bytes) */

// <0464A2EE> ../public/appframework/tier1app.h:181
// function call: 1
void CTier1Application::GetTestGroup()
{
	CAppSystemDict::GetTestGroup(); // 183
} /* size: 15, inline expansions: 1 (4 bytes) */

// <0464A274> ../public/appframework/tier1app.h:186
// function call: 1
void CTier1Application::SetTestGroup(int bIsTester)
{
	CAppSystemDict::SetTestGroup(
			int group);  // 188
} /* size: 15, inline expansions: 1 (6 bytes) */

// <04636CBA> ../public/appframework/tier1app.h:200
void CTier1AppSystemDict::~CTier1AppSystemDict()
{
} /* size: 19 */

// <04636C2B> ../public/appframework/tier1app.h:200
// function call: 1
void CTier1AppSystemDict::~CTier1AppSystemDict()
{
	CTier1AppSystemDict::~CTier1AppSystemDict(); // 200
} /* size: 46, inline expansions: 1 (19 bytes) */

// <04636C0F> ../public/appframework/tier1app.h:200
inline void CTier1AppSystemDict::~CTier1AppSystemDict()
{
} /* size: 0 */

// <001249A3> ../public/appframework/tier1app.h:200
// member functions: 18
// member variables: 2
// vtable entry: 1
// class size: 424
class CTier1AppSystemDict : public CAppSystemDict {
public:
	/* class CAppSystemDict <ancestor>; */ /* 0 0 */
	void CTier1AppSystemDict(CTier1AppSystemDict* , CTier1AppSystemDict& );
	void CTier1AppSystemDict(CTier1AppSystemDict* , const CTier1AppSystemDict& );
	/* ../public/appframework/tier1app.h:206 */
	void CTier1AppSystemDict(CTier1AppSystemDict* , bool, void* , void* , int, bool, bool);
	/* ../public/appframework/tier1app.h:241 */
	virtual bool Init(CTier1AppSystemDict* );
	/* ../public/appframework/tier1app.h:389 */
	void SetModGameSubdir(CTier1AppSystemDict* , const char* );
	/* ../public/appframework/tier1app.h:447 */
	void SetModFromFileName(CTier1AppSystemDict* , const char* , bool);
	/* ../public/appframework/tier1app.h:381 */
	void DisableModPathCheck(CTier1AppSystemDict* );
private:
	/* ../public/appframework/tier1app.h:403 */
	bool ComputeModPathFromFileName(CTier1AppSystemDict* , const char* , CBufferString* );
	bool m_bNoExeCheck; /* 420 1 */
	virtual void ~CTier1AppSystemDict(CTier1AppSystemDict* );
	void CTier1AppSystemDict(class CTier1AppSystemDict *, class CTier1AppSystemDict &); /* linkage=_ZN19CTier1AppSystemDictC4EOS_ */
	void CTier1AppSystemDict(class CTier1AppSystemDict *, const class CTier1AppSystemDict  &); /* linkage=_ZN19CTier1AppSystemDictC4ERKS_ */
	void CTier1AppSystemDict(class CTier1AppSystemDict *, bool, void *, void *, int, bool, bool); /* linkage=_ZN19CTier1AppSystemDictC4EbPvS0_ibb */
	virtual bool Init(class CTier1AppSystemDict *); /* linkage=_ZN19CTier1AppSystemDict4InitEv */
	void SetModGameSubdir(class CTier1AppSystemDict *, const char  *); /* linkage=_ZN19CTier1AppSystemDict16SetModGameSubdirEPKc */
	void SetModFromFileName(class CTier1AppSystemDict *, const char  *, bool); /* linkage=_ZN19CTier1AppSystemDict18SetModFromFileNameEPKcb */
	void DisableModPathCheck(class CTier1AppSystemDict *); /* linkage=_ZN19CTier1AppSystemDict19DisableModPathCheckEv */
	bool ComputeModPathFromFileName(class CTier1AppSystemDict *, const char  *, class CBufferString *); /* linkage=_ZN19CTier1AppSystemDict26ComputeModPathFromFileNameEPKcP13CBufferString */
	virtual void ~CTier1AppSystemDict(class CTier1AppSystemDict *); /* linkage=_ZN19CTier1AppSystemDictD4Ev */
};

// <0463507E> ../public/appframework/tier1app.h:200
// member functions: 16
// member variables: 2
// vtable entry: 1
// class size: 424
class CTier1AppSystemDict : public CAppSystemDict {
public:
	/* class CAppSystemDict <ancestor>; */ /* 0 424 */
	/* ../public/appframework/tier1app.h:206 */
	void CTier1AppSystemDict(CTier1AppSystemDict* , bool, void* , void* , int, bool, bool);
	/* ../public/appframework/tier1app.h:241 */
	virtual bool Init(CTier1AppSystemDict* );
	/* ../public/appframework/tier1app.h:389 */
	void SetModGameSubdir(CTier1AppSystemDict* , const char* );
	/* ../public/appframework/tier1app.h:447 */
	void SetModFromFileName(CTier1AppSystemDict* , const char* , bool);
	/* ../public/appframework/tier1app.h:381 */
	void DisableModPathCheck(CTier1AppSystemDict* );
private:
	/* ../public/appframework/tier1app.h:403 */
	bool ComputeModPathFromFileName(CTier1AppSystemDict* , const char* , CBufferString* );
	bool m_bNoExeCheck; /* 420 1 */
	virtual void ~CTier1AppSystemDict(CTier1AppSystemDict* );
	void CTier1AppSystemDict(class CTier1AppSystemDict *, class CTier1AppSystemDict &); /* linkage=_ZN19CTier1AppSystemDictC4EOS_ */
	void CTier1AppSystemDict(class CTier1AppSystemDict *, const class CTier1AppSystemDict  &); /* linkage=_ZN19CTier1AppSystemDictC4ERKS_ */
	void CTier1AppSystemDict(class CTier1AppSystemDict *, bool, void *, void *, int, bool, bool); /* linkage=_ZN19CTier1AppSystemDictC4EbPvS0_ibb */
	virtual bool Init(class CTier1AppSystemDict *); /* linkage=_ZN19CTier1AppSystemDict4InitEv */
	void SetModGameSubdir(class CTier1AppSystemDict *, const char  *); /* linkage=_ZN19CTier1AppSystemDict16SetModGameSubdirEPKc */
	void SetModFromFileName(class CTier1AppSystemDict *, const char  *, bool); /* linkage=_ZN19CTier1AppSystemDict18SetModFromFileNameEPKcb */
	void DisableModPathCheck(class CTier1AppSystemDict *); /* linkage=_ZN19CTier1AppSystemDict19DisableModPathCheckEv */
	bool ComputeModPathFromFileName(class CTier1AppSystemDict *, const char  *, class CBufferString *); /* linkage=_ZN19CTier1AppSystemDict26ComputeModPathFromFileNameEPKcP13CBufferString */
	virtual void ~CTier1AppSystemDict(class CTier1AppSystemDict *); /* linkage=_ZN19CTier1AppSystemDictD4Ev */
};

// <007DF8D7> ../public/appframework/tier1app.h:206
void CTier1AppSystemDict::CTier1AppSystemDict(bool bIsConsoleApp, void* hInstance, void* hPrevInstance, int nCmdShow, bool bIsGameApp, bool bIsDedicatedServer)
{
} /* size: 0 */

// <007DF876> ../public/appframework/tier1app.h:206
inline void CTier1AppSystemDict::CTier1AppSystemDict(bool bIsConsoleApp, void* hInstance, void* hPrevInstance, int nCmdShow, bool bIsGameApp, bool bIsDedicatedServer)
{
} /* size: 0 */

// <0464959F> ../public/appframework/tier1app.h:241
// variables: 8
// function calls: 29
void CTier1AppSystemDict::Init()
{
	bool bAddDefaultModPath; // 247
	KeyValues* pAppInfo; // 248
	bool bFoundExplicitAssertionRule; // 283
	bool bLaunchedFromSteam; // 284
	bool bDisableAsserts; // 298
	{
		CBufferStringN<40> modName; // 258
		{
			const char* szVMOD; // 265
			{
				CPathBufferString message; // 273
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 273
				CBufferString::Append(
					const char* pString,
					int nChars,
					bool bExact);  // 276
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 277
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 279
			}
			CTier1AppSystemDict::SetModGameSubdir(
					const char* pModGameSubDir);  // 268
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 261
		CTier1AppSystemDict::SetModGameSubdir(
				const char* pModGameSubDir);  // 261
		CBufferString::~CBufferString(); // 587
		CBufferStringN<40>::~CBufferStringN(); // 281
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<40>::CBufferStringN(); // 258
		CBufferString::~CBufferString(); // 587
		CBufferStringN<40>::~CBufferStringN(); // 281
	}
	CAppSystemDict::GetApplicationInfo(); // 248
	CAppSystemDict::IsGameApp(); // 247
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 251
	CAppSystemDict::GetGameInfo(); // 256
	CAppSystemDict::IsRunningOnCustomerMachine(); // 285
	CAppSystemDict::SetInDeveloperMode(
				bool bInDeveloperMode);  // 322
	CAppSystemDict::SetInDeveloperMode(
				bool bInDeveloperMode);  // 311
	Plat_IsInDebugSession(void); // 345
} /* size: 0, variables: 5, inline expansions: 8 (0 bytes) */

// <03308CEE> ../public/appframework/tier1app.h:241
// variables: 8
// function calls: 27
void CTier1AppSystemDict::Init()
{
	bool bAddDefaultModPath; // 247
	KeyValues* pAppInfo; // 248
	bool bFoundExplicitAssertionRule; // 283
	bool bLaunchedFromSteam; // 284
	bool bDisableAsserts; // 298
	{
		CBufferStringN<40> modName; // 258
		{
			const char* szVMOD; // 265
			{
				CPathBufferString message; // 273
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 273
				CBufferString::Append(
					const char* pString,
					int nChars,
					bool bExact);  // 276
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 277
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 279
			}
			CTier1AppSystemDict::SetModGameSubdir(
					const char* pModGameSubDir);  // 268
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 261
		CTier1AppSystemDict::SetModGameSubdir(
				const char* pModGameSubDir);  // 261
		CBufferString::~CBufferString(); // 587
		CBufferStringN<40>::~CBufferStringN(); // 281
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<40>::CBufferStringN(); // 258
		CBufferString::~CBufferString(); // 587
		CBufferStringN<40>::~CBufferStringN(); // 281
	}
	CAppSystemDict::GetApplicationInfo(); // 248
	CAppSystemDict::IsGameApp(); // 247
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 251
	CAppSystemDict::GetGameInfo(); // 256
	CAppSystemDict::IsRunningOnCustomerMachine(); // 285
	Plat_IsInDebugSession(void); // 345
} /* size: 1205, variables: 5, inline expansions: 6 (53 bytes) */

// <01343826> ../public/appframework/tier1app.h:381
inline void CTier1AppSystemDict::DisableModPathCheck()
{
} /* size: 0 */

// <0464C500> ../public/appframework/tier1app.h:389
// variables: 2
// function call: 1
void CTier1AppSystemDict::SetModGameSubdir()
{
	KeyValues* pKeyValues; // 391
	{
		int* _pCrash; // 394
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 394
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <04649552> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 29664
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <03308CA0> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 64699
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <02F176BA> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 63601
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <027D091C> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 34047
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <026235A1> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 23359
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <022BD1A7> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 19261
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <01F5D3D0> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 34616
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <01E8ECA8> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 58991
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <01CD951B> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 39346
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <01C1A263> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 39165
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <01725177> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 8437
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <01661155> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 9972
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <015A2D90> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 9470
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <014E1561> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 9615
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <01422CF7> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 56882
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <013437D9> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 46938
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <00C71290> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 47831
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <00A136F1> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 57716
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <008BF4FD> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 25402
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <004CC7A4> ../public/appframework/tier1app.h:389
// variables: 3
inline void CTier1AppSystemDict::SetModGameSubdir(const char* pModGameSubDir)
{
	KeyValues* pKeyValues; // 391
	const char   __FUNCTION__; // 37477
	{
		int* _pCrash; // 394
	}
} /* size: 0, variables: 2 */

// <013437A6> ../public/appframework/tier1app.h:447
inline void CTier1AppSystemDict::SetModFromFileName(const char* pFileName, bool bNoExeCheck)
{
} /* size: 0 */

