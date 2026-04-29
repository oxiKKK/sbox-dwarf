
//
// animgraph/statemachineupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 38
//

// <0193D006> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:12
void GetBaseMap(void)
{
} /* size: 0 */

// <0193CE35> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:12
// variables: 2
// function calls: 5
datamap_t* DataMapInit<CStateMachineInstanceData>(CStateMachineInstanceData *)
{
	const char* pDataMapInit_className; // 12
	typedescription_t dataDesc; // 12
	ISaveRestoreOps::ISaveRestoreOps(); // 408
	CDefSaveRestoreOps::CDefSaveRestoreOps(); // 18
	CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>::CRelativeOffsetArrayDataOps(); // 106
	GetDataOps<CRelativeArray<float> >(CRelativeArray<float> *); // 104
	GetDataOps<CRelativeArray<float> >(CRelativeArray<float> *); // 14
} /* size: 239, variables: 2, inline expansions: 5 (119 bytes) */

// <0193CAEA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:25
// variables: 3
// function calls: 9
void CStateMachineInstanceData::CStateMachineInstanceData(int stateCount, int nFootCount, CSaveablePackedData& instanceData)
{
	{
		int i; // 29
	}
	{
		uint32 i; // 160
	}
	CPackedDataT<true>::AddArray<float>(
			uint32 count,
			CPackedHandle<float>* handleOut);  // 27
	{
	}
	CRelativeOffset<float>::SetOffset(
			const float* targetPtr);  // 20
	CRelativeOffset<float>::operator=(
			const float* targetPtr);  // 115
	CRelativeArray<float>::SetArray(
		const float* targetArray,
		int32 count);  // 27
	{
		int i; // 29
		CRelativeOffset<float>::IsValid(); // 30
		CRelativeOffset<float>::Get(); // 90
		{
		}
		CRelativeArray<float>::operator[](
				int index);  // 31
	}
	CRelativeOffset<float>::CRelativeOffset(); // 84
	CRelativeArray<float>::CRelativeArray(); // 25
} /* size: 0, inline expansions: 6 (250 bytes) */

// <0193CA9E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:25
// variable: 1
void CStateMachineInstanceData::CStateMachineInstanceData(int stateCount, int nFootCount, CSaveablePackedData& instanceData)
{
	{
		int i; // 29
	}
} /* size: 0 */

// <0193C235> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:40
// variables: 4
// function calls: 30
void CStateMachineUpdateNode::CStateMachineUpdateNode(CAnimGraphInitContext& initContext, int stateCount, int transitionCount)
{
	{
		int nFootCount; // 43
	}
	CRelativeOffset<CStateUpdateData>::CRelativeOffset(); // 84
	CRelativeArray<CStateUpdateData>::CRelativeArray(); // 41
	CRelativeOffset<CTransitionUpdateData>::CRelativeOffset(); // 84
	CRelativeArray<CTransitionUpdateData>::CRelativeArray(); // 41
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CStateMachineInstanceData>::CPackedHandle(); // 41
	{
		int nFootCount; // 43
		PackedHandleID::operator=(
				uint32 id);  // 144
		CPackedDataT<true>::AddItem<CStateMachineInstanceData, int&, int&, CPackedDataT<true>&>(
											CPackedHandle<CStateMachineInstanceData>* handleOut);  // 46
		{
			uint32 i; // 160
			CRelativeOffset<CRelativeOffset<IConditionUpdater> >::CRelativeOffset(); // 84
			CRelativeArray<CRelativeOffset<IConditionUpdater> >::CRelativeArray(); // 138
			CRelativeObjectArray<IConditionUpdater>::CRelativeObjectArray(); // 26
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 27
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 27
			CBlendCurve::CBlendCurve(); // 26
			CTransitionUpdateData::CTransitionUpdateData(); // 162
		}
		CPackedDataT<false>::AddArray<CTransitionUpdateData>(
						uint32 count,
						CPackedHandle<CTransitionUpdateData>* handleOut);  // 49
		{
		}
		CRelativeOffset<CTransitionUpdateData>::SetOffset(
				const CTransitionUpdateData* targetPtr);  // 20
		CRelativeOffset<CTransitionUpdateData>::operator=(
				const CTransitionUpdateData* targetPtr);  // 115
		CRelativeArray<CTransitionUpdateData>::SetArray(
			const CTransitionUpdateData* targetArray,
			int32 count);  // 49
		{
			uint32 i; // 160
			CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 52
			CRelativeOffset<int>::CRelativeOffset(); // 84
			CRelativeArray<int>::CRelativeArray(); // 52
			CRelativeOffset<CStateTag>::CRelativeOffset(); // 84
			CRelativeArray<CStateTag>::CRelativeArray(); // 52
			AnimStateID::AnimStateID(); // 52
			CStateUpdateData::CStateUpdateData(); // 162
		}
		CPackedDataT<false>::AddArray<CStateUpdateData>(
						uint32 count,
						CPackedHandle<CStateUpdateData>* handleOut);  // 50
		{
		}
		CRelativeOffset<CStateUpdateData>::SetOffset(
				const CStateUpdateData* targetPtr);  // 20
		CRelativeOffset<CStateUpdateData>::operator=(
				const CStateUpdateData* targetPtr);  // 115
		CRelativeArray<CStateUpdateData>::SetArray(
			const CStateUpdateData* targetArray,
			int32 count);  // 50
	}
} /* size: 0, inline expansions: 6 (34 bytes) */

// <0193C1EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:40
// variable: 1
void CStateMachineUpdateNode::CStateMachineUpdateNode(CAnimGraphInitContext& initContext, int stateCount, int transitionCount)
{
	{
		int nFootCount; // 43
	}
} /* size: 0 */

// <0193C18C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:54
// function call: 1
void CStateMachineUpdateNode::GetChildCount()
{
	CRelativeArray<CStateUpdateData>::Count(); // 56
} /* size: 8, inline expansions: 1 (0 bytes) */

