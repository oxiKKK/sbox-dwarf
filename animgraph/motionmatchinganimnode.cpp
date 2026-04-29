
//
// animgraph/motionmatchinganimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 39
//

// <0117D9B7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:10
void IMotionMatchingAnimNode::GetTypeInfo()
{
} /* size: 0 */

// <0117D824> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:10
// function calls: 3
void* IMotionMatchingAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IMotionMatchingAnimNode>::CastTo(
		IMotionMatchingAnimNode* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0117D691> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:10
// function calls: 3
const void* IMotionMatchingAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IMotionMatchingAnimNode>::CastTo(
		const IMotionMatchingAnimNode* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01198227> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:12
void MyTypeInfo(void)
{
} /* size: 0 */

// <01193333> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:12
void CMotionMatchingAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0117D47A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:12
// function calls: 3
void* CMotionMatchingAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CMotionMatchingAnimNode>::CastTo(
		CMotionMatchingAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0117D2E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:12
// function calls: 3
const void* CMotionMatchingAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CMotionMatchingAnimNode>::CastTo(
		const CMotionMatchingAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0117CE63> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:23
// function calls: 15
void CMotionMatchingAnimNode::CMotionMatchingAnimNode()
{
	IMotionMatchingAnimNode::IMotionMatchingAnimNode(); // 24
	ISequenceUser::ISequenceUser(); // 24
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this); // 530
	CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor this); // 24
	CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccess this); // 24
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 27
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 27
	CBlendCurve::CBlendCurve(); // 24
} /* size: 315, inline expansions: 15 (217 bytes) */

// <0117CE4A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:23
void CMotionMatchingAnimNode::CMotionMatchingAnimNode()
{
} /* size: 0 */

// <0117CE32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:28
void CMotionMatchingAnimNode::GetChildCount()
{
} /* size: 0 */

// <0117CE0E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:34
void CMotionMatchingAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <0117CDEA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:40
void CMotionMatchingAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <0117CDC8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:46
void CMotionMatchingAnimNode::SetChildID(int, AnimNodeID)
{
} /* size: 0 */

// <01194FD7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:52
// function calls: 2
void CMotionMatchingAnimNode::GetChildName(int)
{
	CUtlString::CUtlString(); // 54
	CMotionMatchingAnimNode::GetChildName(
			int);  // 52
} /* size: 130, inline expansions: 2 (64 bytes) */

// <0117CD94> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:52
// variable: 1
void CMotionMatchingAnimNode::GetChildName(int)
{
	const CUtlString  sEmptyString; // 54
} /* size: 0, variables: 1 */

// <011777B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:59
// variables: 107
// function calls: 285
void CMotionMatchingAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CMotionMetricInitContext metricInitContext; // 62
	CMotionMatchingUpdateNode* pNode; // 64
	CUtlVector<CMotionMetricEvaluator*, CUtlMemory<CMotionMetricEvaluator*, int> > evaluators; // 137
	const char   __FUNCTION__; // 43281
	CUtlVector<int, CUtlMemory<int, int> > metricStartIndices; // 152
	int nDimensions; // 155
	CUtlVector<float, CUtlMemory<float, int> > average; // 312
	CUtlVector<float, CUtlMemory<float, int> > standardDeviation; // 313
	{
		int iGroup; // 93
		{
			CMotionClipGroupConstPtr currentGroup; // 95
			const int  nClipCount; // 97
			CMotionClipGroupData& groupData; // 99
			{
				int iClip; // 104
				{
					const CMotionClip* pCurrentClip; // 106
					HSequence sequence; // 108
					{
						const ISequence* pSequence; // 111
						const int  nTagSpanCount; // 117
						{
							int iTagSpan; // 122
							{
								const CAnimTagSpan* pTagSpan; // 124
								TagSpan_t& currentClipTag; // 125
								{
								}
								CRelativeOffset<ClipInfo>::IsValid(); // 30
								CRelativeOffset<ClipInfo>::Get(); // 90
								CRelativeArray<ClipInfo>::operator[](
										int index);  // 125
								{
								}
								CRelativeOffset<TagSpan_t>::IsValid(); // 30
								CRelativeOffset<TagSpan_t>::Get(); // 90
								CRelativeArray<TagSpan_t>::operator[](
										int index);  // 125
							}
						}
						{
						}
						CRelativeOffset<ClipInfo>::IsValid(); // 30
						CRelativeOffset<ClipInfo>::Get(); // 90
						CRelativeArray<ClipInfo>::operator[](
								int index);  // 112
						{
						}
						CRelativeOffset<ClipInfo>::IsValid(); // 30
						CRelativeOffset<ClipInfo>::Get(); // 90
						CRelativeArray<ClipInfo>::operator[](
								int index);  // 113
						{
						}
						CRelativeOffset<ClipInfo>::IsValid(); // 30
						CRelativeOffset<ClipInfo>::Get(); // 90
						CRelativeArray<ClipInfo>::operator[](
								int index);  // 114
						{
						}
						CRelativeOffset<ClipInfo>::IsValid(); // 30
						CRelativeOffset<ClipInfo>::Get(); // 90
						CRelativeArray<ClipInfo>::operator[](
								int index);  // 120
						{
							uint32 i; // 160
							TagSpan_t::TagSpan_t(); // 162
						}
						CPackedDataT<false>::AddArray<TagSpan_t>(
									uint32 count,
									CPackedHandle<TagSpan_t>* handleOut);  // 120
						CRelativeOffset<TagSpan_t>::SetOffset(
								const TagSpan_t* targetPtr);  // 20
						CRelativeOffset<TagSpan_t>::operator=(
								const TagSpan_t* targetPtr);  // 115
						CRelativeArray<TagSpan_t>::SetArray(
							const TagSpan_t* targetArray,
							int32 count);  // 120
					}
					CUtlString::Get(); // 99
					CUtlString::String(); // 108
				}
			}
			CRelativeOffset<CMotionClipGroupData>::IsValid(); // 30
			CRelativeOffset<CMotionClipGroupData>::Get(); // 90
			{
			}
			CRelativeArray<CMotionClipGroupData>::operator[](
					int index);  // 99
			CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this,
					int i);  // 95
			CSmartPtr<CMotionClipGroup, CRefCountAccessor>::Get(); // 413
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CMotionClipGroup>(CMotionClipGroup* pObj); // 386
			CSmartPtr<const CMotionClipGroup, CRefCountAccessor>::operator=<CMotionClipGroup>(
							CMotionClipGroup* pObj);  // 413
			CSmartPtr<const CMotionClipGroup, CRefCountAccessor>::operator=<CMotionClipGroup>(
							const CSmartPtr<CMotionClipGroup, CRefCountAccessor>& other);  // 354
			CSmartPtr<const CMotionClipGroup, CRefCountAccessor>::CSmartPtr<CMotionClipGroup>(
							const CSmartPtr<CMotionClipGroup, CRefCountAccessor>& other);  // 95
			{
				uint32 i; // 160
				CRelativeOffset<TagSpan_t>::CRelativeOffset(); // 84
				CRelativeArray<TagSpan_t>::CRelativeArray(); // 31
				ClipInfo::ClipInfo(); // 162
			}
			CPackedDataT<false>::AddArray<ClipInfo>(
						uint32 count,
						CPackedHandle<ClipInfo>* handleOut);  // 101
			{
			}
			CRelativeOffset<ClipInfo>::SetOffset(
					const ClipInfo* targetPtr);  // 20
			CRelativeOffset<ClipInfo>::operator=(
					const ClipInfo* targetPtr);  // 115
			CRelativeArray<ClipInfo>::SetArray(
				const ClipInfo* targetArray,
				int32 count);  // 101
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CMotionClipGroup>(const CMotionClipGroup* pObj); // 344
			CSmartPtr<const CMotionClipGroup, CRefCountAccessor>::~CSmartPtr(); // 134
		}
		Count(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this); // 93
	}
	{
		int iMetric; // 138
		{
			float flCategoryWeight; // 140
			CMotionMetricEvaluator* pEvaluator; // 142
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 143
			}
			CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 30
			CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 90
			{
			}
			CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
					int index);  // 145
			CRelativeOffset<const CMotionMetricEvaluator>::SetOffset(
					const CMotionMetricEvaluator* targetPtr);  // 20
			CRelativeOffset<const CMotionMetricEvaluator>::operator=(
					const CMotionMetricEvaluator* targetPtr);  // 145
			CUtlMemory<CMotionMetricEvaluator::operator[](
					int i);  // 602
			CUtlVectorBase<CMotionMetricEvaluator::Element(
				int i);  // 1201
			CopyConstruct<CMotionMetricEvaluator*>(CMotionMetricEvaluator** pMemory,
								CMotionMetricEvaluator* const& src);  // 1201
			CUtlMemory<CMotionMetricEvaluator::Grow(
				int num);  // 806
			CUtlVectorBase<CMotionMetricEvaluator::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CMotionMetricEvaluator::AddToTail(
					CMotionMetricEvaluator* const& src);  // 148
			CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefC this,
					int i);  // 142
			CSmartPtr<CMotionMetricBase, CRefCountAccessor>::operator->(); // 142
			CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefC this,
					int i);  // 143
			CSmartPtr<CMotionMetricBase, CRefCountAccessor>::operator->(); // 143
		}
		Count(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefC this); // 138
	}
	{
		int iMetric; // 157
		Count(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefC this); // 157
		CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 30
		CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 90
		{
		}
		CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
				int index);  // 160
		CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 30
		CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 40
		CRelativeOffset<const CMotionMetricEvaluator>::operator->(); // 160
	}
	{
		int iGroup; // 172
		{
			CMotionClipGroupConstPtr currentGroup; // 174
			CMotionClipGroupData& groupData; // 175
			const int  nClipCount; // 177
			CUtlVector<ClipSampleInfo, CUtlMemory<ClipSampleInfo, int> > samplePoints; // 180
			const int  nEntryPointVectorCount; // 288
			int nCurrentVectorIndex; // 291
			{
				int iClip; // 181
				{
					const IMotionClip* pClip; // 183
					HSequence sequence; // 184
					{
						const ISequence* pSequence; // 188
						const float  flDuration; // 189
						{
							const int  nStartingSampleCount; // 200
							{
								int iSample; // 201
								{
									float flCurrTime; // 206
									float flCurrCycle; // 207
									int index; // 209
									ClipSampleInfo& entryPoint; // 211
									{
										const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 203
									}
									{
										const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 204
									}
									CUtlVectorBase<ClipSampleInfo, CUtlMemory<ClipSampleInfo, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<ClipSampleInfo, CUtlMemory<ClipSampleInfo, int> >::GrowMemory(
											int num);  // 1145
									CUtlMemory<ClipSampleInfo, int>::operator[](
											int i);  // 602
									CUtlVectorBase<ClipSampleInfo, CUtlMemory<ClipSampleInfo, int> >::Element(
										int i);  // 1148
									ClipIndex::ClipIndex(); // 15
									ClipSampleInfo::ClipSampleInfo(); // 1479
									Construct<ClipSampleInfo>(ClipSampleInfo* pMemory); // 1148
									CUtlVectorBase<ClipSampleInfo, CUtlMemory<ClipSampleInfo, int> >::AddToTail(); // 209
									ClipIndex::Set(
										uint16 nGroupIndex,
										uint16 nClipIndex);  // 212
								}
							}
							{
							}
							CRelativeOffset<ClipInfo>::IsValid(); // 30
							CRelativeOffset<ClipInfo>::Get(); // 90
							CRelativeArray<ClipInfo>::operator[](
									int index);  // 217
						}
						{
							CUtlVector<float, CUtlMemory<float, int> > stanceTimes; // 224
							const int  nFootCount; // 226
							{
								int iFoot; // 227
								{
									const CFootMotion* pFootMotion; // 229
									{
										int iCycle; // 232
										{
											const CFootCycleDefinition& definition; // 234
											{
												float flCycle; // 237
												{
													const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 241
												}
												{
													int i; // 1531
												}
												CUtlVectorBase<float, CUtlMemory<float, int> >::Find(
													const float& src);  // 249
												CUtlMemory<float, int>::operator[](
														int i);  // 602
												CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
													int i);  // 1201
												CopyConstruct<float>(float* pMemory,
															const float& src);  // 1201
												CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
												CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
														int num);  // 1198
												CUtlVectorBase<float, CUtlMemory<float, int> >::AddToTail(
														const float& src);  // 251
											}
											CCycleBase::operator==(
													float rhs);  // 146
											CCycleBase::operator==(
													float rhs);  // 146
											CFootCycleDefinition::IsEndCycle(); // 235
										}
									}
								}
							}
							{
								int iSample; // 262
								{
									int index; // 267
									ClipSampleInfo& entryPoint; // 269
									{
										const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 264
									}
									{
										const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 265
									}
									CUtlVectorBase<ClipSampleInfo, CUtlMemory<ClipSampleInfo, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<ClipSampleInfo, CUtlMemory<ClipSampleInfo, int> >::GrowMemory(
											int num);  // 1145
									CUtlMemory<ClipSampleInfo, int>::operator[](
											int i);  // 602
									CUtlVectorBase<ClipSampleInfo, CUtlMemory<ClipSampleInfo, int> >::Element(
										int i);  // 1148
									ClipIndex::ClipIndex(); // 15
									ClipSampleInfo::ClipSampleInfo(); // 1479
									Construct<ClipSampleInfo>(ClipSampleInfo* pMemory); // 1148
									CUtlVectorBase<ClipSampleInfo, CUtlMemory<ClipSampleInfo, int> >::AddToTail(); // 267
									ClipIndex::Set(
										uint16 nGroupIndex,
										uint16 nClipIndex);  // 270
								}
							}
							CUtlMemory<float, int>::ValidateGrowSize(); // 475
							CUtlMemory<float, int>::CUtlMemory(
									int nGrowSize,
									int nInitAllocationCount);  // 527
							CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
							CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
									int growSize,
									int initCapacity);  // 418
							CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 224
							{
							}
							CRelativeOffset<ClipInfo>::IsValid(); // 30
							CRelativeOffset<ClipInfo>::Get(); // 90
							CRelativeArray<ClipInfo>::operator[](
									int index);  // 260
							CUtlMemory<float, int>::Purge(); // 903
							CUtlMemory<float, int>::Purge(); // 1799
							CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
							ValidateAlignment<float>(void); // 508
							CUtlMemory<float, int>::Purge(); // 510
							CUtlMemory<float, int>::~CUtlMemory(); // 562
							CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
							CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 274
						}
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 278
						}
						{
						}
						CRelativeOffset<ClipInfo>::IsValid(); // 30
						CRelativeOffset<ClipInfo>::Get(); // 90
						CRelativeArray<ClipInfo>::operator[](
								int index);  // 193
					}
					CUtlString::Get(); // 99
					CUtlString::String(); // 184
				}
			}
			{
				int iSample; // 292
				{
					const ClipSampleInfo& currentSamplePoint; // 294
					const IMotionClip* pClip; // 296
					HSequence sequence; // 297
					const ISequence* pSequence; // 299
					const float  flDuration; // 300
					{
						int iMetric; // 303
						CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 30
						CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 90
						{
						}
						CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
								int index);  // 305
						Count(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefC this); // 303
						CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 30
						CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 40
						CRelativeOffset<const CMotionMetricEvaluator>::operator->(); // 305
						{
						}
						CRelativeOffset<float>::IsValid(); // 30
						CRelativeOffset<float>::Get(); // 90
						CRelativeArray<float>::operator[](
								int index);  // 305
						{
						}
						CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::IsValid(); // 30
						CRelativeOffset<CRelativeOffset<const CMotionMetricEvaluator> >::Get(); // 90
						CRelativeArray<CRelativeOffset<const CMotionMetricEvaluator> >::operator[](
								int index);  // 306
						CRelativeOffset<const CMotionMetricEvaluator>::IsValid(); // 30
						CRelativeOffset<const CMotionMetricEvaluator>::Get(); // 40
						CRelativeOffset<const CMotionMetricEvaluator>::operator->(); // 306
					}
					CUtlString::Get(); // 99
					CUtlString::String(); // 297
				}
			}
			CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this,
					int i);  // 174
			CSmartPtr<CMotionClipGroup, CRefCountAccessor>::Get(); // 413
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CMotionClipGroup>(CMotionClipGroup* pObj); // 386
			CSmartPtr<const CMotionClipGroup, CRefCountAccessor>::operator=<CMotionClipGroup>(
							CMotionClipGroup* pObj);  // 413
			CSmartPtr<const CMotionClipGroup, CRefCountAccessor>::operator=<CMotionClipGroup>(
							const CSmartPtr<CMotionClipGroup, CRefCountAccessor>& other);  // 354
			CSmartPtr<const CMotionClipGroup, CRefCountAccessor>::CSmartPtr<CMotionClipGroup>(
							const CSmartPtr<CMotionClipGroup, CRefCountAccessor>& other);  // 174
			{
			}
			CRelativeOffset<CMotionClipGroupData>::IsValid(); // 30
			CRelativeOffset<CMotionClipGroupData>::Get(); // 90
			CRelativeArray<CMotionClipGroupData>::operator[](
					int index);  // 175
			CUtlMemory<ClipSampleInfo, int>::ValidateGrowSize(); // 475
			CUtlMemory<ClipSampleInfo, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<ClipSampleInfo, CUtlMemory<ClipSampleInfo, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<ClipSampleInfo, CUtlMemory<ClipSampleInfo, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<ClipSampleInfo, CUtlMemory<ClipSampleInfo, int> >::CUtlVector(); // 180
			{
				uint32 i; // 206
			}
			CPackedDataT<false>::AddArray<ClipSampleInfo>(
						const ClipSampleInfo* pSrcArray,
						uint32 count,
						CPackedHandle<ClipSampleInfo>* handleOut);  // 285
			{
				uint32 i; // 160
			}
			CPackedDataT<false>::AddArray<float>(
					uint32 count,
					CPackedHandle<float>* handleOut);  // 289
			{
			}
			CRelativeOffset<ClipSampleInfo>::SetOffset(
					const ClipSampleInfo* targetPtr);  // 20
			CRelativeOffset<ClipSampleInfo>::operator=(
					const ClipSampleInfo* targetPtr);  // 115
			CRelativeArray<ClipSampleInfo>::SetArray(
				const ClipSampleInfo* targetArray,
				int32 count);  // 285
			{
			}
			CRelativeOffset<float>::SetOffset(
					const float* targetPtr);  // 20
			CRelativeOffset<float>::operator=(
					const float* targetPtr);  // 115
			CRelativeArray<float>::SetArray(
				const float* targetArray,
				int32 count);  // 289
			CUtlMemory<ClipSampleInfo, int>::Purge(); // 903
			CUtlMemory<ClipSampleInfo, int>::Purge(); // 1799
			CUtlVectorBase<ClipSampleInfo, CUtlMemory<ClipSampleInfo, int> >::Purge(); // 560
			ValidateAlignment<ClipSampleInfo>(void); // 508
			CUtlMemory<ClipSampleInfo, int>::Purge(); // 510
			CUtlMemory<ClipSampleInfo, int>::~CUtlMemory(); // 562
			CUtlVectorBase<ClipSampleInfo, CUtlMemory<ClipSampleInfo, int> >::~CUtlVectorBase(); // 410
			CUtlVector<ClipSampleInfo, CUtlMemory<ClipSampleInfo, int> >::~CUtlVector(); // 309
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CMotionClipGroup>(const CMotionClipGroup* pObj); // 344
			CSmartPtr<const CMotionClipGroup, CRefCountAccessor>::~CSmartPtr(); // 309
		}
		Count(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this); // 172
	}
	{
		int nTotalEntryPoints; // 321
		{
			float& f; // 318
			CUtlVector<float, CUtlMemory<float, int> >& __for_range; // 40980
			iterator __for_begin; // 48346
			iterator __for_end; // 48346
			CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 318
		}
		{
			float& f; // 319
			CUtlVector<float, CUtlMemory<float, int> >& __for_range; // 40980
			iterator __for_begin; // 48346
			iterator __for_end; // 48346
			CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 319
		}
		{
			int iGroup; // 324
			{
				const CMotionClipGroupData& groupData; // 326
				int nClipEntryPoints; // 327
				{
					int iEntryPoint; // 330
					{
						const float* pValueVector; // 332
						{
							int iDimension; // 334
						}
						{
						}
						CRelativeOffset<float>::IsValid(); // 35
						CRelativeOffset<float>::Get(); // 97
						CRelativeArray<float>::operator[](
								int index);  // 332
					}
				}
				CRelativeOffset<CMotionClipGroupData>::IsValid(); // 30
				CRelativeOffset<CMotionClipGroupData>::Get(); // 90
				{
				}
				CRelativeArray<CMotionClipGroupData>::operator[](
						int index);  // 326
				CRelativeArray<ClipSampleInfo>::Count(); // 327
			}
			Count(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this); // 324
		}
		{
			int iDimension; // 342
		}
		{
			int iGroup; // 349
			{
				const CMotionClipGroupData& groupData; // 351
				int nClipEntryPoints; // 352
				{
					int iEntryPoint; // 354
					{
						const float* pValueVector; // 356
						{
							int iDimension; // 358
							Sqr(float f); // 360
						}
						{
						}
						CRelativeOffset<float>::IsValid(); // 35
						CRelativeOffset<float>::Get(); // 97
						CRelativeArray<float>::operator[](
								int index);  // 356
					}
				}
				CRelativeOffset<CMotionClipGroupData>::IsValid(); // 30
				CRelativeOffset<CMotionClipGroupData>::Get(); // 90
				{
				}
				CRelativeArray<CMotionClipGroupData>::operator[](
						int index);  // 351
				CRelativeArray<ClipSampleInfo>::Count(); // 352
			}
			Count(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this); // 349
		}
		{
			int iDimension; // 365
		}
	}
	{
		int nDimensionOffset; // 374
		{
			int iMetric; // 376
			{
				CMotionMetricEvaluator* pEvaluator; // 378
				{
					int iDimension; // 380
				}
			}
		}
	}
	{
		int iGroup; // 393
		{
			CMotionClipGroupData& groupData; // 395
			int nClipEntryPoints; // 396
			{
				int iEntryPoint; // 398
				{
					float* pValueVector; // 400
					int nDimensionOffset; // 402
					{
						int iMetric; // 404
						{
							const CMotionMetricEvaluator* pEvaluator; // 406
							{
								int iDimension; // 408
							}
						}
					}
					{
					}
					CRelativeOffset<float>::IsValid(); // 30
					CRelativeOffset<float>::Get(); // 90
					CRelativeArray<float>::operator[](
							int index);  // 400
				}
			}
			{
			}
			CRelativeOffset<CMotionClipGroupData>::IsValid(); // 30
			CRelativeOffset<CMotionClipGroupData>::Get(); // 90
			CRelativeArray<CMotionClipGroupData>::operator[](
					int index);  // 395
			CRelativeArray<ClipSampleInfo>::Count(); // 396
		}
		Count(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this); // 393
	}
	Count(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefC this); // 64
	Count(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this); // 64
	CPackedDataT<false>::AddItem<CMotionMatchingUpdateNode, CAnimGraphInitContext&, int, int>(
										CPackedHandle<CMotionMatchingUpdateNode>* handleOut);  // 64
	Vector2D::operator=(
			const Vector2D& vOther);  // 22
	Vector2D::operator=(
			const Vector2D& vOther);  // 22
	CBlendCurve::operator=(
			const CBlendCurve  &);  // 66
	CAnimInputDamping::operator=(
			const CAnimInputDamping  &);  // 90
	CUtlMemory<CMotionMetricEvaluator::ValidateGrowSize(); // 475
	CUtlMemory<CMotionMetricEvaluator::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CMotionMetricEvaluator::ResetDbgInfo(); // 530
	CUtlVectorBase<CMotionMetricEvaluator::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CMotionMetricEvaluator::CUtlVector(); // 137
	CUtlMemory<int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<int, CUtlMemory<int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<int, CUtlMemory<int, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount(
		int count);  // 153
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 152
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 419
	CUtlMemory<CMotionMetricEvaluator::Purge(); // 903
	CUtlMemory<CMotionMetricEvaluator::Purge(); // 1799
	CUtlVectorBase<CMotionMetricEvaluator::Purge(); // 560
	ValidateAlignment<CMotionMetricEvaluator*>(void); // 508
	CUtlMemory<CMotionMetricEvaluator::Purge(); // 510
	CUtlMemory<CMotionMetricEvaluator::~CUtlMemory(); // 562
	CUtlVectorBase<CMotionMetricEvaluator::~CUtlVectorBase(); // 410
	CUtlVector<CMotionMetricEvaluator::~CUtlVector(); // 419
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 312
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 313
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 313
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 312
} /* size: 0, variables: 8, inline expansions: 66 (1641 bytes) */

