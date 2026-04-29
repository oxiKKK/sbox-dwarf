
//
// animgraph/inputstreamupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//

// <017F3EA0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.cpp:10
// variables: 3
// function calls: 12
void InputStreamUpdateData_t::InputStreamUpdateData_t(CSaveablePackedData& opPackedData, int nBoneCount)
{
	{
		int i; // 13
	}
	CRelativeOffset<CTransform>::CRelativeOffset(); // 84
	CRelativeArray<CTransform>::CRelativeArray(); // 10
	{
		uint32 i; // 160
	}
	CPackedDataT<true>::AddArray<CTransform>(
				uint32 count,
				CPackedHandle<CTransform>* handleOut);  // 12
	{
	}
	CRelativeOffset<CTransform>::SetOffset(
			const CTransform* targetPtr);  // 20
	CRelativeOffset<CTransform>::operator=(
			const CTransform* targetPtr);  // 115
	CRelativeArray<CTransform>::SetArray(
		const CTransform* targetArray,
		int32 count);  // 12
	{
		int i; // 13
		CRelativeOffset<CTransform>::IsValid(); // 30
		CRelativeOffset<CTransform>::Get(); // 90
		{
		}
		CRelativeArray<CTransform>::operator[](
				int index);  // 15
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				const CTransform  &);  // 15
	}
} /* size: 0, inline expansions: 6 (193 bytes) */

// <017F3E60> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.cpp:10
// variable: 1
void InputStreamUpdateData_t::InputStreamUpdateData_t(CSaveablePackedData& opPackedData, int nBoneCount)
{
	{
		int i; // 13
	}
} /* size: 0 */

// <017F3ACD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.cpp:22
// variables: 2
// function calls: 9
void CInputStreamUpdateNode::CInputStreamUpdateNode(CAnimGraphInitContext& initContext)
{
	{
		const int  nBoneCount; // 25
	}
	CLeafUpdateNode::CLeafUpdateNode(
			CAnimGraphInitContext& initContext);  // 23
	{
		const int  nBoneCount; // 25
		PackedHandleID::operator=(
				uint32 id);  // 144
		CPackedDataT<true>::AddItem<InputStreamUpdateData_t, CPackedDataT<true>&, int const&>(
											CPackedHandle<InputStreamUpdateData_t>* handleOut);  // 26
		PackedHandleID::operator=(
				uint32 id);  // 144
		CPackedDataT<true>::AddItem<InputStreamPoseOpData, CPackedDataT<true>&, int const&>(
										CPackedHandle<InputStreamPoseOpData>* handleOut);  // 27
	}
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<InputStreamUpdateData_t>::CPackedHandle(); // 23
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<InputStreamPoseOpData>::CPackedHandle(); // 23
} /* size: 225, inline expansions: 5 (23 bytes) */

// <017F3A9A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.cpp:22
// variable: 1
void CInputStreamUpdateNode::CInputStreamUpdateNode(CAnimGraphInitContext& initContext)
{
	{
		const int  nBoneCount; // 25
	}
} /* size: 0 */

// <017F3635> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.cpp:33
// variables: 3
// function calls: 19
void CInputStreamUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	const InputStreamUpdateData_t* pInstData; // 46
	InputStreamPoseOpData* pOpData; // 47
	{
		const int  nBoneCount; // 54
		CRelativeArray<CTransform>::Count(); // 54
		CRelativeOffset<CTransform>::IsValid(); // 35
		CRelativeOffset<CTransform>::Get(); // 108
		CRelativeArray<CTransform>::Get(); // 55
		CRelativeOffset<CTransform>::IsValid(); // 30
		CRelativeOffset<CTransform>::Get(); // 107
		CRelativeArray<CTransform>::Get(); // 55
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 55
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<InputStreamUpdateData_t>(
						const CPackedHandle<InputStreamUpdateData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<InputStreamUpdateData_t>(
						const CPackedHandle<InputStreamUpdateData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<InputStreamUpdateData_t>(
						const CPackedHandle<InputStreamUpdateData_t>& handle);  // 46
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<InputStreamPoseOpData>(
						const CPackedHandle<InputStreamPoseOpData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<InputStreamPoseOpData>(
						const CPackedHandle<InputStreamPoseOpData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<InputStreamPoseOpData>(
						const CPackedHandle<InputStreamPoseOpData>& handle);  // 47
} /* size: 227, variables: 2, inline expansions: 10 (153 bytes) */

// <017F33F7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.cpp:62
// variable: 1
// function calls: 7
void CInputStreamUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	InputStreamUpdateData_t* pInstData; // 64
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<InputStreamUpdateData_t>(
						const CPackedHandle<InputStreamUpdateData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<InputStreamUpdateData_t>(
						const CPackedHandle<InputStreamUpdateData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<InputStreamUpdateData_t>(
						const CPackedHandle<InputStreamUpdateData_t>& handle);  // 64
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<InputStreamPoseOpData>::CPackedHandle(
			const CPackedHandle<InputStreamPoseOpData>  &);  // 66
} /* size: 134, variables: 1, inline expansions: 7 (95 bytes) */

// <017F3263> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.cpp:72
// function calls: 5
void CInputStreamUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<InputStreamUpdateData_t>(
						const CPackedHandle<InputStreamUpdateData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<InputStreamUpdateData_t>(
						const CPackedHandle<InputStreamUpdateData_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<InputStreamUpdateData_t>(
						const CPackedHandle<InputStreamUpdateData_t>& handle);  // 74
} /* size: 87, inline expansions: 5 (68 bytes) */

// <017F31F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.cpp:80
void CInputStreamUpdateNode::GetBoneCount(const CAnimGraphUpdateContext& context)
{
} /* size: 25 */

// <017F2E3B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamupdatenode.cpp:88
// variable: 1
// function calls: 12
void CInputStreamUpdateNode::SetTransforms(CAnimGraphUpdateContext& context, const CTransform* pTransforms, int nCount, BoneTransformSpace_t eTransformSpace)
{
	InputStreamUpdateData_t* pInstData; // 90
	{
		CRelativeArray<CTransform>::Count(); // 92
		CRelativeOffset<CTransform>::IsValid(); // 30
		CRelativeOffset<CTransform>::Get(); // 107
		CRelativeArray<CTransform>::Get(); // 94
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 94
		_DebuggerBreakInlineExpressionWrapper(void); // 92
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<InputStreamUpdateData_t>(
						const CPackedHandle<InputStreamUpdateData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<InputStreamUpdateData_t>(
						const CPackedHandle<InputStreamUpdateData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<InputStreamUpdateData_t>(
						const CPackedHandle<InputStreamUpdateData_t>& handle);  // 90
} /* size: 0, variables: 1, inline expansions: 5 (81 bytes) */

