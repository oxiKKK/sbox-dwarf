
//
// ./animgraph/choiceanimnode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	struct: 1
//

// <0030C348> ./animgraph/choiceanimnode.h:14
void CChoiceNodeChild::~CChoiceNodeChild()
{
} /* size: 0 */

// <0030C32C> ./animgraph/choiceanimnode.h:14
inline void CChoiceNodeChild::~CChoiceNodeChild()
{
} /* size: 0 */

// <0030C30B> ./animgraph/choiceanimnode.h:14
inline void CChoiceNodeChild::operator=(const CChoiceNodeChild &)
{
} /* size: 0 */

// <00278E2E> ./animgraph/choiceanimnode.h:14
// member functions: 17
// member variables: 4
// static member variable: 1
// struct size: 24
struct CChoiceNodeChild {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ./animgraph/choiceanimnode.h:16 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ./animgraph/choiceanimnode.h:16 */
	CChoiceNodeChild* Schema_MarkHelperFn(void);
	/* ./animgraph/choiceanimnode.h:16 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ./animgraph/choiceanimnode.h:16 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ./animgraph/choiceanimnode.h:16 */
	void Schema_CompileTimeVerificationFunction(CChoiceNodeChild* );
	/* ./animgraph/choiceanimnode.h:16 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ./animgraph/choiceanimnode.h:16 */
	const char* Schema_StaticClassname(void);
	/* ./animgraph/choiceanimnode.h:16 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CChoiceNodeChild* );
	/* ./animgraph/choiceanimnode.h:17 */
	CChoiceNodeChild* KV3TransferAllocateClassInstance(const char* );
	/* ./animgraph/choiceanimnode.h:17 */
	void KV3TransferSave(const CChoiceNodeChild* , CKV3TransferSaveContext* );
	/* ./animgraph/choiceanimnode.h:17 */
	void KV3TransferLoad(CChoiceNodeChild* , CKV3TransferLoadContext* );
	/* ./animgraph/choiceanimnode.h:17 */
	void KV3TransferSave_CChoiceNodeChild(const CChoiceNodeChild* , CKV3TransferSaveContext* );
	/* ./animgraph/choiceanimnode.h:17 */
	void KV3TransferLoad_CChoiceNodeChild(CChoiceNodeChild* , CKV3TransferLoadContext* );
	/* ./animgraph/choiceanimnode.h:22 */
	void CChoiceNodeChild(CChoiceNodeChild* );
	CNodeConnection m_inputConnection; /* 0 8 */
	CUtlString m_name; /* 8 8 */
	float m_weight; /* 16 4 */
	float m_blendTime; /* 20 4 */
	/* ./animgraph/choiceanimnode.h:29 */
	void GetItemName(void* , CUtlString* );
	CChoiceNodeChild& operator=(CChoiceNodeChild* , const CChoiceNodeChild& );
	void ~CChoiceNodeChild(CChoiceNodeChild* );
};

// <0033F377> ./animgraph/choiceanimnode.h:16
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <0029F09D> ./animgraph/choiceanimnode.h:22
void CChoiceNodeChild::CChoiceNodeChild()
{
} /* size: 0 */

