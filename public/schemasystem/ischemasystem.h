
//
// public/schemasystem/ischemasystem.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   libschemasystem.so
//
//	functions: 5
//	class: 1
//

// <000D9C08> ../public/schemasystem/ischemasystem.h:41
void ISchemaSystem::ISchemaSystem()
{
} /* size: 0 */

// <000D9BEC> ../public/schemasystem/ischemasystem.h:41
inline void ISchemaSystem::ISchemaSystem()
{
} /* size: 0 */

// <00022371> ../public/schemasystem/ischemasystem.h:41
// member functions: 60
// member variable: 1
// vtable entries: 26
// class size: 8
class ISchemaSystem : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void ISchemaSystem(ISchemaSystem* , ISchemaSystem& );
	void ISchemaSystem(ISchemaSystem* , const ISchemaSystem& );
	void ISchemaSystem(ISchemaSystem* );
	void ~ISchemaSystem(ISchemaSystem* );
	/* ../public/schemasystem/ischemasystem.h:46 */
	virtual ISchemaSystemTypeScope* GlobalTypeScope(ISchemaSystem* );
	/* ../public/schemasystem/ischemasystem.h:47 */
	virtual ISchemaSystemTypeScope* FindOrCreateTypeScopeForModule(ISchemaSystem* , const char* );
	/* ../public/schemasystem/ischemasystem.h:48 */
	virtual ISchemaSystemTypeScope* FindTypeScopeForModule(ISchemaSystem* , const char* );
	/* ../public/schemasystem/ischemasystem.h:49 */
	virtual ISchemaSystemTypeScope* GetTypeScopeForBinding(ISchemaSystem* , SchemaTypeScope_t, const char* );
	/* ../public/schemasystem/ischemasystem.h:53 */
	virtual ClassIntrospectionHandle_t FindClassByScopedName(ISchemaSystem* , const char* );
	/* ../public/schemasystem/ischemasystem.h:54 */
	virtual void ScopedNameForClass(ISchemaSystem* , ClassIntrospectionHandle_t, char* , int);
	/* ../public/schemasystem/ischemasystem.h:56 */
	virtual EnumIntrospectionHandle_t FindEnumByScopedName(ISchemaSystem* , const char* );
	/* ../public/schemasystem/ischemasystem.h:57 */
	virtual void ScopedNameForEnum(ISchemaSystem* , EnumIntrospectionHandle_t, char* , int);
	/* ../public/schemasystem/ischemasystem.h:62 */
	virtual void FindDescendentsOfClass(ISchemaSystem* , ClassIntrospectionHandle_t, SchemaSubclassTraversalDepth_t, CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> >* );
	/* ../public/schemasystem/ischemasystem.h:66 */
	virtual void LoadSchemaDataForModules(ISchemaSystem* , const char** , int);
	/* ../public/schemasystem/ischemasystem.h:73 */
	virtual const char* FindClassBindingBinaryName(ISchemaSystem* , const CSchemaClassInfo* );
	/* ../public/schemasystem/ischemasystem.h:74 */
	virtual const char* FindClassBindingProjectName(ISchemaSystem* , const CSchemaClassInfo* );
	/* ../public/schemasystem/ischemasystem.h:75 */
	virtual const char* FindEnumBindingBinaryName(ISchemaSystem* , const CSchemaEnumInfo* );
	/* ../public/schemasystem/ischemasystem.h:76 */
	virtual const char* FindEnumBindingProjectName(ISchemaSystem* , const CSchemaEnumInfo* );
	/* ../public/schemasystem/ischemasystem.h:80 */
	virtual bool SchemaSystemIsReady(ISchemaSystem* );
	/* ../public/schemasystem/ischemasystem.h:81 */
	virtual void VerifySchemaBindingConsistency(ISchemaSystem* , bool);
	/* ../public/schemasystem/ischemasystem.h:82 */
	virtual void CompleteModuleRegistration(ISchemaSystem* , const char* );
	/* ../public/schemasystem/ischemasystem.h:86 */
	virtual const CSchemaClassInfo* GetNoSchemaClassInfo(ISchemaSystem* );
	/* ../public/schemasystem/ischemasystem.h:87 */
	virtual void RegisterAtomicType(ISchemaSystem* , AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/ischemasystem.h:90 */
	virtual void DumpStats(ISchemaSystem* , const char* );
	/* ../public/schemasystem/ischemasystem.h:91 */
	virtual void DumpMetaStats(ISchemaSystem* , const char* );
	/* ../public/schemasystem/ischemasystem.h:95 */
	virtual void RegisterAtomics(ISchemaSystem* , const char* , const char* , CSchemaType** , int, SchemaAtomicTypeInfo_t* const* );
	/* ../public/schemasystem/ischemasystem.h:100 */
	virtual void RegisterEnums(ISchemaSystem* , const char* , const char* , CSchemaType** , int, SchemaEnumInfoData_t* const* );
	/* ../public/schemasystem/ischemasystem.h:105 */
	virtual bool RegisterClasses(ISchemaSystem* , const char* , const char* , CSchemaType** , int, SchemaClassInfoData_t* const* , CBufferString* );
	/* ../public/schemasystem/ischemasystem.h:111 */
	virtual void ValidateClasses(ISchemaSystem* , SchemaClassInfoData_t* const* );
	/* ../public/schemasystem/ischemasystem.h:115 */
	virtual bool ConvertOldIntrospectedResourceDataToKV3(ISchemaSystem* , const void* , size_t, const ResourceFileHeader_t* , CKeyValues3Context* , const char* );
	void ISchemaSystem(class ISchemaSystem *, class ISchemaSystem &); /* linkage=_ZN13ISchemaSystemC4EOS_ */
	void ISchemaSystem(class ISchemaSystem *, const class ISchemaSystem  &); /* linkage=_ZN13ISchemaSystemC4ERKS_ */
	void ISchemaSystem(class ISchemaSystem *); /* linkage=_ZN13ISchemaSystemC4Ev */
	void ~ISchemaSystem(class ISchemaSystem *); /* linkage=_ZN13ISchemaSystemD4Ev */
	virtual class ISchemaSystemTypeScope * GlobalTypeScope(class ISchemaSystem *); /* linkage=_ZN13ISchemaSystem15GlobalTypeScopeEv */
	virtual class ISchemaSystemTypeScope * FindOrCreateTypeScopeForModule(class ISchemaSystem *, const char  *); /* linkage=_ZN13ISchemaSystem30FindOrCreateTypeScopeForModuleEPKc */
	virtual class ISchemaSystemTypeScope * FindTypeScopeForModule(class ISchemaSystem *, const char  *); /* linkage=_ZN13ISchemaSystem22FindTypeScopeForModuleEPKc */
	virtual class ISchemaSystemTypeScope * GetTypeScopeForBinding(class ISchemaSystem *, enum SchemaTypeScope_t, const char  *); /* linkage=_ZN13ISchemaSystem22GetTypeScopeForBindingE17SchemaTypeScope_tPKc */
	virtual ClassIntrospectionHandle_t FindClassByScopedName(class ISchemaSystem *, const char  *); /* linkage=_ZN13ISchemaSystem21FindClassByScopedNameEPKc */
	virtual void ScopedNameForClass(class ISchemaSystem *, ClassIntrospectionHandle_t, char *, int); /* linkage=_ZN13ISchemaSystem18ScopedNameForClassEPK16CSchemaClassInfoPci */
	virtual EnumIntrospectionHandle_t FindEnumByScopedName(class ISchemaSystem *, const char  *); /* linkage=_ZN13ISchemaSystem20FindEnumByScopedNameEPKc */
	virtual void ScopedNameForEnum(class ISchemaSystem *, EnumIntrospectionHandle_t, char *, int); /* linkage=_ZN13ISchemaSystem17ScopedNameForEnumEPK15CSchemaEnumInfoPci */
	virtual void FindDescendentsOfClass(class ISchemaSystem *, ClassIntrospectionHandle_t, enum SchemaSubclassTraversalDepth_t, class CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *); /* linkage=_ZN13ISchemaSystem22FindDescendentsOfClassEPK16CSchemaClassInfo30SchemaSubclassTraversalDepth_tP10CUtlVectorIS2_10CUtlMemoryIS2_iEE */
	virtual void LoadSchemaDataForModules(class ISchemaSystem *, const char  * *, int); /* linkage=_ZN13ISchemaSystem24LoadSchemaDataForModulesEPPKci */
	virtual const char  * FindClassBindingBinaryName(class ISchemaSystem *, const class CSchemaClassInfo  *); /* linkage=_ZN13ISchemaSystem26FindClassBindingBinaryNameEPK16CSchemaClassInfo */
	virtual const char  * FindClassBindingProjectName(class ISchemaSystem *, const class CSchemaClassInfo  *); /* linkage=_ZN13ISchemaSystem27FindClassBindingProjectNameEPK16CSchemaClassInfo */
	virtual const char  * FindEnumBindingBinaryName(class ISchemaSystem *, const class CSchemaEnumInfo  *); /* linkage=_ZN13ISchemaSystem25FindEnumBindingBinaryNameEPK15CSchemaEnumInfo */
	virtual const char  * FindEnumBindingProjectName(class ISchemaSystem *, const class CSchemaEnumInfo  *); /* linkage=_ZN13ISchemaSystem26FindEnumBindingProjectNameEPK15CSchemaEnumInfo */
	virtual bool SchemaSystemIsReady(class ISchemaSystem *); /* linkage=_ZN13ISchemaSystem19SchemaSystemIsReadyEv */
	virtual void VerifySchemaBindingConsistency(class ISchemaSystem *, bool); /* linkage=_ZN13ISchemaSystem30VerifySchemaBindingConsistencyEb */
	virtual void CompleteModuleRegistration(class ISchemaSystem *, const char  *); /* linkage=_ZN13ISchemaSystem26CompleteModuleRegistrationEPKc */
	virtual const class CSchemaClassInfo  * GetNoSchemaClassInfo(class ISchemaSystem *); /* linkage=_ZN13ISchemaSystem20GetNoSchemaClassInfoEv */
	virtual void RegisterAtomicType(class ISchemaSystem *, AtomicTypeIntrospectionHandle_t); /* linkage=_ZN13ISchemaSystem18RegisterAtomicTypeEPK22SchemaAtomicTypeInfo_t */
	virtual void DumpStats(class ISchemaSystem *, const char  *); /* linkage=_ZN13ISchemaSystem9DumpStatsEPKc */
	virtual void DumpMetaStats(class ISchemaSystem *, const char  *); /* linkage=_ZN13ISchemaSystem13DumpMetaStatsEPKc */
	virtual void RegisterAtomics(class ISchemaSystem *, const char  *, const char  *, class CSchemaType * *, int, class SchemaAtomicTypeInfo_t * const *); /* linkage=_ZN13ISchemaSystem15RegisterAtomicsEPKcS1_PP11CSchemaTypeiPKP22SchemaAtomicTypeInfo_t */
	virtual void RegisterEnums(class ISchemaSystem *, const char  *, const char  *, class CSchemaType * *, int, class SchemaEnumInfoData_t * const *); /* linkage=_ZN13ISchemaSystem13RegisterEnumsEPKcS1_PP11CSchemaTypeiPKP20SchemaEnumInfoData_t */
	virtual bool RegisterClasses(class ISchemaSystem *, const char  *, const char  *, class CSchemaType * *, int, class SchemaClassInfoData_t * const *, class CBufferString *); /* linkage=_ZN13ISchemaSystem15RegisterClassesEPKcS1_PP11CSchemaTypeiPKP21SchemaClassInfoData_tP13CBufferString */
	virtual void ValidateClasses(class ISchemaSystem *, class SchemaClassInfoData_t * const *); /* linkage=_ZN13ISchemaSystem15ValidateClassesEPKP21SchemaClassInfoData_t */
	virtual bool ConvertOldIntrospectedResourceDataToKV3(class ISchemaSystem *, const void  *, size_t, const class ResourceFileHeader_t  *, class CKeyValues3Context *, const char  *); /* linkage=_ZN13ISchemaSystem39ConvertOldIntrospectedResourceDataToKV3EPKvmPK20ResourceFileHeader_tP18CKeyValues3ContextPKc */
};

// <00A1A040> ../public/schemasystem/ischemasystem.h:123
ISchemaSystemTypeScope* SchemaTypeScope(void)
{
} /* size: 0 */

// <003A4ECE> ../public/schemasystem/ischemasystem.h:123
inline ISchemaSystemTypeScope* SchemaTypeScope(void)
{
} /* size: 0 */

// <00E8754E> ../public/schemasystem/ischemasystem.h:143
inline EnumIntrospectionHandle_t Schema_FindDeclaredEnum(const char* pName)
{
} /* size: 0 */

