
//
// ./animgraph/footsteptriggeranimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//

// <0031CC47> ./animgraph/footsteptriggeranimnode.h:15
void CFootStepTriggerItem::~CFootStepTriggerItem()
{
} /* size: 0 */

// <0031CC2B> ./animgraph/footsteptriggeranimnode.h:15
inline void CFootStepTriggerItem::~CFootStepTriggerItem()
{
} /* size: 0 */

// <0031CC0A> ./animgraph/footsteptriggeranimnode.h:15
inline void CFootStepTriggerItem::operator=(const CFootStepTriggerItem &)
{
} /* size: 0 */

// <0028986D> ./animgraph/footsteptriggeranimnode.h:15
// member functions: 34
// member variables: 3
// static member variable: 1
// class size: 48
class CFootStepTriggerItem {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ./animgraph/footsteptriggeranimnode.h:17 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ./animgraph/footsteptriggeranimnode.h:17 */
	CFootStepTriggerItem* Schema_MarkHelperFn(void);
	/* ./animgraph/footsteptriggeranimnode.h:17 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ./animgraph/footsteptriggeranimnode.h:17 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ./animgraph/footsteptriggeranimnode.h:17 */
	void Schema_CompileTimeVerificationFunction(CFootStepTriggerItem* );
	/* ./animgraph/footsteptriggeranimnode.h:17 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ./animgraph/footsteptriggeranimnode.h:17 */
	const char* Schema_StaticClassname(void);
	/* ./animgraph/footsteptriggeranimnode.h:17 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootStepTriggerItem* );
	/* ./animgraph/footsteptriggeranimnode.h:18 */
	CFootStepTriggerItem* KV3TransferAllocateClassInstance(const char* );
	/* ./animgraph/footsteptriggeranimnode.h:18 */
	void KV3TransferSave(const CFootStepTriggerItem* , CKV3TransferSaveContext* );
	/* ./animgraph/footsteptriggeranimnode.h:18 */
	void KV3TransferLoad(CFootStepTriggerItem* , CKV3TransferLoadContext* );
	/* ./animgraph/footsteptriggeranimnode.h:18 */
	void KV3TransferSave_CFootStepTriggerItem(const CFootStepTriggerItem* , CKV3TransferSaveContext* );
	/* ./animgraph/footsteptriggeranimnode.h:18 */
	void KV3TransferLoad_CFootStepTriggerItem(CFootStepTriggerItem* , CKV3TransferLoadContext* );
	/* ./animgraph/footsteptriggeranimnode.h:24 */
	void CFootStepTriggerItem(CFootStepTriggerItem* );
	/* ./animgraph/footsteptriggeranimnode.h:26 */
	void GetItemName(void* , CUtlString* );
	CUtlString m_footName; /* 0 8 */
	StepPhase m_triggerPhase; /* 8 4 */
	CUtlVector<AnimTagID, CUtlMemory<AnimTagID, int> > m_tags; /* 16 32 */
	CFootStepTriggerItem& operator=(CFootStepTriggerItem* , const CFootStepTriggerItem& );
	void ~CFootStepTriggerItem(CFootStepTriggerItem* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN20CFootStepTriggerItem17GetPrimaryBindingEv */
	class CFootStepTriggerItem * Schema_MarkHelperFn(void); /* linkage=_ZN20CFootStepTriggerItem19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN20CFootStepTriggerItem15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5189e6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/footsteptriggeranimnode_h_schema.gen_cpp:133 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN20CFootStepTriggerItem32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootStepTriggerItem *); /* linkage=_ZN20CFootStepTriggerItem38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN20CFootStepTriggerItem20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN20CFootStepTriggerItem22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootStepTriggerItem  *); /* linkage=_ZNK20CFootStepTriggerItem21Schema_DynamicBindingEv */
	class CFootStepTriggerItem * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN20CFootStepTriggerItem32KV3TransferAllocateClassInstanceEPKc */
	/* <518d21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/footsteptriggeranimnode_h_schema.gen_cpp:141 */
	void KV3TransferSave(const class CFootStepTriggerItem  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CFootStepTriggerItem15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <518f18> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/footsteptriggeranimnode_h_schema.gen_cpp:153 */
	void KV3TransferLoad(class CFootStepTriggerItem *, class CKV3TransferLoadContext *); /* linkage=_ZN20CFootStepTriggerItem15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootStepTriggerItem(const class CFootStepTriggerItem  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CFootStepTriggerItem36KV3TransferSave_CFootStepTriggerItemEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootStepTriggerItem(class CFootStepTriggerItem *, class CKV3TransferLoadContext *); /* linkage=_ZN20CFootStepTriggerItem36KV3TransferLoad_CFootStepTriggerItemEP23CKV3TransferLoadContext */
	void CFootStepTriggerItem(class CFootStepTriggerItem *); /* linkage=_ZN20CFootStepTriggerItemC4Ev */
	/* <1197f9e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggeranimnode.cpp:20 */
	void GetItemName(void *, class CUtlString *); /* linkage=_ZN20CFootStepTriggerItem11GetItemNameEPvP10CUtlString */
	class CFootStepTriggerItem & operator=(class CFootStepTriggerItem *, const class CFootStepTriggerItem  &); /* linkage=_ZN20CFootStepTriggerItemaSERKS_ */
	void ~CFootStepTriggerItem(class CFootStepTriggerItem *); /* linkage=_ZN20CFootStepTriggerItemD4Ev */
};

// <0033EF09> ./animgraph/footsteptriggeranimnode.h:17
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <0033EEBE> ./animgraph/footsteptriggeranimnode.h:24
void CFootStepTriggerItem::CFootStepTriggerItem()
{
} /* size: 0 */

// <0033EEA5> ./animgraph/footsteptriggeranimnode.h:24
inline void CFootStepTriggerItem::CFootStepTriggerItem()
{
} /* size: 0 */

