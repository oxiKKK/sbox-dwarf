
//
// animgraph/footpositionmetricevaluator.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//

// <01647037> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricevaluator.cpp:10
// variables: 3
// function calls: 16
Vector CalcFootBasePos(const Vector& vToePos, const Vector& vHeelPos)
{
	Vector vToHeel; // 12
	float flLength; // 13
	Vector vDirection; // 16
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 12
	Vector::Normalized(); // 16
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 13
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 16
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 24
} /* size: 271, variables: 3, inline expansions: 16 (316 bytes) */

// <01646CFE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricevaluator.cpp:29
// variable: 1
// function calls: 11
void CFootPositionMetricEvaluator::CFootPositionMetricEvaluator(CPackedData& packedData, const CUtlVector<int, CUtlMemory<int, int> >& footIndices, bool bIgnoreSlope, float flWeight)
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 30
	CRelativeOffset<int>::CRelativeOffset(); // 84
	CRelativeArray<int>::CRelativeArray(); // 31
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 33
	{
		uint32 i; // 206
	}
	CPackedDataT<false>::AddArray<int>(
			const int* pSrcArray,
			uint32 count,
			CPackedHandle<int>* handleOut);  // 33
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 33
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 33
	{
	}
	CRelativeOffset<int>::SetOffset(
			const int* targetPtr);  // 20
	CRelativeOffset<int>::operator=(
			const int* targetPtr);  // 115
	CRelativeArray<int>::SetArray(
		const int* targetArray,
		int32 count);  // 33
} /* size: 0, inline expansions: 11 (262 bytes) */

// <01646CB5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricevaluator.cpp:29
void CFootPositionMetricEvaluator::CFootPositionMetricEvaluator(CPackedData& packedData, const CUtlVector<int, CUtlMemory<int, int> >& footIndices, bool bIgnoreSlope, float flWeight)
{
} /* size: 0 */

// <01646C2E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricevaluator.cpp:37
// function call: 1
void CFootPositionMetricEvaluator::GetUIName()
{
	CUtlString::CUtlString(
			const char* pString);  // 39
} /* size: 44, inline expansions: 1 (19 bytes) */

