
//
// animgraph/turnhelperupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 19
//

// <0192CD65> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:10
void GetBaseMap(void)
{
} /* size: 0 */

// <0192CCA7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:10
// variables: 2
datamap_t* DataMapInit<CTurnHelperInstanceData>(CTurnHelperInstanceData *)
{
	const char* pDataMapInit_className; // 10
	typedescription_t dataDesc; // 10
} /* size: 124, variables: 2 */

// <0192CA7C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:17
// function calls: 8
void CTurnHelperUpdateNode::CTurnHelperUpdateNode(CAnimGraphInitContext& initContext)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 9
	CUnaryUpdateNode::CUnaryUpdateNode(
			CAnimGraphInitContext& initContext);  // 18
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CTurnHelperInstanceData>::CPackedHandle(); // 18
	CAnimParamHandle::CAnimParamHandle(); // 18
	CTurnHelperInstanceData::CTurnHelperInstanceData(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<CTurnHelperInstanceData>(
					CPackedHandle<CTurnHelperInstanceData>* handleOut);  // 20
} /* size: 138, inline expansions: 8 (95 bytes) */

// <0192CA57> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:17
void CTurnHelperUpdateNode::CTurnHelperUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <0192C7CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:24
// variables: 2
// function calls: 9
void CTurnHelperUpdateNode::PostUpdate(CAnimGraphUpdateContext& context)
{
	CTurnHelperInstanceData* pInstData; // 26
	{
		float childDuration; // 33
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 33
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 41
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 26
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 31
} /* size: 199, variables: 1, inline expansions: 6 (81 bytes) */

// <0192C6CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:46
// variable: 1
// function calls: 3
void CTurnHelperUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	PoseHandle hPose; // 48
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 50
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 52
} /* size: 38, variables: 1, inline expansions: 3 (14 bytes) */

// <01974794> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:59
// variables: 2
// function calls: 9
void CTurnHelperUpdateNode::GetCycle(CAnimGraphUpdateContext& context)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 61
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 63
	{
		CTurnHelperInstanceData* pInstData; // 67
		float flCurrentTime; // 69
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CTurnHelperInstanceData>(
							const CPackedHandle<CTurnHelperInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CTurnHelperInstanceData>(
							const CPackedHandle<CTurnHelperInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CTurnHelperInstanceData>(
							const CPackedHandle<CTurnHelperInstanceData>& handle);  // 67
	}
	CTurnHelperUpdateNode::GetCycle(
		CAnimGraphUpdateContext& context);  // 59
} /* size: 274, inline expansions: 4 (180 bytes) */

// <0192C690> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:59
// variables: 2
void CTurnHelperUpdateNode::GetCycle(CAnimGraphUpdateContext& context)
{
	{
		CTurnHelperInstanceData* pInstData; // 67
		float flCurrentTime; // 69
	}
} /* size: 0 */

// <0192C59E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:80
// function calls: 3
void CTurnHelperUpdateNode::GetDuration(CAnimGraphUpdateContext& context)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 82
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 84
} /* size: 38, inline expansions: 3 (14 bytes) */

// <0192C0DC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:93
// variable: 1
// function calls: 17
void CTurnHelperUpdateNode::GetTotalMovement(CAnimGraphUpdateContext& context)
{
	CMotionTransform motion; // 95
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 95
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 96
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 98
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 98
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 101
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 145
	{
	}
	CRotation::operator+=(
			angle_t s);  // 101
} /* size: 0, variables: 1, inline expansions: 17 (440 bytes) */

// <0192BA8F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:107
// variables: 3
// function calls: 22
void CTurnHelperUpdateNode::GetRemainingMovement(CAnimGraphUpdateContext& context, float flCycle)
{
	CMotionTransform motion; // 109
	CTurnHelperInstanceData* pInstData; // 115
	float turnDelta; // 117
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 109
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 110
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 112
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 112
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 115
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 119
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 145
	{
	}
	CRotation::operator+=(
			angle_t s);  // 119
} /* size: 0, variables: 3, inline expansions: 22 (538 bytes) */

// <0192B5E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:125
// variables: 2
// function calls: 16
void CTurnHelperUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	float flChildTurnAmount; // 129
	CTurnHelperInstanceData* pInstData; // 140
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 104
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 106
	CUnaryUpdateNode::Reset(
		CAnimGraphUpdateContext& context,
		float flCycle);  // 127
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 140
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 144
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 146
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 134
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 136
	CRotation::operator float(); // 136
} /* size: 361, variables: 2, inline expansions: 16 (163 bytes) */

// <0192B34E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:151
// variables: 2
// function calls: 8
void CTurnHelperUpdateNode::IsFinished(CAnimGraphUpdateContext& context)
{
	CTurnHelperInstanceData* pInstData; // 153
	float cycle; // 155
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 153
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 157
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 159
} /* size: 209, variables: 2, inline expansions: 8 (110 bytes) */

// <0192B175> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:168
// variable: 1
// function calls: 5
void CTurnHelperUpdateNode::OnSave(const CAnimGraphUpdateContext& context, ISave* pSave)
{
	const CTurnHelperInstanceData* pInstData; // 170
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 170
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <0192AF9C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:175
// variable: 1
// function calls: 5
void CTurnHelperUpdateNode::OnRestore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
	CTurnHelperInstanceData* pInstData; // 177
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 177
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <0192AB58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:182
// variables: 2
// function calls: 14
void CTurnHelperUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	CRootMotion motion; // 184
	float flTurnDelta; // 191
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
			const CRootMotion  &);  // 184
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 186
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 145
	{
	}
	CRotation::operator+=(
			angle_t s);  // 192
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 188
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 11
	CRootMotion::operator=(
			CRootMotion &);  // 188
} /* size: 0, variables: 2, inline expansions: 14 (555 bytes) */

// <01977837> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:198
// variables: 3
// function calls: 7
void CTurnHelperUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footPoseInfo)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 202
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 205
	{
		int i; // 207
		{
			float predictedFootPlantTime; // 210
			float turnDelta; // 212
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 145
			{
			}
			CRotation::operator+=(
					angle_t s);  // 215
		}
	}
	CTurnHelperUpdateNode::CalculateFootMotion(
				CAnimGraphUpdateContext& context,
				const CMotionTransform& newLocalToWorld,
				CStrideStatus& footPoseInfo);  // 198
} /* size: 0, inline expansions: 4 (203 bytes) */

// <0192AAF5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:198
// variables: 3
void CTurnHelperUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footPoseInfo)
{
	{
		int i; // 207
		{
			float predictedFootPlantTime; // 210
			float turnDelta; // 212
		}
	}
} /* size: 0 */

// <0192A8D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/turnhelperupdatenode.cpp:221
// variables: 3
// function calls: 4
void CTurnHelperUpdateNode::CalcTurnAmount(CAnimGraphUpdateContext& context, float flStartTime, float flEndTime)
{
	CTurnHelperInstanceData* pInstData; // 223
	{
		float startCycle; // 227
		float endCycle; // 228
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CTurnHelperInstanceData>(
						const CPackedHandle<CTurnHelperInstanceData>& handle);  // 223
} /* size: 244, variables: 1, inline expansions: 4 (89 bytes) */

