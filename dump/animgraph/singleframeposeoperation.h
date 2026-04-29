
//
// animgraph/singleframeposeoperation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <01710A00> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeposeoperation.h:11
// member functions: 3
// class size: 1
class CSingleFramePoseOperation {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeposeoperation.h:14 */
	struct OpSettings {
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeposeoperation.h:16 */
		void OpSettings(OpSettings* , StaticPoseCacheHandle);
		StaticPoseCacheHandle m_poseCacheHandle; /* 0 4 */
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeposeoperation.h:23 */
	PoseHandle MakeOpDescription(CPoseRecipe& , StaticPoseCacheHandle);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeposeoperation.h:26 */
	CAnimPosePtr Evaluate(CPoseUpdateContext& , OpSettings* );
};

// <017404A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeposeoperation.h:16
void OpSettings::OpSettings(StaticPoseCacheHandle handle)
{
} /* size: 0 */

// <0174047D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeposeoperation.h:16
inline void OpSettings::OpSettings(StaticPoseCacheHandle handle)
{
} /* size: 0 */

