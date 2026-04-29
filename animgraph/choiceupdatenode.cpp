
//
// animgraph/choiceupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 30
//

// <01847E4B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:10
void GetBaseMap(void)
{
} /* size: 0 */

// <01847D9D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:10
// variables: 2
datamap_t* DataMapInit<CChoiceInstanceData>(CChoiceInstanceData *)
{
	const char* pDataMapInit_className; // 10
	typedescription_t dataDesc; // 10
} /* size: 134, variables: 2 */

// <01847176> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:19
// variables: 8
// function calls: 34
void CChoiceUpdateNode::CChoiceUpdateNode(CAnimGraphInitContext& initContext, int childCount)
{
	{
		CChoiceInstanceData* data; // 22
		{
			int i; // 25
		}
	}
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::CRelativeOffset(); // 84
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::CRelativeArray(); // 138
	CRelativeObjectArray<const CAnimUpdateNodeBase>::CRelativeObjectArray(); // 20
	CRelativeOffset<float>::CRelativeOffset(); // 84
	CRelativeArray<float>::CRelativeArray(); // 20
	{
		CChoiceInstanceData* data; // 22
		CRelativeOffset<bool>::CRelativeOffset(); // 84
		CRelativeArray<bool>::CRelativeArray(); // 41
		CChoiceInstanceData::CChoiceInstanceData(); // 123
		PackedHandleID::operator=(
				uint32 id);  // 127
		CPackedDataT<true>::AddItem<CChoiceInstanceData>(
						CPackedHandle<CChoiceInstanceData>* handleOut);  // 22
		{
			uint32 i; // 160
		}
		CPackedDataT<true>::AddArray<bool>(
				uint32 count,
				CPackedHandle<bool>* handleOut);  // 24
		{
		}
		CRelativeOffset<bool>::SetOffset(
				const bool* targetPtr);  // 20
		CRelativeOffset<bool>::operator=(
				const bool* targetPtr);  // 115
		CRelativeArray<bool>::SetArray(
			const bool* targetArray,
			int32 count);  // 24
		{
			int i; // 25
			CRelativeOffset<bool>::IsValid(); // 30
			CRelativeOffset<bool>::Get(); // 90
			{
			}
			CRelativeArray<bool>::operator[](
					int index);  // 27
		}
		{
			uint32 i; // 160
			CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 162
		}
		CPackedDataT<false>::AddArray<CRelativeOffset<const CAnimUpdateNodeBase> >(
									uint32 count,
									CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> >* handleOut);  // 30
		{
		}
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::SetOffset(
				const CRelativeOffset<const CAnimUpdateNodeBase>* targetPtr);  // 20
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::operator=(
				const CRelativeOffset<const CAnimUpdateNodeBase>* targetPtr);  // 115
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::SetArray(
			const CRelativeOffset<const CAnimUpdateNodeBase>* targetArray,
			int32 count);  // 30
		{
			uint32 i; // 160
		}
		CPackedDataT<false>::AddArray<float>(
				uint32 count,
				CPackedHandle<float>* handleOut);  // 32
		{
		}
		CRelativeOffset<float>::SetOffset(
				const float* targetPtr);  // 20
		CRelativeOffset<float>::operator=(
				const float* targetPtr);  // 115
		CRelativeArray<float>::SetArray(
			const float* targetArray,
			int32 count);  // 32
		{
			uint32 i; // 160
		}
		CPackedDataT<false>::AddArray<float>(
				uint32 count,
				CPackedHandle<float>* handleOut);  // 33
		{
		}
		CRelativeOffset<float>::SetOffset(
				const float* targetPtr);  // 20
		CRelativeOffset<float>::operator=(
				const float* targetPtr);  // 115
		CRelativeArray<float>::SetArray(
			const float* targetArray,
			int32 count);  // 33
	}
	CRelativeOffset<float>::CRelativeOffset(); // 84
	CRelativeArray<float>::CRelativeArray(); // 20
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CChoiceInstanceData>::CPackedHandle(); // 20
} /* size: 0, inline expansions: 9 (54 bytes) */

