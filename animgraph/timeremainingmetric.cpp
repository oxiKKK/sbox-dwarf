
//
// animgraph/timeremainingmetric.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//

// <0140F21F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <0140C69F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:9
void CTimeRemainingMetric::GetTypeInfo()
{
} /* size: 12 */

// <013F8210> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:9
// function calls: 3
void* CTimeRemainingMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CTimeRemainingMetric>::CastTo(
		CTimeRemainingMetric* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <013F807D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:9
// function calls: 3
const void* CTimeRemainingMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CTimeRemainingMetric>::CastTo(
		const CTimeRemainingMetric* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (295 bytes) */

// <013F7EF2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:17
// function calls: 6
void CTimeRemainingMetric::CTimeRemainingMetric()
{
	Object::Object(); // 24
	IMotionMetric::IMotionMetric(); // 14
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 14
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(); // 14
	CMotionMetricBase::CMotionMetricBase(); // 17
} /* size: 80, inline expansions: 6 (50 bytes) */

// <013F7ED9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:17
void CTimeRemainingMetric::CTimeRemainingMetric()
{
} /* size: 0 */

// <013F7EC0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:23
void CTimeRemainingMetric::GetDimensionCount()
{
} /* size: 0 */

// <013F7EA7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:29
void CTimeRemainingMetric::GetCategory()
{
} /* size: 0 */

// <013F7D32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeremainingmetric.cpp:35
// function calls: 2
void CTimeRemainingMetric::CreateEvaluator(CMotionMetricInitContext& initContext, CPackedData& fixedData, float flWeight)
{
	CMotionMetricBase::GetWeight(); // 39
	CPackedDataT<false>::AddItem<CTimeRemainingMetricEvaluator, CPackedDataT<false>&, float, bool const&, float const&, bool const&, float const&>(
																CPackedHandle<CTimeRemainingMetricEvaluator>* handleOut);  // 37
} /* size: 142, inline expansions: 2 (61 bytes) */

