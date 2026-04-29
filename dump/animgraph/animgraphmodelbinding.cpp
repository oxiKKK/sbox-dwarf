
//
// animgraph/animgraphmodelbinding.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 30
//

// <00E40329> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:15
// variables: 6
// function calls: 139
void CAnimGraphModelBinding::CAnimGraphModelBinding(const CAnimationGraph* pAnimGraph, const CModel* pModel)
{
	{
		int nNodeCount; // 28
		{
			AnimNodeLocation_t nodeLocation; // 37
		}
		{
			CAnimMovementUpdater* pMoveUpdater; // 46
		}
	}
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::CSmartPtr(); // 17
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 32
	IAnimGraphModelBinding::IAnimGraphModelBinding(); // 17
	AnimNodeID::AnimNodeID(); // 20
	CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimNodeID, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(); // 20
	AnimNodeLocation_t::AnimNodeLocation_t(); // 19
	CAnimGraphInitContext::CAnimGraphInitContext(); // 17
	{
		int nNodeCount; // 28
		CAnimationGraph::GetParameterListInternal(); // 22
		CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator*(); // 22
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimParamIdMap>(CAnimParamIdMap* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimParamIdMap>(CAnimParamIdMap* pObj); // 370
		CSmartPtr<CAnimParamIdMap, CRefCountAccessor>::operator=(
				CAnimParamIdMap* pObj);  // 22
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimGraphFixedData>(CAnimGraphFixedData* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimGraphFixedData>(CAnimGraphFixedData* pObj); // 370
		CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::operator=(
				CAnimGraphFixedData* pObj);  // 23
		CSmartPtr<CAnimParamIdMap, CRefCountAccessor>::operator*(); // 24
		CSmartPtr<CAnimTagManager, CRefCountAccessor>::Get(); // 413
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimTagManager>(CAnimTagManager* pObj); // 386
		CSmartPtr<const CAnimTagManager, CRefCountAccessor>::operator=<CAnimTagManager>(
						CAnimTagManager* pObj);  // 413
		CSmartPtr<const CAnimTagManager, CRefCountAccessor>::operator=<CAnimTagManager>(
						const CSmartPtr<CAnimTagManager, CRefCountAccessor>& other);  // 354
		CSmartPtr<const CAnimTagManager, CRefCountAccessor>::CSmartPtr<CAnimTagManager>(
						const CSmartPtr<CAnimTagManager, CRefCountAccessor>& other);  // 263
		CAnimationGraph::GetTagManagerInternal(); // 24
		CSmartPtr<const CAnimTagManager, CRefCountAccessor>::operator*(); // 24
		CAnimationGraph::GetParameterListInternal(); // 24
		CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator*(); // 24
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimGraphInstanceData>(CAnimGraphInstanceData* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimGraphInstanceData>(CAnimGraphInstanceData* pObj); // 370
		CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator=(
				CAnimGraphInstanceData* pObj);  // 24
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<const CAnimTagManager>(const CAnimTagManager* pObj); // 344
		CSmartPtr<const CAnimTagManager, CRefCountAccessor>::~CSmartPtr(); // 24
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
				CStaticPoseCache* pObj);  // 25
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimSkeleton>(CAnimSkeleton* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimSkeleton>(CAnimSkeleton* pObj); // 370
		CSmartPtr<CAnimSkeleton, CRefCountAccessor>::operator=(
				CAnimSkeleton* pObj);  // 26
		{
			AnimNodeLocation_t nodeLocation; // 37
			CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 35
			AnimNodeID::AnimNodeID(); // 20
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
			CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
			CUtlMemory<AnimNodeID, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(); // 20
			AnimNodeLocation_t::AnimNodeLocation_t(); // 37
			CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 71
			{
			}
			CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 73
			CAnimationGraph::GetRootNodeID(); // 38
			AnimNodeID::operator=(
					const AnimNodeID& rhs);  // 38
			AnimOutputID::AnimOutputID(); // 40
			CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 905
			CUtlMemory<AnimNodeID, int>::Purge(); // 903
			CUtlMemory<AnimNodeID, int>::Purge(); // 1799
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
			ValidateAlignment<AnimNodeID>(void); // 508
			CUtlMemory<AnimNodeID, int>::Purge(); // 510
			CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
			CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 20
			AnimNodeLocation_t::~AnimNodeLocation_t(); // 40
			CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator->(); // 42
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveAll(); // 1798
			CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 905
			CUtlMemory<AnimNodeID, int>::Purge(); // 903
			CUtlMemory<AnimNodeID, int>::Purge(); // 1799
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
			ValidateAlignment<AnimNodeID>(void); // 508
			CUtlMemory<AnimNodeID, int>::Purge(); // 510
			CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
			CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 20
			AnimNodeLocation_t::~AnimNodeLocation_t(); // 43
		}
		{
			CAnimMovementUpdater* pMoveUpdater; // 46
			CSmartPtr<CAnimMovementManager, CRefCountAccessor>::Get(); // 269
			CAnimationGraph::GetMovementManagerInternal(); // 46
			CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 47
		}
		CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 52
		CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator->(); // 53
	}
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::CSmartPtr(); // 17
	CSmartPtr<CAnimParamIdMap, CRefCountAccessor>::CSmartPtr(); // 17
	CSmartPtr<CStaticPoseCache, CRefCountAccessor>::CSmartPtr(); // 17
	CSmartPtr<CAnimSkeleton, CRefCountAccessor>::CSmartPtr(); // 17
} /* size: 0, inline expansions: 16 (100 bytes) */

// <00E402C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:15
// variables: 3
void CAnimGraphModelBinding::CAnimGraphModelBinding(const CAnimationGraph* pAnimGraph, const CModel* pModel)
{
	{
		int nNodeCount; // 28
		{
			AnimNodeLocation_t nodeLocation; // 37
		}
		{
			CAnimMovementUpdater* pMoveUpdater; // 46
		}
	}
} /* size: 0 */

// <00E3F98B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:62
// variable: 1
// function calls: 43
void CAnimGraphModelBinding::CreateInstance(const AnimGraphInstanceCreationSettings_t& creationSettings)
{
	CAnimationGraphInstancePtr graphInstance; // 64
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::CSmartPtr(); // 64
	CWeakHandle<InfoForResourceTypeCModel>::HasData(); // 66
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<const CAnimGraphModelBinding>(const CAnimGraphModelBinding* pObj); // 366
	CSmartPtr<const CAnimGraphModelBinding, CRefCountAccessor>::operator=(
			const CAnimGraphModelBinding* pObj);  // 319
	CSmartPtr<const CAnimGraphModelBinding, CRefCountAccessor>::CSmartPtr(
			const CAnimGraphModelBinding* pObj);  // 68
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimationGraphInstance>(CAnimationGraphInstance* pObj); // 366
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::operator=(
			CAnimationGraphInstance* pObj);  // 68
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimGraphModelBinding>(const CAnimGraphModelBinding* pObj); // 344
	CSmartPtr<const CAnimGraphModelBinding, CRefCountAccessor>::~CSmartPtr(); // 68
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimationGraphInstance>(CAnimationGraphInstance* pObj); // 386
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<IAnimationGraphInstance>(IAnimationGraphInstance* pObj); // 390
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator=<CAnimationGraphInstance>(
						CAnimationGraphInstance* pObj);  // 413
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator=<CAnimationGraphInstance>(
						const CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>& other);  // 354
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::CSmartPtr<CAnimationGraphInstance>(
						const CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>& other);  // 71
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimationGraphInstance>(CAnimationGraphInstance* pObj); // 344
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::~CSmartPtr(); // 72
} /* size: 295, variables: 1, inline expansions: 43 (662 bytes) */

// <00E8A39F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:75
void CAnimGraphModelBinding::GetModel()
{
} /* size: 9 */

// <00E8AC10> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:81
// function call: 1
void CAnimGraphModelBinding::GetFixedData()
{
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 83
} /* size: 13, inline expansions: 1 (0 bytes) */

// <00E3F959> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:81
void CAnimGraphModelBinding::GetFixedData()
{
} /* size: 0 */

// <00E8AC82> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:87
// function call: 1
void CAnimGraphModelBinding::GetInstanceData()
{
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator->(); // 89
} /* size: 13, inline expansions: 1 (0 bytes) */

// <00E3F940> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:87
void CAnimGraphModelBinding::GetInstanceData()
{
} /* size: 0 */

// <00E8A3C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:93
// function call: 1
void CAnimGraphModelBinding::GetStaticPoseCache()
{
	CSmartPtr<CStaticPoseCache, CRefCountAccessor>::operator*(); // 95
} /* size: 9, inline expansions: 1 (0 bytes) */

// <00E3F927> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:93
void CAnimGraphModelBinding::GetStaticPoseCache()
{
} /* size: 0 */

// <00E8ACF4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:99
// function calls: 2
void CAnimGraphModelBinding::GetHandleForParameter(AnimParamID paramID)
{
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 101
	CSmartPtr<CAnimParamIdMap, CRefCountAccessor>::operator->(); // 101
} /* size: 76, inline expansions: 2 (9 bytes) */

// <00E3F902> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:99
void CAnimGraphModelBinding::GetHandleForParameter(AnimParamID paramID)
{
} /* size: 0 */

// <00E3F3C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:105
// variable: 1
// function calls: 25
void CAnimGraphModelBinding::GetParameter(AnimParamID paramID)
{
	const CAnimParameterListConstPtr  pParamList; // 107
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::Get(); // 413
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 386
	CSmartPtr<const CAnimParameterList, CRefCountAccessor>::operator=<CAnimParameterList>(
					CAnimParameterList* pObj);  // 413
	CSmartPtr<const CAnimParameterList, CRefCountAccessor>::operator=<CAnimParameterList>(
					const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 354
	CSmartPtr<const CAnimParameterList, CRefCountAccessor>::CSmartPtr<CAnimParameterList>(
					const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 107
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 108
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::Get(); // 108
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 108
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimParameterList>(const CAnimParameterList* pObj); // 344
	CSmartPtr<const CAnimParameterList, CRefCountAccessor>::~CSmartPtr(); // 109
} /* size: 148, variables: 1, inline expansions: 25 (322 bytes) */

// <00E3F000> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:112
// variable: 1
// function calls: 18
void CAnimGraphModelBinding::GetIndexOfTag(AnimTagID tagID)
{
	const CAnimTagManagerConstPtr  pTagMgr; // 114
	CSmartPtr<CAnimTagManager, CRefCountAccessor>::Get(); // 413
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimTagManager>(CAnimTagManager* pObj); // 386
	CSmartPtr<const CAnimTagManager, CRefCountAccessor>::operator=<CAnimTagManager>(
					CAnimTagManager* pObj);  // 413
	CSmartPtr<const CAnimTagManager, CRefCountAccessor>::operator=<CAnimTagManager>(
					const CSmartPtr<CAnimTagManager, CRefCountAccessor>& other);  // 354
	CSmartPtr<const CAnimTagManager, CRefCountAccessor>::CSmartPtr<CAnimTagManager>(
					const CSmartPtr<CAnimTagManager, CRefCountAccessor>& other);  // 263
	CAnimationGraph::GetTagManagerInternal(); // 114
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 115
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimTagManager>(const CAnimTagManager* pObj); // 344
	CSmartPtr<const CAnimTagManager, CRefCountAccessor>::~CSmartPtr(); // 116
} /* size: 111, variables: 1, inline expansions: 18 (269 bytes) */

// <00E3E8C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:119
// variable: 1
// function calls: 35
void CAnimGraphModelBinding::GetUpdateNode(AnimNodeID nodeID, AnimOutputID outputID)
{
	AnimNodeLocation_t nodeLocation; // 121
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 20
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 573
	CUtlMemory<AnimNodeID, int>::Base(); // 112
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 102
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::begin(); // 574
	CUtlMemory<AnimNodeID, int>::Base(); // 113
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 105
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 105
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::end(); // 574
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 209
	UtlTraitsCopyRange<AnimNodeID>(const AnimNodeID* pFrom,
					const AnimNodeID* pFromEnd,
					AnimNodeID* pTo);  // 200
	UtlTraitsCopyRange<AnimNodeID>(const AnimNodeID* pFrom,
					const AnimNodeID* pFromEnd,
					AnimNodeID* pTo);  // 574
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
			const CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& other);  // 565
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
			const CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& other);  // 452
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
			const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 434
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
	CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimNodeID, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(
			const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 20
	AnimNodeLocation_t::AnimNodeLocation_t(
				const AnimNodeLocation_t  &);  // 121
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 122
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 124
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 124
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveAll(); // 1798
	CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AnimNodeID, int>::Purge(); // 903
	CUtlMemory<AnimNodeID, int>::Purge(); // 1799
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
	ValidateAlignment<AnimNodeID>(void); // 508
	CUtlMemory<AnimNodeID, int>::Purge(); // 510
	CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 20
	AnimNodeLocation_t::~AnimNodeLocation_t(); // 125
} /* size: 246, variables: 1, inline expansions: 35 (795 bytes) */

// <00E8A421> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:128
// function call: 1
void CAnimGraphModelBinding::AllocTraceRequest()
{
	TraceRequestID::TraceRequestID(
			const uint32  id);  // 130
} /* size: 19, inline expansions: 1 (2 bytes) */

// <00E3E8A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:128
void CAnimGraphModelBinding::AllocTraceRequest()
{
} /* size: 0 */

// <00E8F409> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:134
// function calls: 15
void CAnimGraphModelBinding::GetFixedDataPtr()
{
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::Get(); // 413
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphFixedData>(CAnimGraphFixedData* pObj); // 386
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimGraphFixedData>(const CAnimGraphFixedData* pObj); // 390
	CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator=<CAnimGraphFixedData>(
					CAnimGraphFixedData* pObj);  // 413
	CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator=<CAnimGraphFixedData>(
					const CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>& other);  // 354
	CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::CSmartPtr<CAnimGraphFixedData>(
					const CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>& other);  // 136
} /* size: 0, inline expansions: 15 (0 bytes) */

// <00E3E890> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:134
void CAnimGraphModelBinding::GetFixedDataPtr()
{
} /* size: 0 */

// <00E8F6FD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:140
// function calls: 15
void CAnimGraphModelBinding::GetInstanceDataPtr()
{
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::Get(); // 413
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphInstanceData>(CAnimGraphInstanceData* pObj); // 386
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimGraphInstanceData>(const CAnimGraphInstanceData* pObj); // 390
	CSmartPtr<const CAnimGraphInstanceData, CRefCountAccessor>::operator=<CAnimGraphInstanceData>(
						CAnimGraphInstanceData* pObj);  // 413
	CSmartPtr<const CAnimGraphInstanceData, CRefCountAccessor>::operator=<CAnimGraphInstanceData>(
						const CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>& other);  // 354
	CSmartPtr<const CAnimGraphInstanceData, CRefCountAccessor>::CSmartPtr<CAnimGraphInstanceData>(
						const CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>& other);  // 142
} /* size: 0, inline expansions: 15 (0 bytes) */

// <00E3E877> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:140
void CAnimGraphModelBinding::GetInstanceDataPtr()
{
} /* size: 0 */

// <00E8F9F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:146
// function calls: 14
void CAnimGraphModelBinding::GetStaticPoseCachePtr()
{
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
			const CSmartPtr<CStaticPoseCache, CRefCountAccessor>& other);  // 148
} /* size: 0, inline expansions: 14 (0 bytes) */

// <00E3E85E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:146
void CAnimGraphModelBinding::GetStaticPoseCachePtr()
{
} /* size: 0 */

// <00E8FCBC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:152
// function calls: 15
void CAnimGraphModelBinding::GetParamMapPtr()
{
	CSmartPtr<CAnimParamIdMap, CRefCountAccessor>::Get(); // 413
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParamIdMap>(CAnimParamIdMap* pObj); // 386
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimParamIdMap>(const CAnimParamIdMap* pObj); // 390
	CSmartPtr<const CAnimParamIdMap, CRefCountAccessor>::operator=<CAnimParamIdMap>(
					CAnimParamIdMap* pObj);  // 413
	CSmartPtr<const CAnimParamIdMap, CRefCountAccessor>::operator=<CAnimParamIdMap>(
					const CSmartPtr<CAnimParamIdMap, CRefCountAccessor>& other);  // 354
	CSmartPtr<const CAnimParamIdMap, CRefCountAccessor>::CSmartPtr<CAnimParamIdMap>(
					const CSmartPtr<CAnimParamIdMap, CRefCountAccessor>& other);  // 154
} /* size: 0, inline expansions: 15 (0 bytes) */

// <00E3E845> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:152
void CAnimGraphModelBinding::GetParamMapPtr()
{
} /* size: 0 */

// <00E8FFB0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:158
// function calls: 15
void CAnimGraphModelBinding::GetSkeleton()
{
	CSmartPtr<CAnimSkeleton, CRefCountAccessor>::Get(); // 413
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimSkeleton>(CAnimSkeleton* pObj); // 386
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimSkeleton>(const CAnimSkeleton* pObj); // 390
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator=<CAnimSkeleton>(
				CAnimSkeleton* pObj);  // 413
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::operator=<CAnimSkeleton>(
				const CSmartPtr<CAnimSkeleton, CRefCountAccessor>& other);  // 354
	CSmartPtr<const CAnimSkeleton, CRefCountAccessor>::CSmartPtr<CAnimSkeleton>(
				const CSmartPtr<CAnimSkeleton, CRefCountAccessor>& other);  // 160
} /* size: 0, inline expansions: 15 (0 bytes) */

// <00E3E82C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:158
void CAnimGraphModelBinding::GetSkeleton()
{
} /* size: 0 */

// <00E3E37A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:164
// variables: 9
// function calls: 17
void CAnimGraphModelBinding::AddNodes()
{
	int nTotalNodes; // 166
	const IAnimNodeManager* pNodeManager; // 168
	CUpdateNodeManager* pUpdateNodeManager; // 169
	AnimNodeLocation_t nodeLocation; // 171
	int nNumNodes; // 173
	const char   __FUNCTION__; // 10212
	{
		int iNode; // 178
		{
			const IAnimNode* pNode; // 180
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 181
			}
			AnimNodeID::operator=(
					const AnimNodeID& rhs);  // 183
		}
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::Get(); // 214
	CAnimationSubGraph::GetNodeManager(); // 168
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 169
	AnimNodeID::AnimNodeID(); // 20
	CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimNodeID, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(); // 20
	AnimNodeLocation_t::AnimNodeLocation_t(); // 171
	ValidateAlignment<AnimNodeID>(void); // 508
	CUtlMemory<AnimNodeID, int>::Purge(); // 510
	CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 20
	AnimNodeLocation_t::~AnimNodeLocation_t(); // 189
} /* size: 0, variables: 6, inline expansions: 16 (186 bytes) */

// <00E3D34E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:192
// variables: 8
// function calls: 68
void CAnimGraphModelBinding::AddNodesRecurs(const AnimNodeLocation_t& nodeLocation, const IAnimNodeManager* pNodeManager, CUpdateNodeManager* pUpdateNodeManager)
{
	int nTotalNodes; // 194
	const IAnimNodeManager* pNextNodeManager; // 199
	const char   __FUNCTION__; // 10374
	{
		int nNumNodes; // 202
		AnimNodeLocation_t nextNodeLocation; // 210
		{
			int iNode; // 214
			{
				const IAnimNode* pNode; // 216
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 217
				}
				AnimNodeID::operator=(
						const AnimNodeID& rhs);  // 219
			}
		}
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 206
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 20
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 573
		CUtlMemory<AnimNodeID, int>::Base(); // 112
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 102
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::begin(); // 574
		CUtlMemory<AnimNodeID, int>::Base(); // 113
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 105
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 105
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::end(); // 574
		AnimNodeID::operator=(
				const AnimNodeID& rhs);  // 209
		UtlTraitsCopyRange<AnimNodeID>(const AnimNodeID* pFrom,
						const AnimNodeID* pFromEnd,
						AnimNodeID* pTo);  // 200
		UtlTraitsCopyRange<AnimNodeID>(const AnimNodeID* pFrom,
						const AnimNodeID* pFromEnd,
						AnimNodeID* pTo);  // 574
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
				const CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& other);  // 565
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
				const CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& other);  // 452
		CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
				const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 434
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
		CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
		CUtlMemory<AnimNodeID, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 434
		CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(
				const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 20
		AnimNodeLocation_t::AnimNodeLocation_t(
					const AnimNodeLocation_t  &);  // 210
		CUtlMemory<AnimNodeID, int>::NumAllocated(); // 1196
		CUtlMemory<AnimNodeID, int>::operator[](
				int i);  // 602
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Element(
			int i);  // 1201
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 1520
		CopyConstruct<AnimNodeID>(AnimNodeID* pMemory,
						const AnimNodeID& src);  // 1201
		CUtlMemory<AnimNodeID, int>::Base(); // 112
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 368
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::AddToTail(
				const AnimNodeID& src);  // 211
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveAll(); // 1798
		CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 905
		CUtlMemory<AnimNodeID, int>::Purge(); // 903
		CUtlMemory<AnimNodeID, int>::Purge(); // 1799
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
		ValidateAlignment<AnimNodeID>(void); // 508
		CUtlMemory<AnimNodeID, int>::Purge(); // 510
		CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
		CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 20
		AnimNodeLocation_t::~AnimNodeLocation_t(); // 223
	}
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 196
	MyTypeID(void); // 170
	reflection_cast<const CAnimNodeBase, const IAnimNode*>(const IAnimNode* obj); // 196
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
			const CAnimNodeBase* pObj);  // 319
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
			const CAnimNodeBase* pObj);  // 196
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 344
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 196
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 199
} /* size: 0, variables: 3, inline expansions: 24 (519 bytes) */

