
//
// animgraph/footlockupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 78
//

// <0181F21A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:52
bool ShouldDebugFootLock(FootLockDebugType debugType, int nFootIndex)
{
} /* size: 0 */

// <0181F200> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:58
void Get(void)
{
} /* size: 12 */

// <0181F11A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:66
// function calls: 3
void CFootprint::CFootprint()
{
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 66
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0181F0FE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:66
void CFootprint::CFootprint()
{
} /* size: 0 */

// <0186D512> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:72
void CFootprint::GetEntityTransform()
{
} /* size: 0 */

// <0181EF57> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:78
// variables: 2
// function calls: 3
void CFootprint::SetEntityTransform(const CMotionTransform& xform)
{
	const char   __FUNCTION__; // 32839
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			const CMotionTransform  &);  // 81
} /* size: 0, variables: 1, inline expansions: 3 (174 bytes) */

// <0186D53B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:85
void CFootprint::NormalizeEntityTransform()
{
} /* size: 0 */

// <0186D583> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:91
void CFootprint::GetPositionWS()
{
} /* size: 0 */

// <0181EC01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:97
// variables: 2
// function calls: 17
void CFootprint::SetPositionWS(const VectorAligned& vPosWS)
{
	const char   __FUNCTION__; // 32714
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 99
	}
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
	VectorAligned::IsValid(); // 99
	VectorAligned::operator=(
			const VectorAligned& src);  // 100
} /* size: 0, variables: 1, inline expansions: 17 (151 bytes) */

// <0186D5AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:104
void CFootprint::GetDirectionMS()
{
} /* size: 0 */

// <0186D5D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:110
// function calls: 2
void CFootprint::SetDirectionMS(float flDir)
{
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 112
	{
	}
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0181EB7F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:110
// variables: 2
void CFootprint::SetDirectionMS(float flDir)
{
	const char   __FUNCTION__; // 32741
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
	}
} /* size: 0, variables: 1 */

// <0186D686> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:117
void CFootprint::GetNormalWS()
{
} /* size: 0 */

// <0181E845> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:123
// variables: 2
// function calls: 17
void CFootprint::SetNormalWS(const VectorAligned& vNormalWS)
{
	const char   __FUNCTION__; // 32660
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 125
	}
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
	VectorAligned::IsValid(); // 125
	VectorAligned::operator=(
			const VectorAligned& src);  // 127
} /* size: 0, variables: 1, inline expansions: 17 (151 bytes) */

// <0181E292> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:135
// variables: 3
// function calls: 15
void FootInstanceSettings::ResetRotations(const CAnimGraphUpdateContext& context, const CFootMotionStatus& footMotion, const CMotionTransform& newRootTransform, const FootFixedSettings& footSettings)
{
	float flOldRotation; // 138
	CMotionTransform nextEntityTransform; // 142
	CMotionTransform alignedRootTransform; // 147
	CFootprint::NormalizeEntityTransform(); // 139
	CRotation::operator float(); // 138
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 142
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 209
	{
	}
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 210
	CRotation::operator-(
			angle_t s);  // 143
	{
	}
	CRotation::operator+=(
			const CRotation& rot);  // 143
	CFootprint::GetEntityTransform(); // 147
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			const CMotionTransform  &);  // 148
} /* size: 0, variables: 3, inline expansions: 15 (612 bytes) */

// <0181D819> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:156
// variables: 4
// function calls: 45
void FootInstanceSettings::CalcPredictedFootprint(const CAnimGraphUpdateContext& context, const CFootMotionStatus& footMotion, const CMotionTransform& alignedRootTransform, const FootFixedSettings& footSettings)
{
	CMotionTransform predictedTransform; // 159
	VectorAligned vPredictedFootPos; // 160
	bool bTraceFoot; // 163
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
			const Vector& rhs);  // 160
	CloseEnough(const Vector2D& a,
			const Vector2D& b,
			float epsilon);  // 164
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 41
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 41
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 41
	VectorAligned::AsVector2D(); // 164
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 41
	VectorAligned::AsVector2D(); // 164
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 112
	{
	}
	CFootprint::SetDirectionMS(
			float flDir);  // 171
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 217
	FootFixedSettings::TraceFootPrint(
			CFootprint& footPrint,
			const CAnimGraphUpdateContext& context,
			bool bRotateStartingPos,
			bool bForce);  // 175
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
	VectorAligned::operator Vector(); // 177
	Vector::operator=(
			const Vector& vOther);  // 11
	Vector::operator=(
			const Vector& vOther);  // 12
	Vector::operator=(
			const Vector& vOther);  // 13
	GenericCriticallyDampedType<Vector>::SnapTo(
		const Vector& kNewPosition);  // 36
	GenericCriticallyDampedType<Vector>::SetGoal(
		const Vector& kGoal);  // 31
	Vector::operator=(
			const Vector& vOther);  // 41
	GenericCriticallyDampedType<Vector>::SetGoal(
		const Vector& kGoal);  // 177
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 178
	GenericCriticallyDampedType<float>::SnapTo(
		const float& kNewPosition);  // 36
	GenericCriticallyDampedType<float>::SetGoal(
		const float& kGoal);  // 31
	GenericCriticallyDampedType<float>::SetGoal(
		const float& kGoal);  // 178
} /* size: 0, variables: 3, inline expansions: 44 (830 bytes) */

// <0181C193> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:183
// variables: 30
// function calls: 92
void FootInstanceSettings::DebugDraw()
{
	const float  flAlpha; // 198
	const VectorAligned  vWsEffectiveGroundPosition; // 200
	const VectorAligned  vWsPreviousNormal; // 203
	const VectorAligned  vWsNextNormal; // 204
	const VectorAligned  vWsEstimatedNormal; // 205
	CFootprint::GetPositionWS(); // 186
	CFootprint::GetPositionWS(); // 186
	CUtlString::CUtlString(
			const char* pString);  // 189
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
			vec_t s);  // 189
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
			const VectorAligned& v);  // 189
	CUtlString::~CUtlString(); // 189
	CUtlString::CUtlString(
			const char* pString);  // 192
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
			vec_t s);  // 192
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
			const VectorAligned& v);  // 192
	CUtlString::~CUtlString(); // 192
	CUtlString::CUtlString(
			const char* pString);  // 195
	CUtlString::~CUtlString(); // 195
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
			const VectorAligned& v);  // 262
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
			vec_t s);  // 262
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
			const VectorAligned& v);  // 262
	Lerp<VectorAligned>(float flPercent,
				const VectorAligned& A,
				const VectorAligned& B);  // 200
	VectorAligned::operator fltx4(); // 256
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
			const VectorAligned& v);  // 262
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
			vec_t s);  // 262
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
			const VectorAligned& v);  // 262
	Lerp<VectorAligned>(float flPercent,
				const VectorAligned& A,
				const VectorAligned& B);  // 205
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
	VectorAligned::Normalized(); // 205
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
			vec_t s);  // 207
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
			const VectorAligned& v);  // 207
} /* size: 626, variables: 5, inline expansions: 67 (559 bytes) */

// <01875E33> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:214
// variable: 1
// function calls: 2
void FootFixedSettings::TraceFootPrint(CFootprint& footPrint, const CAnimGraphUpdateContext& context, bool bRotateStartingPos, bool bForce)
{
	const IAnimGraphTraceProvider* pTraceProvider; // 216
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 217
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0186D6AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:214
// variables: 258
// function calls: 558
void FootFixedSettings::TraceFootPrint(CFootprint& footPrint, const CAnimGraphUpdateContext& context, bool bRotateStartingPos, bool bForce)
{
	const IAnimGraphTraceProvider* pTraceProvider; // 216
	{
		VectorAligned vToePosWS; // 219
		VectorAligned vHeelPosWS; // 220
		VectorAligned vWsSlopeNormal; // 228
		QuaternionAligned rot; // 230
		QuaternionAligned slerpedRot; // 231
		const VectorAligned  vToToeDirWS; // 247
		VectorAligned vHitPos; // 249
		VectorAligned vHitNormal; // 250
		bool bHit; // 251
		{
			VectorAligned vToToeDirMS; // 222
			VectorAligned vToToeDirWS; // 223
			CFootprint::GetDirectionMS(); // 222
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 222
			CFootprint::GetEntityTransform(); // 223
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 223
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
					const Vector& rhs);  // 223
			CloseEnough(float a,
					float b,
					float epsilon);  // 224
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
					const fltx4& b);  // 298
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 299
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 300
			VectorAligned::Length(); // 224
			{
			}
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
					vec_t s);  // 225
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
					const VectorAligned& v);  // 225
			VectorAligned::operator=(
					const VectorAligned& src);  // 225
		}
		VectorAligned::VectorAligned(); // 220
		CAnimParamHandle::CAnimParamHandle(); // 228
		Vector::Normalized(); // 228
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
				const Vector& rhs);  // 228
		QuaternionAligned::operator fltx4(); // 545
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 465
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 464
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
				const fltx4& b);  // 466
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
				const fltx4& b);  // 467
		{
			fltx4 retVal; // 1981
			_mm_cmpgt_ps(__m128 __A,
					__m128 __B);  // 1982
		}
		CmpGtSIMD<>(const fltx4& a,
				const fltx4& b);  // 468
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 1797
		NegSIMD<>(const fltx4& a); // 469
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
				const fltx4& b);  // 469
		QuaternionAlignSIMD<>(const fltx4& p,
					const fltx4& q);  // 527
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 505
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 505
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 505
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 505
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 505
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
				const fltx4& b);  // 486
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 487
		{
			fltx4 fl4Q; // 509
			fltx4 fl4PScale; // 514
			fltx4 fl4QScale; // 515
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 516
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 516
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 516
		}
		QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
						const fltx4& q,
						float t);  // 479
		QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
						const fltx4& q,
						float t);  // 528
		QuaternionSlerpSIMD<>(const fltx4& p,
					const fltx4& q,
					float t);  // 545
		QuaternionAligned::operator fltx4(); // 545
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 545
		QuaternionSlerp(const QuaternionAligned& qFrom,
				const QuaternionAligned& qTo,
				float t);  // 231
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
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
				const VectorAligned& v);  // 232
		{
			VectorAligned vToFootPos; // 238
			VectorAligned vToHeelPos; // 242
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
					const Vector& rhs);  // 238
			{
				fltx4 v1_yzxx; // 3340
				fltx4 v2_zxyy; // 3342
				fltx4 v1_zxyy; // 3344
				fltx4 v2_yzxx; // 3346
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3341
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3345
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
					const VectorAligned& v);  // 239
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 240
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
					const VectorAligned& v);  // 238
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
					const VectorAligned& v);  // 242
			{
				fltx4 v1_yzxx; // 3340
				fltx4 v2_zxyy; // 3342
				fltx4 v1_zxyy; // 3344
				fltx4 v2_yzxx; // 3346
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
					const VectorAligned& v);  // 243
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 240
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
					const Vector& src);  // 240
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 242
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 244
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 244
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
					const Vector& src);  // 244
		}
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 330
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
				const fltx4& b);  // 338
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 339
		{
			fltx4 retVal; // 1981
			_mm_cmpgt_ps(__m128 __A,
					__m128 __B);  // 1982
		}
		CmpGtSIMD<>(const fltx4& a,
				const fltx4& b);  // 341
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 343
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
				const fltx4& b);  // 343
		VectorAligned::NormalizeInPlaceSafe(
					const VectorAligned& vFallback);  // 330
		VectorAligned::NormalizeInPlace(); // 233
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 252
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 252
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
				const VectorAligned& v);  // 247
		VectorAligned::VectorAligned(); // 249
		VectorAligned::VectorAligned(); // 250
		CloseEnough(const Vector& a,
				const Vector& b,
				float epsilon);  // 252
		{
			CTraceResult traceResult; // 254
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 254
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 254
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
					const Vector& src);  // 255
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
					const Vector& src);  // 256
			CTraceResult::StartsInSolid(); // 257
			CTraceResult::DidHit(); // 257
		}
		{
			const CTraceResult  toeTraceResult; // 261
			const CTraceResult  heelTraceResult; // 262
			const bool  bToeHit; // 264
			const bool  bHeelHit; // 265
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
					const Vector& src);  // 272
			{
				const VectorAligned  vToeHitPos; // 288
				const VectorAligned  vHeelHitPos; // 289
				const VectorAligned  vToeNormal; // 291
				const VectorAligned  vHeelNormal; // 292
				VectorAligned vHitToePosDerived; // 295
				VectorAligned vHitHeelPosDerived; // 302
				Vector vNewToePos; // 309
				Vector vNewHeelPos; // 310
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
						const Vector& rhs);  // 288
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
						const Vector& rhs);  // 289
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
						const Vector& rhs);  // 291
				{
					QuaternionAligned qSlopeRot; // 297
					{
						fltx4 v1_yzxx; // 3340
						fltx4 v2_zxyy; // 3342
						fltx4 v1_zxyy; // 3344
						fltx4 v2_yzxx; // 3346
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 3341
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 3343
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 3345
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
							const VectorAligned& v);  // 298
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
							const VectorAligned& v);  // 298
				}
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
						const Vector& rhs);  // 292
				VectorAligned::VectorAligned(); // 295
				{
					QuaternionAligned qSlopeRot; // 304
					{
						fltx4 v1_yzxx; // 3340
						fltx4 v2_zxyy; // 3342
						fltx4 v1_zxyy; // 3344
						fltx4 v2_yzxx; // 3346
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 3348
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 3341
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 3348
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 3345
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
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 311
					{
						fltx4 retVal; // 1352
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1353
					}
					SplatWSIMD<>(const fltx4& a); // 313
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
							const VectorAligned& v);  // 305
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
							const VectorAligned& v);  // 305
				}
				VectorAligned::VectorAligned(); // 302
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 309
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 309
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 310
				{
					VectorAligned vAvgNormal; // 314
					VectorAligned vToNewToePos; // 315
					VectorAligned vAnkleAxis; // 317
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 250
					VectorAligned::operator fltx4(); // 250
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 250
					VectorAligned::operator+(
							const VectorAligned& v);  // 314
					VectorSubtract(const Vector& a,
							const Vector& b,
							Vector& c);  // 1444
					Vector::Vector(); // 1443
					Vector::operator-(
							const Vector& v);  // 315
					Vector::Normalized(); // 315
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
							vec_t s);  // 314
					VectorAligned::Init(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 31
					VectorAligned::VectorAligned(
							const Vector& rhs);  // 315
					{
						fltx4 v1_yzxx; // 3340
						fltx4 v2_zxyy; // 3342
						fltx4 v1_zxyy; // 3344
						fltx4 v2_yzxx; // 3346
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 3341
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 3343
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 3345
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
								const fltx4& v2);  // 386
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 386
					VectorAligned::Cross(
						const VectorAligned& v);  // 422
					CrossProduct(const VectorAligned& lhs,
							const VectorAligned& rhs);  // 317
					{
						fltx4 retVal; // 1981
						_mm_cmpgt_ps(__m128 __A,
								__m128 __B);  // 1982
					}
					CmpGtSIMD<>(const fltx4& a,
							const fltx4& b);  // 361
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
					VectorAligned::Normalized(); // 318
					{
						fltx4 v1_yzxx; // 3340
						fltx4 v2_zxyy; // 3342
						fltx4 v1_zxyy; // 3344
						fltx4 v2_yzxx; // 3346
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
								const fltx4& v2);  // 386
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 386
					VectorAligned::Cross(
						const VectorAligned& v);  // 422
					CrossProduct(const VectorAligned& lhs,
							const VectorAligned& rhs);  // 318
					VectorAligned::operator=(
							const VectorAligned& src);  // 318
				}
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 310
				VectorAligned::operator=(
						const Vector& src);  // 322
			}
			{
				QuaternionAligned qSlopeRot; // 280
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
						const Vector& src);  // 277
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
							const int  __mask);  // 3341
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 3345
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
						const VectorAligned& v);  // 281
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
						const Vector& src);  // 281
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
				VectorAligned::operator Vector(); // 281
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 281
			}
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
					const Vector& src);  // 271
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 261
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 261
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 262
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 262
			CTraceResult::StartsInSolid(); // 264
			CTraceResult::DidHit(); // 264
			CTraceResult::StartsInSolid(); // 265
			CTraceResult::DidHit(); // 265
		}
	}
} /* size: 0, variables: 1 */

