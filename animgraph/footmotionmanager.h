
//
// animgraph/footmotionmanager.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <00F3BDBB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.h:19
// function calls: 7
void CFootMotionManager::~CFootMotionManager()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::~CSmartPtr(); // 19
} /* size: 41, inline expansions: 7 (97 bytes) */

// <00F3BBA2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.h:19
// function calls: 10
void CFootMotionManager::~CFootMotionManager()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::~CSmartPtr(); // 19
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 19
	CFootMotionManager::~CFootMotionManager(); // 19
} /* size: 85, inline expansions: 10 (157 bytes) */

// <00F3BB86> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.h:19
inline void CFootMotionManager::~CFootMotionManager()
{
} /* size: 0 */

// <00F31E8D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.h:19
// member functions: 34
// member variables: 3
// class size: 32
class CFootMotionManager : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CFootMotionManager(CFootMotionManager* , CFootMotionManager& );
	void CFootMotionManager(CFootMotionManager* , const CFootMotionManager& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:12 */
	void CFootMotionManager(CFootMotionManager* , const CAnimGraphFixedData& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:26 */
	void SetContext(CFootMotionManager* , CAnimGraphUpdateContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:32 */
	bool HadFootData(const CFootMotionManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:38 */
	int GetFootCount(const CFootMotionManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:51 */
	CFootTrajectory GetCurrentFootTrajectory(const CFootMotionManager* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:64 */
	CFootTrajectory EstimateNewFootTrajectory(const CFootMotionManager* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:77 */
	VectorAligned GetNextPosition(const CFootMotionManager* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:90 */
	VectorAligned GetPrevPosition(const CFootMotionManager* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:103 */
	VectorAligned GetCurrentPosition(const CFootMotionManager* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:116 */
	VectorAligned EstimateNewFootPosition(const CFootMotionManager* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:129 */
	VectorAligned EstimateNewFootPositionFlattened(const CFootMotionManager* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:142 */
	CTransform GetPrevTransform(const CFootMotionManager* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:155 */
	VectorAligned GetFootPositionForTrajectory(const CFootMotionManager* , int, const CFootTrajectory& );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:164 */
	const CFootLockUpdateNode* GetFootLockNode(const CFootMotionManager* );
	CAnimGraphUpdateContextPtr m_pUpdateContext; /* 16 8 */
	AnimNodeID m_footLockNodeID; /* 24 4 */
	virtual void ~CFootMotionManager(CFootMotionManager* );
	void SetContext(class CFootMotionManager *, class CAnimGraphUpdateContext *); /* linkage=_ZN18CFootMotionManager10SetContextEP23CAnimGraphUpdateContext */
	void CFootMotionManager(class CFootMotionManager *, const class CAnimGraphFixedData  &); /* linkage=_ZN18CFootMotionManagerC4ERK19CAnimGraphFixedData */
	void CFootMotionManager(class CFootMotionManager *, class CFootMotionManager &); /* linkage=_ZN18CFootMotionManagerC4EOS_ */
	void CFootMotionManager(class CFootMotionManager *, const class CFootMotionManager  &); /* linkage=_ZN18CFootMotionManagerC4ERKS_ */
	/* <f9f5d0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:32 */
	bool HadFootData(const class CFootMotionManager  *); /* linkage=_ZNK18CFootMotionManager11HadFootDataEv */
	int GetFootCount(const class CFootMotionManager  *); /* linkage=_ZNK18CFootMotionManager12GetFootCountEv */
	class CFootTrajectory GetCurrentFootTrajectory(const class CFootMotionManager  *, int); /* linkage=_ZNK18CFootMotionManager24GetCurrentFootTrajectoryEi */
	class CFootTrajectory EstimateNewFootTrajectory(const class CFootMotionManager  *, int); /* linkage=_ZNK18CFootMotionManager25EstimateNewFootTrajectoryEi */
	/* <f9f62a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:77 */
	class VectorAligned GetNextPosition(const class CFootMotionManager  *, int); /* linkage=_ZNK18CFootMotionManager15GetNextPositionEi */
	/* <f9f776> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.cpp:90 */
	class VectorAligned GetPrevPosition(const class CFootMotionManager  *, int); /* linkage=_ZNK18CFootMotionManager15GetPrevPositionEi */
	class VectorAligned GetCurrentPosition(const class CFootMotionManager  *, int); /* linkage=_ZNK18CFootMotionManager18GetCurrentPositionEi */
	class VectorAligned EstimateNewFootPosition(const class CFootMotionManager  *, int); /* linkage=_ZNK18CFootMotionManager23EstimateNewFootPositionEi */
	class VectorAligned EstimateNewFootPositionFlattened(const class CFootMotionManager  *, int); /* linkage=_ZNK18CFootMotionManager32EstimateNewFootPositionFlattenedEi */
	class CTransform GetPrevTransform(const class CFootMotionManager  *, int); /* linkage=_ZNK18CFootMotionManager16GetPrevTransformEi */
	class VectorAligned GetFootPositionForTrajectory(const class CFootMotionManager  *, int, const class CFootTrajectory  &); /* linkage=_ZNK18CFootMotionManager28GetFootPositionForTrajectoryEiRK15CFootTrajectory */
	const class CFootLockUpdateNode  * GetFootLockNode(const class CFootMotionManager  *); /* linkage=_ZNK18CFootMotionManager15GetFootLockNodeEv */
	virtual void ~CFootMotionManager(class CFootMotionManager *); /* linkage=_ZN18CFootMotionManagerD4Ev */
};

// <00DF50C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footmotionmanager.h:22
void CFootMotionManager::CFootMotionManager(const CAnimGraphFixedData& fixedData)
{
} /* size: 0 */

