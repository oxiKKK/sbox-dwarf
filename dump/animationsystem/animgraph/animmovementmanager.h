
//
// animationsystem/animgraph/animmovementmanager.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//	class: 1
//

// <006800A7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:19
// variable: 1
// function calls: 18
void CAnimMovementManager::~CAnimMovementManager()
{
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimMotorBase>(CAnimMotorBase* pObj); // 344
		CSmartPtr<CAnimMotorBase, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimMotorBase> >(CSmartPtr<CAnimMotorBase, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this); // 1798
	CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, i this); // 10
	CAnimMotorList::~CAnimMotorList(); // 19
} /* size: 203, inline expansions: 8 (640 bytes) */

// <0067FBF5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:19
// variable: 1
// function calls: 24
void CAnimMovementManager::~CAnimMovementManager()
{
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimMotorBase>(CAnimMotorBase* pObj); // 344
		CSmartPtr<CAnimMotorBase, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimMotorBase> >(CSmartPtr<CAnimMotorBase, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this); // 1798
	CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this); // 560
	ValidateAlignment<CSmartPtr<CAnimMotorBase> >(void); // 508
	CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorBase, CRefCountAccessor>, i this); // 10
	CAnimMotorList::~CAnimMotorList(); // 19
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 19
	CAnimMovementManager::~CAnimMovementManager(); // 19
} /* size: 195, inline expansions: 14 (732 bytes) */

// <0067FBD9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:19
inline void CAnimMovementManager::~CAnimMovementManager()
{
} /* size: 0 */