// <0181BF54> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:214
// variables: 35
void FootFixedSettings::TraceFootPrint(CFootprint& footPrint, const CAnimGraphUpdateContext& context, bool bRotateStartingPos, bool bForce)
{
	const IAnimGraphTraceProvider* pTraceProvider; // 216
	const char   __FUNCTION__; // 32741
	{
		VectorAligned vToePosWS; // 219
		VectorAligned vHeelPosWS; // 220
		VectorAligned vWsSlopeNormal; // 228
		QuaternionAligned rot; // 230
		QuaternionAligned slerpedRot; // 231
		const VectorAligned  vToToeDirWS; // 247
		VectorAligned vHitPos; // 249
		VectorAligned vHitNormal; // 250
		bool bHit; // 251
		{
			VectorAligned vToToeDirMS; // 222
			VectorAligned vToToeDirWS; // 223
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 224
			}
		}
		{
			VectorAligned vToFootPos; // 238
			VectorAligned vToHeelPos; // 242
		}
		{
			CTraceResult traceResult; // 254
		}
		{
			const CTraceResult  toeTraceResult; // 261
			const CTraceResult  heelTraceResult; // 262
			const bool  bToeHit; // 264
			const bool  bHeelHit; // 265
			{
				QuaternionAligned qSlopeRot; // 280
			}
			{
				const VectorAligned  vToeHitPos; // 288
				const VectorAligned  vHeelHitPos; // 289
				const VectorAligned  vToeNormal; // 291
				const VectorAligned  vHeelNormal; // 292
				VectorAligned vHitToePosDerived; // 295
				VectorAligned vHitHeelPosDerived; // 302
				Vector vNewToePos; // 309
				Vector vNewHeelPos; // 310
				{
					QuaternionAligned qSlopeRot; // 297
				}
				{
					QuaternionAligned qSlopeRot; // 304
				}
				{
					VectorAligned vAvgNormal; // 314
					VectorAligned vToNewToePos; // 315
					VectorAligned vAnkleAxis; // 317
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <018194B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:336
// variables: 42
// function calls: 179
void FootFixedSettings::TracePoint(CFootprint& footPrint, const CAnimGraphUpdateContext& context, Vector vFootPosWS, const Vector& vWsSlopeNormal, bool bRotateStartingPos)
{
	const IAnimGraphTraceProvider* pTraceProvider; // 338
	const float  flTraceHeight; // 340
	const Vector  vWsStart; // 341
	const Vector  vWsEnd; // 342
	const Vector  vMins; // 343
	const Vector  vMaxs; // 344
	const Ray_t  ray; // 346
	const CTraceResult  traceResult; // 348
	bool bHit; // 350
	{
		Quaternion qOrientation; // 354
		{
			Vector vDimensions; // 357
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 357
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
					const Vector& rhs);  // 358
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 358
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 30
			QuaternionAligned::QuaternionAligned(
						const Quaternion& rhs);  // 358
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
					const Vector& rhs);  // 358
			VectorDivide(const Vector& a,
					vec_t b,
					Vector& c);  // 1465
			Vector::Vector(); // 1464
			Vector::operator/(
					float fl);  // 358
		}
		{
			Vector vDimensions; // 362
			float flHeight; // 364
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 362
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 364
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
					const Vector& rhs);  // 366
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 366
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 30
			QuaternionAligned::QuaternionAligned(
						const Quaternion& rhs);  // 366
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
					const Vector& rhs);  // 366
			VectorDivide(const Vector& a,
					vec_t b,
					Vector& c);  // 1465
			Vector::Vector(); // 1464
			Vector::operator/(
					float fl);  // 366
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
			VectorAligned::operator Vector(); // 366
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 368
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
					const Vector& rhs);  // 370
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 30
			QuaternionAligned::QuaternionAligned(
						const Quaternion& rhs);  // 370
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
					const Vector& rhs);  // 370
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
					const VectorAligned& v);  // 370
			{
				fltx4 retVal; // 1662
				_mm_div_ps(__m128 __A,
						__m128 __B);  // 1663
			}
			DivSIMD<>(const fltx4& a,
					const fltx4& b);  // 274
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 274
			VectorAligned::operator/(
					vec_t s);  // 370
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
					vec_t s);  // 371
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
					const VectorAligned& v);  // 371
			CFootprint::GetPositionWS(); // 371
		}
	}
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 341
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
			const Vector& src);  // 52
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 63
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 52
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
			const Vector& src);  // 56
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
			const Vector& src);  // 61
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
			const fltx4& b);  // 323
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 324
	VectorAligned::LengthSqr(); // 54
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 229
	VectorAligned::operator*=(
			vec_t s);  // 57
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 61
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 229
	VectorAligned::operator*=(
			vec_t s);  // 62
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
			const fltx4& b);  // 323
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 324
	VectorAligned::LengthSqr(); // 58
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 63
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 56
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
			const Vector& src);  // 63
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 229
	VectorAligned::operator*=(
			vec_t s);  // 64
	Ray_t::Init(
		const Vector& start,
		const Vector& end,
		const Vector& mins,
		const Vector& maxs);  // 31
	VectorAligned::VectorAligned(); // 30
	VectorAligned::VectorAligned(); // 30
	VectorAligned::VectorAligned(); // 30
	VectorAligned::VectorAligned(); // 30
	Ray_t::Ray_t(
		const Vector& vStart,
		const Vector& vEnd,
		const Vector& vMins,
		const Vector& vMaxs);  // 346
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 341
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 342
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 342
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 342
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 343
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 344
	CTraceResult::StartsInSolid(); // 350
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 352
	CTraceResult::DidHit(); // 350
} /* size: 1507, variables: 9, inline expansions: 82 (1499 bytes) */

// <01818D29> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:382
// variable: 1
// function calls: 26
void CFootLockUpdateNodeInstanceData::CFootLockUpdateNodeInstanceData(CAnimGraphInitContext& initContext, int nLockableFootCount)
{
	CRelativeOffset<FootInstanceSettings>::CRelativeOffset(); // 84
	CRelativeArray<FootInstanceSettings>::CRelativeArray(); // 382
	CDampedVectorAligned::CDampedVectorAligned(); // 382
	CDampedValue::CDampedValue(
			float flStartingValue,
			float flStartingVelocity);  // 382
	{
		uint32 i; // 160
		{
		}
		{
		}
		CRotation::CRotation(
				const CRotation& rot);  // 22
		CRotation::CRotation(
				const CRotation& rot);  // 17
		CMotionTransform::CMotionTransform(
				const CMotionTransform  &);  // 66
		CFootprint::CFootprint(); // 101
		{
		}
		{
		}
		CRotation::CRotation(
				const CRotation& rot);  // 22
		CRotation::CRotation(
				const CRotation& rot);  // 17
		CMotionTransform::CMotionTransform(
				const CMotionTransform  &);  // 66
		CFootprint::CFootprint(); // 101
		{
		}
		{
		}
		CRotation::CRotation(
				const CRotation& rot);  // 22
		CRotation::CRotation(
				const CRotation& rot);  // 17
		CMotionTransform::CMotionTransform(
				const CMotionTransform  &);  // 66
		CFootprint::CFootprint(); // 101
		Vector::Vector(); // 25
		CRotation::CRotation(); // 25
		CMotionTransform::CMotionTransform(); // 101
		VectorAligned::VectorAligned(); // 101
		VectorAligned::VectorAligned(); // 101
		FootInstanceSettings::FootInstanceSettings(); // 162
	}
	CPackedDataT<true>::AddArray<FootInstanceSettings>(
					uint32 count,
					CPackedHandle<FootInstanceSettings>* handleOut);  // 386
	CRelativeOffset<FootInstanceSettings>::SetOffset(
			const FootInstanceSettings* targetPtr);  // 20
	CRelativeOffset<FootInstanceSettings>::operator=(
			const FootInstanceSettings* targetPtr);  // 115
	CRelativeArray<FootInstanceSettings>::SetArray(
		const FootInstanceSettings* targetArray,
		int32 count);  // 386
} /* size: 0, inline expansions: 8 (657 bytes) */

// <01818CF2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:382
void CFootLockUpdateNodeInstanceData::CFootLockUpdateNodeInstanceData(CAnimGraphInitContext& initContext, int nLockableFootCount)
{
} /* size: 0 */

// <01818656> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:394
// variable: 1
// function calls: 20
void CFootLockUpdateNode::CFootLockUpdateNode(CAnimGraphInitContext& initContext, int nLockableFootCount)
{
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<FootLockPoseOpFixedSettings>::CPackedHandle(); // 395
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CFootLockUpdateNodeInstanceData>::CPackedHandle(); // 395
	CRelativeOffset<FootFixedSettings>::CRelativeOffset(); // 84
	CRelativeArray<FootFixedSettings>::CRelativeArray(); // 395
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<FootLockPoseOpInstanceSettings>::CPackedHandle(); // 395
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<false>::AddItem<FootLockPoseOpFixedSettings, CAnimGraphInitContext&, int&>(
										CPackedHandle<FootLockPoseOpFixedSettings>* handleOut);  // 397
	{
		uint32 i; // 160
		TraceSettings_t::TraceSettings_t(); // 65
		FootFixedSettings::FootFixedSettings(); // 162
	}
	CPackedDataT<false>::AddArray<FootFixedSettings>(
					uint32 count,
					CPackedHandle<FootFixedSettings>* handleOut);  // 398
	{
	}
	CRelativeOffset<FootFixedSettings>::SetOffset(
			const FootFixedSettings* targetPtr);  // 20
	CRelativeOffset<FootFixedSettings>::operator=(
			const FootFixedSettings* targetPtr);  // 115
	CRelativeArray<FootFixedSettings>::SetArray(
		const FootFixedSettings* targetArray,
		int32 count);  // 398
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<true>::AddItem<FootLockPoseOpInstanceSettings, CAnimGraphInitContext&, int&>(
										CPackedHandle<FootLockPoseOpInstanceSettings>* handleOut);  // 399
	PackedHandleID::operator=(
			uint32 id);  // 144
	CPackedDataT<true>::AddItem<CFootLockUpdateNodeInstanceData, CAnimGraphInitContext&, int&>(
										CPackedHandle<CFootLockUpdateNodeInstanceData>* handleOut);  // 401
} /* size: 0, inline expansions: 18 (449 bytes) */

// <01818623> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:394
void CFootLockUpdateNode::CFootLockUpdateNode(CAnimGraphInitContext& initContext, int nLockableFootCount)
{
} /* size: 0 */

// <018185D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:404
void CFootLockUpdateNode::CollectVisualizations(const CAnimGraphUpdateContext& context, IAnimationGraphVisualizationManager* pVisualizationManager)
{
} /* size: 5 */

