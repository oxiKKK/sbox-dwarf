
//
// public/appframework/tier2app.h
//
//	referenced by: libengine2.so
//
//	functions: 54
//	classes: 2
//

// <032FA7BA> ../public/appframework/tier2app.h:56
// function calls: 5
void CTier2Application::~CTier2Application()
{
	IApplication::~IApplication(); // 120
	CBaseAppSystem<IApplication>::~CBaseAppSystem(); // 171
	CTier0AppSystem<IApplication, 0>::~CTier0AppSystem(); // 225
	CTier1AppSystem<IApplication, 0>::~CTier1AppSystem(); // 30
	CTier1Application::~CTier1Application(); // 56
} /* size: 5, inline expansions: 5 (0 bytes) */

// <032FA647> ../public/appframework/tier2app.h:56
// function calls: 6
void CTier2Application::~CTier2Application()
{
	IApplication::~IApplication(); // 120
	CBaseAppSystem<IApplication>::~CBaseAppSystem(); // 171
	CTier0AppSystem<IApplication, 0>::~CTier0AppSystem(); // 225
	CTier1AppSystem<IApplication, 0>::~CTier1AppSystem(); // 30
	CTier1Application::~CTier1Application(); // 56
	CTier2Application::~CTier2Application(); // 56
} /* size: 14, inline expansions: 6 (0 bytes) */

// <032FA62B> ../public/appframework/tier2app.h:56
inline void CTier2Application::~CTier2Application()
{
} /* size: 0 */

// <00124BE7> ../public/appframework/tier2app.h:56
// member functions: 16
// member variables: 2
// vtable entries: 4
// class size: 24
class CTier2Application : public CTier1Application {
public:
	/* class CTier1Application <ancestor>; */ /* 0 16 */
	void CTier2Application(CTier2Application* , CTier2Application& );
	void CTier2Application(CTier2Application* , const CTier2Application& );
	/* ../public/appframework/tier2app.h:204 */
	void CTier2Application(CTier2Application* , CAppSystemDict* );
	/* ../public/appframework/tier2app.h:213 */
	virtual bool Connect(CTier2Application* , CreateInterfaceFn);
	/* ../public/appframework/tier2app.h:223 */
	virtual void Reconnect(CTier2Application* , CreateInterfaceFn, const char* );
	/* ../public/appframework/tier2app.h:230 */
	virtual void Disconnect(CTier2Application* );
	/* ../public/appframework/tier2app.h:240 */
	virtual void LoadStartupManifestGroup(CTier2Application* , const char* );
protected:
	int m_nAppTier2LibraryConnects; /* 16 4 */
	virtual void ~CTier2Application(CTier2Application* );
	void CTier2Application(class CTier2Application *, class CTier2Application &); /* linkage=_ZN17CTier2ApplicationC4EOS_ */
	void CTier2Application(class CTier2Application *, const class CTier2Application  &); /* linkage=_ZN17CTier2ApplicationC4ERKS_ */
	void CTier2Application(class CTier2Application *, class CAppSystemDict *); /* linkage=_ZN17CTier2ApplicationC4EP14CAppSystemDict */
	virtual bool Connect(class CTier2Application *, CreateInterfaceFn); /* linkage=_ZN17CTier2Application7ConnectEPFPvPKcPiE */
	virtual void Reconnect(class CTier2Application *, CreateInterfaceFn, const char  *); /* linkage=_ZN17CTier2Application9ReconnectEPFPvPKcPiES2_ */
	virtual void Disconnect(class CTier2Application *); /* linkage=_ZN17CTier2Application10DisconnectEv */
	virtual void LoadStartupManifestGroup(class CTier2Application *, const char  *); /* linkage=_ZN17CTier2Application24LoadStartupManifestGroupEPKc */
	virtual void ~CTier2Application(class CTier2Application *); /* linkage=_ZN17CTier2ApplicationD4Ev */
};

// <000E0F22> ../public/appframework/tier2app.h:76
// member functions: 56
// member variables: 18
// vtable entries: 5
// class size: 544
class CTier2AppSystemDict : public CTier1AppSystemDict {
	/* ../public/appframework/tier2app.h:115 */
	struct BasePath_t {
		const char * szAbsolutePath; /* 0 8 */
		bool bReadOnly; /* 8 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CTier1AppSystemDict <ancestor>; */ /* 0 424 */
	void CTier2AppSystemDict(CTier2AppSystemDict* , const CTier2AppSystemDict& );
	/* ../public/appframework/tier2app.h:259 */
	void CTier2AppSystemDict(CTier2AppSystemDict* , bool, void* , void* , int, bool, bool);
	/* ../public/appframework/tier2app.h:277 */
	virtual void ~CTier2AppSystemDict(CTier2AppSystemDict* );
	/* ../public/appframework/tier2app.h:433 */
	virtual bool Init(CTier2AppSystemDict* );
	/* ../public/appframework/tier2app.h:488 */
	void SuppressStartupManifestLoad(CTier2AppSystemDict* , bool);
	/* ../public/appframework/tier2app.h:582 */
	void LoadStartupManifestGroup(CTier2AppSystemDict* , const char* );
	/* ../public/appframework/tier2app.h:94 */
	void EnsureToolStartupManifests(CTier2AppSystemDict* , bool);
	/* ../public/appframework/tier2app.h:95 */
	void EnsureVRStartupManifests(CTier2AppSystemDict* , bool);
	/* ../public/appframework/tier2app.h:96 */
	void EnsureGameStartupManifests(CTier2AppSystemDict* , bool);
	/* ../public/appframework/tier2app.h:97 */
	void EnsureConsoleStartupManifests(CTier2AppSystemDict* , bool);
	/* ../public/appframework/tier2app.h:378 */
	virtual CUtlString GetConsoleLogFilename(const CTier2AppSystemDict* );
	/* ../public/appframework/tier2app.h:405 */
	virtual void ChangeLogFileSuffix(CTier2AppSystemDict* , const char* );
protected:
	/* ../public/appframework/tier2app.h:424 */
	virtual IApplication* CreateApplication(CTier2AppSystemDict* );
	/* ../public/appframework/tier2app.h:512 */
	virtual void OnAppSystemLoaded(CTier2AppSystemDict* );
	/* ../public/appframework/tier2app.h:468 */
	bool ResetFileSystemPaths(CTier2AppSystemDict* );
private:
	/* ../public/appframework/tier2app.h:561 */
	void LoadStartupManifest(CTier2AppSystemDict* );
	/* ../public/appframework/tier2app.h:109 */
	void VerifySchemaBindingConsistency(CTier2AppSystemDict* );
	/* ../public/appframework/tier2app.h:671 */
	bool SetupFileSystemPaths(CTier2AppSystemDict* );
	/* ../public/appframework/tier2app.h:309 */
	void InitLoggingToFile(CTier2AppSystemDict* );
	/* ../public/appframework/tier2app.h:663 */
	bool ConstructLocalizedPath(CTier2AppSystemDict* , const char* , const char* , CPathBufferString* );
	/* ../public/appframework/tier2app.h:653 */
	void AddGameAndContentSearchPath(CTier2AppSystemDict* , const char* , const char* , const char* , const char* , bool, const BasePath_t* , size_t);
	/* ../public/appframework/tier2app.h:602 */
	void AddGameSearchPath(CTier2AppSystemDict* , const char* , const char* , bool, const BasePath_t* , size_t);
	/* ../public/appframework/tier2app.h:1075 */
	void AddSearchPathDependencies(CTier2AppSystemDict* , const CUtlStringList& , const char* , const char* , SearchPathAdd_t, SearchPathPriority_t);
	/* ../public/appframework/tier2app.h:1080 */
	void RemoveSearchPathDependencies(CTier2AppSystemDict* , const CUtlStringList& , const char* , const char* );
	/* ../public/appframework/tier2app.h:1085 */
	void AddSearchPath(CTier2AppSystemDict* , const char* , const char* , SearchPathAdd_t, SearchPathPriority_t, bool);
	/* ../public/appframework/tier2app.h:1090 */
	bool RemoveSearchPath(CTier2AppSystemDict* , const char* , const char* , bool);
	/* ../public/appframework/tier2app.h:1098 */
	bool AddVPKFile(CTier2AppSystemDict* , const char* , const char* , SearchPathAdd_t, bool);
	/* ../public/appframework/tier2app.h:1104 */
	void RemoveVPKFile(CTier2AppSystemDict* , const char* , const char* , bool);
	KeyValues * m_pKeyValues; /* 424 8 */
	CUtlVector<HResourceManifest__*, CUtlMemory<HResourceManifest__*, int> > m_StartupManifests; /* 432 32 */
	int m_nStartupManifestSuppressionCount; /* 464 4 */
	bool m_bStaleStartupResources; /* 468 1 */
	bool m_bLibrariesConnected; /* 469 1 */
	bool m_bEnsureToolStartupManifests; /* 470 1 */
	bool m_bEnsureVRStartupManifests; /* 471 1 */
	bool m_bEnsureGameStartupManifests; /* 472 1 */
	bool m_bEnsureConsoleStartupManifests; /* 473 1 */
	bool m_bAddonsOnRestricted; /* 474 1 */
	CInterlockedInt m_nAllowAddonChanges __attribute__((__aligned__(4))); /* 476 4 */
	CUtlString m_addonToRestrictTo; /* 480 8 */
	CUtlString m_LogFilename; /* 488 8 */
	CUtlString m_LogFileSuffix; /* 496 8 */
	bool m_bLogToFile; /* 504 1 */
	int m_nLogFileFlags; /* 508 4 */
	CFileLoggingListener m_LogToFileListener; /* 512 0 */
	void CTier2AppSystemDict(class CTier2AppSystemDict *, const class CTier2AppSystemDict  &); /* linkage=_ZN19CTier2AppSystemDictC4ERKS_ */
	void CTier2AppSystemDict(class CTier2AppSystemDict *, bool, void *, void *, int, bool, bool); /* linkage=_ZN19CTier2AppSystemDictC4EbPvS0_ibb */
	virtual void ~CTier2AppSystemDict(class CTier2AppSystemDict *); /* linkage=_ZN19CTier2AppSystemDictD4Ev */
	/* <331563b> ../public/appframework/tier2app.h:433 */
	virtual bool Init(class CTier2AppSystemDict *); /* linkage=_ZN19CTier2AppSystemDict4InitEv */
	void SuppressStartupManifestLoad(class CTier2AppSystemDict *, bool); /* linkage=_ZN19CTier2AppSystemDict27SuppressStartupManifestLoadEb */
	void LoadStartupManifestGroup(class CTier2AppSystemDict *, const char  *); /* linkage=_ZN19CTier2AppSystemDict24LoadStartupManifestGroupEPKc */
	void EnsureToolStartupManifests(class CTier2AppSystemDict *, bool); /* linkage=_ZN19CTier2AppSystemDict26EnsureToolStartupManifestsEb */
	void EnsureVRStartupManifests(class CTier2AppSystemDict *, bool); /* linkage=_ZN19CTier2AppSystemDict24EnsureVRStartupManifestsEb */
	void EnsureGameStartupManifests(class CTier2AppSystemDict *, bool); /* linkage=_ZN19CTier2AppSystemDict26EnsureGameStartupManifestsEb */
	void EnsureConsoleStartupManifests(class CTier2AppSystemDict *, bool); /* linkage=_ZN19CTier2AppSystemDict29EnsureConsoleStartupManifestsEb */
	/* <3312a39> ../public/appframework/tier2app.h:378 */
	virtual class CUtlString GetConsoleLogFilename(const class CTier2AppSystemDict  *); /* linkage=_ZNK19CTier2AppSystemDict21GetConsoleLogFilenameEv */
	/* <3315159> ../public/appframework/tier2app.h:405 */
	virtual void ChangeLogFileSuffix(class CTier2AppSystemDict *, const char  *); /* linkage=_ZN19CTier2AppSystemDict19ChangeLogFileSuffixEPKc */
	virtual class IApplication * CreateApplication(class CTier2AppSystemDict *); /* linkage=_ZN19CTier2AppSystemDict17CreateApplicationEv */
	/* <3313b6f> ../public/appframework/tier2app.h:512 */
	virtual void OnAppSystemLoaded(class CTier2AppSystemDict *); /* linkage=_ZN19CTier2AppSystemDict17OnAppSystemLoadedEv */
	bool ResetFileSystemPaths(class CTier2AppSystemDict *); /* linkage=_ZN19CTier2AppSystemDict20ResetFileSystemPathsEv */
	void LoadStartupManifest(class CTier2AppSystemDict *); /* linkage=_ZN19CTier2AppSystemDict19LoadStartupManifestEv */
	void VerifySchemaBindingConsistency(class CTier2AppSystemDict *); /* linkage=_ZN19CTier2AppSystemDict30VerifySchemaBindingConsistencyEv */
	bool SetupFileSystemPaths(class CTier2AppSystemDict *); /* linkage=_ZN19CTier2AppSystemDict20SetupFileSystemPathsEv */
	void InitLoggingToFile(class CTier2AppSystemDict *); /* linkage=_ZN19CTier2AppSystemDict17InitLoggingToFileEv */
	bool ConstructLocalizedPath(class CTier2AppSystemDict *, const char  *, const char  *, CPathBufferString *); /* linkage=_ZN19CTier2AppSystemDict22ConstructLocalizedPathEPKcS1_P14CBufferStringNILi200EE */
	void AddGameAndContentSearchPath(class CTier2AppSystemDict *, const char  *, const char  *, const char  *, const char  *, bool, const class BasePath_t  *, size_t); /* linkage=_ZN19CTier2AppSystemDict27AddGameAndContentSearchPathEPKcS1_S1_S1_bPKNS_10BasePath_tEm */
	void AddGameSearchPath(class CTier2AppSystemDict *, const char  *, const char  *, bool, const class BasePath_t  *, size_t); /* linkage=_ZN19CTier2AppSystemDict17AddGameSearchPathEPKcS1_bPKNS_10BasePath_tEm */
	void AddSearchPathDependencies(class CTier2AppSystemDict *, const class CUtlStringList  &, const char  *, const char  *, enum SearchPathAdd_t, enum SearchPathPriority_t); /* linkage=_ZN19CTier2AppSystemDict25AddSearchPathDependenciesERK14CUtlStringListPKcS4_15SearchPathAdd_t20SearchPathPriority_t */
	void RemoveSearchPathDependencies(class CTier2AppSystemDict *, const class CUtlStringList  &, const char  *, const char  *); /* linkage=_ZN19CTier2AppSystemDict28RemoveSearchPathDependenciesERK14CUtlStringListPKcS4_ */
	void AddSearchPath(class CTier2AppSystemDict *, const char  *, const char  *, enum SearchPathAdd_t, enum SearchPathPriority_t, bool); /* linkage=_ZN19CTier2AppSystemDict13AddSearchPathEPKcS1_15SearchPathAdd_t20SearchPathPriority_tb */
	bool RemoveSearchPath(class CTier2AppSystemDict *, const char  *, const char  *, bool); /* linkage=_ZN19CTier2AppSystemDict16RemoveSearchPathEPKcS1_b */
	bool AddVPKFile(class CTier2AppSystemDict *, const char  *, const char  *, enum SearchPathAdd_t, bool); /* linkage=_ZN19CTier2AppSystemDict10AddVPKFileEPKcS1_15SearchPathAdd_tb */
	void RemoveVPKFile(class CTier2AppSystemDict *, const char  *, const char  *, bool); /* linkage=_ZN19CTier2AppSystemDict13RemoveVPKFileEPKcS1_b */
} __attribute__((__aligned__(8)));

// <0015A0FF> ../public/appframework/tier2app.h:96
inline void CTier2AppSystemDict::EnsureGameStartupManifests(bool bEnsureGameStartupManifests)
{
} /* size: 0 */

// <03308C2E> ../public/appframework/tier2app.h:204
// variable: 1
void CTier2Application::CTier2Application(CAppSystemDict* pDict)
{
	{
		CTier2AppSystemDict* pTier2Dict; // 207
	}
} /* size: 0 */

// <03308BFA> ../public/appframework/tier2app.h:204
// variable: 1
inline void CTier2Application::CTier2Application(CAppSystemDict* pDict)
{
	{
		CTier2AppSystemDict* pTier2Dict; // 207
	}
} /* size: 0 */

// <03308B39> ../public/appframework/tier2app.h:213
// function call: 1
void CTier2Application::Connect(CreateInterfaceFn factory)
{
	CTier0AppSystem<IApplication, 0>::Connect(
		CreateInterfaceFn factory);  // 215
} /* size: 102, inline expansions: 1 (14 bytes) */

// <03308A61> ../public/appframework/tier2app.h:223
// function call: 1
void CTier2Application::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
	CBaseAppSystem<IApplication>::Reconnect(
			CreateInterfaceFn factory,
			const char* pInterfaceName);  // 225
} /* size: 55, inline expansions: 1 (8 bytes) */

