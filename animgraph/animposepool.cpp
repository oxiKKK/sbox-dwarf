
//
// animgraph/animposepool.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//

// <00F72735> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animposepool.cpp:8
// function calls: 24
void CAnimPosePool::CAnimPosePool(const CAnimSkeletonConstPtr& pSkeleton, uint32_t blockSize)
{
	CUtlMemory<CAnimPose::ValidateGrowSize(); // 475
	CUtlMemory<CAnimPose::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 106
	CUtlStack<CAnimPose::ResetDbgInfo(); // 108
	CUtlStack<CAnimPose::CUtlStack(
			int growSize,
			int initSize);  // 574
	ValidateAlignment<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemoryPool<CAnimPose>::Block> > >(void); // 347
	CUtlMemoryConservative(const CUtlMemoryConservative<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringCla this,
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemory this); // 530
	CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringClassMemory this,
			int growSize,
			int initCapacity);  // 515
	CUtlVectorConservative(const CUtlVectorConservative<std::unique_ptr<CEnduringClassMemoryPool<CAnimPose>::Block, std::default_delete<CEnduringCla this,
				int growSize,
				int initCapacity);  // 574
	CEnduringClassMemoryPool<CAnimPose>::CEnduringClassMemoryPool(
				uint32_t blockSize);  // 10
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<const CAnimSkeleton>(const CAnimSkeleton* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimSkeleton>(const CAnimSkeleton* pObj); // 370
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator=(
			const CAnimSkeleton* pObj);  // 406
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator=(
			const CSmartPtr<const CAnimSkeleton, CRefCountAccessor>& other);  // 328
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<const CAnimSkeleton, CRefCountAccessor>& other);  // 10
} /* size: 172, inline expansions: 24 (417 bytes) */

// <00F72704> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animposepool.cpp:8
void CAnimPosePool::CAnimPosePool(const CAnimSkeletonConstPtr& pSkeleton, uint32_t blockSize)
{
} /* size: 0 */

// <00F7269C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animposepool.cpp:16
void CAnimPosePool::InitObject(CAnimPose& pose)
{
} /* size: 19 */

