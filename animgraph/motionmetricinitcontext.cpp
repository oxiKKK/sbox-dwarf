
//
// animgraph/motionmetricinitcontext.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 12
//

// <013FD322> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.cpp:10
// variables: 92
// function calls: 138
void CMotionMetricInitContext::CMotionMetricInitContext(CAnimGraphInitContext& graphInitContext, float flSampleRate, const CUtlVector<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor clipGroups)
{
	{
		double turnAngleSum; // 13
		int turnAngleCount; // 14
		{
			CMotionClipGroupPtr pClipGroup; // 17
			const CUtlVector<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int& __for_range; // 14341
			const_iterator __for_begin; // 14352
			const_iterator __for_end; // 14363
			{
				int iClip; // 19
				{
					const IMotionClip* pMotionClip; // 21
					const CUtlString& sequenceName; // 23
					HSequence hSequence; // 25
					{
						const ISequence* pSequence; // 28
						CSequenceDistanceHelper* pHelper; // 30
						Vector vTotalMovement; // 35
						const float  flDuration; // 36
						int nFramesPerSample; // 38
						CUtlVector<float, CUtlMemory<float, int> > velocityBuffer; // 39
						CUtlVector<float, CUtlMemory<float, int> > turnSpeedBuffer; // 40
						int nSampleIndex; // 46
						{
							float& f; // 44
							CUtlVector<float, CUtlMemory<float, int> >& __for_range; // 14538
							iterator __for_begin; // 14549
							iterator __for_end; // 14560
						}
						{
							float& f; // 45
							CUtlVector<float, CUtlMemory<float, int> >& __for_range; // 14589
							iterator __for_begin; // 14600
							iterator __for_end; // 14611
						}
						{
							const int  nFrameCount; // 50
							const int  nFrameMax; // 51
							float flLastCycle; // 53
							{
								int iFrame; // 55
								{
									float flCycle; // 57
									Vector vDeltaMovement; // 59
									QAngle vDeltaRotation; // 60
									float flDistance; // 63
									float flVelocity; // 64
									float flTurnSpeed; // 65
									float flAvgVelocity; // 71
									float flAvgTurnSpeed; // 72
									{
										float f; // 73
										CUtlVector<float, CUtlMemory<float, int> >& __for_range; // 14787
										iterator __for_begin; // 14798
										iterator __for_end; // 14809
									}
									{
										float f; // 74
										CUtlVector<float, CUtlMemory<float, int> >& __for_range; // 14833
										iterator __for_begin; // 14844
										iterator __for_end; // 14855
									}
								}
							}
						}
					}
				}
			}
		}
	}
	CUtlMemory<CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>, DefaultHashFunctor<HSequence>, Defa this); // 178
	CUtlHashtable(const CUtlHashtable<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>, DefaultHashFunctor<HSequence>, Defa this,
			int minimumSize);  // 11
	CUtlVectorBase<CMotionMetricInitContext::PoseCache_t::ResetDbgInfo(); // 530
	CUtlMemory<CMotionMetricInitContext::PoseCache_t::ValidateGrowSize(); // 475
	CUtlMemory<CMotionMetricInitContext::PoseCache_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CMotionMetricInitContext::PoseCache_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CMotionMetricInitContext::PoseCache_t::CUtlVector(); // 11
	{
		double turnAngleSum; // 13
		int turnAngleCount; // 14
		{
			CMotionClipGroupPtr pClipGroup; // 17
			const CUtlVector<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int& __for_range; // 14341
			const_iterator __for_begin; // 14352
			const_iterator __for_end; // 14363
			CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::Base(); // 113
			Base(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this); // 103
			begin(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this); // 17
			Count(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this); // 105
			end(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this); // 17
			{
				int iClip; // 19
				{
					const IMotionClip* pMotionClip; // 21
					const CUtlString& sequenceName; // 23
					HSequence hSequence; // 25
					{
						const ISequence* pSequence; // 28
						CSequenceDistanceHelper* pHelper; // 30
						Vector vTotalMovement; // 35
						const float  flDuration; // 36
						int nFramesPerSample; // 38
						CUtlVector<float, CUtlMemory<float, int> > velocityBuffer; // 39
						CUtlVector<float, CUtlMemory<float, int> > turnSpeedBuffer; // 40
						int nSampleIndex; // 46
						ceil(float __x); // 38
						CUtlMemory<float, int>::ValidateGrowSize(); // 475
						CUtlMemory<float, int>::CUtlMemory(
								int nGrowSize,
								int nInitAllocationCount);  // 527
						CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
						CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
								int growSize,
								int initCapacity);  // 418
						CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 40
						ThreadInterlockedIncrement(volatile int32* p); // 158
						Increment(int* p); // 290
						CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
						CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
						AddRef<CSequenceDistanceHelper>(CSequenceDistanceHelper* pObj); // 366
						CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>::operator=(
								CSequenceDistanceHelper* pObj);  // 319
						CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>::CSmartPtr(
								CSequenceDistanceHelper* pObj);  // 31
						Mix32HashFunctor::operator(
								uint32 n);  // 13
						DefaultHashFunctor<HSequence>::operator(
								HSequence s);  // 249
						CUtlMemory<CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >, int>::operator[](
								int i);  // 720
						ThreadInterlockedIncrement(volatile int32* p); // 158
						Increment(int* p); // 290
						CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
						CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
						AddRef<CSequenceDistanceHelper>(CSequenceDistanceHelper* pObj); // 366
						ThreadInterlockedDecrement(volatile int32* p); // 159
						Decrement(int* p); // 295
						CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
						CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
						CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
						Release<CSequenceDistanceHelper>(CSequenceDistanceHelper* pObj); // 370
						CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>::operator=(
								CSequenceDistanceHelper* pObj);  // 406
						CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>::operator=(
								const CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>& other);  // 328
						CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>::CSmartPtr(
								const CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>& other);  // 64
						CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >::CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper> >(
														const HSequence& k,
														const CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>& v);  // 1514
						Construct<CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper> >, const HSequence&, const CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>&>(CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >* pMemory); // 720
						DoInsert<const HSequence&>(const CUtlHashtable<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>, DefaultHashFunctor<HSequence>, Defa this,
										const HSequence& k,
										Arg_t v,
										unsigned int h,
										bool* pDidInsert);  // 714
						DoInsert<const HSequence&>(const CUtlHashtable<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>, DefaultHashFunctor<HSequence>, Defa this,
										const HSequence& k,
										Arg_t v,
										unsigned int h,
										bool* pDidInsert);  // 249
						Insert(const CUtlHashtable<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>, DefaultHashFunctor<HSequence>, Defa this,
							KeyArg_t k,
							ValueArg_t v,
							bool* pDidInsert);  // 31
						ThreadInterlockedDecrement(volatile int32* p); // 159
						Decrement(int* p); // 295
						CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
						CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
						CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
						Release<CSequenceDistanceHelper>(CSequenceDistanceHelper* pObj); // 344
						CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>::~CSmartPtr(); // 31
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 35
						ceil(float __x); // 38
						CUtlMemory<float, int>::ValidateGrowSize(); // 475
						CUtlMemory<float, int>::CUtlMemory(
								int nGrowSize,
								int nInitAllocationCount);  // 527
						CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
						CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
								int growSize,
								int initCapacity);  // 418
						CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 39
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
							int count);  // 41
						_mm_load_ss(const float* __P); // 21
						_mm_sqrt_ss(__m128 __A); // 21
						_mm_cvtss_f32(__m128 __A); // 21
						FastSqrt(float x); // 1249
						VectorLength(const Vector& v); // 1256
						Vector::Length(); // 48
						{
							const int  nFrameCount; // 50
							const int  nFrameMax; // 51
							float flLastCycle; // 53
							IBaseSequence::NumFrames(
									const float* poseParameters);  // 50
							{
								int iFrame; // 55
								{
									float flCycle; // 57
									Vector vDeltaMovement; // 59
									QAngle vDeltaRotation; // 60
									float flDistance; // 63
									float flVelocity; // 64
									float flTurnSpeed; // 65
									float flAvgVelocity; // 71
									float flAvgTurnSpeed; // 72
									Vector::Vector(); // 59
									QAngle::QAngle(); // 60
									_mm_load_ss(const float* __P); // 21
									_mm_sqrt_ss(__m128 __A); // 21
									_mm_cvtss_f32(__m128 __A); // 21
									FastSqrt(float x); // 1249
									VectorLength(const Vector& v); // 1256
									Vector::Length(); // 63
									QAngle::operator[](
											int i);  // 65
									CUtlMemory<float, int>::operator[](
											int i);  // 588
									CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
											int i);  // 67
									{
										float f; // 73
										CUtlVector<float, CUtlMemory<float, int> >& __for_range; // 14787
										iterator __for_begin; // 14798
										iterator __for_end; // 14809
										CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 73
										CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 73
									}
									CUtlMemory<float, int>::operator[](
											int i);  // 588
									CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
											int i);  // 68
									{
										float f; // 74
										CUtlVector<float, CUtlMemory<float, int> >& __for_range; // 14833
										iterator __for_begin; // 14844
										iterator __for_end; // 14855
									}
									QAngle::operator[](
											int i);  // 89
								}
							}
						}
						{
							float& f; // 44
							CUtlVector<float, CUtlMemory<float, int> >& __for_range; // 14538
							iterator __for_begin; // 14549
							iterator __for_end; // 14560
							CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 44
							CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 44
						}
						{
							float& f; // 45
							CUtlVector<float, CUtlMemory<float, int> >& __for_range; // 14589
							iterator __for_begin; // 14600
							iterator __for_end; // 14611
							CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 45
							CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 45
						}
						CUtlMemory<float, int>::Purge(); // 903
						CUtlMemory<float, int>::Purge(); // 1799
						CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
						ValidateAlignment<float>(void); // 508
						CUtlMemory<float, int>::Purge(); // 510
						CUtlMemory<float, int>::~CUtlMemory(); // 562
						CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
						CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 98
						CUtlMemory<float, int>::Purge(); // 903
						CUtlMemory<float, int>::Purge(); // 1799
						CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
						ValidateAlignment<float>(void); // 508
						CUtlMemory<float, int>::Purge(); // 510
						CUtlMemory<float, int>::~CUtlMemory(); // 562
						CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
						CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 98
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
							int count);  // 42
					}
					HSequence::operator==(
							const HSequence& other);  // 26
					CSmartPtr<CMotionClipGroup, CRefCountAccessor>::operator->(); // 21
					CUtlString::Get(); // 99
					CUtlString::String(); // 25
				}
				CSmartPtr<CMotionClipGroup, CRefCountAccessor>::operator->(); // 19
			}
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CMotionClipGroup>(CMotionClipGroup* pObj); // 366
			CSmartPtr<CMotionClipGroup, CRefCountAccessor>::operator=(
					CMotionClipGroup* pObj);  // 406
			CSmartPtr<CMotionClipGroup, CRefCountAccessor>::operator=(
					const CSmartPtr<CMotionClipGroup, CRefCountAccessor>& other);  // 328
			CSmartPtr<CMotionClipGroup, CRefCountAccessor>::CSmartPtr(
					const CSmartPtr<CMotionClipGroup, CRefCountAccessor>& other);  // 17
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CMotionClipGroup>(CMotionClipGroup* pObj); // 344
			CSmartPtr<CMotionClipGroup, CRefCountAccessor>::~CSmartPtr(); // 100
		}
	}
} /* size: 2362, inline expansions: 9 (105 bytes) */

