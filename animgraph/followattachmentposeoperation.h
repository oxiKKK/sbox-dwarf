
//
// animgraph/followattachmentposeoperation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//	struct: 1
//

// <017EF42E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentposeoperation.h:11
void FollowAttachmentSettings_t::FollowAttachmentSettings_t()
{
} /* size: 0 */

// <017EF412> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentposeoperation.h:11
inline void FollowAttachmentSettings_t::FollowAttachmentSettings_t()
{
} /* size: 0 */

// <01015706> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentposeoperation.h:11
// member variables: 4
// struct size: 144
struct FollowAttachmentSettings_t {
	CAnimAttachment m_attachment __attribute__((__aligned__(16))); /* 0 128 */
	BoneIndex_t m_boneIndex; /* 128 4 */
	bool m_bMatchTranslation; /* 132 1 */
	bool m_bMatchRotation; /* 133 1 */
} __attribute__((__aligned__(16)));

// <01708957> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentposeoperation.h:22
// member functions: 3
// class size: 1
class CFollowAttachmentPoseOperation {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentposeoperation.h:25 */
	struct OpSettings {
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentposeoperation.h:27 */
		void OpSettings(OpSettings* , PoseHandle, CPackedHandle<FollowAttachmentSettings_t>);
		CPackedHandle<FollowAttachmentSettings_t> m_hFixedSettings; /* 0 4 */
		PoseHandle m_hChildPose; /* 4 1 */
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentposeoperation.h:38 */
	PoseHandle MakeOpDescription(CPoseRecipe& , PoseHandle, CPackedHandle<FollowAttachmentSettings_t>);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentposeoperation.h:41 */
	CAnimPosePtr Evaluate(CPoseUpdateContext& , OpSettings* );
};

// <0177BCB5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentposeoperation.h:27
void OpSettings::OpSettings(PoseHandle hChildPose, CPackedHandle<FollowAttachmentSettings_t> hFixedSettings)
{
} /* size: 0 */

// <0177BC84> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentposeoperation.h:27
inline void OpSettings::OpSettings(PoseHandle hChildPose, CPackedHandle<FollowAttachmentSettings_t> hFixedSettings)
{
} /* size: 0 */

