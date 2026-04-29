
//
// ik/ikchaincontext.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 33
//

// <00092760> ik/ikchaincontext.cpp:44
// function calls: 11
void CIKChainContext::CIKChainContext()
{
	CUtlMemory<IIKRuleContext::CUtlMemory(
			IIKRuleContext** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<IIKRuleContext::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<IIKRuleContext::CUtlMemoryFixedGrowable_Base(
					IIKRuleContext** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<3, IIKRuleContext::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<3, IIKRuleContext::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<3, IIKRuleContext::Base(); // 231
	CUtlMemoryFixedGrowable<IIKRuleContext::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<IIKRuleContext::ResetDbgInfo(); // 530
	CUtlVectorBase<IIKRuleContext::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<IIKRuleContext::CUtlVectorFixedGrowable(
				int growSize);  // 45
	CUtlSymbolLarge::CUtlSymbolLarge(); // 45
} /* size: 111, inline expansions: 11 (190 bytes) */

// <00092743> ik/ikchaincontext.cpp:44
void CIKChainContext::CIKChainContext()
{
} /* size: 0 */

// <000992B4> ik/ikchaincontext.cpp:49
// variables: 4
// function calls: 5
void CIKChainContext::DoesChainProvideAbsOriginZ()
{
	{
		const IIKRuleContext* pRule; // 51
		const CUtlVectorFixedGrowable<IIKRuleContext*, 3>& __for_range; // 36395
		const_iterator __for_begin; // 36406
		const_iterator __for_end; // 36417
		CUtlMemory<IIKRuleContext::Base(); // 113
		CUtlVectorBase<IIKRuleContext::Base(); // 103
		CUtlVectorBase<IIKRuleContext::begin(); // 51
		CUtlVectorBase<IIKRuleContext::Count(); // 105
		CUtlVectorBase<IIKRuleContext::end(); // 51
	}
} /* size: 0 */

// <000926F1> ik/ikchaincontext.cpp:49
// variables: 4
void CIKChainContext::DoesChainProvideAbsOriginZ()
{
	{
		const IIKRuleContext* pRule; // 51
		const CUtlVectorFixedGrowable<IIKRuleContext*, 3>& __for_range; // 36430
		const_iterator __for_begin; // 45281
		const_iterator __for_end; // 45281
	}
} /* size: 0 */

// <000926A1> ik/ikchaincontext.cpp:61
void UpdateInterpolationState_PreSolve_SoftenTarget(const CIKChainDescription* pChainDescription, const CSpaceAgnosticBoneAccessor& boneAccessor, const CTransform& xWsTarget, CIKChainInterpolationState& interpolationState, const CIKUpdateInputState& inputState)
{
} /* size: 0 */

// <00092477> ik/ikchaincontext.cpp:71
// variable: 1
// function calls: 2
void CIKChainContext::UpdateInterpolationState_PreSolve_CalculateResult(CIKChainInterpolationState& interpolationState, const CIKUpdateInputState& inputState, const CSpaceAgnosticBoneAccessor& boneAccessor, const CTraceRequest& traceRequest, const Quaternion& qWsTilt, int nTiltBoneIndex, float flDeltaTime)
{
	CTransform xWsTarget; // 81
	CTraceResult::GetNormal(); // 87
	UpdateInterpolationState_PreSolve_SoftenTarget(const CIKChainDescription* pChainDescription,
							const CSpaceAgnosticBoneAccessor& boneAccessor,
							const CTransform& xWsTarget,
							CIKChainInterpolationState& interpolationState,
							const CIKUpdateInputState& inputState);  // 90
} /* size: 249, variables: 1, inline expansions: 2 (35 bytes) */

// <00091E25> ik/ikchaincontext.cpp:100
// variable: 1
// function calls: 16
void CIKChainContext::CalculateResult(const CIKChainInterpolationState& interpolationState, const CIKUpdateInputState& inputState, CIKUpdateOutputState& outputState, const CTraceRequest& traceRequest, const Quaternion qWsTilt, int nTiltBoneIndex, float flDeltaTime)
{
	CTransform xWsTarget; // 110
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 115
	CTraceResult::GetNormal(); // 124
	CIKChainContext::CalculateResult_CalculateHipDrop(
					const CIKChainInterpolationState& interpolationState,
					CIKUpdateOutputState& outputState);  // 130
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 132
	CUtlSymbolLarge::String(); // 137
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 81
	CFmtStrN<256>::String(); // 137
	CUtlString::CUtlString(
			const char* pString);  // 137
	CUtlString::~CUtlString(); // 137
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 137
} /* size: 768, variables: 1, inline expansions: 16 (300 bytes) */

// <0009947B> ik/ikchaincontext.cpp:145
// variables: 7
// function calls: 12
void CIKChainContext::UpdateInterpolationState_PreSolve_CalculateHipDrop(CIKChainInterpolationState& interpolationState)
{
	{
		const IIKRuleContext* pRule; // 51
		const CUtlVectorFixedGrowable<IIKRuleContext*, 3>& __for_range; // 36395
		const_iterator __for_begin; // 36406
		const_iterator __for_end; // 36417
		CUtlMemory<IIKRuleContext::Base(); // 113
		CUtlVectorBase<IIKRuleContext::Base(); // 103
		CUtlVectorBase<IIKRuleContext::begin(); // 51
		CUtlVectorBase<IIKRuleContext::Count(); // 105
		CUtlVectorBase<IIKRuleContext::end(); // 51
	}
	CIKChainContext::DoesChainProvideAbsOriginZ(); // 147
	{
		float flZ; // 152
		{
			int nRuleIndex; // 154
			CUtlVectorBase<IIKRuleContext::Count(); // 154
			{
				const IIKRuleContext* pRuleContext; // 156
				CUtlMemory<IIKRuleContext::operator[](
						int i);  // 595
				CUtlVectorBase<IIKRuleContext::operator[](
						int i);  // 156
				CUtlMemory<CIKChainRuleInterpolationState, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::operator[](
						int i);  // 159
			}
		}
	}
	CIKChainContext::UpdateInterpolationState_PreSolve_CalculateHipDrop(
								CIKChainInterpolationState& interpolationState);  // 145
} /* size: 299, inline expansions: 2 (263 bytes) */

// <00091DD1> ik/ikchaincontext.cpp:145
// variables: 3
void CIKChainContext::UpdateInterpolationState_PreSolve_CalculateHipDrop(CIKChainInterpolationState& interpolationState)
{
	{
		float flZ; // 152
		{
			int nRuleIndex; // 154
			{
				const IIKRuleContext* pRuleContext; // 156
			}
		}
	}
} /* size: 0 */

// <000997A3> ik/ikchaincontext.cpp:168
void CIKChainContext::CalculateResult_CalculateHipDrop(const CIKChainInterpolationState& interpolationState, CIKUpdateOutputState& outputState)
{
} /* size: 0 */

// <00091759> ik/ikchaincontext.cpp:175
// variables: 6
// function calls: 15
void CIKChainContext::UpdateInterpolationState_PreSolve_ConditionallyApplyLocks(CIKChainInterpolationState& interpolationState, const CIKUpdateInputState& inputState, const CSpaceAgnosticBoneAccessor& boneAccessor, CTransform& xWsTarget, const Vector& vWsNormal, float flDeltaTime)
{
	const CTransform  xWsOriginalTarget; // 177
	const float  flLockWeight; // 187
	{
		const CTransform  xWsLockedEndEffector; // 201
		const CTransform  xWsLockedTarget; // 203
		bool bShouldBreakLock; // 206
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 204
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 331
		CIKChainContext::ShouldBreakLockPreSolve(
					const CIKUpdateInputState& inputState,
					const CSpaceAgnosticBoneAccessor& boneAccessor,
					const CTransform& xWsLockedEndEffector,
					const Vector& vWsNormal,
					const CTransform& xWsTarget);  // 325
		CIKChainContext::ShouldBreakLockPreSolve(
					const CIKUpdateInputState& inputState,
					const CSpaceAgnosticBoneAccessor& boneAccessor,
					const CTransform& xWsLockedEndEffector,
					const Vector& vWsNormal,
					const CTransform& xWsTarget);  // 206
		CIKChainContext::SetForceUnlockedState(
					CIKChainInterpolationState& interpolationState,
					float flCurrentTime);  // 210
	}
	{
		const float  flForceUnlockAlpha; // 223
		CIKChainDescription::GetBreakRestorationTime(); // 223
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 223
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 178
	ConVar::GetFloat(); // 193
	ConVar::GetFloat(); // 237
	ConVar::GetFloat(); // 217
} /* size: 653, variables: 2, inline expansions: 5 (47 bytes) */

// <000912DE> ik/ikchaincontext.cpp:245
// variables: 7
// function calls: 10
void CIKChainContext::CalculateResult_ConditionallyApplyLocks(const CIKChainInterpolationState& interpolationState, const CIKUpdateInputState& inputState, CIKUpdateOutputState& outputState, CTransform& xWsTarget, const Vector& vWsNormal, float flDeltaTime)
{
	const CTransform  xWsOriginalTarget; // 247
	const float  flLockWeight; // 254
	{
		const CTransform  xWsLockedEndEffector; // 260
		const CTransform  xWsLockedTarget; // 261
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 262
	}
	{
		const float  flForceUnlockAlpha; // 267
		const CTransform  xWsLockedEndEffector; // 269
		const CTransform  xWsLockedTarget; // 270
		CIKChainDescription::GetBreakRestorationTime(); // 267
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 267
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 271
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 249
} /* size: 629, variables: 2, inline expansions: 2 (14 bytes) */

// <0008E56E> ik/ikchaincontext.cpp:279
// variables: 88
// function calls: 187
void CIKChainContext::CalculateTargetFromLock(const CIKChainInterpolationState& interpolationState, const CTransform& xWsOriginalTarget, const CTransform& xWsLockedEndEffector)
{
	CTransform xWsTarget; // 281
	{
		float flLockRotationAlpha; // 287
		{
			QuaternionAligned qDeltaRotation; // 300
			VectorAligned vUp; // 303
			Vector vForward; // 304
			Quaternion::Quaternion(); // 875
			QuaternionInvert(const Quaternion& p); // 300
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 300
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 30
			QuaternionAligned::QuaternionAligned(
						const Quaternion& rhs);  // 300
			QuaternionAligned::QuaternionAligned(
						fltx4 vec);  // 301
			QuaternionAligned::operator*=(
					const QuaternionAligned& q);  // 302
			QuaternionAligned::operator*(
					const QuaternionAligned& q);  // 300
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 303
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
					const VectorAligned& v);  // 441
			QuaternionAligned::GetLeft(); // 304
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
					const VectorAligned& rhs);  // 304
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
			VectorAligned::Normalized(); // 304
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 304
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 306
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 306
			QuaternionAligned::operator*=(
					const QuaternionAligned& q);  // 302
			QuaternionAligned::QuaternionAligned(
						fltx4 vec);  // 301
			QuaternionAligned::operator*(
					const QuaternionAligned& q);  // 308
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
			QuaternionAligned::QuaternionAligned(
						fltx4 vec);  // 545
			QuaternionSlerp(const QuaternionAligned& qFrom,
					const QuaternionAligned& qTo,
					float t);  // 310
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 310
		}
		VectorAligned::operator fltx4(); // 109
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
				const VectorAligned& v0);  // 285
		ConVar::GetFloat(); // 287
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 296
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 283
} /* size: 1033, variables: 1, inline expansions: 2 (14 bytes) */

// <0008E460> ik/ikchaincontext.cpp:317
void CIKChainContext::DebugDrawLocks(const CIKChainInterpolationState& interpolationState, const CIKUpdateInputState& inputState, CIKUpdateOutputState& outputState, const CTransform& xWsOriginalEndEffector, const CTransform& xWsTarget, const Vector& vNormal, const float flLockWeight)
{
} /* size: 0 */

// <000997DB> ik/ikchaincontext.cpp:325
// function calls: 3
void CIKChainContext::ShouldBreakLockPreSolve(const CIKUpdateInputState& inputState, const CSpaceAgnosticBoneAccessor& boneAccessor, const CTransform& xWsLockedEndEffector, const Vector& vWsNormal, const CTransform& xWsTarget)
{
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 331
	CIKChainContext::ShouldBreakLockPreSolve(
				const CIKUpdateInputState& inputState,
				const CSpaceAgnosticBoneAccessor& boneAccessor,
				const CTransform& xWsLockedEndEffector,
				const Vector& vWsNormal,
				const CTransform& xWsTarget);  // 325
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0008E401> ik/ikchaincontext.cpp:325
void CIKChainContext::ShouldBreakLockPreSolve(const CIKUpdateInputState& inputState, const CSpaceAgnosticBoneAccessor& boneAccessor, const CTransform& xWsLockedEndEffector, const Vector& vWsNormal, const CTransform& xWsTarget)
{
} /* size: 0 */

// <0009993C> ik/ikchaincontext.cpp:334
// variable: 1
// function calls: 3
void CIKChainContext::ShouldBreakLockPostSolve(const CIKUpdateInputState& inputState, const CSpaceAgnosticBoneAccessor& boneAccessor, const Vector& vWsNormal)
{
	bool bShouldForceUnlock; // 336
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 338
	CIKChainContext::ShouldBreakLockPostSolve(
				const CIKUpdateInputState& inputState,
				const CSpaceAgnosticBoneAccessor& boneAccessor,
				const Vector& vWsNormal);  // 334
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0008E3AF> ik/ikchaincontext.cpp:334
// variable: 1
void CIKChainContext::ShouldBreakLockPostSolve(const CIKUpdateInputState& inputState, const CSpaceAgnosticBoneAccessor& boneAccessor, const Vector& vWsNormal)
{
	bool bShouldForceUnlock; // 336
} /* size: 0, variables: 1 */

// <0008DCF4> ik/ikchaincontext.cpp:350
// variables: 8
// function calls: 21
void CIKChainContext::CalculateResult_MergedTarget(const CIKChainInterpolationState& interpolationState, const CSpaceAgnosticBoneAccessor& boneAccessor, const Quaternion qWsTilt, const int nTiltBoneIndex, const float flCurrentTime, InterpolatedVarPhase_t phase, CTransform& xWsTarget)
{
	const char   __FUNCTION__; // 48812
	{
		CTransform xWsAnimation; // 354
		CIKChainDescription::GetData(); // 354
		CSpaceAgnosticBoneAccessor::GetModel(); // 354
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				const CTransform  &);  // 355
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 359
	}
	{
		int nIndex; // 361
		{
			const IIKRuleContext* pRuleContext; // 363
			{
				const CIKChainRuleInterpolationState& chainRuleInterpolationState; // 366
				const CTransform  xWsAnimationOnlyTarget; // 367
				CIKRuleContextCalculateTargetInput ruleInput; // 369
				CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 52
				CUtlMemory<CIKChainJointData_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
						int i);  // 52
				CIKChainData_t::GetEndEffectorJoint(); // 83
				CIKChainDescription::GetEndEffectorJoint(); // 367
				CUtlMemory<CIKChainRuleInterpolationState, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::operator[](
						int i);  // 366
				CIKChainJointData_t::GetBoneIndex(); // 367
				CIKRuleContextCalculateTargetInput::CIKRuleContextCalculateTargetInput(
									const CIKChainDescription* pChainDescription,
									const Quaternion& qWsTilt,
									int nTiltBoneIndex,
									const CTransform& xWsAnimationOnlyTarget,
									const CIKChainRuleInterpolationState* pInterpolationState,
									const CSpaceAgnosticBoneAccessor& boneAccessor,
									float flCurrentTime,
									InterpolatedVarPhase_t phase);  // 369
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						CTransform &);  // 371
			}
			CUtlMemory<IIKRuleContext::operator[](
					int i);  // 595
			CUtlVectorBase<IIKRuleContext::operator[](
					int i);  // 363
		}
		CUtlVectorBase<IIKRuleContext::Count(); // 361
	}
	CUtlVectorBase<IIKRuleContext::Count(); // 352
} /* size: 0, variables: 1, inline expansions: 1 (17 bytes) */

// <0008D543> ik/ikchaincontext.cpp:377
// variables: 4
// function calls: 29
void CIKChainContext::Init(InterpolatedVarPhase_t ivPhase, const CIKChainDescription* pIKChain, const CModel* pModel, CIKChainInterpolationState* pInterpolationState)
{
	const CUtlLeanVector<const IIKRuleDescription*, short int>& ruleArray; // 382
	{
		int n; // 386
		{
			const IIKRuleDescription* pRuleDescription; // 388
			IIKRuleContext* pRuleContext; // 390
			CUtlLeanVectorBase<const IIKRuleDescription::Base(); // 452
			CUtlLeanVectorImpl<CUtlLeanVectorBase<const IIKRuleDescription::Element(
				int i);  // 442
			CUtlLeanVectorImpl<CUtlLeanVectorBase<const IIKRuleDescription::operator[](
					int i);  // 388
			CUtlMemory<CIKChainRuleInterpolationState, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::operator[](
					int i);  // 390
			CUtlMemory<IIKRuleContext::operator[](
					int i);  // 588
			CUtlVectorBase<IIKRuleContext::operator[](
					int i);  // 391
		}
		CUtlLeanVectorImpl<CUtlLeanVectorBase<const IIKRuleDescription::Count(); // 386
	}
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 381
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 381
	CUtlLeanVectorImpl<CUtlLeanVectorBase<const IIKRuleDescription::Count(); // 383
	CUtlMemory<IIKRuleContext::NumAllocated(); // 782
	CUtlMemory<IIKRuleContext::IsGrowable(); // 823
	CUtlMemory<IIKRuleContext::IsExternallyAllocated(); // 859
	CUtlMemory<IIKRuleContext::IsExternallyAllocated(); // 861
	CUtlMemory<IIKRuleContext::Grow(
		int num);  // 806
	CUtlMemory<IIKRuleContext::Base(); // 112
	CUtlVectorBase<IIKRuleContext::Base(); // 368
	CUtlVectorBase<IIKRuleContext::ResetDbgInfo(); // 824
	CUtlVectorBase<IIKRuleContext::GrowMemory(
			int num);  // 784
	CUtlVectorBase<IIKRuleContext::GrowVector(
			int num);  // 1445
	CUtlVectorBase<IIKRuleContext::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<IIKRuleContext::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<IIKRuleContext::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<IIKRuleContext::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<IIKRuleContext::SetCount(
		int count);  // 383
	CUtlLeanVectorImpl<CUtlLeanVectorBase<const IIKRuleDescription::Count(); // 385
	CIKChainContext::Invalidate(
			InterpolatedVarPhase_t ivPhase,
			CIKChainInterpolationState* pInterpolationState);  // 394
} /* size: 469, variables: 1, inline expansions: 21 (1376 bytes) */

// <0008D35A> ik/ikchaincontext.cpp:398
// variables: 5
void CIKChainContext::SetLockState(CIKChainInterpolationState& interpolationState, IKChainLockState lockState, bool bForce)
{
	const char   __FUNCTION__; // 48435
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 405
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 408
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 411
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 414
	}
} /* size: 0, variables: 1 */

