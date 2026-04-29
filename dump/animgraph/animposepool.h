
//
// animgraph/animposepool.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <0158B63D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animposepool.h:14
void CAnimPosePool::~CAnimPosePool()
{
} /* size: 0 */

// <0158B621> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animposepool.h:14
inline void CAnimPosePool::~CAnimPosePool()
{
} /* size: 0 */

// <00F3061C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animposepool.h:14
// member functions: 9
// member variables: 2
// vtable entry: 1
// class size: 88
class CAnimPosePool : public CEnduringClassMemoryPool<CAnimPose> {
public:
	/* class CEnduringClassMemoryPool<CAnimPose> <ancestor>; */ /* 0 80 */
	void CAnimPosePool(CAnimPosePool* , CAnimPosePool& );
	void CAnimPosePool(CAnimPosePool* , CAnimPosePool& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animposepool.cpp:8 */
	void CAnimPosePool(CAnimPosePool* , const CAnimSkeletonConstPtr& , uint32_t);
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animposepool.cpp:16 */
	virtual void InitObject(CAnimPosePool* , CAnimPose& );
	CAnimSkeletonConstPtr m_pSkeleton; /* 80 8 */
	void CAnimPosePool(class CAnimPosePool *, class CAnimPosePool &); /* linkage=_ZN13CAnimPosePoolC4EOS_ */
	void CAnimPosePool(class CAnimPosePool *, class CAnimPosePool &); /* linkage=_ZN13CAnimPosePoolC4ERS_ */
	void CAnimPosePool(class CAnimPosePool *, const CAnimSkeletonConstPtr  &, uint32_t); /* linkage=_ZN13CAnimPosePoolC4ERK9CSmartPtrIK13CAnimSkeleton17CRefCountAccessorEj */
	virtual void InitObject(class CAnimPosePool *, class CAnimPose &); /* linkage=_ZN13CAnimPosePool10InitObjectER9CAnimPose */
	void ~CAnimPosePool(class CAnimPosePool *); /* linkage=_ZN13CAnimPosePoolD4Ev */
};

// <01565891> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animposepool.h:17
void CAnimPosePool::CAnimPosePool(const CAnimSkeletonConstPtr& pSkeleton, uint32_t blockSize)
{
} /* size: 0 */