// <01176E1D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:422
// variables: 8
// function calls: 40
void CMotionMatchingAnimNode::SetContext(const CAnimGraphContextPtr& context)
{
	{
		CMotionClipGroupPtr pClipGroup; // 426
		CUtlVector<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int> >& __for_range; // 57019
		iterator __for_begin; // 22333
		iterator __for_end; // 22333
		CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::Base(); // 112
		Base(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this); // 102
		begin(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this); // 426
		Count(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this); // 104
		end(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this); // 426
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
				const CSmartPtr<CMotionClipGroup, CRefCountAccessor>& other);  // 426
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CMotionClipGroup>(CMotionClipGroup* pObj); // 344
		CSmartPtr<CMotionClipGroup, CRefCountAccessor>::~CSmartPtr(); // 429
	}
	{
		CMotionMetricBasePtr pMetric; // 431
		CUtlVector<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int> >& __for_range; // 57025
		iterator __for_begin; // 27893
		iterator __for_end; // 27893
		CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::Base(); // 112
		Base(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this); // 102
		begin(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this); // 431
		Count(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefC this); // 104
		end(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this); // 431
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CMotionMetricBase>(CMotionMetricBase* pObj); // 366
		CSmartPtr<CMotionMetricBase, CRefCountAccessor>::operator=(
				CMotionMetricBase* pObj);  // 406
		CSmartPtr<CMotionMetricBase, CRefCountAccessor>::operator=(
				const CSmartPtr<CMotionMetricBase, CRefCountAccessor>& other);  // 328
		CSmartPtr<CMotionMetricBase, CRefCountAccessor>::CSmartPtr(
				const CSmartPtr<CMotionMetricBase, CRefCountAccessor>& other);  // 431
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CMotionMetricBase>(CMotionMetricBase* pObj); // 344
		CSmartPtr<CMotionMetricBase, CRefCountAccessor>::~CSmartPtr(); // 434
	}
} /* size: 224 */

