
//
// animgraph/inputstreamposeoperation.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//

// <0174EE2F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamposeoperation.cpp:13
// variables: 3
// function calls: 12
void InputStreamPoseOpData::InputStreamPoseOpData(CSaveablePackedData& opPackedData, int nBoneCount)
{
	{
		int i; // 17
	}
	CRelativeOffset<CTransform>::CRelativeOffset(); // 84
	CRelativeArray<CTransform>::CRelativeArray(); // 14
	{
		uint32 i; // 160
	}
	CPackedDataT<true>::AddArray<CTransform>(
				uint32 count,
				CPackedHandle<CTransform>* handleOut);  // 16
	{
	}
	CRelativeOffset<CTransform>::SetOffset(
			const CTransform* targetPtr);  // 20
	CRelativeOffset<CTransform>::operator=(
			const CTransform* targetPtr);  // 115
	CRelativeArray<CTransform>::SetArray(
		const CTransform* targetArray,
		int32 count);  // 16
	{
		int i; // 17
		CRelativeOffset<CTransform>::IsValid(); // 30
		CRelativeOffset<CTransform>::Get(); // 90
		{
		}
		CRelativeArray<CTransform>::operator[](
				int index);  // 19
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				const CTransform  &);  // 19
	}
} /* size: 0, inline expansions: 6 (193 bytes) */

// <0174EDEF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamposeoperation.cpp:13
// variable: 1
void InputStreamPoseOpData::InputStreamPoseOpData(CSaveablePackedData& opPackedData, int nBoneCount)
{
	{
		int i; // 17
	}
} /* size: 0 */

// <0174E81B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamposeoperation.cpp:28
// variable: 1
// function calls: 24
void MakeOpDescription(CPoseRecipe& pPoseRecipe, CPackedHandle<InputStreamPoseOpData> hDataHandle)
{
	CPackedHandle<CInputStreamPoseOperation::OpSettings> hParam; // 30
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CInputStreamPoseOperation::OpSettings>::CPackedHandle(); // 30
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<InputStreamPoseOpData>::CPackedHandle(
			const CPackedHandle<InputStreamPoseOpData>  &);  // 140
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<InputStreamPoseOpData>::CPackedHandle(
			const CPackedHandle<InputStreamPoseOpData>  &);  // 36
	OpSettings::OpSettings(
			CPackedHandle<InputStreamPoseOpData> hDataHandle);  // 140
	CPackedDataT<false>::AddItem<CInputStreamPoseOperation::OpSettings, CPackedHandle<InputStreamPoseOpData>&>(
												CPackedHandle<CInputStreamPoseOperation::OpSettings>* handleOut);  // 31
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
	CPackedHandle<CInputStreamPoseOperation::OpSettings>::GetID(); // 87
	{
	}
	CPoseRecipe::AddPoseOp<CInputStreamPoseOperation, CInputStreamPoseOperation::OpSettings>(
											const CPackedHandle<CInputStreamPoseOperation::OpSettings>& hParam);  // 33
} /* size: 0, variables: 1, inline expansions: 24 (370 bytes) */

// <0174D972> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamposeoperation.cpp:41
// variables: 13
// function calls: 55
void Evaluate(CPoseUpdateContext& context, OpSettings* pSettings)
{
	CAnimPosePtr pPose; // 43
	const char   __FUNCTION__; // 44910
	{
		const InputStreamPoseOpData* pInstData; // 47
		const BoneIndex_t  nBoneCount; // 50
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 48
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 49
		}
		{
			const CTransform  invLocalToWorld; // 64
			const CAnimSkeleton* pSkeleton; // 65
			{
				BoneIndex_t i; // 67
				{
					BoneIndex_t nParentIndex; // 69
					{
						const CTransform  parentTransformMS; // 72
						const CTransform  boneTransformLS; // 73
						CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 72
						{
						}
						CRelativeOffset<CTransform>::IsValid(); // 35
						CRelativeOffset<CTransform>::Get(); // 97
						CRelativeArray<CTransform>::operator[](
								int index);  // 73
						CTransform::InverseTR(); // 73
						QuaternionAligned::operator fltx4(); // 471
						VectorAligned::operator fltx4(); // 471
						QuaternionAligned::operator fltx4(); // 471
						VectorAligned::operator fltx4(); // 471
						CTransform::operator*(
								const CTransform& rhs);  // 73
						QuaternionAligned::operator fltx4(); // 471
						VectorAligned::operator fltx4(); // 471
						QuaternionAligned::operator fltx4(); // 471
						VectorAligned::operator fltx4(); // 471
						CTransform::operator*(
								const CTransform& rhs);  // 73
						CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 74
					}
					{
						const CTransform  boneTransformLS; // 78
						{
						}
						CRelativeOffset<CTransform>::IsValid(); // 35
						CRelativeOffset<CTransform>::Get(); // 97
						CRelativeArray<CTransform>::operator[](
								int index);  // 78
						QuaternionAligned::operator fltx4(); // 471
						VectorAligned::operator fltx4(); // 471
						QuaternionAligned::operator fltx4(); // 471
						VectorAligned::operator fltx4(); // 471
						CTransform::operator*(
								const CTransform& rhs);  // 78
						CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 79
					}
					CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
							int i);  // 142
					CAnimSkeleton::GetParentIndex(
							BoneIndex_t boneIndex);  // 69
				}
			}
			CTransform::InverseTR(); // 64
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 65
			CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::Get(); // 65
		}
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<InputStreamPoseOpData>(
							const CPackedHandle<InputStreamPoseOpData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<InputStreamPoseOpData>(
							const CPackedHandle<InputStreamPoseOpData>& handle);  // 47
		CRelativeArray<CTransform>::Count(); // 49
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 49
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
		CAnimPose::GetBoneCount(); // 49
		CRelativeArray<CTransform>::Count(); // 50
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 50
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
		CAnimPose::GetBoneCount(); // 50
		CRelativeOffset<CTransform>::IsValid(); // 35
		CRelativeOffset<CTransform>::Get(); // 108
		CRelativeArray<CTransform>::Get(); // 55
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 55
		CRelativeOffset<CTransform>::IsValid(); // 35
		CRelativeOffset<CTransform>::Get(); // 108
		CRelativeArray<CTransform>::Get(); // 59
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 59
	}
	PackedHandleID::IsValid(); // 25
	CPackedHandle<InputStreamPoseOpData>::IsValid(); // 45
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 95
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

