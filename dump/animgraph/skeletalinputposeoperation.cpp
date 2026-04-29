
//
// animgraph/skeletalinputposeoperation.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 18
//

// <0179AC38> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.cpp:18
void FingerSource_t::Init(const CFingerSource& fingerSettings)
{
} /* size: 0 */

// <0173F667> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.cpp:26
// function calls: 5
void FingerBone_t::Init(CAnimGraphInitContext& initContext, const CFingerBone& fingerBoneSettings)
{
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 28
	Vector::operator=(
			const Vector& vOther);  // 29
	Vector::operator=(
			const Vector& vOther);  // 30
	Vector::operator=(
			const Vector& vOther);  // 31
} /* size: 202, inline expansions: 5 (144 bytes) */

// <0173ED40> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.cpp:39
// variables: 4
// function calls: 34
void FingerChain_t::Init(CAnimGraphInitContext& initContext, const CFingerChain& fingerChainSettings)
{
	{
		int i; // 51
		CRelativeArray<FingerSource_t>::Count(); // 51
		CRelativeOffset<FingerSource_t>::IsValid(); // 30
		CRelativeOffset<FingerSource_t>::Get(); // 90
		CRelativeArray<FingerSource_t>::operator[](
				int index);  // 53
		CUtlMemory<CFingerSource, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFingerSource, CUtlMemory<CFingerSource, int> >::operator[](
				int i);  // 53
		FingerSource_t::Init(
			const CFingerSource& fingerSettings);  // 53
	}
	{
		int i; // 56
		CRelativeArray<FingerBone_t>::Count(); // 56
		CRelativeOffset<FingerBone_t>::IsValid(); // 30
		CRelativeOffset<FingerBone_t>::Get(); // 90
		CRelativeArray<FingerBone_t>::operator[](
				int index);  // 58
		CUtlMemory<CFingerBone, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFingerBone, CUtlMemory<CFingerBone, int> >::operator[](
				int i);  // 58
	}
	CUtlVectorBase<CFingerSource, CUtlMemory<CFingerSource, int> >::Count(); // 41
	CUtlVectorBase<CFingerSource, CUtlMemory<CFingerSource, int> >::Count(); // 41
	{
		uint32 i; // 160
		FingerSource_t::FingerSource_t(); // 162
	}
	CPackedDataT<false>::AddArray<FingerSource_t>(
				uint32 count,
				CPackedHandle<FingerSource_t>* handleOut);  // 41
	{
	}
	CRelativeOffset<FingerSource_t>::SetOffset(
			const FingerSource_t* targetPtr);  // 20
	CRelativeOffset<FingerSource_t>::operator=(
			const FingerSource_t* targetPtr);  // 115
	CRelativeArray<FingerSource_t>::SetArray(
		const FingerSource_t* targetArray,
		int32 count);  // 41
	CUtlVectorBase<CFingerBone, CUtlMemory<CFingerBone, int> >::Count(); // 42
	CUtlVectorBase<CFingerBone, CUtlMemory<CFingerBone, int> >::Count(); // 42
	{
		uint32 i; // 160
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 22
		FingerBone_t::FingerBone_t(); // 162
	}
	CPackedDataT<false>::AddArray<FingerBone_t>(
				uint32 count,
				CPackedHandle<FingerBone_t>* handleOut);  // 42
	{
	}
	CRelativeOffset<FingerBone_t>::SetOffset(
			const FingerBone_t* targetPtr);  // 20
	CRelativeOffset<FingerBone_t>::operator=(
			const FingerBone_t* targetPtr);  // 115
	CRelativeArray<FingerBone_t>::SetArray(
		const FingerBone_t* targetArray,
		int32 count);  // 42
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 45
	Vector::operator=(
			const Vector& vOther);  // 43
	Vector::operator=(
			const Vector& vOther);  // 44
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 46
} /* size: 0, inline expansions: 18 (642 bytes) */

// <0179AC6B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.cpp:63
// function calls: 4
void FingerChain_t::GetKnuckleBoneIndex()
{
	CRelativeArray<FingerBone_t>::Count(); // 65
	{
	}
	CRelativeOffset<FingerBone_t>::IsValid(); // 35
	CRelativeOffset<FingerBone_t>::Get(); // 97
	CRelativeArray<FingerBone_t>::operator[](
			int index);  // 65
} /* size: 0, inline expansions: 4 (115 bytes) */

// <0173ED24> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.cpp:63
void FingerChain_t::GetKnuckleBoneIndex()
{
} /* size: 0 */

// <0173EBFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.cpp:69
// variables: 3
// function calls: 4
void FingerChain_t::GetPrimaryInfluence()
{
	AnimVRFinger_t mainInfluence; // 71
	float flMaxWeight; // 73
	{
		int i; // 75
		CRelativeArray<FingerSource_t>::Count(); // 75
		CRelativeOffset<FingerSource_t>::IsValid(); // 35
		CRelativeOffset<FingerSource_t>::Get(); // 97
		CRelativeArray<FingerSource_t>::operator[](
				int index);  // 77
	}
} /* size: 197, variables: 2 */

// <0173BDAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.cpp:89
// variables: 84
// function calls: 192
void WristBone_t::Init(CAnimGraphInitContext& initContext, const CWristBone& wristBoneSettings, AnimVRHand_t eHand)
{
	const CModelSkeleton& modelSkeleton; // 91
	const int  nSrcKnuckleIndex1; // 95
	const int  nSrcKnuckleIndex2; // 96
	const CTransform  srcWristXformWS; // 98
	const CTransform  srcKnuckleXform1WS; // 100
	const CTransform  srcKnuckleXform2WS; // 101
	const VectorAligned  srcToKnuckle1WS; // 103
	const VectorAligned  srcToKnuckle2WS; // 104
	const VectorAligned  vSrcKnuckleCenter; // 106
	const VectorAligned  vSrcHandFwdNormalized; // 107
	const VectorAligned  vSrcHandUp; // 109
	CTransform dstWristXformMS; // 113
	VectorAligned vForwardRef; // 116
	QuaternionAligned rot; // 119
	VectorAligned vUpRef; // 124
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 93
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
			const VectorAligned& v);  // 103
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
			const VectorAligned& v);  // 104
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
			const VectorAligned& v);  // 106
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
			vec_t s);  // 106
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
			const VectorAligned& v);  // 107
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
	VectorAligned::Normalized(); // 107
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
				const fltx4& v2);  // 386
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 386
	VectorAligned::Cross(
		const VectorAligned& v);  // 422
	CrossProduct(const VectorAligned& lhs,
			const VectorAligned& rhs);  // 109
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 113
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
			const Vector& rhs);  // 84
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
				const int  __mask);  // 3347
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
			const VectorAligned& v);  // 430
	CTransform::RotateVector(
			const VectorAligned& v0);  // 84
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 84
	CTransform::RotateVector(
			const Vector& v0);  // 116
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 116
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 301
	QuaternionAligned::operator*=(
			const QuaternionAligned& q);  // 302
	QuaternionAligned::operator*(
			const QuaternionAligned& q);  // 121
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 124
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
			const VectorAligned& v);  // 430
	CTransform::RotateVector(
			const VectorAligned& v0);  // 84
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
			const Vector& rhs);  // 84
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 84
	CTransform::RotateVector(
			const Vector& v0);  // 124
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 121
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 125
	QuaternionAligned::QuaternionAligned(
				fltx4 vec);  // 301
	QuaternionAligned::operator*=(
			const QuaternionAligned& q);  // 302
	QuaternionAligned::operator*(
			const QuaternionAligned& q);  // 127
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 127
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
			const Vector& rhs);  // 130
	CTransform::InverseTR(); // 133
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
			const VectorAligned& v);  // 130
	VectorAligned::operator fltx4(); // 109
	{
		fltx4 zzww; // 1414
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<250>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<250>(const fltx4& a,
				const fltx4& b);  // 1414
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<148>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<148>(const fltx4& a,
				const fltx4& b);  // 1415
	}
	SetWSIMD<>(const fltx4& a,
			const fltx4& w);  // 109
	VectorAligned::operator=(
			fltx4 src);  // 109
	CTransform::SetPosition(
			const VectorAligned& v0);  // 130
	QuaternionAligned::operator fltx4(); // 471
	VectorAligned::operator fltx4(); // 471
	QuaternionAligned::operator fltx4(); // 471
	VectorAligned::operator fltx4(); // 471
	CTransform::operator*(
			const CTransform& rhs);  // 133
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 133
} /* size: 890, variables: 15, inline expansions: 109 (1747 bytes) */

