
//
// animgraph/jiggleboneposeoperation.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 14
//

// <0174C979> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.cpp:14
// variables: 24
// function calls: 65
void JiggleBoneStatus_t::Constrain(const VectorAligned& vTargetPos, const VectorAligned& vVelocity, float flMaxDist)
{
	VectorAligned vToPos; // 16
	float flDist; // 17
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
			const VectorAligned& v);  // 16
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
	VectorAligned::NormalizeInPlace(); // 17
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
			vec_t s);  // 20
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
			const VectorAligned& v);  // 20
	VectorAligned::operator=(
			const VectorAligned& src);  // 20
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
			const VectorAligned& rhs);  // 21
	VectorAligned::operator=(
			const VectorAligned& src);  // 23
} /* size: 0, variables: 2, inline expansions: 43 (0 bytes) */

// <0174C754> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.cpp:29
// variable: 1
// function calls: 6
void JiggleBoneStatusList_t::JiggleBoneStatusList_t(CSaveablePackedData& packedData, int nNumBones)
{
	CRelativeOffset<JiggleBoneStatus_t>::CRelativeOffset(); // 84
	CRelativeArray<JiggleBoneStatus_t>::CRelativeArray(); // 29
	{
		uint32 i; // 160
	}
	CPackedDataT<true>::AddArray<JiggleBoneStatus_t>(
					uint32 count,
					CPackedHandle<JiggleBoneStatus_t>* handleOut);  // 31
	{
	}
	CRelativeOffset<JiggleBoneStatus_t>::SetOffset(
			const JiggleBoneStatus_t* targetPtr);  // 20
	CRelativeOffset<JiggleBoneStatus_t>::operator=(
			const JiggleBoneStatus_t* targetPtr);  // 115
	CRelativeArray<JiggleBoneStatus_t>::SetArray(
		const JiggleBoneStatus_t* targetArray,
		int32 count);  // 31
} /* size: 0, inline expansions: 6 (154 bytes) */

// <0174C720> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.cpp:29
void JiggleBoneStatusList_t::JiggleBoneStatusList_t(CSaveablePackedData& packedData, int nNumBones)
{
} /* size: 0 */

// <0174C4FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.cpp:35
// variable: 1
// function calls: 6
void JiggleBoneSettingsList_t::JiggleBoneSettingsList_t(CPackedData& packedData, int nNumBones)
{
	CRelativeOffset<JiggleBoneSettings_t>::CRelativeOffset(); // 84
	CRelativeArray<JiggleBoneSettings_t>::CRelativeArray(); // 35
	{
		uint32 i; // 160
	}
	CPackedDataT<false>::AddArray<JiggleBoneSettings_t>(
					uint32 count,
					CPackedHandle<JiggleBoneSettings_t>* handleOut);  // 37
	{
	}
	CRelativeOffset<JiggleBoneSettings_t>::SetOffset(
			const JiggleBoneSettings_t* targetPtr);  // 20
	CRelativeOffset<JiggleBoneSettings_t>::operator=(
			const JiggleBoneSettings_t* targetPtr);  // 115
	CRelativeArray<JiggleBoneSettings_t>::SetArray(
		const JiggleBoneSettings_t* targetArray,
		int32 count);  // 37
} /* size: 0, inline expansions: 6 (154 bytes) */

// <0174C4C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.cpp:35
void JiggleBoneSettingsList_t::JiggleBoneSettingsList_t(CPackedData& packedData, int nNumBones)
{
} /* size: 0 */

// <0174C19C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.cpp:47
// variables: 3
// function calls: 10
void JiggleBoneSettings_t::GetBoneToSimSpaceTransform(const CPoseUpdateContext& context, const CAnimPosePtr& pPose)
{
	const char   __FUNCTION__; // 45341
	{
		const BoneIndex_t  nParentBoneIndex; // 51
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 79
		}
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 51
		CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 51
		CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
				int i);  // 142
		CAnimSkeleton::GetParentIndex(
				BoneIndex_t boneIndex);  // 51
		QuaternionAligned::operator fltx4(); // 471
		VectorAligned::operator fltx4(); // 471
		QuaternionAligned::operator fltx4(); // 471
		VectorAligned::operator fltx4(); // 471
		CTransform::operator*(
				const CTransform& rhs);  // 71
	}
} /* size: 0, variables: 1 */

// <0179A649> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.cpp:88
// variable: 1
// function calls: 10
void JiggleBoneSettings_t::GetTargetPosSimSpace(const CAnimPosePtr& pPose, const CTransform& boneToSimSpaceTransform)
{
	{
		CTransform boneTransform; // 92
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 92
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 121
		CAnimPose::GetLocalSpaceTransform(
					BoneIndex_t boneIndex);  // 92
		QuaternionAligned::operator fltx4(); // 471
		VectorAligned::operator fltx4(); // 471
		QuaternionAligned::operator fltx4(); // 471
		VectorAligned::operator fltx4(); // 471
		CTransform::operator*(
				const CTransform& rhs);  // 92
	}
	JiggleBoneSettings_t::GetTargetPosSimSpace(
				const CAnimPosePtr& pPose,
				const CTransform& boneToSimSpaceTransform);  // 88
} /* size: 109, inline expansions: 1 (10 bytes) */