// <0119335C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:438
void CMotionMatchingAnimNode::GetPredictionTime()
{
} /* size: 13 */

// <01193385> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:444
// function call: 1
void CMotionMatchingAnimNode::GetClipGroupCount()
{
	Count(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this); // 446
} /* size: 8, inline expansions: 1 (0 bytes) */

// <01176DEB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:444
void CMotionMatchingAnimNode::GetClipGroupCount()
{
} /* size: 0 */

// <011933DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:450
// function calls: 3
void CMotionMatchingAnimNode::GetClipGroup(int index)
{
	CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this,
			int i);  // 452
	CSmartPtr<CMotionClipGroup, CRefCountAccessor>::Get(); // 452
} /* size: 16, inline expansions: 3 (10 bytes) */

// <01176DC5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:450
void CMotionMatchingAnimNode::GetClipGroup(int index)
{
} /* size: 0 */

// <0117656E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:462
// variable: 1
// function calls: 35
void CMotionMatchingAnimNode::AddClipGroup()
{
	int index; // 464
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CMotionClipGroup>(CMotionClipGroup* pObj); // 366
	CSmartPtr<CMotionClipGroup, CRefCountAccessor>::operator=(
			CMotionClipGroup* pObj);  // 319
	CSmartPtr<CMotionClipGroup, CRefCountAccessor>::CSmartPtr(
			CMotionClipGroup* pObj);  // 464
	CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::NumAllocated(); // 1247
	CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this); // 824
	CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::IsGrowable(); // 823
	CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this,
			int num);  // 1249
	CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this,
		int i);  // 1252
	CSmartPtr<CMotionClipGroup, CRefCountAccessor>::CSmartPtr(
			CSmartPtr<CMotionClipGroup, CRefCountAccessor>& other);  // 1514
	Construct<CSmartPtr<CMotionClipGroup>, CSmartPtr<CMotionClipGroup, CRefCountAccessor> >(CSmartPtr<CMotionClipGroup, CRefCountAccessor>* pMemory); // 1252
	AddToTail(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this,
			CSmartPtr<CMotionClipGroup, CRefCountAccessor>& src);  // 464
	CSmartPtr<CMotionClipGroup, CRefCountAccessor>::~CSmartPtr(); // 464
	CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this,
			int i);  // 465
	CSmartPtr<CMotionClipGroup, CRefCountAccessor>::operator->(); // 465
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 465
	CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this,
			int i);  // 466
	CSmartPtr<CMotionClipGroup, CRefCountAccessor>::Get(); // 466
} /* size: 416, variables: 1, inline expansions: 35 (870 bytes) */

