
//
// public/tier0/tsfastpushqueue.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//
//	functions: 187
//	classes: 24
//

// <0016B5F8> ../public/tier0/tsfastpushqueue.h:32
// member functions: 14
// member variables: 2
// class size: 2
class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult> {
	/* ../public/tier0/tsfastpushqueue.h:40 */
	enum {
		CAN_REMOVE = 1,
	};
	/* ../public/tier0/tsfastpushqueue.h:35 */
	void _CTSFastPushQueueIterateResult(_CTSFastPushQueueIterateResult<TSFPQ_IterateResult>* , TSFPQ_IterateResult);
	/* ../public/tier0/tsfastpushqueue.h:41 */
	bool Continue(const _CTSFastPushQueueIterateResult<TSFPQ_IterateResult>* );
	/* ../public/tier0/tsfastpushqueue.h:42 */
	bool Remove(const _CTSFastPushQueueIterateResult<TSFPQ_IterateResult>* );
private:
	bool m_bContinue; /* 0 1 */
	bool m_bRemove; /* 1 1 */
	/* ../public/tier0/tsfastpushqueue.h:38 */
	_CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<ConstantBuffer_t, CRenderDeviceBase::TryRecyclingPooledConstantBuffers()::<lambda(ConstantBuffer_t*)>&>(ConstantBuffer_t* , class& );
	/* ../public/tier0/tsfastpushqueue.h:38 */
	_CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<ConstantBuffer_t, CRenderDeviceBase::OnPresentCompleted(SwapChainHandle_t, int, CDeviceFence*)::<lambda(ConstantBuffer_t*)>&>(ConstantBuffer_t* , class& );
	/* ../public/tier0/tsfastpushqueue.h:38 */
	_CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<ConstantBuffer_t, CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)>&>(ConstantBuffer_t* , class& );
	/* ../public/tier0/tsfastpushqueue.h:38 */
	_CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<ConstantBuffer_t, CRenderDeviceBase::ShutdownDynamicConstantBufferPools()::<lambda(ConstantBuffer_t*)>&>(ConstantBuffer_t* , class& );
	void _CTSFastPushQueueIterateResult(class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult> *, enum TSFPQ_IterateResult); /* linkage=_ZN30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultEC4ES0_ */
	bool Continue(const class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult>  *); /* linkage=_ZNK30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultE8ContinueEv */
	bool Remove(const class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult>  *); /* linkage=_ZNK30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultE6RemoveEv */
	class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<CEventListNode, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&>(class CEventListNode *, class  &); /* linkage=_ZN30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultE11CallFunctorI14CEventListNodeRZN21CTSFastPushQueue_BaseIS3_S3_S3_XadL_ZNS3_7m_pNextEEEE6RemoveEPS3_EUlS6_E_EES1_PT_OT0_ */
	class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<CFiber, CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)>&>(class CFiber *, class  &); /* linkage=_ZN30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultE11CallFunctorI6CFiberRZN21CTSFastPushQueue_BaseIS3_S3_S3_XadL_ZNS3_7m_pNextEEEE6RemoveEPS3_EUlS6_E_EES1_PT_OT0_ */
	class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<CFiber, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(class CFiber *, class  &); /* linkage=_ZN30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultE11CallFunctorI6CFiberRZN13CFiberJobPool18GetWaitingFiberJobEPbEUlPS3_E2_EES1_PT_OT0_ */
	class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<CFiber, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(class CFiber *, class  &); /* linkage=_ZN30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultE11CallFunctorI6CFiberRZN13CFiberJobPool18GetWaitingFiberJobEPbEUlPS3_E1_EES1_PT_OT0_ */
};

// <00151A12> ../public/tier0/tsfastpushqueue.h:32
// member functions: 15
// member variables: 2
// class size: 2
class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult> {
	/* ../public/tier0/tsfastpushqueue.h:40 */
	enum {
		CAN_REMOVE = 1,
	};
	/* ../public/tier0/tsfastpushqueue.h:35 */
	void _CTSFastPushQueueIterateResult(_CTSFastPushQueueIterateResult<TSFPQ_IterateResult>* , TSFPQ_IterateResult);
	/* ../public/tier0/tsfastpushqueue.h:41 */
	bool Continue(const _CTSFastPushQueueIterateResult<TSFPQ_IterateResult>* );
	/* ../public/tier0/tsfastpushqueue.h:42 */
	bool Remove(const _CTSFastPushQueueIterateResult<TSFPQ_IterateResult>* );
private:
	bool m_bContinue; /* 0 1 */
	bool m_bRemove; /* 1 1 */
	/* ../public/tier0/tsfastpushqueue.h:38 */
	_CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<CEventListNode, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&>(CEventListNode* , class& );
	/* ../public/tier0/tsfastpushqueue.h:38 */
	_CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<CFiber, CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)>&>(CFiber* , class& );
	/* ../public/tier0/tsfastpushqueue.h:38 */
	_CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<CEventListNode, CEventRWLock::UnlockWrite_LockForRead(CEventListNode&)::<lambda(CEventListNode*)>&>(CEventListNode* , class& );
	/* ../public/tier0/tsfastpushqueue.h:38 */
	_CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<CFiber, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(CFiber* , class& );
	/* ../public/tier0/tsfastpushqueue.h:38 */
	_CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<CFiber, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(CFiber* , class& );
	void _CTSFastPushQueueIterateResult(class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult> *, enum TSFPQ_IterateResult); /* linkage=_ZN30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultEC4ES0_ */
	bool Continue(const class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult>  *); /* linkage=_ZNK30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultE8ContinueEv */
	bool Remove(const class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult>  *); /* linkage=_ZNK30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultE6RemoveEv */
	class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<CEventListNode, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&>(class CEventListNode *, class  &); /* linkage=_ZN30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultE11CallFunctorI14CEventListNodeRZN21CTSFastPushQueue_BaseIS3_S3_S3_XadL_ZNS3_7m_pNextEEEE6RemoveEPS3_EUlS6_E_EES1_PT_OT0_ */
	class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<CFiber, CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)>&>(class CFiber *, class  &); /* linkage=_ZN30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultE11CallFunctorI6CFiberRZN21CTSFastPushQueue_BaseIS3_S3_S3_XadL_ZNS3_7m_pNextEEEE6RemoveEPS3_EUlS6_E_EES1_PT_OT0_ */
	class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<CFiber, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(class CFiber *, class  &); /* linkage=_ZN30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultE11CallFunctorI6CFiberRZN13CFiberJobPool18GetWaitingFiberJobEPbEUlPS3_E2_EES1_PT_OT0_ */
	class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<CFiber, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(class CFiber *, class  &); /* linkage=_ZN30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultE11CallFunctorI6CFiberRZN13CFiberJobPool18GetWaitingFiberJobEPbEUlPS3_E1_EES1_PT_OT0_ */
};

// <00169B4C> ../public/tier0/tsfastpushqueue.h:32
// member functions: 12
// member variables: 2
// class size: 2
class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult> {
	/* ../public/tier0/tsfastpushqueue.h:40 */
	enum {
		CAN_REMOVE = 1,
	};
	/* ../public/tier0/tsfastpushqueue.h:35 */
	void _CTSFastPushQueueIterateResult(_CTSFastPushQueueIterateResult<TSFPQ_IterateResult>* , TSFPQ_IterateResult);
	/* ../public/tier0/tsfastpushqueue.h:41 */
	bool Continue(const _CTSFastPushQueueIterateResult<TSFPQ_IterateResult>* );
	/* ../public/tier0/tsfastpushqueue.h:42 */
	bool Remove(const _CTSFastPushQueueIterateResult<TSFPQ_IterateResult>* );
private:
	bool m_bContinue; /* 0 1 */
	bool m_bRemove; /* 1 1 */
	/* ../public/tier0/tsfastpushqueue.h:38 */
	_CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<ConstantBuffer_t, CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)>&>(ConstantBuffer_t* , class& );
	/* ../public/tier0/tsfastpushqueue.h:38 */
	_CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<ConstantBuffer_t, CRenderDeviceBase::ShutdownDynamicConstantBufferPools()::<lambda(ConstantBuffer_t*)>&>(ConstantBuffer_t* , class& );
	void _CTSFastPushQueueIterateResult(class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult> *, enum TSFPQ_IterateResult); /* linkage=_ZN30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultEC4ES0_ */
	bool Continue(const class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult>  *); /* linkage=_ZNK30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultE8ContinueEv */
	bool Remove(const class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult>  *); /* linkage=_ZNK30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultE6RemoveEv */
	class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<CEventListNode, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&>(class CEventListNode *, class  &); /* linkage=_ZN30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultE11CallFunctorI14CEventListNodeRZN21CTSFastPushQueue_BaseIS3_S3_S3_XadL_ZNS3_7m_pNextEEEE6RemoveEPS3_EUlS6_E_EES1_PT_OT0_ */
	class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<CFiber, CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)>&>(class CFiber *, class  &); /* linkage=_ZN30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultE11CallFunctorI6CFiberRZN21CTSFastPushQueue_BaseIS3_S3_S3_XadL_ZNS3_7m_pNextEEEE6RemoveEPS3_EUlS6_E_EES1_PT_OT0_ */
	class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<CFiber, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(class CFiber *, class  &); /* linkage=_ZN30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultE11CallFunctorI6CFiberRZN13CFiberJobPool18GetWaitingFiberJobEPbEUlPS3_E2_EES1_PT_OT0_ */
	class _CTSFastPushQueueIterateResult<TSFPQ_IterateResult> CallFunctor<CFiber, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(class CFiber *, class  &); /* linkage=_ZN30_CTSFastPushQueueIterateResultI19TSFPQ_IterateResultE11CallFunctorI6CFiberRZN13CFiberJobPool18GetWaitingFiberJobEPbEUlPS3_E1_EES1_PT_OT0_ */
};

// <001713CB> ../public/tier0/tsfastpushqueue.h:35
void _CTSFastPushQueueIterateResult<TSFPQ_IterateResult>::_CTSFastPushQueueIterateResult(TSFPQ_IterateResult fullResult)
{
} /* size: 0 */

// <001713A6> ../public/tier0/tsfastpushqueue.h:35
inline void _CTSFastPushQueueIterateResult<TSFPQ_IterateResult>::_CTSFastPushQueueIterateResult(TSFPQ_IterateResult fullResult)
{
} /* size: 0 */

// <00174500> ../public/tier0/tsfastpushqueue.h:38
inline void CallFunctor<ConstantBuffer_t, CRenderDeviceBase::ShutdownDynamicConstantBufferPools()::<lambda(ConstantBuffer_t*)>&>(ConstantBuffer_t* pList, class& functor)
{
} /* size: 0 */

// <0017176F> ../public/tier0/tsfastpushqueue.h:38
inline void CallFunctor<ConstantBuffer_t, CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)>&>(ConstantBuffer_t* pList, class& functor)
{
} /* size: 0 */

// <001716AB> ../public/tier0/tsfastpushqueue.h:38
inline void CallFunctor<ConstantBuffer_t, CRenderDeviceBase::OnPresentCompleted(SwapChainHandle_t, int, CDeviceFence*)::<lambda(ConstantBuffer_t*)>&>(ConstantBuffer_t* pList, class& functor)
{
} /* size: 0 */

// <001715E7> ../public/tier0/tsfastpushqueue.h:38
inline void CallFunctor<ConstantBuffer_t, CRenderDeviceBase::TryRecyclingPooledConstantBuffers()::<lambda(ConstantBuffer_t*)>&>(ConstantBuffer_t* pList, class& functor)
{
} /* size: 0 */

// <00154902> ../public/tier0/tsfastpushqueue.h:38
inline void CallFunctor<CFiber, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(CFiber* pList, class& functor)
{
} /* size: 0 */

// <00154142> ../public/tier0/tsfastpushqueue.h:38
inline void CallFunctor<CEventListNode, CEventRWLock::UnlockWrite_LockForRead(CEventListNode&)::<lambda(CEventListNode*)>&>(CEventListNode* pList, class& functor)
{
} /* size: 0 */

// <0015350D> ../public/tier0/tsfastpushqueue.h:38
inline void CallFunctor<CFiber, CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)>&>(CFiber* pList, class& functor)
{
} /* size: 0 */

// <001534AF> ../public/tier0/tsfastpushqueue.h:38
inline void CallFunctor<CEventListNode, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&>(CEventListNode* pList, class& functor)
{
} /* size: 0 */

// <001744BC> ../public/tier0/tsfastpushqueue.h:41
inline void _CTSFastPushQueueIterateResult<TSFPQ_IterateResult>::Continue()
{
} /* size: 0 */

// <001744D5> ../public/tier0/tsfastpushqueue.h:42
inline void _CTSFastPushQueueIterateResult<TSFPQ_IterateResult>::Remove()
{
} /* size: 0 */

// <0014C2C0> ../public/tier0/tsfastpushqueue.h:49
// member functions: 5
// member variable: 1
// class size: 1
class _CTSFastPushQueueIterateResult<bool> {
	/* ../public/tier0/tsfastpushqueue.h:52 */
	void _CTSFastPushQueueIterateResult(_CTSFastPushQueueIterateResult<bool>* , bool);
	/* ../public/tier0/tsfastpushqueue.h:58 */
	bool Continue(const _CTSFastPushQueueIterateResult<bool>* );
	/* ../public/tier0/tsfastpushqueue.h:59 */
	bool Remove(const _CTSFastPushQueueIterateResult<bool>* );
private:
	bool m_bContinue; /* 0 1 */
	/* ../public/tier0/tsfastpushqueue.h:57 */
	enum {
		CAN_REMOVE = 0,
	};
	/* ../public/tier0/tsfastpushqueue.h:55 */
	_CTSFastPushQueueIterateResult<bool> CallFunctor<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&>(TrackedReadLock_t* , class& );
	/* ../public/tier0/tsfastpushqueue.h:55 */
	_CTSFastPushQueueIterateResult<bool> CallFunctor<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&>(TrackedReadLock_t* , class& );
};

// <0029D963> ../public/tier0/tsfastpushqueue.h:49
// member functions: 5
// member variable: 1
// class size: 1
class _CTSFastPushQueueIterateResult<bool> {
	/* ../public/tier0/tsfastpushqueue.h:52 */
	void _CTSFastPushQueueIterateResult(_CTSFastPushQueueIterateResult<bool>* , bool);
	/* ../public/tier0/tsfastpushqueue.h:58 */
	bool Continue(const _CTSFastPushQueueIterateResult<bool>* );
	/* ../public/tier0/tsfastpushqueue.h:59 */
	bool Remove(const _CTSFastPushQueueIterateResult<bool>* );
private:
	bool m_bContinue; /* 0 1 */
	/* ../public/tier0/tsfastpushqueue.h:57 */
	enum {
		CAN_REMOVE = 0,
	};
	/* ../public/tier0/tsfastpushqueue.h:55 */
	_CTSFastPushQueueIterateResult<bool> CallFunctor<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)>&>(CBlob* , class& );
	/* ../public/tier0/tsfastpushqueue.h:55 */
	_CTSFastPushQueueIterateResult<bool> CallFunctor<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::InternalClear(CBlob*, FreeList_t*)::<lambda(CUtlMemoryPoolBase::CBlob*)>&>(CBlob* , class& );
};

// <002B1635> ../public/tier0/tsfastpushqueue.h:52
void _CTSFastPushQueueIterateResult<bool>::_CTSFastPushQueueIterateResult(bool bContinue)
{
} /* size: 0 */

// <002B1610> ../public/tier0/tsfastpushqueue.h:52
inline void _CTSFastPushQueueIterateResult<bool>::_CTSFastPushQueueIterateResult(bool bContinue)
{
} /* size: 0 */

// <002A7328> ../public/tier0/tsfastpushqueue.h:55
inline void CallFunctor<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::InternalClear(CBlob*, FreeList_t*)::<lambda(CUtlMemoryPoolBase::CBlob*)>&>(CBlob* pList, class& functor)
{
} /* size: 0 */

// <002A4BE4> ../public/tier0/tsfastpushqueue.h:55
inline void CallFunctor<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)>&>(CBlob* pList, class& functor)
{
} /* size: 0 */

// <00153621> ../public/tier0/tsfastpushqueue.h:55
inline void CallFunctor<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&>(TrackedReadLock_t* pList, class& functor)
{
} /* size: 0 */

// <001535DC> ../public/tier0/tsfastpushqueue.h:55
inline void CallFunctor<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&>(TrackedReadLock_t* pList, class& functor)
{
} /* size: 0 */

// <002B15F7> ../public/tier0/tsfastpushqueue.h:58
inline void _CTSFastPushQueueIterateResult<bool>::Continue()
{
} /* size: 0 */

// <002B15DE> ../public/tier0/tsfastpushqueue.h:59
inline void _CTSFastPushQueueIterateResult<bool>::Remove()
{
} /* size: 0 */

// <00124964> ../public/tier0/tsfastpushqueue.h:65
// member functions: 4
// class size: 1
class _CTSFastPushQueueIterateResult<void> {
	/* ../public/tier0/tsfastpushqueue.h:72 */
	bool Continue(const _CTSFastPushQueueIterateResult<void>* );
	/* ../public/tier0/tsfastpushqueue.h:73 */
	bool Remove(const _CTSFastPushQueueIterateResult<void>* );
	/* ../public/tier0/tsfastpushqueue.h:71 */
	enum {
		CAN_REMOVE = 0,
	};
	/* ../public/tier0/tsfastpushqueue.h:69 */
	_CTSFastPushQueueIterateResult<void> CallFunctor<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)>&>(FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* , class& );
	/* ../public/tier0/tsfastpushqueue.h:69 */
	_CTSFastPushQueueIterateResult<void> CallFunctor<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)>&>(FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* , class& );
};

// <0014C3D7> ../public/tier0/tsfastpushqueue.h:65
// member functions: 3
// class size: 1
class _CTSFastPushQueueIterateResult<void> {
	/* ../public/tier0/tsfastpushqueue.h:72 */
	bool Continue(const _CTSFastPushQueueIterateResult<void>* );
	/* ../public/tier0/tsfastpushqueue.h:73 */
	bool Remove(const _CTSFastPushQueueIterateResult<void>* );
	/* ../public/tier0/tsfastpushqueue.h:71 */
	enum {
		CAN_REMOVE = 0,
	};
	/* ../public/tier0/tsfastpushqueue.h:69 */
	_CTSFastPushQueueIterateResult<void> CallFunctor<CEventListNode, CFiber::ResumeJob(void*)::<lambda(CEventListNode*)>&>(CEventListNode* , class& );
};

