
//
// public/schemalib/schemaenuminfo.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 15
//	classes: 4
//

// <0002E7F1> ../public/schemalib/schemaenuminfo.h:11
// member functions: 6
// member variable: 1
// class size: 32
class CSchemaEnumeratorInfo : protected SchemaEnumeratorInfoData_t {
protected:
	/* struct SchemaEnumeratorInfoData_t <ancestor>; */ /* 0 32 */
	/* ../public/schemalib/schemaenuminfo.h:14 */
	const char* GetName(const CSchemaEnumeratorInfo* );
	/* ../public/schemalib/schemaenuminfo.h:15 */
	SchemaEnumeratorValue_t GetValue(const CSchemaEnumeratorInfo* );
	/* ../public/schemalib/schemaenuminfo.h:16 */
	MetadataIntrospectionHandle_t GetMetadata(const CSchemaEnumeratorInfo* );
	const char  * GetName(const class CSchemaEnumeratorInfo  *); /* linkage=_ZNK21CSchemaEnumeratorInfo7GetNameEv */
	SchemaEnumeratorValue_t GetValue(const class CSchemaEnumeratorInfo  *); /* linkage=_ZNK21CSchemaEnumeratorInfo8GetValueEv */
	MetadataIntrospectionHandle_t GetMetadata(const class CSchemaEnumeratorInfo  *); /* linkage=_ZNK21CSchemaEnumeratorInfo11GetMetadataEv */
};

