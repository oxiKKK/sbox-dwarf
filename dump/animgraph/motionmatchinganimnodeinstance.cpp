
//
// animgraph/motionmatchinganimnodeinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 44
//

// <01198245> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <0117315A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:9
void IMotionMatchingAnimNodeInstance::GetTypeInfo()
{
} /* size: 0 */

// <01172FC7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:9
// function calls: 3
void* IMotionMatchingAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IMotionMatchingAnimNodeInstance>::CastTo(
		IMotionMatchingAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01172E34> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:9
// function calls: 3
const void* IMotionMatchingAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IMotionMatchingAnimNodeInstance>::CastTo(
		const IMotionMatchingAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

// <011935CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:11
void CMotionMatchingAnimNodeInstance::GetTypeInfo()
{
} /* size: 12 */

// <01172C09> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:11
// function calls: 3
void* CMotionMatchingAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CMotionMatchingAnimNodeInstance>::CastTo(
		CMotionMatchingAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01172A76> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:11
// function calls: 3
const void* CMotionMatchingAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CMotionMatchingAnimNodeInstance>::CastTo(
		const CMotionMatchingAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0117129D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:16
// variables: 10
// function calls: 96
void CMotionMatchingAnimNodeInstance::CMotionMatchingAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
	{
		const CMotionMatchingAnimNode* pMotionMatchingNode; // 19
		{
			{
				const CMotionMatchingUpdateNode* pMotionMatchingUpdateNode; // 22
				{
					int i; // 26
					{
						CPackedHandle<const CMotionMetricEvaluator> hEvaluator; // 28
						CMotionMetricInstancePtr metricInstance; // 31
					}
				}
			}
		}
	}
	IMotionMatchingAnimNodeInstance::IMotionMatchingAnimNodeInstance(); // 17
	CUtlMemory<CSmartPtr<CMotionMetricInstance, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CMotionMetricInstance, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CMotionMetricInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricInstance, CRe this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CMotionMetricInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricInstance, CRe this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CMotionMetricInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricInstance, CRefCou this); // 17
	{
		const CMotionMatchingAnimNode* pMotionMatchingNode; // 19
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 366
		CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator=(
				const CAnimNodeBase* pObj);  // 406
		CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator=(
				const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& other);  // 328
		CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
				const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& other);  // 19
		MyTypeID(void); // 170
		reflection_cast<const CMotionMatchingAnimNode, CSmartPtr<const CAnimNodeBase> >(CSmartPtr<const CAnimNodeBase, CRefCountAccessor> obj); // 19
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 344
		CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 19
		{
			{
				const CMotionMatchingUpdateNode* pMotionMatchingUpdateNode; // 22
				Count(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefC this); // 490
				CMotionMatchingAnimNode::GetMetricCount(); // 24
				{
					int i; // 26
					Count(const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefC this); // 490
					CMotionMatchingAnimNode::GetMetricCount(); // 26
					{
						CPackedHandle<const CMotionMetricEvaluator> hEvaluator; // 28
						CMotionMetricInstancePtr metricInstance; // 31
						CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 28
						{
						}
						PackedHandleID::PackedHandleID(); // 22
						CPackedHandle<const CMotionMetricEvaluator>::CPackedHandle(); // 233
						CPackedDataT<false>::CreateHandle<const CMotionMetricEvaluator>(
												const CMotionMetricEvaluator* item);  // 28
						ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CM this); // 475
						CUtlMemory(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CM this,
								int nGrowSize,
								int nInitAllocationCount);  // 178
						Init(const CUtlHashtable<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, this); // 178
						CUtlHashtable(const CUtlHashtable<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, this,
								int minimumSize);  // 270
						CInstanceFactory(const CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccess this); // 206
						Get(void); // 201
						Get(void); // 31
						PackedHandleID::PackedHandleID(
								const PackedHandleID& rhs);  // 19
						CPackedHandle<const CMotionMetricEvaluator>::CPackedHandle(
								const CPackedHandle<const CMotionMetricEvaluator>  &);  // 31
						CUtlMemory<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CSmartPtr<CMotionMetricBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricBase, CRefC this,
								int i);  // 554
						CSmartPtr<CMotionMetricBase, CRefCountAccessor>::Get(); // 554
						CMotionMatchingAnimNode::GetMetricInternal(
									int index);  // 31
						CClassInfo::GetID(); // 226
						Mix32HashFunctor::operator(
								uint32 n);  // 67
						ClassIDHashFunctor::operator(
								ClassID nType);  // 218
						Base(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstan this); // 650
						Count(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstan this); // 651
						IdealIndex(uint32_if32BitStorage h,
								uint32 m);  // 653
						IdealIndex(const CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotion this,
								uint32 slotmask);  // 656
						IdealIndex(const CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotion this,
								uint32 slotmask);  // 667
						ClassID::operator==(
								ClassID nOther);  // 154
						DefaultEqualFunctor<Reflection::ClassID>::operator(
								Arg_t a,
								Arg_t b);  // 670
						DoLookup<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetri this,
											const ClassID& x,
											unsigned int h,
											handle_t* pPreviousInChain);  // 218
						Find(const CUtlHashtable<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetri this,
							KeyArg_t k);  // 228
						operator[](const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstan this,
								int i);  // 204
						IsValid(const CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotion this); // 204
						IsValidHandle(const CUtlHashtable<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetri this,
								handle_t idx);  // 229
						operator->(const CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUp this); // 231
						PackedHandleID::PackedHandleID(
								const PackedHandleID& rhs);  // 19
						CPackedHandle<const CMotionMetricEvaluator>::CPackedHandle(
								const CPackedHandle<const CMotionMetricEvaluator>  &);  // 231
						Create(const CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccess this,
							const CMotionMetricBase* pObject,
							const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>& params#0,
							CPackedHandle<const CMotionMetricEvaluator> params#1);  // 31
						PackedHandleID::PackedHandleID(
								const PackedHandleID& rhs);  // 19
						CPackedHandle<const CMotionMetricEvaluator>::CPackedHandle(
								const CPackedHandle<const CMotionMetricEvaluator>  &);  // 36
						ThreadInterlockedIncrement(volatile int32* p); // 158
						Increment(int* p); // 290
						CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
						CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
						AddRef<CMotionMetricInstance>(CMotionMetricInstance* pObj); // 366
						CSmartPtr<CMotionMetricInstance, CRefCountAccessor>::operator=(
								CMotionMetricInstance* pObj);  // 36
						CUtlMemory<CSmartPtr<CMotionMetricInstance, CRefCountAccessor>, int>::operator[](
								int i);  // 588
						operator[](const CUtlVectorBase<CSmartPtr<CMotionMetricInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricInstance, CRe this,
								int i);  // 39
						ThreadInterlockedIncrement(volatile int32* p); // 158
						Increment(int* p); // 290
						CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
						CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
						AddRef<CMotionMetricInstance>(CMotionMetricInstance* pObj); // 366
						ThreadInterlockedDecrement(volatile int32* p); // 159
						Decrement(int* p); // 295
						CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
						CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
						CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
						Release<CMotionMetricInstance>(CMotionMetricInstance* pObj); // 370
						CSmartPtr<CMotionMetricInstance, CRefCountAccessor>::operator=(
								CMotionMetricInstance* pObj);  // 406
						CSmartPtr<CMotionMetricInstance, CRefCountAccessor>::operator=(
								const CSmartPtr<CMotionMetricInstance, CRefCountAccessor>& other);  // 39
						ThreadInterlockedDecrement(volatile int32* p); // 159
						Decrement(int* p); // 295
						CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
						CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
						CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
						Release<CMotionMetricInstance>(CMotionMetricInstance* pObj); // 344
						CSmartPtr<CMotionMetricInstance, CRefCountAccessor>::~CSmartPtr(); // 40
						CSmartPtr<CMotionMetricInstance, CRefCountAccessor>::operator=(
								CMotionMetricInstance* pObj);  // 319
						CSmartPtr<CMotionMetricInstance, CRefCountAccessor>::CSmartPtr(
								CMotionMetricInstance* pObj);  // 31
					}
				}
			}
			_DebuggerBreakInlineExpressionWrapper(void); // 20
		}
	}
} /* size: 0, inline expansions: 6 (56 bytes) */