// <00099A4B> ik/ikchaincontext.cpp:428
void CIKChainContext::SetForceUnlockedState(CIKChainInterpolationState& interpolationState, float flCurrentTime)
{
} /* size: 0 */

// <00099ABB> ik/ikchaincontext.cpp:436
// function calls: 3
void CIKChainContext::SetLockTransform(CIKChainInterpolationState& interpolationState, const CTransform& xWsLock)
{
	{
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				const CTransform  &);  // 440
	}
} /* size: 0 */

// <00098D75> ik/ikchaincontext.cpp:436
// function call: 1
void CTransform& xWsLock, CIKChainInterpolationState& interpolationState, const CIKChainContext::SetLockTransform()
{
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 438
	}
} /* size: 16 */

// <0008D247> ik/ikchaincontext.cpp:436
void CIKChainContext::SetLockTransform(CIKChainInterpolationState& interpolationState, const CTransform& xWsLock)
{
	{
	}
} /* size: 0 */

// <00099BCC> ik/ikchaincontext.cpp:445
void CIKChainContext::Invalidate(InterpolatedVarPhase_t ivPhase, CIKChainInterpolationState* pInterpolationState)
{
} /* size: 44 */

// <0008CE49> ik/ikchaincontext.cpp:453
// variables: 4
// function calls: 9
void CIKChainContext::UpdateLock(CIKChainInterpolationState& interpolationState, const CTransform& xWsEndEffectorTarget, const CSpaceAgnosticBoneAccessor& boneAccessor)
{
	const float  flPreviousMutablePhaseLockValue; // 466
	const CTransform  xWsPotentialLock; // 471
	{
		const float  flInterpAlpha; // 479
		CTransform xWsLock; // 481
		ConVar::GetFloat(); // 479
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 479
		{
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 440
		}
		CIKChainContext::SetLockTransform(
				CIKChainInterpolationState& interpolationState,
				const CTransform& xWsLock);  // 483
	}
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 487
} /* size: 0, variables: 2, inline expansions: 3 (32 bytes) */

