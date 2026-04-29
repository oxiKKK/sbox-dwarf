
//
// animationsystem/animgraph/animstatelist.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//	class: 1
//

// <00426C29> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:10
inline void CAnimStateList::operator=(const CAnimStateList &)
{
} /* size: 0 */

// <00426A90> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:10
// function calls: 7
void CAnimStateList::~CAnimStateList()
{
	CUtlMemory<CAnimState::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimState::Purge(); // 903
	CUtlMemory<CAnimState::Purge(); // 1799
	CUtlVectorBase<CAnimState::RemoveAll(); // 1798
	CUtlVectorBase<CAnimState::Purge(); // 560
	CUtlVectorBase<CAnimState::~CUtlVectorBase(); // 410
	CUtlVector<CAnimState::~CUtlVector(); // 10
} /* size: 49, inline expansions: 7 (154 bytes) */

// <004267FD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:10
// function calls: 13
void CAnimStateList::~CAnimStateList()
{
	CUtlMemory<CAnimState::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimState::Purge(); // 903
	CUtlMemory<CAnimState::Purge(); // 1799
	CUtlVectorBase<CAnimState::RemoveAll(); // 1798
	CUtlVectorBase<CAnimState::Purge(); // 560
	ValidateAlignment<CAnimState*>(void); // 508
	CUtlMemory<CAnimState::Purge(); // 510
	CUtlMemory<CAnimState::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimState::~CUtlVectorBase(); // 410
	CUtlVector<CAnimState::~CUtlVector(); // 10
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 10
	CAnimStateList::~CAnimStateList(); // 10
} /* size: 93, inline expansions: 13 (198 bytes) */

// <004267E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:10
inline void CAnimStateList::~CAnimStateList()
{
} /* size: 0 */

// <003FF199> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:10
// member functions: 49
// member variables: 2
// static member variable: 1
// vtable entries: 3
// class size: 48
class CAnimStateList : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CAnimStateList(CAnimStateList* , CAnimStateList& );
	void CAnimStateList(CAnimStateList* , const CAnimStateList& );
	CAnimStateList& operator=(CAnimStateList* , CAnimStateList& );
	CAnimStateList& operator=(CAnimStateList* , const CAnimStateList& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:12 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:12 */
	CAnimStateList* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstatelist_h_schema.gen_cpp:61 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstatelist_h_schema.gen_cpp:90 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstatelist_h_schema.gen_cpp:36 */
	void Schema_CompileTimeVerificationFunction(CAnimStateList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:12 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:12 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:12 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAnimStateList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:13 */
	void KV3TransferPolymorphicClassname(const CAnimStateList* , char& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:13 */
	CAnimStateList* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstatelist_h_schema.gen_cpp:98 */
	virtual void KV3TransferSave(const CAnimStateList* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstatelist_h_schema.gen_cpp:108 */
	virtual void KV3TransferLoad(CAnimStateList* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstatelist_h_schema.gen_cpp:103 */
	void KV3TransferSave_CAnimStateList(const CAnimStateList* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstatelist_h_schema.gen_cpp:113 */
	void KV3TransferLoad_CAnimStateList(CAnimStateList* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:16 */
	void CAnimStateList(CAnimStateList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:17 */
	void CAnimStateList(CAnimStateList* , const CUtlVector<IAnimState*, CUtlMemory<IAnimState*, int> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:19 */
	int Count(const CAnimStateList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:21 */
	CAnimState* Get(CAnimStateList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:22 */
	const CAnimState* Get(const CAnimStateList* , int);
	CUtlVector<CAnimState*, CUtlMemory<CAnimState*, int> > m_states; /* 16 32 */
	virtual void ~CAnimStateList(CAnimStateList* );
	void CAnimStateList(class CAnimStateList *, class CAnimStateList &); /* linkage=_ZN14CAnimStateListC4EOS_ */
	void CAnimStateList(class CAnimStateList *, const class CAnimStateList  &); /* linkage=_ZN14CAnimStateListC4ERKS_ */
	class CAnimStateList & operator=(class CAnimStateList *, class CAnimStateList &); /* linkage=_ZN14CAnimStateListaSEOS_ */
	class CAnimStateList & operator=(class CAnimStateList *, const class CAnimStateList  &); /* linkage=_ZN14CAnimStateListaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN14CAnimStateList17GetPrimaryBindingEv */
	class CAnimStateList * Schema_MarkHelperFn(void); /* linkage=_ZN14CAnimStateList19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN14CAnimStateList15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <44d398> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/animstatelist_h_schema.gen_cpp:90 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN14CAnimStateList32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CAnimStateList *); /* linkage=_ZN14CAnimStateList38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN14CAnimStateList20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN14CAnimStateList22Schema_StaticClassnameEv */
	/* <44af05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:12 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimStateList  *); /* linkage=_ZNK14CAnimStateList21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CAnimStateList  *, char &); /* linkage=_ZN14CAnimStateList31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CAnimStateList * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN14CAnimStateList32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CAnimStateList  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CAnimStateList15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CAnimStateList *, class CKV3TransferLoadContext *); /* linkage=_ZN14CAnimStateList15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimStateList(const class CAnimStateList  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CAnimStateList30KV3TransferSave_CAnimStateListEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimStateList(class CAnimStateList *, class CKV3TransferLoadContext *); /* linkage=_ZN14CAnimStateList30KV3TransferLoad_CAnimStateListEP23CKV3TransferLoadContext */
	void CAnimStateList(class CAnimStateList *); /* linkage=_ZN14CAnimStateListC4Ev */
	void CAnimStateList(class CAnimStateList *, const class CUtlVector<IAnimState*, CUtlMemory<IAnimState*, int> >  &); /* linkage=_ZN14CAnimStateListC4ERK10CUtlVectorIP10IAnimState10CUtlMemoryIS2_iEE */
	int Count(const class CAnimStateList  *); /* linkage=_ZNK14CAnimStateList5CountEv */
	class CAnimState * Get(class CAnimStateList *, int); /* linkage=_ZN14CAnimStateList3GetEi */
	const class CAnimState  * Get(const class CAnimStateList  *, int); /* linkage=_ZNK14CAnimStateList3GetEi */
	virtual void ~CAnimStateList(class CAnimStateList *); /* linkage=_ZN14CAnimStateListD4Ev */
	virtual inline void ~CAnimStateList(class CAnimStateList *); /* linkage=_ZN14CAnimStateListD4Ev */
};

// <0044AF05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:12
// function calls: 3
void CAnimStateList::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 90
	Schema_VerifyBindingIsRegistered(void); // 12
	GetPrimaryBinding(void); // 12
} /* size: 75, inline expansions: 3 (78 bytes) */

// <00426C81> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:12
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <00426C7B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:12
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <00426C62> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:12
inline void CAnimStateList::Schema_DynamicBinding()
{
} /* size: 0 */

// <00405EC5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animstatelist.h:16
void CAnimStateList::CAnimStateList()
{
} /* size: 0 */

