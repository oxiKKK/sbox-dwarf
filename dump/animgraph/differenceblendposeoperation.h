
//
// animgraph/differenceblendposeoperation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//	struct: 1
//

// <01707688> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/differenceblendposeoperation.h:11
// member function: 1
// member variables: 2
// struct size: 12
struct DiffBlendInstanceData {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/differenceblendposeoperation.h:13 */
	void DiffBlendInstanceData(DiffBlendInstanceData* , CSaveablePackedData& , int);
	CRelativeArray<CTransform> m_offsetTransforms; /* 0 8 */
	int m_nLastUpdateID; /* 8 4 */
};

// <01914877> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/differenceblendposeoperation.h:13
void DiffBlendInstanceData::DiffBlendInstanceData(CSaveablePackedData& packedData, int nBoneCount)
{
} /* size: 0 */

// <017077DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/differenceblendposeoperation.h:24
// member functions: 3
// class size: 1
class CDifferenceBlendPoseOperation {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/differenceblendposeoperation.h:27 */
	struct OpSettings {
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/differenceblendposeoperation.h:29 */
		void OpSettings(OpSettings* , PoseHandle, PoseHandle, CPackedHandle<DiffBlendInstanceData>, float, float);
		PoseHandle m_hChildPose; /* 0 1 */
		PoseHandle m_hRefChildPose; /* 1 1 */
		CPackedHandle<DiffBlendInstanceData> m_hInstData; /* 4 4 */
		float m_flBlendCycle; /* 8 4 */
		float m_flLastBlendCycle; /* 12 4 */
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/differenceblendposeoperation.h:46 */
	PoseHandle MakeOpDescription(CPoseRecipe& , PoseHandle, PoseHandle, CPackedHandle<DiffBlendInstanceData>, float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/differenceblendposeoperation.h:49 */
	CAnimPosePtr Evaluate(CPoseUpdateContext& , OpSettings* );
};

// <01780B07> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/differenceblendposeoperation.h:29
void OpSettings::OpSettings(PoseHandle hChildPose, PoseHandle hRefChildPose, CPackedHandle<DiffBlendInstanceData> hInstData, float flBlendCycle, float flLastBlendCycle)
{
} /* size: 0 */

// <01780AB2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/differenceblendposeoperation.h:29
inline void OpSettings::OpSettings(PoseHandle hChildPose, PoseHandle hRefChildPose, CPackedHandle<DiffBlendInstanceData> hInstData, float flBlendCycle, float flLastBlendCycle)
{
} /* size: 0 */