// <01875F51> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:418
// variable: 1
// function calls: 3
void CFootLockUpdateNode::CalculateFootMotionList(CAnimGraphUpdateContext& context, const CMotionTransform& newRootTransform)
{
	CStrideStatus footMotionList; // 420
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 421
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 423
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <01818595> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:418
// variable: 1
void CFootLockUpdateNode::CalculateFootMotionList(CAnimGraphUpdateContext& context, const CMotionTransform& newRootTransform)
{
	CStrideStatus footMotionList; // 420
} /* size: 0, variables: 1 */

// <018144CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:433
// variables: 39
// function calls: 215
void CFootLockUpdateNode::PostUpdate(CAnimGraphUpdateContext& context)
{
	const FootLockPoseOpFixedSettings* pPoseOpFixedData; // 435
	FootLockPoseOpInstanceSettings* pPoseOpInstanceData; // 436
	CFootLockUpdateNodeInstanceData* pUpdateNodeInstanceData; // 437
	CMotionTransform newRootTransform; // 440
	CStrideStatus footMotionList; // 446
	{
		int iFoot; // 452
		{
			const FootFixedSettings& footSettings; // 454
			const int  nFootIndex; // 455
			bool bDidTeleport; // 459
			bool bResetFoot; // 460
			{
				const CFootMotionStatus& footMotion; // 481
				FootInstanceSettings& footInstance; // 482
				const VectorAligned  vLastFootPos; // 484
				CMotionTransform alignedRootTransform; // 488
				float flLastProgression; // 619
				{
					const float  flCurrentFootDirWS; // 508
					{
						float flProgression; // 519
						{
							CRotation newNextRotationWS; // 522
							CRotation newPrevRotationWS; // 523
							CRotation newPrevRotationMS; // 525
							CFootprint::GetDirectionMS(); // 522
							FloatBits(const vec_t& f); // 112
							IsFinite(const vec_t& f); // 202
							{
							}
							{
							}
							{
							}
							CRotation::CRotation(
									angle_t angleDegrees);  // 23
							CRotation::CRotation(
									angle_t angleDegrees);  // 203
							CRotation::operator+(
									angle_t s);  // 522
							CRotation::operator float(); // 523
							{
							}
							{
							}
							CRotation::CRotation(
									angle_t angleDegrees);  // 23
							CRotation::CRotation(
									angle_t angleDegrees);  // 523
							FloatBits(const vec_t& f); // 112
							IsFinite(const vec_t& f); // 209
							{
							}
							{
							}
							{
							}
							CRotation::CRotation(
									angle_t angleDegrees);  // 23
							CRotation::CRotation(
									angle_t angleDegrees);  // 210
							CRotation::operator-(
									angle_t s);  // 525
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
									const CRotation& rot);  // 525
							CRotation::operator float(); // 526
							FloatBits(const vec_t& f); // 112
							IsFinite(const vec_t& f); // 112
							{
							}
							CFootprint::SetDirectionMS(
									float flDir);  // 526
						}
					}
					Vector::operator=(
							const Vector& vOther);  // 17
					{
					}
					CRotation::operator=(
							const CRotation& rot);  // 17
					CMotionTransform::operator=(
							const CMotionTransform  &);  // 33
					VectorAligned::operator=(
							const VectorAligned& src);  // 33
					VectorAligned::operator=(
							const VectorAligned& src);  // 33
					CFootprint::operator=(
							const CFootprint  &);  // 511
					Vector::operator=(
							const Vector& vOther);  // 17
					{
					}
					CRotation::operator=(
							const CRotation& rot);  // 17
					CMotionTransform::operator=(
							const CMotionTransform  &);  // 33
					VectorAligned::operator=(
							const VectorAligned& src);  // 33
					VectorAligned::operator=(
							const VectorAligned& src);  // 33
					CFootprint::operator=(
							const CFootprint  &);  // 514
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
							const Vector& src);  // 530
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
							const Vector& src);  // 531
					Vector::operator=(
							const Vector& vOther);  // 17
					{
					}
					CRotation::operator=(
							const CRotation& rot);  // 17
					CMotionTransform::operator=(
							CMotionTransform &);  // 544
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
					VectorAligned::operator Vector(); // 1223
					Vector::operator=(
							const Vector& vOther);  // 11
					Vector::operator=(
							const Vector& vOther);  // 12
					Vector::operator=(
							const Vector& vOther);  // 13
					GenericCriticallyDampedType<Vector>::SnapTo(
						const Vector& kNewPosition);  // 1223
					_mm_cvtss_f32(__m128 __A); // 1534
					GetZSIMD<>(fltx4 a); // 76
					VectorAligned::z(); // 1224
					GenericCriticallyDampedType<float>::SnapTo(
						const float& kNewPosition);  // 1224
					CFootLockUpdateNode::SnapDampedPredictions(
								FootInstanceSettings& footInstance);  // 546
				}
				{
					const float  flZ; // 561
					VectorAligned vSmoothedPosWS; // 563
					{
						fltx4 retVal; // 1460
						_mm_move_ss(__m128 __A,
								__m128 __B);  // 1461
						_mm_move_ss(__m128 __A,
								__m128 __B);  // 1463
					}
					SetZSIMD<>(fltx4 a,
							float f);  // 80
					VectorAligned::SetZ(
						vec_t value);  // 564
				}
				{
					VectorAligned vFootBasePosWS; // 578
					VectorAligned vFootBaseDirWS; // 579
					VectorAligned vFootBaseNormalWS; // 580
					{
					}
					CRelativeOffset<FootOpTarget>::IsValid(); // 30
					CRelativeOffset<FootOpTarget>::Get(); // 90
					CRelativeArray<FootOpTarget>::operator[](
							int index);  // 582
					VectorAligned::operator=(
							const VectorAligned& src);  // 582
					{
					}
					CRelativeOffset<FootOpTarget>::IsValid(); // 30
					CRelativeOffset<FootOpTarget>::Get(); // 90
					CRelativeArray<FootOpTarget>::operator[](
							int index);  // 583
					VectorAligned::operator=(
							const VectorAligned& src);  // 583
					{
					}
					CRelativeOffset<FootOpTarget>::IsValid(); // 30
					CRelativeOffset<FootOpTarget>::Get(); // 90
					CRelativeArray<FootOpTarget>::operator[](
							int index);  // 584
					VectorAligned::operator=(
							const VectorAligned& src);  // 584
				}
				{
					CFootTrajectory vCurrentTrajectory; // 606
					VectorAligned vFootBasePosWS; // 607
					VectorAligned vFootBaseDirWS; // 608
					VectorAligned vFootBaseNormalWS; // 609
					{
					}
					CRelativeOffset<FootOpTarget>::IsValid(); // 30
					CRelativeOffset<FootOpTarget>::Get(); // 90
					CRelativeArray<FootOpTarget>::operator[](
							int index);  // 612
					VectorAligned::operator=(
							const VectorAligned& src);  // 612
					{
					}
					CRelativeOffset<FootOpTarget>::IsValid(); // 30
					CRelativeOffset<FootOpTarget>::Get(); // 90
					CRelativeArray<FootOpTarget>::operator[](
							int index);  // 613
					VectorAligned::operator=(
							const VectorAligned& src);  // 613
					{
					}
					CRelativeOffset<FootOpTarget>::IsValid(); // 30
					CRelativeOffset<FootOpTarget>::Get(); // 90
					CRelativeArray<FootOpTarget>::operator[](
							int index);  // 614
					VectorAligned::operator=(
							const VectorAligned& src);  // 614
					Vector::operator=(
							const Vector& vOther);  // 188
					CFootTrajectory::operator=(
							const CFootTrajectory  &);  // 616
					Vector::operator=(
							const Vector& vOther);  // 17
					{
					}
					CRotation::operator=(
							const CRotation& rot);  // 17
					CMotionTransform::operator=(
							const CMotionTransform  &);  // 33
					VectorAligned::operator=(
							const VectorAligned& src);  // 33
					VectorAligned::operator=(
							const VectorAligned& src);  // 33
					CFootprint::operator=(
							const CFootprint  &);  // 599
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
							const Vector& src);  // 600
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
							const Vector& src);  // 601
				}
				{
				}
				CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
				CRelativeOffset<FootInstanceSettings>::Get(); // 90
				CRelativeArray<FootInstanceSettings>::operator[](
						int index);  // 482
				{
				}
				CRelativeOffset<FootOpTarget>::IsValid(); // 30
				CRelativeOffset<FootOpTarget>::Get(); // 90
				CRelativeArray<FootOpTarget>::operator[](
						int index);  // 484
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						const CMotionTransform  &);  // 489
				CFootLockUpdateNode::IsNewCycleStart(
						const FootInstanceSettings& footState,
						const CFootMotionStatus& footMotion);  // 506
				GenericCriticallyDampedType<float>::UpdateAndGetPosition(
							float flTimeStep);  // 555
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
						const Vector& rhs);  // 569
				{
				}
				CRelativeOffset<FootOpTarget>::IsValid(); // 30
				CRelativeOffset<FootOpTarget>::Get(); // 90
				CRelativeArray<FootOpTarget>::operator[](
						int index);  // 619
				{
				}
				CRelativeOffset<FootOpTarget>::IsValid(); // 30
				CRelativeOffset<FootOpTarget>::Get(); // 90
				CRelativeArray<FootOpTarget>::operator[](
						int index);  // 620
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 621
				{
				}
				CRelativeOffset<FootOpTarget>::IsValid(); // 30
				CRelativeOffset<FootOpTarget>::Get(); // 90
				CRelativeArray<FootOpTarget>::operator[](
						int index);  // 621
				ConVar::GetInt(); // 39
				ConVar::GetInt(); // 44
				ShouldDebugFootLock(int64 nDebugTypeFlags,
							int nFootIndex);  // 54
				ShouldDebugFootLock(FootLockDebugType debugType,
							int nFootIndex);  // 624
				Vector::operator=(
						const Vector& vOther);  // 188
				CFootTrajectory::operator=(
						const CFootTrajectory  &);  // 631
			}
			{
			}
			CRelativeOffset<FootFixedSettings>::IsValid(); // 35
			CRelativeOffset<FootFixedSettings>::Get(); // 97
			CRelativeArray<FootFixedSettings>::operator[](
					int index);  // 454
			{
			}
			CRelativeOffset<FootOpTarget>::IsValid(); // 30
			CRelativeOffset<FootOpTarget>::Get(); // 90
			CRelativeArray<FootOpTarget>::operator[](
					int index);  // 469
			{
			}
			CRelativeOffset<FootOpTarget>::IsValid(); // 30
			CRelativeOffset<FootOpTarget>::Get(); // 90
			CRelativeArray<FootOpTarget>::operator[](
					int index);  // 474
			{
			}
			CRelativeOffset<FootOpTarget>::IsValid(); // 30
			CRelativeOffset<FootOpTarget>::Get(); // 90
			CRelativeArray<FootOpTarget>::operator[](
					int index);  // 477
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 477
			{
			}
			CRelativeOffset<FootOpTarget>::IsValid(); // 30
			CRelativeOffset<FootOpTarget>::Get(); // 90
			CRelativeArray<FootOpTarget>::operator[](
					int index);  // 477
			{
			}
			CRelativeOffset<FootOpTarget>::IsValid(); // 30
			CRelativeOffset<FootOpTarget>::Get(); // 90
			CRelativeArray<FootOpTarget>::operator[](
					int index);  // 465
		}
		CRelativeArray<FootOpFixedInfo>::Count(); // 452
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<FootLockPoseOpFixedSettings>(
						const CPackedHandle<FootLockPoseOpFixedSettings>& handle);  // 33
	CAnimGraphFixedData::operator[]<FootLockPoseOpFixedSettings>(
						const CPackedHandle<FootLockPoseOpFixedSettings>& handle);  // 435
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 77
	CAnimGraphInstanceData::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 436
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 437
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 442
	Vector::Vector(); // 25
	CRotation::CRotation(); // 25
	CMotionTransform::CMotionTransform(); // 440
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 442
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 421
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 423
	CFootLockUpdateNode::CalculateFootMotionList(
				CAnimGraphUpdateContext& context,
				const CMotionTransform& newRootTransform);  // 446
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1081
	CFootLockUpdateNode::CalculateTilt(
			CAnimGraphUpdateContext& context,
			const CMotionTransform& rootTransform);  // 450
	CFootLockUpdateNode::UpdateHipShift(
			CAnimGraphUpdateContext& context,
			const CStrideStatus& footMotionList,
			const CMotionTransform& newRootTransform);  // 639
	ConVar::GetInt(); // 44
	ShouldDebugFootLock(int64 nDebugTypeFlags,
				int nFootIndex);  // 54
	ShouldDebugFootLock(FootLockDebugType debugType,
				int nFootIndex);  // 645
	CUtlString::CUtlString(
			const char* pString);  // 647
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 647
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
			const Vector& rhs);  // 647
	VectorAligned::operator fltx4(); // 71
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 647
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
			const VectorAligned& v);  // 647
	VectorAligned::operator fltx4(); // 71
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 647
	CUtlString::~CUtlString(); // 647
} /* size: 0, variables: 5, inline expansions: 51 (1103 bytes) */

// <01813560> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:652
// variables: 9
// function calls: 58
void CFootLockUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	PoseHandle hChildPose; // 687
	{
		int iFoot; // 656
		{
			VectorAligned vToePosWS; // 658
			VectorAligned vHeelPosWS; // 659
			VectorAligned vNextPosWorld; // 661
			VectorAligned vPrevPosWorld; // 662
			{
				Color currentColor; // 669
				FootMotionStage motionStage; // 671
				Color::GetRawColor(); // 147
				Color::SetRawColor(
						int32 Color);  // 147
				Color::operator=(
						const Color& rhs);  // 675
				Color::r(); // 106
				Color::g(); // 107
				Color::b(); // 108
				Color::a(); // 109
				VertexColor_t::VertexColor_t(
						const Color& src);  // 682
				CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
				PackedHandleID::PackedHandleID(
						const PackedHandleID& rhs);  // 260
				CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
										const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
				CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
										const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
				CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
										const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 904
				{
				}
				CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
				CRelativeOffset<FootInstanceSettings>::Get(); // 90
				CRelativeArray<FootInstanceSettings>::operator[](
						int index);  // 904
				CFootLockUpdateNode::GetFootMotionStage(
							CAnimGraphUpdateContext& context,
							int nFootIndex);  // 671
				Color::SetRawColor(
						int32 Color);  // 147
				Color::operator=(
						const Color& rhs);  // 679
			}
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
									const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
			CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
									const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
			CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
									const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 842
			{
			}
			CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
			CRelativeOffset<FootInstanceSettings>::Get(); // 90
			CRelativeArray<FootInstanceSettings>::operator[](
					int index);  // 842
			CFootLockUpdateNode::GetNextFootPosition(
						CAnimGraphUpdateContext& context,
						int nFootIndex);  // 658
			VectorAligned::operator fltx4(); // 256
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
					const VectorAligned& v);  // 659
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
									const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
			CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
									const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
			CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
									const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 863
			{
			}
			CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
			CRelativeOffset<FootInstanceSettings>::Get(); // 90
			CRelativeArray<FootInstanceSettings>::operator[](
					int index);  // 863
			CFootLockUpdateNode::GetPrevFootPosition(
						CAnimGraphUpdateContext& context,
						int nFootIndex);  // 662
			VertexColor_t::VertexColor_t(
					uint8 ir,
					uint8 ig,
					uint8 ib,
					uint8 ia);  // 665
		}
		CRelativeArray<FootFixedSettings>::Count(); // 656
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 654
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 688
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 690
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<FootLockPoseOpFixedSettings>::CPackedHandle(
			const CPackedHandle<FootLockPoseOpFixedSettings>  &);  // 695
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<FootLockPoseOpInstanceSettings>::CPackedHandle(
			const CPackedHandle<FootLockPoseOpInstanceSettings>  &);  // 695
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 695
} /* size: 0, variables: 1, inline expansions: 14 (145 bytes) */

