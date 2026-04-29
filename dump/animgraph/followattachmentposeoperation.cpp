
//
// animgraph/followattachmentposeoperation.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//

// <0177B69A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentposeoperation.cpp:13
// variable: 1
// function calls: 24
void MakeOpDescription(CPoseRecipe& pPoseRecipe, PoseHandle hChildPose, CPackedHandle<FollowAttachmentSettings_t> hFixedSettings)
{
	CPackedHandle<CFollowAttachmentPoseOperation::OpSettings> hParam; // 15
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>::CPackedHandle(); // 15
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<FollowAttachmentSettings_t>::CPackedHandle(
			const CPackedHandle<FollowAttachmentSettings_t>  &);  // 140
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<FollowAttachmentSettings_t>::CPackedHandle(
			const CPackedHandle<FollowAttachmentSettings_t>  &);  // 28
	OpSettings::OpSettings(
			PoseHandle hChildPose,
			CPackedHandle<FollowAttachmentSettings_t> hFixedSettings);  // 140
	CPackedDataT<false>::AddItem<CFollowAttachmentPoseOperation::OpSettings, unsigned char&, CPackedHandle<FollowAttachmentSettings_t>&>(
															CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>* handleOut);  // 16
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::NumAllocated(); // 1196
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Element(
		int i);  // 1201
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 47
	PoseOpDesc::PoseOpDesc(
			const PoseOpDesc  &);  // 1520
	CopyConstruct<CPoseRecipe::PoseOpDesc>(PoseOpDesc* pMemory,
						const PoseOpDesc& src);  // 1201
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::Base(); // 112
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Base(); // 368
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::AddToTail(
			const PoseOpDesc& src);  // 89
	PackedHandleID::PackedHandleID(); // 47
	PoseOpDesc::PoseOpDesc(); // 85
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 27
	CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>::GetID(); // 87
	{
	}
	CPoseRecipe::AddPoseOp<CFollowAttachmentPoseOperation, CFollowAttachmentPoseOperation::OpSettings>(
												const CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>& hParam);  // 18
} /* size: 0, variables: 1, inline expansions: 24 (375 bytes) */

// <0177B307> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentposeoperation.cpp:25
// variables: 5
// function calls: 10
void Evaluate(CPoseUpdateContext& context, OpSettings* pSettings)
{
	CAnimPosePtr pResultPose; // 29
	const FollowAttachmentSettings_t* pFixedSettings; // 31
	const BoneIndex_t  boneIndex; // 32
	{
		const CTransform  targetTransform; // 37
		CTransform boneTransformMS; // 39
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 39
		VectorAligned::operator=(
				const VectorAligned& src);  // 43
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 48
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 51
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<FollowAttachmentSettings_t>(
						const CPackedHandle<FollowAttachmentSettings_t>& handle);  // 33
	CAnimGraphFixedData::operator[]<FollowAttachmentSettings_t>(
						const CPackedHandle<FollowAttachmentSettings_t>& handle);  // 31
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 34
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
	CAnimPose::GetBoneCount(); // 34
} /* size: 257, variables: 3, inline expansions: 6 (46 bytes) */