// <0066C8E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:19
// member functions: 51
// member variables: 4
// static member variable: 1
// vtable entries: 7
// class size: 80
class CAnimMovementManager : public IAnimMovementManager, public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class IAnimMovementManager <ancestor>; */ /* 0 8 */
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 8 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:21 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:21 */
	CAnimMovementManager* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmovementmanager_h_schema.gen_cpp:64 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmovementmanager_h_schema.gen_cpp:93 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmovementmanager_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(CAnimMovementManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:21 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:21 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:21 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimMovementManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:22 */
	void KV3TransferPolymorphicClassname(const CAnimMovementManager* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:22 */
	CAnimMovementManager* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmovementmanager_h_schema.gen_cpp:101 */
	virtual void KV3TransferSave(const CAnimMovementManager* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmovementmanager_h_schema.gen_cpp:112 */
	virtual void KV3TransferLoad(CAnimMovementManager* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmovementmanager_h_schema.gen_cpp:106 */
	void KV3TransferSave_CAnimMovementManager(const CAnimMovementManager* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmovementmanager_h_schema.gen_cpp:117 */
	void KV3TransferLoad_CAnimMovementManager(CAnimMovementManager* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:26 */
	void CAnimMovementManager(CAnimMovementManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:28 */
	virtual const IAnimMovementSettings* GetMovementSettings(const CAnimMovementManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:29 */
	virtual IAnimMovementSettings* GetMovementSettings(CAnimMovementManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:31 */
	virtual const IAnimMotorList* GetMotorList(const CAnimMovementManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:32 */
	virtual IAnimMotorList* GetMotorList(CAnimMovementManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:35 */
	CAnimMotorList& GetMotorListInternal(CAnimMovementManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:36 */
	const CAnimMotorList& GetMotorListInternal(const CAnimMovementManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:39 */
	CAnimMovementUpdater* CreateUpdater(const CAnimMovementManager* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:42 */
	void CAnimMovementManager(CAnimMovementManager* , const CAnimMovementManager& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:43 */
	void operator=(CAnimMovementManager* , const CAnimMovementManager& );
	CAnimMotorList m_MotorList; /* 24 0 */
	CAnimMovementSettings m_MovementSettings; /* 64 0 */
	virtual void ~CAnimMovementManager(CAnimMovementManager* );
	/* <6818f7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmovementmanager_h_schema.gen_cpp:93 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN20CAnimMovementManager32Schema_VerifyBindingIsRegisteredEv */
	class CAnimMovementManager * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN20CAnimMovementManager32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferPolymorphicClassname(const class CAnimMovementManager  *, char &); /* linkage=_ZN20CAnimMovementManager31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN20CAnimMovementManager22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN20CAnimMovementManager20Schema_StaticBindingEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN20CAnimMovementManager17GetPrimaryBindingEv */
	class CAnimMovementManager * Schema_MarkHelperFn(void); /* linkage=_ZN20CAnimMovementManager19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN20CAnimMovementManager15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <6818cc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animmovementmanager_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(class CAnimMovementManager *); /* linkage=_ZN20CAnimMovementManager38Schema_CompileTimeVerificationFunctionEv */
	/* <681557> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:21 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimMovementManager  *); /* linkage=_ZNK20CAnimMovementManager21Schema_DynamicBindingEv */
	virtual void KV3TransferSave(const class CAnimMovementManager  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CAnimMovementManager15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CAnimMovementManager *, class CKV3TransferLoadContext *); /* linkage=_ZN20CAnimMovementManager15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimMovementManager(const class CAnimMovementManager  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CAnimMovementManager36KV3TransferSave_CAnimMovementManagerEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimMovementManager(class CAnimMovementManager *, class CKV3TransferLoadContext *); /* linkage=_ZN20CAnimMovementManager36KV3TransferLoad_CAnimMovementManagerEP23CKV3TransferLoadContext */
	void CAnimMovementManager(class CAnimMovementManager *); /* linkage=_ZN20CAnimMovementManagerC4Ev */
	virtual const class IAnimMovementSettings  * GetMovementSettings(const class CAnimMovementManager  *); /* linkage=_ZNK20CAnimMovementManager19GetMovementSettingsEv */
	virtual class IAnimMovementSettings * GetMovementSettings(class CAnimMovementManager *); /* linkage=_ZN20CAnimMovementManager19GetMovementSettingsEv */
	virtual const class IAnimMotorList  * GetMotorList(const class CAnimMovementManager  *); /* linkage=_ZNK20CAnimMovementManager12GetMotorListEv */
	virtual class IAnimMotorList * GetMotorList(class CAnimMovementManager *); /* linkage=_ZN20CAnimMovementManager12GetMotorListEv */
	class CAnimMotorList & GetMotorListInternal(class CAnimMovementManager *); /* linkage=_ZN20CAnimMovementManager20GetMotorListInternalEv */
	const class CAnimMotorList  & GetMotorListInternal(const class CAnimMovementManager  *); /* linkage=_ZNK20CAnimMovementManager20GetMotorListInternalEv */
	class CAnimMovementUpdater * CreateUpdater(const class CAnimMovementManager  *, class CAnimGraphInitContext &); /* linkage=_ZNK20CAnimMovementManager13CreateUpdaterER21CAnimGraphInitContext */
	void CAnimMovementManager(class CAnimMovementManager *, const class CAnimMovementManager  &); /* linkage=_ZN20CAnimMovementManagerC4ERKS_ */
	void operator=(class CAnimMovementManager *, const class CAnimMovementManager  &); /* linkage=_ZN20CAnimMovementManageraSERKS_ */
	virtual void ~CAnimMovementManager(class CAnimMovementManager *); /* linkage=_ZN20CAnimMovementManagerD4Ev */
	virtual inline void ~CAnimMovementManager(class CAnimMovementManager *); /* linkage=_ZN20CAnimMovementManagerD4Ev */
};

// <00681557> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:21
// function calls: 3
void CAnimMovementManager::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 93
	Schema_VerifyBindingIsRegistered(void); // 21
	GetPrimaryBinding(void); // 21
} /* size: 75, inline expansions: 3 (78 bytes) */

// <006804C1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:21
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <006804BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:21
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <006804A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:21
inline void CAnimMovementManager::Schema_DynamicBinding()
{
} /* size: 0 */

// <0044054C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:21
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <00440523> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:22
inline void KV3TransferPolymorphicClassname(const CAnimMovementManager* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <0044050C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:22
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */

// <00673E17> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animmovementmanager.h:26
void CAnimMovementManager::CAnimMovementManager()
{
} /* size: 0 */

