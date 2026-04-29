
//
// animgraph/footpositionmetric.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <0140E87C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <0140C4D1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.cpp:9
void CFootPositionMetric::GetTypeInfo()
{
} /* size: 12 */

// <014077BF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.cpp:9
// function calls: 3
void* CFootPositionMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CFootPositionMetric>::CastTo(
		CFootPositionMetric* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0140762C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.cpp:9
// function calls: 3
const void* CFootPositionMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CFootPositionMetric>::CastTo(
		const CFootPositionMetric* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01407569> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.cpp:16
// function call: 1
void CFootPositionMetric::GetDimensionCount()
{
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 18
} /* size: 11, inline expansions: 1 (0 bytes) */

// <01407550> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.cpp:22
void CFootPositionMetric::GetCategory()
{
} /* size: 0 */

// <01406A32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetric.cpp:28
// variables: 5
// function calls: 46
void CFootPositionMetric::CreateEvaluator(CMotionMetricInitContext& initContext, CPackedData& fixedData, float flWeight)
{
	CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> > footDefinitions; // 30
	CUtlVector<int, CUtlMemory<int, int> > footIndices; // 32
	{
		int i; // 36
		{
			int iFoot; // 40
			CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::Count(); // 40
			CUtlMemory<CFootDefinition, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::operator[](
					int i);  // 42
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 42
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 44
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 36
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 38
	}
	CMotionMetricInitContext::GetGraphInitContext(); // 30
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 32
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 33
	CMotionMetricBase::GetWeight(); // 49
	CPackedDataT<false>::AddItem<CFootPositionMetricEvaluator, CPackedDataT<false>&, CUtlVector<int, CUtlMemory<int, int> >&, bool const&, float>(
																CPackedHandle<CFootPositionMetricEvaluator>* handleOut);  // 49
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 50
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
	CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> >::~CUtlVector(); // 50
} /* size: 556, variables: 2, inline expansions: 29 (824 bytes) */

