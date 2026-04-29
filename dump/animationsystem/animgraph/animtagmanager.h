
//
// animationsystem/animgraph/animtagmanager.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//	class: 1
//

// <0067C9A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:16
// variable: 1
// function calls: 17
void CAnimTagManager::~CAnimTagManager()
{
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimTagBase>(CAnimTagBase* pObj); // 344
		CSmartPtr<CAnimTagBase, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimTagBase> >(CSmartPtr<CAnimTagBase, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 1798
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int> this); // 16
} /* size: 187, inline expansions: 7 (501 bytes) */

// <0067C51A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:16
// variable: 1
// function calls: 23
void CAnimTagManager::~CAnimTagManager()
{
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimTagBase>(CAnimTagBase* pObj); // 344
		CSmartPtr<CAnimTagBase, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimTagBase> >(CSmartPtr<CAnimTagBase, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 1798
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 560
	ValidateAlignment<CSmartPtr<CAnimTagBase> >(void); // 508
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int> this); // 16
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 16
	CAnimTagManager::~CAnimTagManager(); // 16
} /* size: 179, inline expansions: 13 (587 bytes) */

// <0067C4FE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:16
inline void CAnimTagManager::~CAnimTagManager()
{
} /* size: 0 */

// <0066D42B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:16
// member functions: 71
// member variables: 3
// static member variable: 1
// vtable entries: 13
// class size: 56
class CAnimTagManager : public IAnimTagManager, public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:19 */
	enum {
		KV3TRANSFER_IS_VIRTUAL = 1,
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:19 */
	enum {
		KV3TRANSFER_IGNORE_VIRTUAL = 0,
	};
public:
	/* class IAnimTagManager <ancestor>; */ /* 0 8 */
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 8 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:18 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:18 */
	CAnimTagManager* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animtagmanager_h_schema.gen_cpp:61 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animtagmanager_h_schema.gen_cpp:90 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animtagmanager_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(CAnimTagManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:18 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:18 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:18 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimTagManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:19 */
	void KV3TransferPolymorphicClassname(const CAnimTagManager* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:19 */
	CAnimTagManager* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animtagmanager_h_schema.gen_cpp:98 */
	virtual void KV3TransferSave(const CAnimTagManager* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animtagmanager_h_schema.gen_cpp:108 */
	virtual void KV3TransferLoad(CAnimTagManager* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animtagmanager_h_schema.gen_cpp:103 */
	void KV3TransferSave_CAnimTagManager(const CAnimTagManager* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animtagmanager_h_schema.gen_cpp:113 */
	void KV3TransferLoad_CAnimTagManager(CAnimTagManager* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:24 */
	void CAnimTagManager(CAnimTagManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:28 */
	virtual CClassInfoList GetTagTypes(const CAnimTagManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:31 */
	virtual int GetTagCount(const CAnimTagManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:34 */
	virtual IAnimTag* GetTag(CAnimTagManager* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:35 */
	virtual const IAnimTag* GetTag(const CAnimTagManager* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:37 */
	virtual IAnimTag* GetTag(CAnimTagManager* , AnimTagID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:38 */
	virtual const IAnimTag* GetTag(const CAnimTagManager* , AnimTagID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:41 */
	virtual void GetTagID(const CAnimTagManager* , int, AnimTagID* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:44 */
	virtual IAnimTag* AddTag(CAnimTagManager* , const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:47 */
	virtual void RemoveTag(CAnimTagManager* , IAnimTag* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:50 */
	virtual void MoveTagToIndex(CAnimTagManager* , int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:54 */
	CAnimTagBase* GetTagBase(CAnimTagManager* , AnimTagID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:55 */
	const CAnimTagBase* GetTagBase(const CAnimTagManager* , AnimTagID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:57 */
	CAnimTagBase* AddTagInternal(CAnimTagManager* , CAnimTagBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:59 */
	int GetIndexOfTag(const CAnimTagManager* , AnimTagID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:62 */
	void TransferPostLoadFn(CAnimTagManager* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:65 */
	void CAnimTagManager(CAnimTagManager* , const CAnimTagManager& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:66 */
	void operator=(CAnimTagManager* , const CAnimTagManager& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:68 */
	CAnimTagBasePtr FindTag(const CAnimTagManager* , AnimTagID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:69 */
	AnimTagID CreateTagID(const CAnimTagManager* );
	CUtlVector<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int> > m_tags; /* 24 32 */
	virtual void ~CAnimTagManager(CAnimTagManager* );
	/* <681991> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animtagmanager_h_schema.gen_cpp:90 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CAnimTagManager32Schema_VerifyBindingIsRegisteredEv */
	class CAnimTagManager * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CAnimTagManager32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferPolymorphicClassname(const class CAnimTagManager  *, char &); /* linkage=_ZN15CAnimTagManager31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CAnimTagManager22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CAnimTagManager20Schema_StaticBindingEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CAnimTagManager17GetPrimaryBindingEv */
	class CAnimTagManager * Schema_MarkHelperFn(void); /* linkage=_ZN15CAnimTagManager19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CAnimTagManager15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	void Schema_CompileTimeVerificationFunction(class CAnimTagManager *); /* linkage=_ZN15CAnimTagManager38Schema_CompileTimeVerificationFunctionEv */
	/* <681608> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:18 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimTagManager  *); /* linkage=_ZNK15CAnimTagManager21Schema_DynamicBindingEv */
	virtual void KV3TransferSave(const class CAnimTagManager  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CAnimTagManager15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CAnimTagManager *, class CKV3TransferLoadContext *); /* linkage=_ZN15CAnimTagManager15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimTagManager(const class CAnimTagManager  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CAnimTagManager31KV3TransferSave_CAnimTagManagerEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimTagManager(class CAnimTagManager *, class CKV3TransferLoadContext *); /* linkage=_ZN15CAnimTagManager31KV3TransferLoad_CAnimTagManagerEP23CKV3TransferLoadContext */
	void CAnimTagManager(class CAnimTagManager *); /* linkage=_ZN15CAnimTagManagerC4Ev */
	virtual CClassInfoList GetTagTypes(const class CAnimTagManager  *); /* linkage=_ZNK15CAnimTagManager11GetTagTypesEv */
	/* <131ed84> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:22 */
	virtual int GetTagCount(const class CAnimTagManager  *); /* linkage=_ZNK15CAnimTagManager11GetTagCountEv */
	/* <131edde> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:28 */
	virtual class IAnimTag * GetTag(class CAnimTagManager *, int); /* linkage=_ZN15CAnimTagManager6GetTagEi */
	virtual const class IAnimTag  * GetTag(const class CAnimTagManager  *, int); /* linkage=_ZNK15CAnimTagManager6GetTagEi */
	/* <131f527> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagmanager.cpp:40 */
	virtual class IAnimTag * GetTag(class CAnimTagManager *, class AnimTagID); /* linkage=_ZN15CAnimTagManager6GetTagE9AnimTagID */
	virtual const class IAnimTag  * GetTag(const class CAnimTagManager  *, class AnimTagID); /* linkage=_ZNK15CAnimTagManager6GetTagE9AnimTagID */
	virtual void GetTagID(const class CAnimTagManager  *, int, class AnimTagID *); /* linkage=_ZNK15CAnimTagManager8GetTagIDEiP9AnimTagID */
	virtual class IAnimTag * AddTag(class CAnimTagManager *, const char  *); /* linkage=_ZN15CAnimTagManager6AddTagEPKc */
	virtual void RemoveTag(class CAnimTagManager *, class IAnimTag *); /* linkage=_ZN15CAnimTagManager9RemoveTagEP8IAnimTag */
	virtual void MoveTagToIndex(class CAnimTagManager *, int, int); /* linkage=_ZN15CAnimTagManager14MoveTagToIndexEii */
	class CAnimTagBase * GetTagBase(class CAnimTagManager *, class AnimTagID); /* linkage=_ZN15CAnimTagManager10GetTagBaseE9AnimTagID */
	const class CAnimTagBase  * GetTagBase(const class CAnimTagManager  *, class AnimTagID); /* linkage=_ZNK15CAnimTagManager10GetTagBaseE9AnimTagID */
	class CAnimTagBase * AddTagInternal(class CAnimTagManager *, class CAnimTagBase *); /* linkage=_ZN15CAnimTagManager14AddTagInternalEP12CAnimTagBase */
	int GetIndexOfTag(const class CAnimTagManager  *, class AnimTagID); /* linkage=_ZNK15CAnimTagManager13GetIndexOfTagE9AnimTagID */
	void TransferPostLoadFn(class CAnimTagManager *, class CKV3TransferLoadContext *); /* linkage=_ZN15CAnimTagManager18TransferPostLoadFnEP23CKV3TransferLoadContext */
	void CAnimTagManager(class CAnimTagManager *, const class CAnimTagManager  &); /* linkage=_ZN15CAnimTagManagerC4ERKS_ */
	void operator=(class CAnimTagManager *, const class CAnimTagManager  &); /* linkage=_ZN15CAnimTagManageraSERKS_ */
	CAnimTagBasePtr FindTag(const class CAnimTagManager  *, class AnimTagID); /* linkage=_ZNK15CAnimTagManager7FindTagE9AnimTagID */
	class AnimTagID CreateTagID(const class CAnimTagManager  *); /* linkage=_ZNK15CAnimTagManager11CreateTagIDEv */
	virtual void ~CAnimTagManager(class CAnimTagManager *); /* linkage=_ZN15CAnimTagManagerD4Ev */
	virtual inline void ~CAnimTagManager(class CAnimTagManager *); /* linkage=_ZN15CAnimTagManagerD4Ev */
};

// <00681608> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:18
// function calls: 3
void CAnimTagManager::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 90
	Schema_VerifyBindingIsRegistered(void); // 18
	GetPrimaryBinding(void); // 18
} /* size: 75, inline expansions: 3 (78 bytes) */

// <0067CD6C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:18
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0067CD66> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:18
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <0067CD4D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:18
inline void CAnimTagManager::Schema_DynamicBinding()
{
} /* size: 0 */

// <00440598> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:18
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <0044056F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:19
inline void KV3TransferPolymorphicClassname(const CAnimTagManager* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <00440558> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:19
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */

// <00673D4B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animtagmanager.h:24
void CAnimTagManager::CAnimTagManager()
{
} /* size: 0 */