// <01813207> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:699
// variables: 2
// function calls: 11
void CFootLockUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	const char   __FUNCTION__; // 32714
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 701
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
			const CAnimGraphUpdateContext& context);  // 701
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 702
} /* size: 0, variables: 1, inline expansions: 11 (176 bytes) */

// <0181290F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:706
// variables: 2
// function calls: 35
void CFootLockUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	CFootLockUpdateNodeInstanceData* pInstData; // 708
	{
		FootLockPoseOpInstanceSettings* pPoseOpInstanceData; // 733
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
			float flCycle);  // 717
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 719
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 721
		VectorAligned::operator=(
				const VectorAligned& src);  // 727
		VectorAligned::operator=(
				const VectorAligned& src);  // 728
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 730
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<FootLockPoseOpInstanceSettings>(
								const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 77
		CAnimGraphInstanceData::operator[]<FootLockPoseOpInstanceSettings>(
								const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<FootLockPoseOpInstanceSettings>(
								const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 733
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 708
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimUpdateNodeBase::IsReset(
		const CAnimGraphUpdateContext& context);  // 712
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
			const CAnimGraphUpdateContext& context);  // 713
} /* size: 413, variables: 1, inline expansions: 16 (326 bytes) */

// <01812744> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:740
// function calls: 6
void CFootLockUpdateNode::GetFootCount(CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 742
	CRelativeArray<FootInstanceSettings>::Count(); // 742
} /* size: 86, inline expansions: 6 (68 bytes) */

// <018760B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:746
// function calls: 7
void CFootLockUpdateNode::GetCurrentFootPosition(CAnimGraphUpdateContext& context, int nFootIndex)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 77
	CAnimGraphInstanceData::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 748
	{
	}
	CRelativeOffset<FootOpTarget>::IsValid(); // 30
	CRelativeOffset<FootOpTarget>::Get(); // 90
	CRelativeArray<FootOpTarget>::operator[](
			int index);  // 748
} /* size: 0, inline expansions: 7 (207 bytes) */

// <01812711> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:746
void CFootLockUpdateNode::GetCurrentFootPosition(CAnimGraphUpdateContext& context, int nFootIndex)
{
} /* size: 0 */

// <01812515> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:752
// function calls: 7
void CFootLockUpdateNode::GetCurrentFootDirection(CAnimGraphUpdateContext& context, int nFootIndex)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 77
	CAnimGraphInstanceData::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 754
	{
	}
	CRelativeOffset<FootOpTarget>::IsValid(); // 30
	CRelativeOffset<FootOpTarget>::Get(); // 90
	CRelativeArray<FootOpTarget>::operator[](
			int index);  // 754
} /* size: 0, inline expansions: 7 (203 bytes) */

// <01811B9E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:758
// variables: 4
// function calls: 31
void CFootLockUpdateNode::EstimateNewFootPosition(CAnimGraphUpdateContext& context, int nFootIndex)
{
	const FootInstanceSettings& footInstance; // 760
	{
		float flLerpValue; // 764
		CFootTrajectory trajectory; // 767
		CMotionTransform localToWorld; // 769
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 765
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 242
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 242
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
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
				const Vector& B);  // 240
		Lerp<CFootTrajectory>(float flPercent,
					const CFootTrajectory& A,
					const CFootTrajectory& B);  // 767
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 760
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
	CRelativeOffset<FootInstanceSettings>::Get(); // 90
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 760
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 77
	CAnimGraphInstanceData::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 748
	{
	}
	CRelativeOffset<FootOpTarget>::IsValid(); // 30
	CRelativeOffset<FootOpTarget>::Get(); // 90
	CRelativeArray<FootOpTarget>::operator[](
			int index);  // 748
	CFootLockUpdateNode::GetCurrentFootPosition(
				CAnimGraphUpdateContext& context,
				int nFootIndex);  // 774
} /* size: 0, variables: 1, inline expansions: 17 (491 bytes) */

// <0180E806> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:779
// variables: 69
// function calls: 212
void CFootLockUpdateNode::EstimateNewFootPositionFlattened(CAnimGraphUpdateContext& context, int nFootIndex)
{
	FootInstanceSettings& footInstance; // 781
	{
		float flLerpValue; // 785
		CFootTrajectory trajectory; // 788
		const VectorAligned  vOrigPrevPos; // 790
		const VectorAligned  vOrigNextPos; // 791
		const VectorAligned  vRootPos; // 794
		VectorAligned vToPrevPos; // 796
		VectorAligned vToNextPos; // 797
		float flPrevLength; // 799
		float flNextLength; // 800
		VectorAligned vFlattenedPrevPos; // 805
		VectorAligned vFlattenedNextPos; // 806
		VectorAligned vFootPos; // 812
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 786
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 242
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 242
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
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
				const Vector& B);  // 240
		Lerp<CFootTrajectory>(float flPercent,
					const CFootTrajectory& A,
					const CFootTrajectory& B);  // 788
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
				const VectorAligned& v);  // 796
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
				const VectorAligned& v);  // 797
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
				const fltx4& b);  // 298
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 299
		VectorAligned::Length(); // 799
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1694
		{
			fltx4 retVal; // 1295
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1296
		}
		SplatXSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1314
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1315
		}
		SplatYSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1695
		{
			fltx4 retVal; // 1333
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1334
		}
		SplatZSIMD<>(const fltx4& a); // 1695
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1695
		Dot3SIMD<>(const fltx4& a,
				const fltx4& b);  // 298
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 299
		VectorAligned::Length(); // 800
		{
			fltx4 retVal; // 1460
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1461
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1463
		}
		SetZSIMD<>(fltx4 a,
				float f);  // 80
		VectorAligned::SetZ(
			vec_t value);  // 802
		{
			fltx4 retVal; // 1460
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1461
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1463
		}
		SetZSIMD<>(fltx4 a,
				float f);  // 80
		VectorAligned::SetZ(
			vec_t value);  // 803
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
				vec_t s);  // 805
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
		VectorAligned::Normalized(); // 805
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
				vec_t s);  // 806
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
				const VectorAligned& v);  // 805
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1694
		{
			fltx4 retVal; // 1295
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1296
		}
		SplatXSIMD<>(const fltx4& a); // 1695
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
		VectorAligned::Normalized(); // 806
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
				const VectorAligned& v);  // 806
	}
	{
		VectorAligned vFootPos; // 822
		VectorAligned vPrevPos; // 825
		VectorAligned vNextPos; // 826
		VectorAligned vReferencePos; // 828
		float flHeightOffset; // 830
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<FootLockPoseOpInstanceSettings>(
								const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 77
		CAnimGraphInstanceData::operator[]<FootLockPoseOpInstanceSettings>(
								const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<FootLockPoseOpInstanceSettings>(
								const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 748
		{
		}
		CRelativeOffset<FootOpTarget>::IsValid(); // 30
		CRelativeOffset<FootOpTarget>::Get(); // 90
		CRelativeArray<FootOpTarget>::operator[](
				int index);  // 748
		CFootLockUpdateNode::GetCurrentFootPosition(
					CAnimGraphUpdateContext& context,
					int nFootIndex);  // 822
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
								const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
								const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
								const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 863
		{
		}
		CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
		CRelativeOffset<FootInstanceSettings>::Get(); // 90
		CRelativeArray<FootInstanceSettings>::operator[](
				int index);  // 863
		CFootLockUpdateNode::GetPrevFootPosition(
					CAnimGraphUpdateContext& context,
					int nFootIndex);  // 825
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
								const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
								const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
								const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 842
		{
		}
		CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
		CRelativeOffset<FootInstanceSettings>::Get(); // 90
		CRelativeArray<FootInstanceSettings>::operator[](
				int index);  // 842
		CFootLockUpdateNode::GetNextFootPosition(
					CAnimGraphUpdateContext& context,
					int nFootIndex);  // 826
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
								const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
								const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
								const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 939
		{
		}
		CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
		CRelativeOffset<FootInstanceSettings>::Get(); // 90
		CRelativeArray<FootInstanceSettings>::operator[](
				int index);  // 939
		CFootLockUpdateNode::GetCurrentFootTrajectory(
					CAnimGraphUpdateContext& context,
					int nFootIndex);  // 828
		VectorAligned::operator fltx4(); // 256
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
				const VectorAligned& v);  // 262
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
				vec_t s);  // 262
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
				const VectorAligned& v);  // 262
		Lerp<VectorAligned>(float flPercent,
					const VectorAligned& A,
					const VectorAligned& B);  // 828
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 830
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 830
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 833
		{
			fltx4 retVal; // 1460
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1461
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1463
		}
		SetZSIMD<>(fltx4 a,
				float f);  // 80
		VectorAligned::SetZ(
			vec_t value);  // 833
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 781
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
	CRelativeOffset<FootInstanceSettings>::Get(); // 90
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 781
} /* size: 0, variables: 1, inline expansions: 8 (218 bytes) */

// <018762A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:840
// function calls: 8
void CFootLockUpdateNode::GetNextFootPosition(CAnimGraphUpdateContext& context, int nFootIndex)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 842
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
	CRelativeOffset<FootInstanceSettings>::Get(); // 90
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 842
	CFootprint::GetPositionWS(); // 842
} /* size: 0, inline expansions: 8 (211 bytes) */

// <0180E7D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:840
void CFootLockUpdateNode::GetNextFootPosition(CAnimGraphUpdateContext& context, int nFootIndex)
{
} /* size: 0 */

// <0180D2DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:846
// variables: 34
// function calls: 82
void CFootLockUpdateNode::GetNextFootDirection(CAnimGraphUpdateContext& context, int nFootIndex)
{
	const FootInstanceSettings& footInstance; // 848
	const FootFixedSettings& footSettings; // 849
	VectorAligned vFootBaseDirection; // 851
	VectorAligned vGroundNormal; // 852
	VectorAligned vLeft; // 854
	VectorAligned vAdjustedFootBaseDirection; // 855
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 848
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
	CRelativeOffset<FootInstanceSettings>::Get(); // 90
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 848
	{
	}
	CRelativeOffset<FootFixedSettings>::IsValid(); // 35
	CRelativeOffset<FootFixedSettings>::Get(); // 97
	CRelativeArray<FootFixedSettings>::operator[](
			int index);  // 849
	CFootprint::GetDirectionMS(); // 851
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 202
	{
	}
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 203
	CRotation::operator+(
			angle_t s);  // 851
	CRotation::operator float(); // 851
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 851
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
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
				const fltx4& v2);  // 386
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 386
	VectorAligned::Cross(
		const VectorAligned& v);  // 422
	CrossProduct(const VectorAligned& lhs,
			const VectorAligned& rhs);  // 854
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
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
				const fltx4& v2);  // 386
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 386
	VectorAligned::Cross(
		const VectorAligned& v);  // 422
	CrossProduct(const VectorAligned& lhs,
			const VectorAligned& rhs);  // 855
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
	VectorAligned::Normalized(); // 857
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
			vec_t s);  // 857
} /* size: 0, variables: 6, inline expansions: 50 (992 bytes) */

// <018764B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:861
// function calls: 8
void CFootLockUpdateNode::GetPrevFootPosition(CAnimGraphUpdateContext& context, int nFootIndex)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 863
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
	CRelativeOffset<FootInstanceSettings>::Get(); // 90
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 863
	CFootprint::GetPositionWS(); // 863
} /* size: 0, inline expansions: 8 (214 bytes) */

// <0180D2AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:861
void CFootLockUpdateNode::GetPrevFootPosition(CAnimGraphUpdateContext& context, int nFootIndex)
{
} /* size: 0 */

// <0180BDB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:867
// variables: 34
// function calls: 82
void CFootLockUpdateNode::GetPrevFootDirection(CAnimGraphUpdateContext& context, int nFootIndex)
{
	const FootInstanceSettings& footInstance; // 869
	const FootFixedSettings& footSettings; // 870
	VectorAligned vFootBaseDirection; // 872
	VectorAligned vGroundNormal; // 873
	VectorAligned vLeft; // 875
	VectorAligned vAdjustedFootBaseDirection; // 876
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 869
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
	CRelativeOffset<FootInstanceSettings>::Get(); // 90
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 869
	{
	}
	CRelativeOffset<FootFixedSettings>::IsValid(); // 35
	CRelativeOffset<FootFixedSettings>::Get(); // 97
	CRelativeArray<FootFixedSettings>::operator[](
			int index);  // 870
	CFootprint::GetDirectionMS(); // 872
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 202
	{
	}
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 203
	CRotation::operator+(
			angle_t s);  // 872
	CRotation::operator float(); // 872
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 872
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
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
				const fltx4& v2);  // 386
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 386
	VectorAligned::Cross(
		const VectorAligned& v);  // 422
	CrossProduct(const VectorAligned& lhs,
			const VectorAligned& rhs);  // 875
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
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
				const fltx4& v2);  // 386
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 386
	VectorAligned::Cross(
		const VectorAligned& v);  // 422
	CrossProduct(const VectorAligned& lhs,
			const VectorAligned& rhs);  // 876
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
	VectorAligned::Normalized(); // 878
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
			vec_t s);  // 878
} /* size: 0, variables: 6, inline expansions: 50 (998 bytes) */

// <0180BB72> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:882
// variable: 1
// function calls: 8
void CFootLockUpdateNode::GetPrevFootTransform(CAnimGraphUpdateContext& context, int nFootIndex)
{
	const FootInstanceSettings& footInstance; // 884
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 884
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
	CRelativeOffset<FootInstanceSettings>::Get(); // 90
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 884
	CFootprint::GetEntityTransform(); // 885
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <0180AFE7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:889
// variables: 23
// function calls: 49
void CFootLockUpdateNode::GetMidpointFootPosition(CAnimGraphUpdateContext& context, int nFootIndex)
{
	const FootInstanceSettings& footInstance; // 891
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 891
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
	CRelativeOffset<FootInstanceSettings>::Get(); // 90
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 891
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
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
			const VectorAligned& v);  // 408
	VectorAligned::operator fltx4(); // 406
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 406
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 409
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 410
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 411
	CTransform::TransformVector(
			const VectorAligned& v0);  // 892
} /* size: 0, variables: 1, inline expansions: 23 (498 bytes) */

