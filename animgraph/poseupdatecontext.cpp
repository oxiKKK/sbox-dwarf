
//
// animgraph/poseupdatecontext.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 31
//

// <0158B8F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:11
// variables: 8
// function calls: 46
void CDecompressionContext::CDecompressionContext(HModel hModel)
{
	{
		{
			const CAnimContainer* pContainer; // 19
			{
				const CUtlVector<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >& channelData; // 22
				{
					int i; // 23
					{
					}
				}
			}
		}
	}
	{
		CWeakHandle<InfoForResourceTypeCModel>::GetData(); // 12
		ValidateAlignment<Vector>(void); // 347
		CUtlMemoryConservative<Vector>::CUtlMemoryConservative(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<Vector, CUtlMemoryConservative<Vector> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Vector, CUtlMemoryConservative<Vector> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 515
		CUtlVectorConservative<Vector>::CUtlVectorConservative(
					int growSize,
					int initCapacity);  // 13
		ValidateAlignment<Quaternion>(void); // 347
		CUtlMemoryConservative<Quaternion>::CUtlMemoryConservative(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<Quaternion, CUtlMemoryConservative<Quaternion> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Quaternion, CUtlMemoryConservative<Quaternion> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 515
		CUtlVectorConservative<Quaternion>::CUtlVectorConservative(
					int growSize,
					int initCapacity);  // 13
		{
			const CAnimContainer* pContainer; // 19
			CWeakHandle<InfoForResourceTypeCModel>::GetData(); // 19
			{
				const CUtlVector<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >& channelData; // 22
				{
					int i; // 23
					CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::Count(); // 23
					CUtlMemoryConservative<Vector>::AllocSize(); // 392
					CUtlMemoryConservative<Vector>::NumAllocated(); // 782
					{
					}
					CUtlMemoryConservative<Vector>::RememberAllocSize(
								size_t sz);  // 403
					CUtlMemoryConservative<Vector>::ReAlloc(
						size_t sz);  // 409
					CUtlMemoryConservative<Vector>::Grow(
						int num);  // 806
					CUtlVectorBase<Vector, CUtlMemoryConservative<Vector> >::ResetDbgInfo(); // 824
					CUtlVectorBase<Vector, CUtlMemoryConservative<Vector> >::GrowMemory(
							int num);  // 784
					CUtlVectorBase<Vector, CUtlMemoryConservative<Vector> >::GrowVector(
							int num);  // 1445
					{
						int i; // 1451
					}
					CUtlVectorBase<Vector, CUtlMemoryConservative<Vector> >::InsertMultipleBefore(
								int elem,
								int num);  // 1437
					CUtlVectorBase<Vector, CUtlMemoryConservative<Vector> >::InsertMultipleBefore(
								int elem,
								int num);  // 1294
					CUtlVectorBase<Vector, CUtlMemoryConservative<Vector> >::AddMultipleToTail(
								int num);  // 1319
					CUtlVectorBase<Vector, CUtlMemoryConservative<Vector> >::SetCount(
						int count);  // 27
					CUtlVectorBase<Quaternion, CUtlMemoryConservative<Quaternion> >::RemoveMultipleFromTail(
								int num);  // 1323
					CUtlMemoryConservative<Quaternion>::AllocSize(); // 392
					CUtlMemoryConservative<Quaternion>::NumAllocated(); // 782
					{
					}
					CUtlMemoryConservative<Quaternion>::RememberAllocSize(
								size_t sz);  // 403
					CUtlMemoryConservative<Quaternion>::ReAlloc(
						size_t sz);  // 409
					CUtlMemoryConservative<Quaternion>::Grow(
						int num);  // 806
					CUtlVectorBase<Quaternion, CUtlMemoryConservative<Quaternion> >::ResetDbgInfo(); // 824
					CUtlVectorBase<Quaternion, CUtlMemoryConservative<Quaternion> >::GrowMemory(
							int num);  // 784
					CUtlVectorBase<Quaternion, CUtlMemoryConservative<Quaternion> >::GrowVector(
							int num);  // 1445
					{
						int i; // 1451
					}
					CUtlVectorBase<Quaternion, CUtlMemoryConservative<Quaternion> >::InsertMultipleBefore(
								int elem,
								int num);  // 1437
					CUtlVectorBase<Quaternion, CUtlMemoryConservative<Quaternion> >::InsertMultipleBefore(
								int elem,
								int num);  // 1294
					CUtlVectorBase<Quaternion, CUtlMemoryConservative<Quaternion> >::AddMultipleToTail(
								int num);  // 1319
					CUtlVectorBase<Quaternion, CUtlMemoryConservative<Quaternion> >::SetCount(
						int count);  // 31
					CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
							int i);  // 29
					CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
							int i);  // 31
					{
					}
					CUtlMemory<CAnimDataChannel, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
							int i);  // 25
					CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >::operator[](
							int i);  // 27
					CUtlVectorBase<Vector, CUtlMemoryConservative<Vector> >::Count(); // 38
					CUtlVectorBase<Quaternion, CUtlMemoryConservative<Quaternion> >::Count(); // 38
				}
				CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Count(); // 48
			}
		}
	}
} /* size: 0 */