// <033089D9> ../public/appframework/tier2app.h:230
// function call: 1
void CTier2Application::Disconnect()
{
	CTier0AppSystem<IApplication, 0>::Disconnect(); // 237
} /* size: 69, inline expansions: 1 (14 bytes) */

// <03308913> ../public/appframework/tier2app.h:240
// function call: 1
void CTier2Application::LoadStartupManifestGroup(const char* pGroupName)
{
	assert_cast<CTier2AppSystemDict*, CAppSystemDict>(CAppSystemDict* pSource); // 242
} /* size: 83, inline expansions: 1 (50 bytes) */

// <007DE3B6> ../public/appframework/tier2app.h:259
void CTier2AppSystemDict::CTier2AppSystemDict(bool bIsConsoleApp, void* hInstance, void* hPrevInstance, int nCmdShow, bool bIsGameApp, bool bIsDedicatedServer)
{
} /* size: 0 */

// <007DE34F> ../public/appframework/tier2app.h:259
inline void CTier2AppSystemDict::CTier2AppSystemDict(bool bIsConsoleApp, void* hInstance, void* hPrevInstance, int nCmdShow, bool bIsGameApp, bool bIsDedicatedServer)
{
} /* size: 0 */

// <03308354> ../public/appframework/tier2app.h:277
// variables: 4
// function calls: 18
void CTier2AppSystemDict::~CTier2AppSystemDict()
{
	{
		int nCount; // 281
		{
			int i; // 283
		}
	}
	CUtlVectorBase<HResourceManifest__::Count(); // 279
	{
		int nCount; // 281
		{
			int i; // 283
			CUtlMemory<HResourceManifest__::operator[](
					int i);  // 588
			CUtlVectorBase<HResourceManifest__::operator[](
					int i);  // 285
		}
		CUtlVectorBase<HResourceManifest__::RemoveAll(); // 288
	}
	CUtlString::~CUtlString(); // 304
	CUtlString::~CUtlString(); // 304
	CUtlString::~CUtlString(); // 304
	CUtlVectorBase<HResourceManifest__::RemoveAll(); // 1798
	CUtlMemory<HResourceManifest__::IsExternallyAllocated(); // 905
	CUtlMemory<HResourceManifest__::Purge(); // 903
	CUtlMemory<HResourceManifest__::Purge(); // 1799
	CUtlVectorBase<HResourceManifest__::Purge(); // 560
	ValidateAlignment<HResourceManifest__*>(void); // 508
	CUtlMemory<HResourceManifest__::Purge(); // 510
	CUtlMemory<HResourceManifest__::~CUtlMemory(); // 562
	CUtlVectorBase<HResourceManifest__::~CUtlVectorBase(); // 410
	CUtlVector<HResourceManifest__::~CUtlVector(); // 304
	CTier1AppSystemDict::~CTier1AppSystemDict(); // 304
} /* size: 341, inline expansions: 15 (250 bytes) */

// <033082ED> ../public/appframework/tier2app.h:277
void CTier2AppSystemDict::~CTier2AppSystemDict()
{
} /* size: 36 */

// <033082B8> ../public/appframework/tier2app.h:277
// variables: 2
inline void CTier2AppSystemDict::~CTier2AppSystemDict()
{
	{
		int nCount; // 281
		{
			int i; // 283
		}
	}
} /* size: 0 */

// <0330752E> ../public/appframework/tier2app.h:309
// variables: 10
// function calls: 41
void CTier2AppSystemDict::InitLoggingToFile()
{
	const char* pConsoleLogParm; // 324
	const char* pLogFilenameSearchPath; // 332
	bool bLogTimestamps; // 333
	int nLogRotationLength; // 334
	CUtlString strConsoleLogFilename; // 336
	const char* pszConsoleLogFilename; // 337
	{
		int i; // 348
		{
			CFmtStr strOldPath; // 350
			CFmtStr strNewPath; // 357
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 358
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 358
			CFileSystemPassThru::RenameFile(
					const char* pOldPath,
					const char* pNewPath,
					const char* pathID);  // 103
			CFileSystemPassThru::RenameFile(
					const char* pOldPath,
					const char* pNewPath,
					const char* pathID);  // 103
			CFileSystemPassThru::RenameFile(
					const char* pOldPath,
					const char* pNewPath,
					const char* pathID);  // 103
			CFileSystemPassThru::RenameFile(
					const char* pOldPath,
					const char* pNewPath,
					const char* pathID);  // 358
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 359
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 359
		}
	}
	CUtlString::operator=(
			const char* src);  // 331
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 381
	{
		CUtlString extension; // 385
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 388
		CUtlString::~CUtlString(); // 388
		CUtlString::Get(); // 389
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 391
		CUtlString::~CUtlString(); // 398
	}
	CTier2AppSystemDict::GetConsoleLogFilename(); // 336
	CUtlString::Get(); // 99
	CUtlString::String(); // 337
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 345
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 345
	CUtlString::~CUtlString(); // 374
} /* size: 1524, variables: 6, inline expansions: 14 (611 bytes) */

// <03312A39> ../public/appframework/tier2app.h:378
// variables: 2
// function calls: 11
void CTier2AppSystemDict::GetConsoleLogFilename()
{
	CUtlString logFile; // 381
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 381
	{
		CUtlString extension; // 385
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 388
		CUtlString::~CUtlString(); // 388
		CUtlString::Get(); // 389
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 391
		CUtlString::~CUtlString(); // 398
	}
} /* size: 287, variables: 1, inline expansions: 2 (54 bytes) */

// <0330746A> ../public/appframework/tier2app.h:378
// variables: 2
inline void CTier2AppSystemDict::GetConsoleLogFilename()
{
	CUtlString logFile; // 381
	{
		CUtlString extension; // 385
	}
} /* size: 0, variables: 1 */

// <03315159> ../public/appframework/tier2app.h:405
// variables: 2
// function calls: 17
void CTier2AppSystemDict::ChangeLogFileSuffix(const char* suffix)
{
	CUtlString::operator=(
			const char* src);  // 407
	{
		const char* pLogFilenameSearchPath; // 411
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 381
		{
			CUtlString extension; // 385
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 388
			CUtlString::~CUtlString(); // 388
			CUtlString::Get(); // 389
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 391
			CUtlString::~CUtlString(); // 398
		}
		CTier2AppSystemDict::GetConsoleLogFilename(); // 416
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 416
		CUtlString::~CUtlString(); // 416
	}
	CTier2AppSystemDict::ChangeLogFileSuffix(
				const char* suffix);  // 405
} /* size: 435, inline expansions: 2 (340 bytes) */

// <03307435> ../public/appframework/tier2app.h:405
// variable: 1
inline void CTier2AppSystemDict::ChangeLogFileSuffix(const char* suffix)
{
	{
		const char* pLogFilenameSearchPath; // 411
	}
} /* size: 0 */

// <03307221> ../public/appframework/tier2app.h:424
// variable: 1
// function calls: 8
void CTier2AppSystemDict::CreateApplication()
{
	{
		CTier2AppSystemDict* pTier2Dict; // 207
		assert_cast<CTier2AppSystemDict*, CAppSystemDict>(CAppSystemDict* pSource); // 207
	}
	IAppSystem::IAppSystem(); // 44
	IApplication::IApplication(); // 120
	CBaseAppSystem<IApplication>::CBaseAppSystem(); // 171
	CTier0AppSystem<IApplication, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IApplication, 0>::CTier1AppSystem(); // 33
	CTier1Application::CTier1Application(
				CAppSystemDict* pDict);  // 204
	CTier2Application::CTier2Application(
				CAppSystemDict* pDict);  // 426
} /* size: 92, inline expansions: 7 (61 bytes) */

// <0331563B> ../public/appframework/tier2app.h:433
// variables: 2
// function call: 1
void CTier2AppSystemDict::Init()
{
	IFileSystem* pFileSystem; // 439
	CreateInterfaceFn factory; // 443
	CTier2AppSystemDict::Init(); // 433
} /* size: 199, variables: 2, inline expansions: 1 (48 bytes) */

// <033071EE> ../public/appframework/tier2app.h:433
// variables: 2
inline void CTier2AppSystemDict::Init()
{
	IFileSystem* pFileSystem; // 439
	CreateInterfaceFn factory; // 443
} /* size: 0, variables: 2 */

// <007DCD33> ../public/appframework/tier2app.h:468
// variable: 1
inline void CTier2AppSystemDict::ResetFileSystemPaths()
{
	KeyValues* pGameInfo; // 470
} /* size: 0, variables: 1 */

// <01341A3D> ../public/appframework/tier2app.h:488
// variables: 2
inline void CTier2AppSystemDict::SuppressStartupManifestLoad(bool bEnable)
{
	const char   __FUNCTION__; // 47235
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 497
	}
} /* size: 0, variables: 1 */

// <007DCCE2> ../public/appframework/tier2app.h:488
// variables: 2
inline void CTier2AppSystemDict::SuppressStartupManifestLoad(bool bEnable)
{
	const char   __FUNCTION__; // 8316
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 497
	}
} /* size: 0, variables: 1 */

// <00158601> ../public/appframework/tier2app.h:488
// variables: 2
inline void CTier2AppSystemDict::SuppressStartupManifestLoad(bool bEnable)
{
	const char   __FUNCTION__; // 13739
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 497
	}
} /* size: 0, variables: 1 */

// <03313B6F> ../public/appframework/tier2app.h:512
// function calls: 6
void CTier2AppSystemDict::OnAppSystemLoaded()
{
	CAppSystemDict::IsConsoleApp(); // 518
	CAppSystemDict::AreStartupManifestsDisabled(); // 532
	CAppSystemDict::IsInToolsMode(); // 565
	CAppSystemDict::IsConsoleApp(); // 566
	CTier2AppSystemDict::LoadStartupManifest(); // 551
	CTier2AppSystemDict::OnAppSystemLoaded(); // 512
} /* size: 238, inline expansions: 6 (281 bytes) */

// <033071D5> ../public/appframework/tier2app.h:512
inline void CTier2AppSystemDict::OnAppSystemLoaded()
{
} /* size: 0 */

// <033071A2> ../public/appframework/tier2app.h:561
// variables: 2
inline void CTier2AppSystemDict::LoadStartupManifest()
{
	bool bLoadToolsStartupManifests; // 565
	bool bLoadGameStartupManifests; // 566
} /* size: 0, variables: 2 */

// <03306E03> ../public/appframework/tier2app.h:582
// variable: 1
// function calls: 13
void CTier2AppSystemDict::LoadStartupManifestGroup(const char* pGroupName)
{
	HResourceManifest hStartupManifest; // 586
	CUtlMemory<HResourceManifest__::NumAllocated(); // 1196
	CUtlMemory<HResourceManifest__::Base(); // 112
	CUtlVectorBase<HResourceManifest__::Base(); // 368
	CUtlVectorBase<HResourceManifest__::ResetDbgInfo(); // 824
	CUtlMemory<HResourceManifest__::IsGrowable(); // 823
	CUtlMemory<HResourceManifest__::IsExternallyAllocated(); // 859
	CUtlMemory<HResourceManifest__::IsExternallyAllocated(); // 861
	CUtlMemory<HResourceManifest__::Grow(
		int num);  // 806
	CUtlVectorBase<HResourceManifest__::GrowMemory(
			int num);  // 1198
	CUtlMemory<HResourceManifest__::operator[](
			int i);  // 602
	CUtlVectorBase<HResourceManifest__::Element(
		int i);  // 1201
	CopyConstruct<HResourceManifest__*>(HResourceManifest__** pMemory,
						HResourceManifest__* const& src);  // 1201
	CUtlVectorBase<HResourceManifest__::AddToTail(
			HResourceManifest__* const& src);  // 595
} /* size: 398, variables: 1, inline expansions: 13 (856 bytes) */

// <03313EB8> ../public/appframework/tier2app.h:602
// variables: 6
// function calls: 66
void BasePath_t::AddGameSearchPath()
{
	{
		CUtlStringToken pathMergeToken; // 606
		CPathBufferString fullPath; // 607
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 607
		{
			CFmtStr tempPath; // 612
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 613
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 613
			{
				size_t i; // 614
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 83
				CFmtStrN<256>::operator char const*(); // 616
				CFileSystemPassThru::AddSearchPath(
						const char* pPath,
						const char* pathID,
						SearchPathAdd_t addType,
						SearchPathPriority_t nPriority,
						CUtlStringToken pathMergeToken);  // 619
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 620
				CFileSystemPassThru::SetSearchPathReadOnly(
							const char* pPath,
							const char* pathID,
							bool bReadOnly);  // 162
				CFileSystemPassThru::SetSearchPathReadOnly(
							const char* pPath,
							const char* pathID,
							bool bReadOnly);  // 620
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 617
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 619
			}
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 622
		}
		CUtlStringToken::CUtlStringToken(); // 606
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 624
		{
			size_t i; // 625
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 630
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 630
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 631
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 631
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 628
		}
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 633
	}
	{
		CPathBufferString tempPath; // 639
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 604
		CBufferString::AppendConcat(
				const char* pStr1,
				int nChars1,
				const char* pStr2,
				int nChars2,
				bool bExact);  // 609
		CBufferStringN<200>::CBufferStringN(
				const char* pString1,
				const char* pString2,
				bool bExact,
				bool bGrowable);  // 639
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 640
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 642
		CUtlStringToken::CUtlStringToken(); // 642
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 644
	}
	CUtlStringToken::CUtlStringToken(); // 646
} /* size: 2237, inline expansions: 1 (18 bytes) */

// <03306D4B> ../public/appframework/tier2app.h:602
// variables: 6
inline void CTier2AppSystemDict::AddGameSearchPath(const char* pPathID, const char* pAbsoluteOrRelativePath, bool bTempContent, const BasePath_t* pBasePaths, size_t nBasePaths)
{
	{
		CUtlStringToken pathMergeToken; // 606
		CPathBufferString fullPath; // 607
		{
			CFmtStr tempPath; // 612
			{
				size_t i; // 614
			}
		}
		{
			size_t i; // 625
		}
	}
	{
		CPathBufferString tempPath; // 639
	}
} /* size: 0 */

