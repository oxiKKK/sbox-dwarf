
//
// public/modellib/boneconstraints.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 132
//	classes: 11
//	structs: 8
//

// <053ED10B> ../public/modellib/boneconstraints.h:42
void CConstraintTarget::CConstraintTarget()
{
} /* size: 0 */

// <053ED0EF> ../public/modellib/boneconstraints.h:42
inline void CConstraintTarget::CConstraintTarget()
{
} /* size: 0 */

// <053E99F3> ../public/modellib/boneconstraints.h:42
void CConstraintTarget::~CConstraintTarget()
{
} /* size: 0 */

// <053E99D7> ../public/modellib/boneconstraints.h:42
inline void CConstraintTarget::~CConstraintTarget()
{
} /* size: 0 */

// <052A2408> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:42
inline void CConstraintTarget::operator=(const CConstraintTarget &)
{
} /* size: 0 */

// <04B43CE0> ../public/modellib/boneconstraints.h:42
// member functions: 18
// member variables: 11
// static member variable: 1
// struct size: 112
struct CConstraintTarget {
	/* ../public/modellib/boneconstraints.h:58 */
	enum TargetType_t {
		TARGET_TYPE_BONE = 0,
		TARGET_TYPE_BONE_ZERO_OFFSET = 1,
		TARGET_TYPE_ATTACHMENT = 2,
		TARGET_TYPE_NONE = 3,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/boneconstraints.h:44 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/boneconstraints.h:44 */
	CConstraintTarget* Schema_MarkHelperFn(void);
	/* ../public/modellib/boneconstraints.h:44 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/boneconstraints.h:44 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/boneconstraints.h:44 */
	void Schema_CompileTimeVerificationFunction(CConstraintTarget* );
	/* ../public/modellib/boneconstraints.h:44 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/boneconstraints.h:44 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/boneconstraints.h:44 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CConstraintTarget* );
	/* ../public/modellib/boneconstraints.h:45 */
	CConstraintTarget* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/boneconstraints.h:45 */
	void KV3TransferSave(const CConstraintTarget* , CKV3TransferSaveContext* );
	/* ../public/modellib/boneconstraints.h:45 */
	void KV3TransferLoad(CConstraintTarget* , CKV3TransferLoadContext* );
	/* ../public/modellib/boneconstraints.h:45 */
	void KV3TransferSave_CConstraintTarget(const CConstraintTarget* , CKV3TransferSaveContext* );
	/* ../public/modellib/boneconstraints.h:45 */
	void KV3TransferLoad_CConstraintTarget(CConstraintTarget* , CKV3TransferLoadContext* );
	uint32 m_nBoneHash; /* 0 4 */
	float m_flWeight; /* 4 4 */
	Vector m_vOffset; /* 8 12 */
	Quaternion m_qOffset; /* 20 16 */
	bool m_bIsAttachment; /* 36 1 */
	CUtlString m_sName; /* 40 8 */
	int m_nBoneIndex; /* 48 4 */
	AttachmentHandle_t m_hAttachment; /* 52 1 */
	CTransform m_mOffset __attribute__((__aligned__(16))); /* 64 32 */
	TargetType_t m_eTargetType; /* 96 4 */
	bool m_bIsValid; /* 100 1 */
	/* ../public/modellib/boneconstraints.h:70 */
	bool Finalize(CConstraintTarget* , const CModel* );
	/* ../public/modellib/boneconstraints.h:72 */
	bool IsValid(const CConstraintTarget* );
	/* ../public/modellib/boneconstraints.h:74 */
	void AppendBoneIndices(const CConstraintTarget* , const CModel* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/modellib/boneconstraints.h:76 */
	float AddWeightedTargetPosition(const CConstraintTarget* , const CModel* , const CTransform* , Vector* );
	/* ../public/modellib/boneconstraints.h:78 */
	float ComputeTargetMatrix(const CConstraintTarget* , const CModel* , const CTransform* , CTransform* );
} __attribute__((__aligned__(16)));

// <04F2C19E> ../public/modellib/boneconstraints.h:42
// member functions: 21
// member variables: 11
// static member variable: 1
// struct size: 112
struct CConstraintTarget {
	/* ../public/modellib/boneconstraints.h:58 */
	enum TargetType_t {
		TARGET_TYPE_BONE = 0,
		TARGET_TYPE_BONE_ZERO_OFFSET = 1,
		TARGET_TYPE_ATTACHMENT = 2,
		TARGET_TYPE_NONE = 3,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/boneconstraints.h:44 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/boneconstraints.h:44 */
	CConstraintTarget* Schema_MarkHelperFn(void);
	/* ../public/modellib/boneconstraints.h:44 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/boneconstraints.h:44 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/boneconstraints.h:44 */
	void Schema_CompileTimeVerificationFunction(CConstraintTarget* );
	/* ../public/modellib/boneconstraints.h:44 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/boneconstraints.h:44 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/boneconstraints.h:44 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CConstraintTarget* );
	/* ../public/modellib/boneconstraints.h:45 */
	CConstraintTarget* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/boneconstraints.h:45 */
	void KV3TransferSave(const CConstraintTarget* , CKV3TransferSaveContext* );
	/* ../public/modellib/boneconstraints.h:45 */
	void KV3TransferLoad(CConstraintTarget* , CKV3TransferLoadContext* );
	/* ../public/modellib/boneconstraints.h:45 */
	void KV3TransferSave_CConstraintTarget(const CConstraintTarget* , CKV3TransferSaveContext* );
	/* ../public/modellib/boneconstraints.h:45 */
	void KV3TransferLoad_CConstraintTarget(CConstraintTarget* , CKV3TransferLoadContext* );
	uint32 m_nBoneHash; /* 0 4 */
	float m_flWeight; /* 4 4 */
	Vector m_vOffset; /* 8 12 */
	Quaternion m_qOffset; /* 20 16 */
	bool m_bIsAttachment; /* 36 1 */
	CUtlString m_sName; /* 40 8 */
	int m_nBoneIndex; /* 48 4 */
	AttachmentHandle_t m_hAttachment; /* 52 1 */
	CTransform m_mOffset __attribute__((__aligned__(16))); /* 64 32 */
	TargetType_t m_eTargetType; /* 96 4 */
	bool m_bIsValid; /* 100 1 */
	/* ../public/modellib/boneconstraints.h:70 */
	bool Finalize(CConstraintTarget* , const CModel* );
	/* ../public/modellib/boneconstraints.h:72 */
	bool IsValid(const CConstraintTarget* );
	/* ../public/modellib/boneconstraints.h:74 */
	void AppendBoneIndices(const CConstraintTarget* , const CModel* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/modellib/boneconstraints.h:76 */
	float AddWeightedTargetPosition(const CConstraintTarget* , const CModel* , const CTransform* , Vector* );
	/* ../public/modellib/boneconstraints.h:78 */
	float ComputeTargetMatrix(const CConstraintTarget* , const CModel* , const CTransform* , CTransform* );
	CConstraintTarget& operator=(CConstraintTarget* , const CConstraintTarget& );
	void ~CConstraintTarget(CConstraintTarget* );
	void CConstraintTarget(CConstraintTarget* );
} __attribute__((__aligned__(16)));

// <0526EF97> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:42
// member functions: 21
// member variables: 11
// static member variable: 1
// struct size: 112
struct CConstraintTarget {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:45 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:58 */
	enum TargetType_t {
		TARGET_TYPE_BONE = 0,
		TARGET_TYPE_BONE_ZERO_OFFSET = 1,
		TARGET_TYPE_ATTACHMENT = 2,
		TARGET_TYPE_NONE = 3,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:44 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:44 */
	CConstraintTarget* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:44 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:44 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:44 */
	void Schema_CompileTimeVerificationFunction(CConstraintTarget* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:44 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:44 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:44 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CConstraintTarget* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:45 */
	CConstraintTarget* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:45 */
	void KV3TransferSave(const CConstraintTarget* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:45 */
	void KV3TransferLoad(CConstraintTarget* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:45 */
	void KV3TransferSave_CConstraintTarget(const CConstraintTarget* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:45 */
	void KV3TransferLoad_CConstraintTarget(CConstraintTarget* , CKV3TransferLoadContext* );
	uint32 m_nBoneHash; /* 0 4 */
	float m_flWeight; /* 4 4 */
	Vector m_vOffset; /* 8 12 */
	Quaternion m_qOffset; /* 20 16 */
	bool m_bIsAttachment; /* 36 1 */
	CUtlString m_sName; /* 40 8 */
	int m_nBoneIndex; /* 48 4 */
	AttachmentHandle_t m_hAttachment; /* 52 1 */
	CTransform m_mOffset __attribute__((__aligned__(16))); /* 64 32 */
	TargetType_t m_eTargetType; /* 96 4 */
	bool m_bIsValid; /* 100 1 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:70 */
	bool Finalize(CConstraintTarget* , const CModel* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:72 */
	bool IsValid(const CConstraintTarget* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:74 */
	void AppendBoneIndices(const CConstraintTarget* , const CModel* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:76 */
	float AddWeightedTargetPosition(const CConstraintTarget* , const CModel* , const CTransform* , Vector* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:78 */
	float ComputeTargetMatrix(const CConstraintTarget* , const CModel* , const CTransform* , CTransform* );
	void ~CConstraintTarget(CConstraintTarget* );
	void CConstraintTarget(CConstraintTarget* );
	CConstraintTarget& operator=(CConstraintTarget* , const CConstraintTarget& );
} __attribute__((__aligned__(16)));

// <053CDE20> ../public/modellib/boneconstraints.h:42
// member functions: 20
// member variables: 11
// static member variable: 1
// struct size: 112
struct CConstraintTarget {
	/* ../public/modellib/boneconstraints.h:58 */
	enum TargetType_t {
		TARGET_TYPE_BONE = 0,
		TARGET_TYPE_BONE_ZERO_OFFSET = 1,
		TARGET_TYPE_ATTACHMENT = 2,
		TARGET_TYPE_NONE = 3,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/boneconstraints.h:44 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/boneconstraints.h:44 */
	CConstraintTarget* Schema_MarkHelperFn(void);
	/* ../public/modellib/boneconstraints.h:44 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/boneconstraints.h:44 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/boneconstraints.h:44 */
	void Schema_CompileTimeVerificationFunction(CConstraintTarget* );
	/* ../public/modellib/boneconstraints.h:44 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/boneconstraints.h:44 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/boneconstraints.h:44 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CConstraintTarget* );
	/* ../public/modellib/boneconstraints.h:45 */
	CConstraintTarget* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/boneconstraints.h:45 */
	void KV3TransferSave(const CConstraintTarget* , CKV3TransferSaveContext* );
	/* ../public/modellib/boneconstraints.h:45 */
	void KV3TransferLoad(CConstraintTarget* , CKV3TransferLoadContext* );
	/* ../public/modellib/boneconstraints.h:45 */
	void KV3TransferSave_CConstraintTarget(const CConstraintTarget* , CKV3TransferSaveContext* );
	/* ../public/modellib/boneconstraints.h:45 */
	void KV3TransferLoad_CConstraintTarget(CConstraintTarget* , CKV3TransferLoadContext* );
	uint32 m_nBoneHash; /* 0 4 */
	float m_flWeight; /* 4 4 */
	Vector m_vOffset; /* 8 12 */
	Quaternion m_qOffset; /* 20 16 */
	bool m_bIsAttachment; /* 36 1 */
	CUtlString m_sName; /* 40 8 */
	int m_nBoneIndex; /* 48 4 */
	AttachmentHandle_t m_hAttachment; /* 52 1 */
	CTransform m_mOffset __attribute__((__aligned__(16))); /* 64 32 */
	TargetType_t m_eTargetType; /* 96 4 */
	bool m_bIsValid; /* 100 1 */
	/* ../public/modellib/boneconstraints.h:70 */
	bool Finalize(CConstraintTarget* , const CModel* );
	/* ../public/modellib/boneconstraints.h:72 */
	bool IsValid(const CConstraintTarget* );
	/* ../public/modellib/boneconstraints.h:74 */
	void AppendBoneIndices(const CConstraintTarget* , const CModel* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/modellib/boneconstraints.h:76 */
	float AddWeightedTargetPosition(const CConstraintTarget* , const CModel* , const CTransform* , Vector* );
	/* ../public/modellib/boneconstraints.h:78 */
	float ComputeTargetMatrix(const CConstraintTarget* , const CModel* , const CTransform* , CTransform* );
	void ~CConstraintTarget(CConstraintTarget* );
	void CConstraintTarget(CConstraintTarget* );
} __attribute__((__aligned__(16)));

// <052A2C6B> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:44
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <052A2C65> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:44
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <052A2C4C> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:44
inline void CConstraintTarget::Schema_DynamicBinding()
{
} /* size: 0 */

// <05418FF8> ../public/modellib/boneconstraints.h:72
inline void CConstraintTarget::IsValid()
{
} /* size: 0 */

// <053ED1F1> ../public/modellib/boneconstraints.h:83
void CConstraintSlave::CConstraintSlave()
{
} /* size: 0 */

// <053ED1D5> ../public/modellib/boneconstraints.h:83
inline void CConstraintSlave::CConstraintSlave()
{
} /* size: 0 */

// <053EBCEB> ../public/modellib/boneconstraints.h:83
void CConstraintSlave::~CConstraintSlave()
{
} /* size: 0 */

// <053EBCCF> ../public/modellib/boneconstraints.h:83
inline void CConstraintSlave::~CConstraintSlave()
{
} /* size: 0 */

// <0529E9DF> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:83
inline void CConstraintSlave::operator=(const CConstraintSlave &)
{
} /* size: 0 */

// <04B44016> ../public/modellib/boneconstraints.h:83
// member functions: 18
// member variables: 10
// static member variable: 1
// struct size: 88
struct CConstraintSlave {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/boneconstraints.h:85 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/boneconstraints.h:85 */
	CConstraintSlave* Schema_MarkHelperFn(void);
	/* ../public/modellib/boneconstraints.h:85 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/boneconstraints.h:85 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/boneconstraints.h:85 */
	void Schema_CompileTimeVerificationFunction(CConstraintSlave* );
	/* ../public/modellib/boneconstraints.h:85 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/boneconstraints.h:85 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/boneconstraints.h:85 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CConstraintSlave* );
	/* ../public/modellib/boneconstraints.h:86 */
	CConstraintSlave* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/boneconstraints.h:86 */
	void KV3TransferSave(const CConstraintSlave* , CKV3TransferSaveContext* );
	/* ../public/modellib/boneconstraints.h:86 */
	void KV3TransferLoad(CConstraintSlave* , CKV3TransferLoadContext* );
	/* ../public/modellib/boneconstraints.h:86 */
	void KV3TransferSave_CConstraintSlave(const CConstraintSlave* , CKV3TransferSaveContext* );
	/* ../public/modellib/boneconstraints.h:86 */
	void KV3TransferLoad_CConstraintSlave(CConstraintSlave* , CKV3TransferLoadContext* );
	uint32 m_nBoneHash; /* 0 4 */
	float m_flWeight; /* 4 4 */
	Vector m_vBasePosition; /* 8 12 */
	Quaternion m_qBaseOrientation; /* 20 16 */
	CUtlString m_sName; /* 40 8 */
	int m_nBoneIndex; /* 48 4 */
	int m_nBoneParentIndex; /* 52 4 */
	CVarBitVec m_boneSubTree; /* 56 24 */
	bool m_bLeaf; /* 80 1 */
	bool m_bValid; /* 81 1 */
	/* ../public/modellib/boneconstraints.h:101 */
	bool Finalize(CConstraintSlave* , const CModel* );
	/* ../public/modellib/boneconstraints.h:103 */
	bool IsValid(const CConstraintSlave* );
	/* ../public/modellib/boneconstraints.h:105 */
	void AppendBoneIndices(const CConstraintSlave* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/modellib/boneconstraints.h:107 */
	void SetLocalSpaceTransformAndUpdateChildren(const CConstraintSlave* , const CModel* , CTransform* , const CTransform& );
	/* ../public/modellib/boneconstraints.h:112 */
	void SetWorldSpaceTransformAndUpdateChildren(const CConstraintSlave* , const CModel* , CTransform* , const CTransform& );
};

// <04F2C52E> ../public/modellib/boneconstraints.h:83
// member functions: 21
// member variables: 10
// static member variable: 1
// struct size: 88
struct CConstraintSlave {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/boneconstraints.h:85 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/boneconstraints.h:85 */
	CConstraintSlave* Schema_MarkHelperFn(void);
	/* ../public/modellib/boneconstraints.h:85 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/boneconstraints.h:85 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/boneconstraints.h:85 */
	void Schema_CompileTimeVerificationFunction(CConstraintSlave* );
	/* ../public/modellib/boneconstraints.h:85 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/boneconstraints.h:85 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/boneconstraints.h:85 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CConstraintSlave* );
	/* ../public/modellib/boneconstraints.h:86 */
	CConstraintSlave* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/boneconstraints.h:86 */
	void KV3TransferSave(const CConstraintSlave* , CKV3TransferSaveContext* );
	/* ../public/modellib/boneconstraints.h:86 */
	void KV3TransferLoad(CConstraintSlave* , CKV3TransferLoadContext* );
	/* ../public/modellib/boneconstraints.h:86 */
	void KV3TransferSave_CConstraintSlave(const CConstraintSlave* , CKV3TransferSaveContext* );
	/* ../public/modellib/boneconstraints.h:86 */
	void KV3TransferLoad_CConstraintSlave(CConstraintSlave* , CKV3TransferLoadContext* );
	uint32 m_nBoneHash; /* 0 4 */
	float m_flWeight; /* 4 4 */
	Vector m_vBasePosition; /* 8 12 */
	Quaternion m_qBaseOrientation; /* 20 16 */
	CUtlString m_sName; /* 40 8 */
	int m_nBoneIndex; /* 48 4 */
	int m_nBoneParentIndex; /* 52 4 */
	CVarBitVec m_boneSubTree; /* 56 24 */
	bool m_bLeaf; /* 80 1 */
	bool m_bValid; /* 81 1 */
	/* ../public/modellib/boneconstraints.h:101 */
	bool Finalize(CConstraintSlave* , const CModel* );
	/* ../public/modellib/boneconstraints.h:103 */
	bool IsValid(const CConstraintSlave* );
	/* ../public/modellib/boneconstraints.h:105 */
	void AppendBoneIndices(const CConstraintSlave* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/modellib/boneconstraints.h:107 */
	void SetLocalSpaceTransformAndUpdateChildren(const CConstraintSlave* , const CModel* , CTransform* , const CTransform& );
	/* ../public/modellib/boneconstraints.h:112 */
	void SetWorldSpaceTransformAndUpdateChildren(const CConstraintSlave* , const CModel* , CTransform* , const CTransform& );
	CConstraintSlave& operator=(CConstraintSlave* , const CConstraintSlave& );
	void ~CConstraintSlave(CConstraintSlave* );
	void CConstraintSlave(CConstraintSlave* );
};

// <0526F4B1> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:83
// member functions: 21
// member variables: 10
// static member variable: 1
// struct size: 88
struct CConstraintSlave {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:86 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:86 */
	enum {
		KV3TRANSFER_IS_VIRTUAL = 0,
	};
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:86 */
	enum {
		KV3TRANSFER_IGNORE_VIRTUAL = 0,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:85 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:85 */
	CConstraintSlave* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:85 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:85 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:85 */
	void Schema_CompileTimeVerificationFunction(CConstraintSlave* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:85 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:85 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:85 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CConstraintSlave* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:86 */
	CConstraintSlave* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:86 */
	void KV3TransferSave(const CConstraintSlave* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:86 */
	void KV3TransferLoad(CConstraintSlave* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:86 */
	void KV3TransferSave_CConstraintSlave(const CConstraintSlave* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:86 */
	void KV3TransferLoad_CConstraintSlave(CConstraintSlave* , CKV3TransferLoadContext* );
	uint32 m_nBoneHash; /* 0 4 */
	float m_flWeight; /* 4 4 */
	Vector m_vBasePosition; /* 8 12 */
	Quaternion m_qBaseOrientation; /* 20 16 */
	CUtlString m_sName; /* 40 8 */
	int m_nBoneIndex; /* 48 4 */
	int m_nBoneParentIndex; /* 52 4 */
	CVarBitVec m_boneSubTree; /* 56 24 */
	bool m_bLeaf; /* 80 1 */
	bool m_bValid; /* 81 1 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:101 */
	bool Finalize(CConstraintSlave* , const CModel* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:103 */
	bool IsValid(const CConstraintSlave* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:105 */
	void AppendBoneIndices(const CConstraintSlave* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:107 */
	void SetLocalSpaceTransformAndUpdateChildren(const CConstraintSlave* , const CModel* , CTransform* , const CTransform& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:112 */
	void SetWorldSpaceTransformAndUpdateChildren(const CConstraintSlave* , const CModel* , CTransform* , const CTransform& );
	void ~CConstraintSlave(CConstraintSlave* );
	void CConstraintSlave(CConstraintSlave* );
	CConstraintSlave& operator=(CConstraintSlave* , const CConstraintSlave& );
};

// <053CE19A> ../public/modellib/boneconstraints.h:83
// member functions: 20
// member variables: 10
// static member variable: 1
// struct size: 88
struct CConstraintSlave {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/boneconstraints.h:85 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/boneconstraints.h:85 */
	CConstraintSlave* Schema_MarkHelperFn(void);
	/* ../public/modellib/boneconstraints.h:85 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/boneconstraints.h:85 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/boneconstraints.h:85 */
	void Schema_CompileTimeVerificationFunction(CConstraintSlave* );
	/* ../public/modellib/boneconstraints.h:85 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/boneconstraints.h:85 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/boneconstraints.h:85 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CConstraintSlave* );
	/* ../public/modellib/boneconstraints.h:86 */
	CConstraintSlave* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/boneconstraints.h:86 */
	void KV3TransferSave(const CConstraintSlave* , CKV3TransferSaveContext* );
	/* ../public/modellib/boneconstraints.h:86 */
	void KV3TransferLoad(CConstraintSlave* , CKV3TransferLoadContext* );
	/* ../public/modellib/boneconstraints.h:86 */
	void KV3TransferSave_CConstraintSlave(const CConstraintSlave* , CKV3TransferSaveContext* );
	/* ../public/modellib/boneconstraints.h:86 */
	void KV3TransferLoad_CConstraintSlave(CConstraintSlave* , CKV3TransferLoadContext* );
	uint32 m_nBoneHash; /* 0 4 */
	float m_flWeight; /* 4 4 */
	Vector m_vBasePosition; /* 8 12 */
	Quaternion m_qBaseOrientation; /* 20 16 */
	CUtlString m_sName; /* 40 8 */
	int m_nBoneIndex; /* 48 4 */
	int m_nBoneParentIndex; /* 52 4 */
	CVarBitVec m_boneSubTree; /* 56 24 */
	bool m_bLeaf; /* 80 1 */
	bool m_bValid; /* 81 1 */
	/* ../public/modellib/boneconstraints.h:101 */
	bool Finalize(CConstraintSlave* , const CModel* );
	/* ../public/modellib/boneconstraints.h:103 */
	bool IsValid(const CConstraintSlave* );
	/* ../public/modellib/boneconstraints.h:105 */
	void AppendBoneIndices(const CConstraintSlave* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/modellib/boneconstraints.h:107 */
	void SetLocalSpaceTransformAndUpdateChildren(const CConstraintSlave* , const CModel* , CTransform* , const CTransform& );
	/* ../public/modellib/boneconstraints.h:112 */
	void SetWorldSpaceTransformAndUpdateChildren(const CConstraintSlave* , const CModel* , CTransform* , const CTransform& );
	void ~CConstraintSlave(CConstraintSlave* );
	void CConstraintSlave(CConstraintSlave* );
};

// <052A2C27> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:85
inline void CConstraintSlave::Schema_DynamicBinding()
{
} /* size: 0 */

// <05418FDF> ../public/modellib/boneconstraints.h:103
inline void CConstraintSlave::IsValid()
{
} /* size: 0 */

// <05411EB9> ../public/modellib/boneconstraints.h:131
void CBoneConstraintBase::CBoneConstraintBase()
{
} /* size: 0 */

// <05411E9D> ../public/modellib/boneconstraints.h:131
inline void CBoneConstraintBase::CBoneConstraintBase()
{
} /* size: 0 */

// <05298606> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:131
inline void CBoneConstraintBase::operator=(const CBoneConstraintBase &)
{
} /* size: 0 */

// <0526F860> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:131
// member functions: 62
// member variables: 4
// static member variables: 2
// vtable entries: 12
// class size: 40
class CBoneConstraintBase {
	void CBoneConstraintBase(CBoneConstraintBase* , const CBoneConstraintBase& );
	void CBoneConstraintBase(CBoneConstraintBase* );
	CBoneConstraintBase& operator=(CBoneConstraintBase* , const CBoneConstraintBase& );
	int ()(void) * * _vptr.CBoneConstraintBase; /* 0 8 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:133 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:133 */
	CBoneConstraintBase* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:267 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:294 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:259 */
	void Schema_CompileTimeVerificationFunction(CBoneConstraintBase* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:133 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:133 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:133 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CBoneConstraintBase* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:134 */
	void KV3TransferPolymorphicClassname(const CBoneConstraintBase* , char& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:134 */
	CBoneConstraintBase* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:302 */
	virtual void KV3TransferSave(const CBoneConstraintBase* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:311 */
	virtual void KV3TransferLoad(CBoneConstraintBase* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:307 */
	void KV3TransferSave_CBoneConstraintBase(const CBoneConstraintBase* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:316 */
	void KV3TransferLoad_CBoneConstraintBase(CBoneConstraintBase* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:137 */
	virtual void ~CBoneConstraintBase(CBoneConstraintBase* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:139 */
	virtual BoneConstraintType_t GetConstraintType(const CBoneConstraintBase* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:141 */
	virtual const char* GetConstraintTypeName(const CBoneConstraintBase* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:143 */
	virtual BoneConstraintResult_t Compute(const CBoneConstraintBase* , const CModel* , CTransform* , float* , const uint32* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:145 */
	virtual bool Finalize(CBoneConstraintBase* , const CModel* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:147 */
	virtual int GetTargetCount(const CBoneConstraintBase* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:148 */
	virtual const CConstraintTarget* GetTarget(const CBoneConstraintBase* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:150 */
	virtual int GetFollowerCount(const CBoneConstraintBase* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:151 */
	virtual const CConstraintSlave* GetFollower(const CBoneConstraintBase* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:153 */
	bool IsFinalized(const CBoneConstraintBase* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:154 */
	bool IsValid(const CBoneConstraintBase* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:156 */
	const char* GetConstraintTypeName(BoneConstraintType_t);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:158 */
	void GetInputAndOutputBones(const CBoneConstraintBase* , const CModel* , CUtlVector<int, CUtlMemory<int, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	static const float s_flEps; /* 0 0 */
protected:
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:163 */
	virtual bool AreBonesAvailable(const CBoneConstraintBase* , const uint32* );
	CVarBitVec m_nBoneBitVec; /* 8 24 */
	bool m_bFinalized; /* 32 1 */
	bool m_bValid; /* 33 1 */
	class CBoneConstraintBase * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN19CBoneConstraintBase32KV3TransferAllocateClassInstanceEPKc */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN19CBoneConstraintBase22Schema_StaticClassnameEv */
	void CBoneConstraintBase(class CBoneConstraintBase *, const class CBoneConstraintBase  &); /* linkage=_ZN19CBoneConstraintBaseC4ERKS_ */
	void CBoneConstraintBase(class CBoneConstraintBase *); /* linkage=_ZN19CBoneConstraintBaseC4Ev */
	class CBoneConstraintBase & operator=(class CBoneConstraintBase *, const class CBoneConstraintBase  &); /* linkage=_ZN19CBoneConstraintBaseaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN19CBoneConstraintBase17GetPrimaryBindingEv */
	class CBoneConstraintBase * Schema_MarkHelperFn(void); /* linkage=_ZN19CBoneConstraintBase19Schema_MarkHelperFnEv */
	/* <52a36c7> ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:267 */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN19CBoneConstraintBase15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <52a473a> ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:294 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN19CBoneConstraintBase32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CBoneConstraintBase *); /* linkage=_ZN19CBoneConstraintBase38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN19CBoneConstraintBase20Schema_StaticBindingEv */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CBoneConstraintBase  *); /* linkage=_ZNK19CBoneConstraintBase21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CBoneConstraintBase  *, char &); /* linkage=_ZN19CBoneConstraintBase31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	/* <52a3694> ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:302 */
	virtual void KV3TransferSave(const class CBoneConstraintBase  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CBoneConstraintBase15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CBoneConstraintBase *, class CKV3TransferLoadContext *); /* linkage=_ZN19CBoneConstraintBase15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CBoneConstraintBase(const class CBoneConstraintBase  *, class CKV3TransferSaveContext *); /* linkage=_ZNK19CBoneConstraintBase35KV3TransferSave_CBoneConstraintBaseEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CBoneConstraintBase(class CBoneConstraintBase *, class CKV3TransferLoadContext *); /* linkage=_ZN19CBoneConstraintBase35KV3TransferLoad_CBoneConstraintBaseEP23CKV3TransferLoadContext */
	virtual void ~CBoneConstraintBase(class CBoneConstraintBase *); /* linkage=_ZN19CBoneConstraintBaseD4Ev */
	virtual enum BoneConstraintType_t GetConstraintType(const class CBoneConstraintBase  *); /* linkage=_ZNK19CBoneConstraintBase17GetConstraintTypeEv */
	virtual const char  * GetConstraintTypeName(const class CBoneConstraintBase  *); /* linkage=_ZNK19CBoneConstraintBase21GetConstraintTypeNameEv */
	virtual enum BoneConstraintResult_t Compute(const class CBoneConstraintBase  *, const class CModel  *, class CTransform *, float *, const uint32  *); /* linkage=_ZNK19CBoneConstraintBase7ComputeEPK6CModelP10CTransformPfPKj */
	virtual bool Finalize(class CBoneConstraintBase *, const class CModel  *); /* linkage=_ZN19CBoneConstraintBase8FinalizeEPK6CModel */
	virtual int GetTargetCount(const class CBoneConstraintBase  *); /* linkage=_ZNK19CBoneConstraintBase14GetTargetCountEv */
	virtual const class CConstraintTarget  * GetTarget(const class CBoneConstraintBase  *, int); /* linkage=_ZNK19CBoneConstraintBase9GetTargetEi */
	virtual int GetFollowerCount(const class CBoneConstraintBase  *); /* linkage=_ZNK19CBoneConstraintBase16GetFollowerCountEv */
	virtual const class CConstraintSlave  * GetFollower(const class CBoneConstraintBase  *, int); /* linkage=_ZNK19CBoneConstraintBase11GetFollowerEi */
	bool IsFinalized(const class CBoneConstraintBase  *); /* linkage=_ZNK19CBoneConstraintBase11IsFinalizedEv */
	bool IsValid(const class CBoneConstraintBase  *); /* linkage=_ZNK19CBoneConstraintBase7IsValidEv */
	/* <541bb20> modellib/boneconstraints.cpp:345 */
	const char  * GetConstraintTypeName(enum BoneConstraintType_t); /* linkage=_ZN19CBoneConstraintBase21GetConstraintTypeNameE20BoneConstraintType_t */
	void GetInputAndOutputBones(const class CBoneConstraintBase  *, const class CModel  *, class CUtlVector<int, CUtlMemory<int, int> > *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZNK19CBoneConstraintBase22GetInputAndOutputBonesEPK6CModelP10CUtlVectorIi10CUtlMemoryIiiEES7_ */
	virtual bool AreBonesAvailable(const class CBoneConstraintBase  *, const uint32  *); /* linkage=_ZNK19CBoneConstraintBase17AreBonesAvailableEPKj */
};

// <05418FAE> ../public/modellib/boneconstraints.h:133
void GetPrimaryBinding(void)
{
} /* size: 0 */

// <05418F96> ../public/modellib/boneconstraints.h:133
void CBoneConstraintBase::Schema_DynamicBinding()
{
} /* size: 0 */

// <052A2B62> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:133
// function calls: 3
void CBoneConstraintBase::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 294
	Schema_VerifyBindingIsRegistered(void); // 133
	GetPrimaryBinding(void); // 133
} /* size: 75, inline expansions: 3 (78 bytes) */

// <05411E86> ../public/modellib/boneconstraints.h:137
void CBoneConstraintBase::~CBoneConstraintBase()
{
} /* size: 0 */

// <05411E56> ../public/modellib/boneconstraints.h:137
inline void CBoneConstraintBase::~CBoneConstraintBase()
{
} /* size: 0 */

// <05418F7E> ../public/modellib/boneconstraints.h:147
void CBoneConstraintBase::GetTargetCount()
{
} /* size: 0 */

// <05418F5A> ../public/modellib/boneconstraints.h:148
void CBoneConstraintBase::GetTarget(int nTarget)
{
} /* size: 0 */

// <05418F42> ../public/modellib/boneconstraints.h:150
void CBoneConstraintBase::GetFollowerCount()
{
} /* size: 0 */

// <05418F1E> ../public/modellib/boneconstraints.h:151
void CBoneConstraintBase::GetFollower(int nFollower)
{
} /* size: 0 */

// <05418F05> ../public/modellib/boneconstraints.h:153
inline void CBoneConstraintBase::IsFinalized()
{
} /* size: 0 */

// <05418EEC> ../public/modellib/boneconstraints.h:154
inline void CBoneConstraintBase::IsValid()
{
} /* size: 0 */

// <0540B100> ../public/modellib/boneconstraints.h:174
void CBaseConstraint::~CBaseConstraint()
{
} /* size: 0 */

// <0540B0CD> ../public/modellib/boneconstraints.h:174
inline void CBaseConstraint::~CBaseConstraint()
{
} /* size: 0 */

// <052A5C80> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:174
// function calls: 47
void CBaseConstraint::operator=(const CBaseConstraint &)
{
	CBoneConstraintBase::operator=(
			const CBoneConstraintBase  &);  // 174
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 174
	Vector::operator=(
			const Vector& vOther);  // 174
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 573
	CUtlMemory<CConstraintSlave, int>::Base(); // 112
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 102
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::begin(); // 574
	CUtlMemory<CConstraintSlave, int>::Base(); // 113
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Base(); // 105
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 105
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 83
	Vector::operator=(
			const Vector& vOther);  // 83
	CConstraintSlave::operator=(
			const CConstraintSlave  &);  // 209
	UtlTraitsCopyRange<CConstraintSlave>(const CConstraintSlave* pFrom,
						const CConstraintSlave* pFromEnd,
						CConstraintSlave* pTo);  // 200
	UtlTraitsCopyRange<CConstraintSlave>(const CConstraintSlave* pFrom,
						const CConstraintSlave* pFromEnd,
						CConstraintSlave* pTo);  // 574
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::operator=(
			const CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& other);  // 565
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::operator=(
			const CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& other);  // 452
	CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::operator=(
			const CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >& src);  // 174
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 573
	CUtlMemory<CConstraintTarget, int>::Base(); // 112
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Base(); // 102
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::begin(); // 574
	CUtlMemory<CConstraintTarget, int>::Base(); // 113
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Base(); // 105
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 105
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 42
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 42
	Vector::operator=(
			const Vector& vOther);  // 42
	CConstraintTarget::operator=(
			const CConstraintTarget  &);  // 209
	UtlTraitsCopyRange<CConstraintTarget>(const CConstraintTarget* pFrom,
						const CConstraintTarget* pFromEnd,
						CConstraintTarget* pTo);  // 200
	UtlTraitsCopyRange<CConstraintTarget>(const CConstraintTarget* pFrom,
						const CConstraintTarget* pFromEnd,
						CConstraintTarget* pTo);  // 574
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::operator=(
			const CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >& other);  // 565
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::operator=(
			const CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >& other);  // 452
	CUtlVector<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::operator=(
			const CUtlVector<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >& src);  // 174
} /* size: 670, inline expansions: 47 (3171 bytes) */

// <052985E5> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:174
inline void CBaseConstraint::operator=(const CBaseConstraint &)
{
} /* size: 0 */

// <05297CA3> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:174
// variables: 2
// function calls: 42
void CBaseConstraint::~CBaseConstraint()
{
	{
		int i; // 1721
		CUtlMemory<CConstraintTarget, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 42
		CConstraintTarget::~CConstraintTarget(); // 1526
		Destruct<CConstraintTarget>(CConstraintTarget* pMemory); // 1723
	}
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::RemoveAll(); // 1798
	CUtlMemory<CConstraintTarget, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CConstraintTarget, int>::Purge(); // 903
	CUtlMemory<CConstraintTarget, int>::Purge(); // 1799
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Purge(); // 560
	ValidateAlignment<CConstraintTarget>(void); // 508
	CUtlMemory<CConstraintTarget, int>::Purge(); // 510
	CUtlMemory<CConstraintTarget, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::~CUtlVector(); // 174
	{
		int i; // 1721
		CUtlMemory<CConstraintSlave, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Element(
			int i);  // 1723
		CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
		CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
		CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
		CVarBitVec::~CVarBitVec(); // 83
		CUtlString::~CUtlString(); // 83
		CConstraintSlave::~CConstraintSlave(); // 1526
		Destruct<CConstraintSlave>(CConstraintSlave* pMemory); // 1723
	}
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::RemoveAll(); // 1798
	CUtlMemory<CConstraintSlave, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CConstraintSlave, int>::Purge(); // 903
	CUtlMemory<CConstraintSlave, int>::Purge(); // 1799
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Purge(); // 560
	ValidateAlignment<CConstraintSlave>(void); // 508
	CUtlMemory<CConstraintSlave, int>::Purge(); // 510
	CUtlMemory<CConstraintSlave, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::~CUtlVector(); // 174
	CUtlString::~CUtlString(); // 174
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
	CVarBitVec::~CVarBitVec(); // 137
	CBoneConstraintBase::~CBoneConstraintBase(); // 174
} /* size: 313, inline expansions: 27 (1033 bytes) */

// <0526FD19> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:174
// member functions: 66
// member variables: 5
// static member variable: 1
// vtable entries: 11
// class size: 128
class CBaseConstraint : public CBoneConstraintBase {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:177 */
	enum {
		KV3TRANSFER_IS_VIRTUAL = 1,
	};
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:177 */
	enum {
		KV3TRANSFER_IGNORE_VIRTUAL = 0,
	};
public:
	/* class CBoneConstraintBase <ancestor>; */ /* 0 40 */
	void CBaseConstraint(CBaseConstraint* , CBaseConstraint& );
	void CBaseConstraint(CBaseConstraint* , const CBaseConstraint& );
	CBaseConstraint& operator=(CBaseConstraint* , CBaseConstraint& );
	CBaseConstraint& operator=(CBaseConstraint* , const CBaseConstraint& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:176 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:176 */
	CBaseConstraint* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:373 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:400 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:328 */
	void Schema_CompileTimeVerificationFunction(CBaseConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:176 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:176 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:176 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CBaseConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:177 */
	void KV3TransferPolymorphicClassname(const CBaseConstraint* , char& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:177 */
	CBaseConstraint* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:408 */
	virtual void KV3TransferSave(const CBaseConstraint* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:424 */
	virtual void KV3TransferLoad(CBaseConstraint* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:413 */
	void KV3TransferSave_CBaseConstraint(const CBaseConstraint* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:429 */
	void KV3TransferLoad_CBaseConstraint(CBaseConstraint* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:180 */
	void CBaseConstraint(CBaseConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:182 */
	virtual bool Finalize(CBaseConstraint* , const CModel* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:184 */
	virtual int GetTargetCount(const CBaseConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:185 */
	virtual const CConstraintTarget* GetTarget(const CBaseConstraint* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:187 */
	virtual int GetFollowerCount(const CBaseConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:188 */
	virtual const CConstraintSlave* GetFollower(const CBaseConstraint* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:190 */
	virtual void Init(CBaseConstraint* , const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:191 */
	virtual void Init(CBaseConstraint* , const char* , const Vector& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:192 */
	void AddSlave(CBaseConstraint* , uint32, float, const Vector& , const Quaternion& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:193 */
	void AddTarget(CBaseConstraint* , uint32, float, const Vector& , const Quaternion& , bool);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:195 */
	virtual bool UsesBone(const CBaseConstraint* , uint32);
	CUtlString m_name; /* 40 8 */
	Vector m_vUpVector; /* 48 12 */
	CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> > m_slaves; /* 64 32 */
	CUtlVector<CConstraintTarget, CUtlMemory<CConstraintTarget, int> > m_targets; /* 96 32 */
protected:
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:205 */
	float ComputeTargetTransform(const CBaseConstraint* , CTransform* , const CModel* , const CTransform* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:210 */
	float ComputeTargetPosition(const CBaseConstraint* , Vector* , const CModel* , const CTransform* , bool);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:216 */
	float ComputeTargetOrientation(const CBaseConstraint* , Quaternion* , const CModel* , const CTransform* );
	virtual void ~CBaseConstraint(CBaseConstraint* );
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CBaseConstraint22Schema_StaticClassnameEv */
	/* <52a4788> ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:400 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CBaseConstraint32Schema_VerifyBindingIsRegisteredEv */
	class CBaseConstraint * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CBaseConstraint32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferPolymorphicClassname(const class CBaseConstraint  *, char &); /* linkage=_ZN15CBaseConstraint31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CBaseConstraint20Schema_StaticBindingEv */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CBaseConstraint17GetPrimaryBindingEv */
	void CBaseConstraint(class CBaseConstraint *, class CBaseConstraint &); /* linkage=_ZN15CBaseConstraintC4EOS_ */
	void CBaseConstraint(class CBaseConstraint *, const class CBaseConstraint  &); /* linkage=_ZN15CBaseConstraintC4ERKS_ */
	class CBaseConstraint & operator=(class CBaseConstraint *, class CBaseConstraint &); /* linkage=_ZN15CBaseConstraintaSEOS_ */
	class CBaseConstraint & operator=(class CBaseConstraint *, const class CBaseConstraint  &); /* linkage=_ZN15CBaseConstraintaSERKS_ */
	class CBaseConstraint * Schema_MarkHelperFn(void); /* linkage=_ZN15CBaseConstraint19Schema_MarkHelperFnEv */
	/* <52a376f> ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:373 */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CBaseConstraint15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	void Schema_CompileTimeVerificationFunction(class CBaseConstraint *); /* linkage=_ZN15CBaseConstraint38Schema_CompileTimeVerificationFunctionEv */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CBaseConstraint  *); /* linkage=_ZNK15CBaseConstraint21Schema_DynamicBindingEv */
	virtual void KV3TransferSave(const class CBaseConstraint  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CBaseConstraint15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CBaseConstraint *, class CKV3TransferLoadContext *); /* linkage=_ZN15CBaseConstraint15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CBaseConstraint(const class CBaseConstraint  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CBaseConstraint31KV3TransferSave_CBaseConstraintEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CBaseConstraint(class CBaseConstraint *, class CKV3TransferLoadContext *); /* linkage=_ZN15CBaseConstraint31KV3TransferLoad_CBaseConstraintEP23CKV3TransferLoadContext */
	void CBaseConstraint(class CBaseConstraint *); /* linkage=_ZN15CBaseConstraintC4Ev */
	/* <541d3b3> modellib/boneconstraints.cpp:429 */
	virtual bool Finalize(class CBaseConstraint *, const class CModel  *); /* linkage=_ZN15CBaseConstraint8FinalizeEPK6CModel */
	virtual int GetTargetCount(const class CBaseConstraint  *); /* linkage=_ZNK15CBaseConstraint14GetTargetCountEv */
	virtual const class CConstraintTarget  * GetTarget(const class CBaseConstraint  *, int); /* linkage=_ZNK15CBaseConstraint9GetTargetEi */
	virtual int GetFollowerCount(const class CBaseConstraint  *); /* linkage=_ZNK15CBaseConstraint16GetFollowerCountEv */
	virtual const class CConstraintSlave  * GetFollower(const class CBaseConstraint  *, int); /* linkage=_ZNK15CBaseConstraint11GetFollowerEi */
	/* <541bb49> modellib/boneconstraints.cpp:461 */
	virtual void Init(class CBaseConstraint *, const char  *); /* linkage=_ZN15CBaseConstraint4InitEPKc */
	/* <541bba4> modellib/boneconstraints.cpp:468 */
	virtual void Init(class CBaseConstraint *, const char  *, const class Vector  &); /* linkage=_ZN15CBaseConstraint4InitEPKcRK6Vector */
	void AddSlave(class CBaseConstraint *, uint32, float, const class Vector  &, const class Quaternion  &); /* linkage=_ZN15CBaseConstraint8AddSlaveEjfRK6VectorRK10Quaternion */
	void AddTarget(class CBaseConstraint *, uint32, float, const class Vector  &, const class Quaternion  &, bool); /* linkage=_ZN15CBaseConstraint9AddTargetEjfRK6VectorRK10Quaternionb */
	virtual bool UsesBone(const class CBaseConstraint  *, uint32); /* linkage=_ZNK15CBaseConstraint8UsesBoneEj */
	float ComputeTargetTransform(const class CBaseConstraint  *, class CTransform *, const class CModel  *, const class CTransform  *); /* linkage=_ZNK15CBaseConstraint22ComputeTargetTransformEP10CTransformPK6CModelPKS0_ */
	/* <541bc4c> modellib/boneconstraints.cpp:568 */
	float ComputeTargetPosition(const class CBaseConstraint  *, class Vector *, const class CModel  *, const class CTransform  *, bool); /* linkage=_ZNK15CBaseConstraint21ComputeTargetPositionEP6VectorPK6CModelPK10CTransformb */
	float ComputeTargetOrientation(const class CBaseConstraint  *, class Quaternion *, const class CModel  *, const class CTransform  *); /* linkage=_ZNK15CBaseConstraint24ComputeTargetOrientationEP10QuaternionPK6CModelPK10CTransform */
	virtual void ~CBaseConstraint(class CBaseConstraint *); /* linkage=_ZN15CBaseConstraintD4Ev */
};

// <05418ECE> ../public/modellib/boneconstraints.h:176
void CBaseConstraint::Schema_DynamicBinding()
{
} /* size: 0 */

// <052A29C7> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:176
// function calls: 3
void CBaseConstraint::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 400
	Schema_VerifyBindingIsRegistered(void); // 176
	GetPrimaryBinding(void); // 176
} /* size: 75, inline expansions: 3 (78 bytes) */

// <0524A768> ../public/modellib/boneconstraints.h:176
inline void Schema_StaticBinding(void)
{
} /* size: 0 */

// <0524A73F> ../public/modellib/boneconstraints.h:177
inline void KV3TransferPolymorphicClassname(const CBaseConstraint* pObject, char& pOutPolymorphicClassName)
{
} /* size: 0 */

// <0524A728> ../public/modellib/boneconstraints.h:177
inline void KV3TransferAllocateClassInstance(const char* pDerivedClassName)
{
} /* size: 0 */

// <0527E8C4> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:180
void CBaseConstraint::CBaseConstraint()
{
} /* size: 0 */

// <05418EB6> ../public/modellib/boneconstraints.h:184
void CBaseConstraint::GetTargetCount()
{
} /* size: 0 */

// <052A2969> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:184
// function call: 1
void CBaseConstraint::GetTargetCount()
{
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::Count(); // 184
} /* size: 8, inline expansions: 1 (0 bytes) */

// <05418E92> ../public/modellib/boneconstraints.h:185
void CBaseConstraint::GetTarget(int nTarget)
{
} /* size: 0 */

// <052A28B1> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:185
// function calls: 2
void CBaseConstraint::GetTarget(int nTarget)
{
	CUtlMemory<CConstraintTarget, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >::operator[](
			int i);  // 185
} /* size: 16, inline expansions: 2 (22 bytes) */

// <05418E7A> ../public/modellib/boneconstraints.h:187
void CBaseConstraint::GetFollowerCount()
{
} /* size: 0 */

// <052A2853> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:187
// function call: 1
void CBaseConstraint::GetFollowerCount()
{
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::Count(); // 187
} /* size: 8, inline expansions: 1 (0 bytes) */

// <05418E56> ../public/modellib/boneconstraints.h:188
void CBaseConstraint::GetFollower(int nFollower)
{
} /* size: 0 */

// <052A279B> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:188
// function calls: 2
void CBaseConstraint::GetFollower(int nFollower)
{
	CUtlMemory<CConstraintSlave, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >::operator[](
			int i);  // 188
} /* size: 16, inline expansions: 2 (22 bytes) */

// <052985C4> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:225
inline void CPointConstraint::operator=(const CPointConstraint &)
{
} /* size: 0 */

// <05297C0B> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:225
void CPointConstraint::CPointConstraint()
{
} /* size: 0 */

// <05297BEF> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:225
inline void CPointConstraint::CPointConstraint()
{
} /* size: 0 */

// <05297BA5> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:225
void CPointConstraint::~CPointConstraint()
{
} /* size: 19 */

// <05297B18> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:225
// function call: 1
void CPointConstraint::~CPointConstraint()
{
	CPointConstraint::~CPointConstraint(); // 225
} /* size: 46, inline expansions: 1 (19 bytes) */

// <05297AFC> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:225
inline void CPointConstraint::~CPointConstraint()
{
} /* size: 0 */

// <052730AB> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:225
// member functions: 44
// member variable: 1
// static member variable: 1
// vtable entries: 5
// class size: 128
class CPointConstraint : public CBaseConstraint {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:228 */
	enum {
		KV3TRANSFER_IS_VIRTUAL = 1,
	};
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:228 */
	enum {
		KV3TRANSFER_IGNORE_VIRTUAL = 0,
	};
public:
	/* class CBaseConstraint <ancestor>; */ /* 0 128 */
	void CPointConstraint(CPointConstraint* , CPointConstraint& );
	void CPointConstraint(CPointConstraint* , const CPointConstraint& );
	void CPointConstraint(CPointConstraint* );
	CPointConstraint& operator=(CPointConstraint* , CPointConstraint& );
	CPointConstraint& operator=(CPointConstraint* , const CPointConstraint& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:227 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:227 */
	CPointConstraint* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:467 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:496 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:448 */
	void Schema_CompileTimeVerificationFunction(CPointConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:227 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:227 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:227 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CPointConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:228 */
	void KV3TransferPolymorphicClassname(const CPointConstraint* , char& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:228 */
	CPointConstraint* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:504 */
	virtual void KV3TransferSave(const CPointConstraint* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:516 */
	virtual void KV3TransferLoad(CPointConstraint* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:509 */
	void KV3TransferSave_CPointConstraint(const CPointConstraint* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:521 */
	void KV3TransferLoad_CPointConstraint(CPointConstraint* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:231 */
	virtual BoneConstraintType_t GetConstraintType(const CPointConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:232 */
	virtual BoneConstraintResult_t Compute(const CPointConstraint* , const CModel* , CTransform* , float* , const uint32* );
	virtual void ~CPointConstraint(CPointConstraint* );
	void CPointConstraint(class CPointConstraint *, class CPointConstraint &); /* linkage=_ZN16CPointConstraintC4EOS_ */
	void CPointConstraint(class CPointConstraint *, const class CPointConstraint  &); /* linkage=_ZN16CPointConstraintC4ERKS_ */
	void CPointConstraint(class CPointConstraint *); /* linkage=_ZN16CPointConstraintC4Ev */
	class CPointConstraint & operator=(class CPointConstraint *, class CPointConstraint &); /* linkage=_ZN16CPointConstraintaSEOS_ */
	class CPointConstraint & operator=(class CPointConstraint *, const class CPointConstraint  &); /* linkage=_ZN16CPointConstraintaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CPointConstraint17GetPrimaryBindingEv */
	class CPointConstraint * Schema_MarkHelperFn(void); /* linkage=_ZN16CPointConstraint19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CPointConstraint15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <52a47d6> ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:496 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CPointConstraint32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CPointConstraint *); /* linkage=_ZN16CPointConstraint38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CPointConstraint20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CPointConstraint22Schema_StaticClassnameEv */
	/* <52a3ea4> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:227 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CPointConstraint  *); /* linkage=_ZNK16CPointConstraint21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CPointConstraint  *, char &); /* linkage=_ZN16CPointConstraint31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CPointConstraint * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN16CPointConstraint32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CPointConstraint  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CPointConstraint15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CPointConstraint *, class CKV3TransferLoadContext *); /* linkage=_ZN16CPointConstraint15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CPointConstraint(const class CPointConstraint  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CPointConstraint32KV3TransferSave_CPointConstraintEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CPointConstraint(class CPointConstraint *, class CKV3TransferLoadContext *); /* linkage=_ZN16CPointConstraint32KV3TransferLoad_CPointConstraintEP23CKV3TransferLoadContext */
	virtual enum BoneConstraintType_t GetConstraintType(const class CPointConstraint  *); /* linkage=_ZNK16CPointConstraint17GetConstraintTypeEv */
	virtual enum BoneConstraintResult_t Compute(const class CPointConstraint  *, const class CModel  *, class CTransform *, float *, const uint32  *); /* linkage=_ZNK16CPointConstraint7ComputeEPK6CModelP10CTransformPfPKj */
	virtual void ~CPointConstraint(class CPointConstraint *); /* linkage=_ZN16CPointConstraintD4Ev */
};

// <052A3EA4> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:227
// function calls: 3
void CPointConstraint::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 496
	Schema_VerifyBindingIsRegistered(void); // 227
	GetPrimaryBinding(void); // 227
} /* size: 75, inline expansions: 3 (78 bytes) */

// <052A2776> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:227
inline void CPointConstraint::Schema_DynamicBinding()
{
} /* size: 0 */

// <05418E3E> ../public/modellib/boneconstraints.h:231
void CPointConstraint::GetConstraintType()
{
} /* size: 0 */

// <052976BB> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:239
inline void COrientConstraint::operator=(const COrientConstraint &)
{
} /* size: 0 */

// <052976A4> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:239
void COrientConstraint::COrientConstraint()
{
} /* size: 0 */

// <05297688> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:239
inline void COrientConstraint::COrientConstraint()
{
} /* size: 0 */

// <0529763E> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:239
void COrientConstraint::~COrientConstraint()
{
} /* size: 19 */

// <052975B1> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:239
// function call: 1
void COrientConstraint::~COrientConstraint()
{
	COrientConstraint::~COrientConstraint(); // 239
} /* size: 46, inline expansions: 1 (19 bytes) */

// <05297595> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:239
inline void COrientConstraint::~COrientConstraint()
{
} /* size: 0 */

// <052733CB> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:239
// member functions: 44
// member variable: 1
// static member variable: 1
// vtable entries: 5
// class size: 128
class COrientConstraint : public CBaseConstraint {
public:
	/* class CBaseConstraint <ancestor>; */ /* 0 128 */
	void COrientConstraint(COrientConstraint* , COrientConstraint& );
	void COrientConstraint(COrientConstraint* , const COrientConstraint& );
	void COrientConstraint(COrientConstraint* );
	COrientConstraint& operator=(COrientConstraint* , COrientConstraint& );
	COrientConstraint& operator=(COrientConstraint* , const COrientConstraint& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:241 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:241 */
	COrientConstraint* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:555 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:584 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:536 */
	void Schema_CompileTimeVerificationFunction(COrientConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:241 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:241 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:241 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const COrientConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:242 */
	void KV3TransferPolymorphicClassname(const COrientConstraint* , char& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:242 */
	COrientConstraint* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:592 */
	virtual void KV3TransferSave(const COrientConstraint* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:604 */
	virtual void KV3TransferLoad(COrientConstraint* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:597 */
	void KV3TransferSave_COrientConstraint(const COrientConstraint* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:609 */
	void KV3TransferLoad_COrientConstraint(COrientConstraint* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:245 */
	virtual BoneConstraintType_t GetConstraintType(const COrientConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:246 */
	virtual BoneConstraintResult_t Compute(const COrientConstraint* , const CModel* , CTransform* , float* , const uint32* );
	virtual void ~COrientConstraint(COrientConstraint* );
	void COrientConstraint(class COrientConstraint *, class COrientConstraint &); /* linkage=_ZN17COrientConstraintC4EOS_ */
	void COrientConstraint(class COrientConstraint *, const class COrientConstraint  &); /* linkage=_ZN17COrientConstraintC4ERKS_ */
	void COrientConstraint(class COrientConstraint *); /* linkage=_ZN17COrientConstraintC4Ev */
	class COrientConstraint & operator=(class COrientConstraint *, class COrientConstraint &); /* linkage=_ZN17COrientConstraintaSEOS_ */
	class COrientConstraint & operator=(class COrientConstraint *, const class COrientConstraint  &); /* linkage=_ZN17COrientConstraintaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN17COrientConstraint17GetPrimaryBindingEv */
	class COrientConstraint * Schema_MarkHelperFn(void); /* linkage=_ZN17COrientConstraint19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN17COrientConstraint15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <52a4824> ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:584 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN17COrientConstraint32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class COrientConstraint *); /* linkage=_ZN17COrientConstraint38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN17COrientConstraint20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN17COrientConstraint22Schema_StaticClassnameEv */
	/* <52a3f59> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:241 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class COrientConstraint  *); /* linkage=_ZNK17COrientConstraint21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class COrientConstraint  *, char &); /* linkage=_ZN17COrientConstraint31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class COrientConstraint * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN17COrientConstraint32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class COrientConstraint  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17COrientConstraint15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class COrientConstraint *, class CKV3TransferLoadContext *); /* linkage=_ZN17COrientConstraint15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_COrientConstraint(const class COrientConstraint  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17COrientConstraint33KV3TransferSave_COrientConstraintEP23CKV3TransferSaveContext */
	void KV3TransferLoad_COrientConstraint(class COrientConstraint *, class CKV3TransferLoadContext *); /* linkage=_ZN17COrientConstraint33KV3TransferLoad_COrientConstraintEP23CKV3TransferLoadContext */
	virtual enum BoneConstraintType_t GetConstraintType(const class COrientConstraint  *); /* linkage=_ZNK17COrientConstraint17GetConstraintTypeEv */
	virtual enum BoneConstraintResult_t Compute(const class COrientConstraint  *, const class CModel  *, class CTransform *, float *, const uint32  *); /* linkage=_ZNK17COrientConstraint7ComputeEPK6CModelP10CTransformPfPKj */
	virtual void ~COrientConstraint(class COrientConstraint *); /* linkage=_ZN17COrientConstraintD4Ev */
};

// <052A3F59> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:241
// function calls: 3
void COrientConstraint::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 584
	Schema_VerifyBindingIsRegistered(void); // 241
	GetPrimaryBinding(void); // 241
} /* size: 75, inline expansions: 3 (78 bytes) */

// <052A2723> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:241
inline void COrientConstraint::Schema_DynamicBinding()
{
} /* size: 0 */

// <05418E26> ../public/modellib/boneconstraints.h:245
void COrientConstraint::GetConstraintType()
{
} /* size: 0 */

// <05297154> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:252
inline void CAimConstraint::operator=(const CAimConstraint &)
{
} /* size: 0 */

// <0529713D> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:252
void CAimConstraint::CAimConstraint()
{
} /* size: 0 */

// <05297121> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:252
inline void CAimConstraint::CAimConstraint()
{
} /* size: 0 */

// <052970D7> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:252
void CAimConstraint::~CAimConstraint()
{
} /* size: 19 */

// <0529704A> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:252
// function call: 1
void CAimConstraint::~CAimConstraint()
{
	CAimConstraint::~CAimConstraint(); // 252
} /* size: 46, inline expansions: 1 (19 bytes) */

// <0529702E> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:252
inline void CAimConstraint::~CAimConstraint()
{
} /* size: 0 */

// <052736BF> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:252
// member functions: 46
// member variables: 3
// static member variable: 1
// vtable entries: 5
// class size: 152
class CAimConstraint : public CBaseConstraint {
public:
	/* class CBaseConstraint <ancestor>; */ /* 0 128 */
	void CAimConstraint(CAimConstraint* , CAimConstraint& );
	void CAimConstraint(CAimConstraint* , const CAimConstraint& );
	void CAimConstraint(CAimConstraint* );
	CAimConstraint& operator=(CAimConstraint* , CAimConstraint& );
	CAimConstraint& operator=(CAimConstraint* , const CAimConstraint& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:254 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:254 */
	CAimConstraint* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:663 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:692 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:624 */
	void Schema_CompileTimeVerificationFunction(CAimConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:254 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:254 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:254 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CAimConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:255 */
	void KV3TransferPolymorphicClassname(const CAimConstraint* , char& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:255 */
	CAimConstraint* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:700 */
	virtual void KV3TransferSave(const CAimConstraint* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:714 */
	virtual void KV3TransferLoad(CAimConstraint* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:705 */
	void KV3TransferSave_CAimConstraint(const CAimConstraint* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:719 */
	void KV3TransferLoad_CAimConstraint(CAimConstraint* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:258 */
	void Init(CAimConstraint* , const char* , const Quaternion& , const Vector& , uint);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:260 */
	virtual BoneConstraintType_t GetConstraintType(const CAimConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:261 */
	virtual BoneConstraintResult_t Compute(const CAimConstraint* , const CModel* , CTransform* , float* , const uint32* );
	Quaternion m_qAimOffset; /* 128 16 */
	uint m_nUpType; /* 144 4 */
	virtual void ~CAimConstraint(CAimConstraint* );
	void CAimConstraint(class CAimConstraint *, class CAimConstraint &); /* linkage=_ZN14CAimConstraintC4EOS_ */
	void CAimConstraint(class CAimConstraint *, const class CAimConstraint  &); /* linkage=_ZN14CAimConstraintC4ERKS_ */
	void CAimConstraint(class CAimConstraint *); /* linkage=_ZN14CAimConstraintC4Ev */
	class CAimConstraint & operator=(class CAimConstraint *, class CAimConstraint &); /* linkage=_ZN14CAimConstraintaSEOS_ */
	class CAimConstraint & operator=(class CAimConstraint *, const class CAimConstraint  &); /* linkage=_ZN14CAimConstraintaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN14CAimConstraint17GetPrimaryBindingEv */
	class CAimConstraint * Schema_MarkHelperFn(void); /* linkage=_ZN14CAimConstraint19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN14CAimConstraint15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <52a4872> ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:692 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN14CAimConstraint32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CAimConstraint *); /* linkage=_ZN14CAimConstraint38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN14CAimConstraint20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN14CAimConstraint22Schema_StaticClassnameEv */
	/* <52a400e> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:254 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAimConstraint  *); /* linkage=_ZNK14CAimConstraint21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CAimConstraint  *, char &); /* linkage=_ZN14CAimConstraint31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CAimConstraint * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN14CAimConstraint32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CAimConstraint  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CAimConstraint15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CAimConstraint *, class CKV3TransferLoadContext *); /* linkage=_ZN14CAimConstraint15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAimConstraint(const class CAimConstraint  *, class CKV3TransferSaveContext *); /* linkage=_ZNK14CAimConstraint30KV3TransferSave_CAimConstraintEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAimConstraint(class CAimConstraint *, class CKV3TransferLoadContext *); /* linkage=_ZN14CAimConstraint30KV3TransferLoad_CAimConstraintEP23CKV3TransferLoadContext */
	void Init(class CAimConstraint *, const char  *, const class Quaternion  &, const class Vector  &, uint); /* linkage=_ZN14CAimConstraint4InitEPKcRK10QuaternionRK6Vectorj */
	virtual enum BoneConstraintType_t GetConstraintType(const class CAimConstraint  *); /* linkage=_ZNK14CAimConstraint17GetConstraintTypeEv */
	virtual enum BoneConstraintResult_t Compute(const class CAimConstraint  *, const class CModel  *, class CTransform *, float *, const uint32  *); /* linkage=_ZNK14CAimConstraint7ComputeEPK6CModelP10CTransformPfPKj */
	virtual void ~CAimConstraint(class CAimConstraint *); /* linkage=_ZN14CAimConstraintD4Ev */
};

// <052A400E> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:254
// function calls: 3
void CAimConstraint::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 692
	Schema_VerifyBindingIsRegistered(void); // 254
	GetPrimaryBinding(void); // 254
} /* size: 75, inline expansions: 3 (78 bytes) */

// <052A26D0> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:254
inline void CAimConstraint::Schema_DynamicBinding()
{
} /* size: 0 */

// <05418E0E> ../public/modellib/boneconstraints.h:260
void CAimConstraint::GetConstraintType()
{
} /* size: 0 */

// <0529598B> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:270
inline void CTwistConstraint::operator=(const CTwistConstraint &)
{
} /* size: 0 */

// <05295974> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:270
void CTwistConstraint::CTwistConstraint()
{
} /* size: 0 */

// <05295957> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:270
inline void CTwistConstraint::CTwistConstraint()
{
} /* size: 0 */

// <0529590D> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:270
void CTwistConstraint::~CTwistConstraint()
{
} /* size: 19 */

// <0529587F> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:270
// function call: 1
void CTwistConstraint::~CTwistConstraint()
{
	CTwistConstraint::~CTwistConstraint(); // 270
} /* size: 46, inline expansions: 1 (19 bytes) */

// <05295862> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:270
inline void CTwistConstraint::~CTwistConstraint()
{
} /* size: 0 */

// <05273A09> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:270
// member functions: 46
// member variables: 4
// static member variable: 1
// vtable entries: 5
// class size: 168
class CTwistConstraint : public CBaseConstraint {
public:
	/* class CBaseConstraint <ancestor>; */ /* 0 128 */
	void CTwistConstraint(CTwistConstraint* , CTwistConstraint& );
	void CTwistConstraint(CTwistConstraint* , const CTwistConstraint& );
	void CTwistConstraint(CTwistConstraint* );
	CTwistConstraint& operator=(CTwistConstraint* , CTwistConstraint& );
	CTwistConstraint& operator=(CTwistConstraint* , const CTwistConstraint& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:272 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:272 */
	CTwistConstraint* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:778 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:807 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:736 */
	void Schema_CompileTimeVerificationFunction(CTwistConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:272 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:272 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:272 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CTwistConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:273 */
	void KV3TransferPolymorphicClassname(const CTwistConstraint* , char& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:273 */
	CTwistConstraint* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:815 */
	virtual void KV3TransferSave(const CTwistConstraint* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:830 */
	virtual void KV3TransferLoad(CTwistConstraint* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:820 */
	void KV3TransferSave_CTwistConstraint(const CTwistConstraint* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:835 */
	void KV3TransferLoad_CTwistConstraint(CTwistConstraint* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:276 */
	void Init(CTwistConstraint* , const char* , bool, const Vector& , const Quaternion& , const Quaternion& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:278 */
	virtual BoneConstraintType_t GetConstraintType(const CTwistConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:279 */
	virtual BoneConstraintResult_t Compute(const CTwistConstraint* , const CModel* , CTransform* , float* , const uint32* );
	bool m_bInverse; /* 128 1 */
	Quaternion m_qParentBindRotation; /* 132 16 */
	Quaternion m_qChildBindRotation; /* 148 16 */
	virtual void ~CTwistConstraint(CTwistConstraint* );
	void CTwistConstraint(class CTwistConstraint *, class CTwistConstraint &); /* linkage=_ZN16CTwistConstraintC4EOS_ */
	void CTwistConstraint(class CTwistConstraint *, const class CTwistConstraint  &); /* linkage=_ZN16CTwistConstraintC4ERKS_ */
	void CTwistConstraint(class CTwistConstraint *); /* linkage=_ZN16CTwistConstraintC4Ev */
	class CTwistConstraint & operator=(class CTwistConstraint *, class CTwistConstraint &); /* linkage=_ZN16CTwistConstraintaSEOS_ */
	class CTwistConstraint & operator=(class CTwistConstraint *, const class CTwistConstraint  &); /* linkage=_ZN16CTwistConstraintaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CTwistConstraint17GetPrimaryBindingEv */
	class CTwistConstraint * Schema_MarkHelperFn(void); /* linkage=_ZN16CTwistConstraint19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CTwistConstraint15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <52a48c0> ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:807 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CTwistConstraint32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CTwistConstraint *); /* linkage=_ZN16CTwistConstraint38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CTwistConstraint20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CTwistConstraint22Schema_StaticClassnameEv */
	/* <52a40c3> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:272 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CTwistConstraint  *); /* linkage=_ZNK16CTwistConstraint21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CTwistConstraint  *, char &); /* linkage=_ZN16CTwistConstraint31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CTwistConstraint * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN16CTwistConstraint32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CTwistConstraint  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CTwistConstraint15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CTwistConstraint *, class CKV3TransferLoadContext *); /* linkage=_ZN16CTwistConstraint15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CTwistConstraint(const class CTwistConstraint  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CTwistConstraint32KV3TransferSave_CTwistConstraintEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CTwistConstraint(class CTwistConstraint *, class CKV3TransferLoadContext *); /* linkage=_ZN16CTwistConstraint32KV3TransferLoad_CTwistConstraintEP23CKV3TransferLoadContext */
	void Init(class CTwistConstraint *, const char  *, bool, const class Vector  &, const class Quaternion  &, const class Quaternion  &); /* linkage=_ZN16CTwistConstraint4InitEPKcbRK6VectorRK10QuaternionS7_ */
	virtual enum BoneConstraintType_t GetConstraintType(const class CTwistConstraint  *); /* linkage=_ZNK16CTwistConstraint17GetConstraintTypeEv */
	virtual enum BoneConstraintResult_t Compute(const class CTwistConstraint  *, const class CModel  *, class CTransform *, float *, const uint32  *); /* linkage=_ZNK16CTwistConstraint7ComputeEPK6CModelP10CTransformPfPKj */
	virtual void ~CTwistConstraint(class CTwistConstraint *); /* linkage=_ZN16CTwistConstraintD4Ev */
};

// <052A40C3> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:272
// function calls: 3
void CTwistConstraint::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 807
	Schema_VerifyBindingIsRegistered(void); // 272
	GetPrimaryBinding(void); // 272
} /* size: 75, inline expansions: 3 (78 bytes) */

// <052A267D> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:272
inline void CTwistConstraint::Schema_DynamicBinding()
{
} /* size: 0 */

// <05418DF6> ../public/modellib/boneconstraints.h:278
void CTwistConstraint::GetConstraintType()
{
} /* size: 0 */

// <05293D00> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:290
inline void CTiltTwistConstraint::operator=(const CTiltTwistConstraint &)
{
} /* size: 0 */

// <05293CB6> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:290
void CTiltTwistConstraint::~CTiltTwistConstraint()
{
} /* size: 19 */

// <05293C28> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:290
// function call: 1
void CTiltTwistConstraint::~CTiltTwistConstraint()
{
	CTiltTwistConstraint::~CTiltTwistConstraint(); // 290
} /* size: 46, inline expansions: 1 (19 bytes) */

// <05293C0B> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:290
inline void CTiltTwistConstraint::~CTiltTwistConstraint()
{
} /* size: 0 */

// <05273D70> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:290
// member functions: 59
// member variables: 10
// static member variable: 1
// vtable entries: 6
// class size: 176
class CTiltTwistConstraint : public CBaseConstraint {
public:
	/* class CBaseConstraint <ancestor>; */ /* 0 128 */
	void CTiltTwistConstraint(CTiltTwistConstraint* , CTiltTwistConstraint& );
	void CTiltTwistConstraint(CTiltTwistConstraint* , const CTiltTwistConstraint& );
	CTiltTwistConstraint& operator=(CTiltTwistConstraint* , CTiltTwistConstraint& );
	CTiltTwistConstraint& operator=(CTiltTwistConstraint* , const CTiltTwistConstraint& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:294 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:294 */
	CTiltTwistConstraint* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:892 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:921 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:853 */
	void Schema_CompileTimeVerificationFunction(CTiltTwistConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:294 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:294 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:294 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CTiltTwistConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:295 */
	void KV3TransferPolymorphicClassname(const CTiltTwistConstraint* , char& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:295 */
	CTiltTwistConstraint* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:929 */
	virtual void KV3TransferSave(const CTiltTwistConstraint* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:943 */
	virtual void KV3TransferLoad(CTiltTwistConstraint* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:934 */
	void KV3TransferSave_CTiltTwistConstraint(const CTiltTwistConstraint* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:948 */
	void KV3TransferLoad_CTiltTwistConstraint(CTiltTwistConstraint* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:298 */
	void CTiltTwistConstraint(CTiltTwistConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:300 */
	void Init(CTiltTwistConstraint* , const char* , int, int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:302 */
	virtual BoneConstraintType_t GetConstraintType(const CTiltTwistConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:303 */
	virtual BoneConstraintResult_t Compute(const CTiltTwistConstraint* , const CModel* , CTransform* , float* , const uint32* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:304 */
	BoneConstraintResult_t Compute(CTiltTwistConstraint* , const CModel* , CTransform* , float* , const uint32* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:305 */
	virtual bool Finalize(CTiltTwistConstraint* , const CModel* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:307 */
	float NormalizeAngle(float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:308 */
	float ComputeNoFlipAngle(float, float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:309 */
	float ComputeTwistAroundAxisInRadians(CTransform& , int, float);
protected:
	int m_nTargetAxis; /* 128 4 */
	int m_nSlaveAxis; /* 132 4 */
	bool m_bTwistLastValid; /* 136 1 */
	float m_flTwistLast; /* 140 4 */
	int m_nTargetBoneIndex; /* 144 4 */
	int m_nTargetParentBoneIndex; /* 148 4 */
	int m_nOutputBoneIndex; /* 152 4 */
	int m_nOutputParentBoneIndex; /* 156 4 */
	Quaternion m_qBindInverseParentSpace; /* 160 16 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:327 */
	void GetTwistMatrix(const CTiltTwistConstraint* , CTransform& , CTransform* );
	virtual void ~CTiltTwistConstraint(CTiltTwistConstraint* );
	void CTiltTwistConstraint(class CTiltTwistConstraint *, class CTiltTwistConstraint &); /* linkage=_ZN20CTiltTwistConstraintC4EOS_ */
	void CTiltTwistConstraint(class CTiltTwistConstraint *, const class CTiltTwistConstraint  &); /* linkage=_ZN20CTiltTwistConstraintC4ERKS_ */
	class CTiltTwistConstraint & operator=(class CTiltTwistConstraint *, class CTiltTwistConstraint &); /* linkage=_ZN20CTiltTwistConstraintaSEOS_ */
	class CTiltTwistConstraint & operator=(class CTiltTwistConstraint *, const class CTiltTwistConstraint  &); /* linkage=_ZN20CTiltTwistConstraintaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN20CTiltTwistConstraint17GetPrimaryBindingEv */
	class CTiltTwistConstraint * Schema_MarkHelperFn(void); /* linkage=_ZN20CTiltTwistConstraint19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN20CTiltTwistConstraint15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <52a490e> ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:921 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN20CTiltTwistConstraint32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CTiltTwistConstraint *); /* linkage=_ZN20CTiltTwistConstraint38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN20CTiltTwistConstraint20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN20CTiltTwistConstraint22Schema_StaticClassnameEv */
	/* <52a417a> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:294 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CTiltTwistConstraint  *); /* linkage=_ZNK20CTiltTwistConstraint21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CTiltTwistConstraint  *, char &); /* linkage=_ZN20CTiltTwistConstraint31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CTiltTwistConstraint * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN20CTiltTwistConstraint32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CTiltTwistConstraint  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CTiltTwistConstraint15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CTiltTwistConstraint *, class CKV3TransferLoadContext *); /* linkage=_ZN20CTiltTwistConstraint15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CTiltTwistConstraint(const class CTiltTwistConstraint  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CTiltTwistConstraint36KV3TransferSave_CTiltTwistConstraintEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CTiltTwistConstraint(class CTiltTwistConstraint *, class CKV3TransferLoadContext *); /* linkage=_ZN20CTiltTwistConstraint36KV3TransferLoad_CTiltTwistConstraintEP23CKV3TransferLoadContext */
	void CTiltTwistConstraint(class CTiltTwistConstraint *); /* linkage=_ZN20CTiltTwistConstraintC4Ev */
	void Init(class CTiltTwistConstraint *, const char  *, int, int); /* linkage=_ZN20CTiltTwistConstraint4InitEPKcii */
	virtual enum BoneConstraintType_t GetConstraintType(const class CTiltTwistConstraint  *); /* linkage=_ZNK20CTiltTwistConstraint17GetConstraintTypeEv */
	virtual enum BoneConstraintResult_t Compute(const class CTiltTwistConstraint  *, const class CModel  *, class CTransform *, float *, const uint32  *); /* linkage=_ZNK20CTiltTwistConstraint7ComputeEPK6CModelP10CTransformPfPKj */
	/* <541c9b0> modellib/boneconstraints.cpp:1152 */
	enum BoneConstraintResult_t Compute(class CTiltTwistConstraint *, const class CModel  *, class CTransform *, float *, const uint32  *); /* linkage=_ZN20CTiltTwistConstraint7ComputeEPK6CModelP10CTransformPfPKj */
	virtual bool Finalize(class CTiltTwistConstraint *, const class CModel  *); /* linkage=_ZN20CTiltTwistConstraint8FinalizeEPK6CModel */
	/* <541beca> modellib/boneconstraints.cpp:1239 */
	float NormalizeAngle(float); /* linkage=_ZN20CTiltTwistConstraint14NormalizeAngleEf */
	/* <541bf06> modellib/boneconstraints.cpp:1255 */
	float ComputeNoFlipAngle(float, float); /* linkage=_ZN20CTiltTwistConstraint18ComputeNoFlipAngleEff */
	float ComputeTwistAroundAxisInRadians(class CTransform &, int, float); /* linkage=_ZN20CTiltTwistConstraint31ComputeTwistAroundAxisInRadiansER10CTransformif */
	void GetTwistMatrix(const class CTiltTwistConstraint  *, class CTransform &, class CTransform *); /* linkage=_ZNK20CTiltTwistConstraint14GetTwistMatrixER10CTransformPS0_ */
	virtual void ~CTiltTwistConstraint(class CTiltTwistConstraint *); /* linkage=_ZN20CTiltTwistConstraintD4Ev */
	virtual inline void ~CTiltTwistConstraint(class CTiltTwistConstraint *); /* linkage=_ZN20CTiltTwistConstraintD4Ev */
};

// <05418DD8> ../public/modellib/boneconstraints.h:294
void CTiltTwistConstraint::Schema_DynamicBinding()
{
} /* size: 0 */

// <052A417A> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:294
// function calls: 3
void CTiltTwistConstraint::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 921
	Schema_VerifyBindingIsRegistered(void); // 294
	GetPrimaryBinding(void); // 294
} /* size: 75, inline expansions: 3 (78 bytes) */

// <052A262A> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:294
inline void CTiltTwistConstraint::Schema_DynamicBinding()
{
} /* size: 0 */

// <0527E8A8> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:298
void CTiltTwistConstraint::CTiltTwistConstraint()
{
} /* size: 0 */

// <05418DC0> ../public/modellib/boneconstraints.h:302
void CTiltTwistConstraint::GetConstraintType()
{
} /* size: 0 */

// <052922E6> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:334
inline void CMorphConstraint::operator=(const CMorphConstraint &)
{
} /* size: 0 */

// <0529225E> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:334
// function call: 1
void CMorphConstraint::~CMorphConstraint()
{
	CUtlString::~CUtlString(); // 334
} /* size: 61, inline expansions: 1 (15 bytes) */

// <05292193> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:334
// function calls: 2
void CMorphConstraint::~CMorphConstraint()
{
	CUtlString::~CUtlString(); // 334
	CMorphConstraint::~CMorphConstraint(); // 334
} /* size: 74, inline expansions: 2 (55 bytes) */

// <05292176> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:334
inline void CMorphConstraint::~CMorphConstraint()
{
} /* size: 0 */

// <05274235> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:334
// member functions: 51
// member variables: 7
// static member variable: 1
// vtable entries: 6
// class size: 160
class CMorphConstraint : public CBaseConstraint {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:337 */
	enum {
		KV3TRANSFER_IS_VIRTUAL = 1,
	};
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:337 */
	enum {
		KV3TRANSFER_IGNORE_VIRTUAL = 0,
	};
public:
	/* class CBaseConstraint <ancestor>; */ /* 0 128 */
	void CMorphConstraint(CMorphConstraint* , CMorphConstraint& );
	void CMorphConstraint(CMorphConstraint* , const CMorphConstraint& );
	CMorphConstraint& operator=(CMorphConstraint* , CMorphConstraint& );
	CMorphConstraint& operator=(CMorphConstraint* , const CMorphConstraint& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:336 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:336 */
	CMorphConstraint* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1010 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1039 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:965 */
	void Schema_CompileTimeVerificationFunction(CMorphConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:336 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:336 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:336 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CMorphConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:337 */
	void KV3TransferPolymorphicClassname(const CMorphConstraint* , char& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:337 */
	CMorphConstraint* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1047 */
	virtual void KV3TransferSave(const CMorphConstraint* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1063 */
	virtual void KV3TransferLoad(CMorphConstraint* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1052 */
	void KV3TransferSave_CMorphConstraint(const CMorphConstraint* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1068 */
	void KV3TransferLoad_CMorphConstraint(CMorphConstraint* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:340 */
	void CMorphConstraint(CMorphConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:342 */
	void Init(CMorphConstraint* , const char* , const char* , int, float, float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:344 */
	virtual BoneConstraintType_t GetConstraintType(const CMorphConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:345 */
	virtual BoneConstraintResult_t Compute(const CMorphConstraint* , const CModel* , CTransform* , float* , const uint32* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:346 */
	virtual bool Finalize(CMorphConstraint* , const CModel* );
protected:
	CUtlString m_sTargetMorph; /* 128 8 */
	int m_nSlaveChannel; /* 136 4 */
	float m_flMin; /* 140 4 */
	float m_flMax; /* 144 4 */
	int m_nTargetMorphControl; /* 148 4 */
	Vector2D m_flTargetMorphControlMinMax; /* 152 8 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:358 */
	void CalcOutputLocalMatrix(const CMorphConstraint* , CTransform& , const CConstraintSlave& , float);
	virtual void ~CMorphConstraint(CMorphConstraint* );
	void CMorphConstraint(class CMorphConstraint *, class CMorphConstraint &); /* linkage=_ZN16CMorphConstraintC4EOS_ */
	void CMorphConstraint(class CMorphConstraint *, const class CMorphConstraint  &); /* linkage=_ZN16CMorphConstraintC4ERKS_ */
	class CMorphConstraint & operator=(class CMorphConstraint *, class CMorphConstraint &); /* linkage=_ZN16CMorphConstraintaSEOS_ */
	class CMorphConstraint & operator=(class CMorphConstraint *, const class CMorphConstraint  &); /* linkage=_ZN16CMorphConstraintaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN16CMorphConstraint17GetPrimaryBindingEv */
	class CMorphConstraint * Schema_MarkHelperFn(void); /* linkage=_ZN16CMorphConstraint19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN16CMorphConstraint15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <52a495c> ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1039 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN16CMorphConstraint32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CMorphConstraint *); /* linkage=_ZN16CMorphConstraint38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN16CMorphConstraint20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN16CMorphConstraint22Schema_StaticClassnameEv */
	/* <52a4231> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:336 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CMorphConstraint  *); /* linkage=_ZNK16CMorphConstraint21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CMorphConstraint  *, char &); /* linkage=_ZN16CMorphConstraint31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CMorphConstraint * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN16CMorphConstraint32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CMorphConstraint  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CMorphConstraint15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CMorphConstraint *, class CKV3TransferLoadContext *); /* linkage=_ZN16CMorphConstraint15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CMorphConstraint(const class CMorphConstraint  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CMorphConstraint32KV3TransferSave_CMorphConstraintEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CMorphConstraint(class CMorphConstraint *, class CKV3TransferLoadContext *); /* linkage=_ZN16CMorphConstraint32KV3TransferLoad_CMorphConstraintEP23CKV3TransferLoadContext */
	void CMorphConstraint(class CMorphConstraint *); /* linkage=_ZN16CMorphConstraintC4Ev */
	void Init(class CMorphConstraint *, const char  *, const char  *, int, float, float); /* linkage=_ZN16CMorphConstraint4InitEPKcS1_iff */
	virtual enum BoneConstraintType_t GetConstraintType(const class CMorphConstraint  *); /* linkage=_ZNK16CMorphConstraint17GetConstraintTypeEv */
	virtual enum BoneConstraintResult_t Compute(const class CMorphConstraint  *, const class CModel  *, class CTransform *, float *, const uint32  *); /* linkage=_ZNK16CMorphConstraint7ComputeEPK6CModelP10CTransformPfPKj */
	virtual bool Finalize(class CMorphConstraint *, const class CModel  *); /* linkage=_ZN16CMorphConstraint8FinalizeEPK6CModel */
	void CalcOutputLocalMatrix(const class CMorphConstraint  *, class CTransform &, const class CConstraintSlave  &, float); /* linkage=_ZNK16CMorphConstraint21CalcOutputLocalMatrixER10CTransformRK16CConstraintSlavef */
	virtual void ~CMorphConstraint(class CMorphConstraint *); /* linkage=_ZN16CMorphConstraintD4Ev */
	virtual inline void ~CMorphConstraint(class CMorphConstraint *); /* linkage=_ZN16CMorphConstraintD4Ev */
};

// <05418DA2> ../public/modellib/boneconstraints.h:336
void CMorphConstraint::Schema_DynamicBinding()
{
} /* size: 0 */

// <052A4231> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:336
// function calls: 3
void CMorphConstraint::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 1039
	Schema_VerifyBindingIsRegistered(void); // 336
	GetPrimaryBinding(void); // 336
} /* size: 75, inline expansions: 3 (78 bytes) */

// <052A25D7> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:336
inline void CMorphConstraint::Schema_DynamicBinding()
{
} /* size: 0 */

// <0527E88C> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:340
void CMorphConstraint::CMorphConstraint()
{
} /* size: 0 */

// <05418D8A> ../public/modellib/boneconstraints.h:344
void CMorphConstraint::GetConstraintType()
{
} /* size: 0 */

// <0528F559> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:364
inline void CParentConstraint::operator=(const CParentConstraint &)
{
} /* size: 0 */

// <0528F542> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:364
void CParentConstraint::CParentConstraint()
{
} /* size: 0 */

// <0528F525> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:364
inline void CParentConstraint::CParentConstraint()
{
} /* size: 0 */

// <0528F4DB> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:364
void CParentConstraint::~CParentConstraint()
{
} /* size: 19 */

// <0528F44D> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:364
// function call: 1
void CParentConstraint::~CParentConstraint()
{
	CParentConstraint::~CParentConstraint(); // 364
} /* size: 46, inline expansions: 1 (19 bytes) */

// <0528F430> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:364
inline void CParentConstraint::~CParentConstraint()
{
} /* size: 0 */

// <05274665> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:364
// member functions: 44
// member variable: 1
// static member variable: 1
// vtable entries: 5
// class size: 128
class CParentConstraint : public CBaseConstraint {
public:
	/* class CBaseConstraint <ancestor>; */ /* 0 128 */
	void CParentConstraint(CParentConstraint* , CParentConstraint& );
	void CParentConstraint(CParentConstraint* , const CParentConstraint& );
	void CParentConstraint(CParentConstraint* );
	CParentConstraint& operator=(CParentConstraint* , CParentConstraint& );
	CParentConstraint& operator=(CParentConstraint* , const CParentConstraint& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:366 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:366 */
	CParentConstraint* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1106 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1135 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1087 */
	void Schema_CompileTimeVerificationFunction(CParentConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:366 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:366 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:366 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CParentConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:367 */
	void KV3TransferPolymorphicClassname(const CParentConstraint* , char& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:367 */
	CParentConstraint* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1143 */
	virtual void KV3TransferSave(const CParentConstraint* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1155 */
	virtual void KV3TransferLoad(CParentConstraint* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1148 */
	void KV3TransferSave_CParentConstraint(const CParentConstraint* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1160 */
	void KV3TransferLoad_CParentConstraint(CParentConstraint* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:370 */
	virtual BoneConstraintType_t GetConstraintType(const CParentConstraint* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:371 */
	virtual BoneConstraintResult_t Compute(const CParentConstraint* , const CModel* , CTransform* , float* , const uint32* );
	virtual void ~CParentConstraint(CParentConstraint* );
	void CParentConstraint(class CParentConstraint *, class CParentConstraint &); /* linkage=_ZN17CParentConstraintC4EOS_ */
	void CParentConstraint(class CParentConstraint *, const class CParentConstraint  &); /* linkage=_ZN17CParentConstraintC4ERKS_ */
	void CParentConstraint(class CParentConstraint *); /* linkage=_ZN17CParentConstraintC4Ev */
	class CParentConstraint & operator=(class CParentConstraint *, class CParentConstraint &); /* linkage=_ZN17CParentConstraintaSEOS_ */
	class CParentConstraint & operator=(class CParentConstraint *, const class CParentConstraint  &); /* linkage=_ZN17CParentConstraintaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN17CParentConstraint17GetPrimaryBindingEv */
	class CParentConstraint * Schema_MarkHelperFn(void); /* linkage=_ZN17CParentConstraint19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN17CParentConstraint15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <52a49aa> ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1135 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN17CParentConstraint32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CParentConstraint *); /* linkage=_ZN17CParentConstraint38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN17CParentConstraint20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN17CParentConstraint22Schema_StaticClassnameEv */
	/* <52a42e8> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:366 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CParentConstraint  *); /* linkage=_ZNK17CParentConstraint21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CParentConstraint  *, char &); /* linkage=_ZN17CParentConstraint31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CParentConstraint * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN17CParentConstraint32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CParentConstraint  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CParentConstraint15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CParentConstraint *, class CKV3TransferLoadContext *); /* linkage=_ZN17CParentConstraint15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CParentConstraint(const class CParentConstraint  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CParentConstraint33KV3TransferSave_CParentConstraintEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CParentConstraint(class CParentConstraint *, class CKV3TransferLoadContext *); /* linkage=_ZN17CParentConstraint33KV3TransferLoad_CParentConstraintEP23CKV3TransferLoadContext */
	virtual enum BoneConstraintType_t GetConstraintType(const class CParentConstraint  *); /* linkage=_ZNK17CParentConstraint17GetConstraintTypeEv */
	virtual enum BoneConstraintResult_t Compute(const class CParentConstraint  *, const class CModel  *, class CTransform *, float *, const uint32  *); /* linkage=_ZNK17CParentConstraint7ComputeEPK6CModelP10CTransformPfPKj */
	virtual void ~CParentConstraint(class CParentConstraint *); /* linkage=_ZN17CParentConstraintD4Ev */
};

// <052A42E8> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:366
// function calls: 3
void CParentConstraint::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 1135
	Schema_VerifyBindingIsRegistered(void); // 366
	GetPrimaryBinding(void); // 366
} /* size: 75, inline expansions: 3 (78 bytes) */

// <052A2584> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:366
inline void CParentConstraint::Schema_DynamicBinding()
{
} /* size: 0 */

// <05418D72> ../public/modellib/boneconstraints.h:370
void CParentConstraint::GetConstraintType()
{
} /* size: 0 */

// <0528E337> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:382
inline void CBoneConstraintPoseSpaceMorph::operator=(const CBoneConstraintPoseSpaceMorph &)
{
} /* size: 0 */

// <0527496F> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:382
// member functions: 107
// member variables: 11
// static member variable: 1
// vtable entries: 6
// class size: 192
class CBoneConstraintPoseSpaceMorph : public CBoneConstraintBase {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:438 */
	struct Input_t {
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:442 */
		enum {
			KV3TRANSFER_BEHAVIOR = 1,
		};
	private:
		static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:440 */
		const CSchemaClassInfo* GetPrimaryBinding(void);
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:440 */
		Input_t* Schema_MarkHelperFn(void);
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:440 */
		void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:440 */
		void Schema_VerifyBindingIsRegistered(void);
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:440 */
		void Schema_CompileTimeVerificationFunction(Input_t* );
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:440 */
		const CSchemaClassInfo* Schema_StaticBinding(void);
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:440 */
		const char* Schema_StaticClassname(void);
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:440 */
		const CSchemaClassInfo* Schema_DynamicBinding(const Input_t* );
		Vector m_inputValue; /* 0 12 */
		CUtlVector<float, CUtlMemory<float, int> > m_outputWeightList; /* 16 32 */
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:447 */
		void KV3TransferSave(const Input_t* , CKV3TransferSaveContext* );
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:448 */
		void KV3TransferLoad(Input_t* , CKV3TransferLoadContext* );
		void ~Input_t(Input_t* );
		void Input_t(Input_t* );
		Input_t& operator=(Input_t* , const Input_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CBoneConstraintBase <ancestor>; */ /* 0 40 */
	void CBoneConstraintPoseSpaceMorph(CBoneConstraintPoseSpaceMorph* , const CBoneConstraintPoseSpaceMorph& );
	CBoneConstraintPoseSpaceMorph& operator=(CBoneConstraintPoseSpaceMorph* , const CBoneConstraintPoseSpaceMorph& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:384 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:384 */
	CBoneConstraintPoseSpaceMorph* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1288 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1317 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1240 */
	void Schema_CompileTimeVerificationFunction(CBoneConstraintPoseSpaceMorph* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:384 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:384 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:384 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CBoneConstraintPoseSpaceMorph* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:385 */
	void KV3TransferPolymorphicClassname(const CBoneConstraintPoseSpaceMorph* , char& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:385 */
	CBoneConstraintPoseSpaceMorph* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1325 */
	virtual void KV3TransferSave(const CBoneConstraintPoseSpaceMorph* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1343 */
	virtual void KV3TransferLoad(CBoneConstraintPoseSpaceMorph* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1330 */
	void KV3TransferSave_CBoneConstraintPoseSpaceMorph(const CBoneConstraintPoseSpaceMorph* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1348 */
	void KV3TransferLoad_CBoneConstraintPoseSpaceMorph(CBoneConstraintPoseSpaceMorph* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:390 */
	void CBoneConstraintPoseSpaceMorph(CBoneConstraintPoseSpaceMorph* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:391 */
	virtual void ~CBoneConstraintPoseSpaceMorph(CBoneConstraintPoseSpaceMorph* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:393 */
	virtual BoneConstraintType_t GetConstraintType(const CBoneConstraintPoseSpaceMorph* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:395 */
	virtual BoneConstraintResult_t Compute(const CBoneConstraintPoseSpaceMorph* , const CModel* , CTransform* , float* , const uint32* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:397 */
	virtual bool Finalize(CBoneConstraintPoseSpaceMorph* , const CModel* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:399 */
	bool GetClamp(const CBoneConstraintPoseSpaceMorph* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:400 */
	void SetClamp(CBoneConstraintPoseSpaceMorph* , bool);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:402 */
	float GetFalloff(const CBoneConstraintPoseSpaceMorph* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:403 */
	void SetFalloff(CBoneConstraintPoseSpaceMorph* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:405 */
	int GetRbfTypeCount(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:406 */
	const char* RbfTypeName(int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:407 */
	int GetRbfType(const CBoneConstraintPoseSpaceMorph* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:408 */
	void SetRbfType(CBoneConstraintPoseSpaceMorph* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:410 */
	const char* GetBoneName(const CBoneConstraintPoseSpaceMorph* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:411 */
	void SetBoneName(CBoneConstraintPoseSpaceMorph* , const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:413 */
	const char* GetAttachmentName(const CBoneConstraintPoseSpaceMorph* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:414 */
	void SetAttachmentName(CBoneConstraintPoseSpaceMorph* , const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:416 */
	int GetOutputCount(const CBoneConstraintPoseSpaceMorph* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:417 */
	void ClearOutputs(CBoneConstraintPoseSpaceMorph* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:418 */
	const char* GetOutputMorph(const CBoneConstraintPoseSpaceMorph* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:419 */
	int AddOutputMorph(CBoneConstraintPoseSpaceMorph* , const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:421 */
	int GetInputCount(const CBoneConstraintPoseSpaceMorph* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:422 */
	void ClearInputs(CBoneConstraintPoseSpaceMorph* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:423 */
	int GetInputWeightCount(const CBoneConstraintPoseSpaceMorph* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:424 */
	const Vector& GetInputValue(const CBoneConstraintPoseSpaceMorph* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:425 */
	float GetInputValueWeight(const CBoneConstraintPoseSpaceMorph* , int, int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:426 */
	int AddInputValue(CBoneConstraintPoseSpaceMorph* , const Vector& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:427 */
	bool SetInputValueWeight(CBoneConstraintPoseSpaceMorph* , int, int, float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:429 */
	void Finalize(CBoneConstraintPoseSpaceMorph* );
protected:
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:433 */
	void TransferPostSaveFn(const CBoneConstraintPoseSpaceMorph* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:434 */
	void TransferPostLoadFn(CBoneConstraintPoseSpaceMorph* , CKV3TransferLoadContext* );
	CUtlString m_sBoneName; /* 40 8 */
	CUtlString m_sAttachmentName; /* 48 8 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_outputMorph; /* 56 32 */
	CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t, CUtlMemory<CBoneConstraintPoseSpaceMorph::Input_t, int> > m_inputList; /* 88 32 */
	bool m_bClamp; /* 120 1 */
	IInterpolateRbf * m_pRfp; /* 128 8 */
	int m_nTargetBone; /* 136 4 */
	int m_nTargetBoneParent; /* 140 4 */
	Vector m_vOffset; /* 144 12 */
	CUtlVector<int, CUtlMemory<int, int> > m_outputFlexControl; /* 160 32 */
	void CBoneConstraintPoseSpaceMorph(class CBoneConstraintPoseSpaceMorph *, const class CBoneConstraintPoseSpaceMorph  &); /* linkage=_ZN29CBoneConstraintPoseSpaceMorphC4ERKS_ */
	class CBoneConstraintPoseSpaceMorph & operator=(class CBoneConstraintPoseSpaceMorph *, const class CBoneConstraintPoseSpaceMorph  &); /* linkage=_ZN29CBoneConstraintPoseSpaceMorphaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph17GetPrimaryBindingEv */
	class CBoneConstraintPoseSpaceMorph * Schema_MarkHelperFn(void); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <52a4ab1> ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1317 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CBoneConstraintPoseSpaceMorph *); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph22Schema_StaticClassnameEv */
	/* <52a439f> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:384 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CBoneConstraintPoseSpaceMorph  *); /* linkage=_ZNK29CBoneConstraintPoseSpaceMorph21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CBoneConstraintPoseSpaceMorph  *, char &); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CBoneConstraintPoseSpaceMorph * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CBoneConstraintPoseSpaceMorph  *, class CKV3TransferSaveContext *); /* linkage=_ZNK29CBoneConstraintPoseSpaceMorph15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CBoneConstraintPoseSpaceMorph *, class CKV3TransferLoadContext *); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CBoneConstraintPoseSpaceMorph(const class CBoneConstraintPoseSpaceMorph  *, class CKV3TransferSaveContext *); /* linkage=_ZNK29CBoneConstraintPoseSpaceMorph45KV3TransferSave_CBoneConstraintPoseSpaceMorphEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CBoneConstraintPoseSpaceMorph(class CBoneConstraintPoseSpaceMorph *, class CKV3TransferLoadContext *); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph45KV3TransferLoad_CBoneConstraintPoseSpaceMorphEP23CKV3TransferLoadContext */
	void CBoneConstraintPoseSpaceMorph(class CBoneConstraintPoseSpaceMorph *); /* linkage=_ZN29CBoneConstraintPoseSpaceMorphC4Ev */
	virtual void ~CBoneConstraintPoseSpaceMorph(class CBoneConstraintPoseSpaceMorph *); /* linkage=_ZN29CBoneConstraintPoseSpaceMorphD4Ev */
	virtual enum BoneConstraintType_t GetConstraintType(const class CBoneConstraintPoseSpaceMorph  *); /* linkage=_ZNK29CBoneConstraintPoseSpaceMorph17GetConstraintTypeEv */
	virtual enum BoneConstraintResult_t Compute(const class CBoneConstraintPoseSpaceMorph  *, const class CModel  *, class CTransform *, float *, const uint32  *); /* linkage=_ZNK29CBoneConstraintPoseSpaceMorph7ComputeEPK6CModelP10CTransformPfPKj */
	virtual bool Finalize(class CBoneConstraintPoseSpaceMorph *, const class CModel  *); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph8FinalizeEPK6CModel */
	/* <541ca8f> modellib/boneconstraints.cpp:1721 */
	bool GetClamp(const class CBoneConstraintPoseSpaceMorph  *); /* linkage=_ZNK29CBoneConstraintPoseSpaceMorph8GetClampEv */
	void SetClamp(class CBoneConstraintPoseSpaceMorph *, bool); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph8SetClampEb */
	/* <541cab8> modellib/boneconstraints.cpp:1735 */
	float GetFalloff(const class CBoneConstraintPoseSpaceMorph  *); /* linkage=_ZNK29CBoneConstraintPoseSpaceMorph10GetFalloffEv */
	/* <541cb12> modellib/boneconstraints.cpp:1742 */
	void SetFalloff(class CBoneConstraintPoseSpaceMorph *, float); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph10SetFalloffEf */
	/* <541ce80> modellib/boneconstraints.cpp:1749 */
	int GetRbfTypeCount(void); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph15GetRbfTypeCountEv */
	const char  * RbfTypeName(int); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph11RbfTypeNameEi */
	/* <541cb9b> modellib/boneconstraints.cpp:1764 */
	int GetRbfType(const class CBoneConstraintPoseSpaceMorph  *); /* linkage=_ZNK29CBoneConstraintPoseSpaceMorph10GetRbfTypeEv */
	/* <541cbf5> modellib/boneconstraints.cpp:1771 */
	void SetRbfType(class CBoneConstraintPoseSpaceMorph *, int); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph10SetRbfTypeEi */
	const char  * GetBoneName(const class CBoneConstraintPoseSpaceMorph  *); /* linkage=_ZNK29CBoneConstraintPoseSpaceMorph11GetBoneNameEv */
	void SetBoneName(class CBoneConstraintPoseSpaceMorph *, const char  *); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph11SetBoneNameEPKc */
	const char  * GetAttachmentName(const class CBoneConstraintPoseSpaceMorph  *); /* linkage=_ZNK29CBoneConstraintPoseSpaceMorph17GetAttachmentNameEv */
	void SetAttachmentName(class CBoneConstraintPoseSpaceMorph *, const char  *); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph17SetAttachmentNameEPKc */
	int GetOutputCount(const class CBoneConstraintPoseSpaceMorph  *); /* linkage=_ZNK29CBoneConstraintPoseSpaceMorph14GetOutputCountEv */
	void ClearOutputs(class CBoneConstraintPoseSpaceMorph *); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph12ClearOutputsEv */
	const char  * GetOutputMorph(const class CBoneConstraintPoseSpaceMorph  *, int); /* linkage=_ZNK29CBoneConstraintPoseSpaceMorph14GetOutputMorphEi */
	int AddOutputMorph(class CBoneConstraintPoseSpaceMorph *, const char  *); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph14AddOutputMorphEPKc */
	int GetInputCount(const class CBoneConstraintPoseSpaceMorph  *); /* linkage=_ZNK29CBoneConstraintPoseSpaceMorph13GetInputCountEv */
	void ClearInputs(class CBoneConstraintPoseSpaceMorph *); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph11ClearInputsEv */
	int GetInputWeightCount(const class CBoneConstraintPoseSpaceMorph  *, int); /* linkage=_ZNK29CBoneConstraintPoseSpaceMorph19GetInputWeightCountEi */
	const class Vector  & GetInputValue(const class CBoneConstraintPoseSpaceMorph  *, int); /* linkage=_ZNK29CBoneConstraintPoseSpaceMorph13GetInputValueEi */
	float GetInputValueWeight(const class CBoneConstraintPoseSpaceMorph  *, int, int); /* linkage=_ZNK29CBoneConstraintPoseSpaceMorph19GetInputValueWeightEii */
	int AddInputValue(class CBoneConstraintPoseSpaceMorph *, const class Vector  &); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph13AddInputValueERK6Vector */
	bool SetInputValueWeight(class CBoneConstraintPoseSpaceMorph *, int, int, float); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph19SetInputValueWeightEiif */
	void Finalize(class CBoneConstraintPoseSpaceMorph *); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph8FinalizeEv */
	void TransferPostSaveFn(const class CBoneConstraintPoseSpaceMorph  *, class CKV3TransferSaveContext *); /* linkage=_ZNK29CBoneConstraintPoseSpaceMorph18TransferPostSaveFnEP23CKV3TransferSaveContext */
	void TransferPostLoadFn(class CBoneConstraintPoseSpaceMorph *, class CKV3TransferLoadContext *); /* linkage=_ZN29CBoneConstraintPoseSpaceMorph18TransferPostLoadFnEP23CKV3TransferLoadContext */
};

// <05418D54> ../public/modellib/boneconstraints.h:384
void CBoneConstraintPoseSpaceMorph::Schema_DynamicBinding()
{
} /* size: 0 */

// <052A439F> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:384
// function calls: 3
void CBoneConstraintPoseSpaceMorph::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 1317
	Schema_VerifyBindingIsRegistered(void); // 384
	GetPrimaryBinding(void); // 384
} /* size: 75, inline expansions: 3 (78 bytes) */

// <052A2531> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:384
inline void CBoneConstraintPoseSpaceMorph::Schema_DynamicBinding()
{
} /* size: 0 */

// <0527E820> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:390
void CBoneConstraintPoseSpaceMorph::CBoneConstraintPoseSpaceMorph()
{
} /* size: 0 */

// <0527E858> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:391
void CBoneConstraintPoseSpaceMorph::~CBoneConstraintPoseSpaceMorph()
{
} /* size: 0 */

// <05418D3C> ../public/modellib/boneconstraints.h:393
void CBoneConstraintPoseSpaceMorph::GetConstraintType()
{
} /* size: 0 */

// <053ECA92> ../public/modellib/boneconstraints.h:438
void Input_t::~Input_t()
{
} /* size: 0 */

// <053ECA75> ../public/modellib/boneconstraints.h:438
inline void Input_t::~Input_t()
{
} /* size: 0 */

// <053EA69C> ../public/modellib/boneconstraints.h:438
void Input_t::Input_t()
{
} /* size: 0 */

// <053EA67F> ../public/modellib/boneconstraints.h:438
inline void Input_t::Input_t()
{
} /* size: 0 */

// <0528EFE7> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:438
inline void Input_t::operator=(const Input_t &)
{
} /* size: 0 */

// <052A24DE> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:440
inline void Input_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0528839F> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:470
inline void CBoneConstraintPoseSpaceBone::operator=(const CBoneConstraintPoseSpaceBone &)
{
} /* size: 0 */

// <05279620> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:470
// member functions: 99
// member variables: 5
// static member variable: 1
// vtable entries: 6
// class size: 176
class CBoneConstraintPoseSpaceBone : public CBaseConstraint {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:519 */
	struct Input_t {
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:523 */
		enum {
			KV3TRANSFER_BEHAVIOR = 1,
		};
	private:
		static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:521 */
		const CSchemaClassInfo* GetPrimaryBinding(void);
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:521 */
		Input_t* Schema_MarkHelperFn(void);
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:521 */
		void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:521 */
		void Schema_VerifyBindingIsRegistered(void);
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:521 */
		void Schema_CompileTimeVerificationFunction(Input_t* );
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:521 */
		const CSchemaClassInfo* Schema_StaticBinding(void);
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:521 */
		const char* Schema_StaticClassname(void);
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:521 */
		const CSchemaClassInfo* Schema_DynamicBinding(const Input_t* );
		Vector m_inputValue; /* 0 12 */
		CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_outputTransformList; /* 16 32 */
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:528 */
		void KV3TransferSave(const Input_t* , CKV3TransferSaveContext* );
		/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:529 */
		void KV3TransferLoad(Input_t* , CKV3TransferLoadContext* );
		void ~Input_t(Input_t* );
		void Input_t(Input_t* );
		Input_t& operator=(Input_t* , const Input_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CBaseConstraint <ancestor>; */ /* 0 128 */
	void CBoneConstraintPoseSpaceBone(CBoneConstraintPoseSpaceBone* , const CBoneConstraintPoseSpaceBone& );
	CBoneConstraintPoseSpaceBone& operator=(CBoneConstraintPoseSpaceBone* , const CBoneConstraintPoseSpaceBone& );
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:472 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:472 */
	CBoneConstraintPoseSpaceBone* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1470 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1499 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1434 */
	void Schema_CompileTimeVerificationFunction(CBoneConstraintPoseSpaceBone* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:472 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:472 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:472 */
	virtual const CSchemaClassInfo* Schema_DynamicBinding(const CBoneConstraintPoseSpaceBone* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:473 */
	void KV3TransferPolymorphicClassname(const CBoneConstraintPoseSpaceBone* , char& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:473 */
	CBoneConstraintPoseSpaceBone* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1507 */
	virtual void KV3TransferSave(const CBoneConstraintPoseSpaceBone* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1521 */
	virtual void KV3TransferLoad(CBoneConstraintPoseSpaceBone* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1512 */
	void KV3TransferSave_CBoneConstraintPoseSpaceBone(const CBoneConstraintPoseSpaceBone* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1526 */
	void KV3TransferLoad_CBoneConstraintPoseSpaceBone(CBoneConstraintPoseSpaceBone* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:478 */
	void CBoneConstraintPoseSpaceBone(CBoneConstraintPoseSpaceBone* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:479 */
	virtual void ~CBoneConstraintPoseSpaceBone(CBoneConstraintPoseSpaceBone* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:481 */
	virtual BoneConstraintType_t GetConstraintType(const CBoneConstraintPoseSpaceBone* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:483 */
	virtual BoneConstraintResult_t Compute(const CBoneConstraintPoseSpaceBone* , const CModel* , CTransform* , float* , const uint32* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:485 */
	virtual bool Finalize(CBoneConstraintPoseSpaceBone* , const CModel* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:487 */
	float GetFalloff(const CBoneConstraintPoseSpaceBone* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:488 */
	void SetFalloff(CBoneConstraintPoseSpaceBone* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:490 */
	int GetRbfTypeCount(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:491 */
	const char* RbfTypeName(int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:492 */
	int GetRbfType(const CBoneConstraintPoseSpaceBone* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:493 */
	void SetRbfType(CBoneConstraintPoseSpaceBone* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:495 */
	const char* GetAttachmentName(const CBoneConstraintPoseSpaceBone* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:496 */
	void SetAttachmentName(CBoneConstraintPoseSpaceBone* , const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:498 */
	int GetOutputCount(const CBoneConstraintPoseSpaceBone* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:499 */
	void ClearOutputs(CBoneConstraintPoseSpaceBone* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:500 */
	const char* GetOutputBone(const CBoneConstraintPoseSpaceBone* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:501 */
	int AddOutputBone(CBoneConstraintPoseSpaceBone* , const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:503 */
	int GetInputCount(const CBoneConstraintPoseSpaceBone* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:504 */
	void ClearInputs(CBoneConstraintPoseSpaceBone* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:505 */
	int GetInputTransformCount(const CBoneConstraintPoseSpaceBone* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:506 */
	const Vector& GetInputValue(const CBoneConstraintPoseSpaceBone* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:507 */
	const CTransform& GetInputValueTransform(const CBoneConstraintPoseSpaceBone* , int, int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:508 */
	int AddInputValue(CBoneConstraintPoseSpaceBone* , const Vector& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:509 */
	bool SetInputValueTransform(CBoneConstraintPoseSpaceBone* , int, int, const CTransform& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:511 */
	void Finalize(CBoneConstraintPoseSpaceBone* );
protected:
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:514 */
	void TransferPostSaveFn(const CBoneConstraintPoseSpaceBone* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:515 */
	void TransferPostLoadFn(CBoneConstraintPoseSpaceBone* , CKV3TransferLoadContext* );
	CUtlVector<CBoneConstraintPoseSpaceBone::Input_t, CUtlMemory<CBoneConstraintPoseSpaceBone::Input_t, int> > m_inputList; /* 128 32 */
	IInterpolateRbf * m_pRfp; /* 160 8 */
	int m_nTargetBone; /* 168 4 */
	int m_nTargetBoneParent; /* 172 4 */
	void CBoneConstraintPoseSpaceBone(class CBoneConstraintPoseSpaceBone *, const class CBoneConstraintPoseSpaceBone  &); /* linkage=_ZN28CBoneConstraintPoseSpaceBoneC4ERKS_ */
	class CBoneConstraintPoseSpaceBone & operator=(class CBoneConstraintPoseSpaceBone *, const class CBoneConstraintPoseSpaceBone  &); /* linkage=_ZN28CBoneConstraintPoseSpaceBoneaSERKS_ */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN28CBoneConstraintPoseSpaceBone17GetPrimaryBindingEv */
	class CBoneConstraintPoseSpaceBone * Schema_MarkHelperFn(void); /* linkage=_ZN28CBoneConstraintPoseSpaceBone19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN28CBoneConstraintPoseSpaceBone15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <52a4bb8> ../_generated_code/modellib/linuxsteamrt64/release/boneconstraints_h_schema.gen_cpp:1499 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN28CBoneConstraintPoseSpaceBone32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CBoneConstraintPoseSpaceBone *); /* linkage=_ZN28CBoneConstraintPoseSpaceBone38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN28CBoneConstraintPoseSpaceBone20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN28CBoneConstraintPoseSpaceBone22Schema_StaticClassnameEv */
	/* <52a4456> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:472 */
	virtual const class CSchemaClassInfo  * Schema_DynamicBinding(const class CBoneConstraintPoseSpaceBone  *); /* linkage=_ZNK28CBoneConstraintPoseSpaceBone21Schema_DynamicBindingEv */
	void KV3TransferPolymorphicClassname(const class CBoneConstraintPoseSpaceBone  *, char &); /* linkage=_ZN28CBoneConstraintPoseSpaceBone31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class CBoneConstraintPoseSpaceBone * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN28CBoneConstraintPoseSpaceBone32KV3TransferAllocateClassInstanceEPKc */
	virtual void KV3TransferSave(const class CBoneConstraintPoseSpaceBone  *, class CKV3TransferSaveContext *); /* linkage=_ZNK28CBoneConstraintPoseSpaceBone15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class CBoneConstraintPoseSpaceBone *, class CKV3TransferLoadContext *); /* linkage=_ZN28CBoneConstraintPoseSpaceBone15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CBoneConstraintPoseSpaceBone(const class CBoneConstraintPoseSpaceBone  *, class CKV3TransferSaveContext *); /* linkage=_ZNK28CBoneConstraintPoseSpaceBone44KV3TransferSave_CBoneConstraintPoseSpaceBoneEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CBoneConstraintPoseSpaceBone(class CBoneConstraintPoseSpaceBone *, class CKV3TransferLoadContext *); /* linkage=_ZN28CBoneConstraintPoseSpaceBone44KV3TransferLoad_CBoneConstraintPoseSpaceBoneEP23CKV3TransferLoadContext */
	void CBoneConstraintPoseSpaceBone(class CBoneConstraintPoseSpaceBone *); /* linkage=_ZN28CBoneConstraintPoseSpaceBoneC4Ev */
	virtual void ~CBoneConstraintPoseSpaceBone(class CBoneConstraintPoseSpaceBone *); /* linkage=_ZN28CBoneConstraintPoseSpaceBoneD4Ev */
	virtual enum BoneConstraintType_t GetConstraintType(const class CBoneConstraintPoseSpaceBone  *); /* linkage=_ZNK28CBoneConstraintPoseSpaceBone17GetConstraintTypeEv */
	virtual enum BoneConstraintResult_t Compute(const class CBoneConstraintPoseSpaceBone  *, const class CModel  *, class CTransform *, float *, const uint32  *); /* linkage=_ZNK28CBoneConstraintPoseSpaceBone7ComputeEPK6CModelP10CTransformPfPKj */
	virtual bool Finalize(class CBoneConstraintPoseSpaceBone *, const class CModel  *); /* linkage=_ZN28CBoneConstraintPoseSpaceBone8FinalizeEPK6CModel */
	/* <541cc9c> modellib/boneconstraints.cpp:2121 */
	float GetFalloff(const class CBoneConstraintPoseSpaceBone  *); /* linkage=_ZNK28CBoneConstraintPoseSpaceBone10GetFalloffEv */
	/* <541ccf6> modellib/boneconstraints.cpp:2128 */
	void SetFalloff(class CBoneConstraintPoseSpaceBone *, float); /* linkage=_ZN28CBoneConstraintPoseSpaceBone10SetFalloffEf */
	int GetRbfTypeCount(void); /* linkage=_ZN28CBoneConstraintPoseSpaceBone15GetRbfTypeCountEv */
	const char  * RbfTypeName(int); /* linkage=_ZN28CBoneConstraintPoseSpaceBone11RbfTypeNameEi */
	/* <541cd7f> modellib/boneconstraints.cpp:2150 */
	int GetRbfType(const class CBoneConstraintPoseSpaceBone  *); /* linkage=_ZNK28CBoneConstraintPoseSpaceBone10GetRbfTypeEv */
	/* <541cdd9> modellib/boneconstraints.cpp:2157 */
	void SetRbfType(class CBoneConstraintPoseSpaceBone *, int); /* linkage=_ZN28CBoneConstraintPoseSpaceBone10SetRbfTypeEi */
	const char  * GetAttachmentName(const class CBoneConstraintPoseSpaceBone  *); /* linkage=_ZNK28CBoneConstraintPoseSpaceBone17GetAttachmentNameEv */
	void SetAttachmentName(class CBoneConstraintPoseSpaceBone *, const char  *); /* linkage=_ZN28CBoneConstraintPoseSpaceBone17SetAttachmentNameEPKc */
	int GetOutputCount(const class CBoneConstraintPoseSpaceBone  *); /* linkage=_ZNK28CBoneConstraintPoseSpaceBone14GetOutputCountEv */
	void ClearOutputs(class CBoneConstraintPoseSpaceBone *); /* linkage=_ZN28CBoneConstraintPoseSpaceBone12ClearOutputsEv */
	const char  * GetOutputBone(const class CBoneConstraintPoseSpaceBone  *, int); /* linkage=_ZNK28CBoneConstraintPoseSpaceBone13GetOutputBoneEi */
	int AddOutputBone(class CBoneConstraintPoseSpaceBone *, const char  *); /* linkage=_ZN28CBoneConstraintPoseSpaceBone13AddOutputBoneEPKc */
	int GetInputCount(const class CBoneConstraintPoseSpaceBone  *); /* linkage=_ZNK28CBoneConstraintPoseSpaceBone13GetInputCountEv */
	void ClearInputs(class CBoneConstraintPoseSpaceBone *); /* linkage=_ZN28CBoneConstraintPoseSpaceBone11ClearInputsEv */
	int GetInputTransformCount(const class CBoneConstraintPoseSpaceBone  *, int); /* linkage=_ZNK28CBoneConstraintPoseSpaceBone22GetInputTransformCountEi */
	const class Vector  & GetInputValue(const class CBoneConstraintPoseSpaceBone  *, int); /* linkage=_ZNK28CBoneConstraintPoseSpaceBone13GetInputValueEi */
	const class CTransform  & GetInputValueTransform(const class CBoneConstraintPoseSpaceBone  *, int, int); /* linkage=_ZNK28CBoneConstraintPoseSpaceBone22GetInputValueTransformEii */
	int AddInputValue(class CBoneConstraintPoseSpaceBone *, const class Vector  &); /* linkage=_ZN28CBoneConstraintPoseSpaceBone13AddInputValueERK6Vector */
	bool SetInputValueTransform(class CBoneConstraintPoseSpaceBone *, int, int, const class CTransform  &); /* linkage=_ZN28CBoneConstraintPoseSpaceBone22SetInputValueTransformEiiRK10CTransform */
	void Finalize(class CBoneConstraintPoseSpaceBone *); /* linkage=_ZN28CBoneConstraintPoseSpaceBone8FinalizeEv */
	void TransferPostSaveFn(const class CBoneConstraintPoseSpaceBone  *, class CKV3TransferSaveContext *); /* linkage=_ZNK28CBoneConstraintPoseSpaceBone18TransferPostSaveFnEP23CKV3TransferSaveContext */
	void TransferPostLoadFn(class CBoneConstraintPoseSpaceBone *, class CKV3TransferLoadContext *); /* linkage=_ZN28CBoneConstraintPoseSpaceBone18TransferPostLoadFnEP23CKV3TransferLoadContext */
};

// <05418D1E> ../public/modellib/boneconstraints.h:472
void CBoneConstraintPoseSpaceBone::Schema_DynamicBinding()
{
} /* size: 0 */

// <052A4456> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:472
// function calls: 3
void CBoneConstraintPoseSpaceBone::Schema_DynamicBinding()
{
	GetPrimaryBinding(void); // 1499
	Schema_VerifyBindingIsRegistered(void); // 472
	GetPrimaryBinding(void); // 472
} /* size: 75, inline expansions: 3 (78 bytes) */

// <052A24B9> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:472
inline void CBoneConstraintPoseSpaceBone::Schema_DynamicBinding()
{
} /* size: 0 */

// <0527E7CC> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:478
void CBoneConstraintPoseSpaceBone::CBoneConstraintPoseSpaceBone()
{
} /* size: 0 */

// <0527E804> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/boneconstraints.h:479
void CBoneConstraintPoseSpaceBone::~CBoneConstraintPoseSpaceBone()
{
} /* size: 0 */

// <05418D06> ../public/modellib/boneconstraints.h:481
void CBoneConstraintPoseSpaceBone::GetConstraintType()
{
} /* size: 0 */

