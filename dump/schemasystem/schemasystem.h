
//
// schemasystem/schemasystem.h
//
//	referenced by: libschemasystem.so
//
//	functions: 132
//	classes: 13
//	structs: 4
//

// <0003FE2D> schemasystem/schemasystem.h:24
// member functions: 130
// member variables: 19
// vtable entries: 30
// class size: 26,224
class CSchemaSystem : public CTier2AppSystem<ISchemaSystem, 0> {
	/* schemasystem/schemasystem.h:144 */
	class CCommandMemberInitializer_Cmd_schema_list_bindings {
		/* schemasystem/schemasystem.h:144 */
		void CCommandMemberInitializer_Cmd_schema_list_bindings(CCommandMemberInitializer_Cmd_schema_list_bindings* );
	private:
		CConCommandMemberAccessor<CSchemaSystem> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_Cmd_schema_list_bindings(CCommandMemberInitializer_Cmd_schema_list_bindings* );
	};
	/* schemasystem/schemasystem.h:145 */
	class CCommandMemberInitializer_Cmd_schema_all_list_bindings {
		/* schemasystem/schemasystem.h:145 */
		void CCommandMemberInitializer_Cmd_schema_all_list_bindings(CCommandMemberInitializer_Cmd_schema_all_list_bindings* );
	private:
		CConCommandMemberAccessor<CSchemaSystem> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_Cmd_schema_all_list_bindings(CCommandMemberInitializer_Cmd_schema_all_list_bindings* );
	};
	/* schemasystem/schemasystem.h:146 */
	class CCommandMemberInitializer_Cmd_schema_dump_binding {
		/* schemasystem/schemasystem.h:146 */
		void CCommandMemberInitializer_Cmd_schema_dump_binding(CCommandMemberInitializer_Cmd_schema_dump_binding* );
	private:
		CConCommandMemberAccessor<CSchemaSystem> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_Cmd_schema_dump_binding(CCommandMemberInitializer_Cmd_schema_dump_binding* );
	};
	/* schemasystem/schemasystem.h:147 */
	class CCommandMemberInitializer_Cmd_schema_detailed_class_layout {
		/* schemasystem/schemasystem.h:147 */
		void CCommandMemberInitializer_Cmd_schema_detailed_class_layout(CCommandMemberInitializer_Cmd_schema_detailed_class_layout* );
	private:
		CConCommandMemberAccessor<CSchemaSystem> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_Cmd_schema_detailed_class_layout(CCommandMemberInitializer_Cmd_schema_detailed_class_layout* );
	};
	/* schemasystem/schemasystem.h:148 */
	class CCommandMemberInitializer_Cmd_schema_stats {
		/* schemasystem/schemasystem.h:148 */
		void CCommandMemberInitializer_Cmd_schema_stats(CCommandMemberInitializer_Cmd_schema_stats* );
	private:
		CConCommandMemberAccessor<CSchemaSystem> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_Cmd_schema_stats(CCommandMemberInitializer_Cmd_schema_stats* );
	};
	/* schemasystem/schemasystem.h:149 */
	class CCommandMemberInitializer_Cmd_schema_meta_stats {
		/* schemasystem/schemasystem.h:149 */
		void CCommandMemberInitializer_Cmd_schema_meta_stats(CCommandMemberInitializer_Cmd_schema_meta_stats* );
	private:
		CConCommandMemberAccessor<CSchemaSystem> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_Cmd_schema_meta_stats(CCommandMemberInitializer_Cmd_schema_meta_stats* );
	};
	/* schemasystem/schemasystem.h:159 */
	struct DetectedSchemaMismatch_t {
		CUtlString m_BindingName; /* 0 8 */
		CUtlString m_MismatchDescription; /* 8 8 */
		CUtlString m_ExistingSource; /* 16 8 */
		CUtlString m_NewSource; /* 24 8 */
		void ~DetectedSchemaMismatch_t(DetectedSchemaMismatch_t* );
		void DetectedSchemaMismatch_t(DetectedSchemaMismatch_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* schemasystem/schemasystem.h:180 */
	struct BindingRange_t {
		uintp m_nMinBinding; /* 0 8 */
		uintp m_nMaxBinding; /* 8 8 */
		/* schemasystem/schemasystem.h:185 */
		void BindingRange_t(BindingRange_t* );
		/* schemasystem/schemasystem.h:194 */
		void Add(BindingRange_t* , uintp);
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CTier2AppSystem<ISchemaSystem, 0> <ancestor>; */ /* 0 48 */
	void CSchemaSystem(CSchemaSystem* , const CSchemaSystem& );
	/* schemasystem/schemasystem.cpp:92 */
	virtual InitReturnVal_t Init(CSchemaSystem* );
	/* schemasystem/schemasystem.cpp:103 */
	virtual void Shutdown(CSchemaSystem* );
	/* schemasystem/schemasystem.cpp:77 */
	virtual const AppSystemInfo_t* GetDependencies(CSchemaSystem* );
	/* schemasystem/schemasystem.cpp:82 */
	virtual bool Connect(CSchemaSystem* , CreateInterfaceFn);
	/* schemasystem/schemasystem.cpp:642 */
	virtual void LoadSchemaDataForModules(CSchemaSystem* , const char** , int);
	/* schemasystem/schemasystem.cpp:723 */
	virtual const char* FindClassBindingBinaryName(CSchemaSystem* , const CSchemaClassInfo* );
	/* schemasystem/schemasystem.cpp:728 */
	virtual const char* FindClassBindingProjectName(CSchemaSystem* , const CSchemaClassInfo* );
	/* schemasystem/schemasystem.cpp:735 */
	virtual const char* FindEnumBindingBinaryName(CSchemaSystem* , const CSchemaEnumInfo* );
	/* schemasystem/schemasystem.cpp:740 */
	virtual const char* FindEnumBindingProjectName(CSchemaSystem* , const CSchemaEnumInfo* );
	/* schemasystem/schemasystem.h:45 */
	virtual void VerifySchemaBindingConsistency(CSchemaSystem* , bool);
	/* schemasystem/schemasystem.cpp:801 */
	virtual ISchemaSystemTypeScope* GlobalTypeScope(CSchemaSystem* );
	/* schemasystem/schemasystem.cpp:809 */
	virtual ISchemaSystemTypeScope* FindTypeScopeForModule(CSchemaSystem* , const char* );
	/* schemasystem/schemasystem.cpp:825 */
	virtual ISchemaSystemTypeScope* FindOrCreateTypeScopeForModule(CSchemaSystem* , const char* );
	/* schemasystem/schemasystem.cpp:840 */
	virtual ISchemaSystemTypeScope* GetTypeScopeForBinding(CSchemaSystem* , SchemaTypeScope_t, const char* );
	/* schemasystem/schemasystem.h:52 */
	virtual bool SchemaSystemIsReady(CSchemaSystem* );
	/* schemasystem/schemasystem.cpp:2046 */
	virtual const CSchemaClassInfo* GetNoSchemaClassInfo(CSchemaSystem* );
	/* schemasystem/schemasystem.cpp:1831 */
	virtual void RegisterAtomicType(CSchemaSystem* , AtomicTypeIntrospectionHandle_t);
	/* schemasystem/schemasystem.cpp:1839 */
	virtual void CompleteModuleRegistration(CSchemaSystem* , const char* );
	/* schemasystem/schemasystem.cpp:865 */
	virtual ClassIntrospectionHandle_t FindClassByScopedName(CSchemaSystem* , const char* );
	/* schemasystem/schemasystem.cpp:892 */
	virtual void ScopedNameForClass(CSchemaSystem* , ClassIntrospectionHandle_t, char* , int);
	/* schemasystem/schemasystem.cpp:907 */
	virtual EnumIntrospectionHandle_t FindEnumByScopedName(CSchemaSystem* , const char* );
	/* schemasystem/schemasystem.cpp:934 */
	virtual void ScopedNameForEnum(CSchemaSystem* , EnumIntrospectionHandle_t, char* , int);
	/* schemasystem/schemasystem.cpp:949 */
	virtual void FindDescendentsOfClass(CSchemaSystem* , ClassIntrospectionHandle_t, SchemaSubclassTraversalDepth_t, CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> >* );
	/* schemasystem/schemasystem.h:68 */
	virtual void DumpStats(CSchemaSystem* , const char* );
	/* schemasystem/schemasystem.h:69 */
	virtual void DumpMetaStats(CSchemaSystem* , const char* );
	/* schemasystem/schemasystem.cpp:578 */
	virtual void RegisterAtomics(CSchemaSystem* , const char* , const char* , CSchemaType** , int, SchemaAtomicTypeInfo_t* const* );
	/* schemasystem/schemasystem.cpp:591 */
	virtual void RegisterEnums(CSchemaSystem* , const char* , const char* , CSchemaType** , int, SchemaEnumInfoData_t* const* );
	/* schemasystem/schemasystem.cpp:606 */
	virtual bool RegisterClasses(CSchemaSystem* , const char* , const char* , CSchemaType** , int, SchemaClassInfoData_t* const* , CBufferString* );
	/* schemasystem/schemasystem.cpp:632 */
	virtual void ValidateClasses(CSchemaSystem* , SchemaClassInfoData_t* const* );
	/* schemasystem/schemasystem.h:89 */
	virtual bool ConvertOldIntrospectedResourceDataToKV3(CSchemaSystem* , const void* , size_t, const ResourceFileHeader_t* , CKeyValues3Context* , const char* );
	/* schemasystem/schemasystem.cpp:43 */
	void CSchemaSystem(CSchemaSystem* );
	/* schemasystem/schemasystem.cpp:65 */
	virtual void ~CSchemaSystem(CSchemaSystem* );
	/* schemasystem/schemasystem.cpp:111 */
	void LogNotEqualMismatch(CSchemaSystem* , SchemaBaseBindingInfo_t& , SchemaBaseBindingInfo_t& , const char* );
	/* schemasystem/schemasystem.h:98 */
	void GetBaseBindings(CSchemaSystem* , CSchemaSystemTypeScope* , const char* , CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >* , int* , int* , uint32);
	/* schemasystem/schemasystem.h:104 */
	bool FindBaseBinding(CSchemaSystem* , const char* , SchemaBaseBindingInfo_t* , uint32);
	/* schemasystem/schemasystem.h:108 */
	void DumpBaseBindings(CSchemaSystem* , const char* , CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >* , int, int);
	/* schemasystem/schemasystem.h:109 */
	void DumpBaseBinding(CSchemaSystem* , const SchemaBaseBindingInfo_t* );
	/* schemasystem/schemasystem.h:110 */
	void DumpDetailedClassLayout(CSchemaSystem* , const CSchemaClassInfo* );
	/* schemasystem/schemasystem.h:112 */
	void ConCmdDumpBindings(CSchemaSystem* , const char* , CSchemaSystemTypeScope* , const char* );
	/* schemasystem/schemasystem.h:113 */
	void ConCmdDumpBinding(CSchemaSystem* , const char* );
	/* schemasystem/schemasystem.h:114 */
	void ConCmdDetailedClassLayout(CSchemaSystem* , const char* );
	/* schemasystem/schemasystem.h:115 */
	void ConCmdStats(CSchemaSystem* );
	/* schemasystem/schemasystem.cpp:2013 */
	void TrackBindingInBinary(CSchemaSystem* , uintp, const char* );
	/* schemasystem/schemasystem.cpp:2028 */
	const char* FindBindingBinary(CSchemaSystem* , uintp);
	CThreadFastMutex m_TypeResolutionMutex; /* 48 24 */
private:
	/* schemasystem/schemasystem.h:144 */
	void Cmd_schema_list_bindings(CSchemaSystem* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_Cmd_schema_list_bindings m_Cmd_schema_list_bindings_register; /* 72 160 */
	/* schemasystem/schemasystem.h:145 */
	void Cmd_schema_all_list_bindings(CSchemaSystem* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_Cmd_schema_all_list_bindings m_Cmd_schema_all_list_bindings_register; /* 232 160 */
	/* schemasystem/schemasystem.h:146 */
	void Cmd_schema_dump_binding(CSchemaSystem* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_Cmd_schema_dump_binding m_Cmd_schema_dump_binding_register; /* 392 160 */
	/* schemasystem/schemasystem.h:147 */
	void Cmd_schema_detailed_class_layout(CSchemaSystem* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_Cmd_schema_detailed_class_layout m_Cmd_schema_detailed_class_layout_register; /* 552 160 */
	/* schemasystem/schemasystem.h:148 */
	void Cmd_schema_stats(CSchemaSystem* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_Cmd_schema_stats m_Cmd_schema_stats_register; /* 712 160 */
	/* schemasystem/schemasystem.h:149 */
	void Cmd_schema_meta_stats(CSchemaSystem* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_Cmd_schema_meta_stats m_Cmd_schema_meta_stats_register; /* 872 160 */
	/* schemasystem/schemasystem.h:152 */
	void InitializeBuiltinTypes(CSchemaSystem* );
	/* schemasystem/schemasystem.cpp:713 */
	void UnloadModulesLoadedForSchemaData(CSchemaSystem* );
	CUtlVector<_PlatModule_t*, CUtlMemory<_PlatModule_t*, int> > m_ModulesLoadedForSchemaData; /* 1032 32 */
	CUtlVector<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> > m_PendingMismatches; /* 1064 32 */
	/* schemasystem/schemasystem.h:167 */
	void DoMismatchDialog(CSchemaSystem* );
	/* schemasystem/schemasystem.h:168 */
	CUtlString MismatchToString(CSchemaSystem* , const DetectedSchemaMismatch_t& );
	/* schemasystem/schemasystem.h:170 */
	typedef struct CUtlTSHash<CSchemaClassInfoSynth*, 256, const CSchemaClassInfo*, CUtlTSHashGenericHashMethod<const CSchemaClassInfo*> > SynthClassTable_t;
	SynthClassTable_t m_SynthClasses __attribute__((__aligned__(16))); /* 1104 12368 */
	/* schemasystem/schemasystem.h:173 */
	typedef struct CUtlTSHash<CSchemaEnumInfoSynth*, 256, const CSchemaEnumInfo*, CUtlTSHashGenericHashMethod<const CSchemaEnumInfo*> > SynthEnumTable_t;
	SynthEnumTable_t m_SynthEnums __attribute__((__aligned__(16))); /* 13472 12368 */
	bool m_bIsReady; /* 25840 1 */
	CUtlStringMap<CSchemaSystemTypeScope*, CUtlSymbolTable> m_ModuleTypeScopes; /* 25848 176 */
	CUtlStringMap<CSchemaSystem::BindingRange_t, CUtlSymbolTable> m_BindingBinaries; /* 26024 176 */
	uint32 m_nNumRegistrations; /* 26200 4 */
	uint32 m_nNumIgnoredRegistrations; /* 26204 4 */
	uint32 m_nNumRedundantRegistrations; /* 26208 4 */
	size_t m_nBytesIgnoredRegistrations; /* 26216 8 */
	/* schemasystem/schemasystem.h:121 */
	void ReportBindingRegistration<CSchemaEnumInfo>(CSchemaSystem* , CSchemaEnumInfo* , CSchemaEnumInfo* , const char* );
	/* schemasystem/schemasystem.h:121 */
	void ReportBindingRegistration<CSchemaClassInfo>(CSchemaSystem* , CSchemaClassInfo* , CSchemaClassInfo* , const char* );
	virtual void VerifySchemaBindingConsistency(class CSchemaSystem *, bool); /* linkage=_ZN13CSchemaSystem30VerifySchemaBindingConsistencyEb */
	void DoMismatchDialog(class CSchemaSystem *); /* linkage=_ZN13CSchemaSystem16DoMismatchDialogEv */
	/* <11483> schemasystem/schemamismatchreport.cpp:27 */
	class CUtlString MismatchToString(class CSchemaSystem *, const class DetectedSchemaMismatch_t  &); /* linkage=_ZN13CSchemaSystem16MismatchToStringERKNS_24DetectedSchemaMismatch_tE */
	void CSchemaSystem(class CSchemaSystem *, const class CSchemaSystem  &); /* linkage=_ZN13CSchemaSystemC4ERKS_ */
	virtual enum InitReturnVal_t Init(class CSchemaSystem *); /* linkage=_ZN13CSchemaSystem4InitEv */
	virtual void Shutdown(class CSchemaSystem *); /* linkage=_ZN13CSchemaSystem8ShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CSchemaSystem *); /* linkage=_ZN13CSchemaSystem15GetDependenciesEv */
	virtual bool Connect(class CSchemaSystem *, CreateInterfaceFn); /* linkage=_ZN13CSchemaSystem7ConnectEPFPvPKcPiE */
	virtual void LoadSchemaDataForModules(class CSchemaSystem *, const char  * *, int); /* linkage=_ZN13CSchemaSystem24LoadSchemaDataForModulesEPPKci */
	/* <106df6> schemasystem/schemasystem.cpp:723 */
	virtual const char  * FindClassBindingBinaryName(class CSchemaSystem *, const class CSchemaClassInfo  *); /* linkage=_ZN13CSchemaSystem26FindClassBindingBinaryNameEPK16CSchemaClassInfo */
	/* <104a36> schemasystem/schemasystem.cpp:728 */
	virtual const char  * FindClassBindingProjectName(class CSchemaSystem *, const class CSchemaClassInfo  *); /* linkage=_ZN13CSchemaSystem27FindClassBindingProjectNameEPK16CSchemaClassInfo */
	virtual const char  * FindEnumBindingBinaryName(class CSchemaSystem *, const class CSchemaEnumInfo  *); /* linkage=_ZN13CSchemaSystem25FindEnumBindingBinaryNameEPK15CSchemaEnumInfo */
	/* <104a67> schemasystem/schemasystem.cpp:740 */
	virtual const char  * FindEnumBindingProjectName(class CSchemaSystem *, const class CSchemaEnumInfo  *); /* linkage=_ZN13CSchemaSystem26FindEnumBindingProjectNameEPK15CSchemaEnumInfo */
	/* <104a98> schemasystem/schemasystem.cpp:801 */
	virtual class ISchemaSystemTypeScope * GlobalTypeScope(class CSchemaSystem *); /* linkage=_ZN13CSchemaSystem15GlobalTypeScopeEv */
	/* <1053d6> schemasystem/schemasystem.cpp:809 */
	virtual class ISchemaSystemTypeScope * FindTypeScopeForModule(class CSchemaSystem *, const char  *); /* linkage=_ZN13CSchemaSystem22FindTypeScopeForModuleEPKc */
	virtual class ISchemaSystemTypeScope * FindOrCreateTypeScopeForModule(class CSchemaSystem *, const char  *); /* linkage=_ZN13CSchemaSystem30FindOrCreateTypeScopeForModuleEPKc */
	/* <104da1> schemasystem/schemasystem.cpp:840 */
	virtual class ISchemaSystemTypeScope * GetTypeScopeForBinding(class CSchemaSystem *, enum SchemaTypeScope_t, const char  *); /* linkage=_ZN13CSchemaSystem22GetTypeScopeForBindingE17SchemaTypeScope_tPKc */
	virtual bool SchemaSystemIsReady(class CSchemaSystem *); /* linkage=_ZN13CSchemaSystem19SchemaSystemIsReadyEv */
	virtual const class CSchemaClassInfo  * GetNoSchemaClassInfo(class CSchemaSystem *); /* linkage=_ZN13CSchemaSystem20GetNoSchemaClassInfoEv */
	/* <111593> schemasystem/schemasystem.cpp:1831 */
	virtual void RegisterAtomicType(class CSchemaSystem *, AtomicTypeIntrospectionHandle_t); /* linkage=_ZN13CSchemaSystem18RegisterAtomicTypeEPK22SchemaAtomicTypeInfo_t */
	virtual void CompleteModuleRegistration(class CSchemaSystem *, const char  *); /* linkage=_ZN13CSchemaSystem26CompleteModuleRegistrationEPKc */
	virtual ClassIntrospectionHandle_t FindClassByScopedName(class CSchemaSystem *, const char  *); /* linkage=_ZN13CSchemaSystem21FindClassByScopedNameEPKc */
	/* <10512a> schemasystem/schemasystem.cpp:892 */
	virtual void ScopedNameForClass(class CSchemaSystem *, ClassIntrospectionHandle_t, char *, int); /* linkage=_ZN13CSchemaSystem18ScopedNameForClassEPK16CSchemaClassInfoPci */
	virtual EnumIntrospectionHandle_t FindEnumByScopedName(class CSchemaSystem *, const char  *); /* linkage=_ZN13CSchemaSystem20FindEnumByScopedNameEPKc */
	/* <104f58> schemasystem/schemasystem.cpp:934 */
	virtual void ScopedNameForEnum(class CSchemaSystem *, EnumIntrospectionHandle_t, char *, int); /* linkage=_ZN13CSchemaSystem17ScopedNameForEnumEPK15CSchemaEnumInfoPci */
	/* <10681e> schemasystem/schemasystem.cpp:949 */
	virtual void FindDescendentsOfClass(class CSchemaSystem *, ClassIntrospectionHandle_t, enum SchemaSubclassTraversalDepth_t, class CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *); /* linkage=_ZN13CSchemaSystem22FindDescendentsOfClassEPK16CSchemaClassInfo30SchemaSubclassTraversalDepth_tP10CUtlVectorIS2_10CUtlMemoryIS2_iEE */
	virtual void DumpStats(class CSchemaSystem *, const char  *); /* linkage=_ZN13CSchemaSystem9DumpStatsEPKc */
	virtual void DumpMetaStats(class CSchemaSystem *, const char  *); /* linkage=_ZN13CSchemaSystem13DumpMetaStatsEPKc */
	virtual void RegisterAtomics(class CSchemaSystem *, const char  *, const char  *, class CSchemaType * *, int, class SchemaAtomicTypeInfo_t * const *); /* linkage=_ZN13CSchemaSystem15RegisterAtomicsEPKcS1_PP11CSchemaTypeiPKP22SchemaAtomicTypeInfo_t */
	virtual void RegisterEnums(class CSchemaSystem *, const char  *, const char  *, class CSchemaType * *, int, class SchemaEnumInfoData_t * const *); /* linkage=_ZN13CSchemaSystem13RegisterEnumsEPKcS1_PP11CSchemaTypeiPKP20SchemaEnumInfoData_t */
	virtual bool RegisterClasses(class CSchemaSystem *, const char  *, const char  *, class CSchemaType * *, int, class SchemaClassInfoData_t * const *, class CBufferString *); /* linkage=_ZN13CSchemaSystem15RegisterClassesEPKcS1_PP11CSchemaTypeiPKP21SchemaClassInfoData_tP13CBufferString */
	virtual void ValidateClasses(class CSchemaSystem *, class SchemaClassInfoData_t * const *); /* linkage=_ZN13CSchemaSystem15ValidateClassesEPKP21SchemaClassInfoData_t */
	virtual bool ConvertOldIntrospectedResourceDataToKV3(class CSchemaSystem *, const void  *, size_t, const class ResourceFileHeader_t  *, class CKeyValues3Context *, const char  *); /* linkage=_ZN13CSchemaSystem39ConvertOldIntrospectedResourceDataToKV3EPKvmPK20ResourceFileHeader_tP18CKeyValues3ContextPKc */
	void CSchemaSystem(class CSchemaSystem *); /* linkage=_ZN13CSchemaSystemC4Ev */
	virtual void ~CSchemaSystem(class CSchemaSystem *); /* linkage=_ZN13CSchemaSystemD4Ev */
	void LogNotEqualMismatch(class CSchemaSystem *, class SchemaBaseBindingInfo_t &, class SchemaBaseBindingInfo_t &, const char  *); /* linkage=_ZN13CSchemaSystem19LogNotEqualMismatchER23SchemaBaseBindingInfo_tS1_PKc */
	void GetBaseBindings(class CSchemaSystem *, class CSchemaSystemTypeScope *, const char  *, class CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> > *, int *, int *, uint32); /* linkage=_ZN13CSchemaSystem15GetBaseBindingsEP22CSchemaSystemTypeScopePKcP10CUtlVectorI23SchemaBaseBindingInfo_t10CUtlMemoryIS5_iEEPiSA_j */
	bool FindBaseBinding(class CSchemaSystem *, const char  *, class SchemaBaseBindingInfo_t *, uint32); /* linkage=_ZN13CSchemaSystem15FindBaseBindingEPKcP23SchemaBaseBindingInfo_tj */
	void DumpBaseBindings(class CSchemaSystem *, const char  *, class CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> > *, int, int); /* linkage=_ZN13CSchemaSystem16DumpBaseBindingsEPKcP10CUtlVectorI23SchemaBaseBindingInfo_t10CUtlMemoryIS3_iEEii */
	void DumpBaseBinding(class CSchemaSystem *, const class SchemaBaseBindingInfo_t  *); /* linkage=_ZN13CSchemaSystem15DumpBaseBindingEPK23SchemaBaseBindingInfo_t */
	void DumpDetailedClassLayout(class CSchemaSystem *, const class CSchemaClassInfo  *); /* linkage=_ZN13CSchemaSystem23DumpDetailedClassLayoutEPK16CSchemaClassInfo */
	void ConCmdDumpBindings(class CSchemaSystem *, const char  *, class CSchemaSystemTypeScope *, const char  *); /* linkage=_ZN13CSchemaSystem18ConCmdDumpBindingsEPKcP22CSchemaSystemTypeScopeS1_ */
	/* <13bbd0> schemasystem/schemaconcommands.cpp:436 */
	void ConCmdDumpBinding(class CSchemaSystem *, const char  *); /* linkage=_ZN13CSchemaSystem17ConCmdDumpBindingEPKc */
	void ConCmdDetailedClassLayout(class CSchemaSystem *, const char  *); /* linkage=_ZN13CSchemaSystem25ConCmdDetailedClassLayoutEPKc */
	void ConCmdStats(class CSchemaSystem *); /* linkage=_ZN13CSchemaSystem11ConCmdStatsEv */
	void TrackBindingInBinary(class CSchemaSystem *, uintp, const char  *); /* linkage=_ZN13CSchemaSystem20TrackBindingInBinaryEyPKc */
	const char  * FindBindingBinary(class CSchemaSystem *, uintp); /* linkage=_ZN13CSchemaSystem17FindBindingBinaryEy */
	void Cmd_schema_list_bindings(class CSchemaSystem *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CSchemaSystem24Cmd_schema_list_bindingsERK15CCommandContextRK8CCommand */
	void Cmd_schema_all_list_bindings(class CSchemaSystem *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CSchemaSystem28Cmd_schema_all_list_bindingsERK15CCommandContextRK8CCommand */
	void Cmd_schema_dump_binding(class CSchemaSystem *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CSchemaSystem23Cmd_schema_dump_bindingERK15CCommandContextRK8CCommand */
	void Cmd_schema_detailed_class_layout(class CSchemaSystem *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CSchemaSystem32Cmd_schema_detailed_class_layoutERK15CCommandContextRK8CCommand */
	void Cmd_schema_stats(class CSchemaSystem *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CSchemaSystem16Cmd_schema_statsERK15CCommandContextRK8CCommand */
	void Cmd_schema_meta_stats(class CSchemaSystem *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CSchemaSystem21Cmd_schema_meta_statsERK15CCommandContextRK8CCommand */
	void InitializeBuiltinTypes(class CSchemaSystem *); /* linkage=_ZN13CSchemaSystem22InitializeBuiltinTypesEv */
	/* <1066fd> schemasystem/schemasystem.cpp:713 */
	void UnloadModulesLoadedForSchemaData(class CSchemaSystem *); /* linkage=_ZN13CSchemaSystem32UnloadModulesLoadedForSchemaDataEv */
	void ReportBindingRegistration<CSchemaEnumInfo>(class CSchemaSystem *, class CSchemaEnumInfo *, class CSchemaEnumInfo *, const char  *); /* linkage=_ZN13CSchemaSystem25ReportBindingRegistrationI15CSchemaEnumInfoEEvPT_S3_PKc */
	void ReportBindingRegistration<CSchemaClassInfo>(class CSchemaSystem *, class CSchemaClassInfo *, class CSchemaClassInfo *, const char  *); /* linkage=_ZN13CSchemaSystem25ReportBindingRegistrationI16CSchemaClassInfoEEvPT_S3_PKc */
} __attribute__((__aligned__(16)));

// <00101DDA> schemasystem/schemasystem.h:52
void CSchemaSystem::SchemaSystemIsReady()
{
} /* size: 12 */

// <000D93A1> schemasystem/schemasystem.h:121
inline void CSchemaSystem::ReportBindingRegistration<CSchemaClassInfo>(CSchemaClassInfo* pBinding, CSchemaClassInfo* pRegisteredBinding, const char* pBinaryName)
{
} /* size: 0 */

// <000D935C> schemasystem/schemasystem.h:121
inline void CSchemaSystem::ReportBindingRegistration<CSchemaEnumInfo>(CSchemaEnumInfo* pBinding, CSchemaEnumInfo* pRegisteredBinding, const char* pBinaryName)
{
} /* size: 0 */

// <00101DC3> schemasystem/schemasystem.h:144
void CCommandMemberInitializer_Cmd_schema_list_bindings::CCommandMemberInitializer_Cmd_schema_list_bindings()
{
} /* size: 0 */

// <00101DAA> schemasystem/schemasystem.h:144
inline void CCommandMemberInitializer_Cmd_schema_list_bindings::CCommandMemberInitializer_Cmd_schema_list_bindings()
{
} /* size: 0 */

// <0010190C> schemasystem/schemasystem.h:144
void CCommandMemberInitializer_Cmd_schema_list_bindings::~CCommandMemberInitializer_Cmd_schema_list_bindings()
{
} /* size: 0 */

// <001018F0> schemasystem/schemasystem.h:144
inline void CCommandMemberInitializer_Cmd_schema_list_bindings::~CCommandMemberInitializer_Cmd_schema_list_bindings()
{
} /* size: 0 */

// <00101D93> schemasystem/schemasystem.h:145
void CCommandMemberInitializer_Cmd_schema_all_list_bindings::CCommandMemberInitializer_Cmd_schema_all_list_bindings()
{
} /* size: 0 */

// <00101D7A> schemasystem/schemasystem.h:145
inline void CCommandMemberInitializer_Cmd_schema_all_list_bindings::CCommandMemberInitializer_Cmd_schema_all_list_bindings()
{
} /* size: 0 */

// <001018D9> schemasystem/schemasystem.h:145
void CCommandMemberInitializer_Cmd_schema_all_list_bindings::~CCommandMemberInitializer_Cmd_schema_all_list_bindings()
{
} /* size: 0 */

// <001018BD> schemasystem/schemasystem.h:145
inline void CCommandMemberInitializer_Cmd_schema_all_list_bindings::~CCommandMemberInitializer_Cmd_schema_all_list_bindings()
{
} /* size: 0 */

// <00101D63> schemasystem/schemasystem.h:146
void CCommandMemberInitializer_Cmd_schema_dump_binding::CCommandMemberInitializer_Cmd_schema_dump_binding()
{
} /* size: 0 */

// <00101D4A> schemasystem/schemasystem.h:146
inline void CCommandMemberInitializer_Cmd_schema_dump_binding::CCommandMemberInitializer_Cmd_schema_dump_binding()
{
} /* size: 0 */

// <001018A6> schemasystem/schemasystem.h:146
void CCommandMemberInitializer_Cmd_schema_dump_binding::~CCommandMemberInitializer_Cmd_schema_dump_binding()
{
} /* size: 0 */

// <0010188A> schemasystem/schemasystem.h:146
inline void CCommandMemberInitializer_Cmd_schema_dump_binding::~CCommandMemberInitializer_Cmd_schema_dump_binding()
{
} /* size: 0 */

// <00101D33> schemasystem/schemasystem.h:147
void CCommandMemberInitializer_Cmd_schema_detailed_class_layout::CCommandMemberInitializer_Cmd_schema_detailed_class_layout()
{
} /* size: 0 */

// <00101D1A> schemasystem/schemasystem.h:147
inline void CCommandMemberInitializer_Cmd_schema_detailed_class_layout::CCommandMemberInitializer_Cmd_schema_detailed_class_layout()
{
} /* size: 0 */

// <00101873> schemasystem/schemasystem.h:147
void CCommandMemberInitializer_Cmd_schema_detailed_class_layout::~CCommandMemberInitializer_Cmd_schema_detailed_class_layout()
{
} /* size: 0 */

// <00101857> schemasystem/schemasystem.h:147
inline void CCommandMemberInitializer_Cmd_schema_detailed_class_layout::~CCommandMemberInitializer_Cmd_schema_detailed_class_layout()
{
} /* size: 0 */

// <00101D03> schemasystem/schemasystem.h:148
void CCommandMemberInitializer_Cmd_schema_stats::CCommandMemberInitializer_Cmd_schema_stats()
{
} /* size: 0 */

// <00101CEA> schemasystem/schemasystem.h:148
inline void CCommandMemberInitializer_Cmd_schema_stats::CCommandMemberInitializer_Cmd_schema_stats()
{
} /* size: 0 */

// <00101840> schemasystem/schemasystem.h:148
void CCommandMemberInitializer_Cmd_schema_stats::~CCommandMemberInitializer_Cmd_schema_stats()
{
} /* size: 0 */

// <00101824> schemasystem/schemasystem.h:148
inline void CCommandMemberInitializer_Cmd_schema_stats::~CCommandMemberInitializer_Cmd_schema_stats()
{
} /* size: 0 */

// <00101CD3> schemasystem/schemasystem.h:149
void CCommandMemberInitializer_Cmd_schema_meta_stats::CCommandMemberInitializer_Cmd_schema_meta_stats()
{
} /* size: 0 */

// <00101CBA> schemasystem/schemasystem.h:149
inline void CCommandMemberInitializer_Cmd_schema_meta_stats::CCommandMemberInitializer_Cmd_schema_meta_stats()
{
} /* size: 0 */

// <0010180D> schemasystem/schemasystem.h:149
void CCommandMemberInitializer_Cmd_schema_meta_stats::~CCommandMemberInitializer_Cmd_schema_meta_stats()
{
} /* size: 0 */

// <001017F1> schemasystem/schemasystem.h:149
inline void CCommandMemberInitializer_Cmd_schema_meta_stats::~CCommandMemberInitializer_Cmd_schema_meta_stats()
{
} /* size: 0 */

// <000CFC94> schemasystem/schemasystem.h:159
void DetectedSchemaMismatch_t::DetectedSchemaMismatch_t()
{
} /* size: 0 */

// <000CFC78> schemasystem/schemasystem.h:159
inline void DetectedSchemaMismatch_t::DetectedSchemaMismatch_t()
{
} /* size: 0 */

// <000C3015> schemasystem/schemasystem.h:159
void DetectedSchemaMismatch_t::~DetectedSchemaMismatch_t()
{
} /* size: 0 */

// <000C2FF9> schemasystem/schemasystem.h:159
inline void DetectedSchemaMismatch_t::~DetectedSchemaMismatch_t()
{
} /* size: 0 */

// <00101CA3> schemasystem/schemasystem.h:185
void BindingRange_t::BindingRange_t()
{
} /* size: 0 */

// <00101C8A> schemasystem/schemasystem.h:185
inline void BindingRange_t::BindingRange_t()
{
} /* size: 0 */

// <00101C65> schemasystem/schemasystem.h:194
inline void BindingRange_t::Add(uintp pBinding)
{
} /* size: 0 */

// <000F6A0B> schemasystem/schemasystem.h:222
void CSchemaPtrMap<CSchemaType::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F69EF> schemasystem/schemasystem.h:222
inline void CSchemaPtrMap<CSchemaType::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F69A5> schemasystem/schemasystem.h:222
void CSchemaPtrMap<int, CSchemaType_Atomic::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F6989> schemasystem/schemasystem.h:222
inline void CSchemaPtrMap<int, CSchemaType_Atomic::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F693F> schemasystem/schemasystem.h:222
void CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F6923> schemasystem/schemasystem.h:222
inline void CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F68D9> schemasystem/schemasystem.h:222
void CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F68BD> schemasystem/schemasystem.h:222
inline void CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F6873> schemasystem/schemasystem.h:222
void CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F6857> schemasystem/schemasystem.h:222
inline void CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F680D> schemasystem/schemasystem.h:222
void CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F67F1> schemasystem/schemasystem.h:222
inline void CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F67A7> schemasystem/schemasystem.h:222
void CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F678B> schemasystem/schemasystem.h:222
inline void CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F6741> schemasystem/schemasystem.h:222
void CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F6725> schemasystem/schemasystem.h:222
inline void CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F66DB> schemasystem/schemasystem.h:222
void CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F66BF> schemasystem/schemasystem.h:222
inline void CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F6675> schemasystem/schemasystem.h:222
void CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F6659> schemasystem/schemasystem.h:222
inline void CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F660F> schemasystem/schemasystem.h:222
void CSchemaPtrMap<int, CSchemaType_Bitfield::~CSchemaPtrMap()
{
} /* size: 0 */

// <000F65F3> schemasystem/schemasystem.h:222
inline void CSchemaPtrMap<int, CSchemaType_Bitfield::~CSchemaPtrMap()
{
} /* size: 0 */

// <0004B452> schemasystem/schemasystem.h:222
// member functions: 18
// member variables: 2
// class size: 64
class CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*> {
	/* schemasystem/schemasystem.h:225 */
	void CSchemaPtrMap(CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*>* );
	/* schemasystem/schemasystem.h:229 */
	CSchemaType_Ptr* Find(CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*>* , CSchemaType* const& );
	/* schemasystem/schemasystem.h:239 */
	CSchemaType_Ptr* FindByNameSlow(const CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*>* , const char* );
	/* schemasystem/schemasystem.h:250 */
	CSchemaType_Ptr* InsertOrDelete(CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*>* , CSchemaType* const& , CSchemaType_Ptr* const& );
	/* schemasystem/schemasystem.h:267 */
	CSchemaType_Ptr* InsertOrIgnore(CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*>* , CSchemaType* const& , CSchemaType_Ptr* const& );
	/* schemasystem/schemasystem.h:306 */
	bool IsEmpty(CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*>* );
	/* schemasystem/schemasystem.h:311 */
	void PurgeAndDeleteElements(CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*>* );
	/* schemasystem/schemasystem.h:318 */
	typedef struct CUtlMap<CSchemaType*, CSchemaType_Ptr*, short unsigned int, bool (*)(CSchemaType* const&, CSchemaType* const&)> MapType_t;
private:
	MapType_t m_Map; /* 0 40 */
	CThreadFastMutex m_Mutex; /* 40 24 */
	/* schemasystem/schemasystem.h:283 */
	void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<CSchemaType*, CSchemaType_Ptr, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Ptr*)> >(CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*>&, CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*>&, ISchemaSystemTypeScope*, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Ptr*)>)::<lambda(CSchemaType_Ptr*)> >(CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*>* , CUtlVector<CSchemaType*, CUtlMemory<CSchemaType*, int> >* , CUtlVector<CSchemaType_Ptr*, CUtlMemory<CSchemaType_Ptr*, int> >* , );
	void ~CSchemaPtrMap(CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*>* );
	void CSchemaPtrMap(class CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*> *); /* linkage=_ZN13CSchemaPtrMapIP11CSchemaTypeP15CSchemaType_PtrEC4Ev */
	class CSchemaType_Ptr * Find(class CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*> *, class CSchemaType * const &); /* linkage=_ZN13CSchemaPtrMapIP11CSchemaTypeP15CSchemaType_PtrE4FindERKS1_ */
	class CSchemaType_Ptr * FindByNameSlow(const class CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapIP11CSchemaTypeP15CSchemaType_PtrE14FindByNameSlowEPKc */
	class CSchemaType_Ptr * InsertOrDelete(class CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*> *, class CSchemaType * const &, class CSchemaType_Ptr * const &); /* linkage=_ZN13CSchemaPtrMapIP11CSchemaTypeP15CSchemaType_PtrE14InsertOrDeleteERKS1_RKS3_ */
	class CSchemaType_Ptr * InsertOrIgnore(class CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*> *, class CSchemaType * const &, class CSchemaType_Ptr * const &); /* linkage=_ZN13CSchemaPtrMapIP11CSchemaTypeP15CSchemaType_PtrE14InsertOrIgnoreERKS1_RKS3_ */
	bool IsEmpty(class CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*> *); /* linkage=_ZN13CSchemaPtrMapIP11CSchemaTypeP15CSchemaType_PtrE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*> *); /* linkage=_ZN13CSchemaPtrMapIP11CSchemaTypeP15CSchemaType_PtrE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*> *); /* linkage=_ZN13CSchemaPtrMapIP11CSchemaTypeP15CSchemaType_PtrED4Ev */
};

// <0004D9E2> schemasystem/schemasystem.h:222
// member functions: 34
// member variables: 2
// class size: 64
class CSchemaPtrMap<int, CSchemaType_Atomic*> {
	/* schemasystem/schemasystem.h:225 */
	void CSchemaPtrMap(CSchemaPtrMap<int, CSchemaType_Atomic*>* );
	/* schemasystem/schemasystem.h:229 */
	CSchemaType_Atomic* Find(CSchemaPtrMap<int, CSchemaType_Atomic*>* , const int& );
	/* schemasystem/schemasystem.h:239 */
	CSchemaType_Atomic* FindByNameSlow(const CSchemaPtrMap<int, CSchemaType_Atomic*>* , const char* );
	/* schemasystem/schemasystem.h:250 */
	CSchemaType_Atomic* InsertOrDelete(CSchemaPtrMap<int, CSchemaType_Atomic*>* , const int& , CSchemaType_Atomic* const& );
	/* schemasystem/schemasystem.h:267 */
	CSchemaType_Atomic* InsertOrIgnore(CSchemaPtrMap<int, CSchemaType_Atomic*>* , const int& , CSchemaType_Atomic* const& );
	/* schemasystem/schemasystem.h:306 */
	bool IsEmpty(CSchemaPtrMap<int, CSchemaType_Atomic*>* );
	/* schemasystem/schemasystem.h:311 */
	void PurgeAndDeleteElements(CSchemaPtrMap<int, CSchemaType_Atomic*>* );
	/* schemasystem/schemasystem.h:318 */
	typedef struct CUtlMap<int, CSchemaType_Atomic*, short unsigned int, bool (*)(int const&, int const&)> MapType_t;
private:
	MapType_t m_Map; /* 0 40 */
	CThreadFastMutex m_Mutex; /* 40 24 */
	/* schemasystem/schemasystem.h:283 */
	void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<int, CSchemaType_Atomic, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic*)> >(CSchemaPtrMap<int, CSchemaType_Atomic*>&, CSchemaPtrMap<int, CSchemaType_Atomic*>&, ISchemaSystemTypeScope*, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic*)>)::<lambda(CSchemaType_Atomic*)> >(CSchemaPtrMap<int, CSchemaType_Atomic*>* , CUtlVector<int, CUtlMemory<int, int> >* , CUtlVector<CSchemaType_Atomic*, CUtlMemory<CSchemaType_Atomic*, int> >* , );
	void ~CSchemaPtrMap(CSchemaPtrMap<int, CSchemaType_Atomic*>* );
	void CSchemaPtrMap(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldEC4Ev */
	class CSchemaType_Bitfield * Find(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *, const int  &); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldE4FindERKi */
	class CSchemaType_Bitfield * FindByNameSlow(const class CSchemaPtrMap<int, CSchemaType_Bitfield*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapIiP20CSchemaType_BitfieldE14FindByNameSlowEPKc */
	class CSchemaType_Bitfield * InsertOrDelete(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *, const int  &, class CSchemaType_Bitfield * const &); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldE14InsertOrDeleteERKiRKS1_ */
	class CSchemaType_Bitfield * InsertOrIgnore(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *, const int  &, class CSchemaType_Bitfield * const &); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldE14InsertOrIgnoreERKiRKS1_ */
	bool IsEmpty(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldED4Ev */
	void CSchemaPtrMap(class CSchemaPtrMap<int, CSchemaType_Atomic*> *); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicEC4Ev */
	class CSchemaType_Atomic * Find(class CSchemaPtrMap<int, CSchemaType_Atomic*> *, const int  &); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicE4FindERKi */
	class CSchemaType_Atomic * FindByNameSlow(const class CSchemaPtrMap<int, CSchemaType_Atomic*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapIiP18CSchemaType_AtomicE14FindByNameSlowEPKc */
	class CSchemaType_Atomic * InsertOrDelete(class CSchemaPtrMap<int, CSchemaType_Atomic*> *, const int  &, class CSchemaType_Atomic * const &); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicE14InsertOrDeleteERKiRKS1_ */
	class CSchemaType_Atomic * InsertOrIgnore(class CSchemaPtrMap<int, CSchemaType_Atomic*> *, const int  &, class CSchemaType_Atomic * const &); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicE14InsertOrIgnoreERKiRKS1_ */
	bool IsEmpty(class CSchemaPtrMap<int, CSchemaType_Atomic*> *); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<int, CSchemaType_Atomic*> *); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<int, CSchemaType_Atomic*> *); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicED4Ev */
	void CSchemaPtrMap(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tEC4Ev */
	const class SchemaAtomicTypeInfo_t  * Find(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *, const int  &); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tE4FindERKi */
	const class SchemaAtomicTypeInfo_t  * FindByNameSlow(const class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tE14FindByNameSlowEPKc */
	const class SchemaAtomicTypeInfo_t  * InsertOrDelete(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *, const int  &, const class SchemaAtomicTypeInfo_t  * const &); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tE14InsertOrDeleteERKiRKS2_ */
	const class SchemaAtomicTypeInfo_t  * InsertOrIgnore(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *, const int  &, const class SchemaAtomicTypeInfo_t  * const &); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tE14InsertOrIgnoreERKiRKS2_ */
	bool IsEmpty(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tED4Ev */
};

// <0004FEDE> schemasystem/schemasystem.h:222
// member functions: 26
// member variables: 2
// class size: 64
class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*> {
	/* schemasystem/schemasystem.h:225 */
	void CSchemaPtrMap(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*>* );
	/* schemasystem/schemasystem.h:229 */
	CSchemaType_Atomic_T* Find(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*>* , const AtomicTypeInfo_T_t& );
	/* schemasystem/schemasystem.h:239 */
	CSchemaType_Atomic_T* FindByNameSlow(const CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*>* , const char* );
	/* schemasystem/schemasystem.h:250 */
	CSchemaType_Atomic_T* InsertOrDelete(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*>* , const AtomicTypeInfo_T_t& , CSchemaType_Atomic_T* const& );
	/* schemasystem/schemasystem.h:267 */
	CSchemaType_Atomic_T* InsertOrIgnore(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*>* , const AtomicTypeInfo_T_t& , CSchemaType_Atomic_T* const& );
	/* schemasystem/schemasystem.h:306 */
	bool IsEmpty(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*>* );
	/* schemasystem/schemasystem.h:311 */
	void PurgeAndDeleteElements(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*>* );
	/* schemasystem/schemasystem.h:318 */
	typedef struct CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*, short unsigned int, bool (*)(const AtomicTypeInfo_T_t&, const AtomicTypeInfo_T_t&)> MapType_t;
private:
	MapType_t m_Map; /* 0 40 */
	CThreadFastMutex m_Mutex; /* 40 24 */
	/* schemasystem/schemasystem.h:283 */
	void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_T_t, CSchemaType_Atomic_T, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic_T*)> >(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*>&, CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*>&, ISchemaSystemTypeScope*, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic_T*)>)::<lambda(CSchemaType_Atomic_T*)> >(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*>* , CUtlVector<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >* , CUtlVector<CSchemaType_Atomic_T*, CUtlMemory<CSchemaType_Atomic_T*, int> >* , );
	void ~CSchemaPtrMap(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*>* );
	void CSchemaPtrMap(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP32CSchemaType_Atomic_CollectionOfTEC4Ev */
	class CSchemaType_Atomic_CollectionOfT * Find(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*> *, const class AtomicTypeInfo_T_t  &); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP32CSchemaType_Atomic_CollectionOfTE4FindERKS0_ */
	class CSchemaType_Atomic_CollectionOfT * FindByNameSlow(const class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapI18AtomicTypeInfo_T_tP32CSchemaType_Atomic_CollectionOfTE14FindByNameSlowEPKc */
	class CSchemaType_Atomic_CollectionOfT * InsertOrDelete(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*> *, const class AtomicTypeInfo_T_t  &, class CSchemaType_Atomic_CollectionOfT * const &); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP32CSchemaType_Atomic_CollectionOfTE14InsertOrDeleteERKS0_RKS2_ */
	class CSchemaType_Atomic_CollectionOfT * InsertOrIgnore(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*> *, const class AtomicTypeInfo_T_t  &, class CSchemaType_Atomic_CollectionOfT * const &); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP32CSchemaType_Atomic_CollectionOfTE14InsertOrIgnoreERKS0_RKS2_ */
	bool IsEmpty(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP32CSchemaType_Atomic_CollectionOfTE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP32CSchemaType_Atomic_CollectionOfTE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP32CSchemaType_Atomic_CollectionOfTED4Ev */
	void CSchemaPtrMap(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP20CSchemaType_Atomic_TEC4Ev */
	class CSchemaType_Atomic_T * Find(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*> *, const class AtomicTypeInfo_T_t  &); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP20CSchemaType_Atomic_TE4FindERKS0_ */
	class CSchemaType_Atomic_T * FindByNameSlow(const class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapI18AtomicTypeInfo_T_tP20CSchemaType_Atomic_TE14FindByNameSlowEPKc */
	class CSchemaType_Atomic_T * InsertOrDelete(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*> *, const class AtomicTypeInfo_T_t  &, class CSchemaType_Atomic_T * const &); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP20CSchemaType_Atomic_TE14InsertOrDeleteERKS0_RKS2_ */
	class CSchemaType_Atomic_T * InsertOrIgnore(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*> *, const class AtomicTypeInfo_T_t  &, class CSchemaType_Atomic_T * const &); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP20CSchemaType_Atomic_TE14InsertOrIgnoreERKS0_RKS2_ */
	bool IsEmpty(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP20CSchemaType_Atomic_TE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP20CSchemaType_Atomic_TE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP20CSchemaType_Atomic_TED4Ev */
};

// <0005233C> schemasystem/schemasystem.h:222
// member functions: 26
// member variables: 2
// class size: 64
class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*> {
	/* schemasystem/schemasystem.h:225 */
	void CSchemaPtrMap(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*>* );
	/* schemasystem/schemasystem.h:229 */
	CSchemaType_Atomic_CollectionOfT* Find(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*>* , const AtomicTypeInfo_T_t& );
	/* schemasystem/schemasystem.h:239 */
	CSchemaType_Atomic_CollectionOfT* FindByNameSlow(const CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*>* , const char* );
	/* schemasystem/schemasystem.h:250 */
	CSchemaType_Atomic_CollectionOfT* InsertOrDelete(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*>* , const AtomicTypeInfo_T_t& , CSchemaType_Atomic_CollectionOfT* const& );
	/* schemasystem/schemasystem.h:267 */
	CSchemaType_Atomic_CollectionOfT* InsertOrIgnore(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*>* , const AtomicTypeInfo_T_t& , CSchemaType_Atomic_CollectionOfT* const& );
	/* schemasystem/schemasystem.h:306 */
	bool IsEmpty(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*>* );
	/* schemasystem/schemasystem.h:311 */
	void PurgeAndDeleteElements(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*>* );
	/* schemasystem/schemasystem.h:318 */
	typedef struct CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*, short unsigned int, bool (*)(const AtomicTypeInfo_T_t&, const AtomicTypeInfo_T_t&)> MapType_t;
private:
	MapType_t m_Map; /* 0 40 */
	CThreadFastMutex m_Mutex; /* 40 24 */
	/* schemasystem/schemasystem.h:283 */
	void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic_CollectionOfT*)> >(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*>&, CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*>&, ISchemaSystemTypeScope*, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic_CollectionOfT*)>)::<lambda(CSchemaType_Atomic_CollectionOfT*)> >(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*>* , CUtlVector<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >* , CUtlVector<CSchemaType_Atomic_CollectionOfT*, CUtlMemory<CSchemaType_Atomic_CollectionOfT*, int> >* , );
	void ~CSchemaPtrMap(CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*>* );
	void CSchemaPtrMap(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP32CSchemaType_Atomic_CollectionOfTEC4Ev */
	class CSchemaType_Atomic_CollectionOfT * Find(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*> *, const class AtomicTypeInfo_T_t  &); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP32CSchemaType_Atomic_CollectionOfTE4FindERKS0_ */
	class CSchemaType_Atomic_CollectionOfT * FindByNameSlow(const class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapI18AtomicTypeInfo_T_tP32CSchemaType_Atomic_CollectionOfTE14FindByNameSlowEPKc */
	class CSchemaType_Atomic_CollectionOfT * InsertOrDelete(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*> *, const class AtomicTypeInfo_T_t  &, class CSchemaType_Atomic_CollectionOfT * const &); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP32CSchemaType_Atomic_CollectionOfTE14InsertOrDeleteERKS0_RKS2_ */
	class CSchemaType_Atomic_CollectionOfT * InsertOrIgnore(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*> *, const class AtomicTypeInfo_T_t  &, class CSchemaType_Atomic_CollectionOfT * const &); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP32CSchemaType_Atomic_CollectionOfTE14InsertOrIgnoreERKS0_RKS2_ */
	bool IsEmpty(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP32CSchemaType_Atomic_CollectionOfTE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP32CSchemaType_Atomic_CollectionOfTE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP32CSchemaType_Atomic_CollectionOfTED4Ev */
	void CSchemaPtrMap(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP20CSchemaType_Atomic_TEC4Ev */
	class CSchemaType_Atomic_T * Find(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*> *, const class AtomicTypeInfo_T_t  &); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP20CSchemaType_Atomic_TE4FindERKS0_ */
	class CSchemaType_Atomic_T * FindByNameSlow(const class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapI18AtomicTypeInfo_T_tP20CSchemaType_Atomic_TE14FindByNameSlowEPKc */
	class CSchemaType_Atomic_T * InsertOrDelete(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*> *, const class AtomicTypeInfo_T_t  &, class CSchemaType_Atomic_T * const &); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP20CSchemaType_Atomic_TE14InsertOrDeleteERKS0_RKS2_ */
	class CSchemaType_Atomic_T * InsertOrIgnore(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*> *, const class AtomicTypeInfo_T_t  &, class CSchemaType_Atomic_T * const &); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP20CSchemaType_Atomic_TE14InsertOrIgnoreERKS0_RKS2_ */
	bool IsEmpty(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP20CSchemaType_Atomic_TE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP20CSchemaType_Atomic_TE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_T_tP20CSchemaType_Atomic_TED4Ev */
};

// <000547B0> schemasystem/schemasystem.h:222
// member functions: 18
// member variables: 2
// class size: 64
class CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*> {
	/* schemasystem/schemasystem.h:225 */
	void CSchemaPtrMap(CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*>* );
	/* schemasystem/schemasystem.h:229 */
	CSchemaType_Atomic_TT* Find(CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*>* , const AtomicTypeInfo_TT_t& );
	/* schemasystem/schemasystem.h:239 */
	CSchemaType_Atomic_TT* FindByNameSlow(const CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*>* , const char* );
	/* schemasystem/schemasystem.h:250 */
	CSchemaType_Atomic_TT* InsertOrDelete(CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*>* , const AtomicTypeInfo_TT_t& , CSchemaType_Atomic_TT* const& );
	/* schemasystem/schemasystem.h:267 */
	CSchemaType_Atomic_TT* InsertOrIgnore(CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*>* , const AtomicTypeInfo_TT_t& , CSchemaType_Atomic_TT* const& );
	/* schemasystem/schemasystem.h:306 */
	bool IsEmpty(CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*>* );
	/* schemasystem/schemasystem.h:311 */
	void PurgeAndDeleteElements(CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*>* );
	/* schemasystem/schemasystem.h:318 */
	typedef struct CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*, short unsigned int, bool (*)(const AtomicTypeInfo_TT_t&, const AtomicTypeInfo_TT_t&)> MapType_t;
private:
	MapType_t m_Map; /* 0 40 */
	CThreadFastMutex m_Mutex; /* 40 24 */
	/* schemasystem/schemasystem.h:283 */
	void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic_TT*)> >(CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*>&, CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*>&, ISchemaSystemTypeScope*, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic_TT*)>)::<lambda(CSchemaType_Atomic_TT*)> >(CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*>* , CUtlVector<AtomicTypeInfo_TT_t, CUtlMemory<AtomicTypeInfo_TT_t, int> >* , CUtlVector<CSchemaType_Atomic_TT*, CUtlMemory<CSchemaType_Atomic_TT*, int> >* , );
	void ~CSchemaPtrMap(CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*>* );
	void CSchemaPtrMap(class CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*> *); /* linkage=_ZN13CSchemaPtrMapI19AtomicTypeInfo_TT_tP21CSchemaType_Atomic_TTEC4Ev */
	class CSchemaType_Atomic_TT * Find(class CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*> *, const class AtomicTypeInfo_TT_t  &); /* linkage=_ZN13CSchemaPtrMapI19AtomicTypeInfo_TT_tP21CSchemaType_Atomic_TTE4FindERKS0_ */
	class CSchemaType_Atomic_TT * FindByNameSlow(const class CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapI19AtomicTypeInfo_TT_tP21CSchemaType_Atomic_TTE14FindByNameSlowEPKc */
	class CSchemaType_Atomic_TT * InsertOrDelete(class CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*> *, const class AtomicTypeInfo_TT_t  &, class CSchemaType_Atomic_TT * const &); /* linkage=_ZN13CSchemaPtrMapI19AtomicTypeInfo_TT_tP21CSchemaType_Atomic_TTE14InsertOrDeleteERKS0_RKS2_ */
	class CSchemaType_Atomic_TT * InsertOrIgnore(class CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*> *, const class AtomicTypeInfo_TT_t  &, class CSchemaType_Atomic_TT * const &); /* linkage=_ZN13CSchemaPtrMapI19AtomicTypeInfo_TT_tP21CSchemaType_Atomic_TTE14InsertOrIgnoreERKS0_RKS2_ */
	bool IsEmpty(class CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*> *); /* linkage=_ZN13CSchemaPtrMapI19AtomicTypeInfo_TT_tP21CSchemaType_Atomic_TTE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*> *); /* linkage=_ZN13CSchemaPtrMapI19AtomicTypeInfo_TT_tP21CSchemaType_Atomic_TTE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*> *); /* linkage=_ZN13CSchemaPtrMapI19AtomicTypeInfo_TT_tP21CSchemaType_Atomic_TTED4Ev */
};

// <00056BCB> schemasystem/schemasystem.h:222
// member functions: 18
// member variables: 2
// class size: 64
class CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*> {
	/* schemasystem/schemasystem.h:225 */
	void CSchemaPtrMap(CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*>* );
	/* schemasystem/schemasystem.h:229 */
	CSchemaType_Atomic_I* Find(CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*>* , const AtomicTypeInfo_I_t& );
	/* schemasystem/schemasystem.h:239 */
	CSchemaType_Atomic_I* FindByNameSlow(const CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*>* , const char* );
	/* schemasystem/schemasystem.h:250 */
	CSchemaType_Atomic_I* InsertOrDelete(CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*>* , const AtomicTypeInfo_I_t& , CSchemaType_Atomic_I* const& );
	/* schemasystem/schemasystem.h:267 */
	CSchemaType_Atomic_I* InsertOrIgnore(CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*>* , const AtomicTypeInfo_I_t& , CSchemaType_Atomic_I* const& );
	/* schemasystem/schemasystem.h:306 */
	bool IsEmpty(CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*>* );
	/* schemasystem/schemasystem.h:311 */
	void PurgeAndDeleteElements(CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*>* );
	/* schemasystem/schemasystem.h:318 */
	typedef struct CUtlMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*, short unsigned int, bool (*)(const AtomicTypeInfo_I_t&, const AtomicTypeInfo_I_t&)> MapType_t;
private:
	MapType_t m_Map; /* 0 40 */
	CThreadFastMutex m_Mutex; /* 40 24 */
	/* schemasystem/schemasystem.h:283 */
	void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_I_t, CSchemaType_Atomic_I, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic_I*)> >(CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*>&, CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*>&, ISchemaSystemTypeScope*, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Atomic_I*)>)::<lambda(CSchemaType_Atomic_I*)> >(CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*>* , CUtlVector<AtomicTypeInfo_I_t, CUtlMemory<AtomicTypeInfo_I_t, int> >* , CUtlVector<CSchemaType_Atomic_I*, CUtlMemory<CSchemaType_Atomic_I*, int> >* , );
	void ~CSchemaPtrMap(CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*>* );
	void CSchemaPtrMap(class CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_I_tP20CSchemaType_Atomic_IEC4Ev */
	class CSchemaType_Atomic_I * Find(class CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*> *, const class AtomicTypeInfo_I_t  &); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_I_tP20CSchemaType_Atomic_IE4FindERKS0_ */
	class CSchemaType_Atomic_I * FindByNameSlow(const class CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapI18AtomicTypeInfo_I_tP20CSchemaType_Atomic_IE14FindByNameSlowEPKc */
	class CSchemaType_Atomic_I * InsertOrDelete(class CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*> *, const class AtomicTypeInfo_I_t  &, class CSchemaType_Atomic_I * const &); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_I_tP20CSchemaType_Atomic_IE14InsertOrDeleteERKS0_RKS2_ */
	class CSchemaType_Atomic_I * InsertOrIgnore(class CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*> *, const class AtomicTypeInfo_I_t  &, class CSchemaType_Atomic_I * const &); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_I_tP20CSchemaType_Atomic_IE14InsertOrIgnoreERKS0_RKS2_ */
	bool IsEmpty(class CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_I_tP20CSchemaType_Atomic_IE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_I_tP20CSchemaType_Atomic_IE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*> *); /* linkage=_ZN13CSchemaPtrMapI18AtomicTypeInfo_I_tP20CSchemaType_Atomic_IED4Ev */
};

// <000590E3> schemasystem/schemasystem.h:222
// member functions: 26
// member variables: 2
// class size: 64
class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*> {
	/* schemasystem/schemasystem.h:225 */
	void CSchemaPtrMap(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*>* );
	/* schemasystem/schemasystem.h:229 */
	CSchemaType_DeclaredClass* Find(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*>* , const unsigned int& );
	/* schemasystem/schemasystem.h:239 */
	CSchemaType_DeclaredClass* FindByNameSlow(const CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*>* , const char* );
	/* schemasystem/schemasystem.h:250 */
	CSchemaType_DeclaredClass* InsertOrDelete(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*>* , const unsigned int& , CSchemaType_DeclaredClass* const& );
	/* schemasystem/schemasystem.h:267 */
	CSchemaType_DeclaredClass* InsertOrIgnore(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*>* , const unsigned int& , CSchemaType_DeclaredClass* const& );
	/* schemasystem/schemasystem.h:306 */
	bool IsEmpty(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*>* );
	/* schemasystem/schemasystem.h:311 */
	void PurgeAndDeleteElements(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*>* );
	/* schemasystem/schemasystem.h:318 */
	typedef struct CUtlMap<unsigned int, CSchemaType_DeclaredClass*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> MapType_t;
private:
	MapType_t m_Map; /* 0 40 */
	CThreadFastMutex m_Mutex; /* 40 24 */
	/* schemasystem/schemasystem.h:283 */
	void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<unsigned int, CSchemaType_DeclaredClass, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_DeclaredClass*)> >(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*>&, CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*>&, ISchemaSystemTypeScope*, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_DeclaredClass*)>)::<lambda(CSchemaType_DeclaredClass*)> >(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*>* , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* , CUtlVector<CSchemaType_DeclaredClass*, CUtlMemory<CSchemaType_DeclaredClass*, int> >* , );
	void ~CSchemaPtrMap(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*>* );
	void CSchemaPtrMap(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*> *); /* linkage=_ZN13CSchemaPtrMapIjP24CSchemaType_DeclaredEnumEC4Ev */
	class CSchemaType_DeclaredEnum * Find(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*> *, const unsigned int  &); /* linkage=_ZN13CSchemaPtrMapIjP24CSchemaType_DeclaredEnumE4FindERKj */
	class CSchemaType_DeclaredEnum * FindByNameSlow(const class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapIjP24CSchemaType_DeclaredEnumE14FindByNameSlowEPKc */
	class CSchemaType_DeclaredEnum * InsertOrDelete(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*> *, const unsigned int  &, class CSchemaType_DeclaredEnum * const &); /* linkage=_ZN13CSchemaPtrMapIjP24CSchemaType_DeclaredEnumE14InsertOrDeleteERKjRKS1_ */
	class CSchemaType_DeclaredEnum * InsertOrIgnore(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*> *, const unsigned int  &, class CSchemaType_DeclaredEnum * const &); /* linkage=_ZN13CSchemaPtrMapIjP24CSchemaType_DeclaredEnumE14InsertOrIgnoreERKjRKS1_ */
	bool IsEmpty(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*> *); /* linkage=_ZN13CSchemaPtrMapIjP24CSchemaType_DeclaredEnumE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*> *); /* linkage=_ZN13CSchemaPtrMapIjP24CSchemaType_DeclaredEnumE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*> *); /* linkage=_ZN13CSchemaPtrMapIjP24CSchemaType_DeclaredEnumED4Ev */
	void CSchemaPtrMap(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*> *); /* linkage=_ZN13CSchemaPtrMapIjP25CSchemaType_DeclaredClassEC4Ev */
	class CSchemaType_DeclaredClass * Find(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*> *, const unsigned int  &); /* linkage=_ZN13CSchemaPtrMapIjP25CSchemaType_DeclaredClassE4FindERKj */
	class CSchemaType_DeclaredClass * FindByNameSlow(const class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapIjP25CSchemaType_DeclaredClassE14FindByNameSlowEPKc */
	class CSchemaType_DeclaredClass * InsertOrDelete(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*> *, const unsigned int  &, class CSchemaType_DeclaredClass * const &); /* linkage=_ZN13CSchemaPtrMapIjP25CSchemaType_DeclaredClassE14InsertOrDeleteERKjRKS1_ */
	class CSchemaType_DeclaredClass * InsertOrIgnore(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*> *, const unsigned int  &, class CSchemaType_DeclaredClass * const &); /* linkage=_ZN13CSchemaPtrMapIjP25CSchemaType_DeclaredClassE14InsertOrIgnoreERKjRKS1_ */
	bool IsEmpty(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*> *); /* linkage=_ZN13CSchemaPtrMapIjP25CSchemaType_DeclaredClassE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*> *); /* linkage=_ZN13CSchemaPtrMapIjP25CSchemaType_DeclaredClassE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*> *); /* linkage=_ZN13CSchemaPtrMapIjP25CSchemaType_DeclaredClassED4Ev */
};

// <0005B570> schemasystem/schemasystem.h:222
// member functions: 26
// member variables: 2
// class size: 64
class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*> {
	/* schemasystem/schemasystem.h:225 */
	void CSchemaPtrMap(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*>* );
	/* schemasystem/schemasystem.h:229 */
	CSchemaType_DeclaredEnum* Find(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*>* , const unsigned int& );
	/* schemasystem/schemasystem.h:239 */
	CSchemaType_DeclaredEnum* FindByNameSlow(const CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*>* , const char* );
	/* schemasystem/schemasystem.h:250 */
	CSchemaType_DeclaredEnum* InsertOrDelete(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*>* , const unsigned int& , CSchemaType_DeclaredEnum* const& );
	/* schemasystem/schemasystem.h:267 */
	CSchemaType_DeclaredEnum* InsertOrIgnore(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*>* , const unsigned int& , CSchemaType_DeclaredEnum* const& );
	/* schemasystem/schemasystem.h:306 */
	bool IsEmpty(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*>* );
	/* schemasystem/schemasystem.h:311 */
	void PurgeAndDeleteElements(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*>* );
	/* schemasystem/schemasystem.h:318 */
	typedef struct CUtlMap<unsigned int, CSchemaType_DeclaredEnum*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> MapType_t;
private:
	MapType_t m_Map; /* 0 40 */
	CThreadFastMutex m_Mutex; /* 40 24 */
	/* schemasystem/schemasystem.h:283 */
	void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<unsigned int, CSchemaType_DeclaredEnum, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_DeclaredEnum*)> >(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*>&, CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*>&, ISchemaSystemTypeScope*, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_DeclaredEnum*)>)::<lambda(CSchemaType_DeclaredEnum*)> >(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*>* , CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* , CUtlVector<CSchemaType_DeclaredEnum*, CUtlMemory<CSchemaType_DeclaredEnum*, int> >* , );
	void ~CSchemaPtrMap(CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*>* );
	void CSchemaPtrMap(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*> *); /* linkage=_ZN13CSchemaPtrMapIjP24CSchemaType_DeclaredEnumEC4Ev */
	class CSchemaType_DeclaredEnum * Find(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*> *, const unsigned int  &); /* linkage=_ZN13CSchemaPtrMapIjP24CSchemaType_DeclaredEnumE4FindERKj */
	class CSchemaType_DeclaredEnum * FindByNameSlow(const class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapIjP24CSchemaType_DeclaredEnumE14FindByNameSlowEPKc */
	class CSchemaType_DeclaredEnum * InsertOrDelete(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*> *, const unsigned int  &, class CSchemaType_DeclaredEnum * const &); /* linkage=_ZN13CSchemaPtrMapIjP24CSchemaType_DeclaredEnumE14InsertOrDeleteERKjRKS1_ */
	class CSchemaType_DeclaredEnum * InsertOrIgnore(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*> *, const unsigned int  &, class CSchemaType_DeclaredEnum * const &); /* linkage=_ZN13CSchemaPtrMapIjP24CSchemaType_DeclaredEnumE14InsertOrIgnoreERKjRKS1_ */
	bool IsEmpty(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*> *); /* linkage=_ZN13CSchemaPtrMapIjP24CSchemaType_DeclaredEnumE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*> *); /* linkage=_ZN13CSchemaPtrMapIjP24CSchemaType_DeclaredEnumE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*> *); /* linkage=_ZN13CSchemaPtrMapIjP24CSchemaType_DeclaredEnumED4Ev */
	void CSchemaPtrMap(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*> *); /* linkage=_ZN13CSchemaPtrMapIjP25CSchemaType_DeclaredClassEC4Ev */
	class CSchemaType_DeclaredClass * Find(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*> *, const unsigned int  &); /* linkage=_ZN13CSchemaPtrMapIjP25CSchemaType_DeclaredClassE4FindERKj */
	class CSchemaType_DeclaredClass * FindByNameSlow(const class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapIjP25CSchemaType_DeclaredClassE14FindByNameSlowEPKc */
	class CSchemaType_DeclaredClass * InsertOrDelete(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*> *, const unsigned int  &, class CSchemaType_DeclaredClass * const &); /* linkage=_ZN13CSchemaPtrMapIjP25CSchemaType_DeclaredClassE14InsertOrDeleteERKjRKS1_ */
	class CSchemaType_DeclaredClass * InsertOrIgnore(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*> *, const unsigned int  &, class CSchemaType_DeclaredClass * const &); /* linkage=_ZN13CSchemaPtrMapIjP25CSchemaType_DeclaredClassE14InsertOrIgnoreERKjRKS1_ */
	bool IsEmpty(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*> *); /* linkage=_ZN13CSchemaPtrMapIjP25CSchemaType_DeclaredClassE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*> *); /* linkage=_ZN13CSchemaPtrMapIjP25CSchemaType_DeclaredClassE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*> *); /* linkage=_ZN13CSchemaPtrMapIjP25CSchemaType_DeclaredClassED4Ev */
};

// <0005D854> schemasystem/schemasystem.h:222
// member functions: 33
// member variables: 2
// class size: 64
class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> {
	/* schemasystem/schemasystem.h:225 */
	void CSchemaPtrMap(CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*>* );
	/* schemasystem/schemasystem.h:229 */
	const SchemaAtomicTypeInfo_t* Find(CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*>* , const int& );
	/* schemasystem/schemasystem.h:239 */
	const SchemaAtomicTypeInfo_t* FindByNameSlow(const CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*>* , const char* );
	/* schemasystem/schemasystem.h:250 */
	const SchemaAtomicTypeInfo_t* InsertOrDelete(CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*>* , const int& , const SchemaAtomicTypeInfo_t* const& );
	/* schemasystem/schemasystem.h:267 */
	const SchemaAtomicTypeInfo_t* InsertOrIgnore(CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*>* , const int& , const SchemaAtomicTypeInfo_t* const& );
	/* schemasystem/schemasystem.h:306 */
	bool IsEmpty(CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*>* );
	/* schemasystem/schemasystem.h:311 */
	void PurgeAndDeleteElements(CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*>* );
	/* schemasystem/schemasystem.h:318 */
	typedef struct CUtlMap<int, const SchemaAtomicTypeInfo_t*, short unsigned int, bool (*)(int const&, int const&)> MapType_t;
private:
	MapType_t m_Map; /* 0 40 */
	CThreadFastMutex m_Mutex; /* 40 24 */
	void ~CSchemaPtrMap(CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*>* );
	void CSchemaPtrMap(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldEC4Ev */
	class CSchemaType_Bitfield * Find(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *, const int  &); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldE4FindERKi */
	class CSchemaType_Bitfield * FindByNameSlow(const class CSchemaPtrMap<int, CSchemaType_Bitfield*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapIiP20CSchemaType_BitfieldE14FindByNameSlowEPKc */
	class CSchemaType_Bitfield * InsertOrDelete(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *, const int  &, class CSchemaType_Bitfield * const &); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldE14InsertOrDeleteERKiRKS1_ */
	class CSchemaType_Bitfield * InsertOrIgnore(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *, const int  &, class CSchemaType_Bitfield * const &); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldE14InsertOrIgnoreERKiRKS1_ */
	bool IsEmpty(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldED4Ev */
	void CSchemaPtrMap(class CSchemaPtrMap<int, CSchemaType_Atomic*> *); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicEC4Ev */
	class CSchemaType_Atomic * Find(class CSchemaPtrMap<int, CSchemaType_Atomic*> *, const int  &); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicE4FindERKi */
	class CSchemaType_Atomic * FindByNameSlow(const class CSchemaPtrMap<int, CSchemaType_Atomic*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapIiP18CSchemaType_AtomicE14FindByNameSlowEPKc */
	class CSchemaType_Atomic * InsertOrDelete(class CSchemaPtrMap<int, CSchemaType_Atomic*> *, const int  &, class CSchemaType_Atomic * const &); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicE14InsertOrDeleteERKiRKS1_ */
	class CSchemaType_Atomic * InsertOrIgnore(class CSchemaPtrMap<int, CSchemaType_Atomic*> *, const int  &, class CSchemaType_Atomic * const &); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicE14InsertOrIgnoreERKiRKS1_ */
	bool IsEmpty(class CSchemaPtrMap<int, CSchemaType_Atomic*> *); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<int, CSchemaType_Atomic*> *); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<int, CSchemaType_Atomic*> *); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicED4Ev */
	void CSchemaPtrMap(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tEC4Ev */
	const class SchemaAtomicTypeInfo_t  * Find(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *, const int  &); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tE4FindERKi */
	const class SchemaAtomicTypeInfo_t  * FindByNameSlow(const class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tE14FindByNameSlowEPKc */
	const class SchemaAtomicTypeInfo_t  * InsertOrDelete(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *, const int  &, const class SchemaAtomicTypeInfo_t  * const &); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tE14InsertOrDeleteERKiRKS2_ */
	const class SchemaAtomicTypeInfo_t  * InsertOrIgnore(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *, const int  &, const class SchemaAtomicTypeInfo_t  * const &); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tE14InsertOrIgnoreERKiRKS2_ */
	bool IsEmpty(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tED4Ev */
};

// <0005FE0D> schemasystem/schemasystem.h:222
// member functions: 18
// member variables: 2
// class size: 64
class CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*> {
	/* schemasystem/schemasystem.h:225 */
	void CSchemaPtrMap(CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*>* );
	/* schemasystem/schemasystem.h:229 */
	CSchemaType_FixedArray* Find(CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*>* , const TypeAndCountInfo_t& );
	/* schemasystem/schemasystem.h:239 */
	CSchemaType_FixedArray* FindByNameSlow(const CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*>* , const char* );
	/* schemasystem/schemasystem.h:250 */
	CSchemaType_FixedArray* InsertOrDelete(CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*>* , const TypeAndCountInfo_t& , CSchemaType_FixedArray* const& );
	/* schemasystem/schemasystem.h:267 */
	CSchemaType_FixedArray* InsertOrIgnore(CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*>* , const TypeAndCountInfo_t& , CSchemaType_FixedArray* const& );
	/* schemasystem/schemasystem.h:306 */
	bool IsEmpty(CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*>* );
	/* schemasystem/schemasystem.h:311 */
	void PurgeAndDeleteElements(CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*>* );
	/* schemasystem/schemasystem.h:318 */
	typedef struct CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray*, short unsigned int, bool (*)(const TypeAndCountInfo_t&, const TypeAndCountInfo_t&)> MapType_t;
private:
	MapType_t m_Map; /* 0 40 */
	CThreadFastMutex m_Mutex; /* 40 24 */
	/* schemasystem/schemasystem.h:283 */
	void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<TypeAndCountInfo_t, CSchemaType_FixedArray, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_FixedArray*)> >(CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*>&, CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*>&, ISchemaSystemTypeScope*, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_FixedArray*)>)::<lambda(CSchemaType_FixedArray*)> >(CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*>* , CUtlVector<TypeAndCountInfo_t, CUtlMemory<TypeAndCountInfo_t, int> >* , CUtlVector<CSchemaType_FixedArray*, CUtlMemory<CSchemaType_FixedArray*, int> >* , );
	void ~CSchemaPtrMap(CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*>* );
	void CSchemaPtrMap(class CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*> *); /* linkage=_ZN13CSchemaPtrMapI18TypeAndCountInfo_tP22CSchemaType_FixedArrayEC4Ev */
	class CSchemaType_FixedArray * Find(class CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*> *, const class TypeAndCountInfo_t  &); /* linkage=_ZN13CSchemaPtrMapI18TypeAndCountInfo_tP22CSchemaType_FixedArrayE4FindERKS0_ */
	class CSchemaType_FixedArray * FindByNameSlow(const class CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapI18TypeAndCountInfo_tP22CSchemaType_FixedArrayE14FindByNameSlowEPKc */
	class CSchemaType_FixedArray * InsertOrDelete(class CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*> *, const class TypeAndCountInfo_t  &, class CSchemaType_FixedArray * const &); /* linkage=_ZN13CSchemaPtrMapI18TypeAndCountInfo_tP22CSchemaType_FixedArrayE14InsertOrDeleteERKS0_RKS2_ */
	class CSchemaType_FixedArray * InsertOrIgnore(class CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*> *, const class TypeAndCountInfo_t  &, class CSchemaType_FixedArray * const &); /* linkage=_ZN13CSchemaPtrMapI18TypeAndCountInfo_tP22CSchemaType_FixedArrayE14InsertOrIgnoreERKS0_RKS2_ */
	bool IsEmpty(class CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*> *); /* linkage=_ZN13CSchemaPtrMapI18TypeAndCountInfo_tP22CSchemaType_FixedArrayE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*> *); /* linkage=_ZN13CSchemaPtrMapI18TypeAndCountInfo_tP22CSchemaType_FixedArrayE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*> *); /* linkage=_ZN13CSchemaPtrMapI18TypeAndCountInfo_tP22CSchemaType_FixedArrayED4Ev */
};

// <0006226C> schemasystem/schemasystem.h:222
// member functions: 34
// member variables: 2
// class size: 64
class CSchemaPtrMap<int, CSchemaType_Bitfield*> {
	/* schemasystem/schemasystem.h:225 */
	void CSchemaPtrMap(CSchemaPtrMap<int, CSchemaType_Bitfield*>* );
	/* schemasystem/schemasystem.h:229 */
	CSchemaType_Bitfield* Find(CSchemaPtrMap<int, CSchemaType_Bitfield*>* , const int& );
	/* schemasystem/schemasystem.h:239 */
	CSchemaType_Bitfield* FindByNameSlow(const CSchemaPtrMap<int, CSchemaType_Bitfield*>* , const char* );
	/* schemasystem/schemasystem.h:250 */
	CSchemaType_Bitfield* InsertOrDelete(CSchemaPtrMap<int, CSchemaType_Bitfield*>* , const int& , CSchemaType_Bitfield* const& );
	/* schemasystem/schemasystem.h:267 */
	CSchemaType_Bitfield* InsertOrIgnore(CSchemaPtrMap<int, CSchemaType_Bitfield*>* , const int& , CSchemaType_Bitfield* const& );
	/* schemasystem/schemasystem.h:306 */
	bool IsEmpty(CSchemaPtrMap<int, CSchemaType_Bitfield*>* );
	/* schemasystem/schemasystem.h:311 */
	void PurgeAndDeleteElements(CSchemaPtrMap<int, CSchemaType_Bitfield*>* );
	/* schemasystem/schemasystem.h:318 */
	typedef struct CUtlMap<int, CSchemaType_Bitfield*, short unsigned int, bool (*)(int const&, int const&)> MapType_t;
private:
	MapType_t m_Map; /* 0 40 */
	CThreadFastMutex m_Mutex; /* 40 24 */
	/* schemasystem/schemasystem.h:283 */
	void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<int, CSchemaType_Bitfield, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Bitfield*)> >(CSchemaPtrMap<int, CSchemaType_Bitfield*>&, CSchemaPtrMap<int, CSchemaType_Bitfield*>&, ISchemaSystemTypeScope*, CSchemaSystemTypeScope::FinalizeTypeScope()::<lambda(CSchemaType_Bitfield*)>)::<lambda(CSchemaType_Bitfield*)> >(CSchemaPtrMap<int, CSchemaType_Bitfield*>* , CUtlVector<int, CUtlMemory<int, int> >* , CUtlVector<CSchemaType_Bitfield*, CUtlMemory<CSchemaType_Bitfield*, int> >* , );
	void ~CSchemaPtrMap(CSchemaPtrMap<int, CSchemaType_Bitfield*>* );
	void CSchemaPtrMap(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldEC4Ev */
	class CSchemaType_Bitfield * Find(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *, const int  &); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldE4FindERKi */
	class CSchemaType_Bitfield * FindByNameSlow(const class CSchemaPtrMap<int, CSchemaType_Bitfield*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapIiP20CSchemaType_BitfieldE14FindByNameSlowEPKc */
	class CSchemaType_Bitfield * InsertOrDelete(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *, const int  &, class CSchemaType_Bitfield * const &); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldE14InsertOrDeleteERKiRKS1_ */
	class CSchemaType_Bitfield * InsertOrIgnore(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *, const int  &, class CSchemaType_Bitfield * const &); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldE14InsertOrIgnoreERKiRKS1_ */
	bool IsEmpty(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<int, CSchemaType_Bitfield*> *); /* linkage=_ZN13CSchemaPtrMapIiP20CSchemaType_BitfieldED4Ev */
	void CSchemaPtrMap(class CSchemaPtrMap<int, CSchemaType_Atomic*> *); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicEC4Ev */
	class CSchemaType_Atomic * Find(class CSchemaPtrMap<int, CSchemaType_Atomic*> *, const int  &); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicE4FindERKi */
	class CSchemaType_Atomic * FindByNameSlow(const class CSchemaPtrMap<int, CSchemaType_Atomic*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapIiP18CSchemaType_AtomicE14FindByNameSlowEPKc */
	class CSchemaType_Atomic * InsertOrDelete(class CSchemaPtrMap<int, CSchemaType_Atomic*> *, const int  &, class CSchemaType_Atomic * const &); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicE14InsertOrDeleteERKiRKS1_ */
	class CSchemaType_Atomic * InsertOrIgnore(class CSchemaPtrMap<int, CSchemaType_Atomic*> *, const int  &, class CSchemaType_Atomic * const &); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicE14InsertOrIgnoreERKiRKS1_ */
	bool IsEmpty(class CSchemaPtrMap<int, CSchemaType_Atomic*> *); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<int, CSchemaType_Atomic*> *); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<int, CSchemaType_Atomic*> *); /* linkage=_ZN13CSchemaPtrMapIiP18CSchemaType_AtomicED4Ev */
	void CSchemaPtrMap(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tEC4Ev */
	const class SchemaAtomicTypeInfo_t  * Find(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *, const int  &); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tE4FindERKi */
	const class SchemaAtomicTypeInfo_t  * FindByNameSlow(const class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*>  *, const char  *); /* linkage=_ZNK13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tE14FindByNameSlowEPKc */
	const class SchemaAtomicTypeInfo_t  * InsertOrDelete(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *, const int  &, const class SchemaAtomicTypeInfo_t  * const &); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tE14InsertOrDeleteERKiRKS2_ */
	const class SchemaAtomicTypeInfo_t  * InsertOrIgnore(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *, const int  &, const class SchemaAtomicTypeInfo_t  * const &); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tE14InsertOrIgnoreERKiRKS2_ */
	bool IsEmpty(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tE7IsEmptyEv */
	void PurgeAndDeleteElements(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tE22PurgeAndDeleteElementsEv */
	void ~CSchemaPtrMap(class CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> *); /* linkage=_ZN13CSchemaPtrMapIiPK22SchemaAtomicTypeInfo_tED4Ev */
};

// <000D8FE0> schemasystem/schemasystem.h:225
void CSchemaPtrMap<CSchemaType::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8FC7> schemasystem/schemasystem.h:225
inline void CSchemaPtrMap<CSchemaType::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8F80> schemasystem/schemasystem.h:225
void CSchemaPtrMap<int, CSchemaType_Atomic::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8F67> schemasystem/schemasystem.h:225
inline void CSchemaPtrMap<int, CSchemaType_Atomic::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8F20> schemasystem/schemasystem.h:225
void CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8F07> schemasystem/schemasystem.h:225
inline void CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8EC0> schemasystem/schemasystem.h:225
void CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8EA7> schemasystem/schemasystem.h:225
inline void CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8E60> schemasystem/schemasystem.h:225
void CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8E47> schemasystem/schemasystem.h:225
inline void CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8E00> schemasystem/schemasystem.h:225
void CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8DE7> schemasystem/schemasystem.h:225
inline void CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8DA0> schemasystem/schemasystem.h:225
void CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8D87> schemasystem/schemasystem.h:225
inline void CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8D40> schemasystem/schemasystem.h:225
void CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8D27> schemasystem/schemasystem.h:225
inline void CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8CE0> schemasystem/schemasystem.h:225
void CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8CC7> schemasystem/schemasystem.h:225
inline void CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8C80> schemasystem/schemasystem.h:225
void CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8C67> schemasystem/schemasystem.h:225
inline void CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8C20> schemasystem/schemasystem.h:225
void CSchemaPtrMap<int, CSchemaType_Bitfield::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8C07> schemasystem/schemasystem.h:225
inline void CSchemaPtrMap<int, CSchemaType_Bitfield::CSchemaPtrMap()
{
} /* size: 0 */

// <000D8A08> schemasystem/schemasystem.h:229
// variables: 2
inline void CSchemaPtrMap<CSchemaType::Find(CSchemaType* const& key)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_231; // 231
	IndexType_t nIdx; // 232
} /* size: 0, variables: 2 */

// <000D87F1> schemasystem/schemasystem.h:229
// variables: 2
inline void CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Find(const TypeAndCountInfo_t& key)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_231; // 231
	IndexType_t nIdx; // 232
} /* size: 0, variables: 2 */

// <000D7C0E> schemasystem/schemasystem.h:229
// variables: 2
inline void CSchemaPtrMap<int, CSchemaType_Bitfield::Find(const int& key)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_231; // 231
	IndexType_t nIdx; // 232
} /* size: 0, variables: 2 */

// <000D79AA> schemasystem/schemasystem.h:229
// variables: 2
inline void CSchemaPtrMap<int, CSchemaType_Atomic::Find(const int& key)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_231; // 231
	IndexType_t nIdx; // 232
} /* size: 0, variables: 2 */

// <000D796D> schemasystem/schemasystem.h:229
// variables: 2
inline void CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Find(const AtomicTypeInfo_T_t& key)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_231; // 231
	IndexType_t nIdx; // 232
} /* size: 0, variables: 2 */

// <000D6F1F> schemasystem/schemasystem.h:229
// variables: 2
inline void CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Find(const AtomicTypeInfo_T_t& key)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_231; // 231
	IndexType_t nIdx; // 232
} /* size: 0, variables: 2 */

// <000D6290> schemasystem/schemasystem.h:229
// variables: 2
inline void CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Find(const AtomicTypeInfo_TT_t& key)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_231; // 231
	IndexType_t nIdx; // 232
} /* size: 0, variables: 2 */

// <000D561D> schemasystem/schemasystem.h:229
// variables: 2
inline void CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::Find(const AtomicTypeInfo_I_t& key)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_231; // 231
	IndexType_t nIdx; // 232
} /* size: 0, variables: 2 */

// <000D53AC> schemasystem/schemasystem.h:229
// variables: 2
inline void CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass::Find(const unsigned int& key)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_231; // 231
	IndexType_t nIdx; // 232
} /* size: 0, variables: 2 */

// <000D52DB> schemasystem/schemasystem.h:229
// variables: 2
inline void CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum::Find(const unsigned int& key)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_231; // 231
	IndexType_t nIdx; // 232
} /* size: 0, variables: 2 */

// <000D02FB> schemasystem/schemasystem.h:229
// variables: 2
inline void CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t::Find(const int& key)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_231; // 231
	IndexType_t nIdx; // 232
} /* size: 0, variables: 2 */

// <000D882E> schemasystem/schemasystem.h:250
// variables: 2
inline void CSchemaPtrMap<CSchemaType::InsertOrDelete(CSchemaType* const& key, CSchemaType_Ptr* const& value)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_252; // 252
	IndexType_t nIdx; // 253
} /* size: 0, variables: 2 */

// <000D7C4B> schemasystem/schemasystem.h:250
// variables: 4
// function calls: 33
void CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray::InsertOrDelete(const TypeAndCountInfo_t& key, CSchemaType_FixedArray* const& value)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_252; // 252
	IndexType_t nIdx; // 253
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 252
	CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::FindAltKeyType<TypeAndCountInfo_t>(
						const TypeAndCountInfo_t& search);  // 243
	CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Find(
		const KeyType_t& key);  // 253
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Element(
		short unsigned int i);  // 92
	CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::operator[](
			IndexType_t i);  // 263
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 265
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 256
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::LeftChild(
			short unsigned int i);  // 1667
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Element(
		short unsigned int i);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1669
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::operator[](
			short unsigned int i);  // 617
	CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::RightChild(
			short unsigned int i);  // 1677
	CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::FindInsertionPosition(
				const Node_t& insert,
				bool bCheckForDuplicates,
				short unsigned int& parent,
				bool& leftchild,
				bool& isDuplicate);  // 1693
	{
		short unsigned int newNode; // 1709
		{
		}
	}
	{
		short unsigned int newNode; // 1696
	}
	CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Insert(
		const Node_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 207
	CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 257
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::Element(
		short unsigned int i);  // 92
	CUtlMap<TypeAndCountInfo_t, CSchemaType_FixedArray::operator[](
			IndexType_t i);  // 258
} /* size: 487, variables: 2, inline expansions: 33 (1028 bytes) */

// <000D7A30> schemasystem/schemasystem.h:250
// variables: 2
inline void CSchemaPtrMap<int, CSchemaType_Bitfield::InsertOrDelete(const int& key, CSchemaType_Bitfield* const& value)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_252; // 252
	IndexType_t nIdx; // 253
} /* size: 0, variables: 2 */

// <000D79E7> schemasystem/schemasystem.h:250
// variables: 2
inline void CSchemaPtrMap<int, CSchemaType_Atomic::InsertOrDelete(const int& key, CSchemaType_Atomic* const& value)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_252; // 252
	IndexType_t nIdx; // 253
} /* size: 0, variables: 2 */

// <000D6F5C> schemasystem/schemasystem.h:250
// variables: 4
// function calls: 33
void CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::InsertOrDelete(const AtomicTypeInfo_T_t& key, CSchemaType_Atomic_T* const& value)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_252; // 252
	IndexType_t nIdx; // 253
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 252
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::FindAltKeyType<AtomicTypeInfo_T_t>(
						const AtomicTypeInfo_T_t& search);  // 243
	CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Find(
		const KeyType_t& key);  // 253
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Element(
		short unsigned int i);  // 92
	CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::operator[](
			IndexType_t i);  // 263
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 265
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 256
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::LeftChild(
			short unsigned int i);  // 1667
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Element(
		short unsigned int i);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1669
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::operator[](
			short unsigned int i);  // 617
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::RightChild(
			short unsigned int i);  // 1677
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::FindInsertionPosition(
				const Node_t& insert,
				bool bCheckForDuplicates,
				short unsigned int& parent,
				bool& leftchild,
				bool& isDuplicate);  // 1693
	{
		short unsigned int newNode; // 1709
		{
		}
	}
	{
		short unsigned int newNode; // 1696
	}
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Insert(
		const Node_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 207
	CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 257
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::Element(
		short unsigned int i);  // 92
	CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::operator[](
			IndexType_t i);  // 258
} /* size: 487, variables: 2, inline expansions: 33 (1028 bytes) */

// <000D62CD> schemasystem/schemasystem.h:250
// variables: 4
// function calls: 33
void CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::InsertOrDelete(const AtomicTypeInfo_T_t& key, CSchemaType_Atomic_CollectionOfT* const& value)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_252; // 252
	IndexType_t nIdx; // 253
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 252
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::FindAltKeyType<AtomicTypeInfo_T_t>(
						const AtomicTypeInfo_T_t& search);  // 243
	CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Find(
		const KeyType_t& key);  // 253
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Element(
		short unsigned int i);  // 92
	CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::operator[](
			IndexType_t i);  // 263
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 265
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 256
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::LeftChild(
			short unsigned int i);  // 1667
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Element(
		short unsigned int i);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1669
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::operator[](
			short unsigned int i);  // 617
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::RightChild(
			short unsigned int i);  // 1677
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::FindInsertionPosition(
				const Node_t& insert,
				bool bCheckForDuplicates,
				short unsigned int& parent,
				bool& leftchild,
				bool& isDuplicate);  // 1693
	{
		short unsigned int newNode; // 1709
		{
		}
	}
	{
		short unsigned int newNode; // 1696
	}
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Insert(
		const Node_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 207
	CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 257
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::Element(
		short unsigned int i);  // 92
	CUtlMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::operator[](
			IndexType_t i);  // 258
} /* size: 487, variables: 2, inline expansions: 33 (1028 bytes) */

// <000D565A> schemasystem/schemasystem.h:250
// variables: 4
// function calls: 33
void CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::InsertOrDelete(const AtomicTypeInfo_TT_t& key, CSchemaType_Atomic_TT* const& value)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_252; // 252
	IndexType_t nIdx; // 253
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 252
	CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::FindAltKeyType<AtomicTypeInfo_TT_t>(
						const AtomicTypeInfo_TT_t& search);  // 243
	CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Find(
		const KeyType_t& key);  // 253
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Element(
		short unsigned int i);  // 92
	CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::operator[](
			IndexType_t i);  // 263
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 265
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 256
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::LeftChild(
			short unsigned int i);  // 1667
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Element(
		short unsigned int i);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1669
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::operator[](
			short unsigned int i);  // 617
	CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::RightChild(
			short unsigned int i);  // 1677
	CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::FindInsertionPosition(
				const Node_t& insert,
				bool bCheckForDuplicates,
				short unsigned int& parent,
				bool& leftchild,
				bool& isDuplicate);  // 1693
	{
		short unsigned int newNode; // 1709
		{
		}
	}
	{
		short unsigned int newNode; // 1696
	}
	CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Insert(
		const Node_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 207
	CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 257
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::Element(
		short unsigned int i);  // 92
	CUtlMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::operator[](
			IndexType_t i);  // 258
} /* size: 503, variables: 2, inline expansions: 33 (1048 bytes) */

// <000D53E9> schemasystem/schemasystem.h:250
// variables: 2
inline void CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::InsertOrDelete(const AtomicTypeInfo_I_t& key, CSchemaType_Atomic_I* const& value)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_252; // 252
	IndexType_t nIdx; // 253
} /* size: 0, variables: 2 */

// <000D5318> schemasystem/schemasystem.h:250
// variables: 2
inline void CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass::InsertOrDelete(const unsigned int& key, CSchemaType_DeclaredClass* const& value)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_252; // 252
	IndexType_t nIdx; // 253
} /* size: 0, variables: 2 */

// <000D041B> schemasystem/schemasystem.h:250
// variables: 2
inline void CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum::InsertOrDelete(const unsigned int& key, CSchemaType_DeclaredEnum* const& value)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_252; // 252
	IndexType_t nIdx; // 253
} /* size: 0, variables: 2 */

// <000D03CE> schemasystem/schemasystem.h:267
// variables: 2
inline void CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t::InsertOrIgnore(const int& key, const SchemaAtomicTypeInfo_t* const& value)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_269; // 269
	IndexType_t nIdx; // 270
} /* size: 0, variables: 2 */

// <000CE3DF> schemasystem/schemasystem.h:283
// variables: 5
inline void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<CSchemaType*, CSchemaType_Ptr, CSchemaPtrMap<CSchemaType::CSchemaSystemTypeScope::FinalizeTypeScope(CUtlVector<CSchemaType*, CUtlMemory<CSchemaType*, int> >* pOutMatchingKeys, CUtlVector<CSchemaType_Ptr*, CUtlMemory<CSchemaType_Ptr*, int> >* pOutMatchingValues, const p)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_285; // 285
	{
		IndexType_t i; // 286
		{
			CSchemaType_Ptr* val; // 288
			{
				CSchemaType* key; // 291
				IndexType_t nRemoveIndex; // 295
			}
		}
	}
} /* size: 0, variables: 1 */

// <000CE20D> schemasystem/schemasystem.h:283
// variables: 5
inline void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<int, CSchemaType_Atomic, CSchemaPtrMap<int, CSchemaType_Atomic::CSchemaSystemTypeScope::FinalizeTypeScope(CUtlVector<int, CUtlMemory<int, int> >* pOutMatchingKeys, CUtlVector<CSchemaType_Atomic*, CUtlMemory<CSchemaType_Atomic*, int> >* pOutMatchingValues, const p)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_285; // 285
	{
		IndexType_t i; // 286
		{
			CSchemaType_Atomic* val; // 288
			{
				int key; // 291
				IndexType_t nRemoveIndex; // 295
			}
		}
	}
} /* size: 0, variables: 1 */

// <000CE03B> schemasystem/schemasystem.h:283
// variables: 5
inline void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_T_t, CSchemaType_Atomic_T, CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T::CSchemaSystemTypeScope::FinalizeTypeScope(CUtlVector<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >* pOutMatchingKeys, CUtlVector<CSchemaType_Atomic_T*, CUtlMemory<CSchemaType_Atomic_T*, int> >* pOutMatchingValues, const p)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_285; // 285
	{
		IndexType_t i; // 286
		{
			CSchemaType_Atomic_T* val; // 288
			{
				AtomicTypeInfo_T_t key; // 291
				IndexType_t nRemoveIndex; // 295
			}
		}
	}
} /* size: 0, variables: 1 */

// <000CDEC9> schemasystem/schemasystem.h:283
// variables: 5
inline void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT, CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT::CSchemaSystemTypeScope::FinalizeTypeScope(CUtlVector<AtomicTypeInfo_T_t, CUtlMemory<AtomicTypeInfo_T_t, int> >* pOutMatchingKeys, CUtlVector<CSchemaType_Atomic_CollectionOfT*, CUtlMemory<CSchemaType_Atomic_CollectionOfT*, int> >* pOutMatchingValues, const p)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_285; // 285
	{
		IndexType_t i; // 286
		{
			CSchemaType_Atomic_CollectionOfT* val; // 288
			{
				AtomicTypeInfo_T_t key; // 291
				IndexType_t nRemoveIndex; // 295
			}
		}
	}
} /* size: 0, variables: 1 */

// <000CDD34> schemasystem/schemasystem.h:283
// variables: 5
inline void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT, CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT::CSchemaSystemTypeScope::FinalizeTypeScope(CUtlVector<AtomicTypeInfo_TT_t, CUtlMemory<AtomicTypeInfo_TT_t, int> >* pOutMatchingKeys, CUtlVector<CSchemaType_Atomic_TT*, CUtlMemory<CSchemaType_Atomic_TT*, int> >* pOutMatchingValues, const p)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_285; // 285
	{
		IndexType_t i; // 286
		{
			CSchemaType_Atomic_TT* val; // 288
			{
				AtomicTypeInfo_TT_t key; // 291
				IndexType_t nRemoveIndex; // 295
			}
		}
	}
} /* size: 0, variables: 1 */

// <000CDB62> schemasystem/schemasystem.h:283
// variables: 5
inline void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<AtomicTypeInfo_I_t, CSchemaType_Atomic_I, CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I::CSchemaSystemTypeScope::FinalizeTypeScope(CUtlVector<AtomicTypeInfo_I_t, CUtlMemory<AtomicTypeInfo_I_t, int> >* pOutMatchingKeys, CUtlVector<CSchemaType_Atomic_I*, CUtlMemory<CSchemaType_Atomic_I*, int> >* pOutMatchingValues, const p)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_285; // 285
	{
		IndexType_t i; // 286
		{
			CSchemaType_Atomic_I* val; // 288
			{
				AtomicTypeInfo_I_t key; // 291
				IndexType_t nRemoveIndex; // 295
			}
		}
	}
} /* size: 0, variables: 1 */

// <000CD990> schemasystem/schemasystem.h:283
// variables: 5
inline void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<unsigned int, CSchemaType_DeclaredClass, CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass::CSchemaSystemTypeScope::FinalizeTypeScope(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pOutMatchingKeys, CUtlVector<CSchemaType_DeclaredClass*, CUtlMemory<CSchemaType_DeclaredClass*, int> >* pOutMatchingValues, const p)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_285; // 285
	{
		IndexType_t i; // 286
		{
			CSchemaType_DeclaredClass* val; // 288
			{
				unsigned int key; // 291
				IndexType_t nRemoveIndex; // 295
			}
		}
	}
} /* size: 0, variables: 1 */

// <000CD837> schemasystem/schemasystem.h:283
// variables: 5
inline void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<unsigned int, CSchemaType_DeclaredEnum, CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum::CSchemaSystemTypeScope::FinalizeTypeScope(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pOutMatchingKeys, CUtlVector<CSchemaType_DeclaredEnum*, CUtlMemory<CSchemaType_DeclaredEnum*, int> >* pOutMatchingValues, const p)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_285; // 285
	{
		IndexType_t i; // 286
		{
			CSchemaType_DeclaredEnum* val; // 288
			{
				unsigned int key; // 291
				IndexType_t nRemoveIndex; // 295
			}
		}
	}
} /* size: 0, variables: 1 */

// <000CD689> schemasystem/schemasystem.h:283
// variables: 5
inline void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<TypeAndCountInfo_t, CSchemaType_FixedArray, CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray::CSchemaSystemTypeScope::FinalizeTypeScope(CUtlVector<TypeAndCountInfo_t, CUtlMemory<TypeAndCountInfo_t, int> >* pOutMatchingKeys, CUtlVector<CSchemaType_FixedArray*, CUtlMemory<CSchemaType_FixedArray*, int> >* pOutMatchingValues, const p)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_285; // 285
	{
		IndexType_t i; // 286
		{
			CSchemaType_FixedArray* val; // 288
			{
				TypeAndCountInfo_t key; // 291
				IndexType_t nRemoveIndex; // 295
			}
		}
	}
} /* size: 0, variables: 1 */

// <000CD517> schemasystem/schemasystem.h:283
// variables: 5
inline void ExtractMatchingValues<PromoteUnresolvedAndGlobalTypes<int, CSchemaType_Bitfield, CSchemaPtrMap<int, CSchemaType_Bitfield::CSchemaSystemTypeScope::FinalizeTypeScope(CUtlVector<int, CUtlMemory<int, int> >* pOutMatchingKeys, CUtlVector<CSchemaType_Bitfield*, CUtlMemory<CSchemaType_Bitfield*, int> >* pOutMatchingValues, const p)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_285; // 285
	{
		IndexType_t i; // 286
		{
			CSchemaType_Bitfield* val; // 288
			{
				int key; // 291
				IndexType_t nRemoveIndex; // 295
			}
		}
	}
} /* size: 0, variables: 1 */

// <000D0B68> schemasystem/schemasystem.h:306
inline void CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t::IsEmpty()
{
} /* size: 0 */

// <000D8A67> schemasystem/schemasystem.h:311
// variable: 1
inline void CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass::PurgeAndDeleteElements()
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_313; // 313
} /* size: 0, variables: 1 */

// <00048D06> schemasystem/schemasystem.h:326
// member functions: 3
// member variables: 2
// struct size: 16
struct AtomicTypeInfo_T_t {
	/* schemasystem/schemasystem.h:328 */
	void AtomicTypeInfo_T_t(AtomicTypeInfo_T_t* );
	/* schemasystem/schemasystem.h:329 */
	void AtomicTypeInfo_T_t(AtomicTypeInfo_T_t* , int, CSchemaType* );
	/* schemasystem/schemasystem.h:333 */
	bool operator<(const AtomicTypeInfo_T_t* , const AtomicTypeInfo_T_t& );
	int m_nTypeId; /* 0 4 */
	CSchemaType * m_pParam1Type; /* 8 8 */
};

// <00101C4E> schemasystem/schemasystem.h:328
void AtomicTypeInfo_T_t::AtomicTypeInfo_T_t()
{
} /* size: 0 */

// <00101C35> schemasystem/schemasystem.h:328
inline void AtomicTypeInfo_T_t::AtomicTypeInfo_T_t()
{
} /* size: 0 */

// <00101C14> schemasystem/schemasystem.h:329
void AtomicTypeInfo_T_t::AtomicTypeInfo_T_t(int nId, CSchemaType* pParam)
{
} /* size: 0 */

// <00101BE1> schemasystem/schemasystem.h:329
inline void AtomicTypeInfo_T_t::AtomicTypeInfo_T_t(int nId, CSchemaType* pParam)
{
} /* size: 0 */

// <00101BBB> schemasystem/schemasystem.h:333
inline void AtomicTypeInfo_T_t::operator<(const AtomicTypeInfo_T_t& rhs)
{
} /* size: 0 */

// <00048DC3> schemasystem/schemasystem.h:344
// member functions: 3
// member variables: 3
// struct size: 24
struct AtomicTypeInfo_TT_t {
	/* schemasystem/schemasystem.h:346 */
	void AtomicTypeInfo_TT_t(AtomicTypeInfo_TT_t* );
	/* schemasystem/schemasystem.h:347 */
	void AtomicTypeInfo_TT_t(AtomicTypeInfo_TT_t* , int, CSchemaType* , CSchemaType* );
	/* schemasystem/schemasystem.h:351 */
	bool operator<(const AtomicTypeInfo_TT_t* , const AtomicTypeInfo_TT_t& );
	int m_nTypeId; /* 0 4 */
	CSchemaType * m_pParam1Type; /* 8 8 */
	CSchemaType * m_pParam2Type; /* 16 8 */
};

// <00101BA4> schemasystem/schemasystem.h:346
void AtomicTypeInfo_TT_t::AtomicTypeInfo_TT_t()
{
} /* size: 0 */

// <00101B8B> schemasystem/schemasystem.h:346
inline void AtomicTypeInfo_TT_t::AtomicTypeInfo_TT_t()
{
} /* size: 0 */

// <00101B65> schemasystem/schemasystem.h:347
void AtomicTypeInfo_TT_t::AtomicTypeInfo_TT_t(int nId, CSchemaType* pParam1, CSchemaType* pParam2)
{
} /* size: 0 */

// <00101B25> schemasystem/schemasystem.h:347
inline void AtomicTypeInfo_TT_t::AtomicTypeInfo_TT_t(int nId, CSchemaType* pParam1, CSchemaType* pParam2)
{
} /* size: 0 */

// <00101AFF> schemasystem/schemasystem.h:351
inline void AtomicTypeInfo_TT_t::operator<(const AtomicTypeInfo_TT_t& rhs)
{
} /* size: 0 */

// <00048E95> schemasystem/schemasystem.h:368
// member functions: 3
// member variables: 2
// struct size: 8
struct AtomicTypeInfo_I_t {
	/* schemasystem/schemasystem.h:370 */
	void AtomicTypeInfo_I_t(AtomicTypeInfo_I_t* );
	/* schemasystem/schemasystem.h:371 */
	void AtomicTypeInfo_I_t(AtomicTypeInfo_I_t* , int, int);
	/* schemasystem/schemasystem.h:375 */
	bool operator<(const AtomicTypeInfo_I_t* , const AtomicTypeInfo_I_t& );
	int m_nTypeId; /* 0 4 */
	int m_nParam; /* 4 4 */
};

// <00101AE8> schemasystem/schemasystem.h:370
void AtomicTypeInfo_I_t::AtomicTypeInfo_I_t()
{
} /* size: 0 */

// <00101ACF> schemasystem/schemasystem.h:370
inline void AtomicTypeInfo_I_t::AtomicTypeInfo_I_t()
{
} /* size: 0 */

// <00101AAE> schemasystem/schemasystem.h:371
void AtomicTypeInfo_I_t::AtomicTypeInfo_I_t(int nId, int nParam)
{
} /* size: 0 */

// <00101A7B> schemasystem/schemasystem.h:371
inline void AtomicTypeInfo_I_t::AtomicTypeInfo_I_t(int nId, int nParam)
{
} /* size: 0 */

// <00101A55> schemasystem/schemasystem.h:375
inline void AtomicTypeInfo_I_t::operator<(const AtomicTypeInfo_I_t& rhs)
{
} /* size: 0 */

// <00048F52> schemasystem/schemasystem.h:386
// member functions: 3
// member variables: 2
// struct size: 16
struct TypeAndCountInfo_t {
	/* schemasystem/schemasystem.h:388 */
	void TypeAndCountInfo_t(TypeAndCountInfo_t* );
	/* schemasystem/schemasystem.h:389 */
	void TypeAndCountInfo_t(TypeAndCountInfo_t* , int, CSchemaType* );
	/* schemasystem/schemasystem.h:393 */
	bool operator<(const TypeAndCountInfo_t* , const TypeAndCountInfo_t& );
	int m_nCount; /* 0 4 */
	CSchemaType * m_pParam1Type; /* 8 8 */
};

// <00101A3E> schemasystem/schemasystem.h:388
void TypeAndCountInfo_t::TypeAndCountInfo_t()
{
} /* size: 0 */

// <00101A25> schemasystem/schemasystem.h:388
inline void TypeAndCountInfo_t::TypeAndCountInfo_t()
{
} /* size: 0 */

// <00101A04> schemasystem/schemasystem.h:389
void TypeAndCountInfo_t::TypeAndCountInfo_t(int nCount, CSchemaType* pParam)
{
} /* size: 0 */

// <001019D1> schemasystem/schemasystem.h:389
inline void TypeAndCountInfo_t::TypeAndCountInfo_t(int nCount, CSchemaType* pParam)
{
} /* size: 0 */

// <001019AB> schemasystem/schemasystem.h:393
inline void TypeAndCountInfo_t::operator<(const TypeAndCountInfo_t& rhs)
{
} /* size: 0 */

// <00045254> schemasystem/schemasystem.h:407
// member functions: 106
// member variables: 19
// vtable entries: 35
// class size: 26,192
class CSchemaSystemTypeScope : public ISchemaSystemTypeScope {
public:
	/* class ISchemaSystemTypeScope <ancestor>; */ /* 0 8 */
	void CSchemaSystemTypeScope(CSchemaSystemTypeScope* , const CSchemaSystemTypeScope& );
	/* schemasystem/schemasystem.cpp:972 */
	void CSchemaSystemTypeScope(CSchemaSystemTypeScope* , const char* , CSchemaSystemTypeScope* );
	/* schemasystem/schemasystem.cpp:982 */
	void ~CSchemaSystemTypeScope(CSchemaSystemTypeScope* );
	char m_ScopeName[256]; /* 8 256 */
	CSchemaSystemTypeScope * m_pParentScope; /* 264 8 */
	bool m_bBuiltinTypesInitalized; /* 272 1 */
	/* schemasystem/schemasystem.cpp:996 */
	void InitializeBuiltinTypes(CSchemaSystemTypeScope* );
	/* schemasystem/schemasystem.cpp:1677 */
	void FinalizeTypeScope(CSchemaSystemTypeScope* );
	/* schemasystem/schemasystem.cpp:426 */
	virtual CSchemaClassInfo* InstallSchemaClassBinding(CSchemaSystemTypeScope* , const char* , CSchemaClassInfo* );
	/* schemasystem/schemasystem.cpp:491 */
	virtual CSchemaEnumInfo* InstallSchemaEnumBinding(CSchemaSystemTypeScope* , const char* , CSchemaEnumInfo* );
	/* schemasystem/schemasystem.cpp:1803 */
	virtual ClassIntrospectionHandle_t FindDeclaredClass(CSchemaSystemTypeScope* , const char* );
	/* schemasystem/schemasystem.cpp:1817 */
	virtual EnumIntrospectionHandle_t FindDeclaredEnum(CSchemaSystemTypeScope* , const char* );
	/* schemasystem/schemasystem.cpp:1883 */
	virtual void ResolveAtomicInfoThreadsafe(CSchemaSystemTypeScope* , AtomicTypeIntrospectionHandle_t* , const char* , SchemaClassId_t);
	/* schemasystem/schemasystem.cpp:1909 */
	virtual void ResolveEnumInfoThreadsafe(CSchemaSystemTypeScope* , EnumIntrospectionHandle_t* , const char* );
	/* schemasystem/schemasystem.cpp:1929 */
	virtual void ResolveClassInfoThreadsafe(CSchemaSystemTypeScope* , ClassIntrospectionHandle_t* , const char* );
	/* schemasystem/schemasystem.cpp:1069 */
	virtual CSchemaType* Type_Builtin(CSchemaSystemTypeScope* , SchemaBuiltinType_t);
	/* schemasystem/schemasystem.cpp:1106 */
	virtual CSchemaType* Type_Ptr(CSchemaSystemTypeScope* , CSchemaType* );
	/* schemasystem/schemasystem.cpp:1240 */
	virtual CSchemaType* Type_Atomic(CSchemaSystemTypeScope* , const char* , uint16, uint8);
	/* schemasystem/schemasystem.cpp:1320 */
	virtual CSchemaType* Type_Atomic_T(CSchemaSystemTypeScope* , const char* , uint16, uint8, CSchemaType* );
	/* schemasystem/schemasystem.cpp:1384 */
	virtual CSchemaType* Type_Atomic_CollectionOfT(CSchemaSystemTypeScope* , const char* , uint16, uint8, uint16, CSchemaType* , ISchemaCollectionManipulator* );
	/* schemasystem/schemasystem.cpp:1452 */
	virtual CSchemaType* Type_Atomic_TT(CSchemaSystemTypeScope* , const char* , uint16, uint8, CSchemaType* , CSchemaType* );
	/* schemasystem/schemasystem.cpp:1519 */
	virtual CSchemaType* Type_Atomic_I(CSchemaSystemTypeScope* , const char* , uint16, uint8, int);
	/* schemasystem/schemasystem.cpp:1577 */
	virtual CSchemaType* Type_DeclaredClass(CSchemaSystemTypeScope* , const char* );
	/* schemasystem/schemasystem.cpp:1780 */
	virtual CSchemaType* Type_DeclaredEnum(CSchemaSystemTypeScope* , const char* );
	/* schemasystem/schemasystem.cpp:1131 */
	virtual CSchemaType* Type_FixedArray(CSchemaSystemTypeScope* , CSchemaType* , int, uint16, uint8);
	/* schemasystem/schemasystem.cpp:1200 */
	virtual CSchemaType* Type_Bitfield(CSchemaSystemTypeScope* , int);
	/* schemasystem/schemasystem.cpp:1226 */
	virtual CSchemaType* Type_NoschemaType(CSchemaSystemTypeScope* );
	/* schemasystem/schemasystem.cpp:1990 */
	virtual CSchemaType* FindBuiltinTypeByName(CSchemaSystemTypeScope* , const char* );
	/* schemasystem/schemasystem.cpp:1853 */
	void RegisterAtomicType(CSchemaSystemTypeScope* , AtomicTypeIntrospectionHandle_t);
	/* schemasystem/schemasystem.cpp:1272 */
	virtual CSchemaType* FindType_Atomic(CSchemaSystemTypeScope* , SchemaClassId_t);
	/* schemasystem/schemasystem.cpp:1295 */
	virtual CSchemaType* FindType_Atomic_T(CSchemaSystemTypeScope* , SchemaClassId_t, CSchemaType* );
	/* schemasystem/schemasystem.cpp:1359 */
	virtual CSchemaType* FindType_Atomic_CollectionOfT(CSchemaSystemTypeScope* , SchemaClassId_t, CSchemaType* );
	/* schemasystem/schemasystem.cpp:1425 */
	virtual CSchemaType* FindType_Atomic_TT(CSchemaSystemTypeScope* , SchemaClassId_t, CSchemaType* , CSchemaType* );
	/* schemasystem/schemasystem.cpp:1495 */
	virtual CSchemaType* FindType_Atomic_I(CSchemaSystemTypeScope* , SchemaClassId_t, int);
	/* schemasystem/schemasystem.cpp:1557 */
	virtual CSchemaType_DeclaredClass* FindType_DeclaredClass(CSchemaSystemTypeScope* , const char* );
	/* schemasystem/schemasystem.cpp:1608 */
	virtual CSchemaType_DeclaredEnum* FindType_DeclaredEnum(CSchemaSystemTypeScope* , const char* );
	/* schemasystem/schemasystem.cpp:1280 */
	CSchemaType_Atomic* FindType_Atomic_Internal(CSchemaSystemTypeScope* , SchemaClassId_t);
	/* schemasystem/schemasystem.cpp:1303 */
	CSchemaType_Atomic_T* FindType_Atomic_T_Internal(CSchemaSystemTypeScope* , SchemaClassId_t, CSchemaType* );
	/* schemasystem/schemasystem.cpp:1367 */
	CSchemaType_Atomic_CollectionOfT* FindType_Atomic_CollectionOfT_Internal(CSchemaSystemTypeScope* , SchemaClassId_t, CSchemaType* );
	/* schemasystem/schemasystem.cpp:1433 */
	CSchemaType_Atomic_TT* FindType_Atomic_TT_Internal(CSchemaSystemTypeScope* , SchemaClassId_t, CSchemaType* , CSchemaType* );
	/* schemasystem/schemasystem.cpp:1503 */
	CSchemaType_Atomic_I* FindType_Atomic_I_Internal(CSchemaSystemTypeScope* , SchemaClassId_t, int);
	CSchemaType_Builtin m_BuiltinTypes[14]; /* 280 448 */
	CSchemaPtrMap<CSchemaType*, CSchemaType_Ptr*> m_Types_Ptr; /* 728 64 */
	CSchemaPtrMap<int, CSchemaType_Atomic*> m_Types_Atomic; /* 792 64 */
	CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_T*> m_Types_Atomic_T; /* 856 64 */
	CSchemaPtrMap<AtomicTypeInfo_T_t, CSchemaType_Atomic_CollectionOfT*> m_Types_Atomic_CollectionOfT; /* 920 64 */
	CSchemaPtrMap<AtomicTypeInfo_TT_t, CSchemaType_Atomic_TT*> m_Types_Atomic_TT; /* 984 64 */
	CSchemaPtrMap<AtomicTypeInfo_I_t, CSchemaType_Atomic_I*> m_Types_Atomic_I; /* 1048 64 */
	CSchemaPtrMap<unsigned int, CSchemaType_DeclaredClass*> m_Types_DeclaredClass; /* 1112 64 */
	CSchemaPtrMap<unsigned int, CSchemaType_DeclaredEnum*> m_Types_DeclaredEnum; /* 1176 64 */
	CSchemaPtrMap<int, const SchemaAtomicTypeInfo_t*> m_AtomicDeclarations; /* 1240 64 */
	CSchemaPtrMap<TypeAndCountInfo_t, CSchemaType_FixedArray*> m_Types_FixedArray; /* 1304 64 */
	CSchemaPtrMap<int, CSchemaType_Bitfield*> m_Types_Bitfield; /* 1368 64 */
	CSchemaType_NoschemaType m_Type_NoschemaType; /* 1432 24 */
	/* schemasystem/schemasystem.h:475 */
	typedef struct CUtlTSHash<CSchemaClassInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int> > ClassBindingTable_t;
	ClassBindingTable_t m_ClassBindings __attribute__((__aligned__(16))); /* 1456 12368 */
	/* schemasystem/schemasystem.h:478 */
	typedef struct CUtlTSHash<CSchemaEnumInfo*, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int> > EnumBindingTable_t;
	EnumBindingTable_t m_EnumBindings __attribute__((__aligned__(16))); /* 13824 12368 */
	/* schemasystem/schemasystem.cpp:518 */
	virtual const CSchemaClassInfo* FindRawClassBinding(CSchemaSystemTypeScope* , const char* );
	/* schemasystem/schemasystem.cpp:524 */
	virtual const CSchemaClassInfo* FindRawClassBinding(CSchemaSystemTypeScope* , SchemaClassId_t);
	/* schemasystem/schemasystem.cpp:548 */
	virtual const CSchemaEnumInfo* FindRawEnumBinding(CSchemaSystemTypeScope* , const char* );
	/* schemasystem/schemasystem.cpp:554 */
	virtual const CSchemaEnumInfo* FindRawEnumBinding(CSchemaSystemTypeScope* , SchemaClassId_t);
	/* schemasystem/schemasystem.cpp:747 */
	void FindDescendentsOfClass_Start(CSchemaSystemTypeScope* , ClassIntrospectionHandle_t, SchemaSubclassTraversalDepth_t, CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> >* );
	/* schemasystem/schemasystem.cpp:762 */
	void FindDescendentsOfClass_R(CSchemaSystemTypeScope* , CSchemaClassInfo** , int, ClassIntrospectionHandle_t, bool, bool, CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> >* );
	/* schemasystem/schemasystem.h:489 */
	int AppendClassBaseBindings(CSchemaSystemTypeScope* , const char* , CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >* );
	/* schemasystem/schemasystem.h:490 */
	int AppendEnumBaseBindings(CSchemaSystemTypeScope* , const char* , CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >* );
	/* schemasystem/schemasystem.h:491 */
	bool FindBaseBinding(CSchemaSystemTypeScope* , const char* , SchemaBaseBindingInfo_t* , uint32);
	/* schemasystem/schemasystem.cpp:1027 */
	virtual const char* GetScopeName(CSchemaSystemTypeScope* );
	/* schemasystem/schemasystem.cpp:1035 */
	virtual bool IsGlobalScope(CSchemaSystemTypeScope* );
	/* schemasystem/schemasystem.cpp:1042 */
	virtual void MarkClassAsRequiringGlobalPromotion(CSchemaSystemTypeScope* , ClassIntrospectionHandle_t);
	/* schemasystem/schemasystem.cpp:1052 */
	virtual void MarkEnumAsRequiringGlobalPromotion(CSchemaSystemTypeScope* , EnumIntrospectionHandle_t);
	/* schemasystem/schemasystem.cpp:328 */
	bool InsertNewClassBinding(CSchemaSystemTypeScope* , SchemaClassId_t, CSchemaClassInfo* , CSchemaClassInfo** );
	/* schemasystem/schemasystem.cpp:376 */
	bool InsertNewEnumBinding(CSchemaSystemTypeScope* , SchemaClassId_t, CSchemaEnumInfo* , CSchemaEnumInfo** );
	void CSchemaSystemTypeScope(class CSchemaSystemTypeScope *, const class CSchemaSystemTypeScope  &); /* linkage=_ZN22CSchemaSystemTypeScopeC4ERKS_ */
	void CSchemaSystemTypeScope(class CSchemaSystemTypeScope *, const char  *, class CSchemaSystemTypeScope *); /* linkage=_ZN22CSchemaSystemTypeScopeC4EPKcPS_ */
	void ~CSchemaSystemTypeScope(class CSchemaSystemTypeScope *); /* linkage=_ZN22CSchemaSystemTypeScopeD4Ev */
	void InitializeBuiltinTypes(class CSchemaSystemTypeScope *); /* linkage=_ZN22CSchemaSystemTypeScope22InitializeBuiltinTypesEv */
	void FinalizeTypeScope(class CSchemaSystemTypeScope *); /* linkage=_ZN22CSchemaSystemTypeScope17FinalizeTypeScopeEv */
	virtual class CSchemaClassInfo * InstallSchemaClassBinding(class CSchemaSystemTypeScope *, const char  *, class CSchemaClassInfo *); /* linkage=_ZN22CSchemaSystemTypeScope25InstallSchemaClassBindingEPKcP16CSchemaClassInfo */
	virtual class CSchemaEnumInfo * InstallSchemaEnumBinding(class CSchemaSystemTypeScope *, const char  *, class CSchemaEnumInfo *); /* linkage=_ZN22CSchemaSystemTypeScope24InstallSchemaEnumBindingEPKcP15CSchemaEnumInfo */
	virtual ClassIntrospectionHandle_t FindDeclaredClass(class CSchemaSystemTypeScope *, const char  *); /* linkage=_ZN22CSchemaSystemTypeScope17FindDeclaredClassEPKc */
	virtual EnumIntrospectionHandle_t FindDeclaredEnum(class CSchemaSystemTypeScope *, const char  *); /* linkage=_ZN22CSchemaSystemTypeScope16FindDeclaredEnumEPKc */
	virtual void ResolveAtomicInfoThreadsafe(class CSchemaSystemTypeScope *, AtomicTypeIntrospectionHandle_t *, const char  *, SchemaClassId_t); /* linkage=_ZN22CSchemaSystemTypeScope27ResolveAtomicInfoThreadsafeEPPK22SchemaAtomicTypeInfo_tPKcj */
	virtual void ResolveEnumInfoThreadsafe(class CSchemaSystemTypeScope *, EnumIntrospectionHandle_t *, const char  *); /* linkage=_ZN22CSchemaSystemTypeScope25ResolveEnumInfoThreadsafeEPPK15CSchemaEnumInfoPKc */
	virtual void ResolveClassInfoThreadsafe(class CSchemaSystemTypeScope *, ClassIntrospectionHandle_t *, const char  *); /* linkage=_ZN22CSchemaSystemTypeScope26ResolveClassInfoThreadsafeEPPK16CSchemaClassInfoPKc */
	/* <106d01> schemasystem/schemasystem.cpp:1069 */
	virtual class CSchemaType * Type_Builtin(class CSchemaSystemTypeScope *, enum SchemaBuiltinType_t); /* linkage=_ZN22CSchemaSystemTypeScope12Type_BuiltinE19SchemaBuiltinType_t */
	virtual class CSchemaType * Type_Ptr(class CSchemaSystemTypeScope *, class CSchemaType *); /* linkage=_ZN22CSchemaSystemTypeScope8Type_PtrEP11CSchemaType */
	/* <10d0f3> schemasystem/schemasystem.cpp:1240 */
	virtual class CSchemaType * Type_Atomic(class CSchemaSystemTypeScope *, const char  *, uint16, uint8); /* linkage=_ZN22CSchemaSystemTypeScope11Type_AtomicEPKcth */
	virtual class CSchemaType * Type_Atomic_T(class CSchemaSystemTypeScope *, const char  *, uint16, uint8, class CSchemaType *); /* linkage=_ZN22CSchemaSystemTypeScope13Type_Atomic_TEPKcthP11CSchemaType */
	virtual class CSchemaType * Type_Atomic_CollectionOfT(class CSchemaSystemTypeScope *, const char  *, uint16, uint8, uint16, class CSchemaType *, class ISchemaCollectionManipulator *); /* linkage=_ZN22CSchemaSystemTypeScope25Type_Atomic_CollectionOfTEPKcthtP11CSchemaTypeP28ISchemaCollectionManipulator */
	virtual class CSchemaType * Type_Atomic_TT(class CSchemaSystemTypeScope *, const char  *, uint16, uint8, class CSchemaType *, class CSchemaType *); /* linkage=_ZN22CSchemaSystemTypeScope14Type_Atomic_TTEPKcthP11CSchemaTypeS3_ */
	/* <10f90f> schemasystem/schemasystem.cpp:1519 */
	virtual class CSchemaType * Type_Atomic_I(class CSchemaSystemTypeScope *, const char  *, uint16, uint8, int); /* linkage=_ZN22CSchemaSystemTypeScope13Type_Atomic_IEPKcthi */
	virtual class CSchemaType * Type_DeclaredClass(class CSchemaSystemTypeScope *, const char  *); /* linkage=_ZN22CSchemaSystemTypeScope18Type_DeclaredClassEPKc */
	virtual class CSchemaType * Type_DeclaredEnum(class CSchemaSystemTypeScope *, const char  *); /* linkage=_ZN22CSchemaSystemTypeScope17Type_DeclaredEnumEPKc */
	virtual class CSchemaType * Type_FixedArray(class CSchemaSystemTypeScope *, class CSchemaType *, int, uint16, uint8); /* linkage=_ZN22CSchemaSystemTypeScope15Type_FixedArrayEP11CSchemaTypeith */
	virtual class CSchemaType * Type_Bitfield(class CSchemaSystemTypeScope *, int); /* linkage=_ZN22CSchemaSystemTypeScope13Type_BitfieldEi */
	/* <105d9e> schemasystem/schemasystem.cpp:1226 */
	virtual class CSchemaType * Type_NoschemaType(class CSchemaSystemTypeScope *); /* linkage=_ZN22CSchemaSystemTypeScope17Type_NoschemaTypeEv */
	virtual class CSchemaType * FindBuiltinTypeByName(class CSchemaSystemTypeScope *, const char  *); /* linkage=_ZN22CSchemaSystemTypeScope21FindBuiltinTypeByNameEPKc */
	void RegisterAtomicType(class CSchemaSystemTypeScope *, AtomicTypeIntrospectionHandle_t); /* linkage=_ZN22CSchemaSystemTypeScope18RegisterAtomicTypeEPK22SchemaAtomicTypeInfo_t */
	virtual class CSchemaType * FindType_Atomic(class CSchemaSystemTypeScope *, SchemaClassId_t); /* linkage=_ZN22CSchemaSystemTypeScope15FindType_AtomicEj */
	virtual class CSchemaType * FindType_Atomic_T(class CSchemaSystemTypeScope *, SchemaClassId_t, class CSchemaType *); /* linkage=_ZN22CSchemaSystemTypeScope17FindType_Atomic_TEjP11CSchemaType */
	virtual class CSchemaType * FindType_Atomic_CollectionOfT(class CSchemaSystemTypeScope *, SchemaClassId_t, class CSchemaType *); /* linkage=_ZN22CSchemaSystemTypeScope29FindType_Atomic_CollectionOfTEjP11CSchemaType */
	virtual class CSchemaType * FindType_Atomic_TT(class CSchemaSystemTypeScope *, SchemaClassId_t, class CSchemaType *, class CSchemaType *); /* linkage=_ZN22CSchemaSystemTypeScope18FindType_Atomic_TTEjP11CSchemaTypeS1_ */
	virtual class CSchemaType * FindType_Atomic_I(class CSchemaSystemTypeScope *, SchemaClassId_t, int); /* linkage=_ZN22CSchemaSystemTypeScope17FindType_Atomic_IEji */
	/* <108298> schemasystem/schemasystem.cpp:1557 */
	virtual class CSchemaType_DeclaredClass * FindType_DeclaredClass(class CSchemaSystemTypeScope *, const char  *); /* linkage=_ZN22CSchemaSystemTypeScope22FindType_DeclaredClassEPKc */
	/* <108867> schemasystem/schemasystem.cpp:1608 */
	virtual class CSchemaType_DeclaredEnum * FindType_DeclaredEnum(class CSchemaSystemTypeScope *, const char  *); /* linkage=_ZN22CSchemaSystemTypeScope21FindType_DeclaredEnumEPKc */
	/* <1078ac> schemasystem/schemasystem.cpp:1280 */
	class CSchemaType_Atomic * FindType_Atomic_Internal(class CSchemaSystemTypeScope *, SchemaClassId_t); /* linkage=_ZN22CSchemaSystemTypeScope24FindType_Atomic_InternalEj */
	class CSchemaType_Atomic_T * FindType_Atomic_T_Internal(class CSchemaSystemTypeScope *, SchemaClassId_t, class CSchemaType *); /* linkage=_ZN22CSchemaSystemTypeScope26FindType_Atomic_T_InternalEjP11CSchemaType */
	class CSchemaType_Atomic_CollectionOfT * FindType_Atomic_CollectionOfT_Internal(class CSchemaSystemTypeScope *, SchemaClassId_t, class CSchemaType *); /* linkage=_ZN22CSchemaSystemTypeScope38FindType_Atomic_CollectionOfT_InternalEjP11CSchemaType */
	class CSchemaType_Atomic_TT * FindType_Atomic_TT_Internal(class CSchemaSystemTypeScope *, SchemaClassId_t, class CSchemaType *, class CSchemaType *); /* linkage=_ZN22CSchemaSystemTypeScope27FindType_Atomic_TT_InternalEjP11CSchemaTypeS1_ */
	/* <107d76> schemasystem/schemasystem.cpp:1503 */
	class CSchemaType_Atomic_I * FindType_Atomic_I_Internal(class CSchemaSystemTypeScope *, SchemaClassId_t, int); /* linkage=_ZN22CSchemaSystemTypeScope26FindType_Atomic_I_InternalEji */
	/* <1056f5> schemasystem/schemasystem.cpp:518 */
	virtual const class CSchemaClassInfo  * FindRawClassBinding(class CSchemaSystemTypeScope *, const char  *); /* linkage=_ZN22CSchemaSystemTypeScope19FindRawClassBindingEPKc */
	/* <105e54> schemasystem/schemasystem.cpp:524 */
	virtual const class CSchemaClassInfo  * FindRawClassBinding(class CSchemaSystemTypeScope *, SchemaClassId_t); /* linkage=_ZN22CSchemaSystemTypeScope19FindRawClassBindingEj */
	/* <10585c> schemasystem/schemasystem.cpp:548 */
	virtual const class CSchemaEnumInfo  * FindRawEnumBinding(class CSchemaSystemTypeScope *, const char  *); /* linkage=_ZN22CSchemaSystemTypeScope18FindRawEnumBindingEPKc */
	/* <106247> schemasystem/schemasystem.cpp:554 */
	virtual const class CSchemaEnumInfo  * FindRawEnumBinding(class CSchemaSystemTypeScope *, SchemaClassId_t); /* linkage=_ZN22CSchemaSystemTypeScope18FindRawEnumBindingEj */
	void FindDescendentsOfClass_Start(class CSchemaSystemTypeScope *, ClassIntrospectionHandle_t, enum SchemaSubclassTraversalDepth_t, class CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *); /* linkage=_ZN22CSchemaSystemTypeScope28FindDescendentsOfClass_StartEPK16CSchemaClassInfo30SchemaSubclassTraversalDepth_tP10CUtlVectorIS2_10CUtlMemoryIS2_iEE */
	void FindDescendentsOfClass_R(class CSchemaSystemTypeScope *, class CSchemaClassInfo * *, int, ClassIntrospectionHandle_t, bool, bool, class CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *); /* linkage=_ZN22CSchemaSystemTypeScope24FindDescendentsOfClass_REPP16CSchemaClassInfoiPKS0_bbP10CUtlVectorIS4_10CUtlMemoryIS4_iEE */
	int AppendClassBaseBindings(class CSchemaSystemTypeScope *, const char  *, class CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> > *); /* linkage=_ZN22CSchemaSystemTypeScope23AppendClassBaseBindingsEPKcP10CUtlVectorI23SchemaBaseBindingInfo_t10CUtlMemoryIS3_iEE */
	int AppendEnumBaseBindings(class CSchemaSystemTypeScope *, const char  *, class CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> > *); /* linkage=_ZN22CSchemaSystemTypeScope22AppendEnumBaseBindingsEPKcP10CUtlVectorI23SchemaBaseBindingInfo_t10CUtlMemoryIS3_iEE */
	bool FindBaseBinding(class CSchemaSystemTypeScope *, const char  *, class SchemaBaseBindingInfo_t *, uint32); /* linkage=_ZN22CSchemaSystemTypeScope15FindBaseBindingEPKcP23SchemaBaseBindingInfo_tj */
	/* <104ac2> schemasystem/schemasystem.cpp:1027 */
	virtual const char  * GetScopeName(class CSchemaSystemTypeScope *); /* linkage=_ZN22CSchemaSystemTypeScope12GetScopeNameEv */
	/* <104aec> schemasystem/schemasystem.cpp:1035 */
	virtual bool IsGlobalScope(class CSchemaSystemTypeScope *); /* linkage=_ZN22CSchemaSystemTypeScope13IsGlobalScopeEv */
	virtual void MarkClassAsRequiringGlobalPromotion(class CSchemaSystemTypeScope *, ClassIntrospectionHandle_t); /* linkage=_ZN22CSchemaSystemTypeScope35MarkClassAsRequiringGlobalPromotionEPK16CSchemaClassInfo */
	virtual void MarkEnumAsRequiringGlobalPromotion(class CSchemaSystemTypeScope *, EnumIntrospectionHandle_t); /* linkage=_ZN22CSchemaSystemTypeScope34MarkEnumAsRequiringGlobalPromotionEPK15CSchemaEnumInfo */
	bool InsertNewClassBinding(class CSchemaSystemTypeScope *, SchemaClassId_t, class CSchemaClassInfo *, class CSchemaClassInfo * *); /* linkage=_ZN22CSchemaSystemTypeScope21InsertNewClassBindingEjP16CSchemaClassInfoPS1_ */
	bool InsertNewEnumBinding(class CSchemaSystemTypeScope *, SchemaClassId_t, class CSchemaEnumInfo *, class CSchemaEnumInfo * *); /* linkage=_ZN22CSchemaSystemTypeScope20InsertNewEnumBindingEjP15CSchemaEnumInfoPS1_ */
} __attribute__((__aligned__(16)));