// <0117616E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:470
// function calls: 18
void CMotionMatchingAnimNode::RemoveClipGroup(int index)
{
	CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this,
		int i);  // 1607
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CMotionClipGroup>(CMotionClipGroup* pObj); // 344
	CSmartPtr<CMotionClipGroup, CRefCountAccessor>::~CSmartPtr(); // 1526
	Destruct<CSmartPtr<CMotionClipGroup> >(CSmartPtr<CMotionClipGroup, CRefCountAccessor>* pMemory); // 1607
	CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this,
		int i);  // 1114
	CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this,
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	ShiftElementsLeft(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this,
				int elem,
				int num);  // 1608
	Remove(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this,
		int elem);  // 472
} /* size: 136, inline expansions: 18 (396 bytes) */

// <011759C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:476
// variable: 1
// function calls: 38
void CMotionMatchingAnimNode::RemoveClipGroup(IMotionClipGroup* pClip)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CMotionClipGroup>(CMotionClipGroup* pObj); // 366
	CSmartPtr<CMotionClipGroup, CRefCountAccessor>::operator=(
			CMotionClipGroup* pObj);  // 319
	CSmartPtr<CMotionClipGroup, CRefCountAccessor>::CSmartPtr(
			CMotionClipGroup* pObj);  // 478
	{
		int i; // 1531
		Count(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this); // 1531
		CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this,
			int i);  // 1533
		CSmartPtr<CMotionClipGroup, CRefCountAccessor>::operator==<CMotionClipGroup>(
						const CSmartPtr<CMotionClipGroup, CRefCountAccessor>& other);  // 1533
	}
	Find(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this,
		const CSmartPtr<CMotionClipGroup, CRefCountAccessor>& src);  // 1617
	CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this,
		int i);  // 1607
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CMotionClipGroup>(CMotionClipGroup* pObj); // 344
	CSmartPtr<CMotionClipGroup, CRefCountAccessor>::~CSmartPtr(); // 1526
	Destruct<CSmartPtr<CMotionClipGroup> >(CSmartPtr<CMotionClipGroup, CRefCountAccessor>* pMemory); // 1607
	CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this,
		int i);  // 1114
	CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this,
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	ShiftElementsLeft(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this,
				int elem,
				int num);  // 1608
	Remove(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this,
		int elem);  // 1620
	FindAndRemove(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAcce this,
			const CSmartPtr<CMotionClipGroup, CRefCountAccessor>& src);  // 478
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CMotionClipGroup>(CMotionClipGroup* pObj); // 344
	CSmartPtr<CMotionClipGroup, CRefCountAccessor>::~CSmartPtr(); // 478
} /* size: 269, inline expansions: 34 (1042 bytes) */

