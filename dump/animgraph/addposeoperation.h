
//
// animgraph/addposeoperation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <016D3174> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addposeoperation.h:9
// member functions: 4
// class size: 1
class CAddPoseOperation {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addposeoperation.h:12 */
	struct OpSettings {
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addposeoperation.h:14 */
		void OpSettings(OpSettings* , PoseHandle, PoseHandle, bool, bool);
		PoseHandle m_hBasePose; /* 0 1 */
		PoseHandle m_hAddPose; /* 1 1 */
		bool m_bApplyToChannelsSeparately; /* 2 1 */
		bool m_bModelSpace; /* 3 1 */
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addposeoperation.h:30 */
	PoseHandle MakeOpDescription(CPoseRecipe& , PoseHandle, PoseHandle, bool, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addposeoperation.h:33 */
	CAnimPosePtr Evaluate(CPoseUpdateContext& , OpSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addposeoperation.h:35 */
	void AddPoses(CPoseUpdateContext& , CAnimPose& , const CAnimPose& , bool, bool);
};

// <0178EECD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addposeoperation.h:14
void OpSettings::OpSettings(PoseHandle hBasePose, PoseHandle hAddPose, bool bApplyToChannelsSeparately, bool bModelSpace)
{
} /* size: 0 */

// <0178EE84> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addposeoperation.h:14
inline void OpSettings::OpSettings(PoseHandle hBasePose, PoseHandle hAddPose, bool bApplyToChannelsSeparately, bool bModelSpace)
{
} /* size: 0 */

