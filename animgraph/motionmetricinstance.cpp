
//
// animgraph/motionmetricinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 23
//

// <013FB710> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:8
void IMotionMetricInstance::GetTypeInfo()
{
} /* size: 0 */

// <013FB57D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:8
// function calls: 3
void* IMotionMetricInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IMotionMetricInstance>::CastTo(
		IMotionMetricInstance* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <013FB3EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:8
// function calls: 3
const void* IMotionMetricInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IMotionMetricInstance>::CastTo(
		const IMotionMetricInstance* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0140EE85> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:11
void MyTypeInfo(void)
{
} /* size: 0 */

// <0140C5F7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:11
void CMotionMetricInstance::GetTypeInfo()
{
} /* size: 12 */

// <013FB1D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:11
// function calls: 3
void* CMotionMetricInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CMotionMetricInstance>::CastTo(
		CMotionMetricInstance* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (206 bytes) */

// <013FB040> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:11
// function calls: 3
const void* CMotionMetricInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CMotionMetricInstance>::CastTo(
		const CMotionMetricInstance* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (206 bytes) */

// <013FAB91> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:15
// function calls: 20
void CMotionMetricInstance::CMotionMetricInstance(const CAnimGraphUpdateContextPtr& pContext, CPackedHandle<const CMotionMetricEvaluator> hEvaluator)
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 17
	Object::Object(); // 12
	IMotionMetricInstance::IMotionMetricInstance(); // 17
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 370
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator=(
			CAnimGraphUpdateContext* pObj);  // 406
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>& other);  // 16
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<const CMotionMetricEvaluator>::CPackedHandle(
			const CPackedHandle<const CMotionMetricEvaluator>  &);  // 17
} /* size: 138, inline expansions: 20 (410 bytes) */

// <013FAB60> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:15
void CMotionMetricInstance::CMotionMetricInstance(const CAnimGraphUpdateContextPtr& pContext, CPackedHandle<const CMotionMetricEvaluator> hEvaluator)
{
} /* size: 0 */

// <0140DFF8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:23
// function calls: 5
void CMotionMetricInstance::GetName()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 61
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 33
	CAnimGraphFixedData::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 61
	CMotionMetricInstance::GetEvaluator(); // 25
} /* size: 105, inline expansions: 5 (68 bytes) */

// <013FAB47> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:23
void CMotionMetricInstance::GetName()
{
} /* size: 0 */

// <0140D13F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:29
// function calls: 5
void CMotionMetricInstance::GetDimensionCount()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 61
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 33
	CAnimGraphFixedData::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 61
	CMotionMetricInstance::GetEvaluator(); // 31
} /* size: 90, inline expansions: 5 (68 bytes) */

// <013FAB2E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:29
void CMotionMetricInstance::GetDimensionCount()
{
} /* size: 0 */

// <0140D2BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:35
// function calls: 5
void CMotionMetricInstance::GetWeight()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 61
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 33
	CAnimGraphFixedData::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 61
	CMotionMetricInstance::GetEvaluator(); // 37
} /* size: 90, inline expansions: 5 (68 bytes) */

// <013FAB15> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:35
void CMotionMetricInstance::GetWeight()
{
} /* size: 0 */

// <0140D764> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:41
// function calls: 5
void CMotionMetricInstance::GetMean(int nDimensionIndex)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 61
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 33
	CAnimGraphFixedData::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 61
	CMotionMetricInstance::GetEvaluator(); // 43
} /* size: 101, inline expansions: 5 (68 bytes) */

// <013FAAF0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:41
void CMotionMetricInstance::GetMean(int nDimensionIndex)
{
} /* size: 0 */

// <0140D8DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:47
// function calls: 5
void CMotionMetricInstance::GetStandardDeviation(int nDimensionIndex)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 61
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 33
	CAnimGraphFixedData::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 61
	CMotionMetricInstance::GetEvaluator(); // 49
} /* size: 101, inline expansions: 5 (68 bytes) */

// <013FAACB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:47
void CMotionMetricInstance::GetStandardDeviation(int nDimensionIndex)
{
} /* size: 0 */

// <0140EEA3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:53
// function call: 1
void CMotionMetricInstance::GetContext()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::Get(); // 55
} /* size: 0, inline expansions: 1 (0 bytes) */

// <013FAAB2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:53
void CMotionMetricInstance::GetContext()
{
} /* size: 0 */

// <0140EEFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:59
// function calls: 4
void CMotionMetricInstance::GetEvaluator()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 61
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 33
	CAnimGraphFixedData::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 61
} /* size: 0, inline expansions: 4 (0 bytes) */

// <013FAA99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricinstance.cpp:59
void CMotionMetricInstance::GetEvaluator()
{
} /* size: 0 */