// <0193C020> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:60
// function calls: 6
void CStateMachineUpdateNode::GetChild(int index)
{
	CRelativeArray<CStateUpdateData>::Count(); // 62
	CRelativeOffset<CStateUpdateData>::IsValid(); // 35
	CRelativeOffset<CStateUpdateData>::Get(); // 97
	CRelativeArray<CStateUpdateData>::operator[](
			int index);  // 64
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 64
} /* size: 59, inline expansions: 6 (68 bytes) */

// <0193BC66> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:73
// function calls: 14
void CStateMachineUpdateNode::IsChildActive(CAnimGraphUpdateContext& context, int index)
{
	CRelativeArray<CStateUpdateData>::Count(); // 75
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	{
	}
	CRelativeOffset<float>::IsValid(); // 30
	CRelativeOffset<float>::Get(); // 90
	CRelativeArray<float>::operator[](
			int index);  // 77
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 78
} /* size: 0, inline expansions: 14 (288 bytes) */

// <01975A97> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:87
// function calls: 7
void CStateMachineUpdateNode::IsChildWaning(CAnimGraphUpdateContext& context, int index)
{
	CRelativeArray<CStateUpdateData>::Count(); // 89
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 91
	CStateMachineUpdateNode::IsChildWaning(
			CAnimGraphUpdateContext& context,
			int index);  // 87
} /* size: 119, inline expansions: 7 (141 bytes) */

// <0193BC35> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:87
void CStateMachineUpdateNode::IsChildWaning(CAnimGraphUpdateContext& context, int index)
{
} /* size: 0 */

// <01977613> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:100
// function calls: 6
void CStateMachineUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 103
	CStateMachineUpdateNode::Update(
		CAnimGraphUpdateContext& context);  // 100
} /* size: 189, inline expansions: 6 (152 bytes) */

