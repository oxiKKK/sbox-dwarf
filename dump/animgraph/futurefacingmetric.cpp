
//
// animgraph/futurefacingmetric.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <0140EA45> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <0140C525> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.cpp:9
void CFutureFacingMetric::GetTypeInfo()
{
} /* size: 12 */

// <01405535> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.cpp:9
// function calls: 3
void* CFutureFacingMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CFutureFacingMetric>::CastTo(
		CFutureFacingMetric* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <014053A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.cpp:9
// function calls: 3
const void* CFutureFacingMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CFutureFacingMetric>::CastTo(
		const CFutureFacingMetric* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01405324> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.cpp:16
void CFutureFacingMetric::GetDimensionCount()
{
} /* size: 0 */

// <0140530B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.cpp:22
void CFutureFacingMetric::GetCategory()
{
} /* size: 0 */

// <0140518D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetric.cpp:28
// function calls: 3
void CFutureFacingMetric::CreateEvaluator(CMotionMetricInitContext& initContext, CPackedData& fixedData, float flWeight)
{
	CMotionMetricBase::GetWeight(); // 34
	CMotionMetricInitContext::GetGraphInitContext(); // 32
	CPackedDataT<false>::AddItem<CFutureFacingMetricEvaluator, CPackedDataT<false>&, float const&, float>(
											CPackedHandle<CFutureFacingMetricEvaluator>* handleOut);  // 30
} /* size: 153, inline expansions: 3 (51 bytes) */

