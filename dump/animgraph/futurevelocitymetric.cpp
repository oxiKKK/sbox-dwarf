
//
// animgraph/futurevelocitymetric.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <0140EC0E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <0140C579> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.cpp:9
void CFutureVelocityMetric::GetTypeInfo()
{
} /* size: 12 */

// <01404144> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.cpp:9
// function calls: 3
void* CFutureVelocityMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CFutureVelocityMetric>::CastTo(
		CFutureVelocityMetric* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01403FB1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.cpp:9
// function calls: 3
const void* CFutureVelocityMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CFutureVelocityMetric>::CastTo(
		const CFutureVelocityMetric* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01403F1E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.cpp:16
void CFutureVelocityMetric::GetDimensionCount()
{
} /* size: 16 */

// <01403F05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.cpp:29
void CFutureVelocityMetric::GetCategory()
{
} /* size: 0 */

// <01403D1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurevelocitymetric.cpp:35
// function calls: 4
void CFutureVelocityMetric::CreateEvaluator(CMotionMetricInitContext& initContext, CPackedData& fixedData, float flWeight)
{
	CMotionMetricBase::GetWeight(); // 44
	CMotionMetricInitContext::GetTopSpeed(); // 43
	CMotionMetricInitContext::GetGraphInitContext(); // 39
	CPackedDataT<false>::AddItem<CFutureVelocityMetricEvaluator, CPackedDataT<false>&, float const&, float const&, bool const&, float, float>(
																CPackedHandle<CFutureVelocityMetricEvaluator>* handleOut);  // 37
} /* size: 204, inline expansions: 4 (80 bytes) */

