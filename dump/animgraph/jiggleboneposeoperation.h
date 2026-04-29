
//
// animgraph/jiggleboneposeoperation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	class: 1
//	structs: 6
//

// <01720FBF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:25
void JiggleBoneStatus_t::JiggleBoneStatus_t()
{
} /* size: 0 */

// <01720FA3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:25
inline void JiggleBoneStatus_t::JiggleBoneStatus_t()
{
} /* size: 0 */

// <0170F013> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:25
// member functions: 2
// member variables: 4
// struct size: 64
struct JiggleBoneStatus_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:27 */
	void Constrain(JiggleBoneStatus_t* , const VectorAligned& , const VectorAligned& , float);
	VectorAligned m_vLastSimPosition __attribute__((__aligned__(16))); /* 0 16 */
	VectorAligned m_vLastVelocity __attribute__((__aligned__(16))); /* 16 16 */
	VectorAligned m_vLastAnimPosition __attribute__((__aligned__(16))); /* 32 16 */
	VectorAligned m_vLastAnimVelocity __attribute__((__aligned__(16))); /* 48 16 */
	void JiggleBoneStatus_t(JiggleBoneStatus_t* );
} __attribute__((__aligned__(16)));

// <017E0CF9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:25
// member function: 1
// member variables: 4
// struct size: 64
struct JiggleBoneStatus_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:27 */
	void Constrain(JiggleBoneStatus_t* , const VectorAligned& , const VectorAligned& , float);
	VectorAligned m_vLastSimPosition __attribute__((__aligned__(16))); /* 0 16 */
	VectorAligned m_vLastVelocity __attribute__((__aligned__(16))); /* 16 16 */
	VectorAligned m_vLastAnimPosition __attribute__((__aligned__(16))); /* 32 16 */
	VectorAligned m_vLastAnimVelocity __attribute__((__aligned__(16))); /* 48 16 */
} __attribute__((__aligned__(16)));

// <01720EA7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:43
void JiggleBoneSettings_t::JiggleBoneSettings_t()
{
} /* size: 0 */

// <01720E8B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:43
inline void JiggleBoneSettings_t::JiggleBoneSettings_t()
{
} /* size: 0 */

// <010F9A46> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:43
// member functions: 4
// member variables: 7
// struct size: 44
struct JiggleBoneSettings_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:46 */
	CTransform GetBoneToSimSpaceTransform(const JiggleBoneSettings_t* , const CPoseUpdateContext& , const CAnimPosePtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:49 */
	VectorAligned GetTargetPosSimSpace(const JiggleBoneSettings_t* , const CAnimPosePtr& , const CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:52 */
	void SetNewBonePosition(const JiggleBoneSettings_t* , const CPoseUpdateContext& , const CAnimPosePtr& , const CTransform& , const VectorAligned& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:55 */
	VectorAligned ConstrainPosition(const JiggleBoneSettings_t* , const CTransform& , const VectorAligned& , const VectorAligned& );
	BoneIndex_t m_nBoneIndex; /* 0 4 */
	float m_flSpringStrength; /* 4 4 */
	float m_flMaxTimeStep; /* 8 4 */
	float m_flDamping; /* 12 4 */
	Vector m_vBoundsMaxLS; /* 16 12 */
	Vector m_vBoundsMinLS; /* 28 12 */
	JiggleBoneSimSpace m_eSimSpace; /* 40 4 */
};

// <0170F0B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:43
// member functions: 5
// member variables: 7
// struct size: 44
struct JiggleBoneSettings_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:46 */
	CTransform GetBoneToSimSpaceTransform(const JiggleBoneSettings_t* , const CPoseUpdateContext& , const CAnimPosePtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:49 */
	VectorAligned GetTargetPosSimSpace(const JiggleBoneSettings_t* , const CAnimPosePtr& , const CTransform& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:52 */
	void SetNewBonePosition(const JiggleBoneSettings_t* , const CPoseUpdateContext& , const CAnimPosePtr& , const CTransform& , const VectorAligned& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:55 */
	VectorAligned ConstrainPosition(const JiggleBoneSettings_t* , const CTransform& , const VectorAligned& , const VectorAligned& );
	BoneIndex_t m_nBoneIndex; /* 0 4 */
	float m_flSpringStrength; /* 4 4 */
	float m_flMaxTimeStep; /* 8 4 */
	float m_flDamping; /* 12 4 */
	Vector m_vBoundsMaxLS; /* 16 12 */
	Vector m_vBoundsMinLS; /* 28 12 */
	JiggleBoneSimSpace m_eSimSpace; /* 40 4 */
	void JiggleBoneSettings_t(JiggleBoneSettings_t* );
};

// <0170F6DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:80
// member function: 1
// member variables: 2
// struct size: 12
struct JiggleBoneStatusList_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:82 */
	void JiggleBoneStatusList_t(JiggleBoneStatusList_t* , CSaveablePackedData& , int);
	CRelativeArray<JiggleBoneStatus_t> m_boneStatus; /* 0 8 */
	bool m_bReset; /* 8 1 */
};

// <017E854E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:82
void JiggleBoneStatusList_t::JiggleBoneStatusList_t(CSaveablePackedData& packedData, int nNumBones)
{
} /* size: 0 */

// <010FA062> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:89
// member function: 1
// member variable: 1
// struct size: 8
struct JiggleBoneSettingsList_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:91 */
	void JiggleBoneSettingsList_t(JiggleBoneSettingsList_t* , CPackedData& , int);
	CRelativeArray<JiggleBoneSettings_t> m_boneSettings; /* 0 8 */
};

// <017E8582> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:91
void JiggleBoneSettingsList_t::JiggleBoneSettingsList_t(CPackedData& packedData, int nNumBones)
{
} /* size: 0 */

// <0170FE56> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:98
// member functions: 3
// class size: 1
class CJiggleBonePoseOperation {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:101 */
	struct OpSettings {
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:103 */
		void OpSettings(OpSettings* , PoseHandle, CPackedHandle<JiggleBoneStatusList_t>, CPackedHandle<JiggleBoneSettingsList_t>);
		CPackedHandle<JiggleBoneStatusList_t> m_pInstanceSettings; /* 0 4 */
		CPackedHandle<JiggleBoneSettingsList_t> m_hFixedSettings; /* 4 4 */
		PoseHandle m_hBasePose; /* 8 1 */
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:116 */
	PoseHandle MakeOpDescription(CPoseRecipe& , PoseHandle, CPackedHandle<JiggleBoneStatusList_t>, CPackedHandle<JiggleBoneSettingsList_t>);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:119 */
	CAnimPosePtr Evaluate(CPoseUpdateContext& , OpSettings* );
};

// <0174D8D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:103
void OpSettings::OpSettings(PoseHandle hBasePose, CPackedHandle<JiggleBoneStatusList_t> hInstanceSettings, CPackedHandle<JiggleBoneSettingsList_t> hFixedSettings)
{
} /* size: 0 */

// <0174D895> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.h:103
inline void OpSettings::OpSettings(PoseHandle hBasePose, CPackedHandle<JiggleBoneStatusList_t> hInstanceSettings, CPackedHandle<JiggleBoneSettingsList_t> hFixedSettings)
{
} /* size: 0 */