// <0180ADDC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:896
// function calls: 7
void CFootLockUpdateNode::GetFootProgression(CAnimGraphUpdateContext& context, int nFootIndex)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 898
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
	CRelativeOffset<FootInstanceSettings>::Get(); // 90
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 898
} /* size: 0, inline expansions: 7 (206 bytes) */

// <018766C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:902
// function calls: 7
void CFootLockUpdateNode::GetFootMotionStage(CAnimGraphUpdateContext& context, int nFootIndex)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 904
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
	CRelativeOffset<FootInstanceSettings>::Get(); // 90
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 904
} /* size: 0, inline expansions: 7 (199 bytes) */

// <0180ADA9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:902
void CFootLockUpdateNode::GetFootMotionStage(CAnimGraphUpdateContext& context, int nFootIndex)
{
} /* size: 0 */

// <0180A93F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:908
// function calls: 16
void CFootLockUpdateNode::GetFootLockStatus(CAnimGraphUpdateContext& context, int nFootIndex)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 910
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
	CRelativeOffset<FootInstanceSettings>::Get(); // 90
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 910
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 914
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
	CRelativeOffset<FootInstanceSettings>::Get(); // 90
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 914
} /* size: 0, inline expansions: 16 (380 bytes) */

// <01809C21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:924
// variables: 23
// function calls: 52
void CFootLockUpdateNode::GetTiltVector(CAnimGraphUpdateContext& context)
{
	CFootLockUpdateNodeInstanceData* pUpdateNodeInstanceData; // 927
	const float  flPitch; // 928
	const float  flRoll; // 929
	const Vector  vWsTiltNormal; // 931
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 927
	Quaternion::Quaternion(); // 812
	AngleQuaternion(const QAngle& angles); // 2850
	QAngle::ToQuaternion(); // 931
	QAngle::QAngle(
		vec_t flPitchDegrees,
		vec_t flYawDegrees,
		vec_t flRollDegrees);  // 931
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 30
	VectorAligned::VectorAligned(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 931
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 931
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 301
	QuaternionAligned::operator*=(
			const QuaternionAligned& q);  // 302
	QuaternionAligned::operator*(
			const QuaternionAligned& q);  // 931
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
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
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
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
			const VectorAligned& v);  // 931
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 931
} /* size: 275, variables: 4, inline expansions: 31 (373 bytes) */

// <018768AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:937
// function calls: 7
void CFootLockUpdateNode::GetCurrentFootTrajectory(CAnimGraphUpdateContext& context, int nFootIndex)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 939
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
	CRelativeOffset<FootInstanceSettings>::Get(); // 90
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 939
} /* size: 0, inline expansions: 7 (0 bytes) */

// <01809BEE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:937
void CFootLockUpdateNode::GetCurrentFootTrajectory(CAnimGraphUpdateContext& context, int nFootIndex)
{
} /* size: 0 */

// <018095B3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:943
// variables: 2
// function calls: 21
void CFootLockUpdateNode::EstimateNewFootTrajectory(CAnimGraphUpdateContext& context, int nFootIndex)
{
	const FootInstanceSettings& footInstance; // 945
	{
		float flLerpValue; // 949
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 950
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 242
		Lerp<float>(float flPercent,
				const float& A,
				const float& B);  // 242
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
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
				const Vector& B);  // 240
		Lerp<CFootTrajectory>(float flPercent,
					const CFootTrajectory& A,
					const CFootTrajectory& B);  // 952
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 945
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
	CRelativeOffset<FootInstanceSettings>::Get(); // 90
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 945
} /* size: 0, variables: 1, inline expansions: 7 (229 bytes) */

// <01805DD6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:961
// variables: 64
// function calls: 239
void CFootLockUpdateNode::CalcFootBasePositionWS(const CAnimGraphUpdateContext& context, const CFootTrajectory& vTrajectory, const CMotionTransform& newRootTransform, int nFootIndex)
{
	const FootInstanceSettings& footInstance; // 963
	const VectorAligned  vStrideVector; // 965
	const float  flStrideVecLength; // 966
	CFootTrajectory vCurrentTrajectory; // 968
	VectorAligned vFootBasePosWS; // 980
	const char   __FUNCTION__; // 32942
	{
		 GetInterceptHeight; // 993
		const Vector  vWsMidPoint; // 1018
		const Vector& vWsUp; // 1019
		const float  flIntercept1; // 1021
		const float  flIntercept2; // 1022
		const float  flMaxHeightOffset; // 1024
		const Vector  vWsInterceptToUse; // 1025
		const float  flFlightCycle; // 1027
		const float  flHeightScale; // 1028
		const float  flHeightOffset; // 1034
		const FootLockPoseOpInstanceSettings* pPoseOpInstanceData; // 1055
		{
			CLabelledDebugHelper* pDebug; // 1038
			const float  flTrajectoryAlpha; // 1039
			const VectorAligned  vWsEffectiveGroundPosition; // 1040
			const int  nPrecision; // 1045
			{
				int n; // 1046
				{
					const float  flAlpha; // 1048
					const float  flH; // 1049
					const Vector  vWs; // 1050
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 1050
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
							const Vector& rhs);  // 1050
					VectorAligned::operator fltx4(); // 256
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
							const VectorAligned& v);  // 262
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
							vec_t s);  // 262
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
							const VectorAligned& v);  // 262
					Lerp<VectorAligned>(float flPercent,
								const VectorAligned& A,
								const VectorAligned& B);  // 1050
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
							const VectorAligned& v);  // 1050
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 40
					VectorAligned::operator Vector(); // 1050
					VertexColor_t::AsUint32(); // 93
					VertexColor_t::AsUint32Ptr(); // 93
					VertexColor_t::VertexColor_t(
							const VertexColor_t& src);  // 160
					VertexColor_t::operator*(
							float flScale);  // 1051
					VectorAligned::Init(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 31
					VectorAligned::VectorAligned(
							const Vector& rhs);  // 1051
				}
			}
			VectorAligned::operator fltx4(); // 256
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
					const VectorAligned& v);  // 262
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
					vec_t s);  // 262
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
					const VectorAligned& v);  // 262
			Lerp<VectorAligned>(float flPercent,
						const VectorAligned& A,
						const VectorAligned& B);  // 1040
			CUtlString::CUtlString(
					const char* pString);  // 1041
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
					const Vector& rhs);  // 1041
			CUtlString::~CUtlString(); // 1041
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 81
			CFmtStrN<256>::String(); // 1042
			CUtlString::CUtlString(
					const char* pString);  // 1042
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1042
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
					const Vector& rhs);  // 1042
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
					const VectorAligned& v);  // 1042
			CUtlString::~CUtlString(); // 1042
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 1042
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1043
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 1043
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
					const Vector& rhs);  // 1043
		}
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
				const VectorAligned& v);  // 1018
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 274
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 274
		VectorAligned::operator/(
				vec_t s);  // 1018
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 1018
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 1021
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 1021
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 1022
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 1022
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1025
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1025
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1027
		ConVar::GetInt(); // 39
		ConVar::GetInt(); // 44
		ShouldDebugFootLock(int64 nDebugTypeFlags,
					int nFootIndex);  // 54
		ShouldDebugFootLock(FootLockDebugType debugType,
					int nFootIndex);  // 1036
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<FootLockPoseOpInstanceSettings>(
								const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 77
		CAnimGraphInstanceData::operator[]<FootLockPoseOpInstanceSettings>(
								const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 60
		CAnimGraphUpdateContext::operator[]<FootLockPoseOpInstanceSettings>(
								const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 1055
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 1057
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1057
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 1057
		{
			fltx4 retVal; // 1460
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1461
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1463
		}
		SetZSIMD<>(fltx4 a,
				float f);  // 80
		VectorAligned::SetZ(
			vec_t value);  // 1057
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1063
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 963
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 35
	CRelativeOffset<FootInstanceSettings>::Get(); // 97
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 963
	VectorAligned::operator fltx4(); // 256
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
			const VectorAligned& v);  // 965
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
			const fltx4& b);  // 298
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 299
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 300
	VectorAligned::Length(); // 966
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
			const fltx4& b);  // 298
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 299
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 300
	VectorAligned::Length(); // 974
	CFootLockUpdateNode::ModulateStepHeight(
				CFootTrajectory& trajectory,
				float flStrideLength,
				float flOriginalStrideLength);  // 974
	CFootprint::GetPositionWS(); // 980
	CFootprint::GetPositionWS(); // 980
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 208
	VectorAligned::operator+=(
			const VectorAligned& v);  // 986
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
			const VectorAligned& v);  // 262
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
			vec_t s);  // 262
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
			const VectorAligned& v);  // 262
	Lerp<VectorAligned>(float flPercent,
				const VectorAligned& A,
				const VectorAligned& B);  // 1073
	CalculateFootBaseOffset(float flTrajectoryBlendStartTime,
				float flTotalBlendTime,
				float flCurrentTime,
				const VectorAligned& vInitialOffsetMS);  // 1061
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 208
	VectorAligned::operator+=(
			const VectorAligned& v);  // 1061
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
	VectorAligned::IsValid(); // 1063
} /* size: 0, variables: 6, inline expansions: 69 (849 bytes) */

// <01876A92> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1067
// variables: 5
// function calls: 16
void CalculateFootBaseOffset(float flTrajectoryBlendStartTime, float flTotalBlendTime, float flCurrentTime, const VectorAligned& vInitialOffsetMS)
{
	const float  flBlendCycle; // 1069
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
			const VectorAligned& v);  // 262
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
			vec_t s);  // 262
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
			const VectorAligned& v);  // 262
	Lerp<VectorAligned>(float flPercent,
				const VectorAligned& A,
				const VectorAligned& B);  // 1073
} /* size: 0, variables: 1, inline expansions: 12 (0 bytes) */

// <01805D89> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1067
// variable: 1
void CalculateFootBaseOffset(float flTrajectoryBlendStartTime, float flTotalBlendTime, float flCurrentTime, const VectorAligned& vInitialOffsetMS)
{
	const float  flBlendCycle; // 1069
} /* size: 0, variables: 1 */

// <0187CC8A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1079
// variables: 4
// function calls: 2
void CFootLockUpdateNode::CalculateTilt(CAnimGraphUpdateContext& context, const CMotionTransform& rootTransform)
{
	CFootLockUpdateNodeInstanceData* pUpdateNodeInstanceData; // 1085
	FootLockPoseOpInstanceSettings* pPoseOpInstanceData; // 1086
	CUtlVector<Vector, CUtlMemory<Vector, int> > effectiveTracePositions; // 1089
	CUtlVector<Vector, CUtlMemory<Vector, int> > effectiveNormals; // 1092
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1081
} /* size: 0, variables: 4, inline expansions: 2 (0 bytes) */

