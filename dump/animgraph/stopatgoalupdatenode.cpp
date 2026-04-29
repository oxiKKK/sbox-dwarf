
//
// animgraph/stopatgoalupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <0193024A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.cpp:9
// function calls: 8
void CStopAtGoalUpdateNode::CStopAtGoalUpdateNode(CAnimGraphInitContext& initContext)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 9
	CUnaryUpdateNode::CUnaryUpdateNode(
			CAnimGraphInitContext& initContext);  // 10
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CStopAtGoalInstanceData>::CPackedHandle(); // 10
	CDampedValue::CDampedValue(
			float flStartingValue,
			float flStartingVelocity);  // 11
	CStopAtGoalInstanceData::CStopAtGoalInstanceData(); // 123
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<CStopAtGoalInstanceData>(
					CPackedHandle<CStopAtGoalInstanceData>* handleOut);  // 12
} /* size: 116, inline expansions: 8 (105 bytes) */

// <01930225> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.cpp:9
void CStopAtGoalUpdateNode::CStopAtGoalUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <0192FD51> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.cpp:16
// variables: 4
// function calls: 19
void CStopAtGoalUpdateNode::PostUpdate(CAnimGraphUpdateContext& context)
{
	CStopAtGoalInstanceData* pInstData; // 18
	{
		CMotionTransform remainingMotion; // 26
		const float  flGoalDistance; // 28
		const float  flAnimDistance; // 29
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 26
		CAnimParamHandle::CAnimParamHandle(); // 28
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 44
		CMotionTransform::Length(); // 29
		CloseEnough(float a,
				float b,
				float epsilon);  // 32
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 35
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStopAtGoalInstanceData>(
						const CPackedHandle<CStopAtGoalInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStopAtGoalInstanceData>(
						const CPackedHandle<CStopAtGoalInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStopAtGoalInstanceData>(
						const CPackedHandle<CStopAtGoalInstanceData>& handle);  // 18
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 20
} /* size: 0, variables: 1, inline expansions: 6 (77 bytes) */

// <0192FC51> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.cpp:56
// variable: 1
// function calls: 3
void CStopAtGoalUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	PoseHandle hPose; // 58
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 60
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 62
} /* size: 38, variables: 1, inline expansions: 3 (14 bytes) */

// <0192F96F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.cpp:69
// variable: 1
// function calls: 9
void CStopAtGoalUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	CStopAtGoalInstanceData* pInstData; // 73
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 104
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 106
	CUnaryUpdateNode::Reset(
		CAnimGraphUpdateContext& context,
		float flCycle);  // 71
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStopAtGoalInstanceData>(
						const CPackedHandle<CStopAtGoalInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStopAtGoalInstanceData>(
						const CPackedHandle<CStopAtGoalInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStopAtGoalInstanceData>(
						const CPackedHandle<CStopAtGoalInstanceData>& handle);  // 73
} /* size: 143, variables: 1, inline expansions: 9 (120 bytes) */

// <0192F2F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.cpp:80
// variables: 5
// function calls: 23
void CStopAtGoalUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footPoseInfo)
{
	CStopAtGoalInstanceData* pInstData; // 84
	{
		int i; // 88
		{
			Vector vPositionDelta; // 90
			Vector vAdjustedPositionDelta; // 92
			Vector vNewPositionDelta; // 94
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 92
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 262
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 262
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 262
			Lerp<Vector>(float flPercent,
					const Vector& A,
					const Vector& B);  // 94
			Vector::operator=(
					const Vector& vOther);  // 96
		}
	}
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 141
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 143
	CUnaryUpdateNode::CalculateFootMotion(
				CAnimGraphUpdateContext& context,
				const CMotionTransform& newLocalToWorld,
				CStrideStatus& footInfoList);  // 82
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStopAtGoalInstanceData>(
						const CPackedHandle<CStopAtGoalInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStopAtGoalInstanceData>(
						const CPackedHandle<CStopAtGoalInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStopAtGoalInstanceData>(
						const CPackedHandle<CStopAtGoalInstanceData>& handle);  // 84
} /* size: 349, variables: 1, inline expansions: 9 (133 bytes) */

// <0192EC7C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stopatgoalupdatenode.cpp:102
// variables: 3
// function calls: 27
void CStopAtGoalUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	CRootMotion motion; // 104
	CStopAtGoalInstanceData* pInstData; // 106
	{
		Vector vAdjustedTranslation; // 110
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 110
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 262
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 262
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 262
		Lerp<Vector>(float flPercent,
				const Vector& A,
				const Vector& B);  // 111
		Vector::operator=(
				const Vector& vOther);  // 111
	}
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 150
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 152
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
			const CRootMotion  &);  // 156
	CUnaryUpdateNode::CalculateRootMotion(
				CAnimGraphUpdateContext& context);  // 104
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStopAtGoalInstanceData>(
						const CPackedHandle<CStopAtGoalInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStopAtGoalInstanceData>(
						const CPackedHandle<CStopAtGoalInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStopAtGoalInstanceData>(
						const CPackedHandle<CStopAtGoalInstanceData>& handle);  // 106
} /* size: 0, variables: 2, inline expansions: 13 (457 bytes) */

