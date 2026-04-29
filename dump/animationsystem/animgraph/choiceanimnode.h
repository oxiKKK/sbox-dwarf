
//
// animationsystem/animgraph/choiceanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 16
//	struct: 1
//

// <004F5342> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:14
inline void CChoiceNodeChild::operator=(const CChoiceNodeChild &)
{
} /* size: 0 */

// <004F532B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:14
void CChoiceNodeChild::~CChoiceNodeChild()
{
} /* size: 0 */

// <004F530F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:14
inline void CChoiceNodeChild::~CChoiceNodeChild()
{
} /* size: 0 */

// <0049DF96> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:14
// member functions: 17
// member variables: 4
// static member variable: 1
// struct size: 24
struct CChoiceNodeChild {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:17 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:16 */
	CChoiceNodeChild* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:16 */
	void Schema_CompileTimeVerificationFunction(CChoiceNodeChild* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:16 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:16 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CChoiceNodeChild* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:17 */
	CChoiceNodeChild* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:17 */
	void KV3TransferSave(const CChoiceNodeChild* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:17 */
	void KV3TransferLoad(CChoiceNodeChild* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:17 */
	void KV3TransferSave_CChoiceNodeChild(const CChoiceNodeChild* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:17 */
	void KV3TransferLoad_CChoiceNodeChild(CChoiceNodeChild* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:22 */
	void CChoiceNodeChild(CChoiceNodeChild* );
	CNodeConnection m_inputConnection; /* 0 8 */
	CUtlString m_name; /* 8 8 */
	float m_weight; /* 16 4 */
	float m_blendTime; /* 20 4 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:29 */
	void GetItemName(void* , CUtlString* );
	void ~CChoiceNodeChild(CChoiceNodeChild* );
	CChoiceNodeChild& operator=(CChoiceNodeChild* , const CChoiceNodeChild& );
};

// <004F544D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:16
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <004F5447> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:16
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <004F542E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:16
inline void CChoiceNodeChild::Schema_DynamicBinding()
{
} /* size: 0 */

// <004B37E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:22
void CChoiceNodeChild::CChoiceNodeChild()
{
} /* size: 0 */

// <004F3C64> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:36
inline void CChoiceAnimNode::operator=(const CChoiceAnimNode &)
{
} /* size: 0 */

// <004F3C0C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:36
void CChoiceAnimNode::~CChoiceAnimNode()
{
} /* size: 0 */

// <004F3BD9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:36
inline void CChoiceAnimNode::~CChoiceAnimNode()
{
} /* size: 0 */

// <00514DBC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:39
// function calls: 3
void CChoiceAnimNode::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 352
	Schema_VerifyBindingIsRegistered(void); // 39
	GetPrimaryBinding(void); // 39
} /* size: 75, inline expansions: 3 (78 bytes) */

// <004F5409> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:39
inline void CChoiceAnimNode::Schema_DynamicBinding()
{
} /* size: 0 */

// <004B37C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:45
void CChoiceAnimNode::CChoiceAnimNode()
{
} /* size: 0 */

// <004F53DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:66
void DirtyChangeCallback(void* pThis)
{
} /* size: 10 */

// <004F53AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:67
void BlendTimeStateCallback(void* pThis)
{
} /* size: 17 */

// <004F537F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/choiceanimnode.h:70
void ResetChosenChangeCallback(void* pThis)
{
} /* size: 17 */