// <0174C15A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.cpp:88
// variable: 1
void JiggleBoneSettings_t::GetTargetPosSimSpace(const CAnimPosePtr& pPose, const CTransform& boneToSimSpaceTransform)
{
	{
		CTransform boneTransform; // 92
	}
} /* size: 0 */

// <0179A8F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.cpp:100
void JiggleBoneSettings_t::SetNewBonePosition(const CPoseUpdateContext& context, const CAnimPosePtr& pPose, const CTransform& boneToSimSpaceTransform, const VectorAligned& vNewPosSS)
{
} /* size: 0 */

// <01797D9B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.cpp:100
// variables: 27
// function calls: 57
void JiggleBoneSettings_t::SetNewBonePosition(const CAnimPosePtr& pPose, const CTransform& boneToSimSpaceTransform, const VectorAligned& vNewPosSS, const CPoseUpdateContext& context)
{
	{
		VectorAligned vNewPosLS; // 105
		CTransform boneTransformLS; // 108
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
				const VectorAligned& v0);  // 442
		CTransform::TransformVectorByInverse(
					const VectorAligned& v0);  // 105
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 108
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 121
		CAnimPose::GetLocalSpaceTransform(
					BoneIndex_t boneIndex);  // 108
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
				const VectorAligned& v0);  // 109
	}
} /* size: 258 */

// <0174C0F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.cpp:100
// variables: 2
void JiggleBoneSettings_t::SetNewBonePosition(const CPoseUpdateContext& context, const CAnimPosePtr& pPose, const CTransform& boneToSimSpaceTransform, const VectorAligned& vNewPosSS)
{
	{
		VectorAligned vNewPosLS; // 105
		CTransform boneTransformLS; // 108
	}
} /* size: 0 */

// <01749C79> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.cpp:116
// variables: 76
// function calls: 152
void JiggleBoneSettings_t::ConstrainPosition(const CTransform& boneToSimSpaceTransform, const VectorAligned& vTargetPosSS, const VectorAligned& vPosSS)
{
	VectorAligned vPosLS; // 118
	VectorAligned vTargetPosLS; // 119
	VectorAligned vOffsetLS; // 121
	VectorAligned vNewPosLS; // 125
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
			const VectorAligned& v0);  // 442
	CTransform::TransformVectorByInverse(
				const VectorAligned& v0);  // 118
	VectorAligned::operator fltx4(); // 406
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
			const VectorAligned& v0);  // 442
	CTransform::TransformVectorByInverse(
				const VectorAligned& v0);  // 119
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
			const VectorAligned& v);  // 121
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
			const Vector& rhs);  // 122
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
			const Vector& rhs);  // 123
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 398
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 398
	VectorAligned::Min(
		const VectorAligned& v);  // 122
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 404
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 404
	VectorAligned::Max(
		const VectorAligned& v);  // 123
	VectorAligned::operator fltx4(); // 406
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
			const VectorAligned& v0);  // 127
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
			const VectorAligned& v);  // 125
} /* size: 466, variables: 4, inline expansions: 68 (1253 bytes) */

// <0174958D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.cpp:137
// variable: 1
// function calls: 28
void MakeOpDescription(CPoseRecipe& pPoseRecipe, PoseHandle hBasePose, CPackedHandle<JiggleBoneStatusList_t> hInstanceSettings, CPackedHandle<JiggleBoneSettingsList_t> hFixedSettings)
{
	CPackedHandle<CJiggleBonePoseOperation::OpSettings> hParam; // 139
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CJiggleBonePoseOperation::OpSettings>::CPackedHandle(); // 139
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<JiggleBoneSettingsList_t>::CPackedHandle(
			const CPackedHandle<JiggleBoneSettingsList_t>  &);  // 140
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<JiggleBoneStatusList_t>::CPackedHandle(
			const CPackedHandle<JiggleBoneStatusList_t>  &);  // 140
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<JiggleBoneStatusList_t>::CPackedHandle(
			const CPackedHandle<JiggleBoneStatusList_t>  &);  // 104
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<JiggleBoneSettingsList_t>::CPackedHandle(
			const CPackedHandle<JiggleBoneSettingsList_t>  &);  // 105
	OpSettings::OpSettings(
			PoseHandle hBasePose,
			CPackedHandle<JiggleBoneStatusList_t> hInstanceSettings,
			CPackedHandle<JiggleBoneSettingsList_t> hFixedSettings);  // 140
	CPackedDataT<false>::AddItem<CJiggleBonePoseOperation::OpSettings, unsigned char&, CPackedHandle<JiggleBoneStatusList_t>&, CPackedHandle<JiggleBoneSettingsList_t>&>(
																CPackedHandle<CJiggleBonePoseOperation::OpSettings>* handleOut);  // 140
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
	CPackedHandle<CJiggleBonePoseOperation::OpSettings>::GetID(); // 87
	{
	}
	CPoseRecipe::AddPoseOp<CJiggleBonePoseOperation, CJiggleBonePoseOperation::OpSettings>(
											const CPackedHandle<CJiggleBonePoseOperation::OpSettings>& hParam);  // 142
} /* size: 0, variables: 1, inline expansions: 28 (430 bytes) */

