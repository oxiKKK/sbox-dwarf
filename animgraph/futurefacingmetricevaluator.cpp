
//
// animgraph/futurefacingmetricevaluator.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//

// <01643A5E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricevaluator.cpp:10
void CFutureFacingMetricEvaluator::CFutureFacingMetricEvaluator(CPackedData& packedData, float flDistance, float flWeight)
{
} /* size: 51 */

// <0164399A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricevaluator.cpp:18
// function call: 1
void CFutureFacingMetricEvaluator::GetUIName()
{
	CUtlString::CUtlString(
			const char* pString);  // 20
} /* size: 44, inline expansions: 1 (19 bytes) */

// <016436EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricevaluator.cpp:24
// variables: 8
// function calls: 2
void CFutureFacingMetricEvaluator::CalculateSequenceValues(const CModel* pModel, CMotionMetricInitContext* pContext, HSequence hSequence, float flCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
	const char   __FUNCTION__; // 31150
	const ISequence* pSequence; // 28
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 26
	}
	{
		const CSequenceDistanceHelper* pSequenceHelper; // 31
		const float  flCycleForDistance; // 33
		Vector vFuturePositionMS; // 36
		QAngle vFutureOrientationMS; // 37
		Vector vTargetHeading; // 40
		Vector::Vector(); // 36
		QAngle::QAngle(); // 37
	}
} /* size: 0, variables: 2 */

// <01643140> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricevaluator.cpp:48
// variables: 4
// function calls: 12
void CFutureFacingMetricEvaluator::CalculateGoalValues(const CAnimGraphUpdateContext& context, HSequence hSequence, float flCurrentCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
	const CMotionTransform  localToWorld; // 50
	CMotionTransform futureTransformWS; // 52
	CMotionTransform futureTransformMS; // 53
	Vector vTargetHeadingMS; // 61
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 52
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 53
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 57
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 58
} /* size: 0, variables: 4, inline expansions: 12 (662 bytes) */

// <01642A37> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricevaluator.cpp:70
// variables: 5
// function calls: 18
void CFutureFacingMetricEvaluator::CalculateMotionCorrection(const CAnimGraphUpdateContext& context, const float* pClipVectorData, const float* pGoalVectorData)
{
	MotionCorrection correction; // 72
	Vector vGoalDir; // 74
	Vector vClipDir; // 75
	CRotation goalHeading; // 77
	CRotation clipHeading; // 78
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 31
	RotationCorrection::RotationCorrection(); // 39
	PositionCorrection::PositionCorrection(); // 39
	MotionCorrection::MotionCorrection(); // 72
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 74
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 75
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 77
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 78
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 184
	{
	}
	CRotation::operator-=(
			const CRotation& rot);  // 184
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 184
	CRotation::operator-(
			const CRotation& rot);  // 81
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 81
} /* size: 0, variables: 5, inline expansions: 18 (811 bytes) */

// <01641854> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricevaluator.cpp:88
// variables: 25
// function calls: 65
void CFutureFacingMetricEvaluator::CalcFutureFacingMS(const CAnimGraphUpdateContext& context, const CMotionTransform& futurePathTransformWS)
{
	float flTargetHeadingWS; // 90
	const CMotionTransform  localToWorld; // 92
	float flCurrentHeadingWS; // 123
	float flTargetHeadingMS; // 124
	{
		VectorAligned vLookTargetWS; // 105
		VectorAligned vLookDirectionWS; // 106
		CAnimParamHandle::CAnimParamHandle(); // 105
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
				const Vector& rhs);  // 106
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
				const Vector& rhs);  // 105
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 256
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 256
		VectorAligned::operator-(
				const VectorAligned& v);  // 106
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 351
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1694
		Dot3SIMD<>(const fltx4& a,
				const fltx4& b);  // 359
		VectorAligned::NormalizedSafe(
				const VectorAligned& v);  // 351
		VectorAligned::Normalized(); // 107
	}
	{
		VectorAligned vMaualFacingMS; // 115
		VectorAligned vMaualFacingWS; // 116
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 351
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1694
		{
			fltx4 retVal; // 1333
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1334
		}
		SplatZSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1314
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1315
		}
		SplatYSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1295
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1296
		}
		SplatXSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1695
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1695
		Dot3SIMD<>(const fltx4& a,
				const fltx4& b);  // 359
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 360
		{
			fltx4 retVal; // 1981
			_mm_cmpgt_ps(__m128 __A,
					__m128 __B);  // 1982
		}
		CmpGtSIMD<>(const fltx4& a,
				const fltx4& b);  // 361
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 362
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
				const fltx4& b);  // 362
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 362
		VectorAligned::NormalizedSafe(
				const VectorAligned& v);  // 351
		VectorAligned::Normalized(); // 117
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 117
		CAnimParamHandle::CAnimParamHandle(); // 115
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 115
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 116
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
				const Vector& rhs);  // 116
	}
	CRotation::operator float(); // 98
	CRotation::operator float(); // 123
} /* size: 424, variables: 4, inline expansions: 2 (6 bytes) */

// <01641552> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricevaluator.cpp:130
// variables: 3
// function calls: 6
void CFutureFacingMetricEvaluator::GetGoalPositionMS(const CAnimGraphUpdateContext& context)
{
	CMotionTransform futureTransformMS; // 132
	{
		const CMotionTransform  localToWorld; // 136
		CMotionTransform futureTransformWS; // 138
		Vector::operator=(
				const Vector& vOther);  // 17
		{
		}
		CRotation::operator=(
				const CRotation& rot);  // 17
		CMotionTransform::operator=(
				CMotionTransform &);  // 139
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
			const CMotionTransform  &);  // 132
} /* size: 0, variables: 1, inline expansions: 3 (152 bytes) */

// <016412F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricevaluator.cpp:146
// variables: 5
// function calls: 3
void CFutureFacingMetricEvaluator::GetClipPositionMS(const CAnimGraphUpdateContext& context, HSequence hSequence, float flCycle, bool bLoop)
{
	Vector vPos; // 148
	{
		const ISequence* pSequence; // 152
		float flDistanceCycle; // 154
		Vector vDeltaMovement; // 156
		QAngle vDeltaRotation; // 157
		Vector::Vector(); // 156
		QAngle::QAngle(); // 157
		Vector::operator=(
				const Vector& vOther);  // 160
	}
} /* size: 237, variables: 1 */

