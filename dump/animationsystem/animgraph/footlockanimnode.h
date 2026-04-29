
//
// animationsystem/animgraph/footlockanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 20
//	class: 1
//

// <004E1144> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:11
inline void CFootLockItem::operator=(const CFootLockItem &)
{
} /* size: 0 */

// <004E112D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:11
void CFootLockItem::~CFootLockItem()
{
} /* size: 0 */

// <004E1111> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:11
inline void CFootLockItem::~CFootLockItem()
{
} /* size: 0 */

// <004A2C04> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:11
// member functions: 34
// member variables: 6
// static member variable: 1
// class size: 40
class CFootLockItem {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:14 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:13 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:13 */
	CFootLockItem* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:13 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:13 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:13 */
	void Schema_CompileTimeVerificationFunction(CFootLockItem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:13 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:13 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:13 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootLockItem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:14 */
	CFootLockItem* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:14 */
	void KV3TransferSave(const CFootLockItem* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:14 */
	void KV3TransferLoad(CFootLockItem* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:14 */
	void KV3TransferSave_CFootLockItem(const CFootLockItem* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:14 */
	void KV3TransferLoad_CFootLockItem(CFootLockItem* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:20 */
	void CFootLockItem(CFootLockItem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:22 */
	void GetItemName(void* , CUtlString* );
	CUtlString m_footName; /* 0 8 */
	CUtlString m_targetBoneName; /* 8 8 */
	CUtlString m_ikChainName; /* 16 8 */
	AnimTagID m_disableTagID; /* 24 4 */
	float m_flMaxRotationLeft; /* 28 4 */
	float m_flMaxRotationRight; /* 32 4 */
	void ~CFootLockItem(CFootLockItem* );
	CFootLockItem& operator=(CFootLockItem* , const CFootLockItem& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN13CFootLockItem17GetPrimaryBindingEv */
	class CFootLockItem * Schema_MarkHelperFn(void); /* linkage=_ZN13CFootLockItem19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN13CFootLockItem15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <518897> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/footlockanimnode_h_schema.gen_cpp:172 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN13CFootLockItem32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootLockItem *); /* linkage=_ZN13CFootLockItem38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN13CFootLockItem20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN13CFootLockItem22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootLockItem  *); /* linkage=_ZNK13CFootLockItem21Schema_DynamicBindingEv */
	class CFootLockItem * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN13CFootLockItem32KV3TransferAllocateClassInstanceEPKc */
	/* <5188e4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/footlockanimnode_h_schema.gen_cpp:180 */
	void KV3TransferSave(const class CFootLockItem  *, class CKV3TransferSaveContext *); /* linkage=_ZNK13CFootLockItem15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <51893e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/footlockanimnode_h_schema.gen_cpp:195 */
	void KV3TransferLoad(class CFootLockItem *, class CKV3TransferLoadContext *); /* linkage=_ZN13CFootLockItem15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootLockItem(const class CFootLockItem  *, class CKV3TransferSaveContext *); /* linkage=_ZNK13CFootLockItem29KV3TransferSave_CFootLockItemEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootLockItem(class CFootLockItem *, class CKV3TransferLoadContext *); /* linkage=_ZN13CFootLockItem29KV3TransferLoad_CFootLockItemEP23CKV3TransferLoadContext */
	void CFootLockItem(class CFootLockItem *); /* linkage=_ZN13CFootLockItemC4Ev */
	void GetItemName(void *, class CUtlString *); /* linkage=_ZN13CFootLockItem11GetItemNameEPvP10CUtlString */
	class CFootLockItem & operator=(class CFootLockItem *, const class CFootLockItem  &); /* linkage=_ZN13CFootLockItemaSERKS_ */
	void ~CFootLockItem(class CFootLockItem *); /* linkage=_ZN13CFootLockItemD4Ev */
};

// <004E1309> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:13
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <004E1303> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:13
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <004E12EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:13
inline void CFootLockItem::Schema_DynamicBinding()
{
} /* size: 0 */

// <004E12D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:20
void CFootLockItem::CFootLockItem()
{
} /* size: 0 */

// <004E12BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:20
inline void CFootLockItem::CFootLockItem()
{
} /* size: 0 */

// <004DEE17> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:34
inline void CFootLockAnimNode::operator=(const CFootLockAnimNode &)
{
} /* size: 0 */

// <004DEDBF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:34
void CFootLockAnimNode::~CFootLockAnimNode()
{
} /* size: 0 */

// <004DED8C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:34
inline void CFootLockAnimNode::~CFootLockAnimNode()
{
} /* size: 0 */

// <00515356> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:37
// function calls: 3
void CFootLockAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 771
	Schema_VerifyBindingIsRegistered(void); // 37
	GetPrimaryBinding(void); // 37
} /* size: 75, inline expansions: 3 (78 bytes) */

// <004E1295> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:37
inline void CFootLockAnimNode::Schema_DynamicBinding()
{
} /* size: 0 */

// <004B36E8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:43
void CFootLockAnimNode::CFootLockAnimNode()
{
} /* size: 0 */

// <004E1267> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:55
void UIOnPropertyChanged(void* pThis)
{
} /* size: 10 */

// <004E1239> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:56
void VisibleIfStepHeightEnabled(void* pThis)
{
} /* size: 20 */

// <004E120B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:57
void VisibleIfTwoBoneIKEnabled(void* pThis)
{
} /* size: 16 */

// <004E11DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:58
void VisibleIfGroundTracingEnabled(void* pThis)
{
} /* size: 20 */

// <004E11AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:59
void VisibleIfHipDropEnabled(void* pThis)
{
} /* size: 34 */

// <004E1181> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/footlockanimnode.h:60
void VisibleIfRootDampingEnabled(void* pThis)
{
} /* size: 20 */