// <02F3F1EE> ../public/appframework/tier2app.h:602
// variables: 6
// function calls: 67
void BasePath_t::AddGameSearchPath()
{
	{
		CUtlStringToken pathMergeToken; // 606
		CPathBufferString fullPath; // 607
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 607
		{
			CFmtStr tempPath; // 612
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 613
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 613
			{
				size_t i; // 614
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 83
				CFmtStrN<256>::operator char const*(); // 616
				CFileSystemPassThru::AddSearchPath(
						const char* pPath,
						const char* pathID,
						SearchPathAdd_t addType,
						SearchPathPriority_t nPriority,
						CUtlStringToken pathMergeToken);  // 95
				CFileSystemPassThru::AddSearchPath(
						const char* pPath,
						const char* pathID,
						SearchPathAdd_t addType,
						SearchPathPriority_t nPriority,
						CUtlStringToken pathMergeToken);  // 619
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 620
				CFileSystemPassThru::SetSearchPathReadOnly(
							const char* pPath,
							const char* pathID,
							bool bReadOnly);  // 162
				CFileSystemPassThru::SetSearchPathReadOnly(
							const char* pPath,
							const char* pathID,
							bool bReadOnly);  // 620
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 617
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 619
			}
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 622
		}
		CUtlStringToken::CUtlStringToken(); // 606
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 624
		{
			size_t i; // 625
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 630
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 630
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 631
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 631
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 628
		}
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 633
	}
	{
		CPathBufferString tempPath; // 639
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 604
		CBufferString::AppendConcat(
				const char* pStr1,
				int nChars1,
				const char* pStr2,
				int nChars2,
				bool bExact);  // 609
		CBufferStringN<200>::CBufferStringN(
				const char* pString1,
				const char* pString2,
				bool bExact,
				bool bGrowable);  // 639
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 640
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 642
		CUtlStringToken::CUtlStringToken(); // 642
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 644
	}
	CUtlStringToken::CUtlStringToken(); // 646
} /* size: 0, inline expansions: 1 (0 bytes) */

// <03306CD7> ../public/appframework/tier2app.h:653
inline void CTier2AppSystemDict::AddGameAndContentSearchPath(const char* pGamePathID, const char* pContentPathID, const char* pContentRoot, const char* pRelativePath, bool bTempContent, const BasePath_t* pBasePaths, size_t nBasePaths)
{
} /* size: 0 */

// <03306C97> ../public/appframework/tier2app.h:663
inline void CTier2AppSystemDict::ConstructLocalizedPath(const char* pGameInfoKeyName, const char* pRelativePath, CPathBufferString* pLocalizedRelativePath)
{
} /* size: 0 */

// <033031E9> ../public/appframework/tier2app.h:671
// variables: 56
// function calls: 201
void CTier2AppSystemDict::SetupFileSystemPaths()
{
	const char* szExpectedPlatformBinPathRelativeToGameDir; // 706
	const char* szExpectedTier0PathRelativeToGameDir; // 707
	bool bAddDefaultModPath; // 712
	KeyValues* pAppInfo; // 713
	CPathBufferString executableDir; // 720
	const char* pGameDir; // 722
	CPathBufferString baseDir; // 747
	CPathBufferString dirIter; // 755
	const char* pGameRootOverride; // 757
	int nLastLen; // 764
	const char* pAltGameRoot; // 822
	CPathBufferString platformPath; // 831
	KeyValues* pGameInfo; // 845
	KeyValues* pFileSystemInfo; // 846
	KeyValues* pSearchPaths; // 847
	bool bUsingTempContent; // 863
	bool bFoundGame; // 864
	bool bFoundMod; // 865
	bool bFoundWrite; // 866
	bool bPublicContent; // 867
	CBufferString firstGamePath; // 869
	CBufferString relativeAddonPath; // 870
	CPathBufferString* pLayeredGameRootPathBuffers; // 872
	size_t nLayeredGameRootPathBuffers; // 873
	BasePath_t* pLayeredGameRootPaths; // 874
	size_t nLayeredGameRootPaths; // 875
	const char   __FUNCTION__; // 64792
	{
		CPathBufferString fileTestPath; // 767
		int nNewLen; // 790
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 767
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 769
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 770
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 772
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 778
		CBufferString::IsEmpty(); // 786
		CBufferString::Length(); // 790
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 780
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 780
	}
	{
		CPathBufferString workingDir; // 851
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 851
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 853
		CUtlStringToken::CUtlStringToken(); // 853
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 860
	}
	{
		size_t nAdditionalMobileFileSystemLayers; // 886
		{
			KeyValues* pCur; // 877
			{
				const char* pPathID; // 879
			}
		}
		{
			const char* szIteratedGameRoot; // 888
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 891
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 892
			CUtlStringToken::CUtlStringToken(); // 891
		}
		{
			int i; // 900
			{
				KeyValues* pCur; // 905
				{
					const char* pPathID; // 907
					{
						size_t nRootIter; // 910
						{
							const char* szRoot; // 912
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
							}
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 916
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 912
							CFileSystemPassThru::AddSearchPath(
									const char* pPath,
									const char* pathID,
									SearchPathAdd_t addType,
									SearchPathPriority_t nPriority,
									CUtlStringToken pathMergeToken);  // 918
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 1479
							Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 914
							CUtlStringToken::CUtlStringToken(); // 918
						}
					}
				}
			}
			{
				size_t nRootIter; // 925
				{
					const char* szRoot; // 927
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 928
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 927
				}
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
			}
		}
	}
	{
		KeyValues* pCur; // 939
		{
			const char* pPathID; // 941
			const char* pRelativePath; // 942
			{
				CPathBufferString path; // 946
			}
			{
				const char* pAddons; // 1000
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
				}
				CTier2AppSystemDict::AddGameAndContentSearchPath(
								const char* pGamePathID,
								const char* pContentPathID,
								const char* pContentRoot,
								const char* pRelativePath,
								bool bTempContent,
								const BasePath_t* pBasePaths,
								size_t nBasePaths);  // 1005
			}
			{
				const char* pAddons; // 1011
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
				}
				{
					CPathBufferString path; // 1018
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1018
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1024
				}
				CAppSystemDict::IsInToolsMode(); // 1016
			}
			{
				CPathBufferString fullWritePath; // 1029
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1029
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1031
				CUtlStringToken::CUtlStringToken(); // 1031
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1032
			}
			CTier2AppSystemDict::AddGameAndContentSearchPath(
							const char* pGamePathID,
							const char* pContentPathID,
							const char* pContentRoot,
							const char* pRelativePath,
							bool bTempContent,
							const BasePath_t* pBasePaths,
							size_t nBasePaths);  // 969
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 983
		}
	}
	{
		CPathBufferString fullWritePath; // 1041
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1041
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1042
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		CUtlStringToken::CUtlStringToken(); // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1044
	}
	{
		size_t i; // 1067
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1526
		Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 1069
	}
	CAppSystemDict::GetApplicationInfo(); // 713
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 716
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 720
	CBufferString::IsEmpty(); // 728
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 730
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 730
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 733
	CUtlStringToken::CUtlStringToken(); // 733
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 755
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 763
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 763
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 765
	CBufferString::Length(); // 764
	CBufferString::IsEmpty(); // 797
	CAppSystemDict::IsGameApp(); // 799
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 801
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 832
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 833
	CUtlStringToken::CUtlStringToken(); // 833
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 837
	CUtlStringToken::CUtlStringToken(); // 837
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 839
	CUtlStringToken::CUtlStringToken(); // 839
	CAppSystemDict::GetGameInfo(); // 845
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 869
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 870
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 760
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1051
	CUtlStringToken::CUtlStringToken(); // 1051
	CBufferString::~CBufferString(); // 1073
	CBufferString::~CBufferString(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 801
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 825
} /* size: 6764, variables: 27, inline expansions: 105 (3017 bytes) */

// <02F11C2F> ../public/appframework/tier2app.h:671
// variables: 56
// function calls: 201
void CTier2AppSystemDict::SetupFileSystemPaths()
{
	const char* szExpectedPlatformBinPathRelativeToGameDir; // 706
	const char* szExpectedTier0PathRelativeToGameDir; // 707
	bool bAddDefaultModPath; // 712
	KeyValues* pAppInfo; // 713
	CPathBufferString executableDir; // 720
	const char* pGameDir; // 722
	CPathBufferString baseDir; // 747
	CPathBufferString dirIter; // 755
	const char* pGameRootOverride; // 757
	int nLastLen; // 764
	const char* pAltGameRoot; // 822
	CPathBufferString platformPath; // 831
	KeyValues* pGameInfo; // 845
	KeyValues* pFileSystemInfo; // 846
	KeyValues* pSearchPaths; // 847
	bool bUsingTempContent; // 863
	bool bFoundGame; // 864
	bool bFoundMod; // 865
	bool bFoundWrite; // 866
	bool bPublicContent; // 867
	CBufferString firstGamePath; // 869
	CBufferString relativeAddonPath; // 870
	CPathBufferString* pLayeredGameRootPathBuffers; // 872
	size_t nLayeredGameRootPathBuffers; // 873
	BasePath_t* pLayeredGameRootPaths; // 874
	size_t nLayeredGameRootPaths; // 875
	const char   __FUNCTION__; // 63709
	{
		CPathBufferString fileTestPath; // 767
		int nNewLen; // 790
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 767
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 769
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 770
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 772
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 778
		CBufferString::IsEmpty(); // 786
		CBufferString::Length(); // 790
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 780
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 780
	}
	{
		CPathBufferString workingDir; // 851
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 851
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 853
		CUtlStringToken::CUtlStringToken(); // 853
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 860
	}
	{
		size_t nAdditionalMobileFileSystemLayers; // 886
		{
			KeyValues* pCur; // 877
			{
				const char* pPathID; // 879
			}
		}
		{
			const char* szIteratedGameRoot; // 888
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 891
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 892
			CUtlStringToken::CUtlStringToken(); // 891
		}
		{
			int i; // 900
			{
				KeyValues* pCur; // 905
				{
					const char* pPathID; // 907
					{
						size_t nRootIter; // 910
						{
							const char* szRoot; // 912
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
							}
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 916
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 912
							CFileSystemPassThru::AddSearchPath(
									const char* pPath,
									const char* pathID,
									SearchPathAdd_t addType,
									SearchPathPriority_t nPriority,
									CUtlStringToken pathMergeToken);  // 918
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 1479
							Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 914
							CUtlStringToken::CUtlStringToken(); // 918
						}
					}
				}
			}
			{
				size_t nRootIter; // 925
				{
					const char* szRoot; // 927
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 928
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 927
				}
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
			}
		}
	}
	{
		KeyValues* pCur; // 939
		{
			const char* pPathID; // 941
			const char* pRelativePath; // 942
			{
				CPathBufferString path; // 946
			}
			{
				const char* pAddons; // 1000
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
				}
				CTier2AppSystemDict::AddGameAndContentSearchPath(
								const char* pGamePathID,
								const char* pContentPathID,
								const char* pContentRoot,
								const char* pRelativePath,
								bool bTempContent,
								const BasePath_t* pBasePaths,
								size_t nBasePaths);  // 1005
			}
			{
				const char* pAddons; // 1011
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
				}
				{
					CPathBufferString path; // 1018
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1018
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1024
				}
				CAppSystemDict::IsInToolsMode(); // 1016
			}
			{
				CPathBufferString fullWritePath; // 1029
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1029
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1031
				CUtlStringToken::CUtlStringToken(); // 1031
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1032
			}
			CTier2AppSystemDict::AddGameAndContentSearchPath(
							const char* pGamePathID,
							const char* pContentPathID,
							const char* pContentRoot,
							const char* pRelativePath,
							bool bTempContent,
							const BasePath_t* pBasePaths,
							size_t nBasePaths);  // 969
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 983
		}
	}
	{
		CPathBufferString fullWritePath; // 1041
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1041
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1042
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		CUtlStringToken::CUtlStringToken(); // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1044
	}
	{
		size_t i; // 1067
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1526
		Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 1069
	}
	CAppSystemDict::GetApplicationInfo(); // 713
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 716
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 720
	CBufferString::IsEmpty(); // 728
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 730
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 730
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 733
	CUtlStringToken::CUtlStringToken(); // 733
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 755
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 763
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 763
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 765
	CBufferString::Length(); // 764
	CBufferString::IsEmpty(); // 797
	CAppSystemDict::IsGameApp(); // 799
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 801
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 832
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 833
	CUtlStringToken::CUtlStringToken(); // 833
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 837
	CUtlStringToken::CUtlStringToken(); // 837
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 839
	CUtlStringToken::CUtlStringToken(); // 839
	CAppSystemDict::GetGameInfo(); // 845
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 869
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 870
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 760
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1051
	CUtlStringToken::CUtlStringToken(); // 1051
	CBufferString::~CBufferString(); // 1073
	CBufferString::~CBufferString(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 801
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 825
} /* size: 6764, variables: 27, inline expansions: 105 (3017 bytes) */

// <027CAE77> ../public/appframework/tier2app.h:671
// variables: 56
// function calls: 201
void CTier2AppSystemDict::SetupFileSystemPaths()
{
	const char* szExpectedPlatformBinPathRelativeToGameDir; // 706
	const char* szExpectedTier0PathRelativeToGameDir; // 707
	bool bAddDefaultModPath; // 712
	KeyValues* pAppInfo; // 713
	CPathBufferString executableDir; // 720
	const char* pGameDir; // 722
	CPathBufferString baseDir; // 747
	CPathBufferString dirIter; // 755
	const char* pGameRootOverride; // 757
	int nLastLen; // 764
	const char* pAltGameRoot; // 822
	CPathBufferString platformPath; // 831
	KeyValues* pGameInfo; // 845
	KeyValues* pFileSystemInfo; // 846
	KeyValues* pSearchPaths; // 847
	bool bUsingTempContent; // 863
	bool bFoundGame; // 864
	bool bFoundMod; // 865
	bool bFoundWrite; // 866
	bool bPublicContent; // 867
	CBufferString firstGamePath; // 869
	CBufferString relativeAddonPath; // 870
	CPathBufferString* pLayeredGameRootPathBuffers; // 872
	size_t nLayeredGameRootPathBuffers; // 873
	BasePath_t* pLayeredGameRootPaths; // 874
	size_t nLayeredGameRootPaths; // 875
	const char   __FUNCTION__; // 34140
	{
		CPathBufferString fileTestPath; // 767
		int nNewLen; // 790
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 767
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 769
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 770
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 772
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 778
		CBufferString::IsEmpty(); // 786
		CBufferString::Length(); // 790
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 780
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 780
	}
	{
		CPathBufferString workingDir; // 851
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 851
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 853
		CUtlStringToken::CUtlStringToken(); // 853
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 860
	}
	{
		size_t nAdditionalMobileFileSystemLayers; // 886
		{
			KeyValues* pCur; // 877
			{
				const char* pPathID; // 879
			}
		}
		{
			const char* szIteratedGameRoot; // 888
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 891
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 892
			CUtlStringToken::CUtlStringToken(); // 891
		}
		{
			int i; // 900
			{
				KeyValues* pCur; // 905
				{
					const char* pPathID; // 907
					{
						size_t nRootIter; // 910
						{
							const char* szRoot; // 912
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
							}
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 916
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 912
							CFileSystemPassThru::AddSearchPath(
									const char* pPath,
									const char* pathID,
									SearchPathAdd_t addType,
									SearchPathPriority_t nPriority,
									CUtlStringToken pathMergeToken);  // 918
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 1479
							Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 914
							CUtlStringToken::CUtlStringToken(); // 918
						}
					}
				}
			}
			{
				size_t nRootIter; // 925
				{
					const char* szRoot; // 927
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 928
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 927
				}
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
			}
		}
	}
	{
		KeyValues* pCur; // 939
		{
			const char* pPathID; // 941
			const char* pRelativePath; // 942
			{
				CPathBufferString path; // 946
			}
			{
				const char* pAddons; // 1000
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
				}
				CTier2AppSystemDict::AddGameAndContentSearchPath(
								const char* pGamePathID,
								const char* pContentPathID,
								const char* pContentRoot,
								const char* pRelativePath,
								bool bTempContent,
								const BasePath_t* pBasePaths,
								size_t nBasePaths);  // 1005
			}
			{
				const char* pAddons; // 1011
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
				}
				{
					CPathBufferString path; // 1018
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1018
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1024
				}
				CAppSystemDict::IsInToolsMode(); // 1016
			}
			{
				CPathBufferString fullWritePath; // 1029
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1029
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1031
				CUtlStringToken::CUtlStringToken(); // 1031
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1032
			}
			CTier2AppSystemDict::AddGameAndContentSearchPath(
							const char* pGamePathID,
							const char* pContentPathID,
							const char* pContentRoot,
							const char* pRelativePath,
							bool bTempContent,
							const BasePath_t* pBasePaths,
							size_t nBasePaths);  // 969
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 983
		}
	}
	{
		CPathBufferString fullWritePath; // 1041
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1041
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1042
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		CUtlStringToken::CUtlStringToken(); // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1044
	}
	{
		size_t i; // 1067
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1526
		Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 1069
	}
	CAppSystemDict::GetApplicationInfo(); // 713
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 716
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 720
	CBufferString::IsEmpty(); // 728
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 730
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 730
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 733
	CUtlStringToken::CUtlStringToken(); // 733
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 755
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 763
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 763
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 765
	CBufferString::Length(); // 764
	CBufferString::IsEmpty(); // 797
	CAppSystemDict::IsGameApp(); // 799
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 801
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 832
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 833
	CUtlStringToken::CUtlStringToken(); // 833
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 837
	CUtlStringToken::CUtlStringToken(); // 837
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 839
	CUtlStringToken::CUtlStringToken(); // 839
	CAppSystemDict::GetGameInfo(); // 845
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 869
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 870
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 760
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1051
	CUtlStringToken::CUtlStringToken(); // 1051
	CBufferString::~CBufferString(); // 1073
	CBufferString::~CBufferString(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 801
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 825
} /* size: 6764, variables: 27, inline expansions: 105 (3017 bytes) */

