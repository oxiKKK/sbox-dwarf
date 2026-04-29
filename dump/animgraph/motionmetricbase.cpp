
//
// animgraph/motionmetricbase.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <01402F0D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:8
void IMotionMetric::GetTypeInfo()
{
} /* size: 0 */

// <01402D7A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:8
// function calls: 3
void* IMotionMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IMotionMetric>::CastTo(
		IMotionMetric* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01402BE7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:8
// function calls: 3
const void* IMotionMetric::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IMotionMetric>::CastTo(
		const IMotionMetric* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0140EDF5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <01402B4E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:10
void CMotionMetricBase::GetTypeInfo()
{
} /* size: 12 */

// <014029BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:10
// function calls: 3
void* CMotionMetricBase::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CMotionMetricBase>::CastTo(
		CMotionMetricBase* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (206 bytes) */

// <01402828> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:10
// function calls: 3
const void* CMotionMetricBase::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CMotionMetricBase>::CastTo(
		const CMotionMetricBase* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (206 bytes) */

// <0140268E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:14
// function calls: 5
void CMotionMetricBase::CMotionMetricBase()
{
	Object::Object(); // 24
	IMotionMetric::IMotionMetric(); // 14
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 14
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(); // 14
} /* size: 54, inline expansions: 5 (22 bytes) */

// <01402675> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:14
void CMotionMetricBase::CMotionMetricBase()
{
} /* size: 0 */

// <01402467> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:20
// variable: 1
// function calls: 6
void CMotionMetricBase::GetUIName()
{
	const FriendlyName* pFriendlyName; // 22
	MyTypeID(void); // 53
	CAttributeContainer::GetAttribute<Attribute::FriendlyName>(); // 22
	FriendlyName::Get(); // 25
	CUtlString::CUtlString(
			const char* pString);  // 25
	CClassInfo::GetName(); // 29
	CUtlString::CUtlString(
			const char* pString);  // 29
} /* size: 240, variables: 1, inline expansions: 6 (253 bytes) */

// <0140C5CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:34
void CMotionMetricBase::GetWeight()
{
} /* size: 10 */

// <0140C6F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:40
void CMotionMetricBase::SetWeight(float flWeight)
{
	{
	}
} /* size: 0 */

// <014023EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:40
// variables: 2
void CMotionMetricBase::SetWeight(float flWeight)
{
	const char   __FUNCTION__; // 45653
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 42
	}
} /* size: 0, variables: 1 */

// <014023BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:47
void CMotionMetricBase::GetContext()
{
} /* size: 0 */

// <0140210A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/motionmetricbase.cpp:53
// function calls: 13
void CMotionMetricBase::SetContext(const CAnimGraphContextPtr& context)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphContext>(CAnimGraphContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 370
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			CAnimGraphContext* pObj);  // 406
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphContext, CRefCountAccessor>& other);  // 55
} /* size: 97, inline expansions: 13 (287 bytes) */