// <0173B436> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.cpp:138
// variables: 6
// function calls: 38
void SkeletalInputOpFixedSettings_t::SkeletalInputOpFixedSettings_t(CAnimGraphInitContext& initContext, AnimVRHandMotionRange_t eMotionRange, const CVrSkeletalInputSettings& skelSettings)
{
	{
		int i; // 147
	}
	{
		int i; // 152
	}
	CRelativeOffset<WristBone_t>::CRelativeOffset(); // 84
	CRelativeArray<WristBone_t>::CRelativeArray(); // 139
	CRelativeOffset<FingerChain_t>::CRelativeOffset(); // 84
	CRelativeArray<FingerChain_t>::CRelativeArray(); // 139
	CUtlVectorBase<CWristBone, CUtlMemory<CWristBone, int> >::Count(); // 141
	{
		uint32 i; // 160
		WristBone_t::WristBone_t(); // 162
	}
	CPackedDataT<false>::AddArray<WristBone_t>(
				uint32 count,
				CPackedHandle<WristBone_t>* handleOut);  // 141
	CUtlVectorBase<CWristBone, CUtlMemory<CWristBone, int> >::Count(); // 141
	{
	}
	CRelativeOffset<WristBone_t>::SetOffset(
			const WristBone_t* targetPtr);  // 20
	CRelativeOffset<WristBone_t>::operator=(
			const WristBone_t* targetPtr);  // 115
	CRelativeArray<WristBone_t>::SetArray(
		const WristBone_t* targetArray,
		int32 count);  // 141
	CUtlVectorBase<CFingerChain, CUtlMemory<CFingerChain, int> >::Count(); // 142
	CUtlVectorBase<CFingerChain, CUtlMemory<CFingerChain, int> >::Count(); // 142
	{
		uint32 i; // 160
		CRelativeOffset<FingerSource_t>::CRelativeOffset(); // 84
		CRelativeArray<FingerSource_t>::CRelativeArray(); // 36
		CRelativeOffset<FingerBone_t>::CRelativeOffset(); // 84
		CRelativeArray<FingerBone_t>::CRelativeArray(); // 36
		FingerChain_t::FingerChain_t(); // 162
	}
	CPackedDataT<false>::AddArray<FingerChain_t>(
				uint32 count,
				CPackedHandle<FingerChain_t>* handleOut);  // 142
	{
	}
	CRelativeOffset<FingerChain_t>::SetOffset(
			const FingerChain_t* targetPtr);  // 20
	CRelativeOffset<FingerChain_t>::operator=(
			const FingerChain_t* targetPtr);  // 115
	CRelativeArray<FingerChain_t>::SetArray(
		const FingerChain_t* targetArray,
		int32 count);  // 142
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 143
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 144
	{
		int i; // 147
		CRelativeArray<WristBone_t>::Count(); // 147
		CRelativeOffset<WristBone_t>::IsValid(); // 30
		CRelativeOffset<WristBone_t>::Get(); // 90
		CRelativeArray<WristBone_t>::operator[](
				int index);  // 149
		CUtlMemory<CWristBone, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CWristBone, CUtlMemory<CWristBone, int> >::operator[](
				int i);  // 149
	}
	{
		int i; // 152
		CRelativeArray<FingerChain_t>::Count(); // 152
		CRelativeOffset<FingerChain_t>::IsValid(); // 30
		CRelativeOffset<FingerChain_t>::Get(); // 90
		CRelativeArray<FingerChain_t>::operator[](
				int index);  // 154
		CUtlMemory<CFingerChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CFingerChain, CUtlMemory<CFingerChain, int> >::operator[](
				int i);  // 154
	}
} /* size: 0, inline expansions: 20 (667 bytes) */

// <0173B3D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.cpp:138
// variables: 2
void SkeletalInputOpFixedSettings_t::SkeletalInputOpFixedSettings_t(CAnimGraphInitContext& initContext, AnimVRHandMotionRange_t eMotionRange, const CVrSkeletalInputSettings& skelSettings)
{
	{
		int i; // 147
	}
	{
		int i; // 152
	}
} /* size: 0 */

// <0173AE05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.cpp:161
// variable: 1
// function calls: 24
void MakeOpDescription(CPoseRecipe& pPoseRecipe, CPackedHandle<SkeletalInputOpFixedSettings_t> hFixedSettings)
{
	CPackedHandle<CSkeletalInputPoseOperation::OpSettings> hParam; // 163
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CSkeletalInputPoseOperation::OpSettings>::CPackedHandle(); // 163
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<SkeletalInputOpFixedSettings_t>::CPackedHandle(
			const CPackedHandle<SkeletalInputOpFixedSettings_t>  &);  // 140
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<SkeletalInputOpFixedSettings_t>::CPackedHandle(
			const CPackedHandle<SkeletalInputOpFixedSettings_t>  &);  // 91
	OpSettings::OpSettings(
			CPackedHandle<SkeletalInputOpFixedSettings_t> hFixedSettings);  // 140
	CPackedDataT<false>::AddItem<CSkeletalInputPoseOperation::OpSettings, CPackedHandle<SkeletalInputOpFixedSettings_t>&>(
													CPackedHandle<CSkeletalInputPoseOperation::OpSettings>* handleOut);  // 164
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::NumAllocated(); // 1196
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Element(
		int i);  // 1201
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 47
	PoseOpDesc::PoseOpDesc(
			const PoseOpDesc  &);  // 1520
	CopyConstruct<CPoseRecipe::PoseOpDesc>(PoseOpDesc* pMemory,
						const PoseOpDesc& src);  // 1201
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::Base(); // 112
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Base(); // 368
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::AddToTail(
			const PoseOpDesc& src);  // 89
	PackedHandleID::PackedHandleID(); // 47
	PoseOpDesc::PoseOpDesc(); // 85
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 27
	CPackedHandle<CSkeletalInputPoseOperation::OpSettings>::GetID(); // 87
	{
	}
	CPoseRecipe::AddPoseOp<CSkeletalInputPoseOperation, CSkeletalInputPoseOperation::OpSettings>(
											const CPackedHandle<CSkeletalInputPoseOperation::OpSettings>& hParam);  // 166
} /* size: 0, variables: 1, inline expansions: 24 (370 bytes) */

