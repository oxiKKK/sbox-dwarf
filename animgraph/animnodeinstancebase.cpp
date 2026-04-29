
//
// animgraph/animnodeinstancebase.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 33
//

// <01087789> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:12
void IAnimNodeInstance::GetTypeInfo()
{
} /* size: 0 */

// <010875F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:12
// function calls: 3
void* IAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimNodeInstance>::CastTo(
		IAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01087463> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:12
// function calls: 3
const void* IAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimNodeInstance>::CastTo(
		const IAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01094A7C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:15
void MyTypeInfo(void)
{
} /* size: 12 */

// <010873CA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:15
void CAnimNodeInstanceBase::GetTypeInfo()
{
} /* size: 12 */

// <01087237> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:15
// function calls: 3
void* CAnimNodeInstanceBase::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAnimNodeInstanceBase>::CastTo(
		CAnimNodeInstanceBase* derived,
		ClassID baseTypeInfo);  // 15
} /* size: 0, inline expansions: 3 (206 bytes) */

// <010870A4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:15
// function calls: 3
const void* CAnimNodeInstanceBase::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAnimNodeInstanceBase>::CastTo(
		const CAnimNodeInstanceBase* derived,
		ClassID baseTypeInfo);  // 15
} /* size: 0, inline expansions: 3 (206 bytes) */

// <01086911> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:19
// function calls: 32
void CAnimNodeInstanceBase::CAnimNodeInstanceBase(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
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
} /* size: 189, inline expansions: 32 (668 bytes) */

// <010868D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:19
void CAnimNodeInstanceBase::CAnimNodeInstanceBase(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

// <01086876> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:28
// function call: 1
void CAnimNodeInstanceBase::GetSourceNode()
{
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::Get(); // 30
} /* size: 9, inline expansions: 1 (0 bytes) */

// <010867DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:34
// function calls: 2
void CAnimNodeInstanceBase::GetName()
{
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator->(); // 36
	CAnimNodeBase::GetName(); // 36
} /* size: 34, inline expansions: 2 (15 bytes) */

// <010866F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:40
// function calls: 3
void CAnimNodeInstanceBase::GetNodeID()
{
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator->(); // 42
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 157
	CAnimNodeBase::GetNodeID(); // 42
} /* size: 97, inline expansions: 3 (14 bytes) */

// <0108663F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:46
// function calls: 2
void CAnimNodeInstanceBase::IsActive()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 48
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 48
} /* size: 50, inline expansions: 2 (0 bytes) */

// <010865C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:52
// function call: 1
void CAnimNodeInstanceBase::IsWaning()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 54
} /* size: 17, inline expansions: 1 (0 bytes) */

// <01086553> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:58
// function call: 1
void CAnimNodeInstanceBase::IsReset()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 60
} /* size: 17, inline expansions: 1 (0 bytes) */

// <010864EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:64
// function call: 1
void CAnimNodeInstanceBase::GetChildCount()
{
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator->(); // 66
} /* size: 14, inline expansions: 1 (4 bytes) */

// <0108645E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:70
// function call: 1
void CAnimNodeInstanceBase::GetChildID(int childIndex)
{
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator->(); // 72
} /* size: 71, inline expansions: 1 (4 bytes) */

// <010863CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:76
// function call: 1
void CAnimNodeInstanceBase::IsChildConnectionActive(int childIndex)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 78
} /* size: 23, inline expansions: 1 (0 bytes) */

// <01086340> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:82
// function call: 1
void CAnimNodeInstanceBase::IsChildConnectionWaning(int childIndex)
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 84
} /* size: 23, inline expansions: 1 (0 bytes) */

// <0109382D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:88
// function calls: 4
void CAnimNodeInstanceBase::GetPoseHandle()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 90
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 90
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 92
	CAnimNodeInstanceBase::GetPoseHandle(); // 88
} /* size: 85, inline expansions: 4 (17 bytes) */

// <01086327> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:88
void CAnimNodeInstanceBase::GetPoseHandle()
{
} /* size: 0 */

// <01086176> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:99
// function calls: 4
void CAnimNodeInstanceBase::GetRootMotion()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 101
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			CMotionTransform &);  // 101
} /* size: 0, inline expansions: 4 (141 bytes) */

// <01086112> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:105
// function call: 1
void CAnimNodeInstanceBase::GetCycle()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 107
} /* size: 21, inline expansions: 1 (0 bytes) */

// <010860AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:111
// function call: 1
void CAnimNodeInstanceBase::GetDuration()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 113
} /* size: 21, inline expansions: 1 (0 bytes) */

// <01086024> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:117
// function call: 1
void CAnimNodeInstanceBase::GetTotalMovement()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 119
} /* size: 75, inline expansions: 1 (0 bytes) */

// <01085F8F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:123
// function call: 1
void CAnimNodeInstanceBase::GetRemainingMovement()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 125
} /* size: 83, inline expansions: 1 (0 bytes) */

// <01085F2B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:129
// function call: 1
void CAnimNodeInstanceBase::IsFinished()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 131
} /* size: 21, inline expansions: 1 (0 bytes) */

// <01085EB5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:135
// function call: 1
void CAnimNodeInstanceBase::GetLastUpdateID()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 137
} /* size: 17, inline expansions: 1 (0 bytes) */

// <01085D0B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:141
// variables: 2
// function calls: 3
void CAnimNodeInstanceBase::GetFootTrajectory(int nFootIndex)
{
	CMotionTransform localToWorld; // 143
	CStrideStatus strideStatus; // 145
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 143
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 145
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 146
} /* size: 209, variables: 2, inline expansions: 3 (0 bytes) */

// <01085AAF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:152
// variables: 2
// function calls: 6
void CAnimNodeInstanceBase::GetFootCycle(int nFootIndex)
{
	CMotionTransform localToWorld; // 154
	CStrideStatus strideStatus; // 156
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 154
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 156
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 157
	CCycleBase::GetValue(); // 126
	CCycleBase::CCycleBase(
			float flCycle);  // 126
	CFootCycle::CFootCycle(
			const CFootCycle& rhs);  // 159
} /* size: 197, variables: 2, inline expansions: 6 (26 bytes) */

// <0108590D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:163
// variables: 2
// function calls: 3
void CAnimNodeInstanceBase::GetFootStage(int nFootIndex)
{
	CMotionTransform localToWorld; // 165
	CStrideStatus strideStatus; // 167
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 165
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 167
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 168
} /* size: 180, variables: 2, inline expansions: 3 (0 bytes) */

// <0108576B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:174
// variables: 2
// function calls: 3
void CAnimNodeInstanceBase::IsTriggeringPark(int nFootIndex)
{
	CMotionTransform localToWorld; // 176
	CStrideStatus strideStatus; // 178
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 176
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 178
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 179
} /* size: 181, variables: 2, inline expansions: 3 (0 bytes) */

// <010855C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancebase.cpp:185
// variables: 2
// function calls: 3
void CAnimNodeInstanceBase::IsTriggeringTrajectoryReset(int nFootIndex)
{
	CMotionTransform localToWorld; // 187
	CStrideStatus strideStatus; // 189
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 187
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator->(); // 189
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 190
} /* size: 181, variables: 2, inline expansions: 3 (0 bytes) */

