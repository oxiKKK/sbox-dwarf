
//
// animgraph/bonemaskposeoperation.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//

// <01782CD2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskposeoperation.cpp:10
// variable: 1
// function calls: 20
void MakeOpDescription(CPoseRecipe& pPoseRecipe, float flBlendWeight, BoneMaskBlendSpace blendSpace, int nWeightListIndex, PoseHandle hPose1, PoseHandle hPose2)
{
	CPackedHandle<CBoneMaskPoseOperation::OpSettings> hParam; // 12
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CBoneMaskPoseOperation::OpSettings>::CPackedHandle(); // 12
	OpSettings::OpSettings(
			float flBlendWeight,
			BoneMaskBlendSpace blendSpace,
			int nWeightListIndex,
			PoseHandle hPose1,
			PoseHandle hPose2);  // 140
	CPackedDataT<false>::AddItem<CBoneMaskPoseOperation::OpSettings, float&, BoneMaskBlendSpace&, int&, unsigned char&, unsigned char&>(
															CPackedHandle<CBoneMaskPoseOperation::OpSettings>* handleOut);  // 14
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
	CPackedHandle<CBoneMaskPoseOperation::OpSettings>::GetID(); // 87
	{
	}
	CPoseRecipe::AddPoseOp<CBoneMaskPoseOperation, CBoneMaskPoseOperation::OpSettings>(
										const CPackedHandle<CBoneMaskPoseOperation::OpSettings>& hParam);  // 16
} /* size: 0, variables: 1, inline expansions: 20 (399 bytes) */

// <017828FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskposeoperation.cpp:21
// variables: 3
// function calls: 11
void Evaluate(CPoseUpdateContext& context, OpSettings* pSettings)
{
	CAnimPosePtr pPose1; // 25
	CAnimPosePtr pPose2; // 26
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator!=(
			const CAnimPose* pOther);  // 28
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator!=(
			const CAnimPose* pOther);  // 28
	PerformMask(CPoseUpdateContext& context,
			CAnimPose& basePose,
			CAnimPose& altPose,
			int nWeightListIndex,
			float flBlendWeight,
			BoneMaskBlendSpace blendSpace);  // 30
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
	CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 34
} /* size: 327, variables: 2, inline expansions: 10 (432 bytes) */

// <01798AF6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskposeoperation.cpp:38
void PerformMask(CPoseUpdateContext& context, CAnimPose& basePose, CAnimPose& altPose, int nWeightListIndex, float flBlendWeight, BoneMaskBlendSpace blendSpace)
{
} /* size: 0 */

