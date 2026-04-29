
//
// ./animgraph/animnodebase.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	struct: 1
//

// <0031E80D> ./animgraph/animnodebase.h:22
void CNodeConnection::CNodeConnection()
{
} /* size: 0 */

// <0031E7F1> ./animgraph/animnodebase.h:22
inline void CNodeConnection::CNodeConnection()
{
} /* size: 0 */

// <0031E76A> ./animgraph/animnodebase.h:22
inline void CNodeConnection::operator=(const CNodeConnection &)
{
} /* size: 0 */

// <002619AC> ./animgraph/animnodebase.h:22
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 8
struct CNodeConnection {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ./animgraph/animnodebase.h:24 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ./animgraph/animnodebase.h:24 */
	CNodeConnection* Schema_MarkHelperFn(void);
	/* ./animgraph/animnodebase.h:24 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ./animgraph/animnodebase.h:24 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ./animgraph/animnodebase.h:24 */
	void Schema_CompileTimeVerificationFunction(CNodeConnection* );
	/* ./animgraph/animnodebase.h:24 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ./animgraph/animnodebase.h:24 */
	const char* Schema_StaticClassname(void);
	/* ./animgraph/animnodebase.h:24 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CNodeConnection* );
	/* ./animgraph/animnodebase.h:25 */
	CNodeConnection* KV3TransferAllocateClassInstance(const char* );
	/* ./animgraph/animnodebase.h:25 */
	void KV3TransferSave(const CNodeConnection* , CKV3TransferSaveContext* );
	/* ./animgraph/animnodebase.h:25 */
	void KV3TransferLoad(CNodeConnection* , CKV3TransferLoadContext* );
	/* ./animgraph/animnodebase.h:25 */
	void KV3TransferSave_CNodeConnection(const CNodeConnection* , CKV3TransferSaveContext* );
	/* ./animgraph/animnodebase.h:25 */
	void KV3TransferLoad_CNodeConnection(CNodeConnection* , CKV3TransferLoadContext* );
	AnimNodeID m_nodeID; /* 0 4 */
	AnimOutputID m_outputID; /* 4 4 */
	CNodeConnection& operator=(CNodeConnection* , const CNodeConnection& );
	void CNodeConnection(CNodeConnection* );
};

// <0033F54B> ./animgraph/animnodebase.h:24
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

