
//
// animgraph/bonepositionmetric.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//

// <0140E7E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <0140C3FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.cpp:10
void CBonePositionMetric::GetTypeInfo()
{
} /* size: 12 */

// <0140A5E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.cpp:10
// function calls: 3
void* CBonePositionMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CBonePositionMetric>::CastTo(
		CBonePositionMetric* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0140A454> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.cpp:10
// function calls: 3
const void* CBonePositionMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CBonePositionMetric>::CastTo(
		const CBonePositionMetric* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0140A130> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.cpp:17
// function calls: 10
void CBonePositionMetric::GetUIName()
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 19
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 81
	CFmtStrN<256>::String(); // 19
	CUtlString::CUtlString(
			const char* pString);  // 19
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 19
} /* size: 176, inline expansions: 10 (219 bytes) */

// <0140A102> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.cpp:23
void CBonePositionMetric::GetDimensionCount()
{
} /* size: 10 */

// <0140A0D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.cpp:29
void CBonePositionMetric::GetCategory()
{
} /* size: 10 */

// <01409ECE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonepositionmetric.cpp:35
// variable: 1
// function calls: 5
void CBonePositionMetric::CreateEvaluator(CMotionMetricInitContext& initContext, CPackedData& fixedData, float flWeight)
{
	int boneIndex; // 37
	CMotionMetricInitContext::GetGraphInitContext(); // 37
	CUtlString::Get(); // 99
	CUtlString::String(); // 37
	CMotionMetricBase::GetWeight(); // 39
	CPackedDataT<false>::AddItem<CBonePositionMetricEvaluator, CPackedDataT<false>&, int&, float>(
										CPackedHandle<CBonePositionMetricEvaluator>* handleOut);  // 39
} /* size: 167, variables: 1, inline expansions: 5 (85 bytes) */

