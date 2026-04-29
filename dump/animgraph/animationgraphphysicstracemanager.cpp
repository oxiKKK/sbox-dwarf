
//
// animgraph/animationgraphphysicstracemanager.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//

// <00E5DAA1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:6
// function calls: 17
void CAnimationGraphPhysicsTraceManager::CAnimationGraphPhysicsTraceManager(const CAnimGraphInstanceContextPtr& pGraphContext)
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 7
	IAnimationGraphPhysicsTraceManager::IAnimationGraphPhysicsTraceManager(); // 7
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphInstanceContext>(CAnimGraphInstanceContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphInstanceContext>(CAnimGraphInstanceContext* pObj); // 370
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator=(
			CAnimGraphInstanceContext* pObj);  // 406
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>& other);  // 7
} /* size: 0, inline expansions: 17 (0 bytes) */

// <00E5DA7C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:6
void CAnimationGraphPhysicsTraceManager::CAnimationGraphPhysicsTraceManager(const CAnimGraphInstanceContextPtr& pGraphContext)
{
} /* size: 0 */

// <00E8A93C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:13
// function calls: 3
void CAnimationGraphPhysicsTraceManager::GetTraceRequestCount()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 15
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 48
	CAnimGraphInstanceContext::GetInstanceData(); // 15
} /* size: 30, inline expansions: 3 (8 bytes) */

// <00E5DA63> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:13
void CAnimationGraphPhysicsTraceManager::GetTraceRequestCount()
{
} /* size: 0 */

// <00E8AA09> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:19
// function calls: 3
void CAnimationGraphPhysicsTraceManager::GetTraceRequest(int index)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 21
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 48
	CAnimGraphInstanceContext::GetInstanceData(); // 21
} /* size: 40, inline expansions: 3 (8 bytes) */

// <00E5DA3E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:19
void CAnimationGraphPhysicsTraceManager::GetTraceRequest(int index)
{
} /* size: 0 */

// <00E8AAEB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:25
// function calls: 4
void CAnimationGraphPhysicsTraceManager::GetTraceRequest(TraceRequestID requestID)
{
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 48
	CAnimGraphInstanceContext::GetInstanceData(); // 27
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 27
	TraceRequestID::TraceRequestID(
			const TraceRequestID& rhs);  // 27
} /* size: 85, inline expansions: 4 (13 bytes) */

// <00E5DA19> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:25
void CAnimationGraphPhysicsTraceManager::GetTraceRequest(TraceRequestID requestID)
{
} /* size: 0 */

// <00E5D85B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:43
// variables: 3
// function calls: 4
void CAnimationGraphPhysicsTraceManager::ClearDirtyTraceRequests()
{
	CTraceRequestList& requestList; // 45
	int requestCount; // 46
	{
		int i; // 48
		CTraceRequest::SetIsDirty(
				bool bValue);  // 50
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 45
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 48
	CAnimGraphInstanceContext::GetInstanceData(); // 45
} /* size: 89, variables: 2, inline expansions: 3 (8 bytes) */