// <0261DAE9> ../public/appframework/tier2app.h:671
// variables: 56
// function calls: 201
void CTier2AppSystemDict::SetupFileSystemPaths()
{
	const char* szExpectedPlatformBinPathRelativeToGameDir; // 706
	const char* szExpectedTier0PathRelativeToGameDir; // 707
	bool bAddDefaultModPath; // 712
	KeyValues* pAppInfo; // 713
	CPathBufferString executableDir; // 720
	const char* pGameDir; // 722
	CPathBufferString baseDir; // 747
	CPathBufferString dirIter; // 755
	const char* pGameRootOverride; // 757
	int nLastLen; // 764
	const char* pAltGameRoot; // 822
	CPathBufferString platformPath; // 831
	KeyValues* pGameInfo; // 845
	KeyValues* pFileSystemInfo; // 846
	KeyValues* pSearchPaths; // 847
	bool bUsingTempContent; // 863
	bool bFoundGame; // 864
	bool bFoundMod; // 865
	bool bFoundWrite; // 866
	bool bPublicContent; // 867
	CBufferString firstGamePath; // 869
	CBufferString relativeAddonPath; // 870
	CPathBufferString* pLayeredGameRootPathBuffers; // 872
	size_t nLayeredGameRootPathBuffers; // 873
	BasePath_t* pLayeredGameRootPaths; // 874
	size_t nLayeredGameRootPaths; // 875
	const char   __FUNCTION__; // 23457
	{
		CPathBufferString fileTestPath; // 767
		int nNewLen; // 790
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 767
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 769
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 770
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 772
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 778
		CBufferString::IsEmpty(); // 786
		CBufferString::Length(); // 790
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 780
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 780
	}
	{
		CPathBufferString workingDir; // 851
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 851
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 853
		CUtlStringToken::CUtlStringToken(); // 853
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 860
	}
	{
		size_t nAdditionalMobileFileSystemLayers; // 886
		{
			KeyValues* pCur; // 877
			{
				const char* pPathID; // 879
			}
		}
		{
			const char* szIteratedGameRoot; // 888
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 891
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 892
			CUtlStringToken::CUtlStringToken(); // 891
		}
		{
			int i; // 900
			{
				KeyValues* pCur; // 905
				{
					const char* pPathID; // 907
					{
						size_t nRootIter; // 910
						{
							const char* szRoot; // 912
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
							}
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 916
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 912
							CFileSystemPassThru::AddSearchPath(
									const char* pPath,
									const char* pathID,
									SearchPathAdd_t addType,
									SearchPathPriority_t nPriority,
									CUtlStringToken pathMergeToken);  // 918
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 1479
							Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 914
							CUtlStringToken::CUtlStringToken(); // 918
						}
					}
				}
			}
			{
				size_t nRootIter; // 925
				{
					const char* szRoot; // 927
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 928
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 927
				}
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
			}
		}
	}
	{
		KeyValues* pCur; // 939
		{
			const char* pPathID; // 941
			const char* pRelativePath; // 942
			{
				CPathBufferString path; // 946
			}
			{
				const char* pAddons; // 1000
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
				}
				CTier2AppSystemDict::AddGameAndContentSearchPath(
								const char* pGamePathID,
								const char* pContentPathID,
								const char* pContentRoot,
								const char* pRelativePath,
								bool bTempContent,
								const BasePath_t* pBasePaths,
								size_t nBasePaths);  // 1005
			}
			{
				const char* pAddons; // 1011
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
				}
				{
					CPathBufferString path; // 1018
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1018
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1024
				}
				CAppSystemDict::IsInToolsMode(); // 1016
			}
			{
				CPathBufferString fullWritePath; // 1029
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1029
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1031
				CUtlStringToken::CUtlStringToken(); // 1031
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1032
			}
			CTier2AppSystemDict::AddGameAndContentSearchPath(
							const char* pGamePathID,
							const char* pContentPathID,
							const char* pContentRoot,
							const char* pRelativePath,
							bool bTempContent,
							const BasePath_t* pBasePaths,
							size_t nBasePaths);  // 969
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 983
		}
	}
	{
		CPathBufferString fullWritePath; // 1041
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1041
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1042
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		CUtlStringToken::CUtlStringToken(); // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1044
	}
	{
		size_t i; // 1067
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1526
		Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 1069
	}
	CAppSystemDict::GetApplicationInfo(); // 713
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 716
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 720
	CBufferString::IsEmpty(); // 728
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 730
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 730
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 733
	CUtlStringToken::CUtlStringToken(); // 733
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 755
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 763
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 763
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 765
	CBufferString::Length(); // 764
	CBufferString::IsEmpty(); // 797
	CAppSystemDict::IsGameApp(); // 799
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 801
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 832
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 833
	CUtlStringToken::CUtlStringToken(); // 833
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 837
	CUtlStringToken::CUtlStringToken(); // 837
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 839
	CUtlStringToken::CUtlStringToken(); // 839
	CAppSystemDict::GetGameInfo(); // 845
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 869
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 870
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 760
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1051
	CUtlStringToken::CUtlStringToken(); // 1051
	CBufferString::~CBufferString(); // 1073
	CBufferString::~CBufferString(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 801
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 825
} /* size: 6764, variables: 27, inline expansions: 105 (3017 bytes) */

// <01F57929> ../public/appframework/tier2app.h:671
// variables: 56
// function calls: 201
void CTier2AppSystemDict::SetupFileSystemPaths()
{
	const char* szExpectedPlatformBinPathRelativeToGameDir; // 706
	const char* szExpectedTier0PathRelativeToGameDir; // 707
	bool bAddDefaultModPath; // 712
	KeyValues* pAppInfo; // 713
	CPathBufferString executableDir; // 720
	const char* pGameDir; // 722
	CPathBufferString baseDir; // 747
	CPathBufferString dirIter; // 755
	const char* pGameRootOverride; // 757
	int nLastLen; // 764
	const char* pAltGameRoot; // 822
	CPathBufferString platformPath; // 831
	KeyValues* pGameInfo; // 845
	KeyValues* pFileSystemInfo; // 846
	KeyValues* pSearchPaths; // 847
	bool bUsingTempContent; // 863
	bool bFoundGame; // 864
	bool bFoundMod; // 865
	bool bFoundWrite; // 866
	bool bPublicContent; // 867
	CBufferString firstGamePath; // 869
	CBufferString relativeAddonPath; // 870
	CPathBufferString* pLayeredGameRootPathBuffers; // 872
	size_t nLayeredGameRootPathBuffers; // 873
	BasePath_t* pLayeredGameRootPaths; // 874
	size_t nLayeredGameRootPaths; // 875
	const char   __FUNCTION__; // 34709
	{
		CPathBufferString fileTestPath; // 767
		int nNewLen; // 790
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 767
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 769
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 770
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 772
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 778
		CBufferString::IsEmpty(); // 786
		CBufferString::Length(); // 790
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 780
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 780
	}
	{
		CPathBufferString workingDir; // 851
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 851
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 853
		CUtlStringToken::CUtlStringToken(); // 853
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 860
	}
	{
		size_t nAdditionalMobileFileSystemLayers; // 886
		{
			KeyValues* pCur; // 877
			{
				const char* pPathID; // 879
			}
		}
		{
			const char* szIteratedGameRoot; // 888
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 891
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 892
			CUtlStringToken::CUtlStringToken(); // 891
		}
		{
			int i; // 900
			{
				KeyValues* pCur; // 905
				{
					const char* pPathID; // 907
					{
						size_t nRootIter; // 910
						{
							const char* szRoot; // 912
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
							}
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 916
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 912
							CFileSystemPassThru::AddSearchPath(
									const char* pPath,
									const char* pathID,
									SearchPathAdd_t addType,
									SearchPathPriority_t nPriority,
									CUtlStringToken pathMergeToken);  // 918
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 1479
							Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 914
							CUtlStringToken::CUtlStringToken(); // 918
						}
					}
				}
			}
			{
				size_t nRootIter; // 925
				{
					const char* szRoot; // 927
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 928
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 927
				}
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
			}
		}
	}
	{
		KeyValues* pCur; // 939
		{
			const char* pPathID; // 941
			const char* pRelativePath; // 942
			{
				CPathBufferString path; // 946
			}
			{
				const char* pAddons; // 1000
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
				}
				CTier2AppSystemDict::AddGameAndContentSearchPath(
								const char* pGamePathID,
								const char* pContentPathID,
								const char* pContentRoot,
								const char* pRelativePath,
								bool bTempContent,
								const BasePath_t* pBasePaths,
								size_t nBasePaths);  // 1005
			}
			{
				const char* pAddons; // 1011
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
				}
				{
					CPathBufferString path; // 1018
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1018
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1024
				}
				CAppSystemDict::IsInToolsMode(); // 1016
			}
			{
				CPathBufferString fullWritePath; // 1029
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1029
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1031
				CUtlStringToken::CUtlStringToken(); // 1031
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1032
			}
			CTier2AppSystemDict::AddGameAndContentSearchPath(
							const char* pGamePathID,
							const char* pContentPathID,
							const char* pContentRoot,
							const char* pRelativePath,
							bool bTempContent,
							const BasePath_t* pBasePaths,
							size_t nBasePaths);  // 969
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 983
		}
	}
	{
		CPathBufferString fullWritePath; // 1041
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1041
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1042
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		CUtlStringToken::CUtlStringToken(); // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1044
	}
	{
		size_t i; // 1067
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1526
		Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 1069
	}
	CAppSystemDict::GetApplicationInfo(); // 713
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 716
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 720
	CBufferString::IsEmpty(); // 728
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 730
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 730
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 733
	CUtlStringToken::CUtlStringToken(); // 733
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 755
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 763
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 763
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 765
	CBufferString::Length(); // 764
	CBufferString::IsEmpty(); // 797
	CAppSystemDict::IsGameApp(); // 799
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 801
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 832
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 833
	CUtlStringToken::CUtlStringToken(); // 833
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 837
	CUtlStringToken::CUtlStringToken(); // 837
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 839
	CUtlStringToken::CUtlStringToken(); // 839
	CAppSystemDict::GetGameInfo(); // 845
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 869
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 870
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 760
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1051
	CUtlStringToken::CUtlStringToken(); // 1051
	CBufferString::~CBufferString(); // 1073
	CBufferString::~CBufferString(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 801
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 825
} /* size: 6764, variables: 27, inline expansions: 105 (3017 bytes) */

// <01E891FC> ../public/appframework/tier2app.h:671
// variables: 56
// function calls: 201
void CTier2AppSystemDict::SetupFileSystemPaths()
{
	const char* szExpectedPlatformBinPathRelativeToGameDir; // 706
	const char* szExpectedTier0PathRelativeToGameDir; // 707
	bool bAddDefaultModPath; // 712
	KeyValues* pAppInfo; // 713
	CPathBufferString executableDir; // 720
	const char* pGameDir; // 722
	CPathBufferString baseDir; // 747
	CPathBufferString dirIter; // 755
	const char* pGameRootOverride; // 757
	int nLastLen; // 764
	const char* pAltGameRoot; // 822
	CPathBufferString platformPath; // 831
	KeyValues* pGameInfo; // 845
	KeyValues* pFileSystemInfo; // 846
	KeyValues* pSearchPaths; // 847
	bool bUsingTempContent; // 863
	bool bFoundGame; // 864
	bool bFoundMod; // 865
	bool bFoundWrite; // 866
	bool bPublicContent; // 867
	CBufferString firstGamePath; // 869
	CBufferString relativeAddonPath; // 870
	CPathBufferString* pLayeredGameRootPathBuffers; // 872
	size_t nLayeredGameRootPathBuffers; // 873
	BasePath_t* pLayeredGameRootPaths; // 874
	size_t nLayeredGameRootPaths; // 875
	const char   __FUNCTION__; // 59084
	{
		CPathBufferString fileTestPath; // 767
		int nNewLen; // 790
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 767
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 769
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 770
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 772
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 778
		CBufferString::IsEmpty(); // 786
		CBufferString::Length(); // 790
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 780
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 780
	}
	{
		CPathBufferString workingDir; // 851
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 851
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 853
		CUtlStringToken::CUtlStringToken(); // 853
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 860
	}
	{
		size_t nAdditionalMobileFileSystemLayers; // 886
		{
			KeyValues* pCur; // 877
			{
				const char* pPathID; // 879
			}
		}
		{
			const char* szIteratedGameRoot; // 888
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 891
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 892
			CUtlStringToken::CUtlStringToken(); // 891
		}
		{
			int i; // 900
			{
				KeyValues* pCur; // 905
				{
					const char* pPathID; // 907
					{
						size_t nRootIter; // 910
						{
							const char* szRoot; // 912
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
							}
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 916
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 912
							CFileSystemPassThru::AddSearchPath(
									const char* pPath,
									const char* pathID,
									SearchPathAdd_t addType,
									SearchPathPriority_t nPriority,
									CUtlStringToken pathMergeToken);  // 918
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 1479
							Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 914
							CUtlStringToken::CUtlStringToken(); // 918
						}
					}
				}
			}
			{
				size_t nRootIter; // 925
				{
					const char* szRoot; // 927
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 928
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 927
				}
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
			}
		}
	}
	{
		KeyValues* pCur; // 939
		{
			const char* pPathID; // 941
			const char* pRelativePath; // 942
			{
				CPathBufferString path; // 946
			}
			{
				const char* pAddons; // 1000
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
				}
				CTier2AppSystemDict::AddGameAndContentSearchPath(
								const char* pGamePathID,
								const char* pContentPathID,
								const char* pContentRoot,
								const char* pRelativePath,
								bool bTempContent,
								const BasePath_t* pBasePaths,
								size_t nBasePaths);  // 1005
			}
			{
				const char* pAddons; // 1011
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
				}
				{
					CPathBufferString path; // 1018
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1018
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1024
				}
				CAppSystemDict::IsInToolsMode(); // 1016
			}
			{
				CPathBufferString fullWritePath; // 1029
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1029
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1031
				CUtlStringToken::CUtlStringToken(); // 1031
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1032
			}
			CTier2AppSystemDict::AddGameAndContentSearchPath(
							const char* pGamePathID,
							const char* pContentPathID,
							const char* pContentRoot,
							const char* pRelativePath,
							bool bTempContent,
							const BasePath_t* pBasePaths,
							size_t nBasePaths);  // 969
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 983
		}
	}
	{
		CPathBufferString fullWritePath; // 1041
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1041
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1042
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		CUtlStringToken::CUtlStringToken(); // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1044
	}
	{
		size_t i; // 1067
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1526
		Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 1069
	}
	CAppSystemDict::GetApplicationInfo(); // 713
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 716
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 720
	CBufferString::IsEmpty(); // 728
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 730
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 730
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 733
	CUtlStringToken::CUtlStringToken(); // 733
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 755
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 763
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 763
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 765
	CBufferString::Length(); // 764
	CBufferString::IsEmpty(); // 797
	CAppSystemDict::IsGameApp(); // 799
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 801
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 832
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 833
	CUtlStringToken::CUtlStringToken(); // 833
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 837
	CUtlStringToken::CUtlStringToken(); // 837
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 839
	CUtlStringToken::CUtlStringToken(); // 839
	CAppSystemDict::GetGameInfo(); // 845
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 869
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 870
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 760
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1051
	CUtlStringToken::CUtlStringToken(); // 1051
	CBufferString::~CBufferString(); // 1073
	CBufferString::~CBufferString(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 801
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 825
} /* size: 6764, variables: 27, inline expansions: 105 (3017 bytes) */

