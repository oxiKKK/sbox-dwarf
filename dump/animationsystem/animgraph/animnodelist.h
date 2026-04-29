
//
// animationsystem/animgraph/animnodelist.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//	class: 1
//

// <0042C202> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:10
inline void CAnimNodeList::operator=(const CAnimNodeList &)
{
} /* size: 0 */

// <0042C069> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:10
// function calls: 7
void CAnimNodeList::~CAnimNodeList()
{
	CUtlMemory<CAnimNodeBase::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimNodeBase::Purge(); // 903
	CUtlMemory<CAnimNodeBase::Purge(); // 1799
	CUtlVectorBase<CAnimNodeBase::RemoveAll(); // 1798
	CUtlVectorBase<CAnimNodeBase::Purge(); // 560
	CUtlVectorBase<CAnimNodeBase::~CUtlVectorBase(); // 410
	CUtlVector<CAnimNodeBase::~CUtlVector(); // 10
} /* size: 49, inline expansions: 7 (154 bytes) */

// <0042BDD6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:10
// function calls: 13
void CAnimNodeList::~CAnimNodeList()
{
	CUtlMemory<CAnimNodeBase::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimNodeBase::Purge(); // 903
	CUtlMemory<CAnimNodeBase::Purge(); // 1799
	CUtlVectorBase<CAnimNodeBase::RemoveAll(); // 1798
	CUtlVectorBase<CAnimNodeBase::Purge(); // 560
	ValidateAlignment<CAnimNodeBase*>(void); // 508
	CUtlMemory<CAnimNodeBase::Purge(); // 510
	CUtlMemory<CAnimNodeBase::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimNodeBase::~CUtlVectorBase(); // 410
	CUtlVector<CAnimNodeBase::~CUtlVector(); // 10
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 10
	CAnimNodeList::~CAnimNodeList(); // 10
} /* size: 93, inline expansions: 13 (198 bytes) */

// <0042BDBA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:10
inline void CAnimNodeList::~CAnimNodeList()
{
} /* size: 0 */