// <0173ADE1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.cpp:170
BoneIndex_t GetTipBoneIndexForFinger(AnimVRFinger_t iFinger)
{
} /* size: 0 */

// <0173ADBD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.cpp:184
BoneIndex_t GetKnuckleBoneIndexForFinger(AnimVRFinger_t iFinger)
{
} /* size: 0 */

// <0173AD99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.cpp:197
BoneIndex_t GetMetacarpalBoneIndexForFinger(AnimVRFinger_t iFinger)
{
} /* size: 0 */

// <0173AD75> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.cpp:211
int GetCollisionPriority(AnimVRFinger_t iFinger)
{
} /* size: 0 */

// <01737923> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.cpp:225
// variables: 91
// function calls: 223
void PoseMetacarpals(const SkeletalInputOpFixedSettings_t& skelSettings, const CTransform* srcTransforms, const CAnimPosePtr& pPose)
{
	{
		int iFinger; // 227
		{
			const FingerChain_t& finger; // 229
			const BoneIndex_t  nDstKnuckleBoneIndex; // 231
			const BoneIndex_t  nDstMetacarpalBoneIndex; // 232
			VectorAligned vAdjustment; // 234
			VectorAligned vSrcMetacarpalPosMS; // 235
			VectorAligned vSrcKnucklePosMS; // 236
			float flSrcMetaCarpalLength; // 238
			{
				int iTarget; // 241
				{
					const AnimVRFinger_t  fingerIndex; // 243
					const float  flWeight; // 244
					BoneIndex_t srcMetacarpalBoneIndex; // 246
					BoneIndex_t srcKnuckleBoneIndex; // 247
					BoneIndex_t srcWristBoneIndex; // 248
					float flLengthToKnuckle; // 251
					VectorAligned vMetaCarpalPosMS; // 256
					VectorAligned vMetaCarpalBindPosePosMS; // 257
					CRelativeOffset<FingerSource_t>::IsValid(); // 35
					CRelativeOffset<FingerSource_t>::Get(); // 97
					CRelativeArray<FingerSource_t>::operator[](
							int index);  // 243
					CRelativeOffset<FingerSource_t>::Get(); // 97
					CRelativeArray<FingerSource_t>::operator[](
							int index);  // 244
					GetMetacarpalBoneIndexForFinger(AnimVRFinger_t iFinger); // 246
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
					VectorAligned::Length(); // 251
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
					VectorAligned::Length(); // 252
					QuaternionAligned::operator fltx4(); // 471
					VectorAligned::operator fltx4(); // 471
					QuaternionAligned::operator fltx4(); // 471
					VectorAligned::operator fltx4(); // 471
					CTransform::operator*(
							const CTransform& rhs);  // 257
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
							const VectorAligned& v);  // 258
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
							vec_t s);  // 258
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
							vec_t s);  // 261
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 208
					VectorAligned::operator+=(
							const VectorAligned& v);  // 258
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 208
					VectorAligned::operator+=(
							const VectorAligned& v);  // 261
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
							const fltx4& b);  // 208
					VectorAligned::operator+=(
							const VectorAligned& v);  // 262
				}
				CRelativeArray<FingerSource_t>::Count(); // 241
			}
			{
				float flTargetMetacarpalLength; // 270
				CTransform dstMetacarpalXform; // 275
				{
					VectorAligned vToSrcKnuckle; // 284
					CTransform dstKnuckleXform; // 286
					VectorAligned vToDstKnuckle; // 287
					QuaternionAligned qMetacarpalDeltaRotation; // 289
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
					VectorAligned::Normalized(); // 284
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
							const VectorAligned& v);  // 284
					CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 286
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
							const VectorAligned& v);  // 287
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
					VectorAligned::Normalized(); // 287
					QuaternionAligned::QuaternionAligned(
								fltx4 vec);  // 301
					QuaternionAligned::operator*=(
							const QuaternionAligned& q);  // 302
					QuaternionAligned::operator*(
							const QuaternionAligned& q);  // 291
					QuaternionAligned::operator=(
							const QuaternionAligned& vOther);  // 291
					CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 293
				}
				CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 270
				CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 270
				CUtlMemory<CTransform, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
						int i);  // 163
				CAnimSkeleton::GetBindPoseLocalSpace(
							BoneIndex_t boneIndex);  // 270
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
				VectorAligned::Length(); // 270
				CUtlMemory<CTransform, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
						int i);  // 163
				CAnimSkeleton::GetBindPoseLocalSpace(
							BoneIndex_t boneIndex);  // 271
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
				VectorAligned::Length(); // 271
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
						vec_t s);  // 272
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
						const VectorAligned& v);  // 277
				{
					fltx4 zzww; // 1414
					{
						fltx4 retVal; // 1276
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1277
					}
					ShuffleSIMD<250>(const fltx4& a,
							const fltx4& b);  // 665
					ShuffleSIMD<250>(const fltx4& a,
							const fltx4& b);  // 1414
					{
						fltx4 retVal; // 1276
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1277
					}
					ShuffleSIMD<148>(const fltx4& a,
							const fltx4& b);  // 665
					ShuffleSIMD<148>(const fltx4& a,
							const fltx4& b);  // 1415
				}
				SetWSIMD<>(const fltx4& a,
						const fltx4& w);  // 109
				VectorAligned::operator=(
						fltx4 src);  // 109
				CTransform::SetPosition(
						const VectorAligned& v0);  // 277
				CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 279
			}
			CRelativeOffset<FingerChain_t>::IsValid(); // 35
			CRelativeOffset<FingerChain_t>::Get(); // 97
			CRelativeArray<FingerChain_t>::operator[](
					int index);  // 229
			CRelativeArray<FingerBone_t>::Count(); // 65
			{
			}
			CRelativeOffset<FingerBone_t>::IsValid(); // 35
			CRelativeOffset<FingerBone_t>::Get(); // 97
			CRelativeArray<FingerBone_t>::operator[](
					int index);  // 65
			FingerChain_t::GetKnuckleBoneIndex(); // 231
		}
		CRelativeArray<FingerChain_t>::Count(); // 227
	}
} /* size: 0 */