// <0008C405> ik/ikchaincontext.cpp:496
// variables: 14
// function calls: 41
void CIKChainContext::GetLockableBoneTransform(const CIKChainInterpolationState& interpolationState, const CSpaceAgnosticBoneAccessor& boneAccessor, const CTransform& xWsTarget)
{
	int nReverseFootLockBoneIndex; // 498
	CTransform xWsLock; // 500
	const float  flTolerance; // 519
	{
		const CTransform& mWsEndEffector; // 507
		const CTransform& mWsReverseFootLockBone; // 508
		const CTransform  mReverseFootLockWorldToBone; // 510
		const CTransform  mEndEffectorInReverseFootLockSpace; // 511
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 52
		CUtlMemory<CIKChainJointData_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
				int i);  // 52
		CIKChainData_t::GetEndEffectorJoint(); // 83
		CIKChainDescription::GetEndEffectorJoint(); // 507
		CIKChainJointData_t::GetBoneIndex(); // 507
		QuaternionAligned::operator fltx4(); // 258
		VectorAligned::operator fltx4(); // 258
		ConcatTransforms(const CTransform  in1,
				const CTransform  in2);  // 511
		QuaternionAligned::operator fltx4(); // 258
		VectorAligned::operator fltx4(); // 258
		ConcatTransforms(const CTransform  in1,
				const CTransform  in2);  // 513
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 513
	}
	CIKChainDescription::GetReverseFootLockBoneIndex(); // 498
	CIKChainDescription::GetUseTargetInsteadOfLockThreshold(); // 519
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
			const VectorAligned& v);  // 522
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
	VectorAligned::LengthSqr(); // 522
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 524
} /* size: 419, variables: 3, inline expansions: 19 (134 bytes) */