// <0158B885> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:11
// variables: 5
void CDecompressionContext::CDecompressionContext(HModel hModel)
{
	const char   __FUNCTION__; // 35561
	{
		const CAnimContainer* pContainer; // 19
		{
			const CUtlVector<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >& channelData; // 22
			{
				int i; // 23
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 35
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <015D6544> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:53
void CDecompressionContext::GetBoneSetup()
{
} /* size: 8 */

// <0158B7B7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:65
// function calls: 2
void* CDecompressionContext::GetBonePositionDecompressCache()
{
	CUtlMemoryConservative<Vector>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryConservative<Vector> >::Base(); // 67
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0158B721> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:71
// function calls: 2
void* CDecompressionContext::GetBoneRotationDecompressCache()
{
	CUtlMemoryConservative<Quaternion>::Base(); // 112
	CUtlVectorBase<Quaternion, CUtlMemoryConservative<Quaternion> >::Base(); // 73
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0158B6EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:77
void CDecompressionContext::GetRequestPatternIndex()
{
} /* size: 8 */

// <0158B0AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:84
// function calls: 23
void CPoseUpdateResources::CPoseUpdateResources(const CStaticPoseCachePtr& pStaticPoseCache, const CAnimSkeletonConstPtr& pSkeleton, HModel hModel)
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 87
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 85
	CUtlMemory<OpResult, int>::ValidateGrowSize(); // 475
	CUtlMemory<OpResult, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<OpResult, CUtlMemory<OpResult, int> >::CUtlVector(); // 87
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CStaticPoseCache>(CStaticPoseCache* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CStaticPoseCache>(CStaticPoseCache* pObj); // 370
	CSmartPtr<CStaticPoseCache, CRefCountAccessor>::operator=(
			CStaticPoseCache* pObj);  // 406
	CSmartPtr<CStaticPoseCache, CRefCountAccessor>::operator=(
			const CSmartPtr<CStaticPoseCache, CRefCountAccessor>& other);  // 328
	CSmartPtr<CStaticPoseCache, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CStaticPoseCache, CRefCountAccessor>& other);  // 87
} /* size: 239, inline expansions: 23 (379 bytes) */

// <0158B06F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:84
void CPoseUpdateResources::CPoseUpdateResources(const CStaticPoseCachePtr& pStaticPoseCache, const CAnimSkeletonConstPtr& pSkeleton, HModel hModel)
{
} /* size: 0 */

// <0158A499> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:94
// function calls: 56
void CPoseUpdateContext::CPoseUpdateContext(const CPoseRecipePtr& pPoseRecipe, const CPoseUpdateResourcesPtr& pPoseUpdateResources, const CAnimGraphInstanceContextPtr& pGraphContext, CAnimationGraphPhysicsTraceManagerPtr& pPhysicsTraceManager, const PoseHandle hTerminalPoseHandle, bool bIsReplay)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CPoseRecipe>(CPoseRecipe* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CPoseRecipe>(CPoseRecipe* pObj); // 370
	CSmartPtr<CPoseRecipe, CRefCountAccessor>::operator=(
			CPoseRecipe* pObj);  // 406
	CSmartPtr<CPoseRecipe, CRefCountAccessor>::operator=(
			const CSmartPtr<CPoseRecipe, CRefCountAccessor>& other);  // 328
	CSmartPtr<CPoseRecipe, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CPoseRecipe, CRefCountAccessor>& other);  // 101
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CPoseUpdateResources>(CPoseUpdateResources* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CPoseUpdateResources>(CPoseUpdateResources* pObj); // 370
	CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::operator=(
			CPoseUpdateResources* pObj);  // 406
	CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::operator=(
			const CSmartPtr<CPoseUpdateResources, CRefCountAccessor>& other);  // 328
	CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CPoseUpdateResources, CRefCountAccessor>& other);  // 102
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
			const CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>& other);  // 103
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimationGraphPhysicsTraceManager>(CAnimationGraphPhysicsTraceManager* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimationGraphPhysicsTraceManager>(CAnimationGraphPhysicsTraceManager* pObj); // 370
	CSmartPtr<CAnimationGraphPhysicsTraceManager, CRefCountAccessor>::operator=(
			CAnimationGraphPhysicsTraceManager* pObj);  // 406
	CSmartPtr<CAnimationGraphPhysicsTraceManager, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimationGraphPhysicsTraceManager, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimationGraphPhysicsTraceManager, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimationGraphPhysicsTraceManager, CRefCountAccessor>& other);  // 104
} /* size: 319, inline expansions: 56 (1361 bytes) */

// <0158A435> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:94
void CPoseUpdateContext::CPoseUpdateContext(const CPoseRecipePtr& pPoseRecipe, const CPoseUpdateResourcesPtr& pPoseUpdateResources, const CAnimGraphInstanceContextPtr& pGraphContext, CAnimationGraphPhysicsTraceManagerPtr& pPhysicsTraceManager, const PoseHandle hTerminalPoseHandle, bool bIsReplay)
{
} /* size: 0 */

// <0158A3BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:111
// function call: 1
void CPoseUpdateContext::GetUpdateID()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 113
} /* size: 13, inline expansions: 1 (0 bytes) */

// <0158A39E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:117
void CPoseUpdateContext::GetFixedData()
{
} /* size: 0 */

// <0158A382> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:123
void CPoseUpdateContext::GetInstanceData()
{
} /* size: 0 */

// <0158A320> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:129
// function call: 1
void CPoseUpdateContext::GetDecompressionContext()
{
	CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::operator->(); // 131
} /* size: 13, inline expansions: 1 (0 bytes) */

// <0158A257> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:135
// function calls: 2
void CPoseUpdateContext::GetCachedPose(StaticPoseCacheHandle handle)
{
	CSmartPtr<CStaticPoseCache, CRefCountAccessor>::operator->(); // 137
	StaticPoseCacheHandle::StaticPoseCacheHandle(
				const StaticPoseCacheHandle& rhs);  // 137
} /* size: 72, inline expansions: 2 (29 bytes) */

// <01589D0E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:141
// variables: 2
// function calls: 25
void CPoseUpdateContext::AllocPose()
{
	CAnimPosePtr pNewPose; // 143
	CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::operator->(); // 143
	CUtlStack<CAnimPose::Count(); // 585
	CUtlMemory<CAnimPose::operator[](
			int i);  // 155
	CUtlStack<CAnimPose::Element(
		int i);  // 190
	CUtlStack<CAnimPose::Top(); // 593
	CUtlStack<CAnimPose::Pop(); // 594
	CEnduringClassMemoryPool<CAnimPose>::Alloc(); // 143
	ThreadInterlockedIncrement(volatile int32* p); // 683
	CRefCountedMemPoolObject<CAnimPose>::AddRef(); // 21
	AddRef<CAnimPose>(CAnimPose* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 690
	{
		CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
		CUtlMemory<CAnimPose::NumAllocated(); // 228
		CUtlMemory<CAnimPose::Base(); // 97
		CUtlStack<CAnimPose::ResetDbgInfo(); // 233
		CUtlStack<CAnimPose::GrowStack(); // 267
		CUtlMemory<CAnimPose::operator[](
				int i);  // 155
		CUtlStack<CAnimPose::Element(
			int i);  // 268
		CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
						CAnimPose* const& src);  // 268
		CUtlStack<CAnimPose::Push(
			CAnimPose* const& src);  // 604
		CEnduringClassMemoryPool<CAnimPose>::Free(
			CAnimPose* pObject);  // 699
	}
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
	Release<CAnimPose>(CAnimPose* pObj); // 370
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
			CAnimPose* pObj);  // 319
	CSmartPtr<CAnimPose, CRefCountAccessor>::CSmartPtr(
			CAnimPose* pObj);  // 143
} /* size: 231, variables: 1, inline expansions: 16 (626 bytes) */

// <015888C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:151
// variables: 12
// function calls: 91
void CPoseUpdateContext::TryTakePose(PoseHandle hPose)
{
	CUtlVector<OpResult, CUtlMemory<OpResult, int> >& opResults; // 153
	CAnimPosePtr pPose; // 155
	const char   __FUNCTION__; // 35301
	{
		OpResult& opResult; // 158
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 159
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 160
		}
		{
			CAnimPosePtr newPose; // 177
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator->(); // 178
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator*(); // 178
			ThreadInterlockedIncrement(volatile int32* p); // 683
			CRefCountedMemPoolObject<CAnimPose>::AddRef(); // 21
			AddRef<CAnimPose>(CAnimPose* pObj); // 366
			ThreadInterlockedDecrement(volatile int32* p); // 690
			{
				CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
				CUtlMemory<CAnimPose::NumAllocated(); // 228
				CUtlMemory<CAnimPose::Base(); // 97
				CUtlStack<CAnimPose::ResetDbgInfo(); // 233
				CUtlStack<CAnimPose::GrowStack(); // 267
				CUtlMemory<CAnimPose::operator[](
						int i);  // 155
				CUtlStack<CAnimPose::Element(
					int i);  // 268
				CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
								CAnimPose* const& src);  // 268
				CUtlStack<CAnimPose::Push(
					CAnimPose* const& src);  // 604
				CEnduringClassMemoryPool<CAnimPose>::Free(
					CAnimPose* pObject);  // 699
			}
			CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
			CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
			Release<CAnimPose>(CAnimPose* pObj); // 370
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
					CAnimPose* pObj);  // 406
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
					const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 179
			ThreadInterlockedDecrement(volatile int32* p); // 690
			{
				CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
				CUtlMemory<CAnimPose::NumAllocated(); // 228
				CUtlMemory<CAnimPose::Base(); // 97
				CUtlStack<CAnimPose::ResetDbgInfo(); // 233
				CUtlStack<CAnimPose::GrowStack(); // 267
				CUtlMemory<CAnimPose::operator[](
						int i);  // 155
				CUtlStack<CAnimPose::Element(
					int i);  // 268
				CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
								CAnimPose* const& src);  // 268
				CUtlStack<CAnimPose::Push(
					CAnimPose* const& src);  // 604
				CEnduringClassMemoryPool<CAnimPose>::Free(
					CAnimPose* pObject);  // 699
			}
			CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
			CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
			Release<CAnimPose>(CAnimPose* pObj); // 344
			CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 180
		}
		CUtlMemory<OpResult, int>::operator[](
				int i);  // 588
		CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::operator[](
				int i);  // 158
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator!=(
				const CAnimPose* pOther);  // 160
		ThreadInterlockedIncrement(volatile int32* p); // 683
		CRefCountedMemPoolObject<CAnimPose>::AddRef(); // 21
		AddRef<CAnimPose>(CAnimPose* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 690
		{
			CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
			CUtlMemory<CAnimPose::NumAllocated(); // 228
			CUtlMemory<CAnimPose::Base(); // 97
			CUtlStack<CAnimPose::ResetDbgInfo(); // 233
			CUtlStack<CAnimPose::GrowStack(); // 267
			CUtlMemory<CAnimPose::operator[](
					int i);  // 155
			CUtlStack<CAnimPose::Element(
				int i);  // 268
			CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
							CAnimPose* const& src);  // 268
			CUtlStack<CAnimPose::Push(
				CAnimPose* const& src);  // 604
			CEnduringClassMemoryPool<CAnimPose>::Free(
				CAnimPose* pObject);  // 699
		}
		CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
		CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
		Release<CAnimPose>(CAnimPose* pObj); // 370
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
				CAnimPose* pObj);  // 406
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
				const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 162
		ThreadInterlockedDecrement(volatile int32* p); // 690
		{
			CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
			CUtlMemory<CAnimPose::NumAllocated(); // 228
			CUtlMemory<CAnimPose::Base(); // 97
			CUtlStack<CAnimPose::ResetDbgInfo(); // 233
			CUtlStack<CAnimPose::GrowStack(); // 267
			CUtlMemory<CAnimPose::operator[](
					int i);  // 155
			CUtlStack<CAnimPose::Element(
				int i);  // 268
			CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
							CAnimPose* const& src);  // 268
			CUtlStack<CAnimPose::Push(
				CAnimPose* const& src);  // 604
			CEnduringClassMemoryPool<CAnimPose>::Free(
				CAnimPose* pObject);  // 699
		}
		CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
		CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
		Release<CAnimPose>(CAnimPose* pObj); // 370
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
				CAnimPose* pObj);  // 173
		CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::operator->(); // 167
		CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::Count(); // 167
	}
	CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::Count(); // 156
	CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::operator->(); // 153
	CSmartPtr<CAnimPose, CRefCountAccessor>::CSmartPtr(); // 155
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator==(
			const CAnimPose* pOther);  // 183
	ThreadInterlockedDecrement(volatile int32* p); // 690
	{
		CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
		CUtlMemory<CAnimPose::NumAllocated(); // 228
		CUtlMemory<CAnimPose::Base(); // 97
		CUtlStack<CAnimPose::ResetDbgInfo(); // 233
		CUtlStack<CAnimPose::GrowStack(); // 267
		CUtlMemory<CAnimPose::operator[](
				int i);  // 155
		CUtlStack<CAnimPose::Element(
			int i);  // 268
		CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
						CAnimPose* const& src);  // 268
		CUtlStack<CAnimPose::Push(
			CAnimPose* const& src);  // 604
		CEnduringClassMemoryPool<CAnimPose>::Free(
			CAnimPose* pObject);  // 699
	}
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
	Release<CAnimPose>(CAnimPose* pObj); // 496
	CSmartPtr<CAnimPose, CRefCountAccessor>::Reset(
		ESmartPtrNoAddRef,
		CAnimPose* pObj);  // 419
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
			CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 185
	CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 185
} /* size: 0, variables: 3, inline expansions: 11 (614 bytes) */

