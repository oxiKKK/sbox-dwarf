
//
// animgraph/footcyclemetric.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <0140E85E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <0140C4A7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.cpp:10
void CFootCycleMetric::GetTypeInfo()
{
} /* size: 12 */

// <014087F7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.cpp:10
// function calls: 3
void* CFootCycleMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CFootCycleMetric>::CastTo(
		CFootCycleMetric* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01408664> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.cpp:10
// function calls: 3
const void* CFootCycleMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CFootCycleMetric>::CastTo(
		const CFootCycleMetric* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <014085A1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.cpp:17
// function call: 1
void CFootCycleMetric::GetDimensionCount()
{
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 19
} /* size: 10, inline expansions: 1 (0 bytes) */

// <01408588> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.cpp:23
void CFootCycleMetric::GetCategory()
{
} /* size: 0 */

// <01407A43> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footcyclemetric.cpp:29
// variables: 5
// function calls: 46
void CFootCycleMetric::CreateEvaluator(CMotionMetricInitContext& initContext, CPackedData& fixedData, float flWeight)
{
	CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> > footDefinitions; // 31
	CUtlVector<int, CUtlMemory<int, int> > footIndices; // 33
	{
		int i; // 37
		{
			int iFoot; // 41
			CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::Count(); // 41
			CUtlMemory<CFootDefinition, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::operator[](
					int i);  // 43
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 43
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 45
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 37
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 39
	}
	CMotionMetricInitContext::GetGraphInitContext(); // 31
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 33
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 34
	CMotionMetricBase::GetWeight(); // 50
	CPackedDataT<false>::AddItem<CFootCycleMetricEvaluator, CPackedDataT<false>&, CUtlVector<int, CUtlMemory<int, int> >&, float>(
														CPackedHandle<CFootCycleMetricEvaluator>* handleOut);  // 50
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 51
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
	CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> >::~CUtlVector(); // 51
} /* size: 556, variables: 2, inline expansions: 29 (836 bytes) */

