
//
// animgraph/choreoposeoperation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <01706649> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoposeoperation.h:17
// member functions: 3
// class size: 1
class CChoreoPoseOperation {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoposeoperation.h:19 */
	struct OpSettings {
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoposeoperation.h:21 */
		void OpSettings(OpSettings* , const CChoreoInstanceData* , PoseHandle);
		CRelativeOffset<const CChoreoInstanceData> m_pInstData; /* 0 4 */
		PoseHandle m_hChildPose; /* 4 1 */
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoposeoperation.h:31 */
	PoseHandle MakeOpDescription(CPoseRecipe& , const CChoreoInstanceData* , PoseHandle);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoposeoperation.h:34 */
	CAnimPosePtr Evaluate(CPoseUpdateContext& , OpSettings* );
};

// <017826EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoposeoperation.h:21
void OpSettings::OpSettings(const CChoreoInstanceData* pInstData, PoseHandle hChildPose)
{
} /* size: 0 */

// <017826B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoposeoperation.h:21
inline void OpSettings::OpSettings(const CChoreoInstanceData* pInstData, PoseHandle hChildPose)
{
} /* size: 0 */