// <01587DD1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:193
// variables: 8
// function calls: 46
void CPoseUpdateContext::GetPose(PoseHandle hPose)
{
	CUtlVector<OpResult, CUtlMemory<OpResult, int> >& opResults; // 195
	const char   __FUNCTION__; // 35193
	{
		OpResult& opResult; // 199
		CAnimPosePtr pPose; // 201
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 203
		}
		CUtlMemory<OpResult, int>::operator[](
				int i);  // 588
		CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::operator[](
				int i);  // 199
		ThreadInterlockedIncrement(volatile int32* p); // 683
		CRefCountedMemPoolObject<CAnimPose>::AddRef(); // 21
		AddRef<CAnimPose>(CAnimPose* pObj); // 366
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
				CAnimPose* pObj);  // 406
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
				const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 328
		CSmartPtr<CAnimPose, CRefCountAccessor>::CSmartPtr(
				const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 201
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator!=(
				const CAnimPose* pOther);  // 203
		CSmartPtr<CAnimPose, CRefCountAccessor>::CSmartPtr(
				CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 223
		ThreadInterlockedDecrement(volatile int32* p); // 690
		{
			CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
			CUtlMemory<CAnimPose::NumAllocated(); // 228
			CUtlMemory<CAnimPose::Base(); // 97
			CUtlStack<CAnimPose::ResetDbgInfo(); // 233
			CUtlStack<CAnimPose::GrowStack(); // 267
			CUtlMemory<CAnimPose::operator[](
					int i);  // 155
			CUtlStack<CAnimPose::Element(
				int i);  // 268
			CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
							CAnimPose* const& src);  // 268
			CUtlStack<CAnimPose::Push(
				CAnimPose* const& src);  // 604
			CEnduringClassMemoryPool<CAnimPose>::Free(
				CAnimPose* pObject);  // 699
		}
		CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
		CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
		Release<CAnimPose>(CAnimPose* pObj); // 344
		CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 224
		ThreadInterlockedDecrement(volatile int32* p); // 690
		{
			CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
			CUtlMemory<CAnimPose::NumAllocated(); // 228
			CUtlMemory<CAnimPose::Base(); // 97
			CUtlStack<CAnimPose::ResetDbgInfo(); // 233
			CUtlStack<CAnimPose::GrowStack(); // 267
			CUtlMemory<CAnimPose::operator[](
					int i);  // 155
			CUtlStack<CAnimPose::Element(
				int i);  // 268
			CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
							CAnimPose* const& src);  // 268
			CUtlStack<CAnimPose::Push(
				CAnimPose* const& src);  // 604
			CEnduringClassMemoryPool<CAnimPose>::Free(
				CAnimPose* pObject);  // 699
		}
		CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
		CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
		Release<CAnimPose>(CAnimPose* pObj); // 370
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
				CAnimPose* pObj);  // 220
		CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
				CAnimPose* pObj);  // 319
		CSmartPtr<CAnimPose, CRefCountAccessor>::CSmartPtr(
				CAnimPose* pObj);  // 215
		CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::operator->(); // 209
		CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::Count(); // 209
	}
	CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::Count(); // 197
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
			CAnimPose* pObj);  // 319
	CSmartPtr<CAnimPose, CRefCountAccessor>::CSmartPtr(
			CAnimPose* pObj);  // 227
	CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::operator->(); // 195
} /* size: 0, variables: 2, inline expansions: 4 (18 bytes) */

