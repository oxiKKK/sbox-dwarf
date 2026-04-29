
//
// animgraph/animgraphinstancecontext.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 17
//

// <00E436B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:11
// function calls: 118
void CAnimGraphInstanceContext::CAnimGraphInstanceContext(const AnimGraphInstanceCreationSettings_t& creationSettings, const CAnimGraphModelBindingConstPtr& pModelBinding)
{
	{
		{
		}
	}
	{
		CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
		CSmartPtr<const CAnimGraphModelBinding, CRefCountAccessor>::operator->(); // 12
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
		CAnimGraphModelBinding::GetFixedDataPtr(); // 12
		CSmartPtr<const CAnimGraphModelBinding, CRefCountAccessor>::operator->(); // 13
		CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::Get(); // 413
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimGraphInstanceData>(CAnimGraphInstanceData* pObj); // 386
		CSmartPtr<const CAnimGraphInstanceData, CRefCountAccessor>::operator=<CAnimGraphInstanceData>(
							CAnimGraphInstanceData* pObj);  // 413
		CSmartPtr<const CAnimGraphInstanceData, CRefCountAccessor>::operator=<CAnimGraphInstanceData>(
							const CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>& other);  // 354
		CSmartPtr<const CAnimGraphInstanceData, CRefCountAccessor>::CSmartPtr<CAnimGraphInstanceData>(
							const CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>& other);  // 142
		CAnimGraphModelBinding::GetInstanceDataPtr(); // 13
		CSmartPtr<const CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 13
		CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(
					const CMutableRefCountBase<true, CRefMT>  &);  // 339
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(
					const CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >  &);  // 19
		IAnimGraphInstanceData::IAnimGraphInstanceData(
					const IAnimGraphInstanceData  &);  // 62
		CPackedDataT<true>::CPackedDataT(
				const CPackedDataT<true>  &);  // 62
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 19
		CPackedHandle<CAnimUpdateParameterList>::CPackedHandle(
				const CPackedHandle<CAnimUpdateParameterList>  &);  // 62
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 19
		CPackedHandle<CAnimUpdateTagList>::CPackedHandle(
				const CPackedHandle<CAnimUpdateTagList>  &);  // 62
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 19
		CPackedHandle<PerTickSettings_t>::CPackedHandle(
				const CPackedHandle<PerTickSettings_t>  &);  // 62
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 19
		CPackedHandle<CTraceRequestList>::CPackedHandle(
				const CPackedHandle<CTraceRequestList>  &);  // 62
		CAnimGraphInstanceData::CAnimGraphInstanceData(
					const CAnimGraphInstanceData  &);  // 13
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
				CAnimGraphInstanceData* pObj);  // 319
		CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::CSmartPtr(
				CAnimGraphInstanceData* pObj);  // 13
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<const CAnimGraphInstanceData>(const CAnimGraphInstanceData* pObj); // 344
		CSmartPtr<const CAnimGraphInstanceData, CRefCountAccessor>::~CSmartPtr(); // 13
		CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 32
		IAnimationDebugRenderer::IAnimationDebugRenderer(); // 226
		IAnimationGraphVisualizationManager::IAnimationGraphVisualizationManager(); // 32
		CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
		CUtlMemory<CTransform, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(); // 32
		CAnimationGraphVisualizationManager::CAnimationGraphVisualizationManager(); // 14
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimationGraphVisualizationManager>(CAnimationGraphVisualizationManager* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimationGraphVisualizationManager>(CAnimationGraphVisualizationManager* pObj); // 370
		CSmartPtr<CAnimationGraphVisualizationManager, CRefCountAccessor>::operator=(
				CAnimationGraphVisualizationManager* pObj);  // 319
		CSmartPtr<CAnimationGraphVisualizationManager, CRefCountAccessor>::CSmartPtr(
				CAnimationGraphVisualizationManager* pObj);  // 14
		CSmartPtr<const CAnimGraphModelBinding, CRefCountAccessor>::operator->(); // 15
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
		CAnimGraphModelBinding::GetSkeleton(); // 15
		CWeakHandle<InfoForResourceTypeCModel>::GetBinding(); // 309
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 570
		CStrongHandle<InfoForResourceTypeCModel>::Init(
			ResourceHandleTyped_t hResource);  // 462
		CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(
				ResourceHandleTyped_t hResource);  // 218
		CStrongHandleCopyable<InfoForResourceTypeCModel>::CStrongHandleCopyable(
					ResourceHandleTyped_t hResource);  // 309
		CStrongHandleVolatile<InfoForResourceTypeCModel>::CStrongHandleVolatile(
					const CWeakHandle<InfoForResourceTypeCModel>& src);  // 16
		CStrongHandle<InfoForResourceTypeCModel>::GetData(); // 337
		CStrongHandleVolatile<InfoForResourceTypeCModel>::GetData(); // 18
		{
		}
		CStrongHandle<InfoForResourceTypeCModel>::GetReloadCounter(); // 391
		CStrongHandleVolatile<InfoForResourceTypeCModel>::InitReloadCounter(); // 19
		CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator->(); // 22
		CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator->(); // 23
		CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator->(); // 24
	}
} /* size: 0 */