// <013FD08F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.cpp:10
// variables: 46
void CMotionMetricInitContext::CMotionMetricInitContext(CAnimGraphInitContext& graphInitContext, float flSampleRate, const CUtlVector<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor clipGroups)
{
	{
		double turnAngleSum; // 13
		int turnAngleCount; // 14
		{
			CMotionClipGroupPtr pClipGroup; // 17
			const CUtlVector<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int& __for_range; // 63240
			const_iterator __for_begin; // 15658
			const_iterator __for_end; // 15658
			{
				int iClip; // 19
				{
					const IMotionClip* pMotionClip; // 21
					const CUtlString& sequenceName; // 23
					HSequence hSequence; // 25
					{
						const ISequence* pSequence; // 28
						CSequenceDistanceHelper* pHelper; // 30
						Vector vTotalMovement; // 35
						const float  flDuration; // 36
						int nFramesPerSample; // 38
						CUtlVector<float, CUtlMemory<float, int> > velocityBuffer; // 39
						CUtlVector<float, CUtlMemory<float, int> > turnSpeedBuffer; // 40
						int nSampleIndex; // 46
						{
							float& f; // 44
							CUtlVector<float, CUtlMemory<float, int> >& __for_range; // 14893
							iterator __for_begin; // 56483
							iterator __for_end; // 56483
						}
						{
							float& f; // 45
							CUtlVector<float, CUtlMemory<float, int> >& __for_range; // 14893
							iterator __for_begin; // 56483
							iterator __for_end; // 56483
						}
						{
							const int  nFrameCount; // 50
							const int  nFrameMax; // 51
							float flLastCycle; // 53
							{
								int iFrame; // 55
								{
									float flCycle; // 57
									Vector vDeltaMovement; // 59
									QAngle vDeltaRotation; // 60
									float flDistance; // 63
									float flVelocity; // 64
									float flTurnSpeed; // 65
									float flAvgVelocity; // 71
									float flAvgTurnSpeed; // 72
									{
										float f; // 73
										CUtlVector<float, CUtlMemory<float, int> >& __for_range; // 14893
										iterator __for_begin; // 56483
										iterator __for_end; // 56483
									}
									{
										float f; // 74
										CUtlVector<float, CUtlMemory<float, int> >& __for_range; // 14893
										iterator __for_begin; // 56483
										iterator __for_end; // 56483
									}
								}
							}
						}
					}
				}
			}
		}
	}
} /* size: 0 */

