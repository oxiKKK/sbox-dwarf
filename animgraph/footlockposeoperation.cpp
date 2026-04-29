
//
// animgraph/footlockposeoperation.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 16
//

// <01777296> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.cpp:31
float pow4(float x)
{
} /* size: 0 */

// <01777019> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.cpp:37
// variable: 1
// function calls: 8
void FootLockPoseOpFixedSettings::FootLockPoseOpFixedSettings(CAnimGraphInitContext& initContext, int nLockableFootCount)
{
	CRelativeOffset<FootOpFixedInfo>::CRelativeOffset(); // 84
	CRelativeArray<FootOpFixedInfo>::CRelativeArray(); // 37
	{
		uint32 i; // 160
		FootOpFixedInfo::FootOpFixedInfo(); // 162
	}
	CPackedDataT<false>::AddArray<FootOpFixedInfo>(
					uint32 count,
					CPackedHandle<FootOpFixedInfo>* handleOut);  // 41
	CRelativeOffset<FootOpFixedInfo>::SetOffset(
			const FootOpFixedInfo* targetPtr);  // 20
	CRelativeOffset<FootOpFixedInfo>::operator=(
			const FootOpFixedInfo* targetPtr);  // 115
	CRelativeArray<FootOpFixedInfo>::SetArray(
		const FootOpFixedInfo* targetArray,
		int32 count);  // 41
	FootLockPoseOpFixedSettings::FootLockPoseOpFixedSettings(
					CAnimGraphInitContext& initContext,
					int nLockableFootCount);  // 37
} /* size: 266, inline expansions: 7 (314 bytes) */

// <01776FE5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.cpp:37
void FootLockPoseOpFixedSettings::FootLockPoseOpFixedSettings(CAnimGraphInitContext& initContext, int nLockableFootCount)
{
} /* size: 0 */

// <01776CE4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.cpp:46
// variable: 1
// function calls: 11
void FootLockPoseOpInstanceSettings::FootLockPoseOpInstanceSettings(CAnimGraphInitContext& initContext, int nLockableFootCount)
{
	CRelativeOffset<FootOpTarget>::CRelativeOffset(); // 84
	CRelativeArray<FootOpTarget>::CRelativeArray(); // 46
	Vector::operator=(
			const Vector& vOther);  // 95
	Vector::Vector(); // 93
	VPlane::VPlane(
		const Vector& vNormal,
		vec_t dist);  // 46
	CDampedValue::CDampedValue(
			float flStartingValue,
			float flStartingVelocity);  // 46
	{
		uint32 i; // 160
		FootOpTarget::FootOpTarget(); // 162
	}
	CPackedDataT<true>::AddArray<FootOpTarget>(
				uint32 count,
				CPackedHandle<FootOpTarget>* handleOut);  // 50
	CRelativeOffset<FootOpTarget>::SetOffset(
			const FootOpTarget* targetPtr);  // 20
	CRelativeOffset<FootOpTarget>::operator=(
			const FootOpTarget* targetPtr);  // 115
	CRelativeArray<FootOpTarget>::SetArray(
		const FootOpTarget* targetArray,
		int32 count);  // 50
} /* size: 277, inline expansions: 10 (269 bytes) */

// <01776CB0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.cpp:46
void FootLockPoseOpInstanceSettings::FootLockPoseOpInstanceSettings(CAnimGraphInitContext& initContext, int nLockableFootCount)
{
} /* size: 0 */

// <017765C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.cpp:56
// variable: 1
// function calls: 28
void MakeOpDescription(CPoseRecipe& pPoseRecipe, PoseHandle hBasePose, CPackedHandle<FootLockPoseOpInstanceSettings> hInstanceSettings, CPackedHandle<FootLockPoseOpFixedSettings> hFixedSettings)
{
	CPackedHandle<CFootLockPoseOperation::OpSettings> hParam; // 58
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CFootLockPoseOperation::OpSettings>::CPackedHandle(); // 58
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<FootLockPoseOpFixedSettings>::CPackedHandle(
			const CPackedHandle<FootLockPoseOpFixedSettings>  &);  // 140
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<FootLockPoseOpInstanceSettings>::CPackedHandle(
			const CPackedHandle<FootLockPoseOpInstanceSettings>  &);  // 140
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<FootLockPoseOpInstanceSettings>::CPackedHandle(
			const CPackedHandle<FootLockPoseOpInstanceSettings>  &);  // 116
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<FootLockPoseOpFixedSettings>::CPackedHandle(
			const CPackedHandle<FootLockPoseOpFixedSettings>  &);  // 117
	OpSettings::OpSettings(
			PoseHandle hBasePose,
			CPackedHandle<FootLockPoseOpInstanceSettings> hInstanceSettings,
			CPackedHandle<FootLockPoseOpFixedSettings> hFixedSettings);  // 140
	CPackedDataT<false>::AddItem<CFootLockPoseOperation::OpSettings, unsigned char&, CPackedHandle<FootLockPoseOpInstanceSettings>&, CPackedHandle<FootLockPoseOpFixedSettings>&>(
																CPackedHandle<CFootLockPoseOperation::OpSettings>* handleOut);  // 59
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
	CPackedHandle<CFootLockPoseOperation::OpSettings>::GetID(); // 87
	{
	}
	CPoseRecipe::AddPoseOp<CFootLockPoseOperation, CFootLockPoseOperation::OpSettings>(
										const CPackedHandle<CFootLockPoseOperation::OpSettings>& hParam);  // 61
} /* size: 0, variables: 1, inline expansions: 28 (430 bytes) */

