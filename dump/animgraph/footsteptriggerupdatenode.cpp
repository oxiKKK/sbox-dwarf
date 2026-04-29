
//
// animgraph/footsteptriggerupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <017F5B20> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.cpp:18
// variables: 4
// function calls: 21
void CFootStepTriggerUpdateNode::CFootStepTriggerUpdateNode(CAnimGraphInitContext& initContext, int nTriggerCount)
{
	{
		CRelativeArray<LastFootMotionStatus>* pInstArray; // 25
	}
	CRelativeOffset<FootStepTrigger>::CRelativeOffset(); // 84
	CRelativeArray<FootStepTrigger>::CRelativeArray(); // 19
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CRelativeArray<LastFootMotionStatus> >::CPackedHandle(); // 19
	{
		CRelativeArray<LastFootMotionStatus>* pInstArray; // 25
		{
			uint32 i; // 160
			CRelativeOffset<int>::CRelativeOffset(); // 84
			CRelativeArray<int>::CRelativeArray(); // 34
			FootStepTrigger::FootStepTrigger(); // 162
		}
		CPackedDataT<false>::AddArray<FootStepTrigger>(
						uint32 count,
						CPackedHandle<FootStepTrigger>* handleOut);  // 23
		CRelativeOffset<FootStepTrigger>::SetOffset(
				const FootStepTrigger* targetPtr);  // 20
		CRelativeOffset<FootStepTrigger>::operator=(
				const FootStepTrigger* targetPtr);  // 115
		CRelativeArray<FootStepTrigger>::SetArray(
			const FootStepTrigger* targetArray,
			int32 count);  // 23
		CRelativeOffset<LastFootMotionStatus>::CRelativeOffset(); // 84
		CRelativeArray<LastFootMotionStatus>::CRelativeArray(); // 123
		PackedHandleID::operator=(
				uint32 id);  // 127
		CPackedDataT<true>::AddItem<CRelativeArray<LastFootMotionStatus> >(
								CPackedHandle<CRelativeArray<LastFootMotionStatus> >* handleOut);  // 25
		{
			uint32 i; // 160
			LastFootMotionStatus::LastFootMotionStatus(); // 162
		}
		CPackedDataT<true>::AddArray<LastFootMotionStatus>(
						uint32 count,
						CPackedHandle<LastFootMotionStatus>* handleOut);  // 27
		CRelativeOffset<LastFootMotionStatus>::SetOffset(
				const LastFootMotionStatus* targetPtr);  // 20
		CRelativeOffset<LastFootMotionStatus>::operator=(
				const LastFootMotionStatus* targetPtr);  // 115
		CRelativeArray<LastFootMotionStatus>::SetArray(
			const LastFootMotionStatus* targetArray,
			int32 count);  // 27
	}
	CFootStepTriggerUpdateNode::CFootStepTriggerUpdateNode(
					CAnimGraphInitContext& initContext,
					int nTriggerCount);  // 18
} /* size: 381, inline expansions: 5 (327 bytes) */

// <017F5AE1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.cpp:18
// variable: 1
void CFootStepTriggerUpdateNode::CFootStepTriggerUpdateNode(CAnimGraphInitContext& initContext, int nTriggerCount)
{
	{
		CRelativeArray<LastFootMotionStatus>* pInstArray; // 25
	}
} /* size: 0 */

// <0186951F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.cpp:34
// variables: 3
// function call: 1
void CFootStepTriggerUpdateNode::PostUpdate(CAnimGraphUpdateContext& context)
{
	CMotionTransform newRootTransform; // 39
	CStrideStatus footMotionList; // 45
	CRelativeArray<LastFootMotionStatus>& footStatusArray; // 57
	CRelativeArray<FootStepTrigger>::Count(); // 36
} /* size: 17, variables: 3, inline expansions: 1 (0 bytes) */

// <01868C42> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.cpp:34
// variables: 11
// function calls: 29
void CFootStepTriggerUpdateNode::PostUpdate(CAnimGraphUpdateContext& context)
{
	CMotionTransform newRootTransform; // 39
	CStrideStatus footMotionList; // 45
	CRelativeArray<LastFootMotionStatus>& footStatusArray; // 57
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 41
	Vector::Vector(); // 25
	CRotation::CRotation(); // 25
	CMotionTransform::CMotionTransform(); // 39
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 41
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 47
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 49
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CRelativeArray<LastFootMotionStatus> >(
								const CPackedHandle<CRelativeArray<LastFootMotionStatus> >& handle);  // 77
	CAnimGraphInstanceData::operator[]<CRelativeArray<LastFootMotionStatus> >(
								const CPackedHandle<CRelativeArray<LastFootMotionStatus> >& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CRelativeArray<LastFootMotionStatus> >(
								const CPackedHandle<CRelativeArray<LastFootMotionStatus> >& handle);  // 57
	{
		int iTrigger; // 59
		CRelativeArray<FootStepTrigger>::Count(); // 59
		{
			const FootStepTrigger& trigger; // 61
			LastFootMotionStatus& lastFootStatus; // 62
			CRelativeOffset<FootStepTrigger>::IsValid(); // 35
			CRelativeOffset<FootStepTrigger>::Get(); // 97
			CRelativeArray<FootStepTrigger>::operator[](
					int index);  // 61
			{
			}
			CRelativeOffset<LastFootMotionStatus>::IsValid(); // 30
			CRelativeOffset<LastFootMotionStatus>::Get(); // 90
			CRelativeArray<LastFootMotionStatus>::operator[](
					int index);  // 62
			CRelativeArray<int>::Count(); // 64
			{
				const CFootMotionStatus& footMotion; // 66
				bool bNewCycle; // 68
				bool bIsOnGround; // 71
				FootStepTagEmitType tagStatus; // 73
				CFootStepTriggerUpdateNode::IsFootOnGround(
						const CFootMotionStatus& footMotion);  // 71
				{
				}
				{
					int iTag; // 96
					CRelativeArray<int>::Count(); // 96
					{
					}
					CRelativeOffset<int>::IsValid(); // 35
					CRelativeOffset<int>::Get(); // 97
					CRelativeArray<int>::operator[](
							int index);  // 100
				}
			}
		}
	}
} /* size: 0, variables: 3, inline expansions: 16 (343 bytes) */

// <017F5A02> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.cpp:34
// variables: 13
void CFootStepTriggerUpdateNode::PostUpdate(CAnimGraphUpdateContext& context)
{
	CMotionTransform newRootTransform; // 39
	CStrideStatus footMotionList; // 45
	CRelativeArray<LastFootMotionStatus>& footStatusArray; // 57
	const char   __FUNCTION__; // 32633
	{
		int iTrigger; // 59
		{
			const FootStepTrigger& trigger; // 61
			LastFootMotionStatus& lastFootStatus; // 62
			{
				const CFootMotionStatus& footMotion; // 66
				bool bNewCycle; // 68
				bool bIsOnGround; // 71
				FootStepTagEmitType tagStatus; // 73
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 91
				}
				{
					int iTag; // 96
				}
			}
		}
	}
} /* size: 0, variables: 4 */

// <017F5901> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.cpp:118
// variable: 1
// function calls: 3
void CFootStepTriggerUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	PoseHandle hPose; // 120
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 122
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 124
} /* size: 38, variables: 1, inline expansions: 3 (14 bytes) */

// <018772BE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.cpp:133
void CFootStepTriggerUpdateNode::IsFootOnGround(const CFootMotionStatus& footMotion)
{
} /* size: 0 */