// <011711A4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:16
// variables: 5
void CMotionMatchingAnimNodeInstance::CMotionMatchingAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
	{
		const CMotionMatchingAnimNode* pMotionMatchingNode; // 19
		{
			{
				const CMotionMatchingUpdateNode* pMotionMatchingUpdateNode; // 22
				{
					int i; // 26
					{
						CPackedHandle<const CMotionMetricEvaluator> hEvaluator; // 28
						CMotionMetricInstancePtr metricInstance; // 31
					}
				}
			}
		}
	}
} /* size: 0 */

// <01194139> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:45
// function call: 1
void CMotionMatchingAnimNodeInstance::GetClipGroupCount()
{
	CMotionMatchingAnimNodeInstance::GetUpdateNode(); // 47
} /* size: 13, inline expansions: 1 (0 bytes) */

// <0117118B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:45
void CMotionMatchingAnimNodeInstance::GetClipGroupCount()
{
} /* size: 0 */

// <011941AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:51
// function call: 1
void CMotionMatchingAnimNodeInstance::GetClipCount(int nGroupIndex)
{
	CMotionMatchingAnimNodeInstance::GetUpdateNode(); // 53
} /* size: 13, inline expansions: 1 (0 bytes) */

// <01171166> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:51
void CMotionMatchingAnimNodeInstance::GetClipCount(int nGroupIndex)
{
} /* size: 0 */

