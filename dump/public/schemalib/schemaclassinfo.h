
//
// public/schemalib/schemaclassinfo.h
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
//	functions: 44
//	classes: 8
//

// <0002E2A9> ../public/schemalib/schemaclassinfo.h:23
// member functions: 14
// member variable: 1
// class size: 32
class CSchemaClassField : protected SchemaClassFieldData_t {
protected:
	/* struct SchemaClassFieldData_t <ancestor>; */ /* 0 32 */
	/* ../public/schemalib/schemaclassinfo.h:27 */
	void CSchemaClassField(CSchemaClassField* );
	/* ../public/schemalib/schemaclassinfo.h:31 */
	void ~CSchemaClassField(CSchemaClassField* );
	/* ../public/schemalib/schemaclassinfo.h:36 */
	const char* GetName(const CSchemaClassField* );
	/* ../public/schemalib/schemaclassinfo.h:37 */
	CSchemaType* GetType(const CSchemaClassField* );
	/* ../public/schemalib/schemaclassinfo.h:38 */
	int32 GetSingleInheritanceOffsetFromClass(const CSchemaClassField* );
	/* ../public/schemalib/schemaclassinfo.h:39 */
	MetadataIntrospectionHandle_t GetMetadata(const CSchemaClassField* );
	/* ../public/schemalib/schemaclassinfo.h:42 */
	int32 Slow_GetOffsetFromClass(const CSchemaClassField* , ClassIntrospectionHandle_t);
	void CSchemaClassField(class CSchemaClassField *); /* linkage=_ZN17CSchemaClassFieldC4Ev */
	void ~CSchemaClassField(class CSchemaClassField *); /* linkage=_ZN17CSchemaClassFieldD4Ev */
	const char  * GetName(const class CSchemaClassField  *); /* linkage=_ZNK17CSchemaClassField7GetNameEv */
	class CSchemaType * GetType(const class CSchemaClassField  *); /* linkage=_ZNK17CSchemaClassField7GetTypeEv */
	int32 GetSingleInheritanceOffsetFromClass(const class CSchemaClassField  *); /* linkage=_ZNK17CSchemaClassField35GetSingleInheritanceOffsetFromClassEv */
	MetadataIntrospectionHandle_t GetMetadata(const class CSchemaClassField  *); /* linkage=_ZNK17CSchemaClassField11GetMetadataEv */
	int32 Slow_GetOffsetFromClass(const class CSchemaClassField  *, ClassIntrospectionHandle_t); /* linkage=_ZNK17CSchemaClassField23Slow_GetOffsetFromClassEPK16CSchemaClassInfo */
};

// <0001B317> ../../public/schemalib/schemaclassinfo.h:23
// member functions: 14
// member variable: 1
// class size: 32
class CSchemaClassField : protected SchemaClassFieldData_t {
protected:
	/* struct SchemaClassFieldData_t <ancestor>; */ /* 0 32 */
	/* ../../public/schemalib/schemaclassinfo.h:27 */
	void CSchemaClassField(CSchemaClassField* );
	/* ../../public/schemalib/schemaclassinfo.h:31 */
	void ~CSchemaClassField(CSchemaClassField* );
	/* ../../public/schemalib/schemaclassinfo.h:36 */
	const char* GetName(const CSchemaClassField* );
	/* ../../public/schemalib/schemaclassinfo.h:37 */
	CSchemaType* GetType(const CSchemaClassField* );
	/* ../../public/schemalib/schemaclassinfo.h:38 */
	int32 GetSingleInheritanceOffsetFromClass(const CSchemaClassField* );
	/* ../../public/schemalib/schemaclassinfo.h:39 */
	MetadataIntrospectionHandle_t GetMetadata(const CSchemaClassField* );
	/* ../../public/schemalib/schemaclassinfo.h:42 */
	int32 Slow_GetOffsetFromClass(const CSchemaClassField* , ClassIntrospectionHandle_t);
	void CSchemaClassField(class CSchemaClassField *); /* linkage=_ZN17CSchemaClassFieldC4Ev */
	void ~CSchemaClassField(class CSchemaClassField *); /* linkage=_ZN17CSchemaClassFieldD4Ev */
	const char  * GetName(const class CSchemaClassField  *); /* linkage=_ZNK17CSchemaClassField7GetNameEv */
	class CSchemaType * GetType(const class CSchemaClassField  *); /* linkage=_ZNK17CSchemaClassField7GetTypeEv */
	int32 GetSingleInheritanceOffsetFromClass(const class CSchemaClassField  *); /* linkage=_ZNK17CSchemaClassField35GetSingleInheritanceOffsetFromClassEv */
	MetadataIntrospectionHandle_t GetMetadata(const class CSchemaClassField  *); /* linkage=_ZNK17CSchemaClassField11GetMetadataEv */
	int32 Slow_GetOffsetFromClass(const class CSchemaClassField  *, ClassIntrospectionHandle_t); /* linkage=_ZNK17CSchemaClassField23Slow_GetOffsetFromClassEPK16CSchemaClassInfo */
};

// <049732F5> ../public/schemalib/schemaclassinfo.h:36
inline void CSchemaClassField::GetName()
{
} /* size: 0 */

// <049732DC> ../public/schemalib/schemaclassinfo.h:37
inline void CSchemaClassField::GetType()
{
} /* size: 0 */

// <049732C3> ../public/schemalib/schemaclassinfo.h:38
inline void CSchemaClassField::GetSingleInheritanceOffsetFromClass()
{
} /* size: 0 */

// <049732AA> ../public/schemalib/schemaclassinfo.h:39
inline void CSchemaClassField::GetMetadata()
{
} /* size: 0 */

// <0002E3AD> ../public/schemalib/schemaclassinfo.h:50
// member functions: 4
// member variable: 1
// class size: 40
class CSchemaStaticField : protected SchemaStaticFieldData_t {
protected:
	/* struct SchemaStaticFieldData_t <ancestor>; */ /* 0 40 */
	/* ../public/schemalib/schemaclassinfo.h:54 */
	const char* GetName(const CSchemaStaticField* );
	/* ../public/schemalib/schemaclassinfo.h:55 */
	CSchemaType* GetType(const CSchemaStaticField* );
	/* ../public/schemalib/schemaclassinfo.h:56 */
	void* GetInstance(const CSchemaStaticField* );
	/* ../public/schemalib/schemaclassinfo.h:57 */
	MetadataIntrospectionHandle_t GetMetadata(const CSchemaStaticField* );
};

// <0001B41B> ../../public/schemalib/schemaclassinfo.h:50
// member functions: 4
// member variable: 1
// class size: 40
class CSchemaStaticField : protected SchemaStaticFieldData_t {
protected:
	/* struct SchemaStaticFieldData_t <ancestor>; */ /* 0 40 */
	/* ../../public/schemalib/schemaclassinfo.h:54 */
	const char* GetName(const CSchemaStaticField* );
	/* ../../public/schemalib/schemaclassinfo.h:55 */
	CSchemaType* GetType(const CSchemaStaticField* );
	/* ../../public/schemalib/schemaclassinfo.h:56 */
	void* GetInstance(const CSchemaStaticField* );
	/* ../../public/schemalib/schemaclassinfo.h:57 */
	MetadataIntrospectionHandle_t GetMetadata(const CSchemaStaticField* );
};

// <04953559> ../public/schemalib/schemaclassinfo.h:54
inline void CSchemaStaticField::GetName()
{
} /* size: 0 */

// <00034192> ../public/schemalib/schemaclassinfo.h:65
// member functions: 4
// member variable: 1
// class size: 16
class CSchemaBaseClassInfo : protected SchemaBaseClassInfoData_t {
protected:
	/* struct SchemaBaseClassInfoData_t <ancestor>; */ /* 0 16 */
	/* ../public/schemalib/schemaclassinfo.h:70 */
	uint32 GetOffset(const CSchemaBaseClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:71 */
	const CSchemaClassInfo* GetClass(const CSchemaBaseClassInfo* );
	uint32 GetOffset(const class CSchemaBaseClassInfo  *); /* linkage=_ZNK20CSchemaBaseClassInfo9GetOffsetEv */
	const class CSchemaClassInfo  * GetClass(const class CSchemaBaseClassInfo  *); /* linkage=_ZNK20CSchemaBaseClassInfo8GetClassEv */
};

// <00026700> ../../public/schemalib/schemaclassinfo.h:65
// member functions: 4
// member variable: 1
// class size: 16
class CSchemaBaseClassInfo : protected SchemaBaseClassInfoData_t {
protected:
	/* struct SchemaBaseClassInfoData_t <ancestor>; */ /* 0 16 */
	/* ../../public/schemalib/schemaclassinfo.h:70 */
	uint32 GetOffset(const CSchemaBaseClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:71 */
	const CSchemaClassInfo* GetClass(const CSchemaBaseClassInfo* );
	uint32 GetOffset(const class CSchemaBaseClassInfo  *); /* linkage=_ZNK20CSchemaBaseClassInfo9GetOffsetEv */
	const class CSchemaClassInfo  * GetClass(const class CSchemaBaseClassInfo  *); /* linkage=_ZNK20CSchemaBaseClassInfo8GetClassEv */
};

// <04973291> ../public/schemalib/schemaclassinfo.h:70
inline void CSchemaBaseClassInfo::GetOffset()
{
} /* size: 0 */

// <04973278> ../public/schemalib/schemaclassinfo.h:71
inline void CSchemaBaseClassInfo::GetClass()
{
} /* size: 0 */

// <0002D9D8> ../public/schemalib/schemaclassinfo.h:79
// member functions: 122
// member variable: 1
// class size: 112
class CSchemaClassInfo : protected SchemaClassInfoData_t {
protected:
	/* struct SchemaClassInfoData_t <ancestor>; */ /* 0 112 */
	/* ../public/schemalib/schemaclassinfo.h:86 */
	void CSchemaClassInfo(CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:91 */
	void ~CSchemaClassInfo(CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:96 */
	const char* GetBindingName(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:97 */
	const CSchemaClassInfo* GetPrimaryBinding(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:99 */
	const char* GetName(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:100 */
	const CSchemaClassInfo* GetSingleInheritanceBaseClass(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:102 */
	const CSchemaBaseClassInfo* GetBaseClassInfo(const CSchemaClassInfo* , int);
	/* ../public/schemalib/schemaclassinfo.h:103 */
	int GetBaseClassCount(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:104 */
	const CSchemaClassInfo* GetBaseClass(const CSchemaClassInfo* , int);
	/* ../public/schemalib/schemaclassinfo.h:105 */
	uint32 GetBaseClassOffset(const CSchemaClassInfo* , int);
	/* ../public/schemalib/schemaclassinfo.h:107 */
	int32 GetSizeOf(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:108 */
	uint8 GetAlignOf(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:109 */
	CSchemaType* GetTypeOf(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:111 */
	int GetFieldCount(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:112 */
	const CSchemaClassField* GetField(const CSchemaClassInfo* , int);
	/* ../public/schemalib/schemaclassinfo.h:114 */
	int GetStaticFieldCount(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:115 */
	const CSchemaStaticField* GetStaticField(const CSchemaClassInfo* , int);
	/* ../public/schemalib/schemaclassinfo.h:117 */
	bool IsInModuleLocalTypeScope(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:118 */
	SchemaTypeScope_t GetRegisterTypeScope(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:120 */
	const datamap_t* GetDataDesc(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:122 */
	const CSchemaClassField* FindField(const CSchemaClassInfo* , const char* , SchemaBaseClassTraversal_t, int32* );
	/* ../public/schemalib/schemaclassinfo.h:123 */
	const CSchemaClassField* FindField(const CSchemaClassInfo* , const char* , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t* , int32* );
	/* ../public/schemalib/schemaclassinfo.h:124 */
	const CSchemaStaticField* FindStaticField(const CSchemaClassInfo* , const char* , SchemaBaseClassTraversal_t);
	/* ../public/schemalib/schemaclassinfo.h:126 */
	size_t GetDataSize(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:128 */
	void GetBaseBindingInfo(const CSchemaClassInfo* , SchemaBaseBindingInfo_t* );
	/* ../public/schemalib/schemaclassinfo.h:130 */
	bool MultipleInheritsFromOrIs(const CSchemaClassInfo* , const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:131 */
	bool SingleInheritsFromOrIs(const CSchemaClassInfo* , const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:132 */
	bool CanReinterpretAs(const CSchemaClassInfo* , const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:134 */
	bool MetaIsPresent(const CSchemaClassInfo* , const char* , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemalib/schemaclassinfo.h:135 */
	void* MetaGetPtr(const CSchemaClassInfo* , const char* , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemalib/schemaclassinfo.h:138 */
	MetadataIntrospectionHandle_t GetMetadata(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:140 */
	void SetTypeScope(CSchemaClassInfo* , SchemaTypeScope_t, ISchemaSystemTypeScope* );
	/* ../public/schemalib/schemaclassinfo.h:141 */
	ISchemaSystemTypeScope* GetTypeScope(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:143 */
	void InstallModuleClassBindings(ISchemaSystem* );
	/* ../public/schemalib/schemaclassinfo.h:147 */
	int GetMultipleInheritanceDepth(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:151 */
	int GetSingleInheritanceDepth(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:153 */
	bool HasFlag1(const CSchemaClassInfo* , SchemaClassFlags1_t);
	/* ../public/schemalib/schemaclassinfo.h:155 */
	bool HasFlag1_R(const CSchemaClassInfo* , SchemaClassFlags1_t);
	/* ../public/schemalib/schemaclassinfo.h:157 */
	bool HasFlag2(const CSchemaClassInfo* , SchemaClassFlags2_t);
	/* ../public/schemalib/schemaclassinfo.h:159 */
	bool HasFlag2_R(const CSchemaClassInfo* , SchemaClassFlags2_t);
	/* ../public/schemalib/schemaclassinfo.h:162 */
	bool IsNoschemaClass(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:165 */
	void RemoveNoschemaData(CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:167 */
	bool CanAllocate(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:171 */
	bool IsAbstractBinding(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:176 */
	void* Allocate(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:178 */
	void Deallocate(const CSchemaClassInfo* , void* );
	/* ../public/schemalib/schemaclassinfo.h:179 */
	void* AllocateAndCopyConstruct(const CSchemaClassInfo* , const void* );
	/* ../public/schemalib/schemaclassinfo.h:180 */
	void Copy(const CSchemaClassInfo* , void* , const void* );
	/* ../public/schemalib/schemaclassinfo.h:181 */
	void* ConstructInPlace(const CSchemaClassInfo* , void* );
	/* ../public/schemalib/schemaclassinfo.h:182 */
	void DestructInPlace(const CSchemaClassInfo* , void* );
	/* ../public/schemalib/schemaclassinfo.h:184 */
	const CSchemaClassInfo* DeduceDerivedType(const CSchemaClassInfo* , const void* );
	/* ../public/schemalib/schemaclassinfo.h:186 */
	bool Register(CSchemaClassInfo* , ISchemaSystem* , const char* , const char* , CSchemaType** , int, CBufferString* );
	/* ../public/schemalib/schemaclassinfo.h:192 */
	void CompleteInitialization(CSchemaClassInfo* , CSchemaType* );
	/* ../public/schemalib/schemaclassinfo.h:193 */
	void ValidateModuleLocalTypeScope(CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:194 */
	void Validate(CSchemaClassInfo* );
private:
	/* ../public/schemalib/schemaclassinfo.h:198 */
	const CSchemaClassField* FindField_R(const CSchemaClassInfo* , const char* , SchemaBaseClassTraversal_t, uint32, ClassIntrospectionHandle_t* , int32* );
	/* ../public/schemalib/schemaclassinfo.h:201 */
	int NumBasesToTraverse(const CSchemaClassInfo* , SchemaBaseClassTraversal_t);
	/* ../public/schemalib/schemaclassinfo.h:203 */
	void ReportClassError(const CSchemaClassInfo* , const char* );
	/* ../public/schemalib/schemaclassinfo.h:206 */
	int CalculateMultipleInheritanceDepth(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:207 */
	int CalculateSingleInheritanceDepth(const CSchemaClassInfo* );
	/* ../public/schemalib/schemaclassinfo.h:209 */
	void FixupBaseClassPointer(CSchemaClassInfo* , int, const CSchemaClassInfo* );
	void CSchemaClassInfo(class CSchemaClassInfo *); /* linkage=_ZN16CSchemaClassInfoC4Ev */
	void ~CSchemaClassInfo(class CSchemaClassInfo *); /* linkage=_ZN16CSchemaClassInfoD4Ev */
	const char  * GetBindingName(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo14GetBindingNameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo17GetPrimaryBindingEv */
	const char  * GetName(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo7GetNameEv */
	const class CSchemaClassInfo  * GetSingleInheritanceBaseClass(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo29GetSingleInheritanceBaseClassEv */
	const class CSchemaBaseClassInfo  * GetBaseClassInfo(const class CSchemaClassInfo  *, int); /* linkage=_ZNK16CSchemaClassInfo16GetBaseClassInfoEi */
	int GetBaseClassCount(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo17GetBaseClassCountEv */
	const class CSchemaClassInfo  * GetBaseClass(const class CSchemaClassInfo  *, int); /* linkage=_ZNK16CSchemaClassInfo12GetBaseClassEi */
	uint32 GetBaseClassOffset(const class CSchemaClassInfo  *, int); /* linkage=_ZNK16CSchemaClassInfo18GetBaseClassOffsetEi */
	int32 GetSizeOf(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo10GetAlignOfEv */
	class CSchemaType * GetTypeOf(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo9GetTypeOfEv */
	int GetFieldCount(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo13GetFieldCountEv */
	const class CSchemaClassField  * GetField(const class CSchemaClassInfo  *, int); /* linkage=_ZNK16CSchemaClassInfo8GetFieldEi */
	int GetStaticFieldCount(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo19GetStaticFieldCountEv */
	const class CSchemaStaticField  * GetStaticField(const class CSchemaClassInfo  *, int); /* linkage=_ZNK16CSchemaClassInfo14GetStaticFieldEi */
	bool IsInModuleLocalTypeScope(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo24IsInModuleLocalTypeScopeEv */
	enum SchemaTypeScope_t GetRegisterTypeScope(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo20GetRegisterTypeScopeEv */
	const class datamap_t  * GetDataDesc(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo11GetDataDescEv */
	const class CSchemaClassField  * FindField(const class CSchemaClassInfo  *, const char  *, enum SchemaBaseClassTraversal_t, int32 *); /* linkage=_ZNK16CSchemaClassInfo9FindFieldEPKc26SchemaBaseClassTraversal_tPi */
	const class CSchemaClassField  * FindField(const class CSchemaClassInfo  *, const char  *, enum SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t *, int32 *); /* linkage=_ZNK16CSchemaClassInfo9FindFieldEPKc26SchemaBaseClassTraversal_tPPKS_Pi */
	const class CSchemaStaticField  * FindStaticField(const class CSchemaClassInfo  *, const char  *, enum SchemaBaseClassTraversal_t); /* linkage=_ZNK16CSchemaClassInfo15FindStaticFieldEPKc26SchemaBaseClassTraversal_t */
	size_t GetDataSize(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo11GetDataSizeEv */
	void GetBaseBindingInfo(const class CSchemaClassInfo  *, class SchemaBaseBindingInfo_t *); /* linkage=_ZNK16CSchemaClassInfo18GetBaseBindingInfoEP23SchemaBaseBindingInfo_t */
	bool MultipleInheritsFromOrIs(const class CSchemaClassInfo  *, const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo24MultipleInheritsFromOrIsEPKS_ */
	bool SingleInheritsFromOrIs(const class CSchemaClassInfo  *, const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo22SingleInheritsFromOrIsEPKS_ */
	bool CanReinterpretAs(const class CSchemaClassInfo  *, const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo16CanReinterpretAsEPKS_ */
	/* <4954124> ../public/schemalib/schemaclassinfo.h:229 */
	bool MetaIsPresent(const class CSchemaClassInfo  *, const char  *, enum SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t); /* linkage=_ZNK16CSchemaClassInfo13MetaIsPresentEPKc26SchemaBaseClassTraversal_tPKS_ */
	void * MetaGetPtr(const class CSchemaClassInfo  *, const char  *, enum SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t); /* linkage=_ZNK16CSchemaClassInfo10MetaGetPtrEPKc26SchemaBaseClassTraversal_tPKS_ */
	MetadataIntrospectionHandle_t GetMetadata(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo11GetMetadataEv */
	/* <4957044> schemalib/schemaclassinfo.cpp:511 */
	void SetTypeScope(class CSchemaClassInfo *, enum SchemaTypeScope_t, class ISchemaSystemTypeScope *); /* linkage=_ZN16CSchemaClassInfo12SetTypeScopeE17SchemaTypeScope_tP22ISchemaSystemTypeScope */
	class ISchemaSystemTypeScope * GetTypeScope(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo12GetTypeScopeEv */
	void InstallModuleClassBindings(class ISchemaSystem *); /* linkage=_ZN16CSchemaClassInfo26InstallModuleClassBindingsEP13ISchemaSystem */
	int GetMultipleInheritanceDepth(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo27GetMultipleInheritanceDepthEv */
	int GetSingleInheritanceDepth(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo25GetSingleInheritanceDepthEv */
	bool HasFlag1(const class CSchemaClassInfo  *, enum SchemaClassFlags1_t); /* linkage=_ZNK16CSchemaClassInfo8HasFlag1E19SchemaClassFlags1_t */
	/* <4955418> schemalib/schemaclassinfo.cpp:43 */
	bool HasFlag1_R(const class CSchemaClassInfo  *, enum SchemaClassFlags1_t); /* linkage=_ZNK16CSchemaClassInfo10HasFlag1_RE19SchemaClassFlags1_t */
	bool HasFlag2(const class CSchemaClassInfo  *, enum SchemaClassFlags2_t); /* linkage=_ZNK16CSchemaClassInfo8HasFlag2E19SchemaClassFlags2_t */
	/* <49561a2> schemalib/schemaclassinfo.cpp:65 */
	bool HasFlag2_R(const class CSchemaClassInfo  *, enum SchemaClassFlags2_t); /* linkage=_ZNK16CSchemaClassInfo10HasFlag2_RE19SchemaClassFlags2_t */
	bool IsNoschemaClass(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo15IsNoschemaClassEv */
	void RemoveNoschemaData(class CSchemaClassInfo *); /* linkage=_ZN16CSchemaClassInfo18RemoveNoschemaDataEv */
	bool CanAllocate(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo11CanAllocateEv */
	bool IsAbstractBinding(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo17IsAbstractBindingEv */
	void * Allocate(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo8AllocateEv */
	void Deallocate(const class CSchemaClassInfo  *, void *); /* linkage=_ZNK16CSchemaClassInfo10DeallocateEPv */
	void * AllocateAndCopyConstruct(const class CSchemaClassInfo  *, const void  *); /* linkage=_ZNK16CSchemaClassInfo24AllocateAndCopyConstructEPKv */
	void Copy(const class CSchemaClassInfo  *, void *, const void  *); /* linkage=_ZNK16CSchemaClassInfo4CopyEPvPKv */
	void * ConstructInPlace(const class CSchemaClassInfo  *, void *); /* linkage=_ZNK16CSchemaClassInfo16ConstructInPlaceEPv */
	void DestructInPlace(const class CSchemaClassInfo  *, void *); /* linkage=_ZNK16CSchemaClassInfo15DestructInPlaceEPv */
	const class CSchemaClassInfo  * DeduceDerivedType(const class CSchemaClassInfo  *, const void  *); /* linkage=_ZNK16CSchemaClassInfo17DeduceDerivedTypeEPKv */
	bool Register(class CSchemaClassInfo *, class ISchemaSystem *, const char  *, const char  *, class CSchemaType * *, int, class CBufferString *); /* linkage=_ZN16CSchemaClassInfo8RegisterEP13ISchemaSystemPKcS3_PP11CSchemaTypeiP13CBufferString */
	/* <49571d0> schemalib/schemaclassinfo.cpp:550 */
	void CompleteInitialization(class CSchemaClassInfo *, class CSchemaType *); /* linkage=_ZN16CSchemaClassInfo22CompleteInitializationEP11CSchemaType */
	void ValidateModuleLocalTypeScope(class CSchemaClassInfo *); /* linkage=_ZN16CSchemaClassInfo28ValidateModuleLocalTypeScopeEv */
	void Validate(class CSchemaClassInfo *); /* linkage=_ZN16CSchemaClassInfo8ValidateEv */
	const class CSchemaClassField  * FindField_R(const class CSchemaClassInfo  *, const char  *, enum SchemaBaseClassTraversal_t, uint32, ClassIntrospectionHandle_t *, int32 *); /* linkage=_ZNK16CSchemaClassInfo11FindField_REPKc26SchemaBaseClassTraversal_tjPPKS_Pi */
	int NumBasesToTraverse(const class CSchemaClassInfo  *, enum SchemaBaseClassTraversal_t); /* linkage=_ZNK16CSchemaClassInfo18NumBasesToTraverseE26SchemaBaseClassTraversal_t */
	void ReportClassError(const class CSchemaClassInfo  *, const char  *); /* linkage=_ZNK16CSchemaClassInfo16ReportClassErrorEPKc */
	int CalculateMultipleInheritanceDepth(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo33CalculateMultipleInheritanceDepthEv */
	/* <49570f2> schemalib/schemaclassinfo.cpp:537 */
	int CalculateSingleInheritanceDepth(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo31CalculateSingleInheritanceDepthEv */
	void FixupBaseClassPointer(class CSchemaClassInfo *, int, const class CSchemaClassInfo  *); /* linkage=_ZN16CSchemaClassInfo21FixupBaseClassPointerEiPKS_ */
};

// <0001AA46> ../../public/schemalib/schemaclassinfo.h:79
// member functions: 122
// member variable: 1
// class size: 112
class CSchemaClassInfo : protected SchemaClassInfoData_t {
protected:
	/* struct SchemaClassInfoData_t <ancestor>; */ /* 0 112 */
	/* ../../public/schemalib/schemaclassinfo.h:86 */
	void CSchemaClassInfo(CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:91 */
	void ~CSchemaClassInfo(CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:96 */
	const char* GetBindingName(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:97 */
	const CSchemaClassInfo* GetPrimaryBinding(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:99 */
	const char* GetName(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:100 */
	const CSchemaClassInfo* GetSingleInheritanceBaseClass(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:102 */
	const CSchemaBaseClassInfo* GetBaseClassInfo(const CSchemaClassInfo* , int);
	/* ../../public/schemalib/schemaclassinfo.h:103 */
	int GetBaseClassCount(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:104 */
	const CSchemaClassInfo* GetBaseClass(const CSchemaClassInfo* , int);
	/* ../../public/schemalib/schemaclassinfo.h:105 */
	uint32 GetBaseClassOffset(const CSchemaClassInfo* , int);
	/* ../../public/schemalib/schemaclassinfo.h:107 */
	int32 GetSizeOf(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:108 */
	uint8 GetAlignOf(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:109 */
	CSchemaType* GetTypeOf(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:111 */
	int GetFieldCount(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:112 */
	const CSchemaClassField* GetField(const CSchemaClassInfo* , int);
	/* ../../public/schemalib/schemaclassinfo.h:114 */
	int GetStaticFieldCount(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:115 */
	const CSchemaStaticField* GetStaticField(const CSchemaClassInfo* , int);
	/* ../../public/schemalib/schemaclassinfo.h:117 */
	bool IsInModuleLocalTypeScope(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:118 */
	SchemaTypeScope_t GetRegisterTypeScope(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:120 */
	const datamap_t* GetDataDesc(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:122 */
	const CSchemaClassField* FindField(const CSchemaClassInfo* , const char* , SchemaBaseClassTraversal_t, int32* );
	/* ../../public/schemalib/schemaclassinfo.h:123 */
	const CSchemaClassField* FindField(const CSchemaClassInfo* , const char* , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t* , int32* );
	/* ../../public/schemalib/schemaclassinfo.h:124 */
	const CSchemaStaticField* FindStaticField(const CSchemaClassInfo* , const char* , SchemaBaseClassTraversal_t);
	/* ../../public/schemalib/schemaclassinfo.h:126 */
	size_t GetDataSize(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:128 */
	void GetBaseBindingInfo(const CSchemaClassInfo* , SchemaBaseBindingInfo_t* );
	/* ../../public/schemalib/schemaclassinfo.h:130 */
	bool MultipleInheritsFromOrIs(const CSchemaClassInfo* , const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:131 */
	bool SingleInheritsFromOrIs(const CSchemaClassInfo* , const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:132 */
	bool CanReinterpretAs(const CSchemaClassInfo* , const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:134 */
	bool MetaIsPresent(const CSchemaClassInfo* , const char* , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../../public/schemalib/schemaclassinfo.h:135 */
	void* MetaGetPtr(const CSchemaClassInfo* , const char* , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../../public/schemalib/schemaclassinfo.h:138 */
	MetadataIntrospectionHandle_t GetMetadata(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:140 */
	void SetTypeScope(CSchemaClassInfo* , SchemaTypeScope_t, ISchemaSystemTypeScope* );
	/* ../../public/schemalib/schemaclassinfo.h:141 */
	ISchemaSystemTypeScope* GetTypeScope(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:143 */
	void InstallModuleClassBindings(ISchemaSystem* );
	/* ../../public/schemalib/schemaclassinfo.h:147 */
	int GetMultipleInheritanceDepth(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:151 */
	int GetSingleInheritanceDepth(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:153 */
	bool HasFlag1(const CSchemaClassInfo* , SchemaClassFlags1_t);
	/* ../../public/schemalib/schemaclassinfo.h:155 */
	bool HasFlag1_R(const CSchemaClassInfo* , SchemaClassFlags1_t);
	/* ../../public/schemalib/schemaclassinfo.h:157 */
	bool HasFlag2(const CSchemaClassInfo* , SchemaClassFlags2_t);
	/* ../../public/schemalib/schemaclassinfo.h:159 */
	bool HasFlag2_R(const CSchemaClassInfo* , SchemaClassFlags2_t);
	/* ../../public/schemalib/schemaclassinfo.h:162 */
	bool IsNoschemaClass(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:165 */
	void RemoveNoschemaData(CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:167 */
	bool CanAllocate(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:171 */
	bool IsAbstractBinding(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:176 */
	void* Allocate(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:178 */
	void Deallocate(const CSchemaClassInfo* , void* );
	/* ../../public/schemalib/schemaclassinfo.h:179 */
	void* AllocateAndCopyConstruct(const CSchemaClassInfo* , const void* );
	/* ../../public/schemalib/schemaclassinfo.h:180 */
	void Copy(const CSchemaClassInfo* , void* , const void* );
	/* ../../public/schemalib/schemaclassinfo.h:181 */
	void* ConstructInPlace(const CSchemaClassInfo* , void* );
	/* ../../public/schemalib/schemaclassinfo.h:182 */
	void DestructInPlace(const CSchemaClassInfo* , void* );
	/* ../../public/schemalib/schemaclassinfo.h:184 */
	const CSchemaClassInfo* DeduceDerivedType(const CSchemaClassInfo* , const void* );
	/* ../../public/schemalib/schemaclassinfo.h:186 */
	bool Register(CSchemaClassInfo* , ISchemaSystem* , const char* , const char* , CSchemaType** , int, CBufferString* );
	/* ../../public/schemalib/schemaclassinfo.h:192 */
	void CompleteInitialization(CSchemaClassInfo* , CSchemaType* );
	/* ../../public/schemalib/schemaclassinfo.h:193 */
	void ValidateModuleLocalTypeScope(CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:194 */
	void Validate(CSchemaClassInfo* );
private:
	/* ../../public/schemalib/schemaclassinfo.h:198 */
	const CSchemaClassField* FindField_R(const CSchemaClassInfo* , const char* , SchemaBaseClassTraversal_t, uint32, ClassIntrospectionHandle_t* , int32* );
	/* ../../public/schemalib/schemaclassinfo.h:201 */
	int NumBasesToTraverse(const CSchemaClassInfo* , SchemaBaseClassTraversal_t);
	/* ../../public/schemalib/schemaclassinfo.h:203 */
	void ReportClassError(const CSchemaClassInfo* , const char* );
	/* ../../public/schemalib/schemaclassinfo.h:206 */
	int CalculateMultipleInheritanceDepth(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:207 */
	int CalculateSingleInheritanceDepth(const CSchemaClassInfo* );
	/* ../../public/schemalib/schemaclassinfo.h:209 */
	void FixupBaseClassPointer(CSchemaClassInfo* , int, const CSchemaClassInfo* );
	void CSchemaClassInfo(class CSchemaClassInfo *); /* linkage=_ZN16CSchemaClassInfoC4Ev */
	void ~CSchemaClassInfo(class CSchemaClassInfo *); /* linkage=_ZN16CSchemaClassInfoD4Ev */
	const char  * GetBindingName(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo14GetBindingNameEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo17GetPrimaryBindingEv */
	const char  * GetName(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo7GetNameEv */
	const class CSchemaClassInfo  * GetSingleInheritanceBaseClass(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo29GetSingleInheritanceBaseClassEv */
	const class CSchemaBaseClassInfo  * GetBaseClassInfo(const class CSchemaClassInfo  *, int); /* linkage=_ZNK16CSchemaClassInfo16GetBaseClassInfoEi */
	int GetBaseClassCount(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo17GetBaseClassCountEv */
	const class CSchemaClassInfo  * GetBaseClass(const class CSchemaClassInfo  *, int); /* linkage=_ZNK16CSchemaClassInfo12GetBaseClassEi */
	uint32 GetBaseClassOffset(const class CSchemaClassInfo  *, int); /* linkage=_ZNK16CSchemaClassInfo18GetBaseClassOffsetEi */
	int32 GetSizeOf(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo10GetAlignOfEv */
	class CSchemaType * GetTypeOf(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo9GetTypeOfEv */
	int GetFieldCount(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo13GetFieldCountEv */
	const class CSchemaClassField  * GetField(const class CSchemaClassInfo  *, int); /* linkage=_ZNK16CSchemaClassInfo8GetFieldEi */
	int GetStaticFieldCount(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo19GetStaticFieldCountEv */
	const class CSchemaStaticField  * GetStaticField(const class CSchemaClassInfo  *, int); /* linkage=_ZNK16CSchemaClassInfo14GetStaticFieldEi */
	bool IsInModuleLocalTypeScope(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo24IsInModuleLocalTypeScopeEv */
	enum SchemaTypeScope_t GetRegisterTypeScope(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo20GetRegisterTypeScopeEv */
	const class datamap_t  * GetDataDesc(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo11GetDataDescEv */
	const class CSchemaClassField  * FindField(const class CSchemaClassInfo  *, const char  *, enum SchemaBaseClassTraversal_t, int32 *); /* linkage=_ZNK16CSchemaClassInfo9FindFieldEPKc26SchemaBaseClassTraversal_tPi */
	const class CSchemaClassField  * FindField(const class CSchemaClassInfo  *, const char  *, enum SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t *, int32 *); /* linkage=_ZNK16CSchemaClassInfo9FindFieldEPKc26SchemaBaseClassTraversal_tPPKS_Pi */
	const class CSchemaStaticField  * FindStaticField(const class CSchemaClassInfo  *, const char  *, enum SchemaBaseClassTraversal_t); /* linkage=_ZNK16CSchemaClassInfo15FindStaticFieldEPKc26SchemaBaseClassTraversal_t */
	size_t GetDataSize(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo11GetDataSizeEv */
	void GetBaseBindingInfo(const class CSchemaClassInfo  *, class SchemaBaseBindingInfo_t *); /* linkage=_ZNK16CSchemaClassInfo18GetBaseBindingInfoEP23SchemaBaseBindingInfo_t */
	bool MultipleInheritsFromOrIs(const class CSchemaClassInfo  *, const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo24MultipleInheritsFromOrIsEPKS_ */
	bool SingleInheritsFromOrIs(const class CSchemaClassInfo  *, const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo22SingleInheritsFromOrIsEPKS_ */
	bool CanReinterpretAs(const class CSchemaClassInfo  *, const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo16CanReinterpretAsEPKS_ */
	/* <4954124> ../public/schemalib/schemaclassinfo.h:229 */
	bool MetaIsPresent(const class CSchemaClassInfo  *, const char  *, enum SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t); /* linkage=_ZNK16CSchemaClassInfo13MetaIsPresentEPKc26SchemaBaseClassTraversal_tPKS_ */
	void * MetaGetPtr(const class CSchemaClassInfo  *, const char  *, enum SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t); /* linkage=_ZNK16CSchemaClassInfo10MetaGetPtrEPKc26SchemaBaseClassTraversal_tPKS_ */
	MetadataIntrospectionHandle_t GetMetadata(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo11GetMetadataEv */
	/* <4957044> schemalib/schemaclassinfo.cpp:511 */
	void SetTypeScope(class CSchemaClassInfo *, enum SchemaTypeScope_t, class ISchemaSystemTypeScope *); /* linkage=_ZN16CSchemaClassInfo12SetTypeScopeE17SchemaTypeScope_tP22ISchemaSystemTypeScope */
	class ISchemaSystemTypeScope * GetTypeScope(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo12GetTypeScopeEv */
	void InstallModuleClassBindings(class ISchemaSystem *); /* linkage=_ZN16CSchemaClassInfo26InstallModuleClassBindingsEP13ISchemaSystem */
	int GetMultipleInheritanceDepth(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo27GetMultipleInheritanceDepthEv */
	int GetSingleInheritanceDepth(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo25GetSingleInheritanceDepthEv */
	bool HasFlag1(const class CSchemaClassInfo  *, enum SchemaClassFlags1_t); /* linkage=_ZNK16CSchemaClassInfo8HasFlag1E19SchemaClassFlags1_t */
	/* <4955418> schemalib/schemaclassinfo.cpp:43 */
	bool HasFlag1_R(const class CSchemaClassInfo  *, enum SchemaClassFlags1_t); /* linkage=_ZNK16CSchemaClassInfo10HasFlag1_RE19SchemaClassFlags1_t */
	bool HasFlag2(const class CSchemaClassInfo  *, enum SchemaClassFlags2_t); /* linkage=_ZNK16CSchemaClassInfo8HasFlag2E19SchemaClassFlags2_t */
	/* <49561a2> schemalib/schemaclassinfo.cpp:65 */
	bool HasFlag2_R(const class CSchemaClassInfo  *, enum SchemaClassFlags2_t); /* linkage=_ZNK16CSchemaClassInfo10HasFlag2_RE19SchemaClassFlags2_t */
	bool IsNoschemaClass(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo15IsNoschemaClassEv */
	void RemoveNoschemaData(class CSchemaClassInfo *); /* linkage=_ZN16CSchemaClassInfo18RemoveNoschemaDataEv */
	bool CanAllocate(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo11CanAllocateEv */
	bool IsAbstractBinding(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo17IsAbstractBindingEv */
	void * Allocate(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo8AllocateEv */
	void Deallocate(const class CSchemaClassInfo  *, void *); /* linkage=_ZNK16CSchemaClassInfo10DeallocateEPv */
	void * AllocateAndCopyConstruct(const class CSchemaClassInfo  *, const void  *); /* linkage=_ZNK16CSchemaClassInfo24AllocateAndCopyConstructEPKv */
	void Copy(const class CSchemaClassInfo  *, void *, const void  *); /* linkage=_ZNK16CSchemaClassInfo4CopyEPvPKv */
	void * ConstructInPlace(const class CSchemaClassInfo  *, void *); /* linkage=_ZNK16CSchemaClassInfo16ConstructInPlaceEPv */
	void DestructInPlace(const class CSchemaClassInfo  *, void *); /* linkage=_ZNK16CSchemaClassInfo15DestructInPlaceEPv */
	const class CSchemaClassInfo  * DeduceDerivedType(const class CSchemaClassInfo  *, const void  *); /* linkage=_ZNK16CSchemaClassInfo17DeduceDerivedTypeEPKv */
	bool Register(class CSchemaClassInfo *, class ISchemaSystem *, const char  *, const char  *, class CSchemaType * *, int, class CBufferString *); /* linkage=_ZN16CSchemaClassInfo8RegisterEP13ISchemaSystemPKcS3_PP11CSchemaTypeiP13CBufferString */
	/* <49571d0> schemalib/schemaclassinfo.cpp:550 */
	void CompleteInitialization(class CSchemaClassInfo *, class CSchemaType *); /* linkage=_ZN16CSchemaClassInfo22CompleteInitializationEP11CSchemaType */
	void ValidateModuleLocalTypeScope(class CSchemaClassInfo *); /* linkage=_ZN16CSchemaClassInfo28ValidateModuleLocalTypeScopeEv */
	void Validate(class CSchemaClassInfo *); /* linkage=_ZN16CSchemaClassInfo8ValidateEv */
	const class CSchemaClassField  * FindField_R(const class CSchemaClassInfo  *, const char  *, enum SchemaBaseClassTraversal_t, uint32, ClassIntrospectionHandle_t *, int32 *); /* linkage=_ZNK16CSchemaClassInfo11FindField_REPKc26SchemaBaseClassTraversal_tjPPKS_Pi */
	int NumBasesToTraverse(const class CSchemaClassInfo  *, enum SchemaBaseClassTraversal_t); /* linkage=_ZNK16CSchemaClassInfo18NumBasesToTraverseE26SchemaBaseClassTraversal_t */
	void ReportClassError(const class CSchemaClassInfo  *, const char  *); /* linkage=_ZNK16CSchemaClassInfo16ReportClassErrorEPKc */
	int CalculateMultipleInheritanceDepth(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo33CalculateMultipleInheritanceDepthEv */
	/* <49570f2> schemalib/schemaclassinfo.cpp:537 */
	int CalculateSingleInheritanceDepth(const class CSchemaClassInfo  *); /* linkage=_ZNK16CSchemaClassInfo31CalculateSingleInheritanceDepthEv */
	void FixupBaseClassPointer(class CSchemaClassInfo *, int, const class CSchemaClassInfo  *); /* linkage=_ZN16CSchemaClassInfo21FixupBaseClassPointerEiPKS_ */
};

// <003774FB> ../public/schemalib/schemaclassinfo.h:96
inline void CSchemaClassInfo::GetBindingName()
{
} /* size: 0 */

// <0495350E> ../public/schemalib/schemaclassinfo.h:97
inline void CSchemaClassInfo::GetPrimaryBinding()
{
} /* size: 0 */

// <0524B306> ../public/schemalib/schemaclassinfo.h:99
inline void CSchemaClassInfo::GetName()
{
} /* size: 0 */

// <049534DC> ../public/schemalib/schemaclassinfo.h:100
inline void CSchemaClassInfo::GetSingleInheritanceBaseClass()
{
} /* size: 0 */

// <0497323A> ../public/schemalib/schemaclassinfo.h:102
inline void CSchemaClassInfo::GetBaseClassInfo(int nIndex)
{
} /* size: 0 */

// <04973221> ../public/schemalib/schemaclassinfo.h:103
inline void CSchemaClassInfo::GetBaseClassCount()
{
} /* size: 0 */

// <049731FC> ../public/schemalib/schemaclassinfo.h:104
inline void CSchemaClassInfo::GetBaseClass(int nIndex)
{
} /* size: 0 */

// <049731D7> ../public/schemalib/schemaclassinfo.h:105
inline void CSchemaClassInfo::GetBaseClassOffset(int nIndex)
{
} /* size: 0 */

// <0495343B> ../public/schemalib/schemaclassinfo.h:107
inline void CSchemaClassInfo::GetSizeOf()
{
} /* size: 0 */

// <04953422> ../public/schemalib/schemaclassinfo.h:108
inline void CSchemaClassInfo::GetAlignOf()
{
} /* size: 0 */

// <049731BE> ../public/schemalib/schemaclassinfo.h:111
inline void CSchemaClassInfo::GetFieldCount()
{
} /* size: 0 */

// <04973199> ../public/schemalib/schemaclassinfo.h:112
inline void CSchemaClassInfo::GetField(int nIndex)
{
} /* size: 0 */

// <049533CB> ../public/schemalib/schemaclassinfo.h:114
inline void CSchemaClassInfo::GetStaticFieldCount()
{
} /* size: 0 */

// <049533A6> ../public/schemalib/schemaclassinfo.h:115
inline void CSchemaClassInfo::GetStaticField(int nIndex)
{
} /* size: 0 */

// <0495338D> ../public/schemalib/schemaclassinfo.h:117
inline void CSchemaClassInfo::IsInModuleLocalTypeScope()
{
} /* size: 0 */

// <04953374> ../public/schemalib/schemaclassinfo.h:118
inline void CSchemaClassInfo::GetRegisterTypeScope()
{
} /* size: 0 */

// <0495335B> ../public/schemalib/schemaclassinfo.h:138
inline void CSchemaClassInfo::GetMetadata()
{
} /* size: 0 */

// <06E5C8ED> ../../public/schemalib/schemaclassinfo.h:141
inline void CSchemaClassInfo::GetTypeScope()
{
} /* size: 0 */

// <0524B2E1> ../public/schemalib/schemaclassinfo.h:153
inline void CSchemaClassInfo::HasFlag1(SchemaClassFlags1_t nFlag)
{
} /* size: 0 */

// <04953311> ../public/schemalib/schemaclassinfo.h:157
inline void CSchemaClassInfo::HasFlag2(SchemaClassFlags2_t nFlag)
{
} /* size: 0 */

// <049532F8> ../public/schemalib/schemaclassinfo.h:162
inline void CSchemaClassInfo::IsNoschemaClass()
{
} /* size: 0 */

// <0524B2C8> ../public/schemalib/schemaclassinfo.h:171
inline void CSchemaClassInfo::IsAbstractBinding()
{
} /* size: 0 */

// <04954124> ../public/schemalib/schemaclassinfo.h:229
// variables: 19
// function calls: 62
void CSchemaClassInfo::MetaIsPresent(const char* pTagName, SchemaBaseClassTraversal_t nBaseClassTraversal, ClassIntrospectionHandle_t classToSkip)
{
	int nBasesToTraverse; // 239
	CSchemaMetadataSet::CSchemaMetadataSet(
				uint16 nNumEntries,
				const SchemaMetadataEntryData_t* pEntries);  // 138
	CSchemaClassInfo::GetMetadata(); // 235
	CSchemaClassInfo::NumBasesToTraverse(
				SchemaBaseClassTraversal_t nBaseClassTraversal);  // 307
	CSchemaClassInfo::NumBasesToTraverse(
				SchemaBaseClassTraversal_t nBaseClassTraversal);  // 239
	{
		int i; // 240
		{
			const CSchemaBaseClassInfo* pBaseInfo; // 242
			CSchemaClassInfo::GetBaseClassInfo(
					int nIndex);  // 242
			CSchemaBaseClassInfo::GetClass(); // 244
			CSchemaMetadataSet::CSchemaMetadataSet(
						uint16 nNumEntries,
						const SchemaMetadataEntryData_t* pEntries);  // 138
			CSchemaClassInfo::GetMetadata(); // 235
			CSchemaClassInfo::NumBasesToTraverse(
						SchemaBaseClassTraversal_t nBaseClassTraversal);  // 307
			CSchemaClassInfo::NumBasesToTraverse(
						SchemaBaseClassTraversal_t nBaseClassTraversal);  // 239
			{
				int i; // 240
				{
					const CSchemaBaseClassInfo* pBaseInfo; // 242
					CSchemaClassInfo::GetBaseClassInfo(
							int nIndex);  // 242
					CSchemaBaseClassInfo::GetClass(); // 244
					CSchemaMetadataSet::CSchemaMetadataSet(
								uint16 nNumEntries,
								const SchemaMetadataEntryData_t* pEntries);  // 138
					CSchemaClassInfo::GetMetadata(); // 235
					CSchemaClassInfo::NumBasesToTraverse(
								SchemaBaseClassTraversal_t nBaseClassTraversal);  // 307
					CSchemaClassInfo::NumBasesToTraverse(
								SchemaBaseClassTraversal_t nBaseClassTraversal);  // 239
					{
						int i; // 240
						{
							const CSchemaBaseClassInfo* pBaseInfo; // 242
							CSchemaClassInfo::GetBaseClassInfo(
									int nIndex);  // 242
							CSchemaBaseClassInfo::GetClass(); // 244
							CSchemaMetadataSet::CSchemaMetadataSet(
										uint16 nNumEntries,
										const SchemaMetadataEntryData_t* pEntries);  // 138
							CSchemaClassInfo::GetMetadata(); // 235
							CSchemaClassInfo::NumBasesToTraverse(
										SchemaBaseClassTraversal_t nBaseClassTraversal);  // 307
							CSchemaClassInfo::NumBasesToTraverse(
										SchemaBaseClassTraversal_t nBaseClassTraversal);  // 239
							{
								int i; // 240
								{
									const CSchemaBaseClassInfo* pBaseInfo; // 242
									CSchemaClassInfo::GetBaseClassInfo(
											int nIndex);  // 242
									CSchemaBaseClassInfo::GetClass(); // 244
									CSchemaMetadataSet::CSchemaMetadataSet(
												uint16 nNumEntries,
												const SchemaMetadataEntryData_t* pEntries);  // 138
									CSchemaClassInfo::GetMetadata(); // 235
									CSchemaClassInfo::NumBasesToTraverse(
												SchemaBaseClassTraversal_t nBaseClassTraversal);  // 307
									CSchemaClassInfo::NumBasesToTraverse(
												SchemaBaseClassTraversal_t nBaseClassTraversal);  // 239
									{
										int i; // 240
										{
											const CSchemaBaseClassInfo* pBaseInfo; // 242
											CSchemaClassInfo::GetBaseClassInfo(
													int nIndex);  // 242
											CSchemaBaseClassInfo::GetClass(); // 244
											CSchemaMetadataSet::CSchemaMetadataSet(
														uint16 nNumEntries,
														const SchemaMetadataEntryData_t* pEntries);  // 138
											CSchemaClassInfo::GetMetadata(); // 235
											CSchemaClassInfo::NumBasesToTraverse(
														SchemaBaseClassTraversal_t nBaseClassTraversal);  // 307
											CSchemaClassInfo::NumBasesToTraverse(
														SchemaBaseClassTraversal_t nBaseClassTraversal);  // 239
											{
												int i; // 240
												{
													const CSchemaBaseClassInfo* pBaseInfo; // 242
													CSchemaClassInfo::GetBaseClassInfo(
															int nIndex);  // 242
													CSchemaBaseClassInfo::GetClass(); // 244
													CSchemaMetadataSet::CSchemaMetadataSet(
																uint16 nNumEntries,
																const SchemaMetadataEntryData_t* pEntries);  // 138
													CSchemaClassInfo::GetMetadata(); // 235
													CSchemaClassInfo::NumBasesToTraverse(
																SchemaBaseClassTraversal_t nBaseClassTraversal);  // 307
													CSchemaClassInfo::NumBasesToTraverse(
																SchemaBaseClassTraversal_t nBaseClassTraversal);  // 239
													{
														int i; // 240
														{
															const CSchemaBaseClassInfo* pBaseInfo; // 242
															CSchemaClassInfo::GetBaseClassInfo(
																int nIndex);  // 242
															CSchemaBaseClassInfo::GetClass(); // 244
															CSchemaMetadataSet::CSchemaMetadataSet(
																uint16 nNumEntries,
																const SchemaMetadataEntryData_t* pEntries);  // 138
															CSchemaClassInfo::GetMetadata(); // 235
															CSchemaClassInfo::NumBasesToTraverse(
																SchemaBaseClassTraversal_t nBaseClassTraversal);  // 307
															CSchemaClassInfo::NumBasesToTraverse(
																SchemaBaseClassTraversal_t nBaseClassTraversal);  // 239
															{
																int i; // 240
																{
																const CSchemaBaseClassInfo* pBaseInfo; // 242
																CSchemaClassInfo::GetBaseClassInfo(
																int nIndex);  // 242
																CSchemaBaseClassInfo::GetClass(); // 244
																CSchemaMetadataSet::CSchemaMetadataSet(
																uint16 nNumEntries,
																const SchemaMetadataEntryData_t* pEntries);  // 138
																CSchemaClassInfo::GetMetadata(); // 235
																CSchemaClassInfo::NumBasesToTraverse(
																SchemaBaseClassTraversal_t nBaseClassTraversal);  // 307
																CSchemaClassInfo::NumBasesToTraverse(
																SchemaBaseClassTraversal_t nBaseClassTraversal);  // 239
																{
																int i; // 240
																{
																const CSchemaBaseClassInfo* pBaseInfo; // 242
																CSchemaBaseClassInfo::GetClass(); // 244
																CSchemaClassInfo::GetBaseClassInfo(
																int nIndex);  // 242
																}
																}
																CSchemaClassInfo::MetaIsPresent(
																const char* pTagName,
																SchemaBaseClassTraversal_t nBaseClassTraversal,
																ClassIntrospectionHandle_t classToSkip);  // 244
																}
															}
															CSchemaClassInfo::MetaIsPresent(
																const char* pTagName,
																SchemaBaseClassTraversal_t nBaseClassTraversal,
																ClassIntrospectionHandle_t classToSkip);  // 244
														}
													}
													CSchemaClassInfo::MetaIsPresent(
															const char* pTagName,
															SchemaBaseClassTraversal_t nBaseClassTraversal,
															ClassIntrospectionHandle_t classToSkip);  // 244
												}
											}
											CSchemaClassInfo::MetaIsPresent(
													const char* pTagName,
													SchemaBaseClassTraversal_t nBaseClassTraversal,
													ClassIntrospectionHandle_t classToSkip);  // 244
										}
									}
									CSchemaClassInfo::MetaIsPresent(
											const char* pTagName,
											SchemaBaseClassTraversal_t nBaseClassTraversal,
											ClassIntrospectionHandle_t classToSkip);  // 244
								}
							}
							CSchemaClassInfo::MetaIsPresent(
									const char* pTagName,
									SchemaBaseClassTraversal_t nBaseClassTraversal,
									ClassIntrospectionHandle_t classToSkip);  // 244
						}
					}
					CSchemaClassInfo::MetaIsPresent(
							const char* pTagName,
							SchemaBaseClassTraversal_t nBaseClassTraversal,
							ClassIntrospectionHandle_t classToSkip);  // 244
				}
			}
			CSchemaClassInfo::MetaIsPresent(
					const char* pTagName,
					SchemaBaseClassTraversal_t nBaseClassTraversal,
					ClassIntrospectionHandle_t classToSkip);  // 244
		}
	}
} /* size: 1419, variables: 1, inline expansions: 4 (76 bytes) */

// <04953292> ../public/schemalib/schemaclassinfo.h:229
// variables: 3
inline void CSchemaClassInfo::MetaIsPresent(const char* pTagName, SchemaBaseClassTraversal_t nBaseClassTraversal, ClassIntrospectionHandle_t classToSkip)
{
	int nBasesToTraverse; // 239
	{
		int i; // 240
		{
			const CSchemaBaseClassInfo* pBaseInfo; // 242
		}
	}
} /* size: 0, variables: 1 */

// <04953268> ../public/schemalib/schemaclassinfo.h:307
inline void CSchemaClassInfo::NumBasesToTraverse(SchemaBaseClassTraversal_t nBaseClassTraversal)
{
} /* size: 0 */

// <001038F9> ../public/schemalib/schemaclassinfo.h:327
inline void* SchemaMetaGetPtr2(FieldIntrospectionHandle_t fieldInfo, const char* pKey)
{
} /* size: 0 */

// <0495321C> ../public/schemalib/schemaclassinfo.h:332
inline bool SchemaMetaIsPresent2(ClassIntrospectionHandle_t classInfo, const char* pKey, SchemaBaseClassTraversal_t nBaseClassTraversal, ClassIntrospectionHandle_t classToSkip)
{
} /* size: 0 */

// <049531CD> ../public/schemalib/schemaclassinfo.h:349
// variables: 2
inline int SchemaMultipleInheritanceDepth(ClassIntrospectionHandle_t pClassInfo, ClassIntrospectionHandle_t pPossibleBase)
{
	{
		int i; // 354
		{
			int nDepth; // 356
		}
	}
} /* size: 0 */

// <04953164> ../public/schemalib/schemaclassinfo.h:371
// variables: 3
inline int SchemaSingleInheritanceDepth(ClassIntrospectionHandle_t pClassInfo, ClassIntrospectionHandle_t pPossibleBase)
{
	int nDepth; // 373
	const char   __FUNCTION__; // 38617
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 382
	}
} /* size: 0, variables: 2 */

// <03172874> ../public/schemalib/schemaclassinfo.h:371
// variables: 3
inline int SchemaSingleInheritanceDepth(ClassIntrospectionHandle_t pClassInfo, ClassIntrospectionHandle_t pPossibleBase)
{
	int nDepth; // 373
	const char   __FUNCTION__; // 23774
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 382
	}
} /* size: 0, variables: 2 */

// <014E3671> ../public/schemalib/schemaclassinfo.h:371
// variables: 3
inline int SchemaSingleInheritanceDepth(ClassIntrospectionHandle_t pClassInfo, ClassIntrospectionHandle_t pPossibleBase)
{
	int nDepth; // 373
	const char   __FUNCTION__; // 33433
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 382
	}
} /* size: 0, variables: 2 */

// <0064DBBA> ../public/schemalib/schemaclassinfo.h:371
// variables: 3
inline int SchemaSingleInheritanceDepth(ClassIntrospectionHandle_t pClassInfo, ClassIntrospectionHandle_t pPossibleBase)
{
	int nDepth; // 373
	const char   __FUNCTION__; // 14868
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 382
	}
} /* size: 0, variables: 2 */

// <019D8330> ../public/schemalib/schemaclassinfo.h:371
// variables: 3
inline int SchemaSingleInheritanceDepth(ClassIntrospectionHandle_t pClassInfo, ClassIntrospectionHandle_t pPossibleBase)
{
	int nDepth; // 373
	const char   __FUNCTION__; // 62730
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 382
	}
} /* size: 0, variables: 2 */

// <009296FF> ../public/schemalib/schemaclassinfo.h:371
// variables: 3
inline int SchemaSingleInheritanceDepth(ClassIntrospectionHandle_t pClassInfo, ClassIntrospectionHandle_t pPossibleBase)
{
	int nDepth; // 373
	const char   __FUNCTION__; // 28244
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 382
	}
} /* size: 0, variables: 2 */

// <04953132> ../public/schemalib/schemaclassinfo.h:394
inline bool SchemaCanReinterpretAs(ClassIntrospectionHandle_t pClassInfo, ClassIntrospectionHandle_t pPossibleBase)
{
} /* size: 0 */

// <0063A14B> ../public/schemalib/schemaclassinfo.h:440
inline const char* SchemaGetClassName(ClassIntrospectionHandle_t pClassInfo)
{
} /* size: 0 */

// <00639473> ../public/schemalib/schemaclassinfo.h:473
void SpewClassDescription(ClassIntrospectionHandle_t, LoggingChannelID_t, const char *)
{
} /* size: 0 */