// <013FC6FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.cpp:108
// variables: 3
// function calls: 47
void CMotionMetricInitContext::~CMotionMetricInitContext()
{
	{
		int i; // 1807
		CUtlMemory<CMotionMetricInitContext::PoseCache_t::operator[](
				int i);  // 602
		CUtlVectorBase<CMotionMetricInitContext::PoseCache_t::Element(
			int i);  // 1809
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
		CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CTransform, int>::Purge(); // 903
		CUtlMemory<CTransform, int>::Purge(); // 1799
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
		ValidateAlignment<CTransform>(void); // 508
		CUtlMemory<CTransform, int>::Purge(); // 510
		CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 39
		PoseCache_t::~PoseCache_t(); // 1809
	}
	CUtlVectorBase<CMotionMetricInitContext::PoseCache_t::RemoveAll(); // 1798
	CUtlMemory<CMotionMetricInitContext::PoseCache_t::IsExternallyAllocated(); // 905
	CUtlMemory<CMotionMetricInitContext::PoseCache_t::Purge(); // 903
	CUtlMemory<CMotionMetricInitContext::PoseCache_t::Purge(); // 1799
	CUtlVectorBase<CMotionMetricInitContext::PoseCache_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<CMotionMetricInitContext::PoseCache_t::Purge(); // 1811
	CUtlVectorBase<CMotionMetricInitContext::PoseCache_t::PurgeAndDeleteElements(); // 110
	CUtlVectorBase<CMotionMetricInitContext::PoseCache_t::RemoveAll(); // 1798
	CUtlVectorBase<CMotionMetricInitContext::PoseCache_t::Purge(); // 560
	ValidateAlignment<CMotionMetricInitContext::PoseCache_t*>(void); // 508
	CUtlMemory<CMotionMetricInitContext::PoseCache_t::Purge(); // 510
	CUtlMemory<CMotionMetricInitContext::PoseCache_t::~CUtlMemory(); // 562
	CUtlVectorBase<CMotionMetricInitContext::PoseCache_t::~CUtlVectorBase(); // 410
	CUtlVector<CMotionMetricInitContext::PoseCache_t::~CUtlVector(); // 111
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >, int>::Count(); // 897
			CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >::IsValid(); // 899
			CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >::MarkInvalid(); // 901
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CSequenceDistanceHelper>(CSequenceDistanceHelper* pObj); // 344
			CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>::~CSmartPtr(); // 51
			CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >::~CUtlKeyValuePair(); // 1526
			Destruct<CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper> > >(CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>, DefaultHashFunctor<HSequence>, Defa this); // 188
	ValidateAlignment<CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>, DefaultHashFunctor<HSequence>, Defa this); // 111
} /* size: 329, inline expansions: 21 (657 bytes) */