// <01194230> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:57
// function call: 1
void CMotionMatchingAnimNodeInstance::GetClipEntryPointCount(ClipIndex nClipIndex)
{
	CMotionMatchingAnimNodeInstance::GetUpdateNode(); // 59
} /* size: 13, inline expansions: 1 (0 bytes) */

// <01171141> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:57
void CMotionMatchingAnimNodeInstance::GetClipEntryPointCount(ClipIndex nClipIndex)
{
} /* size: 0 */

// <011942AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:63
// function call: 1
void CMotionMatchingAnimNodeInstance::GetClipEntryPointCycle(ClipIndex nClipIndex, int nEntryPointIndex)
{
	CMotionMatchingAnimNodeInstance::GetUpdateNode(); // 65
} /* size: 13, inline expansions: 1 (0 bytes) */

// <01171110> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:63
void CMotionMatchingAnimNodeInstance::GetClipEntryPointCycle(ClipIndex nClipIndex, int nEntryPointIndex)
{
} /* size: 0 */

// <01194341> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:69
// function calls: 2
void CMotionMatchingAnimNodeInstance::GetCurrentClipIndex()
{
	CMotionMatchingAnimNodeInstance::GetUpdateNode(); // 71
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 71
} /* size: 17, inline expansions: 2 (0 bytes) */

// <011710F7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:69
void CMotionMatchingAnimNodeInstance::GetCurrentClipIndex()
{
} /* size: 0 */

// <011943E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:75
// function calls: 2
void CMotionMatchingAnimNodeInstance::GetCurrentEntryPointIndex()
{
	CMotionMatchingAnimNodeInstance::GetUpdateNode(); // 77
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 77
} /* size: 17, inline expansions: 2 (0 bytes) */

// <011710DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:75
void CMotionMatchingAnimNodeInstance::GetCurrentEntryPointIndex()
{
} /* size: 0 */

// <0119448B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:81
// function calls: 2
void CMotionMatchingAnimNodeInstance::GetCurrentClipSequence()
{
	CMotionMatchingAnimNodeInstance::GetUpdateNode(); // 83
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 83
} /* size: 17, inline expansions: 2 (0 bytes) */

// <011710C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:81
void CMotionMatchingAnimNodeInstance::GetCurrentClipSequence()
{
} /* size: 0 */

// <01194530> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:87
// function calls: 2
void CMotionMatchingAnimNodeInstance::GetCurrentClipEntryPointCycle()
{
	CMotionMatchingAnimNodeInstance::GetUpdateNode(); // 89
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 89
} /* size: 17, inline expansions: 2 (0 bytes) */

// <011710AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:87
void CMotionMatchingAnimNodeInstance::GetCurrentClipEntryPointCycle()
{
} /* size: 0 */

// <011945D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:93
// function calls: 2
void CMotionMatchingAnimNodeInstance::GetCurrentClipCycle()
{
	CMotionMatchingAnimNodeInstance::GetUpdateNode(); // 95
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 95
} /* size: 17, inline expansions: 2 (0 bytes) */

// <01171093> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:93
void CMotionMatchingAnimNodeInstance::GetCurrentClipCycle()
{
} /* size: 0 */

// <0119467A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:99
// function calls: 2
void CMotionMatchingAnimNodeInstance::GetCurrentClipLoop()
{
	CMotionMatchingAnimNodeInstance::GetUpdateNode(); // 101
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 101
} /* size: 17, inline expansions: 2 (0 bytes) */

