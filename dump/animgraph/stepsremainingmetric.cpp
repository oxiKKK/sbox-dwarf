
//
// animgraph/stepsremainingmetric.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//

// <0140F201> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <0140C675> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:9
void CStepsRemainingMetric::GetTypeInfo()
{
} /* size: 12 */

// <013F93FA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:9
// function calls: 3
void* CStepsRemainingMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CStepsRemainingMetric>::CastTo(
		CStepsRemainingMetric* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <013F9267> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:9
// function calls: 3
const void* CStepsRemainingMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CStepsRemainingMetric>::CastTo(
		const CStepsRemainingMetric* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <013F8F9B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:16
// function calls: 12
void CStepsRemainingMetric::CStepsRemainingMetric()
{
	Object::Object(); // 24
	IMotionMetric::IMotionMetric(); // 14
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 14
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(); // 14
	CMotionMetricBase::CMotionMetricBase(); // 16
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 16
	CMotionMetricBase::SetWeight(
			float flWeight);  // 18
} /* size: 93, inline expansions: 12 (124 bytes) */

// <013F8F82> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:16
void CStepsRemainingMetric::CStepsRemainingMetric()
{
} /* size: 0 */

// <013F8F69> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:22
void CStepsRemainingMetric::GetDimensionCount()
{
} /* size: 0 */

// <013F8F3B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:28
void CStepsRemainingMetric::GetCategory()
{
} /* size: 10 */

// <013F8464> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stepsremainingmetric.cpp:34
// variables: 5
// function calls: 45
void CStepsRemainingMetric::CreateEvaluator(CMotionMetricInitContext& initContext, CPackedData& fixedData, float flWeight)
{
	CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> > footDefinitions; // 36
	CUtlVector<int, CUtlMemory<int, int> > footIndices; // 38
	{
		int i; // 41
		{
			int iFoot; // 45
			CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::Count(); // 45
			CUtlMemory<CFootDefinition, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::operator[](
					int i);  // 47
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 47
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 49
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 41
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 43
	}
	CMotionMetricInitContext::GetGraphInitContext(); // 36
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 38
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 39
	CPackedDataT<false>::AddItem<CStepsRemainingMetricEvaluator, CPackedDataT<false>&, CUtlVector<int, CUtlMemory<int, int> >&, float const&>(
																CPackedHandle<CStepsRemainingMetricEvaluator>* handleOut);  // 54
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 55
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
	CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> >::~CUtlVector(); // 55
} /* size: 482, variables: 2, inline expansions: 28 (824 bytes) */

