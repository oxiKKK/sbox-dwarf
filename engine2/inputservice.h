
//
// engine2/inputservice.h
//
//	referenced by: libengine2.so
//
//	functions: 62
//	class: 1
//

// <004600D7> engine2/inputservice.h:17
// member functions: 167
// member variables: 19
// static member variable: 1
// vtable entries: 20
// class size: 7,960
class CInputService : public CBaseEngineService<IInputService> {
	/* engine2/inputservice.h:68 */
	struct BindingInfo_t {
		char * m_pBinding; /* 0 8 */
		bool m_bBindingSetByUser:1; /* 8: 0 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* engine2/inputservice.h:75 */
	struct KeyContext_t {
		/* engine2/inputservice.h:77 */
		void KeyContext_t(KeyContext_t* );
		BindingInfo_t m_pKeyInfo[369]; /* 0 5904 */
		CUtlVector<ButtonCode_t, CUtlMemory<ButtonCode_t, int> > m_Modifiers; /* 5904 32 */
		void ~KeyContext_t(KeyContext_t* );
	};
	/* engine2/inputservice.h:128 */
	class CCommandMemberInitializer_ListBoundKeys {
		/* engine2/inputservice.h:128 */
		void CCommandMemberInitializer_ListBoundKeys(CCommandMemberInitializer_ListBoundKeys* );
	private:
		CConCommandMemberAccessor<CInputService> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_ListBoundKeys(CCommandMemberInitializer_ListBoundKeys* );
	};
	/* engine2/inputservice.h:129 */
	class CCommandMemberInitializer_FindBinding {
		/* engine2/inputservice.h:129 */
		void CCommandMemberInitializer_FindBinding(CCommandMemberInitializer_FindBinding* );
	private:
		CConCommandMemberAccessor<CInputService> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_FindBinding(CCommandMemberInitializer_FindBinding* );
	};
	/* engine2/inputservice.h:130 */
	class CCommandMemberInitializer_ExecConfigFile {
		/* engine2/inputservice.h:130 */
		void CCommandMemberInitializer_ExecConfigFile(CCommandMemberInitializer_ExecConfigFile* );
	private:
		CConCommandMemberAccessor<CInputService> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_ExecConfigFile(CCommandMemberInitializer_ExecConfigFile* );
	};
	/* engine2/inputservice.h:131 */
	class CCommandMemberInitializer_ExecConfigFileIfExists {
		/* engine2/inputservice.h:131 */
		void CCommandMemberInitializer_ExecConfigFileIfExists(CCommandMemberInitializer_ExecConfigFileIfExists* );
	private:
		CConCommandMemberAccessor<CInputService> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_ExecConfigFileIfExists(CCommandMemberInitializer_ExecConfigFileIfExists* );
	};
	/* engine2/inputservice.h:132 */
	class CCommandMemberInitializer_ExecConfigFileAsync {
		/* engine2/inputservice.h:132 */
		void CCommandMemberInitializer_ExecConfigFileAsync(CCommandMemberInitializer_ExecConfigFileAsync* );
	private:
		CConCommandMemberAccessor<CInputService> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_ExecConfigFileAsync(CCommandMemberInitializer_ExecConfigFileAsync* );
	};
	/* engine2/inputservice.h:133 */
	class CCommandMemberInitializer_ExecPerfTest {
		/* engine2/inputservice.h:133 */
		void CCommandMemberInitializer_ExecPerfTest(CCommandMemberInitializer_ExecPerfTest* );
	private:
		CConCommandMemberAccessor<CInputService> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_ExecPerfTest(CCommandMemberInitializer_ExecPerfTest* );
	};
	/* engine2/inputservice.h:134 */
	class CCommandMemberInitializer_BindKey {
		/* engine2/inputservice.h:134 */
		void CCommandMemberInitializer_BindKey(CCommandMemberInitializer_BindKey* );
	private:
		CConCommandMemberAccessor<CInputService> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_BindKey(CCommandMemberInitializer_BindKey* );
	};
	/* engine2/inputservice.h:135 */
	class CCommandMemberInitializer_UnbindAll {
		/* engine2/inputservice.h:135 */
		void CCommandMemberInitializer_UnbindAll(CCommandMemberInitializer_UnbindAll* );
	private:
		CConCommandMemberAccessor<CInputService> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_UnbindAll(CCommandMemberInitializer_UnbindAll* );
	};
	/* engine2/inputservice.h:136 */
	class CCommandMemberInitializer_Unbind {
		/* engine2/inputservice.h:136 */
		void CCommandMemberInitializer_Unbind(CCommandMemberInitializer_Unbind* );
	private:
		CConCommandMemberAccessor<CInputService> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_Unbind(CCommandMemberInitializer_Unbind* );
	};
	/* engine2/inputservice.h:137 */
	class CCommandMemberInitializer_BindDefaults {
		/* engine2/inputservice.h:137 */
		void CCommandMemberInitializer_BindDefaults(CCommandMemberInitializer_BindDefaults* );
	private:
		CConCommandMemberAccessor<CInputService> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_BindDefaults(CCommandMemberInitializer_BindDefaults* );
	};
	/* engine2/inputservice.h:138 */
	class CCommandMemberInitializer_OnWriteKeyBindings {
		/* engine2/inputservice.h:138 */
		void CCommandMemberInitializer_OnWriteKeyBindings(CCommandMemberInitializer_OnWriteKeyBindings* );
	private:
		CConCommandMemberAccessor<CInputService> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_OnWriteKeyBindings(CCommandMemberInitializer_OnWriteKeyBindings* );
	};
	/* engine2/inputservice.h:139 */
	class CCommandMemberInitializer_OnWriteConfig {
		/* engine2/inputservice.h:139 */
		void CCommandMemberInitializer_OnWriteConfig(CCommandMemberInitializer_OnWriteConfig* );
	private:
		CConCommandMemberAccessor<CInputService> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_OnWriteConfig(CCommandMemberInitializer_OnWriteConfig* );
	};
	/* engine2/inputservice.h:158 */
	struct AsyncConfigFile_t {
		CUtlBuffer m_buf; /* 0 80 */
		uint64 m_nSleepUntilTicks; /* 80 8 */
		int m_nWaitOnIdx; /* 88 4 */
		/* engine2/inputservice.h:164 */
		void AsyncConfigFile_t(AsyncConfigFile_t* );
		/* engine2/inputservice.h:170 */
		void AsyncConfigFile_t(AsyncConfigFile_t* , const AsyncConfigFile_t& );
		/* engine2/inputservice.h:178 */
		AsyncConfigFile_t& operator=(AsyncConfigFile_t* , const AsyncConfigFile_t& );
		void ~AsyncConfigFile_t(AsyncConfigFile_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* engine2/inputservice.h:194 */
	struct AsyncCommand_t {
		const char * m_pName; /* 0 8 */
		FnCommandCallbackAsync_t m_fn; /* 8 8 */
	};
	/* engine2/inputservice.h:192 */
	typedef void ()(CInputService* , int, const CCommand& ) CInputService::* FnCommandCallbackAsync_t;
public:
	/* class CBaseEngineService<IInputService> <ancestor>; */ /* 0 64 */
	void CInputService(CInputService* , const CInputService& );
	/* engine2/inputservice.cpp:1023 */
	virtual InitReturnVal_t Init(CInputService* );
	/* engine2/inputservice.cpp:1111 */
	virtual void Shutdown(CInputService* );
	/* engine2/inputservice.cpp:88 */
	virtual const EngineServiceDependencies_t* GetServiceDependencies(CInputService* );
	/* engine2/inputservice.cpp:1439 */
	virtual bool IsAppActive(const CInputService* );
	/* engine2/inputservice.cpp:1515 */
	virtual void InsertCommand(CInputService* , const char* );
	/* engine2/inputservice.cpp:1240 */
	virtual bool ReadKeyBindings(CInputService* );
	/* engine2/inputservice.cpp:149 */
	virtual void SetBinding(CInputService* , ButtonCode_t, const char* , bool);
	/* engine2/inputservice.cpp:574 */
	virtual const char* GetBinding(CInputService* , ButtonCode_t);
	/* engine2/inputservice.cpp:562 */
	virtual const char* Key_NameForBinding(CInputService* , const char* , int, int);
	/* engine2/inputservice.cpp:1361 */
	virtual void ReadArchivedConvars(CInputService* , const char* , CUtlBuffer& , bool);
	/* engine2/inputservice.cpp:1401 */
	virtual void WriteArchivedConvars(CInputService* , CUtlBuffer& );
	/* engine2/inputservice.cpp:1453 */
	virtual bool HasMouseFocus(const CInputService* );
	/* engine2/inputservice.cpp:102 */
	virtual void EnableKeyBindingSystem(CInputService* , bool);
	/* engine2/inputservice.cpp:1463 */
	virtual void SaveKeyBindings(CInputService* );
	/* engine2/inputservice.cpp:313 */
	virtual void UnbindAllKeys(CInputService* );
	/* engine2/inputservice.cpp:1079 */
	virtual void SaveConvarState(CInputService* );
	/* engine2/inputservice.cpp:1471 */
	virtual void GetCursorPosition(CInputService* , int* , int* );
	/* engine2/inputservice.cpp:1476 */
	virtual void SetCursorPosition(CInputService* , int, int);
	/* engine2/inputservice.cpp:1257 */
	virtual CUtlString GenerateConfigFileName(CInputService* , const char* , bool* , bool);
	/* engine2/inputservice.cpp:1489 */
	virtual void Pump(CInputService* );
	/* engine2/inputservice.cpp:72 */
	void CInputService(CInputService* );
	/* engine2/inputservice.cpp:80 */
	virtual void ~CInputService(CInputService* );
private:
	/* engine2/inputservice.cpp:358 */
	bool ReadKeyBindings(CInputService* , CUtlBuffer& );
	/* engine2/inputservice.cpp:462 */
	void WriteKeyBindings(CInputService* , CUtlBuffer& );
	/* engine2/inputservice.cpp:503 */
	bool FindBindingSubstringMatch(CInputService* , char* , const char* );
	/* engine2/inputservice.cpp:1091 */
	void SaveKeyBindingsToFile(CInputService* );
	/* engine2/inputservice.cpp:1484 */
	int FindInputValue(const CInputService* , const char* );
	/* engine2/inputservice.h:208 */
	BindingInfo_t& GetBindingInfo(CInputService* , ButtonCode_t);
	/* engine2/inputservice.h:215 */
	const BindingInfo_t& GetBindingInfo(const CInputService* , ButtonCode_t);
	/* engine2/inputservice.cpp:1152 */
	bool ReadUserConfigFile(const CInputService* , const char* , CUtlBuffer& );
	/* engine2/inputservice.cpp:1195 */
	bool WriteUserConfigFile(const CInputService* , const char* , const CUtlBuffer& );
	/* engine2/inputservice.cpp:1318 */
	void OnProfileStorageAvailable(CInputService* , const EventProfileStorageAvailable_t& );
	/* engine2/inputservice.cpp:1096 */
	void OnAppShutdown(CInputService* , const EventAppShutdown_t& );
	/* engine2/inputservice.cpp:1283 */
	bool LoadArchivedConvarFile(CInputService* , const char* );
	/* engine2/inputservice.cpp:989 */
	bool LoadDefaultKeysConfig(CInputService* , const char* );
	/* engine2/inputservice.cpp:1303 */
	void LoadFromDefaultsFiles(CInputService* , const char* , const CUtlDelegate<bool(char const*)>& );
	/* engine2/inputservice.cpp:599 */
	void ListBoundKeys(CInputService* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_ListBoundKeys m_ListBoundKeys_register; /* 64 160 */
	/* engine2/inputservice.cpp:636 */
	void FindBinding(CInputService* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_FindBinding m_FindBinding_register; /* 224 160 */
	/* engine2/inputservice.cpp:750 */
	void ExecConfigFile(CInputService* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_ExecConfigFile m_ExecConfigFile_register; /* 384 160 */
	/* engine2/inputservice.cpp:755 */
	void ExecConfigFileIfExists(CInputService* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_ExecConfigFileIfExists m_ExecConfigFileIfExists_register; /* 544 160 */
	/* engine2/inputservice.cpp:797 */
	void ExecConfigFileAsync(CInputService* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_ExecConfigFileAsync m_ExecConfigFileAsync_register; /* 704 160 */
	/* engine2/inputservice.cpp:814 */
	void ExecPerfTest(CInputService* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_ExecPerfTest m_ExecPerfTest_register; /* 864 160 */
	/* engine2/inputservice.cpp:228 */
	void BindKey(CInputService* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_BindKey m_BindKey_register; /* 1024 160 */
	/* engine2/inputservice.cpp:184 */
	void UnbindAll(CInputService* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_UnbindAll m_UnbindAll_register; /* 1184 160 */
	/* engine2/inputservice.cpp:159 */
	void Unbind(CInputService* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_Unbind m_Unbind_register; /* 1344 160 */
	/* engine2/inputservice.cpp:261 */
	void BindDefaults(CInputService* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_BindDefaults m_BindDefaults_register; /* 1504 160 */
	/* engine2/inputservice.cpp:287 */
	void OnWriteKeyBindings(CInputService* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_OnWriteKeyBindings m_OnWriteKeyBindings_register; /* 1664 160 */
	/* engine2/inputservice.cpp:292 */
	void OnWriteConfig(CInputService* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_OnWriteConfig m_OnWriteConfig_register; /* 1824 160 */
	/* engine2/inputservice.cpp:699 */
	bool ReadConfigFile(CInputService* , const char* , const char* , const char* , bool, CUtlBuffer& );
	/* engine2/inputservice.cpp:763 */
	void ExecConfigFile_Internal(CInputService* , const CCommandContext& , const CCommand& , bool);
	/* engine2/inputservice.cpp:825 */
	void ExecConfigFileAsyncAndWait(CInputService* , int, const CCommand& );
	/* engine2/inputservice.cpp:850 */
	void ExecAsyncSleep(CInputService* , int, const CCommand& );
	/* engine2/inputservice.cpp:877 */
	int AddAsyncConfigFile(CInputService* , const char* , const char* , const char* );
	/* engine2/inputservice.cpp:893 */
	void RemoveAsyncConfigFile(CInputService* , int);
	/* engine2/inputservice.cpp:918 */
	bool FindAsyncCommand(CInputService* , int, const char* );
	/* engine2/inputservice.cpp:951 */
	void ProcessAsyncConfigFiles(CInputService* );
	KeyValues * m_pDefaultKeyBindings; /* 1984 8 */
	KeyValues * m_pKeyBindings; /* 1992 8 */
	KeyContext_t m_KeyContext; /* 2000 5936 */
	bool m_bEnableKeybindings; /* 7936 1 */
	int m_nLockCount; /* 7940 4 */
	CUtlLeanVector<CInputService::AsyncConfigFile_t, short int> m_AsyncConfigFiles; /* 7944 16 */
	static struct AsyncCommand_t s_asyncCommands[2]; /* 0 0 */
	/* engine2/inputservice.cpp:617 */
	void FindBindingForType<ButtonCode_t>(CInputService* , const char* );
	/* engine2/inputservice.cpp:583 */
	void ListBoundKeysForType<ButtonCode_t>(CInputService* );
	/* engine2/inputservice.cpp:529 */
	const char* FindSubstringMatchForType<ButtonCode_t>(CInputService* , const char* , int, int, int& );
	/* engine2/inputservice.cpp:404 */
	void WriteKeyBindingsForType<ButtonCode_t>(CInputService* , CUtlBuffer& , KeyValues* );
	/* engine2/inputservice.cpp:302 */
	void UnbindAllKeysForType<ButtonCode_t>(CInputService* );
	/* engine2/inputservice.cpp:325 */
	void ApplyBindings<ButtonCode_t>(CInputService* , KeyValues* , bool);
	/* engine2/inputservice.cpp:201 */
	bool BindKeyHelper<ButtonCode_t>(CInputService* , const char* , const char* );
	/* engine2/inputservice.cpp:112 */
	void SetBindingForType<ButtonCode_t>(CInputService* , ButtonCode_t, const char* , bool);
	/* engine2/inputservice.cpp:323 */
	const char* GetSubkeyNameForType<ButtonCode_t>(const CInputService* );
	/* engine2/inputservice.h:227 */
	ButtonCode_t GetInvalidCode<ButtonCode_t>(const CInputService* );
	/* engine2/inputservice.h:222 */
	int GetCodeCount<ButtonCode_t>(const CInputService* );
	void CInputService(class CInputService *, const class CInputService  &); /* linkage=_ZN13CInputServiceC4ERKS_ */
	virtual enum InitReturnVal_t Init(class CInputService *); /* linkage=_ZN13CInputService4InitEv */
	virtual void Shutdown(class CInputService *); /* linkage=_ZN13CInputService8ShutdownEv */
	virtual const class EngineServiceDependencies_t  * GetServiceDependencies(class CInputService *); /* linkage=_ZN13CInputService22GetServiceDependenciesEv */
	virtual bool IsAppActive(const class CInputService  *); /* linkage=_ZNK13CInputService11IsAppActiveEv */
	/* <4d685a> engine2/inputservice.cpp:1515 */
	virtual void InsertCommand(class CInputService *, const char  *); /* linkage=_ZN13CInputService13InsertCommandEPKc */
	virtual bool ReadKeyBindings(class CInputService *); /* linkage=_ZN13CInputService15ReadKeyBindingsEv */
	/* <4d9591> engine2/inputservice.cpp:149 */
	virtual void SetBinding(class CInputService *, enum ButtonCode_t, const char  *, bool); /* linkage=_ZN13CInputService10SetBindingE12ButtonCode_tPKcb */
	/* <4d75de> engine2/inputservice.cpp:574 */
	virtual const char  * GetBinding(class CInputService *, enum ButtonCode_t); /* linkage=_ZN13CInputService10GetBindingE12ButtonCode_t */
	virtual const char  * Key_NameForBinding(class CInputService *, const char  *, int, int); /* linkage=_ZN13CInputService18Key_NameForBindingEPKcii */
	virtual void ReadArchivedConvars(class CInputService *, const char  *, class CUtlBuffer &, bool); /* linkage=_ZN13CInputService19ReadArchivedConvarsEPKcR10CUtlBufferb */
	virtual void WriteArchivedConvars(class CInputService *, class CUtlBuffer &); /* linkage=_ZN13CInputService20WriteArchivedConvarsER10CUtlBuffer */
	virtual bool HasMouseFocus(const class CInputService  *); /* linkage=_ZNK13CInputService13HasMouseFocusEv */
	virtual void EnableKeyBindingSystem(class CInputService *, bool); /* linkage=_ZN13CInputService22EnableKeyBindingSystemEb */
	virtual void SaveKeyBindings(class CInputService *); /* linkage=_ZN13CInputService15SaveKeyBindingsEv */
	/* <4d9616> engine2/inputservice.cpp:313 */
	virtual void UnbindAllKeys(class CInputService *); /* linkage=_ZN13CInputService13UnbindAllKeysEv */
	virtual void SaveConvarState(class CInputService *); /* linkage=_ZN13CInputService15SaveConvarStateEv */
	virtual void GetCursorPosition(class CInputService *, int *, int *); /* linkage=_ZN13CInputService17GetCursorPositionEPiS0_ */
	virtual void SetCursorPosition(class CInputService *, int, int); /* linkage=_ZN13CInputService17SetCursorPositionEii */
	/* <4d6698> engine2/inputservice.cpp:1257 */
	virtual class CUtlString GenerateConfigFileName(class CInputService *, const char  *, bool *, bool); /* linkage=_ZN13CInputService22GenerateConfigFileNameEPKcPbb */
	virtual void Pump(class CInputService *); /* linkage=_ZN13CInputService4PumpEv */
	void CInputService(class CInputService *); /* linkage=_ZN13CInputServiceC4Ev */
	virtual void ~CInputService(class CInputService *); /* linkage=_ZN13CInputServiceD4Ev */
	bool ReadKeyBindings(class CInputService *, class CUtlBuffer &); /* linkage=_ZN13CInputService15ReadKeyBindingsER10CUtlBuffer */
	void WriteKeyBindings(class CInputService *, class CUtlBuffer &); /* linkage=_ZN13CInputService16WriteKeyBindingsER10CUtlBuffer */
	bool FindBindingSubstringMatch(class CInputService *, char *, const char  *); /* linkage=_ZN13CInputService25FindBindingSubstringMatchEPcPKc */
	/* <4d82ab> engine2/inputservice.cpp:1091 */
	void SaveKeyBindingsToFile(class CInputService *); /* linkage=_ZN13CInputService21SaveKeyBindingsToFileEv */
	int FindInputValue(const class CInputService  *, const char  *); /* linkage=_ZNK13CInputService14FindInputValueEPKc */
	class BindingInfo_t & GetBindingInfo(class CInputService *, enum ButtonCode_t); /* linkage=_ZN13CInputService14GetBindingInfoE12ButtonCode_t */
	const class BindingInfo_t  & GetBindingInfo(const class CInputService  *, enum ButtonCode_t); /* linkage=_ZNK13CInputService14GetBindingInfoE12ButtonCode_t */
	bool ReadUserConfigFile(const class CInputService  *, const char  *, class CUtlBuffer &); /* linkage=_ZNK13CInputService18ReadUserConfigFileEPKcR10CUtlBuffer */
	bool WriteUserConfigFile(const class CInputService  *, const char  *, const class CUtlBuffer  &); /* linkage=_ZNK13CInputService19WriteUserConfigFileEPKcRK10CUtlBuffer */
	/* <4d965c> engine2/inputservice.cpp:1318 */
	void OnProfileStorageAvailable(class CInputService *, const class EventProfileStorageAvailable_t  &); /* linkage=_ZN13CInputService25OnProfileStorageAvailableERK30EventProfileStorageAvailable_t */
	void OnAppShutdown(class CInputService *, const class EventAppShutdown_t  &); /* linkage=_ZN13CInputService13OnAppShutdownERK18EventAppShutdown_t */
	bool LoadArchivedConvarFile(class CInputService *, const char  *); /* linkage=_ZN13CInputService22LoadArchivedConvarFileEPKc */
	bool LoadDefaultKeysConfig(class CInputService *, const char  *); /* linkage=_ZN13CInputService21LoadDefaultKeysConfigEPKc */
	void LoadFromDefaultsFiles(class CInputService *, const char  *, const class CUtlDelegate<bool(char const*)>  &); /* linkage=_ZN13CInputService21LoadFromDefaultsFilesEPKcRK12CUtlDelegateIFbS1_EE */
	/* <4d9e67> engine2/inputservice.cpp:599 */
	void ListBoundKeys(class CInputService *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CInputService13ListBoundKeysERK15CCommandContextRK8CCommand */
	/* <4d9f88> engine2/inputservice.cpp:636 */
	void FindBinding(class CInputService *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CInputService11FindBindingERK15CCommandContextRK8CCommand */
	void ExecConfigFile(class CInputService *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CInputService14ExecConfigFileERK15CCommandContextRK8CCommand */
	void ExecConfigFileIfExists(class CInputService *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CInputService22ExecConfigFileIfExistsERK15CCommandContextRK8CCommand */
	/* <4da14f> engine2/inputservice.cpp:797 */
	void ExecConfigFileAsync(class CInputService *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CInputService19ExecConfigFileAsyncERK15CCommandContextRK8CCommand */
	/* <4da3f9> engine2/inputservice.cpp:814 */
	void ExecPerfTest(class CInputService *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CInputService12ExecPerfTestERK15CCommandContextRK8CCommand */
	void BindKey(class CInputService *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CInputService7BindKeyERK15CCommandContextRK8CCommand */
	/* <4d9d3a> engine2/inputservice.cpp:184 */
	void UnbindAll(class CInputService *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CInputService9UnbindAllERK15CCommandContextRK8CCommand */
	void Unbind(class CInputService *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CInputService6UnbindERK15CCommandContextRK8CCommand */
	void BindDefaults(class CInputService *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CInputService12BindDefaultsERK15CCommandContextRK8CCommand */
	void OnWriteKeyBindings(class CInputService *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CInputService18OnWriteKeyBindingsERK15CCommandContextRK8CCommand */
	void OnWriteConfig(class CInputService *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CInputService13OnWriteConfigERK15CCommandContextRK8CCommand */
	bool ReadConfigFile(class CInputService *, const char  *, const char  *, const char  *, bool, class CUtlBuffer &); /* linkage=_ZN13CInputService14ReadConfigFileEPKcS1_S1_bR10CUtlBuffer */
	void ExecConfigFile_Internal(class CInputService *, const class CCommandContext  &, const class CCommand  &, bool); /* linkage=_ZN13CInputService23ExecConfigFile_InternalERK15CCommandContextRK8CCommandb */
	void ExecConfigFileAsyncAndWait(class CInputService *, int, const class CCommand  &); /* linkage=_ZN13CInputService26ExecConfigFileAsyncAndWaitEiRK8CCommand */
	void ExecAsyncSleep(class CInputService *, int, const class CCommand  &); /* linkage=_ZN13CInputService14ExecAsyncSleepEiRK8CCommand */
	int AddAsyncConfigFile(class CInputService *, const char  *, const char  *, const char  *); /* linkage=_ZN13CInputService18AddAsyncConfigFileEPKcS1_S1_ */
	void RemoveAsyncConfigFile(class CInputService *, int); /* linkage=_ZN13CInputService21RemoveAsyncConfigFileEi */
	bool FindAsyncCommand(class CInputService *, int, const char  *); /* linkage=_ZN13CInputService16FindAsyncCommandEiPKc */
	void ProcessAsyncConfigFiles(class CInputService *); /* linkage=_ZN13CInputService23ProcessAsyncConfigFilesEv */
	void FindBindingForType<ButtonCode_t>(class CInputService *, const char  *); /* linkage=_ZN13CInputService18FindBindingForTypeI12ButtonCode_tEEvPKc */
	void ListBoundKeysForType<ButtonCode_t>(class CInputService *); /* linkage=_ZN13CInputService20ListBoundKeysForTypeI12ButtonCode_tEEvv */
	const char  * FindSubstringMatchForType<ButtonCode_t>(class CInputService *, const char  *, int, int, int &); /* linkage=_ZN13CInputService25FindSubstringMatchForTypeI12ButtonCode_tEEPKcS3_iiRi */
	void WriteKeyBindingsForType<ButtonCode_t>(class CInputService *, class CUtlBuffer &, class KeyValues *); /* linkage=_ZN13CInputService23WriteKeyBindingsForTypeI12ButtonCode_tEEvR10CUtlBufferP9KeyValues */
	void UnbindAllKeysForType<ButtonCode_t>(class CInputService *); /* linkage=_ZN13CInputService20UnbindAllKeysForTypeI12ButtonCode_tEEvv */
	void ApplyBindings<ButtonCode_t>(class CInputService *, class KeyValues *, bool); /* linkage=_ZN13CInputService13ApplyBindingsI12ButtonCode_tEEvP9KeyValuesb */
	bool BindKeyHelper<ButtonCode_t>(class CInputService *, const char  *, const char  *); /* linkage=_ZN13CInputService13BindKeyHelperI12ButtonCode_tEEbPKcS3_ */
	void SetBindingForType<ButtonCode_t>(class CInputService *, enum ButtonCode_t, const char  *, bool); /* linkage=_ZN13CInputService17SetBindingForTypeI12ButtonCode_tEEvT_PKcb */
	/* <4d8280> engine2/inputservice.cpp:323 */
	const char  * GetSubkeyNameForType<ButtonCode_t>(const class CInputService  *); /* linkage=_ZNK13CInputService20GetSubkeyNameForTypeI12ButtonCode_tEEPKcv */
	enum ButtonCode_t GetInvalidCode<ButtonCode_t>(const class CInputService  *); /* linkage=_ZNK13CInputService14GetInvalidCodeI12ButtonCode_tEET_v */
	int GetCodeCount<ButtonCode_t>(const class CInputService  *); /* linkage=_ZNK13CInputService12GetCodeCountI12ButtonCode_tEEiv */
};

// <004C482A> engine2/inputservice.h:75
void KeyContext_t::~KeyContext_t()
{
} /* size: 0 */

// <004C480E> engine2/inputservice.h:75
inline void KeyContext_t::~KeyContext_t()
{
} /* size: 0 */

// <004D3C55> engine2/inputservice.h:77
void KeyContext_t::KeyContext_t()
{
} /* size: 0 */

// <004D3C3C> engine2/inputservice.h:77
inline void KeyContext_t::KeyContext_t()
{
} /* size: 0 */

// <004D3C25> engine2/inputservice.h:128
void CCommandMemberInitializer_ListBoundKeys::CCommandMemberInitializer_ListBoundKeys()
{
} /* size: 0 */

// <004D3C0C> engine2/inputservice.h:128
inline void CCommandMemberInitializer_ListBoundKeys::CCommandMemberInitializer_ListBoundKeys()
{
} /* size: 0 */

// <004C4A8E> engine2/inputservice.h:128
void CCommandMemberInitializer_ListBoundKeys::~CCommandMemberInitializer_ListBoundKeys()
{
} /* size: 0 */

// <004C4A72> engine2/inputservice.h:128
inline void CCommandMemberInitializer_ListBoundKeys::~CCommandMemberInitializer_ListBoundKeys()
{
} /* size: 0 */

// <004D3BF5> engine2/inputservice.h:129
void CCommandMemberInitializer_FindBinding::CCommandMemberInitializer_FindBinding()
{
} /* size: 0 */

// <004D3BDC> engine2/inputservice.h:129
inline void CCommandMemberInitializer_FindBinding::CCommandMemberInitializer_FindBinding()
{
} /* size: 0 */

// <004C4A5B> engine2/inputservice.h:129
void CCommandMemberInitializer_FindBinding::~CCommandMemberInitializer_FindBinding()
{
} /* size: 0 */

// <004C4A3F> engine2/inputservice.h:129
inline void CCommandMemberInitializer_FindBinding::~CCommandMemberInitializer_FindBinding()
{
} /* size: 0 */

// <004D3BC5> engine2/inputservice.h:130
void CCommandMemberInitializer_ExecConfigFile::CCommandMemberInitializer_ExecConfigFile()
{
} /* size: 0 */

// <004D3BAC> engine2/inputservice.h:130
inline void CCommandMemberInitializer_ExecConfigFile::CCommandMemberInitializer_ExecConfigFile()
{
} /* size: 0 */

// <004C4A28> engine2/inputservice.h:130
void CCommandMemberInitializer_ExecConfigFile::~CCommandMemberInitializer_ExecConfigFile()
{
} /* size: 0 */

// <004C4A0C> engine2/inputservice.h:130
inline void CCommandMemberInitializer_ExecConfigFile::~CCommandMemberInitializer_ExecConfigFile()
{
} /* size: 0 */

// <004D3B95> engine2/inputservice.h:131
void CCommandMemberInitializer_ExecConfigFileIfExists::CCommandMemberInitializer_ExecConfigFileIfExists()
{
} /* size: 0 */

// <004D3B7C> engine2/inputservice.h:131
inline void CCommandMemberInitializer_ExecConfigFileIfExists::CCommandMemberInitializer_ExecConfigFileIfExists()
{
} /* size: 0 */

// <004C49F5> engine2/inputservice.h:131
void CCommandMemberInitializer_ExecConfigFileIfExists::~CCommandMemberInitializer_ExecConfigFileIfExists()
{
} /* size: 0 */

// <004C49D9> engine2/inputservice.h:131
inline void CCommandMemberInitializer_ExecConfigFileIfExists::~CCommandMemberInitializer_ExecConfigFileIfExists()
{
} /* size: 0 */

// <004D3B65> engine2/inputservice.h:132
void CCommandMemberInitializer_ExecConfigFileAsync::CCommandMemberInitializer_ExecConfigFileAsync()
{
} /* size: 0 */

// <004D3B4C> engine2/inputservice.h:132
inline void CCommandMemberInitializer_ExecConfigFileAsync::CCommandMemberInitializer_ExecConfigFileAsync()
{
} /* size: 0 */

// <004C49C2> engine2/inputservice.h:132
void CCommandMemberInitializer_ExecConfigFileAsync::~CCommandMemberInitializer_ExecConfigFileAsync()
{
} /* size: 0 */

// <004C49A6> engine2/inputservice.h:132
inline void CCommandMemberInitializer_ExecConfigFileAsync::~CCommandMemberInitializer_ExecConfigFileAsync()
{
} /* size: 0 */

// <004D3B35> engine2/inputservice.h:133
void CCommandMemberInitializer_ExecPerfTest::CCommandMemberInitializer_ExecPerfTest()
{
} /* size: 0 */

// <004D3B1C> engine2/inputservice.h:133
inline void CCommandMemberInitializer_ExecPerfTest::CCommandMemberInitializer_ExecPerfTest()
{
} /* size: 0 */

// <004C498F> engine2/inputservice.h:133
void CCommandMemberInitializer_ExecPerfTest::~CCommandMemberInitializer_ExecPerfTest()
{
} /* size: 0 */

// <004C4973> engine2/inputservice.h:133
inline void CCommandMemberInitializer_ExecPerfTest::~CCommandMemberInitializer_ExecPerfTest()
{
} /* size: 0 */

// <004D3B05> engine2/inputservice.h:134
void CCommandMemberInitializer_BindKey::CCommandMemberInitializer_BindKey()
{
} /* size: 0 */

// <004D3AEC> engine2/inputservice.h:134
inline void CCommandMemberInitializer_BindKey::CCommandMemberInitializer_BindKey()
{
} /* size: 0 */

// <004C495C> engine2/inputservice.h:134
void CCommandMemberInitializer_BindKey::~CCommandMemberInitializer_BindKey()
{
} /* size: 0 */

// <004C4940> engine2/inputservice.h:134
inline void CCommandMemberInitializer_BindKey::~CCommandMemberInitializer_BindKey()
{
} /* size: 0 */

// <004D3AD5> engine2/inputservice.h:135
void CCommandMemberInitializer_UnbindAll::CCommandMemberInitializer_UnbindAll()
{
} /* size: 0 */

// <004D3ABC> engine2/inputservice.h:135
inline void CCommandMemberInitializer_UnbindAll::CCommandMemberInitializer_UnbindAll()
{
} /* size: 0 */

// <004C4929> engine2/inputservice.h:135
void CCommandMemberInitializer_UnbindAll::~CCommandMemberInitializer_UnbindAll()
{
} /* size: 0 */

// <004C490D> engine2/inputservice.h:135
inline void CCommandMemberInitializer_UnbindAll::~CCommandMemberInitializer_UnbindAll()
{
} /* size: 0 */

// <004D3AA5> engine2/inputservice.h:136
void CCommandMemberInitializer_Unbind::CCommandMemberInitializer_Unbind()
{
} /* size: 0 */

// <004D3A8C> engine2/inputservice.h:136
inline void CCommandMemberInitializer_Unbind::CCommandMemberInitializer_Unbind()
{
} /* size: 0 */

// <004C48F6> engine2/inputservice.h:136
void CCommandMemberInitializer_Unbind::~CCommandMemberInitializer_Unbind()
{
} /* size: 0 */

// <004C48DA> engine2/inputservice.h:136
inline void CCommandMemberInitializer_Unbind::~CCommandMemberInitializer_Unbind()
{
} /* size: 0 */

// <004D3A75> engine2/inputservice.h:137
void CCommandMemberInitializer_BindDefaults::CCommandMemberInitializer_BindDefaults()
{
} /* size: 0 */

// <004D3A5C> engine2/inputservice.h:137
inline void CCommandMemberInitializer_BindDefaults::CCommandMemberInitializer_BindDefaults()
{
} /* size: 0 */

// <004C48C3> engine2/inputservice.h:137
void CCommandMemberInitializer_BindDefaults::~CCommandMemberInitializer_BindDefaults()
{
} /* size: 0 */

// <004C48A7> engine2/inputservice.h:137
inline void CCommandMemberInitializer_BindDefaults::~CCommandMemberInitializer_BindDefaults()
{
} /* size: 0 */

// <004D3A45> engine2/inputservice.h:138
void CCommandMemberInitializer_OnWriteKeyBindings::CCommandMemberInitializer_OnWriteKeyBindings()
{
} /* size: 0 */

// <004D3A2C> engine2/inputservice.h:138
inline void CCommandMemberInitializer_OnWriteKeyBindings::CCommandMemberInitializer_OnWriteKeyBindings()
{
} /* size: 0 */

// <004C4890> engine2/inputservice.h:138
void CCommandMemberInitializer_OnWriteKeyBindings::~CCommandMemberInitializer_OnWriteKeyBindings()
{
} /* size: 0 */

// <004C4874> engine2/inputservice.h:138
inline void CCommandMemberInitializer_OnWriteKeyBindings::~CCommandMemberInitializer_OnWriteKeyBindings()
{
} /* size: 0 */

// <004D3A15> engine2/inputservice.h:139
void CCommandMemberInitializer_OnWriteConfig::CCommandMemberInitializer_OnWriteConfig()
{
} /* size: 0 */

// <004D39FC> engine2/inputservice.h:139
inline void CCommandMemberInitializer_OnWriteConfig::CCommandMemberInitializer_OnWriteConfig()
{
} /* size: 0 */

// <004C485D> engine2/inputservice.h:139
void CCommandMemberInitializer_OnWriteConfig::~CCommandMemberInitializer_OnWriteConfig()
{
} /* size: 0 */

// <004C4841> engine2/inputservice.h:139
inline void CCommandMemberInitializer_OnWriteConfig::~CCommandMemberInitializer_OnWriteConfig()
{
} /* size: 0 */

// <004AFBD9> engine2/inputservice.h:158
void AsyncConfigFile_t::~AsyncConfigFile_t()
{
} /* size: 0 */

// <004AFBBD> engine2/inputservice.h:158
inline void AsyncConfigFile_t::~AsyncConfigFile_t()
{
} /* size: 0 */

// <004D39B2> engine2/inputservice.h:164
void AsyncConfigFile_t::AsyncConfigFile_t()
{
} /* size: 0 */

// <004D3999> engine2/inputservice.h:164
inline void AsyncConfigFile_t::AsyncConfigFile_t()
{
} /* size: 0 */

// <004D397D> engine2/inputservice.h:170
void AsyncConfigFile_t::AsyncConfigFile_t(const AsyncConfigFile_t& other)
{
} /* size: 0 */

// <004D3958> engine2/inputservice.h:170
inline void AsyncConfigFile_t::AsyncConfigFile_t(const AsyncConfigFile_t& other)
{
} /* size: 0 */

// <004D3933> engine2/inputservice.h:178
inline void AsyncConfigFile_t::operator=(const AsyncConfigFile_t& other)
{
} /* size: 0 */

// <004D38EE> engine2/inputservice.h:208
// variables: 2
inline void CInputService::GetBindingInfo(ButtonCode_t code)
{
	const char   __FUNCTION__; // 37423
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 210
	}
} /* size: 0, variables: 1 */

// <004D38CE> engine2/inputservice.h:222
inline void CInputService::GetCodeCount<ButtonCode_t>()
{
} /* size: 0 */

// <004D38AE> engine2/inputservice.h:227
inline void CInputService::GetInvalidCode<ButtonCode_t>()
{
} /* size: 0 */

