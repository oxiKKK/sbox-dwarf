
//
// animgraph/bonevelocitymetric.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//

// <0140E804> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <0140C429> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.cpp:10
void CBoneVelocityMetric::GetTypeInfo()
{
} /* size: 12 */

// <01409C4A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.cpp:10
// function calls: 3
void* CBoneVelocityMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CBoneVelocityMetric>::CastTo(
		CBoneVelocityMetric* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01409AB7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.cpp:10
// function calls: 3
const void* CBoneVelocityMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CBoneVelocityMetric>::CastTo(
		const CBoneVelocityMetric* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0140992C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.cpp:17
// variable: 1
// function calls: 3
void CBoneVelocityMetric::GetUIName()
{
	CUtlString nameString; // 19
	CUtlString::CUtlString(
			const char* pString);  // 19
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 20
} /* size: 86, variables: 1, inline expansions: 3 (57 bytes) */

// <01409913> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.cpp:26
void CBoneVelocityMetric::GetDimensionCount()
{
} /* size: 0 */

// <014098FA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.cpp:32
void CBoneVelocityMetric::GetCategory()
{
} /* size: 0 */

// <014096F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonevelocitymetric.cpp:38
// variable: 1
// function calls: 5
void CBoneVelocityMetric::CreateEvaluator(CMotionMetricInitContext& initContext, CPackedData& fixedData, float flWeight)
{
	int boneIndex; // 40
	CMotionMetricInitContext::GetGraphInitContext(); // 40
	CUtlString::Get(); // 99
	CUtlString::String(); // 40
	CMotionMetricBase::GetWeight(); // 42
	CPackedDataT<false>::AddItem<CBoneVelocityMetricEvaluator, CPackedDataT<false>&, int&, float>(
										CPackedHandle<CBoneVelocityMetricEvaluator>* handleOut);  // 42
} /* size: 167, variables: 1, inline expansions: 5 (85 bytes) */