// <0193BC10> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:100
void CStateMachineUpdateNode::Update(CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <0193B4A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:119
// variables: 11
// function calls: 27
void CStateMachineUpdateNode::PostUpdate(CAnimGraphUpdateContext& context)
{
	CStateMachineInstanceData* pInstData; // 121
	const float  flPrevTime; // 123
	const float  flNextTIme; // 124
	const float  flCurrentStateStartTime; // 125
	{
		Vector vVelocityDelta; // 131
		{
			const CStateUpdateData& currState; // 139
			{
				Vector vOldVelocityWS; // 142
				Vector vNewVelocityWS; // 143
				const CStateUpdateData& prevState; // 146
				{
					CRootMotion oldRootMotion; // 149
					CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
					CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 149
					Vector::Vector(); // 1436
					VectorAdd(const Vector& a,
							const Vector& b,
							Vector& c);  // 1437
					Vector::operator+(
							const Vector& v);  // 152
					Vector::operator=(
							const Vector& vOther);  // 152
				}
				{
					CRootMotion newRootMotion; // 158
					CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
					CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 158
					Vector::operator=(
							const Vector& vOther);  // 159
				}
				CRelativeArray<CStateUpdateData>::operator[](
						int index);  // 146
				CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 147
				CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 156
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 162
				Vector::operator=(
						const Vector& vOther);  // 162
			}
			CRelativeOffset<CStateUpdateData>::IsValid(); // 35
			CRelativeOffset<CStateUpdateData>::Get(); // 97
			CRelativeArray<CStateUpdateData>::operator[](
					int index);  // 139
		}
		CRelativeArray<CStateUpdateData>::IsValidIndex(
				int index);  // 134
		CRelativeArray<CStateUpdateData>::IsValidIndex(
				int index);  // 135
		Vector::operator=(
				const Vector& vOther);  // 166
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 121
} /* size: 416, variables: 4, inline expansions: 5 (85 bytes) */

// <0193AA27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:171
// variables: 3
// function calls: 41
void CStateMachineUpdateNode::EnqueueChildren(CAnimGraphUpdateContext& context)
{
	const int  currentState; // 173
	{
		const CRelativeArray<float>& weights; // 177
		{
			int32 i; // 185
			CRelativeArray<float>::Count(); // 185
			CRelativeOffset<float>::IsValid(); // 35
			CRelativeOffset<float>::Get(); // 97
			CRelativeArray<float>::operator[](
					int index);  // 187
			{
			}
			CRelativeOffset<CStateUpdateData>::IsValid(); // 35
			CRelativeOffset<CStateUpdateData>::Get(); // 97
			CRelativeArray<CStateUpdateData>::operator[](
					int index);  // 187
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 187
			{
			}
			CRelativeOffset<float>::IsValid(); // 35
			CRelativeOffset<float>::Get(); // 97
			CRelativeArray<float>::operator[](
					int index);  // 189
			{
			}
			CRelativeOffset<CStateUpdateData>::IsValid(); // 35
			CRelativeOffset<CStateUpdateData>::Get(); // 97
			CRelativeArray<CStateUpdateData>::operator[](
					int index);  // 189
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 189
		}
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 177
		{
		}
		CRelativeOffset<CStateUpdateData>::IsValid(); // 35
		CRelativeOffset<CStateUpdateData>::Get(); // 97
		CRelativeArray<CStateUpdateData>::operator[](
				int index);  // 180
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 180
		{
		}
		CRelativeOffset<float>::IsValid(); // 35
		CRelativeOffset<float>::Get(); // 97
		CRelativeArray<float>::operator[](
				int index);  // 182
		{
		}
		CRelativeOffset<CStateUpdateData>::IsValid(); // 35
		CRelativeOffset<CStateUpdateData>::Get(); // 97
		CRelativeArray<CStateUpdateData>::operator[](
				int index);  // 182
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 182
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 173
	CRelativeArray<CStateUpdateData>::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CStateUpdateData>::VerifyValidIndex(
			int index);  // 174
} /* size: 0, variables: 1, inline expansions: 8 (141 bytes) */

// <01939BD2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:196
// variables: 10
// function calls: 51
void CStateMachineUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	const int  flCurrentStateIndex; // 199
	const char   __FUNCTION__; // 54581
	{
		const CRelativeArray<float>& weights; // 203
		PoseHandle poseHandles; // 205
		float poseWeights; // 206
		int exclusiveRootMotion; // 208
		int poseCount; // 209
		{
			int32 i; // 210
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 214
			}
			CRelativeOffset<float>::IsValid(); // 35
			CRelativeOffset<float>::Get(); // 97
			CRelativeArray<float>::operator[](
					int index);  // 212
			{
			}
			CRelativeOffset<float>::IsValid(); // 35
			CRelativeOffset<float>::Get(); // 97
			CRelativeArray<float>::operator[](
					int index);  // 216
			{
			}
			CRelativeOffset<CStateUpdateData>::IsValid(); // 35
			CRelativeOffset<CStateUpdateData>::Get(); // 97
			CRelativeArray<CStateUpdateData>::operator[](
					int index);  // 218
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 218
			{
			}
			CRelativeOffset<CStateUpdateData>::IsValid(); // 35
			CRelativeOffset<CStateUpdateData>::Get(); // 97
			CRelativeArray<CStateUpdateData>::operator[](
					int index);  // 220
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
			CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 220
			{
			}
			CRelativeArray<CStateUpdateData>::operator[](
					int index);  // 223
			CRelativeArray<float>::Count(); // 210
		}
		{
			int i; // 235
		}
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 203
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 253
		{
		}
		CRelativeOffset<CStateUpdateData>::IsValid(); // 35
		CRelativeOffset<CStateUpdateData>::Get(); // 97
		CRelativeArray<CStateUpdateData>::operator[](
				int index);  // 251
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 251
		{
		}
		CRelativeOffset<CStateUpdateData>::IsValid(); // 35
		CRelativeOffset<CStateUpdateData>::Get(); // 97
		CRelativeArray<CStateUpdateData>::operator[](
				int index);  // 253
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 253
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 198
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 199
	CRelativeArray<CStateUpdateData>::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CStateUpdateData>::VerifyValidIndex(
			int index);  // 201
} /* size: 0, variables: 2, inline expansions: 13 (269 bytes) */

// <019399AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:260
// variables: 3
// function calls: 5
void CStateMachineUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	const char   __FUNCTION__; // 54608
	PoseHandle hPose; // 264
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 262
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 264
} /* size: 0, variables: 2, inline expansions: 5 (76 bytes) */

// <01939906> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:270
// variables: 2
void CStateMachineUpdateNode::GetCycle(CAnimGraphUpdateContext& context)
{
	float cycle; // 272
	const CAnimUpdateNodeBase* childNode; // 274
} /* size: 54, variables: 2 */

// <01939862> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:284
// variables: 2
void CStateMachineUpdateNode::GetDuration(CAnimGraphUpdateContext& context)
{
	float duration; // 286
	const CAnimUpdateNodeBase* childNode; // 288
} /* size: 54, variables: 2 */

// <019396E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:298
// variable: 1
// function calls: 3
void CStateMachineUpdateNode::GetTotalMovement(CAnimGraphUpdateContext& context)
{
	const CAnimUpdateNodeBase* childNode; // 300
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 307
} /* size: 0, variables: 1, inline expansions: 3 (149 bytes) */

// <01937E4F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:312
// variables: 44
// function calls: 101
void CStateMachineUpdateNode::GetRemainingMovement(CAnimGraphUpdateContext& context, float flCycle)
{
	CMotionTransform remainingMotion; // 314
	const CStateMachineInstanceData* pInstData; // 316
	{
		const CStateUpdateData& currentState; // 320
		const int  nCurrentTransitionIndex; // 326
		{
			const CTransitionUpdateData& currentTransition; // 329
			float flElapsedBlendTime; // 332
			Vector vExtraMovementWS; // 333
			CRelativeOffset<CTransitionUpdateData>::IsValid(); // 35
			CRelativeOffset<CTransitionUpdateData>::Get(); // 97
			CRelativeArray<CTransitionUpdateData>::operator[](
					int index);  // 329
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 1797
			NegSIMD<>(const fltx4& a); // 422
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<27>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
							const fltx4& b); // 2928
			ReverseSIMD<>(const fltx4& v); // 421
			QuaternionAligned::QuaternionAligned(
						fltx4 vec);  // 423
			QuaternionAligned::Conjugate(); // 448
			QuaternionAligned::operator fltx4(); // 408
			{
				fltx4 fl4Product; // 1725
				fltx4 fl4YXWZ; // 1727
				fltx4 fl4UUVV; // 1729
				fltx4 fl4VVUU; // 1731
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 1725
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1728
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1730
				{
					fltx4 retVal; // 373
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 374
				}
				RotateLeft2<>(const fltx4& a); // 1732
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1733
			}
			Dot4SIMD<>(const fltx4& a,
					const fltx4& b);  // 405
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 406
			{
				fltx4 retVal; // 1851
				_mm_cmpeq_ps(__m128 __A,
						__m128 __B);  // 1852
			}
			CmpEqSIMD<>(const fltx4& a,
					const fltx4& b);  // 407
			{
				fltx4 retVal; // 1662
				_mm_div_ps(__m128 __A,
						__m128 __B);  // 1663
			}
			DivSIMD<>(const fltx4& a,
					const fltx4& b);  // 408
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			MaskedAssign<>(const fltx4& ReplacementMask,
					const fltx4& a,
					const fltx4& b);  // 408
			QuaternionAligned::QuaternionAligned(
						fltx4 vec);  // 408
			QuaternionAligned::Normalized(); // 448
			{
				fltx4 v1_yzxx; // 3340
				fltx4 v2_zxyy; // 3342
				fltx4 v1_zxyy; // 3344
				fltx4 v2_yzxx; // 3346
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3347
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3343
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3341
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3345
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
			}
			CrossProduct3SIMD<>(const fltx4& v1,
						const fltx4& v2);  // 310
			{
				fltx4 retVal; // 1352
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1353
			}
			SplatWSIMD<>(const fltx4& a); // 313
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 311
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			MaddSIMD<>(const fltx4& a,
					const fltx4& b,
					const fltx4& c);  // 313
			{
				fltx4 v1_yzxx; // 3340
				fltx4 v2_zxyy; // 3342
				fltx4 v1_zxyy; // 3344
				fltx4 v2_yzxx; // 3346
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3343
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3347
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
			}
			CrossProduct3SIMD<>(const fltx4& v1,
						const fltx4& v2);  // 315
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 316
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 318
			QuaternionAligned::operator*(
					const VectorAligned& v);  // 448
			CTransform::RotateVectorByInverse(
						const VectorAligned& v0);  // 87
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 146
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 87
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 42
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 42
			VectorAligned::AsVector(); // 87
			CTransform::RotateVectorByInverse(
						const Vector& v0);  // 334
			Vector::operator+=(
					const Vector& v);  // 334
		}
		{
		}
		CRelativeOffset<CStateUpdateData>::IsValid(); // 35
		CRelativeOffset<CStateUpdateData>::Get(); // 97
		CRelativeArray<CStateUpdateData>::operator[](
				int index);  // 320
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 321
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 323
		Vector::operator=(
				const Vector& vOther);  // 17
		{
		}
		CRotation::operator=(
				const CRotation& rot);  // 17
		CMotionTransform::operator=(
				CMotionTransform &);  // 323
		CRelativeArray<CTransitionUpdateData>::IsValidIndex(
				int index);  // 327
	}
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 314
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 316
} /* size: 0, variables: 2, inline expansions: 8 (244 bytes) */

