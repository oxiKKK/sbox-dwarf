
//
// public/vanimlib/ik/ikchainolddata.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	structs: 4
//

// <0004131E> ../public/vanimlib/ik/ikchainolddata.h:11
// member functions: 9
// member variables: 2
// struct size: 24
struct IKJointConstraintPair_t {
	/* ../public/vanimlib/ik/ikchainolddata.h:15 */
	void KV3TransferSave(const IKJointConstraintPair_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikchainolddata.h:16 */
	void KV3TransferLoad(IKJointConstraintPair_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikchainolddata.h:17 */
	void IKJointConstraintPair_t(IKJointConstraintPair_t* );
	/* ../public/vanimlib/ik/ikchainolddata.h:18 */
	void ~IKJointConstraintPair_t(IKJointConstraintPair_t* );
	/* ../public/vanimlib/ik/ikchainolddata.h:20 */
	void IKJointConstraintPair_t(IKJointConstraintPair_t* , const CUtlString& , IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikchainolddata.h:21 */
	void IKJointConstraintPair_t(IKJointConstraintPair_t* , const IKJointConstraintPair_t& );
	/* ../public/vanimlib/ik/ikchainolddata.h:22 */
	void operator=(IKJointConstraintPair_t* , const IKJointConstraintPair_t& );
	/* ../public/vanimlib/ik/ikchainolddata.h:24 */
	bool Initialize(IKJointConstraintPair_t* , const CModel* );
	IKBoneNameAndIndex_t m_Bone; /* 0 16 */
	IIKJointConstraintData * m_pJointConstraintData; /* 16 8 */
	/* ../public/vanimlib/ik/ikchainolddata.h:29 */
	void GetItemName(void* , CUtlString* );
};

// <03365352> ../public/vanimlib/ik/ikchainolddata.h:11
// member functions: 9
// member variables: 2
// struct size: 24
struct IKJointConstraintPair_t {
	/* ../public/vanimlib/ik/ikchainolddata.h:14 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
	/* ../public/vanimlib/ik/ikchainolddata.h:15 */
	void KV3TransferSave(const IKJointConstraintPair_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikchainolddata.h:16 */
	void KV3TransferLoad(IKJointConstraintPair_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikchainolddata.h:17 */
	void IKJointConstraintPair_t(IKJointConstraintPair_t* );
	/* ../public/vanimlib/ik/ikchainolddata.h:18 */
	void ~IKJointConstraintPair_t(IKJointConstraintPair_t* );
	/* ../public/vanimlib/ik/ikchainolddata.h:20 */
	void IKJointConstraintPair_t(IKJointConstraintPair_t* , const CUtlString& , IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikchainolddata.h:21 */
	void IKJointConstraintPair_t(IKJointConstraintPair_t* , const IKJointConstraintPair_t& );
	/* ../public/vanimlib/ik/ikchainolddata.h:22 */
	void operator=(IKJointConstraintPair_t* , const IKJointConstraintPair_t& );
	/* ../public/vanimlib/ik/ikchainolddata.h:24 */
	bool Initialize(IKJointConstraintPair_t* , const CModel* );
	IKBoneNameAndIndex_t m_Bone; /* 0 16 */
	IIKJointConstraintData * m_pJointConstraintData; /* 16 8 */
	/* ../public/vanimlib/ik/ikchainolddata.h:29 */
	void GetItemName(void* , CUtlString* );
};

// <00041495> ../public/vanimlib/ik/ikchainolddata.h:32
// member functions: 7
// member variables: 19
// struct size: 224
struct CIKChainOldData_t {
	/* ../public/vanimlib/ik/ikchainolddata.h:35 */
	void KV3TransferSave(const CIKChainOldData_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikchainolddata.h:36 */
	void KV3TransferLoad(CIKChainOldData_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikchainolddata.h:38 */
	void CIKChainOldData_t(CIKChainOldData_t* );
	/* ../public/vanimlib/ik/ikchainolddata.h:39 */
	void ~CIKChainOldData_t(CIKChainOldData_t* );
	/* ../public/vanimlib/ik/ikchainolddata.h:40 */
	void CIKChainOldData_t(CIKChainOldData_t* , const CIKChainOldData_t& );
	/* ../public/vanimlib/ik/ikchainolddata.h:41 */
	void operator=(CIKChainOldData_t* , const CIKChainOldData_t& );
	/* ../public/vanimlib/ik/ikchainolddata.h:43 */
	bool Initialize(CIKChainOldData_t* , const CModel* );
	CUtlString m_Name; /* 0 8 */
	float m_flEndEffectorZOffsetFromFloor; /* 8 4 */
	IKBoneNameAndIndex_t m_LockBoneInfluenceDriver; /* 16 16 */
	IKBoneNameAndIndex_t m_BoneInfluenceDriver; /* 32 16 */
	IKBoneNameAndIndex_t m_ReverseFootLockBone; /* 48 16 */
	float m_flHyperExtensionLockReleaseDotThreshold; /* 64 4 */
	float m_flMaxLockDistanceToTarget; /* 68 4 */
	float m_flUseTargetInsteadOfLockThreshold; /* 72 4 */
	float m_flBreakRestorationTime; /* 76 4 */
	float m_flSoftenPercentage; /* 80 4 */
	float m_flSoftenTime; /* 84 4 */
	CUtlVector<IIKRuleData*, CUtlMemory<IIKRuleData*, int> > m_RuleData; /* 88 32 */
	IKSolverType m_SolverType; /* 120 4 */
	bool m_bBonesOrientAlongPositiveX; /* 124 1 */
	Vector m_vPole; /* 128 12 */
	CUtlVector<IKJointConstraintPair_t, CUtlMemory<IKJointConstraintPair_t, int> > m_JointConstraintPairs; /* 144 32 */
	IKBoneNameAndIndex_t m_EndEffectorBone; /* 176 16 */
	IKBoneNameAndIndex_t m_EndEffectorTargetBone; /* 192 16 */
	IKBoneNameAndIndex_t m_RootBone; /* 208 16 */
};

// <0339CC51> ../public/vanimlib/ik/ikchainolddata.h:32
// member functions: 7
// member variables: 19
// struct size: 224
struct CIKChainOldData_t {
	/* ../public/vanimlib/ik/ikchainolddata.h:34 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
	/* ../public/vanimlib/ik/ikchainolddata.h:35 */
	void KV3TransferSave(const CIKChainOldData_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikchainolddata.h:36 */
	void KV3TransferLoad(CIKChainOldData_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikchainolddata.h:38 */
	void CIKChainOldData_t(CIKChainOldData_t* );
	/* ../public/vanimlib/ik/ikchainolddata.h:39 */
	void ~CIKChainOldData_t(CIKChainOldData_t* );
	/* ../public/vanimlib/ik/ikchainolddata.h:40 */
	void CIKChainOldData_t(CIKChainOldData_t* , const CIKChainOldData_t& );
	/* ../public/vanimlib/ik/ikchainolddata.h:41 */
	void operator=(CIKChainOldData_t* , const CIKChainOldData_t& );
	/* ../public/vanimlib/ik/ikchainolddata.h:43 */
	bool Initialize(CIKChainOldData_t* , const CModel* );
	CUtlString m_Name; /* 0 8 */
	float m_flEndEffectorZOffsetFromFloor; /* 8 4 */
	IKBoneNameAndIndex_t m_LockBoneInfluenceDriver; /* 16 16 */
	IKBoneNameAndIndex_t m_BoneInfluenceDriver; /* 32 16 */
	IKBoneNameAndIndex_t m_ReverseFootLockBone; /* 48 16 */
	float m_flHyperExtensionLockReleaseDotThreshold; /* 64 4 */
	float m_flMaxLockDistanceToTarget; /* 68 4 */
	float m_flUseTargetInsteadOfLockThreshold; /* 72 4 */
	float m_flBreakRestorationTime; /* 76 4 */
	float m_flSoftenPercentage; /* 80 4 */
	float m_flSoftenTime; /* 84 4 */
	CUtlVector<IIKRuleData*, CUtlMemory<IIKRuleData*, int> > m_RuleData; /* 88 32 */
	IKSolverType m_SolverType; /* 120 4 */
	bool m_bBonesOrientAlongPositiveX; /* 124 1 */
	Vector m_vPole; /* 128 12 */
	CUtlVector<IKJointConstraintPair_t, CUtlMemory<IKJointConstraintPair_t, int> > m_JointConstraintPairs; /* 144 32 */
	IKBoneNameAndIndex_t m_EndEffectorBone; /* 176 16 */
	IKBoneNameAndIndex_t m_EndEffectorTargetBone; /* 192 16 */
	IKBoneNameAndIndex_t m_RootBone; /* 208 16 */
};

// <033A1D7B> ../public/vanimlib/ik/ikchainolddata.h:38
void CIKChainOldData_t::CIKChainOldData_t()
{
} /* size: 0 */

// <033A1D5F> ../public/vanimlib/ik/ikchainolddata.h:39
void CIKChainOldData_t::~CIKChainOldData_t()
{
} /* size: 0 */

