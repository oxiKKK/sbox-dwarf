
//
// animationsystem/animgraph/footsteptriggeranimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 14
//	class: 1
//

// <004D692B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:15
inline void CFootStepTriggerItem::operator=(const CFootStepTriggerItem &)
{
} /* size: 0 */

// <004D6914> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:15
void CFootStepTriggerItem::~CFootStepTriggerItem()
{
} /* size: 0 */

// <004D68F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:15
inline void CFootStepTriggerItem::~CFootStepTriggerItem()
{
} /* size: 0 */

// <004A5823> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:15
// member functions: 34
// member variables: 3
// static member variable: 1
// class size: 48
class CFootStepTriggerItem {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:18 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:17 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:17 */
	CFootStepTriggerItem* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:17 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:17 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:17 */
	void Schema_CompileTimeVerificationFunction(CFootStepTriggerItem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:17 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:17 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:17 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootStepTriggerItem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:18 */
	CFootStepTriggerItem* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:18 */
	void KV3TransferSave(const CFootStepTriggerItem* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:18 */
	void KV3TransferLoad(CFootStepTriggerItem* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:18 */
	void KV3TransferSave_CFootStepTriggerItem(const CFootStepTriggerItem* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:18 */
	void KV3TransferLoad_CFootStepTriggerItem(CFootStepTriggerItem* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:24 */
	void CFootStepTriggerItem(CFootStepTriggerItem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:26 */
	void GetItemName(void* , CUtlString* );
	CUtlString m_footName; /* 0 8 */
	StepPhase m_triggerPhase; /* 8 4 */
	CUtlVector<AnimTagID, CUtlMemory<AnimTagID, int> > m_tags; /* 16 32 */
	void ~CFootStepTriggerItem(CFootStepTriggerItem* );
	CFootStepTriggerItem& operator=(CFootStepTriggerItem* , const CFootStepTriggerItem& );
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

// <004D6A11> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:17
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <004D6A0B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:17
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <004D69F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:17
inline void CFootStepTriggerItem::Schema_DynamicBinding()
{
} /* size: 0 */

// <004D69A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:24
void CFootStepTriggerItem::CFootStepTriggerItem()
{
} /* size: 0 */

// <004D698D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:24
inline void CFootStepTriggerItem::CFootStepTriggerItem()
{
} /* size: 0 */

// <004D38D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:37
inline void CFootStepTriggerAnimNode::operator=(const CFootStepTriggerAnimNode &)
{
} /* size: 0 */

// <004D387D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:37
void CFootStepTriggerAnimNode::~CFootStepTriggerAnimNode()
{
} /* size: 0 */

// <004D384A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:37
inline void CFootStepTriggerAnimNode::~CFootStepTriggerAnimNode()
{
} /* size: 0 */

// <0051540A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:40
// function calls: 3
void CFootStepTriggerAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 273
	Schema_VerifyBindingIsRegistered(void); // 40
	GetPrimaryBinding(void); // 40
} /* size: 75, inline expansions: 3 (78 bytes) */

// <004D6968> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:40
inline void CFootStepTriggerAnimNode::Schema_DynamicBinding()
{
} /* size: 0 */

// <004B36CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footsteptriggeranimnode.h:45
void CFootStepTriggerAnimNode::CFootStepTriggerAnimNode()
{
} /* size: 0 */

