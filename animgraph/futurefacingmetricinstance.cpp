
//
// animgraph/futurefacingmetricinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <014050F7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:10
void IFutureFacingMetricInstance::GetTypeInfo()
{
} /* size: 0 */

// <01404F64> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:10
// function calls: 3
void* IFutureFacingMetricInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IFutureFacingMetricInstance>::CastTo(
		IFutureFacingMetricInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01404DD1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:10
// function calls: 3
const void* IFutureFacingMetricInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IFutureFacingMetricInstance>::CastTo(
		const IFutureFacingMetricInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0140EA81> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:12
void MyTypeInfo(void)
{
} /* size: 0 */

// <0140C54F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:12
void CFutureFacingMetricInstance::GetTypeInfo()
{
} /* size: 12 */

// <01404BBA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:12
// function calls: 3
void* CFutureFacingMetricInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CFutureFacingMetricInstance>::CastTo(
		CFutureFacingMetricInstance* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (287 bytes) */

// <01404A27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:12
// function calls: 3
const void* CFutureFacingMetricInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CFutureFacingMetricInstance>::CastTo(
		const CFutureFacingMetricInstance* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (287 bytes) */

// <01404468> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:19
// function calls: 24
void CFutureFacingMetricInstance::CFutureFacingMetricInstance(const CAnimGraphUpdateContextPtr& pContext, CPackedHandle<const CMotionMetricEvaluator> hEvaluator)
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
	IFutureFacingMetricInstance::IFutureFacingMetricInstance(); // 20
} /* size: 0, inline expansions: 24 (0 bytes) */

// <01404437> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:19
void CFutureFacingMetricInstance::CFutureFacingMetricInstance(const CAnimGraphUpdateContextPtr& pContext, CPackedHandle<const CMotionMetricEvaluator> hEvaluator)
{
} /* size: 0 */

// <0140DBD6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:26
// function calls: 8
void CFutureFacingMetricInstance::GetGoalPosition()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 61
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 33
	CAnimGraphFixedData::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 61
	CMotionMetricInstance::GetEvaluator(); // 40
	CFutureFacingMetricInstance::GetFacingEvaluator(); // 28
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::Get(); // 55
	CMotionMetricInstance::GetContext(); // 28
} /* size: 94, inline expansions: 8 (96 bytes) */

// <0140441E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:26
void CFutureFacingMetricInstance::GetGoalPosition()
{
} /* size: 0 */

// <0140E16F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:32
// function calls: 8
void CFutureFacingMetricInstance::GetClipPosition(HSequence hSequence, float flCycle, bool bLoop)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 61
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 33
	CAnimGraphFixedData::operator[]<const CMotionMetricEvaluator>(
						const CPackedHandle<const CMotionMetricEvaluator>& handle);  // 61
	CMotionMetricInstance::GetEvaluator(); // 40
	CFutureFacingMetricInstance::GetFacingEvaluator(); // 34
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::Get(); // 55
	CMotionMetricInstance::GetContext(); // 34
} /* size: 126, inline expansions: 8 (96 bytes) */

// <014043E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:32
void CFutureFacingMetricInstance::GetClipPosition(HSequence hSequence, float flCycle, bool bLoop)
{
} /* size: 0 */

// <0140EA9F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:38
// function calls: 5
void CFutureFacingMetricInstance::GetFacingEvaluator()
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

// <014043C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/futurefacingmetricinstance.cpp:38
void CFutureFacingMetricInstance::GetFacingEvaluator()
{
} /* size: 0 */