// <00099C3C> ik/ikchaincontext.cpp:531
// function calls: 6
void CIKChainContext::GetRuleContextAndInterpolationState(CIKChainInterpolationState& interpolationState, int nRuleIndex, const IIKRuleContext *& pRuleContext, CIKChainRuleInterpolationState *& pRuleInterpolationState)
{
	CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::Count(); // 536
	CUtlMemory<IIKRuleContext::operator[](
			int i);  // 595
	CUtlVectorBase<IIKRuleContext::operator[](
			int i);  // 541
	CUtlMemory<CIKChainRuleInterpolationState, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::operator[](
			int i);  // 542
	CIKChainContext::GetRuleContextAndInterpolationState(
						CIKChainInterpolationState& interpolationState,
						int nRuleIndex,
						const IIKRuleContext  *& pRuleContext,
						CIKChainRuleInterpolationState *& pRuleInterpolationState);  // 531
} /* size: 0, inline expansions: 6 (0 bytes) */

// <0008C3B3> ik/ikchaincontext.cpp:531
void CIKChainContext::GetRuleContextAndInterpolationState(CIKChainInterpolationState& interpolationState, int nRuleIndex, const IIKRuleContext *& pRuleContext, CIKChainRuleInterpolationState *& pRuleInterpolationState)
{
} /* size: 0 */

