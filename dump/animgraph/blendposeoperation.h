
//
// animgraph/blendposeoperation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <01705B19> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendposeoperation.h:12
// member functions: 4
// class size: 1
class CBlendPoseOperation {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendposeoperation.h:15 */
	struct OpSettings {
		CRelativeArray<unsigned char> m_pPoses; /* 0 8 */
		CRelativeArray<float> m_pWeights; /* 8 8 */
		void OpSettings(OpSettings* );
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendposeoperation.h:23 */
	PoseHandle MakeOpDescription(CPoseRecipe& , const PoseHandle* , const float* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendposeoperation.h:26 */
	CAnimPosePtr Evaluate(CPoseUpdateContext& , OpSettings* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendposeoperation.h:28 */
	CAnimPosePtr BlendPoses(CPoseUpdateContext& , CAnimPosePtr* , float* , int);
};

// <01722637> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendposeoperation.h:15
void OpSettings::OpSettings()
{
} /* size: 0 */

// <0172261B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendposeoperation.h:15
inline void OpSettings::OpSettings()
{
} /* size: 0 */

