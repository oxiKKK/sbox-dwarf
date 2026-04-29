
//
// animationsystem/animgraph/clipproperties.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 21
//	classes: 2
//

// <004242A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:7
inline void CClipProperties::operator=(const CClipProperties &)
{
} /* size: 0 */

// <0042420F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:7
void CClipProperties::CClipProperties()
{
} /* size: 0 */

// <004241F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:7
inline void CClipProperties::CClipProperties()
{
} /* size: 0 */

// <00424183> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:7
// function call: 1
void CClipProperties::~CClipProperties()
{
	CUtlString::~CUtlString(); // 7
} /* size: 49, inline expansions: 1 (13 bytes) */

// <00424009> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:7
// function calls: 6
void CClipProperties::~CClipProperties()
{
	CUtlString::~CUtlString(); // 7
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 7
	Object::~Object(); // 9
	IAnimClipProperties::~IAnimClipProperties(); // 7
	CClipProperties::~CClipProperties(); // 7
} /* size: 77, inline expansions: 6 (55 bytes) */

// <00423FED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:7
inline void CClipProperties::~CClipProperties()
{
} /* size: 0 */

// <003F6802> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:7
// member functions: 57
// member variables: 6
// static member variables: 2
// vtable entries: 8
// class size: 48
class CClipProperties : public IAnimClipProperties, public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:10 */
	enum {
		KV3TRANSFER_BEHAVIOR = 2,
	};
