
//
// public/appframework/iapplication.h
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
//	functions: 5
//	classes: 2
//

// <0464B1AA> ../public/appframework/iapplication.h:44
void IApplication::IApplication()
{
} /* size: 0 */

// <0464B18E> ../public/appframework/iapplication.h:44
inline void IApplication::IApplication()
{
} /* size: 0 */

// <00074935> ../public/appframework/iapplication.h:44
// member functions: 64
// member variable: 1
// vtable entries: 28
// class size: 8
class IApplication : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void IApplication(IApplication* , const IApplication& );
	void IApplication(IApplication* );
	/* ../public/appframework/iapplication.h:47 */
	virtual void ~IApplication(IApplication* );
	/* ../public/appframework/iapplication.h:50 */
	virtual IAppSystem* AddSystem(IApplication* , IAppSystem* , const char* );
	/* ../public/appframework/iapplication.h:53 */
	virtual IAppSystem* AddSystem(IApplication* , const char* , const char* );
	/* ../public/appframework/iapplication.h:54 */
	virtual IAppSystem* AddSystem(IApplication* , PlatModule_t, const char* );
	/* ../public/appframework/iapplication.h:57 */
	virtual void RemoveSystem(IApplication* , IAppSystem* );
	/* ../public/appframework/iapplication.h:60 */
	virtual bool AddSystems(IApplication* , int, const AppSystemInfo_t* );
	/* ../public/appframework/iapplication.h:63 */
	virtual void* FindSystem(IApplication* , const char* );
	/* ../public/appframework/iapplication.h:68 */
	virtual KeyValues* GetGameInfo(IApplication* );
	/* ../public/appframework/iapplication.h:71 */
	virtual AppSystemBuildType_t GetBuildType(const IApplication* );
	/* ../public/appframework/iapplication.h:74 */
	virtual bool IsInToolsMode(const IApplication* );
	/* ../public/appframework/iapplication.h:77 */
	virtual bool IsConsoleApp(const IApplication* );
	/* ../public/appframework/iapplication.h:80 */
	virtual bool IsInDeveloperMode(const IApplication* );
	/* ../public/appframework/iapplication.h:83 */
	virtual const char* GetExecutablePath(const IApplication* );
	/* ../public/appframework/iapplication.h:87 */
	virtual const char* GetModGameSubdir(const IApplication* );
	/* ../public/appframework/iapplication.h:90 */
	virtual KeyValues* GetApplicationInfo(IApplication* );
	/* ../public/appframework/iapplication.h:93 */
	virtual void* GetAppInstance(const IApplication* );
	/* ../public/appframework/iapplication.h:96 */
	virtual const char* GetContentPath(const IApplication* );
	/* ../public/appframework/iapplication.h:99 */
	virtual CUtlString GetConsoleLogFilename(const IApplication* );
	/* ../public/appframework/iapplication.h:102 */
	virtual void ChangeLogFileSuffix(IApplication* , const char* );
	/* ../public/appframework/iapplication.h:105 */
	virtual IAppSystem* AddSystemDontLoadStartupManifests(IApplication* , const char* , const char* );
	/* ../public/appframework/iapplication.h:108 */
	virtual AppGameMode_t GetGameMode(const IApplication* );
	/* ../public/appframework/iapplication.h:110 */
	bool IsDedicatedServer(const IApplication* );
	/* ../public/appframework/iapplication.h:115 */
	virtual bool IsRunningOnCustomerMachine(const IApplication* );
	/* ../public/appframework/iapplication.h:117 */
	virtual bool IsLowViolence(const IApplication* );
	/* ../public/appframework/iapplication.h:118 */
	virtual void SetLowViolence(IApplication* , bool);
	/* ../public/appframework/iapplication.h:120 */
	virtual int GetTestGroup(const IApplication* );
	/* ../public/appframework/iapplication.h:121 */
	virtual void SetTestGroup(IApplication* , int);
	/* ../public/appframework/iapplication.h:125 */
	virtual void SetInitializationPhase(IApplication* , int);
	/* ../public/appframework/iapplication.h:126 */
	virtual int GetInitializationPhase(const IApplication* );
	/* ../public/appframework/iapplication.h:128 */
	virtual void LoadStartupManifestGroup(IApplication* , const char* );
	virtual void ~IApplication(class IApplication *); /* linkage=_ZN12IApplicationD4Ev */
	virtual class IAppSystem * AddSystem(class IApplication *, class IAppSystem *, const char  *); /* linkage=_ZN12IApplication9AddSystemEP10IAppSystemPKc */
	virtual class IAppSystem * AddSystem(class IApplication *, const char  *, const char  *); /* linkage=_ZN12IApplication9AddSystemEPKcS1_ */
	virtual class IAppSystem * AddSystem(class IApplication *, PlatModule_t, const char  *); /* linkage=_ZN12IApplication9AddSystemEP13_PlatModule_tPKc */
	virtual void RemoveSystem(class IApplication *, class IAppSystem *); /* linkage=_ZN12IApplication12RemoveSystemEP10IAppSystem */
	virtual bool AddSystems(class IApplication *, int, const class AppSystemInfo_t  *); /* linkage=_ZN12IApplication10AddSystemsEiPK15AppSystemInfo_t */
	virtual void * FindSystem(class IApplication *, const char  *); /* linkage=_ZN12IApplication10FindSystemEPKc */
	virtual class KeyValues * GetGameInfo(class IApplication *); /* linkage=_ZN12IApplication11GetGameInfoEv */
	virtual enum AppSystemBuildType_t GetBuildType(const class IApplication  *); /* linkage=_ZNK12IApplication12GetBuildTypeEv */
	virtual bool IsInToolsMode(const class IApplication  *); /* linkage=_ZNK12IApplication13IsInToolsModeEv */
	virtual bool IsConsoleApp(const class IApplication  *); /* linkage=_ZNK12IApplication12IsConsoleAppEv */
	virtual bool IsInDeveloperMode(const class IApplication  *); /* linkage=_ZNK12IApplication17IsInDeveloperModeEv */
	virtual const char  * GetExecutablePath(const class IApplication  *); /* linkage=_ZNK12IApplication17GetExecutablePathEv */
	virtual const char  * GetModGameSubdir(const class IApplication  *); /* linkage=_ZNK12IApplication16GetModGameSubdirEv */
	virtual class KeyValues * GetApplicationInfo(class IApplication *); /* linkage=_ZN12IApplication18GetApplicationInfoEv */
	virtual void * GetAppInstance(const class IApplication  *); /* linkage=_ZNK12IApplication14GetAppInstanceEv */
	virtual const char  * GetContentPath(const class IApplication  *); /* linkage=_ZNK12IApplication14GetContentPathEv */
	virtual class CUtlString GetConsoleLogFilename(const class IApplication  *); /* linkage=_ZNK12IApplication21GetConsoleLogFilenameEv */
	virtual void ChangeLogFileSuffix(class IApplication *, const char  *); /* linkage=_ZN12IApplication19ChangeLogFileSuffixEPKc */
	virtual class IAppSystem * AddSystemDontLoadStartupManifests(class IApplication *, const char  *, const char  *); /* linkage=_ZN12IApplication33AddSystemDontLoadStartupManifestsEPKcS1_ */
	virtual enum AppGameMode_t GetGameMode(const class IApplication  *); /* linkage=_ZNK12IApplication11GetGameModeEv */
	bool IsDedicatedServer(const class IApplication  *); /* linkage=_ZNK12IApplication17IsDedicatedServerEv */
	virtual bool IsRunningOnCustomerMachine(const class IApplication  *); /* linkage=_ZNK12IApplication26IsRunningOnCustomerMachineEv */
	virtual bool IsLowViolence(const class IApplication  *); /* linkage=_ZNK12IApplication13IsLowViolenceEv */
	virtual void SetLowViolence(class IApplication *, bool); /* linkage=_ZN12IApplication14SetLowViolenceEb */
	virtual int GetTestGroup(const class IApplication  *); /* linkage=_ZNK12IApplication12GetTestGroupEv */
	virtual void SetTestGroup(class IApplication *, int); /* linkage=_ZN12IApplication12SetTestGroupEi */
	virtual void SetInitializationPhase(class IApplication *, int); /* linkage=_ZN12IApplication22SetInitializationPhaseEi */
	virtual int GetInitializationPhase(const class IApplication  *); /* linkage=_ZNK12IApplication22GetInitializationPhaseEv */
	virtual void LoadStartupManifestGroup(class IApplication *, const char  *); /* linkage=_ZN12IApplication24LoadStartupManifestGroupEPKc */
	void IApplication(class IApplication *, const class IApplication  &); /* linkage=_ZN12IApplicationC4ERKS_ */
	void IApplication(class IApplication *); /* linkage=_ZN12IApplicationC4Ev */
};

