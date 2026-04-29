
//
// animgraph/aimmatrixposeoperation.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//

// <0178886D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixposeoperation.cpp:15
// variable: 1
// function calls: 28
void MakeOpDescription(CPoseRecipe& pPoseRecipe, PoseHandle hChildPose, CPackedHandle<AimMatrixOpInstanceSettings_t> hInstanceSettings, CPackedHandle<AimMatrixOpFixedSettings_t> hFixedSettings)
{
	CPackedHandle<CAimMatrixPoseOperation::OpSettings> hParam; // 17
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CAimMatrixPoseOperation::OpSettings>::CPackedHandle(); // 17
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<AimMatrixOpFixedSettings_t>::CPackedHandle(
			const CPackedHandle<AimMatrixOpFixedSettings_t>  &);  // 140
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<AimMatrixOpInstanceSettings_t>::CPackedHandle(
			const CPackedHandle<AimMatrixOpInstanceSettings_t>  &);  // 140
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<AimMatrixOpInstanceSettings_t>::CPackedHandle(
			const CPackedHandle<AimMatrixOpInstanceSettings_t>  &);  // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<AimMatrixOpFixedSettings_t>::CPackedHandle(
			const CPackedHandle<AimMatrixOpFixedSettings_t>  &);  // 61
	OpSettings::OpSettings(
			PoseHandle hChildPose,
			CPackedHandle<AimMatrixOpInstanceSettings_t> hInstanceSettings,
			CPackedHandle<AimMatrixOpFixedSettings_t> hFixedSettings);  // 140
	CPackedDataT<false>::AddItem<CAimMatrixPoseOperation::OpSettings, unsigned char&, CPackedHandle<AimMatrixOpInstanceSettings_t>&, CPackedHandle<AimMatrixOpFixedSettings_t>&>(
																CPackedHandle<CAimMatrixPoseOperation::OpSettings>* handleOut);  // 18
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
	CPackedHandle<CAimMatrixPoseOperation::OpSettings>::GetID(); // 87
	{
	}
	CPoseRecipe::AddPoseOp<CAimMatrixPoseOperation, CAimMatrixPoseOperation::OpSettings>(
										const CPackedHandle<CAimMatrixPoseOperation::OpSettings>& hParam);  // 20
} /* size: 0, variables: 1, inline expansions: 28 (430 bytes) */

// <017886B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixposeoperation.cpp:24
// variable: 1
// function calls: 5
void CalculateTargetPitchYaw(Vector targetVector, float flAngleIncrement, float& targetPitch, float& targetYaw)
{
	QAngle angles; // 32
	Vector::LengthSqr(); // 26
	Vector::operator=(
			const Vector& vOther);  // 28
	QAngle::QAngle(); // 32
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 43
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 44
} /* size: 292, variables: 1, inline expansions: 5 (98 bytes) */

// <0178846F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixposeoperation.cpp:48
// variables: 9
// function calls: 6
void CalcWeightsForAngles(const AimMatrixOpFixedSettings_t& fixedSettings, float flPitch, float flYaw, StaticPoseCacheHandle* poseHandles, float* weights)
{
	float lookHeading; // 51
	float lookPitch; // 52
	int lowerRow; // 54
	int leftColumn; // 60
	int upperRow; // 66
	int rightColumn; // 67
	AimFrame frameCorners; // 70
	float upWeights; // 89
	float sideWeights; // 90
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 51
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 52
	StaticPoseCacheHandle::operator=(
			const StaticPoseCacheHandle& rhs);  // 84
	StaticPoseCacheHandle::operator=(
			const StaticPoseCacheHandle& rhs);  // 85
	StaticPoseCacheHandle::operator=(
			const StaticPoseCacheHandle& rhs);  // 86
	StaticPoseCacheHandle::operator=(
			const StaticPoseCacheHandle& rhs);  // 87
} /* size: 728, variables: 9, inline expansions: 6 (202 bytes) */

