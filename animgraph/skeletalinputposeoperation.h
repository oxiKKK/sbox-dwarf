
//
// animgraph/skeletalinputposeoperation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//	class: 1
//	structs: 9
//

// <01720835> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:13
void FingerSource_t::FingerSource_t()
{
} /* size: 0 */

// <01720819> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:13
inline void FingerSource_t::FingerSource_t()
{
} /* size: 0 */

// <0121F264> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:13
// member function: 1
// member variables: 2
// struct size: 8
struct FingerSource_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:15 */
	void Init(FingerSource_t* , const CFingerSource& );
	AnimVRFinger_t m_nFingerIndex; /* 0 4 */
	float m_flFingerWeight; /* 4 4 */
};

// <01710B86> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:13
// member functions: 2
// member variables: 2
// struct size: 8
struct FingerSource_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:15 */
	void Init(FingerSource_t* , const CFingerSource& );
	AnimVRFinger_t m_nFingerIndex; /* 0 4 */
	float m_flFingerWeight; /* 4 4 */
	void FingerSource_t(FingerSource_t* );
};

// <01720734> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:22
void FingerBone_t::FingerBone_t()
{
} /* size: 0 */

// <01720718> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:22
inline void FingerBone_t::FingerBone_t()
{
} /* size: 0 */

// <0121F2C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:22
// member function: 1
// member variables: 7
// struct size: 52
struct FingerBone_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:24 */
	void Init(FingerBone_t* , CAnimGraphInitContext& , const CFingerBone& );
	BoneIndex_t m_boneIndex; /* 0 4 */
	Vector m_hingeAxis; /* 4 12 */
	Vector m_vCapsulePos1; /* 16 12 */
	Vector m_vCapsulePos2; /* 28 12 */
	float m_flMinAngle; /* 40 4 */
	float m_flMaxAngle; /* 44 4 */
	float m_flRadius; /* 48 4 */
};

// <01710BFB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:22
// member functions: 2
// member variables: 7
// struct size: 52
struct FingerBone_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:24 */
	void Init(FingerBone_t* , CAnimGraphInitContext& , const CFingerBone& );
	BoneIndex_t m_boneIndex; /* 0 4 */
	Vector m_hingeAxis; /* 4 12 */
	Vector m_vCapsulePos1; /* 16 12 */
	Vector m_vCapsulePos2; /* 28 12 */
	float m_flMinAngle; /* 40 4 */
	float m_flMaxAngle; /* 44 4 */
	float m_flRadius; /* 48 4 */
	void FingerBone_t(FingerBone_t* );
};

// <01720306> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:36
void FingerChain_t::FingerChain_t()
{
} /* size: 0 */

// <017202EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:36
inline void FingerChain_t::FingerChain_t()
{
} /* size: 0 */