// <01587D56> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:232
// function call: 1
void CPoseUpdateContext::GetSkeleton()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 234
} /* size: 13, inline expansions: 1 (0 bytes) */

// <01587D3A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:237
void CPoseUpdateContext::GetModel()
{
} /* size: 0 */

// <01587C0C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:242
// function calls: 4
void CPoseUpdateContext::GetTimeStep()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 244
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 134
	CAnimGraphInstanceData::GetLastTimeStep(); // 244
} /* size: 82, inline expansions: 4 (40 bytes) */

// <01587B91> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:247
// function call: 1
void CPoseUpdateContext::GetAnimTime()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 249
} /* size: 13, inline expansions: 1 (0 bytes) */

// <01587B16> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:252
// function call: 1
void CPoseUpdateContext::GetLocalToWorld()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 254
} /* size: 13, inline expansions: 1 (0 bytes) */

// <01587A99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:257
// function call: 1
void CPoseUpdateContext::GetStartingLocalToWorld()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 259
} /* size: 0, inline expansions: 1 (0 bytes) */

// <015D656D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:262
// function call: 1
void CPoseUpdateContext::GetVRProxy()
{
	CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::operator->(); // 264
} /* size: 16, inline expansions: 1 (0 bytes) */

// <01587A7C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:262
void CPoseUpdateContext::GetVRProxy()
{
} /* size: 0 */

