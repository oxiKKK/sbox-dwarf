
//
// animgraph/footmotionutils.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <00F6E343> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionutils.cpp:13
// variable: 1
// function calls: 6
void PredictNextStanceTransform(const CMotionTransform& newLocalToWorldTransform, const ISequence* pSequence, const CFootMotion& footMotion, CAnimCycle cycle, CAnimCycle prevCycle, bool bLoop)
{
	CMotionTransform rootMotionDelta; // 15
	CCycleBase::GetValue(); // 125
	CCycleBase::CCycleBase(
			float flCycle);  // 125
	CAnimCycle::CAnimCycle(
			const CAnimCycle& rhs);  // 15
	CCycleBase::GetValue(); // 125
	CCycleBase::CCycleBase(
			float flCycle);  // 125
	CAnimCycle::CAnimCycle(
			const CAnimCycle& rhs);  // 15
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <00F6DCB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionutils.cpp:20
// variables: 7
// function calls: 20
void CalculateRemainingRootMotion(const ISequence* pSequence, const CFootMotion& footMotion, CAnimCycle cycle, CAnimCycle prevCycle, bool bLoop)
{
	CMotionTransform rootMotion; // 22
	{
		CAnimCycle relativeCycle; // 26
		int nCycleDefinitionIndex; // 32
		{
			const CAnimCycle  stanceCycle; // 35
			{
				int nNextCycleDefinitionIndex; // 38
				CAnimCycle nextStanceCycle; // 39
				bool bIsBetween; // 49
				CCycleBase::GetValue(); // 125
				CCycleBase::CCycleBase(
						float flCycle);  // 125
				CAnimCycle::CAnimCycle(
						const CAnimCycle& rhs);  // 39
				CCycleBase::operator<(
						const CCycleBase& rhs);  // 42
				CAnimCycle::operator+=(
						float flValue);  // 44
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 62
				CAnimCycle::operator+=(
						float flValue);  // 52
			}
			CCycleBase::GetValue(); // 125
			CCycleBase::CCycleBase(
					float flCycle);  // 125
			CAnimCycle::CAnimCycle(
					const CAnimCycle& rhs);  // 35
		}
		CCycleBase::GetValue(); // 125
		CCycleBase::CCycleBase(
				float flCycle);  // 125
		CAnimCycle::CAnimCycle(
				const CAnimCycle& rhs);  // 26
		CCycleBase::operator<(
				const CCycleBase& rhs);  // 27
		CAnimCycle::operator+=(
				float flValue);  // 29
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
			const CMotionTransform  &);  // 22
} /* size: 0, variables: 1, inline expansions: 3 (159 bytes) */

// <00F6D85B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionutils.cpp:71
// variables: 4
// function calls: 11
void CalcLastStanceTransform(const CMotionTransform& newLocalToWorldTransform, const ISequence* pSequence, const CFootMotion& footMotion, CAnimCycle cycle)
{
	CMotionTransform lastTransformWS; // 73
	{
		int nCycleDefinitionIndex; // 77
		{
			CAnimCycle stanceCycle; // 80
			{
				CMotionTransform rootMotionDelta; // 89
				CCycleBase::operator>(
						const CCycleBase& rhs);  // 83
				CAnimCycle::operator+=(
						float flValue);  // 85
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 94
			}
			CCycleBase::GetValue(); // 125
			CCycleBase::CCycleBase(
					float flCycle);  // 125
			CAnimCycle::CAnimCycle(
					const CAnimCycle& rhs);  // 80
		}
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
			const CMotionTransform  &);  // 73
} /* size: 0, variables: 1, inline expansions: 3 (139 bytes) */

// <00F6D386> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionutils.cpp:103
// variables: 10
// function calls: 14
void CalcFootCyclesPerSecond(const CFootMotion& footMotion, CAnimCycle cycle, float flDuration)
{
	float flCyclesPerSecond; // 105
	int nCycleDefinitionIndex; // 107
	const char   __FUNCTION__; // 37933
	{
		const CAnimCycle  stanceCycle; // 110
		{
			int nNextCycleDefinitionIndex; // 114
			const CAnimCycle  nextStanceCycle; // 115
			CAnimCycle nextCycleRelative; // 117
			CAnimCycle cycleDelta; // 123
			float cycleDuration; // 126
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 124
			}
			CCycleBase::GetValue(); // 125
			CCycleBase::CCycleBase(
					float flCycle);  // 125
			CAnimCycle::CAnimCycle(
					const CAnimCycle& rhs);  // 115
			CCycleBase::GetValue(); // 125
			CCycleBase::CCycleBase(
					float flCycle);  // 125
			CAnimCycle::CAnimCycle(
					const CAnimCycle& rhs);  // 117
			CAnimCycle::operator+=(
					float flValue);  // 120
			CCycleBase::CCycleBase(
					float flCycle);  // 125
			CAnimCycle::CAnimCycle(
					float flCycle);  // 125
			CAnimCycle::operator-(
					const CAnimCycle& rhs);  // 123
			CCycleBase::IsNormalized(); // 124
		}
		CCycleBase::GetValue(); // 125
		CCycleBase::CCycleBase(
				float flCycle);  // 125
		CAnimCycle::CAnimCycle(
				const CAnimCycle& rhs);  // 110
	}
} /* size: 0, variables: 3 */