// <0177653E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.cpp:64
// variables: 6
inline VectorAligned IntersectRay(const VPlane& plane, const Ray_t& ray, const VectorAligned& vDefault)
{
	VectorAligned vP0; // 66
	VectorAligned vL0; // 67
	VectorAligned vRayDirection; // 68
	float flDenominator; // 69
	float flTime; // 70
	{
		VectorAligned vP010; // 73
	}
} /* size: 0, variables: 5 */

// <017763C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.cpp:85
// variables: 19
void HandleTilt(CPoseUpdateContext& context, const FootLockPoseOpFixedSettings& fixedSettings, FootLockPoseOpInstanceSettings& instanceSettings, CAnimPosePtr& pBasePose)
{
	{
		IAnimationDebugRenderer* pDebugRenderer; // 97
		CAnimPoseWrapper poseWrapper; // 98
	}
	{
		const CTransform  xMsHip; // 104
		const VectorAligned  vWsHip; // 105
		const VectorAligned  vWsPlaneCenter; // 108
		QuaternionAligned qWsPlane; // 110
		VectorAligned vWsNewHipPosition; // 113
		const Ray_t  ray; // 115
		const VectorAligned  vWsContactPosition; // 117
		const VectorAligned  vMsNewHipPosition; // 121
		const CTransform  xMsNewHip; // 122
		{
			const VectorAligned  vMsTiltNormal; // 128
			const QuaternionAligned  qMsTiltDeltaFromUp; // 129
			const int  nParentIndex; // 131
			const QuaternionAligned  qMsParent; // 132
			const QuaternionAligned  qMsTiltBoneInitial; // 135
			const QuaternionAligned  qMsTiltBone; // 138
			const QuaternionAligned  qPsTiltBone; // 139
			const CTransform  xPsTiltBoneTilted; // 142
		}
	}
} /* size: 0 */

// <01773381> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.cpp:152
// variables: 94
// function calls: 205
CTransform CalculateIKTargetMS(const FootOpFixedInfo& fixedFootInfo, const CTransform& ankleTransformMS, const VectorAligned& vFootBasePosMS, const VectorAligned& vFootBaseTipMS)
{
	VectorAligned vTargetAnklePosMS; // 160
	const CTransform  ikTargetMS; // 182
	{
		const VectorAligned  vToePosMS; // 162
		const VectorAligned  vHeelPosMS; // 163
		const VectorAligned  vFootBaseDirMS; // 165
		const VectorAligned  vFootBaseNormal; // 166
		bool bUseToe; // 168
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
				const VectorAligned& v0);  // 162
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
			const VectorAligned& v);  // 166
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
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
				const VectorAligned& v);  // 408
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
				const VectorAligned& v0);  // 163
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
				const VectorAligned& v);  // 165
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
			const VectorAligned& v);  // 166
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
		VectorAligned::Normalized(); // 166
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
				const VectorAligned& v);  // 168
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
			const VectorAligned& v);  // 168
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
				const VectorAligned& v);  // 168
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
			const VectorAligned& v);  // 168
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
				const VectorAligned& v);  // 173
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
				const VectorAligned& v);  // 173
		VectorAligned::operator=(
				const VectorAligned& src);  // 173
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
				const VectorAligned& v);  // 178
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
				const VectorAligned& v);  // 178
		VectorAligned::operator=(
				const VectorAligned& src);  // 178
	}
	VectorAligned::VectorAligned(); // 160
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 182
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 182
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 182
} /* size: 480, variables: 2, inline expansions: 11 (78 bytes) */

// <01771B50> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.cpp:186
// variables: 35
// function calls: 90
void ApplyIKToFoot(CPoseUpdateContext& context, CAnimPosePtr& pBasePose, const FootLockPoseOpFixedSettings& fixedSettings, int iFoot, const CTransform& ikTargetMSIn, bool bDebug)
{
	CTransform ikTargetMS; // 188
	const FootOpFixedInfo& fixedFootInfo; // 190
	{
		const CIKData_t& ikData; // 193
		const CIKChainData_t& ikChain; // 194
		IAnimationGraphVisualizationManager* pVis; // 196
		const BoneIndex_t  nTargetBoneIndex; // 236
		const BoneIndex_t  nAnkleBoneIndex; // 237
		{
			TwoBoneIKSettings_t ikSettings; // 201
			CAnimParamHandle::CAnimParamHandle(); // 32
			CAnimParamHandle::CAnimParamHandle(); // 32
			TwoBoneIKSettings_t::TwoBoneIKSettings_t(); // 201
			CUtlMemory<CIKChainJointData_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
					int i);  // 202
			CUtlMemory<CIKChainJointData_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
					int i);  // 203
			CUtlMemory<CIKChainJointData_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
					int i);  // 204
			CUtlMemory<CIKChainJointData_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
					int i);  // 208
			VectorAligned::operator=(
					const VectorAligned& src);  // 208
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
						const int  __mask);  // 3343
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
					const VectorAligned& v0);  // 212
		}
		{
			const CTransform  ikTargetWS; // 219
			CAnimPoseWrapper poseWrapper; // 221
			IKSolverSettings_t solverSettings; // 223
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 219
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
					float flScale);  // 221
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
			CAnimPoseWrapper::~CAnimPoseWrapper(); // 233
		}
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 117
		CPoseUpdateContext::GetVisualizationManager(); // 196
		CUtlMemory<CIKChainData_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::operator[](
				int i);  // 194
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 199
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 243
	}
	{
	}
	CRelativeOffset<FootOpFixedInfo>::IsValid(); // 35
	CRelativeOffset<FootOpFixedInfo>::Get(); // 97
	CRelativeArray<FootOpFixedInfo>::operator[](
			int index);  // 190
} /* size: 0, variables: 2, inline expansions: 3 (126 bytes) */

