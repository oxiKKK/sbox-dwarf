
//
// animgraph/pathmetric.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <0140F038> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <0140C621> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.cpp:9
void CPathMetric::GetTypeInfo()
{
} /* size: 12 */

// <013FA815> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.cpp:9
// function calls: 3
void* CPathMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CPathMetric>::CastTo(
		CPathMetric* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <013FA682> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.cpp:9
// function calls: 3
const void* CPathMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CPathMetric>::CastTo(
		const CPathMetric* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <013FA5BF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.cpp:17
// function call: 1
void CPathMetric::GetDimensionCount()
{
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 19
} /* size: 10, inline expansions: 1 (0 bytes) */

// <013FA5A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.cpp:23
void CPathMetric::GetCategory()
{
} /* size: 0 */

// <013FA3FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetric.cpp:29
// function calls: 3
void CPathMetric::CreateEvaluator(CMotionMetricInitContext& initContext, CPackedData& fixedData, float flWeight)
{
	CMotionMetricBase::GetWeight(); // 38
	CMotionMetricInitContext::GetGraphInitContext(); // 33
	CPackedDataT<false>::AddItem<CPathMetricEvaluator, CPackedDataT<false>&, float const&, const CUtlVector<float, CUtlMemory<float, int> >&, bool const&, float const&, float>(
																CPackedHandle<CPathMetricEvaluator>* handleOut);  // 31
} /* size: 169, inline expansions: 3 (60 bytes) */