// <01747B0E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/jiggleboneposeoperation.cpp:147
// variables: 48
// function calls: 111
void Evaluate(CPoseUpdateContext& context, OpSettings* pSettings)
{
	const JiggleBoneSettingsList_t& settingsList; // 149
	JiggleBoneStatusList_t& statusList; // 150
	CAnimPosePtr pPose; // 153
	const int  nCount; // 155
	const char   __FUNCTION__; // 44910
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 156
	}
	{
		int i; // 159
		{
			const JiggleBoneSettings_t& boneSettings; // 161
			JiggleBoneStatus_t& boneStatus; // 162
			BoneIndex_t nBoneIndex; // 164
			{
				const CTransform  localToSimSpace; // 168
				const VectorAligned  vTargetBonePosSS; // 171
				{
					const VectorAligned  vVelocity; // 185
					const VectorAligned  vAvgVelocity; // 187
					const int  nTotalSubSteps; // 189
					float flRemainingTime; // 191
					{
						int iSubStep; // 193
						{
							const float  flTimeStep; // 195
							const float  flLerpValue; // 198
							const VectorAligned  vSubStepBonePosition; // 200
							const VectorAligned  vBoneMoveDelta; // 201
							const VectorAligned  vAccel; // 204
							VectorAligned vRelativeVelocity; // 208
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
									const VectorAligned& v);  // 201
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
									const VectorAligned& v);  // 208
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
									vec_t s);  // 204
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
									vec_t s);  // 209
							{
								fltx4 retVal; // 1616
								_mm_sub_ps(__m128 __A,
										__m128 __B);  // 1617
							}
							SubSIMD<>(const fltx4& a,
									const fltx4& b);  // 215
							VectorAligned::operator-=(
									const VectorAligned& v);  // 209
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
									const VectorAligned& v);  // 210
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
									vec_t s);  // 213
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
									vec_t s);  // 213
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
									const VectorAligned& v);  // 213
							{
								fltx4 retVal; // 1593
								_mm_add_ps(__m128 __A,
										__m128 __B);  // 1594
							}
							AddSIMD<>(const fltx4& a,
									const fltx4& b);  // 208
							VectorAligned::operator+=(
									const VectorAligned& v);  // 213
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
									vec_t s);  // 214
							{
								fltx4 retVal; // 1593
								_mm_add_ps(__m128 __A,
										__m128 __B);  // 1594
							}
							AddSIMD<>(const fltx4& a,
									const fltx4& b);  // 208
							VectorAligned::operator+=(
									const VectorAligned& v);  // 214
							VectorAligned::operator=(
									const VectorAligned& src);  // 217
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
							const VectorAligned& v);  // 185
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
							vec_t s);  // 185
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
							const VectorAligned& v);  // 187
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
							vec_t s);  // 187
					JiggleBoneSettings_t::SetNewBonePosition(
								const CPoseUpdateContext& context,
								const CAnimPosePtr& pPose,
								const CTransform& boneToSimSpaceTransform,
								const VectorAligned& vNewPosSS);  // 221
					VectorAligned::operator=(
							const VectorAligned& src);  // 224
					VectorAligned::operator=(
							const VectorAligned& src);  // 225
				}
				VectorAligned::operator=(
						const VectorAligned& src);  // 175
				VectorAligned::operator=(
						const VectorAligned& src);  // 177
				VectorAligned::operator=(
						const VectorAligned& src);  // 176
			}
			CRelativeOffset<JiggleBoneSettings_t>::IsValid(); // 35
			CRelativeOffset<JiggleBoneSettings_t>::Get(); // 97
			{
			}
			CRelativeArray<JiggleBoneSettings_t>::operator[](
					int index);  // 161
			{
			}
			CRelativeOffset<JiggleBoneStatus_t>::IsValid(); // 30
			CRelativeOffset<JiggleBoneStatus_t>::Get(); // 90
			CRelativeArray<JiggleBoneStatus_t>::operator[](
					int index);  // 162
		}
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<JiggleBoneSettingsList_t>(
						const CPackedHandle<JiggleBoneSettingsList_t>& handle);  // 33
	CAnimGraphFixedData::operator[]<JiggleBoneSettingsList_t>(
						const CPackedHandle<JiggleBoneSettingsList_t>& handle);  // 149
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<JiggleBoneStatusList_t>(
						const CPackedHandle<JiggleBoneStatusList_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<JiggleBoneStatusList_t>(
						const CPackedHandle<JiggleBoneStatusList_t>& handle);  // 150
	CRelativeArray<JiggleBoneSettings_t>::Count(); // 155
	CRelativeArray<JiggleBoneStatus_t>::Count(); // 156
} /* size: 0, variables: 5, inline expansions: 8 (122 bytes) */