public:
	/* class IAnimClipProperties <ancestor>; */ /* 0 0 */
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 8 16 */
	void CClipProperties(CClipProperties* , CClipProperties& );
	void CClipProperties(CClipProperties* , const CClipProperties& );
	void CClipProperties(CClipProperties* );
	CClipProperties& operator=(CClipProperties* , CClipProperties& );
	CClipProperties& operator=(CClipProperties* , const CClipProperties& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:9 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:9 */
	CClipProperties* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/clipproperties_h_schema.gen_cpp:116 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/clipproperties_h_schema.gen_cpp:145 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/clipproperties_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(CClipProperties* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:9 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:9 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:9 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CClipProperties* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:10 */
	void KV3TransferPolymorphicClassname(const CClipProperties* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:10 */
	CClipProperties* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/clipproperties_h_schema.gen_cpp:153 */
	virtual void KV3TransferSave(const CClipProperties* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/clipproperties_h_schema.gen_cpp:166 */
	virtual void KV3TransferLoad(CClipProperties* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/clipproperties_h_schema.gen_cpp:158 */
	void KV3TransferSave_CClipProperties(const CClipProperties* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/clipproperties_h_schema.gen_cpp:171 */
	void KV3TransferLoad_CClipProperties(CClipProperties* , CKV3TransferLoadContext* );
	static class CClassInfoT<CClipProperties> m_classInfoCClipProperties; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:13 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:13 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:13 */
	virtual const CClassInfo& GetTypeInfo(const CClipProperties* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:13 */
	virtual void* CastToBase(CClipProperties* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:13 */
	virtual const void* CastToBase(const CClipProperties* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:17 */
	virtual const CUtlString& GetName(const CClipProperties* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:18 */
	virtual int GetNumFrames(const CClipProperties* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:20 */
	PropertyAttrState_t PropertyVisibility(void* );
	CUtlString m_name; /* 24 8 */
	int m_frames; /* 32 4 */
	float m_flFrameRate; /* 36 4 */
	float m_flDuration; /* 40 4 */
	virtual void ~CClipProperties(CClipProperties* );
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CClipProperties22Schema_StaticClassnameEv */
	void CClipProperties(class CClipProperties *, class CClipProperties &); /* linkage=_ZN15CClipPropertiesC4EOS_ */
	void CClipProperties(class CClipProperties *, const class CClipProperties  &); /* linkage=_ZN15CClipPropertiesC4ERKS_ */
	void CClipProperties(class CClipProperties *); /* linkage=_ZN15CClipPropertiesC4Ev */
	class CClipProperties & operator=(class CClipProperties *, class CClipProperties &); /* linkage=_ZN15CClipPropertiesaSEOS_ */
	class CClipProperties & operator=(class CClipProperties *, const class CClipProperties  &); /* linkage=_ZN15CClipPropertiesaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CClipProperties17GetPrimaryBindingEv */
	class CClipProperties * Schema_MarkHelperFn(void); /* linkage=_ZN15CClipProperties19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CClipProperties15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <44d3e6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/clipproperties_h_schema.gen_cpp:145 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CClipProperties32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CClipProperties *); /* linkage=_ZN15CClipProperties38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CClipProperties20Schema_StaticBindingEv */
	/* <44b4a6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:9 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CClipProperties  *); /* linkage=_ZNK15CClipProperties21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CClipProperties  *, char &); /* linkage=_ZN15CClipProperties31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CClipProperties * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CClipProperties32KV3TransferAllocateClassInstanceEPKc */
	/* <44d434> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/clipproperties_h_schema.gen_cpp:153 */
	virtual void KV3TransferSave(const class CClipProperties  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CClipProperties15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <44d48e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/clipproperties_h_schema.gen_cpp:166 */
	virtual void KV3TransferLoad(class CClipProperties *, class CKV3TransferLoadContext *); /* linkage=_ZN15CClipProperties15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CClipProperties(const class CClipProperties  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CClipProperties31KV3TransferSave_CClipPropertiesEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CClipProperties(class CClipProperties *, class CKV3TransferLoadContext *); /* linkage=_ZN15CClipProperties31KV3TransferLoad_CClipPropertiesEP23CKV3TransferLoadContext */
	const class ClassID  MyTypeID(void); /* linkage=_ZN15CClipProperties8MyTypeIDEv */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN15CClipProperties10MyTypeInfoEv */
	/* <f99695> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:11 */
	virtual const class CClassInfo  & GetTypeInfo(const class CClipProperties  *); /* linkage=_ZNK15CClipProperties11GetTypeInfoEv */
	virtual void * CastToBase(class CClipProperties *, class ClassID); /* linkage=_ZN15CClipProperties10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class CClipProperties  *, class ClassID); /* linkage=_ZNK15CClipProperties10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CUtlString  & GetName(const class CClipProperties  *); /* linkage=_ZNK15CClipProperties7GetNameEv */
	virtual int GetNumFrames(const class CClipProperties  *); /* linkage=_ZNK15CClipProperties12GetNumFramesEv */
	enum PropertyAttrState_t PropertyVisibility(void *); /* linkage=_ZN15CClipProperties18PropertyVisibilityEPv */
	virtual void ~CClipProperties(class CClipProperties *); /* linkage=_ZN15CClipPropertiesD4Ev */
	virtual inline void ~CClipProperties(class CClipProperties *); /* linkage=_ZN15CClipPropertiesD4Ev */
};

// <0044B4A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:9
// function calls: 3
void CClipProperties::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 145
	Schema_VerifyBindingIsRegistered(void); // 9
	GetPrimaryBinding(void); // 9
} /* size: 75, inline expansions: 3 (78 bytes) */

// <004402FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:9
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <004402F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:9
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <004402F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:9
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <004402DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:9
inline void CClipProperties::Schema_DynamicBinding()
{
} /* size: 0 */

// <004402B7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:10
inline void KV3TransferPolymorphicClassname(const CClipProperties* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <004402A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:10
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */

// <00440272> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:20
void PropertyVisibility(void* pThis)
{
} /* size: 10 */

// <0042185F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:32
inline void CAnimClipPropertiesManager::operator=(const CAnimClipPropertiesManager &)
{
} /* size: 0 */

// <004214C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:32
// variable: 1
// function calls: 17
void CAnimClipPropertiesManager::~CAnimClipPropertiesManager()
{
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccess this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CClipProperties>(CClipProperties* pObj); // 344
		CSmartPtr<CClipProperties, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CClipProperties> >(CSmartPtr<CClipProperties, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccess this); // 1798
	CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccess this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccess this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, this); // 32
} /* size: 187, inline expansions: 7 (501 bytes) */

// <0042101C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:32
// variable: 1
// function calls: 23
void CAnimClipPropertiesManager::~CAnimClipPropertiesManager()
{
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccess this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CClipProperties>(CClipProperties* pObj); // 344
		CSmartPtr<CClipProperties, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CClipProperties> >(CSmartPtr<CClipProperties, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccess this); // 1798
	CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccess this); // 560
	ValidateAlignment<CSmartPtr<CClipProperties> >(void); // 508
	CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccess this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, this); // 32
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 32
	CAnimClipPropertiesManager::~CAnimClipPropertiesManager(); // 32
} /* size: 179, inline expansions: 13 (587 bytes) */

// <00421000> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:32
inline void CAnimClipPropertiesManager::~CAnimClipPropertiesManager()
{
} /* size: 0 */

// <003F6F8D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:32
// member functions: 49
// member variables: 3
// static member variable: 1
// vtable entries: 7
// class size: 56
class CAnimClipPropertiesManager : public IAnimClipPropertiesManager, public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class IAnimClipPropertiesManager <ancestor>; */ /* 0 8 */
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 8 16 */
	void CAnimClipPropertiesManager(CAnimClipPropertiesManager* , CAnimClipPropertiesManager& );
	void CAnimClipPropertiesManager(CAnimClipPropertiesManager* , const CAnimClipPropertiesManager& );
	CAnimClipPropertiesManager& operator=(CAnimClipPropertiesManager* , CAnimClipPropertiesManager& );
	CAnimClipPropertiesManager& operator=(CAnimClipPropertiesManager* , const CAnimClipPropertiesManager& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:34 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:34 */
	CAnimClipPropertiesManager* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/clipproperties_h_schema.gen_cpp:212 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/clipproperties_h_schema.gen_cpp:241 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/clipproperties_h_schema.gen_cpp:187 */
	void Schema_CompileTimeVerificationFunction(CAnimClipPropertiesManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:34 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:34 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:34 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimClipPropertiesManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:35 */
	void KV3TransferPolymorphicClassname(const CAnimClipPropertiesManager* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:35 */
	CAnimClipPropertiesManager* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/clipproperties_h_schema.gen_cpp:249 */
	virtual void KV3TransferSave(const CAnimClipPropertiesManager* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/clipproperties_h_schema.gen_cpp:259 */
	virtual void KV3TransferLoad(CAnimClipPropertiesManager* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/clipproperties_h_schema.gen_cpp:254 */
	void KV3TransferSave_CAnimClipPropertiesManager(const CAnimClipPropertiesManager* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/clipproperties_h_schema.gen_cpp:264 */
	void KV3TransferLoad_CAnimClipPropertiesManager(CAnimClipPropertiesManager* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:38 */
	void CAnimClipPropertiesManager(CAnimClipPropertiesManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:40 */
	virtual int GetClipCount(const CAnimClipPropertiesManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:41 */
	virtual IAnimClipProperties* GetClip(CAnimClipPropertiesManager* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:42 */
	virtual const IAnimClipProperties* GetClip(const CAnimClipPropertiesManager* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:43 */
	virtual void SetClips(CAnimClipPropertiesManager* , HModel);
	CUtlVector<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int> > m_Clips; /* 24 32 */
	virtual void ~CAnimClipPropertiesManager(CAnimClipPropertiesManager* );
	void CAnimClipPropertiesManager(class CAnimClipPropertiesManager *, class CAnimClipPropertiesManager &); /* linkage=_ZN26CAnimClipPropertiesManagerC4EOS_ */
	void CAnimClipPropertiesManager(class CAnimClipPropertiesManager *, const class CAnimClipPropertiesManager  &); /* linkage=_ZN26CAnimClipPropertiesManagerC4ERKS_ */
	class CAnimClipPropertiesManager & operator=(class CAnimClipPropertiesManager *, class CAnimClipPropertiesManager &); /* linkage=_ZN26CAnimClipPropertiesManageraSEOS_ */
	class CAnimClipPropertiesManager & operator=(class CAnimClipPropertiesManager *, const class CAnimClipPropertiesManager  &); /* linkage=_ZN26CAnimClipPropertiesManageraSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN26CAnimClipPropertiesManager17GetPrimaryBindingEv */
	class CAnimClipPropertiesManager * Schema_MarkHelperFn(void); /* linkage=_ZN26CAnimClipPropertiesManager19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN26CAnimClipPropertiesManager15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <44d4e8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/clipproperties_h_schema.gen_cpp:241 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN26CAnimClipPropertiesManager32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CAnimClipPropertiesManager *); /* linkage=_ZN26CAnimClipPropertiesManager38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN26CAnimClipPropertiesManager20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN26CAnimClipPropertiesManager22Schema_StaticClassnameEv */
	/* <44afb9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:34 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimClipPropertiesManager  *); /* linkage=_ZNK26CAnimClipPropertiesManager21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CAnimClipPropertiesManager  *, char &); /* linkage=_ZN26CAnimClipPropertiesManager31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CAnimClipPropertiesManager * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN26CAnimClipPropertiesManager32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CAnimClipPropertiesManager  *, class CKV3TransferSaveContext *); /* linkage=_ZNK26CAnimClipPropertiesManager15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CAnimClipPropertiesManager *, class CKV3TransferLoadContext *); /* linkage=_ZN26CAnimClipPropertiesManager15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimClipPropertiesManager(const class CAnimClipPropertiesManager  *, class CKV3TransferSaveContext *); /* linkage=_ZNK26CAnimClipPropertiesManager42KV3TransferSave_CAnimClipPropertiesManagerEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimClipPropertiesManager(class CAnimClipPropertiesManager *, class CKV3TransferLoadContext *); /* linkage=_ZN26CAnimClipPropertiesManager42KV3TransferLoad_CAnimClipPropertiesManagerEP23CKV3TransferLoadContext */
	void CAnimClipPropertiesManager(class CAnimClipPropertiesManager *); /* linkage=_ZN26CAnimClipPropertiesManagerC4Ev */
	virtual int GetClipCount(const class CAnimClipPropertiesManager  *); /* linkage=_ZNK26CAnimClipPropertiesManager12GetClipCountEv */
	virtual class IAnimClipProperties * GetClip(class CAnimClipPropertiesManager *, int); /* linkage=_ZN26CAnimClipPropertiesManager7GetClipEi */
	virtual const class IAnimClipProperties  * GetClip(const class CAnimClipPropertiesManager  *, int); /* linkage=_ZNK26CAnimClipPropertiesManager7GetClipEi */
	virtual void SetClips(class CAnimClipPropertiesManager *, HModel); /* linkage=_ZN26CAnimClipPropertiesManager8SetClipsE11CWeakHandleI25InfoForResourceTypeCModelE */
	virtual void ~CAnimClipPropertiesManager(class CAnimClipPropertiesManager *); /* linkage=_ZN26CAnimClipPropertiesManagerD4Ev */
	virtual inline void ~CAnimClipPropertiesManager(class CAnimClipPropertiesManager *); /* linkage=_ZN26CAnimClipPropertiesManagerD4Ev */
};

// <0044AFB9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:34
// function calls: 3
void CAnimClipPropertiesManager::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 241
	Schema_VerifyBindingIsRegistered(void); // 34
	GetPrimaryBinding(void); // 34
} /* size: 75, inline expansions: 3 (78 bytes) */

// <0044024D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:34
inline void CAnimClipPropertiesManager::Schema_DynamicBinding()
{
} /* size: 0 */

// <00405EA9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/clipproperties.h:38
void CAnimClipPropertiesManager::CAnimClipPropertiesManager()
{
} /* size: 0 */

