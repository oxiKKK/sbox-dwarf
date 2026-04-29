
//
// animgraph/pathmetricinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <013FA365> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:10
void IPathMetricInstance::GetTypeInfo()
{
} /* size: 0 */

// <013FA1D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:10
// function calls: 3
void* IPathMetricInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IPathMetricInstance>::CastTo(
		IPathMetricInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <013FA03F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:10
// function calls: 3
const void* IPathMetricInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IPathMetricInstance>::CastTo(
		const IPathMetricInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0140F074> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:12
void MyTypeInfo(void)
{
} /* size: 0 */

// <0140C64B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:12
void CPathMetricInstance::GetTypeInfo()
{
} /* size: 12 */

// <013F9E28> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:12
// function calls: 3
void* CPathMetricInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CPathMetricInstance>::CastTo(
		CPathMetricInstance* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (287 bytes) */

// <013F9C95> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:12
// function calls: 3
const void* CPathMetricInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CPathMetricInstance>::CastTo(
		const CPathMetricInstance* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (287 bytes) */

// <013F96D6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:19
// function calls: 24
void CPathMetricInstance::CPathMetricInstance(const CAnimGraphUpdateContextPtr& pContext, CPackedHandle<const CMotionMetricEvaluator> hEvaluator)
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
	IPathMetricInstance::IPathMetricInstance(); // 20
} /* size: 0, inline expansions: 24 (0 bytes) */

// <013F96A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:19
void CPathMetricInstance::CPathMetricInstance(const CAnimGraphUpdateContextPtr& pContext, CPackedHandle<const CMotionMetricEvaluator> hEvaluator)
{
} /* size: 0 */

// <0140D439> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:26
// function calls: 6
void CPathMetricInstance::GetSampleCount()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 61
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 33
	CAnimGraphFixedData::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 61
	CMotionMetricInstance::GetEvaluator(); // 40
	CPathMetricInstance::GetPathEvaluator(); // 28
} /* size: 90, inline expansions: 6 (96 bytes) */

// <013F968C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:26
void CPathMetricInstance::GetSampleCount()
{
} /* size: 0 */

// <0140DA58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:32
// function calls: 6
void CPathMetricInstance::GetSampleTime(int nSampleIndex)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 61
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 33
	CAnimGraphFixedData::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 61
	CMotionMetricInstance::GetEvaluator(); // 40
	CPathMetricInstance::GetPathEvaluator(); // 34
} /* size: 101, inline expansions: 6 (96 bytes) */

// <013F9667> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:32
void CPathMetricInstance::GetSampleTime(int nSampleIndex)
{
} /* size: 0 */

// <0140F092> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:38
// function calls: 5
void CPathMetricInstance::GetPathEvaluator()
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

// <013F964E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathmetricinstance.cpp:38
void CPathMetricInstance::GetPathEvaluator()
{
} /* size: 0 */

