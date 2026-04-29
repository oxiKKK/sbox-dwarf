
//
// animationsystem/animgraph/animparameterlist.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//	class: 1
//

// <0042868F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:20
// variable: 1
// function calls: 17
void CAnimParameterList::~CAnimParameterList()
{
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimParameterBase>(CAnimParameterBase* pObj); // 344
		CSmartPtr<CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimParameterBase> >(CSmartPtr<CAnimParameterBase, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 1798
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAcce this); // 20
} /* size: 187, inline expansions: 7 (501 bytes) */

// <004281E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:20
// variable: 1
// function calls: 23
void CAnimParameterList::~CAnimParameterList()
{
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimParameterBase>(CAnimParameterBase* pObj); // 344
		CSmartPtr<CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimParameterBase> >(CSmartPtr<CAnimParameterBase, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 1798
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 560
	ValidateAlignment<CSmartPtr<CAnimParameterBase> >(void); // 508
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAcce this); // 20
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 20
	CAnimParameterList::~CAnimParameterList(); // 20
} /* size: 179, inline expansions: 13 (587 bytes) */

// <004281CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:20
inline void CAnimParameterList::~CAnimParameterList()
{
} /* size: 0 */

// <003E45AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:20
// member functions: 77
// member variables: 3
// static member variable: 1
// vtable entries: 15
// class size: 56
class CAnimParameterList : public IAnimParameterList, public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:23 */
	enum {
		KV3TRANSFER_BEHAVIOR = 2,
	};
