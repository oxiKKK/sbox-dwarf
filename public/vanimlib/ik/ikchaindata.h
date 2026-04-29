
//
// public/vanimlib/ik/ikchaindata.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//	structs: 6
//

// <0331D6FD> ../public/vanimlib/ik/ikchaindata.h:12
inline void AttachmentNameAndIndex_t::operator=(const AttachmentNameAndIndex_t &)
{
} /* size: 0 */

// <032D0326> ../public/vanimlib/ik/ikchaindata.h:12
void AttachmentNameAndIndex_t::~AttachmentNameAndIndex_t()
{
} /* size: 0 */

// <032D030A> ../public/vanimlib/ik/ikchaindata.h:12
inline void AttachmentNameAndIndex_t::~AttachmentNameAndIndex_t()
{
} /* size: 0 */

// <0004676E> ../public/vanimlib/ik/ikchaindata.h:12
// member functions: 14
// member variables: 2
// static member variable: 1
// struct size: 144
struct AttachmentNameAndIndex_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	AttachmentNameAndIndex_t* Schema_MarkHelperFn(void);
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	void Schema_CompileTimeVerificationFunction(AttachmentNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	const char* Schema_StaticClassname(void);
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AttachmentNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikchaindata.h:17 */
	void KV3TransferSave(const AttachmentNameAndIndex_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikchaindata.h:18 */
	void KV3TransferLoad(AttachmentNameAndIndex_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikchaindata.h:19 */
	void AttachmentNameAndIndex_t(AttachmentNameAndIndex_t* , const CUtlString& );
	/* ../public/vanimlib/ik/ikchaindata.h:23 */
	void AttachmentNameAndIndex_t(AttachmentNameAndIndex_t* , const AttachmentNameAndIndex_t& );
	/* ../public/vanimlib/ik/ikchaindata.h:28 */
	void AttachmentNameAndIndex_t(AttachmentNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikchaindata.h:31 */
	bool Resolve(AttachmentNameAndIndex_t* , const CModel* );
	CUtlString m_Name; /* 0 8 */
	CAnimAttachment m_Attachment __attribute__((__aligned__(16))); /* 16 128 */
} __attribute__((__aligned__(16)));

// <00B33049> ../public/vanimlib/ik/ikchaindata.h:12
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 144
struct AttachmentNameAndIndex_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	AttachmentNameAndIndex_t* Schema_MarkHelperFn(void);
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	void Schema_CompileTimeVerificationFunction(AttachmentNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	const char* Schema_StaticClassname(void);
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AttachmentNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikchaindata.h:17 */
	void KV3TransferSave(const AttachmentNameAndIndex_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikchaindata.h:18 */
	void KV3TransferLoad(AttachmentNameAndIndex_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikchaindata.h:19 */
	void AttachmentNameAndIndex_t(AttachmentNameAndIndex_t* , const CUtlString& );
	/* ../public/vanimlib/ik/ikchaindata.h:23 */
	void AttachmentNameAndIndex_t(AttachmentNameAndIndex_t* , const AttachmentNameAndIndex_t& );
	/* ../public/vanimlib/ik/ikchaindata.h:28 */
	void AttachmentNameAndIndex_t(AttachmentNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikchaindata.h:31 */
	bool Resolve(AttachmentNameAndIndex_t* , const CModel* );
	CUtlString m_Name; /* 0 8 */
	CAnimAttachment m_Attachment __attribute__((__aligned__(16))); /* 16 128 */
	void ~AttachmentNameAndIndex_t(AttachmentNameAndIndex_t* );
} __attribute__((__aligned__(16)));

// <03315AB8> ../public/vanimlib/ik/ikchaindata.h:12
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 144
struct AttachmentNameAndIndex_t {
	/* ../public/vanimlib/ik/ikchaindata.h:14 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	AttachmentNameAndIndex_t* Schema_MarkHelperFn(void);
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	void Schema_CompileTimeVerificationFunction(AttachmentNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	const char* Schema_StaticClassname(void);
	/* ../public/vanimlib/ik/ikchaindata.h:15 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AttachmentNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikchaindata.h:17 */
	void KV3TransferSave(const AttachmentNameAndIndex_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikchaindata.h:18 */
	void KV3TransferLoad(AttachmentNameAndIndex_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikchaindata.h:19 */
	void AttachmentNameAndIndex_t(AttachmentNameAndIndex_t* , const CUtlString& );
	/* ../public/vanimlib/ik/ikchaindata.h:23 */
	void AttachmentNameAndIndex_t(AttachmentNameAndIndex_t* , const AttachmentNameAndIndex_t& );
	/* ../public/vanimlib/ik/ikchaindata.h:28 */
	void AttachmentNameAndIndex_t(AttachmentNameAndIndex_t* );
	/* ../public/vanimlib/ik/ikchaindata.h:31 */
	bool Resolve(AttachmentNameAndIndex_t* , const CModel* );
	CUtlString m_Name; /* 0 8 */
	CAnimAttachment m_Attachment __attribute__((__aligned__(16))); /* 16 128 */
	AttachmentNameAndIndex_t& operator=(AttachmentNameAndIndex_t* , const AttachmentNameAndIndex_t& );
} __attribute__((__aligned__(16)));

// <03324CBF> ../public/vanimlib/ik/ikchaindata.h:23
void AttachmentNameAndIndex_t::AttachmentNameAndIndex_t(const AttachmentNameAndIndex_t& kRhs)
{
} /* size: 0 */

// <03324C9A> ../public/vanimlib/ik/ikchaindata.h:23
inline void AttachmentNameAndIndex_t::AttachmentNameAndIndex_t(const AttachmentNameAndIndex_t& kRhs)
{
} /* size: 0 */

// <03324C83> ../public/vanimlib/ik/ikchaindata.h:28
void AttachmentNameAndIndex_t::AttachmentNameAndIndex_t()
{
} /* size: 0 */

// <03324C6A> ../public/vanimlib/ik/ikchaindata.h:28
inline void AttachmentNameAndIndex_t::AttachmentNameAndIndex_t()
{
} /* size: 0 */

// <032D028D> ../public/vanimlib/ik/ikchaindata.h:38
void CIKChainData_t::~CIKChainData_t()
{
} /* size: 0 */

// <032D0271> ../public/vanimlib/ik/ikchaindata.h:38
inline void CIKChainData_t::~CIKChainData_t()
{
} /* size: 0 */

// <0004694A> ../public/vanimlib/ik/ikchaindata.h:38
// member functions: 8
// member variables: 8
// struct size: 320
struct CIKChainData_t {
	/* ../public/vanimlib/ik/ikchaindata.h:41 */
	void KV3TransferSave(const CIKChainData_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikchaindata.h:42 */
	void KV3TransferLoad(CIKChainData_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikchaindata.h:44 */
	void CIKChainData_t(CIKChainData_t* );
	/* ../public/vanimlib/ik/ikchaindata.h:45 */
	void CIKChainData_t(CIKChainData_t* , const CIKChainData_t& );
	/* ../public/vanimlib/ik/ikchaindata.h:46 */
	void operator=(CIKChainData_t* , const CIKChainData_t& );
	/* ../public/vanimlib/ik/ikchaindata.h:48 */
	bool Initialize(CIKChainData_t* , const CModel* , const CSpaceAgnosticBoneAccessor& );
	/* ../public/vanimlib/ik/ikchaindata.h:49 */
	void VerifyChain(const CIKChainData_t* , const IPoseAccessor* , bool);
	/* ../public/vanimlib/ik/ikchaindata.h:52 */
	const CIKChainJointData_t* GetEndEffectorJoint(const CIKChainData_t* );
	CUtlString m_Name; /* 0 8 */
	CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> > m_Joints; /* 8 32 */
	CIKChainJointData_t m_ParentJoint; /* 40 64 */
	AttachmentNameAndIndex_t m_EndEffectorFixedOffsetAttachment __attribute__((__aligned__(16))); /* 112 144 */
	bool m_bDoBonesOrientAlongPositiveX; /* 256 1 */
	IKSolverSettings_t m_DefaultSolverSettings; /* 260 8 */
	IKTargetSettings_t m_DefaultTargetSettings; /* 272 32 */
	bool m_bParentJointRequiresAlignment; /* 304 1 */
} __attribute__((__aligned__(16)));

// <00B33244> ../public/vanimlib/ik/ikchaindata.h:38
// member functions: 9
// member variables: 8
// struct size: 320
struct CIKChainData_t {
	/* ../public/vanimlib/ik/ikchaindata.h:41 */
	void KV3TransferSave(const CIKChainData_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikchaindata.h:42 */
	void KV3TransferLoad(CIKChainData_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikchaindata.h:44 */
	void CIKChainData_t(CIKChainData_t* );
	/* ../public/vanimlib/ik/ikchaindata.h:45 */
	void CIKChainData_t(CIKChainData_t* , const CIKChainData_t& );
	/* ../public/vanimlib/ik/ikchaindata.h:46 */
	void operator=(CIKChainData_t* , const CIKChainData_t& );
	/* ../public/vanimlib/ik/ikchaindata.h:48 */
	bool Initialize(CIKChainData_t* , const CModel* , const CSpaceAgnosticBoneAccessor& );
	/* ../public/vanimlib/ik/ikchaindata.h:49 */
	void VerifyChain(const CIKChainData_t* , const IPoseAccessor* , bool);
	/* ../public/vanimlib/ik/ikchaindata.h:52 */
	const CIKChainJointData_t* GetEndEffectorJoint(const CIKChainData_t* );
	CUtlString m_Name; /* 0 8 */
	CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> > m_Joints; /* 8 32 */
	CIKChainJointData_t m_ParentJoint; /* 40 64 */
	AttachmentNameAndIndex_t m_EndEffectorFixedOffsetAttachment __attribute__((__aligned__(16))); /* 112 144 */
	bool m_bDoBonesOrientAlongPositiveX; /* 256 1 */
	IKSolverSettings_t m_DefaultSolverSettings; /* 260 8 */
	IKTargetSettings_t m_DefaultTargetSettings; /* 272 32 */
	bool m_bParentJointRequiresAlignment; /* 304 1 */
	void ~CIKChainData_t(CIKChainData_t* );
} __attribute__((__aligned__(16)));

// <032CC21A> ../public/vanimlib/ik/ikchaindata.h:38
// member functions: 9
// member variables: 8
// struct size: 320
struct CIKChainData_t {
	/* ../public/vanimlib/ik/ikchaindata.h:40 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
	/* ../public/vanimlib/ik/ikchaindata.h:41 */
	void KV3TransferSave(const CIKChainData_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikchaindata.h:42 */
	void KV3TransferLoad(CIKChainData_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikchaindata.h:44 */
	void CIKChainData_t(CIKChainData_t* );
	/* ../public/vanimlib/ik/ikchaindata.h:45 */
	void CIKChainData_t(CIKChainData_t* , const CIKChainData_t& );
	/* ../public/vanimlib/ik/ikchaindata.h:46 */
	void operator=(CIKChainData_t* , const CIKChainData_t& );
	/* ../public/vanimlib/ik/ikchaindata.h:48 */
	bool Initialize(CIKChainData_t* , const CModel* , const CSpaceAgnosticBoneAccessor& );
	/* ../public/vanimlib/ik/ikchaindata.h:49 */
	void VerifyChain(const CIKChainData_t* , const IPoseAccessor* , bool);
	/* ../public/vanimlib/ik/ikchaindata.h:52 */
	const CIKChainJointData_t* GetEndEffectorJoint(const CIKChainData_t* );
	CUtlString m_Name; /* 0 8 */
	CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> > m_Joints; /* 8 32 */
	CIKChainJointData_t m_ParentJoint; /* 40 64 */
	AttachmentNameAndIndex_t m_EndEffectorFixedOffsetAttachment __attribute__((__aligned__(16))); /* 112 144 */
	bool m_bDoBonesOrientAlongPositiveX; /* 256 1 */
	IKSolverSettings_t m_DefaultSolverSettings; /* 260 8 */
	IKTargetSettings_t m_DefaultTargetSettings; /* 272 32 */
	bool m_bParentJointRequiresAlignment; /* 304 1 */
	void ~CIKChainData_t(CIKChainData_t* );
} __attribute__((__aligned__(16)));

// <032CF932> ../public/vanimlib/ik/ikchaindata.h:44
void CIKChainData_t::CIKChainData_t()
{
} /* size: 0 */

// <01B4FB07> ../public/vanimlib/ik/ikchaindata.h:52
inline void CIKChainData_t::GetEndEffectorJoint()
{
} /* size: 0 */

