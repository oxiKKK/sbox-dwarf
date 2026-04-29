
//
// public/schemalib/schemaiterator.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 8
//	classes: 5
//

// <04951B84> ../public/schemalib/schemaiterator.h:12
void CSchemaInheritanceIterator::~CSchemaInheritanceIterator()
{
} /* size: 0 */

// <04951B68> ../public/schemalib/schemaiterator.h:12
inline void CSchemaInheritanceIterator::~CSchemaInheritanceIterator()
{
} /* size: 0 */

// <04949FA9> ../public/schemalib/schemaiterator.h:12
// member functions: 30
// member variables: 5
// class size: 184
class CSchemaInheritanceIterator {
	/* ../public/schemalib/schemaiterator.h:39 */
	struct ClassToTraverse_t {
		ClassIntrospectionHandle_t m_Class; /* 0 8 */
		uint32 m_nClassOffset; /* 8 4 */
		int m_nDerivedClassIndex; /* 12 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/schemalib/schemaiterator.h:15 */
	void CSchemaInheritanceIterator(CSchemaInheritanceIterator* );
	/* ../public/schemalib/schemaiterator.h:16 */
	void CSchemaInheritanceIterator(CSchemaInheritanceIterator* , ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t);
	/* ../public/schemalib/schemaiterator.h:17 */
	void CSchemaInheritanceIterator(CSchemaInheritanceIterator* , ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:19 */
	void Init(CSchemaInheritanceIterator* , ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:21 */
	void Reset(CSchemaInheritanceIterator* );
	/* ../public/schemalib/schemaiterator.h:22 */
	void Invalidate(CSchemaInheritanceIterator* );
	/* ../public/schemalib/schemaiterator.h:24 */
	void Advance(CSchemaInheritanceIterator* );
	/* ../public/schemalib/schemaiterator.h:25 */
	bool IsValid(const CSchemaInheritanceIterator* );
	/* ../public/schemalib/schemaiterator.h:27 */
	ClassIntrospectionHandle_t GetClass(const CSchemaInheritanceIterator* );
	/* ../public/schemalib/schemaiterator.h:28 */
	uint32 GetClassOffset(const CSchemaInheritanceIterator* );
	/* ../public/schemalib/schemaiterator.h:31 */
	void BuildDerivedClassList(const CSchemaInheritanceIterator* , CUtlVectorFixedGrowable<const CSchemaClassInfo*, 32>& );
private:
	/* ../public/schemalib/schemaiterator.h:34 */
	void AdvanceClass(CSchemaInheritanceIterator* );
	/* ../public/schemalib/schemaiterator.h:36 */
	void PopulateTraversal(CSchemaInheritanceIterator* , ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:37 */
	int PopulateTraversal_R(CSchemaInheritanceIterator* , ClassIntrospectionHandle_t, ClassIntrospectionHandle_t, uint32, bool, bool);
	CUtlVectorFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8> m_ClassesToTraverse __attribute__((__aligned__(8))); /* 0 160 */
	ClassIntrospectionHandle_t m_CurrentClass; /* 160 8 */
	ClassIntrospectionHandle_t m_ClassToSkip; /* 168 8 */
	int m_nCurrentClassIndex; /* 176 4 */
	uint32 m_nCurrentClassOffset; /* 180 4 */
	void ~CSchemaInheritanceIterator(CSchemaInheritanceIterator* );
	void CSchemaInheritanceIterator(class CSchemaInheritanceIterator *); /* linkage=_ZN26CSchemaInheritanceIteratorC4Ev */
	void CSchemaInheritanceIterator(class CSchemaInheritanceIterator *, ClassIntrospectionHandle_t, enum SchemaBaseClassTraversal_t); /* linkage=_ZN26CSchemaInheritanceIteratorC4EPK16CSchemaClassInfo26SchemaBaseClassTraversal_t */
	void CSchemaInheritanceIterator(class CSchemaInheritanceIterator *, ClassIntrospectionHandle_t, enum SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t); /* linkage=_ZN26CSchemaInheritanceIteratorC4EPK16CSchemaClassInfo26SchemaBaseClassTraversal_tS2_ */
	/* <497443b> schemalib/schemaiterator.cpp:33 */
	void Init(class CSchemaInheritanceIterator *, ClassIntrospectionHandle_t, enum SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t); /* linkage=_ZN26CSchemaInheritanceIterator4InitEPK16CSchemaClassInfo26SchemaBaseClassTraversal_tS2_ */
	/* <497356d> schemalib/schemaiterator.cpp:46 */
	void Reset(class CSchemaInheritanceIterator *); /* linkage=_ZN26CSchemaInheritanceIterator5ResetEv */
	/* <4973671> schemalib/schemaiterator.cpp:55 */
	void Invalidate(class CSchemaInheritanceIterator *); /* linkage=_ZN26CSchemaInheritanceIterator10InvalidateEv */
	/* <4973715> schemalib/schemaiterator.cpp:75 */
	void Advance(class CSchemaInheritanceIterator *); /* linkage=_ZN26CSchemaInheritanceIterator7AdvanceEv */
	/* <49736bd> schemalib/schemaiterator.cpp:67 */
	bool IsValid(const class CSchemaInheritanceIterator  *); /* linkage=_ZNK26CSchemaInheritanceIterator7IsValidEv */
	/* <49737ea> schemalib/schemaiterator.cpp:93 */
	ClassIntrospectionHandle_t GetClass(const class CSchemaInheritanceIterator  *); /* linkage=_ZNK26CSchemaInheritanceIterator8GetClassEv */
	/* <4973813> schemalib/schemaiterator.cpp:101 */
	uint32 GetClassOffset(const class CSchemaInheritanceIterator  *); /* linkage=_ZNK26CSchemaInheritanceIterator14GetClassOffsetEv */
	void BuildDerivedClassList(const class CSchemaInheritanceIterator  *, class CUtlVectorFixedGrowable<const CSchemaClassInfo*, 32> &); /* linkage=_ZNK26CSchemaInheritanceIterator21BuildDerivedClassListER23CUtlVectorFixedGrowableIPK16CSchemaClassInfoLm32EE */
	void AdvanceClass(class CSchemaInheritanceIterator *); /* linkage=_ZN26CSchemaInheritanceIterator12AdvanceClassEv */
	/* <4973f0c> schemalib/schemaiterator.cpp:109 */
	void PopulateTraversal(class CSchemaInheritanceIterator *, ClassIntrospectionHandle_t, enum SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t); /* linkage=_ZN26CSchemaInheritanceIterator17PopulateTraversalEPK16CSchemaClassInfo26SchemaBaseClassTraversal_tS2_ */
	int PopulateTraversal_R(class CSchemaInheritanceIterator *, ClassIntrospectionHandle_t, ClassIntrospectionHandle_t, uint32, bool, bool); /* linkage=_ZN26CSchemaInheritanceIterator19PopulateTraversal_REPK16CSchemaClassInfoS2_jbb */
	void ~CSchemaInheritanceIterator(class CSchemaInheritanceIterator *); /* linkage=_ZN26CSchemaInheritanceIteratorD4Ev */
} __attribute__((__aligned__(8)));

// <04969DED> ../public/schemalib/schemaiterator.h:12
// member functions: 29
// member variables: 5
// class size: 184
class CSchemaInheritanceIterator {
	/* ../public/schemalib/schemaiterator.h:39 */
	struct ClassToTraverse_t {
		ClassIntrospectionHandle_t m_Class; /* 0 8 */
		uint32 m_nClassOffset; /* 8 4 */
		int m_nDerivedClassIndex; /* 12 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/schemalib/schemaiterator.h:15 */
	void CSchemaInheritanceIterator(CSchemaInheritanceIterator* );
	/* ../public/schemalib/schemaiterator.h:16 */
	void CSchemaInheritanceIterator(CSchemaInheritanceIterator* , ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t);
	/* ../public/schemalib/schemaiterator.h:17 */
	void CSchemaInheritanceIterator(CSchemaInheritanceIterator* , ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:19 */
	void Init(CSchemaInheritanceIterator* , ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:21 */
	void Reset(CSchemaInheritanceIterator* );
	/* ../public/schemalib/schemaiterator.h:22 */
	void Invalidate(CSchemaInheritanceIterator* );
	/* ../public/schemalib/schemaiterator.h:24 */
	void Advance(CSchemaInheritanceIterator* );
	/* ../public/schemalib/schemaiterator.h:25 */
	bool IsValid(const CSchemaInheritanceIterator* );
	/* ../public/schemalib/schemaiterator.h:27 */
	ClassIntrospectionHandle_t GetClass(const CSchemaInheritanceIterator* );
	/* ../public/schemalib/schemaiterator.h:28 */
	uint32 GetClassOffset(const CSchemaInheritanceIterator* );
	/* ../public/schemalib/schemaiterator.h:31 */
	void BuildDerivedClassList(const CSchemaInheritanceIterator* , CUtlVectorFixedGrowable<const CSchemaClassInfo*, 32>& );
private:
	/* ../public/schemalib/schemaiterator.h:34 */
	void AdvanceClass(CSchemaInheritanceIterator* );
	/* ../public/schemalib/schemaiterator.h:36 */
	void PopulateTraversal(CSchemaInheritanceIterator* , ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:37 */
	int PopulateTraversal_R(CSchemaInheritanceIterator* , ClassIntrospectionHandle_t, ClassIntrospectionHandle_t, uint32, bool, bool);
	CUtlVectorFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8> m_ClassesToTraverse __attribute__((__aligned__(8))); /* 0 160 */
	ClassIntrospectionHandle_t m_CurrentClass; /* 160 8 */
	ClassIntrospectionHandle_t m_ClassToSkip; /* 168 8 */
	int m_nCurrentClassIndex; /* 176 4 */
	uint32 m_nCurrentClassOffset; /* 180 4 */
	void CSchemaInheritanceIterator(class CSchemaInheritanceIterator *); /* linkage=_ZN26CSchemaInheritanceIteratorC4Ev */
	void CSchemaInheritanceIterator(class CSchemaInheritanceIterator *, ClassIntrospectionHandle_t, enum SchemaBaseClassTraversal_t); /* linkage=_ZN26CSchemaInheritanceIteratorC4EPK16CSchemaClassInfo26SchemaBaseClassTraversal_t */
	void CSchemaInheritanceIterator(class CSchemaInheritanceIterator *, ClassIntrospectionHandle_t, enum SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t); /* linkage=_ZN26CSchemaInheritanceIteratorC4EPK16CSchemaClassInfo26SchemaBaseClassTraversal_tS2_ */
	/* <497443b> schemalib/schemaiterator.cpp:33 */
	void Init(class CSchemaInheritanceIterator *, ClassIntrospectionHandle_t, enum SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t); /* linkage=_ZN26CSchemaInheritanceIterator4InitEPK16CSchemaClassInfo26SchemaBaseClassTraversal_tS2_ */
	/* <497356d> schemalib/schemaiterator.cpp:46 */
	void Reset(class CSchemaInheritanceIterator *); /* linkage=_ZN26CSchemaInheritanceIterator5ResetEv */
	/* <4973671> schemalib/schemaiterator.cpp:55 */
	void Invalidate(class CSchemaInheritanceIterator *); /* linkage=_ZN26CSchemaInheritanceIterator10InvalidateEv */
	/* <4973715> schemalib/schemaiterator.cpp:75 */
	void Advance(class CSchemaInheritanceIterator *); /* linkage=_ZN26CSchemaInheritanceIterator7AdvanceEv */
	/* <49736bd> schemalib/schemaiterator.cpp:67 */
	bool IsValid(const class CSchemaInheritanceIterator  *); /* linkage=_ZNK26CSchemaInheritanceIterator7IsValidEv */
	/* <49737ea> schemalib/schemaiterator.cpp:93 */
	ClassIntrospectionHandle_t GetClass(const class CSchemaInheritanceIterator  *); /* linkage=_ZNK26CSchemaInheritanceIterator8GetClassEv */
	/* <4973813> schemalib/schemaiterator.cpp:101 */
	uint32 GetClassOffset(const class CSchemaInheritanceIterator  *); /* linkage=_ZNK26CSchemaInheritanceIterator14GetClassOffsetEv */
	void BuildDerivedClassList(const class CSchemaInheritanceIterator  *, class CUtlVectorFixedGrowable<const CSchemaClassInfo*, 32> &); /* linkage=_ZNK26CSchemaInheritanceIterator21BuildDerivedClassListER23CUtlVectorFixedGrowableIPK16CSchemaClassInfoLm32EE */
	void AdvanceClass(class CSchemaInheritanceIterator *); /* linkage=_ZN26CSchemaInheritanceIterator12AdvanceClassEv */
	/* <4973f0c> schemalib/schemaiterator.cpp:109 */
	void PopulateTraversal(class CSchemaInheritanceIterator *, ClassIntrospectionHandle_t, enum SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t); /* linkage=_ZN26CSchemaInheritanceIterator17PopulateTraversalEPK16CSchemaClassInfo26SchemaBaseClassTraversal_tS2_ */
	int PopulateTraversal_R(class CSchemaInheritanceIterator *, ClassIntrospectionHandle_t, ClassIntrospectionHandle_t, uint32, bool, bool); /* linkage=_ZN26CSchemaInheritanceIterator19PopulateTraversal_REPK16CSchemaClassInfoS2_jbb */
	void ~CSchemaInheritanceIterator(class CSchemaInheritanceIterator *); /* linkage=_ZN26CSchemaInheritanceIteratorD4Ev */
} __attribute__((__aligned__(8)));

// <00130350> ../public/schemalib/schemaiterator.h:16
void CSchemaInheritanceIterator::CSchemaInheritanceIterator(ClassIntrospectionHandle_t classInfo, SchemaBaseClassTraversal_t nBaseTraversal)
{
} /* size: 0 */

// <04951B51> ../public/schemalib/schemaiterator.h:56
void CSchemaFieldIterator::~CSchemaFieldIterator()
{
} /* size: 0 */

// <04951B35> ../public/schemalib/schemaiterator.h:56
inline void CSchemaFieldIterator::~CSchemaFieldIterator()
{
} /* size: 0 */

// <0494533B> ../public/schemalib/schemaiterator.h:56
// member functions: 57
// member variables: 3
// class size: 200
class CSchemaFieldIterator {
	/* ../public/schemalib/schemaiterator.h:62 */
	void CSchemaFieldIterator(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:63 */
	void CSchemaFieldIterator(CSchemaFieldIterator* , ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t);
	/* ../public/schemalib/schemaiterator.h:64 */
	void CSchemaFieldIterator(CSchemaFieldIterator* , ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:67 */
	void CSchemaFieldIterator(CSchemaFieldIterator* , FieldIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:69 */
	void Init(CSchemaFieldIterator* , ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:70 */
	void InitForSingleField(CSchemaFieldIterator* , FieldIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:72 */
	void Reset(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:73 */
	void Invalidate(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:79 */
	bool FindField(CSchemaFieldIterator* , const char* );
	/* ../public/schemalib/schemaiterator.h:80 */
	bool FindField(CSchemaFieldIterator* , FieldIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:81 */
	void Advance(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:82 */
	bool IsValid(const CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:83 */
	bool IsSingleFieldRestricted(const CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:91 */
	const char* GetFieldName(const CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:95 */
	CUtlString GetFullyQualifiedFieldName(const CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:98 */
	FieldIntrospectionHandle_t GetRawFieldHandle(const CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:100 */
	uint32 GetFieldMemoryOffset(const CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:102 */
	ClassIntrospectionHandle_t CurrentClass(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:103 */
	int CurrentFieldIndex(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:105 */
	void* GetMetaPtr(const CSchemaFieldIterator* , const char* );
	/* ../public/schemalib/schemaiterator.h:111 */
	bool IsMetaPresent(const CSchemaFieldIterator* , const char* );
	/* ../public/schemalib/schemaiterator.h:116 */
	void* PointerFromClass(const CSchemaFieldIterator* , void* );
	/* ../public/schemalib/schemaiterator.h:117 */
	const void* PointerFromClass(const CSchemaFieldIterator* , const void* );
	/* ../public/schemalib/schemaiterator.h:150 */
	CSchemaType* GetType(const CSchemaFieldIterator* );
private:
	CSchemaInheritanceIterator m_InheritanceIterator __attribute__((__aligned__(8))); /* 0 184 */
	/* ../public/schemalib/schemaiterator.h:171 */
	void AdvanceUntilCurrentClassHasMembers(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:172 */
	void GetAllMetaPtrsInternal(const CSchemaFieldIterator* , const char* , CUtlVector<void*, CUtlMemory<void*, int> >& );
	FieldIntrospectionHandle_t m_CurrentField; /* 184 8 */
	int m_nFieldIndex; /* 192 4 */
	/* ../public/schemalib/schemaiterator.h:154 */
	CSchemaType_DeclaredClass* GetTypeAs<CSchemaType_DeclaredClass>(CSchemaFieldIterator* );
	void ~CSchemaFieldIterator(CSchemaFieldIterator* );
	void CSchemaFieldIterator(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIteratorC4Ev */
	void CSchemaFieldIterator(class CSchemaFieldIterator *, ClassIntrospectionHandle_t, enum SchemaBaseClassTraversal_t); /* linkage=_ZN20CSchemaFieldIteratorC4EPK16CSchemaClassInfo26SchemaBaseClassTraversal_t */
	void CSchemaFieldIterator(class CSchemaFieldIterator *, ClassIntrospectionHandle_t, enum SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t); /* linkage=_ZN20CSchemaFieldIteratorC4EPK16CSchemaClassInfo26SchemaBaseClassTraversal_tS2_ */
	void CSchemaFieldIterator(class CSchemaFieldIterator *, FieldIntrospectionHandle_t); /* linkage=_ZN20CSchemaFieldIteratorC4EPK17CSchemaClassField */
	/* <49741fc> schemalib/schemaiterator.cpp:252 */
	void Init(class CSchemaFieldIterator *, ClassIntrospectionHandle_t, enum SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t); /* linkage=_ZN20CSchemaFieldIterator4InitEPK16CSchemaClassInfo26SchemaBaseClassTraversal_tS2_ */
	/* <4973865> schemalib/schemaiterator.cpp:265 */
	void InitForSingleField(class CSchemaFieldIterator *, FieldIntrospectionHandle_t); /* linkage=_ZN20CSchemaFieldIterator18InitForSingleFieldEPK17CSchemaClassField */
	/* <4973b7a> schemalib/schemaiterator.cpp:283 */
	void Reset(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator5ResetEv */
	/* <497383c> schemalib/schemaiterator.cpp:243 */
	void Invalidate(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator10InvalidateEv */
	bool FindField(class CSchemaFieldIterator *, const char  *); /* linkage=_ZN20CSchemaFieldIterator9FindFieldEPKc */
	bool FindField(class CSchemaFieldIterator *, FieldIntrospectionHandle_t); /* linkage=_ZN20CSchemaFieldIterator9FindFieldEPK17CSchemaClassField */
	void Advance(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator7AdvanceEv */
	/* <4973dd0> schemalib/schemaiterator.cpp:383 */
	bool IsValid(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator7IsValidEv */
	/* <49738e8> schemalib/schemaiterator.cpp:275 */
	bool IsSingleFieldRestricted(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator23IsSingleFieldRestrictedEv */
	const char  * GetFieldName(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator12GetFieldNameEv */
	class CUtlString GetFullyQualifiedFieldName(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator26GetFullyQualifiedFieldNameEv */
	FieldIntrospectionHandle_t GetRawFieldHandle(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator17GetRawFieldHandleEv */
	/* <4973e29> schemalib/schemaiterator.cpp:411 */
	uint32 GetFieldMemoryOffset(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator20GetFieldMemoryOffsetEv */
	ClassIntrospectionHandle_t CurrentClass(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator12CurrentClassEv */
	int CurrentFieldIndex(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator17CurrentFieldIndexEv */
	void * GetMetaPtr(const class CSchemaFieldIterator  *, const char  *); /* linkage=_ZNK20CSchemaFieldIterator10GetMetaPtrEPKc */
	bool IsMetaPresent(const class CSchemaFieldIterator  *, const char  *); /* linkage=_ZNK20CSchemaFieldIterator13IsMetaPresentEPKc */
	void * PointerFromClass(const class CSchemaFieldIterator  *, void *); /* linkage=_ZNK20CSchemaFieldIterator16PointerFromClassEPv */
	const void  * PointerFromClass(const class CSchemaFieldIterator  *, const void  *); /* linkage=_ZNK20CSchemaFieldIterator16PointerFromClassEPKv */
	class CSchemaType * GetType(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator7GetTypeEv */
	/* <4973964> schemalib/schemaiterator.cpp:296 */
	void AdvanceUntilCurrentClassHasMembers(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator34AdvanceUntilCurrentClassHasMembersEv */
	void GetAllMetaPtrsInternal(const class CSchemaFieldIterator  *, const char  *, class CUtlVector<void*, CUtlMemory<void*, int> > &); /* linkage=_ZNK20CSchemaFieldIterator22GetAllMetaPtrsInternalEPKcR10CUtlVectorIPv10CUtlMemoryIS3_iEE */
	class CSchemaType_DeclaredClass * GetTypeAs<CSchemaType_DeclaredClass>(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator9GetTypeAsI25CSchemaType_DeclaredClassEEPT_v */
	class CSchemaType_Bitfield * GetTypeAs<CSchemaType_Bitfield>(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator9GetTypeAsI20CSchemaType_BitfieldEEPT_v */
	void ~CSchemaFieldIterator(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIteratorD4Ev */
} __attribute__((__aligned__(8)));

// <04967510> ../public/schemalib/schemaiterator.h:56
// member functions: 55
// member variables: 3
// class size: 200
class CSchemaFieldIterator {
	/* ../public/schemalib/schemaiterator.h:62 */
	void CSchemaFieldIterator(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:63 */
	void CSchemaFieldIterator(CSchemaFieldIterator* , ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t);
	/* ../public/schemalib/schemaiterator.h:64 */
	void CSchemaFieldIterator(CSchemaFieldIterator* , ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:67 */
	void CSchemaFieldIterator(CSchemaFieldIterator* , FieldIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:69 */
	void Init(CSchemaFieldIterator* , ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:70 */
	void InitForSingleField(CSchemaFieldIterator* , FieldIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:72 */
	void Reset(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:73 */
	void Invalidate(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:79 */
	bool FindField(CSchemaFieldIterator* , const char* );
	/* ../public/schemalib/schemaiterator.h:80 */
	bool FindField(CSchemaFieldIterator* , FieldIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:81 */
	void Advance(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:82 */
	bool IsValid(const CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:83 */
	bool IsSingleFieldRestricted(const CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:91 */
	const char* GetFieldName(const CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:95 */
	CUtlString GetFullyQualifiedFieldName(const CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:98 */
	FieldIntrospectionHandle_t GetRawFieldHandle(const CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:100 */
	uint32 GetFieldMemoryOffset(const CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:102 */
	ClassIntrospectionHandle_t CurrentClass(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:103 */
	int CurrentFieldIndex(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:105 */
	void* GetMetaPtr(const CSchemaFieldIterator* , const char* );
	/* ../public/schemalib/schemaiterator.h:111 */
	bool IsMetaPresent(const CSchemaFieldIterator* , const char* );
	/* ../public/schemalib/schemaiterator.h:116 */
	void* PointerFromClass(const CSchemaFieldIterator* , void* );
	/* ../public/schemalib/schemaiterator.h:117 */
	const void* PointerFromClass(const CSchemaFieldIterator* , const void* );
	/* ../public/schemalib/schemaiterator.h:150 */
	CSchemaType* GetType(const CSchemaFieldIterator* );
private:
	CSchemaInheritanceIterator m_InheritanceIterator __attribute__((__aligned__(8))); /* 0 184 */
	/* ../public/schemalib/schemaiterator.h:171 */
	void AdvanceUntilCurrentClassHasMembers(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:172 */
	void GetAllMetaPtrsInternal(const CSchemaFieldIterator* , const char* , CUtlVector<void*, CUtlMemory<void*, int> >& );
	FieldIntrospectionHandle_t m_CurrentField; /* 184 8 */
	int m_nFieldIndex; /* 192 4 */
	void CSchemaFieldIterator(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIteratorC4Ev */
	void CSchemaFieldIterator(class CSchemaFieldIterator *, ClassIntrospectionHandle_t, enum SchemaBaseClassTraversal_t); /* linkage=_ZN20CSchemaFieldIteratorC4EPK16CSchemaClassInfo26SchemaBaseClassTraversal_t */
	void CSchemaFieldIterator(class CSchemaFieldIterator *, ClassIntrospectionHandle_t, enum SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t); /* linkage=_ZN20CSchemaFieldIteratorC4EPK16CSchemaClassInfo26SchemaBaseClassTraversal_tS2_ */
	void CSchemaFieldIterator(class CSchemaFieldIterator *, FieldIntrospectionHandle_t); /* linkage=_ZN20CSchemaFieldIteratorC4EPK17CSchemaClassField */
	/* <49741fc> schemalib/schemaiterator.cpp:252 */
	void Init(class CSchemaFieldIterator *, ClassIntrospectionHandle_t, enum SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t); /* linkage=_ZN20CSchemaFieldIterator4InitEPK16CSchemaClassInfo26SchemaBaseClassTraversal_tS2_ */
	/* <4973865> schemalib/schemaiterator.cpp:265 */
	void InitForSingleField(class CSchemaFieldIterator *, FieldIntrospectionHandle_t); /* linkage=_ZN20CSchemaFieldIterator18InitForSingleFieldEPK17CSchemaClassField */
	/* <4973b7a> schemalib/schemaiterator.cpp:283 */
	void Reset(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator5ResetEv */
	/* <497383c> schemalib/schemaiterator.cpp:243 */
	void Invalidate(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator10InvalidateEv */
	bool FindField(class CSchemaFieldIterator *, const char  *); /* linkage=_ZN20CSchemaFieldIterator9FindFieldEPKc */
	bool FindField(class CSchemaFieldIterator *, FieldIntrospectionHandle_t); /* linkage=_ZN20CSchemaFieldIterator9FindFieldEPK17CSchemaClassField */
	void Advance(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator7AdvanceEv */
	/* <4973dd0> schemalib/schemaiterator.cpp:383 */
	bool IsValid(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator7IsValidEv */
	/* <49738e8> schemalib/schemaiterator.cpp:275 */
	bool IsSingleFieldRestricted(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator23IsSingleFieldRestrictedEv */
	const char  * GetFieldName(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator12GetFieldNameEv */
	class CUtlString GetFullyQualifiedFieldName(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator26GetFullyQualifiedFieldNameEv */
	FieldIntrospectionHandle_t GetRawFieldHandle(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator17GetRawFieldHandleEv */
	/* <4973e29> schemalib/schemaiterator.cpp:411 */
	uint32 GetFieldMemoryOffset(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator20GetFieldMemoryOffsetEv */
	ClassIntrospectionHandle_t CurrentClass(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator12CurrentClassEv */
	int CurrentFieldIndex(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator17CurrentFieldIndexEv */
	void * GetMetaPtr(const class CSchemaFieldIterator  *, const char  *); /* linkage=_ZNK20CSchemaFieldIterator10GetMetaPtrEPKc */
	bool IsMetaPresent(const class CSchemaFieldIterator  *, const char  *); /* linkage=_ZNK20CSchemaFieldIterator13IsMetaPresentEPKc */
	void * PointerFromClass(const class CSchemaFieldIterator  *, void *); /* linkage=_ZNK20CSchemaFieldIterator16PointerFromClassEPv */
	const void  * PointerFromClass(const class CSchemaFieldIterator  *, const void  *); /* linkage=_ZNK20CSchemaFieldIterator16PointerFromClassEPKv */
	class CSchemaType * GetType(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator7GetTypeEv */
	/* <4973964> schemalib/schemaiterator.cpp:296 */
	void AdvanceUntilCurrentClassHasMembers(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator34AdvanceUntilCurrentClassHasMembersEv */
	void GetAllMetaPtrsInternal(const class CSchemaFieldIterator  *, const char  *, class CUtlVector<void*, CUtlMemory<void*, int> > &); /* linkage=_ZNK20CSchemaFieldIterator22GetAllMetaPtrsInternalEPKcR10CUtlVectorIPv10CUtlMemoryIS3_iEE */
	class CSchemaType_DeclaredClass * GetTypeAs<CSchemaType_DeclaredClass>(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator9GetTypeAsI25CSchemaType_DeclaredClassEEPT_v */
	class CSchemaType_Bitfield * GetTypeAs<CSchemaType_Bitfield>(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator9GetTypeAsI20CSchemaType_BitfieldEEPT_v */
	void ~CSchemaFieldIterator(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIteratorD4Ev */
} __attribute__((__aligned__(8)));

// <0011E808> ../public/schemalib/schemaiterator.h:56
// member functions: 58
// member variables: 3
// class size: 200
class CSchemaFieldIterator {
	/* ../public/schemalib/schemaiterator.h:62 */
	void CSchemaFieldIterator(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:63 */
	void CSchemaFieldIterator(CSchemaFieldIterator* , ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t);
	/* ../public/schemalib/schemaiterator.h:64 */
	void CSchemaFieldIterator(CSchemaFieldIterator* , ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:67 */
	void CSchemaFieldIterator(CSchemaFieldIterator* , FieldIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:69 */
	void Init(CSchemaFieldIterator* , ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:70 */
	void InitForSingleField(CSchemaFieldIterator* , FieldIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:72 */
	void Reset(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:73 */
	void Invalidate(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:79 */
	bool FindField(CSchemaFieldIterator* , const char* );
	/* ../public/schemalib/schemaiterator.h:80 */
	bool FindField(CSchemaFieldIterator* , FieldIntrospectionHandle_t);
	/* ../public/schemalib/schemaiterator.h:81 */
	void Advance(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:82 */
	bool IsValid(const CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:83 */
	bool IsSingleFieldRestricted(const CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:91 */
	const char* GetFieldName(const CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:95 */
	CUtlString GetFullyQualifiedFieldName(const CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:98 */
	FieldIntrospectionHandle_t GetRawFieldHandle(const CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:100 */
	uint32 GetFieldMemoryOffset(const CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:102 */
	ClassIntrospectionHandle_t CurrentClass(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:103 */
	int CurrentFieldIndex(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:105 */
	void* GetMetaPtr(const CSchemaFieldIterator* , const char* );
	/* ../public/schemalib/schemaiterator.h:111 */
	bool IsMetaPresent(const CSchemaFieldIterator* , const char* );
	/* ../public/schemalib/schemaiterator.h:116 */
	void* PointerFromClass(const CSchemaFieldIterator* , void* );
	/* ../public/schemalib/schemaiterator.h:117 */
	const void* PointerFromClass(const CSchemaFieldIterator* , const void* );
	/* ../public/schemalib/schemaiterator.h:150 */
	CSchemaType* GetType(const CSchemaFieldIterator* );
private:
	CSchemaInheritanceIterator m_InheritanceIterator __attribute__((__aligned__(8))); /* 0 184 */
	/* ../public/schemalib/schemaiterator.h:171 */
	void AdvanceUntilCurrentClassHasMembers(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:172 */
	void GetAllMetaPtrsInternal(const CSchemaFieldIterator* , const char* , CUtlVector<void*, CUtlMemory<void*, int> >& );
	FieldIntrospectionHandle_t m_CurrentField; /* 184 8 */
	int m_nFieldIndex; /* 192 4 */
	/* ../public/schemalib/schemaiterator.h:154 */
	CSchemaType_DeclaredClass* GetTypeAs<CSchemaType_DeclaredClass>(CSchemaFieldIterator* );
	/* ../public/schemalib/schemaiterator.h:154 */
	CSchemaType_Bitfield* GetTypeAs<CSchemaType_Bitfield>(CSchemaFieldIterator* );
	void ~CSchemaFieldIterator(CSchemaFieldIterator* );
	void CSchemaFieldIterator(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIteratorC4Ev */
	void CSchemaFieldIterator(class CSchemaFieldIterator *, ClassIntrospectionHandle_t, enum SchemaBaseClassTraversal_t); /* linkage=_ZN20CSchemaFieldIteratorC4EPK16CSchemaClassInfo26SchemaBaseClassTraversal_t */
	void CSchemaFieldIterator(class CSchemaFieldIterator *, ClassIntrospectionHandle_t, enum SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t); /* linkage=_ZN20CSchemaFieldIteratorC4EPK16CSchemaClassInfo26SchemaBaseClassTraversal_tS2_ */
	void CSchemaFieldIterator(class CSchemaFieldIterator *, FieldIntrospectionHandle_t); /* linkage=_ZN20CSchemaFieldIteratorC4EPK17CSchemaClassField */
	/* <49741fc> schemalib/schemaiterator.cpp:252 */
	void Init(class CSchemaFieldIterator *, ClassIntrospectionHandle_t, enum SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t); /* linkage=_ZN20CSchemaFieldIterator4InitEPK16CSchemaClassInfo26SchemaBaseClassTraversal_tS2_ */
	/* <4973865> schemalib/schemaiterator.cpp:265 */
	void InitForSingleField(class CSchemaFieldIterator *, FieldIntrospectionHandle_t); /* linkage=_ZN20CSchemaFieldIterator18InitForSingleFieldEPK17CSchemaClassField */
	/* <4973b7a> schemalib/schemaiterator.cpp:283 */
	void Reset(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator5ResetEv */
	/* <497383c> schemalib/schemaiterator.cpp:243 */
	void Invalidate(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator10InvalidateEv */
	bool FindField(class CSchemaFieldIterator *, const char  *); /* linkage=_ZN20CSchemaFieldIterator9FindFieldEPKc */
	bool FindField(class CSchemaFieldIterator *, FieldIntrospectionHandle_t); /* linkage=_ZN20CSchemaFieldIterator9FindFieldEPK17CSchemaClassField */
	void Advance(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator7AdvanceEv */
	/* <4973dd0> schemalib/schemaiterator.cpp:383 */
	bool IsValid(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator7IsValidEv */
	/* <49738e8> schemalib/schemaiterator.cpp:275 */
	bool IsSingleFieldRestricted(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator23IsSingleFieldRestrictedEv */
	const char  * GetFieldName(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator12GetFieldNameEv */
	class CUtlString GetFullyQualifiedFieldName(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator26GetFullyQualifiedFieldNameEv */
	FieldIntrospectionHandle_t GetRawFieldHandle(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator17GetRawFieldHandleEv */
	/* <4973e29> schemalib/schemaiterator.cpp:411 */
	uint32 GetFieldMemoryOffset(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator20GetFieldMemoryOffsetEv */
	ClassIntrospectionHandle_t CurrentClass(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator12CurrentClassEv */
	int CurrentFieldIndex(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator17CurrentFieldIndexEv */
	void * GetMetaPtr(const class CSchemaFieldIterator  *, const char  *); /* linkage=_ZNK20CSchemaFieldIterator10GetMetaPtrEPKc */
	bool IsMetaPresent(const class CSchemaFieldIterator  *, const char  *); /* linkage=_ZNK20CSchemaFieldIterator13IsMetaPresentEPKc */
	void * PointerFromClass(const class CSchemaFieldIterator  *, void *); /* linkage=_ZNK20CSchemaFieldIterator16PointerFromClassEPv */
	const void  * PointerFromClass(const class CSchemaFieldIterator  *, const void  *); /* linkage=_ZNK20CSchemaFieldIterator16PointerFromClassEPKv */
	class CSchemaType * GetType(const class CSchemaFieldIterator  *); /* linkage=_ZNK20CSchemaFieldIterator7GetTypeEv */
	/* <4973964> schemalib/schemaiterator.cpp:296 */
	void AdvanceUntilCurrentClassHasMembers(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator34AdvanceUntilCurrentClassHasMembersEv */
	void GetAllMetaPtrsInternal(const class CSchemaFieldIterator  *, const char  *, class CUtlVector<void*, CUtlMemory<void*, int> > &); /* linkage=_ZNK20CSchemaFieldIterator22GetAllMetaPtrsInternalEPKcR10CUtlVectorIPv10CUtlMemoryIS3_iEE */
	class CSchemaType_DeclaredClass * GetTypeAs<CSchemaType_DeclaredClass>(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator9GetTypeAsI25CSchemaType_DeclaredClassEEPT_v */
	class CSchemaType_Bitfield * GetTypeAs<CSchemaType_Bitfield>(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIterator9GetTypeAsI20CSchemaType_BitfieldEEPT_v */
	void ~CSchemaFieldIterator(class CSchemaFieldIterator *); /* linkage=_ZN20CSchemaFieldIteratorD4Ev */
} __attribute__((__aligned__(8)));

// <0494E376> ../public/schemalib/schemaiterator.h:63
void CSchemaFieldIterator::CSchemaFieldIterator(ClassIntrospectionHandle_t classInfo, SchemaBaseClassTraversal_t nBaseTraversal)
{
} /* size: 0 */

// <0494E8C2> ../public/schemalib/schemaiterator.h:154
inline void CSchemaFieldIterator::GetTypeAs<CSchemaType_DeclaredClass>()
{
} /* size: 0 */

// <00132538> ../public/schemalib/schemaiterator.h:154
inline void CSchemaFieldIterator::GetTypeAs<CSchemaType_Bitfield>()
{
} /* size: 0 */

