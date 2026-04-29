
//
// animgraph/fetchcycleposeoperation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <01705586> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/fetchcycleposeoperation.h:15
// member functions: 4
// class size: 1
class CFetchCyclePoseOperation {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/fetchcycleposeoperation.h:17 */
	struct OpSettings {
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/fetchcycleposeoperation.h:19 */
		void OpSettings(OpSettings* , HSequence, float);
		HSequence m_hSequence; /* 0 4 */
		float m_flCycle; /* 4 4 */
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/fetchcycleposeoperation.h:29 */
	PoseHandle MakeOpDescription(CPoseRecipe& , HSequence, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/fetchcycleposeoperation.h:32 */
	CAnimPosePtr Evaluate(CPoseUpdateContext& , OpSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/fetchcycleposeoperation.h:34 */
	CAnimPosePtr FetchPose(CPoseUpdateContext& , HSequence, float);
};

// <0178900F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/fetchcycleposeoperation.h:19
void OpSettings::OpSettings(HSequence hSequence, float flCycle)
{
} /* size: 0 */

// <01788FDE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/fetchcycleposeoperation.h:19
inline void OpSettings::OpSettings(HSequence hSequence, float flCycle)
{
} /* size: 0 */

