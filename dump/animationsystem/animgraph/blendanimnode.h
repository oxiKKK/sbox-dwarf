
//
// animationsystem/animgraph/blendanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 13
//	struct: 1
//

// <004FFA58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:15
inline void CBlendNodeChild::operator=(const CBlendNodeChild &)
{
} /* size: 0 */

// <004FFA41> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:15
void CBlendNodeChild::~CBlendNodeChild()
{
} /* size: 0 */

// <004FFA25> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:15
inline void CBlendNodeChild::~CBlendNodeChild()
{
} /* size: 0 */

// <0049B31E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:15
// member functions: 17
// member variables: 3
// static member variable: 1
// struct size: 24
struct CBlendNodeChild {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:18 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:17 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:17 */
	CBlendNodeChild* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:17 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:17 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:17 */
	void Schema_CompileTimeVerificationFunction(CBlendNodeChild* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:17 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:17 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:17 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CBlendNodeChild* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:18 */
	CBlendNodeChild* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:18 */
	void KV3TransferSave(const CBlendNodeChild* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:18 */
	void KV3TransferLoad(CBlendNodeChild* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:18 */
	void KV3TransferSave_CBlendNodeChild(const CBlendNodeChild* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:18 */
	void KV3TransferLoad_CBlendNodeChild(CBlendNodeChild* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:23 */
	void CBlendNodeChild(CBlendNodeChild* );
	CNodeConnection m_inputConnection; /* 0 8 */
	CUtlString m_name; /* 8 8 */
	float m_blendValue; /* 16 4 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:29 */
	void GetItemName(void* , CUtlString* );
	void ~CBlendNodeChild(CBlendNodeChild* );
	CBlendNodeChild& operator=(CBlendNodeChild* , const CBlendNodeChild& );
};

// <004FFAD9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:17
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <004FFAD3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:17
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <004FFABA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:17
inline void CBlendNodeChild::Schema_DynamicBinding()
{
} /* size: 0 */

// <004B3838> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:23
void CBlendNodeChild::CBlendNodeChild()
{
} /* size: 0 */

// <004FE54C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:36
inline void CBlendAnimNode::operator=(const CBlendAnimNode &)
{
} /* size: 0 */

// <004FE4F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:36
void CBlendAnimNode::~CBlendAnimNode()
{
} /* size: 0 */

// <004FE4C1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:36
inline void CBlendAnimNode::~CBlendAnimNode()
{
} /* size: 0 */

// <00514C55> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:39
// function calls: 3
void CBlendAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 330
	Schema_VerifyBindingIsRegistered(void); // 39
	GetPrimaryBinding(void); // 39
} /* size: 75, inline expansions: 3 (78 bytes) */

// <004FFA95> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:39
inline void CBlendAnimNode::Schema_DynamicBinding()
{
} /* size: 0 */

// <004B381C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/blendanimnode.h:45
void CBlendAnimNode::CBlendAnimNode()
{
} /* size: 0 */

