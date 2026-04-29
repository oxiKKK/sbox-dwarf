
//
// animgraph/subtractposeoperation.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//

// <01726A09> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractposeoperation.cpp:12
// variable: 1
// function calls: 20
void MakeOpDescription(CPoseRecipe& pPoseRecipe, PoseHandle hBasePose, PoseHandle hSubPose, bool bApplyToChannelsSeparately, bool bModelSpace)
{
	CPackedHandle<CSubtractPoseOperation::OpSettings> hParam; // 14
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CSubtractPoseOperation::OpSettings>::CPackedHandle(); // 14
	OpSettings::OpSettings(
			PoseHandle hBasePose,
			PoseHandle hSubPose,
			bool bApplyToChannelsSeparately,
			bool bModelSpace);  // 140
	CPackedDataT<false>::AddItem<CSubtractPoseOperation::OpSettings, unsigned char&, unsigned char&, bool&, bool&>(
													CPackedHandle<CSubtractPoseOperation::OpSettings>* handleOut);  // 16
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
	CPackedHandle<CSubtractPoseOperation::OpSettings>::GetID(); // 87
	{
	}
	CPoseRecipe::AddPoseOp<CSubtractPoseOperation, CSubtractPoseOperation::OpSettings>(
										const CPackedHandle<CSubtractPoseOperation::OpSettings>& hParam);  // 18
} /* size: 0, variables: 1, inline expansions: 20 (374 bytes) */

