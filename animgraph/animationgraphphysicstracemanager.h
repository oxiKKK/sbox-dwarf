
//
// animgraph/animationgraphphysicstracemanager.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <00DFCD71> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.h:13
// function calls: 7
void CAnimationGraphPhysicsTraceManager::~CAnimationGraphPhysicsTraceManager()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphInstanceContext>(CAnimGraphInstanceContext* pObj); // 344
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::~CSmartPtr(); // 13
} /* size: 49, inline expansions: 7 (97 bytes) */

// <00DFCB30> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.h:13
// function calls: 11
void CAnimationGraphPhysicsTraceManager::~CAnimationGraphPhysicsTraceManager()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphInstanceContext>(CAnimGraphInstanceContext* pObj); // 344
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::~CSmartPtr(); // 13
	IAnimationGraphPhysicsTraceManager::~IAnimationGraphPhysicsTraceManager(); // 13
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 13
	CAnimationGraphPhysicsTraceManager::~CAnimationGraphPhysicsTraceManager(); // 13
} /* size: 93, inline expansions: 11 (165 bytes) */

// <00DFCB14> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.h:13
inline void CAnimationGraphPhysicsTraceManager::~CAnimationGraphPhysicsTraceManager()
{
} /* size: 0 */

// <00DDDD79> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.h:13
// member functions: 20
// member variables: 3
// vtable entries: 6
// class size: 32
class CAnimationGraphPhysicsTraceManager : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >, public IAnimationGraphPhysicsTraceManager {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* class IAnimationGraphPhysicsTraceManager <ancestor>; */ /* 16 8 */
	void CAnimationGraphPhysicsTraceManager(CAnimationGraphPhysicsTraceManager* , CAnimationGraphPhysicsTraceManager& );
	void CAnimationGraphPhysicsTraceManager(CAnimationGraphPhysicsTraceManager* , const CAnimationGraphPhysicsTraceManager& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:6 */
	void CAnimationGraphPhysicsTraceManager(CAnimationGraphPhysicsTraceManager* , const CAnimGraphInstanceContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:13 */
	virtual int GetTraceRequestCount(const CAnimationGraphPhysicsTraceManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:19 */
	virtual CTraceRequest& GetTraceRequest(CAnimationGraphPhysicsTraceManager* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:25 */
	virtual CTraceRequest& GetTraceRequest(CAnimationGraphPhysicsTraceManager* , TraceRequestID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:31 */
	virtual const CTraceRequest& GetTraceRequest(const CAnimationGraphPhysicsTraceManager* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:37 */
	virtual const CTraceRequest& GetTraceRequest(const CAnimationGraphPhysicsTraceManager* , TraceRequestID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:43 */
	virtual void ClearDirtyTraceRequests(CAnimationGraphPhysicsTraceManager* );
private:
	CAnimGraphInstanceContextPtr m_pGraphContext; /* 24 8 */
	virtual void ~CAnimationGraphPhysicsTraceManager(CAnimationGraphPhysicsTraceManager* );
	void CAnimationGraphPhysicsTraceManager(class CAnimationGraphPhysicsTraceManager *, class CAnimationGraphPhysicsTraceManager &); /* linkage=_ZN34CAnimationGraphPhysicsTraceManagerC4EOS_ */
	void CAnimationGraphPhysicsTraceManager(class CAnimationGraphPhysicsTraceManager *, const class CAnimationGraphPhysicsTraceManager  &); /* linkage=_ZN34CAnimationGraphPhysicsTraceManagerC4ERKS_ */
	void CAnimationGraphPhysicsTraceManager(class CAnimationGraphPhysicsTraceManager *, const CAnimGraphInstanceContextPtr  &); /* linkage=_ZN34CAnimationGraphPhysicsTraceManagerC4ERK9CSmartPtrI25CAnimGraphInstanceContext17CRefCountAccessorE */
	/* <e8a93c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:13 */
	virtual int GetTraceRequestCount(const class CAnimationGraphPhysicsTraceManager  *); /* linkage=_ZNK34CAnimationGraphPhysicsTraceManager20GetTraceRequestCountEv */
	/* <e8aa09> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:19 */
	virtual class CTraceRequest & GetTraceRequest(class CAnimationGraphPhysicsTraceManager *, int); /* linkage=_ZN34CAnimationGraphPhysicsTraceManager15GetTraceRequestEi */
	/* <e8aaeb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphphysicstracemanager.cpp:25 */
	virtual class CTraceRequest & GetTraceRequest(class CAnimationGraphPhysicsTraceManager *, class TraceRequestID); /* linkage=_ZN34CAnimationGraphPhysicsTraceManager15GetTraceRequestE14TraceRequestID */
	virtual const class CTraceRequest  & GetTraceRequest(const class CAnimationGraphPhysicsTraceManager  *, int); /* linkage=_ZNK34CAnimationGraphPhysicsTraceManager15GetTraceRequestEi */
	virtual const class CTraceRequest  & GetTraceRequest(const class CAnimationGraphPhysicsTraceManager  *, class TraceRequestID); /* linkage=_ZNK34CAnimationGraphPhysicsTraceManager15GetTraceRequestE14TraceRequestID */
	virtual void ClearDirtyTraceRequests(class CAnimationGraphPhysicsTraceManager *); /* linkage=_ZN34CAnimationGraphPhysicsTraceManager23ClearDirtyTraceRequestsEv */
	virtual void ~CAnimationGraphPhysicsTraceManager(class CAnimationGraphPhysicsTraceManager *); /* linkage=_ZN34CAnimationGraphPhysicsTraceManagerD4Ev */
};