// <0184712B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:19
// variables: 2
void CChoiceUpdateNode::CChoiceUpdateNode(CAnimGraphInitContext& initContext, int childCount)
{
	{
		CChoiceInstanceData* data; // 22
		{
			int i; // 25
		}
	}
} /* size: 0 */

// <01847113> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:40
void CChoiceUpdateNode::GetChildCount()
{
} /* size: 0 */

// <01846FA7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:46
// function calls: 6
void CChoiceUpdateNode::GetChild(int index)
{
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::Count(); // 48
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 50
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 50
} /* size: 57, inline expansions: 6 (69 bytes) */

// <01846A1D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:59
// function calls: 21
void CChoiceUpdateNode::IsChildActive(CAnimGraphUpdateContext& context, int index)
{
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::Count(); // 61
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 64
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 65
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 65
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 64
} /* size: 282, inline expansions: 21 (287 bytes) */

// <01846881> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:74
// function calls: 5
void CChoiceUpdateNode::IsChildWaning(CAnimGraphUpdateContext& context, int index)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 76
} /* size: 98, inline expansions: 5 (76 bytes) */

// <01845531> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:80
// variables: 10
// function calls: 74
void CChoiceUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	int currentChildIndex; // 83
	float blendCycle; // 122
	float flBlendTime; // 124
	float flCurrentWeight; // 140
	{
		float childCycle; // 95
		float flTimeRemaining; // 96
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 98
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 98
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::Count(); // 424
		CChoiceUpdateNode::ChooseNewChild(
				CAnimGraphUpdateContext& context,
				float flCycle);  // 111
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 495
		CChoiceUpdateNode::GetCurrentChoice(
				CAnimGraphUpdateContext& context);  // 112
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 100
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 100
		{
		}
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 101
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 101
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 107
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 116
	}
	{
		int wrapCount; // 133
		float unClampedCycle; // 134
		const float  blendStartTime; // 135
		const float  elapsedTime; // 136
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 135
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 495
	CChoiceUpdateNode::GetCurrentChoice(
			CAnimGraphUpdateContext& context);  // 83
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(
			int index);  // 86
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::Count(); // 424
	CChoiceUpdateNode::ChooseNewChild(
			CAnimGraphUpdateContext& context,
			float flCycle);  // 88
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 495
	CChoiceUpdateNode::GetCurrentChoice(
			CAnimGraphUpdateContext& context);  // 89
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 131
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 141
	SimpleSpline(float value); // 140
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 142
	{
	}
	CRelativeOffset<float>::IsValid(); // 35
	CRelativeOffset<float>::Get(); // 97
	CRelativeArray<float>::operator[](
			int index);  // 127
} /* size: 0, variables: 4, inline expansions: 36 (737 bytes) */

// <01844BDF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:146
// variables: 3
// function calls: 39
void CChoiceUpdateNode::EnqueueChildren(CAnimGraphUpdateContext& context)
{
	const float* pPoseWeights; // 148
	const int  currChoice; // 149
	const int  prevChoice; // 150
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 148
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 495
	CChoiceUpdateNode::GetCurrentChoice(
			CAnimGraphUpdateContext& context);  // 149
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 150
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(
			int index);  // 152
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 152
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 152
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(
			int index);  // 157
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 157
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 157
	{
	}
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 159
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 159
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 154
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 154
} /* size: 0, variables: 3, inline expansions: 39 (683 bytes) */