// <013FC6E3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.cpp:108
void CMotionMetricInitContext::~CMotionMetricInitContext()
{
} /* size: 0 */

// <0140EE13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.cpp:114
void CMotionMetricInitContext::GetGraphInitContext()
{
} /* size: 0 */

// <013FC469> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.cpp:122
// variables: 2
// function calls: 9
void CMotionMetricInitContext::GetSequenceHelper(HSequence hSequence)
{
	CSequenceDistanceHelper* pHelper; // 124
	UtlHashHandle_t handle; // 126
	HSequence::GetRaw(); // 13
	Mix32HashFunctor::operator(
			uint32 n);  // 13
	DefaultHashFunctor<HSequence>::operator(
			HSequence s);  // 218
	Find(const CUtlHashtable<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>, DefaultHashFunctor<HSequence> this,
		KeyArg_t k);  // 126
	CUtlMemory<CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>, DefaultHashFunctor<HSequence> this,
			handle_t idx);  // 127
	CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>::Get(); // 129
} /* size: 128, variables: 2, inline expansions: 9 (246 bytes) */

// <0140EE3D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.cpp:136
void CMotionMetricInitContext::GetTopSpeed()
{
} /* size: 0 */

// <013FC41B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.cpp:142
void CMotionMetricInitContext::GetMaxTurnSpeed()
{
} /* size: 0 */

