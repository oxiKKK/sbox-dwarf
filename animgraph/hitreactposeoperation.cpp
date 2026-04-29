
//
// animgraph/hitreactposeoperation.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//

// <0175594C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.cpp:12
// variable: 1
// function calls: 28
void MakeOpDescription(CPoseRecipe& pPoseRecipe, PoseHandle hChildPose, CPackedHandle<HitReactFixedSettings_t> hFixedSettings, CPackedHandle<HitReactInstanceSettings_t> hInstanceSettings)
{
	CPackedHandle<CHitReactPoseOperation::OpSettings> hParam; // 14
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CHitReactPoseOperation::OpSettings>::CPackedHandle(); // 14
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<HitReactInstanceSettings_t>::CPackedHandle(
			const CPackedHandle<HitReactInstanceSettings_t>  &);  // 140
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<HitReactFixedSettings_t>::CPackedHandle(
			const CPackedHandle<HitReactFixedSettings_t>  &);  // 140
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<HitReactFixedSettings_t>::CPackedHandle(
			const CPackedHandle<HitReactFixedSettings_t>  &);  // 72
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<HitReactInstanceSettings_t>::CPackedHandle(
			const CPackedHandle<HitReactInstanceSettings_t>  &);  // 73
	OpSettings::OpSettings(
			PoseHandle hChildPose,
			CPackedHandle<HitReactFixedSettings_t> hFixedSettings,
			CPackedHandle<HitReactInstanceSettings_t> hInstanceSettings);  // 140
	CPackedDataT<false>::AddItem<CHitReactPoseOperation::OpSettings, unsigned char&, CPackedHandle<HitReactFixedSettings_t>&, CPackedHandle<HitReactInstanceSettings_t>&>(
																CPackedHandle<CHitReactPoseOperation::OpSettings>* handleOut);  // 15
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
	CPackedHandle<CHitReactPoseOperation::OpSettings>::GetID(); // 87
	{
	}
	CPoseRecipe::AddPoseOp<CHitReactPoseOperation, CHitReactPoseOperation::OpSettings>(
										const CPackedHandle<CHitReactPoseOperation::OpSettings>& hParam);  // 17
} /* size: 0, variables: 1, inline expansions: 28 (430 bytes) */

// <017558F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.cpp:21
// variables: 2
BoneIndex_t GetBoneAncestor(const CAnimSkeleton* pSkeleton, BoneIndex_t nBoneIndex, int ancestorCount)
{
	{
		int i; // 23
		{
			BoneIndex_t nParentIndex; // 25
		}
	}
} /* size: 0 */

// <017558A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.cpp:40
// variables: 2
float GetBoneWeight(BoneIndex_t nBoneIndex, CPoseUpdateContext& context, const HitReactFixedSettings_t& fixedSettings)
{
	{
		const ChannelWeightlist_t* pWeightList; // 45
		{
			int i; // 56
		}
	}
} /* size: 0 */

// <01755858> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.cpp:75
// variable: 1
float ApplyPropagationScale(float flValue, float flScale, int nCount)
{
	{
		int i; // 77
	}
} /* size: 0 */