// <01733AEF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.cpp:300
// variables: 128
// function calls: 263
void AdjustIntersectingFingers(const FingerChain_t& primaryFinger, const FingerChain_t& secondaryFinger, CAnimPose& pose)
{
	const BoneIndex_t  nKnuckleBoneIndex1; // 302
	const BoneIndex_t  nKnuckleBoneIndex2; // 303
	{
		int iFingerBone1; // 306
		{
			const FingerBone_t& fingerBoneA; // 308
			const float  flRadiusA; // 310
			Vector vCapsulePosA1; // 314
			Vector vCapsulePosA2; // 315
			{
				BoneIndex_t boneIndex; // 319
				CTransform boneXform; // 320
				{
					fltx4 x000; // 1010
					fltx4 y000; // 1011
					fltx4 z000; // 1012
					fltx4 x0y0; // 1013
					_mm_load_ss(const float* __P); // 1011
					_mm_load_ss(const float* __P); // 1012
					_mm_load_ss(const float* __P); // 1010
					_mm_movelh_ps(__m128 __A,
							__m128 __B);  // 1013
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1014
				}
				LoadUnaligned3SIMD<>(const void* pSIMD); // 419
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
						const VectorAligned& v);  // 419
				{
					fltx4 retVal; // 1352
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1353
				}
				SplatWSIMD<>(const fltx4& a); // 417
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 419
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 420
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 421
				Vector::Vector(); // 422
				_mm_store_ss(float* __P,
						__m128 __A);  // 468
				StoreUnaligned3SIMD<>(float* pSIMD,
							const fltx4& a);  // 423
				CTransform::TransformVector(
						const Vector& v0);  // 321
				{
					fltx4 x000; // 1010
					fltx4 y000; // 1011
					fltx4 z000; // 1012
					fltx4 x0y0; // 1013
					_mm_load_ss(const float* __P); // 1012
					_mm_load_ss(const float* __P); // 1010
					_mm_load_ss(const float* __P); // 1011
					_mm_movelh_ps(__m128 __A,
							__m128 __B);  // 1013
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1014
				}
				LoadUnaligned3SIMD<>(const void* pSIMD); // 419
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
						const VectorAligned& v);  // 419
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 419
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 420
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 421
				Vector::Vector(); // 422
				_mm_store_ss(float* __P,
						__m128 __A);  // 468
				StoreUnaligned3SIMD<>(float* pSIMD,
							const fltx4& a);  // 423
				CTransform::TransformVector(
						const Vector& v0);  // 322
				Vector::operator=(
						const Vector& vOther);  // 321
				Vector::operator=(
						const Vector& vOther);  // 322
			}
			{
				int iFingerBone2; // 325
				{
					const FingerBone_t& fingerBoneB; // 327
					const float  flRadiusB; // 329
					Vector vCapsulePosB1; // 333
					Vector vCapsulePosB2; // 334
					ClosestApproach_t closestApproach; // 345
					Vector toSecondPoint; // 348
					float flDist; // 349
					float flTestDistance; // 351
					{
						BoneIndex_t boneIndex; // 338
						CTransform boneXform; // 339
						{
							fltx4 x000; // 1010
							fltx4 y000; // 1011
							fltx4 z000; // 1012
							fltx4 x0y0; // 1013
							_mm_load_ss(const float* __P); // 1011
							_mm_load_ss(const float* __P); // 1012
							_mm_load_ss(const float* __P); // 1010
							_mm_movelh_ps(__m128 __A,
									__m128 __B);  // 1013
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 1014
						}
						LoadUnaligned3SIMD<>(const void* pSIMD); // 419
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
								const VectorAligned& v);  // 419
						{
							fltx4 retVal; // 1352
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 1353
						}
						SplatWSIMD<>(const fltx4& a); // 417
						VectorAligned::VectorAligned(
								fltx4 rhs);  // 419
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 420
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 421
						Vector::Vector(); // 422
						_mm_store_ss(float* __P,
								__m128 __A);  // 468
						StoreUnaligned3SIMD<>(float* pSIMD,
									const fltx4& a);  // 423
						CTransform::TransformVector(
								const Vector& v0);  // 340
						{
							fltx4 x000; // 1010
							fltx4 y000; // 1011
							fltx4 z000; // 1012
							fltx4 x0y0; // 1013
							_mm_load_ss(const float* __P); // 1012
							_mm_load_ss(const float* __P); // 1010
							_mm_load_ss(const float* __P); // 1011
							_mm_movelh_ps(__m128 __A,
									__m128 __B);  // 1013
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 1014
						}
						LoadUnaligned3SIMD<>(const void* pSIMD); // 419
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
								const VectorAligned& v);  // 419
						VectorAligned::VectorAligned(
								fltx4 rhs);  // 419
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 420
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 421
						Vector::Vector(); // 422
						_mm_store_ss(float* __P,
								__m128 __A);  // 468
						StoreUnaligned3SIMD<>(float* pSIMD,
									const fltx4& a);  // 423
						CTransform::TransformVector(
								const Vector& v0);  // 341
						Vector::operator=(
								const Vector& vOther);  // 340
						Vector::operator=(
								const Vector& vOther);  // 341
					}
					{
						CTransform knuckleXform2; // 356
						Vector vStartingPoint; // 358
						Vector vEndPoint; // 359
						Vector vToStart; // 361
						Vector vToEnd; // 362
						Quaternion qRot; // 364
						Vector::Normalized(); // 364
						VectorSubtract(const Vector& a,
								const Vector& b,
								Vector& c);  // 1444
						Vector::Vector(); // 1443
						Vector::operator-(
								const Vector& v);  // 358
						VectorMultiply(const Vector& a,
								vec_t b,
								Vector& c);  // 1451
						Vector::Vector(); // 1450
						Vector::operator*(
								float fl);  // 358
						_mm_cvtss_f32(__m128 __A); // 1534
						GetZSIMD<>(fltx4 a); // 76
						VectorAligned::z(); // 40
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 40
						VectorAligned::operator Vector(); // 361
						VectorAdd(const Vector& a,
								const Vector& b,
								Vector& c);  // 1437
						Vector::Vector(); // 1436
						Vector::operator+(
								const Vector& v);  // 358
						VectorSubtract(const Vector& a,
								const Vector& b,
								Vector& c);  // 1444
						Vector::Vector(); // 1443
						Vector::operator-(
								const Vector& v);  // 361
						Vector::Vector(); // 1450
						VectorMultiply(const Vector& a,
								vec_t b,
								Vector& c);  // 1451
						Vector::operator*(
								float fl);  // 359
						Vector::Vector(); // 1436
						VectorAdd(const Vector& a,
								const Vector& b,
								Vector& c);  // 1437
						Vector::operator+(
								const Vector& v);  // 359
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 40
						VectorAligned::operator Vector(); // 362
						Vector::Vector(); // 1443
						VectorSubtract(const Vector& a,
								const Vector& b,
								Vector& c);  // 1444
						Vector::operator-(
								const Vector& v);  // 362
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
								const Vector& rhs);  // 364
						Vector::Normalized(); // 364
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
								const Vector& rhs);  // 364
						_mm_cvtss_f32(__m128 __A); // 1553
						GetWSIMD<>(fltx4 a); // 77
						QuaternionAligned::w(); // 41
						_mm_cvtss_f32(__m128 __A); // 1515
						GetYSIMD<>(fltx4 a); // 75
						QuaternionAligned::y(); // 41
						_mm_cvtss_f32(__m128 __A); // 1496
						GetXSIMD<>(fltx4 a); // 74
						QuaternionAligned::x(); // 41
						_mm_cvtss_f32(__m128 __A); // 1534
						GetZSIMD<>(fltx4 a); // 76
						QuaternionAligned::z(); // 41
						Quaternion::Quaternion(
								vec_t ix,
								vec_t iy,
								vec_t iz,
								vec_t iw);  // 41
						QuaternionAligned::operator Quaternion(); // 364
						QuaternionAligned::w(); // 41
						Quaternion::Quaternion(
								vec_t ix,
								vec_t iy,
								vec_t iz,
								vec_t iw);  // 41
						QuaternionAligned::operator Quaternion(); // 366
						Quaternion::Quaternion(); // 2001
						operator*(const Quaternion& p,
								const Quaternion& q);  // 366
						QuaternionAligned::Init(
							vec_t X,
							vec_t Y,
							vec_t Z,
							vec_t W);  // 217
						QuaternionAligned::operator=(
								const Quaternion& vOther);  // 366
					}
					{
					}
					CRelativeOffset<FingerBone_t>::IsValid(); // 35
					CRelativeOffset<FingerBone_t>::Get(); // 97
					CRelativeArray<FingerBone_t>::operator[](
							int index);  // 327
					Vector::Vector(); // 1443
					VectorSubtract(const Vector& a,
							const Vector& b,
							Vector& c);  // 1444
					Vector::operator-(
							const Vector& v);  // 348
					Vector::NormalizeInPlace(); // 349
				}
				CRelativeArray<FingerBone_t>::Count(); // 325
			}
			{
			}
			CRelativeOffset<FingerBone_t>::IsValid(); // 35
			CRelativeOffset<FingerBone_t>::Get(); // 97
			CRelativeArray<FingerBone_t>::operator[](
					int index);  // 308
		}
		CRelativeArray<FingerBone_t>::Count(); // 306
	}
	CRelativeArray<FingerBone_t>::Count(); // 65
	{
	}
	CRelativeArray<FingerBone_t>::operator[](
			int index);  // 65
	FingerChain_t::GetKnuckleBoneIndex(); // 302
	CRelativeArray<FingerBone_t>::Count(); // 65
	{
	}
	CRelativeOffset<FingerBone_t>::IsValid(); // 35
	CRelativeOffset<FingerBone_t>::Get(); // 97
	CRelativeArray<FingerBone_t>::operator[](
			int index);  // 65
	FingerChain_t::GetKnuckleBoneIndex(); // 303
} /* size: 0, variables: 2, inline expansions: 8 (354 bytes) */

