
//
// animationsystem/animgraph/jiggleboneanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 14
//	class: 1
//

// <005E6D97> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:14
inline void CJiggleBoneItem::operator=(const CJiggleBoneItem &)
{
} /* size: 0 */

// <005E6D80> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:14
void CJiggleBoneItem::~CJiggleBoneItem()
{
} /* size: 0 */

// <005E6D64> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:14
inline void CJiggleBoneItem::~CJiggleBoneItem()
{
} /* size: 0 */

// <00565EC5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:14
// member functions: 34
// member variables: 7
// static member variable: 1
// class size: 48
class CJiggleBoneItem {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:17 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:16 */
	CJiggleBoneItem* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:16 */
	void Schema_CompileTimeVerificationFunction(CJiggleBoneItem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:16 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:16 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CJiggleBoneItem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:17 */
	CJiggleBoneItem* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:17 */
	void KV3TransferSave(const CJiggleBoneItem* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:17 */
	void KV3TransferLoad(CJiggleBoneItem* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:17 */
	void KV3TransferSave_CJiggleBoneItem(const CJiggleBoneItem* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:17 */
	void KV3TransferLoad_CJiggleBoneItem(CJiggleBoneItem* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:23 */
	void CJiggleBoneItem(CJiggleBoneItem* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:25 */
	void GetItemName(void* , CUtlString* );
	CUtlString m_boneName; /* 0 8 */
	float m_flSpringStrength; /* 8 4 */
	float m_flSimRateFPS; /* 12 4 */
	float m_flDamping; /* 16 4 */
	JiggleBoneSimSpace m_eSimSpace; /* 20 4 */
	Vector m_vBoundsMaxLS; /* 24 12 */
	Vector m_vBoundsMinLS; /* 36 12 */
	void ~CJiggleBoneItem(CJiggleBoneItem* );
	CJiggleBoneItem& operator=(CJiggleBoneItem* , const CJiggleBoneItem& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CJiggleBoneItem17GetPrimaryBindingEv */
	class CJiggleBoneItem * Schema_MarkHelperFn(void); /* linkage=_ZN15CJiggleBoneItem19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CJiggleBoneItem15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5ec081> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/jiggleboneanimnode_h_schema.gen_cpp:175 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CJiggleBoneItem32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CJiggleBoneItem *); /* linkage=_ZN15CJiggleBoneItem38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CJiggleBoneItem20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CJiggleBoneItem22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CJiggleBoneItem  *); /* linkage=_ZNK15CJiggleBoneItem21Schema_DynamicBindingEv */
	class CJiggleBoneItem * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CJiggleBoneItem32KV3TransferAllocateClassInstanceEPKc */
	/* <5ec0cf> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/jiggleboneanimnode_h_schema.gen_cpp:183 */
	void KV3TransferSave(const class CJiggleBoneItem  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CJiggleBoneItem15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5edabe> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/jiggleboneanimnode_h_schema.gen_cpp:199 */
	void KV3TransferLoad(class CJiggleBoneItem *, class CKV3TransferLoadContext *); /* linkage=_ZN15CJiggleBoneItem15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CJiggleBoneItem(const class CJiggleBoneItem  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CJiggleBoneItem31KV3TransferSave_CJiggleBoneItemEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CJiggleBoneItem(class CJiggleBoneItem *, class CKV3TransferLoadContext *); /* linkage=_ZN15CJiggleBoneItem31KV3TransferLoad_CJiggleBoneItemEP23CKV3TransferLoadContext */
	void CJiggleBoneItem(class CJiggleBoneItem *); /* linkage=_ZN15CJiggleBoneItemC4Ev */
	void GetItemName(void *, class CUtlString *); /* linkage=_ZN15CJiggleBoneItem11GetItemNameEPvP10CUtlString */
	class CJiggleBoneItem & operator=(class CJiggleBoneItem *, const class CJiggleBoneItem  &); /* linkage=_ZN15CJiggleBoneItemaSERKS_ */
	void ~CJiggleBoneItem(class CJiggleBoneItem *); /* linkage=_ZN15CJiggleBoneItemD4Ev */
};

// <005E6E48> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:16
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <005E6E42> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:16
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <005E6E29> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:16
inline void CJiggleBoneItem::Schema_DynamicBinding()
{
} /* size: 0 */

// <005E6E12> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:23
void CJiggleBoneItem::CJiggleBoneItem()
{
} /* size: 0 */

// <005E6DF9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:23
inline void CJiggleBoneItem::CJiggleBoneItem()
{
} /* size: 0 */

// <005E4691> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:40
inline void CJiggleBoneAnimNode::operator=(const CJiggleBoneAnimNode &)
{
} /* size: 0 */

// <005E463A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:40
void CJiggleBoneAnimNode::~CJiggleBoneAnimNode()
{
} /* size: 0 */

// <005E4607> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:40
inline void CJiggleBoneAnimNode::~CJiggleBoneAnimNode()
{
} /* size: 0 */

// <005E9BEF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:43
// function calls: 3
void CJiggleBoneAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 314
	Schema_VerifyBindingIsRegistered(void); // 43
	GetPrimaryBinding(void); // 43
} /* size: 75, inline expansions: 3 (78 bytes) */

// <005E6DD4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:43
inline void CJiggleBoneAnimNode::Schema_DynamicBinding()
{
} /* size: 0 */

// <00592838> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/jiggleboneanimnode.h:48
void CJiggleBoneAnimNode::CJiggleBoneAnimNode()
{
} /* size: 0 */