// <01587A2C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:272
void CPoseUpdateContext::IsReplay()
{
} /* size: 9 */

// <015879F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:277
void CPoseUpdateContext::GetDecodeCache()
{
} /* size: 9 */

// <0158777F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:283
// function calls: 9
void CPoseUpdateManager::CPoseUpdateManager(const CPoseRecipePtr& pPoseRecipe, const CPoseUpdateResourcesPtr& pPoseUpdateResources, const CAnimGraphInstanceContextPtr& pGraphContext, CAnimationGraphPhysicsTraceManagerPtr& pPhysicsTraceManager, const PoseHandle hTerminalPoseHandle, bool bIsReplay)
{
	CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::operator->(); // 293
	CSmartPtr<CPoseRecipe, CRefCountAccessor>::operator->(); // 293
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Count(); // 20
	CPoseRecipe::GetOpCount(); // 293
	CUtlMemory<OpResult, int>::IsGrowable(); // 881
	CUtlMemory<OpResult, int>::IsExternallyAllocated(); // 888
	CUtlMemory<OpResult, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::EnsureCapacity(
			int num);  // 293
} /* size: 197, inline expansions: 9 (337 bytes) */

// <01587714> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:283
void CPoseUpdateManager::CPoseUpdateManager(const CPoseRecipePtr& pPoseRecipe, const CPoseUpdateResourcesPtr& pPoseUpdateResources, const CAnimGraphInstanceContextPtr& pGraphContext, CAnimationGraphPhysicsTraceManagerPtr& pPhysicsTraceManager, const PoseHandle hTerminalPoseHandle, bool bIsReplay)
{
} /* size: 0 */

