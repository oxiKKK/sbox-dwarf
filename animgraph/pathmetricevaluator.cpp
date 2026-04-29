
//
// animgraph/pathmetricevaluator.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//

// <0163DE8C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.cpp:10
// variables: 3
// function calls: 41
void CPathMetricEvaluator::CPathMetricEvaluator(CPackedData& packedData, float flDistance, const CUtlVector<float, CUtlMemory<float, int> >& pathSamples, bool bExtrapolateMovement, float flMinExtrapolationSpeed, float flWeight)
{
	{
		CUtlVector<float, CUtlMemory<float, int> > sortedPathSamples; // 18
	}
	CRelativeOffset<float>::CRelativeOffset(); // 84
	CRelativeArray<float>::CRelativeArray(); // 14
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 135
	CUtlVectorBase<float, CUtlMemory<float, int> >::IsEmpty(); // 16
	{
		CUtlVector<float, CUtlMemory<float, int> > sortedPathSamples; // 18
		CUtlMemory<float, int>::ValidateGrowSize(); // 475
		CUtlMemory<float, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 434
		CUtlMemory<float, int>::Grow(
			int num);  // 806
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<float, CUtlMemory<float, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount(
			int count);  // 573
		CUtlMemory<float, int>::Base(); // 113
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 105
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 105
		CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 574
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<float>(const float* pFrom,
						const float* pFromEnd,
						float* pTo);  // 173
		UtlTraitsCopyRange<float>(const float* pFrom,
						const float* pFromEnd,
						float* pTo);  // 574
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
				const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
				const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
		CUtlVector<float, CUtlMemory<float, int> >::operator=(
				const CUtlVector<float, CUtlMemory<float, int> >& src);  // 434
		CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(
				const CUtlVector<float, CUtlMemory<float, int> >& src);  // 18
		{
			uint32 i; // 206
		}
		CPackedDataT<false>::AddArray<float>(
				const float* pSrcArray,
				uint32 count,
				CPackedHandle<float>* handleOut);  // 22
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 22
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 22
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 22
		{
		}
		CRelativeOffset<float>::SetOffset(
				const float* targetPtr);  // 20
		CRelativeOffset<float>::operator=(
				const float* targetPtr);  // 115
		CRelativeArray<float>::SetArray(
			const float* targetArray,
			int32 count);  // 22
		CUtlMemory<float, int>::Purge(); // 903
		CUtlMemory<float, int>::Purge(); // 1799
		CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
		CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
		CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 23
	}
	CPathMetricEvaluator::CPathMetricEvaluator(
				CPackedData& packedData,
				float flDistance,
				const CUtlVector<float, CUtlMemory<float, int> >& pathSamples,
				bool bExtrapolateMovement,
				float flMinExtrapolationSpeed,
				float flWeight);  // 10
} /* size: 0, inline expansions: 5 (420 bytes) */

// <0163DE1D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.cpp:10
// variable: 1
void CPathMetricEvaluator::CPathMetricEvaluator(CPackedData& packedData, float flDistance, const CUtlVector<float, CUtlMemory<float, int> >& pathSamples, bool bExtrapolateMovement, float flMinExtrapolationSpeed, float flWeight)
{
	{
		CUtlVector<float, CUtlMemory<float, int> > sortedPathSamples; // 18
	}
} /* size: 0 */

// <0163DD96> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.cpp:27
// function call: 1
void CPathMetricEvaluator::GetUIName()
{
	CUtlString::CUtlString(
			const char* pString);  // 29
} /* size: 44, inline expansions: 1 (19 bytes) */

