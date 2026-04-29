
//
// ik/ikrulecontext_debug.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//

// <01BB0B96> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_debug.cpp:24
// variables: 6
// function calls: 7
void ConCmdIKMoveDebugTarget(const CCommandContext& ctx, const CCommand& args)
{
	const char* pX; // 32
	const char* pY; // 33
	const char* pZ; // 34
	float flX; // 36
	float flY; // 37
	float flZ; // 38
	CCommand::ArgC(); // 26
	CCommand::Arg(
		int nIndex);  // 32
	CCommand::Arg(
		int nIndex);  // 33
	CCommand::Arg(
		int nIndex);  // 34
	ConVar::GetFloat(); // 40
	ConVar::GetFloat(); // 41
	ConVar::GetFloat(); // 42
} /* size: 0, variables: 6, inline expansions: 7 (0 bytes) */

// <01BB0AE0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_debug.cpp:45
// function calls: 3
void CIKRuleContext_Debug::CIKRuleContext_Debug()
{
	IIKRuleContext::IIKRuleContext(); // 6
	CIKRuleContext_Base::CIKRuleContext_Base(); // 45
	CUtlSymbolLarge::CUtlSymbolLarge(); // 45
} /* size: 23, inline expansions: 3 (8 bytes) */

// <01BB0AC7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_debug.cpp:45
void CIKRuleContext_Debug::CIKRuleContext_Debug()
{
} /* size: 0 */

// <01BAE25A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_debug.cpp:49
// variables: 66
// function calls: 184
void CIKRuleContext_Debug::CalculateTargetTransform(const CIKRuleContextCalculateTargetInput& ruleInput)
{
	CTransform xWsTarget; // 51
	const int  nSpinAxis; // 52
	{
		const Vector  vWs; // 57
		const Quaternion& qWs; // 58
		ConVar::GetFloat(); // 57
		ConVar::GetFloat(); // 57
		ConVar::GetFloat(); // 57
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 57
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
				const Vector& rhs);  // 57
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
				const VectorAligned& v);  // 57
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 57
		Quaternion::Quaternion(
				vec_t ix,
				vec_t iy,
				vec_t iz,
				vec_t iw);  // 41
		QuaternionAligned::operator Quaternion(); // 58
		VectorAligned::operator=(
				fltx4 src);  // 111
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 329
		CTransform::InitFromQuaternion(
					const Quaternion& orientation,
					const Vector& vPosition,
					float flScale);  // 59
	}
	{
		const CTransform& mModelToWorld; // 64
		const Vector  vWsSpinAxis; // 65
		Vector vWs; // 67
		const Quaternion  qRotation; // 69
		const Vector  vOffset; // 71
		const Quaternion& qWs; // 75
		CSpaceAgnosticBoneAccessor::GetModelToWorld(); // 64
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
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 435
		QuaternionAligned::GetForward(); // 391
		CTransform::GetForward(); // 65
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
				const VectorAligned& v);  // 447
		QuaternionAligned::GetUp(); // 401
		CTransform::GetUp(); // 65
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
		VectorAligned::Normalized(); // 65
		ConVar::GetFloat(); // 69
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 65
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 67
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
		VectorAligned::operator Vector(); // 67
		ConVar::GetFloat(); // 71
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 2464
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1853
		Quaternion::v(); // 2464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2464
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 2464
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2464
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2464
		operator*(const Quaternion& q,
				const Vector& v);  // 71
		VectorAligned::operator=(
				fltx4 src);  // 111
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
				float p3);  // 111
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 329
		CTransform::InitFromQuaternion(
					const Quaternion& orientation,
					const Vector& vPosition,
					float flScale);  // 76
		ConVar::GetFloat(); // 73
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 71
		ConVar::GetFloat(); // 73
		ConVar::GetFloat(); // 73
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 73
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 73
		Vector::operator+=(
				const Vector& v);  // 73
		Quaternion::Quaternion(
				vec_t ix,
				vec_t iy,
				vec_t iz,
				vec_t iw);  // 41
		QuaternionAligned::operator Quaternion(); // 75
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
				const VectorAligned& v);  // 441
		QuaternionAligned::GetLeft(); // 396
		CTransform::GetLeft(); // 65
	}
	ConVar::GetInt(); // 52
} /* size: 913, variables: 2, inline expansions: 1 (10 bytes) */