// <0121FCFA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:36
// member functions: 3
// member variables: 9
// struct size: 60
struct FingerChain_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:38 */
	void Init(FingerChain_t* , CAnimGraphInitContext& , const CFingerChain& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:39 */
	BoneIndex_t GetKnuckleBoneIndex(const FingerChain_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:40 */
	AnimVRFinger_t GetPrimaryInfluence(const FingerChain_t* );
	CRelativeArray<FingerSource_t> m_targets; /* 0 8 */
	CRelativeArray<FingerBone_t> m_bones; /* 8 8 */
	Vector m_vTipOffset; /* 16 12 */
	Vector m_vSplayHingeAxis; /* 28 12 */
	BoneIndex_t m_tipParentBoneIndex; /* 40 4 */
	BoneIndex_t m_metacarpalBoneIndex; /* 44 4 */
	float m_flSplayMinAngle; /* 48 4 */
	float m_flSplayMaxAngle; /* 52 4 */
	float m_flFingerScaleRatio; /* 56 4 */
};

// <0171165C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:36
// member functions: 4
// member variables: 9
// struct size: 60
struct FingerChain_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:38 */
	void Init(FingerChain_t* , CAnimGraphInitContext& , const CFingerChain& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:39 */
	BoneIndex_t GetKnuckleBoneIndex(const FingerChain_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:40 */
	AnimVRFinger_t GetPrimaryInfluence(const FingerChain_t* );
	CRelativeArray<FingerSource_t> m_targets; /* 0 8 */
	CRelativeArray<FingerBone_t> m_bones; /* 8 8 */
	Vector m_vTipOffset; /* 16 12 */
	Vector m_vSplayHingeAxis; /* 28 12 */
	BoneIndex_t m_tipParentBoneIndex; /* 40 4 */
	BoneIndex_t m_metacarpalBoneIndex; /* 44 4 */
	float m_flSplayMinAngle; /* 48 4 */
	float m_flSplayMaxAngle; /* 52 4 */
	float m_flFingerScaleRatio; /* 56 4 */
	void FingerChain_t(FingerChain_t* );
};

// <01720407> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:54
void WristBone_t::WristBone_t()
{
} /* size: 0 */

// <017203EB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:54
inline void WristBone_t::WristBone_t()
{
} /* size: 0 */

// <0121FE17> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:54
// member function: 1
// member variables: 2
// struct size: 48
struct WristBone_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:56 */
	void Init(WristBone_t* , CAnimGraphInitContext& , const CWristBone& , AnimVRHand_t);
	CTransform m_xOffsetTransformMS __attribute__((__aligned__(16))); /* 0 32 */
	BoneIndex_t m_boneIndex; /* 32 4 */
} __attribute__((__aligned__(16)));

// <0171178C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:54
// member functions: 2
// member variables: 2
// struct size: 48
struct WristBone_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:56 */
	void Init(WristBone_t* , CAnimGraphInitContext& , const CWristBone& , AnimVRHand_t);
	CTransform m_xOffsetTransformMS __attribute__((__aligned__(16))); /* 0 32 */
	BoneIndex_t m_boneIndex; /* 32 4 */
	void WristBone_t(WristBone_t* );
} __attribute__((__aligned__(16)));

// <012207F0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:65
// member function: 1
// member variables: 9
// struct size: 40
struct SkeletalInputOpFixedSettings_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:67 */
	void SkeletalInputOpFixedSettings_t(SkeletalInputOpFixedSettings_t* , CAnimGraphInitContext& , AnimVRHandMotionRange_t, const CVrSkeletalInputSettings& );
	CRelativeArray<WristBone_t> m_wristBones; /* 0 8 */
	CRelativeArray<FingerChain_t> m_fingers; /* 8 8 */
	BoneIndex_t m_outerKnuckle1; /* 16 4 */
	BoneIndex_t m_outerKnuckle2; /* 20 4 */
	AnimVRHand_t m_eHand; /* 24 4 */
	AnimVRHandMotionRange_t m_eMotionRange; /* 28 4 */
	AnimVrBoneTransformSource_t m_eTransformSource; /* 32 4 */
	bool m_bEnableIK; /* 36 1 */
	bool m_bEnableCollision; /* 37 1 */
};

// <012452DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:67
void SkeletalInputOpFixedSettings_t::SkeletalInputOpFixedSettings_t(CAnimGraphInitContext& initContext, AnimVRHandMotionRange_t eMotionRange, const CVrSkeletalInputSettings& skelSettings)
{
} /* size: 0 */

// <01712374> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:85
// member functions: 3
// class size: 1
class CSkeletalInputPoseOperation {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:88 */
	struct OpSettings {
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:90 */
		void OpSettings(OpSettings* , CPackedHandle<SkeletalInputOpFixedSettings_t>);
		CPackedHandle<SkeletalInputOpFixedSettings_t> m_hFixedSettings; /* 0 4 */
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:100 */
	PoseHandle MakeOpDescription(CPoseRecipe& , CPackedHandle<SkeletalInputOpFixedSettings_t>);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:103 */
	CAnimPosePtr Evaluate(CPoseUpdateContext& , OpSettings* );
};

// <0173F8AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:90
void OpSettings::OpSettings(CPackedHandle<SkeletalInputOpFixedSettings_t> hFixedSettings)
{
} /* size: 0 */

// <0173F885> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.h:90
inline void OpSettings::OpSettings(CPackedHandle<SkeletalInputOpFixedSettings_t> hFixedSettings)
{
} /* size: 0 */