// <01DBB6C2> ../public/appframework/tier2app.h:671
// variables: 56
// function calls: 201
void CTier2AppSystemDict::SetupFileSystemPaths()
{
	const char* szExpectedPlatformBinPathRelativeToGameDir; // 706
	const char* szExpectedTier0PathRelativeToGameDir; // 707
	bool bAddDefaultModPath; // 712
	KeyValues* pAppInfo; // 713
	CPathBufferString executableDir; // 720
	const char* pGameDir; // 722
	CPathBufferString baseDir; // 747
	CPathBufferString dirIter; // 755
	const char* pGameRootOverride; // 757
	int nLastLen; // 764
	const char* pAltGameRoot; // 822
	CPathBufferString platformPath; // 831
	KeyValues* pGameInfo; // 845
	KeyValues* pFileSystemInfo; // 846
	KeyValues* pSearchPaths; // 847
	bool bUsingTempContent; // 863
	bool bFoundGame; // 864
	bool bFoundMod; // 865
	bool bFoundWrite; // 866
	bool bPublicContent; // 867
	CBufferString firstGamePath; // 869
	CBufferString relativeAddonPath; // 870
	CPathBufferString* pLayeredGameRootPathBuffers; // 872
	size_t nLayeredGameRootPathBuffers; // 873
	BasePath_t* pLayeredGameRootPaths; // 874
	size_t nLayeredGameRootPaths; // 875
	const char   __FUNCTION__; // 45261
	{
		CPathBufferString fileTestPath; // 767
		int nNewLen; // 790
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 767
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 769
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 770
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 772
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 778
		CBufferString::IsEmpty(); // 786
		CBufferString::Length(); // 790
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 780
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 780
	}
	{
		CPathBufferString workingDir; // 851
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 851
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 853
		CUtlStringToken::CUtlStringToken(); // 853
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 860
	}
	{
		size_t nAdditionalMobileFileSystemLayers; // 886
		{
			KeyValues* pCur; // 877
			{
				const char* pPathID; // 879
			}
		}
		{
			const char* szIteratedGameRoot; // 888
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 891
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 892
			CUtlStringToken::CUtlStringToken(); // 891
		}
		{
			int i; // 900
			{
				KeyValues* pCur; // 905
				{
					const char* pPathID; // 907
					{
						size_t nRootIter; // 910
						{
							const char* szRoot; // 912
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
							}
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 916
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 912
							CFileSystemPassThru::AddSearchPath(
									const char* pPath,
									const char* pathID,
									SearchPathAdd_t addType,
									SearchPathPriority_t nPriority,
									CUtlStringToken pathMergeToken);  // 918
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 1479
							Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 914
							CUtlStringToken::CUtlStringToken(); // 918
						}
					}
				}
			}
			{
				size_t nRootIter; // 925
				{
					const char* szRoot; // 927
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 928
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 927
				}
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
			}
		}
	}
	{
		KeyValues* pCur; // 939
		{
			const char* pPathID; // 941
			const char* pRelativePath; // 942
			{
				CPathBufferString path; // 946
			}
			{
				const char* pAddons; // 1000
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
				}
				CTier2AppSystemDict::AddGameAndContentSearchPath(
								const char* pGamePathID,
								const char* pContentPathID,
								const char* pContentRoot,
								const char* pRelativePath,
								bool bTempContent,
								const BasePath_t* pBasePaths,
								size_t nBasePaths);  // 1005
			}
			{
				const char* pAddons; // 1011
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
				}
				{
					CPathBufferString path; // 1018
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1018
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1024
				}
				CAppSystemDict::IsInToolsMode(); // 1016
			}
			{
				CPathBufferString fullWritePath; // 1029
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1029
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1031
				CUtlStringToken::CUtlStringToken(); // 1031
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1032
			}
			CTier2AppSystemDict::AddGameAndContentSearchPath(
							const char* pGamePathID,
							const char* pContentPathID,
							const char* pContentRoot,
							const char* pRelativePath,
							bool bTempContent,
							const BasePath_t* pBasePaths,
							size_t nBasePaths);  // 969
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 983
		}
	}
	{
		CPathBufferString fullWritePath; // 1041
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1041
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1042
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		CUtlStringToken::CUtlStringToken(); // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1044
	}
	{
		size_t i; // 1067
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1526
		Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 1069
	}
	CAppSystemDict::GetApplicationInfo(); // 713
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 716
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 720
	CBufferString::IsEmpty(); // 728
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 730
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 730
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 733
	CUtlStringToken::CUtlStringToken(); // 733
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 755
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 763
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 763
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 765
	CBufferString::Length(); // 764
	CBufferString::IsEmpty(); // 797
	CAppSystemDict::IsGameApp(); // 799
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 801
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 832
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 833
	CUtlStringToken::CUtlStringToken(); // 833
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 837
	CUtlStringToken::CUtlStringToken(); // 837
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 839
	CUtlStringToken::CUtlStringToken(); // 839
	CAppSystemDict::GetGameInfo(); // 845
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 869
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 870
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 760
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1051
	CUtlStringToken::CUtlStringToken(); // 1051
	CBufferString::~CBufferString(); // 1073
	CBufferString::~CBufferString(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 801
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 825
} /* size: 6764, variables: 27, inline expansions: 105 (3017 bytes) */

// <01C147A9> ../public/appframework/tier2app.h:671
// variables: 56
// function calls: 201
void CTier2AppSystemDict::SetupFileSystemPaths()
{
	const char* szExpectedPlatformBinPathRelativeToGameDir; // 706
	const char* szExpectedTier0PathRelativeToGameDir; // 707
	bool bAddDefaultModPath; // 712
	KeyValues* pAppInfo; // 713
	CPathBufferString executableDir; // 720
	const char* pGameDir; // 722
	CPathBufferString baseDir; // 747
	CPathBufferString dirIter; // 755
	const char* pGameRootOverride; // 757
	int nLastLen; // 764
	const char* pAltGameRoot; // 822
	CPathBufferString platformPath; // 831
	KeyValues* pGameInfo; // 845
	KeyValues* pFileSystemInfo; // 846
	KeyValues* pSearchPaths; // 847
	bool bUsingTempContent; // 863
	bool bFoundGame; // 864
	bool bFoundMod; // 865
	bool bFoundWrite; // 866
	bool bPublicContent; // 867
	CBufferString firstGamePath; // 869
	CBufferString relativeAddonPath; // 870
	CPathBufferString* pLayeredGameRootPathBuffers; // 872
	size_t nLayeredGameRootPathBuffers; // 873
	BasePath_t* pLayeredGameRootPaths; // 874
	size_t nLayeredGameRootPaths; // 875
	const char   __FUNCTION__; // 39258
	{
		CPathBufferString fileTestPath; // 767
		int nNewLen; // 790
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 767
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 769
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 770
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 772
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 778
		CBufferString::IsEmpty(); // 786
		CBufferString::Length(); // 790
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 780
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 780
	}
	{
		CPathBufferString workingDir; // 851
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 851
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 853
		CUtlStringToken::CUtlStringToken(); // 853
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 860
	}
	{
		size_t nAdditionalMobileFileSystemLayers; // 886
		{
			KeyValues* pCur; // 877
			{
				const char* pPathID; // 879
			}
		}
		{
			const char* szIteratedGameRoot; // 888
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 891
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 892
			CUtlStringToken::CUtlStringToken(); // 891
		}
		{
			int i; // 900
			{
				KeyValues* pCur; // 905
				{
					const char* pPathID; // 907
					{
						size_t nRootIter; // 910
						{
							const char* szRoot; // 912
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
							}
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 916
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 912
							CFileSystemPassThru::AddSearchPath(
									const char* pPath,
									const char* pathID,
									SearchPathAdd_t addType,
									SearchPathPriority_t nPriority,
									CUtlStringToken pathMergeToken);  // 918
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 1479
							Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 914
							CUtlStringToken::CUtlStringToken(); // 918
						}
					}
				}
			}
			{
				size_t nRootIter; // 925
				{
					const char* szRoot; // 927
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 928
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 927
				}
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
			}
		}
	}
	{
		KeyValues* pCur; // 939
		{
			const char* pPathID; // 941
			const char* pRelativePath; // 942
			{
				CPathBufferString path; // 946
			}
			{
				const char* pAddons; // 1000
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
				}
				CTier2AppSystemDict::AddGameAndContentSearchPath(
								const char* pGamePathID,
								const char* pContentPathID,
								const char* pContentRoot,
								const char* pRelativePath,
								bool bTempContent,
								const BasePath_t* pBasePaths,
								size_t nBasePaths);  // 1005
			}
			{
				const char* pAddons; // 1011
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
				}
				{
					CPathBufferString path; // 1018
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1018
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1024
				}
				CAppSystemDict::IsInToolsMode(); // 1016
			}
			{
				CPathBufferString fullWritePath; // 1029
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1029
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1031
				CUtlStringToken::CUtlStringToken(); // 1031
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1032
			}
			CTier2AppSystemDict::AddGameAndContentSearchPath(
							const char* pGamePathID,
							const char* pContentPathID,
							const char* pContentRoot,
							const char* pRelativePath,
							bool bTempContent,
							const BasePath_t* pBasePaths,
							size_t nBasePaths);  // 969
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 983
		}
	}
	{
		CPathBufferString fullWritePath; // 1041
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1041
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1042
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		CUtlStringToken::CUtlStringToken(); // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1044
	}
	{
		size_t i; // 1067
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1526
		Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 1069
	}
	CAppSystemDict::GetApplicationInfo(); // 713
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 716
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 720
	CBufferString::IsEmpty(); // 728
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 730
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 730
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 733
	CUtlStringToken::CUtlStringToken(); // 733
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 755
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 763
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 763
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 765
	CBufferString::Length(); // 764
	CBufferString::IsEmpty(); // 797
	CAppSystemDict::IsGameApp(); // 799
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 801
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 832
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 833
	CUtlStringToken::CUtlStringToken(); // 833
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 837
	CUtlStringToken::CUtlStringToken(); // 837
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 839
	CUtlStringToken::CUtlStringToken(); // 839
	CAppSystemDict::GetGameInfo(); // 845
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 869
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 870
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 760
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1051
	CUtlStringToken::CUtlStringToken(); // 1051
	CBufferString::~CBufferString(); // 1073
	CBufferString::~CBufferString(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 801
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 825
} /* size: 6764, variables: 27, inline expansions: 105 (3017 bytes) */

// <01ACA6F5> ../public/appframework/tier2app.h:671
// variables: 56
// function calls: 201
void CTier2AppSystemDict::SetupFileSystemPaths()
{
	const char* szExpectedPlatformBinPathRelativeToGameDir; // 706
	const char* szExpectedTier0PathRelativeToGameDir; // 707
	bool bAddDefaultModPath; // 712
	KeyValues* pAppInfo; // 713
	CPathBufferString executableDir; // 720
	const char* pGameDir; // 722
	CPathBufferString baseDir; // 747
	CPathBufferString dirIter; // 755
	const char* pGameRootOverride; // 757
	int nLastLen; // 764
	const char* pAltGameRoot; // 822
	CPathBufferString platformPath; // 831
	KeyValues* pGameInfo; // 845
	KeyValues* pFileSystemInfo; // 846
	KeyValues* pSearchPaths; // 847
	bool bUsingTempContent; // 863
	bool bFoundGame; // 864
	bool bFoundMod; // 865
	bool bFoundWrite; // 866
	bool bPublicContent; // 867
	CBufferString firstGamePath; // 869
	CBufferString relativeAddonPath; // 870
	CPathBufferString* pLayeredGameRootPathBuffers; // 872
	size_t nLayeredGameRootPathBuffers; // 873
	BasePath_t* pLayeredGameRootPaths; // 874
	size_t nLayeredGameRootPaths; // 875
	const char   __FUNCTION__; // 61654
	{
		CPathBufferString fileTestPath; // 767
		int nNewLen; // 790
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 767
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 769
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 770
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 772
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 778
		CBufferString::IsEmpty(); // 786
		CBufferString::Length(); // 790
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 780
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 780
	}
	{
		CPathBufferString workingDir; // 851
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 851
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 853
		CUtlStringToken::CUtlStringToken(); // 853
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 860
	}
	{
		size_t nAdditionalMobileFileSystemLayers; // 886
		{
			KeyValues* pCur; // 877
			{
				const char* pPathID; // 879
			}
		}
		{
			const char* szIteratedGameRoot; // 888
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 891
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 892
			CUtlStringToken::CUtlStringToken(); // 891
		}
		{
			int i; // 900
			{
				KeyValues* pCur; // 905
				{
					const char* pPathID; // 907
					{
						size_t nRootIter; // 910
						{
							const char* szRoot; // 912
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
							}
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 916
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 912
							CFileSystemPassThru::AddSearchPath(
									const char* pPath,
									const char* pathID,
									SearchPathAdd_t addType,
									SearchPathPriority_t nPriority,
									CUtlStringToken pathMergeToken);  // 918
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 1479
							Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 914
							CUtlStringToken::CUtlStringToken(); // 918
						}
					}
				}
			}
			{
				size_t nRootIter; // 925
				{
					const char* szRoot; // 927
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 928
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 927
				}
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
			}
		}
	}
	{
		KeyValues* pCur; // 939
		{
			const char* pPathID; // 941
			const char* pRelativePath; // 942
			{
				CPathBufferString path; // 946
			}
			{
				const char* pAddons; // 1000
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
				}
				CTier2AppSystemDict::AddGameAndContentSearchPath(
								const char* pGamePathID,
								const char* pContentPathID,
								const char* pContentRoot,
								const char* pRelativePath,
								bool bTempContent,
								const BasePath_t* pBasePaths,
								size_t nBasePaths);  // 1005
			}
			{
				const char* pAddons; // 1011
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
				}
				{
					CPathBufferString path; // 1018
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1018
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1024
				}
				CAppSystemDict::IsInToolsMode(); // 1016
			}
			{
				CPathBufferString fullWritePath; // 1029
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1029
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1031
				CUtlStringToken::CUtlStringToken(); // 1031
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1032
			}
			CTier2AppSystemDict::AddGameAndContentSearchPath(
							const char* pGamePathID,
							const char* pContentPathID,
							const char* pContentRoot,
							const char* pRelativePath,
							bool bTempContent,
							const BasePath_t* pBasePaths,
							size_t nBasePaths);  // 969
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 983
		}
	}
	{
		CPathBufferString fullWritePath; // 1041
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1041
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1042
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		CUtlStringToken::CUtlStringToken(); // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1044
	}
	{
		size_t i; // 1067
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1526
		Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 1069
	}
	CAppSystemDict::GetApplicationInfo(); // 713
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 716
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 720
	CBufferString::IsEmpty(); // 728
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 730
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 730
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 733
	CUtlStringToken::CUtlStringToken(); // 733
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 755
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 763
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 763
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 765
	CBufferString::Length(); // 764
	CBufferString::IsEmpty(); // 797
	CAppSystemDict::IsGameApp(); // 799
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 801
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 832
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 833
	CUtlStringToken::CUtlStringToken(); // 833
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 837
	CUtlStringToken::CUtlStringToken(); // 837
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 839
	CUtlStringToken::CUtlStringToken(); // 839
	CAppSystemDict::GetGameInfo(); // 845
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 869
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 870
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 760
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1051
	CUtlStringToken::CUtlStringToken(); // 1051
	CBufferString::~CBufferString(); // 1073
	CBufferString::~CBufferString(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 801
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 825
} /* size: 6764, variables: 27, inline expansions: 105 (3017 bytes) */