// <01843C6A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:164
// variables: 6
// function calls: 64
void CChoiceUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	PoseHandle hPose; // 166
	const float* pPoseWeights; // 169
	const int  currentChildIndex; // 170
	const int  prevChildIndex; // 171
	{
		PoseHandle poseHandles; // 176
		const float* poseWeights; // 192
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(
				int index);  // 105
		_DebuggerBreakInlineExpressionWrapper(void); // 105
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(
				int index);  // 179
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 179
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 179
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(
				int index);  // 105
		_DebuggerBreakInlineExpressionWrapper(void); // 105
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(
				int index);  // 186
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 186
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 186
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 192
		{
		}
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 188
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 188
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 181
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 181
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 169
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 495
	CChoiceUpdateNode::GetCurrentChoice(
			CAnimGraphUpdateContext& context);  // 170
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 171
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(
			int index);  // 200
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 200
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 200
	{
	}
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 202
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 202
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 206
} /* size: 0, variables: 4, inline expansions: 34 (602 bytes) */

// <01843915> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:210
// variables: 2
// function calls: 11
void CChoiceUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	const char   __FUNCTION__; // 32714
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 66
	CAnimUpdateNodeBase::GetLastUpdateID(
			const CAnimGraphUpdateContext& context);  // 212
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 213
} /* size: 0, variables: 1, inline expansions: 11 (176 bytes) */

// <0184344F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:217
// variable: 1
// function calls: 19
void CChoiceUpdateNode::GetCycle(CAnimGraphUpdateContext& context)
{
	int currentChildIndex; // 219
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 495
	CChoiceUpdateNode::GetCurrentChoice(
			CAnimGraphUpdateContext& context);  // 219
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(
			int index);  // 220
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 220
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 220
	{
	}
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 222
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 222
} /* size: 0, variables: 1, inline expansions: 19 (353 bytes) */

// <01842F89> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:231
// variable: 1
// function calls: 19
void CChoiceUpdateNode::GetDuration(CAnimGraphUpdateContext& context)
{
	int currentChildIndex; // 233
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 495
	CChoiceUpdateNode::GetCurrentChoice(
			CAnimGraphUpdateContext& context);  // 233
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(
			int index);  // 234
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 234
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 234
	{
	}
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 236
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 236
} /* size: 0, variables: 1, inline expansions: 19 (353 bytes) */

// <018429FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:245
// variable: 1
// function calls: 22
void CChoiceUpdateNode::GetTotalMovement(CAnimGraphUpdateContext& context)
{
	int currentChildIndex; // 247
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 495
	CChoiceUpdateNode::GetCurrentChoice(
			CAnimGraphUpdateContext& context);  // 247
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(
			int index);  // 248
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 248
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 248
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 254
	{
	}
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 250
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 250
} /* size: 0, variables: 1, inline expansions: 22 (543 bytes) */

// <0184244F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:259
// variable: 1
// function calls: 22
void CChoiceUpdateNode::GetRemainingMovement(CAnimGraphUpdateContext& context, float flCycle)
{
	int currentChildIndex; // 261
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 495
	CChoiceUpdateNode::GetCurrentChoice(
			CAnimGraphUpdateContext& context);  // 261
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(
			int index);  // 262
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 262
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 262
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 268
	{
	}
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 264
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 264
} /* size: 0, variables: 1, inline expansions: 22 (543 bytes) */

// <01841B6B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:273
// variables: 2
// function calls: 33
void CChoiceUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	{
		float flBlendTime; // 287
		{
			int nCurrentChoice; // 290
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<CChoiceInstanceData>(
							const CPackedHandle<CChoiceInstanceData>& handle);  // 77
			CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
							const CPackedHandle<CChoiceInstanceData>& handle);  // 59
			CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
							const CPackedHandle<CChoiceInstanceData>& handle);  // 290
			CRelativeArray<float>::Count(); // 291
			CRelativeOffset<float>::IsValid(); // 35
			CRelativeOffset<float>::Get(); // 97
			CRelativeArray<float>::operator[](
					int index);  // 293
		}
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::Count(); // 424
		CChoiceUpdateNode::ChooseNewChild(
				CAnimGraphUpdateContext& context,
				float flCycle);  // 285
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 297
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimUpdateNodeBase::IsReset(
		const CAnimGraphUpdateContext& context);  // 277
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 66
	CAnimUpdateNodeBase::GetLastUpdateID(
			const CAnimGraphUpdateContext& context);  // 278
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 54
	CAnimUpdateNodeBase::Reset(
		CAnimGraphUpdateContext& context,
		float flCycle);  // 280
} /* size: 457, inline expansions: 17 (376 bytes) */