// <0008BE03> ik/ikchaincontext.cpp:545
// variables: 5
// function calls: 16
void CIKChainContext::UpdateInterpolationState_PreSolve(CIKChainInterpolationState& interpolationState, const CIKUpdateInputState& inputState, const CSpaceAgnosticBoneAccessor& boneAccessor, const Vector& vWsTiltNormal, const Quaternion& qWsTilt, int nTiltBoneIndex, const Vector vWsAverageFootPosition, CTraceRequest& traceHelper, float flDeltaTime)
{
	{
		int nRuleIndex; // 549
		{
			const IIKRuleContext* pRuleContext; // 551
			CIKChainRuleInterpolationState* pRuleInterpolationState; // 552
			{
				const CTransform  xWsAnimationOnlyTarget; // 558
				CIKRuleContextUpdateTargetInput ruleInput; // 559
				CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 52
				CUtlMemory<CIKChainJointData_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
						int i);  // 52
				CIKChainData_t::GetEndEffectorJoint(); // 83
				CIKChainDescription::GetEndEffectorJoint(); // 558
				CIKChainJointData_t::GetBoneIndex(); // 558
				CIKRuleContextUpdateTargetInput::CIKRuleContextUpdateTargetInput(
								const CIKChainDescription* pChainDescription,
								const Vector& vWsTiltNormal,
								const Quaternion& qWsTilt,
								int nTiltBoneIndex,
								const Vector& vWsAverageFootPosition,
								CTraceRequest& traceHelper,
								const CIKChainRuleInterpolationState* pInterpolationState,
								const CSpaceAgnosticBoneAccessor& boneAccessor,
								const CIKUpdateInputState& ikInputState,
								const CTransform& xWsAnimationOnlyTarget,
								const float  flDeltaTime);  // 571
			}
			CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::Count(); // 536
			CUtlMemory<IIKRuleContext::operator[](
					int i);  // 595
			CUtlVectorBase<IIKRuleContext::operator[](
					int i);  // 541
			CUtlMemory<CIKChainRuleInterpolationState, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> >::operator[](
					int i);  // 542
			CIKChainContext::GetRuleContextAndInterpolationState(
								CIKChainInterpolationState& interpolationState,
								int nRuleIndex,
								const IIKRuleContext  *& pRuleContext,
								CIKChainRuleInterpolationState *& pRuleInterpolationState);  // 531
			CIKChainContext::GetRuleContextAndInterpolationState(
								CIKChainInterpolationState& interpolationState,
								int nRuleIndex,
								const IIKRuleContext  *& pRuleContext,
								CIKChainRuleInterpolationState *& pRuleInterpolationState);  // 554
		}
		CUtlVectorBase<IIKRuleContext::Count(); // 47
		CIKChainContext::GetNumRuleContexts(); // 549
	}
} /* size: 483 */