// <01878A6F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1079
// variables: 96
// function calls: 287
void CFootLockUpdateNode::CalculateTilt(CAnimGraphUpdateContext& context, const CMotionTransform& rootTransform)
{
	CFootLockUpdateNodeInstanceData* pUpdateNodeInstanceData; // 1085
	FootLockPoseOpInstanceSettings* pPoseOpInstanceData; // 1086
	CUtlVector<Vector, CUtlMemory<Vector, int> > effectiveTracePositions; // 1089
	CUtlVector<Vector, CUtlMemory<Vector, int> > effectiveNormals; // 1092
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 1085
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 77
	CAnimGraphInstanceData::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 1086
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 1089
	CRelativeArray<FootFixedSettings>::Count(); // 1090
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::EnsureCapacity(
			int num);  // 1090
	CRelativeArray<FootFixedSettings>::Count(); // 1093
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::EnsureCapacity(
			int num);  // 1093
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 1092
	{
		int iFoot; // 1095
		CRelativeArray<FootFixedSettings>::Count(); // 1095
		{
			const FootFixedSettings& footSettings; // 1097
			CRelativeOffset<FootFixedSettings>::IsValid(); // 35
			CRelativeOffset<FootFixedSettings>::Get(); // 97
			CRelativeArray<FootFixedSettings>::operator[](
					int index);  // 1097
			{
				int nFootIndex; // 1102
				{
					FootInstanceSettings& footData; // 1107
					const float  flRawAlpha; // 1109
					const float  flPositionAlpha; // 1111
					const VectorAligned  vWsEffectiveGroundPosition; // 1112
					const VectorAligned  vWsPreviousNormal; // 1117
					const VectorAligned  vWsNextNormal; // 1118
					const VectorAligned  vWsEstimatedNormal; // 1119
					{
					}
					CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
					CRelativeOffset<FootInstanceSettings>::Get(); // 90
					CRelativeArray<FootInstanceSettings>::operator[](
							int index);  // 1107
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 1111
					VectorAligned::operator fltx4(); // 256
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
							const VectorAligned& v);  // 262
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
							vec_t s);  // 262
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
							const VectorAligned& v);  // 262
					Lerp<VectorAligned>(float flPercent,
								const VectorAligned& A,
								const VectorAligned& B);  // 1112
					CUtlMemory<Vector, int>::operator[](
							int i);  // 602
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
						int i);  // 1252
					Construct<Vector, Vector>(Vector* pMemory); // 1252
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
							Vector& src);  // 1114
					_mm_cvtss_f32(__m128 __A); // 1534
					GetZSIMD<>(fltx4 a); // 76
					VectorAligned::z(); // 40
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 40
					VectorAligned::operator Vector(); // 1114
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
							vec_t s);  // 262
					VectorAligned::operator fltx4(); // 256
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
							const VectorAligned& v);  // 262
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
							const VectorAligned& v);  // 262
					Lerp<VectorAligned>(float flPercent,
								const VectorAligned& A,
								const VectorAligned& B);  // 1119
					CUtlMemory<Vector, int>::operator[](
							int i);  // 602
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
						int i);  // 1252
					Construct<Vector, Vector>(Vector* pMemory); // 1252
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
							Vector& src);  // 1121
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
					VectorAligned::Normalized(); // 1119
					_mm_cvtss_f32(__m128 __A); // 1534
					GetZSIMD<>(fltx4 a); // 76
					VectorAligned::z(); // 40
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 40
					VectorAligned::operator Vector(); // 1121
				}
			}
		}
	}
	{
		const Vector  vWsSlopeNormal; // 1127
		const Vector  vWsAverageFootPosition; // 1128
		Vector vMsNormal; // 1131
		const QAngle  qAngle; // 1132
		const float  flPitch; // 1142
		const float  flRoll; // 1143
		CAnimParamHandle::CAnimParamHandle(); // 1127
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
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 42
		VectorAligned::AsVector(); // 87
		CTransform::RotateVectorByInverse(
					const Vector& v0);  // 1131
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 929
		Quaternion::Quaternion(); // 928
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 929
		Vector::LengthSqr(); // 930
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 932
		DotProduct(const Vector& a,
				const Vector& b);  // 933
		Vector::operator=(
				const Vector& vOther);  // 932
		BuildRotateBetweenVectorsQuaternion(const Vector& vFrom,
							const Vector& vTo);  // 1132
		QAngle::QAngle(); // 2811
		Quaternion::ToQAngle(); // 1132
		GenericCriticallyDampedType<float>::SnapTo(
			const float& kNewPosition);  // 1137
		GenericCriticallyDampedType<float>::SnapTo(
			const float& kNewPosition);  // 1138
		GenericCriticallyDampedType<float>::SnapTo(
			const float& kNewPosition);  // 36
		GenericCriticallyDampedType<float>::SetGoal(
			const float& kGoal);  // 31
		GenericCriticallyDampedType<float>::SetGoal(
			const float& kGoal);  // 55
		GenericCriticallyDampedType<float>::UpdateAndGetPosition(
					float flTimeStep);  // 57
		GenericCriticallyDampedType<float>::UpdateAndGetPosition(
					const float& kNewGoal,
					float flTimeStep);  // 53
		GenericCriticallyDampedType<float>::UpdateAndGetPosition(
					const float& kNewGoal,
					float flTimeStep);  // 1142
		GenericCriticallyDampedType<float>::SnapTo(
			const float& kNewPosition);  // 36
		GenericCriticallyDampedType<float>::SetGoal(
			const float& kGoal);  // 31
		GenericCriticallyDampedType<float>::SetGoal(
			const float& kGoal);  // 55
		GenericCriticallyDampedType<float>::UpdateAndGetPosition(
					float flTimeStep);  // 57
		GenericCriticallyDampedType<float>::UpdateAndGetPosition(
					const float& kNewGoal,
					float flTimeStep);  // 53
		GenericCriticallyDampedType<float>::UpdateAndGetPosition(
					const float& kNewGoal,
					float flTimeStep);  // 1143
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 30
		VectorAligned::VectorAligned(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1146
		QAngle::QAngle(
			vec_t flPitchDegrees,
			vec_t flYawDegrees,
			vec_t flRollDegrees);  // 1146
		Quaternion::Quaternion(); // 812
		AngleQuaternion(const QAngle& angles); // 2850
		QAngle::ToQuaternion(); // 1146
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 30
		QuaternionAligned::QuaternionAligned(
					const Quaternion& rhs);  // 1146
		QuaternionAligned::QuaternionAligned(
					fltx4 vec);  // 301
		QuaternionAligned::operator*=(
				const QuaternionAligned& q);  // 302
		QuaternionAligned::operator*(
				const QuaternionAligned& q);  // 1146
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
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
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
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
				const VectorAligned& v);  // 1146
		Vector::operator=(
				const Vector& vOther);  // 1146
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 1146
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 1148
	}
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1150
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1150
} /* size: 0, variables: 4, inline expansions: 40 (1212 bytes) */

// <01805C43> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1079
// variables: 20
void CFootLockUpdateNode::CalculateTilt(CAnimGraphUpdateContext& context, const CMotionTransform& rootTransform)
{
	CFootLockUpdateNodeInstanceData* pUpdateNodeInstanceData; // 1085
	FootLockPoseOpInstanceSettings* pPoseOpInstanceData; // 1086
	CUtlVector<Vector, CUtlMemory<Vector, int> > effectiveTracePositions; // 1089
	CUtlVector<Vector, CUtlMemory<Vector, int> > effectiveNormals; // 1092
	{
		int iFoot; // 1095
		{
			const FootFixedSettings& footSettings; // 1097
			{
				int nFootIndex; // 1102
				{
					FootInstanceSettings& footData; // 1107
					const float  flRawAlpha; // 1109
					const float  flPositionAlpha; // 1111
					const VectorAligned  vWsEffectiveGroundPosition; // 1112
					const VectorAligned  vWsPreviousNormal; // 1117
					const VectorAligned  vWsNextNormal; // 1118
					const VectorAligned  vWsEstimatedNormal; // 1119
				}
			}
		}
	}
	{
		const Vector  vWsSlopeNormal; // 1127
		const Vector  vWsAverageFootPosition; // 1128
		Vector vMsNormal; // 1131
		const QAngle  qAngle; // 1132
		const float  flPitch; // 1142
		const float  flRoll; // 1143
	}
} /* size: 0, variables: 4 */

// <0180405B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1153
// variables: 14
// function calls: 101
void CFootLockUpdateNode::ParkToStancePos(CAnimGraphUpdateContext& context, int footIndex, CMotionTransform& newRootTransform, const CFootMotionStatus& footMotion)
{
	CFootLockUpdateNodeInstanceData* pInstData; // 1155
	const FootLockPoseOpInstanceSettings* pOpInstData; // 1156
	FootInstanceSettings& footInstance; // 1158
	const FootOpTarget& footTargetInfo; // 1159
	const CFootTrajectory  estimatedTrajectory; // 1162
	const float  flEstimatedFootDirWS; // 1163
	const float  flProgression; // 1165
	float flFootDirMS; // 1167
	VectorAligned vStancePosMS; // 1169
	VectorAligned vStancePosWS; // 1170
	CFootprint parkedFootprint; // 1172
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 1155
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 77
	CAnimGraphInstanceData::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 1156
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
	CRelativeOffset<FootInstanceSettings>::Get(); // 90
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 1158
	{
	}
	CRelativeOffset<FootOpTarget>::IsValid(); // 35
	CRelativeOffset<FootOpTarget>::Get(); // 97
	CRelativeArray<FootOpTarget>::operator[](
			int index);  // 1159
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 1167
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
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 262
	Lerp<Vector>(float flPercent,
			const Vector& A,
			const Vector& B);  // 1169
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 1169
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1170
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 66
	CFootprint::CFootprint(); // 1172
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
			const Vector& rhs);  // 1170
	CFootprint::NormalizeEntityTransform(); // 1174
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 112
	{
	}
	CFootprint::SetDirectionMS(
			float flDir);  // 1176
	{
	}
	CRelativeOffset<FootFixedSettings>::IsValid(); // 35
	CRelativeOffset<FootFixedSettings>::Get(); // 97
	CRelativeArray<FootFixedSettings>::operator[](
			int index);  // 1180
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 217
	FootFixedSettings::TraceFootPrint(
			CFootprint& footPrint,
			const CAnimGraphUpdateContext& context,
			bool bRotateStartingPos,
			bool bForce);  // 1180
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			const CMotionTransform  &);  // 33
	VectorAligned::operator=(
			const VectorAligned& src);  // 33
	VectorAligned::operator=(
			const VectorAligned& src);  // 33
	CFootprint::operator=(
			const CFootprint  &);  // 1182
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	Vector::operator=(
			const Vector& vOther);  // 17
	CMotionTransform::operator=(
			const CMotionTransform  &);  // 33
	VectorAligned::operator=(
			const VectorAligned& src);  // 33
	VectorAligned::operator=(
			const VectorAligned& src);  // 33
	CFootprint::operator=(
			const CFootprint  &);  // 1183
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
			const Vector& src);  // 1184
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
			const Vector& src);  // 1185
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1223
	Vector::operator=(
			const Vector& vOther);  // 12
	Vector::operator=(
			const Vector& vOther);  // 11
	Vector::operator=(
			const Vector& vOther);  // 13
	GenericCriticallyDampedType<Vector>::SnapTo(
		const Vector& kNewPosition);  // 1223
	GenericCriticallyDampedType<float>::SnapTo(
		const float& kNewPosition);  // 1224
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 1224
	CFootLockUpdateNode::SnapDampedPredictions(
				FootInstanceSettings& footInstance);  // 1188
	{
	}
	CRelativeOffset<FootFixedSettings>::IsValid(); // 35
	CRelativeOffset<FootFixedSettings>::Get(); // 97
	CRelativeArray<FootFixedSettings>::operator[](
			int index);  // 1205
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 1205
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			const CMotionTransform  &);  // 33
	VectorAligned::operator=(
			const VectorAligned& src);  // 33
	VectorAligned::operator=(
			const VectorAligned& src);  // 33
	CFootprint::operator=(
			const CFootprint  &);  // 1209
	Vector::operator=(
			const Vector& vOther);  // 188
	CFootTrajectory::operator=(
			const CFootTrajectory  &);  // 1211
} /* size: 0, variables: 11, inline expansions: 98 (3092 bytes) */

// <01876E5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1221
// function calls: 19
void CFootLockUpdateNode::SnapDampedPredictions(FootInstanceSettings& footInstance)
{
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
	VectorAligned::operator Vector(); // 1223
	Vector::operator=(
			const Vector& vOther);  // 11
	Vector::operator=(
			const Vector& vOther);  // 12
	Vector::operator=(
			const Vector& vOther);  // 13
	GenericCriticallyDampedType<Vector>::SnapTo(
		const Vector& kNewPosition);  // 1223
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 1224
	GenericCriticallyDampedType<float>::SnapTo(
		const float& kNewPosition);  // 1224
} /* size: 0, inline expansions: 19 (0 bytes) */

// <01804035> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1221
void CFootLockUpdateNode::SnapDampedPredictions(FootInstanceSettings& footInstance)
{
} /* size: 0 */

// <01802683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1228
// variables: 16
// function calls: 93
void CFootLockUpdateNode::ResetFoot(CAnimGraphUpdateContext& context, int footIndex, CMotionTransform& newRootTransform, const CFootMotionStatus& footMotion)
{
	CFootLockUpdateNodeInstanceData* pInstData; // 1230
	FootLockPoseOpInstanceSettings* pOpInstData; // 1231
	FootInstanceSettings& footInstance; // 1233
	FootOpTarget& footTargetInfo; // 1234
	const FootFixedSettings& footFixedSettings; // 1235
	VectorAligned vPrevStancePosWS; // 1237
	VectorAligned vNextStancePosWS; // 1238
	VectorAligned vFootPosWS; // 1241
	float flFootDirMS; // 1247
	CFootprint parkedFootprint; // 1249
	{
		VectorAligned vFootBaseDirWS; // 1277
		VectorAligned::operator=(
				const VectorAligned& src);  // 1279
		VectorAligned::operator=(
				const VectorAligned& src);  // 1280
		VectorAligned::operator=(
				const VectorAligned& src);  // 1281
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 1230
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 77
	CAnimGraphInstanceData::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 1231
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
	CRelativeOffset<FootInstanceSettings>::Get(); // 90
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 1233
	{
	}
	CRelativeOffset<FootOpTarget>::IsValid(); // 30
	CRelativeOffset<FootOpTarget>::Get(); // 90
	CRelativeArray<FootOpTarget>::operator[](
			int index);  // 1234
	{
	}
	CRelativeOffset<FootFixedSettings>::IsValid(); // 35
	CRelativeOffset<FootFixedSettings>::Get(); // 97
	CRelativeArray<FootFixedSettings>::operator[](
			int index);  // 1235
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
			const Vector& rhs);  // 1237
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
			const Vector& rhs);  // 1238
	{
		fltx4 retVal; // 1460
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1461
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1463
	}
	SetZSIMD<>(fltx4 a,
			float f);  // 80
	VectorAligned::SetZ(
		vec_t value);  // 1245
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 1247
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 66
	CFootprint::CFootprint(); // 1249
	CFootprint::NormalizeEntityTransform(); // 1251
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 112
	{
	}
	CFootprint::SetDirectionMS(
			float flDir);  // 1254
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 217
	FootFixedSettings::TraceFootPrint(
			CFootprint& footPrint,
			const CAnimGraphUpdateContext& context,
			bool bRotateStartingPos,
			bool bForce);  // 1256
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			const CMotionTransform  &);  // 33
	VectorAligned::operator=(
			const VectorAligned& src);  // 33
	VectorAligned::operator=(
			const VectorAligned& src);  // 33
	CFootprint::operator=(
			const CFootprint  &);  // 1258
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	Vector::operator=(
			const Vector& vOther);  // 17
	CMotionTransform::operator=(
			const CMotionTransform  &);  // 33
	VectorAligned::operator=(
			const VectorAligned& src);  // 33
	VectorAligned::operator=(
			const VectorAligned& src);  // 33
	CFootprint::operator=(
			const CFootprint  &);  // 1259
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
			const Vector& src);  // 1260
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
			const Vector& src);  // 1261
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1223
	Vector::operator=(
			const Vector& vOther);  // 12
	Vector::operator=(
			const Vector& vOther);  // 11
	Vector::operator=(
			const Vector& vOther);  // 13
	GenericCriticallyDampedType<Vector>::SnapTo(
		const Vector& kNewPosition);  // 1223
	GenericCriticallyDampedType<float>::SnapTo(
		const float& kNewPosition);  // 1224
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 1224
	CFootLockUpdateNode::SnapDampedPredictions(
				FootInstanceSettings& footInstance);  // 1264
	VectorAligned::operator=(
			const VectorAligned& src);  // 1266
	Vector::operator=(
			const Vector& vOther);  // 188
	CFootTrajectory::operator=(
			const CFootTrajectory  &);  // 1270
	{
	}
	CRelativeOffset<FootFixedSettings>::IsValid(); // 35
	CRelativeOffset<FootFixedSettings>::Get(); // 97
	CRelativeArray<FootFixedSettings>::operator[](
			int index);  // 1273
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 1273
} /* size: 0, variables: 10, inline expansions: 84 (2990 bytes) */

