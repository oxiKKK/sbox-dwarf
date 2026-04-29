
//
// animgraph/footpositionmetricinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <0140696B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:10
void IFootPositionMetricInstance::GetTypeInfo()
{
} /* size: 0 */

// <014067D8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:10
// function calls: 3
void* IFootPositionMetricInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IFootPositionMetricInstance>::CastTo(
		IFootPositionMetricInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01406645> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:10
// function calls: 3
const void* IFootPositionMetricInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IFootPositionMetricInstance>::CastTo(
		const IFootPositionMetricInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0140E8B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:12
void MyTypeInfo(void)
{
} /* size: 0 */

// <0140C4FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:12
void CFootPositionMetricInstance::GetTypeInfo()
{
} /* size: 12 */

// <0140642E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:12
// function calls: 3
void* CFootPositionMetricInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CFootPositionMetricInstance>::CastTo(
		CFootPositionMetricInstance* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (287 bytes) */

// <0140629B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:12
// function calls: 3
const void* CFootPositionMetricInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CFootPositionMetricInstance>::CastTo(
		const CFootPositionMetricInstance* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (287 bytes) */

// <01405841> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:19
// function calls: 24
void CFootPositionMetricInstance::CFootPositionMetricInstance(const CAnimGraphUpdateContextPtr& pContext, CPackedHandle<const CMotionMetricEvaluator> hEvaluator)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 19
	CPackedHandle<const CMotionMetricEvaluator>::CPackedHandle(
			const CPackedHandle<const CMotionMetricEvaluator>  &);  // 20
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
	CMotionMetricInstance::CMotionMetricInstance(
				const CAnimGraphUpdateContextPtr& pContext,
				CPackedHandle<const CMotionMetricEvaluator> hEvaluator);  // 20
	IFootPositionMetricInstance::IFootPositionMetricInstance(); // 20
} /* size: 0, inline expansions: 24 (0 bytes) */

// <01405810> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:19
void CFootPositionMetricInstance::CFootPositionMetricInstance(const CAnimGraphUpdateContextPtr& pContext, CPackedHandle<const CMotionMetricEvaluator> hEvaluator)
{
} /* size: 0 */

// <0140CDE5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:26
// function calls: 6
void CFootPositionMetricInstance::GetFootCount()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 61
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 33
	CAnimGraphFixedData::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 61
	CMotionMetricInstance::GetEvaluator(); // 40
	CFootPositionMetricInstance::GetFootPosEvaluator(); // 28
} /* size: 90, inline expansions: 6 (96 bytes) */

// <014057F7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:26
void CFootPositionMetricInstance::GetFootCount()
{
} /* size: 0 */

// <0140D5E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:32
// function calls: 6
void CFootPositionMetricInstance::GetFootIndex(int nIndex)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 61
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 33
	CAnimGraphFixedData::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 61
	CMotionMetricInstance::GetEvaluator(); // 40
	CFootPositionMetricInstance::GetFootPosEvaluator(); // 34
} /* size: 101, inline expansions: 6 (96 bytes) */

// <014057D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:32
void CFootPositionMetricInstance::GetFootIndex(int nIndex)
{
} /* size: 0 */

// <0140E8D6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:38
// function calls: 5
void CFootPositionMetricInstance::GetFootPosEvaluator()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 61
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 33
	CAnimGraphFixedData::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 61
	CMotionMetricInstance::GetEvaluator(); // 40
} /* size: 0, inline expansions: 5 (0 bytes) */

// <014057B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footpositionmetricinstance.cpp:38
void CFootPositionMetricInstance::GetFootPosEvaluator()
{
} /* size: 0 */