// <0016EECE> ../public/tier0/tsfastpushqueue.h:69
inline void CallFunctor<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)>&>(FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pList, class& functor)
{
} /* size: 0 */

// <0016EE89> ../public/tier0/tsfastpushqueue.h:69
inline void CallFunctor<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)>&>(FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pList, class& functor)
{
} /* size: 0 */

// <002A73F5> ../public/tier0/tsfastpushqueue.h:69
inline void CallFunctor<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::FreeList_t*)>&>(FreeList_t* pList, class& functor)
{
} /* size: 0 */

// <002A73B0> ../public/tier0/tsfastpushqueue.h:69
inline void CallFunctor<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::CBlob*)>&>(CBlob* pList, class& functor)
{
} /* size: 0 */

// <002A3CDB> ../public/tier0/tsfastpushqueue.h:69
inline void CallFunctor<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)>&>(CBlob* pList, class& functor)
{
} /* size: 0 */

// <001541DF> ../public/tier0/tsfastpushqueue.h:69
inline void CallFunctor<CEventListNode, CFiber::ResumeJob(void*)::<lambda(CEventListNode*)>&>(CEventListNode* pList, class& functor)
{
} /* size: 0 */

// <001ACB41> ../public/tier0/tsfastpushqueue.h:72
inline void _CTSFastPushQueueIterateResult<void>::Continue()
{
} /* size: 0 */

// <001ACB28> ../public/tier0/tsfastpushqueue.h:73
inline void _CTSFastPushQueueIterateResult<void>::Remove()
{
} /* size: 0 */

// <00B8C482> ../public/tier0/tsfastpushqueue.h:76
inline void AssertIfNotPtrAligned(intp nPointerPtr)
{
} /* size: 0 */