// <01A09B25> ../public/appframework/tier2app.h:671
// variables: 56
// function calls: 201
void CTier2AppSystemDict::SetupFileSystemPaths()
{
	const char* szExpectedPlatformBinPathRelativeToGameDir; // 706
	const char* szExpectedTier0PathRelativeToGameDir; // 707
	bool bAddDefaultModPath; // 712
	KeyValues* pAppInfo; // 713
	CPathBufferString executableDir; // 720
	const char* pGameDir; // 722
	CPathBufferString baseDir; // 747
	CPathBufferString dirIter; // 755
	const char* pGameRootOverride; // 757
	int nLastLen; // 764
	const char* pAltGameRoot; // 822
	CPathBufferString platformPath; // 831
	KeyValues* pGameInfo; // 845
	KeyValues* pFileSystemInfo; // 846
	KeyValues* pSearchPaths; // 847
	bool bUsingTempContent; // 863
	bool bFoundGame; // 864
	bool bFoundMod; // 865
	bool bFoundWrite; // 866
	bool bPublicContent; // 867
	CBufferString firstGamePath; // 869
	CBufferString relativeAddonPath; // 870
	CPathBufferString* pLayeredGameRootPathBuffers; // 872
	size_t nLayeredGameRootPathBuffers; // 873
	BasePath_t* pLayeredGameRootPaths; // 874
	size_t nLayeredGameRootPaths; // 875
	const char   __FUNCTION__; // 88
	{
		CPathBufferString fileTestPath; // 767
		int nNewLen; // 790
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 767
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 769
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 770
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 772
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 778
		CBufferString::IsEmpty(); // 786
		CBufferString::Length(); // 790
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 780
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 780
	}
	{
		CPathBufferString workingDir; // 851
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 851
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 853
		CUtlStringToken::CUtlStringToken(); // 853
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 860
	}
	{
		size_t nAdditionalMobileFileSystemLayers; // 886
		{
			KeyValues* pCur; // 877
			{
				const char* pPathID; // 879
			}
		}
		{
			const char* szIteratedGameRoot; // 888
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 891
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 892
			CUtlStringToken::CUtlStringToken(); // 891
		}
		{
			int i; // 900
			{
				KeyValues* pCur; // 905
				{
					const char* pPathID; // 907
					{
						size_t nRootIter; // 910
						{
							const char* szRoot; // 912
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
							}
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 916
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 912
							CFileSystemPassThru::AddSearchPath(
									const char* pPath,
									const char* pathID,
									SearchPathAdd_t addType,
									SearchPathPriority_t nPriority,
									CUtlStringToken pathMergeToken);  // 918
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 1479
							Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 914
							CUtlStringToken::CUtlStringToken(); // 918
						}
					}
				}
			}
			{
				size_t nRootIter; // 925
				{
					const char* szRoot; // 927
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 928
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 927
				}
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
			}
		}
	}
	{
		KeyValues* pCur; // 939
		{
			const char* pPathID; // 941
			const char* pRelativePath; // 942
			{
				CPathBufferString path; // 946
			}
			{
				const char* pAddons; // 1000
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
				}
				CTier2AppSystemDict::AddGameAndContentSearchPath(
								const char* pGamePathID,
								const char* pContentPathID,
								const char* pContentRoot,
								const char* pRelativePath,
								bool bTempContent,
								const BasePath_t* pBasePaths,
								size_t nBasePaths);  // 1005
			}
			{
				const char* pAddons; // 1011
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
				}
				{
					CPathBufferString path; // 1018
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1018
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1024
				}
				CAppSystemDict::IsInToolsMode(); // 1016
			}
			{
				CPathBufferString fullWritePath; // 1029
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1029
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1031
				CUtlStringToken::CUtlStringToken(); // 1031
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1032
			}
			CTier2AppSystemDict::AddGameAndContentSearchPath(
							const char* pGamePathID,
							const char* pContentPathID,
							const char* pContentRoot,
							const char* pRelativePath,
							bool bTempContent,
							const BasePath_t* pBasePaths,
							size_t nBasePaths);  // 969
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 983
		}
	}
	{
		CPathBufferString fullWritePath; // 1041
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1041
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1042
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		CUtlStringToken::CUtlStringToken(); // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1044
	}
	{
		size_t i; // 1067
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1526
		Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 1069
	}
	CAppSystemDict::GetApplicationInfo(); // 713
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 716
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 720
	CBufferString::IsEmpty(); // 728
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 730
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 730
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 733
	CUtlStringToken::CUtlStringToken(); // 733
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 755
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 763
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 763
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 765
	CBufferString::Length(); // 764
	CBufferString::IsEmpty(); // 797
	CAppSystemDict::IsGameApp(); // 799
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 801
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 832
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 833
	CUtlStringToken::CUtlStringToken(); // 833
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 837
	CUtlStringToken::CUtlStringToken(); // 837
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 839
	CUtlStringToken::CUtlStringToken(); // 839
	CAppSystemDict::GetGameInfo(); // 845
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 869
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 870
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 760
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1051
	CUtlStringToken::CUtlStringToken(); // 1051
	CBufferString::~CBufferString(); // 1073
	CBufferString::~CBufferString(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 801
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 825
} /* size: 6764, variables: 27, inline expansions: 105 (3017 bytes) */

// <0171F6D2> ../public/appframework/tier2app.h:671
// variables: 56
// function calls: 201
void CTier2AppSystemDict::SetupFileSystemPaths()
{
	const char* szExpectedPlatformBinPathRelativeToGameDir; // 706
	const char* szExpectedTier0PathRelativeToGameDir; // 707
	bool bAddDefaultModPath; // 712
	KeyValues* pAppInfo; // 713
	CPathBufferString executableDir; // 720
	const char* pGameDir; // 722
	CPathBufferString baseDir; // 747
	CPathBufferString dirIter; // 755
	const char* pGameRootOverride; // 757
	int nLastLen; // 764
	const char* pAltGameRoot; // 822
	CPathBufferString platformPath; // 831
	KeyValues* pGameInfo; // 845
	KeyValues* pFileSystemInfo; // 846
	KeyValues* pSearchPaths; // 847
	bool bUsingTempContent; // 863
	bool bFoundGame; // 864
	bool bFoundMod; // 865
	bool bFoundWrite; // 866
	bool bPublicContent; // 867
	CBufferString firstGamePath; // 869
	CBufferString relativeAddonPath; // 870
	CPathBufferString* pLayeredGameRootPathBuffers; // 872
	size_t nLayeredGameRootPathBuffers; // 873
	BasePath_t* pLayeredGameRootPaths; // 874
	size_t nLayeredGameRootPaths; // 875
	const char   __FUNCTION__; // 8530
	{
		CPathBufferString fileTestPath; // 767
		int nNewLen; // 790
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 767
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 769
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 770
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 772
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 778
		CBufferString::IsEmpty(); // 786
		CBufferString::Length(); // 790
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 780
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 780
	}
	{
		CPathBufferString workingDir; // 851
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 851
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 853
		CUtlStringToken::CUtlStringToken(); // 853
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 860
	}
	{
		size_t nAdditionalMobileFileSystemLayers; // 886
		{
			KeyValues* pCur; // 877
			{
				const char* pPathID; // 879
			}
		}
		{
			const char* szIteratedGameRoot; // 888
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 891
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 892
			CUtlStringToken::CUtlStringToken(); // 891
		}
		{
			int i; // 900
			{
				KeyValues* pCur; // 905
				{
					const char* pPathID; // 907
					{
						size_t nRootIter; // 910
						{
							const char* szRoot; // 912
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
							}
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 916
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 912
							CFileSystemPassThru::AddSearchPath(
									const char* pPath,
									const char* pathID,
									SearchPathAdd_t addType,
									SearchPathPriority_t nPriority,
									CUtlStringToken pathMergeToken);  // 918
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 1479
							Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 914
							CUtlStringToken::CUtlStringToken(); // 918
						}
					}
				}
			}
			{
				size_t nRootIter; // 925
				{
					const char* szRoot; // 927
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 928
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 927
				}
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
			}
		}
	}
	{
		KeyValues* pCur; // 939
		{
			const char* pPathID; // 941
			const char* pRelativePath; // 942
			{
				CPathBufferString path; // 946
			}
			{
				const char* pAddons; // 1000
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
				}
				CTier2AppSystemDict::AddGameAndContentSearchPath(
								const char* pGamePathID,
								const char* pContentPathID,
								const char* pContentRoot,
								const char* pRelativePath,
								bool bTempContent,
								const BasePath_t* pBasePaths,
								size_t nBasePaths);  // 1005
			}
			{
				const char* pAddons; // 1011
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
				}
				{
					CPathBufferString path; // 1018
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1018
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1024
				}
				CAppSystemDict::IsInToolsMode(); // 1016
			}
			{
				CPathBufferString fullWritePath; // 1029
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1029
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1031
				CUtlStringToken::CUtlStringToken(); // 1031
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1032
			}
			CTier2AppSystemDict::AddGameAndContentSearchPath(
							const char* pGamePathID,
							const char* pContentPathID,
							const char* pContentRoot,
							const char* pRelativePath,
							bool bTempContent,
							const BasePath_t* pBasePaths,
							size_t nBasePaths);  // 969
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 983
		}
	}
	{
		CPathBufferString fullWritePath; // 1041
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1041
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1042
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		CUtlStringToken::CUtlStringToken(); // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1044
	}
	{
		size_t i; // 1067
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1526
		Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 1069
	}
	CAppSystemDict::GetApplicationInfo(); // 713
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 716
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 720
	CBufferString::IsEmpty(); // 728
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 730
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 730
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 733
	CUtlStringToken::CUtlStringToken(); // 733
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 755
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 763
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 763
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 765
	CBufferString::Length(); // 764
	CBufferString::IsEmpty(); // 797
	CAppSystemDict::IsGameApp(); // 799
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 801
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 832
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 833
	CUtlStringToken::CUtlStringToken(); // 833
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 837
	CUtlStringToken::CUtlStringToken(); // 837
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 839
	CUtlStringToken::CUtlStringToken(); // 839
	CAppSystemDict::GetGameInfo(); // 845
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 869
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 870
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 760
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1051
	CUtlStringToken::CUtlStringToken(); // 1051
	CBufferString::~CBufferString(); // 1073
	CBufferString::~CBufferString(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 801
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 825
} /* size: 6764, variables: 27, inline expansions: 105 (3017 bytes) */

// <0159D2E9> ../public/appframework/tier2app.h:671
// variables: 56
// function calls: 201
void CTier2AppSystemDict::SetupFileSystemPaths()
{
	const char* szExpectedPlatformBinPathRelativeToGameDir; // 706
	const char* szExpectedTier0PathRelativeToGameDir; // 707
	bool bAddDefaultModPath; // 712
	KeyValues* pAppInfo; // 713
	CPathBufferString executableDir; // 720
	const char* pGameDir; // 722
	CPathBufferString baseDir; // 747
	CPathBufferString dirIter; // 755
	const char* pGameRootOverride; // 757
	int nLastLen; // 764
	const char* pAltGameRoot; // 822
	CPathBufferString platformPath; // 831
	KeyValues* pGameInfo; // 845
	KeyValues* pFileSystemInfo; // 846
	KeyValues* pSearchPaths; // 847
	bool bUsingTempContent; // 863
	bool bFoundGame; // 864
	bool bFoundMod; // 865
	bool bFoundWrite; // 866
	bool bPublicContent; // 867
	CBufferString firstGamePath; // 869
	CBufferString relativeAddonPath; // 870
	CPathBufferString* pLayeredGameRootPathBuffers; // 872
	size_t nLayeredGameRootPathBuffers; // 873
	BasePath_t* pLayeredGameRootPaths; // 874
	size_t nLayeredGameRootPaths; // 875
	const char   __FUNCTION__; // 9563
	{
		CPathBufferString fileTestPath; // 767
		int nNewLen; // 790
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 767
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 769
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 770
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 772
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 778
		CBufferString::IsEmpty(); // 786
		CBufferString::Length(); // 790
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 780
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 780
	}
	{
		CPathBufferString workingDir; // 851
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 851
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 853
		CUtlStringToken::CUtlStringToken(); // 853
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 860
	}
	{
		size_t nAdditionalMobileFileSystemLayers; // 886
		{
			KeyValues* pCur; // 877
			{
				const char* pPathID; // 879
			}
		}
		{
			const char* szIteratedGameRoot; // 888
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 891
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 892
			CUtlStringToken::CUtlStringToken(); // 891
		}
		{
			int i; // 900
			{
				KeyValues* pCur; // 905
				{
					const char* pPathID; // 907
					{
						size_t nRootIter; // 910
						{
							const char* szRoot; // 912
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
							}
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 916
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 912
							CFileSystemPassThru::AddSearchPath(
									const char* pPath,
									const char* pathID,
									SearchPathAdd_t addType,
									SearchPathPriority_t nPriority,
									CUtlStringToken pathMergeToken);  // 918
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 1479
							Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 914
							CUtlStringToken::CUtlStringToken(); // 918
						}
					}
				}
			}
			{
				size_t nRootIter; // 925
				{
					const char* szRoot; // 927
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 928
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 927
				}
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
			}
		}
	}
	{
		KeyValues* pCur; // 939
		{
			const char* pPathID; // 941
			const char* pRelativePath; // 942
			{
				CPathBufferString path; // 946
			}
			{
				const char* pAddons; // 1000
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
				}
				CTier2AppSystemDict::AddGameAndContentSearchPath(
								const char* pGamePathID,
								const char* pContentPathID,
								const char* pContentRoot,
								const char* pRelativePath,
								bool bTempContent,
								const BasePath_t* pBasePaths,
								size_t nBasePaths);  // 1005
			}
			{
				const char* pAddons; // 1011
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
				}
				{
					CPathBufferString path; // 1018
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1018
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1024
				}
				CAppSystemDict::IsInToolsMode(); // 1016
			}
			{
				CPathBufferString fullWritePath; // 1029
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1029
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1031
				CUtlStringToken::CUtlStringToken(); // 1031
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1032
			}
			CTier2AppSystemDict::AddGameAndContentSearchPath(
							const char* pGamePathID,
							const char* pContentPathID,
							const char* pContentRoot,
							const char* pRelativePath,
							bool bTempContent,
							const BasePath_t* pBasePaths,
							size_t nBasePaths);  // 969
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 983
		}
	}
	{
		CPathBufferString fullWritePath; // 1041
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1041
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1042
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		CUtlStringToken::CUtlStringToken(); // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1044
	}
	{
		size_t i; // 1067
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1526
		Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 1069
	}
	CAppSystemDict::GetApplicationInfo(); // 713
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 716
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 720
	CBufferString::IsEmpty(); // 728
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 730
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 730
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 733
	CUtlStringToken::CUtlStringToken(); // 733
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 755
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 763
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 763
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 765
	CBufferString::Length(); // 764
	CBufferString::IsEmpty(); // 797
	CAppSystemDict::IsGameApp(); // 799
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 801
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 832
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 833
	CUtlStringToken::CUtlStringToken(); // 833
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 837
	CUtlStringToken::CUtlStringToken(); // 837
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 839
	CUtlStringToken::CUtlStringToken(); // 839
	CAppSystemDict::GetGameInfo(); // 845
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 869
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 870
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 760
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1051
	CUtlStringToken::CUtlStringToken(); // 1051
	CBufferString::~CBufferString(); // 1073
	CBufferString::~CBufferString(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 801
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 825
} /* size: 6764, variables: 27, inline expansions: 105 (3017 bytes) */

