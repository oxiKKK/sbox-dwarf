
//
// animgraph/aimmatrixposeoperation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//	structs: 2
//

// <017F0801> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixposeoperation.h:29
void AimMatrixOpFixedSettings_t::AimMatrixOpFixedSettings_t()
{
} /* size: 0 */

// <017F07E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixposeoperation.h:29
inline void AimMatrixOpFixedSettings_t::AimMatrixOpFixedSettings_t()
{
} /* size: 0 */

// <01003FA8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixposeoperation.h:29
// member variables: 9
// struct size: 224
struct AimMatrixOpFixedSettings_t {
	CAnimAttachment m_attachment __attribute__((__aligned__(16))); /* 0 128 */
	CAnimInputDamping m_damping; /* 128 0 */
	StaticPoseCacheHandle m_poseCacheHandles[11]; /* 160 44 */
	float m_fAngleIncrement; /* 204 4 */
	int m_nSequenceMaxFrame; /* 208 4 */
	int m_nBoneMaskIndex; /* 212 4 */
	bool m_bTargetIsPosition; /* 216 1 */
	bool m_bCanLookStraightDown; /* 217 1 */
	bool m_bModelSpace; /* 218 1 */
} __attribute__((__aligned__(16)));

// <017F077F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixposeoperation.h:44
void AimMatrixOpInstanceSettings_t::AimMatrixOpInstanceSettings_t()
{
} /* size: 0 */

// <017F0763> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixposeoperation.h:44
inline void AimMatrixOpInstanceSettings_t::AimMatrixOpInstanceSettings_t()
{
} /* size: 0 */

// <01705280> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixposeoperation.h:44
// member variables: 4
// struct size: 40
struct AimMatrixOpInstanceSettings_t {
	CDampedValue m_pitch; /* 0 12 */
	CDampedValue m_yaw; /* 12 12 */
	Vector m_vTargetPosModelSpace; /* 24 12 */
	bool m_bReset; /* 36 1 */
};

// <017054BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixposeoperation.h:54
// member functions: 3
// class size: 1
class CAimMatrixPoseOperation {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixposeoperation.h:57 */
	struct OpSettings {
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixposeoperation.h:59 */
		void OpSettings(OpSettings* , PoseHandle, CPackedHandle<AimMatrixOpInstanceSettings_t>, CPackedHandle<AimMatrixOpFixedSettings_t>);
		CPackedHandle<AimMatrixOpInstanceSettings_t> m_pInstanceSettings; /* 0 4 */
		CPackedHandle<AimMatrixOpFixedSettings_t> m_hFixedSettings; /* 4 4 */
		PoseHandle m_hChildPose; /* 8 1 */
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixposeoperation.h:72 */
	PoseHandle MakeOpDescription(CPoseRecipe& , PoseHandle, CPackedHandle<AimMatrixOpInstanceSettings_t>, CPackedHandle<AimMatrixOpFixedSettings_t>);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixposeoperation.h:75 */
	CAnimPosePtr Evaluate(CPoseUpdateContext& , OpSettings* );
};

// <0178906D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixposeoperation.h:59
void OpSettings::OpSettings(PoseHandle hChildPose, CPackedHandle<AimMatrixOpInstanceSettings_t> hInstanceSettings, CPackedHandle<AimMatrixOpFixedSettings_t> hFixedSettings)
{
} /* size: 0 */

// <01789030> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixposeoperation.h:59
inline void OpSettings::OpSettings(PoseHandle hChildPose, CPackedHandle<AimMatrixOpInstanceSettings_t> hInstanceSettings, CPackedHandle<AimMatrixOpFixedSettings_t> hFixedSettings)
{
} /* size: 0 */

