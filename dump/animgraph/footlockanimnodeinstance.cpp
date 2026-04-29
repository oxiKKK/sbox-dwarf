
//
// animgraph/footlockanimnodeinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 34
//

// <0109563B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:8
void MyTypeInfo(void)
{
} /* size: 0 */

// <01066EA7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:8
void IFootLockAnimNodeInstance::GetTypeInfo()
{
} /* size: 0 */

// <01066D14> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:8
// function calls: 3
void* IFootLockAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IFootLockAnimNodeInstance>::CastTo(
		IFootLockAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01066B81> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:8
// function calls: 3
const void* IFootLockAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IFootLockAnimNodeInstance>::CastTo(
		const IFootLockAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <010909CA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:10
void CFootLockAnimNodeInstance::GetTypeInfo()
{
} /* size: 12 */

// <01066956> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:10
// function calls: 3
void* CFootLockAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CFootLockAnimNodeInstance>::CastTo(
		CFootLockAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <010667C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:10
// function calls: 3
const void* CFootLockAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CFootLockAnimNodeInstance>::CastTo(
		const CFootLockAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01065FFB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:14
// function calls: 34
void CFootLockAnimNodeInstance::CFootLockAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
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
				const CAnimGraphUpdateContextPtr& pContext);  // 15
	IFootLockAnimNodeInstance::IFootLockAnimNodeInstance(); // 15
} /* size: 245, inline expansions: 34 (1006 bytes) */

// <01065FBE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:14
void CFootLockAnimNodeInstance::CFootLockAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

// <01092056> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:21
// function calls: 2
void CFootLockAnimNodeInstance::GetFootCount()
{
	CFootLockAnimNodeInstance::GetUpdateNode(); // 23
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 23
} /* size: 17, inline expansions: 2 (0 bytes) */

// <01065FA5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:21
void CFootLockAnimNodeInstance::GetFootCount()
{
} /* size: 0 */

// <010920FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:28
// function calls: 2
void CFootLockAnimNodeInstance::GetCurrentFootPosition(int nFootIndex)
{
	CFootLockAnimNodeInstance::GetUpdateNode(); // 30
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 30
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01065F80> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:28
void CFootLockAnimNodeInstance::GetCurrentFootPosition(int nFootIndex)
{
} /* size: 0 */

// <010921B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:34
// function calls: 2
void CFootLockAnimNodeInstance::GetCurrentFootDirection(int nFootIndex)
{
	CFootLockAnimNodeInstance::GetUpdateNode(); // 36
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 36
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01065F5B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:34
void CFootLockAnimNodeInstance::GetCurrentFootDirection(int nFootIndex)
{
} /* size: 0 */

// <0109226F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:40
// function calls: 2
void CFootLockAnimNodeInstance::GetNextFootPosition(int nFootIndex)
{
	CFootLockAnimNodeInstance::GetUpdateNode(); // 42
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 42
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01065F36> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:40
void CFootLockAnimNodeInstance::GetNextFootPosition(int nFootIndex)
{
} /* size: 0 */

// <01092329> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:46
// function calls: 2
void CFootLockAnimNodeInstance::GetNextFootDirection(int nFootIndex)
{
	CFootLockAnimNodeInstance::GetUpdateNode(); // 48
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 48
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01065F11> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:46
void CFootLockAnimNodeInstance::GetNextFootDirection(int nFootIndex)
{
} /* size: 0 */

// <010923E3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:52
// function calls: 2
void CFootLockAnimNodeInstance::GetPrevFootPosition(int nFootIndex)
{
	CFootLockAnimNodeInstance::GetUpdateNode(); // 54
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 54
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01065EEC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:52
void CFootLockAnimNodeInstance::GetPrevFootPosition(int nFootIndex)
{
} /* size: 0 */

// <0109249D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:58
// function calls: 2
void CFootLockAnimNodeInstance::GetPrevFootDirection(int nFootIndex)
{
	CFootLockAnimNodeInstance::GetUpdateNode(); // 60
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 60
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01065EC7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:58
void CFootLockAnimNodeInstance::GetPrevFootDirection(int nFootIndex)
{
} /* size: 0 */

// <01092557> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:64
// function calls: 2
void CFootLockAnimNodeInstance::GetMidpointFootPosition(int nFootIndex)
{
	CFootLockAnimNodeInstance::GetUpdateNode(); // 66
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 66
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01065EA2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:64
void CFootLockAnimNodeInstance::GetMidpointFootPosition(int nFootIndex)
{
} /* size: 0 */

// <01092611> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:70
// function calls: 2
void CFootLockAnimNodeInstance::GetFootProgression(int nFootIndex)
{
	CFootLockAnimNodeInstance::GetUpdateNode(); // 72
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 72
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01065E7D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:70
void CFootLockAnimNodeInstance::GetFootProgression(int nFootIndex)
{
} /* size: 0 */

// <010926CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:76
// function calls: 2
void CFootLockAnimNodeInstance::GetFootMotionStage(int nFootIndex)
{
	CFootLockAnimNodeInstance::GetUpdateNode(); // 78
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 78
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01065E58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:76
void CFootLockAnimNodeInstance::GetFootMotionStage(int nFootIndex)
{
} /* size: 0 */

// <01092785> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:82
// function calls: 2
void CFootLockAnimNodeInstance::GetFootLockStatus(int nFootIndex)
{
	CFootLockAnimNodeInstance::GetUpdateNode(); // 84
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 84
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01065E33> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:82
void CFootLockAnimNodeInstance::GetFootLockStatus(int nFootIndex)
{
} /* size: 0 */

// <01095659> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:88
void CFootLockAnimNodeInstance::GetUpdateNode()
{
} /* size: 0 */

// <0109283F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:93
// function calls: 2
void CFootLockAnimNodeInstance::GetTiltVector()
{
	CFootLockAnimNodeInstance::GetUpdateNode(); // 95
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 95
} /* size: 17, inline expansions: 2 (0 bytes) */

// <01065E01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:93
void CFootLockAnimNodeInstance::GetTiltVector()
{
} /* size: 0 */