// <017FCCA0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1288
// variables: 114
// function calls: 350
void CFootLockUpdateNode::ResetToNewProgression(CAnimGraphUpdateContext& context, int footIndex, CMotionTransform& newRootTransform, const CFootMotionStatus& footMotion)
{
	CFootLockUpdateNodeInstanceData* pInstData; // 1290
	FootLockPoseOpInstanceSettings* pOpInstData; // 1291
	FootInstanceSettings& footInstance; // 1293
	FootOpTarget& footTargetInfo; // 1294
	VectorAligned vLastFootPositionWS; // 1297
	CFootTrajectory estimatedTrajectory; // 1299
	float flNewProgression; // 1301
	float flEstimatedProgression; // 1302
	float flAtEndProgression; // 1330
	bool bNewAtEnd; // 1331
	bool bNewAtStartOrEnd; // 1332
	bool bOldAtStartOrEnd; // 1333
	{
		VectorAligned vNextPos; // 1310
		VectorAligned vPrevPos; // 1311
		VectorAligned vFootPosA; // 1313
		VectorAligned vFootPosB; // 1315
		VectorAligned vFootMotionSinceLastFrame; // 1317
		VectorAligned::operator fltx4(); // 256
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
				const VectorAligned& v);  // 1317
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
				const VectorAligned& v);  // 1319
		VectorAligned::operator=(
				const VectorAligned& src);  // 1319
	}
	{
		CFootprint parkedFootprint; // 1339
		const float  flLastFootHeadingWS; // 1343
		float flFootHeadingMS; // 1344
		VectorAligned vNewFootPos; // 1349
		const VectorAligned  vPrevPos; // 1351
		const VectorAligned  vNextPos; // 1352
		{
			VectorAligned vPrevToNext; // 1355
			float flStrideLength; // 1356
			VectorAligned vPrevToFootPos; // 1359
			float dp; // 1360
			float flLerpValue; // 1362
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
					const VectorAligned& v);  // 1355
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 330
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
					const fltx4& b);  // 338
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 339
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 341
			{
				fltx4 retVal; // 1662
				_mm_div_ps(__m128 __A,
						__m128 __B);  // 1663
			}
			DivSIMD<>(const fltx4& a,
					const fltx4& b);  // 343
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
					const fltx4& b);  // 343
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 345
			VectorAligned::NormalizeInPlaceSafe(
						const VectorAligned& vFallback);  // 330
			VectorAligned::NormalizeInPlace(); // 1356
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
					const VectorAligned& v);  // 1359
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
					const VectorAligned& rhs);  // 1360
			Lerp<float>(float flPercent,
					const float& A,
					const float& B);  // 1364
			{
				fltx4 retVal; // 1460
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1461
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1463
			}
			SetZSIMD<>(fltx4 a,
					float f);  // 80
			VectorAligned::SetZ(
				vec_t value);  // 1364
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
				const CMotionTransform  &);  // 66
		CFootprint::CFootprint(); // 1339
		CFootprint::NormalizeEntityTransform(); // 1341
		CRotation::operator float(); // 1344
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 112
		{
		}
		CFootprint::SetDirectionMS(
				float flDir);  // 1345
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
		VectorAligned::operator Vector(); // 1353
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		VectorAligned::x(); // 40
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		VectorAligned::y(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 1353
		CloseEnough(const Vector& a,
				const Vector& b,
				float epsilon);  // 1353
		{
			fltx4 retVal; // 1460
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1461
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 1463
		}
		SetZSIMD<>(fltx4 a,
				float f);  // 80
		VectorAligned::SetZ(
			vec_t value);  // 1368
		{
		}
		CRelativeOffset<FootFixedSettings>::IsValid(); // 35
		CRelativeOffset<FootFixedSettings>::Get(); // 97
		CRelativeArray<FootFixedSettings>::operator[](
				int index);  // 1375
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 217
		FootFixedSettings::TraceFootPrint(
				CFootprint& footPrint,
				const CAnimGraphUpdateContext& context,
				bool bRotateStartingPos,
				bool bForce);  // 1375
		Vector::operator=(
				const Vector& vOther);  // 17
		{
		}
		CRotation::operator=(
				const CRotation& rot);  // 17
		CMotionTransform::operator=(
				const CMotionTransform  &);  // 33
		VectorAligned::operator=(
				const VectorAligned& src);  // 33
		VectorAligned::operator=(
				const VectorAligned& src);  // 33
		CFootprint::operator=(
				const CFootprint  &);  // 1377
		{
		}
		CRotation::operator=(
				const CRotation& rot);  // 17
		Vector::operator=(
				const Vector& vOther);  // 17
		CMotionTransform::operator=(
				const CMotionTransform  &);  // 33
		VectorAligned::operator=(
				const VectorAligned& src);  // 33
		VectorAligned::operator=(
				const VectorAligned& src);  // 33
		CFootprint::operator=(
				const CFootprint  &);  // 1378
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
				const Vector& src);  // 1379
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
				const Vector& src);  // 1380
		{
		}
		CRelativeOffset<FootFixedSettings>::IsValid(); // 35
		CRelativeOffset<FootFixedSettings>::Get(); // 97
		CRelativeArray<FootFixedSettings>::operator[](
				int index);  // 1389
		Vector::operator=(
				const Vector& vOther);  // 17
		{
		}
		CRotation::operator=(
				const CRotation& rot);  // 17
		CMotionTransform::operator=(
				CMotionTransform &);  // 1389
	}
	{
		float flEstimatedFootDirWS; // 1398
		VectorAligned vNextPosOld; // 1400
		VectorAligned vPrevPosOld; // 1401
		VectorAligned vNextPosNew; // 1403
		VectorAligned vFootProjectedPos; // 1406
		VectorAligned vPrevPosNew; // 1420
		{
			VectorAligned vPrevToNext; // 1408
			VectorAligned vPrevToNextNorm; // 1409
			VectorAligned vPrevToFootPos; // 1412
			float dp; // 1413
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
					const VectorAligned& v);  // 1408
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
			VectorAligned::Normalized(); // 1409
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
					const VectorAligned& v);  // 1412
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
			VectorAligned::Dot(
				const VectorAligned& v);  // 416
			DotProduct(const VectorAligned& lhs,
					const VectorAligned& rhs);  // 1413
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
					vec_t s);  // 1414
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
					const VectorAligned& v);  // 1414
		}
		{
			VectorAligned vToNewPos; // 1424
			float flLength; // 1425
			float flAnimStrideLength; // 1426
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
					const VectorAligned& v);  // 1424
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 1426
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 330
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
					const fltx4& b);  // 338
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 339
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 341
			{
				fltx4 retVal; // 1662
				_mm_div_ps(__m128 __A,
						__m128 __B);  // 1663
			}
			DivSIMD<>(const fltx4& a,
					const fltx4& b);  // 343
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
					const fltx4& b);  // 343
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 345
			VectorAligned::NormalizeInPlaceSafe(
						const VectorAligned& vFallback);  // 330
			VectorAligned::NormalizeInPlace(); // 1425
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
					vec_t s);  // 1429
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
					const VectorAligned& v);  // 1429
			VectorAligned::operator=(
					const VectorAligned& src);  // 1429
		}
		{
			CRotation newNextRotationWS; // 1438
			CRotation newPrevRotationWS; // 1439
			CRotation newPrevRotationMS; // 1441
			CFootprint::GetDirectionMS(); // 1438
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 202
			{
			}
			{
			}
			{
			}
			CRotation::CRotation(
					angle_t angleDegrees);  // 23
			CRotation::CRotation(
					angle_t angleDegrees);  // 203
			CRotation::operator+(
					angle_t s);  // 1438
			CRotation::operator float(); // 1439
			{
			}
			{
			}
			CRotation::CRotation(
					angle_t angleDegrees);  // 23
			CRotation::CRotation(
					angle_t angleDegrees);  // 1439
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 209
			{
			}
			{
			}
			{
			}
			CRotation::CRotation(
					angle_t angleDegrees);  // 23
			CRotation::CRotation(
					angle_t angleDegrees);  // 210
			CRotation::operator-(
					angle_t s);  // 1441
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
					const CRotation& rot);  // 1441
			CRotation::operator float(); // 1442
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 112
			{
			}
			CFootprint::SetDirectionMS(
					float flDir);  // 1442
		}
		VectorAligned::VectorAligned(); // 1406
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
				vec_t s);  // 427
		operator*(float fl,
				const VectorAligned& v);  // 1420
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
				const VectorAligned& v);  // 1420
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 274
		{
			fltx4 retVal; // 1662
			_mm_div_ps(__m128 __A,
					__m128 __B);  // 1663
		}
		DivSIMD<>(const fltx4& a,
				const fltx4& b);  // 274
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 274
		VectorAligned::operator/(
				vec_t s);  // 1420
		Vector::operator=(
				const Vector& vOther);  // 17
		{
		}
		CRotation::operator=(
				const CRotation& rot);  // 17
		CMotionTransform::operator=(
				const CMotionTransform  &);  // 33
		VectorAligned::operator=(
				const VectorAligned& src);  // 33
		VectorAligned::operator=(
				const VectorAligned& src);  // 33
		CFootprint::operator=(
				const CFootprint  &);  // 1445
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
				const Vector& src);  // 1446
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
				const Vector& src);  // 1447
		{
		}
		CRelativeOffset<FootFixedSettings>::IsValid(); // 35
		CRelativeOffset<FootFixedSettings>::Get(); // 97
		CRelativeArray<FootFixedSettings>::operator[](
				int index);  // 1453
		Vector::operator=(
				const Vector& vOther);  // 17
		{
		}
		CRotation::operator=(
				const CRotation& rot);  // 17
		CMotionTransform::operator=(
				CMotionTransform &);  // 1453
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 1290
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 77
	CAnimGraphInstanceData::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 1291
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
	CRelativeOffset<FootInstanceSettings>::Get(); // 90
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 1293
	{
	}
	CRelativeOffset<FootOpTarget>::IsValid(); // 30
	CRelativeOffset<FootOpTarget>::Get(); // 90
	CRelativeArray<FootOpTarget>::operator[](
			int index);  // 1294
	VectorAligned::VectorAligned(); // 1297
	VectorAligned::operator=(
			const VectorAligned& src);  // 1323
	CloseEnough(float a,
			float b,
			float epsilon);  // 1331
	CloseEnough(float a,
			float b,
			float epsilon);  // 1332
	CloseEnough(float a,
			float b,
			float epsilon);  // 1333
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
	VectorAligned::operator Vector(); // 1223
	Vector::operator=(
			const Vector& vOther);  // 11
	Vector::operator=(
			const Vector& vOther);  // 12
	Vector::operator=(
			const Vector& vOther);  // 13
	GenericCriticallyDampedType<Vector>::SnapTo(
		const Vector& kNewPosition);  // 1223
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 1224
	GenericCriticallyDampedType<float>::SnapTo(
		const float& kNewPosition);  // 1224
	CFootLockUpdateNode::SnapDampedPredictions(
				FootInstanceSettings& footInstance);  // 1456
	CloseEnough(float a,
			float b,
			float epsilon);  // 1333
} /* size: 0, variables: 12, inline expansions: 42 (1036 bytes) */

// <018771A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1460
void CFootLockUpdateNode::ModulateStepHeight(CFootTrajectory& trajectory, float flStrideLength, float flOriginalStrideLength)
{
} /* size: 0 */

// <018662E3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1460
// variables: 4
// function call: 1
void CFootLockUpdateNode::ModulateStepHeight(CFootTrajectory& trajectory, float flStrideLength, float flOriginalStrideLength)
{
	{
		float flStrideLengthRatio; // 1466
		{
			float flScale; // 1472
			Vector vOffset; // 1474
			Vector::operator*=(
					float fl);  // 1475
		}
		{
			Vector vOffset; // 1481
		}
	}
} /* size: 262 */

// <017FCC21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1460
// variables: 4
void CFootLockUpdateNode::ModulateStepHeight(CFootTrajectory& trajectory, float flStrideLength, float flOriginalStrideLength)
{
	{
		float flStrideLengthRatio; // 1466
		{
			float flScale; // 1472
			Vector vOffset; // 1474
		}
		{
			Vector vOffset; // 1481
		}
	}
} /* size: 0 */

// <017FA957> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1490
// variables: 63
// function calls: 148
void CFootLockUpdateNode::CalcStrideCurveOffset(const VectorAligned& vFootBasePosWS, const FootInstanceSettings& footInstance, const CFootTrajectory& trajectory, const CMotionTransform& newRootTransform, const VectorAligned& vStrideVectorWS)
{
	VectorAligned vStrideVectorWSNorm; // 1496
	float flStrideLength; // 1497
	const VectorAligned  vStancePosMS; // 1499
	const VectorAligned  vStancePosWS; // 1500
	VectorAligned vStancePosOffset; // 1503
	VectorAligned vFootBasePosOffset; // 1511
	VectorAligned vArcOffset; // 1518
	float flProgressionArcWeight; // 1523
	VectorAligned vArcAdjustWS; // 1525
	{
		VectorAligned vToStancePos; // 1505
		VectorAligned vProjectedStancePos; // 1506
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
		VectorAligned::Dot(
			const VectorAligned& v);  // 416
		DotProduct(const VectorAligned& lhs,
				const VectorAligned& rhs);  // 1506
		VectorAligned::operator fltx4(); // 256
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
				const VectorAligned& v);  // 1505
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
				vec_t s);  // 1506
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
				const VectorAligned& v);  // 1506
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
				const VectorAligned& v);  // 1507
	}
	{
		VectorAligned vToFootBasePos; // 1513
		VectorAligned vProjectedFootBasePos; // 1514
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
				const VectorAligned& v);  // 1513
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
		VectorAligned::Dot(
			const VectorAligned& v);  // 416
		DotProduct(const VectorAligned& lhs,
				const VectorAligned& rhs);  // 1514
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
				vec_t s);  // 1514
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
				const VectorAligned& v);  // 1514
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
				const VectorAligned& v);  // 1515
	}
	{
		float flMaxArcAdjustLength; // 1531
		float flCurrentArcAdjustLength; // 1532
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
				const fltx4& b);  // 298
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 299
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 300
		VectorAligned::Length(); // 1532
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
				vec_t s);  // 1536
	}
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 330
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
			const fltx4& b);  // 338
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 339
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 341
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 343
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
			const fltx4& b);  // 343
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 345
	VectorAligned::NormalizeInPlaceSafe(
				const VectorAligned& vFallback);  // 330
	VectorAligned::NormalizeInPlace(); // 1497
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1500
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
			const Vector& rhs);  // 1500
	VectorAligned::VectorAligned(); // 1503
	VectorAligned::VectorAligned(); // 1511
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
			const VectorAligned& v);  // 1518
	{
		fltx4 retVal; // 1460
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1461
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1463
	}
	SetZSIMD<>(fltx4 a,
			float f);  // 80
	VectorAligned::SetZ(
		vec_t value);  // 1521
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
			vec_t s);  // 1525
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
			vec_t s);  // 1540
} /* size: 446, variables: 9, inline expansions: 42 (434 bytes) */

