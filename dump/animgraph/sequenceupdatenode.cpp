
//
// animgraph/sequenceupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 25
//

// <0194F82A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:15
void GetBaseMap(void)
{
} /* size: 0 */

// <0194F76C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:15
// variables: 2
datamap_t* DataMapInit<CSequenceInstanceData>(CSequenceInstanceData *)
{
	const char* pDataMapInit_className; // 15
	typedescription_t dataDesc; // 15
} /* size: 154, variables: 2 */

// <0194F3A4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:25
// variable: 1
// function calls: 13
void CSequenceUpdateNode::CSequenceUpdateNode(CAnimGraphInitContext& initContext, int tagSpanCount)
{
	CRelativeOffset<TagSpan_t>::CRelativeOffset(); // 84
	CRelativeArray<TagSpan_t>::CRelativeArray(); // 26
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CSequenceInstanceData>::CPackedHandle(); // 26
	HSequence::HSequence(); // 26
	CSequenceInstanceData::CSequenceInstanceData(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<CSequenceInstanceData>(
					CPackedHandle<CSequenceInstanceData>* handleOut);  // 29
	{
		uint32 i; // 160
		TagSpan_t::TagSpan_t(); // 162
	}
	CPackedDataT<false>::AddArray<TagSpan_t>(
				uint32 count,
				CPackedHandle<TagSpan_t>* handleOut);  // 32
	{
	}
	CRelativeOffset<TagSpan_t>::SetOffset(
			const TagSpan_t* targetPtr);  // 20
	CRelativeOffset<TagSpan_t>::operator=(
			const TagSpan_t* targetPtr);  // 115
	CRelativeArray<TagSpan_t>::SetArray(
		const TagSpan_t* targetArray,
		int32 count);  // 32
} /* size: 0, inline expansions: 12 (322 bytes) */

// <0194F373> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:25
void CSequenceUpdateNode::CSequenceUpdateNode(CAnimGraphInitContext& initContext, int tagSpanCount)
{
} /* size: 0 */

// <0194EF80> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:36
// variables: 13
// function calls: 5
void CSequenceUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	CSequenceInstanceData* pInstData; // 38
	float& cycle; // 40
	float& prevCycle; // 41
	int wrapCount; // 51
	float unClampedCycle; // 52
	float flPlaybackDirection; // 53
	const char   __FUNCTION__; // 54429
	const float  newPlaybackSpeed; // 87
	{
		float flPrevCycleUnclamped; // 61
		float flNextCycleUnclamped; // 62
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 82
	}
	{
		float elapsedAnimTime; // 94
		float flCycleStartTime; // 95
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 38
} /* size: 0, variables: 8, inline expansions: 5 (85 bytes) */

// <0194ED0A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:116
// variables: 2
// function calls: 6
void CSequenceUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	CSequenceInstanceData* pInstData; // 118
	{
		float prevCycle; // 130
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 118
	HSequence::operator==(
			const HSequence& other);  // 128
} /* size: 259, variables: 1, inline expansions: 6 (77 bytes) */

// <0194EAFA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:136
// variables: 2
// function calls: 5
void CSequenceUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	const char   __FUNCTION__; // 54608
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 138
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 139
} /* size: 0, variables: 1, inline expansions: 5 (76 bytes) */

// <01974FAF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:143
// function calls: 12
void CSequenceUpdateNode::GetCycle(CAnimGraphUpdateContext& context)
{
	PackedHandleID::IsValid(); // 25
	CPackedHandle<CSequenceInstanceData>::IsValid(); // 145
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 149
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 153
	CSequenceUpdateNode::GetCycle(
		CAnimGraphUpdateContext& context);  // 143
} /* size: 155, inline expansions: 12 (174 bytes) */

