
//
// animgraph/distanceremainingmetric.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <0140E840> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <0140C47D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.cpp:9
void CDistanceRemainingMetric::GetTypeInfo()
{
} /* size: 12 */

// <01408E6C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.cpp:9
// function calls: 3
void* CDistanceRemainingMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CDistanceRemainingMetric>::CastTo(
		CDistanceRemainingMetric* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01408CD9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.cpp:9
// function calls: 3
const void* CDistanceRemainingMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CDistanceRemainingMetric>::CastTo(
		const CDistanceRemainingMetric* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01408C46> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.cpp:16
void CDistanceRemainingMetric::GetDimensionCount()
{
} /* size: 10 */

// <01408C18> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.cpp:22
void CDistanceRemainingMetric::GetCategory()
{
} /* size: 7 */

// <01408A7B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/distanceremainingmetric.cpp:28
// function calls: 2
void CDistanceRemainingMetric::CreateEvaluator(CMotionMetricInitContext& initContext, CPackedData& fixedData, float flWeight)
{
	CMotionMetricBase::GetWeight(); // 33
	CPackedDataT<false>::AddItem<CDistanceRemainingMetricEvaluator, CPackedDataT<false>&, float, bool const&, float const&, float const&, bool const&, float const&, bool const&, float>(
																CPackedHandle<CDistanceRemainingMetricEvaluator>* handleOut);  // 30
} /* size: 200, inline expansions: 2 (81 bytes) */