// <0117107A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:99
void CMotionMatchingAnimNodeInstance::GetCurrentClipLoop()
{
} /* size: 0 */

// <0119471F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:105
// function calls: 2
void CMotionMatchingAnimNodeInstance::IsGroupEnabled(int nGroupIndex)
{
	CMotionMatchingAnimNodeInstance::GetUpdateNode(); // 107
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 107
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01171055> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:105
void CMotionMatchingAnimNodeInstance::IsGroupEnabled(int nGroupIndex)
{
} /* size: 0 */

// <011947D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:111
// function call: 1
void CMotionMatchingAnimNodeInstance::GetMetricCount()
{
	CMotionMatchingAnimNodeInstance::GetUpdateNode(); // 113
} /* size: 13, inline expansions: 1 (0 bytes) */

// <0117103C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:111
void CMotionMatchingAnimNodeInstance::GetMetricCount()
{
} /* size: 0 */

// <011935F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:117
// function calls: 3
void CMotionMatchingAnimNodeInstance::GetMetricInstance(int nMetricIndex)
{
	CUtlMemory<CSmartPtr<CMotionMetricInstance, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CMotionMetricInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CMotionMetricInstance, CRe this,
			int i);  // 119
	CSmartPtr<CMotionMetricInstance, CRefCountAccessor>::Get(); // 119
} /* size: 27, inline expansions: 3 (14 bytes) */

// <01171017> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:117
void CMotionMatchingAnimNodeInstance::GetMetricInstance(int nMetricIndex)
{
} /* size: 0 */

// <0119484A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:129
// function calls: 2
void CMotionMatchingAnimNodeInstance::CalculateScore(ClipIndex nClipIndex, int nEntryPointIndex)
{
	CMotionMatchingAnimNodeInstance::GetUpdateNode(); // 131
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 131
} /* size: 23, inline expansions: 2 (0 bytes) */

// <01170FC2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:129
void CMotionMatchingAnimNodeInstance::CalculateScore(ClipIndex nClipIndex, int nEntryPointIndex)
{
} /* size: 0 */

// <01194911> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:135
// function calls: 2
void CMotionMatchingAnimNodeInstance::GetGoalValues(int nMetricIndex, bool bNormalized, CUtlVector<float, CUtlMemory<float, int> >& valuesOut)
{
	CMotionMatchingAnimNodeInstance::GetUpdateNode(); // 137
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 137
} /* size: 25, inline expansions: 2 (0 bytes) */

// <01170F85> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:135
void CMotionMatchingAnimNodeInstance::GetGoalValues(int nMetricIndex, bool bNormalized, CUtlVector<float, CUtlMemory<float, int> >& valuesOut)
{
} /* size: 0 */

// <011949F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:141
// function calls: 2
void CMotionMatchingAnimNodeInstance::GetCurrentValues(int nMetricIndex, bool bNormalized, CUtlVector<float, CUtlMemory<float, int> >& valuesOut)
{
	CMotionMatchingAnimNodeInstance::GetUpdateNode(); // 143
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 143
} /* size: 25, inline expansions: 2 (0 bytes) */

// <01170F48> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:141
void CMotionMatchingAnimNodeInstance::GetCurrentValues(int nMetricIndex, bool bNormalized, CUtlVector<float, CUtlMemory<float, int> >& valuesOut)
{
} /* size: 0 */

// <01194ADB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:147
// function calls: 2
void CMotionMatchingAnimNodeInstance::GetClipValues(int nMetricIndex, ClipIndex nClipIndex, int nEntryPointIndex, bool bNormalized, CUtlVector<float, CUtlMemory<float, int> >& valuesOut)
{
	CMotionMatchingAnimNodeInstance::GetUpdateNode(); // 149
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 149
} /* size: 44, inline expansions: 2 (0 bytes) */

// <01170EF3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:147
void CMotionMatchingAnimNodeInstance::GetClipValues(int nMetricIndex, ClipIndex nClipIndex, int nEntryPointIndex, bool bNormalized, CUtlVector<float, CUtlMemory<float, int> >& valuesOut)
{
} /* size: 0 */

// <01198263> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmatchinganimnodeinstance.cpp:153
void CMotionMatchingAnimNodeInstance::GetUpdateNode()
{
} /* size: 0 */

