
//
// animgraph/directplaybackanimnodeinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 21
//

// <010955C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:8
void MyTypeInfo(void)
{
} /* size: 0 */

// <0106FD58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:8
void IDirectPlaybackAnimNodeInstance::GetTypeInfo()
{
} /* size: 0 */

// <0106FBC5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:8
// function calls: 3
void* IDirectPlaybackAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IDirectPlaybackAnimNodeInstance>::CastTo(
		IDirectPlaybackAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0106FA32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:8
// function calls: 3
const void* IDirectPlaybackAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IDirectPlaybackAnimNodeInstance>::CastTo(
		const IDirectPlaybackAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01090926> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:10
void CDirectPlaybackAnimNodeInstance::GetTypeInfo()
{
} /* size: 12 */

// <0106F807> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:10
// function calls: 3
void* CDirectPlaybackAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CDirectPlaybackAnimNodeInstance>::CastTo(
		CDirectPlaybackAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0106F674> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:10
// function calls: 3
const void* CDirectPlaybackAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CDirectPlaybackAnimNodeInstance>::CastTo(
		const CDirectPlaybackAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0106EEAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:15
// function calls: 34
void CDirectPlaybackAnimNodeInstance::CDirectPlaybackAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
	Object::Object(); // 14
	IAnimNodeInstance::IAnimNodeInstance(); // 22
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 22
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 370
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator=(
			const CAnimNodeBase* pObj);  // 406
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator=(
			const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& other);  // 328
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& other);  // 20
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
			const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>& other);  // 22
	CAnimNodeInstanceBase::CAnimNodeInstanceBase(
				const CAnimNodeBaseConstPtr& pSrcNode,
				const CAnimUpdateNodeBase* pUpdateNode,
				const CAnimGraphUpdateContextPtr& pContext);  // 16
	IDirectPlaybackAnimNodeInstance::IDirectPlaybackAnimNodeInstance(); // 16
} /* size: 245, inline expansions: 34 (1006 bytes) */

// <0106EE6F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:15
void CDirectPlaybackAnimNodeInstance::CDirectPlaybackAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

// <01091CD0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:22
// variable: 1
// function call: 1
void CDirectPlaybackAnimNodeInstance::PlaySequence(HSequence sequence)
{
	const CDirectPlaybackUpdateNode* pUpdateNode; // 24
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 27
} /* size: 33, variables: 1, inline expansions: 1 (0 bytes) */

// <0106EE3E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:22
// variable: 1
void CDirectPlaybackAnimNodeInstance::PlaySequence(HSequence sequence)
{
	const CDirectPlaybackUpdateNode* pUpdateNode; // 24
} /* size: 0, variables: 1 */

// <01091DE0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:32
// variable: 1
// function call: 1
void CDirectPlaybackAnimNodeInstance::PlaySequence(HSequence sequence, const Vector& vTargetPos, float flFacingHeading, float flInterpTime)
{
	const CDirectPlaybackUpdateNode* pUpdateNode; // 34
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 37
} /* size: 41, variables: 1, inline expansions: 1 (0 bytes) */

// <0106EDE9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:32
// variable: 1
void CDirectPlaybackAnimNodeInstance::PlaySequence(HSequence sequence, const Vector& vTargetPos, float flFacingHeading, float flInterpTime)
{
	const CDirectPlaybackUpdateNode* pUpdateNode; // 34
} /* size: 0, variables: 1 */

// <01091EAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:42
// variable: 1
// function call: 1
void CDirectPlaybackAnimNodeInstance::SetSequenceStartTime(float flStartTime)
{
	const CDirectPlaybackUpdateNode* pUpdateNode; // 44
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 47
} /* size: 33, variables: 1, inline expansions: 1 (0 bytes) */

// <0106EDB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:42
// variable: 1
void CDirectPlaybackAnimNodeInstance::SetSequenceStartTime(float flStartTime)
{
	const CDirectPlaybackUpdateNode* pUpdateNode; // 44
} /* size: 0, variables: 1 */

// <01091F41> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:52
// variables: 2
// function call: 1
void CDirectPlaybackAnimNodeInstance::GetSequenceCycle()
{
	float flCycle; // 54
	const CDirectPlaybackUpdateNode* pUpdateNode; // 56
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 59
} /* size: 37, variables: 2, inline expansions: 1 (0 bytes) */

// <0106ED87> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:52
// variables: 2
void CDirectPlaybackAnimNodeInstance::GetSequenceCycle()
{
	float flCycle; // 54
	const CDirectPlaybackUpdateNode* pUpdateNode; // 56
} /* size: 0, variables: 2 */

// <01091D5B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:66
// variable: 1
// function call: 1
void CDirectPlaybackAnimNodeInstance::CancelSequence()
{
	const CDirectPlaybackUpdateNode* pUpdateNode; // 68
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 71
} /* size: 33, variables: 1, inline expansions: 1 (0 bytes) */

// <0106ED62> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:66
// variable: 1
void CDirectPlaybackAnimNodeInstance::CancelSequence()
{
	const CDirectPlaybackUpdateNode* pUpdateNode; // 68
} /* size: 0, variables: 1 */

// <01091FCA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:76
// variables: 2
// function call: 1
void CDirectPlaybackAnimNodeInstance::GetCurrentSequence()
{
	HSequence currentSequence; // 78
	const CDirectPlaybackUpdateNode* pUpdateNode; // 80
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 83
} /* size: 38, variables: 2, inline expansions: 1 (0 bytes) */

// <0106ED31> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackanimnodeinstance.cpp:76
// variables: 2
void CDirectPlaybackAnimNodeInstance::GetCurrentSequence()
{
	HSequence currentSequence; // 78
	const CDirectPlaybackUpdateNode* pUpdateNode; // 80
} /* size: 0, variables: 2 */