// <012BB176> ../public/appframework/iapplication.h:44
// member functions: 62
// member variable: 1
// vtable entries: 28
// class size: 8
class IApplication : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	/* ../public/appframework/iapplication.h:47 */
	virtual void ~IApplication(IApplication* );
	/* ../public/appframework/iapplication.h:50 */
	virtual IAppSystem* AddSystem(IApplication* , IAppSystem* , const char* );
	/* ../public/appframework/iapplication.h:53 */
	virtual IAppSystem* AddSystem(IApplication* , const char* , const char* );
	/* ../public/appframework/iapplication.h:54 */
	virtual IAppSystem* AddSystem(IApplication* , PlatModule_t, const char* );
	/* ../public/appframework/iapplication.h:57 */
	virtual void RemoveSystem(IApplication* , IAppSystem* );
	/* ../public/appframework/iapplication.h:60 */
	virtual bool AddSystems(IApplication* , int, const AppSystemInfo_t* );
	/* ../public/appframework/iapplication.h:63 */
	virtual void* FindSystem(IApplication* , const char* );
	/* ../public/appframework/iapplication.h:68 */
	virtual KeyValues* GetGameInfo(IApplication* );
	/* ../public/appframework/iapplication.h:71 */
	virtual AppSystemBuildType_t GetBuildType(const IApplication* );
	/* ../public/appframework/iapplication.h:74 */
	virtual bool IsInToolsMode(const IApplication* );
	/* ../public/appframework/iapplication.h:77 */
	virtual bool IsConsoleApp(const IApplication* );
	/* ../public/appframework/iapplication.h:80 */
	virtual bool IsInDeveloperMode(const IApplication* );
	/* ../public/appframework/iapplication.h:83 */
	virtual const char* GetExecutablePath(const IApplication* );
	/* ../public/appframework/iapplication.h:87 */
	virtual const char* GetModGameSubdir(const IApplication* );
	/* ../public/appframework/iapplication.h:90 */
	virtual KeyValues* GetApplicationInfo(IApplication* );
	/* ../public/appframework/iapplication.h:93 */
	virtual void* GetAppInstance(const IApplication* );
	/* ../public/appframework/iapplication.h:96 */
	virtual const char* GetContentPath(const IApplication* );
	/* ../public/appframework/iapplication.h:99 */
	virtual CUtlString GetConsoleLogFilename(const IApplication* );
	/* ../public/appframework/iapplication.h:102 */
	virtual void ChangeLogFileSuffix(IApplication* , const char* );
	/* ../public/appframework/iapplication.h:105 */
	virtual IAppSystem* AddSystemDontLoadStartupManifests(IApplication* , const char* , const char* );
	/* ../public/appframework/iapplication.h:108 */
	virtual AppGameMode_t GetGameMode(const IApplication* );
	/* ../public/appframework/iapplication.h:110 */
	bool IsDedicatedServer(const IApplication* );
	/* ../public/appframework/iapplication.h:115 */
	virtual bool IsRunningOnCustomerMachine(const IApplication* );
	/* ../public/appframework/iapplication.h:117 */
	virtual bool IsLowViolence(const IApplication* );
	/* ../public/appframework/iapplication.h:118 */
	virtual void SetLowViolence(IApplication* , bool);
	/* ../public/appframework/iapplication.h:120 */
	virtual int GetTestGroup(const IApplication* );
	/* ../public/appframework/iapplication.h:121 */
	virtual void SetTestGroup(IApplication* , int);
	/* ../public/appframework/iapplication.h:125 */
	virtual void SetInitializationPhase(IApplication* , int);
	/* ../public/appframework/iapplication.h:126 */
	virtual int GetInitializationPhase(const IApplication* );
	/* ../public/appframework/iapplication.h:128 */
	virtual void LoadStartupManifestGroup(IApplication* , const char* );
	virtual void ~IApplication(class IApplication *); /* linkage=_ZN12IApplicationD4Ev */
	virtual class IAppSystem * AddSystem(class IApplication *, class IAppSystem *, const char  *); /* linkage=_ZN12IApplication9AddSystemEP10IAppSystemPKc */
	virtual class IAppSystem * AddSystem(class IApplication *, const char  *, const char  *); /* linkage=_ZN12IApplication9AddSystemEPKcS1_ */
	virtual class IAppSystem * AddSystem(class IApplication *, PlatModule_t, const char  *); /* linkage=_ZN12IApplication9AddSystemEP13_PlatModule_tPKc */
	virtual void RemoveSystem(class IApplication *, class IAppSystem *); /* linkage=_ZN12IApplication12RemoveSystemEP10IAppSystem */
	virtual bool AddSystems(class IApplication *, int, const class AppSystemInfo_t  *); /* linkage=_ZN12IApplication10AddSystemsEiPK15AppSystemInfo_t */
	virtual void * FindSystem(class IApplication *, const char  *); /* linkage=_ZN12IApplication10FindSystemEPKc */
	virtual class KeyValues * GetGameInfo(class IApplication *); /* linkage=_ZN12IApplication11GetGameInfoEv */
	virtual enum AppSystemBuildType_t GetBuildType(const class IApplication  *); /* linkage=_ZNK12IApplication12GetBuildTypeEv */
	virtual bool IsInToolsMode(const class IApplication  *); /* linkage=_ZNK12IApplication13IsInToolsModeEv */
	virtual bool IsConsoleApp(const class IApplication  *); /* linkage=_ZNK12IApplication12IsConsoleAppEv */
	virtual bool IsInDeveloperMode(const class IApplication  *); /* linkage=_ZNK12IApplication17IsInDeveloperModeEv */
	virtual const char  * GetExecutablePath(const class IApplication  *); /* linkage=_ZNK12IApplication17GetExecutablePathEv */
	virtual const char  * GetModGameSubdir(const class IApplication  *); /* linkage=_ZNK12IApplication16GetModGameSubdirEv */
	virtual class KeyValues * GetApplicationInfo(class IApplication *); /* linkage=_ZN12IApplication18GetApplicationInfoEv */
	virtual void * GetAppInstance(const class IApplication  *); /* linkage=_ZNK12IApplication14GetAppInstanceEv */
	virtual const char  * GetContentPath(const class IApplication  *); /* linkage=_ZNK12IApplication14GetContentPathEv */
	virtual class CUtlString GetConsoleLogFilename(const class IApplication  *); /* linkage=_ZNK12IApplication21GetConsoleLogFilenameEv */
	virtual void ChangeLogFileSuffix(class IApplication *, const char  *); /* linkage=_ZN12IApplication19ChangeLogFileSuffixEPKc */
	virtual class IAppSystem * AddSystemDontLoadStartupManifests(class IApplication *, const char  *, const char  *); /* linkage=_ZN12IApplication33AddSystemDontLoadStartupManifestsEPKcS1_ */
	virtual enum AppGameMode_t GetGameMode(const class IApplication  *); /* linkage=_ZNK12IApplication11GetGameModeEv */
	bool IsDedicatedServer(const class IApplication  *); /* linkage=_ZNK12IApplication17IsDedicatedServerEv */
	virtual bool IsRunningOnCustomerMachine(const class IApplication  *); /* linkage=_ZNK12IApplication26IsRunningOnCustomerMachineEv */
	virtual bool IsLowViolence(const class IApplication  *); /* linkage=_ZNK12IApplication13IsLowViolenceEv */
	virtual void SetLowViolence(class IApplication *, bool); /* linkage=_ZN12IApplication14SetLowViolenceEb */
	virtual int GetTestGroup(const class IApplication  *); /* linkage=_ZNK12IApplication12GetTestGroupEv */
	virtual void SetTestGroup(class IApplication *, int); /* linkage=_ZN12IApplication12SetTestGroupEi */
	virtual void SetInitializationPhase(class IApplication *, int); /* linkage=_ZN12IApplication22SetInitializationPhaseEi */
	virtual int GetInitializationPhase(const class IApplication  *); /* linkage=_ZNK12IApplication22GetInitializationPhaseEv */
	virtual void LoadStartupManifestGroup(class IApplication *, const char  *); /* linkage=_ZN12IApplication24LoadStartupManifestGroupEPKc */
	void IApplication(class IApplication *, const class IApplication  &); /* linkage=_ZN12IApplicationC4ERKS_ */
	void IApplication(class IApplication *); /* linkage=_ZN12IApplicationC4Ev */
};

// <0464B52D> ../public/appframework/iapplication.h:47
void IApplication::~IApplication()
{
} /* size: 0 */

// <0464B4FD> ../public/appframework/iapplication.h:47
inline void IApplication::~IApplication()
{
} /* size: 0 */

// <0681F6BC> ../public/appframework/iapplication.h:110
inline void IApplication::IsDedicatedServer()
{
} /* size: 0 */

