
//
// animgraph/lookatposeoperation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	class: 1
//	structs: 3
//

// <01160799> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatposeoperation.h:15
void LookAtBone_t::LookAtBone_t()
{
} /* size: 0 */

// <0116077D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatposeoperation.h:15
inline void LookAtBone_t::LookAtBone_t()
{
} /* size: 0 */

// <01101072> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatposeoperation.h:15
// member function: 1
// member variables: 2
// struct size: 8
struct LookAtBone_t {
	int m_index; /* 0 4 */
	float m_weight; /* 4 4 */
	void LookAtBone_t(LookAtBone_t* );
};

// <0191F01C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatposeoperation.h:24
void LookAtOpFixedSettings_t::LookAtOpFixedSettings_t()
{
} /* size: 0 */

// <0191F000> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatposeoperation.h:24
inline void LookAtOpFixedSettings_t::LookAtOpFixedSettings_t()
{
} /* size: 0 */

// <0110158A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatposeoperation.h:24
// member variables: 9
// struct size: 192
struct LookAtOpFixedSettings_t {
	CAnimAttachment m_attachment __attribute__((__aligned__(16))); /* 0 128 */
	CAnimInputDamping m_damping; /* 128 0 */
	CRelativeArray<LookAtBone_t> m_bones; /* 160 8 */
	float m_flYawLimit; /* 168 4 */
	float m_flPitchLimit; /* 172 4 */
	float m_flHysteresisInnerAngle; /* 176 4 */
	float m_flHysteresisOuterAngle; /* 180 4 */
	bool m_bTargetIsPosition; /* 184 1 */
	bool m_bUseHysteresis; /* 185 1 */
} __attribute__((__aligned__(16)));

// <0191EF9A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatposeoperation.h:40
void LookAtOpInstanceSettings_t::LookAtOpInstanceSettings_t()
{
} /* size: 0 */

// <0191EF7E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatposeoperation.h:40
inline void LookAtOpInstanceSettings_t::LookAtOpInstanceSettings_t()
{
} /* size: 0 */

// <0171059E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatposeoperation.h:40
// member variables: 6
// struct size: 52
struct LookAtOpInstanceSettings_t {
	CDampedValue m_pitch; /* 0 12 */
	CDampedValue m_yaw; /* 12 12 */
	Vector m_vTargetPosModelSpace; /* 24 12 */
	Vector m_vLastDirectionWS; /* 36 12 */
	bool m_bReset; /* 48 1 */
	bool m_bInHysteresisRange; /* 49 1 */
};

// <017107F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatposeoperation.h:53
// member functions: 5
// class size: 1
class CLookAtPoseOperation {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatposeoperation.h:56 */
	struct OpSettings {
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatposeoperation.h:58 */
		void OpSettings(OpSettings* , PoseHandle, float, CPackedHandle<LookAtOpInstanceSettings_t>, CPackedHandle<LookAtOpFixedSettings_t>);
		CPackedHandle<LookAtOpInstanceSettings_t> m_pInstanceSettings; /* 0 4 */
		CPackedHandle<LookAtOpFixedSettings_t> m_hFixedSettings; /* 4 4 */
		PoseHandle m_hChildPose; /* 8 1 */
		float m_flWeight; /* 12 4 */
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatposeoperation.h:73 */
	PoseHandle MakeOpDescription(CPoseRecipe& , PoseHandle, float, CPackedHandle<LookAtOpInstanceSettings_t>, CPackedHandle<LookAtOpFixedSettings_t>);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatposeoperation.h:76 */
	CAnimPosePtr Evaluate(CPoseUpdateContext& , OpSettings* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatposeoperation.h:79 */
	void VectorToAngles(const VectorAligned& , float& , float& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatposeoperation.h:80 */
	void AnglesToVector(float, float, VectorAligned& );
};

// <01747A69> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatposeoperation.h:58
void OpSettings::OpSettings(PoseHandle hChildPose, float flWeight, CPackedHandle<LookAtOpInstanceSettings_t> hInstanceSettings, CPackedHandle<LookAtOpFixedSettings_t> hFixedSettings)
{
} /* size: 0 */

// <01747A20> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/lookatposeoperation.h:58
inline void OpSettings::OpSettings(PoseHandle hChildPose, float flWeight, CPackedHandle<LookAtOpInstanceSettings_t> hInstanceSettings, CPackedHandle<LookAtOpFixedSettings_t> hFixedSettings)
{
} /* size: 0 */