// <01791F04> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskposeoperation.cpp:38
// variables: 211
// function calls: 370
void PerformMask(CPoseUpdateContext& context, CAnimPose& basePose, CAnimPose& altPose, int nWeightListIndex, float flBlendWeight, BoneMaskBlendSpace blendSpace)
{
	{
		const ChannelWeightlist_t* pWeightList; // 43
		const int  nRequestPattern; // 114
		{
			int i; // 99
			Count(const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this); // 99
			{
				const int  boneIndex; // 101
				const CTransform  transform1; // 103
				const CTransform  transform2; // 104
				CTransform resultTransform; // 106
				CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this,
						int i);  // 101
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
							const VectorAligned& B);  // 107
				CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this,
						int i);  // 107
				VectorAligned::operator=(
						const VectorAligned& src);  // 107
			}
		}
		{
			int i; // 81
			Count(const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this); // 81
			{
				const int  boneIndex; // 83
				const CTransform  transform1; // 85
				const CTransform  transform2; // 86
				CTransform resultTransform; // 88
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
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 545
				QuaternionAligned::operator fltx4(); // 545
				QuaternionAligned::operator fltx4(); // 545
				QuaternionSlerp(const QuaternionAligned& qFrom,
						const QuaternionAligned& qTo,
						float t);  // 89
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
						const fltx4& b);  // 392
				{
					fltx4 retVal; // 2350
					_mm_sqrt_ps(__m128 __A); // 2351
				}
				SqrtSIMD<>(const fltx4& a); // 393
				{
					fltx4 retVal; // 1851
					_mm_cmpeq_ps(__m128 __A,
							__m128 __B);  // 1852
				}
				CmpEqSIMD<>(const fltx4& a,
						const fltx4& b);  // 395
				{
					fltx4 retVal; // 1662
					_mm_div_ps(__m128 __A,
							__m128 __B);  // 1663
				}
				DivSIMD<>(const fltx4& a,
						const fltx4& b);  // 397
				QuaternionAligned::operator fltx4(); // 397
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
						const fltx4& b);  // 397
				QuaternionAligned::Normalize(); // 90
				CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this,
						int i);  // 83
				CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this,
						int i);  // 89
			}
		}
		{
			int i; // 64
			Count(const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this); // 64
			{
				const int  boneIndex; // 66
				const CTransform  transform1; // 68
				const CTransform  transform2; // 69
				CTransform resultTransform; // 71
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
				QuaternionAligned::QuaternionAligned(
							fltx4 vec);  // 545
				QuaternionAligned::operator fltx4(); // 545
				QuaternionAligned::operator fltx4(); // 545
				QuaternionSlerp(const QuaternionAligned& qFrom,
						const QuaternionAligned& qTo,
						float t);  // 194
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
				VectorAligned::operator fltx4(); // 196
				VectorAligned::operator fltx4(); // 196
				VectorAligned::operator=(
						fltx4 src);  // 196
				VectorAligned::VectorAligned(); // 31
				QuaternionAligned::QuaternionAligned(); // 31
				CTransform::CTransform(); // 191
				Slerp(const CTransform& p,
					const CTransform& q,
					float t);  // 71
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
						const fltx4& b);  // 392
				{
					fltx4 retVal; // 2350
					_mm_sqrt_ps(__m128 __A); // 2351
				}
				SqrtSIMD<>(const fltx4& a); // 393
				{
					fltx4 retVal; // 1851
					_mm_cmpeq_ps(__m128 __A,
							__m128 __B);  // 1852
				}
				CmpEqSIMD<>(const fltx4& a,
						const fltx4& b);  // 395
				{
					fltx4 retVal; // 1662
					_mm_div_ps(__m128 __A,
							__m128 __B);  // 1663
				}
				DivSIMD<>(const fltx4& a,
						const fltx4& b);  // 397
				QuaternionAligned::operator fltx4(); // 397
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
						const fltx4& b);  // 397
				QuaternionAligned::Normalize(); // 72
				CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this,
						int i);  // 66
				CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this,
						int i);  // 71
			}
		}
		{
			CTransform* pDstTransforms; // 47
			{
				int i; // 49
				Count(const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this); // 49
				{
					const int  boneIndex; // 51
					const CTransform  transform1; // 53
					const CTransform  transform2; // 54
					{
						fltx4 retVal; // 1616
						_mm_sub_ps(__m128 __A,
								__m128 __B);  // 1617
					}
					SubSIMD<>(const fltx4& a,
							const fltx4& b);  // 1797
					NegSIMD<>(const fltx4& a); // 469
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
					QuaternionAligned::operator fltx4(); // 545
					QuaternionSlerp(const QuaternionAligned& qFrom,
							const QuaternionAligned& qTo,
							float t);  // 194
					VectorAligned::operator fltx4(); // 196
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
					VectorAligned::VectorAligned(); // 31
					QuaternionAligned::QuaternionAligned(); // 31
					CTransform::CTransform(); // 191
					Slerp(const CTransform& p,
						const CTransform& q,
						float t);  // 56
					VectorAligned::operator=(
							const VectorAligned& src);  // 26
					CTransform::operator=(
							CTransform &);  // 56
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
							const fltx4& b);  // 392
					{
						fltx4 retVal; // 2350
						_mm_sqrt_ps(__m128 __A); // 2351
					}
					SqrtSIMD<>(const fltx4& a); // 393
					{
						fltx4 retVal; // 1851
						_mm_cmpeq_ps(__m128 __A,
								__m128 __B);  // 1852
					}
					CmpEqSIMD<>(const fltx4& a,
							const fltx4& b);  // 395
					{
						fltx4 retVal; // 1662
						_mm_div_ps(__m128 __A,
								__m128 __B);  // 1663
					}
					DivSIMD<>(const fltx4& a,
							const fltx4& b);  // 397
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
							const fltx4& b);  // 397
					QuaternionAligned::operator fltx4(); // 397
					QuaternionAligned::Normalize(); // 57
					CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<ChannelWeightlist_t::IndexWeightPair_t, CUtlMemory<ChannelWeightlist_t::IndexWeightPair_t, int this,
							int i);  // 51
					CUtlMemory<CTransform, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
							int i);  // 121
					CAnimPose::GetLocalSpaceTransform(
								BoneIndex_t boneIndex);  // 54
				}
			}
		}
		{
			const uint32  allSetMask; // 117
			const uint32  channelFlags; // 118
			CUtlMemory<ChannelElementWeights_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >::operator[](
					int i);  // 118
			CUtlMemory<RequestElementWeights_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >::operator[](
					int i);  // 118
			{
				const CUtlVector<int, CUtlMemory<int, int> >& nIndexArray; // 128
				const CUtlVector<float, CUtlMemory<float, int> >& flWeightArray; // 129
				float* pStream1Array; // 131
				const float* pStream2Array; // 132
				{
					int i; // 134
					CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 134
					{
						const int  index; // 136
						const float  blendWeight; // 137
						CUtlMemory<int, int>::operator[](
								int i);  // 595
						CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
								int i);  // 136
						CUtlMemory<float, int>::operator[](
								int i);  // 595
						CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
								int i);  // 137
					}
				}
			}
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 124
		}
	}
} /* size: 3711 */

// <0178270B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskposeoperation.cpp:38
// variables: 31
void PerformMask(CPoseUpdateContext& context, CAnimPose& basePose, CAnimPose& altPose, int nWeightListIndex, float flBlendWeight, BoneMaskBlendSpace blendSpace)
{
	{
		const ChannelWeightlist_t* pWeightList; // 43
		const int  nRequestPattern; // 114
		{
			CTransform* pDstTransforms; // 47
			{
				int i; // 49
				{
					const int  boneIndex; // 51
					const CTransform  transform1; // 53
					const CTransform  transform2; // 54
				}
			}
		}
		{
			int i; // 64
			{
				const int  boneIndex; // 66
				const CTransform  transform1; // 68
				const CTransform  transform2; // 69
				CTransform resultTransform; // 71
			}
		}
		{
			int i; // 81
			{
				const int  boneIndex; // 83
				const CTransform  transform1; // 85
				const CTransform  transform2; // 86
				CTransform resultTransform; // 88
			}
		}
		{
			int i; // 99
			{
				const int  boneIndex; // 101
				const CTransform  transform1; // 103
				const CTransform  transform2; // 104
				CTransform resultTransform; // 106
			}
		}
		{
			const uint32  allSetMask; // 117
			const uint32  channelFlags; // 118
			{
				const CUtlVector<int, CUtlMemory<int, int> >& nIndexArray; // 128
				const CUtlVector<float, CUtlMemory<float, int> >& flWeightArray; // 129
				float* pStream1Array; // 131
				const float* pStream2Array; // 132
				{
					int i; // 134
					{
						const int  index; // 136
						const float  blendWeight; // 137
					}
				}
			}
		}
	}
} /* size: 0 */

