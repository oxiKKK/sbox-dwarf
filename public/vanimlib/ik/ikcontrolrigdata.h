
//
// public/vanimlib/ik/ikcontrolrigdata.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	structs: 5
//

// <033AAB97> ../public/vanimlib/ik/ikcontrolrigdata.h:17
// variable: 1
inline void Pairs(void)
{
	KV3Transfer_EnumHelpers_StringPair_t<IKSystemType> s_Elements; // 17
} /* size: 0, variables: 1 */

// <0339FC33> ../public/vanimlib/ik/ikcontrolrigdata.h:17
// member function: 1
// static member variables: 3
// struct size: 1
struct KV3Transfer_EnumHelpers_t<IKSystemType> {
	static const bool is_present = 1; /* 0 0 */
	static const enum IKSystemType ENUM_COUNT = 3; /* 0 0 */
	static const enum IKSystemType ENUM_DEFAULT = 1; /* 0 0 */
	/* ../public/vanimlib/ik/ikcontrolrigdata.h:17 */
	KV3Transfer_EnumHelpers_StringPairList_t<IKSystemType> Pairs(void);
};

// <00CE3994> ../public/vanimlib/ik/ikcontrolrigdata.h:23
void CIKControlRigData_t::CIKControlRigData_t()
{
} /* size: 0 */

// <00CE3978> ../public/vanimlib/ik/ikcontrolrigdata.h:23
inline void CIKControlRigData_t::CIKControlRigData_t()
{
} /* size: 0 */

// <00CE3961> ../public/vanimlib/ik/ikcontrolrigdata.h:23
void CIKControlRigData_t::~CIKControlRigData_t()
{
} /* size: 0 */

// <00CE3945> ../public/vanimlib/ik/ikcontrolrigdata.h:23
inline void CIKControlRigData_t::~CIKControlRigData_t()
{
} /* size: 0 */

// <000F2B73> ../public/vanimlib/ik/ikcontrolrigdata.h:23
inline void CIKControlRigData_t::operator=(const CIKControlRigData_t &)
{
} /* size: 0 */

// <000CC124> ../public/vanimlib/ik/ikcontrolrigdata.h:23
// member functions: 5
// member variables: 10
// struct size: 96
struct CIKControlRigData_t {
	/* ../public/vanimlib/ik/ikcontrolrigdata.h:26 */
	void KV3TransferSave(const CIKControlRigData_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikcontrolrigdata.h:27 */
	void KV3TransferLoad(CIKControlRigData_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikcontrolrigdata.h:29 */
	bool Initialize(CIKControlRigData_t* , const CModel* );
	CUtlVector<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> > m_ChainData; /* 0 32 */
	IKBoneNameAndIndex_t m_TiltBone; /* 32 16 */
	float m_flInitialMasterBlendAmount; /* 48 4 */
	float m_flInitialTiltBoneInfluence; /* 52 4 */
	float m_flDefaultTiltSpringStrength; /* 56 4 */
	CUtlString m_SequenceNameForNeutralReferencePose; /* 64 8 */
	float m_flAbsOriginDropHeight; /* 72 4 */
	float m_flAbsOriginDropSpringStrength; /* 76 4 */
	IKSystemType m_SystemType; /* 80 4 */
	CUtlString m_MasterBlendAnimgraphParameterName; /* 88 8 */
	CIKControlRigData_t& operator=(CIKControlRigData_t* , const CIKControlRigData_t& );
	void ~CIKControlRigData_t(CIKControlRigData_t* );
};

// <00B7338E> ../public/vanimlib/ik/ikcontrolrigdata.h:23
// member functions: 5
// member variables: 10
// struct size: 96
struct CIKControlRigData_t {
	/* ../public/vanimlib/ik/ikcontrolrigdata.h:26 */
	void KV3TransferSave(const CIKControlRigData_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikcontrolrigdata.h:27 */
	void KV3TransferLoad(CIKControlRigData_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikcontrolrigdata.h:29 */
	bool Initialize(CIKControlRigData_t* , const CModel* );
	CUtlVector<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> > m_ChainData; /* 0 32 */
	IKBoneNameAndIndex_t m_TiltBone; /* 32 16 */
	float m_flInitialMasterBlendAmount; /* 48 4 */
	float m_flInitialTiltBoneInfluence; /* 52 4 */
	float m_flDefaultTiltSpringStrength; /* 56 4 */
	CUtlString m_SequenceNameForNeutralReferencePose; /* 64 8 */
	float m_flAbsOriginDropHeight; /* 72 4 */
	float m_flAbsOriginDropSpringStrength; /* 76 4 */
	IKSystemType m_SystemType; /* 80 4 */
	CUtlString m_MasterBlendAnimgraphParameterName; /* 88 8 */
	void ~CIKControlRigData_t(CIKControlRigData_t* );
	void CIKControlRigData_t(CIKControlRigData_t* );
};

// <0101D9DE> ../public/vanimlib/ik/ikcontrolrigdata.h:23
// member functions: 3
// member variables: 10
// struct size: 96
struct CIKControlRigData_t {
	/* ../public/vanimlib/ik/ikcontrolrigdata.h:26 */
	void KV3TransferSave(const CIKControlRigData_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikcontrolrigdata.h:27 */
	void KV3TransferLoad(CIKControlRigData_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikcontrolrigdata.h:29 */
	bool Initialize(CIKControlRigData_t* , const CModel* );
	CUtlVector<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> > m_ChainData; /* 0 32 */
	IKBoneNameAndIndex_t m_TiltBone; /* 32 16 */
	float m_flInitialMasterBlendAmount; /* 48 4 */
	float m_flInitialTiltBoneInfluence; /* 52 4 */
	float m_flDefaultTiltSpringStrength; /* 56 4 */
	CUtlString m_SequenceNameForNeutralReferencePose; /* 64 8 */
	float m_flAbsOriginDropHeight; /* 72 4 */
	float m_flAbsOriginDropSpringStrength; /* 76 4 */
	IKSystemType m_SystemType; /* 80 4 */
	CUtlString m_MasterBlendAnimgraphParameterName; /* 88 8 */
};

// <032C7F01> ../public/vanimlib/ik/ikcontrolrigdata.h:23
// member functions: 3
// member variables: 10
// struct size: 96
struct CIKControlRigData_t {
	/* ../public/vanimlib/ik/ikcontrolrigdata.h:25 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
	/* ../public/vanimlib/ik/ikcontrolrigdata.h:26 */
	void KV3TransferSave(const CIKControlRigData_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikcontrolrigdata.h:27 */
	void KV3TransferLoad(CIKControlRigData_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikcontrolrigdata.h:29 */
	bool Initialize(CIKControlRigData_t* , const CModel* );
	CUtlVector<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> > m_ChainData; /* 0 32 */
	IKBoneNameAndIndex_t m_TiltBone; /* 32 16 */
	float m_flInitialMasterBlendAmount; /* 48 4 */
	float m_flInitialTiltBoneInfluence; /* 52 4 */
	float m_flDefaultTiltSpringStrength; /* 56 4 */
	CUtlString m_SequenceNameForNeutralReferencePose; /* 64 8 */
	float m_flAbsOriginDropHeight; /* 72 4 */
	float m_flAbsOriginDropSpringStrength; /* 76 4 */
	IKSystemType m_SystemType; /* 80 4 */
	CUtlString m_MasterBlendAnimgraphParameterName; /* 88 8 */
};