// <01937534> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:342
// variables: 6
// function calls: 31
void CStateMachineUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	{
		CStateMachineInstanceData* pInstData; // 351
		CRelativeArray<float>& weights; // 377
		const CAnimUpdateNodeBase* childNode; // 385
		{
			const CStateUpdateData& newState; // 363
			{
				int32 i; // 364
				CRelativeArray<CStateTag>::Count(); // 364
				CRelativeOffset<CStateTag>::IsValid(); // 35
				CRelativeOffset<CStateTag>::Get(); // 97
				CRelativeArray<CStateTag>::operator[](
						int index);  // 366
				{
				}
				CRelativeOffset<CStateTag>::IsValid(); // 35
				CRelativeOffset<CStateTag>::Get(); // 97
				CRelativeArray<CStateTag>::operator[](
						int index);  // 369
			}
			CRelativeOffset<CStateUpdateData>::IsValid(); // 35
			CRelativeOffset<CStateUpdateData>::Get(); // 97
			CRelativeArray<CStateUpdateData>::operator[](
					int index);  // 363
		}
		{
			int32 i; // 378
			CRelativeArray<float>::Count(); // 378
			CRelativeOffset<float>::IsValid(); // 30
			CRelativeOffset<float>::Get(); // 90
			CRelativeArray<float>::operator[](
					int index);  // 380
		}
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 351
		Vector::operator=(
				const Vector& vOther);  // 356
		CRelativeArray<CStateUpdateData>::IsValidIndex(
				int index);  // 105
		_DebuggerBreakInlineExpressionWrapper(void); // 105
		CRelativeArray<CStateUpdateData>::VerifyValidIndex(
				int index);  // 360
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 377
		{
		}
		CRelativeOffset<float>::IsValid(); // 30
		CRelativeOffset<float>::Get(); // 90
		CRelativeArray<float>::operator[](
				int index);  // 382
	}
} /* size: 0 */

