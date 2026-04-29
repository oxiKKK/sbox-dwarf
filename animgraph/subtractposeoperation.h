
//
// animgraph/subtractposeoperation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <017078DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractposeoperation.h:9
// member functions: 4
// class size: 1
class CSubtractPoseOperation {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractposeoperation.h:12 */
	struct OpSettings {
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractposeoperation.h:14 */
		void OpSettings(OpSettings* , PoseHandle, PoseHandle, bool, bool);
		PoseHandle m_hBasePose; /* 0 1 */
		PoseHandle m_hSubPose; /* 1 1 */
		bool m_bApplyToChannelsSeparately; /* 2 1 */
		bool m_bModelSpace; /* 3 1 */
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractposeoperation.h:30 */
	PoseHandle MakeOpDescription(CPoseRecipe& , PoseHandle, PoseHandle, bool, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractposeoperation.h:33 */
	CAnimPosePtr Evaluate(CPoseUpdateContext& , OpSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractposeoperation.h:35 */
	void SubtractPoses(CPoseUpdateContext& , const CAnimPosePtr& , const CAnimPoseConstPtr& , bool, bool);
};

// <01780A87> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractposeoperation.h:14
void OpSettings::OpSettings(PoseHandle hBasePose, PoseHandle hSubPose, bool bApplyToChannelsSeparately, bool bModelSpace)
{
} /* size: 0 */

// <01780A3E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractposeoperation.h:14
inline void OpSettings::OpSettings(PoseHandle hBasePose, PoseHandle hSubPose, bool bApplyToChannelsSeparately, bool bModelSpace)
{
} /* size: 0 */

