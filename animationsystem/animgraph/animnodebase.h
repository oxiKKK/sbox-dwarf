
//
// animationsystem/animgraph/animnodebase.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 17
//	structs: 2
//

// <0085B675> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:22
inline void CNodeConnection::operator=(const CNodeConnection &)
{
} /* size: 0 */

// <005A4E81> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:22
void CNodeConnection::CNodeConnection(const CNodeConnection &)
{
} /* size: 0 */

// <005A4E60> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:22
inline void CNodeConnection::CNodeConnection(const CNodeConnection &)
{
} /* size: 0 */

// <00597254> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:22
void CNodeConnection::CNodeConnection()
{
} /* size: 0 */

// <00597238> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:22
inline void CNodeConnection::CNodeConnection()
{
} /* size: 0 */

// <00495AF6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:22
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 8
struct CNodeConnection {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:25 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24 */
	CNodeConnection* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24 */
	void Schema_CompileTimeVerificationFunction(CNodeConnection* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CNodeConnection* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:25 */
	CNodeConnection* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:25 */
	void KV3TransferSave(const CNodeConnection* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:25 */
	void KV3TransferLoad(CNodeConnection* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:25 */
	void KV3TransferSave_CNodeConnection(const CNodeConnection* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:25 */
	void KV3TransferLoad_CNodeConnection(CNodeConnection* , CKV3TransferLoadContext* );
	AnimNodeID m_nodeID; /* 0 4 */
	AnimOutputID m_outputID; /* 4 4 */
	void CNodeConnection(CNodeConnection* , const CNodeConnection& );
	void CNodeConnection(CNodeConnection* );
	CNodeConnection& operator=(CNodeConnection* , const CNodeConnection& );
};

// <0062A99D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:22
// member functions: 14
// member variables: 2
// static member variable: 1
// struct size: 8
struct CNodeConnection {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:25 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24 */
	CNodeConnection* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24 */
	void Schema_CompileTimeVerificationFunction(CNodeConnection* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CNodeConnection* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:25 */
	CNodeConnection* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:25 */
	void KV3TransferSave(const CNodeConnection* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:25 */
	void KV3TransferLoad(CNodeConnection* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:25 */
	void KV3TransferSave_CNodeConnection(const CNodeConnection* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:25 */
	void KV3TransferLoad_CNodeConnection(CNodeConnection* , CKV3TransferLoadContext* );
	AnimNodeID m_nodeID; /* 0 4 */
	AnimOutputID m_outputID; /* 4 4 */
	CNodeConnection& operator=(CNodeConnection* , const CNodeConnection& );
};

// <00512709> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <00512703> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <005126EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:24
inline void CNodeConnection::Schema_DynamicBinding()
{
} /* size: 0 */

// <00644328> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:35
inline void CAnimNodeBase::operator=(const CAnimNodeBase &)
{
} /* size: 0 */

// <00644273> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:35
void CAnimNodeBase::~CAnimNodeBase()
{
} /* size: 0 */

// <00644240> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:35
inline void CAnimNodeBase::~CAnimNodeBase()
{
} /* size: 0 */

// <005EB064> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:35
// function calls: 25
void CAnimNodeBase::operator=(const CAnimNodeBase &)
{
	CMutableRefCountBase<true, CRefMT>::operator=(
			const CMutableRefCountBase<true, CRefMT>  &);  // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::operator=(
			const CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >  &);  // 35
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphContext>(CAnimGraphContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 370
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			CAnimGraphContext* pObj);  // 406
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphContext, CRefCountAccessor>& other);  // 35
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 35
	Vector2D::operator=(
			const Vector2D& vOther);  // 35
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 35
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 35
} /* size: 219, inline expansions: 25 (417 bytes) */

// <0064446D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:38
void GetPrimaryBinding(void)
{
} /* size: 0 */

// <00644455> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:38
void CAnimNodeBase::Schema_DynamicBinding()
{
} /* size: 0 */

// <0044066E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:38
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <00440645> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:39
inline void KV3TransferPolymorphicClassname(const CAnimNodeBase* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <0044062E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../animationsystem/animgraph/animnodebase.h:39
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */

