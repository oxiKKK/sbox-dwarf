
//
// animgraph/differenceblendposeoperation.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//

// <01780833> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/differenceblendposeoperation.cpp:14
// variable: 1
// function calls: 6
void DiffBlendInstanceData::DiffBlendInstanceData(CSaveablePackedData& packedData, int nBoneCount)
{
	CRelativeOffset<CTransform>::CRelativeOffset(); // 84
	CRelativeArray<CTransform>::CRelativeArray(); // 14
	{
		uint32 i; // 183
	}
	CPackedDataT<true>::AddArray<CTransform, CTransform&>(
						uint32 count,
						CPackedHandle<CTransform>* handleOut,
						CTransform& param1);  // 16
	{
	}
	CRelativeOffset<CTransform>::SetOffset(
			const CTransform* targetPtr);  // 20
	CRelativeOffset<CTransform>::operator=(
			const CTransform* targetPtr);  // 115
	CRelativeArray<CTransform>::SetArray(
		const CTransform* targetArray,
		int32 count);  // 16
} /* size: 0, inline expansions: 6 (252 bytes) */

// <017807FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/differenceblendposeoperation.cpp:14
void DiffBlendInstanceData::DiffBlendInstanceData(CSaveablePackedData& packedData, int nBoneCount)
{
} /* size: 0 */

// <0178016D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/differenceblendposeoperation.cpp:21
// variable: 1
// function calls: 24
void MakeOpDescription(CPoseRecipe& pPoseRecipe, PoseHandle hChildPose, PoseHandle hRefChildPose, CPackedHandle<DiffBlendInstanceData> hInstData, float flBlendCycle, float flLastBlendCycle)
{
	CPackedHandle<CDifferenceBlendPoseOperation::OpSettings> hParam; // 23
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>::CPackedHandle(); // 23
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<DiffBlendInstanceData>::CPackedHandle(
			const CPackedHandle<DiffBlendInstanceData>  &);  // 140
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<DiffBlendInstanceData>::CPackedHandle(
			const CPackedHandle<DiffBlendInstanceData>  &);  // 32
	OpSettings::OpSettings(
			PoseHandle hChildPose,
			PoseHandle hRefChildPose,
			CPackedHandle<DiffBlendInstanceData> hInstData,
			float flBlendCycle,
			float flLastBlendCycle);  // 140
	CPackedDataT<false>::AddItem<CDifferenceBlendPoseOperation::OpSettings, unsigned char&, unsigned char&, CPackedHandle<DiffBlendInstanceData>&, float&, float&>(
																CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>* handleOut);  // 26
	PackedHandleID::PackedHandleID(); // 47
	PoseOpDesc::PoseOpDesc(); // 85
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 27
	CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>::GetID(); // 87
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
	{
	}
	CPoseRecipe::AddPoseOp<CDifferenceBlendPoseOperation, CDifferenceBlendPoseOperation::OpSettings>(
												const CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>& hParam);  // 31
} /* size: 0, variables: 1, inline expansions: 24 (405 bytes) */

// <0177CA34> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/differenceblendposeoperation.cpp:36
// variables: 110
// function calls: 220
void Evaluate(CPoseUpdateContext& context, OpSettings* pSettings)
{
	CAnimPosePtr pBasePose; // 38
	const int  nBoneCount; // 40
	DiffBlendInstanceData* pInstData; // 42
	{
		CAnimPosePtr pRefPose; // 47
		{
			CTransform* pOffsetTransforms; // 52
			const CTransform* pBaseTransforms; // 53
			const CTransform* pRefTransforms; // 54
			{
				const CTransform  zeroTransform; // 58
				{
					int boneIndex; // 60
					{
						CTransform scaledOffsetTransform; // 62
						CTransform refTransform; // 63
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
						QuaternionAlignSIMD<>(const fltx4& p,
									const fltx4& q);  // 527
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
							float t);  // 62
						QuaternionAligned::operator fltx4(); // 471
						VectorAligned::operator fltx4(); // 471
						CTransform::operator*(
								const CTransform& rhs);  // 63
						CTransform::InverseTR(); // 64
						QuaternionAligned::operator fltx4(); // 471
						VectorAligned::operator fltx4(); // 471
						QuaternionAligned::operator fltx4(); // 471
						VectorAligned::operator fltx4(); // 471
						CTransform::operator*(
								const CTransform& rhs);  // 64
						VectorAligned::operator=(
								const VectorAligned& src);  // 26
						QuaternionAligned::operator=(
								const QuaternionAligned& vOther);  // 26
						CTransform::operator=(
								CTransform &);  // 64
					}
				}
			}
			{
				int boneIndex; // 69
				CTransform::InverseTR(); // 71
				QuaternionAligned::operator fltx4(); // 471
				VectorAligned::operator fltx4(); // 471
				QuaternionAligned::operator fltx4(); // 471
				VectorAligned::operator fltx4(); // 471
				CTransform::operator*(
						const CTransform& rhs);  // 71
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						CTransform &);  // 71
			}
			CRelativeOffset<CTransform>::IsValid(); // 30
			CRelativeOffset<CTransform>::Get(); // 107
			CRelativeArray<CTransform>::Get(); // 52
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 53
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 54
		}
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
		CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 75
	}
	{
		const CTransform  zeroTransform; // 82
		const CTransform* pOffsetTransforms; // 84
		CTransform* pPoseTransforms; // 85
		{
			int boneIndex; // 87
			{
				CTransform scaledOffsetTransform; // 89
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
				QuaternionAlignSIMD<>(const fltx4& p,
							const fltx4& q);  // 527
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
					float t);  // 89
				QuaternionAligned::operator fltx4(); // 471
				VectorAligned::operator fltx4(); // 471
				CTransform::operator*(
						const CTransform& rhs);  // 90
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						CTransform &);  // 90
			}
		}
		CRelativeOffset<CTransform>::IsValid(); // 30
		CRelativeOffset<CTransform>::Get(); // 107
		CRelativeArray<CTransform>::Get(); // 84
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 85
	}
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 40
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
	CAnimPose::GetBoneCount(); // 40
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<DiffBlendInstanceData>(
						const CPackedHandle<DiffBlendInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<DiffBlendInstanceData>(
						const CPackedHandle<DiffBlendInstanceData>& handle);  // 42
} /* size: 2595, variables: 3, inline expansions: 6 (84 bytes) */