// <011756B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:482
// function calls: 10
void CMotionMatchingAnimNode::GetMetricTypes()
{
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CSm this,
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbolT this,
			bool caseInsensitive,
			int growSize,
			int initSize);  // 157
	CTypeFactory<CMotionMetricBase>::CTypeFactory(); // 66
	Get(void); // 61
	Get(void); // 484
} /* size: 254, inline expansions: 10 (604 bytes) */

// <011934A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:488
// function call: 1
void CMotionMatchingAnimNode::GetMetricCount()
{
	Count(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefC this); // 490
} /* size: 8, inline expansions: 1 (0 bytes) */

// <01175698> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:488
void CMotionMatchingAnimNode::GetMetricCount()
{
} /* size: 0 */

// <01193502> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:494
// function calls: 3
void CMotionMatchingAnimNode::GetMetric(int index)
{
	CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this,
			int i);  // 496
	CSmartPtr<CMotionMetricBase, CRefCountAccessor>::Get(); // 496
} /* size: 19, inline expansions: 3 (13 bytes) */

// <01175672> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:494
void CMotionMatchingAnimNode::GetMetric(int index)
{
} /* size: 0 */

// <01174802> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:506
// variable: 1
// function calls: 61
void CMotionMatchingAnimNode::AddMetric(const char* pKeyType)
{
	CMotionMetricBasePtr pNewKey; // 508
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CSm this,
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbolT this,
			bool caseInsensitive,
			int growSize,
			int initSize);  // 157
	CTypeFactory<CMotionMetricBase>::CTypeFactory(); // 66
	Get(void); // 61
	Get(void); // 508
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	Find(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, CUtlS this,
		const char* pString);  // 86
	Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, CUtl this); // 53
	{
	}
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory this,
			int i);  // 54
	operator[](const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbolT this,
			IndexType_t n);  // 89
	CSmartPtr<Reflection::CTypeFactory<CMotionMetricBase>::CFactoryMaker, CRefCountAccessor>::operator->(); // 89
	CTypeFactory<CMotionMetricBase>::Create(
		const char* typeName);  // 508
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CMotionMetricBase>(CMotionMetricBase* pObj); // 366
	CSmartPtr<CMotionMetricBase, CRefCountAccessor>::operator=(
			CMotionMetricBase* pObj);  // 319
	CSmartPtr<CMotionMetricBase, CRefCountAccessor>::CSmartPtr(
			CMotionMetricBase* pObj);  // 508
	CSmartPtr<CMotionMetricBase, CRefCountAccessor>::operator bool(); // 509
	CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::NumAllocated(); // 1196
	CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this); // 824
	CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::IsGrowable(); // 823
	CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this,
			int num);  // 1198
	CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this,
		int i);  // 1201
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CMotionMetricBase>(CMotionMetricBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CMotionMetricBase>(CMotionMetricBase* pObj); // 370
	CSmartPtr<CMotionMetricBase, CRefCountAccessor>::operator=(
			CMotionMetricBase* pObj);  // 406
	CSmartPtr<CMotionMetricBase, CRefCountAccessor>::operator=(
			const CSmartPtr<CMotionMetricBase, CRefCountAccessor>& other);  // 328
	CSmartPtr<CMotionMetricBase, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CMotionMetricBase, CRefCountAccessor>& other);  // 1520
	CopyConstruct<CSmartPtr<CMotionMetricBase> >(CSmartPtr<CMotionMetricBase, CRefCountAccessor>* pMemory,
							const CSmartPtr<CMotionMetricBase, CRefCountAccessor>& src);  // 1201
	AddToTail(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this,
			const CSmartPtr<CMotionMetricBase, CRefCountAccessor>& src);  // 511
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CMotionMetricBase>(CMotionMetricBase* pObj); // 344
	CSmartPtr<CMotionMetricBase, CRefCountAccessor>::~CSmartPtr(); // 515
} /* size: 0, variables: 1, inline expansions: 61 (2301 bytes) */