public:
	/* class IAnimParameterList <ancestor>; */ /* 0 8 */
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 8 16 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:22 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:22 */
	CAnimParameterList* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animparameterlist_h_schema.gen_cpp:61 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animparameterlist_h_schema.gen_cpp:90 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animparameterlist_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(CAnimParameterList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:22 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:22 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:22 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimParameterList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:23 */
	void KV3TransferPolymorphicClassname(const CAnimParameterList* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:23 */
	CAnimParameterList* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animparameterlist_h_schema.gen_cpp:98 */
	virtual void KV3TransferSave(const CAnimParameterList* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animparameterlist_h_schema.gen_cpp:108 */
	virtual void KV3TransferLoad(CAnimParameterList* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animparameterlist_h_schema.gen_cpp:103 */
	void KV3TransferSave_CAnimParameterList(const CAnimParameterList* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animparameterlist_h_schema.gen_cpp:113 */
	void KV3TransferLoad_CAnimParameterList(CAnimParameterList* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:27 */
	void CAnimParameterList(CAnimParameterList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:32 */
	virtual int Count(const CAnimParameterList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:35 */
	virtual IAnimParameter* GetParameter(CAnimParameterList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:36 */
	virtual const IAnimParameter* GetParameter(const CAnimParameterList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:39 */
	virtual IAnimParameter* GetParameter(CAnimParameterList* , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:40 */
	virtual const IAnimParameter* GetParameter(const CAnimParameterList* , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:43 */
	virtual AnimParamID GetParameterID(const CAnimParameterList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:45 */
	virtual IAnimParameter* GetParameter(CAnimParameterList* , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:46 */
	virtual const IAnimParameter* GetParameter(const CAnimParameterList* , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:48 */
	virtual IAnimParameter* AddParameter(CAnimParameterList* , const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:49 */
	virtual void RemoveParameter(CAnimParameterList* , IAnimParameter* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:50 */
	virtual void RenameParameter(CAnimParameterList* , IAnimParameter* , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:53 */
	virtual CClassInfoList GetParameterTypes(const CAnimParameterList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:56 */
	int GetIndexOfParameter(const CAnimParameterList* , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:57 */
	CAnimParameterBaseConstPtr GetParameterInternal(const CAnimParameterList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:58 */
	CAnimParameterBaseConstPtr GetParameterInternal(const CAnimParameterList* , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:59 */
	void Clear(CAnimParameterList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:61 */
	CAnimParameterBase* AddParameterInternal(CAnimParameterList* , CAnimParameterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:64 */
	void CAnimParameterList(CAnimParameterList* , const CAnimParameterList& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:65 */
	void operator=(CAnimParameterList* , const CAnimParameterList& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:67 */
	CAnimParameterBasePtr FindParamByName(const CAnimParameterList* , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:68 */
	CAnimParameterBasePtr FindParamByID(const CAnimParameterList* , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:69 */
	AnimParamID CreateParamID(const CAnimParameterList* );
	CUtlVector<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int> > m_Parameters; /* 24 32 */
	virtual void ~CAnimParameterList(CAnimParameterList* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN18CAnimParameterList17GetPrimaryBindingEv */
	class CAnimParameterList * Schema_MarkHelperFn(void); /* linkage=_ZN18CAnimParameterList19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN18CAnimParameterList15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <44d34a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animparameterlist_h_schema.gen_cpp:90 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN18CAnimParameterList32Schema_VerifyBindingIsRegisteredEv */
	/* <44d31f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animparameterlist_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(class CAnimParameterList *); /* linkage=_ZN18CAnimParameterList38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN18CAnimParameterList20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN18CAnimParameterList22Schema_StaticClassnameEv */
	/* <44b3f2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:22 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimParameterList  *); /* linkage=_ZNK18CAnimParameterList21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CAnimParameterList  *, char &); /* linkage=_ZN18CAnimParameterList31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CAnimParameterList * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN18CAnimParameterList32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CAnimParameterList  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CAnimParameterList15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CAnimParameterList *, class CKV3TransferLoadContext *); /* linkage=_ZN18CAnimParameterList15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimParameterList(const class CAnimParameterList  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CAnimParameterList34KV3TransferSave_CAnimParameterListEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimParameterList(class CAnimParameterList *, class CKV3TransferLoadContext *); /* linkage=_ZN18CAnimParameterList34KV3TransferLoad_CAnimParameterListEP23CKV3TransferLoadContext */
	void CAnimParameterList(class CAnimParameterList *); /* linkage=_ZN18CAnimParameterListC4Ev */
	/* <f990d3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:19 */
	virtual int Count(const class CAnimParameterList  *); /* linkage=_ZNK18CAnimParameterList5CountEv */
	virtual class IAnimParameter * GetParameter(class CAnimParameterList *, int); /* linkage=_ZN18CAnimParameterList12GetParameterEi */
	virtual const class IAnimParameter  * GetParameter(const class CAnimParameterList  *, int); /* linkage=_ZNK18CAnimParameterList12GetParameterEi */
	virtual class IAnimParameter * GetParameter(class CAnimParameterList *, const class CUtlString  &); /* linkage=_ZN18CAnimParameterList12GetParameterERK10CUtlString */
	virtual const class IAnimParameter  * GetParameter(const class CAnimParameterList  *, const class CUtlString  &); /* linkage=_ZNK18CAnimParameterList12GetParameterERK10CUtlString */
	virtual class AnimParamID GetParameterID(const class CAnimParameterList  *, int); /* linkage=_ZNK18CAnimParameterList14GetParameterIDEi */
	virtual class IAnimParameter * GetParameter(class CAnimParameterList *, class AnimParamID); /* linkage=_ZN18CAnimParameterList12GetParameterE11AnimParamID */
	virtual const class IAnimParameter  * GetParameter(const class CAnimParameterList  *, class AnimParamID); /* linkage=_ZNK18CAnimParameterList12GetParameterE11AnimParamID */
	virtual class IAnimParameter * AddParameter(class CAnimParameterList *, const char  *); /* linkage=_ZN18CAnimParameterList12AddParameterEPKc */
	virtual void RemoveParameter(class CAnimParameterList *, class IAnimParameter *); /* linkage=_ZN18CAnimParameterList15RemoveParameterEP14IAnimParameter */
	virtual void RenameParameter(class CAnimParameterList *, class IAnimParameter *, const class CUtlString  &); /* linkage=_ZN18CAnimParameterList15RenameParameterEP14IAnimParameterRK10CUtlString */
	virtual CClassInfoList GetParameterTypes(const class CAnimParameterList  *); /* linkage=_ZNK18CAnimParameterList17GetParameterTypesEv */
	int GetIndexOfParameter(const class CAnimParameterList  *, class AnimParamID); /* linkage=_ZNK18CAnimParameterList19GetIndexOfParameterE11AnimParamID */
	/* <f9e02f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlist.cpp:116 */
	CAnimParameterBaseConstPtr GetParameterInternal(const class CAnimParameterList  *, int); /* linkage=_ZNK18CAnimParameterList20GetParameterInternalEi */
	CAnimParameterBaseConstPtr GetParameterInternal(const class CAnimParameterList  *, class AnimParamID); /* linkage=_ZNK18CAnimParameterList20GetParameterInternalE11AnimParamID */
	void Clear(class CAnimParameterList *); /* linkage=_ZN18CAnimParameterList5ClearEv */
	class CAnimParameterBase * AddParameterInternal(class CAnimParameterList *, class CAnimParameterBase *); /* linkage=_ZN18CAnimParameterList20AddParameterInternalEP18CAnimParameterBase */
	void CAnimParameterList(class CAnimParameterList *, const class CAnimParameterList  &); /* linkage=_ZN18CAnimParameterListC4ERKS_ */
	void operator=(class CAnimParameterList *, const class CAnimParameterList  &); /* linkage=_ZN18CAnimParameterListaSERKS_ */
	CAnimParameterBasePtr FindParamByName(const class CAnimParameterList  *, const class CUtlString  &); /* linkage=_ZNK18CAnimParameterList15FindParamByNameERK10CUtlString */
	CAnimParameterBasePtr FindParamByID(const class CAnimParameterList  *, class AnimParamID); /* linkage=_ZNK18CAnimParameterList13FindParamByIDE11AnimParamID */
	class AnimParamID CreateParamID(const class CAnimParameterList  *); /* linkage=_ZNK18CAnimParameterList13CreateParamIDEv */
	virtual void ~CAnimParameterList(class CAnimParameterList *); /* linkage=_ZN18CAnimParameterListD4Ev */
	virtual inline void ~CAnimParameterList(class CAnimParameterList *); /* linkage=_ZN18CAnimParameterListD4Ev */
};

// <0044B3F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:22
// function calls: 3
void CAnimParameterList::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 90
	Schema_VerifyBindingIsRegistered(void); // 22
	GetPrimaryBinding(void); // 22
} /* size: 75, inline expansions: 3 (78 bytes) */

// <00448694> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:22
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0044868E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:22
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <00448688> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:22
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <0044866F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:22
inline void CAnimParameterList::Schema_DynamicBinding()
{
} /* size: 0 */

// <0044864C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:23
inline void KV3TransferPolymorphicClassname(const CAnimParameterList* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <00448635> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:23
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */

// <00405EE1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animparameterlist.h:27
void CAnimParameterList::CAnimParameterList()
{
} /* size: 0 */

