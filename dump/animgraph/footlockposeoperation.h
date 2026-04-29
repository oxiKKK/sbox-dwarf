
//
// animgraph/footlockposeoperation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	class: 1
//	structs: 4
//

// <0172178B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:27
void FootOpTarget::FootOpTarget()
{
} /* size: 0 */

// <0172176F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:27
inline void FootOpTarget::FootOpTarget()
{
} /* size: 0 */

// <01708AE6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:27
// member function: 1
// member variables: 8
// struct size: 64
struct FootOpTarget {
	VectorAligned m_vFootBasePositionWS __attribute__((__aligned__(16))); /* 0 16 */
	VectorAligned m_vFootBaseDirectionWS __attribute__((__aligned__(16))); /* 16 16 */
	VectorAligned m_vFootBaseNormalWS __attribute__((__aligned__(16))); /* 32 16 */
	float m_flProgression; /* 48 4 */
	float m_flTagWeight; /* 52 4 */
	float m_flLockWeight; /* 56 4 */
	bool m_bLockActive; /* 60 1 */
	bool m_bCycleChanged; /* 61 1 */
	void FootOpTarget(FootOpTarget* );
} __attribute__((__aligned__(16)));

// <0172189A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:43
void FootOpFixedInfo::FootOpFixedInfo()
{
} /* size: 0 */

// <0172187E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:43
inline void FootOpFixedInfo::FootOpFixedInfo()
{
} /* size: 0 */

// <010164D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:43
// member variables: 7
// struct size: 64
struct FootOpFixedInfo {
	VectorAligned m_vToeOffset __attribute__((__aligned__(16))); /* 0 16 */
	VectorAligned m_vHeelOffset __attribute__((__aligned__(16))); /* 16 16 */
	BoneIndex_t m_nTargetBoneIndex; /* 32 4 */
	BoneIndex_t m_nAnkleBoneIndex; /* 36 4 */
	BoneIndex_t m_nIKAnchorBoneIndex; /* 40 4 */
	int m_ikChainIndex; /* 44 4 */
	float m_flMaxIKLength; /* 48 4 */
} __attribute__((__aligned__(16)));

// <01016A2C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:68
// member function: 1
// member variables: 15
// struct size: 88
struct FootLockPoseOpFixedSettings {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:70 */
	void FootLockPoseOpFixedSettings(FootLockPoseOpFixedSettings* , CAnimGraphInitContext& , int);
	CRelativeArray<FootOpFixedInfo> m_footInfo; /* 0 8 */
	CAnimInputDamping m_hipDampingSettings; /* 8 0 */
	BoneIndex_t m_nHipBoneIndex; /* 40 4 */
	IKSolverType m_ikSolverType; /* 44 4 */
	bool m_bApplyTilt; /* 48 1 */
	bool m_bApplyHipDrop; /* 49 1 */
	bool m_bAlwaysUseFallbackHinge; /* 50 1 */
	float m_flMaxFootHeight; /* 52 4 */
	float m_flExtensionScale; /* 56 4 */
	bool m_bEnableLockBreaking; /* 60 1 */
	float m_flLockBreakTolerance; /* 64 4 */
	float m_flLockBlendTime; /* 68 4 */
	bool m_bEnableStretching; /* 72 1 */
	float m_flMaxStretchAmount; /* 76 4 */
	float m_flStretchExtensionScale; /* 80 4 */
};

// <017E88BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:70
void FootLockPoseOpFixedSettings::FootLockPoseOpFixedSettings(CAnimGraphInitContext& initContext, int nLockableFootCount)
{
} /* size: 0 */

// <01709708> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:95
// member function: 1
// member variables: 6
// struct size: 80
struct FootLockPoseOpInstanceSettings {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:97 */
	void FootLockPoseOpInstanceSettings(FootLockPoseOpInstanceSettings* , CAnimGraphInitContext& , int);
	CRelativeArray<FootOpTarget> m_targetInfo; /* 0 8 */
	CDampedValue m_dampedHipOffset; /* 8 12 */
	VectorAligned m_vHipShiftWS __attribute__((__aligned__(16))); /* 32 16 */
	VPlane m_WsTiltPlane; /* 48 16 */
	float m_flRootOffset; /* 64 4 */
	bool m_bReset; /* 68 1 */
} __attribute__((__aligned__(16)));

// <017E8887> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:97
void FootLockPoseOpInstanceSettings::FootLockPoseOpInstanceSettings(CAnimGraphInitContext& initContext, int nLockableFootCount)
{
} /* size: 0 */

// <01709997> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:110
// member functions: 3
// class size: 1
class CFootLockPoseOperation {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:113 */
	struct OpSettings {
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:115 */
		void OpSettings(OpSettings* , PoseHandle, CPackedHandle<FootLockPoseOpInstanceSettings>, CPackedHandle<FootLockPoseOpFixedSettings>);
		CPackedHandle<FootLockPoseOpInstanceSettings> m_pInstanceSettings; /* 0 4 */
		CPackedHandle<FootLockPoseOpFixedSettings> m_hFixedSettings; /* 4 4 */
		PoseHandle m_hBasePose; /* 8 1 */
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:128 */
	PoseHandle MakeOpDescription(CPoseRecipe& , PoseHandle, CPackedHandle<FootLockPoseOpInstanceSettings>, CPackedHandle<FootLockPoseOpFixedSettings>);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:131 */
	CAnimPosePtr Evaluate(CPoseUpdateContext& , OpSettings* );
};

// <0177B267> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:115
void OpSettings::OpSettings(PoseHandle hBasePose, CPackedHandle<FootLockPoseOpInstanceSettings> hInstanceSettings, CPackedHandle<FootLockPoseOpFixedSettings> hFixedSettings)
{
} /* size: 0 */

// <0177B22A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.h:115
inline void OpSettings::OpSettings(PoseHandle hBasePose, CPackedHandle<FootLockPoseOpInstanceSettings> hInstanceSettings, CPackedHandle<FootLockPoseOpFixedSettings> hFixedSettings)
{
} /* size: 0 */

