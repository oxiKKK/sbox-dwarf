
//
// animgraph/addposeoperation.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//

// <0178BBE8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addposeoperation.cpp:11
// variable: 1
// function calls: 20
void MakeOpDescription(CPoseRecipe& pPoseRecipe, PoseHandle hBasePose, PoseHandle hAddPose, bool bApplyToChannelsSeparately, bool bModelSpace)
{
	CPackedHandle<CAddPoseOperation::OpSettings> hParam; // 13
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CAddPoseOperation::OpSettings>::CPackedHandle(); // 13
	OpSettings::OpSettings(
			PoseHandle hBasePose,
			PoseHandle hAddPose,
			bool bApplyToChannelsSeparately,
			bool bModelSpace);  // 140
	CPackedDataT<false>::AddItem<CAddPoseOperation::OpSettings, unsigned char&, unsigned char&, bool&, bool&>(
												CPackedHandle<CAddPoseOperation::OpSettings>* handleOut);  // 15
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
	CPackedHandle<CAddPoseOperation::OpSettings>::GetID(); // 87
	{
	}
	CPoseRecipe::AddPoseOp<CAddPoseOperation, CAddPoseOperation::OpSettings>(
									const CPackedHandle<CAddPoseOperation::OpSettings>& hParam);  // 17
} /* size: 0, variables: 1, inline expansions: 20 (374 bytes) */

// <0178B8CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addposeoperation.cpp:22
// variables: 3
// function calls: 10
void Evaluate(CPoseUpdateContext& context, OpSettings* pSettings)
{
	CAnimPosePtr pBasePose; // 26
	CAnimPosePtr pAdditivePose; // 27
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator!=(
			const CAnimPose* pOther);  // 29
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator*(); // 31
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
	CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 35
} /* size: 217, variables: 2, inline expansions: 9 (293 bytes) */

// <0178915F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addposeoperation.cpp:39
// variables: 67
// function calls: 163
void AddPoses(CPoseUpdateContext& context, CAnimPose& basePose, const CAnimPose& additivePose, bool bApplyToChannelsSeparately, bool bModelSpace)
{
	const char   __FUNCTION__; // 44910
	{
		CAnimPosePtr pTempPose; // 43
		const CAnimSkeleton* pSkeleton; // 47
		const int  boneCount; // 48
		const CTransform* pModelSpaceTransforms; // 50
		CTransform* pBaseLocalTransforms; // 51
		const CTransform* pAddLocalTransforms; // 52
		{
			int boneIndex; // 54
			{
				const CTransform& baseTransformLS; // 56
				const CTransform& addTransformMS; // 57
				const BoneIndex_t  nParentIndex; // 64
				const CTransform  parentTransformMS; // 65
				const Quaternion  addRotationLS; // 67
				const VectorAligned  vAddTranslationLS; // 68
				CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
						int i);  // 142
				CAnimSkeleton::GetParentIndex(
						BoneIndex_t boneIndex);  // 64
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
				QuaternionAligned::Conjugate(); // 67
				CUtlMemory<CTransform, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
						int i);  // 121
				CAnimPose::GetLocalSpaceTransform(
							BoneIndex_t boneIndex);  // 56
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 301
				QuaternionAligned::operator*=(
						const QuaternionAligned& q);  // 302
				QuaternionAligned::operator*(
						const QuaternionAligned& q);  // 67
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 301
				QuaternionAligned::operator*=(
						const QuaternionAligned& q);  // 302
				QuaternionAligned::operator*(
						const QuaternionAligned& q);  // 67
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
				QuaternionAligned::operator fltx4(); // 408
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
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 423
				QuaternionAligned::Conjugate(); // 448
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
							const int  __mask);  // 3341
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 3343
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
							const VectorAligned& v0);  // 68
				_mm_cvtss_f32(__m128 __A); // 1496
				GetXSIMD<>(fltx4 a); // 74
				QuaternionAligned::x(); // 41
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 67
				Quaternion::Quaternion(); // 2001
				operator*(const Quaternion& p,
						const Quaternion& q);  // 70
				QuaternionAligned::w(); // 41
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 70
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
						const VectorAligned& v);  // 70
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 70
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
						float flScale);  // 70
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						CTransform &);  // 70
				VectorAligned::operator fltx4(); // 461
				VectorAligned::operator fltx4(); // 461
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
						const CTransform& t);  // 59
			}
		}
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 44
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 45
		CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::Get(); // 47
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
		CAnimPose::GetBoneCount(); // 48
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 50
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
		CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 72
	}
	{
		CTransform* pDstTransforms; // 75
		const CTransform* pSrcTransforms; // 76
		const int  boneCount; // 77
		{
			int boneIndex; // 81
			{
				CTransform& baseTransform; // 83
				const CTransform& addTransform; // 84
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
						const VectorAligned& v);  // 86
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
						const VectorAligned& v0);  // 86
				QuaternionAligned::operator*=(
						const QuaternionAligned& q);  // 87
			}
		}
		{
			int boneIndex; // 92
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			QuaternionAligned::operator fltx4(); // 471
			VectorAligned::operator fltx4(); // 471
			CTransform::operator*(
					const CTransform& rhs);  // 94
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 94
		}
		CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 77
		CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::Count(); // 116
		CAnimSkeleton::GetBoneCount(); // 77
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 100
	}
	{
		int k; // 21
	}
	AddArray(float* pDst,
		const float* pSrc,
		int nCount);  // 103
} /* size: 0, variables: 1, inline expansions: 1 (191 bytes) */