// <01586053> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/poseupdatecontext.cpp:297
// variables: 10
// function calls: 100
void CPoseUpdateManager::Evaluate()
{
	CUtlVector<OpResult, CUtlMemory<OpResult, int> >& opResults; // 299
	IAnimationSystemUtils* pAnimationUtils; // 301
	CAnimPosePtr pResultPose; // 342
	{
		int i; // 305
		{
			OpResult opResult; // 310
			CUtlMemory<OpResult, int>::Base(); // 112
			CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::Base(); // 368
			CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::ResetDbgInfo(); // 824
			CUtlMemory<OpResult, int>::IsGrowable(); // 823
			CUtlMemory<OpResult, int>::IsExternallyAllocated(); // 859
			CUtlMemory<OpResult, int>::IsExternallyAllocated(); // 861
			CUtlMemory<OpResult, int>::Grow(
				int num);  // 806
			CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<OpResult, int>::operator[](
					int i);  // 602
			CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::Element(
				int i);  // 1201
			ThreadInterlockedIncrement(volatile int32* p); // 683
			CRefCountedMemPoolObject<CAnimPose>::AddRef(); // 21
			AddRef<CAnimPose>(CAnimPose* pObj); // 366
			ThreadInterlockedDecrement(volatile int32* p); // 690
			{
				CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
				CUtlMemory<CAnimPose::NumAllocated(); // 228
				CUtlMemory<CAnimPose::Base(); // 97
				CUtlStack<CAnimPose::ResetDbgInfo(); // 233
				CUtlStack<CAnimPose::GrowStack(); // 267
				CUtlMemory<CAnimPose::operator[](
						int i);  // 155
				CUtlStack<CAnimPose::Element(
					int i);  // 268
				CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
								CAnimPose* const& src);  // 268
				CUtlStack<CAnimPose::Push(
					CAnimPose* const& src);  // 604
				CEnduringClassMemoryPool<CAnimPose>::Free(
					CAnimPose* pObject);  // 699
			}
			CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
			CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
			Release<CAnimPose>(CAnimPose* pObj); // 370
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
					CAnimPose* pObj);  // 406
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
					const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 328
			CSmartPtr<CAnimPose, CRefCountAccessor>::CSmartPtr(
					const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 23
			OpResult::OpResult(
				const OpResult  &);  // 1520
			CopyConstruct<OpResult>(OpResult* pMemory,
						const OpResult& src);  // 1201
			CUtlMemory<OpResult, int>::NumAllocated(); // 1196
			CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::AddToTail(
					const OpResult& src);  // 332
			ThreadInterlockedDecrement(volatile int32* p); // 690
			{
				CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
				CUtlMemory<CAnimPose::NumAllocated(); // 228
				CUtlMemory<CAnimPose::Base(); // 97
				CUtlStack<CAnimPose::ResetDbgInfo(); // 233
				CUtlStack<CAnimPose::GrowStack(); // 267
				CUtlMemory<CAnimPose::operator[](
						int i);  // 155
				CUtlStack<CAnimPose::Element(
					int i);  // 268
				CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
								CAnimPose* const& src);  // 268
				CUtlStack<CAnimPose::Push(
					CAnimPose* const& src);  // 604
				CEnduringClassMemoryPool<CAnimPose>::Free(
					CAnimPose* pObject);  // 699
			}
			CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
			CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
			Release<CAnimPose>(CAnimPose* pObj); // 344
			CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 23
			OpResult::~OpResult(); // 338
			CSmartPtr<CAnimPose, CRefCountAccessor>::CSmartPtr(); // 23
			OpResult::OpResult(); // 310
			CSmartPtr<CAnimPose, CRefCountAccessor>::Reset(
				ESmartPtrNoAddRef,
				CAnimPose* pObj);  // 419
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
					CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 311
			CSmartPtr<CPoseRecipe, CRefCountAccessor>::operator->(); // 312
			CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 311
			CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Count(); // 45
			{
			}
			CUtlMemory<CPoseRecipe::PoseOpDesc, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::operator[](
					int i);  // 46
			CPoseRecipe::GetRefCount(
					int opIndex);  // 312
			CSmartPtr<CAnimPose, CRefCountAccessor>::Reset(
				ESmartPtrNoAddRef,
				CAnimPose* pObj);  // 419
			CSmartPtr<CAnimPose, CRefCountAccessor>::operator=(
					CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 317
			CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 317
			ThreadInterlockedDecrement(volatile int32* p); // 690
			{
				CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
				CUtlMemory<CAnimPose::NumAllocated(); // 228
				CUtlMemory<CAnimPose::Base(); // 97
				CUtlStack<CAnimPose::ResetDbgInfo(); // 233
				CUtlStack<CAnimPose::GrowStack(); // 267
				CUtlMemory<CAnimPose::operator[](
						int i);  // 155
				CUtlStack<CAnimPose::Element(
					int i);  // 268
				CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
								CAnimPose* const& src);  // 268
				CUtlStack<CAnimPose::Push(
					CAnimPose* const& src);  // 604
				CEnduringClassMemoryPool<CAnimPose>::Free(
					CAnimPose* pObject);  // 699
			}
			CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
			CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
			Release<CAnimPose>(CAnimPose* pObj); // 344
			CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 23
			OpResult::~OpResult(); // 338
		}
		CSmartPtr<CPoseRecipe, CRefCountAccessor>::operator->(); // 305
		CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Count(); // 20
		CPoseRecipe::GetOpCount(); // 305
	}
	CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::operator->(); // 299
	CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::Count(); // 342
	{
		int i; // 1721
		{
			CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
			CUtlMemory<CAnimPose::NumAllocated(); // 228
			CUtlMemory<CAnimPose::Base(); // 97
			CUtlStack<CAnimPose::ResetDbgInfo(); // 233
			CUtlStack<CAnimPose::GrowStack(); // 267
			CUtlMemory<CAnimPose::operator[](
					int i);  // 155
			CUtlStack<CAnimPose::Element(
				int i);  // 268
			CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
							CAnimPose* const& src);  // 268
			CUtlStack<CAnimPose::Push(
				CAnimPose* const& src);  // 604
			CEnduringClassMemoryPool<CAnimPose>::Free(
				CAnimPose* pObject);  // 699
		}
		ThreadInterlockedDecrement(volatile int32* p); // 690
		CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
		CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
		Release<CAnimPose>(CAnimPose* pObj); // 344
		CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 23
		OpResult::~OpResult(); // 1526
		Destruct<OpResult>(OpResult* pMemory); // 1723
		CUtlMemory<OpResult, int>::operator[](
				int i);  // 602
		CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::Element(
			int i);  // 1723
	}
	CUtlVectorBase<OpResult, CUtlMemory<OpResult, int> >::RemoveAll(); // 357
} /* size: 0, variables: 3, inline expansions: 3 (180 bytes) */