// <01771837> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.cpp:248
// variables: 47
CTransform CalculateFootIKTarget(CPoseUpdateContext& context, const FootLockPoseOpFixedSettings& fixedSettings, FootLockPoseOpInstanceSettings& instanceSettings, CAnimPosePtr& pBasePose, const CTransform& invLocalToWorldXform, int iFoot)
{
	const FootOpFixedInfo& fixedFootInfo; // 257
	const BoneIndex_t  nTargetBoneIndex; // 258
	const BoneIndex_t  nAnkleBoneIndex; // 259
	CTransform ankleTransform; // 267
	{
		const FootOpTarget& footTarget; // 271
		const VectorAligned  vFootBasePosMS; // 273
		const VectorAligned  vFootBaseDirMS; // 274
		const VectorAligned  vFootBaseTipMS; // 275
		{
			const CTransform  originalAnkleBoneXformMS; // 280
			const VectorAligned  vTargetFootBaseDirMS; // 281
			float flOriginalFootVerticalLerpValue; // 283
			float flProgressionLerpAmount; // 295
			QuaternionAligned qAdjustedAnkleOrientation; // 301
			CTransform ankleTransformMS; // 325
			CTransform horizontalAlignedAnkleTransform; // 330
			CTransform fullyAlignedAnkleTransform; // 333
			float flFootVerticalLerpValue; // 335
			CTransform newAnkleTransformMS; // 380
			{
				const VectorAligned  vToePosMS; // 286
				const VectorAligned  vHeelPosMS; // 287
				const VectorAligned  vToHeel; // 288
			}
			{
				const VectorAligned  vToePosMS; // 303
				const CIKData_t& ikData; // 305
				const CIKChainData_t& ikChain; // 306
				int nHipBoneIndex; // 308
				const VectorAligned  vHipPosMS; // 310
				VectorAligned vHipToToe; // 312
				VectorAligned vHipToFootBase; // 313
				QuaternionAligned qAlignToFootBaseRot; // 315
				float flLerpValue; // 320
			}
			{
				const VectorAligned  vToePosMS; // 338
				const VectorAligned  vHeelPosMS; // 339
				VectorAligned vCurrentFootBaseDirMS; // 340
				const VectorAligned  vToAnkle; // 343
				const VectorAligned  vToHeel; // 344
				const VectorAligned  vFootLeft; // 345
				const VectorAligned  vFootUp; // 346
				const float  dp; // 347
				QuaternionAligned qHorizontalRotation; // 353
				VectorAligned vIntermediateFootBaseDirMS; // 355
				QuaternionAligned qVerticalRotation; // 357
				QuaternionAligned qGroundAlignRotation; // 362
				{
					VectorAligned vFootUpLS; // 365
					VectorAligned vFootUpMS; // 366
					VectorAligned vGroundNormalMS; // 368
				}
			}
			{
				float targetTiltLerpVal; // 386
				float flAdjustedVerticalLerpValue; // 387
			}
		}
	}
} /* size: 0, variables: 4 */

// <017717C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.cpp:409
// variables: 3
void ApplyHipShift(CPoseUpdateContext& context, const FootLockPoseOpFixedSettings& fixedSettings, FootLockPoseOpInstanceSettings& instanceSettings, CAnimPosePtr& pBasePose)
{
	{
		const int  nFootCount; // 413
		{
			VectorAligned vOffsetMS; // 416
			CTransform hipTransform; // 419
		}
	}
} /* size: 0 */