// <0184169D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:303
// variable: 1
// function calls: 19
void CChoiceUpdateNode::IsFinished(CAnimGraphUpdateContext& context)
{
	int currentChildIndex; // 305
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 495
	CChoiceUpdateNode::GetCurrentChoice(
			CAnimGraphUpdateContext& context);  // 305
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(
			int index);  // 306
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 306
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 306
	{
	}
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 308
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 308
} /* size: 0, variables: 1, inline expansions: 19 (353 bytes) */

// <018411CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:317
// variable: 1
// function calls: 19
void CChoiceUpdateNode::GetTimeTillFinished(CAnimGraphUpdateContext& context)
{
	int currentChildIndex; // 319
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 495
	CChoiceUpdateNode::GetCurrentChoice(
			CAnimGraphUpdateContext& context);  // 319
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(
			int index);  // 321
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 322
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 322
	{
	}
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 325
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 325
} /* size: 0, variables: 1, inline expansions: 19 (353 bytes) */

// <01840FF2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:334
// variable: 1
// function calls: 5
void CChoiceUpdateNode::OnSave(const CAnimGraphUpdateContext& context, ISave* pSave)
{
	const CChoiceInstanceData* pInstData; // 336
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 336
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <01840DC0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:341
// variable: 1
// function calls: 7
void CChoiceUpdateNode::OnRestore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
	CChoiceInstanceData* pInstData; // 343
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 343
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::Count(); // 347
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::Count(); // 351
} /* size: 170, variables: 1, inline expansions: 7 (95 bytes) */

// <0183FE54> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:358
// variables: 6
// function calls: 64
void CChoiceUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	CChoiceInstanceData* pInstData; // 360
	const float* pPoseWeights; // 362
	const int  currentChildIndex; // 363
	const int  prevChildIndex; // 364
	CRootMotion motion; // 366
	{
		const float* poseWeights; // 370
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(
				int index);  // 105
		_DebuggerBreakInlineExpressionWrapper(void); // 105
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(
				int index);  // 372
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 372
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 372
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 374
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 374
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(
				int index);  // 105
		_DebuggerBreakInlineExpressionWrapper(void); // 105
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(
				int index);  // 377
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 377
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 377
		{
		}
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 379
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 379
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 360
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 362
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 495
	CChoiceUpdateNode::GetCurrentChoice(
			CAnimGraphUpdateContext& context);  // 363
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 11
	CRootMotion::CRootMotion(
			const CRootMotion  &);  // 366
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(
			int index);  // 105
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(
			int index);  // 384
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 384
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 384
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(
			int index);  // 368
	{
	}
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 386
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 386
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 11
	CRootMotion::operator=(
			CRootMotion &);  // 386
} /* size: 0, variables: 5, inline expansions: 39 (1219 bytes) */

// <0183F89F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:394
// variables: 5
// function calls: 18
void CChoiceUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footPoseInfo)
{
	CChoiceInstanceData* pInstData; // 398
	const int  currentChildIndex; // 400
	{
		float flPrevTime; // 408
		float flNextTIme; // 409
		{
			int i; // 412
		}
		{
		}
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 405
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 405
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 398
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(
			int index);  // 403
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
	CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
			int index);  // 403
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 403
} /* size: 0, variables: 2, inline expansions: 12 (185 bytes) */