// <017FA19C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1544
// variables: 5
// function calls: 24
void CFootLockUpdateNode::CalcInterpolatedFootDirectionWS(const CAnimGraphUpdateContext& context, int nFootIndex, const CFootTrajectory& trajectory)
{
	const FootInstanceSettings& footInstance; // 1546
	float flPrevRelativeFootDirWS; // 1549
	float flNextRelativeFootDirWS; // 1550
	float flLerpFootDirWS; // 1552
	const float  flBlendCycle; // 1558
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 60
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 1546
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 35
	CRelativeOffset<FootInstanceSettings>::Get(); // 97
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 1546
	CFootprint::GetDirectionMS(); // 1549
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 202
	{
	}
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 203
	CRotation::operator+(
			angle_t s);  // 1549
	CRotation::operator float(); // 1549
	CFootprint::GetDirectionMS(); // 1550
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 202
	{
	}
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 203
	CRotation::operator+(
			angle_t s);  // 1550
	CRotation::operator float(); // 1550
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 1552
	Lerp<float>(float flPercent,
			const float& A,
			const float& B);  // 1561
} /* size: 0, variables: 5, inline expansions: 24 (642 bytes) */

// <017F8A3C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1568
// variables: 37
// function calls: 86
void CFootLockUpdateNode::CalcFootBaseFromOrientationWS(const CAnimGraphUpdateContext& context, int nFootIndex, const CFootTrajectory& trajectory, const CMotionTransform& localToWorldXform)
{
	const FootInstanceSettings& footInstance; // 1570
	const FootFixedSettings& footSettings; // 1571
	CRotation flFootBaseHeadingWS; // 1573
	VectorAligned vFootBaseDirection; // 1594
	VectorAligned vGroundNormalWS; // 1596
	VectorAligned vLeft; // 1599
	VectorAligned vAdjustedFootBaseDirection; // 1600
	{
		float flFootDirOffsetMS; // 1578
		float flDelta; // 1580
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
				const CRotation& rot);  // 1578
		CRotation::operator float(); // 1578
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 145
		{
		}
		CRotation::operator+=(
				angle_t s);  // 1591
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 1570
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 35
	CRelativeOffset<FootInstanceSettings>::Get(); // 97
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 1570
	{
	}
	CRelativeOffset<FootFixedSettings>::IsValid(); // 35
	CRelativeOffset<FootFixedSettings>::Get(); // 97
	CRelativeArray<FootFixedSettings>::operator[](
			int index);  // 1571
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 1573
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 1594
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
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
				const fltx4& v2);  // 386
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 386
	VectorAligned::Cross(
		const VectorAligned& v);  // 422
	CrossProduct(const VectorAligned& lhs,
			const VectorAligned& rhs);  // 1599
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
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
				const fltx4& v2);  // 386
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 386
	VectorAligned::Cross(
		const VectorAligned& v);  // 422
	CrossProduct(const VectorAligned& lhs,
			const VectorAligned& rhs);  // 1600
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
	VectorAligned::Normalized(); // 1602
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
			vec_t s);  // 1602
} /* size: 0, variables: 7, inline expansions: 44 (933 bytes) */

// <017F6F18> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1606
// variables: 64
// function calls: 107
void CFootLockUpdateNode::CalcFootBaseNormalWS(const CAnimGraphUpdateContext& context, const FootInstanceSettings& footInstance, const CFootTrajectory& trajectory)
{
	QuaternionAligned qNormalRot; // 1610
	QuaternionAligned qNormalInterpRot; // 1611
	VectorAligned vGroundNormal; // 1612
	CFootprint::GetNormalWS(); // 1610
	CFootprint::GetNormalWS(); // 1610
	QuaternionAligned::operator fltx4(); // 545
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 464
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 465
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
			const fltx4& b);  // 466
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
			const fltx4& b);  // 467
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 468
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 1797
	NegSIMD<>(const fltx4& a); // 469
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
			const fltx4& b);  // 469
	QuaternionAlignSIMD<>(const fltx4& p,
				const fltx4& q);  // 527
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 505
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 505
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 505
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 505
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 505
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
			const fltx4& b);  // 486
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 487
	{
		fltx4 fl4Q; // 509
		fltx4 fl4PScale; // 514
		fltx4 fl4QScale; // 515
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 516
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 516
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 516
	}
	QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
					const fltx4& q,
					float t);  // 479
	QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
					const fltx4& q,
					float t);  // 528
	QuaternionSlerpSIMD<>(const fltx4& p,
				const fltx4& q,
				float t);  // 545
	QuaternionAligned::operator fltx4(); // 545
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 545
	QuaternionSlerp(const QuaternionAligned& qFrom,
			const QuaternionAligned& qTo,
			float t);  // 1611
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
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
			const VectorAligned& v);  // 1612
} /* size: 616, variables: 3, inline expansions: 39 (1814 bytes) */

// <0187722E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1618
void CFootLockUpdateNode::IsNewCycleStart(const FootInstanceSettings& footState, const CFootMotionStatus& footMotion)
{
} /* size: 0 */

// <01878A0A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1626
void CFootLockUpdateNode::UpdateHipShift(CAnimGraphUpdateContext& context, const CStrideStatus& footMotionList, const CMotionTransform& newRootTransform)
{
} /* size: 0 */

// <01877430> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1626
// variables: 22
// function calls: 76
void CFootLockUpdateNode::UpdateHipShift(CAnimGraphUpdateContext& context, const CStrideStatus& footMotionList, const CMotionTransform& newRootTransform)
{
	{
		const FootLockPoseOpFixedSettings* pPoseOpFixedData; // 1630
		FootLockPoseOpInstanceSettings* pPoseOpInstanceData; // 1631
		CFootLockUpdateNodeInstanceData* pUpdateNodeInstanceData; // 1632
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<FootLockPoseOpFixedSettings>(
							const CPackedHandle<FootLockPoseOpFixedSettings>& handle);  // 33
		CAnimGraphFixedData::operator[]<FootLockPoseOpFixedSettings>(
							const CPackedHandle<FootLockPoseOpFixedSettings>& handle);  // 1630
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<FootLockPoseOpInstanceSettings>(
								const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 77
		CAnimGraphInstanceData::operator[]<FootLockPoseOpInstanceSettings>(
								const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<FootLockPoseOpInstanceSettings>(
								const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 1631
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
								const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
								const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
								const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 1632
		{
			VectorAligned vOffsetWS; // 1637
			int nActiveFeet; // 1638
			{
				int iFoot; // 1640
				CRelativeArray<FootOpFixedInfo>::Count(); // 1640
				{
					const int  nFootIndex; // 1642
					CRelativeOffset<FootFixedSettings>::IsValid(); // 35
					CRelativeOffset<FootFixedSettings>::Get(); // 97
					{
					}
					CRelativeArray<FootFixedSettings>::operator[](
							int index);  // 1642
					{
						const CFootMotionStatus& footMotion; // 1645
						FootInstanceSettings& footInstance; // 1646
						{
						}
						CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
						CRelativeOffset<FootInstanceSettings>::Get(); // 90
						CRelativeArray<FootInstanceSettings>::operator[](
								int index);  // 1646
						{
							CFootprint nextFootprintSaved; // 1653
							CFootprint prevFootprintSaved; // 1654
							const VectorAligned  vFootBasePosWS_Unmodified; // 1667
							const VectorAligned  vFootBasePosWS; // 1670
							{
							}
							{
							}
							CRotation::CRotation(
									const CRotation& rot);  // 22
							CRotation::CRotation(
									const CRotation& rot);  // 17
							CMotionTransform::CMotionTransform(
									const CMotionTransform  &);  // 33
							CFootprint::CFootprint(
									const CFootprint  &);  // 1653
							{
							}
							{
							}
							CRotation::CRotation(
									const CRotation& rot);  // 22
							CRotation::CRotation(
									const CRotation& rot);  // 17
							CMotionTransform::CMotionTransform(
									const CMotionTransform  &);  // 33
							CFootprint::CFootprint(
									const CFootprint  &);  // 1654
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
									const Vector& rhs);  // 1658
							{
							}
							CRelativeOffset<FootOpTarget>::IsValid(); // 30
							CRelativeOffset<FootOpTarget>::Get(); // 90
							CRelativeArray<FootOpTarget>::operator[](
									int index);  // 1670
							{
							}
							CRotation::operator=(
									const CRotation& rot);  // 17
							Vector::operator=(
									const Vector& vOther);  // 17
							CMotionTransform::operator=(
									const CMotionTransform  &);  // 33
							VectorAligned::operator=(
									const VectorAligned& src);  // 33
							VectorAligned::operator=(
									const VectorAligned& src);  // 33
							CFootprint::operator=(
									const CFootprint  &);  // 1674
							VectorAligned::operator fltx4(); // 256
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
									const VectorAligned& v);  // 1671
							{
								fltx4 retVal; // 1593
								_mm_add_ps(__m128 __A,
										__m128 __B);  // 1594
							}
							AddSIMD<>(const fltx4& a,
									const fltx4& b);  // 208
							VectorAligned::operator+=(
									const VectorAligned& v);  // 1671
							{
							}
							CRotation::operator=(
									const CRotation& rot);  // 17
							Vector::operator=(
									const Vector& vOther);  // 17
							CMotionTransform::operator=(
									const CMotionTransform  &);  // 33
							VectorAligned::operator=(
									const VectorAligned& src);  // 33
							VectorAligned::operator=(
									const VectorAligned& src);  // 33
							CFootprint::operator=(
									const CFootprint  &);  // 1675
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
									const Vector& rhs);  // 1663
						}
					}
				}
			}
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 243
			{
				fltx4 retVal; // 1662
				_mm_div_ps(__m128 __A,
						__m128 __B);  // 1663
			}
			DivSIMD<>(const fltx4& a,
					const fltx4& b);  // 243
			VectorAligned::operator/=(
					vec_t s);  // 1684
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
					vec_t s);  // 1685
			{
				fltx4 retVal; // 1460
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1461
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1463
			}
			SetZSIMD<>(fltx4 a,
					float f);  // 80
			VectorAligned::SetZ(
				vec_t value);  // 1686
			VectorAligned::operator=(
					const VectorAligned& src);  // 1688
			VectorAligned::operator=(
					const VectorAligned& src);  // 1692
		}
		VectorAligned::operator=(
				const VectorAligned& src);  // 1699
	}
} /* size: 0 */

// <017F6DAD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1626
// variables: 13
void CFootLockUpdateNode::UpdateHipShift(CAnimGraphUpdateContext& context, const CStrideStatus& footMotionList, const CMotionTransform& newRootTransform)
{
	{
		const FootLockPoseOpFixedSettings* pPoseOpFixedData; // 1630
		FootLockPoseOpInstanceSettings* pPoseOpInstanceData; // 1631
		CFootLockUpdateNodeInstanceData* pUpdateNodeInstanceData; // 1632
		{
			VectorAligned vOffsetWS; // 1637
			int nActiveFeet; // 1638
			{
				int iFoot; // 1640
				{
					const int  nFootIndex; // 1642
					{
						const CFootMotionStatus& footMotion; // 1645
						FootInstanceSettings& footInstance; // 1646
						{
							CFootprint nextFootprintSaved; // 1653
							CFootprint prevFootprintSaved; // 1654
							const VectorAligned  vFootBasePosWS_Unmodified; // 1667
							const VectorAligned  vFootBasePosWS; // 1670
						}
					}
				}
			}
		}
	}
} /* size: 0 */

// <017F649F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1704
// variables: 7
// function calls: 26
void CFootLockUpdateNode::CalculateBlendOffsets(CAnimGraphUpdateContext& context, int nFootIndex, const VectorAligned& vLastFootPositionWS, float flLastFootDirWS, const CMotionTransform& newRootTransform, const CFootTrajectory& trajectory)
{
	FootInstanceSettings& footInstance; // 1706
	VectorAligned vNewFootBasePosWS; // 1711
	CRotation flNewFootDirWS; // 1715
	CRotation flLocalToWorldOffset; // 1719
	float flLastFootDirMS; // 1721
	float flNewFootDirMS; // 1722
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 1706
	{
	}
	CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
	CRelativeOffset<FootInstanceSettings>::Get(); // 90
	CRelativeArray<FootInstanceSettings>::operator[](
			int index);  // 1706
	VectorAligned::operator=(
			const VectorAligned& src);  // 1709
	{
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 1715
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 1719
	CRotation::operator float(); // 1721
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
			const CRotation& rot);  // 1722
	CRotation::operator float(); // 1722
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
			const VectorAligned& v);  // 1725
	VectorAligned::operator=(
			const VectorAligned& src);  // 1725
} /* size: 0, variables: 6, inline expansions: 25 (775 bytes) */

// <017F610E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockupdatenode.cpp:1735
// variables: 4
// function calls: 11
void CFootLockUpdateNode::UpdateRootDamping(CAnimGraphUpdateContext& context, const CMotionTransform& newRootTransform)
{
	FootLockPoseOpInstanceSettings* pPoseOpInstanceData; // 1737
	{
		CFootLockUpdateNodeInstanceData* pInstData; // 1741
		const float  flTargetHeight; // 1744
		float diff; // 1748
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
								const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CFootLockUpdateNodeInstanceData>(
								const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CFootLockUpdateNodeInstanceData>(
								const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 1741
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1748
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 77
	CAnimGraphInstanceData::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 1737
} /* size: 280, variables: 1, inline expansions: 5 (77 bytes) */