// <00E43664> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:11
// variables: 2
void CAnimGraphInstanceContext::CAnimGraphInstanceContext(const AnimGraphInstanceCreationSettings_t& creationSettings, const CAnimGraphModelBindingConstPtr& pModelBinding)
{
	const char   __FUNCTION__; // 10646
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 18
	}
} /* size: 0, variables: 1 */

// <00E43606> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:30
// function call: 1
void CAnimGraphInstanceContext::GetFixedData()
{
	CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator*(); // 32
} /* size: 9, inline expansions: 1 (0 bytes) */

// <00E8F1E0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:38
// function call: 1
void CAnimGraphInstanceContext::GetInstanceData()
{
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 40
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00E435ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:38
void CAnimGraphInstanceContext::GetInstanceData()
{
} /* size: 0 */

// <00E8F239> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:54
void CAnimGraphInstanceContext::GetSkeleton()
{
} /* size: 9 */

// <00E8F262> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:62
// function calls: 4
void CAnimGraphInstanceContext::GetModel()
{
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 64
} /* size: 15, inline expansions: 4 (13 bytes) */

// <00E435A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:62
void CAnimGraphInstanceContext::GetModel()
{
} /* size: 0 */

// <00E8F33E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:70
// function call: 1
void CAnimGraphInstanceContext::GetVisualizationManager()
{
	CSmartPtr<CAnimationGraphVisualizationManager, CRefCountAccessor>::Get(); // 72
} /* size: 9, inline expansions: 1 (0 bytes) */

// <00E43589> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:70
void CAnimGraphInstanceContext::GetVisualizationManager()
{
} /* size: 0 */

// <00E8F397> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:78
// function call: 1
void CAnimGraphInstanceContext::GetAnimTime()
{
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator->(); // 80
} /* size: 13, inline expansions: 1 (0 bytes) */

// <00E43570> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:78
void CAnimGraphInstanceContext::GetAnimTime()
{
} /* size: 0 */

// <00E434F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:86
// function call: 1
void CAnimGraphInstanceContext::GetUpdateID()
{
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator->(); // 88
} /* size: 13, inline expansions: 1 (0 bytes) */

// <00E43482> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:94
// function call: 1
void CAnimGraphInstanceContext::GetLocalToWorldTransform()
{
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator->(); // 96
} /* size: 13, inline expansions: 1 (0 bytes) */

// <00E4340B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:102
// function call: 1
void CAnimGraphInstanceContext::GetPreviousLocalToWorldTransform()
{
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator->(); // 104
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00E43379> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:110
// function call: 1
void CAnimGraphInstanceContext::Save(ISave* pSave)
{
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator->(); // 112
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00E432E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphinstancecontext.cpp:118
// function call: 1
void CAnimGraphInstanceContext::Restore(IRestore* pRestore)
{
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator->(); // 120
} /* size: 0, inline expansions: 1 (0 bytes) */