// <0186B1DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:422
// function call: 1
void CChoiceUpdateNode::ChooseNewChild(CAnimGraphUpdateContext& context, float flCycle)
{
	CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::Count(); // 424
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0186A552> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:422
// variables: 4
// function calls: 51
void CChoiceUpdateNode::ChooseNewChild(CAnimGraphUpdateContext& context, float flCycle)
{
	{
		int lastChoice; // 426
		int newChoice; // 427
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 426
		{
			const int  maxLoops; // 439
			int checkCount; // 440
			CRelativeArray<float>::Count(); // 439
			CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::Count(); // 451
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<CChoiceInstanceData>(
							const CPackedHandle<CChoiceInstanceData>& handle);  // 77
			CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
							const CPackedHandle<CChoiceInstanceData>& handle);  // 59
			CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
							const CPackedHandle<CChoiceInstanceData>& handle);  // 451
		}
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::Count(); // 456
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 467
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 468
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 473
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValidIndex(
				int index);  // 105
		_DebuggerBreakInlineExpressionWrapper(void); // 105
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::VerifyValidIndex(
				int index);  // 476
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 476
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 476
		{
		}
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 483
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 483
		{
		}
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 35
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 97
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 487
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 487
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 487
	}
} /* size: 0 */

// <0183F834> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:422
// variables: 4
void CChoiceUpdateNode::ChooseNewChild(CAnimGraphUpdateContext& context, float flCycle)
{
	{
		int lastChoice; // 426
		int newChoice; // 427
		{
			const int  maxLoops; // 439
			int checkCount; // 440
		}
	}
} /* size: 0 */

// <0186A3C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:493
// function calls: 5
void CChoiceUpdateNode::GetCurrentChoice(CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 495
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0183F80E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:493
void CChoiceUpdateNode::GetCurrentChoice(CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <0183F50A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:499
// variables: 3
// function calls: 9
void CChoiceUpdateNode::PickWeightedRandom(CAnimGraphUpdateContext& context, bool bRemoveLastChoiceFromRandom)
{
	int newChoice; // 501
	float rolledValue; // 504
	{
		int32 index; // 505
		CRelativeArray<float>::Count(); // 505
		{
		}
		CRelativeOffset<float>::IsValid(); // 35
		CRelativeOffset<float>::Get(); // 97
		CRelativeArray<float>::operator[](
				int index);  // 513
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
						const CPackedHandle<CChoiceInstanceData>& handle);  // 507
	}
} /* size: 0, variables: 2 */

// <0183EEE6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceupdatenode.cpp:525
// variables: 10
// function calls: 21
void CChoiceUpdateNode::PickIterateRandom(CAnimGraphUpdateContext& context)
{
	int lastChoice; // 527
	CRelativeArray<bool>& chosenFlags; // 529
	const int  kMaxOptions; // 532
	int choices; // 533
	int remainingChoices; // 534
	int randomChoice; // 564
	int newChoice; // 566
	{
		int32 i; // 535
		CRelativeArray<bool>::Count(); // 535
		CRelativeOffset<bool>::IsValid(); // 30
		CRelativeOffset<bool>::Get(); // 90
		CRelativeArray<bool>::operator[](
				int index);  // 537
	}
	{
		int32 i; // 546
		CRelativeOffset<bool>::IsValid(); // 30
		CRelativeOffset<bool>::Get(); // 90
		CRelativeArray<bool>::operator[](
				int index);  // 548
		CRelativeArray<bool>::Count(); // 546
	}
	{
		int32 i; // 554
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 527
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoiceInstanceData>(
					const CPackedHandle<CChoiceInstanceData>& handle);  // 529
	{
	}
	CRelativeOffset<bool>::IsValid(); // 30
	CRelativeOffset<bool>::Get(); // 90
	CRelativeArray<bool>::operator[](
			int index);  // 568
} /* size: 0, variables: 7, inline expansions: 13 (310 bytes) */