// <0176CFCC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.cpp:428
// variables: 137
// function calls: 318
void AdjustHipHeight(CPoseUpdateContext& context, const FootLockPoseOpFixedSettings& fixedSettings, FootLockPoseOpInstanceSettings& instanceSettings, CTransform* targetTransformsMS, CAnimPosePtr& pBasePose)
{
	const char   __FUNCTION__; // 45089
	{
		const int  nFootCount; // 432
		CTransform xHipPositionMS; // 435
		const float  flHipHeight; // 436
		float flDownAdjustHeight; // 439
		float flUpAdjustHeight; // 440
		float flAdjustment; // 513
		{
			int iFoot; // 442
			{
				const FootOpFixedInfo& footFixedInfo; // 446
				const float  flMaxIKLength; // 448
				const VectorAligned  vTargetPos; // 450
				VectorAligned vAnchorBonePosMS; // 457
				VectorAligned vAnkleBonePosMS; // 458
				VectorAligned vAnchorToAnkle; // 461
				float flCurrentLegLength; // 462
				float flIKLength; // 463
				VectorAligned vAnchorToTarget; // 465
				float flDistToTarget; // 466
				VectorAligned vMaxReachPos; // 475
				VectorAligned vAnchorToReachPos; // 494
				VectorAligned vMaxExtentPos; // 495
				float flMinFootHeight; // 497
				float flMaxFootHeight; // 501
				VectorAligned vHipsToTarget; // 505
				float flTargetExtent; // 506
				{
					float A; // 479
					float B; // 480
					float C; // 481
					float t1; // 483
					float t2; // 483
					{
						float t; // 486
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 490
						}
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 268
						{
							fltx4 retVal; // 1134
							_mm_set1_ps(float __F); // 1135
						}
						ReplicateX4<>(float flValue); // 268
						VectorAligned::VectorAligned(
								fltx4 rhs);  // 268
						VectorAligned::operator*(
								vec_t s);  // 488
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
								const VectorAligned& v);  // 488
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
								const VectorAligned& v);  // 490
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
						VectorAligned::Length(); // 490
						CloseEnough(float a,
								float b,
								float epsilon);  // 490
					}
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
							const fltx4& b);  // 379
					_mm_cvtss_f32(__m128 __A); // 1496
					GetXSIMD<>(fltx4 a); // 380
					VectorAligned::Dot(
						const VectorAligned& v);  // 416
					DotProduct(const VectorAligned& lhs,
							const VectorAligned& rhs);  // 480
					_mm_cvtss_f32(__m128 __A); // 1496
					GetXSIMD<>(fltx4 a); // 380
					VectorAligned::Dot(
						const VectorAligned& v);  // 416
					DotProduct(const VectorAligned& lhs,
							const VectorAligned& rhs);  // 481
					Sqr(float f); // 481
				}
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
				VectorAligned::Normalized(); // 495
				{
				}
				CRelativeOffset<FootOpFixedInfo>::IsValid(); // 35
				CRelativeOffset<FootOpFixedInfo>::Get(); // 97
				CRelativeArray<FootOpFixedInfo>::operator[](
						int index);  // 446
				CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 457
				CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 458
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
						const VectorAligned& v);  // 461
				Lerp<float>(float flPercent,
						const float& A,
						const float& B);  // 463
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
						const VectorAligned& v);  // 465
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
				_mm_cvtss_f32(__m128 __A); // 1496
				GetXSIMD<>(fltx4 a); // 345
				VectorAligned::NormalizeInPlaceSafe(
							const VectorAligned& vFallback);  // 330
				VectorAligned::NormalizeInPlace(); // 462
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
				VectorAligned::Length(); // 466
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 256
				VectorAligned::operator-(
						const VectorAligned& v);  // 494
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
						const VectorAligned& v);  // 497
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
						const VectorAligned& v);  // 501
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
						const VectorAligned& v);  // 505
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 506
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
						vec_t s);  // 495
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
						const VectorAligned& v);  // 495
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 497
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 501
			}
			{
			}
			CRelativeOffset<FootOpTarget>::IsValid(); // 30
			CRelativeOffset<FootOpTarget>::Get(); // 90
			CRelativeArray<FootOpTarget>::operator[](
					int index);  // 444
		}
		{
			int iFoot; // 548
			{
				const FootOpFixedInfo& footFixedInfo; // 552
				const float  flMaxIKLength; // 554
				const VectorAligned  vTargetPos; // 556
				VectorAligned vAnchorBonePosMS; // 559
				VectorAligned vAnkleBonePosMS; // 560
				float flCurrentLegLength; // 563
				float flIKLength; // 564
				VectorAligned vAnchorToTarget; // 566
				VectorAligned vMaxExtentPos; // 567
				float flMinFootHeight; // 569
				float flMaxFootHeight; // 573
				VectorAligned vHipsToTarget; // 577
				float flTargetExtent; // 578
				{
					float flTargetAdjustDist; // 582
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
							const VectorAligned& v);  // 583
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
							vec_t s);  // 583
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
							const VectorAligned& v0);  // 583
				}
				{
					float flTargetAdjustDist; // 588
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
							vec_t s);  // 589
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
							const VectorAligned& v);  // 589
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
							const VectorAligned& v0);  // 589
				}
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
				VectorAligned::Normalized(); // 567
				{
				}
				CRelativeOffset<FootOpFixedInfo>::IsValid(); // 35
				CRelativeOffset<FootOpFixedInfo>::Get(); // 97
				CRelativeArray<FootOpFixedInfo>::operator[](
						int index);  // 552
				CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 559
				CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 560
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
						const VectorAligned& v);  // 563
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
						const VectorAligned& v);  // 566
				Lerp<float>(float flPercent,
						const float& A,
						const float& B);  // 564
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
				VectorAligned::Length(); // 563
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
						vec_t s);  // 567
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
						const VectorAligned& v);  // 569
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
						const VectorAligned& v);  // 573
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
						const VectorAligned& v);  // 577
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 573
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 578
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
						const VectorAligned& v);  // 567
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 569
			}
			{
			}
			CRelativeOffset<FootOpTarget>::IsValid(); // 30
			CRelativeOffset<FootOpTarget>::Get(); // 90
			CRelativeArray<FootOpTarget>::operator[](
					int index);  // 550
		}
		CRelativeArray<FootOpFixedInfo>::Count(); // 432
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 435
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 541
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
				vec_t s);  // 543
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
				const VectorAligned& v);  // 543
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
				const VectorAligned& v0);  // 543
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 544
	}
} /* size: 0, variables: 1 */

// <0176CEED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.cpp:599
// variables: 10
void UpdateLockBreak(float flTimeStep, const CAnimPosePtr& pBasePose, const FootLockPoseOpFixedSettings& fixedSettings, FootLockPoseOpInstanceSettings& instanceSettings, const CTransform* ikTargetsMS)
{
	{
		const int  nFootCount; // 603
		{
			int iFoot; // 606
			{
				FootOpTarget& footInstData; // 608
				const FootOpFixedInfo& footFixedData; // 609
				float flDistToIKTarget; // 612
				const BoneIndex_t  nIkAnchorBoneIndex; // 613
				const float  flMaxIKLength; // 620
				float flBlendDirection; // 642
				float flBlendWeight; // 643
				{
					const CTransform& anchorTransformMS; // 616
				}
			}
		}
	}
} /* size: 0 */

// <0176CE37> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.cpp:650
// variables: 7
void StretchLeg(CPoseUpdateContext& context, const CAnimPosePtr& pBasePose, const FootLockPoseOpFixedSettings& fixedSettings, int iFoot, const CTransform& ikTargetMS)
{
	{
		const FootOpFixedInfo& footFixedData; // 654
		const BoneIndex_t  nIkAnchorBoneIndex; // 656
		{
			CTransform anchorTransformMS; // 660
			VectorAligned vToIKTarget; // 662
			const float  flDistToIKTarget; // 664
			const float  flMaxIKLength; // 666
			{
				float flStretchDist; // 671
			}
		}
	}
} /* size: 0 */