// <003FD5DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:10
// member functions: 48
// member variables: 2
// static member variable: 1
// vtable entries: 3
// class size: 48
class CAnimNodeList : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:13 */
	enum {
		KV3TRANSFER_IS_VIRTUAL = 1,
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:13 */
	enum {
		KV3TRANSFER_IGNORE_VIRTUAL = 0,
	};
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CAnimNodeList(CAnimNodeList* , CAnimNodeList& );
	void CAnimNodeList(CAnimNodeList* , const CAnimNodeList& );
	CAnimNodeList& operator=(CAnimNodeList* , CAnimNodeList& );
	CAnimNodeList& operator=(CAnimNodeList* , const CAnimNodeList& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:12 */
	CAnimNodeList* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animnodelist_h_schema.gen_cpp:61 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animnodelist_h_schema.gen_cpp:90 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animnodelist_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(CAnimNodeList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:12 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:12 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimNodeList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:13 */
	void KV3TransferPolymorphicClassname(const CAnimNodeList* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:13 */
	CAnimNodeList* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animnodelist_h_schema.gen_cpp:98 */
	virtual void KV3TransferSave(const CAnimNodeList* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animnodelist_h_schema.gen_cpp:108 */
	virtual void KV3TransferLoad(CAnimNodeList* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animnodelist_h_schema.gen_cpp:103 */
	void KV3TransferSave_CAnimNodeList(const CAnimNodeList* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animnodelist_h_schema.gen_cpp:113 */
	void KV3TransferLoad_CAnimNodeList(CAnimNodeList* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:16 */
	void CAnimNodeList(CAnimNodeList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:17 */
	void CAnimNodeList(CAnimNodeList* , const CUtlVector<IAnimNode*, CUtlMemory<IAnimNode*, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:19 */
	int Count(const CAnimNodeList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:21 */
	CAnimNodeBase* Get(CAnimNodeList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:22 */
	const CAnimNodeBase* Get(const CAnimNodeList* , int);
	CUtlVector<CAnimNodeBase*, CUtlMemory<CAnimNodeBase*, int> > m_nodes; /* 16 32 */
	virtual void ~CAnimNodeList(CAnimNodeList* );
	void CAnimNodeList(class CAnimNodeList *, class CAnimNodeList &); /* linkage=_ZN13CAnimNodeListC4EOS_ */
	void CAnimNodeList(class CAnimNodeList *, const class CAnimNodeList  &); /* linkage=_ZN13CAnimNodeListC4ERKS_ */
	class CAnimNodeList & operator=(class CAnimNodeList *, class CAnimNodeList &); /* linkage=_ZN13CAnimNodeListaSEOS_ */
	class CAnimNodeList & operator=(class CAnimNodeList *, const class CAnimNodeList  &); /* linkage=_ZN13CAnimNodeListaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN13CAnimNodeList17GetPrimaryBindingEv */
	class CAnimNodeList * Schema_MarkHelperFn(void); /* linkage=_ZN13CAnimNodeList19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN13CAnimNodeList15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <44d283> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animnodelist_h_schema.gen_cpp:90 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN13CAnimNodeList32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CAnimNodeList *); /* linkage=_ZN13CAnimNodeList38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN13CAnimNodeList20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN13CAnimNodeList22Schema_StaticClassnameEv */
	/* <44ae51> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:12 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimNodeList  *); /* linkage=_ZNK13CAnimNodeList21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CAnimNodeList  *, char &); /* linkage=_ZN13CAnimNodeList31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CAnimNodeList * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN13CAnimNodeList32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CAnimNodeList  *, class CKV3TransferSaveContext *); /* linkage=_ZNK13CAnimNodeList15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CAnimNodeList *, class CKV3TransferLoadContext *); /* linkage=_ZN13CAnimNodeList15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimNodeList(const class CAnimNodeList  *, class CKV3TransferSaveContext *); /* linkage=_ZNK13CAnimNodeList29KV3TransferSave_CAnimNodeListEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimNodeList(class CAnimNodeList *, class CKV3TransferLoadContext *); /* linkage=_ZN13CAnimNodeList29KV3TransferLoad_CAnimNodeListEP23CKV3TransferLoadContext */
	void CAnimNodeList(class CAnimNodeList *); /* linkage=_ZN13CAnimNodeListC4Ev */
	void CAnimNodeList(class CAnimNodeList *, const class CUtlVector<IAnimNode*, CUtlMemory<IAnimNode*, int> >  &); /* linkage=_ZN13CAnimNodeListC4ERK10CUtlVectorIP9IAnimNode10CUtlMemoryIS2_iEE */
	/* <f9d2bc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodelist.cpp:24 */
	int Count(const class CAnimNodeList  *); /* linkage=_ZNK13CAnimNodeList5CountEv */
	/* <f9d316> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodelist.cpp:30 */
	class CAnimNodeBase * Get(class CAnimNodeList *, int); /* linkage=_ZN13CAnimNodeList3GetEi */
	const class CAnimNodeBase  * Get(const class CAnimNodeList  *, int); /* linkage=_ZNK13CAnimNodeList3GetEi */
	virtual void ~CAnimNodeList(class CAnimNodeList *); /* linkage=_ZN13CAnimNodeListD4Ev */
};

// <0044AE51> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:12
// function calls: 3
void CAnimNodeList::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 90
	Schema_VerifyBindingIsRegistered(void); // 12
	GetPrimaryBinding(void); // 12
} /* size: 75, inline expansions: 3 (78 bytes) */

// <0042C25A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:12
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0042C254> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:12
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <0042C23B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:12
inline void CAnimNodeList::Schema_DynamicBinding()
{
} /* size: 0 */

// <00405F31> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodelist.h:16
void CAnimNodeList::CAnimNodeList()
{
} /* size: 0 */