// <021F5C95> ../public/tier0/tsfastpushqueue.h:91
// member functions: 24
// member variables: 2
// static member variable: 1
// class size: 16
class CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, &CUtlMemoryPoolBase::FreeList_t::pNext> {
protected:
	/* ../public/tier0/tsfastpushqueue.h:100 */
	volatile FreeList_t* InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, volatile FreeList_t* );
	static const volatile class FreeList_t * FreeList_t::* k_LinkedListMember; /* 0 0 */
	/* ../public/tier0/tsfastpushqueue.h:122 */
	FreeList_t* Node_GetNext(FreeList_t* );
	/* ../public/tier0/tsfastpushqueue.h:132 */
	void Node_SetNext(FreeList_t* , FreeList_t* );
	/* ../public/tier0/tsfastpushqueue.h:139 */
	FreeList_t* GetLoopbackAddress(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	/* ../public/tier0/tsfastpushqueue.h:145 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU);
	/* ../public/tier0/tsfastpushqueue.h:152 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	/* ../public/tier0/tsfastpushqueue.h:158 */
	CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU operator=(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	/* ../public/tier0/tsfastpushqueue.h:170 */
	bool IsEmpty(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	/* ../public/tier0/tsfastpushqueue.h:175 */
	bool IsPeeked(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	/* ../public/tier0/tsfastpushqueue.h:181 */
	FreeList_t* Unsafe_ReadPush(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	/* ../public/tier0/tsfastpushqueue.h:186 */
	FreeList_t* Unsafe_ReadPop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	/* ../public/tier0/tsfastpushqueue.h:192 */
	void Push(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, FreeList_t* );
	/* ../public/tier0/tsfastpushqueue.h:204 */
	void PushMultiple(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, FreeList_t* , FreeList_t* );
	/* ../public/tier0/tsfastpushqueue.h:233 */
	FreeList_t* BeginPeek(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, bool);
	/* ../public/tier0/tsfastpushqueue.h:260 */
	void EndPeek_Pop(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, FreeList_t* );
	/* ../public/tier0/tsfastpushqueue.h:294 */
	void EndPeek_Replace(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, FreeList_t* );
	/* ../public/tier0/tsfastpushqueue.h:305 */
	void EndPeek_Detach(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, FreeList_t* );
	/* ../public/tier0/tsfastpushqueue.h:339 */
	void EndPeek_Rotate(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, FreeList_t* );
	/* ../public/tier0/tsfastpushqueue.h:362 */
	FreeList_t* BeginPeek_Lock(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, volatile FreeList_t** );
	/* ../public/tier0/tsfastpushqueue.h:389 */
	void EndPeek_Unlock(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, FreeList_t* , volatile FreeList_t** , void ()(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeLis);
	/* ../public/tier0/tsfastpushqueue.h:412 */
	FreeList_t* Pop(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, bool);
	/* ../public/tier0/tsfastpushqueue.h:441 */
	FreeList_t* Detach(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU);
	/* ../public/tier0/tsfastpushqueue.h:449 */
	void Push_Head(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, FreeList_t* );
	/* ../public/tier0/tsfastpushqueue.h:688 */
	bool Remove(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, FreeList_t* );
	volatile volatile class FreeList_t * m_pPush; /* 0 8 */
	volatile volatile class FreeList_t * m_pPop; /* 8 8 */
} __attribute__((__aligned__(8)));

// <021F60A5> ../public/tier0/tsfastpushqueue.h:91
// member functions: 24
// member variables: 2
// static member variable: 1
// class size: 16
class CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryPoolBase::CBlob::m_pNext> {
protected:
	/* ../public/tier0/tsfastpushqueue.h:100 */
	volatile CBlob* InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, volatile CBlob* );
	static const volatile class CBlob * CBlob::* k_LinkedListMember; /* 0 0 */
	/* ../public/tier0/tsfastpushqueue.h:122 */
	CBlob* Node_GetNext(CBlob* );
	/* ../public/tier0/tsfastpushqueue.h:132 */
	void Node_SetNext(CBlob* , CBlob* );
	/* ../public/tier0/tsfastpushqueue.h:139 */
	CBlob* GetLoopbackAddress(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryP);
	/* ../public/tier0/tsfastpushqueue.h:145 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas);
	/* ../public/tier0/tsfastpushqueue.h:152 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryP);
	/* ../public/tier0/tsfastpushqueue.h:158 */
	CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas operator=(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryP);
	/* ../public/tier0/tsfastpushqueue.h:170 */
	bool IsEmpty(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryP);
	/* ../public/tier0/tsfastpushqueue.h:175 */
	bool IsPeeked(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryP);
	/* ../public/tier0/tsfastpushqueue.h:181 */
	CBlob* Unsafe_ReadPush(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryP);
	/* ../public/tier0/tsfastpushqueue.h:186 */
	CBlob* Unsafe_ReadPop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryP);
	/* ../public/tier0/tsfastpushqueue.h:192 */
	void Push(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, CBlob* );
	/* ../public/tier0/tsfastpushqueue.h:204 */
	void PushMultiple(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, CBlob* , CBlob* );
	/* ../public/tier0/tsfastpushqueue.h:233 */
	CBlob* BeginPeek(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, bool);
	/* ../public/tier0/tsfastpushqueue.h:260 */
	void EndPeek_Pop(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, CBlob* );
	/* ../public/tier0/tsfastpushqueue.h:294 */
	void EndPeek_Replace(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, CBlob* );
	/* ../public/tier0/tsfastpushqueue.h:305 */
	void EndPeek_Detach(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, CBlob* );
	/* ../public/tier0/tsfastpushqueue.h:339 */
	void EndPeek_Rotate(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, CBlob* );
	/* ../public/tier0/tsfastpushqueue.h:362 */
	CBlob* BeginPeek_Lock(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, volatile CBlob** );
	/* ../public/tier0/tsfastpushqueue.h:389 */
	void EndPeek_Unlock(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, CBlob* , volatile CBlob** , void ()(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemor);
	/* ../public/tier0/tsfastpushqueue.h:412 */
	CBlob* Pop(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, bool);
	/* ../public/tier0/tsfastpushqueue.h:441 */
	CBlob* Detach(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas);
	/* ../public/tier0/tsfastpushqueue.h:449 */
	void Push_Head(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, CBlob* );
	/* ../public/tier0/tsfastpushqueue.h:688 */
	bool Remove(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, CBlob* );
	volatile volatile class CBlob * m_pPush; /* 0 8 */
	volatile volatile class CBlob * m_pPop; /* 8 8 */
} __attribute__((__aligned__(8)));

// <0015A986> ../public/tier0/tsfastpushqueue.h:91
// member functions: 55
// member variables: 2
// static member variable: 1
// class size: 16
class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> {
	/* ../public/tier0/tsfastpushqueue.h:113 */
	enum {
		END_OF_DETACHED_LIST = 1,
	};
protected:
	/* ../public/tier0/tsfastpushqueue.h:100 */
	volatile ConstantBuffer_t* InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , volatile ConstantBuffer_t* );
	static const volatile class ConstantBuffer_t * ConstantBuffer_t::* k_LinkedListMember; /* 0 0 */
	/* ../public/tier0/tsfastpushqueue.h:122 */
	ConstantBuffer_t* Node_GetNext(ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:132 */
	void Node_SetNext(ConstantBuffer_t* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:139 */
	ConstantBuffer_t* GetLoopbackAddress(const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:145 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:152 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>& );
	/* ../public/tier0/tsfastpushqueue.h:158 */
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>& operator=(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>& );
	/* ../public/tier0/tsfastpushqueue.h:170 */
	bool IsEmpty(const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:175 */
	bool IsPeeked(const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:181 */
	ConstantBuffer_t* Unsafe_ReadPush(const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:186 */
	ConstantBuffer_t* Unsafe_ReadPop(const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:192 */
	void Push(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:204 */
	void PushMultiple(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:233 */
	ConstantBuffer_t* BeginPeek(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , bool);
	/* ../public/tier0/tsfastpushqueue.h:260 */
	void EndPeek_Pop(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:294 */
	void EndPeek_Replace(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:305 */
	void EndPeek_Detach(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:339 */
	void EndPeek_Rotate(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:362 */
	ConstantBuffer_t* BeginPeek_Lock(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , volatile ConstantBuffer_t** );
	/* ../public/tier0/tsfastpushqueue.h:389 */
	void EndPeek_Unlock(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* , volatile ConstantBuffer_t** , void ()(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , );
	/* ../public/tier0/tsfastpushqueue.h:412 */
	ConstantBuffer_t* Pop(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , bool);
	/* ../public/tier0/tsfastpushqueue.h:441 */
	ConstantBuffer_t* Detach(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:449 */
	void Push_Head(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:688 */
	bool Remove(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	volatile volatile class ConstantBuffer_t * m_pPush; /* 0 8 */
	volatile volatile class ConstantBuffer_t * m_pPop; /* 8 8 */
	/* ../public/tier0/tsfastpushqueue.h:502 */
	ConstantBuffer_t* IterateDetachedList<CRenderDeviceBase::TryRecyclingPooledConstantBuffers()::<lambda(ConstantBuffer_t*)>&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>::IterateDetachedList<CRenderDeviceBase::TryRecyclingPooledConstantBuffers()::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t*, CRenderDeviceBase::TryRecyclingPooledConstantBuffers()::<lambda(ConstantBuffer_t*)>&&)::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:502 */
	ConstantBuffer_t* IterateDetachedList<CRenderDeviceBase::OnPresentCompleted(SwapChainHandle_t, int, CDeviceFence*)::<lambda(ConstantBuffer_t*)>&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>::IterateDetachedList<CRenderDeviceBase::OnPresentCompleted(SwapChainHandle_t, int, CDeviceFence*)::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t*, CRenderDeviceBase::OnPresentCompleted(SwapChainHandle_t, int, CDeviceFence*)::<lambda(ConstantBuffer_t*)>&&)::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:502 */
	ConstantBuffer_t* IterateDetachedList<CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)>&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>::IterateDetachedList<CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t*, CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)>&&)::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:502 */
	ConstantBuffer_t* IterateDetachedList<CRenderDeviceBase::ShutdownDynamicConstantBufferPools()::<lambda(ConstantBuffer_t*)>, CRenderDeviceBase::ShutdownDynamicConstantBufferPools()::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:545 */
	ConstantBuffer_t* IterateDetachedList<CRenderDeviceBase::TryRecyclingPooledConstantBuffers()::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* , class& );
	/* ../public/tier0/tsfastpushqueue.h:545 */
	ConstantBuffer_t* IterateDetachedList<CRenderDeviceBase::OnPresentCompleted(SwapChainHandle_t, int, CDeviceFence*)::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* , class& );
	/* ../public/tier0/tsfastpushqueue.h:545 */
	ConstantBuffer_t* IterateDetachedList<CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* , class& );
	volatile class ConstantBuffer_t  * InternalGetNextPopItemFromActiveList(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, volatile class ConstantBuffer_t  *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE36InternalGetNextPopItemFromActiveListEPVS0_ */
	class ConstantBuffer_t * Node_GetNext(class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE12Node_GetNextEPS0_ */
	void Node_SetNext(class ConstantBuffer_t *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE12Node_SetNextEPS0_S2_ */
	class ConstantBuffer_t * GetLoopbackAddress(const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE18GetLoopbackAddressEv */
	void CTSFastPushQueue_Base(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEEC4Ev */
	void CTSFastPushQueue_Base(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  &); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEEC4ERKS1_ */
	class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> & operator=(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  &); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEEaSERKS1_ */
	bool IsEmpty(const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE7IsEmptyEv */
	bool IsPeeked(const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE8IsPeekedEv */
	class ConstantBuffer_t * Unsafe_ReadPush(const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE15Unsafe_ReadPushEv */
	class ConstantBuffer_t * Unsafe_ReadPop(const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE14Unsafe_ReadPopEv */
	void Push(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE4PushEPS0_ */
	void PushMultiple(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE12PushMultipleEPS0_S2_ */
	class ConstantBuffer_t * BeginPeek(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, bool); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE9BeginPeekEb */
	void EndPeek_Pop(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE11EndPeek_PopEPS0_ */
	void EndPeek_Replace(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE15EndPeek_ReplaceEPS0_ */
	void EndPeek_Detach(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE14EndPeek_DetachEPS0_ */
	void EndPeek_Rotate(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE14EndPeek_RotateEPS0_ */
	class ConstantBuffer_t * BeginPeek_Lock(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, volatile class ConstantBuffer_t *  *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE14BeginPeek_LockEPVPS0_ */
	void EndPeek_Unlock(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *, volatile class ConstantBuffer_t *  *, void ()(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE14EndPeek_UnlockEPS0_PVS2_MS1_FvS2_E */
	class ConstantBuffer_t * Pop(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, bool); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE3PopEb */
	class ConstantBuffer_t * Detach(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE6DetachEv */
	void Push_Head(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE9Push_HeadEPS0_ */
	bool Remove(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE6RemoveEPS0_ */
} __attribute__((__aligned__(8)));

// <0015C70F> ../public/tier0/tsfastpushqueue.h:91
// member functions: 27
// member variables: 2
// static member variable: 1
// class size: 16
class CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, &CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>::m_pNext> {
	/* ../public/tier0/tsfastpushqueue.h:113 */
	enum {
		END_OF_DETACHED_LIST = 1,
	};
protected:
	/* ../public/tier0/tsfastpushqueue.h:100 */
	volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	static const volatile class FencedWaitingList_t<CPipelineFence, ConstantBuffer_t> * FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>:: k_LinkedListMember; /* 0 0 */
	/* ../public/tier0/tsfastpushqueue.h:122 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* Node_GetNext(FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:132 */
	void Node_SetNext(FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* , FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:139 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* GetLoopbackAddress(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::);
	/* ../public/tier0/tsfastpushqueue.h:145 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced);
	/* ../public/tier0/tsfastpushqueue.h:152 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::);
	/* ../public/tier0/tsfastpushqueue.h:158 */
	CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced operator=(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::);
	/* ../public/tier0/tsfastpushqueue.h:170 */
	bool IsEmpty(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::);
	/* ../public/tier0/tsfastpushqueue.h:175 */
	bool IsPeeked(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::);
	/* ../public/tier0/tsfastpushqueue.h:181 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* Unsafe_ReadPush(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::);
	/* ../public/tier0/tsfastpushqueue.h:186 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* Unsafe_ReadPop(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::);
	/* ../public/tier0/tsfastpushqueue.h:192 */
	void Push(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:204 */
	void PushMultiple(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* , FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:233 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* BeginPeek(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, bool);
	/* ../public/tier0/tsfastpushqueue.h:260 */
	void EndPeek_Pop(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:294 */
	void EndPeek_Replace(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:305 */
	void EndPeek_Detach(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:339 */
	void EndPeek_Rotate(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:362 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* BeginPeek_Lock(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>** );
	/* ../public/tier0/tsfastpushqueue.h:389 */
	void EndPeek_Unlock(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* , volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>** , void ()(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase);
	/* ../public/tier0/tsfastpushqueue.h:412 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* Pop(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, bool);
	/* ../public/tier0/tsfastpushqueue.h:441 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* Detach(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced);
	/* ../public/tier0/tsfastpushqueue.h:449 */
	void Push_Head(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:688 */
	bool Remove(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	volatile volatile class FencedWaitingList_t<CPipelineFence, ConstantBuffer_t> * m_pPush; /* 0 8 */
	volatile volatile class FencedWaitingList_t<CPipelineFence, ConstantBuffer_t> * m_pPop; /* 8 8 */
	/* ../public/tier0/tsfastpushqueue.h:502 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)>&, CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>,& CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>::m_pNext>::IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)> >(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*, CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)>&&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)> >(FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:420 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* ConditionalPop<CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FencedPop(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)> >(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, class& );
	/* ../public/tier0/tsfastpushqueue.h:545 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)> >(FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* , class& );
} __attribute__((__aligned__(8)));

// <0015CD63> ../public/tier0/tsfastpushqueue.h:91
// member functions: 27
// member variables: 2
// static member variable: 1
// class size: 16
class CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, &CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>::m_pNext> {
	/* ../public/tier0/tsfastpushqueue.h:113 */
	enum {
		END_OF_DETACHED_LIST = 1,
	};
protected:
	/* ../public/tier0/tsfastpushqueue.h:100 */
	volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	static const volatile class FencedWaitingList_t<CDeviceFence, ConstantBuffer_t> * FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>::* k_LinkedListMember; /* 0 0 */
	/* ../public/tier0/tsfastpushqueue.h:122 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* Node_GetNext(FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:132 */
	void Node_SetNext(FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* , FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:139 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* GetLoopbackAddress(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe);
	/* ../public/tier0/tsfastpushqueue.h:145 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa);
	/* ../public/tier0/tsfastpushqueue.h:152 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe);
	/* ../public/tier0/tsfastpushqueue.h:158 */
	CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa operator=(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe);
	/* ../public/tier0/tsfastpushqueue.h:170 */
	bool IsEmpty(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe);
	/* ../public/tier0/tsfastpushqueue.h:175 */
	bool IsPeeked(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe);
	/* ../public/tier0/tsfastpushqueue.h:181 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* Unsafe_ReadPush(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe);
	/* ../public/tier0/tsfastpushqueue.h:186 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* Unsafe_ReadPop(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe);
	/* ../public/tier0/tsfastpushqueue.h:192 */
	void Push(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:204 */
	void PushMultiple(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* , FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:233 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* BeginPeek(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, bool);
	/* ../public/tier0/tsfastpushqueue.h:260 */
	void EndPeek_Pop(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:294 */
	void EndPeek_Replace(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:305 */
	void EndPeek_Detach(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:339 */
	void EndPeek_Rotate(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:362 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* BeginPeek_Lock(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>** );
	/* ../public/tier0/tsfastpushqueue.h:389 */
	void EndPeek_Unlock(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* , volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>** , void ()(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::);
	/* ../public/tier0/tsfastpushqueue.h:412 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* Pop(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, bool);
	/* ../public/tier0/tsfastpushqueue.h:441 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* Detach(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa);
	/* ../public/tier0/tsfastpushqueue.h:449 */
	void Push_Head(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:688 */
	bool Remove(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	volatile volatile class FencedWaitingList_t<CDeviceFence, ConstantBuffer_t> * m_pPush; /* 0 8 */
	volatile volatile class FencedWaitingList_t<CDeviceFence, ConstantBuffer_t> * m_pPop; /* 8 8 */
	/* ../public/tier0/tsfastpushqueue.h:502 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)>&, CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>,& CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>::m_pNext>::IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)> >(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*, CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)>&&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)> >(FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:420 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* ConditionalPop<CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FencedPop(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)> >(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, class& );
	/* ../public/tier0/tsfastpushqueue.h:545 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)> >(FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* , class& );
} __attribute__((__aligned__(8)));

// <009339EE> ../public/tier0/tsfastpushqueue.h:91
// member functions: 48
// member variables: 2
// static member variable: 1
// class size: 16
class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> {
protected:
	/* ../public/tier0/tsfastpushqueue.h:100 */
	volatile ConstantBuffer_t* InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , volatile ConstantBuffer_t* );
	static const volatile class ConstantBuffer_t * ConstantBuffer_t::* k_LinkedListMember; /* 0 0 */
	/* ../public/tier0/tsfastpushqueue.h:122 */
	ConstantBuffer_t* Node_GetNext(ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:132 */
	void Node_SetNext(ConstantBuffer_t* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:139 */
	ConstantBuffer_t* GetLoopbackAddress(const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:145 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:152 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>& );
	/* ../public/tier0/tsfastpushqueue.h:158 */
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>& operator=(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>& );
	/* ../public/tier0/tsfastpushqueue.h:170 */
	bool IsEmpty(const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:175 */
	bool IsPeeked(const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:181 */
	ConstantBuffer_t* Unsafe_ReadPush(const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:186 */
	ConstantBuffer_t* Unsafe_ReadPop(const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:192 */
	void Push(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:204 */
	void PushMultiple(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:233 */
	ConstantBuffer_t* BeginPeek(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , bool);
	/* ../public/tier0/tsfastpushqueue.h:260 */
	void EndPeek_Pop(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:294 */
	void EndPeek_Replace(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:305 */
	void EndPeek_Detach(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:339 */
	void EndPeek_Rotate(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:362 */
	ConstantBuffer_t* BeginPeek_Lock(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , volatile ConstantBuffer_t** );
	/* ../public/tier0/tsfastpushqueue.h:389 */
	void EndPeek_Unlock(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* , volatile ConstantBuffer_t** , void ()(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , );
	/* ../public/tier0/tsfastpushqueue.h:412 */
	ConstantBuffer_t* Pop(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , bool);
	/* ../public/tier0/tsfastpushqueue.h:441 */
	ConstantBuffer_t* Detach(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:449 */
	void Push_Head(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:688 */
	bool Remove(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	volatile volatile class ConstantBuffer_t * m_pPush; /* 0 8 */
	volatile volatile class ConstantBuffer_t * m_pPop; /* 8 8 */
	volatile class ConstantBuffer_t  * InternalGetNextPopItemFromActiveList(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, volatile class ConstantBuffer_t  *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE36InternalGetNextPopItemFromActiveListEPVS0_ */
	class ConstantBuffer_t * Node_GetNext(class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE12Node_GetNextEPS0_ */
	void Node_SetNext(class ConstantBuffer_t *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE12Node_SetNextEPS0_S2_ */
	class ConstantBuffer_t * GetLoopbackAddress(const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE18GetLoopbackAddressEv */
	void CTSFastPushQueue_Base(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEEC4Ev */
	void CTSFastPushQueue_Base(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  &); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEEC4ERKS1_ */
	class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> & operator=(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  &); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEEaSERKS1_ */
	bool IsEmpty(const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE7IsEmptyEv */
	bool IsPeeked(const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE8IsPeekedEv */
	class ConstantBuffer_t * Unsafe_ReadPush(const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE15Unsafe_ReadPushEv */
	class ConstantBuffer_t * Unsafe_ReadPop(const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE14Unsafe_ReadPopEv */
	void Push(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE4PushEPS0_ */
	void PushMultiple(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE12PushMultipleEPS0_S2_ */
	class ConstantBuffer_t * BeginPeek(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, bool); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE9BeginPeekEb */
	void EndPeek_Pop(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE11EndPeek_PopEPS0_ */
	void EndPeek_Replace(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE15EndPeek_ReplaceEPS0_ */
	void EndPeek_Detach(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE14EndPeek_DetachEPS0_ */
	void EndPeek_Rotate(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE14EndPeek_RotateEPS0_ */
	class ConstantBuffer_t * BeginPeek_Lock(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, volatile class ConstantBuffer_t *  *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE14BeginPeek_LockEPVPS0_ */
	void EndPeek_Unlock(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *, volatile class ConstantBuffer_t *  *, void ()(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE14EndPeek_UnlockEPS0_PVS2_MS1_FvS2_E */
	class ConstantBuffer_t * Pop(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, bool); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE3PopEb */
	class ConstantBuffer_t * Detach(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE6DetachEv */
	void Push_Head(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE9Push_HeadEPS0_ */
	bool Remove(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE6RemoveEPS0_ */
} __attribute__((__aligned__(8)));

// <0001DF11> ../public/tier0/tsfastpushqueue.h:91
// member functions: 51
// member variables: 2
// static member variable: 1
// class size: 16
class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> {
protected:
	/* ../public/tier0/tsfastpushqueue.h:100 */
	volatile CEventListNode* InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , volatile CEventListNode* );
	static const volatile class CEventListNode * CEventListNode::* k_LinkedListMember; /* 0 0 */
	/* ../public/tier0/tsfastpushqueue.h:122 */
	CEventListNode* Node_GetNext(CEventListNode* );
	/* ../public/tier0/tsfastpushqueue.h:132 */
	void Node_SetNext(CEventListNode* , CEventListNode* );
	/* ../public/tier0/tsfastpushqueue.h:139 */
	CEventListNode* GetLoopbackAddress(const CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:145 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:152 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , const CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>& );
	/* ../public/tier0/tsfastpushqueue.h:158 */
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>& operator=(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , const CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>& );
	/* ../public/tier0/tsfastpushqueue.h:170 */
	bool IsEmpty(const CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:175 */
	bool IsPeeked(const CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:181 */
	CEventListNode* Unsafe_ReadPush(const CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:186 */
	CEventListNode* Unsafe_ReadPop(const CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:192 */
	void Push(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventListNode* );
	/* ../public/tier0/tsfastpushqueue.h:204 */
	void PushMultiple(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventListNode* , CEventListNode* );
	/* ../public/tier0/tsfastpushqueue.h:233 */
	CEventListNode* BeginPeek(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , bool);
	/* ../public/tier0/tsfastpushqueue.h:260 */
	void EndPeek_Pop(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventListNode* );
	/* ../public/tier0/tsfastpushqueue.h:294 */
	void EndPeek_Replace(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventListNode* );
	/* ../public/tier0/tsfastpushqueue.h:305 */
	void EndPeek_Detach(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventListNode* );
	/* ../public/tier0/tsfastpushqueue.h:339 */
	void EndPeek_Rotate(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventListNode* );
	/* ../public/tier0/tsfastpushqueue.h:362 */
	CEventListNode* BeginPeek_Lock(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , volatile CEventListNode** );
	/* ../public/tier0/tsfastpushqueue.h:389 */
	void EndPeek_Unlock(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventListNode* , volatile CEventListNode** , void ()(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventLi);
	/* ../public/tier0/tsfastpushqueue.h:412 */
	CEventListNode* Pop(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , bool);
	/* ../public/tier0/tsfastpushqueue.h:441 */
	CEventListNode* Detach(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:449 */
	void Push_Head(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventListNode* );
	/* ../public/tier0/tsfastpushqueue.h:688 */
	bool Remove(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventListNode* );
	volatile volatile class CEventListNode * m_pPush; /* 0 8 */
	volatile volatile class CEventListNode * m_pPop; /* 8 8 */
	volatile class CEventListNode  * InternalGetNextPopItemFromActiveList(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, volatile class CEventListNode  *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE36InternalGetNextPopItemFromActiveListEPVS0_ */
	class CEventListNode * Node_GetNext(class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE12Node_GetNextEPS0_ */
	void Node_SetNext(class CEventListNode *, class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE12Node_SetNextEPS0_S2_ */
	class CEventListNode * GetLoopbackAddress(const class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE18GetLoopbackAddressEv */
	void CTSFastPushQueue_Base(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEEC4Ev */
	void CTSFastPushQueue_Base(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, const class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>  &); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEEC4ERKS1_ */
	class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> & operator=(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, const class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>  &); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEEaSERKS1_ */
	bool IsEmpty(const class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE7IsEmptyEv */
	bool IsPeeked(const class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE8IsPeekedEv */
	class CEventListNode * Unsafe_ReadPush(const class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE15Unsafe_ReadPushEv */
	class CEventListNode * Unsafe_ReadPop(const class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE14Unsafe_ReadPopEv */
	void Push(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE4PushEPS0_ */
	void PushMultiple(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventListNode *, class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE12PushMultipleEPS0_S2_ */
	class CEventListNode * BeginPeek(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, bool); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE9BeginPeekEb */
	void EndPeek_Pop(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE11EndPeek_PopEPS0_ */
	void EndPeek_Replace(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE15EndPeek_ReplaceEPS0_ */
	void EndPeek_Detach(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE14EndPeek_DetachEPS0_ */
	void EndPeek_Rotate(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE14EndPeek_RotateEPS0_ */
	class CEventListNode * BeginPeek_Lock(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, volatile class CEventListNode *  *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE14BeginPeek_LockEPVPS0_ */
	void EndPeek_Unlock(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventListNode *, volatile class CEventListNode *  *, void ()(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventLi); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE14EndPeek_UnlockEPS0_PVS2_MS1_FvS2_E */
	class CEventListNode * Pop(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, bool); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE3PopEb */
	class CEventListNode * Detach(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE6DetachEv */
	void Push_Head(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE9Push_HeadEPS0_ */
	bool Remove(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE6RemoveEPS0_ */
	class CEventListNode * IteratePeekedList<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::IterateInPlace<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)> >(bool, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&&)::<lambda(CEventListNode*)>&>(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, bool, class CEventListNode *, class  &, class  &); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE17IteratePeekedListIRZNS1_6RemoveEPS0_EUlS3_E_RZNS1_14IterateInPlaceIS4_EEvbOT_EUlS3_E_EES3_bS3_S8_OT0_ */
	void IterateInPlace<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::IterateInPlace<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)> >(bool, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&&)::<lambda(CEventListNode*)> >(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, bool, class  &, class  &); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE14IterateInPlaceIRZNS1_6RemoveEPS0_EUlS3_E_ZNS1_14IterateInPlaceIS4_EEvbOT_EUlS3_E_EEvbS8_OT0_ */
	void IterateInPlace<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)> >(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, bool, class  &); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE14IterateInPlaceIZNS1_6RemoveEPS0_EUlS3_E_EEvbOT_ */
} __attribute__((__aligned__(8)));

// <0014CF1F> ../public/tier0/tsfastpushqueue.h:91
// member functions: 58
// member variables: 2
// static member variable: 1
// class size: 16
class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> {
	/* ../public/tier0/tsfastpushqueue.h:113 */
	enum {
		END_OF_DETACHED_LIST = 1,
	};
protected:
	/* ../public/tier0/tsfastpushqueue.h:100 */
	volatile CEventListNode* InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , volatile CEventListNode* );
	static const volatile class CEventListNode * CEventListNode::* k_LinkedListMember; /* 0 0 */
	/* ../public/tier0/tsfastpushqueue.h:122 */
	CEventListNode* Node_GetNext(CEventListNode* );
	/* ../public/tier0/tsfastpushqueue.h:132 */
	void Node_SetNext(CEventListNode* , CEventListNode* );
	/* ../public/tier0/tsfastpushqueue.h:139 */
	CEventListNode* GetLoopbackAddress(const CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:145 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:152 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , const CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>& );
	/* ../public/tier0/tsfastpushqueue.h:158 */
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>& operator=(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , const CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>& );
	/* ../public/tier0/tsfastpushqueue.h:170 */
	bool IsEmpty(const CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:175 */
	bool IsPeeked(const CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:181 */
	CEventListNode* Unsafe_ReadPush(const CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:186 */
	CEventListNode* Unsafe_ReadPop(const CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:192 */
	void Push(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventListNode* );
	/* ../public/tier0/tsfastpushqueue.h:204 */
	void PushMultiple(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventListNode* , CEventListNode* );
	/* ../public/tier0/tsfastpushqueue.h:233 */
	CEventListNode* BeginPeek(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , bool);
	/* ../public/tier0/tsfastpushqueue.h:260 */
	void EndPeek_Pop(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventListNode* );
	/* ../public/tier0/tsfastpushqueue.h:294 */
	void EndPeek_Replace(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventListNode* );
	/* ../public/tier0/tsfastpushqueue.h:305 */
	void EndPeek_Detach(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventListNode* );
	/* ../public/tier0/tsfastpushqueue.h:339 */
	void EndPeek_Rotate(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventListNode* );
	/* ../public/tier0/tsfastpushqueue.h:362 */
	CEventListNode* BeginPeek_Lock(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , volatile CEventListNode** );
	/* ../public/tier0/tsfastpushqueue.h:389 */
	void EndPeek_Unlock(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventListNode* , volatile CEventListNode** , void ()(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventLi);
	/* ../public/tier0/tsfastpushqueue.h:412 */
	CEventListNode* Pop(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , bool);
	/* ../public/tier0/tsfastpushqueue.h:441 */
	CEventListNode* Detach(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:449 */
	void Push_Head(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventListNode* );
	/* ../public/tier0/tsfastpushqueue.h:688 */
	bool Remove(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , CEventListNode* );
	volatile volatile class CEventListNode * m_pPush; /* 0 8 */
	volatile volatile class CEventListNode * m_pPop; /* 8 8 */
	/* ../public/tier0/tsfastpushqueue.h:560 */
	CEventListNode* IteratePeekedList<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>::IterateInPlace<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)> >(bool, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&&)::<lambda(CEventListNode*)>&>(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , bool, CEventListNode* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:675 */
	void IterateInPlace<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>::IterateInPlace<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)> >(bool, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&&)::<lambda(CEventListNode*)> >(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , bool, class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:502 */
	CEventListNode* IterateDetachedList<CEventRWLock::UnlockWrite_LockForRead(CEventListNode&)::<lambda(CEventListNode*)>&, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>::IterateDetachedList<CEventRWLock::UnlockWrite_LockForRead(CEventListNode&)::<lambda(CEventListNode*)> >(CEventListNode*, CEventRWLock::UnlockWrite_LockForRead(CEventListNode&)::<lambda(CEventListNode*)>&&)::<lambda(CEventListNode*)> >(CEventListNode* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:682 */
	void IterateInPlace<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)> >(CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>* , bool, class& );
	/* ../public/tier0/tsfastpushqueue.h:502 */
	CEventListNode* IterateDetachedList<CFiber::ResumeJob(void*)::<lambda(CEventListNode*)>&, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode,& CEventListNode::m_pNext>::IterateDetachedList<CFiber::ResumeJob(void*)::<lambda(CEventListNode*)> >(CEventListNode*, CFiber::ResumeJob(void*)::<lambda(CEventListNode*)>&&)::<lambda(CEventListNode*)> >(CEventListNode* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:545 */
	CEventListNode* IterateDetachedList<CEventRWLock::UnlockWrite_LockForRead(CEventListNode&)::<lambda(CEventListNode*)> >(CEventListNode* , class& );
	/* ../public/tier0/tsfastpushqueue.h:545 */
	CEventListNode* IterateDetachedList<CFiber::ResumeJob(void*)::<lambda(CEventListNode*)> >(CEventListNode* , class& );
	volatile class CEventListNode  * InternalGetNextPopItemFromActiveList(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, volatile class CEventListNode  *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE36InternalGetNextPopItemFromActiveListEPVS0_ */
	class CEventListNode * Node_GetNext(class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE12Node_GetNextEPS0_ */
	void Node_SetNext(class CEventListNode *, class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE12Node_SetNextEPS0_S2_ */
	class CEventListNode * GetLoopbackAddress(const class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE18GetLoopbackAddressEv */
	void CTSFastPushQueue_Base(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEEC4Ev */
	void CTSFastPushQueue_Base(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, const class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>  &); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEEC4ERKS1_ */
	class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> & operator=(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, const class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>  &); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEEaSERKS1_ */
	bool IsEmpty(const class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE7IsEmptyEv */
	bool IsPeeked(const class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE8IsPeekedEv */
	class CEventListNode * Unsafe_ReadPush(const class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE15Unsafe_ReadPushEv */
	class CEventListNode * Unsafe_ReadPop(const class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE14Unsafe_ReadPopEv */
	void Push(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE4PushEPS0_ */
	void PushMultiple(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventListNode *, class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE12PushMultipleEPS0_S2_ */
	class CEventListNode * BeginPeek(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, bool); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE9BeginPeekEb */
	void EndPeek_Pop(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE11EndPeek_PopEPS0_ */
	void EndPeek_Replace(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE15EndPeek_ReplaceEPS0_ */
	void EndPeek_Detach(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE14EndPeek_DetachEPS0_ */
	void EndPeek_Rotate(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE14EndPeek_RotateEPS0_ */
	class CEventListNode * BeginPeek_Lock(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, volatile class CEventListNode *  *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE14BeginPeek_LockEPVPS0_ */
	void EndPeek_Unlock(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventListNode *, volatile class CEventListNode *  *, void ()(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventLi); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE14EndPeek_UnlockEPS0_PVS2_MS1_FvS2_E */
	class CEventListNode * Pop(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, bool); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE3PopEb */
	class CEventListNode * Detach(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE6DetachEv */
	void Push_Head(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE9Push_HeadEPS0_ */
	bool Remove(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, class CEventListNode *); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE6RemoveEPS0_ */
	class CEventListNode * IteratePeekedList<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::IterateInPlace<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)> >(bool, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&&)::<lambda(CEventListNode*)>&>(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, bool, class CEventListNode *, class  &, class  &); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE17IteratePeekedListIRZNS1_6RemoveEPS0_EUlS3_E_RZNS1_14IterateInPlaceIS4_EEvbOT_EUlS3_E_EES3_bS3_S8_OT0_ */
	void IterateInPlace<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::IterateInPlace<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)> >(bool, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&&)::<lambda(CEventListNode*)> >(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, bool, class  &, class  &); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE14IterateInPlaceIRZNS1_6RemoveEPS0_EUlS3_E_ZNS1_14IterateInPlaceIS4_EEvbOT_EUlS3_E_EEvbS8_OT0_ */
	void IterateInPlace<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)> >(class CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext> *, bool, class  &); /* linkage=_ZN21CTSFastPushQueue_BaseI14CEventListNodeS0_S0_XadL_ZNS0_7m_pNextEEEE14IterateInPlaceIZNS1_6RemoveEPS0_EUlS3_E_EEvbOT_ */
} __attribute__((__aligned__(8)));

// <0014ECD2> ../public/tier0/tsfastpushqueue.h:91
// member functions: 30
// member variables: 2
// static member variable: 1
// class size: 16
class CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, &CEventRWLock_Debuggable<true>::TrackedReadLock_t::pNext> {
	/* ../public/tier0/tsfastpushqueue.h:113 */
	enum {
		END_OF_DETACHED_LIST = 1,
	};
protected:
	/* ../public/tier0/tsfastpushqueue.h:100 */
	volatile TrackedReadLock_t* InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, volatile TrackedReadLock_t* );
	static const volatile class TrackedReadLock_t * TrackedReadLock_t::* k_LinkedListMember; /* 0 0 */
	/* ../public/tier0/tsfastpushqueue.h:122 */
	TrackedReadLock_t* Node_GetNext(TrackedReadLock_t* );
	/* ../public/tier0/tsfastpushqueue.h:132 */
	void Node_SetNext(TrackedReadLock_t* , TrackedReadLock_t* );
	/* ../public/tier0/tsfastpushqueue.h:139 */
	TrackedReadLock_t* GetLoopbackAddress(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL);
	/* ../public/tier0/tsfastpushqueue.h:145 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,);
	/* ../public/tier0/tsfastpushqueue.h:152 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL);
	/* ../public/tier0/tsfastpushqueue.h:158 */
	CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, operator=(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL);
	/* ../public/tier0/tsfastpushqueue.h:170 */
	bool IsEmpty(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL);
	/* ../public/tier0/tsfastpushqueue.h:175 */
	bool IsPeeked(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL);
	/* ../public/tier0/tsfastpushqueue.h:181 */
	TrackedReadLock_t* Unsafe_ReadPush(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL);
	/* ../public/tier0/tsfastpushqueue.h:186 */
	TrackedReadLock_t* Unsafe_ReadPop(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL);
	/* ../public/tier0/tsfastpushqueue.h:192 */
	void Push(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, TrackedReadLock_t* );
	/* ../public/tier0/tsfastpushqueue.h:204 */
	void PushMultiple(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, TrackedReadLock_t* , TrackedReadLock_t* );
	/* ../public/tier0/tsfastpushqueue.h:233 */
	TrackedReadLock_t* BeginPeek(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, bool);
	/* ../public/tier0/tsfastpushqueue.h:260 */
	void EndPeek_Pop(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, TrackedReadLock_t* );
	/* ../public/tier0/tsfastpushqueue.h:294 */
	void EndPeek_Replace(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, TrackedReadLock_t* );
	/* ../public/tier0/tsfastpushqueue.h:305 */
	void EndPeek_Detach(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, TrackedReadLock_t* );
	/* ../public/tier0/tsfastpushqueue.h:339 */
	void EndPeek_Rotate(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, TrackedReadLock_t* );
	/* ../public/tier0/tsfastpushqueue.h:362 */
	TrackedReadLock_t* BeginPeek_Lock(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, volatile TrackedReadLock_t** );
	/* ../public/tier0/tsfastpushqueue.h:389 */
	void EndPeek_Unlock(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, TrackedReadLock_t* , volatile TrackedReadLock_t** , void ()(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedRea);
	/* ../public/tier0/tsfastpushqueue.h:412 */
	TrackedReadLock_t* Pop(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, bool);
	/* ../public/tier0/tsfastpushqueue.h:441 */
	TrackedReadLock_t* Detach(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,);
	/* ../public/tier0/tsfastpushqueue.h:449 */
	void Push_Head(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, TrackedReadLock_t* );
	/* ../public/tier0/tsfastpushqueue.h:688 */
	bool Remove(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, TrackedReadLock_t* );
	volatile volatile class TrackedReadLock_t * m_pPush; /* 0 8 */
	volatile volatile class TrackedReadLock_t * m_pPop; /* 8 8 */
	/* ../public/tier0/tsfastpushqueue.h:560 */
	TrackedReadLock_t* IteratePeekedList<CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&, CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,& CEventRWLock_Debuggable<true>::TrackedReadLock_t::pNext>::IterateInPlace<CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(bool, CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&>(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, bool, TrackedReadLock_t* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:560 */
	TrackedReadLock_t* IteratePeekedList<CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&, CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,& CEventRWLock_Debuggable<true>::TrackedReadLock_t::pNext>::IterateInPlace<CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(bool, CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&>(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, bool, TrackedReadLock_t* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:675 */
	void IterateInPlace<CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&, CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,& CEventRWLock_Debuggable<true>::TrackedReadLock_t::pNext>::IterateInPlace<CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(bool, CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, bool, class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:675 */
	void IterateInPlace<CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&, CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,& CEventRWLock_Debuggable<true>::TrackedReadLock_t::pNext>::IterateInPlace<CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(bool, CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, bool, class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:682 */
	void IterateInPlace<CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, bool, class& );
	/* ../public/tier0/tsfastpushqueue.h:682 */
	void IterateInPlace<CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t,, bool, class& );
} __attribute__((__aligned__(8)));

// <0014F4A8> ../public/tier0/tsfastpushqueue.h:91
// member functions: 70
// member variables: 2
// static member variable: 1
// class size: 16
class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> {
	/* ../public/tier0/tsfastpushqueue.h:113 */
	enum {
		END_OF_DETACHED_LIST = 1,
	};
protected:
	/* ../public/tier0/tsfastpushqueue.h:100 */
	volatile CFiber* InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , volatile CFiber* );
	static const volatile class CFiber * CFiber::* k_LinkedListMember; /* 0 0 */
	/* ../public/tier0/tsfastpushqueue.h:122 */
	CFiber* Node_GetNext(CFiber* );
	/* ../public/tier0/tsfastpushqueue.h:132 */
	void Node_SetNext(CFiber* , CFiber* );
	/* ../public/tier0/tsfastpushqueue.h:139 */
	CFiber* GetLoopbackAddress(const CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:145 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:152 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , const CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>& );
	/* ../public/tier0/tsfastpushqueue.h:158 */
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>& operator=(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , const CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>& );
	/* ../public/tier0/tsfastpushqueue.h:170 */
	bool IsEmpty(const CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:175 */
	bool IsPeeked(const CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:181 */
	CFiber* Unsafe_ReadPush(const CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:186 */
	CFiber* Unsafe_ReadPop(const CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:192 */
	void Push(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , CFiber* );
	/* ../public/tier0/tsfastpushqueue.h:204 */
	void PushMultiple(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , CFiber* , CFiber* );
	/* ../public/tier0/tsfastpushqueue.h:233 */
	CFiber* BeginPeek(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , bool);
	/* ../public/tier0/tsfastpushqueue.h:260 */
	void EndPeek_Pop(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , CFiber* );
	/* ../public/tier0/tsfastpushqueue.h:294 */
	void EndPeek_Replace(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , CFiber* );
	/* ../public/tier0/tsfastpushqueue.h:305 */
	void EndPeek_Detach(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , CFiber* );
	/* ../public/tier0/tsfastpushqueue.h:339 */
	void EndPeek_Rotate(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , CFiber* );
	/* ../public/tier0/tsfastpushqueue.h:362 */
	CFiber* BeginPeek_Lock(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , volatile CFiber** );
	/* ../public/tier0/tsfastpushqueue.h:389 */
	void EndPeek_Unlock(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , CFiber* , volatile CFiber** , void ()(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , CFiber* ) CTSFastPushQueue_Base<CFiber, );
	/* ../public/tier0/tsfastpushqueue.h:412 */
	CFiber* Pop(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , bool);
	/* ../public/tier0/tsfastpushqueue.h:441 */
	CFiber* Detach(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:449 */
	void Push_Head(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , CFiber* );
	/* ../public/tier0/tsfastpushqueue.h:688 */
	bool Remove(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , CFiber* );
	volatile volatile class CFiber * m_pPush; /* 0 8 */
	volatile volatile class CFiber * m_pPop; /* 8 8 */
	/* ../public/tier0/tsfastpushqueue.h:560 */
	CFiber* IteratePeekedList<CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)>&, CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>::IterateInPlace<CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)> >(bool, CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)>&&)::<lambda(CFiber*)>&>(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , bool, CFiber* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:675 */
	void IterateInPlace<CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)>&, CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>::IterateInPlace<CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)> >(bool, CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)>&&)::<lambda(CFiber*)> >(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , bool, class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:682 */
	void IterateInPlace<CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)> >(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , bool, class& );
	/* ../public/tier0/tsfastpushqueue.h:560 */
	CFiber* IteratePeekedList<CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , bool, CFiber* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:560 */
	CFiber* IteratePeekedList<CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , bool, CFiber* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:560 */
	CFiber* IteratePeekedList<CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , bool, CFiber* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:560 */
	CFiber* IteratePeekedList<CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , bool, CFiber* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:675 */
	void IterateInPlace<CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , bool, class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:675 */
	void IterateInPlace<CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , bool, class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:675 */
	void IterateInPlace<CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , bool, class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:675 */
	void IterateInPlace<CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(CTSFastPushQueue_Base<CFiber, CFiber, CFiber,& CFiber::m_pNext>* , bool, class& , class& );
	volatile class CFiber  * InternalGetNextPopItemFromActiveList(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, volatile class CFiber  *); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE36InternalGetNextPopItemFromActiveListEPVS0_ */
	class CFiber * Node_GetNext(class CFiber *); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE12Node_GetNextEPS0_ */
	void Node_SetNext(class CFiber *, class CFiber *); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE12Node_SetNextEPS0_S2_ */
	class CFiber * GetLoopbackAddress(const class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE18GetLoopbackAddressEv */
	void CTSFastPushQueue_Base(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEEC4Ev */
	void CTSFastPushQueue_Base(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, const class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>  &); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEEC4ERKS1_ */
	class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> & operator=(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, const class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>  &); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEEaSERKS1_ */
	bool IsEmpty(const class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE7IsEmptyEv */
	bool IsPeeked(const class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE8IsPeekedEv */
	class CFiber * Unsafe_ReadPush(const class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE15Unsafe_ReadPushEv */
	class CFiber * Unsafe_ReadPop(const class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE14Unsafe_ReadPopEv */
	void Push(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, class CFiber *); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE4PushEPS0_ */
	void PushMultiple(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, class CFiber *, class CFiber *); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE12PushMultipleEPS0_S2_ */
	class CFiber * BeginPeek(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, bool); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE9BeginPeekEb */
	void EndPeek_Pop(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, class CFiber *); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE11EndPeek_PopEPS0_ */
	void EndPeek_Replace(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, class CFiber *); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE15EndPeek_ReplaceEPS0_ */
	void EndPeek_Detach(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, class CFiber *); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE14EndPeek_DetachEPS0_ */
	void EndPeek_Rotate(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, class CFiber *); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE14EndPeek_RotateEPS0_ */
	class CFiber * BeginPeek_Lock(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, volatile class CFiber *  *); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE14BeginPeek_LockEPVPS0_ */
	void EndPeek_Unlock(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, class CFiber *, volatile class CFiber *  *, void ()(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, class CFiber *) CTSFastPushQueue_Base<CFiber, ); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE14EndPeek_UnlockEPS0_PVS2_MS1_FvS2_E */
	class CFiber * Pop(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, bool); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE3PopEb */
	class CFiber * Detach(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE6DetachEv */
	void Push_Head(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, class CFiber *); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE9Push_HeadEPS0_ */
	bool Remove(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, class CFiber *); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE6RemoveEPS0_ */
	class CFiber * IteratePeekedList<CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)>&, CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::IterateInPlace<CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)> >(bool, CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)>&&)::<lambda(CFiber*)>&>(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, bool, class CFiber *, class  &, class  &); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE17IteratePeekedListIRZNS1_6RemoveEPS0_EUlS3_E_RZNS1_14IterateInPlaceIS4_EEvbOT_EUlS3_E_EES3_bS3_S8_OT0_ */
	void IterateInPlace<CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)>&, CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::IterateInPlace<CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)> >(bool, CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)>&&)::<lambda(CFiber*)> >(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, bool, class  &, class  &); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE14IterateInPlaceIRZNS1_6RemoveEPS0_EUlS3_E_ZNS1_14IterateInPlaceIS4_EEvbOT_EUlS3_E_EEvbS8_OT0_ */
	void IterateInPlace<CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)> >(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, bool, class  &); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE14IterateInPlaceIZNS1_6RemoveEPS0_EUlS3_E_EEvbOT_ */
	class CFiber * IteratePeekedList<CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, bool, class CFiber *, class  &, class  &); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE17IteratePeekedListIRZN13CFiberJobPool18GetWaitingFiberJobEPbEUlPS0_E2_RZNS3_18GetWaitingFiberJobES4_EUlS5_E0_EES5_bS5_OT_OT0_ */
	class CFiber * IteratePeekedList<CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, bool, class CFiber *, class  &, class  &); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE17IteratePeekedListIRZN13CFiberJobPool18GetWaitingFiberJobEPbEUlPS0_E2_RZNS3_18GetWaitingFiberJobES4_EUlS5_E_EES5_bS5_OT_OT0_ */
	class CFiber * IteratePeekedList<CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, bool, class CFiber *, class  &, class  &); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE17IteratePeekedListIRZN13CFiberJobPool18GetWaitingFiberJobEPbEUlPS0_E1_RZNS3_18GetWaitingFiberJobES4_EUlS5_E0_EES5_bS5_OT_OT0_ */
	class CFiber * IteratePeekedList<CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, bool, class CFiber *, class  &, class  &); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE17IteratePeekedListIRZN13CFiberJobPool18GetWaitingFiberJobEPbEUlPS0_E1_RZNS3_18GetWaitingFiberJobES4_EUlS5_E_EES5_bS5_OT_OT0_ */
	void IterateInPlace<CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, bool, class  &, class  &); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE14IterateInPlaceIRZN13CFiberJobPool18GetWaitingFiberJobEPbEUlPS0_E2_RZNS3_18GetWaitingFiberJobES4_EUlS5_E0_EEvbOT_OT0_ */
	void IterateInPlace<CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, bool, class  &, class  &); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE14IterateInPlaceIRZN13CFiberJobPool18GetWaitingFiberJobEPbEUlPS0_E2_RZNS3_18GetWaitingFiberJobES4_EUlS5_E_EEvbOT_OT0_ */
	void IterateInPlace<CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, bool, class  &, class  &); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE14IterateInPlaceIRZN13CFiberJobPool18GetWaitingFiberJobEPbEUlPS0_E1_RZNS3_18GetWaitingFiberJobES4_EUlS5_E0_EEvbOT_OT0_ */
	void IterateInPlace<CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(class CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext> *, bool, class  &, class  &); /* linkage=_ZN21CTSFastPushQueue_BaseI6CFiberS0_S0_XadL_ZNS0_7m_pNextEEEE14IterateInPlaceIRZN13CFiberJobPool18GetWaitingFiberJobEPbEUlPS0_E1_RZNS3_18GetWaitingFiberJobES4_EUlS5_E_EEvbOT_OT0_ */
} __attribute__((__aligned__(8)));

// <001B8FA7> ../public/tier0/tsfastpushqueue.h:91
// member functions: 24
// member variables: 2
// static member variable: 1
// class size: 16
class CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext> {
protected:
	/* ../public/tier0/tsfastpushqueue.h:100 */
	volatile CThreadedJob* InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* , volatile CThreadedJob* );
	static const volatile class CThreadedJob * CThreadedJob::* k_LinkedListMember; /* 0 0 */
	/* ../public/tier0/tsfastpushqueue.h:122 */
	CThreadedJob* Node_GetNext(CThreadedJob* );
	/* ../public/tier0/tsfastpushqueue.h:132 */
	void Node_SetNext(CThreadedJob* , CThreadedJob* );
	/* ../public/tier0/tsfastpushqueue.h:139 */
	CThreadedJob* GetLoopbackAddress(const CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:145 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:152 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* , const CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>& );
	/* ../public/tier0/tsfastpushqueue.h:158 */
	CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>& operator=(CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* , const CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>& );
	/* ../public/tier0/tsfastpushqueue.h:170 */
	bool IsEmpty(const CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:175 */
	bool IsPeeked(const CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:181 */
	CThreadedJob* Unsafe_ReadPush(const CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:186 */
	CThreadedJob* Unsafe_ReadPop(const CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:192 */
	void Push(CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* , CThreadedJob* );
	/* ../public/tier0/tsfastpushqueue.h:204 */
	void PushMultiple(CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* , CThreadedJob* , CThreadedJob* );
	/* ../public/tier0/tsfastpushqueue.h:233 */
	CThreadedJob* BeginPeek(CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* , bool);
	/* ../public/tier0/tsfastpushqueue.h:260 */
	void EndPeek_Pop(CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* , CThreadedJob* );
	/* ../public/tier0/tsfastpushqueue.h:294 */
	void EndPeek_Replace(CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* , CThreadedJob* );
	/* ../public/tier0/tsfastpushqueue.h:305 */
	void EndPeek_Detach(CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* , CThreadedJob* );
	/* ../public/tier0/tsfastpushqueue.h:339 */
	void EndPeek_Rotate(CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* , CThreadedJob* );
	/* ../public/tier0/tsfastpushqueue.h:362 */
	CThreadedJob* BeginPeek_Lock(CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* , volatile CThreadedJob** );
	/* ../public/tier0/tsfastpushqueue.h:389 */
	void EndPeek_Unlock(CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* , CThreadedJob* , volatile CThreadedJob** , void ()(CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* , CThreadedJob* ) );
	/* ../public/tier0/tsfastpushqueue.h:412 */
	CThreadedJob* Pop(CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* , bool);
	/* ../public/tier0/tsfastpushqueue.h:441 */
	CThreadedJob* Detach(CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:449 */
	void Push_Head(CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* , CThreadedJob* );
	/* ../public/tier0/tsfastpushqueue.h:688 */
	bool Remove(CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob,& CThreadedJob::m_pNext>* , CThreadedJob* );
	volatile volatile class CThreadedJob * m_pPush; /* 0 8 */
	volatile volatile class CThreadedJob * m_pPop; /* 8 8 */
} __attribute__((__aligned__(8)));

// <0029EB7A> ../public/tier0/tsfastpushqueue.h:91
// member functions: 26
// member variables: 2
// static member variable: 1
// class size: 16
class CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, &CUtlMemoryPoolBase::FreeList_t::pNext> {
	/* ../public/tier0/tsfastpushqueue.h:113 */
	enum {
		END_OF_DETACHED_LIST = 1,
	};
protected:
	/* ../public/tier0/tsfastpushqueue.h:100 */
	volatile FreeList_t* InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, volatile FreeList_t* );
	static const volatile class FreeList_t * FreeList_t::* k_LinkedListMember; /* 0 0 */
	/* ../public/tier0/tsfastpushqueue.h:122 */
	FreeList_t* Node_GetNext(FreeList_t* );
	/* ../public/tier0/tsfastpushqueue.h:132 */
	void Node_SetNext(FreeList_t* , FreeList_t* );
	/* ../public/tier0/tsfastpushqueue.h:139 */
	FreeList_t* GetLoopbackAddress(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	/* ../public/tier0/tsfastpushqueue.h:145 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU);
	/* ../public/tier0/tsfastpushqueue.h:152 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	/* ../public/tier0/tsfastpushqueue.h:158 */
	CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU operator=(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	/* ../public/tier0/tsfastpushqueue.h:170 */
	bool IsEmpty(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	/* ../public/tier0/tsfastpushqueue.h:175 */
	bool IsPeeked(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	/* ../public/tier0/tsfastpushqueue.h:181 */
	FreeList_t* Unsafe_ReadPush(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	/* ../public/tier0/tsfastpushqueue.h:186 */
	FreeList_t* Unsafe_ReadPop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_);
	/* ../public/tier0/tsfastpushqueue.h:192 */
	void Push(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, FreeList_t* );
	/* ../public/tier0/tsfastpushqueue.h:204 */
	void PushMultiple(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, FreeList_t* , FreeList_t* );
	/* ../public/tier0/tsfastpushqueue.h:233 */
	FreeList_t* BeginPeek(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, bool);
	/* ../public/tier0/tsfastpushqueue.h:260 */
	void EndPeek_Pop(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, FreeList_t* );
	/* ../public/tier0/tsfastpushqueue.h:294 */
	void EndPeek_Replace(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, FreeList_t* );
	/* ../public/tier0/tsfastpushqueue.h:305 */
	void EndPeek_Detach(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, FreeList_t* );
	/* ../public/tier0/tsfastpushqueue.h:339 */
	void EndPeek_Rotate(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, FreeList_t* );
	/* ../public/tier0/tsfastpushqueue.h:362 */
	FreeList_t* BeginPeek_Lock(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, volatile FreeList_t** );
	/* ../public/tier0/tsfastpushqueue.h:389 */
	void EndPeek_Unlock(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, FreeList_t* , volatile FreeList_t** , void ()(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeLis);
	/* ../public/tier0/tsfastpushqueue.h:412 */
	FreeList_t* Pop(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, bool);
	/* ../public/tier0/tsfastpushqueue.h:441 */
	FreeList_t* Detach(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU);
	/* ../public/tier0/tsfastpushqueue.h:449 */
	void Push_Head(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, FreeList_t* );
	/* ../public/tier0/tsfastpushqueue.h:688 */
	bool Remove(CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CU, FreeList_t* );
	volatile volatile class FreeList_t * m_pPush; /* 0 8 */
	volatile volatile class FreeList_t * m_pPop; /* 8 8 */
	/* ../public/tier0/tsfastpushqueue.h:502 */
	FreeList_t* IterateDetachedList<CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::FreeList_t*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t,& CUtlMemoryPoolBase::FreeList_t::pNext>::IterateDetachedList<CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::FreeList_t*)> >(CUtlMemoryPoolBase::FreeList_t*, CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::FreeList_t*)>&&)::<lambda(CUtlMemoryPoolBase::FreeList_t*)> >(FreeList_t* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:545 */
	FreeList_t* IterateDetachedList<CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::FreeList_t*)> >(FreeList_t* , class& );
} __attribute__((__aligned__(8)));

// <0029F004> ../public/tier0/tsfastpushqueue.h:91
// member functions: 34
// member variables: 2
// static member variable: 1
// class size: 16
class CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryPoolBase::CBlob::m_pNext> {
	/* ../public/tier0/tsfastpushqueue.h:113 */
	enum {
		END_OF_DETACHED_LIST = 1,
	};
protected:
	/* ../public/tier0/tsfastpushqueue.h:100 */
	volatile CBlob* InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, volatile CBlob* );
	static const volatile class CBlob * CBlob::* k_LinkedListMember; /* 0 0 */
	/* ../public/tier0/tsfastpushqueue.h:122 */
	CBlob* Node_GetNext(CBlob* );
	/* ../public/tier0/tsfastpushqueue.h:132 */
	void Node_SetNext(CBlob* , CBlob* );
	/* ../public/tier0/tsfastpushqueue.h:139 */
	CBlob* GetLoopbackAddress(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryP);
	/* ../public/tier0/tsfastpushqueue.h:145 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas);
	/* ../public/tier0/tsfastpushqueue.h:152 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryP);
	/* ../public/tier0/tsfastpushqueue.h:158 */
	CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas operator=(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryP);
	/* ../public/tier0/tsfastpushqueue.h:170 */
	bool IsEmpty(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryP);
	/* ../public/tier0/tsfastpushqueue.h:175 */
	bool IsPeeked(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryP);
	/* ../public/tier0/tsfastpushqueue.h:181 */
	CBlob* Unsafe_ReadPush(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryP);
	/* ../public/tier0/tsfastpushqueue.h:186 */
	CBlob* Unsafe_ReadPop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryP);
	/* ../public/tier0/tsfastpushqueue.h:192 */
	void Push(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, CBlob* );
	/* ../public/tier0/tsfastpushqueue.h:204 */
	void PushMultiple(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, CBlob* , CBlob* );
	/* ../public/tier0/tsfastpushqueue.h:233 */
	CBlob* BeginPeek(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, bool);
	/* ../public/tier0/tsfastpushqueue.h:260 */
	void EndPeek_Pop(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, CBlob* );
	/* ../public/tier0/tsfastpushqueue.h:294 */
	void EndPeek_Replace(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, CBlob* );
	/* ../public/tier0/tsfastpushqueue.h:305 */
	void EndPeek_Detach(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, CBlob* );
	/* ../public/tier0/tsfastpushqueue.h:339 */
	void EndPeek_Rotate(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, CBlob* );
	/* ../public/tier0/tsfastpushqueue.h:362 */
	CBlob* BeginPeek_Lock(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, volatile CBlob** );
	/* ../public/tier0/tsfastpushqueue.h:389 */
	void EndPeek_Unlock(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, CBlob* , volatile CBlob** , void ()(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemor);
	/* ../public/tier0/tsfastpushqueue.h:412 */
	CBlob* Pop(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, bool);
	/* ../public/tier0/tsfastpushqueue.h:441 */
	CBlob* Detach(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas);
	/* ../public/tier0/tsfastpushqueue.h:449 */
	void Push_Head(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, CBlob* );
	/* ../public/tier0/tsfastpushqueue.h:688 */
	bool Remove(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, CBlob* );
	volatile volatile class CBlob * m_pPush; /* 0 8 */
	volatile volatile class CBlob * m_pPop; /* 8 8 */
	/* ../public/tier0/tsfastpushqueue.h:560 */
	CBlob* IteratePeekedList<CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBase::CBlob::m_pNext>::IterateInPlace<CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)> >(bool, CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)>&&)::<lambda(CUtlMemoryPoolBase::CBlob*)>&>(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, bool, CBlob* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:560 */
	CBlob* IteratePeekedList<CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBase::CBlob::m_pNext>::IterateInPlace<CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)> >(bool, CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)>&&)::<lambda(CUtlMemoryPoolBase::CBlob*)>&>(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, bool, CBlob* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:675 */
	void IterateInPlace<CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBase::CBlob::m_pNext>::IterateInPlace<CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)> >(bool, CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)>&&)::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, bool, class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:675 */
	void IterateInPlace<CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBase::CBlob::m_pNext>::IterateInPlace<CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)> >(bool, CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)>&&)::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, bool, class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:502 */
	CBlob* IterateDetachedList<CUtlMemoryPoolBase::InternalClear(CBlob*, FreeList_t*)::<lambda(CUtlMemoryPoolBase::CBlob*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBase::CBlob::m_pNext>::IterateDetachedList<CUtlMemoryPoolBase::InternalClear(CBlob*, FreeList_t*)::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CUtlMemoryPoolBase::CBlob*, CUtlMemoryPoolBase::InternalClear(CBlob*, FreeList_t*)::<lambda(CUtlMemoryPoolBase::CBlob*)>&&)::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CBlob* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:502 */
	CBlob* IterateDetachedList<CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::CBlob*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBase::CBlob::m_pNext>::IterateDetachedList<CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CUtlMemoryPoolBase::CBlob*, CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::CBlob*)>&&)::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CBlob* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:682 */
	void IterateInPlace<CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, bool, class& );
	/* ../public/tier0/tsfastpushqueue.h:682 */
	void IterateInPlace<CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob,& CUtlMemoryPoolBas, bool, class& );
	/* ../public/tier0/tsfastpushqueue.h:545 */
	CBlob* IterateDetachedList<CUtlMemoryPoolBase::InternalClear(CBlob*, FreeList_t*)::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CBlob* , class& );
	/* ../public/tier0/tsfastpushqueue.h:545 */
	CBlob* IterateDetachedList<CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CBlob* , class& );
} __attribute__((__aligned__(8)));

// <0046805B> ../public/tier0/tsfastpushqueue.h:91
// member functions: 24
// member variables: 2
// static member variable: 1
// class size: 16
class CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext, &CThreadSwapContext::m_pNext> {
protected:
	/* ../public/tier0/tsfastpushqueue.h:100 */
	volatile CThreadSwapContext* InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* , volatile CThreadSwapContext* );
	static const volatile class CThreadSwapContext * CThreadSwapContext::* k_LinkedListMember; /* 0 0 */
	/* ../public/tier0/tsfastpushqueue.h:122 */
	CThreadSwapContext* Node_GetNext(CThreadSwapContext* );
	/* ../public/tier0/tsfastpushqueue.h:132 */
	void Node_SetNext(CThreadSwapContext* , CThreadSwapContext* );
	/* ../public/tier0/tsfastpushqueue.h:139 */
	CThreadSwapContext* GetLoopbackAddress(const CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:145 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:152 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* , const CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>& );
	/* ../public/tier0/tsfastpushqueue.h:158 */
	CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>& operator=(CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* , const CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>& );
	/* ../public/tier0/tsfastpushqueue.h:170 */
	bool IsEmpty(const CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:175 */
	bool IsPeeked(const CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:181 */
	CThreadSwapContext* Unsafe_ReadPush(const CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:186 */
	CThreadSwapContext* Unsafe_ReadPop(const CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:192 */
	void Push(CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* , CThreadSwapContext* );
	/* ../public/tier0/tsfastpushqueue.h:204 */
	void PushMultiple(CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* , CThreadSwapContext* , CThreadSwapContext* );
	/* ../public/tier0/tsfastpushqueue.h:233 */
	CThreadSwapContext* BeginPeek(CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* , bool);
	/* ../public/tier0/tsfastpushqueue.h:260 */
	void EndPeek_Pop(CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* , CThreadSwapContext* );
	/* ../public/tier0/tsfastpushqueue.h:294 */
	void EndPeek_Replace(CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* , CThreadSwapContext* );
	/* ../public/tier0/tsfastpushqueue.h:305 */
	void EndPeek_Detach(CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* , CThreadSwapContext* );
	/* ../public/tier0/tsfastpushqueue.h:339 */
	void EndPeek_Rotate(CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* , CThreadSwapContext* );
	/* ../public/tier0/tsfastpushqueue.h:362 */
	CThreadSwapContext* BeginPeek_Lock(CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* , volatile CThreadSwapContext** );
	/* ../public/tier0/tsfastpushqueue.h:389 */
	void EndPeek_Unlock(CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* , CThreadSwapContext* , volatile CThreadSwapContext** , void ()(CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:412 */
	CThreadSwapContext* Pop(CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* , bool);
	/* ../public/tier0/tsfastpushqueue.h:441 */
	CThreadSwapContext* Detach(CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:449 */
	void Push_Head(CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* , CThreadSwapContext* );
	/* ../public/tier0/tsfastpushqueue.h:688 */
	bool Remove(CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext,& CThreadSwapContext::m_pNext>* , CThreadSwapContext* );
	volatile volatile class CThreadSwapContext * m_pPush; /* 0 8 */
	volatile volatile class CThreadSwapContext * m_pPop; /* 8 8 */
} __attribute__((__aligned__(8)));

// <001590A3> ../public/tier0/tsfastpushqueue.h:91
// member functions: 51
// member variables: 2
// static member variable: 1
// class size: 16
class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> {
	/* ../public/tier0/tsfastpushqueue.h:113 */
	enum {
		END_OF_DETACHED_LIST = 1,
	};
protected:
	/* ../public/tier0/tsfastpushqueue.h:100 */
	volatile ConstantBuffer_t* InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , volatile ConstantBuffer_t* );
	static const volatile class ConstantBuffer_t * ConstantBuffer_t::* k_LinkedListMember; /* 0 0 */
	/* ../public/tier0/tsfastpushqueue.h:122 */
	ConstantBuffer_t* Node_GetNext(ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:132 */
	void Node_SetNext(ConstantBuffer_t* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:139 */
	ConstantBuffer_t* GetLoopbackAddress(const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:145 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:152 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>& );
	/* ../public/tier0/tsfastpushqueue.h:158 */
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>& operator=(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>& );
	/* ../public/tier0/tsfastpushqueue.h:170 */
	bool IsEmpty(const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:175 */
	bool IsPeeked(const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:181 */
	ConstantBuffer_t* Unsafe_ReadPush(const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:186 */
	ConstantBuffer_t* Unsafe_ReadPop(const CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:192 */
	void Push(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:204 */
	void PushMultiple(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:233 */
	ConstantBuffer_t* BeginPeek(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , bool);
	/* ../public/tier0/tsfastpushqueue.h:260 */
	void EndPeek_Pop(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:294 */
	void EndPeek_Replace(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:305 */
	void EndPeek_Detach(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:339 */
	void EndPeek_Rotate(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:362 */
	ConstantBuffer_t* BeginPeek_Lock(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , volatile ConstantBuffer_t** );
	/* ../public/tier0/tsfastpushqueue.h:389 */
	void EndPeek_Unlock(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* , volatile ConstantBuffer_t** , void ()(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , );
	/* ../public/tier0/tsfastpushqueue.h:412 */
	ConstantBuffer_t* Pop(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , bool);
	/* ../public/tier0/tsfastpushqueue.h:441 */
	ConstantBuffer_t* Detach(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* );
	/* ../public/tier0/tsfastpushqueue.h:449 */
	void Push_Head(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	/* ../public/tier0/tsfastpushqueue.h:688 */
	bool Remove(CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>* , ConstantBuffer_t* );
	volatile volatile class ConstantBuffer_t * m_pPush; /* 0 8 */
	volatile volatile class ConstantBuffer_t * m_pPop; /* 8 8 */
	/* ../public/tier0/tsfastpushqueue.h:502 */
	ConstantBuffer_t* IterateDetachedList<CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)>&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>::IterateDetachedList<CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t*, CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)>&&)::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:502 */
	ConstantBuffer_t* IterateDetachedList<CRenderDeviceBase::ShutdownDynamicConstantBufferPools()::<lambda(ConstantBuffer_t*)>, CRenderDeviceBase::ShutdownDynamicConstantBufferPools()::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:545 */
	ConstantBuffer_t* IterateDetachedList<CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* , class& );
	volatile class ConstantBuffer_t  * InternalGetNextPopItemFromActiveList(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, volatile class ConstantBuffer_t  *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE36InternalGetNextPopItemFromActiveListEPVS0_ */
	class ConstantBuffer_t * Node_GetNext(class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE12Node_GetNextEPS0_ */
	void Node_SetNext(class ConstantBuffer_t *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE12Node_SetNextEPS0_S2_ */
	class ConstantBuffer_t * GetLoopbackAddress(const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE18GetLoopbackAddressEv */
	void CTSFastPushQueue_Base(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEEC4Ev */
	void CTSFastPushQueue_Base(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  &); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEEC4ERKS1_ */
	class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> & operator=(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  &); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEEaSERKS1_ */
	bool IsEmpty(const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE7IsEmptyEv */
	bool IsPeeked(const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE8IsPeekedEv */
	class ConstantBuffer_t * Unsafe_ReadPush(const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE15Unsafe_ReadPushEv */
	class ConstantBuffer_t * Unsafe_ReadPop(const class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>  *); /* linkage=_ZNK21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE14Unsafe_ReadPopEv */
	void Push(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE4PushEPS0_ */
	void PushMultiple(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE12PushMultipleEPS0_S2_ */
	class ConstantBuffer_t * BeginPeek(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, bool); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE9BeginPeekEb */
	void EndPeek_Pop(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE11EndPeek_PopEPS0_ */
	void EndPeek_Replace(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE15EndPeek_ReplaceEPS0_ */
	void EndPeek_Detach(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE14EndPeek_DetachEPS0_ */
	void EndPeek_Rotate(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE14EndPeek_RotateEPS0_ */
	class ConstantBuffer_t * BeginPeek_Lock(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, volatile class ConstantBuffer_t *  *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE14BeginPeek_LockEPVPS0_ */
	void EndPeek_Unlock(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *, volatile class ConstantBuffer_t *  *, void ()(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE14EndPeek_UnlockEPS0_PVS2_MS1_FvS2_E */
	class ConstantBuffer_t * Pop(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, bool); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE3PopEb */
	class ConstantBuffer_t * Detach(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE6DetachEv */
	void Push_Head(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE9Push_HeadEPS0_ */
	bool Remove(class CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> *, class ConstantBuffer_t *); /* linkage=_ZN21CTSFastPushQueue_BaseI16ConstantBuffer_tS0_S0_XadL_ZNS0_7m_pNextEEEE6RemoveEPS0_ */
} __attribute__((__aligned__(8)));

// <0015AD74> ../public/tier0/tsfastpushqueue.h:91
// member functions: 26
// member variables: 2
// static member variable: 1
// class size: 16
class CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, &CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>::m_pNext> {
	/* ../public/tier0/tsfastpushqueue.h:113 */
	enum {
		END_OF_DETACHED_LIST = 1,
	};
protected:
	/* ../public/tier0/tsfastpushqueue.h:100 */
	volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	static const volatile class FencedWaitingList_t<CPipelineFence, ConstantBuffer_t> * FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>:: k_LinkedListMember; /* 0 0 */
	/* ../public/tier0/tsfastpushqueue.h:122 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* Node_GetNext(FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:132 */
	void Node_SetNext(FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* , FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:139 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* GetLoopbackAddress(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::);
	/* ../public/tier0/tsfastpushqueue.h:145 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced);
	/* ../public/tier0/tsfastpushqueue.h:152 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::);
	/* ../public/tier0/tsfastpushqueue.h:158 */
	CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced operator=(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::);
	/* ../public/tier0/tsfastpushqueue.h:170 */
	bool IsEmpty(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::);
	/* ../public/tier0/tsfastpushqueue.h:175 */
	bool IsPeeked(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::);
	/* ../public/tier0/tsfastpushqueue.h:181 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* Unsafe_ReadPush(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::);
	/* ../public/tier0/tsfastpushqueue.h:186 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* Unsafe_ReadPop(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::);
	/* ../public/tier0/tsfastpushqueue.h:192 */
	void Push(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:204 */
	void PushMultiple(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* , FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:233 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* BeginPeek(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, bool);
	/* ../public/tier0/tsfastpushqueue.h:260 */
	void EndPeek_Pop(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:294 */
	void EndPeek_Replace(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:305 */
	void EndPeek_Detach(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:339 */
	void EndPeek_Rotate(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:362 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* BeginPeek_Lock(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>** );
	/* ../public/tier0/tsfastpushqueue.h:389 */
	void EndPeek_Unlock(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* , volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>** , void ()(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase);
	/* ../public/tier0/tsfastpushqueue.h:412 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* Pop(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, bool);
	/* ../public/tier0/tsfastpushqueue.h:441 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* Detach(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced);
	/* ../public/tier0/tsfastpushqueue.h:449 */
	void Push_Head(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:688 */
	bool Remove(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::Fenced, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* );
	volatile volatile class FencedWaitingList_t<CPipelineFence, ConstantBuffer_t> * m_pPush; /* 0 8 */
	volatile volatile class FencedWaitingList_t<CPipelineFence, ConstantBuffer_t> * m_pPop; /* 8 8 */
	/* ../public/tier0/tsfastpushqueue.h:502 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)>&, CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>,& CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>::m_pNext>::IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)> >(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*, CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)>&&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)> >(FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:545 */
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)> >(FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* , class& );
} __attribute__((__aligned__(8)));

// <0015B398> ../public/tier0/tsfastpushqueue.h:91
// member functions: 26
// member variables: 2
// static member variable: 1
// class size: 16
class CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, &CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>::m_pNext> {
	/* ../public/tier0/tsfastpushqueue.h:113 */
	enum {
		END_OF_DETACHED_LIST = 1,
	};
protected:
	/* ../public/tier0/tsfastpushqueue.h:100 */
	volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* InternalGetNextPopItemFromActiveList(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	static const volatile class FencedWaitingList_t<CDeviceFence, ConstantBuffer_t> * FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>::* k_LinkedListMember; /* 0 0 */
	/* ../public/tier0/tsfastpushqueue.h:122 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* Node_GetNext(FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:132 */
	void Node_SetNext(FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* , FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:139 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* GetLoopbackAddress(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe);
	/* ../public/tier0/tsfastpushqueue.h:145 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa);
	/* ../public/tier0/tsfastpushqueue.h:152 */
	void CTSFastPushQueue_Base(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe);
	/* ../public/tier0/tsfastpushqueue.h:158 */
	CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa operator=(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe);
	/* ../public/tier0/tsfastpushqueue.h:170 */
	bool IsEmpty(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe);
	/* ../public/tier0/tsfastpushqueue.h:175 */
	bool IsPeeked(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe);
	/* ../public/tier0/tsfastpushqueue.h:181 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* Unsafe_ReadPush(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe);
	/* ../public/tier0/tsfastpushqueue.h:186 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* Unsafe_ReadPop(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe);
	/* ../public/tier0/tsfastpushqueue.h:192 */
	void Push(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:204 */
	void PushMultiple(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* , FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:233 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* BeginPeek(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, bool);
	/* ../public/tier0/tsfastpushqueue.h:260 */
	void EndPeek_Pop(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:294 */
	void EndPeek_Replace(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:305 */
	void EndPeek_Detach(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:339 */
	void EndPeek_Rotate(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:362 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* BeginPeek_Lock(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>** );
	/* ../public/tier0/tsfastpushqueue.h:389 */
	void EndPeek_Unlock(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* , volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>** , void ()(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::);
	/* ../public/tier0/tsfastpushqueue.h:412 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* Pop(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, bool);
	/* ../public/tier0/tsfastpushqueue.h:441 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* Detach(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa);
	/* ../public/tier0/tsfastpushqueue.h:449 */
	void Push_Head(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	/* ../public/tier0/tsfastpushqueue.h:688 */
	bool Remove(CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWa, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* );
	volatile volatile class FencedWaitingList_t<CDeviceFence, ConstantBuffer_t> * m_pPush; /* 0 8 */
	volatile volatile class FencedWaitingList_t<CDeviceFence, ConstantBuffer_t> * m_pPop; /* 8 8 */
	/* ../public/tier0/tsfastpushqueue.h:502 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)>&, CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>,& CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>::m_pNext>::IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)> >(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*, CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)>&&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)> >(FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* , class& , class& );
	/* ../public/tier0/tsfastpushqueue.h:545 */
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t,& ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)> >(FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* , class& );
} __attribute__((__aligned__(8)));

// <00171427> ../public/tier0/tsfastpushqueue.h:100
// variable: 1
inline void CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::InternalGetNextPopItemFromActiveList(volatile ConstantBuffer_t* pCurItem)
{
	volatile ConstantBuffer_t* pNext; // 105
} /* size: 0, variables: 1 */

// <0016EE46> ../public/tier0/tsfastpushqueue.h:100
// variable: 1
inline void InternalGetNextPopItemFromActiveList(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this, volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pCurItem)
{
	volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pNext; // 105
} /* size: 0, variables: 1 */

// <0016EE15> ../public/tier0/tsfastpushqueue.h:100
// variable: 1
inline void InternalGetNextPopItemFromActiveList(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this, volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pCurItem)
{
	volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pNext; // 105
} /* size: 0, variables: 1 */

// <00468DB2> ../public/tier0/tsfastpushqueue.h:100
// variable: 1
inline void CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext, &CThreadSwapContext::m_pNext>::InternalGetNextPopItemFromActiveList(volatile CThreadSwapContext* pCurItem)
{
	volatile CThreadSwapContext* pNext; // 105
} /* size: 0, variables: 1 */

// <002A7DE1> ../public/tier0/tsfastpushqueue.h:100
// variable: 1
inline void InternalGetNextPopItemFromActiveList(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this, volatile CBlob* pCurItem)
{
	volatile CBlob* pNext; // 105
} /* size: 0, variables: 1 */

// <002A71FD> ../public/tier0/tsfastpushqueue.h:100
// variable: 1
inline void InternalGetNextPopItemFromActiveList(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this, volatile FreeList_t* pCurItem)
{
	volatile FreeList_t* pNext; // 105
} /* size: 0, variables: 1 */

// <001CAB4B> ../public/tier0/tsfastpushqueue.h:100
// variable: 1
inline void CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::InternalGetNextPopItemFromActiveList(volatile CThreadedJob* pCurItem)
{
	volatile CThreadedJob* pNext; // 105
} /* size: 0, variables: 1 */

// <001549D9> ../public/tier0/tsfastpushqueue.h:100
// variable: 1
inline void InternalGetNextPopItemFromActiveList(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this, volatile TrackedReadLock_t* pCurItem)
{
	volatile TrackedReadLock_t* pNext; // 105
} /* size: 0, variables: 1 */

// <0015494E> ../public/tier0/tsfastpushqueue.h:100
// variable: 1
inline void CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::InternalGetNextPopItemFromActiveList(volatile CEventListNode* pCurItem)
{
	volatile CEventListNode* pNext; // 105
} /* size: 0, variables: 1 */

// <001548B3> ../public/tier0/tsfastpushqueue.h:100
// variable: 1
inline void CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::InternalGetNextPopItemFromActiveList(volatile CFiber* pCurItem)
{
	volatile CFiber* pNext; // 105
} /* size: 0, variables: 1 */

// <00177C99> ../public/tier0/tsfastpushqueue.h:122
// variable: 1
inline void Node_GetNext(ConstantBuffer_t* pNode)
{
	ConstantBuffer_t* pNext; // 125
} /* size: 0, variables: 1 */

// <00175475> ../public/tier0/tsfastpushqueue.h:139
inline void CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::GetLoopbackAddress()
{
} /* size: 0 */

// <001753BD> ../public/tier0/tsfastpushqueue.h:139
inline void GetLoopbackAddress(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDevice this)
{
} /* size: 0 */

// <001753A4> ../public/tier0/tsfastpushqueue.h:139
inline void GetLoopbackAddress(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBa this)
{
} /* size: 0 */

// <004693E4> ../public/tier0/tsfastpushqueue.h:139
inline void GetLoopbackAddress(const CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext, &CThreadSwapContext::m_pNex this)
{
} /* size: 0 */

// <002A98DB> ../public/tier0/tsfastpushqueue.h:139
inline void GetLoopbackAddress(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::Fre this)
{
} /* size: 0 */

// <002A98C2> ../public/tier0/tsfastpushqueue.h:139
inline void GetLoopbackAddress(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlM this)
{
} /* size: 0 */

// <001CBDEF> ../public/tier0/tsfastpushqueue.h:139
inline void CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::GetLoopbackAddress()
{
} /* size: 0 */

// <00158A09> ../public/tier0/tsfastpushqueue.h:139
inline void CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::GetLoopbackAddress()
{
} /* size: 0 */

// <00155702> ../public/tier0/tsfastpushqueue.h:139
inline void GetLoopbackAddress(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::Tracke this)
{
} /* size: 0 */

// <00154935> ../public/tier0/tsfastpushqueue.h:139
inline void CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::GetLoopbackAddress()
{
} /* size: 0 */

// <00178E46> ../public/tier0/tsfastpushqueue.h:145
void CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::CTSFastPushQueue_Base()
{
} /* size: 0 */

// <00178E2D> ../public/tier0/tsfastpushqueue.h:145
inline void CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::CTSFastPushQueue_Base()
{
} /* size: 0 */

// <00178D53> ../public/tier0/tsfastpushqueue.h:145
void CTSFastPushQueue_Base(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this)
{
} /* size: 0 */

// <00178D3A> ../public/tier0/tsfastpushqueue.h:145
inline void CTSFastPushQueue_Base(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this)
{
} /* size: 0 */

// <00178D23> ../public/tier0/tsfastpushqueue.h:145
void CTSFastPushQueue_Base(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this)
{
} /* size: 0 */

// <00178D0A> ../public/tier0/tsfastpushqueue.h:145
inline void CTSFastPushQueue_Base(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this)
{
} /* size: 0 */

// <0046954A> ../public/tier0/tsfastpushqueue.h:145
void CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext, &CThreadSwapContext::m_pNext>::CTSFastPushQueue_Base()
{
} /* size: 0 */

// <00469531> ../public/tier0/tsfastpushqueue.h:145
inline void CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext, &CThreadSwapContext::m_pNext>::CTSFastPushQueue_Base()
{
} /* size: 0 */

// <002AB026> ../public/tier0/tsfastpushqueue.h:145
void CTSFastPushQueue_Base(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this)
{
} /* size: 0 */

// <002AB00D> ../public/tier0/tsfastpushqueue.h:145
inline void CTSFastPushQueue_Base(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this)
{
} /* size: 0 */

// <002AAFF6> ../public/tier0/tsfastpushqueue.h:145
void CTSFastPushQueue_Base(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this)
{
} /* size: 0 */

// <002AAFDD> ../public/tier0/tsfastpushqueue.h:145
inline void CTSFastPushQueue_Base(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this)
{
} /* size: 0 */

// <001CD4C9> ../public/tier0/tsfastpushqueue.h:145
void CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::CTSFastPushQueue_Base()
{
} /* size: 0 */

// <001CD4B0> ../public/tier0/tsfastpushqueue.h:145
inline void CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::CTSFastPushQueue_Base()
{
} /* size: 0 */

// <00158A3B> ../public/tier0/tsfastpushqueue.h:145
void CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::CTSFastPushQueue_Base()
{
} /* size: 0 */

// <00158A22> ../public/tier0/tsfastpushqueue.h:145
inline void CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::CTSFastPushQueue_Base()
{
} /* size: 0 */

// <00157C52> ../public/tier0/tsfastpushqueue.h:145
void CTSFastPushQueue_Base(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this)
{
} /* size: 0 */

// <00157C39> ../public/tier0/tsfastpushqueue.h:145
inline void CTSFastPushQueue_Base(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this)
{
} /* size: 0 */

// <001535B3> ../public/tier0/tsfastpushqueue.h:145
void CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::CTSFastPushQueue_Base()
{
} /* size: 0 */

// <0015359A> ../public/tier0/tsfastpushqueue.h:145
inline void CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::CTSFastPushQueue_Base()
{
} /* size: 0 */

// <0017863E> ../public/tier0/tsfastpushqueue.h:170
inline void CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::IsEmpty()
{
} /* size: 0 */

// <002A9CB2> ../public/tier0/tsfastpushqueue.h:175
inline void IsPeeked(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlM this)
{
} /* size: 0 */

// <002AADDD> ../public/tier0/tsfastpushqueue.h:186
inline void Unsafe_ReadPop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlM this)
{
} /* size: 0 */

// <00B75E78> ../public/tier0/tsfastpushqueue.h:192
// variables: 3
inline void CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Push(ConstantBuffer_t* pPushNode)
{
	const char   __FUNCTION__; // 26659
	volatile ConstantBuffer_t* pPrev; // 198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
	}
} /* size: 0, variables: 2 */

// <009EA01A> ../public/tier0/tsfastpushqueue.h:192
// variables: 3
inline void CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Push(ConstantBuffer_t* pPushNode)
{
	const char   __FUNCTION__; // 28462
	volatile ConstantBuffer_t* pPrev; // 198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
	}
} /* size: 0, variables: 2 */

// <00179885> ../public/tier0/tsfastpushqueue.h:192
// variables: 3
inline void CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Push(ConstantBuffer_t* pPushNode)
{
	const char   __FUNCTION__; // 2334
	volatile ConstantBuffer_t* pPrev; // 198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
	}
} /* size: 0, variables: 2 */

// <001785A5> ../public/tier0/tsfastpushqueue.h:192
// variables: 3
inline void Push(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPushNode)
{
	const char   __FUNCTION__; // 2334
	volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPrev; // 198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
	}
} /* size: 0, variables: 2 */

// <00178230> ../public/tier0/tsfastpushqueue.h:192
// variables: 3
inline void Push(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pPushNode)
{
	const char   __FUNCTION__; // 2334
	volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pPrev; // 198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
	}
} /* size: 0, variables: 2 */

// <00469446> ../public/tier0/tsfastpushqueue.h:192
// variables: 3
inline void CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext, &CThreadSwapContext::m_pNext>::Push(CThreadSwapContext* pPushNode)
{
	const char   __FUNCTION__; // 54052
	volatile CThreadSwapContext* pPrev; // 198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
	}
} /* size: 0, variables: 2 */

// <002AAE52> ../public/tier0/tsfastpushqueue.h:192
// variables: 3
inline void Push(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this, CBlob* pPushNode)
{
	const char   __FUNCTION__; // 56097
	volatile CBlob* pPrev; // 198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
	}
} /* size: 0, variables: 2 */

// <002A9C43> ../public/tier0/tsfastpushqueue.h:192
// variables: 3
inline void Push(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this, FreeList_t* pPushNode)
{
	const char   __FUNCTION__; // 56097
	volatile FreeList_t* pPrev; // 198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
	}
} /* size: 0, variables: 2 */

// <001CD40E> ../public/tier0/tsfastpushqueue.h:192
// variables: 3
inline void CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::Push(CThreadedJob* pPushNode)
{
	const char   __FUNCTION__; // 4844
	volatile CThreadedJob* pPrev; // 198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
	}
} /* size: 0, variables: 2 */

// <00158989> ../public/tier0/tsfastpushqueue.h:192
// variables: 3
inline void Push(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this, TrackedReadLock_t* pPushNode)
{
	const char   __FUNCTION__; // 48557
	volatile TrackedReadLock_t* pPrev; // 198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
	}
} /* size: 0, variables: 2 */

// <00158645> ../public/tier0/tsfastpushqueue.h:192
// variables: 3
inline void CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Push(CFiber* pPushNode)
{
	const char   __FUNCTION__; // 48557
	volatile CFiber* pPrev; // 198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
	}
} /* size: 0, variables: 2 */

// <00157ECF> ../public/tier0/tsfastpushqueue.h:192
// variables: 3
inline void CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Push(CEventListNode* pPushNode)
{
	const char   __FUNCTION__; // 48557
	volatile CEventListNode* pPrev; // 198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
	}
} /* size: 0, variables: 2 */

// <003E6733> ../public/tier0/tsfastpushqueue.h:192
// variables: 3
inline void CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Push(ConstantBuffer_t* pPushNode)
{
	const char   __FUNCTION__; // 57524
	volatile ConstantBuffer_t* pPrev; // 198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
	}
} /* size: 0, variables: 2 */

// <00177624> ../public/tier0/tsfastpushqueue.h:192
// variables: 3
inline void CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Push(ConstantBuffer_t* pPushNode)
{
	const char   __FUNCTION__; // 31714
	volatile ConstantBuffer_t* pPrev; // 198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
	}
} /* size: 0, variables: 2 */

// <00176344> ../public/tier0/tsfastpushqueue.h:192
// variables: 3
inline void Push(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPushNode)
{
	const char   __FUNCTION__; // 31714
	volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPrev; // 198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
	}
} /* size: 0, variables: 2 */

// <001783D0> ../public/tier0/tsfastpushqueue.h:204
// variables: 2
inline void CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::PushMultiple(ConstantBuffer_t* pPushNode, ConstantBuffer_t* pTailIfKnown)
{
	ConstantBuffer_t* pTail; // 211
	volatile ConstantBuffer_t* pPrev; // 226
} /* size: 0, variables: 2 */

// <001586C5> ../public/tier0/tsfastpushqueue.h:204
// variables: 2
inline void CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::PushMultiple(CEventListNode* pPushNode, CEventListNode* pTailIfKnown)
{
	CEventListNode* pTail; // 211
	volatile CEventListNode* pPrev; // 226
} /* size: 0, variables: 2 */

// <00174DD4> ../public/tier0/tsfastpushqueue.h:233
// variables: 3
inline void CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::BeginPeek(bool bWaitIfAlreadyPeeked)
{
	const char   __FUNCTION__; // 2469
	{
		volatile ConstantBuffer_t* pPop; // 237
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
	}
} /* size: 0, variables: 1 */

// <001719E7> ../public/tier0/tsfastpushqueue.h:233
// variables: 3
inline void BeginPeek(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this, bool bWaitIfAlreadyPeeked)
{
	const char   __FUNCTION__; // 2469
	{
		volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pPop; // 237
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
	}
} /* size: 0, variables: 1 */

// <00171899> ../public/tier0/tsfastpushqueue.h:233
// variables: 3
inline void BeginPeek(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this, bool bWaitIfAlreadyPeeked)
{
	const char   __FUNCTION__; // 2469
	{
		volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPop; // 237
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
	}
} /* size: 0, variables: 1 */

// <00469379> ../public/tier0/tsfastpushqueue.h:233
// variables: 3
inline void CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext, &CThreadSwapContext::m_pNext>::BeginPeek(bool bWaitIfAlreadyPeeked)
{
	const char   __FUNCTION__; // 53843
	{
		volatile CThreadSwapContext* pPop; // 237
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
	}
} /* size: 0, variables: 1 */

// <002AACF1> ../public/tier0/tsfastpushqueue.h:233
// variables: 3
inline void BeginPeek(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this, bool bWaitIfAlreadyPeeked)
{
	const char   __FUNCTION__; // 54552
	{
		volatile CBlob* pPop; // 237
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
	}
} /* size: 0, variables: 1 */

// <002A963E> ../public/tier0/tsfastpushqueue.h:233
// variables: 3
inline void BeginPeek(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this, bool bWaitIfAlreadyPeeked)
{
	const char   __FUNCTION__; // 54552
	{
		volatile FreeList_t* pPop; // 237
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
	}
} /* size: 0, variables: 1 */

// <001CBD82> ../public/tier0/tsfastpushqueue.h:233
// variables: 3
inline void CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::BeginPeek(bool bWaitIfAlreadyPeeked)
{
	const char   __FUNCTION__; // 64606
	{
		volatile CThreadedJob* pPop; // 237
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
	}
} /* size: 0, variables: 1 */

// <001568E7> ../public/tier0/tsfastpushqueue.h:233
// variables: 3
inline void BeginPeek(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this, bool bWaitIfAlreadyPeeked)
{
	const char   __FUNCTION__; // 42425
	{
		volatile TrackedReadLock_t* pPop; // 237
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
	}
} /* size: 0, variables: 1 */

// <00156891> ../public/tier0/tsfastpushqueue.h:233
// variables: 3
inline void CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::BeginPeek(bool bWaitIfAlreadyPeeked)
{
	const char   __FUNCTION__; // 42425
	{
		volatile CEventListNode* pPop; // 237
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
	}
} /* size: 0, variables: 1 */

// <001566DF> ../public/tier0/tsfastpushqueue.h:233
// variables: 3
inline void CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::BeginPeek(bool bWaitIfAlreadyPeeked)
{
	const char   __FUNCTION__; // 42425
	{
		volatile CFiber* pPop; // 237
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
	}
} /* size: 0, variables: 1 */

// <00172E4E> ../public/tier0/tsfastpushqueue.h:233
// variables: 3
inline void CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::BeginPeek(bool bWaitIfAlreadyPeeked)
{
	const char   __FUNCTION__; // 31844
	{
		volatile ConstantBuffer_t* pPop; // 237
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
	}
} /* size: 0, variables: 1 */

// <0016FC62> ../public/tier0/tsfastpushqueue.h:233
// variables: 3
inline void BeginPeek(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this, bool bWaitIfAlreadyPeeked)
{
	const char   __FUNCTION__; // 31844
	{
		volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pPop; // 237
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
	}
} /* size: 0, variables: 1 */

// <0016FB14> ../public/tier0/tsfastpushqueue.h:233
// variables: 3
inline void BeginPeek(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this, bool bWaitIfAlreadyPeeked)
{
	const char   __FUNCTION__; // 31844
	{
		volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPop; // 237
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
	}
} /* size: 0, variables: 1 */

// <0017457D> ../public/tier0/tsfastpushqueue.h:260
// variables: 3
inline void CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Pop(ConstantBuffer_t* pPeeked)
{
	const char   __FUNCTION__; // 2523
	{
		volatile ConstantBuffer_t* pNext; // 277
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <00171704> ../public/tier0/tsfastpushqueue.h:260
// variables: 3
inline void EndPeek_Pop(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPeeked)
{
	const char   __FUNCTION__; // 2523
	{
		volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pNext; // 277
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <00171640> ../public/tier0/tsfastpushqueue.h:260
// variables: 3
inline void EndPeek_Pop(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pPeeked)
{
	const char   __FUNCTION__; // 2523
	{
		volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pNext; // 277
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <0046930C> ../public/tier0/tsfastpushqueue.h:260
// variables: 3
inline void CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext, &CThreadSwapContext::m_pNext>::EndPeek_Pop(CThreadSwapContext* pPeeked)
{
	const char   __FUNCTION__; // 53736
	{
		volatile CThreadSwapContext* pNext; // 277
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <002A970D> ../public/tier0/tsfastpushqueue.h:260
// variables: 3
inline void EndPeek_Pop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this, CBlob* pPeeked)
{
	const char   __FUNCTION__; // 52934
	{
		volatile CBlob* pNext; // 277
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <002A8FEA> ../public/tier0/tsfastpushqueue.h:260
// variables: 3
inline void EndPeek_Pop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this, FreeList_t* pPeeked)
{
	const char   __FUNCTION__; // 52934
	{
		volatile FreeList_t* pNext; // 277
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <001CBD13> ../public/tier0/tsfastpushqueue.h:260
// variables: 3
inline void CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::EndPeek_Pop(CThreadedJob* pPeeked)
{
	const char   __FUNCTION__; // 64497
	{
		volatile CThreadedJob* pNext; // 277
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <00156770> ../public/tier0/tsfastpushqueue.h:260
// variables: 3
inline void CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::EndPeek_Pop(CEventListNode* pPeeked)
{
	const char   __FUNCTION__; // 38257
	{
		volatile CEventListNode* pNext; // 277
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <00155A65> ../public/tier0/tsfastpushqueue.h:260
// variables: 3
inline void CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::EndPeek_Pop(CFiber* pPeeked)
{
	const char   __FUNCTION__; // 38257
	{
		volatile CFiber* pNext; // 277
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <00155695> ../public/tier0/tsfastpushqueue.h:260
// variables: 3
inline void EndPeek_Pop(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this, TrackedReadLock_t* pPeeked)
{
	const char   __FUNCTION__; // 38257
	{
		volatile TrackedReadLock_t* pNext; // 277
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <001727F8> ../public/tier0/tsfastpushqueue.h:260
// variables: 3
inline void CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Pop(ConstantBuffer_t* pPeeked)
{
	const char   __FUNCTION__; // 31898
	{
		volatile ConstantBuffer_t* pNext; // 277
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
} /* size: 0, variables: 1 */

// <001716DE> ../public/tier0/tsfastpushqueue.h:294
inline void EndPeek_Replace(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPeeked)
{
} /* size: 0 */

// <0017161A> ../public/tier0/tsfastpushqueue.h:294
inline void EndPeek_Replace(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pPeeked)
{
} /* size: 0 */

// <002B1B9A> ../public/tier0/tsfastpushqueue.h:294
void EndPeek_Replace(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this, CBlob* pPeeked)
{
} /* size: 0 */

// <002A9B70> ../public/tier0/tsfastpushqueue.h:294
inline void EndPeek_Replace(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this, CBlob* pPeeked)
{
} /* size: 0 */

// <0015693D> ../public/tier0/tsfastpushqueue.h:294
inline void EndPeek_Replace(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this, TrackedReadLock_t* pPeeked)
{
} /* size: 0 */

// <0015674A> ../public/tier0/tsfastpushqueue.h:294
inline void CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::EndPeek_Replace(CFiber* pPeeked)
{
} /* size: 0 */

// <00153742> ../public/tier0/tsfastpushqueue.h:294
inline void CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::EndPeek_Replace(CEventListNode* pPeeked)
{
} /* size: 0 */

// <00174D83> ../public/tier0/tsfastpushqueue.h:305
// variables: 3
inline void CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Detach(ConstantBuffer_t* pPeeked)
{
	volatile ConstantBuffer_t* pLastPushed; // 313
	{
		volatile ConstantBuffer_t* pNext; // 320
		{
			volatile ConstantBuffer_t* pListIter; // 321
		}
	}
} /* size: 0, variables: 1 */

// <00171996> ../public/tier0/tsfastpushqueue.h:305
// variables: 3
inline void EndPeek_Detach(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this, FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pPeeked)
{
	volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pLastPushed; // 313
	{
		volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pNext; // 320
		{
			volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pListIter; // 321
		}
	}
} /* size: 0, variables: 1 */

// <00171848> ../public/tier0/tsfastpushqueue.h:305
// variables: 3
inline void EndPeek_Detach(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this, FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPeeked)
{
	volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pLastPushed; // 313
	{
		volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pNext; // 320
		{
			volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pListIter; // 321
		}
	}
} /* size: 0, variables: 1 */

// <002AAC7A> ../public/tier0/tsfastpushqueue.h:305
// variables: 3
inline void EndPeek_Detach(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this, CBlob* pPeeked)
{
	volatile CBlob* pLastPushed; // 313
	{
		volatile CBlob* pNext; // 320
		{
			volatile CBlob* pListIter; // 321
		}
	}
} /* size: 0, variables: 1 */

// <002A95ED> ../public/tier0/tsfastpushqueue.h:305
// variables: 3
inline void EndPeek_Detach(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this, FreeList_t* pPeeked)
{
	volatile FreeList_t* pLastPushed; // 313
	{
		volatile FreeList_t* pNext; // 320
		{
			volatile FreeList_t* pListIter; // 321
		}
	}
} /* size: 0, variables: 1 */

// <00156840> ../public/tier0/tsfastpushqueue.h:305
// variables: 3
inline void CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::EndPeek_Detach(CEventListNode* pPeeked)
{
	volatile CEventListNode* pLastPushed; // 313
	{
		volatile CEventListNode* pNext; // 320
		{
			volatile CEventListNode* pListIter; // 321
		}
	}
} /* size: 0, variables: 1 */

// <002A9B96> ../public/tier0/tsfastpushqueue.h:362
// variables: 4
inline void BeginPeek_Lock(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this, volatile CBlob** pTempMemory)
{
	const char   __FUNCTION__; // 55935
	CBlob* pTempNode; // 365
	{
		CBlob* pPeeked; // 372
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 384
	}
} /* size: 0, variables: 2 */

// <002A9B21> ../public/tier0/tsfastpushqueue.h:389
// variable: 1
inline void EndPeek_Unlock(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this, CBlob* pPeeked, volatile CBlob** pTempMemory, void ()(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemor pEndPeekFunc)
{
	{
		CBlob* pTempNode; // 403
	}
} /* size: 0 */

// <00177DE4> ../public/tier0/tsfastpushqueue.h:412
// variable: 1
inline void CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Pop(bool bWaitIfAlreadyPeeked)
{
	ConstantBuffer_t* pPop; // 414
} /* size: 0, variables: 1 */

// <004694FE> ../public/tier0/tsfastpushqueue.h:412
// variable: 1
inline void CTSFastPushQueue_Base<CThreadSwapContext, CThreadSwapContext, CThreadSwapContext, &CThreadSwapContext::m_pNext>::Pop(bool bWaitIfAlreadyPeeked)
{
	CThreadSwapContext* pPop; // 414
} /* size: 0, variables: 1 */

// <002AADF6> ../public/tier0/tsfastpushqueue.h:412
// variable: 1
inline void Pop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this, bool bWaitIfAlreadyPeeked)
{
	CBlob* pPop; // 414
} /* size: 0, variables: 1 */

// <002A9C10> ../public/tier0/tsfastpushqueue.h:412
// variable: 1
inline void Pop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this, bool bWaitIfAlreadyPeeked)
{
	FreeList_t* pPop; // 414
} /* size: 0, variables: 1 */

// <001CD47D> ../public/tier0/tsfastpushqueue.h:412
// variable: 1
inline void CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::Pop(bool bWaitIfAlreadyPeeked)
{
	CThreadedJob* pPop; // 414
} /* size: 0, variables: 1 */

// <0015870E> ../public/tier0/tsfastpushqueue.h:412
// variable: 1
inline void CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Pop(bool bWaitIfAlreadyPeeked)
{
	CEventListNode* pPop; // 414
} /* size: 0, variables: 1 */

// <001581AA> ../public/tier0/tsfastpushqueue.h:412
// variable: 1
inline void CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Pop(bool bWaitIfAlreadyPeeked)
{
	CFiber* pPop; // 414
} /* size: 0, variables: 1 */

// <00157C06> ../public/tier0/tsfastpushqueue.h:412
// variable: 1
inline void Pop(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this, bool bWaitIfAlreadyPeeked)
{
	TrackedReadLock_t* pPop; // 414
} /* size: 0, variables: 1 */

// <00174B2C> ../public/tier0/tsfastpushqueue.h:420
// variable: 1
inline void ConditionalPop<CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FencedPop(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)> >(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this, class& functor)
{
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPeeked; // 422
} /* size: 0, variables: 1 */

// <00174A38> ../public/tier0/tsfastpushqueue.h:420
// variable: 1
inline void ConditionalPop<CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FencedPop(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)> >(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this, class& functor)
{
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pPeeked; // 422
} /* size: 0, variables: 1 */

// <001785FF> ../public/tier0/tsfastpushqueue.h:441
// variable: 1
inline void CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Detach()
{
	ConstantBuffer_t* pDetach; // 443
} /* size: 0, variables: 1 */

// <00174D5D> ../public/tier0/tsfastpushqueue.h:441
// variable: 1
inline void Detach(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this)
{
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pDetach; // 443
} /* size: 0, variables: 1 */

// <00174C90> ../public/tier0/tsfastpushqueue.h:441
// variable: 1
inline void Detach(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this)
{
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pDetach; // 443
} /* size: 0, variables: 1 */

// <002AACCB> ../public/tier0/tsfastpushqueue.h:441
// variable: 1
inline void Detach(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this)
{
	FreeList_t* pDetach; // 443
} /* size: 0, variables: 1 */

// <00158829> ../public/tier0/tsfastpushqueue.h:441
// variable: 1
inline void CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Detach()
{
	CEventListNode* pDetach; // 443
} /* size: 0, variables: 1 */

// <00177CED> ../public/tier0/tsfastpushqueue.h:502
// variables: 5
inline void IterateDetachedList<CRenderDeviceBase::ShutdownDynamicConstantBufferPools()::<lambda(ConstantBuffer_t*)>, CRenderDeviceBase::ShutdownDynamicConstantBufferPools()::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* pList, class& functor, class& removedItemFunctor)
{
	ConstantBuffer_t* pIter; // 509
	ConstantBuffer_t* pHead; // 510
	volatile ConstantBuffer_t** ppWriteNextAvailableItem; // 511
	{
		ConstantBuffer_t* pNext; // 515
		IterResult_t iterateResult; // 522
	}
} /* size: 0, variables: 3 */

// <00174B7A> ../public/tier0/tsfastpushqueue.h:502
// variables: 5
inline void IterateDetachedList<CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)>&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::IterateDetachedList<CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t*, CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)>&&)::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* pList, class& functor, class& removedItemFunctor)
{
	ConstantBuffer_t* pIter; // 509
	ConstantBuffer_t* pHead; // 510
	volatile ConstantBuffer_t** ppWriteNextAvailableItem; // 511
	{
		ConstantBuffer_t* pNext; // 515
		IterResult_t iterateResult; // 522
	}
} /* size: 0, variables: 3 */

// <00174A86> ../public/tier0/tsfastpushqueue.h:502
// variables: 5
inline void IterateDetachedList<CRenderDeviceBase::OnPresentCompleted(SwapChainHandle_t, int, CDeviceFence*)::<lambda(ConstantBuffer_t*)>&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::IterateDetachedList<CRenderDeviceBase::OnPresentCompleted(SwapChainHandle_t, int, CDeviceFence*)::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t*, CRenderDeviceBase::OnPresentCompleted(SwapChainHandle_t, int, CDeviceFence*)::<lambda(ConstantBuffer_t*)>&&)::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* pList, class& functor, class& removedItemFunctor)
{
	ConstantBuffer_t* pIter; // 509
	ConstantBuffer_t* pHead; // 510
	volatile ConstantBuffer_t** ppWriteNextAvailableItem; // 511
	{
		ConstantBuffer_t* pNext; // 515
		IterResult_t iterateResult; // 522
	}
} /* size: 0, variables: 3 */

// <00174992> ../public/tier0/tsfastpushqueue.h:502
// variables: 5
inline void IterateDetachedList<CRenderDeviceBase::TryRecyclingPooledConstantBuffers()::<lambda(ConstantBuffer_t*)>&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::IterateDetachedList<CRenderDeviceBase::TryRecyclingPooledConstantBuffers()::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t*, CRenderDeviceBase::TryRecyclingPooledConstantBuffers()::<lambda(ConstantBuffer_t*)>&&)::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* pList, class& functor, class& removedItemFunctor)
{
	ConstantBuffer_t* pIter; // 509
	ConstantBuffer_t* pHead; // 510
	volatile ConstantBuffer_t** ppWriteNextAvailableItem; // 511
	{
		ConstantBuffer_t* pNext; // 515
		IterResult_t iterateResult; // 522
	}
} /* size: 0, variables: 3 */

// <00171902> ../public/tier0/tsfastpushqueue.h:502
// variables: 5
inline void IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)>&, CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, &CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>::m_pNext>::IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)> >(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*, CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)>&&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)> >(FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pList, class& functor, class& removedItemFunctor)
{
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pIter; // 509
	FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pHead; // 510
	volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>** ppWriteNextAvailableItem; // 511
	{
		FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pNext; // 515
		IterResult_t iterateResult; // 522
	}
} /* size: 0, variables: 3 */

// <001717B4> ../public/tier0/tsfastpushqueue.h:502
// variables: 5
inline void IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)>&, CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, &CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>::m_pNext>::IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)> >(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*, CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)>&&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)> >(FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pList, class& functor, class& removedItemFunctor)
{
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pIter; // 509
	FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pHead; // 510
	volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>** ppWriteNextAvailableItem; // 511
	{
		FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pNext; // 515
		IterResult_t iterateResult; // 522
	}
} /* size: 0, variables: 3 */

// <002A935A> ../public/tier0/tsfastpushqueue.h:502
// variables: 5
inline void IterateDetachedList<CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::FreeList_t*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, &CUtlMemoryPoolBase::FreeList_t::pNext>::IterateDetachedList<CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::FreeList_t*)> >(CUtlMemoryPoolBase::FreeList_t*, CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::FreeList_t*)>&&)::<lambda(CUtlMemoryPoolBase::FreeList_t*)> >(FreeList_t* pList, class& functor, class& removedItemFunctor)
{
	FreeList_t* pIter; // 509
	FreeList_t* pHead; // 510
	volatile FreeList_t** ppWriteNextAvailableItem; // 511
	{
		FreeList_t* pNext; // 515
		IterResult_t iterateResult; // 522
	}
} /* size: 0, variables: 3 */

// <002A928B> ../public/tier0/tsfastpushqueue.h:502
// variables: 5
inline void IterateDetachedList<CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::CBlob*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryPoolBase::CBlob::m_pNext>::IterateDetachedList<CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CUtlMemoryPoolBase::CBlob*, CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::CBlob*)>&&)::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CBlob* pList, class& functor, class& removedItemFunctor)
{
	CBlob* pIter; // 509
	CBlob* pHead; // 510
	volatile CBlob** ppWriteNextAvailableItem; // 511
	{
		CBlob* pNext; // 515
		IterResult_t iterateResult; // 522
	}
} /* size: 0, variables: 3 */

// <002A90C1> ../public/tier0/tsfastpushqueue.h:502
// variables: 5
inline void IterateDetachedList<CUtlMemoryPoolBase::InternalClear(CBlob*, FreeList_t*)::<lambda(CUtlMemoryPoolBase::CBlob*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryPoolBase::CBlob::m_pNext>::IterateDetachedList<CUtlMemoryPoolBase::InternalClear(CBlob*, FreeList_t*)::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CUtlMemoryPoolBase::CBlob*, CUtlMemoryPoolBase::InternalClear(CBlob*, FreeList_t*)::<lambda(CUtlMemoryPoolBase::CBlob*)>&&)::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CBlob* pList, class& functor, class& removedItemFunctor)
{
	CBlob* pIter; // 509
	CBlob* pHead; // 510
	volatile CBlob** ppWriteNextAvailableItem; // 511
	{
		CBlob* pNext; // 515
		IterResult_t iterateResult; // 522
	}
} /* size: 0, variables: 3 */

// <0015596D> ../public/tier0/tsfastpushqueue.h:502
// variables: 5
inline void IterateDetachedList<CFiber::ResumeJob(void*)::<lambda(CEventListNode*)>&, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::IterateDetachedList<CFiber::ResumeJob(void*)::<lambda(CEventListNode*)> >(CEventListNode*, CFiber::ResumeJob(void*)::<lambda(CEventListNode*)>&&)::<lambda(CEventListNode*)> >(CEventListNode* pList, class& functor, class& removedItemFunctor)
{
	CEventListNode* pIter; // 509
	CEventListNode* pHead; // 510
	volatile CEventListNode** ppWriteNextAvailableItem; // 511
	{
		CEventListNode* pNext; // 515
		IterResult_t iterateResult; // 522
	}
} /* size: 0, variables: 3 */

// <001557DD> ../public/tier0/tsfastpushqueue.h:502
// variables: 5
inline void IterateDetachedList<CEventRWLock::UnlockWrite_LockForRead(CEventListNode&)::<lambda(CEventListNode*)>&, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::IterateDetachedList<CEventRWLock::UnlockWrite_LockForRead(CEventListNode&)::<lambda(CEventListNode*)> >(CEventListNode*, CEventRWLock::UnlockWrite_LockForRead(CEventListNode&)::<lambda(CEventListNode*)>&&)::<lambda(CEventListNode*)> >(CEventListNode* pList, class& functor, class& removedItemFunctor)
{
	CEventListNode* pIter; // 509
	CEventListNode* pHead; // 510
	volatile CEventListNode** ppWriteNextAvailableItem; // 511
	{
		CEventListNode* pNext; // 515
		IterResult_t iterateResult; // 522
	}
} /* size: 0, variables: 3 */

// <0017835D> ../public/tier0/tsfastpushqueue.h:545
inline void IterateDetachedList<CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* pList, class& functor)
{
} /* size: 0 */

// <001781BD> ../public/tier0/tsfastpushqueue.h:545
inline void IterateDetachedList<CRenderDeviceBase::OnPresentCompleted(SwapChainHandle_t, int, CDeviceFence*)::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* pList, class& functor)
{
} /* size: 0 */

// <001780A4> ../public/tier0/tsfastpushqueue.h:545
inline void IterateDetachedList<CRenderDeviceBase::TryRecyclingPooledConstantBuffers()::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* pList, class& functor)
{
} /* size: 0 */

// <00174CBC> ../public/tier0/tsfastpushqueue.h:545
inline void IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)> >(FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pList, class& functor)
{
} /* size: 0 */

// <00174C14> ../public/tier0/tsfastpushqueue.h:545
inline void IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)> >(FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pList, class& functor)
{
} /* size: 0 */

// <002AA6E2> ../public/tier0/tsfastpushqueue.h:545
inline void IterateDetachedList<CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::FreeList_t*)> >(FreeList_t* pList, class& functor)
{
} /* size: 0 */

// <002AA457> ../public/tier0/tsfastpushqueue.h:545
inline void IterateDetachedList<CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CBlob* pList, class& functor)
{
} /* size: 0 */

// <002A9D8B> ../public/tier0/tsfastpushqueue.h:545
inline void IterateDetachedList<CUtlMemoryPoolBase::InternalClear(CBlob*, FreeList_t*)::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CBlob* pList, class& functor)
{
} /* size: 0 */

// <00157F6E> ../public/tier0/tsfastpushqueue.h:545
inline void IterateDetachedList<CFiber::ResumeJob(void*)::<lambda(CEventListNode*)> >(CEventListNode* pList, class& functor)
{
} /* size: 0 */

// <00157D9F> ../public/tier0/tsfastpushqueue.h:545
inline void IterateDetachedList<CEventRWLock::UnlockWrite_LockForRead(CEventListNode&)::<lambda(CEventListNode*)> >(CEventListNode* pList, class& functor)
{
} /* size: 0 */

// <002A7240> ../public/tier0/tsfastpushqueue.h:560
// variables: 8
inline void IteratePeekedList<CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryPoolBase::CBlob::m_pNext>::IterateInPlace<CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)> >(bool, CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)>&&)::<lambda(CUtlMemoryPoolBase::CBlob*)>&>(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this, bool bEndPeekDuringIteration, CBlob* pPeeked, class& iterationFunctor, class& removedItemFunctor)
{
	volatile CBlob* pRemainingPeekHead; // 569
	volatile volatile CBlob** ppWriteNextAvailableItem; // 570
	volatile CBlob* pLastKept; // 571
	volatile CBlob* pListIter; // 573
	volatile CBlob* pNext; // 574
	{
		IterResult_t iterateResult; // 577
		bool bEndOfList; // 582
		bool bContinue; // 584
	}
} /* size: 0, variables: 5 */

// <002A597B> ../public/tier0/tsfastpushqueue.h:560
// variables: 8
inline void IteratePeekedList<CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryPoolBase::CBlob::m_pNext>::IterateInPlace<CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)> >(bool, CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)>&&)::<lambda(CUtlMemoryPoolBase::CBlob*)>&>(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this, bool bEndPeekDuringIteration, CBlob* pPeeked, class& iterationFunctor, class& removedItemFunctor)
{
	volatile CBlob* pRemainingPeekHead; // 569
	volatile volatile CBlob** ppWriteNextAvailableItem; // 570
	volatile CBlob* pLastKept; // 571
	volatile CBlob* pListIter; // 573
	volatile CBlob* pNext; // 574
	{
		IterResult_t iterateResult; // 577
		bool bEndOfList; // 582
		bool bContinue; // 584
	}
} /* size: 0, variables: 5 */

// <00156609> ../public/tier0/tsfastpushqueue.h:560
// variables: 8
inline void CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::IteratePeekedList<CFiberJobPool::GetWaitingFiberJob(bool bEndPeekDuringIteration, CFiber* pPeeked, class& iterationFunctor, class& removedItemFunctor)
{
	volatile CFiber* pRemainingPeekHead; // 569
	volatile volatile CFiber** ppWriteNextAvailableItem; // 570
	volatile CFiber* pLastKept; // 571
	volatile CFiber* pListIter; // 573
	volatile CFiber* pNext; // 574
	{
		IterResult_t iterateResult; // 577
		bool bEndOfList; // 582
		bool bContinue; // 584
	}
} /* size: 0, variables: 5 */

// <0015405A> ../public/tier0/tsfastpushqueue.h:560
// variables: 8
inline void IteratePeekedList<CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&, CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, &CEventRWLock_Debuggable<true>::TrackedReadLock_t::pNext>::IterateInPlace<CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(bool, CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&>(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this, bool bEndPeekDuringIteration, TrackedReadLock_t* pPeeked, class& iterationFunctor, class& removedItemFunctor)
{
	volatile TrackedReadLock_t* pRemainingPeekHead; // 569
	volatile volatile TrackedReadLock_t** ppWriteNextAvailableItem; // 570
	volatile TrackedReadLock_t* pLastKept; // 571
	volatile TrackedReadLock_t* pListIter; // 573
	volatile TrackedReadLock_t* pNext; // 574
	{
		IterResult_t iterateResult; // 577
		bool bEndOfList; // 582
		bool bContinue; // 584
	}
} /* size: 0, variables: 5 */

// <00153F6C> ../public/tier0/tsfastpushqueue.h:560
// variables: 8
inline void IteratePeekedList<CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&, CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, &CEventRWLock_Debuggable<true>::TrackedReadLock_t::pNext>::IterateInPlace<CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(bool, CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&>(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this, bool bEndPeekDuringIteration, TrackedReadLock_t* pPeeked, class& iterationFunctor, class& removedItemFunctor)
{
	volatile TrackedReadLock_t* pRemainingPeekHead; // 569
	volatile volatile TrackedReadLock_t** ppWriteNextAvailableItem; // 570
	volatile TrackedReadLock_t* pLastKept; // 571
	volatile TrackedReadLock_t* pListIter; // 573
	volatile TrackedReadLock_t* pNext; // 574
	{
		IterResult_t iterateResult; // 577
		bool bEndOfList; // 582
		bool bContinue; // 584
	}
} /* size: 0, variables: 5 */

// <001537BB> ../public/tier0/tsfastpushqueue.h:560
// variables: 8
inline void IteratePeekedList<CTSFastPushQueue_Base<CFiber, CFiber, CFiber, CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::&CFiber::m_pNext>::Remove(bool bEndPeekDuringIteration, CFiber* pPeeked, class& iterationFunctor, class& removedItemFunctor)
{
	volatile CFiber* pRemainingPeekHead; // 569
	volatile volatile CFiber** ppWriteNextAvailableItem; // 570
	volatile CFiber* pLastKept; // 571
	volatile CFiber* pListIter; // 573
	volatile CFiber* pNext; // 574
	{
		IterResult_t iterateResult; // 577
		bool bEndOfList; // 582
		bool bContinue; // 584
	}
} /* size: 0, variables: 5 */

// <00153666> ../public/tier0/tsfastpushqueue.h:560
// variables: 8
inline void IteratePeekedList<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::&CEventListNode::m_pNext>::Remove(bool bEndPeekDuringIteration, CEventListNode* pPeeked, class& iterationFunctor, class& removedItemFunctor)
{
	volatile CEventListNode* pRemainingPeekHead; // 569
	volatile volatile CEventListNode** ppWriteNextAvailableItem; // 570
	volatile CEventListNode* pLastKept; // 571
	volatile CEventListNode* pListIter; // 573
	volatile CEventListNode* pNext; // 574
	{
		IterResult_t iterateResult; // 577
		bool bEndOfList; // 582
		bool bContinue; // 584
	}
} /* size: 0, variables: 5 */

// <002A905D> ../public/tier0/tsfastpushqueue.h:675
inline void IterateInPlace<CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryPoolBase::CBlob::m_pNext>::IterateInPlace<CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)> >(bool, CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)>&&)::<lambda(CUtlMemoryPoolBase::CBlob*)> >(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this, bool bEndPeekDuringIteration, class& iterationFunctor, class& removedItemFunctor)
{
} /* size: 0 */

// <002A80C9> ../public/tier0/tsfastpushqueue.h:675
inline void IterateInPlace<CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryPoolBase::CBlob::m_pNext>::IterateInPlace<CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)> >(bool, CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)>&&)::<lambda(CUtlMemoryPoolBase::CBlob*)> >(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this, bool bEndPeekDuringIteration, class& iterationFunctor, class& removedItemFunctor)
{
} /* size: 0 */

// <001585CD> ../public/tier0/tsfastpushqueue.h:675
inline void CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::IterateInPlace<CFiberJobPool::GetWaitingFiberJob(bool bEndPeekDuringIteration, class& iterationFunctor, class& removedItemFunctor)
{
} /* size: 0 */

// <00155779> ../public/tier0/tsfastpushqueue.h:675
inline void IterateInPlace<CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&, CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, &CEventRWLock_Debuggable<true>::TrackedReadLock_t::pNext>::IterateInPlace<CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(bool, CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this, bool bEndPeekDuringIteration, class& iterationFunctor, class& removedItemFunctor)
{
} /* size: 0 */

// <00155721> ../public/tier0/tsfastpushqueue.h:675
inline void IterateInPlace<CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&, CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, &CEventRWLock_Debuggable<true>::TrackedReadLock_t::pNext>::IterateInPlace<CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(bool, CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this, bool bEndPeekDuringIteration, class& iterationFunctor, class& removedItemFunctor)
{
} /* size: 0 */

// <00154810> ../public/tier0/tsfastpushqueue.h:675
inline void IterateInPlace<CTSFastPushQueue_Base<CFiber, CFiber, CFiber, CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::&CFiber::m_pNext>::Remove(bool bEndPeekDuringIteration, class& iterationFunctor, class& removedItemFunctor)
{
} /* size: 0 */

// <0015417B> ../public/tier0/tsfastpushqueue.h:675
inline void IterateInPlace<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::&CEventListNode::m_pNext>::Remove(bool bEndPeekDuringIteration, class& iterationFunctor, class& removedItemFunctor)
{
} /* size: 0 */

// <002A9CD1> ../public/tier0/tsfastpushqueue.h:682
inline void IterateInPlace<CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)> >(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this, bool bEndPeekDuringIteration, class& iterationFunctor)
{
} /* size: 0 */

// <002A9A54> ../public/tier0/tsfastpushqueue.h:682
inline void IterateInPlace<CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)> >(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this, bool bEndPeekDuringIteration, class& iterationFunctor)
{
} /* size: 0 */

// <00157CF4> ../public/tier0/tsfastpushqueue.h:682
inline void IterateInPlace<CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this, bool bEndPeekDuringIteration, class& iterationFunctor)
{
} /* size: 0 */

// <00157C6F> ../public/tier0/tsfastpushqueue.h:682
inline void IterateInPlace<CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this, bool bEndPeekDuringIteration, class& iterationFunctor)
{
} /* size: 0 */

// <001562BC> ../public/tier0/tsfastpushqueue.h:682
inline void IterateInPlace<CTSFastPushQueue_Base<CFiber, CFiber, CFiber, CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::&CFiber::m_pNext>::Remove(bool bEndPeekDuringIteration, class& iterationFunctor)
{
} /* size: 0 */

// <00155877> ../public/tier0/tsfastpushqueue.h:682
inline void IterateInPlace<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::&CEventListNode::m_pNext>::Remove(bool bEndPeekDuringIteration, class& iterationFunctor)
{
} /* size: 0 */

// <00158418> ../public/tier0/tsfastpushqueue.h:688
// variable: 1
inline void CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(CFiber* pRemove)
{
	bool bRetVal; // 690
} /* size: 0, variables: 1 */

// <00157E10> ../public/tier0/tsfastpushqueue.h:688
// variable: 1
inline void CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode* pRemove)
{
	bool bRetVal; // 690
} /* size: 0, variables: 1 */