// <014DBAB8> ../public/appframework/tier2app.h:671
// variables: 56
// function calls: 201
void CTier2AppSystemDict::SetupFileSystemPaths()
{
	const char* szExpectedPlatformBinPathRelativeToGameDir; // 706
	const char* szExpectedTier0PathRelativeToGameDir; // 707
	bool bAddDefaultModPath; // 712
	KeyValues* pAppInfo; // 713
	CPathBufferString executableDir; // 720
	const char* pGameDir; // 722
	CPathBufferString baseDir; // 747
	CPathBufferString dirIter; // 755
	const char* pGameRootOverride; // 757
	int nLastLen; // 764
	const char* pAltGameRoot; // 822
	CPathBufferString platformPath; // 831
	KeyValues* pGameInfo; // 845
	KeyValues* pFileSystemInfo; // 846
	KeyValues* pSearchPaths; // 847
	bool bUsingTempContent; // 863
	bool bFoundGame; // 864
	bool bFoundMod; // 865
	bool bFoundWrite; // 866
	bool bPublicContent; // 867
	CBufferString firstGamePath; // 869
	CBufferString relativeAddonPath; // 870
	CPathBufferString* pLayeredGameRootPathBuffers; // 872
	size_t nLayeredGameRootPathBuffers; // 873
	BasePath_t* pLayeredGameRootPaths; // 874
	size_t nLayeredGameRootPaths; // 875
	const char   __FUNCTION__; // 9708
	{
		CPathBufferString fileTestPath; // 767
		int nNewLen; // 790
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 767
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 769
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 770
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 772
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 778
		CBufferString::IsEmpty(); // 786
		CBufferString::Length(); // 790
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 780
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 780
	}
	{
		CPathBufferString workingDir; // 851
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 851
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 853
		CUtlStringToken::CUtlStringToken(); // 853
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 860
	}
	{
		size_t nAdditionalMobileFileSystemLayers; // 886
		{
			KeyValues* pCur; // 877
			{
				const char* pPathID; // 879
			}
		}
		{
			const char* szIteratedGameRoot; // 888
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 891
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 892
			CUtlStringToken::CUtlStringToken(); // 891
		}
		{
			int i; // 900
			{
				KeyValues* pCur; // 905
				{
					const char* pPathID; // 907
					{
						size_t nRootIter; // 910
						{
							const char* szRoot; // 912
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
							}
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 916
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 912
							CFileSystemPassThru::AddSearchPath(
									const char* pPath,
									const char* pathID,
									SearchPathAdd_t addType,
									SearchPathPriority_t nPriority,
									CUtlStringToken pathMergeToken);  // 918
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 1479
							Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 914
							CUtlStringToken::CUtlStringToken(); // 918
						}
					}
				}
			}
			{
				size_t nRootIter; // 925
				{
					const char* szRoot; // 927
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 928
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 927
				}
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
			}
		}
	}
	{
		KeyValues* pCur; // 939
		{
			const char* pPathID; // 941
			const char* pRelativePath; // 942
			{
				CPathBufferString path; // 946
			}
			{
				const char* pAddons; // 1000
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
				}
				CTier2AppSystemDict::AddGameAndContentSearchPath(
								const char* pGamePathID,
								const char* pContentPathID,
								const char* pContentRoot,
								const char* pRelativePath,
								bool bTempContent,
								const BasePath_t* pBasePaths,
								size_t nBasePaths);  // 1005
			}
			{
				const char* pAddons; // 1011
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
				}
				{
					CPathBufferString path; // 1018
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1018
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1024
				}
				CAppSystemDict::IsInToolsMode(); // 1016
			}
			{
				CPathBufferString fullWritePath; // 1029
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1029
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1031
				CUtlStringToken::CUtlStringToken(); // 1031
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1032
			}
			CTier2AppSystemDict::AddGameAndContentSearchPath(
							const char* pGamePathID,
							const char* pContentPathID,
							const char* pContentRoot,
							const char* pRelativePath,
							bool bTempContent,
							const BasePath_t* pBasePaths,
							size_t nBasePaths);  // 969
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 983
		}
	}
	{
		CPathBufferString fullWritePath; // 1041
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1041
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1042
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		CUtlStringToken::CUtlStringToken(); // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1044
	}
	{
		size_t i; // 1067
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1526
		Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 1069
	}
	CAppSystemDict::GetApplicationInfo(); // 713
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 716
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 720
	CBufferString::IsEmpty(); // 728
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 730
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 730
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 733
	CUtlStringToken::CUtlStringToken(); // 733
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 755
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 763
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 763
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 765
	CBufferString::Length(); // 764
	CBufferString::IsEmpty(); // 797
	CAppSystemDict::IsGameApp(); // 799
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 801
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 832
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 833
	CUtlStringToken::CUtlStringToken(); // 833
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 837
	CUtlStringToken::CUtlStringToken(); // 837
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 839
	CUtlStringToken::CUtlStringToken(); // 839
	CAppSystemDict::GetGameInfo(); // 845
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 869
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 870
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 760
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1051
	CUtlStringToken::CUtlStringToken(); // 1051
	CBufferString::~CBufferString(); // 1073
	CBufferString::~CBufferString(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 801
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 825
} /* size: 6764, variables: 27, inline expansions: 105 (3017 bytes) */

// <0141D24D> ../public/appframework/tier2app.h:671
// variables: 56
// function calls: 201
void CTier2AppSystemDict::SetupFileSystemPaths()
{
	const char* szExpectedPlatformBinPathRelativeToGameDir; // 706
	const char* szExpectedTier0PathRelativeToGameDir; // 707
	bool bAddDefaultModPath; // 712
	KeyValues* pAppInfo; // 713
	CPathBufferString executableDir; // 720
	const char* pGameDir; // 722
	CPathBufferString baseDir; // 747
	CPathBufferString dirIter; // 755
	const char* pGameRootOverride; // 757
	int nLastLen; // 764
	const char* pAltGameRoot; // 822
	CPathBufferString platformPath; // 831
	KeyValues* pGameInfo; // 845
	KeyValues* pFileSystemInfo; // 846
	KeyValues* pSearchPaths; // 847
	bool bUsingTempContent; // 863
	bool bFoundGame; // 864
	bool bFoundMod; // 865
	bool bFoundWrite; // 866
	bool bPublicContent; // 867
	CBufferString firstGamePath; // 869
	CBufferString relativeAddonPath; // 870
	CPathBufferString* pLayeredGameRootPathBuffers; // 872
	size_t nLayeredGameRootPathBuffers; // 873
	BasePath_t* pLayeredGameRootPaths; // 874
	size_t nLayeredGameRootPaths; // 875
	const char   __FUNCTION__; // 56975
	{
		CPathBufferString fileTestPath; // 767
		int nNewLen; // 790
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 767
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 769
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 770
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 772
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 778
		CBufferString::IsEmpty(); // 786
		CBufferString::Length(); // 790
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 780
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 780
	}
	{
		CPathBufferString workingDir; // 851
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 851
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 853
		CUtlStringToken::CUtlStringToken(); // 853
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 860
	}
	{
		size_t nAdditionalMobileFileSystemLayers; // 886
		{
			KeyValues* pCur; // 877
			{
				const char* pPathID; // 879
			}
		}
		{
			const char* szIteratedGameRoot; // 888
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 891
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 892
			CUtlStringToken::CUtlStringToken(); // 891
		}
		{
			int i; // 900
			{
				KeyValues* pCur; // 905
				{
					const char* pPathID; // 907
					{
						size_t nRootIter; // 910
						{
							const char* szRoot; // 912
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
							}
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 916
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 912
							CFileSystemPassThru::AddSearchPath(
									const char* pPath,
									const char* pathID,
									SearchPathAdd_t addType,
									SearchPathPriority_t nPriority,
									CUtlStringToken pathMergeToken);  // 918
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 1479
							Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 914
							CUtlStringToken::CUtlStringToken(); // 918
						}
					}
				}
			}
			{
				size_t nRootIter; // 925
				{
					const char* szRoot; // 927
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 928
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 927
				}
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
			}
		}
	}
	{
		KeyValues* pCur; // 939
		{
			const char* pPathID; // 941
			const char* pRelativePath; // 942
			{
				CPathBufferString path; // 946
			}
			{
				const char* pAddons; // 1000
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
				}
				CTier2AppSystemDict::AddGameAndContentSearchPath(
								const char* pGamePathID,
								const char* pContentPathID,
								const char* pContentRoot,
								const char* pRelativePath,
								bool bTempContent,
								const BasePath_t* pBasePaths,
								size_t nBasePaths);  // 1005
			}
			{
				const char* pAddons; // 1011
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
				}
				{
					CPathBufferString path; // 1018
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1018
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1024
				}
				CAppSystemDict::IsInToolsMode(); // 1016
			}
			{
				CPathBufferString fullWritePath; // 1029
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1029
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1031
				CUtlStringToken::CUtlStringToken(); // 1031
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1032
			}
			CTier2AppSystemDict::AddGameAndContentSearchPath(
							const char* pGamePathID,
							const char* pContentPathID,
							const char* pContentRoot,
							const char* pRelativePath,
							bool bTempContent,
							const BasePath_t* pBasePaths,
							size_t nBasePaths);  // 969
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 983
		}
	}
	{
		CPathBufferString fullWritePath; // 1041
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1041
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1042
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		CUtlStringToken::CUtlStringToken(); // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1044
	}
	{
		size_t i; // 1067
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1526
		Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 1069
	}
	CAppSystemDict::GetApplicationInfo(); // 713
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 716
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 720
	CBufferString::IsEmpty(); // 728
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 730
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 730
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 733
	CUtlStringToken::CUtlStringToken(); // 733
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 755
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 763
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 763
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 765
	CBufferString::Length(); // 764
	CBufferString::IsEmpty(); // 797
	CAppSystemDict::IsGameApp(); // 799
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 801
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 832
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 833
	CUtlStringToken::CUtlStringToken(); // 833
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 837
	CUtlStringToken::CUtlStringToken(); // 837
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 839
	CUtlStringToken::CUtlStringToken(); // 839
	CAppSystemDict::GetGameInfo(); // 845
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 869
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 870
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 760
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1051
	CUtlStringToken::CUtlStringToken(); // 1051
	CBufferString::~CBufferString(); // 1073
	CBufferString::~CBufferString(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 801
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 825
} /* size: 6764, variables: 27, inline expansions: 105 (3017 bytes) */

// <00A0DC4A> ../public/appframework/tier2app.h:671
// variables: 56
// function calls: 201
void CTier2AppSystemDict::SetupFileSystemPaths()
{
	const char* szExpectedPlatformBinPathRelativeToGameDir; // 706
	const char* szExpectedTier0PathRelativeToGameDir; // 707
	bool bAddDefaultModPath; // 712
	KeyValues* pAppInfo; // 713
	CPathBufferString executableDir; // 720
	const char* pGameDir; // 722
	CPathBufferString baseDir; // 747
	CPathBufferString dirIter; // 755
	const char* pGameRootOverride; // 757
	int nLastLen; // 764
	const char* pAltGameRoot; // 822
	CPathBufferString platformPath; // 831
	KeyValues* pGameInfo; // 845
	KeyValues* pFileSystemInfo; // 846
	KeyValues* pSearchPaths; // 847
	bool bUsingTempContent; // 863
	bool bFoundGame; // 864
	bool bFoundMod; // 865
	bool bFoundWrite; // 866
	bool bPublicContent; // 867
	CBufferString firstGamePath; // 869
	CBufferString relativeAddonPath; // 870
	CPathBufferString* pLayeredGameRootPathBuffers; // 872
	size_t nLayeredGameRootPathBuffers; // 873
	BasePath_t* pLayeredGameRootPaths; // 874
	size_t nLayeredGameRootPaths; // 875
	const char   __FUNCTION__; // 57819
	{
		CPathBufferString fileTestPath; // 767
		int nNewLen; // 790
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 767
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 769
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 770
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 772
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 778
		CBufferString::IsEmpty(); // 786
		CBufferString::Length(); // 790
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 780
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 780
	}
	{
		CPathBufferString workingDir; // 851
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 851
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 853
		CUtlStringToken::CUtlStringToken(); // 853
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 860
	}
	{
		size_t nAdditionalMobileFileSystemLayers; // 886
		{
			KeyValues* pCur; // 877
			{
				const char* pPathID; // 879
			}
		}
		{
			const char* szIteratedGameRoot; // 888
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 891
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 892
			CUtlStringToken::CUtlStringToken(); // 891
		}
		{
			int i; // 900
			{
				KeyValues* pCur; // 905
				{
					const char* pPathID; // 907
					{
						size_t nRootIter; // 910
						{
							const char* szRoot; // 912
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
							}
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 916
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 912
							CFileSystemPassThru::AddSearchPath(
									const char* pPath,
									const char* pathID,
									SearchPathAdd_t addType,
									SearchPathPriority_t nPriority,
									CUtlStringToken pathMergeToken);  // 918
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 1479
							Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 914
							CUtlStringToken::CUtlStringToken(); // 918
						}
					}
				}
			}
			{
				size_t nRootIter; // 925
				{
					const char* szRoot; // 927
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 928
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 927
				}
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
			}
		}
	}
	{
		KeyValues* pCur; // 939
		{
			const char* pPathID; // 941
			const char* pRelativePath; // 942
			{
				CPathBufferString path; // 946
			}
			{
				const char* pAddons; // 1000
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
				}
				CTier2AppSystemDict::AddGameAndContentSearchPath(
								const char* pGamePathID,
								const char* pContentPathID,
								const char* pContentRoot,
								const char* pRelativePath,
								bool bTempContent,
								const BasePath_t* pBasePaths,
								size_t nBasePaths);  // 1005
			}
			{
				const char* pAddons; // 1011
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
				}
				{
					CPathBufferString path; // 1018
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1018
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1024
				}
				CAppSystemDict::IsInToolsMode(); // 1016
			}
			{
				CPathBufferString fullWritePath; // 1029
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1029
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1031
				CUtlStringToken::CUtlStringToken(); // 1031
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1032
			}
			CTier2AppSystemDict::AddGameAndContentSearchPath(
							const char* pGamePathID,
							const char* pContentPathID,
							const char* pContentRoot,
							const char* pRelativePath,
							bool bTempContent,
							const BasePath_t* pBasePaths,
							size_t nBasePaths);  // 969
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 983
		}
	}
	{
		CPathBufferString fullWritePath; // 1041
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1041
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1042
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		CUtlStringToken::CUtlStringToken(); // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1044
	}
	{
		size_t i; // 1067
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1526
		Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 1069
	}
	CAppSystemDict::GetApplicationInfo(); // 713
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 716
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 720
	CBufferString::IsEmpty(); // 728
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 730
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 730
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 733
	CUtlStringToken::CUtlStringToken(); // 733
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 755
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 763
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 763
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 765
	CBufferString::Length(); // 764
	CBufferString::IsEmpty(); // 797
	CAppSystemDict::IsGameApp(); // 799
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 801
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 832
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 833
	CUtlStringToken::CUtlStringToken(); // 833
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 837
	CUtlStringToken::CUtlStringToken(); // 837
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 839
	CUtlStringToken::CUtlStringToken(); // 839
	CAppSystemDict::GetGameInfo(); // 845
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 869
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 870
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 760
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1051
	CUtlStringToken::CUtlStringToken(); // 1051
	CBufferString::~CBufferString(); // 1073
	CBufferString::~CBufferString(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 801
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 825
} /* size: 6764, variables: 27, inline expansions: 105 (3017 bytes) */

