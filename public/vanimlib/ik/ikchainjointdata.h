
//
// public/vanimlib/ik/ikchainjointdata.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	structs: 2
//

// <0004442A> ../public/vanimlib/ik/ikchainjointdata.h:9
// member functions: 10
// member variables: 3
// struct size: 64
struct CIKChainJointData_t {
	/* ../public/vanimlib/ik/ikchainjointdata.h:12 */
	void KV3TransferSave(const CIKChainJointData_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikchainjointdata.h:13 */
	void KV3TransferLoad(CIKChainJointData_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikchainjointdata.h:15 */
	void CIKChainJointData_t(CIKChainJointData_t* );
	/* ../public/vanimlib/ik/ikchainjointdata.h:16 */
	void ~CIKChainJointData_t(CIKChainJointData_t* );
	/* ../public/vanimlib/ik/ikchainjointdata.h:17 */
	void CIKChainJointData_t(CIKChainJointData_t* , const CIKChainJointData_t& );
	/* ../public/vanimlib/ik/ikchainjointdata.h:18 */
	void operator=(CIKChainJointData_t* , const CIKChainJointData_t& );
	/* ../public/vanimlib/ik/ikchainjointdata.h:20 */
	bool Initialize(CIKChainJointData_t* , const CModel* );
	/* ../public/vanimlib/ik/ikchainjointdata.h:23 */
	int GetBoneIndex(const CIKChainJointData_t* );
	/* ../public/vanimlib/ik/ikchainjointdata.h:25 */
	bool HasHingeAxis(const CIKChainJointData_t* );
	/* ../public/vanimlib/ik/ikchainjointdata.h:26 */
	VectorAligned GetLocalSpaceHingeAxis(const CIKChainJointData_t* );
	IKBoneNameAndIndex_t m_Bone; /* 0 16 */
	CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> > m_JointConstraintData; /* 16 32 */
	Quaternion m_qFixupRotation; /* 48 16 */
};

// <03312C72> ../public/vanimlib/ik/ikchainjointdata.h:9
// member functions: 10
// member variables: 3
// struct size: 64
struct CIKChainJointData_t {
	/* ../public/vanimlib/ik/ikchainjointdata.h:11 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
	/* ../public/vanimlib/ik/ikchainjointdata.h:12 */
	void KV3TransferSave(const CIKChainJointData_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikchainjointdata.h:13 */
	void KV3TransferLoad(CIKChainJointData_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikchainjointdata.h:15 */
	void CIKChainJointData_t(CIKChainJointData_t* );
	/* ../public/vanimlib/ik/ikchainjointdata.h:16 */
	void ~CIKChainJointData_t(CIKChainJointData_t* );
	/* ../public/vanimlib/ik/ikchainjointdata.h:17 */
	void CIKChainJointData_t(CIKChainJointData_t* , const CIKChainJointData_t& );
	/* ../public/vanimlib/ik/ikchainjointdata.h:18 */
	void operator=(CIKChainJointData_t* , const CIKChainJointData_t& );
	/* ../public/vanimlib/ik/ikchainjointdata.h:20 */
	bool Initialize(CIKChainJointData_t* , const CModel* );
	/* ../public/vanimlib/ik/ikchainjointdata.h:23 */
	int GetBoneIndex(const CIKChainJointData_t* );
	/* ../public/vanimlib/ik/ikchainjointdata.h:25 */
	bool HasHingeAxis(const CIKChainJointData_t* );
	/* ../public/vanimlib/ik/ikchainjointdata.h:26 */
	VectorAligned GetLocalSpaceHingeAxis(const CIKChainJointData_t* );
	IKBoneNameAndIndex_t m_Bone; /* 0 16 */
	CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> > m_JointConstraintData; /* 16 32 */
	Quaternion m_qFixupRotation; /* 48 16 */
};

// <0331859F> ../public/vanimlib/ik/ikchainjointdata.h:15
void CIKChainJointData_t::CIKChainJointData_t()
{
} /* size: 0 */

// <03318583> ../public/vanimlib/ik/ikchainjointdata.h:16
void CIKChainJointData_t::~CIKChainJointData_t()
{
} /* size: 0 */

// <03318527> ../public/vanimlib/ik/ikchainjointdata.h:17
void CIKChainJointData_t::CIKChainJointData_t(const CIKChainJointData_t& kRhs)
{
} /* size: 0 */

// <03427CD9> ../public/vanimlib/ik/ikchainjointdata.h:23
inline void CIKChainJointData_t::GetBoneIndex()
{
} /* size: 0 */

