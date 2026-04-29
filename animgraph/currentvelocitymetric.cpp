
//
// animgraph/currentvelocitymetric.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <0140E822> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <0140C453> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.cpp:10
void CCurrentVelocityMetric::GetTypeInfo()
{
} /* size: 12 */

// <01409470> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.cpp:10
// function calls: 3
void* CCurrentVelocityMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CCurrentVelocityMetric>::CastTo(
		CCurrentVelocityMetric* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <014092DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.cpp:10
// function calls: 3
const void* CCurrentVelocityMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CCurrentVelocityMetric>::CastTo(
		const CCurrentVelocityMetric* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0140924A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.cpp:17
void CCurrentVelocityMetric::GetDimensionCount()
{
} /* size: 10 */

// <01409231> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.cpp:23
void CCurrentVelocityMetric::GetCategory()
{
} /* size: 0 */

// <014090F0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/currentvelocitymetric.cpp:29
// function calls: 2
void CCurrentVelocityMetric::CreateEvaluator(CMotionMetricInitContext& initContext, CPackedData& fixedData, float flWeight)
{
	CMotionMetricBase::GetWeight(); // 31
	CPackedDataT<false>::AddItem<CCurrentVelocityMetricEvaluator, CPackedDataT<false>&, float>(
										CPackedHandle<CCurrentVelocityMetricEvaluator>* handleOut);  // 31
} /* size: 118, inline expansions: 2 (43 bytes) */