// <00682EDA> ../public/appframework/tier2app.h:671
// variables: 56
// function calls: 201
void CTier2AppSystemDict::SetupFileSystemPaths()
{
	const char* szExpectedPlatformBinPathRelativeToGameDir; // 706
	const char* szExpectedTier0PathRelativeToGameDir; // 707
	bool bAddDefaultModPath; // 712
	KeyValues* pAppInfo; // 713
	CPathBufferString executableDir; // 720
	const char* pGameDir; // 722
	CPathBufferString baseDir; // 747
	CPathBufferString dirIter; // 755
	const char* pGameRootOverride; // 757
	int nLastLen; // 764
	const char* pAltGameRoot; // 822
	CPathBufferString platformPath; // 831
	KeyValues* pGameInfo; // 845
	KeyValues* pFileSystemInfo; // 846
	KeyValues* pSearchPaths; // 847
	bool bUsingTempContent; // 863
	bool bFoundGame; // 864
	bool bFoundMod; // 865
	bool bFoundWrite; // 866
	bool bPublicContent; // 867
	CBufferString firstGamePath; // 869
	CBufferString relativeAddonPath; // 870
	CPathBufferString* pLayeredGameRootPathBuffers; // 872
	size_t nLayeredGameRootPathBuffers; // 873
	BasePath_t* pLayeredGameRootPaths; // 874
	size_t nLayeredGameRootPaths; // 875
	const char   __FUNCTION__; // 63622
	{
		CPathBufferString fileTestPath; // 767
		int nNewLen; // 790
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 767
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 769
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 770
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 772
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 778
		CBufferString::IsEmpty(); // 786
		CBufferString::Length(); // 790
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 780
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 780
	}
	{
		CPathBufferString workingDir; // 851
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 851
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 853
		CUtlStringToken::CUtlStringToken(); // 853
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 860
	}
	{
		size_t nAdditionalMobileFileSystemLayers; // 886
		{
			KeyValues* pCur; // 877
			{
				const char* pPathID; // 879
			}
		}
		{
			const char* szIteratedGameRoot; // 888
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 891
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 892
			CUtlStringToken::CUtlStringToken(); // 891
		}
		{
			int i; // 900
			{
				KeyValues* pCur; // 905
				{
					const char* pPathID; // 907
					{
						size_t nRootIter; // 910
						{
							const char* szRoot; // 912
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
							}
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 916
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 912
							CFileSystemPassThru::AddSearchPath(
									const char* pPath,
									const char* pathID,
									SearchPathAdd_t addType,
									SearchPathPriority_t nPriority,
									CUtlStringToken pathMergeToken);  // 918
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 1479
							Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 914
							CUtlStringToken::CUtlStringToken(); // 918
						}
					}
				}
			}
			{
				size_t nRootIter; // 925
				{
					const char* szRoot; // 927
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 928
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 927
				}
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
			}
		}
	}
	{
		KeyValues* pCur; // 939
		{
			const char* pPathID; // 941
			const char* pRelativePath; // 942
			{
				CPathBufferString path; // 946
			}
			{
				const char* pAddons; // 1000
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
				}
				CTier2AppSystemDict::AddGameAndContentSearchPath(
								const char* pGamePathID,
								const char* pContentPathID,
								const char* pContentRoot,
								const char* pRelativePath,
								bool bTempContent,
								const BasePath_t* pBasePaths,
								size_t nBasePaths);  // 1005
			}
			{
				const char* pAddons; // 1011
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
				}
				{
					CPathBufferString path; // 1018
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1018
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1024
				}
				CAppSystemDict::IsInToolsMode(); // 1016
			}
			{
				CPathBufferString fullWritePath; // 1029
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1029
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1031
				CUtlStringToken::CUtlStringToken(); // 1031
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1032
			}
			CTier2AppSystemDict::AddGameAndContentSearchPath(
							const char* pGamePathID,
							const char* pContentPathID,
							const char* pContentRoot,
							const char* pRelativePath,
							bool bTempContent,
							const BasePath_t* pBasePaths,
							size_t nBasePaths);  // 969
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 983
		}
	}
	{
		CPathBufferString fullWritePath; // 1041
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1041
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1042
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		CUtlStringToken::CUtlStringToken(); // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1044
	}
	{
		size_t i; // 1067
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1526
		Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 1069
	}
	CAppSystemDict::GetApplicationInfo(); // 713
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 716
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 720
	CBufferString::IsEmpty(); // 728
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 730
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 730
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 733
	CUtlStringToken::CUtlStringToken(); // 733
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 755
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 763
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 763
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 765
	CBufferString::Length(); // 764
	CBufferString::IsEmpty(); // 797
	CAppSystemDict::IsGameApp(); // 799
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 801
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 832
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 833
	CUtlStringToken::CUtlStringToken(); // 833
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 837
	CUtlStringToken::CUtlStringToken(); // 837
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 839
	CUtlStringToken::CUtlStringToken(); // 839
	CAppSystemDict::GetGameInfo(); // 845
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 869
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 870
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 760
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1051
	CUtlStringToken::CUtlStringToken(); // 1051
	CBufferString::~CBufferString(); // 1073
	CBufferString::~CBufferString(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 801
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 825
} /* size: 6764, variables: 27, inline expansions: 105 (3017 bytes) */

// <0036976A> ../public/appframework/tier2app.h:671
// variables: 56
// function calls: 201
void CTier2AppSystemDict::SetupFileSystemPaths()
{
	const char* szExpectedPlatformBinPathRelativeToGameDir; // 706
	const char* szExpectedTier0PathRelativeToGameDir; // 707
	bool bAddDefaultModPath; // 712
	KeyValues* pAppInfo; // 713
	CPathBufferString executableDir; // 720
	const char* pGameDir; // 722
	CPathBufferString baseDir; // 747
	CPathBufferString dirIter; // 755
	const char* pGameRootOverride; // 757
	int nLastLen; // 764
	const char* pAltGameRoot; // 822
	CPathBufferString platformPath; // 831
	KeyValues* pGameInfo; // 845
	KeyValues* pFileSystemInfo; // 846
	KeyValues* pSearchPaths; // 847
	bool bUsingTempContent; // 863
	bool bFoundGame; // 864
	bool bFoundMod; // 865
	bool bFoundWrite; // 866
	bool bPublicContent; // 867
	CBufferString firstGamePath; // 869
	CBufferString relativeAddonPath; // 870
	CPathBufferString* pLayeredGameRootPathBuffers; // 872
	size_t nLayeredGameRootPathBuffers; // 873
	BasePath_t* pLayeredGameRootPaths; // 874
	size_t nLayeredGameRootPaths; // 875
	const char   __FUNCTION__; // 63710
	{
		CPathBufferString fileTestPath; // 767
		int nNewLen; // 790
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 767
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 769
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 770
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 772
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 778
		CBufferString::IsEmpty(); // 786
		CBufferString::Length(); // 790
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 780
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 780
	}
	{
		CPathBufferString workingDir; // 851
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 851
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 853
		CUtlStringToken::CUtlStringToken(); // 853
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 860
	}
	{
		size_t nAdditionalMobileFileSystemLayers; // 886
		{
			KeyValues* pCur; // 877
			{
				const char* pPathID; // 879
			}
		}
		{
			const char* szIteratedGameRoot; // 888
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 891
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 892
			CUtlStringToken::CUtlStringToken(); // 891
		}
		{
			int i; // 900
			{
				KeyValues* pCur; // 905
				{
					const char* pPathID; // 907
					{
						size_t nRootIter; // 910
						{
							const char* szRoot; // 912
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
							}
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 916
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 912
							CFileSystemPassThru::AddSearchPath(
									const char* pPath,
									const char* pathID,
									SearchPathAdd_t addType,
									SearchPathPriority_t nPriority,
									CUtlStringToken pathMergeToken);  // 918
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 1479
							Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 914
							CUtlStringToken::CUtlStringToken(); // 918
						}
					}
				}
			}
			{
				size_t nRootIter; // 925
				{
					const char* szRoot; // 927
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 928
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 927
				}
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
			}
		}
	}
	{
		KeyValues* pCur; // 939
		{
			const char* pPathID; // 941
			const char* pRelativePath; // 942
			{
				CPathBufferString path; // 946
			}
			{
				const char* pAddons; // 1000
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
				}
				CTier2AppSystemDict::AddGameAndContentSearchPath(
								const char* pGamePathID,
								const char* pContentPathID,
								const char* pContentRoot,
								const char* pRelativePath,
								bool bTempContent,
								const BasePath_t* pBasePaths,
								size_t nBasePaths);  // 1005
			}
			{
				const char* pAddons; // 1011
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
				}
				{
					CPathBufferString path; // 1018
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1018
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1024
				}
				CAppSystemDict::IsInToolsMode(); // 1016
			}
			{
				CPathBufferString fullWritePath; // 1029
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1029
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1031
				CUtlStringToken::CUtlStringToken(); // 1031
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1032
			}
			CTier2AppSystemDict::AddGameAndContentSearchPath(
							const char* pGamePathID,
							const char* pContentPathID,
							const char* pContentRoot,
							const char* pRelativePath,
							bool bTempContent,
							const BasePath_t* pBasePaths,
							size_t nBasePaths);  // 969
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 983
		}
	}
	{
		CPathBufferString fullWritePath; // 1041
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1041
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1042
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		CUtlStringToken::CUtlStringToken(); // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1044
	}
	{
		size_t i; // 1067
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1526
		Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 1069
	}
	CAppSystemDict::GetApplicationInfo(); // 713
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 716
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 720
	CBufferString::IsEmpty(); // 728
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 730
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 730
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 733
	CUtlStringToken::CUtlStringToken(); // 733
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 755
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 763
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 763
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 765
	CBufferString::Length(); // 764
	CBufferString::IsEmpty(); // 797
	CAppSystemDict::IsGameApp(); // 799
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 801
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 832
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 833
	CUtlStringToken::CUtlStringToken(); // 833
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 837
	CUtlStringToken::CUtlStringToken(); // 837
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 839
	CUtlStringToken::CUtlStringToken(); // 839
	CAppSystemDict::GetGameInfo(); // 845
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 869
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 870
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 760
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1051
	CUtlStringToken::CUtlStringToken(); // 1051
	CBufferString::~CBufferString(); // 1073
	CBufferString::~CBufferString(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 801
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 825
} /* size: 6764, variables: 27, inline expansions: 105 (3017 bytes) */

// <0023E42D> ../public/appframework/tier2app.h:671
// variables: 56
// function calls: 201
void CTier2AppSystemDict::SetupFileSystemPaths()
{
	const char* szExpectedPlatformBinPathRelativeToGameDir; // 706
	const char* szExpectedTier0PathRelativeToGameDir; // 707
	bool bAddDefaultModPath; // 712
	KeyValues* pAppInfo; // 713
	CPathBufferString executableDir; // 720
	const char* pGameDir; // 722
	CPathBufferString baseDir; // 747
	CPathBufferString dirIter; // 755
	const char* pGameRootOverride; // 757
	int nLastLen; // 764
	const char* pAltGameRoot; // 822
	CPathBufferString platformPath; // 831
	KeyValues* pGameInfo; // 845
	KeyValues* pFileSystemInfo; // 846
	KeyValues* pSearchPaths; // 847
	bool bUsingTempContent; // 863
	bool bFoundGame; // 864
	bool bFoundMod; // 865
	bool bFoundWrite; // 866
	bool bPublicContent; // 867
	CBufferString firstGamePath; // 869
	CBufferString relativeAddonPath; // 870
	CPathBufferString* pLayeredGameRootPathBuffers; // 872
	size_t nLayeredGameRootPathBuffers; // 873
	BasePath_t* pLayeredGameRootPaths; // 874
	size_t nLayeredGameRootPaths; // 875
	const char   __FUNCTION__; // 20047
	{
		CPathBufferString fileTestPath; // 767
		int nNewLen; // 790
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 767
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 769
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 770
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 772
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 777
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 778
		CBufferString::IsEmpty(); // 786
		CBufferString::Length(); // 790
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 795
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 780
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 780
	}
	{
		CPathBufferString workingDir; // 851
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 851
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 853
		CUtlStringToken::CUtlStringToken(); // 853
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 860
	}
	{
		size_t nAdditionalMobileFileSystemLayers; // 886
		{
			KeyValues* pCur; // 877
			{
				const char* pPathID; // 879
			}
		}
		{
			const char* szIteratedGameRoot; // 888
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 95
			CFileSystemPassThru::AddSearchPath(
					const char* pPath,
					const char* pathID,
					SearchPathAdd_t addType,
					SearchPathPriority_t nPriority,
					CUtlStringToken pathMergeToken);  // 891
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 162
			CFileSystemPassThru::SetSearchPathReadOnly(
						const char* pPath,
						const char* pathID,
						bool bReadOnly);  // 892
			CUtlStringToken::CUtlStringToken(); // 891
		}
		{
			int i; // 900
			{
				KeyValues* pCur; // 905
				{
					const char* pPathID; // 907
					{
						size_t nRootIter; // 910
						{
							const char* szRoot; // 912
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
							}
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 916
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 771
							CBufferString::Get(); // 912
							CFileSystemPassThru::AddSearchPath(
									const char* pPath,
									const char* pathID,
									SearchPathAdd_t addType,
									SearchPathPriority_t nPriority,
									CUtlStringToken pathMergeToken);  // 918
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 1479
							Construct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 914
							CUtlStringToken::CUtlStringToken(); // 918
						}
					}
				}
			}
			{
				size_t nRootIter; // 925
				{
					const char* szRoot; // 927
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 928
					}
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 927
				}
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
			}
		}
	}
	{
		KeyValues* pCur; // 939
		{
			const char* pPathID; // 941
			const char* pRelativePath; // 942
			{
				CPathBufferString path; // 946
			}
			{
				const char* pAddons; // 1000
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
				}
				CTier2AppSystemDict::AddGameAndContentSearchPath(
								const char* pGamePathID,
								const char* pContentPathID,
								const char* pContentRoot,
								const char* pRelativePath,
								bool bTempContent,
								const BasePath_t* pBasePaths,
								size_t nBasePaths);  // 1005
			}
			{
				const char* pAddons; // 1011
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1012
				}
				{
					CPathBufferString path; // 1018
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1018
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1024
				}
				CAppSystemDict::IsInToolsMode(); // 1016
			}
			{
				CPathBufferString fullWritePath; // 1029
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1029
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1031
				CUtlStringToken::CUtlStringToken(); // 1031
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1032
			}
			CTier2AppSystemDict::AddGameAndContentSearchPath(
							const char* pGamePathID,
							const char* pContentPathID,
							const char* pContentRoot,
							const char* pRelativePath,
							bool bTempContent,
							const BasePath_t* pBasePaths,
							size_t nBasePaths);  // 969
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 983
		}
	}
	{
		CPathBufferString fullWritePath; // 1041
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1041
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1042
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1043
		CUtlStringToken::CUtlStringToken(); // 1043
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1044
	}
	{
		size_t i; // 1067
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1526
		Destruct<CBufferStringN<200> >(CBufferStringN<200>* pMemory); // 1069
	}
	CAppSystemDict::GetApplicationInfo(); // 713
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 716
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 720
	CBufferString::IsEmpty(); // 728
	CUtlString::Get(); // 436
	CAppSystemDict::GetExecutablePath(); // 730
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 730
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 733
	CUtlStringToken::CUtlStringToken(); // 733
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 747
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 755
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 763
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 763
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 765
	CBufferString::Length(); // 764
	CBufferString::IsEmpty(); // 797
	CAppSystemDict::IsGameApp(); // 799
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 801
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 806
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 811
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 831
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 832
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 833
	CUtlStringToken::CUtlStringToken(); // 833
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 837
	CUtlStringToken::CUtlStringToken(); // 837
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 839
	CUtlStringToken::CUtlStringToken(); // 839
	CAppSystemDict::GetGameInfo(); // 845
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 869
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 870
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 760
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1051
	CUtlStringToken::CUtlStringToken(); // 1051
	CBufferString::~CBufferString(); // 1073
	CBufferString::~CBufferString(); // 1073
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 801
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 801
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 825
} /* size: 6764, variables: 27, inline expansions: 105 (3017 bytes) */