// <00F6B383> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionutils.cpp:138
// variables: 56
// function calls: 136
void CalcPositionFromTrajectory(const CMotionTransform& localToWorld, const CFootTrajectory& vTrajectory, const VectorAligned& vPrevPos, const VectorAligned& vNextPos)
{
	const VectorAligned  vStrideVector; // 141
	const VectorAligned  vAxisPosWS; // 143
	VectorAligned vStrideVectorNorm; // 147
	QuaternionAligned qDirectionRot; // 156
	VectorAligned vStrideVectorTilted; // 159
	QuaternionAligned qTiltRotation; // 162
	VectorAligned vFootBaseOffset; // 166
	VectorAligned vPosition; // 168
	const char   __FUNCTION__; // 38009
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::operator fltx4(); // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 141
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 268
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 268
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 268
	VectorAligned::operator*(
			vec_t s);  // 143
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 250
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 143
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
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 351
	VectorAligned::Normalized(); // 147
	CloseEnough(float a,
			float b,
			float epsilon);  // 150
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 300
	VectorAligned::Length(); // 150
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
			const fltx4& b);  // 379
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 380
	VectorAligned::Dot(
		const VectorAligned& v);  // 416
	DotProduct(const VectorAligned& lhs,
			const VectorAligned& rhs);  // 150
	CloseEnough(float a,
			float b,
			float epsilon);  // 150
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
	QuaternionAligned::Conjugate(); // 159
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
			const VectorAligned& v);  // 159
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
			const Vector& rhs);  // 166
	QuaternionAligned::operator*=(
			const QuaternionAligned& q);  // 302
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 301
	QuaternionAligned::operator*(
			const QuaternionAligned& q);  // 166
	VectorAligned::operator fltx4(); // 250
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 250
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 168
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 158
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 158
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 158
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 158
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 158
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 158
	VectorAligned::IsValid(); // 170
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
			float p3);  // 177
	VectorAligned::operator=(
			const Vector& src);  // 152
} /* size: 0, variables: 9, inline expansions: 89 (969 bytes) */