// <01174402> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:518
// function calls: 18
void CMotionMatchingAnimNode::RemoveMetric(int index)
{
	CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this,
		int i);  // 1607
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CMotionMetricBase>(CMotionMetricBase* pObj); // 344
	CSmartPtr<CMotionMetricBase, CRefCountAccessor>::~CSmartPtr(); // 1526
	Destruct<CSmartPtr<CMotionMetricBase> >(CSmartPtr<CMotionMetricBase, CRefCountAccessor>* pMemory); // 1607
	CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this,
		int i);  // 1114
	CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this,
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	ShiftElementsLeft(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this,
				int elem,
				int num);  // 1608
	Remove(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this,
		int elem);  // 520
} /* size: 139, inline expansions: 18 (417 bytes) */

// <01173C38> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:524
// variables: 2
// function calls: 38
void CMotionMatchingAnimNode::RemoveMetric(IMotionMetric* pKey)
{
	CMotionMetricBase* pKeyBase; // 526
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CMotionMetricBase>(CMotionMetricBase* pObj); // 366
	CSmartPtr<CMotionMetricBase, CRefCountAccessor>::operator=(
			CMotionMetricBase* pObj);  // 319
	CSmartPtr<CMotionMetricBase, CRefCountAccessor>::CSmartPtr(
			CMotionMetricBase* pObj);  // 529
	{
		int i; // 1531
		Count(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefC this); // 1531
		CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefC this,
			int i);  // 1533
		CSmartPtr<CMotionMetricBase, CRefCountAccessor>::operator==<CMotionMetricBase>(
						const CSmartPtr<CMotionMetricBase, CRefCountAccessor>& other);  // 1533
	}
	Find(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefC this,
		const CSmartPtr<CMotionMetricBase, CRefCountAccessor>& src);  // 1617
	CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this,
		int i);  // 1607
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CMotionMetricBase>(CMotionMetricBase* pObj); // 344
	CSmartPtr<CMotionMetricBase, CRefCountAccessor>::~CSmartPtr(); // 1526
	Destruct<CSmartPtr<CMotionMetricBase> >(CSmartPtr<CMotionMetricBase, CRefCountAccessor>* pMemory); // 1607
	CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this,
		int i);  // 1114
	CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this,
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	ShiftElementsLeft(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this,
				int elem,
				int num);  // 1608
	Remove(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this,
		int elem);  // 1620
	FindAndRemove(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAc this,
			const CSmartPtr<CMotionMetricBase, CRefCountAccessor>& src);  // 529
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CMotionMetricBase>(CMotionMetricBase* pObj); // 344
	CSmartPtr<CMotionMetricBase, CRefCountAccessor>::~CSmartPtr(); // 529
} /* size: 278, variables: 1, inline expansions: 34 (1004 bytes) */