// <0163C195> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.cpp:33
// variables: 52
// function calls: 107
void CPathMetricEvaluator::CalculateSequenceValues(const CModel* pModel, CMotionMetricInitContext* pContext, HSequence hSequence, float flCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
	const char   __FUNCTION__; // 31150
	const ISequence* pSequence; // 37
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 35
	}
	{
		const CSequenceDistanceHelper* pSequenceHelper; // 40
		{
			int i; // 42
			{
				const float  flTargetDistance; // 45
				float flCycleForDistance; // 46
				Vector vFuturePositionMS; // 49
				QAngle vFutureOrientationMS; // 50
				{
					Vector vVelocityClipSpace; // 63
					float flSpeed; // 66
					{
						float flRemainingDistance; // 69
						Vector tmpPos2; // 73
						QAngle tmpRot2; // 74
						QuaternionAligned qStartRot; // 77
						VectorAligned vVelocityMS; // 79
						VectorAligned vExtrapolateDistance; // 81
						_mm_load_ss(const float* __P); // 21
						_mm_sqrt_ss(__m128 __A); // 21
						_mm_cvtss_f32(__m128 __A); // 21
						FastSqrt(float x); // 1249
						VectorLength(const Vector& v); // 1256
						Vector::Length(); // 69
						QAngle::QAngle(
							vec_t flPitchDegrees,
							vec_t flYawDegrees,
							vec_t flRollDegrees);  // 74
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 73
						RadianEuler::Init(
							vec_t ix,
							vec_t iy,
							vec_t iz);  // 2535
						RadianEuler::RadianEuler(
								const QAngle& angles);  // 2530
						Quaternion::Quaternion(
								const QAngle& angles);  // 77
						QuaternionAligned::Init(
							vec_t X,
							vec_t Y,
							vec_t Z,
							vec_t W);  // 30
						QuaternionAligned::QuaternionAligned(
									const Quaternion& rhs);  // 77
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
								const Vector& rhs);  // 79
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
						QuaternionAligned::Conjugate(); // 79
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
								const VectorAligned& v);  // 79
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
						VectorAligned::Normalized(); // 81
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 229
						VectorAligned::operator*=(
								vec_t s);  // 84
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 40
						VectorAligned::operator Vector(); // 87
						Vector::operator+=(
								const Vector& v);  // 87
					}
					Vector::Vector(); // 63
					Vector::NormalizeInPlace(); // 66
				}
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 59
				CRelativeOffset<float>::IsValid(); // 35
				CRelativeOffset<float>::Get(); // 97
				CRelativeArray<float>::operator[](
						int index);  // 45
				Vector::Vector(); // 49
				QAngle::QAngle(); // 50
			}
			CRelativeArray<float>::Count(); // 42
		}
	}
} /* size: 0, variables: 2 */

// <0163BD3F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.cpp:100
// variables: 5
// function calls: 10
void CPathMetricEvaluator::CalculateGoalValues(const CAnimGraphUpdateContext& context, HSequence hSequence, float flCurrentCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
	{
		int i; // 102
		{
			const float  flTargetDistance; // 104
			CMotionTransform futureTransformMS; // 106
			{
				const CMotionTransform  localToWorld; // 109
				CMotionTransform futureTransformWS; // 111
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 112
			}
			CRelativeOffset<float>::IsValid(); // 35
			CRelativeOffset<float>::Get(); // 97
			CRelativeArray<float>::operator[](
					int index);  // 104
			{
			}
			{
			}
			CRotation::CRotation(
					const CRotation& rot);  // 22
			CRotation::CRotation(
					const CRotation& rot);  // 17
			CMotionTransform::CMotionTransform(
					const CMotionTransform  &);  // 106
		}
		CRelativeArray<float>::Count(); // 102
	}
} /* size: 0 */

// <0164D2E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.cpp:124
// variables: 4
// function calls: 6
void CPathMetricEvaluator::CalculateCurrentValues(const CAnimGraphUpdateContext& context, const DistanceScalingSettings& distanceScale, HSequence hSequence, float flCycle, float* pVectorDataOut)
{
	{
		int i; // 131
		CRelativeArray<float>::Count(); // 131
		{
			const float  flTargetDistance; // 133
			CRelativeOffset<float>::IsValid(); // 35
			CRelativeOffset<float>::Get(); // 97
			CRelativeArray<float>::operator[](
					int index);  // 133
			{
				int j; // 136
				{
					float flAdjustedTranslation; // 138
					Lerp<float>(float flPercent,
							const float& A,
							const float& B);  // 139
				}
			}
		}
	}
	CPathMetricEvaluator::CalculateCurrentValues(
				const CAnimGraphUpdateContext& context,
				const DistanceScalingSettings& distanceScale,
				HSequence hSequence,
				float flCycle,
				float* pVectorDataOut);  // 124
} /* size: 246, inline expansions: 1 (144 bytes) */

// <0163BCB4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.cpp:124
// variables: 4
void CPathMetricEvaluator::CalculateCurrentValues(const CAnimGraphUpdateContext& context, const DistanceScalingSettings& distanceScale, HSequence hSequence, float flCycle, float* pVectorDataOut)
{
	{
		int i; // 131
		{
			const float  flTargetDistance; // 133
			{
				int j; // 136
				{
					float flAdjustedTranslation; // 138
				}
			}
		}
	}
} /* size: 0 */

// <0163BC56> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.cpp:151
// function call: 1
void CPathMetricEvaluator::GetSampleCount()
{
	CRelativeArray<float>::Count(); // 153
} /* size: 8, inline expansions: 1 (0 bytes) */

// <0163BB31> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricevaluator.cpp:157
// function calls: 3
void CPathMetricEvaluator::GetSampleTime(int nSampleIndex)
{
	{
	}
	CRelativeOffset<float>::IsValid(); // 35
	CRelativeOffset<float>::Get(); // 97
	CRelativeArray<float>::operator[](
			int index);  // 159
} /* size: 0, inline expansions: 3 (122 bytes) */