// <0001B85F> ../../public/schemalib/schemaenuminfo.h:11
// member functions: 6
// member variable: 1
// class size: 32
class CSchemaEnumeratorInfo : protected SchemaEnumeratorInfoData_t {
protected:
	/* struct SchemaEnumeratorInfoData_t <ancestor>; */ /* 0 32 */
	/* ../../public/schemalib/schemaenuminfo.h:14 */
	const char* GetName(const CSchemaEnumeratorInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:15 */
	SchemaEnumeratorValue_t GetValue(const CSchemaEnumeratorInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:16 */
	MetadataIntrospectionHandle_t GetMetadata(const CSchemaEnumeratorInfo* );
	const char  * GetName(const class CSchemaEnumeratorInfo  *); /* linkage=_ZNK21CSchemaEnumeratorInfo7GetNameEv */
	SchemaEnumeratorValue_t GetValue(const class CSchemaEnumeratorInfo  *); /* linkage=_ZNK21CSchemaEnumeratorInfo8GetValueEv */
	MetadataIntrospectionHandle_t GetMetadata(const class CSchemaEnumeratorInfo  *); /* linkage=_ZNK21CSchemaEnumeratorInfo11GetMetadataEv */
};

// <06E5C8D4> ../../public/schemalib/schemaenuminfo.h:14
inline void CSchemaEnumeratorInfo::GetName()
{
} /* size: 0 */

// <06E5C8BB> ../../public/schemalib/schemaenuminfo.h:15
inline void CSchemaEnumeratorInfo::GetValue()
{
} /* size: 0 */

// <01A7D4DA> ../public/schemalib/schemaenuminfo.h:16
inline void CSchemaEnumeratorInfo::GetMetadata()
{
} /* size: 0 */

// <0002E44F> ../public/schemalib/schemaenuminfo.h:22
// member functions: 52
// member variable: 1
// class size: 72
class CSchemaEnumInfo : protected SchemaEnumInfoData_t {
protected:
	/* struct SchemaEnumInfoData_t <ancestor>; */ /* 0 72 */
	/* ../public/schemalib/schemaenuminfo.h:26 */
	void CSchemaEnumInfo(CSchemaEnumInfo* );
	/* ../public/schemalib/schemaenuminfo.h:31 */
	void ~CSchemaEnumInfo(CSchemaEnumInfo* );
	/* ../public/schemalib/schemaenuminfo.h:36 */
	const char* GetBindingName(const CSchemaEnumInfo* );
	/* ../public/schemalib/schemaenuminfo.h:37 */
	const CSchemaEnumInfo* GetPrimaryBinding(const CSchemaEnumInfo* );
	/* ../public/schemalib/schemaenuminfo.h:39 */
	const char* GetName(const CSchemaEnumInfo* );
	/* ../public/schemalib/schemaenuminfo.h:40 */
	uint32 GetSizeOf(const CSchemaEnumInfo* );
	/* ../public/schemalib/schemaenuminfo.h:41 */
	uint8 GetAlignOf(const CSchemaEnumInfo* );
	/* ../public/schemalib/schemaenuminfo.h:42 */
	int GetEnumeratorCount(const CSchemaEnumInfo* );
	/* ../public/schemalib/schemaenuminfo.h:43 */
	EnumeratorIntrospectionHandle_t GetEnumerator(const CSchemaEnumInfo* , int);
	/* ../public/schemalib/schemaenuminfo.h:44 */
	MetadataIntrospectionHandle_t GetMetadata(const CSchemaEnumInfo* );
	/* ../public/schemalib/schemaenuminfo.h:46 */
	SchemaEnumeratorValue_t GetMinValue(const CSchemaEnumInfo* );
	/* ../public/schemalib/schemaenuminfo.h:47 */
	SchemaEnumeratorValue_t GetMaxValue(const CSchemaEnumInfo* );
	/* ../public/schemalib/schemaenuminfo.h:49 */
	bool HasFlag1(const CSchemaEnumInfo* , SchemaEnumFlags1_t);
	/* ../public/schemalib/schemaenuminfo.h:51 */
	bool IsInModuleLocalTypeScope(const CSchemaEnumInfo* );
	/* ../public/schemalib/schemaenuminfo.h:52 */
	SchemaTypeScope_t GetRegisterTypeScope(const CSchemaEnumInfo* );
	/* ../public/schemalib/schemaenuminfo.h:54 */
	SchemaBuiltinType_t GetStorageType(const CSchemaEnumInfo* );
	/* ../public/schemalib/schemaenuminfo.h:56 */
	size_t GetDataSize(const CSchemaEnumInfo* );
	/* ../public/schemalib/schemaenuminfo.h:58 */
	void GetBaseBindingInfo(const CSchemaEnumInfo* , SchemaBaseBindingInfo_t* );
	/* ../public/schemalib/schemaenuminfo.h:60 */
	void SetTypeScope(CSchemaEnumInfo* , SchemaTypeScope_t, ISchemaSystemTypeScope* );
	/* ../public/schemalib/schemaenuminfo.h:61 */
	ISchemaSystemTypeScope* GetTypeScope(const CSchemaEnumInfo* );
	/* ../public/schemalib/schemaenuminfo.h:63 */
	bool AssignValueToInstance(const CSchemaEnumInfo* , void* , SchemaEnumeratorValue_t);
	/* ../public/schemalib/schemaenuminfo.h:65 */
	void Register(CSchemaEnumInfo* , ISchemaSystem* , const char* , const char* );
	/* ../public/schemalib/schemaenuminfo.h:68 */
	void CompleteInitialization(CSchemaEnumInfo* );
	/* ../public/schemalib/schemaenuminfo.h:71 */
	const CSchemaEnumeratorInfo* FindMemberByName(const CSchemaEnumInfo* , const char* );
	/* ../public/schemalib/schemaenuminfo.h:72 */
	const CSchemaEnumeratorInfo* FindMemberByValue(const CSchemaEnumInfo* , SchemaEnumeratorValue_t);
	/* ../public/schemalib/schemaenuminfo.h:74 */
	void InstallModuleEnumBindings(ISchemaSystem* );
	void CSchemaEnumInfo(class CSchemaEnumInfo *); /* linkage=_ZN15CSchemaEnumInfoC4Ev */
	void ~CSchemaEnumInfo(class CSchemaEnumInfo *); /* linkage=_ZN15CSchemaEnumInfoD4Ev */
	const char  * GetBindingName(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo14GetBindingNameEv */
	const class CSchemaEnumInfo  * GetPrimaryBinding(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo17GetPrimaryBindingEv */
	const char  * GetName(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo7GetNameEv */
	uint32 GetSizeOf(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo10GetAlignOfEv */
	int GetEnumeratorCount(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo18GetEnumeratorCountEv */
	EnumeratorIntrospectionHandle_t GetEnumerator(const class CSchemaEnumInfo  *, int); /* linkage=_ZNK15CSchemaEnumInfo13GetEnumeratorEi */
	MetadataIntrospectionHandle_t GetMetadata(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo11GetMetadataEv */
	SchemaEnumeratorValue_t GetMinValue(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo11GetMinValueEv */
	SchemaEnumeratorValue_t GetMaxValue(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo11GetMaxValueEv */
	bool HasFlag1(const class CSchemaEnumInfo  *, enum SchemaEnumFlags1_t); /* linkage=_ZNK15CSchemaEnumInfo8HasFlag1E18SchemaEnumFlags1_t */
	bool IsInModuleLocalTypeScope(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo24IsInModuleLocalTypeScopeEv */
	enum SchemaTypeScope_t GetRegisterTypeScope(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo20GetRegisterTypeScopeEv */
	enum SchemaBuiltinType_t GetStorageType(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo14GetStorageTypeEv */
	size_t GetDataSize(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo11GetDataSizeEv */
	void GetBaseBindingInfo(const class CSchemaEnumInfo  *, class SchemaBaseBindingInfo_t *); /* linkage=_ZNK15CSchemaEnumInfo18GetBaseBindingInfoEP23SchemaBaseBindingInfo_t */
	/* <495daf7> schemalib/schemaenuminfo.cpp:163 */
	void SetTypeScope(class CSchemaEnumInfo *, enum SchemaTypeScope_t, class ISchemaSystemTypeScope *); /* linkage=_ZN15CSchemaEnumInfo12SetTypeScopeE17SchemaTypeScope_tP22ISchemaSystemTypeScope */
	class ISchemaSystemTypeScope * GetTypeScope(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo12GetTypeScopeEv */
	bool AssignValueToInstance(const class CSchemaEnumInfo  *, void *, SchemaEnumeratorValue_t); /* linkage=_ZNK15CSchemaEnumInfo21AssignValueToInstanceEPvx */
	void Register(class CSchemaEnumInfo *, class ISchemaSystem *, const char  *, const char  *); /* linkage=_ZN15CSchemaEnumInfo8RegisterEP13ISchemaSystemPKcS3_ */
	void CompleteInitialization(class CSchemaEnumInfo *); /* linkage=_ZN15CSchemaEnumInfo22CompleteInitializationEv */
	const class CSchemaEnumeratorInfo  * FindMemberByName(const class CSchemaEnumInfo  *, const char  *); /* linkage=_ZNK15CSchemaEnumInfo16FindMemberByNameEPKc */
	const class CSchemaEnumeratorInfo  * FindMemberByValue(const class CSchemaEnumInfo  *, SchemaEnumeratorValue_t); /* linkage=_ZNK15CSchemaEnumInfo17FindMemberByValueEx */
	void InstallModuleEnumBindings(class ISchemaSystem *); /* linkage=_ZN15CSchemaEnumInfo25InstallModuleEnumBindingsEP13ISchemaSystem */
};

// <0001B4BD> ../../public/schemalib/schemaenuminfo.h:22
// member functions: 52
// member variable: 1
// class size: 72
class CSchemaEnumInfo : protected SchemaEnumInfoData_t {
protected:
	/* struct SchemaEnumInfoData_t <ancestor>; */ /* 0 72 */
	/* ../../public/schemalib/schemaenuminfo.h:26 */
	void CSchemaEnumInfo(CSchemaEnumInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:31 */
	void ~CSchemaEnumInfo(CSchemaEnumInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:36 */
	const char* GetBindingName(const CSchemaEnumInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:37 */
	const CSchemaEnumInfo* GetPrimaryBinding(const CSchemaEnumInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:39 */
	const char* GetName(const CSchemaEnumInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:40 */
	uint32 GetSizeOf(const CSchemaEnumInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:41 */
	uint8 GetAlignOf(const CSchemaEnumInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:42 */
	int GetEnumeratorCount(const CSchemaEnumInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:43 */
	EnumeratorIntrospectionHandle_t GetEnumerator(const CSchemaEnumInfo* , int);
	/* ../../public/schemalib/schemaenuminfo.h:44 */
	MetadataIntrospectionHandle_t GetMetadata(const CSchemaEnumInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:46 */
	SchemaEnumeratorValue_t GetMinValue(const CSchemaEnumInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:47 */
	SchemaEnumeratorValue_t GetMaxValue(const CSchemaEnumInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:49 */
	bool HasFlag1(const CSchemaEnumInfo* , SchemaEnumFlags1_t);
	/* ../../public/schemalib/schemaenuminfo.h:51 */
	bool IsInModuleLocalTypeScope(const CSchemaEnumInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:52 */
	SchemaTypeScope_t GetRegisterTypeScope(const CSchemaEnumInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:54 */
	SchemaBuiltinType_t GetStorageType(const CSchemaEnumInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:56 */
	size_t GetDataSize(const CSchemaEnumInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:58 */
	void GetBaseBindingInfo(const CSchemaEnumInfo* , SchemaBaseBindingInfo_t* );
	/* ../../public/schemalib/schemaenuminfo.h:60 */
	void SetTypeScope(CSchemaEnumInfo* , SchemaTypeScope_t, ISchemaSystemTypeScope* );
	/* ../../public/schemalib/schemaenuminfo.h:61 */
	ISchemaSystemTypeScope* GetTypeScope(const CSchemaEnumInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:63 */
	bool AssignValueToInstance(const CSchemaEnumInfo* , void* , SchemaEnumeratorValue_t);
	/* ../../public/schemalib/schemaenuminfo.h:65 */
	void Register(CSchemaEnumInfo* , ISchemaSystem* , const char* , const char* );
	/* ../../public/schemalib/schemaenuminfo.h:68 */
	void CompleteInitialization(CSchemaEnumInfo* );
	/* ../../public/schemalib/schemaenuminfo.h:71 */
	const CSchemaEnumeratorInfo* FindMemberByName(const CSchemaEnumInfo* , const char* );
	/* ../../public/schemalib/schemaenuminfo.h:72 */
	const CSchemaEnumeratorInfo* FindMemberByValue(const CSchemaEnumInfo* , SchemaEnumeratorValue_t);
	/* ../../public/schemalib/schemaenuminfo.h:74 */
	void InstallModuleEnumBindings(ISchemaSystem* );
	void CSchemaEnumInfo(class CSchemaEnumInfo *); /* linkage=_ZN15CSchemaEnumInfoC4Ev */
	void ~CSchemaEnumInfo(class CSchemaEnumInfo *); /* linkage=_ZN15CSchemaEnumInfoD4Ev */
	const char  * GetBindingName(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo14GetBindingNameEv */
	const class CSchemaEnumInfo  * GetPrimaryBinding(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo17GetPrimaryBindingEv */
	const char  * GetName(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo7GetNameEv */
	uint32 GetSizeOf(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo10GetAlignOfEv */
	int GetEnumeratorCount(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo18GetEnumeratorCountEv */
	EnumeratorIntrospectionHandle_t GetEnumerator(const class CSchemaEnumInfo  *, int); /* linkage=_ZNK15CSchemaEnumInfo13GetEnumeratorEi */
	MetadataIntrospectionHandle_t GetMetadata(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo11GetMetadataEv */
	SchemaEnumeratorValue_t GetMinValue(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo11GetMinValueEv */
	SchemaEnumeratorValue_t GetMaxValue(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo11GetMaxValueEv */
	bool HasFlag1(const class CSchemaEnumInfo  *, enum SchemaEnumFlags1_t); /* linkage=_ZNK15CSchemaEnumInfo8HasFlag1E18SchemaEnumFlags1_t */
	bool IsInModuleLocalTypeScope(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo24IsInModuleLocalTypeScopeEv */
	enum SchemaTypeScope_t GetRegisterTypeScope(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo20GetRegisterTypeScopeEv */
	enum SchemaBuiltinType_t GetStorageType(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo14GetStorageTypeEv */
	size_t GetDataSize(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo11GetDataSizeEv */
	void GetBaseBindingInfo(const class CSchemaEnumInfo  *, class SchemaBaseBindingInfo_t *); /* linkage=_ZNK15CSchemaEnumInfo18GetBaseBindingInfoEP23SchemaBaseBindingInfo_t */
	/* <495daf7> schemalib/schemaenuminfo.cpp:163 */
	void SetTypeScope(class CSchemaEnumInfo *, enum SchemaTypeScope_t, class ISchemaSystemTypeScope *); /* linkage=_ZN15CSchemaEnumInfo12SetTypeScopeE17SchemaTypeScope_tP22ISchemaSystemTypeScope */
	class ISchemaSystemTypeScope * GetTypeScope(const class CSchemaEnumInfo  *); /* linkage=_ZNK15CSchemaEnumInfo12GetTypeScopeEv */
	bool AssignValueToInstance(const class CSchemaEnumInfo  *, void *, SchemaEnumeratorValue_t); /* linkage=_ZNK15CSchemaEnumInfo21AssignValueToInstanceEPvx */
	void Register(class CSchemaEnumInfo *, class ISchemaSystem *, const char  *, const char  *); /* linkage=_ZN15CSchemaEnumInfo8RegisterEP13ISchemaSystemPKcS3_ */
	void CompleteInitialization(class CSchemaEnumInfo *); /* linkage=_ZN15CSchemaEnumInfo22CompleteInitializationEv */
	const class CSchemaEnumeratorInfo  * FindMemberByName(const class CSchemaEnumInfo  *, const char  *); /* linkage=_ZNK15CSchemaEnumInfo16FindMemberByNameEPKc */
	const class CSchemaEnumeratorInfo  * FindMemberByValue(const class CSchemaEnumInfo  *, SchemaEnumeratorValue_t); /* linkage=_ZNK15CSchemaEnumInfo17FindMemberByValueEx */
	void InstallModuleEnumBindings(class ISchemaSystem *); /* linkage=_ZN15CSchemaEnumInfo25InstallModuleEnumBindingsEP13ISchemaSystem */
};

// <0013B0FE> ../public/schemalib/schemaenuminfo.h:36
inline void CSchemaEnumInfo::GetBindingName()
{
} /* size: 0 */

// <0495D8D4> ../public/schemalib/schemaenuminfo.h:37
inline void CSchemaEnumInfo::GetPrimaryBinding()
{
} /* size: 0 */

// <00103847> ../public/schemalib/schemaenuminfo.h:39
inline void CSchemaEnumInfo::GetName()
{
} /* size: 0 */

// <0495D8BB> ../public/schemalib/schemaenuminfo.h:40
inline void CSchemaEnumInfo::GetSizeOf()
{
} /* size: 0 */

// <0063A119> ../public/schemalib/schemaenuminfo.h:41
inline void CSchemaEnumInfo::GetAlignOf()
{
} /* size: 0 */

// <01A7D4C1> ../public/schemalib/schemaenuminfo.h:42
inline void CSchemaEnumInfo::GetEnumeratorCount()
{
} /* size: 0 */

// <0495D898> ../public/schemalib/schemaenuminfo.h:43
inline void CSchemaEnumInfo::GetEnumerator(int i)
{
} /* size: 0 */

// <001037F2> ../public/schemalib/schemaenuminfo.h:44
inline void CSchemaEnumInfo::GetMetadata()
{
} /* size: 0 */

// <0495D873> ../public/schemalib/schemaenuminfo.h:49
inline void CSchemaEnumInfo::HasFlag1(SchemaEnumFlags1_t nFlag)
{
} /* size: 0 */

// <0495D85A> ../public/schemalib/schemaenuminfo.h:52
inline void CSchemaEnumInfo::GetRegisterTypeScope()
{
} /* size: 0 */

// <001037D9> ../public/schemalib/schemaenuminfo.h:61
inline void CSchemaEnumInfo::GetTypeScope()
{
} /* size: 0 */

// <00E87368> ../public/schemalib/schemaenuminfo.h:88
inline void* SchemaMetaGetPtr2(EnumeratorIntrospectionHandle_t enumeratorInfo, const char* pKey)
{
} /* size: 0 */

