
//
// animgraph/animtagspan.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 17
//

// <0131EEA6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:9
void IAnimTagSpanContainer::GetTypeInfo()
{
} /* size: 0 */

// <01313E75> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:9
void MyTypeInfo(void)
{
} /* size: 12 */

// <01313CC7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:9
// function calls: 3
void* IAnimTagSpanContainer::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimTagSpanContainer>::CastTo(
		IAnimTagSpanContainer* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01313B32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:9
// function calls: 3
const void* IAnimTagSpanContainer::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimTagSpanContainer>::CastTo(
		const IAnimTagSpanContainer* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

// <013132C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:12
// function calls: 5
void CAnimTagSpan::CAnimTagSpan()
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 12
	IAnimTagSpan::IAnimTagSpan(); // 12
	AnimTagID::AnimTagID(); // 12
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(); // 12
} /* size: 57, inline expansions: 5 (21 bytes) */

// <013132AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:12
void CAnimTagSpan::CAnimTagSpan()
{
} /* size: 0 */

// <01312F0E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:18
// function calls: 18
void CAnimTagSpan::CAnimTagSpan(AnimTagID id, const CAnimGraphContextPtr& context)
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 20
	IAnimTagSpan::IAnimTagSpan(); // 20
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
			const CSmartPtr<CAnimGraphContext, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimGraphContext, CRefCountAccessor>& other);  // 20
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 19
} /* size: 157, inline expansions: 18 (398 bytes) */

// <01312EDE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:18
void CAnimTagSpan::CAnimTagSpan(AnimTagID id, const CAnimGraphContextPtr& context)
{
} /* size: 0 */

// <01312BE0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:26
// function calls: 12
void CAnimTagSpan::GetTag()
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator!=(
			const CAnimGraphContext* pOther);  // 28
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 30
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 42
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::Get(); // 42
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimTagBase>(CAnimTagBase* pObj); // 344
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::~CSmartPtr(); // 42
	CAnimTagManager::GetTag(
		AnimTagID tagID);  // 30
} /* size: 168, inline expansions: 12 (219 bytes) */

// <01312BC8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:39
void CAnimTagSpan::GetTag()
{
} /* size: 0 */

// <0131F748> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:52
void CAnimTagSpan::GetStartCycle()
{
} /* size: 10 */

// <0131F772> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:58
void CAnimTagSpan::SetStartCycle(float flStartCycle)
{
} /* size: 10 */

// <0131F7A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:64
void CAnimTagSpan::GetDuration()
{
} /* size: 10 */

// <0131F7CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:70
void CAnimTagSpan::SetDuration(float flCycle)
{
} /* size: 10 */

// <01312B34> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:76
void CAnimTagSpan::GetTagID()
{
} /* size: 0 */

// <01312B11> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:82
void CAnimTagSpan::SetTagID(AnimTagID id)
{
} /* size: 0 */

// <0131285F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagspan.cpp:88
// function calls: 13
void CAnimTagSpan::SetContext(const CAnimGraphContextPtr& context)
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
			const CSmartPtr<CAnimGraphContext, CRefCountAccessor>& other);  // 90
} /* size: 97, inline expansions: 13 (287 bytes) */