// <0174F22F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/hitreactposeoperation.cpp:87
// variables: 211
// function calls: 430
void Evaluate(CPoseUpdateContext& context, OpSettings* pSettings)
{
	const HitReactFixedSettings_t& fixedSettings; // 89
	HitReactInstanceSettings_t& instanceSettings; // 90
	CAnimPosePtr pBasePose; // 93
	int nBoneCount; // 95
	{
		int iImpact; // 97
		{
			const HitReactImpact_t& currentImpact; // 99
			{
				float flElapsedTime; // 103
				VectorAligned vHitPos; // 105
				VectorAligned vImpactDirection; // 106
				const float  flImpactMagnitude; // 107
				float flAngle; // 127
				float flAngleVelocity; // 128
				QuaternionAligned qAccumulatedRot; // 136
				{
					float flAngle; // 113
					float flAngleVelocity; // 114
					CTransform hipXform; // 117
					CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 117
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
							const VectorAligned& v);  // 119
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
							vec_t s);  // 119
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
					VectorAligned::Normalized(); // 119
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
							vec_t s);  // 119
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
							const VectorAligned& v);  // 119
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
							const VectorAligned& v0);  // 119
					CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 121
				}
				{
					int iBone; // 138
					{
						BoneIndex_t nCurrentBoneIndex; // 140
						BoneIndex_t nLastBoneIndex; // 141
						CTransform boneXform; // 150
						VectorAligned vToHitPos; // 152
						float flHitPosDistance; // 153
						VectorAligned vRotAxis; // 155
						{
							QuaternionAligned qRotInverse; // 179
							const BoneIndex_t  nChildCount; // 180
							{
								const float  flBoneWeight; // 160
								float flEffectiveAngle; // 161
								QuaternionAligned qRot; // 164
								SinCos(float radians,
									float* sine,
									float* cosine);  // 361
								{
									fltx4 retVal; // 1134
									_mm_set1_ps(float __F); // 1135
								}
								ReplicateX4<>(float flValue); // 363
								{
									fltx4 retVal; // 1639
									_mm_mul_ps(__m128 __A,
											__m128 __B);  // 1640
								}
								MulSIMD<>(const fltx4& a,
										const fltx4& b);  // 363
								{
									fltx4 retVal; // 1478
									_mm_move_ss(__m128 __A,
											__m128 __B);  // 1479
									_mm_move_ss(__m128 __A,
											__m128 __B);  // 1481
								}
								SetWSIMD<>(fltx4 a,
										float f);  // 364
								QuaternionAligned::SetAxisAngle(
										const VectorAligned& axis,
										vec_t angleRadians);  // 31
								QuaternionAligned::QuaternionAligned(
											const VectorAligned& axis,
											vec_t angle);  // 164
								Lerp<float>(float flPercent,
										const float& A,
										const float& B);  // 161
								{
									int i; // 77
								}
								ApplyPropagationScale(float flValue,
											float flScale,
											int nCount);  // 162
								QuaternionAligned::operator*=(
										const QuaternionAligned& q);  // 302
								QuaternionAligned::QuaternionAligned(
											fltx4 vec);  // 301
								QuaternionAligned::operator*(
										const QuaternionAligned& q);  // 166
								QuaternionAligned::operator*=(
										const QuaternionAligned& q);  // 302
								QuaternionAligned::QuaternionAligned(
											fltx4 vec);  // 301
								QuaternionAligned::operator*(
										const QuaternionAligned& q);  // 168
								QuaternionAligned::operator=(
										const QuaternionAligned& vOther);  // 166
								QuaternionAligned::operator=(
										const QuaternionAligned& vOther);  // 168
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
										vec_t s);  // 172
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
										vec_t s);  // 172
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
										const VectorAligned& v);  // 172
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
										const VectorAligned& v0);  // 172
								CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 175
							}
							{
								int iChild; // 181
								{
									BoneIndex_t nChildBoneIndex; // 183
									{
										const float  flBoneWeight; // 186
										CTransform childXform; // 188
										QuaternionAligned qInvRot; // 190
										{
											float flWhipAngle; // 201
											float flWhipAngleVelocity; // 202
											float flEffectiveAngle; // 205
											QuaternionAligned qWhipRot; // 207
											Lerp<float>(float flPercent,
													const float& A,
													const float& B);  // 205
											SinCos(float radians,
												float* sine,
												float* cosine);  // 361
											{
												fltx4 retVal; // 1134
												_mm_set1_ps(float __F); // 1135
											}
											ReplicateX4<>(float flValue); // 363
											{
												fltx4 retVal; // 1639
												_mm_mul_ps(__m128 __A,
														__m128 __B);  // 1640
											}
											MulSIMD<>(const fltx4& a,
													const fltx4& b);  // 363
											{
												fltx4 retVal; // 1478
												_mm_move_ss(__m128 __A,
														__m128 __B);  // 1479
												_mm_move_ss(__m128 __A,
														__m128 __B);  // 1481
											}
											SetWSIMD<>(fltx4 a,
													float f);  // 364
											QuaternionAligned::SetAxisAngle(
													const VectorAligned& axis,
													vec_t angleRadians);  // 31
											QuaternionAligned::QuaternionAligned(
														const VectorAligned& axis,
														vec_t angle);  // 207
											QuaternionAligned::QuaternionAligned(
														fltx4 vec);  // 301
											QuaternionAligned::operator*=(
													const QuaternionAligned& q);  // 302
											QuaternionAligned::operator*(
													const QuaternionAligned& q);  // 209
											QuaternionAligned::operator=(
													const QuaternionAligned& vOther);  // 209
										}
										CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 212
										CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 188
										QuaternionAligned::QuaternionAligned(
													fltx4 vec);  // 301
										QuaternionAligned::operator*=(
												const QuaternionAligned& q);  // 302
										QuaternionAligned::operator*(
												const QuaternionAligned& q);  // 195
										QuaternionAligned::operator=(
												const QuaternionAligned& vOther);  // 195
										QuaternionAligned::QuaternionAligned(
													fltx4 vec);  // 301
										QuaternionAligned::operator*=(
												const QuaternionAligned& q);  // 302
										QuaternionAligned::operator*(
												const QuaternionAligned& q);  // 197
										QuaternionAligned::operator=(
												const QuaternionAligned& vOther);  // 197
										QuaternionAligned::operator fltx4(); // 193
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
													float t);  // 193
									}
									CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 183
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
											int childIndex);  // 183
									CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 183
								}
							}
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
							QuaternionAligned::Conjugate(); // 179
							CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 180
							CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator->(); // 180
							CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
									int i);  // 595
							CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
									int i);  // 149
							CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 149
							CAnimSkeleton::GetChildCount(
									BoneIndex_t boneIndex);  // 180
						}
						CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 140
						CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::Get(); // 140
						{
							int i; // 23
							{
								BoneIndex_t nParentIndex; // 25
								CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
										int i);  // 142
								CAnimSkeleton::GetParentIndex(
										BoneIndex_t boneIndex);  // 25
							}
						}
						GetBoneAncestor(const CAnimSkeleton* pSkeleton,
								BoneIndex_t nBoneIndex,
								int ancestorCount);  // 140
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 256
						VectorAligned::operator fltx4(); // 256
						VectorAligned::VectorAligned(
								fltx4 rhs);  // 256
						VectorAligned::operator-(
								const VectorAligned& v);  // 152
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
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1695
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
						VectorAligned::VectorAligned(
								fltx4 rhs);  // 330
						VectorAligned::NormalizeInPlace(); // 153
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
							const VectorAligned& v);  // 422
						CrossProduct(const VectorAligned& lhs,
								const VectorAligned& rhs);  // 155
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
								const VectorAligned& v);  // 155
						{
							int i; // 23
							{
								BoneIndex_t nParentIndex; // 25
								CUtlMemory<CAnimSkeleton::BoneInfo, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CAnimSkeleton::BoneInfo, CUtlMemory<CAnimSkeleton::BoneInfo, int> >::operator[](
										int i);  // 142
								CAnimSkeleton::GetParentIndex(
										BoneIndex_t boneIndex);  // 25
							}
						}
						GetBoneAncestor(const CAnimSkeleton* pSkeleton,
								BoneIndex_t nBoneIndex,
								int ancestorCount);  // 144
					}
				}
				CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 105
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
						const VectorAligned& v0);  // 105
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
				QuaternionAligned::operator fltx4(); // 408
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
							const VectorAligned& v0);  // 106
			}
		}
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<HitReactFixedSettings_t>(
						const CPackedHandle<HitReactFixedSettings_t>& handle);  // 33
	CAnimGraphFixedData::operator[]<HitReactFixedSettings_t>(
						const CPackedHandle<HitReactFixedSettings_t>& handle);  // 89
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<HitReactInstanceSettings_t>(
						const CPackedHandle<HitReactInstanceSettings_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<HitReactInstanceSettings_t>(
						const CPackedHandle<HitReactInstanceSettings_t>& handle);  // 90
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 95
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 113
	CAnimPose::GetBoneCount(); // 95
} /* size: 3250, variables: 4, inline expansions: 9 (135 bytes) */

