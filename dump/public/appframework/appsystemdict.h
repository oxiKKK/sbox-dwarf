
//
// public/appframework/appsystemdict.h
//
//	referenced by: libengine2.so
//
//	functions: 58
//	class: 1
//

// <04620A61> ../public/appframework/appsystemdict.h:77
// member functions: 147
// member variables: 31
// vtable entries: 5
// class size: 424
class CAppSystemDict {
	/* ../public/appframework/appsystemdict.h:249 */
	struct AppSystemRequest_t {
		const char * m_pRequestingModuleName; /* 0 8 */
		const char * m_pRequestingInterfaceName; /* 8 8 */
		const char * m_pModuleName; /* 16 8 */
		const char * m_pInterfaceName; /* 24 8 */
		IAppSystem * m_pSystem; /* 32 8 */
		PlatModule_t m_hModule; /* 40 8 */
		CreateInterfaceFn m_pModuleFactory; /* 48 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/appframework/appsystemdict.h:260 */
	struct ModuleInfo_t {
		char * m_pModuleName; /* 0 8 */
		PlatModule_t m_hModule; /* 8 8 */
		int m_nRefCount; /* 16 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/appframework/appsystemdict.h:267 */
	struct AppSystem_t {
		const char * m_pModuleName; /* 0 8 */
		const char * m_pInterfaceName; /* 8 8 */
		IAppSystem * m_pSystem; /* 16 8 */
		PlatModule_t m_hModule; /* 24 8 */
		int m_nPhase; /* 32 4 */
		bool m_bInvisible; /* 36 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/appframework/appsystemdict.h:277 */
	struct InterfaceInfo_t {
		AppSystemTier_t m_Tier; /* 0 4 */
		const char * m_pModuleName; /* 8 8 */
		const char * m_pInterfaceName; /* 16 8 */
		IAppSystem * m_pSystem; /* 24 8 */
		PlatModule_t m_hModule; /* 32 8 */
		CUtlSymbolTable m_Dependencies; /* 40 144 */
		void InterfaceInfo_t(InterfaceInfo_t* );
		void ~InterfaceInfo_t(InterfaceInfo_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	void CAppSystemDict(CAppSystemDict* , const CAppSystemDict& );
	int ()(void) * * _vptr.CAppSystemDict; /* 0 8 */
	/* appframework/appsystemdict.cpp:74 */
	void CAppSystemDict(CAppSystemDict* , bool, void* , void* , int, bool, bool);
	/* appframework/appsystemdict.cpp:135 */
	virtual void ~CAppSystemDict(CAppSystemDict* );
	/* appframework/appsystemdict.cpp:401 */
	void SetModuleSearchPath(CAppSystemDict* , const char* );
	/* appframework/appsystemdict.cpp:413 */
	void SetInitializationPhase(CAppSystemDict* , int);
	/* appframework/appsystemdict.cpp:420 */
	int GetInitializationPhase(const CAppSystemDict* );
	/* appframework/appsystemdict.cpp:429 */
	IAppSystem* AddSystem(CAppSystemDict* , IAppSystem* , const char* );
	/* appframework/appsystemdict.cpp:466 */
	IAppSystem* AddSystem(CAppSystemDict* , CreateInterfaceFn, const char* );
	/* appframework/appsystemdict.cpp:529 */
	IAppSystem* AddSystem(CAppSystemDict* , const char* , const char* , ErrorResponse_t);
	/* appframework/appsystemdict.cpp:498 */
	IAppSystem* AddSystem(CAppSystemDict* , PlatModule_t, const char* , ErrorResponse_t);
	/* appframework/appsystemdict.cpp:636 */
	void RemoveSystem(CAppSystemDict* , IAppSystem* );
	/* appframework/appsystemdict.cpp:692 */
	IAppSystem* ReplaceSystem(CAppSystemDict* , IAppSystem* , const char* , bool);
	/* appframework/appsystemdict.cpp:570 */
	bool AddSystems(CAppSystemDict* , int, const AppSystemInfo_t* );
	/* appframework/appsystemdict.cpp:786 */
	void AddNonAppSystemFactory(CAppSystemDict* , CreateInterfaceFn);
	/* appframework/appsystemdict.cpp:795 */
	void RemoveNonAppSystemFactory(CAppSystemDict* , CreateInterfaceFn);
	/* appframework/appsystemdict.cpp:747 */
	void* FindSystem(CAppSystemDict* , const char* );
	/* appframework/appsystemdict.cpp:804 */
	void ReconnectSystems(CAppSystemDict* , const char* );
	/* appframework/appsystemdict.cpp:1436 */
	CreateInterfaceFn GetFactory(CAppSystemDict* );
	/* appframework/appsystemdict.cpp:210 */
	virtual bool Init(CAppSystemDict* );
	/* appframework/appsystemdict.cpp:237 */
	void PreShutdown(CAppSystemDict* );
	/* appframework/appsystemdict.cpp:252 */
	void Shutdown(CAppSystemDict* , int);
	/* appframework/appsystemdict.cpp:300 */
	bool InitSDL(CAppSystemDict* , uint32);
	/* appframework/appsystemdict.cpp:315 */
	void ShutdownSDL(CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:384 */
	bool IsConsoleApp(const CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:419 */
	bool IsGameApp(const CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:409 */
	void SetDedicatedServer(CAppSystemDict* , bool);
	/* ../public/appframework/appsystemdict.h:414 */
	bool IsDedicatedServer(const CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:393 */
	KeyValues* GetGameInfo(CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:424 */
	const char* GetContentPath(const CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:429 */
	const char* GetModGameSubdir(const CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:443 */
	void SetInToolsMode(CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:454 */
	bool IsInToolsMode(const CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:463 */
	bool IsInDeveloperMode(const CAppSystemDict* );
	/* appframework/appsystemdict.cpp:392 */
	bool IsInVRMode(const CAppSystemDict* );
	/* appframework/appsystemdict.cpp:1344 */
	PlatWindow_t CreateAppWindow(CAppSystemDict* , const char* , int, int, int, int, int, int);
	/* ../public/appframework/appsystemdict.h:434 */
	const char* GetExecutablePath(const CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:398 */
	KeyValues* GetApplicationInfo(CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:403 */
	void* GetAppInstance(const CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:183 */
	void SuppressCOMInitialization(CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:189 */
	virtual CUtlString GetConsoleLogFilename(const CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:194 */
	virtual void ChangeLogFileSuffix(CAppSystemDict* , const char* );
	/* ../public/appframework/appsystemdict.h:199 */
	void SetStartupManifestsDisabled(CAppSystemDict* , bool);
	/* ../public/appframework/appsystemdict.h:472 */
	bool IsRunningOnCustomerMachine(const CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:477 */
	bool IsLowViolence(const CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:482 */
	void SetLowViolence(CAppSystemDict* , bool);
	/* ../public/appframework/appsystemdict.h:490 */
	int GetTestGroup(const CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:495 */
	void SetTestGroup(CAppSystemDict* , int);
	/* appframework/appsystemdict.cpp:343 */
	AppSystemBuildType_t GetBuildType(const CAppSystemDict* );
protected:
	/* appframework/appsystemdict.cpp:201 */
	virtual IApplication* CreateApplication(CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:231 */
	virtual void OnAppSystemLoaded(CAppSystemDict* );
	/* appframework/appsystemdict.cpp:321 */
	void SetGameInfo(CAppSystemDict* , KeyValues* , const char* );
	/* appframework/appsystemdict.cpp:378 */
	void SetInDeveloperMode(CAppSystemDict* , bool);
	/* ../public/appframework/appsystemdict.h:240 */
	bool AreStartupManifestsDisabled(CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:246 */
	void SetExecutablePath(CAppSystemDict* , const char* );
private:
	/* ../public/appframework/appsystemdict.h:289 */
	void UnloadAllModules(CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:290 */
	void RemoveAllSystems(CAppSystemDict* );
	/* appframework/appsystemdict.cpp:1067 */
	bool LoadSystemAndDependencies(CAppSystemDict* , CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >& , ErrorResponse_t);
	/* appframework/appsystemdict.cpp:818 */
	void ComputeDependencies(CAppSystemDict* , LibraryDependencies_t& );
	/* ../public/appframework/appsystemdict.h:287 */
	typedef struct CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable> LibraryDependencies_t;
	/* appframework/appsystemdict.cpp:887 */
	void SortDependentLibraries(CAppSystemDict* , LibraryDependencies_t& , CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >* );
	/* appframework/appsystemdict.cpp:865 */
	bool DictSortLessFunc(LibraryDependencies_t& , const int& , const int& );
	/* ../public/appframework/appsystemdict.h:302 */
	void ReportStartupFailure(CAppSystemDict* , int, int);
	/* appframework/appsystemdict.cpp:966 */
	PlatModule_t LoadModuleInPath(CAppSystemDict* , const char* , int* );
	/* appframework/appsystemdict.cpp:1045 */
	void UnloadModule(CAppSystemDict* , PlatModule_t);
	/* appframework/appsystemdict.cpp:616 */
	void FreeSystemEntry(CAppSystemDict* , AppSystem_t* );
	/* appframework/appsystemdict.cpp:669 */
	void RebuildSystemDictionary(CAppSystemDict* );
	/* appframework/appsystemdict.cpp:949 */
	void GenerateModuleFullPath(CAppSystemDict* , const char* , const char* , CBufferString* );
	CUtlVector<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> > m_modules; /* 8 32 */
	CUtlVector<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> > m_Systems; /* 40 32 */
	CUtlVector<void* (*)(char const*, int*), CUtlMemory<void* (*)(char const*, int*), int> > m_NonAppSystemFactories; /* 72 32* /
	CUtlStringList m_ModuleSearchPath; /* 104 32 */
	CUtlStringMap<short unsigned int, CUtlSymbolTable> m_SystemDict; /* 136 176 */
	int m_nExpectedShutdownLoggingStateIndex; /* 312 4 */
	ILoggingListener * m_pDefaultLoggingListener; /* 320 8 */
	KeyValues * m_pGameInfo; /* 328 8 */
	KeyValues * m_pApplicationInfo; /* 336 8 */
	void * m_hInstance; /* 344 8 */
	bool m_bIsConsoleApp; /* 352 1 */
	bool m_bInToolsMode; /* 353 1 */
	bool m_bIsInDeveloperMode; /* 354 1 */
	bool m_bIsGameApp; /* 355 1 */
	bool m_bIsDedicatedServer; /* 356 1 */
	bool m_bIsStandaloneApp; /* 357 1 */
	CUtlString m_ExecutablePath; /* 360 8 */
	CUtlString m_ModSubDir; /* 368 8 */
	CUtlString m_ContentPath; /* 376 8 */
	IApplication * m_pApplication; /* 384 8 */
	bool m_bInitialized; /* 392 1 */
	bool m_bSuppressCOMInitialization; /* 393 1 */
	int m_nStartupManifestsDisabledCount; /* 396 4 */
	int m_nAppSystemPhase; /* 400 4 */
	bool m_bIsRetail; /* 404 1 */
	bool m_bIsLowViolence; /* 405 1 */
	bool m_bInvokedPreShutdown; /* 406 1 */
	int m_iTestGroup; /* 408 4 */
	bool m_bTestMode; /* 412 1 */
	uint32 m_nSteamAppId; /* 416 4 */
	/* ../public/appframework/appsystemdict.h:349 */
	void SetInTestMode(CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:354 */
	bool IsInTestMode(const CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:359 */
	void SetInStandaloneApp(CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:364 */
	bool IsStandaloneApp(const CAppSystemDict* );
	/* ../public/appframework/appsystemdict.h:369 */
	void SetSteamAppId(CAppSystemDict* , uint32);
	/* ../public/appframework/appsystemdict.h:374 */
	uint32 GetSteamAppId(const CAppSystemDict* );
	/* <464c0be> appframework/appsystemdict.cpp:201 */
	virtual class IApplication * CreateApplication(class CAppSystemDict *); /* linkage=_ZN14CAppSystemDict17CreateApplicationEv */
	virtual void ~CAppSystemDict(class CAppSystemDict *); /* linkage=_ZN14CAppSystemDictD4Ev */
	/* <464ccbe> appframework/appsystemdict.cpp:378 */
	void SetInDeveloperMode(class CAppSystemDict *, bool); /* linkage=_ZN14CAppSystemDict18SetInDeveloperModeEb */
	virtual bool Init(class CAppSystemDict *); /* linkage=_ZN14CAppSystemDict4InitEv */
	/* <464d38a> appframework/appsystemdict.cpp:1436 */
	CreateInterfaceFn GetFactory(class CAppSystemDict *); /* linkage=_ZN14CAppSystemDict10GetFactoryEv */
	class IAppSystem * AddSystem(class CAppSystemDict *, class IAppSystem *, const char  *); /* linkage=_ZN14CAppSystemDict9AddSystemEP10IAppSystemPKc */
	class IAppSystem * AddSystem(class CAppSystemDict *, PlatModule_t, const char  *, enum ErrorResponse_t); /* linkage=_ZN14CAppSystemDict9AddSystemEP13_PlatModule_tPKc15ErrorResponse_t */
	void RemoveSystem(class CAppSystemDict *, class IAppSystem *); /* linkage=_ZN14CAppSystemDict12RemoveSystemEP10IAppSystem */
	/* <464cdad> appframework/appsystemdict.cpp:747 */
	void * FindSystem(class CAppSystemDict *, const char  *); /* linkage=_ZN14CAppSystemDict10FindSystemEPKc */
	enum AppSystemBuildType_t GetBuildType(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict12GetBuildTypeEv */
	/* <464cd83> appframework/appsystemdict.cpp:420 */
	int GetInitializationPhase(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict22GetInitializationPhaseEv */
	/* <464ca36> appframework/appsystemdict.cpp:237 */
	void PreShutdown(class CAppSystemDict *); /* linkage=_ZN14CAppSystemDict11PreShutdownEv */
	class IAppSystem * AddSystem(class CAppSystemDict *, const char  *, const char  *, enum ErrorResponse_t); /* linkage=_ZN14CAppSystemDict9AddSystemEPKcS1_15ErrorResponse_t */
	class IAppSystem * AddSystem(class CAppSystemDict *, CreateInterfaceFn, const char  *); /* linkage=_ZN14CAppSystemDict9AddSystemEPFPvPKcPiES2_ */
	bool AddSystems(class CAppSystemDict *, int, const class AppSystemInfo_t  *); /* linkage=_ZN14CAppSystemDict10AddSystemsEiPK15AppSystemInfo_t */
	/* <464cd3b> appframework/appsystemdict.cpp:413 */
	void SetInitializationPhase(class CAppSystemDict *, int); /* linkage=_ZN14CAppSystemDict22SetInitializationPhaseEi */
	void SetGameInfo(class CAppSystemDict *, class KeyValues *, const char  *); /* linkage=_ZN14CAppSystemDict11SetGameInfoEP9KeyValuesPKc */
	void SetTestGroup(class CAppSystemDict *, int); /* linkage=_ZN14CAppSystemDict12SetTestGroupEi */
	int GetTestGroup(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict12GetTestGroupEv */
	void SetLowViolence(class CAppSystemDict *, bool); /* linkage=_ZN14CAppSystemDict14SetLowViolenceEb */
	bool IsLowViolence(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict13IsLowViolenceEv */
	bool IsRunningOnCustomerMachine(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict26IsRunningOnCustomerMachineEv */
	bool IsInDeveloperMode(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict17IsInDeveloperModeEv */
	bool IsInToolsMode(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict13IsInToolsModeEv */
	const char  * GetExecutablePath(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict17GetExecutablePathEv */
	const char  * GetModGameSubdir(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict16GetModGameSubdirEv */
	const char  * GetContentPath(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict14GetContentPathEv */
	bool IsGameApp(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict9IsGameAppEv */
	bool IsDedicatedServer(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict17IsDedicatedServerEv */
	void * GetAppInstance(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict14GetAppInstanceEv */
	class KeyValues * GetApplicationInfo(class CAppSystemDict *); /* linkage=_ZN14CAppSystemDict18GetApplicationInfoEv */
	class KeyValues * GetGameInfo(class CAppSystemDict *); /* linkage=_ZN14CAppSystemDict11GetGameInfoEv */
	bool IsConsoleApp(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict12IsConsoleAppEv */
	uint32 GetSteamAppId(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict13GetSteamAppIdEv */
	bool IsStandaloneApp(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict15IsStandaloneAppEv */
	bool IsInTestMode(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict12IsInTestModeEv */
	bool AreStartupManifestsDisabled(class CAppSystemDict *); /* linkage=_ZN14CAppSystemDict27AreStartupManifestsDisabledEv */
	/* <464c094> ../public/appframework/appsystemdict.h:231 */
	virtual void OnAppSystemLoaded(class CAppSystemDict *); /* linkage=_ZN14CAppSystemDict17OnAppSystemLoadedEv */
	void SetStartupManifestsDisabled(class CAppSystemDict *, bool); /* linkage=_ZN14CAppSystemDict27SetStartupManifestsDisabledEb */
	/* <464c063> ../public/appframework/appsystemdict.h:194 */
	virtual void ChangeLogFileSuffix(class CAppSystemDict *, const char  *); /* linkage=_ZN14CAppSystemDict19ChangeLogFileSuffixEPKc */
	/* <464c015> ../public/appframework/appsystemdict.h:189 */
	virtual class CUtlString GetConsoleLogFilename(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict21GetConsoleLogFilenameEv */
	void SuppressCOMInitialization(class CAppSystemDict *); /* linkage=_ZN14CAppSystemDict25SuppressCOMInitializationEv */
	PlatWindow_t CreateAppWindow(class CAppSystemDict *, const char  *, int, int, int, int, int, int); /* linkage=_ZN14CAppSystemDict15CreateAppWindowEPKciiiiii */
	bool IsInVRMode(const class CAppSystemDict  *); /* linkage=_ZNK14CAppSystemDict10IsInVRModeEv */
	/* <464cc25> appframework/appsystemdict.cpp:315 */
	void ShutdownSDL(class CAppSystemDict *); /* linkage=_ZN14CAppSystemDict11ShutdownSDLEv */
	/* <464cb48> appframework/appsystemdict.cpp:300 */
	bool InitSDL(class CAppSystemDict *, uint32); /* linkage=_ZN14CAppSystemDict7InitSDLEj */
	void SetModuleSearchPath(class CAppSystemDict *, const char  *); /* linkage=_ZN14CAppSystemDict19SetModuleSearchPathEPKc */
	void SetInToolsMode(class CAppSystemDict *); /* linkage=_ZN14CAppSystemDict14SetInToolsModeEv */
	void SetDedicatedServer(class CAppSystemDict *, bool); /* linkage=_ZN14CAppSystemDict18SetDedicatedServerEb */
	void SetSteamAppId(class CAppSystemDict *, uint32); /* linkage=_ZN14CAppSystemDict13SetSteamAppIdEj */
	void SetInStandaloneApp(class CAppSystemDict *); /* linkage=_ZN14CAppSystemDict18SetInStandaloneAppEv */
	void SetInTestMode(class CAppSystemDict *); /* linkage=_ZN14CAppSystemDict13SetInTestModeEv */
	void CAppSystemDict(class CAppSystemDict *, const class CAppSystemDict  &); /* linkage=_ZN14CAppSystemDictC4ERKS_ */
	void CAppSystemDict(class CAppSystemDict *, bool, void *, void *, int, bool, bool); /* linkage=_ZN14CAppSystemDictC4EbPvS0_ibb */
	class IAppSystem * ReplaceSystem(class CAppSystemDict *, class IAppSystem *, const char  *, bool); /* linkage=_ZN14CAppSystemDict13ReplaceSystemEP10IAppSystemPKcb */
	void AddNonAppSystemFactory(class CAppSystemDict *, CreateInterfaceFn); /* linkage=_ZN14CAppSystemDict22AddNonAppSystemFactoryEPFPvPKcPiE */
	void RemoveNonAppSystemFactory(class CAppSystemDict *, CreateInterfaceFn); /* linkage=_ZN14CAppSystemDict25RemoveNonAppSystemFactoryEPFPvPKcPiE */
	void ReconnectSystems(class CAppSystemDict *, const char  *); /* linkage=_ZN14CAppSystemDict16ReconnectSystemsEPKc */
	void Shutdown(class CAppSystemDict *, int); /* linkage=_ZN14CAppSystemDict8ShutdownEi */
	void SetExecutablePath(class CAppSystemDict *, const char  *); /* linkage=_ZN14CAppSystemDict17SetExecutablePathEPKc */
	void UnloadAllModules(class CAppSystemDict *); /* linkage=_ZN14CAppSystemDict16UnloadAllModulesEv */
	void RemoveAllSystems(class CAppSystemDict *); /* linkage=_ZN14CAppSystemDict16RemoveAllSystemsEv */
	bool LoadSystemAndDependencies(class CAppSystemDict *, class CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> > &, enum ErrorResponse_t); /* linkage=_ZN14CAppSystemDict25LoadSystemAndDependenciesER10CUtlVectorINS_18AppSystemRequest_tE10CUtlMemoryIS1_iEE15ErrorResponse_t */
	void ComputeDependencies(class CAppSystemDict *, LibraryDependencies_t &); /* linkage=_ZN14CAppSystemDict19ComputeDependenciesER13CUtlStringMapINS_15InterfaceInfo_tE15CUtlSymbolTableE */
	void SortDependentLibraries(class CAppSystemDict *, LibraryDependencies_t &, class CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > *); /* linkage=_ZN14CAppSystemDict22SortDependentLibrariesER13CUtlStringMapINS_15InterfaceInfo_tE15CUtlSymbolTableEP10CUtlVectorIt10CUtlMemoryItiEE */
	bool DictSortLessFunc(LibraryDependencies_t &, const int  &, const int  &); /* linkage=_ZN14CAppSystemDict16DictSortLessFuncER13CUtlStringMapINS_15InterfaceInfo_tE15CUtlSymbolTableERKiS6_ */
	void ReportStartupFailure(class CAppSystemDict *, int, int); /* linkage=_ZN14CAppSystemDict20ReportStartupFailureEii */
	PlatModule_t LoadModuleInPath(class CAppSystemDict *, const char  *, int *); /* linkage=_ZN14CAppSystemDict16LoadModuleInPathEPKcPi */
	void UnloadModule(class CAppSystemDict *, PlatModule_t); /* linkage=_ZN14CAppSystemDict12UnloadModuleEP13_PlatModule_t */
	/* <464d318> appframework/appsystemdict.cpp:616 */
	void FreeSystemEntry(class CAppSystemDict *, class AppSystem_t *); /* linkage=_ZN14CAppSystemDict15FreeSystemEntryEPNS_11AppSystem_tE */
	void RebuildSystemDictionary(class CAppSystemDict *); /* linkage=_ZN14CAppSystemDict23RebuildSystemDictionaryEv */
	void GenerateModuleFullPath(class CAppSystemDict *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN14CAppSystemDict22GenerateModuleFullPathEPKcS1_P13CBufferString */
};

// <007CDDAA> ../public/appframework/appsystemdict.h:81
void CAppSystemDict::CAppSystemDict(bool bIsConsoleApp, void* hInstance, void* hPrevInstance, int nCmdShow, bool bIsGameApp, bool bIsDedicatedServer)
{
} /* size: 0 */

// <032F91BB> ../public/appframework/appsystemdict.h:82
void CAppSystemDict::~CAppSystemDict()
{
} /* size: 0 */

// <013456B2> ../public/appframework/appsystemdict.h:183
inline void CAppSystemDict::SuppressCOMInitialization()
{
} /* size: 0 */

// <0464C015> ../public/appframework/appsystemdict.h:189
// function call: 1
void CAppSystemDict::GetConsoleLogFilename()
{
	CUtlString::CUtlString(); // 191
} /* size: 15, inline expansions: 1 (7 bytes) */

// <0464B4E4> ../public/appframework/appsystemdict.h:189
inline void CAppSystemDict::GetConsoleLogFilename()
{
} /* size: 0 */

// <0464C063> ../public/appframework/appsystemdict.h:194
void CAppSystemDict::ChangeLogFileSuffix(const char* suffix)
{
} /* size: 5 */

// <0464B4BF> ../public/appframework/appsystemdict.h:194
inline void CAppSystemDict::ChangeLogFileSuffix(const char* suffix)
{
} /* size: 0 */

// <0464C4A0> ../public/appframework/appsystemdict.h:199
void CAppSystemDict::SetStartupManifestsDisabled()
{
	{
	}
} /* size: 23 */

// <0464B472> ../public/appframework/appsystemdict.h:199
// variables: 2
inline void CAppSystemDict::SetStartupManifestsDisabled(bool bDisabled)
{
	const char   __FUNCTION__; // 29926
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
} /* size: 0, variables: 1 */

// <0330A949> ../public/appframework/appsystemdict.h:199
// variables: 2
inline void CAppSystemDict::SetStartupManifestsDisabled(bool bDisabled)
{
	const char   __FUNCTION__; // 64961
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
} /* size: 0, variables: 1 */

// <02F1929A> ../public/appframework/appsystemdict.h:199
// variables: 2
inline void CAppSystemDict::SetStartupManifestsDisabled(bool bDisabled)
{
	const char   __FUNCTION__; // 63898
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
} /* size: 0, variables: 1 */

// <027D2584> ../public/appframework/appsystemdict.h:199
// variables: 2
inline void CAppSystemDict::SetStartupManifestsDisabled(bool bDisabled)
{
	const char   __FUNCTION__; // 34304
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
} /* size: 0, variables: 1 */

// <0262523B> ../public/appframework/appsystemdict.h:199
// variables: 2
inline void CAppSystemDict::SetStartupManifestsDisabled(bool bDisabled)
{
	const char   __FUNCTION__; // 23626
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
} /* size: 0, variables: 1 */

// <022BEE1C> ../public/appframework/appsystemdict.h:199
// variables: 2
inline void CAppSystemDict::SetStartupManifestsDisabled(bool bDisabled)
{
	const char   __FUNCTION__; // 19553
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
} /* size: 0, variables: 1 */

// <01F5F078> ../public/appframework/appsystemdict.h:199
// variables: 2
inline void CAppSystemDict::SetStartupManifestsDisabled(bool bDisabled)
{
	const char   __FUNCTION__; // 34873
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
} /* size: 0, variables: 1 */

// <01DC2E05> ../public/appframework/appsystemdict.h:199
// variables: 2
inline void CAppSystemDict::SetStartupManifestsDisabled(bool bDisabled)
{
	const char   __FUNCTION__; // 45425
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
} /* size: 0, variables: 1 */

// <01CDB1C4> ../public/appframework/appsystemdict.h:199
// variables: 2
inline void CAppSystemDict::SetStartupManifestsDisabled(bool bDisabled)
{
	const char   __FUNCTION__; // 39603
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
} /* size: 0, variables: 1 */

// <01AD1E4C> ../public/appframework/appsystemdict.h:199
// variables: 2
inline void CAppSystemDict::SetStartupManifestsDisabled(bool bDisabled)
{
	const char   __FUNCTION__; // 61818
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
} /* size: 0, variables: 1 */

// <01A11274> ../public/appframework/appsystemdict.h:199
// variables: 2
inline void CAppSystemDict::SetStartupManifestsDisabled(bool bDisabled)
{
	const char   __FUNCTION__; // 252
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
} /* size: 0, variables: 1 */

// <01726E1E> ../public/appframework/appsystemdict.h:199
// variables: 2
inline void CAppSystemDict::SetStartupManifestsDisabled(bool bDisabled)
{
	const char   __FUNCTION__; // 8694
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
} /* size: 0, variables: 1 */

// <015A4A38> ../public/appframework/appsystemdict.h:199
// variables: 2
inline void CAppSystemDict::SetStartupManifestsDisabled(bool bDisabled)
{
	const char   __FUNCTION__; // 9727
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
} /* size: 0, variables: 1 */

// <014E3214> ../public/appframework/appsystemdict.h:199
// variables: 2
inline void CAppSystemDict::SetStartupManifestsDisabled(bool bDisabled)
{
	const char   __FUNCTION__; // 9872
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
} /* size: 0, variables: 1 */

// <00B45FB3> ../public/appframework/appsystemdict.h:199
// variables: 2
inline void CAppSystemDict::SetStartupManifestsDisabled(bool bDisabled)
{
	const char   __FUNCTION__; // 61878
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
} /* size: 0, variables: 1 */

// <00A1538F> ../public/appframework/appsystemdict.h:199
// variables: 2
inline void CAppSystemDict::SetStartupManifestsDisabled(bool bDisabled)
{
	const char   __FUNCTION__; // 57993
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
} /* size: 0, variables: 1 */

// <007E0A9E> ../public/appframework/appsystemdict.h:199
// variables: 2
inline void CAppSystemDict::SetStartupManifestsDisabled(bool bDisabled)
{
	const char   __FUNCTION__; // 8316
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
} /* size: 0, variables: 1 */

// <00245A8F> ../public/appframework/appsystemdict.h:199
// variables: 2
inline void CAppSystemDict::SetStartupManifestsDisabled(bool bDisabled)
{
	const char   __FUNCTION__; // 20221
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
} /* size: 0, variables: 1 */

// <0464C094> ../public/appframework/appsystemdict.h:231
void CAppSystemDict::OnAppSystemLoaded()
{
} /* size: 5 */

// <0464B459> ../public/appframework/appsystemdict.h:231
inline void CAppSystemDict::OnAppSystemLoaded()
{
} /* size: 0 */

// <0330A917> ../public/appframework/appsystemdict.h:240
inline void CAppSystemDict::AreStartupManifestsDisabled()
{
} /* size: 0 */

// <04637170> ../public/appframework/appsystemdict.h:277
void InterfaceInfo_t::~InterfaceInfo_t()
{
} /* size: 0 */

// <04637153> ../public/appframework/appsystemdict.h:277
inline void InterfaceInfo_t::~InterfaceInfo_t()
{
} /* size: 0 */

// <04636FBC> ../public/appframework/appsystemdict.h:277
void InterfaceInfo_t::InterfaceInfo_t()
{
} /* size: 0 */

// <04636F9F> ../public/appframework/appsystemdict.h:277
inline void InterfaceInfo_t::InterfaceInfo_t()
{
} /* size: 0 */

// <01345586> ../public/appframework/appsystemdict.h:349
inline void CAppSystemDict::SetInTestMode()
{
} /* size: 0 */

// <0134556D> ../public/appframework/appsystemdict.h:354
inline void CAppSystemDict::IsInTestMode()
{
} /* size: 0 */

// <01345554> ../public/appframework/appsystemdict.h:359
inline void CAppSystemDict::SetInStandaloneApp()
{
} /* size: 0 */

// <0134553B> ../public/appframework/appsystemdict.h:364
inline void CAppSystemDict::IsStandaloneApp()
{
} /* size: 0 */

// <01345515> ../public/appframework/appsystemdict.h:369
inline void CAppSystemDict::SetSteamAppId(uint32 appId)
{
} /* size: 0 */

// <013454FC> ../public/appframework/appsystemdict.h:374
inline void CAppSystemDict::GetSteamAppId()
{
} /* size: 0 */

// <0464B440> ../public/appframework/appsystemdict.h:384
inline void CAppSystemDict::IsConsoleApp()
{
} /* size: 0 */

// <0464B427> ../public/appframework/appsystemdict.h:393
inline void CAppSystemDict::GetGameInfo()
{
} /* size: 0 */

// <0464B40E> ../public/appframework/appsystemdict.h:398
inline void CAppSystemDict::GetApplicationInfo()
{
} /* size: 0 */

// <0464B3F1> ../public/appframework/appsystemdict.h:403
inline void* CAppSystemDict::GetAppInstance()
{
} /* size: 0 */

// <0134546D> ../public/appframework/appsystemdict.h:409
inline void CAppSystemDict::SetDedicatedServer(bool bIsDedicatedServer)
{
} /* size: 0 */

// <0464B3D8> ../public/appframework/appsystemdict.h:414
inline void CAppSystemDict::IsDedicatedServer()
{
} /* size: 0 */

// <0464B3BF> ../public/appframework/appsystemdict.h:419
inline void CAppSystemDict::IsGameApp()
{
} /* size: 0 */

// <0464B3A6> ../public/appframework/appsystemdict.h:424
inline void CAppSystemDict::GetContentPath()
{
} /* size: 0 */

// <0464B38D> ../public/appframework/appsystemdict.h:429
inline void CAppSystemDict::GetModGameSubdir()
{
} /* size: 0 */

// <0464B374> ../public/appframework/appsystemdict.h:434
inline void CAppSystemDict::GetExecutablePath()
{
} /* size: 0 */

// <013453D7> ../public/appframework/appsystemdict.h:443
inline void CAppSystemDict::SetInToolsMode()
{
} /* size: 0 */

// <0464B35B> ../public/appframework/appsystemdict.h:454
inline void CAppSystemDict::IsInToolsMode()
{
} /* size: 0 */

// <0464B342> ../public/appframework/appsystemdict.h:463
inline void CAppSystemDict::IsInDeveloperMode()
{
} /* size: 0 */

// <0464B329> ../public/appframework/appsystemdict.h:472
inline void CAppSystemDict::IsRunningOnCustomerMachine()
{
} /* size: 0 */

// <0464B310> ../public/appframework/appsystemdict.h:477
inline void CAppSystemDict::IsLowViolence()
{
} /* size: 0 */

// <0464B2EA> ../public/appframework/appsystemdict.h:482
inline void CAppSystemDict::SetLowViolence(bool bLowViolence)
{
} /* size: 0 */

// <0464B2D1> ../public/appframework/appsystemdict.h:490
inline void CAppSystemDict::GetTestGroup()
{
} /* size: 0 */

// <0464B2AB> ../public/appframework/appsystemdict.h:495
inline void CAppSystemDict::SetTestGroup(int group)
{
} /* size: 0 */

// <0015BB5C> ../public/appframework/appsystemdict.h:518
// variables: 2
inline void TestForBreakImmediatelyInDebugger(void)
{
	bool bAttachToDebugger; // 520
	bool bBreakInDebugger; // 521
} /* size: 0, variables: 2 */