// <01644ADB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricevaluator.cpp:43
// variables: 63
// function calls: 136
void CFootPositionMetricEvaluator::CalculateSequenceValues(const CModel* pModel, CMotionMetricInitContext* pContext, HSequence hSequence, float flCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
	Vector* pPositions; // 45
	{
		int iFoot; // 48
		CRelativeArray<int>::Count(); // 48
		Vector::operator=(
				const Vector& vOther);  // 50
	}
	{
		const ISequence* pSequence; // 55
		{
			CUtlVector<CTransform, CUtlMemory<CTransform, int> > boneTransformsMS; // 58
			CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> > feet; // 61
			{
				int iFoot; // 63
				{
					int nFootIndex; // 65
					{
						const CFootDefinition& footDefinition; // 68
						int ankleBoneIndex; // 70
						{
							CTransform ankleTransform; // 73
							Vector vToePos; // 74
							Vector vHeelPos; // 75
							CUtlMemory<CTransform, int>::operator[](
									int i);  // 588
							CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
									int i);  // 73
							{
								fltx4 x000; // 1010
								fltx4 y000; // 1011
								fltx4 z000; // 1012
								fltx4 x0y0; // 1013
								_mm_load_ss(const float* __P); // 1012
								_mm_load_ss(const float* __P); // 1011
								_mm_load_ss(const float* __P); // 1010
								_mm_movelh_ps(__m128 __A,
										__m128 __B);  // 1013
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1014
							}
							LoadUnaligned3SIMD<>(const void* pSIMD); // 419
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
									const VectorAligned& v);  // 419
							{
								fltx4 retVal; // 1352
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1353
							}
							SplatWSIMD<>(const fltx4& a); // 417
							VectorAligned::VectorAligned(
									fltx4 rhs);  // 419
							{
								fltx4 retVal; // 1639
								_mm_mul_ps(__m128 __A,
										__m128 __B);  // 1640
							}
							MulSIMD<>(const fltx4& a,
									const fltx4& b);  // 420
							{
								fltx4 retVal; // 1593
								_mm_add_ps(__m128 __A,
										__m128 __B);  // 1594
							}
							AddSIMD<>(const fltx4& a,
									const fltx4& b);  // 421
							Vector::Vector(); // 422
							_mm_store_ss(float* __P,
									__m128 __A);  // 468
							StoreUnaligned3SIMD<>(float* pSIMD,
										const fltx4& a);  // 423
							CTransform::TransformVector(
									const Vector& v0);  // 74
							{
								fltx4 x000; // 1010
								fltx4 y000; // 1011
								fltx4 z000; // 1012
								fltx4 x0y0; // 1013
								_mm_load_ss(const float* __P); // 1012
								_mm_load_ss(const float* __P); // 1010
								_mm_load_ss(const float* __P); // 1011
								_mm_movelh_ps(__m128 __A,
										__m128 __B);  // 1013
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1014
							}
							LoadUnaligned3SIMD<>(const void* pSIMD); // 419
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
									const VectorAligned& v);  // 419
							VectorAligned::VectorAligned(
									fltx4 rhs);  // 419
							{
								fltx4 retVal; // 1639
								_mm_mul_ps(__m128 __A,
										__m128 __B);  // 1640
							}
							MulSIMD<>(const fltx4& a,
									const fltx4& b);  // 420
							{
								fltx4 retVal; // 1593
								_mm_add_ps(__m128 __A,
										__m128 __B);  // 1594
							}
							AddSIMD<>(const fltx4& a,
									const fltx4& b);  // 421
							Vector::Vector(); // 422
							_mm_store_ss(float* __P,
									__m128 __A);  // 468
							StoreUnaligned3SIMD<>(float* pSIMD,
										const fltx4& a);  // 423
							CTransform::TransformVector(
									const Vector& v0);  // 75
							Vector::operator=(
									const Vector& vOther);  // 77
						}
						CUtlMemory<CFootDefinition, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::operator[](
								int i);  // 68
						CUtlString::Get(); // 99
						CUtlString::String(); // 70
					}
					CRelativeOffset<int>::IsValid(); // 35
					CRelativeOffset<int>::Get(); // 97
					CRelativeArray<int>::operator[](
							int index);  // 65
				}
				CRelativeArray<int>::Count(); // 63
			}
			CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
			CUtlMemory<CTransform, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(); // 58
			{
				int i; // 1721
				CUtlMemory<CFootDefinition, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 14
				CUtlString::~CUtlString(); // 14
				CUtlString::~CUtlString(); // 14
				CFootDefinition::~CFootDefinition(); // 1526
				Destruct<CFootDefinition>(CFootDefinition* pMemory); // 1723
			}
			CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::RemoveAll(); // 1798
			CUtlMemory<CFootDefinition, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CFootDefinition, int>::Purge(); // 903
			CUtlMemory<CFootDefinition, int>::Purge(); // 1799
			CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::Purge(); // 560
			ValidateAlignment<CFootDefinition>(void); // 508
			CUtlMemory<CFootDefinition, int>::Purge(); // 510
			CUtlMemory<CFootDefinition, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> >::~CUtlVector(); // 81
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
			CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CTransform, int>::Purge(); // 903
			CUtlMemory<CTransform, int>::Purge(); // 1799
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
			ValidateAlignment<CTransform>(void); // 508
			CUtlMemory<CTransform, int>::Purge(); // 510
			CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 81
		}
	}
	HSequence::operator==(
			const HSequence& other);  // 53
} /* size: 956, variables: 1, inline expansions: 1 (0 bytes) */

// <01643C66> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricevaluator.cpp:86
// variables: 26
// function calls: 57
void CFootPositionMetricEvaluator::CalculateGoalValues(const CAnimGraphUpdateContext& context, HSequence hSequence, float flCurrentCycle, bool bLoop, float flPredictionTime, float* pVectorDataOut)
{
	Vector* pPositions; // 88
	{
		int iFoot; // 90
		{
			const int  nFootIndex; // 92
			{
				VectorAligned vFootPosWS; // 95
				VectorAligned::VectorAligned(); // 95
				VectorAligned::operator=(
						const VectorAligned& src);  // 99
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
							const int  __mask);  // 3341
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
							const VectorAligned& v0);  // 106
				_mm_cvtss_f32(__m128 __A); // 1534
				GetZSIMD<>(fltx4 a); // 76
				VectorAligned::z(); // 40
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 106
				Vector::operator=(
						const Vector& vOther);  // 106
				VectorAligned::operator=(
						const VectorAligned& src);  // 103
			}
			Vector::operator=(
					const Vector& vOther);  // 110
			CRelativeOffset<int>::IsValid(); // 35
			CRelativeOffset<int>::Get(); // 97
			CRelativeArray<int>::operator[](
					int index);  // 92
		}
		CRelativeArray<int>::Count(); // 90
	}
} /* size: 392, variables: 1 */

// <01643C08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricevaluator.cpp:118
// function call: 1
void CFootPositionMetricEvaluator::GetFootCount()
{
	CRelativeArray<int>::Count(); // 120
} /* size: 8, inline expansions: 1 (0 bytes) */

// <01643AE3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricevaluator.cpp:124
// function calls: 3
void CFootPositionMetricEvaluator::GetFootIndex(int index)
{
	{
	}
	CRelativeOffset<int>::IsValid(); // 35
	CRelativeOffset<int>::Get(); // 97
	CRelativeArray<int>::operator[](
			int index);  // 126
} /* size: 0, inline expansions: 3 (122 bytes) */