// <01732961> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.cpp:375
// variables: 31
// function calls: 70
Vector GetPointAlongFinger(AnimVRFinger_t fingerID, const CTransform* srcTransforms, float flAmountAlongFinger)
{
	float flFingerLength; // 378
	int boneIndex; // 380
	VectorAligned vCurrentPos; // 382
	float flCurrentDist; // 402
	{
		int childIndex; // 386
		VectorAligned vChildPos; // 389
		VectorAligned toChild; // 390
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
				const VectorAligned& v);  // 390
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
		VectorAligned::Length(); // 392
		VectorAligned::operator=(
				const VectorAligned& src);  // 394
	}
	{
		int childIndex; // 406
		VectorAligned vChildPos; // 409
		VectorAligned toChild; // 410
		float flSegmentLength; // 412
		{
			float flLerpValue; // 416
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
						const VectorAligned& B);  // 418
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 418
		}
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
				const VectorAligned& v);  // 410
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
		VectorAligned::Length(); // 412
		VectorAligned::operator=(
				const VectorAligned& src);  // 422
	}
	VectorAligned::operator=(
			const VectorAligned& src);  // 401
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 429
} /* size: 406, variables: 4, inline expansions: 6 (20 bytes) */

// <017280E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputposeoperation.cpp:435
// variables: 265
// function calls: 662
void Evaluate(CPoseUpdateContext& context, OpSettings* pOpSettings)
{
	CAnimPosePtr pPose; // 439
	const IAnimVRProxy* pVRProxy; // 442
	const char   __FUNCTION__; // 44910
	{
		const SkeletalInputOpFixedSettings_t& skelSettings; // 448
		CTransform srcTransforms; // 452
		bool bResult; // 454
		{
			const CTransform  srcWristXformWS; // 471
			const CTransform* srcBindPose; // 488
			{
				int iWrist; // 473
				{
					const WristBone_t& currentWristSettings; // 475
					CTransform dstWristXformMS; // 477
					CRelativeOffset<WristBone_t>::IsValid(); // 35
					CRelativeOffset<WristBone_t>::Get(); // 97
					CRelativeArray<WristBone_t>::operator[](
							int index);  // 475
					QuaternionAligned::operator fltx4(); // 471
					VectorAligned::operator fltx4(); // 471
					CTransform::operator*(
							const CTransform& rhs);  // 477
					CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 479
				}
				CRelativeArray<WristBone_t>::Count(); // 473
			}
			{
				int iFinger; // 490
				{
					const FingerChain_t& finger; // 492
					const BoneIndex_t  nDstKnuckleBoneIndex; // 494
					const BoneIndex_t  nDstMetacarpalBoneIndex; // 495
					const BoneIndex_t  nDstFingerTipBoneIndex; // 496
					CAnimAttachment tipAttachment; // 500
					VectorAligned vTipPos; // 503
					VectorAligned vSrcKnucklePos; // 505
					VectorAligned vSrcKnuckleChildPos; // 506
					const CAnimSkeleton& skeleton; // 544
					VectorAligned vTargetTipPos; // 631
					{
						int iTarget; // 510
						{
							const AnimVRFinger_t  fingerIndex; // 512
							const float  flWeight; // 513
							BoneIndex_t srcMetacarpalBoneIndex; // 515
							BoneIndex_t srcBoneParentIndex; // 516
							CTransform srcBoneXformCurrentMS; // 519
							CTransform srcParentXformCurrentMS; // 520
							CTransform srcParentXformBindPoseMS; // 522
							CTransform srcBoneXformBindPoseLS; // 525
							CTransform srcBoneXformBindPoseMS; // 526
							BoneIndex_t srcTipBoneIndex; // 529
							BoneIndex_t srcKnuckleBoneIndex; // 530
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 517
							}
							CRelativeOffset<FingerSource_t>::IsValid(); // 35
							CRelativeOffset<FingerSource_t>::Get(); // 97
							CRelativeArray<FingerSource_t>::operator[](
									int index);  // 512
							CRelativeOffset<FingerSource_t>::Get(); // 97
							CRelativeArray<FingerSource_t>::operator[](
									int index);  // 513
							GetMetacarpalBoneIndexForFinger(AnimVRFinger_t iFinger); // 515
							CTransform::InverseTR(); // 525
							QuaternionAligned::operator fltx4(); // 471
							VectorAligned::operator fltx4(); // 471
							QuaternionAligned::operator fltx4(); // 471
							VectorAligned::operator fltx4(); // 471
							CTransform::operator*(
									const CTransform& rhs);  // 525
							QuaternionAligned::operator fltx4(); // 471
							VectorAligned::operator fltx4(); // 471
							CTransform::operator*(
									const CTransform& rhs);  // 526
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
									vec_t s);  // 532
							{
								fltx4 retVal; // 1593
								_mm_add_ps(__m128 __A,
										__m128 __B);  // 1594
							}
							AddSIMD<>(const fltx4& a,
									const fltx4& b);  // 208
							VectorAligned::operator+=(
									const VectorAligned& v);  // 532
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
									vec_t s);  // 535
							{
								fltx4 retVal; // 1593
								_mm_add_ps(__m128 __A,
										__m128 __B);  // 1594
							}
							AddSIMD<>(const fltx4& a,
									const fltx4& b);  // 208
							VectorAligned::operator+=(
									const VectorAligned& v);  // 535
							VectorAligned::VectorAligned(
									fltx4 rhs);  // 268
							VectorAligned::operator*(
									vec_t s);  // 536
						}
						CRelativeArray<FingerSource_t>::Count(); // 510
					}
					{
						float flFingerLength; // 548
						float flAccumulatedFingerLength; // 564
						{
							VectorAligned vLastPos; // 550
							{
								int iBone; // 551
								{
									const FingerBone_t& currentBoneInfo; // 553
									int nBoneIndex; // 554
									VectorAligned vBonePos; // 556
									CRelativeOffset<FingerBone_t>::IsValid(); // 35
									CRelativeOffset<FingerBone_t>::Get(); // 97
									CRelativeArray<FingerBone_t>::operator[](
											int index);  // 553
									CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 556
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
											const VectorAligned& v);  // 558
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
									VectorAligned::Length(); // 558
									VectorAligned::operator=(
											const VectorAligned& src);  // 560
								}
								CRelativeArray<FingerBone_t>::Count(); // 551
							}
						}
						{
							int iBone; // 566
							{
								const FingerBone_t& currentBoneInfo; // 568
								int nBoneIndex; // 569
								VectorAligned vBonePos; // 570
								VectorAligned vNextBonePos; // 572
								VectorAligned vCurrentDirection; // 584
								float flSegmentLength; // 585
								float flBonePercentage; // 587
								float flNextBonePercentage; // 591
								VectorAligned vSrcBonePos; // 594
								VectorAligned vSrcNextBonePos; // 595
								VectorAligned vSrcDirection; // 603
								QuaternionAligned qRot; // 605
								CTransform boneXformMS; // 618
								{
									const FingerBone_t& nextBoneInfo; // 575
									int nNextBoneIndex; // 576
									{
									}
									CRelativeOffset<FingerBone_t>::IsValid(); // 35
									CRelativeOffset<FingerBone_t>::Get(); // 97
									CRelativeArray<FingerBone_t>::operator[](
											int index);  // 575
									CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 577
									VectorAligned::operator=(
											const VectorAligned& src);  // 577
								}
								{
									int i; // 597
									CRelativeArray<FingerSource_t>::Count(); // 597
									CRelativeOffset<FingerSource_t>::IsValid(); // 35
									CRelativeOffset<FingerSource_t>::Get(); // 97
									CRelativeArray<FingerSource_t>::operator[](
											int index);  // 599
									CRelativeOffset<FingerSource_t>::Get(); // 97
									CRelativeArray<FingerSource_t>::operator[](
											int index);  // 599
									VectorMultiply(const Vector& a,
											vec_t b,
											Vector& c);  // 1451
									Vector::Vector(); // 1450
									Vector::operator*(
											float fl);  // 599
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
											const Vector& rhs);  // 599
									{
										fltx4 retVal; // 1593
										_mm_add_ps(__m128 __A,
												__m128 __B);  // 1594
									}
									AddSIMD<>(const fltx4& a,
											const fltx4& b);  // 208
									VectorAligned::operator+=(
											const VectorAligned& v);  // 599
									{
									}
									CRelativeOffset<FingerSource_t>::IsValid(); // 35
									CRelativeOffset<FingerSource_t>::Get(); // 97
									CRelativeArray<FingerSource_t>::operator[](
											int index);  // 600
									{
									}
									CRelativeOffset<FingerSource_t>::IsValid(); // 35
									CRelativeOffset<FingerSource_t>::Get(); // 97
									CRelativeArray<FingerSource_t>::operator[](
											int index);  // 600
									VectorMultiply(const Vector& a,
											vec_t b,
											Vector& c);  // 1451
									Vector::Vector(); // 1450
									Vector::operator*(
											float fl);  // 600
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
											const Vector& rhs);  // 600
									{
										fltx4 retVal; // 1593
										_mm_add_ps(__m128 __A,
												__m128 __B);  // 1594
									}
									AddSIMD<>(const fltx4& a,
											const fltx4& b);  // 208
									VectorAligned::operator+=(
											const VectorAligned& v);  // 600
								}
								{
									VectorAligned vHingeAxisMS; // 612
									CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 612
									{
									}
									CRelativeOffset<FingerBone_t>::IsValid(); // 35
									CRelativeOffset<FingerBone_t>::Get(); // 97
									CRelativeArray<FingerBone_t>::operator[](
											int index);  // 612
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
											const VectorAligned& v);  // 430
									CTransform::RotateVector(
											const VectorAligned& v0);  // 84
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
											const Vector& rhs);  // 84
									Vector::Vector(
										vec_t X,
										vec_t Y,
										vec_t Z);  // 42
									VectorAligned::AsVector(); // 84
									CTransform::RotateVector(
											const Vector& v0);  // 612
									VectorAligned::Init(
										vec_t X,
										vec_t Y,
										vec_t Z);  // 31
									VectorAligned::VectorAligned(
											const Vector& rhs);  // 612
									QuaternionAligned::operator=(
											const QuaternionAligned& vOther);  // 613
								}
								{
								}
								CRelativeOffset<FingerBone_t>::IsValid(); // 35
								CRelativeOffset<FingerBone_t>::Get(); // 97
								CRelativeArray<FingerBone_t>::operator[](
										int index);  // 568
								CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 570
								CSmartPtr<CAnimPose, CRefCountAccessor>::operator*(); // 581
								VectorAligned::operator=(
										const VectorAligned& src);  // 581
								VectorAligned::VectorAligned(); // 572
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
										const VectorAligned& v);  // 584
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
								VectorAligned::NormalizeInPlace(); // 585
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
										const VectorAligned& v);  // 603
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
								VectorAligned::Normalized(); // 603
								QuaternionAligned::QuaternionAligned(); // 605
								CRelativeArray<FingerBone_t>::Count(); // 606
								QuaternionAligned::operator=(
										const QuaternionAligned& vOther);  // 608
								CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 618
								QuaternionAligned::operator*=(
										const QuaternionAligned& q);  // 302
								QuaternionAligned::QuaternionAligned(
											fltx4 vec);  // 301
								QuaternionAligned::operator*(
										const QuaternionAligned& q);  // 620
								QuaternionAligned::operator=(
										const QuaternionAligned& vOther);  // 620
								CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 624
							}
						}
					}
					{
						VectorAligned toTipPos; // 634
						CTransform dstKnuckleXform; // 639
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
								const VectorAligned& v);  // 634
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
								vec_t s);  // 637
						CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 639
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
								const VectorAligned& v);  // 640
						VectorAligned::operator=(
								const VectorAligned& src);  // 640
					}
					{
						CTransform dstKnuckleXform; // 645
						CTransform dstKnuckleChild; // 647
						VectorAligned vToDstChild; // 649
						CTransform dstTipXform; // 651
						VectorAligned vToDstTip; // 653
						VectorAligned vToSrcTip; // 655
						QuaternionAligned qRot; // 657
						CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 645
						CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
								int i);  // 595
						CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
								int i);  // 156
						CUtlMemory<int, int>::operator[](
								int i);  // 595
						CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
								int i);  // 156
						CAnimSkeleton::GetChildIndex(
								BoneIndex_t boneIndex,
								int childIndex);  // 647
						CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 647
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
								const VectorAligned& v);  // 649
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
						VectorAligned::Normalized(); // 649
						CSmartPtr<CAnimPose, CRefCountAccessor>::operator*(); // 651
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
								const VectorAligned& v);  // 653
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
							fltx4 retVal; // 1981
							_mm_cmpgt_ps(__m128 __A,
									__m128 __B);  // 1982
						}
						CmpGtSIMD<>(const fltx4& a,
								const fltx4& b);  // 361
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
						VectorAligned::Normalized(); // 653
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
								const VectorAligned& v);  // 655
						{
							fltx4 retVal; // 1662
							_mm_div_ps(__m128 __A,
									__m128 __B);  // 1663
						}
						DivSIMD<>(const fltx4& a,
								const fltx4& b);  // 362
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
						VectorAligned::Normalized(); // 657
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
						VectorAligned::Normalized(); // 655
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
						VectorAligned::Normalized(); // 657
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
								const VectorAligned& rhs);  // 659
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
						QuaternionAligned::QuaternionAligned(
									fltx4 vec);  // 545
						QuaternionSlerp(const QuaternionAligned& qFrom,
								const QuaternionAligned& qTo,
								float t);  // 659
						QuaternionAligned::operator=(
								const QuaternionAligned& vOther);  // 659
						QuaternionAligned::QuaternionAligned(
									fltx4 vec);  // 301
						QuaternionAligned::operator*=(
								const QuaternionAligned& q);  // 302
						QuaternionAligned::operator*(
								const QuaternionAligned& q);  // 661
						QuaternionAligned::operator=(
								const QuaternionAligned& vOther);  // 661
						CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 665
					}
					{
						CIKChainData_t chainData; // 673
						{
							int iBone; // 677
							{
								const FingerBone_t& currentBoneInfo; // 679
								CIKChainJointData_t& currentJoint; // 680
								CIKJointConstraintData_Hinge* pHingeConstraint; // 683
								CRelativeOffset<FingerBone_t>::IsValid(); // 35
								CRelativeOffset<FingerBone_t>::Get(); // 97
								CRelativeArray<FingerBone_t>::operator[](
										int index);  // 679
								CUtlMemory<IIKJointConstraintData::Base(); // 112
								CUtlVectorBase<IIKJointConstraintData::Base(); // 368
								CUtlVectorBase<IIKJointConstraintData::ResetDbgInfo(); // 824
								CUtlMemory<IIKJointConstraintData::IsGrowable(); // 823
								CUtlMemory<IIKJointConstraintData::IsExternallyAllocated(); // 859
								CUtlMemory<IIKJointConstraintData::IsExternallyAllocated(); // 861
								CUtlMemory<IIKJointConstraintData::Grow(
									int num);  // 806
								CUtlVectorBase<IIKJointConstraintData::GrowMemory(
										int num);  // 1249
								CUtlMemory<IIKJointConstraintData::operator[](
										int i);  // 602
								CUtlVectorBase<IIKJointConstraintData::Element(
									int i);  // 1252
								Construct<IIKJointConstraintData*, IIKJointConstraintData*>(IIKJointConstraintData** pMemory); // 1252
								CUtlMemory<IIKJointConstraintData::NumAllocated(); // 1247
								CUtlVectorBase<IIKJointConstraintData::AddToTail(
										IIKJointConstraintData *& src);  // 684
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
										const Vector& rhs);  // 685
								DEG2RAD(float flDegrees); // 686
								CIKJointConstraintData_Hinge::Set(
									float flMinRadians,
									float flMaxRadians);  // 686
								CUtlMemory<CIKChainJointData_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
										int i);  // 680
								CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 680
								IIKJointConstraintData::IIKJointConstraintData(); // 40
								CIKJointConstraintData_Hinge::CIKJointConstraintData_Hinge(); // 683
							}
							CRelativeArray<FingerBone_t>::Count(); // 677
						}
						{
							CAnimPoseWrapper poseWrapper; // 692
							CIKSolver_CCD ikSolver; // 693
							IPoseAccessor::IPoseAccessor(); // 43
							ThreadInterlockedIncrement(volatile int32* p); // 683
							CRefCountedMemPoolObject<CAnimPose>::AddRef(); // 21
							AddRef<CAnimPose>(CAnimPose* pObj); // 366
							ThreadInterlockedDecrement(volatile int32* p); // 690
							{
								CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
								CEnduringClassMemoryPool<CAnimPose>::Free(
									CAnimPose* pObject);  // 699
							}
							CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 649
							CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 703
							CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
							CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
							Release<CAnimPose>(CAnimPose* pObj); // 370
							CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
									CAnimPose* pObj);  // 406
							CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
									const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 328
							CSmartPtr<CAnimPose, CRefCountAccessor>::CSmartPtr(
									const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 40
							CAnimPoseWrapper::CAnimPoseWrapper(
									const CModel* pModel,
									const CAnimPosePtr& pAnimPose,
									const CTransform& xModelToWorld,
									float flScale);  // 692
							ThreadInterlockedDecrement(volatile int32* p); // 690
							{
								CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
								CEnduringClassMemoryPool<CAnimPose>::Free(
									CAnimPose* pObject);  // 699
							}
							CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 649
							CRefCountedMemPoolObject<CAnimPose>::~CRefCountedMemPoolObject(); // 703
							CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
							CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
							Release<CAnimPose>(CAnimPose* pObj); // 344
							CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 36
							IPoseAccessor::~IPoseAccessor(); // 36
							CAnimPoseWrapper::~CAnimPoseWrapper(); // 695
						}
						QuaternionAligned::operator=(
								const QuaternionAligned& vOther);  // 21
						VectorAligned::operator=(
								const VectorAligned& src);  // 21
						CAnimAttachment::operator=(
								const CAnimAttachment  &);  // 674
						CRelativeArray<FingerBone_t>::Count(); // 675
						CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 689
						CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 689
						CUtlMemory<CIKChainJointData_t, int>::operator[](
								int i);  // 616
						CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Head(); // 689
						CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
								int i);  // 595
						CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
								int i);  // 142
						CAnimSkeleton::GetParentIndex(
								BoneIndex_t boneIndex);  // 689
						CUtlString::~CUtlString(); // 9
						IKBoneNameAndIndex_t::~IKBoneNameAndIndex_t(); // 42
						IKTargetSettings_t::~IKTargetSettings_t(); // 38
						CUtlString::~CUtlString(); // 12
						AttachmentNameAndIndex_t::~AttachmentNameAndIndex_t(); // 38
						{
							int i; // 1721
							CUtlMemory<CIKChainJointData_t, int>::operator[](
									int i);  // 602
							CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Element(
								int i);  // 1723
							Destruct<CIKChainJointData_t>(CIKChainJointData_t* pMemory); // 1723
						}
						CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::RemoveAll(); // 1798
						CUtlMemory<CIKChainJointData_t, int>::IsExternallyAllocated(); // 905
						CUtlMemory<CIKChainJointData_t, int>::Purge(); // 903
						CUtlMemory<CIKChainJointData_t, int>::Purge(); // 1799
						CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Purge(); // 560
						ValidateAlignment<CIKChainJointData_t>(void); // 508
						CUtlMemory<CIKChainJointData_t, int>::Purge(); // 510
						CUtlMemory<CIKChainJointData_t, int>::~CUtlMemory(); // 562
						CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::~CUtlVectorBase(); // 410
						CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::~CUtlVector(); // 38
						CUtlString::~CUtlString(); // 38
						CIKChainData_t::~CIKChainData_t(); // 696
					}
					CRelativeOffset<FingerChain_t>::IsValid(); // 35
					CRelativeOffset<FingerChain_t>::Get(); // 97
					CRelativeArray<FingerChain_t>::operator[](
							int index);  // 492
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
							const Vector& rhs);  // 501
					CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 544
					CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator*(); // 544
					CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
							int i);  // 149
					CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 149
					CAnimSkeleton::GetChildCount(
							BoneIndex_t boneIndex);  // 545
					VectorAligned::VectorAligned(); // 631
				}
				CRelativeArray<FingerChain_t>::Count(); // 490
			}
			{
				int iFinger; // 708
				{
					int fingerIndex2; // 710
					AnimVRFinger_t influence1; // 712
					AnimVRFinger_t influence2; // 713
					CSmartPtr<CAnimPose, CRefCountAccessor>::operator*(); // 727
					{
					}
					CRelativeOffset<FingerChain_t>::IsValid(); // 35
					CRelativeOffset<FingerChain_t>::Get(); // 97
					CRelativeArray<FingerChain_t>::operator[](
							int index);  // 727
					{
					}
					CRelativeOffset<FingerChain_t>::IsValid(); // 35
					CRelativeOffset<FingerChain_t>::Get(); // 97
					CRelativeArray<FingerChain_t>::operator[](
							int index);  // 727
					CRelativeOffset<FingerChain_t>::IsValid(); // 35
					CRelativeOffset<FingerChain_t>::Get(); // 97
					CRelativeArray<FingerChain_t>::operator[](
							int index);  // 712
					{
					}
					CRelativeOffset<FingerChain_t>::IsValid(); // 35
					CRelativeOffset<FingerChain_t>::Get(); // 97
					CRelativeArray<FingerChain_t>::operator[](
							int index);  // 713
					GetCollisionPriority(AnimVRFinger_t iFinger); // 721
					GetCollisionPriority(AnimVRFinger_t iFinger); // 721
					{
					}
					CRelativeOffset<FingerChain_t>::IsValid(); // 35
					CRelativeOffset<FingerChain_t>::Get(); // 97
					CRelativeArray<FingerChain_t>::operator[](
							int index);  // 723
					{
					}
					CRelativeOffset<FingerChain_t>::IsValid(); // 35
					CRelativeOffset<FingerChain_t>::Get(); // 97
					CRelativeArray<FingerChain_t>::operator[](
							int index);  // 723
				}
				CRelativeArray<FingerChain_t>::Count(); // 708
			}
			{
				int iFinger; // 733
				{
					int iFinger2; // 737
					CRelativeArray<FingerChain_t>::Count(); // 737
					CRelativeOffset<FingerChain_t>::IsValid(); // 35
					CRelativeOffset<FingerChain_t>::Get(); // 97
					{
					}
					CRelativeArray<FingerChain_t>::operator[](
							int index);  // 744
					{
					}
					CRelativeOffset<FingerChain_t>::IsValid(); // 35
					CRelativeOffset<FingerChain_t>::Get(); // 97
					CRelativeArray<FingerChain_t>::operator[](
							int index);  // 744
					CRelativeOffset<FingerChain_t>::IsValid(); // 35
					CRelativeOffset<FingerChain_t>::Get(); // 97
					CRelativeArray<FingerChain_t>::operator[](
							int index);  // 742
					CSmartPtr<CAnimPose, CRefCountAccessor>::operator*(); // 744
				}
				CRelativeOffset<FingerChain_t>::IsValid(); // 35
				CRelativeOffset<FingerChain_t>::Get(); // 97
				CRelativeArray<FingerChain_t>::operator[](
						int index);  // 735
			}
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 468
		}
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<SkeletalInputOpFixedSettings_t>(
								const CPackedHandle<SkeletalInputOpFixedSettings_t>& handle);  // 33
		CAnimGraphFixedData::operator[]<SkeletalInputOpFixedSettings_t>(
								const CPackedHandle<SkeletalInputOpFixedSettings_t>& handle);  // 448
	}
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 440
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