// <00E39430> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphmodelbinding.cpp:229
// variables: 13
// function calls: 297
void CAnimGraphModelBinding::InitializeNodesRecurs(const AnimNodeLocation_t& nodeLocation, AnimOutputID outputID)
{
	const CAnimNodeBase* currentNode; // 236
	CUpdateNodeManager* pUpdateNodeManager; // 252
	const char   __FUNCTION__; // 10548
	AnimNodeID nodeID; // 255
	{
		AnimNodeLocation_t outputNodeLocation; // 246
		AnimOutputID::AnimOutputID(
				const AnimOutputID& rhs);  // 246
		AnimOutputID::AnimOutputID(); // 247
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveAll(); // 1798
		CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 905
		CUtlMemory<AnimNodeID, int>::Purge(); // 903
		CUtlMemory<AnimNodeID, int>::Purge(); // 1799
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
		ValidateAlignment<AnimNodeID>(void); // 508
		CUtlMemory<AnimNodeID, int>::Purge(); // 510
		CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
		CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 20
		AnimNodeLocation_t::~AnimNodeLocation_t(); // 247
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 20
		CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
		CUtlMemory<AnimNodeID, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 437
		CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 535
		{
		}
		V_swap_through_temp<unsigned int>(unsigned int& x,
							unsigned int& y);  // 536
		V_swap_through_temp<AnimNodeID*>(AnimNodeID *& x,
						AnimNodeID *& y);  // 537
		V_swap_through_temp<int>(int& x,
					int& y);  // 538
		CUtlMemory<AnimNodeID, int>::Swap(
			CUtlMemory<AnimNodeID, int>& mem);  // 1351
		swap<int>(int& __a,
				int& __b);  // 19
		V_swap<int>(int& x,
				int& y);  // 1352
		swap<AnimNodeID*>(AnimNodeID *& __a,
					AnimNodeID *& __b);  // 19
		V_swap<AnimNodeID*>(AnimNodeID *& x,
					AnimNodeID *& y);  // 1354
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Swap(
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& vec);  // 437
		CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(
				CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 20
		AnimNodeLocation_t::AnimNodeLocation_t(
					AnimNodeLocation_t &);  // 249
		CUtlMemory<AnimNodeID, int>::Purge(); // 903
		CUtlMemory<AnimNodeID, int>::Purge(); // 1799
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveAll(); // 1798
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
		ValidateAlignment<AnimNodeID>(void); // 508
		CUtlMemory<AnimNodeID, int>::Purge(); // 510
		CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
		CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 20
		AnimNodeLocation_t::~AnimNodeLocation_t(); // 250
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 253
	}
	{
		CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> > childNodeLocations; // 259
		CAnimUpdateNodeBase* pUpdateNode; // 282
		{
			int i; // 262
			{
				AnimNodeID childID; // 264
				{
					AnimNodeLocation_t childNodeLocation; // 267
					AnimNodeID::AnimNodeID(
							const AnimNodeID& rhs);  // 20
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 573
					CUtlMemory<AnimNodeID, int>::Base(); // 112
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 102
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::begin(); // 574
					CUtlMemory<AnimNodeID, int>::Base(); // 113
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 105
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 105
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::end(); // 574
					AnimNodeID::operator=(
							const AnimNodeID& rhs);  // 209
					UtlTraitsCopyRange<AnimNodeID>(const AnimNodeID* pFrom,
									const AnimNodeID* pFromEnd,
									AnimNodeID* pTo);  // 200
					UtlTraitsCopyRange<AnimNodeID>(const AnimNodeID* pFrom,
									const AnimNodeID* pFromEnd,
									AnimNodeID* pTo);  // 574
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
							const CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& other);  // 565
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
							const CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& other);  // 452
					CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
							const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 434
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
					CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
					CUtlMemory<AnimNodeID, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 434
					CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(
							const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 20
					AnimNodeLocation_t::AnimNodeLocation_t(
								const AnimNodeLocation_t  &);  // 267
					AnimNodeID::operator=(
							const AnimNodeID& rhs);  // 268
					AnimNodeID::operator=(
							const AnimNodeID& rhs);  // 20
					CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 535
					CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 535
					{
					}
					V_swap_through_temp<unsigned int>(unsigned int& x,
										unsigned int& y);  // 536
					V_swap_through_temp<AnimNodeID*>(AnimNodeID *& x,
									AnimNodeID *& y);  // 537
					V_swap_through_temp<int>(int& x,
								int& y);  // 538
					CUtlMemory<AnimNodeID, int>::Swap(
						CUtlMemory<AnimNodeID, int>& mem);  // 1351
					swap<AnimNodeID*>(AnimNodeID *& __a,
								AnimNodeID *& __b);  // 19
					V_swap<AnimNodeID*>(AnimNodeID *& x,
								AnimNodeID *& y);  // 1354
					swap<int>(int& __a,
							int& __b);  // 19
					V_swap<int>(int& x,
							int& y);  // 1352
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Swap(
						CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& vec);  // 440
					CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
							CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 20
					AnimNodeLocation_t::operator=(
							AnimNodeLocation_t &);  // 269
					CUtlMemory<AnimNodeID, int>::Purge(); // 903
					CUtlMemory<AnimNodeID, int>::Purge(); // 1799
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveAll(); // 1798
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
					ValidateAlignment<AnimNodeID>(void); // 508
					CUtlMemory<AnimNodeID, int>::Purge(); // 510
					CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
					CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 20
					AnimNodeLocation_t::~AnimNodeLocation_t(); // 269
					CUtlMemory<AnimNodeLocation_t, int>::NumAllocated(); // 1196
					CUtlMemory<AnimNodeLocation_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::Element(
						int i);  // 1201
					AnimNodeID::AnimNodeID(
							const AnimNodeID& rhs);  // 20
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 573
					CUtlMemory<AnimNodeID, int>::Base(); // 112
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 102
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::begin(); // 574
					CUtlMemory<AnimNodeID, int>::Base(); // 113
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 105
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 105
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::end(); // 574
					AnimNodeID::operator=(
							const AnimNodeID& rhs);  // 209
					UtlTraitsCopyRange<AnimNodeID>(const AnimNodeID* pFrom,
									const AnimNodeID* pFromEnd,
									AnimNodeID* pTo);  // 200
					UtlTraitsCopyRange<AnimNodeID>(const AnimNodeID* pFrom,
									const AnimNodeID* pFromEnd,
									AnimNodeID* pTo);  // 574
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
							const CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& other);  // 565
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
							const CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& other);  // 452
					CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
							const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 434
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
					CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
					CUtlMemory<AnimNodeID, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 434
					CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(
							const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 20
					AnimNodeLocation_t::AnimNodeLocation_t(
								const AnimNodeLocation_t  &);  // 1520
					CopyConstruct<AnimNodeLocation_t>(AnimNodeLocation_t* pMemory,
										const AnimNodeLocation_t& src);  // 1201
					CUtlMemory<AnimNodeLocation_t, int>::Base(); // 112
					CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::Base(); // 368
					CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::AddToTail(
							const AnimNodeLocation_t& src);  // 270
					CUtlMemory<AnimNodeID, int>::Purge(); // 903
					CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 905
					CUtlMemory<AnimNodeID, int>::Purge(); // 1799
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveAll(); // 1798
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
					ValidateAlignment<AnimNodeID>(void); // 508
					CUtlMemory<AnimNodeID, int>::Purge(); // 510
					CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
					CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 20
					AnimNodeLocation_t::~AnimNodeLocation_t(); // 271
				}
				AnimNodeID::IsValid(); // 265
				AnimNodeID::AnimNodeID(); // 20
				CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
				CUtlMemory<AnimNodeID, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(); // 20
				AnimNodeLocation_t::AnimNodeLocation_t(); // 274
				CUtlMemory<AnimNodeLocation_t, int>::NumAllocated(); // 1247
				CUtlMemory<AnimNodeLocation_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::Element(
					int i);  // 1252
				AnimNodeID::AnimNodeID(
						const AnimNodeID& rhs);  // 20
				CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
				CUtlMemory<AnimNodeID, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 437
				CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Swap(
					CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& vec);  // 437
				CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(
						CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 20
				AnimNodeLocation_t::AnimNodeLocation_t(
							AnimNodeLocation_t &);  // 1514
				Construct<AnimNodeLocation_t, AnimNodeLocation_t>(AnimNodeLocation_t* pMemory); // 1252
				CUtlMemory<AnimNodeLocation_t, int>::Base(); // 112
				CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::Base(); // 368
				CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::AddToTail(
						AnimNodeLocation_t& src);  // 274
				CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
				ValidateAlignment<AnimNodeID>(void); // 508
				CUtlMemory<AnimNodeID, int>::Purge(); // 510
				CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
				CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
				CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 20
				AnimNodeLocation_t::~AnimNodeLocation_t(); // 274
			}
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
			CClassInfo::GetName(); // 283
			CUtlString::Get(); // 99
			CUtlString::String(); // 283
		}
		CUtlMemory<AnimNodeLocation_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<AnimNodeLocation_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::CUtlVector(); // 259
		AnimNodeID::operator=(
				const AnimNodeID& rhs);  // 20
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 573
		CUtlMemory<AnimNodeID, int>::Base(); // 112
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 102
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::begin(); // 574
		CUtlMemory<AnimNodeID, int>::Base(); // 113
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 105
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 105
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::end(); // 574
		AnimNodeID::operator=(
				const AnimNodeID& rhs);  // 209
		UtlTraitsCopyRange<AnimNodeID>(const AnimNodeID* pFrom,
						const AnimNodeID* pFromEnd,
						AnimNodeID* pTo);  // 200
		UtlTraitsCopyRange<AnimNodeID>(const AnimNodeID* pFrom,
						const AnimNodeID* pFromEnd,
						AnimNodeID* pTo);  // 574
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
				const CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& other);  // 565
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
				const CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& other);  // 452
		CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
				const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 20
		AnimNodeLocation_t::operator=(
				const AnimNodeLocation_t  &);  // 279
		AnimNodeID::operator=(
				const AnimNodeID& rhs);  // 280
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
				const CAnimNodeBase* pObj);  // 319
		CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
				const CAnimNodeBase* pObj);  // 287
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 344
		CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 287
		{
			int i; // 1721
			CUtlMemory<AnimNodeLocation_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::Element(
				int i);  // 1723
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveAll(); // 1798
			CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 905
			CUtlMemory<AnimNodeID, int>::Purge(); // 903
			CUtlMemory<AnimNodeID, int>::Purge(); // 1799
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
			ValidateAlignment<AnimNodeID>(void); // 508
			CUtlMemory<AnimNodeID, int>::Purge(); // 510
			CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
			CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 20
			AnimNodeLocation_t::~AnimNodeLocation_t(); // 1526
			Destruct<AnimNodeLocation_t>(AnimNodeLocation_t* pMemory); // 1723
		}
		CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::RemoveAll(); // 1798
		CUtlMemory<AnimNodeLocation_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<AnimNodeLocation_t, int>::Purge(); // 903
		CUtlMemory<AnimNodeLocation_t, int>::Purge(); // 1799
		CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::Purge(); // 560
		ValidateAlignment<AnimNodeLocation_t>(void); // 508
		CUtlMemory<AnimNodeLocation_t, int>::Purge(); // 510
		CUtlMemory<AnimNodeLocation_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<AnimNodeLocation_t, CUtlMemory<AnimNodeLocation_t, int> >::~CUtlVector(); // 288
	}
	AnimNodeID::IsValid(); // 231
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 236
	AnimOutputID::IsValid(); // 243
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 20
	CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimNodeID, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 573
	CUtlMemory<AnimNodeID, int>::Base(); // 112
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 102
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::begin(); // 574
	CUtlMemory<AnimNodeID, int>::Base(); // 113
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 105
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 105
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::end(); // 574
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 209
	UtlTraitsCopyRange<AnimNodeID>(const AnimNodeID* pFrom,
					const AnimNodeID* pFromEnd,
					AnimNodeID* pTo);  // 200
	UtlTraitsCopyRange<AnimNodeID>(const AnimNodeID* pFrom,
					const AnimNodeID* pFromEnd,
					AnimNodeID* pTo);  // 574
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
			const CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& other);  // 565
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
			const CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& other);  // 452
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
			const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 434
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(
			const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 20
	AnimNodeLocation_t::AnimNodeLocation_t(
				const AnimNodeLocation_t  &);  // 233
	CSmartPtr<CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 252
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 255
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 257
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 20
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 573
	CUtlMemory<AnimNodeID, int>::Base(); // 112
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 102
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::begin(); // 574
	CUtlMemory<AnimNodeID, int>::Base(); // 113
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 105
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 105
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::end(); // 574
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 209
	UtlTraitsCopyRange<AnimNodeID>(const AnimNodeID* pFrom,
					const AnimNodeID* pFromEnd,
					AnimNodeID* pTo);  // 200
	UtlTraitsCopyRange<AnimNodeID>(const AnimNodeID* pFrom,
					const AnimNodeID* pFromEnd,
					AnimNodeID* pTo);  // 574
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
			const CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& other);  // 565
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
			const CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& other);  // 452
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
			const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 434
	CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimNodeID, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(
			const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 20
	AnimNodeLocation_t::AnimNodeLocation_t(
				const AnimNodeLocation_t  &);  // 290
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 20
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 573
	CUtlMemory<AnimNodeID, int>::Base(); // 112
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 102
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::begin(); // 574
	CUtlMemory<AnimNodeID, int>::Base(); // 113
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 105
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 105
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::end(); // 574
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 209
	UtlTraitsCopyRange<AnimNodeID>(const AnimNodeID* pFrom,
					const AnimNodeID* pFromEnd,
					AnimNodeID* pTo);  // 200
	UtlTraitsCopyRange<AnimNodeID>(const AnimNodeID* pFrom,
					const AnimNodeID* pFromEnd,
					AnimNodeID* pTo);  // 574
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
			const CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& other);  // 565
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
			const CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >& other);  // 452
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator=(
			const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 434
	CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimNodeID, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(
			const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 20
	AnimNodeLocation_t::AnimNodeLocation_t(
				const AnimNodeLocation_t  &);  // 240
} /* size: 0, variables: 4, inline expansions: 69 (2448 bytes) */