// <013FC3E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.cpp:148
void CMotionMetricInitContext::GetAverageTurnSpeed()
{
} /* size: 0 */

// <013FBC27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.cpp:153
// variables: 5
// function calls: 24
void CMotionMetricInitContext::GetPoseCache(HSequence hSequence, float flCycle)
{
	PoseCache_t* pCache; // 155
	int nEntry; // 158
	IBoneSetup setup; // 187
	{
		int i; // 221
		CUtlVectorBase<CMotionMetricInitContext::PoseCache_t::Count(); // 221
		CUtlMemory<CMotionMetricInitContext::PoseCache_t::operator[](
				int i);  // 609
		CUtlVectorBase<CMotionMetricInitContext::PoseCache_t::Element(
			int i);  // 223
		HSequence::operator==(
				const HSequence& other);  // 159
		operator()(const class* __closure,
				const PoseCache_t* pCache); // 223
	}
	CUtlVectorBase<CMotionMetricInitContext::PoseCache_t::FindMatching<CMotionMetricInitContext::GetPoseCache(
																class& f);  // 158
	CUtlMemory<CMotionMetricInitContext::PoseCache_t::operator[](
			int i);  // 630
	CUtlVectorBase<CMotionMetricInitContext::PoseCache_t::Tail(); // 172
	CUtlVectorBase<CMotionMetricInitContext::PoseCache_t::Remove(
		int elem);  // 173
	CMotionMetricInitContext::GetModel(); // 187
	CMotionMetricInitContext::GetModel(); // 192
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 193
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 193
	CUtlMemory<CMotionMetricInitContext::PoseCache_t::operator[](
			int i);  // 588
	CUtlVectorBase<CMotionMetricInitContext::PoseCache_t::operator[](
			int i);  // 164
	CUtlVectorBase<CMotionMetricInitContext::PoseCache_t::Remove(
		int elem);  // 165
	HSequence::HSequence(); // 39
	CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTransform, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(); // 39
	PoseCache_t::PoseCache_t(); // 177
} /* size: 486, variables: 3, inline expansions: 19 (229 bytes) */

// <013FB869> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.cpp:198
// function calls: 16
void CMotionMetricInitContext::GetWorldSpaceBones(HSequence hSequence, float flCycle, CUtlVector<CTransform, CUtlMemory<CTransform, int> >* pOutBoneTransformsMS)
{
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 573
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 102
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::begin(); // 574
	CUtlMemory<CTransform, int>::Base(); // 113
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 105
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 105
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::end(); // 574
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 209
	UtlTraitsCopyRange<CTransform>(const CTransform* pFrom,
					const CTransform* pFromEnd,
					CTransform* pTo);  // 200
	UtlTraitsCopyRange<CTransform>(const CTransform* pFrom,
					const CTransform* pFromEnd,
					CTransform* pTo);  // 574
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator=(
			const CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >& other);  // 565
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator=(
			const CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >& other);  // 452
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::operator=(
			const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& src);  // 200
} /* size: 129, inline expansions: 16 (501 bytes) */

// <013FB744> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinitcontext.cpp:203
// variable: 1
// function calls: 2
void CMotionMetricInitContext::GetWorldSpaceBone(HSequence hSequence, float flCycle, int nBoneIndex)
{
	{
		PoseCache_t* pCache; // 211
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 212
	}
} /* size: 132 */