// <00F6A20C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionutils.cpp:175
// variables: 8
// function calls: 56
void CalcFootStatusForSequence(const ISequence* pSequence, int nFootIndex, const CMotionTransform& newLocalToWorldTransform, CAnimCycle cycle, CAnimCycle prevCycle, float flDuration, bool bLoop)
{
	CFootMotionStatus footStatus; // 177
	{
		const int  nFootMotionCount; // 182
		{
			{
				const CFootMotion* pFootMotion; // 185
				{
					CAnimCycle relativeCycle; // 191
					CAnimCycle nextCycle; // 197
					const int  nCycleIndex; // 210
					const CFootCycle  nextFootCycle; // 211
					{
						const CFootTrajectories& trajectories; // 214
						CCycleBase::GetValue(); // 126
						CCycleBase::CCycleBase(
								float flCycle);  // 126
						CFootCycle::CFootCycle(
								const CFootCycle& rhs);  // 216
						Vector::operator=(
								const Vector& vOther);  // 188
						CFootTrajectory::operator=(
								CFootTrajectory &);  // 216
					}
					CAnimCycle::operator+=(
							float flValue);  // 194
					CCycleBase::GetValue(); // 125
					CCycleBase::CCycleBase(
							float flCycle);  // 125
					CAnimCycle::CAnimCycle(
							const CAnimCycle& rhs);  // 191
					CCycleBase::operator>(
							const CCycleBase& rhs);  // 192
					CCycleBase::CCycleBase(
							float flCycle);  // 125
					CAnimCycle::CAnimCycle(
							float flCycle);  // 125
					CAnimCycle::operator-(
							const CAnimCycle& rhs);  // 197
					CCycleBase::CCycleBase(
							float flCycle);  // 125
					CAnimCycle::CAnimCycle(
							float flCycle);  // 125
					CAnimCycle::operator+(
							const CAnimCycle& rhs);  // 197
					CAnimCycle::operator-=(
							float flValue);  // 202
					CCycleBase::GetValue(); // 125
					CCycleBase::CCycleBase(
							float flCycle);  // 125
					CAnimCycle::CAnimCycle(
							const CAnimCycle& rhs);  // 211
					CCycleBase::operator!=(
							float rhs);  // 212
					Vector::operator=(
							const Vector& vOther);  // 188
					CFootTrajectory::operator=(
							const CFootTrajectory  &);  // 220
					CCycleBase::CCycleBase(
							float flCycle);  // 125
					CAnimCycle::CAnimCycle(
							float flCycle);  // 206
				}
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
				CMotionTransform::operator=(
						CMotionTransform &);  // 12
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 12
				Vector::operator=(
						const Vector& vOther);  // 12
				CFootMotionStatus::operator=(
						CFootMotionStatus &);  // 188
				CCycleBase::GetValue(); // 125
				CCycleBase::CCycleBase(
						float flCycle);  // 125
				CAnimCycle::CAnimCycle(
						const CAnimCycle& rhs);  // 224
				CCycleBase::GetValue(); // 125
				CCycleBase::CCycleBase(
						float flCycle);  // 125
				CAnimCycle::CAnimCycle(
						const CAnimCycle& rhs);  // 224
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 229
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 231
				CCycleBase::GetValue(); // 125
				CCycleBase::CCycleBase(
						float flCycle);  // 125
				CAnimCycle::CAnimCycle(
						const CAnimCycle& rhs);  // 233
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 237
				CCycleBase::GetValue(); // 125
				CCycleBase::CCycleBase(
						float flCycle);  // 125
				CAnimCycle::CAnimCycle(
						const CAnimCycle& rhs);  // 239
			}
			_DebuggerBreakInlineExpressionWrapper(void); // 183
		}
	}
} /* size: 0, variables: 1 */

// <00F69C37> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionutils.cpp:247
// variables: 6
// function calls: 14
void CalculateNewRootTransform(CAnimGraphUpdateContext& context, const CAnimUpdateNodeBase* pNode)
{
	CMotionTransform newRootTransform; // 249
	const char   __FUNCTION__; // 37982
	{
		CRootMotion rootMotion; // 255
		CMotionTransform localToWorld; // 262
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 253
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 266
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
				const CMotionTransform  &);  // 11
		CRootMotion::CRootMotion(
				const CRootMotion  &);  // 255
		Vector::operator=(
				const Vector& vOther);  // 17
		{
		}
		CRotation::operator=(
				const CRotation& rot);  // 17
		CMotionTransform::operator=(
				CMotionTransform &);  // 11
		CRootMotion::operator=(
				CRootMotion &);  // 259
		Vector::operator=(
				const Vector& vOther);  // 17
		{
		}
		CRotation::operator=(
				const CRotation& rot);  // 17
		CMotionTransform::operator=(
				CMotionTransform &);  // 264
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
			const CMotionTransform  &);  // 249
} /* size: 0, variables: 2, inline expansions: 3 (146 bytes) */