// <0178822E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixposeoperation.cpp:98
// variables: 9
// function calls: 6
void CalcWeightsForAnglesWithStraightDown(const AimMatrixOpFixedSettings_t& fixedSettings, float flPitch, float flYaw, StaticPoseCacheHandle* poseHandles, float* weights)
{
	float lookHeading; // 100
	float lookPitch; // 101
	int lowerRow; // 103
	int leftColumn; // 109
	int upperRow; // 115
	int rightColumn; // 116
	AimFrame frameCorners; // 119
	float upWeights; // 141
	float sideWeights; // 142
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 100
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 101
	StaticPoseCacheHandle::operator=(
			const StaticPoseCacheHandle& rhs);  // 136
	StaticPoseCacheHandle::operator=(
			const StaticPoseCacheHandle& rhs);  // 137
	StaticPoseCacheHandle::operator=(
			const StaticPoseCacheHandle& rhs);  // 138
	StaticPoseCacheHandle::operator=(
			const StaticPoseCacheHandle& rhs);  // 139
} /* size: 760, variables: 9, inline expansions: 6 (203 bytes) */

// <01784FFF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/aimmatrixposeoperation.cpp:152
// variables: 80
// function calls: 199
void Evaluate(CPoseUpdateContext& context, OpSettings* pSettings)
{
	const AimMatrixOpFixedSettings_t& fixedSettings; // 154
	AimMatrixOpInstanceSettings_t& instanceSettings; // 155
	CAnimPosePtr pBasePose; // 158
	const float  flTimeStep; // 164
	CTransform attachmentTransformMS; // 167
	CTransform localToWorld; // 170
	CTransform attachmentTransformWS; // 171
	Vector vTargetDirectionLocal; // 174
	float flTargetYaw; // 185
	float flTargetPitch; // 185
	StaticPoseCacheHandle poseHandles; // 205
	float weights; // 206
	CAnimPosePtr pAimPose; // 217
	{
		CAnimPosePtr poses; // 221
		{
			int i; // 222
			{
				CAnimPosePtr pPose; // 224
				{
					const CCachedPose& cachedPose; // 228
					StaticPoseCacheHandle::StaticPoseCacheHandle(
								const StaticPoseCacheHandle& rhs);  // 228
					CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 232
					CUtlLeanVectorBase<CTransform, short int>::Base(); // 37
					CCachedPose::GetTransforms(); // 232
					CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
					CAnimPose::GetBoneCount(); // 232
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 91
					V_memcpy(void* dest,
						const void* src,
						size_t count);  // 232
					CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 233
					CUtlMemory<float, int>::Base(); // 113
					CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 41
					CCachedPose::GetMorphWeights(); // 233
					CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 233
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 91
					V_memcpy(void* dest,
						const void* src,
						size_t count);  // 233
				}
				StaticPoseCacheHandle::IsValid(); // 226
				CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 237
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
						const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 240
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
				CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 241
			}
		}
		CSmartPtr<CAnimPose, CRefCountAccessor>::CSmartPtr(); // 221
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
				CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 244
		CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 244
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
		CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 221
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<AimMatrixOpFixedSettings_t>(
						const CPackedHandle<AimMatrixOpFixedSettings_t>& handle);  // 33
	CAnimGraphFixedData::operator[]<AimMatrixOpFixedSettings_t>(
						const CPackedHandle<AimMatrixOpFixedSettings_t>& handle);  // 154
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<AimMatrixOpInstanceSettings_t>(
							const CPackedHandle<AimMatrixOpInstanceSettings_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<AimMatrixOpInstanceSettings_t>(
							const CPackedHandle<AimMatrixOpInstanceSettings_t>& handle);  // 155
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator*(); // 167
	QuaternionAligned::operator fltx4(); // 471
	VectorAligned::operator fltx4(); // 471
	CTransform::operator*(
			const CTransform& rhs);  // 171
	Vector::Vector(); // 174
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
			const Vector& rhs);  // 86
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
				const VectorAligned& v0);  // 86
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 42
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 86
	CTransform::TransformVectorByInverse(
				const Vector& v0);  // 177
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 87
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
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 407
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
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 42
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 87
	CTransform::RotateVectorByInverse(
				const Vector& v0);  // 181
	Vector::operator=(
			const Vector& vOther);  // 177
	StaticPoseCacheHandle::StaticPoseCacheHandle(); // 205
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator*(); // 250
	PerformMask(CPoseUpdateContext& context,
			CAnimPose& basePose,
			CAnimPose& altPose,
			int nWeightListIndex,
			float flBlendWeight,
			BoneMaskBlendSpace blendSpace);  // 254
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
	CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 258
} /* size: 1974, variables: 13, inline expansions: 85 (2184 bytes) */

