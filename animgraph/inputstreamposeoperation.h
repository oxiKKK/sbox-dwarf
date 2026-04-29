
//
// animgraph/inputstreamposeoperation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//	struct: 1
//

// <0170ED17> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamposeoperation.h:15
// member function: 1
// member variables: 2
// struct size: 12
struct InputStreamPoseOpData {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamposeoperation.h:17 */
	void InputStreamPoseOpData(InputStreamPoseOpData* , CSaveablePackedData& , int);
	CRelativeArray<CTransform> m_transforms; /* 0 8 */
	BoneTransformSpace_t m_eTransformSpace; /* 8 4 */
};

// <017E85B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamposeoperation.h:17
void InputStreamPoseOpData::InputStreamPoseOpData(CSaveablePackedData& opPackedData, int nBoneCount)
{
} /* size: 0 */

// <0170EE78> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamposeoperation.h:31
// member functions: 3
// class size: 1
class CInputStreamPoseOperation {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamposeoperation.h:34 */
	struct OpSettings {
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamposeoperation.h:36 */
		void OpSettings(OpSettings* , CPackedHandle<InputStreamPoseOpData>);
		CPackedHandle<InputStreamPoseOpData> m_hDataHandle; /* 0 4 */
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamposeoperation.h:43 */
	PoseHandle MakeOpDescription(CPoseRecipe& , CPackedHandle<InputStreamPoseOpData>);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamposeoperation.h:46 */
	CAnimPosePtr Evaluate(CPoseUpdateContext& , OpSettings* );
};

// <0174F1D6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamposeoperation.h:36
void OpSettings::OpSettings(CPackedHandle<InputStreamPoseOpData> hDataHandle)
{
} /* size: 0 */

// <0174F1B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamposeoperation.h:36
inline void OpSettings::OpSettings(CPackedHandle<InputStreamPoseOpData> hDataHandle)
{
} /* size: 0 */