// <017263F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractposeoperation.cpp:23
// variables: 4
// function calls: 23
void Evaluate(CPoseUpdateContext& context, OpSettings* pSettings)
{
	CAnimPosePtr pBasePose; // 27
	CAnimPosePtr pSubPose; // 28
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator!=(
			const CAnimPose* pOther);  // 30
	ThreadInterlockedIncrement(volatile int32* p); // 683
	CRefCountedMemPoolObject<CAnimPose>::AddRef(); // 21
	AddRef<CAnimPose>(CAnimPose* pObj); // 386
	CSmartPtr<const CAnimPose, CRefCountAccessor>::operator=<CAnimPose>(
				CAnimPose* pObj);  // 413
	CSmartPtr<const CAnimPose, CRefCountAccessor>::operator=<CAnimPose>(
				const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 354
	CSmartPtr<const CAnimPose, CRefCountAccessor>::CSmartPtr<CAnimPose>(
				const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 32
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
	Release<const CAnimPose>(const CAnimPose* pObj); // 344
	CSmartPtr<const CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 32
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
} /* size: 319, variables: 2, inline expansions: 21 (645 bytes) */

// <01723DF4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractposeoperation.cpp:40
// variables: 54
// function calls: 162
void SubtractPoses(CPoseUpdateContext& context, const CAnimPosePtr& pBasePose, const CAnimPoseConstPtr& pSubPose, bool bApplyChannelsSeparately, bool bModelSpace)
{
	const char   __FUNCTION__; // 45035
	{
		CAnimPosePtr pTempPose; // 44
		const CAnimSkeleton* pSkeleton; // 48
		const int  boneCount; // 49
		{
			int boneIndex; // 51
			{
				const CTransform& baseTransformLS; // 53
				const CTransform& subTransformLS; // 54
				const BoneIndex_t  nParentIndex; // 61
				const CTransform  parentTransformMS; // 62
				const QuaternionAligned  deltaRotationLS; // 65
				const QuaternionAligned  deltaRotationMS; // 66
				const VectorAligned  deltaTranslationLS; // 68
				const VectorAligned  deltaTranslationMS; // 69
				CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
						int i);  // 142
				CAnimSkeleton::GetParentIndex(
						BoneIndex_t boneIndex);  // 61
				CUtlMemory<CTransform, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
						int i);  // 121
				CAnimPose::GetLocalSpaceTransform(
							BoneIndex_t boneIndex);  // 53
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
				QuaternionAligned::Conjugate(); // 65
				QuaternionAligned::operator*=(
						const QuaternionAligned& q);  // 302
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 301
				QuaternionAligned::operator*(
						const QuaternionAligned& q);  // 65
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
				QuaternionAligned::Conjugate(); // 66
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 301
				QuaternionAligned::operator*=(
						const QuaternionAligned& q);  // 302
				QuaternionAligned::operator*(
						const QuaternionAligned& q);  // 66
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 301
				QuaternionAligned::operator*=(
						const QuaternionAligned& q);  // 302
				QuaternionAligned::operator*(
						const QuaternionAligned& q);  // 66
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
						const VectorAligned& v);  // 68
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
						const VectorAligned& v0);  // 69
				CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 71
				VectorAligned::operator=(
						fltx4 src);  // 111
				CTransform::SetPositionAndScale(
							const Vector& v0,
							float flScale);  // 33
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 30
				QuaternionAligned::QuaternionAligned(
							const Quaternion& rhs);  // 33
				VectorAligned::VectorAligned(); // 33
				CTransform::CTransform(
						const Vector& v,
						const Quaternion& q,
						float flScale);  // 71
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 71
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 71
				CUtlMemory<CTransform, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
						int i);  // 121
				CAnimPose::GetLocalSpaceTransform(
							BoneIndex_t boneIndex);  // 54
				CSmartPtr<const CAnimPose, CRefCountAccessor>::operator->(); // 54
				{
					fltx4 retVal; // 1851
					_mm_cmpeq_ps(__m128 __A,
							__m128 __B);  // 1852
				}
				CmpEqSIMD<>(const fltx4& a,
						const fltx4& b);  // 456
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 456
				IsEqualSIMD(fltx4 a,
						fltx4 b);  // 461
				VectorAligned::operator fltx4(); // 461
				VectorAligned::operator fltx4(); // 461
				QuaternionAligned::operator fltx4(); // 231
				{
					fltx4 retVal; // 1851
					_mm_cmpeq_ps(__m128 __A,
							__m128 __B);  // 1852
				}
				CmpEqSIMD<>(const fltx4& a,
						const fltx4& b);  // 2169
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 2169
				IsAllEqual<>(const fltx4& a,
						const fltx4& b);  // 231
				QuaternionAligned::operator==(
						const QuaternionAligned& src);  // 461
				CTransform::operator==(
						const CTransform& t);  // 56
			}
		}
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 45
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator*(); // 45
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 46
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 48
		CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::Get(); // 48
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
		CAnimPose::GetBoneCount(); // 49
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
		CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 73
	}
	{
		CTransform* pDstTransforms; // 76
		const int  boneCount; // 79
		{
			int boneIndex; // 80
			{
				const CTransform& baseTransform; // 82
				const CTransform& subTransform; // 83
				CTransform resultTransform; // 85
				CTransform::InverseTR(); // 102
				QuaternionAligned::operator fltx4(); // 471
				VectorAligned::operator fltx4(); // 471
				QuaternionAligned::operator fltx4(); // 471
				VectorAligned::operator fltx4(); // 471
				CTransform::operator*(
						const CTransform& rhs);  // 102
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
						const VectorAligned& v);  // 97
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
						const VectorAligned& v0);  // 97
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						const CTransform  &);  // 105
				CSmartPtr<const CAnimPose, CRefCountAccessor>::operator->(); // 83
				CUtlMemory<CTransform, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
						int i);  // 121
				CAnimPose::GetLocalSpaceTransform(
							BoneIndex_t boneIndex);  // 83
				VectorAligned::VectorAligned(); // 31
				QuaternionAligned::QuaternionAligned(); // 31
				CTransform::CTransform(); // 85
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						CTransform &);  // 102
			}
		}
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 76
		CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 79
		CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::Count(); // 116
		CAnimSkeleton::GetBoneCount(); // 79
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 110
	}
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 110
	CSmartPtr<const CAnimPose, CRefCountAccessor>::operator->(); // 110
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 111
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 113
	CSmartPtr<const CAnimPose, CRefCountAccessor>::operator->(); // 113
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 113
	{
		int k; // 39
	}
	SubtractArray(float* pDst,
			const float* pSrc,
			int nCount);  // 113
} /* size: 0, variables: 1, inline expansions: 7 (193 bytes) */