// <01937188> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:394
// variables: 2
// function calls: 14
void CStateMachineUpdateNode::IsFinished(CAnimGraphUpdateContext& context)
{
	int currentStateIndex; // 396
	{
		const CStateUpdateData& currentState; // 399
		CRelativeOffset<CStateUpdateData>::IsValid(); // 35
		CRelativeOffset<CStateUpdateData>::Get(); // 97
		CRelativeArray<CStateUpdateData>::operator[](
				int index);  // 399
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 400
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 402
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 396
	CRelativeArray<CStateUpdateData>::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CStateUpdateData>::VerifyValidIndex(
			int index);  // 397
} /* size: 0, variables: 1, inline expansions: 8 (132 bytes) */

// <01936DDC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:410
// variables: 2
// function calls: 14
void CStateMachineUpdateNode::GetTimeTillFinished(CAnimGraphUpdateContext& context)
{
	int currentStateIndex; // 412
	{
		const CStateUpdateData& currentState; // 415
		CRelativeOffset<CStateUpdateData>::IsValid(); // 35
		CRelativeOffset<CStateUpdateData>::Get(); // 97
		CRelativeArray<CStateUpdateData>::operator[](
				int index);  // 415
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 416
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 418
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 412
	CRelativeArray<CStateUpdateData>::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CStateUpdateData>::VerifyValidIndex(
			int index);  // 413
} /* size: 0, variables: 1, inline expansions: 8 (132 bytes) */

// <01936AED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:426
// variable: 1
// function calls: 8
void CStateMachineUpdateNode::OnSave(const CAnimGraphUpdateContext& context, ISave* pSave)
{
	const CStateMachineInstanceData* pInstData; // 428
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 428
	{
	}
	CRelativeOffset<CStateUpdateData>::IsValid(); // 35
	CRelativeOffset<CStateUpdateData>::Get(); // 97
	CRelativeArray<CStateUpdateData>::operator[](
			int index);  // 436
} /* size: 0, variables: 1, inline expansions: 8 (216 bytes) */

// <01936733> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:443
// variables: 4
// function calls: 12
void CStateMachineUpdateNode::OnRestore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
	CStateMachineInstanceData* pInstData; // 445
	{
		bool bFound; // 451
		const AnimStateID  currentStateID; // 453
		{
			int i; // 457
			CRelativeArray<CStateUpdateData>::Count(); // 457
			CRelativeOffset<CStateUpdateData>::IsValid(); // 35
			CRelativeOffset<CStateUpdateData>::Get(); // 97
			CRelativeArray<CStateUpdateData>::operator[](
					int index);  // 459
			AnimStateID::operator==(
					const AnimStateID& rhs);  // 459
		}
		AnimStateID::AnimStateID(
				const uint32  id);  // 453
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 445
	CRelativeArray<CStateUpdateData>::Count(); // 481
} /* size: 325, variables: 1, inline expansions: 6 (85 bytes) */

// <01934ABC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:489
// variables: 45
// function calls: 117
void CStateMachineUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	CStateMachineInstanceData* pInstData; // 491
	CRootMotion motion; // 493
	const int  nCurrentStateIndex; // 495
	{
		const CTransitionUpdateData& transition; // 506
		float blendCycle; // 508
		{
			Vector vVelocityDeltaWS; // 511
			Vector vTranslationDeltaWS; // 512
			Vector vTranslationDeltaMS; // 513
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 511
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 512
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 146
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 87
			{
				fltx4 retVal; // 1276
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1277
			}
			ShuffleSIMD<27>(const fltx4& a,
					const fltx4& b);  // 665
			ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
							const fltx4& b); // 2928
			ReverseSIMD<>(const fltx4& v); // 421
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 1797
			NegSIMD<>(const fltx4& a); // 422
			QuaternionAligned::QuaternionAligned(
						fltx4 vec);  // 423
			QuaternionAligned::Conjugate(); // 448
			{
				fltx4 v1_yzxx; // 3340
				fltx4 v2_zxyy; // 3342
				fltx4 v1_zxyy; // 3344
				fltx4 v2_yzxx; // 3346
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3343
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3347
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3341
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3345
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
			}
			CrossProduct3SIMD<>(const fltx4& v1,
						const fltx4& v2);  // 310
			{
				fltx4 retVal; // 1352
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1353
			}
			SplatWSIMD<>(const fltx4& a); // 313
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 311
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			MaddSIMD<>(const fltx4& a,
					const fltx4& b,
					const fltx4& c);  // 313
			{
				fltx4 v1_yzxx; // 3340
				fltx4 v2_zxyy; // 3342
				fltx4 v1_zxyy; // 3344
				fltx4 v2_yzxx; // 3346
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3343
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3347
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
			}
			CrossProduct3SIMD<>(const fltx4& v1,
						const fltx4& v2);  // 315
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 316
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 318
			QuaternionAligned::operator*(
					const VectorAligned& v);  // 448
			QuaternionAligned::operator fltx4(); // 408
			{
				fltx4 fl4Product; // 1725
				fltx4 fl4YXWZ; // 1727
				fltx4 fl4UUVV; // 1729
				fltx4 fl4VVUU; // 1731
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 1725
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1728
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1730
				{
					fltx4 retVal; // 373
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 374
				}
				RotateLeft2<>(const fltx4& a); // 1732
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1733
			}
			Dot4SIMD<>(const fltx4& a,
					const fltx4& b);  // 405
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 406
			{
				fltx4 retVal; // 1851
				_mm_cmpeq_ps(__m128 __A,
						__m128 __B);  // 1852
			}
			CmpEqSIMD<>(const fltx4& a,
					const fltx4& b);  // 407
			{
				fltx4 retVal; // 1662
				_mm_div_ps(__m128 __A,
						__m128 __B);  // 1663
			}
			DivSIMD<>(const fltx4& a,
					const fltx4& b);  // 408
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			MaskedAssign<>(const fltx4& ReplacementMask,
					const fltx4& a,
					const fltx4& b);  // 408
			QuaternionAligned::QuaternionAligned(
						fltx4 vec);  // 408
			QuaternionAligned::Normalized(); // 448
			CTransform::RotateVectorByInverse(
						const VectorAligned& v0);  // 87
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 42
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 42
			VectorAligned::AsVector(); // 87
			CTransform::RotateVectorByInverse(
						const Vector& v0);  // 513
			Vector::operator+=(
					const Vector& v);  // 515
			Vector::operator+=(
					const Vector& v);  // 516
		}
		CRelativeOffset<CTransitionUpdateData>::IsValid(); // 35
		CRelativeOffset<CTransitionUpdateData>::Get(); // 97
		CRelativeArray<CTransitionUpdateData>::operator[](
				int index);  // 506
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 491
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
			const CRootMotion  &);  // 493
	CRelativeArray<CStateUpdateData>::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CStateUpdateData>::VerifyValidIndex(
			int index);  // 496
	CRelativeOffset<CStateUpdateData>::IsValid(); // 35
	CRelativeOffset<CStateUpdateData>::Get(); // 97
	CRelativeArray<CStateUpdateData>::operator[](
			int index);  // 498
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 498
	CRelativeArray<CTransitionUpdateData>::IsValidIndex(
			int index);  // 504
	{
	}
	CRelativeOffset<CStateUpdateData>::IsValid(); // 35
	CRelativeOffset<CStateUpdateData>::Get(); // 97
	CRelativeArray<CStateUpdateData>::operator[](
			int index);  // 500
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 500
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 11
	CRootMotion::operator=(
			CRootMotion &);  // 500
} /* size: 0, variables: 3, inline expansions: 27 (895 bytes) */