// <0194EAD5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:143
void CSequenceUpdateNode::GetCycle(CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <0197393F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:163
void CSequenceUpdateNode::GetDuration(CAnimGraphUpdateContext &)
{
} /* size: 52 */

// <0194E8F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:176
// variable: 1
// function calls: 3
void CSequenceUpdateNode::GetTotalMovement(CAnimGraphUpdateContext& context)
{
	{
		const ISequence* pSequence; // 180
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
			const CMotionTransform  &);  // 185
} /* size: 0, inline expansions: 3 (149 bytes) */

// <0194E5D6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:190
// variables: 3
// function calls: 8
void CSequenceUpdateNode::GetRemainingMovement(CAnimGraphUpdateContext& context, float flCycle)
{
	{
		const ISequence* pSequence; // 194
		float flTestCycle; // 196
		float flEndCycle; // 198
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CSequenceInstanceData>(
							const CPackedHandle<CSequenceInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CSequenceInstanceData>(
							const CPackedHandle<CSequenceInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CSequenceInstanceData>(
							const CPackedHandle<CSequenceInstanceData>& handle);  // 196
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
			const CMotionTransform  &);  // 204
} /* size: 0, inline expansions: 3 (151 bytes) */

// <0194E244> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:209
// variables: 6
// function calls: 7
void CSequenceUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	const char   __FUNCTION__; // 54402
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
	{
		CSequenceInstanceData* pInstData; // 222
		float flEffectiveCycle; // 224
		{
			float elapsedAnimTime; // 234
			float flCycleStartTime; // 235
		}
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CSequenceInstanceData>(
							const CPackedHandle<CSequenceInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CSequenceInstanceData>(
							const CPackedHandle<CSequenceInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CSequenceInstanceData>(
							const CPackedHandle<CSequenceInstanceData>& handle);  // 222
	}
	PackedHandleID::IsValid(); // 25
	CPackedHandle<CSequenceInstanceData>::IsValid(); // 220
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <019752CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:254
// function calls: 10
void CSequenceUpdateNode::IsFinished(CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 260
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 264
	CSequenceUpdateNode::IsFinished(
			CAnimGraphUpdateContext& context);  // 254
} /* size: 165, inline expansions: 10 (208 bytes) */

// <0194E21F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:254
void CSequenceUpdateNode::IsFinished(CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <01975585> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:272
// variable: 1
// function calls: 11
void CSequenceUpdateNode::GetTimeTillFinished(CAnimGraphUpdateContext& context)
{
	{
		float flAdjustedCycle; // 276
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CSequenceInstanceData>(
							const CPackedHandle<CSequenceInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CSequenceInstanceData>(
							const CPackedHandle<CSequenceInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CSequenceInstanceData>(
							const CPackedHandle<CSequenceInstanceData>& handle);  // 276
		CSequenceUpdateNode::GetDuration(
				CAnimGraphUpdateContext &);  // 278
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CSequenceInstanceData>(
							const CPackedHandle<CSequenceInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CSequenceInstanceData>(
							const CPackedHandle<CSequenceInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CSequenceInstanceData>(
							const CPackedHandle<CSequenceInstanceData>& handle);  // 276
	}
	CSequenceUpdateNode::GetTimeTillFinished(
				CAnimGraphUpdateContext& context);  // 272
} /* size: 308, inline expansions: 1 (214 bytes) */

// <0194E1EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:272
// variable: 1
void CSequenceUpdateNode::GetTimeTillFinished(CAnimGraphUpdateContext& context)
{
	{
		float flAdjustedCycle; // 276
	}
} /* size: 0 */

// <0194E00D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:287
// variable: 1
// function calls: 5
void CSequenceUpdateNode::OnSave(const CAnimGraphUpdateContext& context, ISave* pSave)
{
	const CSequenceInstanceData* pInstData; // 289
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 289
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <0194DE30> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:294
// variable: 1
// function calls: 5
void CSequenceUpdateNode::OnRestore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
	CSequenceInstanceData* pInstData; // 296
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 296
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <0194D176> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:301
// variables: 7
// function calls: 36
void CSequenceUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footMotionList)
{
	CSequenceInstanceData* pInstData; // 305
	{
		const ISequence* pSequence; // 309
		const int  nFootMotionCount; // 312
		{
			{
				CAnimCycle cycle; // 315
				CAnimCycle prevCycle; // 316
				{
					int iFoot; // 318
					{
						const CFootMotion* pFootMotion; // 320
						CSequenceUpdateNode::GetDuration(
								CAnimGraphUpdateContext &);  // 325
						CCycleBase::GetValue(); // 125
						CCycleBase::CCycleBase(
								float flCycle);  // 125
						CAnimCycle::CAnimCycle(
								const CAnimCycle& rhs);  // 325
						CCycleBase::CCycleBase(
								float flCycle);  // 125
						CCycleBase::GetValue(); // 125
						CAnimCycle::CAnimCycle(
								const CAnimCycle& rhs);  // 325
						Vector::operator=(
								const Vector& vOther);  // 17
						{
						}
						CRotation::operator=(
								const CRotation& rot);  // 17
						CMotionTransform::operator=(
								CMotionTransform &);  // 12
						{
						}
						CRotation::operator=(
								const CRotation& rot);  // 17
						Vector::operator=(
								const Vector& vOther);  // 17
						CMotionTransform::operator=(
								CMotionTransform &);  // 12
						{
						}
						CRotation::operator=(
								const CRotation& rot);  // 17
						Vector::operator=(
								const Vector& vOther);  // 17
						CMotionTransform::operator=(
								CMotionTransform &);  // 12
						Vector::operator=(
								const Vector& vOther);  // 188
						CFootTrajectory::operator=(
								CFootTrajectory &);  // 12
						Vector::operator=(
								const Vector& vOther);  // 188
						CFootTrajectory::operator=(
								CFootTrajectory &);  // 12
						Vector::operator=(
								const Vector& vOther);  // 12
						Vector::operator=(
								const Vector& vOther);  // 12
						Vector::operator=(
								const Vector& vOther);  // 12
						Vector::operator=(
								const Vector& vOther);  // 12
						CFootMotionStatus::operator=(
								CFootMotionStatus &);  // 332
					}
				}
				CCycleBase::CCycleBase(
						float flCycle);  // 125
				CAnimCycle::CAnimCycle(
						float flCycle);  // 315
				CCycleBase::CCycleBase(
						float flCycle);  // 125
				CAnimCycle::CAnimCycle(
						float flCycle);  // 316
			}
			_DebuggerBreakInlineExpressionWrapper(void); // 313
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 305
	HSequence::operator==(
			const HSequence& other);  // 307
} /* size: 0, variables: 1, inline expansions: 6 (110 bytes) */

// <0194CBE9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:348
// variables: 8
// function calls: 13
void CSequenceUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	CSequenceInstanceData* pInstData; // 350
	float flCycleTimeDelta; // 352
	float flPrevCycleTimeDelta; // 353
	int wrap; // 355
	float flUnclampedCycle; // 356
	float flUnclampedPrevCycle; // 357
	CRootMotion motion; // 361
	{
		const ISequence* pSequence; // 364
		Vector::operator=(
				const Vector& vOther);  // 17
		{
		}
		CRotation::operator=(
				const CRotation& rot);  // 17
		CMotionTransform::operator=(
				CMotionTransform &);  // 11
		CRootMotion::operator=(
				CRootMotion &);  // 365
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CSequenceInstanceData>(
						const CPackedHandle<CSequenceInstanceData>& handle);  // 350
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
			const CRootMotion  &);  // 361
} /* size: 0, variables: 7, inline expansions: 9 (324 bytes) */

// <0194CBAB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:372
void CSequenceUpdateNode::SetSequence(HSequence hSequence)
{
} /* size: 8 */

// <0194CB6D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:378
void CSequenceUpdateNode::SetPlaybackSpeed(float speed)
{
} /* size: 10 */

// <0194CB2F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:384
void CSequenceUpdateNode::SetDuration(float duration)
{
} /* size: 10 */

// <0194CAF1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:390
void CSequenceUpdateNode::SetLoop(bool bLoop)
{
} /* size: 9 */

