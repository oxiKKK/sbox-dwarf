
//
// animgraph/currentvelocitymetricevaluator.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//

// <01649CB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetricevaluator.cpp:8
void CCurrentVelocityMetricEvaluator::CCurrentVelocityMetricEvaluator(CPackedData& packedData, float flWeight)
{
} /* size: 42 */

// <01649C00> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetricevaluator.cpp:16
// function call: 1
void CCurrentVelocityMetricEvaluator::GetUIName()
{
	CUtlString::CUtlString(
			const char* pString);  // 18
} /* size: 44, inline expansions: 1 (19 bytes) */

// <01649B0B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetricevaluator.cpp:22
// variable: 1
void CCurrentVelocityMetricEvaluator::CalculateSequenceValues(const CModel* pModel, CMotionMetricInitContext* pContext, HSequence hSequence, float flCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
	Vector vVelocityMS; // 24
} /* size: 32, variables: 1 */

// <016499F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetricevaluator.cpp:30
// variable: 1
// function call: 1
void CCurrentVelocityMetricEvaluator::CalculateGoalValues(const CAnimGraphUpdateContext& context, HSequence hSequence, float flCurrentCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
	Vector vVelocity; // 32
	CAnimParamHandle::CAnimParamHandle(); // 32
} /* size: 89, variables: 1, inline expansions: 1 (9 bytes) */

// <01649917> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetricevaluator.cpp:40
// variable: 1
void CCurrentVelocityMetricEvaluator::CalculateCurrentValues(const CAnimGraphUpdateContext& context, const DistanceScalingSettings& distanceScale, HSequence hSequence, float flCycle, float* pVectorDataOut)
{
	Vector vVelocityMS; // 42
} /* size: 77, variables: 1 */

// <016488AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetricevaluator.cpp:50
// variables: 32
// function calls: 65
void CCurrentVelocityMetricEvaluator::CalcVelocityAtCycleMS(const CModel* pModel, HSequence hSequence, float flCycle)
{
	const char   __FUNCTION__; // 31096
	{
		const ISequence* pSequence; // 54
		Vector vNewResult; // 55
		{
			Vector vVelocityClipSpace; // 58
			float flSpeed; // 61
			Vector tmpPos; // 65
			QAngle tmpRot; // 66
			QuaternionAligned qStartRot; // 69
			VectorAligned vVelocityMS; // 71
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
			}
			Vector::Vector(); // 58
			Vector::NormalizeInPlace(); // 61
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 65
			QAngle::QAngle(
				vec_t flPitchDegrees,
				vec_t flYawDegrees,
				vec_t flRollDegrees);  // 66
			RadianEuler::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz);  // 2535
			RadianEuler::RadianEuler(
					const QAngle& angles);  // 2530
			Quaternion::Quaternion(
					const QAngle& angles);  // 69
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 30
			QuaternionAligned::QuaternionAligned(
						const Quaternion& rhs);  // 69
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
					const Vector& rhs);  // 71
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
			QuaternionAligned::Conjugate(); // 71
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
						const fltx4& v2);  // 310
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
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 311
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
					const VectorAligned& v);  // 71
			CloseEnough(const Vector& a,
					const Vector& b,
					float epsilon);  // 74
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 229
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 229
			VectorAligned::operator*=(
					vec_t s);  // 72
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			VectorAligned::y(); // 40
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			VectorAligned::x(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 74
		}
	}
	HSequence::operator==(
			const HSequence& other);  // 52
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

