
//
// animgraph/futurevelocitymetricevaluator.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <01641246> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricevaluator.cpp:10
void CFutureVelocityMetricEvaluator::CFutureVelocityMetricEvaluator(CPackedData& packedData, float flDistance, float flStoppingDistance, bool bIgnoreDirection, float flTargetSpeed, float flWeight)
{
} /* size: 96 */

// <0164115E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricevaluator.cpp:21
// function call: 1
void CFutureVelocityMetricEvaluator::GetUIName()
{
	CUtlString::CUtlString(
			const char* pString);  // 23
} /* size: 44, inline expansions: 1 (19 bytes) */

// <01640D42> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricevaluator.cpp:27
// variables: 9
// function calls: 9
void CFutureVelocityMetricEvaluator::CalculateSequenceValues(const CModel* pModel, CMotionMetricInitContext* pContext, HSequence hSequence, float flCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
	const char   __FUNCTION__; // 31150
	const ISequence* pSequence; // 31
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 29
	}
	{
		const CSequenceDistanceHelper* pSequenceHelper; // 34
		const float  flCycleForDistance; // 36
		Vector vVelocityClipSpace; // 39
		CMotionTransform previousMovement; // 44
		float flSpeed; // 46
		Vector vFutureVelocityMS; // 48
		Vector::Vector(); // 39
		Vector::NormalizeInPlace(); // 46
		Vector::operator*=(
				float fl);  // 49
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 58
	}
} /* size: 0, variables: 2 */

// <016404C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricevaluator.cpp:64
// variables: 6
// function calls: 25
void CFutureVelocityMetricEvaluator::CalculateGoalValues(const CAnimGraphUpdateContext& context, HSequence hSequence, float flCurrentCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
	const CMotionTransform  localToWorld; // 66
	CMotionTransform futureTransformWS; // 68
	CMotionTransform futureTransformMS; // 69
	float flRemainingDistance; // 70
	Vector vTargetVelocityMS; // 79
	{
		float flLerpValue; // 87
		SimpleSpline(float value); // 89
		Vector::operator*=(
				float fl);  // 89
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
			const CMotionTransform  &);  // 68
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 69
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 79
	Vector::operator=(
			const Vector& vOther);  // 83
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 99
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 74
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 75
	CAnimParamHandle::CAnimParamHandle(); // 76
} /* size: 0, variables: 5, inline expansions: 23 (830 bytes) */

// <016401C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricevaluator.cpp:106
// variables: 3
// function calls: 6
void CFutureVelocityMetricEvaluator::GetGoalPositionMS(const CAnimGraphUpdateContext& context)
{
	CMotionTransform futureTransformMS; // 108
	{
		const CMotionTransform  localToWorld; // 112
		CMotionTransform futureTransformWS; // 114
		Vector::operator=(
				const Vector& vOther);  // 17
		{
		}
		CRotation::operator=(
				const CRotation& rot);  // 17
		CMotionTransform::operator=(
				CMotionTransform &);  // 115
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
			const CMotionTransform  &);  // 108
} /* size: 0, variables: 1, inline expansions: 3 (152 bytes) */

// <0163FF69> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricevaluator.cpp:122
// variables: 5
// function calls: 3
void CFutureVelocityMetricEvaluator::GetClipPositionMS(const CAnimGraphUpdateContext& context, HSequence hSequence, float flCycle, bool bLoop)
{
	Vector vPos; // 124
	{
		const ISequence* pSequence; // 128
		float flDistanceCycle; // 130
		Vector vDeltaMovement; // 132
		QAngle vDeltaRotation; // 133
		Vector::Vector(); // 132
		QAngle::QAngle(); // 133
		Vector::operator=(
				const Vector& vOther);  // 136
	}
} /* size: 237, variables: 1 */

// <0163FF3B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetricevaluator.cpp:143
void CFutureVelocityMetricEvaluator::IsDirectionless()
{
} /* size: 9 */

