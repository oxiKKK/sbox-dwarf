
//
// animgraph/hitreactposeoperation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//	structs: 3
//

// <010F8A34> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.h:16
// member variables: 17
// struct size: 68
struct HitReactFixedSettings_t {
	int m_nWeightListIndex; /* 0 4 */
	int m_nEffectedBoneCount; /* 4 4 */
	float m_flMaxImpactForce; /* 8 4 */
	float m_flMinImpactForce; /* 12 4 */
	float m_flWhipImpactScale; /* 16 4 */
	float m_flCounterRotationScale; /* 20 4 */
	float m_flDistanceFadeScale; /* 24 4 */
	float m_flPropagationScale; /* 28 4 */
	float m_flWhipDelay; /* 32 4 */
	float m_flSpringStrength; /* 36 4 */
	float m_flWhipSpringStrength; /* 40 4 */
	float m_flMaxAngleRadians; /* 44 4 */
	BoneIndex_t m_nHipBoneIndex; /* 48 4 */
	float m_flHipBoneTranslationScale; /* 52 4 */
	float m_flHipDipSpringStrength; /* 56 4 */
	float m_flHipDipImpactScale; /* 60 4 */
	float m_flHipDipDelay; /* 64 4 */
};

// <017EDA7A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.h:42
void HitReactImpact_t::HitReactImpact_t()
{
} /* size: 0 */

// <017EDA5E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.h:42
inline void HitReactImpact_t::HitReactImpact_t()
{
} /* size: 0 */

// <0170E8BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.h:42
// member variables: 5
// struct size: 48
struct HitReactImpact_t {
	VectorAligned m_vHitOffset __attribute__((__aligned__(16))); /* 0 16 */
	VectorAligned m_vHitDirection __attribute__((__aligned__(16))); /* 16 16 */
	BoneIndex_t m_nHitBone; /* 32 4 */
	float m_flHitStrength; /* 36 4 */
	float m_flHitStartTime; /* 40 4 */
} __attribute__((__aligned__(16)));

// <017EDA3C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.h:54
void HitReactInstanceSettings_t::HitReactInstanceSettings_t()
{
} /* size: 0 */

// <017EDA20> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.h:54
inline void HitReactInstanceSettings_t::HitReactInstanceSettings_t()
{
} /* size: 0 */

// <0170E91D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.h:54
// member variable: 1
// struct size: 144
struct HitReactInstanceSettings_t {
	HitReactImpact_t m_impacts[3] __attribute__((__aligned__(16))); /* 0 144 */
} __attribute__((__aligned__(16)));

// <0170EB41> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.h:63
// member functions: 3
// class size: 1
class CHitReactPoseOperation {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.h:66 */
	struct OpSettings {
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.h:68 */
		void OpSettings(OpSettings* , PoseHandle, CPackedHandle<HitReactFixedSettings_t>, CPackedHandle<HitReactInstanceSettings_t>);
		CPackedHandle<HitReactFixedSettings_t> m_hFixedSettings; /* 0 4 */
		CPackedHandle<HitReactInstanceSettings_t> m_hInstanceSettings; /* 4 4 */
		PoseHandle m_hChildPose; /* 8 1 */
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.h:84 */
	PoseHandle MakeOpDescription(CPoseRecipe& , PoseHandle, CPackedHandle<HitReactFixedSettings_t>, CPackedHandle<HitReactInstanceSettings_t>);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.h:87 */
	CAnimPosePtr Evaluate(CPoseUpdateContext& , OpSettings* );
};

// <01756075> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.h:68
void OpSettings::OpSettings(PoseHandle hChildPose, CPackedHandle<HitReactFixedSettings_t> hFixedSettings, CPackedHandle<HitReactInstanceSettings_t> hInstanceSettings)
{
} /* size: 0 */

// <01756038> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.h:68
inline void OpSettings::OpSettings(PoseHandle hChildPose, CPackedHandle<HitReactFixedSettings_t> hFixedSettings, CPackedHandle<HitReactInstanceSettings_t> hInstanceSettings)
{
} /* size: 0 */