// <019341DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:526
// variables: 16
// function calls: 22
void CStateMachineUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footPoseInfo)
{
	const CStateMachineInstanceData* pInstData; // 530
	const int  nCurrentStateIndex; // 532
	{
		const CStateUpdateData& currentState; // 536
		const int  nTransitionIndex; // 542
		{
			const CTransitionUpdateData& transition; // 545
			const float  flCurrentStateStartTime; // 547
			float flPrevTime; // 549
			float flNextTIme; // 550
			bool bStateChangedThisTick; // 551
			{
				int iFoot; // 559
			}
			{
				const float  flElapsedBlendTime; // 567
				const float  flRemainingBlendTime; // 568
				{
					int iFoot; // 570
					{
						float flRemainingFootCycleTime; // 575
						Vector vExtraMovementWS; // 576
						Vector vExtraMovementMS; // 577
						Vector::operator+=(
								const Vector& v);  // 578
					}
				}
			}
			{
			}
			CRelativeOffset<CTransitionUpdateData>::IsValid(); // 35
			CRelativeOffset<CTransitionUpdateData>::Get(); // 97
			CRelativeArray<CTransitionUpdateData>::operator[](
					int index);  // 545
		}
		{
		}
		CRelativeOffset<CStateUpdateData>::IsValid(); // 35
		CRelativeOffset<CStateUpdateData>::Get(); // 97
		CRelativeArray<CStateUpdateData>::operator[](
				int index);  // 536
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 539
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 530
	CRelativeArray<CStateUpdateData>::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CStateUpdateData>::VerifyValidIndex(
			int index);  // 534
	CRelativeOffset<CStateUpdateData>::IsValid(); // 35
	CRelativeOffset<CStateUpdateData>::Get(); // 97
	CRelativeArray<CStateUpdateData>::operator[](
			int index);  // 534
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 534
} /* size: 0, variables: 2, inline expansions: 12 (203 bytes) */

// <01934048> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:595
// function calls: 5
void CStateMachineUpdateNode::GetCurrentStateStartTime(const CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 597
} /* size: 88, inline expansions: 5 (68 bytes) */

// <01933D48> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:600
// variables: 4
// function calls: 9
void CStateMachineUpdateNode::EvaluateGlobalStates(CAnimGraphUpdateContext& context)
{
	CStateMachineInstanceData* pInstData; // 602
	{
		int32 s; // 607
		{
			int nextStateIndex; // 612
			int nextTransitionIndex; // 613
			CRelativeOffset<CStateUpdateData>::IsValid(); // 35
			CRelativeOffset<CStateUpdateData>::Get(); // 97
			CRelativeArray<CStateUpdateData>::operator[](
					int index);  // 609
		}
		CRelativeArray<CStateUpdateData>::Count(); // 607
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 602
} /* size: 273, variables: 1, inline expansions: 5 (96 bytes) */

// <01932AAE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:625
// variables: 10
// function calls: 70
void CStateMachineUpdateNode::TransitionState(CAnimGraphUpdateContext& context, int prevStateIndex, int nextStateIndex, int nextTransitionIndex, bool saveVelocity)
{
	CStateMachineInstanceData* pInstData; // 627
	const CStateUpdateData& newState; // 628
	const CTransitionUpdateData& transition; // 675
	{
		Vector vScaleVelocityDelta; // 634
		{
			const CTransitionUpdateData& transition; // 638
			float blendCycle; // 640
			CRelativeOffset<CTransitionUpdateData>::IsValid(); // 35
			CRelativeOffset<CTransitionUpdateData>::Get(); // 97
			CRelativeArray<CTransitionUpdateData>::operator[](
					int index);  // 638
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 643
			Vector::operator=(
					const Vector& vOther);  // 643
		}
		CRelativeArray<CTransitionUpdateData>::IsValidIndex(
				int index);  // 636
		Vector::operator=(
				const Vector& vOther);  // 647
	}
	{
		const CStateUpdateData& oldState; // 653
		{
			int32 i; // 654
			CRelativeArray<CStateTag>::Count(); // 654
			CRelativeOffset<CStateTag>::IsValid(); // 35
			CRelativeOffset<CStateTag>::Get(); // 97
			{
			}
			CRelativeArray<CStateTag>::operator[](
					int index);  // 659
			CRelativeOffset<CStateTag>::IsValid(); // 35
			CRelativeOffset<CStateTag>::Get(); // 97
			CRelativeArray<CStateTag>::operator[](
					int index);  // 656
		}
		CRelativeOffset<CStateUpdateData>::IsValid(); // 35
		CRelativeOffset<CStateUpdateData>::Get(); // 97
		CRelativeArray<CStateUpdateData>::operator[](
				int index);  // 653
	}
	{
		int32 i; // 665
		CRelativeArray<CStateTag>::Count(); // 665
		CRelativeOffset<CStateTag>::IsValid(); // 35
		CRelativeOffset<CStateTag>::Get(); // 97
		CRelativeArray<CStateTag>::operator[](
				int index);  // 667
		{
		}
		CRelativeOffset<CStateTag>::IsValid(); // 35
		CRelativeOffset<CStateTag>::Get(); // 97
		CRelativeArray<CStateTag>::operator[](
				int index);  // 670
	}
	{
		float resetCycle; // 678
		CRelativeArray<CStateUpdateData>::IsValidIndex(
				int index);  // 105
		_DebuggerBreakInlineExpressionWrapper(void); // 105
		CRelativeArray<CStateUpdateData>::VerifyValidIndex(
				int index);  // 684
		CRelativeOffset<CStateUpdateData>::IsValid(); // 35
		CRelativeOffset<CStateUpdateData>::Get(); // 97
		CRelativeArray<CStateUpdateData>::operator[](
				int index);  // 684
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 684
		{
		}
		CRelativeOffset<CStateUpdateData>::IsValid(); // 35
		CRelativeOffset<CStateUpdateData>::Get(); // 97
		CRelativeArray<CStateUpdateData>::operator[](
				int index);  // 686
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 686
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 712
		CRelativeArray<CStateUpdateData>::IsValidIndex(
				int index);  // 105
		_DebuggerBreakInlineExpressionWrapper(void); // 105
		CRelativeArray<CStateUpdateData>::VerifyValidIndex(
				int index);  // 693
		CRelativeOffset<CStateUpdateData>::IsValid(); // 35
		CRelativeOffset<CStateUpdateData>::Get(); // 97
		CRelativeArray<CStateUpdateData>::operator[](
				int index);  // 693
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 693
		{
		}
		CRelativeOffset<CStateUpdateData>::IsValid(); // 35
		CRelativeOffset<CStateUpdateData>::Get(); // 97
		CRelativeArray<CStateUpdateData>::operator[](
				int index);  // 695
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 695
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 627
	{
	}
	CRelativeOffset<CStateUpdateData>::IsValid(); // 35
	CRelativeOffset<CStateUpdateData>::Get(); // 97
	CRelativeArray<CStateUpdateData>::operator[](
			int index);  // 628
	CRelativeArray<CStateUpdateData>::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CStateUpdateData>::VerifyValidIndex(
			int index);  // 650
	{
	}
	CRelativeOffset<CTransitionUpdateData>::IsValid(); // 35
	CRelativeOffset<CTransitionUpdateData>::Get(); // 97
	CRelativeArray<CTransitionUpdateData>::operator[](
			int index);  // 675
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 676
} /* size: 0, variables: 3, inline expansions: 15 (382 bytes) */

// <0197720D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:727
// variables: 7
// function calls: 10
void CStateMachineUpdateNode::UpdateCurrentState(CAnimGraphUpdateContext& context)
{
	CStateMachineInstanceData* pInstData; // 735
	int currentStateIndex; // 736
	int nextStateIndex; // 738
	int prevStateIndex; // 739
	int nextTransitionIndex; // 740
	const int  maxStateChanges; // 743
	int checkCount; // 744
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 735
	CRelativeArray<CStateUpdateData>::Count(); // 743
	{
	}
	{
	}
	CRelativeOffset<CStateUpdateData>::IsValid(); // 35
	CRelativeOffset<CStateUpdateData>::Get(); // 97
	CRelativeArray<CStateUpdateData>::operator[](
			int index);  // 765
	CStateMachineUpdateNode::UpdateCurrentState(
				CAnimGraphUpdateContext& context);  // 727
} /* size: 0, variables: 7, inline expansions: 10 (511 bytes) */

// <01932A09> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:727
// variables: 9
void CStateMachineUpdateNode::UpdateCurrentState(CAnimGraphUpdateContext& context)
{
	CStateMachineInstanceData* pInstData; // 735
	int currentStateIndex; // 736
	int nextStateIndex; // 738
	int prevStateIndex; // 739
	int nextTransitionIndex; // 740
	const int  maxStateChanges; // 743
	int checkCount; // 744
	const char   __FUNCTION__; // 54733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 752
	}
} /* size: 0, variables: 8 */

// <019321D7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:769
// variables: 10
// function calls: 28
void CStateMachineUpdateNode::EvaluateState(int currentStateIndex, int& newStateIndex, int& newTransitionIndex, CAnimGraphUpdateContext& context)
{
	const CStateUpdateData& state; // 774
	int transitionCount; // 776
	int transitionIndex; // 777
	{
		const CTransitionUpdateData& transition; // 780
		{
			int conditionCount; // 784
			bool bAllConditionsPassed; // 786
			{
				int conditionIndex; // 788
				{
				}
				CRelativeOffset<CRelativeOffset<IConditionUpdater> >::IsValid(); // 35
				CRelativeOffset<CRelativeOffset<IConditionUpdater> >::Get(); // 97
				CRelativeArray<CRelativeOffset<IConditionUpdater> >::operator[](
						int index);  // 790
				CRelativeOffset<IConditionUpdater>::IsValid(); // 35
				CRelativeOffset<IConditionUpdater>::Get(); // 45
				CRelativeOffset<IConditionUpdater>::operator->(); // 790
			}
			{
				CStateMachineInstanceData* pInstData; // 799
				float flDuration; // 800
				float flTime; // 801
				CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
				PackedHandleID::PackedHandleID(
						const PackedHandleID& rhs);  // 260
				CPackedDataBase::operator[]<CStateMachineInstanceData>(
									const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
				CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
									const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
				CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
									const CPackedHandle<CStateMachineInstanceData>& handle);  // 799
			}
			CRelativeArray<CRelativeOffset<IConditionUpdater> >::Count(); // 784
			{
			}
			CRelativeOffset<int>::IsValid(); // 35
			CRelativeOffset<int>::Get(); // 97
			CRelativeArray<int>::operator[](
					int index);  // 809
		}
		CRelativeOffset<int>::IsValid(); // 35
		CRelativeOffset<int>::Get(); // 97
		{
		}
		CRelativeArray<int>::operator[](
				int index);  // 780
		{
		}
		CRelativeOffset<CTransitionUpdateData>::IsValid(); // 35
		CRelativeOffset<CTransitionUpdateData>::Get(); // 97
		CRelativeArray<CTransitionUpdateData>::operator[](
				int index);  // 780
	}
	CRelativeArray<CStateUpdateData>::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CStateUpdateData>::VerifyValidIndex(
			int index);  // 771
	CRelativeOffset<CStateUpdateData>::IsValid(); // 35
	CRelativeOffset<CStateUpdateData>::Get(); // 97
	CRelativeArray<CStateUpdateData>::operator[](
			int index);  // 774
	CRelativeArray<int>::Count(); // 776
} /* size: 0, variables: 3, inline expansions: 7 (122 bytes) */

// <01931099> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:820
// variables: 20
// function calls: 70
void CStateMachineUpdateNode::UpdateBlendWeights(CAnimGraphUpdateContext& context)
{
	const int  currentStateIndex; // 822
	const int  currentTransitionIndex; // 823
	CRelativeArray<float>& weights; // 824
	float sumWeights; // 826
	{
		const CTransitionUpdateData& transition; // 833
		float& cycle; // 835
		const float  transitionDuration; // 837
		{
			int wrapCount; // 840
			float unClampedCycle; // 841
		}
		{
			int32 i; // 850
			CRelativeArray<float>::Count(); // 850
			CRelativeOffset<float>::IsValid(); // 30
			CRelativeOffset<float>::Get(); // 90
			CRelativeArray<float>::operator[](
					int index);  // 854
		}
		{
			int32 i; // 869
			CRelativeArray<float>::Count(); // 869
			CRelativeOffset<float>::IsValid(); // 30
			CRelativeOffset<float>::Get(); // 90
			CRelativeArray<float>::operator[](
					int index);  // 871
		}
		{
			float mainStateWeight; // 878
			float weightScale; // 886
			{
				int32 i; // 889
				CRelativeArray<float>::Count(); // 889
				CRelativeOffset<float>::IsValid(); // 30
				CRelativeOffset<float>::Get(); // 90
				CRelativeArray<float>::operator[](
						int index);  // 893
			}
			{
				int i; // 101
				{
					float t2; // 103
					float t3; // 104
					float invT; // 106
					float invT2; // 107
					Vector2DMultiply(const Vector2D& a,
							vec_t b,
							Vector2D& c);  // 702
					Vector2D::Vector2D(); // 701
					Vector2D::operator*(
							float fl);  // 729
					operator*(float fl,
							const Vector2D& v);  // 111
					Vector2DMultiply(const Vector2D& a,
							vec_t b,
							Vector2D& c);  // 702
					Vector2D::Vector2D(); // 701
					Vector2D::operator*(
							float fl);  // 729
					operator*(float fl,
							const Vector2D& v);  // 110
					Vector2D::Vector2D(); // 701
					Vector2D::operator*(
							float fl);  // 729
					operator*(float fl,
							const Vector2D& v);  // 112
					Vector2D::Vector2D(); // 687
					Vector2DAdd(const Vector2D& a,
							const Vector2D& b,
							Vector2D& c);  // 688
					Vector2D::operator+(
							const Vector2D& v);  // 111
					Vector2D::Vector2D(); // 687
					Vector2DAdd(const Vector2D& a,
							const Vector2D& b,
							Vector2D& c);  // 688
					Vector2D::operator+(
							const Vector2D& v);  // 112
					CloseEnough(float a,
							float b,
							float epsilon);  // 114
				}
			}
			CBlendCurve::Evaluate(
				float t);  // 878
			{
			}
			CRelativeOffset<float>::IsValid(); // 30
			CRelativeOffset<float>::Get(); // 90
			CRelativeArray<float>::operator[](
					int index);  // 881
		}
		{
		}
		CRelativeOffset<CTransitionUpdateData>::IsValid(); // 35
		CRelativeOffset<CTransitionUpdateData>::Get(); // 97
		CRelativeArray<CTransitionUpdateData>::operator[](
				int index);  // 833
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 835
		{
		}
		CRelativeOffset<float>::IsValid(); // 30
		CRelativeOffset<float>::Get(); // 90
		CRelativeArray<float>::operator[](
				int index);  // 874
	}
	{
		int32 i; // 900
		CRelativeArray<float>::Count(); // 900
		CRelativeOffset<float>::IsValid(); // 30
		CRelativeOffset<float>::Get(); // 90
		CRelativeArray<float>::operator[](
				int index);  // 902
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 822
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 823
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 824
	CRelativeArray<CStateUpdateData>::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CStateUpdateData>::VerifyValidIndex(
			int index);  // 829
	{
	}
	CRelativeOffset<float>::IsValid(); // 30
	CRelativeOffset<float>::Get(); // 90
	CRelativeArray<float>::operator[](
			int index);  // 905
} /* size: 0, variables: 4, inline expansions: 21 (406 bytes) */

// <01930BC0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:920
// variables: 3
// function calls: 18
void CStateMachineUpdateNode::AccumulateTags(CAnimGraphUpdateContext& context)
{
	int currentStateIndex; // 922
	{
		const CStateUpdateData& currentState; // 925
		{
			int32 i; // 927
			CRelativeArray<CStateTag>::Count(); // 927
			CRelativeOffset<CStateTag>::IsValid(); // 35
			CRelativeOffset<CStateTag>::Get(); // 97
			CRelativeArray<CStateTag>::operator[](
					int index);  // 929
			{
			}
			CRelativeOffset<CStateTag>::IsValid(); // 35
			CRelativeOffset<CStateTag>::Get(); // 97
			CRelativeArray<CStateTag>::operator[](
					int index);  // 931
		}
		CRelativeOffset<CStateUpdateData>::IsValid(); // 35
		CRelativeOffset<CStateUpdateData>::Get(); // 97
		CRelativeArray<CStateUpdateData>::operator[](
				int index);  // 925
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 922
	CRelativeArray<CStateUpdateData>::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CStateUpdateData>::VerifyValidIndex(
			int index);  // 923
} /* size: 0, variables: 1, inline expansions: 8 (136 bytes) */

// <01930790> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:938
// variable: 1
// function calls: 17
void CStateMachineUpdateNode::GetCurrentChild(CAnimGraphUpdateContext& context)
{
	int currentStateIndex; // 940
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 940
	CRelativeArray<CStateUpdateData>::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CStateUpdateData>::VerifyValidIndex(
			int index);  // 941
	CRelativeOffset<CStateUpdateData>::IsValid(); // 35
	CRelativeOffset<CStateUpdateData>::Get(); // 97
	CRelativeArray<CStateUpdateData>::operator[](
			int index);  // 943
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 943
	{
	}
	CRelativeOffset<CStateUpdateData>::IsValid(); // 35
	CRelativeOffset<CStateUpdateData>::Get(); // 97
	CRelativeArray<CStateUpdateData>::operator[](
			int index);  // 945
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 945
} /* size: 0, variables: 1, inline expansions: 17 (333 bytes) */

// <019304AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineupdatenode.cpp:953
// variable: 1
// function calls: 11
void CStateMachineUpdateNode::GetCurrentState(CAnimGraphUpdateContext& context)
{
	int currentStateIndex; // 955
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 955
	CRelativeArray<CStateUpdateData>::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<CStateUpdateData>::VerifyValidIndex(
			int index);  // 956
	CRelativeOffset<CStateUpdateData>::IsValid(); // 35
	CRelativeOffset<CStateUpdateData>::Get(); // 97
	CRelativeArray<CStateUpdateData>::operator[](
			int index);  // 958
} /* size: 0, variables: 1, inline expansions: 11 (182 bytes) */