// <0008BB7C> ik/ikchaincontext.cpp:581
// function calls: 6
void CIKChainContext::UpdateInterpolationState_PostSolve(CIKChainInterpolationState& interpolationState, const CIKUpdateInputState& inputState, const CSpaceAgnosticBoneAccessor& boneAccessor, const CTraceRequest& traceHelper, const CTransform& xWsEndEffectorTarget)
{
	CTraceResult::GetNormal(); // 586
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 338
	CIKChainContext::ShouldBreakLockPostSolve(
				const CIKUpdateInputState& inputState,
				const CSpaceAgnosticBoneAccessor& boneAccessor,
				const Vector& vWsNormal);  // 334
	CIKChainContext::ShouldBreakLockPostSolve(
				const CIKUpdateInputState& inputState,
				const CSpaceAgnosticBoneAccessor& boneAccessor,
				const Vector& vWsNormal);  // 586
	CIKChainContext::SetForceUnlockedState(
				CIKChainInterpolationState& interpolationState,
				float flCurrentTime);  // 588
} /* size: 193, inline expansions: 6 (154 bytes) */

// <0008B8C6> ik/ikchaincontext.cpp:595
// variables: 2
// function calls: 6
void CIKChainContext::Solve(const CIKChainInterpolationState& interpolationState, const CIKUpdateInputState& inputState, CIKUpdateOutputState& outputState, const CTraceRequest& traceHelper, const Quaternion& qWsTilt, int nTiltBoneIndex, float flDeltaTime, CTransform& xWsEndEffectorTarget)
{
	IAnimationDebugRenderer* pDebugRenderer; // 597
	bool bDidAnyWork; // 605
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 599
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 604
	CIKChainDescription::GetData(); // 605
} /* size: 268, variables: 2, inline expansions: 6 (56 bytes) */