// <011732F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:534
// variables: 8
// function calls: 38
void CMotionMatchingAnimNode::GetSequencesUsed(CSequenceList& sequenceList)
{
	{
		CMotionClipGroupPtr pClipGroup; // 536
		const CUtlVector<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int& __for_range; // 10441
		const_iterator __for_begin; // 22378
		const_iterator __for_end; // 22378
		{
			int iClip; // 538
			{
				int* pValue; // 21
				CUtlString::Get(); // 354
				CUtlString::CUtlString(
						const CUtlString& string);  // 61
				CUtlKeyValuePair<CUtlString, int>::CUtlKeyValuePair<CUtlString>(
								const CUtlString& k);  // 1514
				Construct<CUtlKeyValuePair<CUtlString, int>, const CUtlString&>(CUtlKeyValuePair<CUtlString, int>* pMemory); // 706
				CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::operator[](
						int i);  // 706
				DoInsert<const CUtlString&>(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this,
								const CUtlString& k,
								unsigned int h,
								bool* pDidInsert);  // 695
				DoInsert<const CUtlString&>(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this,
								const CUtlString& k,
								unsigned int h,
								bool* pDidInsert);  // 241
				{
					uint32 c; // 354
				}
				StringHashFunctor::operator(
						const char* s);  // 241
				CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::operator[](
						int i);  // 241
				InsertGetPtr(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this,
						KeyArg_t k);  // 27
				{
					uint32 c; // 354
				}
				StringHashFunctor::operator(
						const char* s);  // 218
				Find(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t,  this,
					KeyArg_t k);  // 227
				CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::operator[](
						int i);  // 295
				Element(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this,
					handle_t idx);  // 227
				FindGetPtr(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this,
						KeyArg_t k);  // 21
			}
			CSequenceList::AddSequence(
					const CUtlString& sequenceName);  // 17
			CUtlString::IsEmpty(); // 19
			CSequenceList::AddSequence(
					const CUtlString& sequenceName);  // 540
		}
		CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, int>::Base(); // 113
		Base(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this); // 103
		begin(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this); // 536
		Count(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this); // 105
		end(const CUtlVectorBase<CSmartPtr<CMotionClipGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionClipGroup, CRefCou this); // 536
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
				const CSmartPtr<CMotionClipGroup, CRefCountAccessor>& other);  // 536
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CMotionClipGroup>(CMotionClipGroup* pObj); // 344
		CSmartPtr<CMotionClipGroup, CRefCountAccessor>::~CSmartPtr(); // 542
	}
} /* size: 496 */

// <011732D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:546
void CMotionMatchingAnimNode::GetMetricInternal(int index)
{
} /* size: 0 */

// <0117327B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:559
void UI_OnSettingChangedCallback(void* pThis)
{
} /* size: 10 */

// <0117324C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:566
void UI_UniformSamplingFilter(void* pThis)
{
} /* size: 20 */

// <011731EE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:580
void UI_GoalAssistFilter(void* pThis)
{
} /* size: 20 */

// <011731BF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnode.cpp:587
void UI_DistanceScalingFilter(void* pThis)
{
} /* size: 20 */