// <01756115> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockposeoperation.cpp:683
// variables: 668
// function calls: 1,539
void Evaluate(CPoseUpdateContext& context, OpSettings* pSettings)
{
	const FootLockPoseOpFixedSettings& fixedSettings; // 685
	FootLockPoseOpInstanceSettings& instanceSettings; // 686
	CAnimPosePtr pBasePose; // 689
	const CTransform  invLocalToWorldXform; // 714
	const int  kMaxFeet; // 716
	CTransform ikTargetsMS; // 717
	const char   __FUNCTION__; // 44910
	{
		int iFoot; // 697
		{
			const FootOpTarget& footTarget; // 699
			VectorAligned vToePosWS; // 701
			VectorAligned vHeelPosWS; // 702
			CRelativeOffset<FootOpTarget>::IsValid(); // 30
			CRelativeOffset<FootOpTarget>::Get(); // 90
			CRelativeArray<FootOpTarget>::operator[](
					int index);  // 699
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
					const VectorAligned& v);  // 702
			VertexColor_t::VertexColor_t(
					uint8 ir,
					uint8 ig,
					uint8 ib,
					uint8 ia);  // 704
		}
		CRelativeArray<FootOpTarget>::Count(); // 697
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 718
	}
	{
		int iFoot; // 720
		CRelativeArray<FootOpFixedInfo>::Count(); // 720
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 267
		{
			const FootOpTarget& footTarget; // 271
			const VectorAligned  vFootBasePosMS; // 273
			const VectorAligned  vFootBaseDirMS; // 274
			const VectorAligned  vFootBaseTipMS; // 275
			{
			}
			CRelativeOffset<FootOpTarget>::IsValid(); // 30
			CRelativeOffset<FootOpTarget>::Get(); // 90
			CRelativeArray<FootOpTarget>::operator[](
					int index);  // 271
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
					const VectorAligned& v0);  // 273
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
					const VectorAligned& v);  // 275
			CloseEnough(const Vector& a,
					const Vector& b,
					float epsilon);  // 278
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
			VectorAligned::operator Vector(); // 278
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
			VectorAligned::operator Vector(); // 278
			{
				const CTransform  originalAnkleBoneXformMS; // 280
				const VectorAligned  vTargetFootBaseDirMS; // 281
				float flOriginalFootVerticalLerpValue; // 283
				float flProgressionLerpAmount; // 295
				QuaternionAligned qAdjustedAnkleOrientation; // 301
				CTransform ankleTransformMS; // 325
				CTransform horizontalAlignedAnkleTransform; // 330
				CTransform fullyAlignedAnkleTransform; // 333
				float flFootVerticalLerpValue; // 335
				CTransform newAnkleTransformMS; // 380
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
				VectorAligned::Normalized(); // 281
				{
					const VectorAligned  vToePosMS; // 286
					const VectorAligned  vHeelPosMS; // 287
					const VectorAligned  vToHeel; // 288
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
								const int  __mask);  // 3343
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 3345
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 3347
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
						fltx4 retVal; // 1352
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1353
					}
					SplatWSIMD<>(const fltx4& a); // 313
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
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 409
					{
						fltx4 retVal; // 1352
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1353
					}
					SplatWSIMD<>(const fltx4& a); // 406
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
							const VectorAligned& v0);  // 286
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
							const VectorAligned& rhs);  // 290
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 410
					{
						fltx4 v1_yzxx; // 3340
						fltx4 v2_zxyy; // 3342
						fltx4 v1_zxyy; // 3344
						fltx4 v2_yzxx; // 3346
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
							const VectorAligned& v);  // 408
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 409
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 411
					CTransform::TransformVector(
							const VectorAligned& v0);  // 287
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
							const VectorAligned& v);  // 288
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
					VectorAligned::Normalized(); // 288
				}
				{
					const VectorAligned  vToePosMS; // 303
					const CIKData_t& ikData; // 305
					const CIKChainData_t& ikChain; // 306
					int nHipBoneIndex; // 308
					const VectorAligned  vHipPosMS; // 310
					VectorAligned vHipToToe; // 312
					VectorAligned vHipToFootBase; // 313
					QuaternionAligned qAlignToFootBaseRot; // 315
					float flLerpValue; // 320
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 318
					QuaternionAligned::operator*(
							const VectorAligned& v);  // 408
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 411
					CTransform::TransformVector(
							const VectorAligned& v0);  // 303
					CUtlMemory<CIKChainData_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::operator[](
							int i);  // 306
					CUtlMemory<CIKChainJointData_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
							int i);  // 308
					CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 310
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
							const VectorAligned& v);  // 313
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
							const VectorAligned& v);  // 312
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
						fltx4 retVal; // 1333
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1334
					}
					SplatZSIMD<>(const fltx4& a); // 1695
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
					VectorAligned::Normalized(); // 315
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
					VectorAligned::Normalized(); // 315
					QuaternionAligned::QuaternionAligned(
								fltx4 vec);  // 301
					QuaternionAligned::operator*=(
							const QuaternionAligned& q);  // 302
					QuaternionAligned::operator*(
							const QuaternionAligned& q);  // 317
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 320
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
								float t);  // 321
				}
				pow4(float x); // 296
				QuaternionAligned::QuaternionAligned(); // 301
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 325
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 325
				VectorAligned::VectorAligned(); // 33
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 30
				QuaternionAligned::QuaternionAligned(
							const Quaternion& rhs);  // 33
				CTransform::SetPositionAndScale(
							const Vector& v0,
							float flScale);  // 33
				CTransform::CTransform(
						const Vector& v,
						const Quaternion& q,
						float flScale);  // 325
				{
					const VectorAligned  vToePosMS; // 338
					const VectorAligned  vHeelPosMS; // 339
					VectorAligned vCurrentFootBaseDirMS; // 340
					const VectorAligned  vToAnkle; // 343
					const VectorAligned  vToHeel; // 344
					const VectorAligned  vFootLeft; // 345
					const VectorAligned  vFootUp; // 346
					const float  dp; // 347
					QuaternionAligned qHorizontalRotation; // 353
					VectorAligned vIntermediateFootBaseDirMS; // 355
					QuaternionAligned qVerticalRotation; // 357
					QuaternionAligned qGroundAlignRotation; // 362
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
							const VectorAligned& v0);  // 338
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
							const VectorAligned& rhs);  // 347
					{
						fltx4 v1_yzxx; // 3340
						fltx4 v2_zxyy; // 3342
						fltx4 v1_zxyy; // 3344
						fltx4 v2_yzxx; // 3346
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
							const VectorAligned& v);  // 408
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
							const VectorAligned& v0);  // 339
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
							const VectorAligned& v);  // 340
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
					VectorAligned::Normalized(); // 340
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
							const VectorAligned& v);  // 344
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
							const VectorAligned& v);  // 343
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
					VectorAligned::Normalized(); // 343
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
					VectorAligned::Normalized(); // 344
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
								const fltx4& v2);  // 386
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 386
					VectorAligned::Cross(
						const VectorAligned& v);  // 422
					CrossProduct(const VectorAligned& lhs,
							const VectorAligned& rhs);  // 345
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
								const fltx4& v2);  // 386
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 386
					VectorAligned::Cross(
						const VectorAligned& v);  // 422
					CrossProduct(const VectorAligned& lhs,
							const VectorAligned& rhs);  // 346
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 229
					VectorAligned::operator*=(
							vec_t s);  // 350
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
							const VectorAligned& v);  // 355
					QuaternionAligned::operator*=(
							const QuaternionAligned& q);  // 302
					QuaternionAligned::QuaternionAligned(
								fltx4 vec);  // 301
					QuaternionAligned::operator*(
							const QuaternionAligned& q);  // 359
					ConVar::GetInt(); // 351
					ConVar::GetBool(); // 363
					{
						VectorAligned vFootUpLS; // 365
						VectorAligned vFootUpMS; // 366
						VectorAligned vGroundNormalMS; // 368
						CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 365
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
								const VectorAligned& v);  // 448
						CTransform::RotateVectorByInverse(
									const VectorAligned& v0);  // 365
						CUtlMemory<CTransform, int>::operator[](
								int i);  // 595
						CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
								int i);  // 170
						CAnimSkeleton::GetBindPoseModelSpace(
									BoneIndex_t boneIndex);  // 365
						CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 365
						{
							fltx4 retVal; // 1352
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 1353
						}
						SplatWSIMD<>(const fltx4& a); // 313
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
									const int  __mask);  // 3343
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 3345
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 3347
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
								const VectorAligned& v);  // 430
						CTransform::RotateVector(
								const VectorAligned& v0);  // 366
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
								const VectorAligned& v0);  // 368
						QuaternionAligned::operator=(
								const QuaternionAligned& vOther);  // 369
					}
					QuaternionAligned::operator*=(
							const QuaternionAligned& q);  // 302
					QuaternionAligned::QuaternionAligned(
								fltx4 vec);  // 301
					QuaternionAligned::operator*(
							const QuaternionAligned& q);  // 372
					QuaternionAligned::QuaternionAligned(
								fltx4 vec);  // 301
					QuaternionAligned::operator*=(
							const QuaternionAligned& q);  // 302
					QuaternionAligned::operator*(
							const QuaternionAligned& q);  // 372
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
						fltx4 retVal; // 1333
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1334
					}
					SplatZSIMD<>(const fltx4& a); // 1695
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
							const VectorAligned& rhs);  // 375
				}
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
						float t);  // 194
				VectorAligned::VectorAligned(); // 31
				QuaternionAligned::QuaternionAligned(); // 31
				CTransform::CTransform(); // 191
				{
					fltx4 retVal; // 1134
					_mm_set1_ps(float __F); // 1135
				}
				ReplicateX4<>(float flValue); // 196
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 186
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 186
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 186
				LerpFl4(const fltx4& percent,
					const fltx4& a,
					const fltx4& b);  // 196
				Slerp(const CTransform& p,
					const CTransform& q,
					float t);  // 380
				{
					float targetTiltLerpVal; // 386
					float flAdjustedVerticalLerpValue; // 387
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 387
					_mm_cvtss_f32(__m128 __A); // 1534
					GetZSIMD<>(fltx4 a); // 76
					VectorAligned::z(); // 386
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
							float t);  // 194
					VectorAligned::VectorAligned(); // 31
					QuaternionAligned::QuaternionAligned(); // 31
					CTransform::CTransform(); // 191
					{
						fltx4 retVal; // 1134
						_mm_set1_ps(float __F); // 1135
					}
					ReplicateX4<>(float flValue); // 196
					{
						fltx4 retVal; // 1616
						_mm_sub_ps(__m128 __A,
								__m128 __B);  // 1617
					}
					SubSIMD<>(const fltx4& a,
							const fltx4& b);  // 186
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 186
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 186
					LerpFl4(const fltx4& percent,
						const fltx4& a,
						const fltx4& b);  // 196
					Slerp(const CTransform& p,
						const CTransform& q,
						float t);  // 392
				}
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						const CTransform  &);  // 396
			}
			{
			}
			CRelativeOffset<FootOpFixedInfo>::IsValid(); // 35
			CRelativeOffset<FootOpFixedInfo>::Get(); // 97
			CRelativeArray<FootOpFixedInfo>::operator[](
					int index);  // 400
		}
		CRelativeOffset<FootOpFixedInfo>::IsValid(); // 35
		CRelativeOffset<FootOpFixedInfo>::Get(); // 97
		CRelativeArray<FootOpFixedInfo>::operator[](
				int index);  // 257
		CalculateFootIKTarget(CPoseUpdateContext& context,
					const FootLockPoseOpFixedSettings& fixedSettings,
					FootLockPoseOpInstanceSettings& instanceSettings,
					CAnimPosePtr& pBasePose,
					const CTransform& invLocalToWorldXform,
					int iFoot);  // 722
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 722
	}
	{
		CTransform xHipPositionMS; // 729
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 729
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
				vec_t s);  // 730
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
				const VectorAligned& v);  // 730
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
				const VectorAligned& v0);  // 730
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 731
	}
	{
		int iFoot; // 739
		{
			BoneIndex_t nAnkleBoneIndex; // 742
			{
				float flBlendWeight; // 745
				{
					const CTransform  originalAnkleBoneXformMS; // 748
					CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 748
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
					QuaternionSlerpSIMD<>(const fltx4& p,
								const fltx4& q,
								float t);  // 545
					QuaternionAligned::operator fltx4(); // 545
					QuaternionAligned::operator fltx4(); // 545
					QuaternionAligned::QuaternionAligned(
								fltx4 vec);  // 545
					QuaternionSlerp(const QuaternionAligned& qFrom,
							const QuaternionAligned& qTo,
							float t);  // 194
					VectorAligned::VectorAligned(); // 31
					QuaternionAligned::QuaternionAligned(); // 31
					CTransform::CTransform(); // 191
					VectorAligned::operator fltx4(); // 196
					VectorAligned::operator fltx4(); // 196
					{
						fltx4 retVal; // 1616
						_mm_sub_ps(__m128 __A,
								__m128 __B);  // 1617
					}
					SubSIMD<>(const fltx4& a,
							const fltx4& b);  // 186
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 186
					{
						fltx4 retVal; // 1593
						_mm_add_ps(__m128 __A,
								__m128 __B);  // 1594
					}
					AddSIMD<>(const fltx4& a,
							const fltx4& b);  // 186
					LerpFl4(const fltx4& percent,
						const fltx4& a,
						const fltx4& b);  // 196
					{
						fltx4 retVal; // 1134
						_mm_set1_ps(float __F); // 1135
					}
					ReplicateX4<>(float flValue); // 196
					Slerp(const CTransform& p,
						const CTransform& q,
						float t);  // 750
					VectorAligned::operator=(
							const VectorAligned& src);  // 26
					QuaternionAligned::operator=(
							const QuaternionAligned& vOther);  // 26
					CTransform::operator=(
							CTransform &);  // 750
				}
				{
				}
				CRelativeOffset<FootOpTarget>::IsValid(); // 30
				CRelativeOffset<FootOpTarget>::Get(); // 90
				CRelativeArray<FootOpTarget>::operator[](
						int index);  // 745
				{
				}
				CRelativeOffset<FootOpTarget>::IsValid(); // 30
				CRelativeOffset<FootOpTarget>::Get(); // 90
				CRelativeArray<FootOpTarget>::operator[](
						int index);  // 745
			}
			CRelativeOffset<FootOpFixedInfo>::IsValid(); // 35
			CRelativeOffset<FootOpFixedInfo>::Get(); // 97
			CRelativeArray<FootOpFixedInfo>::operator[](
					int index);  // 742
		}
		CRelativeArray<FootOpFixedInfo>::Count(); // 739
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<FootLockPoseOpFixedSettings>(
						const CPackedHandle<FootLockPoseOpFixedSettings>& handle);  // 33
	CAnimGraphFixedData::operator[]<FootLockPoseOpFixedSettings>(
						const CPackedHandle<FootLockPoseOpFixedSettings>& handle);  // 685
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 77
	CAnimGraphInstanceData::operator[]<FootLockPoseOpInstanceSettings>(
							const CPackedHandle<FootLockPoseOpInstanceSettings>& handle);  // 686
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 691
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 695
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 88
	{
		const CTransform  xMsHip; // 104
		const VectorAligned  vWsHip; // 105
		const VectorAligned  vWsPlaneCenter; // 108
		QuaternionAligned qWsPlane; // 110
		VectorAligned vWsNewHipPosition; // 113
		const Ray_t  ray; // 115
		const VectorAligned  vWsContactPosition; // 117
		const VectorAligned  vMsNewHipPosition; // 121
		const CTransform  xMsNewHip; // 122
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 104
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
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		MaddSIMD<>(const fltx4& a,
				const fltx4& b,
				const fltx4& c);  // 313
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
				const VectorAligned& v0);  // 105
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 108
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 108
		VectorAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 31
		VectorAligned::VectorAligned(
				const Vector& rhs);  // 108
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 110
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 929
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 929
		Quaternion::Quaternion(); // 928
		Vector::LengthSqr(); // 930
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 1488
		Vector::Vector(); // 1487
		Vector::Cross(
			const Vector& vOther);  // 932
		Vector::operator=(
				const Vector& vOther);  // 932
		DotProduct(const Vector& a,
				const Vector& b);  // 933
		BuildRotateBetweenVectorsQuaternion(const Vector& vFrom,
							const Vector& vTo);  // 110
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 30
		QuaternionAligned::QuaternionAligned(
					const Quaternion& rhs);  // 110
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
				vec_t s);  // 115
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
				const Vector& src);  // 37
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 37
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
		VectorAligned::LengthSqr(); // 39
		Ray_t::Init(
			const Vector& start,
			const Vector& end,
			float flRadius);  // 26
		VectorAligned::VectorAligned(); // 25
		VectorAligned::VectorAligned(); // 25
		VectorAligned::VectorAligned(); // 25
		VectorAligned::VectorAligned(); // 25
		Ray_t::Ray_t(
			const Vector& start,
			const Vector& end,
			float flRadius);  // 115
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
				const VectorAligned& v);  // 115
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 149
		VPlane::GetPointOnPlane(); // 66
		{
			VectorAligned vP010; // 73
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
					const VectorAligned& v);  // 73
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
					const Vector& rhs);  // 74
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
				const VectorAligned& v);  // 74
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
				const Vector& rhs);  // 66
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 351
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
		VectorAligned::Normalized(); // 68
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
		VectorAligned::operator Vector(); // 69
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 69
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
				vec_t s);  // 81
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
				const VectorAligned& v);  // 81
		IntersectRay(const VPlane& plane,
				const Ray_t& ray,
				const VectorAligned& vDefault);  // 117
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
				const VectorAligned& v);  // 115
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
		VectorAligned::operator Vector(); // 115
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 268
		VectorAligned::operator*(
				vec_t s);  // 115
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
		VectorAligned::operator Vector(); // 115
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
				const VectorAligned& v);  // 117
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
				const VectorAligned& v);  // 117
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
				const VectorAligned& v);  // 118
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 268
		VectorAligned::operator*(
				vec_t s);  // 118
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
					const VectorAligned& v0);  // 121
		QuaternionAligned::w(); // 41
		Quaternion::Quaternion(
				vec_t ix,
				vec_t iy,
				vec_t iz,
				vec_t iw);  // 41
		QuaternionAligned::operator Quaternion(); // 122
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 30
		QuaternionAligned::QuaternionAligned(
					const Quaternion& rhs);  // 33
		VectorAligned::VectorAligned(); // 33
		VectorAligned::operator=(
				fltx4 src);  // 111
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 33
		CTransform::CTransform(
				const Vector& v,
				const Quaternion& q,
				float flScale);  // 122
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 122
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 123
		{
			const VectorAligned  vMsTiltNormal; // 128
			const QuaternionAligned  qMsTiltDeltaFromUp; // 129
			const int  nParentIndex; // 131
			const QuaternionAligned  qMsParent; // 132
			const QuaternionAligned  qMsTiltBoneInitial; // 135
			const QuaternionAligned  qMsTiltBone; // 138
			const QuaternionAligned  qPsTiltBone; // 139
			const CTransform  xPsTiltBoneTilted; // 142
			QuaternionAligned::w(); // 41
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 128
			Quaternion::Quaternion(); // 875
			QuaternionInvert(const Quaternion& p); // 128
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 2464
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1853
			Quaternion::v(); // 2464
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
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 2464
			Vector::Vector(); // 1487
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 1488
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
					const Vector& v);  // 128
			Quaternion::Quaternion(); // 928
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 929
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
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
			Vector::operator=(
					const Vector& vOther);  // 932
			DotProduct(const Vector& a,
					const Vector& b);  // 933
			BuildRotateBetweenVectorsQuaternion(const Vector& vFrom,
								const Vector& vTo);  // 129
			VectorAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 31
			VectorAligned::VectorAligned(
					const Vector& rhs);  // 128
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 129
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 129
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 30
			QuaternionAligned::QuaternionAligned(
						const Quaternion& rhs);  // 129
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 135
			QuaternionAligned::QuaternionAligned(
						fltx4 vec);  // 301
			QuaternionAligned::operator*=(
					const QuaternionAligned& q);  // 302
			QuaternionAligned::operator*(
					const QuaternionAligned& q);  // 138
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 139
			QuaternionAligned::w(); // 41
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 139
			Quaternion::Quaternion(); // 875
			QuaternionInvert(const Quaternion& p); // 139
			Quaternion::Quaternion(); // 2001
			operator*(const Quaternion& p,
					const Quaternion& q);  // 139
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 142
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 142
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 30
			QuaternionAligned::QuaternionAligned(
						const Quaternion& rhs);  // 139
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 142
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
					int i);  // 121
			CAnimPose::GetLocalSpaceTransform(
						BoneIndex_t boneIndex);  // 142
			VectorAligned::operator=(
					fltx4 src);  // 111
			CTransform::SetPositionAndScale(
						const Vector& v0,
						float flScale);  // 33
			VectorAligned::VectorAligned(); // 33
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 30
			QuaternionAligned::QuaternionAligned(
						const Quaternion& rhs);  // 33
			CTransform::CTransform(
					const Vector& v,
					const Quaternion& q,
					float flScale);  // 142
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 132
		}
	}
	{
		IAnimationDebugRenderer* pDebugRenderer; // 97
		CAnimPoseWrapper poseWrapper; // 98
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 117
		CPoseUpdateContext::GetVisualizationManager(); // 97
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
				float flScale);  // 98
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
		CAnimPoseWrapper::~CAnimPoseWrapper(); // 100
	}
	HandleTilt(CPoseUpdateContext& context,
			const FootLockPoseOpFixedSettings& fixedSettings,
			FootLockPoseOpInstanceSettings& instanceSettings,
			CAnimPosePtr& pBasePose);  // 712
	CTransform::InverseTR(); // 714
	CRelativeArray<FootOpFixedInfo>::Count(); // 718
	UpdateLockBreak(float flTimeStep,
			const CAnimPosePtr& pBasePose,
			const FootLockPoseOpFixedSettings& fixedSettings,
			FootLockPoseOpInstanceSettings& instanceSettings,
			const CTransform* ikTargetsMS);  // 737
} /* size: 0, variables: 7, inline expansions: 16 (3007 bytes) */

