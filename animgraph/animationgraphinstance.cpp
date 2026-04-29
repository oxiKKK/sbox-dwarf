
//
// animgraph/animationgraphinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 74
//	class: 1
//

// <00E8EBF8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:27
void MyTypeInfo(void)
{
} /* size: 0 */

// <00E73E4C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:27
void IAnimationGraphInstance::GetTypeInfo()
{
} /* size: 0 */

// <00E73CB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:27
// function calls: 3
void* IAnimationGraphInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimationGraphInstance>::CastTo(
		IAnimationGraphInstance* derived,
		ClassID baseTypeInfo);  // 27
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00E73B24> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:27
// function calls: 3
const void* IAnimationGraphInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimationGraphInstance>::CastTo(
		const IAnimationGraphInstance* derived,
		ClassID baseTypeInfo);  // 27
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00E89E95> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:30
void CAnimationGraphInstance::GetTypeInfo()
{
} /* size: 12 */

// <00E735F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:30
// function calls: 3
void* CAnimationGraphInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAnimationGraphInstance>::CastTo(
		CAnimationGraphInstance* derived,
		ClassID baseTypeInfo);  // 30
} /* size: 0, inline expansions: 3 (295 bytes) */

// <00E73461> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:30
// function calls: 3
const void* CAnimationGraphInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAnimationGraphInstance>::CastTo(
		const CAnimationGraphInstance* derived,
		ClassID baseTypeInfo);  // 30
} /* size: 0, inline expansions: 3 (295 bytes) */

// <00E8EC16> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:35
void GetBaseMap(void)
{
} /* size: 0 */

// <00E730A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:35
// variables: 2
datamap_t* DataMapInit<CAnimationGraphInstance>(CAnimationGraphInstance *)
{
	const char* pDataMapInit_className; // 35
	typedescription_t dataDesc; // 35
} /* size: 0, variables: 2 */

// <00DEA8A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:41
// member functions: 4
// member variable: 1
// class size: 8
class CScopedParallelCheck {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:44 */
	void CScopedParallelCheck(CScopedParallelCheck* , CParallelUpdateCheck& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:50 */
	void ~CScopedParallelCheck(CScopedParallelCheck* );
private:
	CParallelUpdateCheck & m_check; /* 0 8 */
	void CScopedParallelCheck(class CScopedParallelCheck *, class CParallelUpdateCheck &); /* linkage=_ZN20CScopedParallelCheckC4ER20CParallelUpdateCheck */
	void ~CScopedParallelCheck(class CScopedParallelCheck *); /* linkage=_ZN20CScopedParallelCheckD4Ev */
};

// <00E73084> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:44
void CScopedParallelCheck::CScopedParallelCheck(CParallelUpdateCheck& check)
{
} /* size: 0 */

// <00E7305F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:44
inline void CScopedParallelCheck::CScopedParallelCheck(CParallelUpdateCheck& check)
{
} /* size: 0 */

// <00E73048> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:50
void CScopedParallelCheck::~CScopedParallelCheck()
{
} /* size: 0 */

// <00E7302F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:50
inline void CScopedParallelCheck::~CScopedParallelCheck()
{
} /* size: 0 */

// <00E6DDDB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:60
// variables: 8
// function calls: 386
void CAnimationGraphInstance::CAnimationGraphInstance(const AnimGraphInstanceCreationSettings_t& creationSettings, const CAnimGraphModelBindingConstPtr& pModelBinding)
{
	{
		{
			const CAnimationGraph* pSourceGraph; // 64
			{
			}
			{
				int actIndex; // 101
				{
					CActivityValuesConstPtr pActValues; // 103
					Activity act; // 105
				}
			}
		}
	}
	{
		Object::Object(); // 53
		CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 53
		IAnimationGraphInstance::IAnimationGraphInstance(); // 62
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
				CAnimGraphInstanceContext* pObj);  // 319
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::CSmartPtr(
				CAnimGraphInstanceContext* pObj);  // 61
		CSmartPtr<const CAnimGraphModelBinding, CRefCountAccessor>::operator->(); // 62
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
		CAnimGraphModelBinding::GetFixedDataPtr(); // 62
		CSmartPtr<CAnimationGraphPhysicsTraceManager, CRefCountAccessor>::CSmartPtr(); // 62
		CSmartPtr<CAnimParameterListInstance, CRefCountAccessor>::CSmartPtr(); // 62
		CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::CSmartPtr(); // 62
		CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::CSmartPtr(); // 62
		CSmartPtr<const CActivityValueList, CRefCountAccessor>::CSmartPtr(); // 62
		CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::CSmartPtr(); // 62
		CSmartPtr<CAnimMovementManagerInstance, CRefCountAccessor>::CSmartPtr(); // 62
		CSmartPtr<CFootMotionManager, CRefCountAccessor>::CSmartPtr(); // 62
		CSmartPtr<CAnimPose, CRefCountAccessor>::CSmartPtr(); // 62
		CSmartPtr<CPoseRecipe, CRefCountAccessor>::CSmartPtr(); // 62
		CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 178
		Init(const CUtlHashtable<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqualFuncto this); // 178
		CUtlHashtable(const CUtlHashtable<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqualFuncto this,
				int minimumSize);  // 62
		CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 178
		Init(const CUtlHashtable<int, CSmartPtr<const CActivityValues, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqualFuncto this); // 178
		CUtlHashtable(const CUtlHashtable<int, CSmartPtr<const CActivityValues, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqualFuncto this,
				int minimumSize);  // 62
		AnimNodeID::AnimNodeID(); // 62
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 62
		CUtlMemory<IAnimGraphSequenceFinishedListener::ValidateGrowSize(); // 475
		CUtlMemory<IAnimGraphSequenceFinishedListener::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<IAnimGraphSequenceFinishedListener::ResetDbgInfo(); // 530
		CUtlVectorBase<IAnimGraphSequenceFinishedListener::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<IAnimGraphSequenceFinishedListener::CUtlVector(); // 62
		CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::CSmartPtr(); // 62
		{
			const CAnimationGraph* pSourceGraph; // 64
			MyTypeID(void); // 170
			reflection_cast<const CAnimationGraph, const IAnimationGraph*>(const IAnimationGraph* obj); // 64
			{
			}
			CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator*(); // 67
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CFootMotionManager>(CFootMotionManager* pObj); // 366
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CFootMotionManager>(CFootMotionManager* pObj); // 370
			CSmartPtr<CFootMotionManager, CRefCountAccessor>::operator=(
					CFootMotionManager* pObj);  // 67
			CSmartPtr<CFootMotionManager, CRefCountAccessor>::Get(); // 73
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimGraphUpdateContextBuilder>(CAnimGraphUpdateContextBuilder* pObj); // 366
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimGraphUpdateContextBuilder>(CAnimGraphUpdateContextBuilder* pObj); // 370
			CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator=(
					CAnimGraphUpdateContextBuilder* pObj);  // 69
			CSmartPtr<CFootMotionManager, CRefCountAccessor>::operator->(); // 75
			CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::Get(); // 75
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
			CAnimGraphModelBinding::GetParamMapPtr(); // 77
			CSmartPtr<const CAnimGraphModelBinding, CRefCountAccessor>::operator->(); // 77
			CAnimationGraph::GetParameterListInternal(); // 77
			CSmartPtr<CAnimParameterList, CRefCountAccessor>::Get(); // 413
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 386
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CAnimParameterList>(const CAnimParameterList* pObj); // 390
			CSmartPtr<const CAnimParameterList, CRefCountAccessor>::operator=<CAnimParameterList>(
							CAnimParameterList* pObj);  // 413
			CSmartPtr<const CAnimParameterList, CRefCountAccessor>::operator=<CAnimParameterList>(
							const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 354
			CSmartPtr<const CAnimParameterList, CRefCountAccessor>::CSmartPtr<CAnimParameterList>(
							const CSmartPtr<CAnimParameterList, CRefCountAccessor>& other);  // 77
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimParameterListInstance>(CAnimParameterListInstance* pObj); // 366
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimParameterListInstance>(CAnimParameterListInstance* pObj); // 370
			CSmartPtr<CAnimParameterListInstance, CRefCountAccessor>::operator=(
					CAnimParameterListInstance* pObj);  // 77
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CAnimParameterList>(const CAnimParameterList* pObj); // 344
			CSmartPtr<const CAnimParameterList, CRefCountAccessor>::~CSmartPtr(); // 77
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CAnimParamIdMap>(const CAnimParamIdMap* pObj); // 344
			CSmartPtr<const CAnimParamIdMap, CRefCountAccessor>::~CSmartPtr(); // 77
			CSmartPtr<CAnimParameterListInstance, CRefCountAccessor>::operator->(); // 78
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
			CAnimationGraphPhysicsTraceManager::CAnimationGraphPhysicsTraceManager(
								const CAnimGraphInstanceContextPtr& pGraphContext);  // 79
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
					CAnimationGraphPhysicsTraceManager* pObj);  // 79
			CSmartPtr<CActivityValueList, CRefCountAccessor>::Get(); // 413
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CActivityValueList>(CActivityValueList* pObj); // 386
			CSmartPtr<const CActivityValueList, CRefCountAccessor>::operator=<CActivityValueList>(
							CActivityValueList* pObj);  // 413
			CSmartPtr<const CActivityValueList, CRefCountAccessor>::operator=<CActivityValueList>(
							const CSmartPtr<CActivityValueList, CRefCountAccessor>& other);  // 354
			CSmartPtr<const CActivityValueList, CRefCountAccessor>::CSmartPtr<CActivityValueList>(
							const CSmartPtr<CActivityValueList, CRefCountAccessor>& other);  // 251
			CAnimationGraph::GetActivityValuesListInternal(); // 80
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CActivityValueList>(const CActivityValueList* pObj); // 496
			CSmartPtr<const CActivityValueList, CRefCountAccessor>::Reset(
				ESmartPtrNoAddRef,
				const CActivityValueList* pObj);  // 419
			CSmartPtr<const CActivityValueList, CRefCountAccessor>::operator=(
					CSmartPtr<const CActivityValueList, CRefCountAccessor>& other);  // 80
			CSmartPtr<const CActivityValueList, CRefCountAccessor>::~CSmartPtr(); // 80
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
					CPoseRecipe* pObj);  // 82
			CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 83
			CSmartPtr<CAnimTagManager, CRefCountAccessor>::Get(); // 413
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimTagManager>(CAnimTagManager* pObj); // 386
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CAnimTagManager>(const CAnimTagManager* pObj); // 390
			CSmartPtr<const CAnimTagManager, CRefCountAccessor>::operator=<CAnimTagManager>(
							CAnimTagManager* pObj);  // 413
			CSmartPtr<const CAnimTagManager, CRefCountAccessor>::operator=<CAnimTagManager>(
							const CSmartPtr<CAnimTagManager, CRefCountAccessor>& other);  // 354
			CSmartPtr<const CAnimTagManager, CRefCountAccessor>::CSmartPtr<CAnimTagManager>(
							const CSmartPtr<CAnimTagManager, CRefCountAccessor>& other);  // 263
			CAnimationGraph::GetTagManagerInternal(); // 86
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimTagManagerInstance>(CAnimTagManagerInstance* pObj); // 366
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimTagManagerInstance>(CAnimTagManagerInstance* pObj); // 370
			CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::operator=(
					CAnimTagManagerInstance* pObj);  // 86
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CAnimTagManager>(const CAnimTagManager* pObj); // 344
			CSmartPtr<const CAnimTagManager, CRefCountAccessor>::~CSmartPtr(); // 86
			CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::Get(); // 413
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimGraphUpdateContextBuilder>(CAnimGraphUpdateContextBuilder* pObj); // 386
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 390
			CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator=<CAnimGraphUpdateContextBuilder>(
									CAnimGraphUpdateContextBuilder* pObj);  // 413
			CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator=<CAnimGraphUpdateContextBuilder>(
									const CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>& other);  // 354
			CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::CSmartPtr<CAnimGraphUpdateContextBuilder>(
									const CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>& other);  // 91
			CSmartPtr<CAnimMovementManager, CRefCountAccessor>::Get(); // 269
			CAnimationGraph::GetMovementManagerInternal(); // 91
			CAnimMovementManager::GetMotorListInternal(); // 91
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimMovementManagerInstance>(CAnimMovementManagerInstance* pObj); // 366
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimMovementManagerInstance>(CAnimMovementManagerInstance* pObj); // 370
			CSmartPtr<CAnimMovementManagerInstance, CRefCountAccessor>::operator=(
					CAnimMovementManagerInstance* pObj);  // 89
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 344
			CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::~CSmartPtr(); // 91
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 94
			CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 64
			CAnimGraphInstanceContext::GetModel(); // 94
			CAnimGraphInstanceContext::GetSkeleton(); // 94
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
			CAnimGraphModelBinding::GetStaticPoseCachePtr(); // 94
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 94
			CSmartPtr<const CAnimGraphModelBinding, CRefCountAccessor>::operator->(); // 94
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
					CPoseUpdateResources* pObj);  // 94
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CStaticPoseCache>(CStaticPoseCache* pObj); // 344
			CSmartPtr<CStaticPoseCache, CRefCountAccessor>::~CSmartPtr(); // 94
			CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 71
			{
			}
			CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 73
			CAnimationGraph::GetRootNodeID(); // 97
			{
				int actIndex; // 101
				Count(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCount this); // 180
				CActivityValueList::Count(); // 101
				{
					CActivityValuesConstPtr pActValues; // 103
					Activity act; // 105
					CSmartPtr<const CActivityValueList, CRefCountAccessor>::operator->(); // 103
					CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCount this,
							int i);  // 249
					CSmartPtr<CActivityValues, CRefCountAccessor>::Get(); // 413
					ThreadInterlockedIncrement(volatile int32* p); // 158
					Increment(int* p); // 290
					CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
					AddRef<CActivityValues>(CActivityValues* pObj); // 386
					CSmartPtr<const CActivityValues, CRefCountAccessor>::operator=<CActivityValues>(
									CActivityValues* pObj);  // 413
					CSmartPtr<const CActivityValues, CRefCountAccessor>::operator=<CActivityValues>(
									const CSmartPtr<CActivityValues, CRefCountAccessor>& other);  // 354
					CSmartPtr<const CActivityValues, CRefCountAccessor>::CSmartPtr<CActivityValues>(
									const CSmartPtr<CActivityValues, CRefCountAccessor>& other);  // 249
					CActivityValueList::GetActivityValuesInternal(
									int index);  // 103
					CSmartPtr<const CActivityValues, CRefCountAccessor>::operator->(); // 105
					CActivityValues::GetActivityName(); // 105
					CUtlString::Get(); // 99
					CUtlString::String(); // 105
					CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >, int>::operator[](
							int i);  // 720
					ThreadInterlockedIncrement(volatile int32* p); // 158
					Increment(int* p); // 290
					CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
					AddRef<const CActivityValues>(const CActivityValues* pObj); // 366
					ThreadInterlockedDecrement(volatile int32* p); // 159
					Decrement(int* p); // 295
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
					Release<const CActivityValues>(const CActivityValues* pObj); // 370
					CSmartPtr<const CActivityValues, CRefCountAccessor>::operator=(
							const CActivityValues* pObj);  // 406
					CSmartPtr<const CActivityValues, CRefCountAccessor>::operator=(
							const CSmartPtr<const CActivityValues, CRefCountAccessor>& other);  // 328
					CSmartPtr<const CActivityValues, CRefCountAccessor>::CSmartPtr(
							const CSmartPtr<const CActivityValues, CRefCountAccessor>& other);  // 64
					CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >::CUtlKeyValuePair<int, CSmartPtr<const CActivityValues> >(
												const int& k,
												const CSmartPtr<const CActivityValues, CRefCountAccessor>& v);  // 1514
					Construct<CUtlKeyValuePair<int, CSmartPtr<const CActivityValues> >, int&, const CSmartPtr<const CActivityValues, CRefCountAccessor>&>(CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >* pMemory); // 720
					DoInsert<int>(const CUtlHashtable<int, CSmartPtr<const CActivityValues, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqualFuncto this,
							int k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
					DoInsert<int>(const CUtlHashtable<int, CSmartPtr<const CActivityValues, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqualFuncto this,
							int k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
					Mix32HashFunctor::operator(
							uint32 n);  // 249
					Insert(const CUtlHashtable<int, CSmartPtr<const CActivityValues, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqualFuncto this,
						KeyArg_t k,
						ValueArg_t v,
						bool* pDidInsert);  // 106
					ThreadInterlockedDecrement(volatile int32* p); // 159
					Decrement(int* p); // 295
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
					Release<const CActivityValues>(const CActivityValues* pObj); // 344
					CSmartPtr<const CActivityValues, CRefCountAccessor>::~CSmartPtr(); // 107
				}
				CSmartPtr<const CActivityValueList, CRefCountAccessor>::operator->(); // 101
			}
			AnimNodeID::operator=(
					const AnimNodeID& rhs);  // 97
			CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 110
		}
		CThreadFastMutex::CThreadFastMutex(
				const char* pLockName);  // 30
		CParallelUpdateCheck::CParallelUpdateCheck(); // 62
	}
} /* size: 0 */

// <00E6DD4B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:60
// variables: 6
void CAnimationGraphInstance::CAnimationGraphInstance(const AnimGraphInstanceCreationSettings_t& creationSettings, const CAnimGraphModelBindingConstPtr& pModelBinding)
{
	const char   __FUNCTION__; // 10597
	{
		const CAnimationGraph* pSourceGraph; // 64
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 65
		}
		{
			int actIndex; // 101
			{
				CActivityValuesConstPtr pActValues; // 103
				Activity act; // 105
			}
		}
	}
} /* size: 0, variables: 1 */

// <00E6B96E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:114
// variables: 7
// function calls: 179
void CAnimationGraphInstance::~CAnimationGraphInstance()
{
	{
		entry_t* table; // 896
		Base(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAcce this); // 896
		{
			int i; // 897
			Count(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCou this); // 897
			IsValid(const CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> this); // 899
			CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >::MarkInvalid(); // 901
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimNodeInstanceFactory::CFactoryMaker>(CFactoryMaker* pObj); // 344
			CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>::~CSmartPtr(); // 51
			CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >::~CUtlKeyValuePair(); // 1526
			Destruct<CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> > >(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this); // 188
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> > >(void); // 508
	IsExternallyAllocated(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCou this); // 905
	Purge(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAcce this); // 903
	Purge(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAcce this); // 510
	~CUtlMemory(const CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAcce this); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHa this); // 14
	CAnimNodeInstanceFactory::~CAnimNodeInstanceFactory(); // 117
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphDebugReplay>(CAnimGraphDebugReplay* pObj); // 344
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::~CSmartPtr(); // 117
	CUtlVectorBase<IAnimGraphSequenceFinishedListener::RemoveAll(); // 1798
	CUtlMemory<IAnimGraphSequenceFinishedListener::IsExternallyAllocated(); // 905
	CUtlMemory<IAnimGraphSequenceFinishedListener::Purge(); // 903
	CUtlMemory<IAnimGraphSequenceFinishedListener::Purge(); // 1799
	CUtlVectorBase<IAnimGraphSequenceFinishedListener::Purge(); // 560
	ValidateAlignment<IAnimGraphSequenceFinishedListener*>(void); // 508
	CUtlMemory<IAnimGraphSequenceFinishedListener::Purge(); // 510
	CUtlMemory<IAnimGraphSequenceFinishedListener::~CUtlMemory(); // 562
	CUtlVectorBase<IAnimGraphSequenceFinishedListener::~CUtlVectorBase(); // 410
	CUtlVector<IAnimGraphSequenceFinishedListener::~CUtlVector(); // 117
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >, int>::Count(); // 897
			CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >::IsValid(); // 899
			CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >::MarkInvalid(); // 901
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CActivityValues>(const CActivityValues* pObj); // 344
			CSmartPtr<const CActivityValues, CRefCountAccessor>::~CSmartPtr(); // 51
			CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >::~CUtlKeyValuePair(); // 1526
			Destruct<CUtlKeyValuePair<int, CSmartPtr<const CActivityValues> > >(CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<int, CSmartPtr<const CActivityValues, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqualFuncto this); // 188
	ValidateAlignment<CUtlHashtableEntry<int, CSmartPtr<const CActivityValues> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<int, CSmartPtr<const CActivityValues, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqualFuncto this); // 117
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 117
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >, int>::Count(); // 897
			CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >::IsValid(); // 899
			CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >::MarkInvalid(); // 901
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 344
			CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::~CSmartPtr(); // 51
			CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >::~CUtlKeyValuePair(); // 1526
			Destruct<CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase> > >(CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqualFuncto this); // 188
	ValidateAlignment<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqualFuncto this); // 117
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CPoseRecipe>(CPoseRecipe* pObj); // 344
	CSmartPtr<CPoseRecipe, CRefCountAccessor>::~CSmartPtr(); // 117
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
	CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 117
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CFootMotionManager>(CFootMotionManager* pObj); // 344
	CSmartPtr<CFootMotionManager, CRefCountAccessor>::~CSmartPtr(); // 117
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimMovementManagerInstance>(CAnimMovementManagerInstance* pObj); // 344
	CSmartPtr<CAnimMovementManagerInstance, CRefCountAccessor>::~CSmartPtr(); // 117
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CPoseUpdateResources>(CPoseUpdateResources* pObj); // 344
	CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::~CSmartPtr(); // 117
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CActivityValueList>(const CActivityValueList* pObj); // 344
	CSmartPtr<const CActivityValueList, CRefCountAccessor>::~CSmartPtr(); // 117
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContextBuilder>(CAnimGraphUpdateContextBuilder* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::~CSmartPtr(); // 117
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimTagManagerInstance>(CAnimTagManagerInstance* pObj); // 344
	CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::~CSmartPtr(); // 117
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterListInstance>(CAnimParameterListInstance* pObj); // 344
	CSmartPtr<CAnimParameterListInstance, CRefCountAccessor>::~CSmartPtr(); // 117
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimationGraphPhysicsTraceManager>(CAnimationGraphPhysicsTraceManager* pObj); // 344
	CSmartPtr<CAnimationGraphPhysicsTraceManager, CRefCountAccessor>::~CSmartPtr(); // 117
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimGraphFixedData>(const CAnimGraphFixedData* pObj); // 344
	CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::~CSmartPtr(); // 117
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphInstanceContext>(CAnimGraphInstanceContext* pObj); // 344
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::~CSmartPtr(); // 117
} /* size: 1015, inline expansions: 131 (2909 bytes) */

// <00E6B907> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:114
void CAnimationGraphInstance::~CAnimationGraphInstance()
{
} /* size: 36 */

// <00E8A5F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:120
// function call: 1
void CAnimationGraphInstance::GetNodeCount()
{
	CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 122
} /* size: 13, inline expansions: 1 (0 bytes) */

// <00E6B8D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:120
void CAnimationGraphInstance::GetNodeCount()
{
} /* size: 0 */

// <00E6B78C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:126
// variable: 1
// function calls: 3
void CAnimationGraphInstance::GetNode(const AnimNodeLocation_t& nodeLocation)
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 728
	{
		int nodeIndex; // 732
		CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 732
	}
	CAnimationGraphInstance::GetNodeInternal(
			const AnimNodeLocation_t& nodeLocation);  // 128
} /* size: 51, inline expansions: 2 (27 bytes) */

// <00E6B768> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:132
void CAnimationGraphInstance::GetNode(const AnimNodeLocation_t& nodeLocation)
{
} /* size: 0 */

// <00E6B464> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:139
// function calls: 15
void CAnimationGraphInstance::GetSkeleton()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 141
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
			const CSmartPtr<const CAnimSkeleton, CRefCountAccessor>& other);  // 141
} /* size: 97, inline expansions: 15 (337 bytes) */

// <00E6B313> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:145
// function calls: 6
void CAnimationGraphInstance::GetModel()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 147
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 64
	CAnimGraphInstanceContext::GetModel(); // 147
} /* size: 19, inline expansions: 6 (28 bytes) */

// <00E6AE46> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:151
// variables: 2
// function calls: 22
void CAnimationGraphInstance::GetRootNode()
{
	AnimNodeLocation_t nodeLocation; // 153
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 154
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
	AnimNodeLocation_t::AnimNodeLocation_t(); // 153
	{
		int nodeIndex; // 732
		CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 732
	}
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 728
	CAnimationGraphInstance::GetNodeInternal(
			const AnimNodeLocation_t& nodeLocation);  // 156
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
	AnimNodeLocation_t::~AnimNodeLocation_t(); // 157
} /* size: 169, variables: 1, inline expansions: 21 (349 bytes) */

// <00E8A663> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:160
// function calls: 3
void CAnimationGraphInstance::GetLocalToWorldTransform()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 162
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 48
	CAnimGraphInstanceContext::GetInstanceData(); // 162
} /* size: 17, inline expansions: 3 (8 bytes) */

// <00E6AE2D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:160
void CAnimationGraphInstance::GetLocalToWorldTransform()
{
} /* size: 0 */

// <00E8A739> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:166
// function calls: 3
void CAnimationGraphInstance::GetPreviousLocalToWorldTransform()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 168
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 48
	CAnimGraphInstanceContext::GetInstanceData(); // 168
} /* size: 17, inline expansions: 3 (8 bytes) */

// <00E6AE14> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:166
void CAnimationGraphInstance::GetPreviousLocalToWorldTransform()
{
} /* size: 0 */

// <00E8ADC6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:172
// function calls: 3
void CAnimationGraphInstance::Update(const CTransform& xLocalToWorld, float flTimeStep, bool bTimeIsAbsolute)
{
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 176
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 180
	CAnimationGraphInstance::Update(
		const CTransform& xLocalToWorld,
		float flTimeStep,
		bool bTimeIsAbsolute);  // 172
} /* size: 95, inline expansions: 3 (53 bytes) */

// <00E6ADD7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:172
void CAnimationGraphInstance::Update(const CTransform& xLocalToWorld, float flTimeStep, bool bTimeIsAbsolute)
{
} /* size: 0 */

// <00E6A092> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:185
// variables: 4
// function calls: 47
void CAnimationGraphInstance::Update(const CTransform& xLocalToWorld, float flPrevAnimTime, float flNextAnimTime)
{
	CScopedParallelCheck check; // 187
	bool isPlayingReplay; // 204
	bool bReRunFrame; // 205
	{
		int currentFrame; // 230
		CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator->(); // 230
		CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator->(); // 231
		CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator->(); // 232
		CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator->(); // 234
		CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator->(); // 235
		CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator->(); // 236
		CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator->(); // 237
	}
	ThreadInterlockedIncrement(volatile int32* p); // 34
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 44
	_DebuggerBreakInlineExpressionWrapper(void); // 35
	CParallelUpdateCheck::BeginUpdate(); // 47
	CScopedParallelCheck::CScopedParallelCheck(
				CParallelUpdateCheck& check);  // 187
	ThreadInterlockedDecrement(volatile int32* p); // 49
	_DebuggerBreakInlineExpressionWrapper(void); // 49
	CParallelUpdateCheck::EndUpdate(); // 52
	CScopedParallelCheck::~CScopedParallelCheck(); // 275
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 202
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator!=(
			const CAnimGraphDebugReplay* pOther);  // 204
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator!=(
			const CAnimGraphDebugReplay* pOther);  // 205
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator!=(
			const CAnimGraphDebugReplay* pOther);  // 221
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator->(); // 223
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator->(); // 224
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 241
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 48
	CAnimGraphInstanceContext::GetInstanceData(); // 241
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 244
	CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 248
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator*(); // 248
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator->(); // 211
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 252
	CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 252
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 256
	CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::Get(); // 256
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator!=(
			const CAnimGraphDebugReplay* pOther);  // 271
	ThreadInterlockedDecrement(volatile int32* p); // 49
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 50
	_DebuggerBreakInlineExpressionWrapper(void); // 49
	CParallelUpdateCheck::EndUpdate(); // 52
	CScopedParallelCheck::~CScopedParallelCheck(); // 275
	CSmartPtr<CAnimParameterListInstance, CRefCountAccessor>::operator->(); // 267
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 271
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator->(); // 273
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 273
} /* size: 0, variables: 3, inline expansions: 40 (835 bytes) */

// <00E6A01A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:278
// function call: 1
void CAnimationGraphInstance::GetLastTimeStep()
{
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 280
} /* size: 13, inline expansions: 1 (0 bytes) */

// <00E8A80F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:284
// function call: 1
void CAnimationGraphInstance::GetAnimTime()
{
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 286
} /* size: 13, inline expansions: 1 (0 bytes) */

// <00E6A001> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:284
void CAnimationGraphInstance::GetAnimTime()
{
} /* size: 0 */

// <00E69E9A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:290
// function calls: 4
void CAnimationGraphInstance::GetRootMotion()
{
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 292
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 292
} /* size: 0, inline expansions: 4 (140 bytes) */

// <00E8AEFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:296
// variable: 1
// function calls: 7
void CAnimationGraphInstance::DispatchTagEvents()
{
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 300
	CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::Get(); // 300
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 303
	{
		int i; // 305
		CUtlVectorBase<IAnimGraphSequenceFinishedListener::Count(); // 305
		CUtlMemory<IAnimGraphSequenceFinishedListener::operator[](
				int i);  // 588
		CUtlVectorBase<IAnimGraphSequenceFinishedListener::operator[](
				int i);  // 307
	}
	CAnimationGraphInstance::DispatchTagEvents(); // 296
} /* size: 146, inline expansions: 4 (84 bytes) */

// <00E69E74> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:296
// variable: 1
void CAnimationGraphInstance::DispatchTagEvents()
{
	{
		int i; // 305
	}
} /* size: 0 */

// <00E69DFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:320
// function call: 1
void CAnimationGraphInstance::GetPendingAnimEvents()
{
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 322
} /* size: 13, inline expansions: 1 (0 bytes) */

// <00E69D84> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:326
// function call: 1
void CAnimationGraphInstance::ClearPendingAnimEvents()
{
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 328
} /* size: 13, inline expansions: 1 (0 bytes) */

// <00E69921> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:332
// variables: 2
// function calls: 13
void CAnimationGraphInstance::EvaluateRootMotion()
{
	CRootMotion rootMotion; // 334
	const CAnimUpdateNodeBase* pNode; // 336
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 11
	CRootMotion::CRootMotion(
			const CRootMotion  &);  // 334
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 336
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator*(); // 339
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			CMotionTransform &);  // 11
	CRootMotion::operator=(
			CRootMotion &);  // 339
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 342
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator*(); // 342
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 344
} /* size: 0, variables: 2, inline expansions: 13 (473 bytes) */

// <00E67BAD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:349
// variables: 9
// function calls: 130
void CAnimationGraphInstance::EvaluatePose(const CTransform& xLocalToWorld)
{
	Scope pscope; // 351
	CScopedParallelCheck check; // 353
	const char   __FUNCTION__; // 10320
	{
		const bool  bIsReplay; // 366
		CPoseUpdateManager poseUpdateMgr; // 367
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 364
		CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 48
		CAnimGraphInstanceContext::GetInstanceData(); // 364
		CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator bool(); // 366
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
				CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 368
		CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator!=(
				const CAnimGraphDebugReplay* pOther);  // 371
		CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 368
		CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator->(); // 373
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimationGraphPhysicsTraceManager>(CAnimationGraphPhysicsTraceManager* pObj); // 344
		CSmartPtr<CAnimationGraphPhysicsTraceManager, CRefCountAccessor>::~CSmartPtr(); // 86
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimGraphInstanceContext>(CAnimGraphInstanceContext* pObj); // 344
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::~CSmartPtr(); // 86
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CPoseUpdateResources>(CPoseUpdateResources* pObj); // 344
		CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::~CSmartPtr(); // 86
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CPoseRecipe>(CPoseRecipe* pObj); // 344
		CSmartPtr<CPoseRecipe, CRefCountAccessor>::~CSmartPtr(); // 86
		CPoseUpdateContext::~CPoseUpdateContext(); // 172
		CPoseUpdateManager::~CPoseUpdateManager(); // 375
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 381
	}
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 64
	CAnimGraphInstanceContext::GetModel(); // 351
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 351
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 351
	CModel::GetModelName(); // 351
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 351
	ThreadInterlockedIncrement(volatile int32* p); // 34
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 44
	_DebuggerBreakInlineExpressionWrapper(void); // 35
	CParallelUpdateCheck::BeginUpdate(); // 47
	CScopedParallelCheck::CScopedParallelCheck(
				CParallelUpdateCheck& check);  // 353
	CSmartPtr<CPoseRecipe, CRefCountAccessor>::operator->(); // 357
	CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::operator->(); // 359
	CUtlStack<CAnimPose::Count(); // 585
	CUtlMemory<CAnimPose::operator[](
			int i);  // 155
	CUtlStack<CAnimPose::Element(
		int i);  // 190
	CUtlStack<CAnimPose::Top(); // 593
	CUtlStack<CAnimPose::Pop(); // 594
	CEnduringClassMemoryPool<CAnimPose>::Alloc(); // 359
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
			CAnimPose* pObj);  // 359
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 377
	CSmartPtr<CAnimationGraphVisualizationManager, CRefCountAccessor>::Get(); // 72
	CAnimGraphInstanceContext::GetVisualizationManager(); // 377
	CAnimationGraphVisualizationManager::ClearVisualizerPrimitivesData(); // 377
	CSmartPtr<CAnimPose, CRefCountAccessor>::operator!=(
			const CAnimPose* pOther);  // 379
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 381
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator->(); // 80
	CAnimGraphInstanceContext::GetAnimTime(); // 381
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator!=(
			const CAnimGraphDebugReplay* pOther);  // 384
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator->(); // 386
	CSmartPtr<CAnimPose, CRefCountAccessor>::Get(); // 413
	ThreadInterlockedIncrement(volatile int32* p); // 683
	CRefCountedMemPoolObject<CAnimPose>::AddRef(); // 21
	AddRef<CAnimPose>(CAnimPose* pObj); // 386
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
	Release<const CAnimPose>(const CAnimPose* pObj); // 390
	CSmartPtr<const CAnimPose, CRefCountAccessor>::operator=<CAnimPose>(
				CAnimPose* pObj);  // 413
	CSmartPtr<const CAnimPose, CRefCountAccessor>::operator=<CAnimPose>(
				const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 354
	CSmartPtr<const CAnimPose, CRefCountAccessor>::CSmartPtr<CAnimPose>(
				const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 393
	ThreadInterlockedDecrement(volatile int32* p); // 49
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 50
	_DebuggerBreakInlineExpressionWrapper(void); // 49
	CParallelUpdateCheck::EndUpdate(); // 52
	CScopedParallelCheck::~CScopedParallelCheck(); // 394
	Scope::~Scope(); // 394
} /* size: 0, variables: 3, inline expansions: 60 (2475 bytes) */

// <00E66864> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:397
// variables: 5
// function calls: 86
void CAnimationGraphInstance::EvaluatePartialPose(const PoseHandle hTerminalPoseHandle)
{
	CScopedParallelCheck check; // 399
	CAnimPosePtr resultPose; // 401
	{
		CPoseUpdateManager poseUpdateMgr; // 410
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
				CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 411
		CSmartPtr<CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 411
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimationGraphPhysicsTraceManager>(CAnimationGraphPhysicsTraceManager* pObj); // 344
		CSmartPtr<CAnimationGraphPhysicsTraceManager, CRefCountAccessor>::~CSmartPtr(); // 86
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimGraphInstanceContext>(CAnimGraphInstanceContext* pObj); // 344
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::~CSmartPtr(); // 86
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CPoseUpdateResources>(CPoseUpdateResources* pObj); // 344
		CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::~CSmartPtr(); // 86
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CPoseRecipe>(CPoseRecipe* pObj); // 344
		CSmartPtr<CPoseRecipe, CRefCountAccessor>::~CSmartPtr(); // 86
		CPoseUpdateContext::~CPoseUpdateContext(); // 172
		CPoseUpdateManager::~CPoseUpdateManager(); // 412
	}
	ThreadInterlockedIncrement(volatile int32* p); // 34
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 44
	_DebuggerBreakInlineExpressionWrapper(void); // 35
	CParallelUpdateCheck::BeginUpdate(); // 47
	CScopedParallelCheck::CScopedParallelCheck(
				CParallelUpdateCheck& check);  // 399
	CSmartPtr<CAnimPose, CRefCountAccessor>::CSmartPtr(); // 401
	CSmartPtr<CPoseRecipe, CRefCountAccessor>::operator->(); // 403
	CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::operator->(); // 405
	CUtlStack<CAnimPose::Count(); // 585
	CUtlMemory<CAnimPose::operator[](
			int i);  // 155
	CUtlStack<CAnimPose::Element(
		int i);  // 190
	CUtlStack<CAnimPose::Top(); // 593
	CUtlStack<CAnimPose::Pop(); // 594
	CEnduringClassMemoryPool<CAnimPose>::Alloc(); // 405
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
			CAnimPose* pObj);  // 405
	ThreadInterlockedDecrement(volatile int32* p); // 49
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 50
	_DebuggerBreakInlineExpressionWrapper(void); // 49
	CParallelUpdateCheck::EndUpdate(); // 52
	CScopedParallelCheck::~CScopedParallelCheck(); // 415
} /* size: 0, variables: 2, inline expansions: 31 (1212 bytes) */

// <00E65EE6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:418
// variables: 2
// function calls: 40
void CAnimationGraphInstance::GetPoseAtTime(float flPoseTime, CTransform& xLocalToWorldOut)
{
	CScopedParallelCheck check; // 420
	ThreadInterlockedIncrement(volatile int32* p); // 34
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 44
	_DebuggerBreakInlineExpressionWrapper(void); // 35
	CParallelUpdateCheck::BeginUpdate(); // 47
	CScopedParallelCheck::CScopedParallelCheck(
				CParallelUpdateCheck& check);  // 420
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 162
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 48
	CAnimGraphInstanceContext::GetInstanceData(); // 162
	CAnimationGraphInstance::GetLocalToWorldTransform(); // 422
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 422
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
			const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 423
	ThreadInterlockedDecrement(volatile int32* p); // 49
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 50
	_DebuggerBreakInlineExpressionWrapper(void); // 49
	CParallelUpdateCheck::EndUpdate(); // 52
	CScopedParallelCheck::~CScopedParallelCheck(); // 424
} /* size: 0, variables: 1, inline expansions: 31 (1394 bytes) */

// <00E65DFF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:427
// function calls: 2
void CAnimationGraphInstance::ResetToTime(float flTime)
{
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 429
	CSmartPtr<CPoseRecipe, CRefCountAccessor>::operator->(); // 430
} /* size: 42, inline expansions: 2 (0 bytes) */

// <00E8A8C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:434
// function call: 1
void CAnimationGraphInstance::GetActiveSequences()
{
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 436
} /* size: 13, inline expansions: 1 (0 bytes) */

// <00E65DE6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:434
void CAnimationGraphInstance::GetActiveSequences()
{
} /* size: 0 */

// <00E65D87> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:440
// function call: 1
void CAnimationGraphInstance::GetParameterList()
{
	CSmartPtr<CAnimParameterListInstance, CRefCountAccessor>::Get(); // 442
} /* size: 20, inline expansions: 1 (4 bytes) */

// <00E65D6F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:446
void CAnimationGraphInstance::GetParameterList()
{
} /* size: 0 */

// <00E65D10> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:452
// function call: 1
void CAnimationGraphInstance::GetAnimTagManager()
{
	CSmartPtr<CAnimTagManagerInstance, CRefCountAccessor>::Get(); // 454
} /* size: 9, inline expansions: 1 (0 bytes) */

// <00E65CF8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:458
void CAnimationGraphInstance::GetAnimTagManager()
{
} /* size: 0 */

// <00E65C99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:464
// function call: 1
void CAnimationGraphInstance::GetMovementManager()
{
	CSmartPtr<CAnimMovementManagerInstance, CRefCountAccessor>::Get(); // 466
} /* size: 20, inline expansions: 1 (4 bytes) */

// <00E65C81> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:470
void CAnimationGraphInstance::GetMovementManager()
{
} /* size: 0 */

// <00E65C22> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:475
// function call: 1
void CAnimationGraphInstance::GetPhysicsTraceManager()
{
	CSmartPtr<CAnimationGraphPhysicsTraceManager, CRefCountAccessor>::Get(); // 477
} /* size: 20, inline expansions: 1 (4 bytes) */

// <00E65B5E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:480
// function calls: 3
void CAnimationGraphInstance::GetVisualizationManager()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 482
	CSmartPtr<CAnimationGraphVisualizationManager, CRefCountAccessor>::Get(); // 72
	CAnimGraphInstanceContext::GetVisualizationManager(); // 482
} /* size: 24, inline expansions: 3 (16 bytes) */

// <00E65B30> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:485
void CAnimationGraphInstance::GetVRProxy()
{
} /* size: 9 */

// <00E65A4F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:497
// function calls: 2
void CAnimationGraphInstance::SetVRProxy(IAnimVRProxy* pProxy)
{
	CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 500
	CSmartPtr<CPoseUpdateResources, CRefCountAccessor>::operator->(); // 501
} /* size: 50, inline expansions: 2 (4 bytes) */

// <00E65978> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:505
// function calls: 3
void CAnimationGraphInstance::GetActivity(int layer)
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 507
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 509
} /* size: 38, inline expansions: 3 (6 bytes) */

// <00E63E60> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:518
// variables: 15
// function calls: 115
void CAnimationGraphInstance::SetActivity(Activity act, int layer)
{
	{
		int oldCount; // 526
		{
			int i; // 529
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 529
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 531
		}
		CUtlMemory<int, int>::NumAllocated(); // 782
		CUtlMemory<int, int>::IsGrowable(); // 823
		CUtlMemory<int, int>::IsExternallyAllocated(); // 859
		CUtlMemory<int, int>::IsExternallyAllocated(); // 861
		CUtlMemory<int, int>::Grow(
			int num);  // 806
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddMultipleToTail(
					int num);  // 527
	}
	{
		UtlHashHandle_t handle; // 538
		{
			CActivityValuesConstPtr pActParamValues; // 541
			{
				int paramIndex; // 543
				{
					CParameterValueConstPtr paramValue; // 545
					AnimParamID paramID; // 547
					{
						IAnimParameterInstance* paramInstance; // 550
						CSmartPtr<CAnimParameterListInstance, CRefCountAccessor>::operator->(); // 550
						AnimParamID::AnimParamID(
								const AnimParamID& rhs);  // 550
					}
					CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCount this,
							int i);  // 165
					CSmartPtr<CParameterValue, CRefCountAccessor>::Get(); // 413
					ThreadInterlockedIncrement(volatile int32* p); // 158
					Increment(int* p); // 290
					CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
					AddRef<CParameterValue>(CParameterValue* pObj); // 386
					CSmartPtr<const CParameterValue, CRefCountAccessor>::operator=<CParameterValue>(
									CParameterValue* pObj);  // 413
					CSmartPtr<const CParameterValue, CRefCountAccessor>::operator=<CParameterValue>(
									const CSmartPtr<CParameterValue, CRefCountAccessor>& other);  // 354
					CSmartPtr<const CParameterValue, CRefCountAccessor>::CSmartPtr<CParameterValue>(
									const CSmartPtr<CParameterValue, CRefCountAccessor>& other);  // 165
					CActivityValues::GetParamValueInternal(
								int index);  // 545
					AnimParamID::AnimParamID(
							const AnimParamID& rhs);  // 80
					CParameterValue::GetParamID(); // 547
					ThreadInterlockedDecrement(volatile int32* p); // 159
					Decrement(int* p); // 295
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
					Release<const CParameterValue>(const CParameterValue* pObj); // 344
					CSmartPtr<const CParameterValue, CRefCountAccessor>::~CSmartPtr(); // 556
				}
				Count(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCount this); // 108
				CActivityValues::Count(); // 543
			}
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<const CActivityValues>(const CActivityValues* pObj); // 366
			CSmartPtr<const CActivityValues, CRefCountAccessor>::operator=(
					const CActivityValues* pObj);  // 406
			CSmartPtr<const CActivityValues, CRefCountAccessor>::operator=(
					const CSmartPtr<const CActivityValues, CRefCountAccessor>& other);  // 328
			CSmartPtr<const CActivityValues, CRefCountAccessor>::CSmartPtr(
					const CSmartPtr<const CActivityValues, CRefCountAccessor>& other);  // 541
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CActivityValues>(const CActivityValues* pObj); // 344
			CSmartPtr<const CActivityValues, CRefCountAccessor>::~CSmartPtr(); // 557
		}
		Mix32HashFunctor::operator(
				uint32 n);  // 218
		Find(const CUtlHashtable<int, CSmartPtr<const CActivityValues, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqual this,
			KeyArg_t k);  // 538
		CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >, int>::Count(); // 204
		CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >, int>::operator[](
				int i);  // 204
		CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >::IsValid(); // 204
		IsValidHandle(const CUtlHashtable<int, CSmartPtr<const CActivityValues, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqual this,
				handle_t idx);  // 539
	}
	{
		int layerIndex; // 566
		{
			UtlHashHandle_t handle; // 570
			{
				CActivityValuesConstPtr pActParamValues; // 573
				{
					int paramIndex; // 575
					{
						CParameterValueConstPtr paramValue; // 577
						AnimParamID paramID; // 579
						{
							IAnimParameterInstance* paramInstance; // 582
							CSmartPtr<CAnimParameterListInstance, CRefCountAccessor>::operator->(); // 582
							AnimParamID::AnimParamID(
									const AnimParamID& rhs);  // 582
							CParameterValue::GetValue(); // 585
						}
						CUtlMemory<CSmartPtr<CParameterValue, CRefCountAccessor>, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCount this,
								int i);  // 165
						CSmartPtr<CParameterValue, CRefCountAccessor>::Get(); // 413
						ThreadInterlockedIncrement(volatile int32* p); // 158
						Increment(int* p); // 290
						CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
						CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
						AddRef<CParameterValue>(CParameterValue* pObj); // 386
						CSmartPtr<const CParameterValue, CRefCountAccessor>::operator=<CParameterValue>(
										CParameterValue* pObj);  // 413
						CSmartPtr<const CParameterValue, CRefCountAccessor>::operator=<CParameterValue>(
										const CSmartPtr<CParameterValue, CRefCountAccessor>& other);  // 354
						CSmartPtr<const CParameterValue, CRefCountAccessor>::CSmartPtr<CParameterValue>(
										const CSmartPtr<CParameterValue, CRefCountAccessor>& other);  // 165
						CActivityValues::GetParamValueInternal(
									int index);  // 577
						AnimParamID::AnimParamID(
								const AnimParamID& rhs);  // 80
						CParameterValue::GetParamID(); // 579
						ThreadInterlockedDecrement(volatile int32* p); // 159
						Decrement(int* p); // 295
						CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
						CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
						CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
						Release<const CParameterValue>(const CParameterValue* pObj); // 344
						CSmartPtr<const CParameterValue, CRefCountAccessor>::~CSmartPtr(); // 588
					}
					Count(const CUtlVectorBase<CSmartPtr<CParameterValue, CRefCountAccessor>, CUtlMemory<CSmartPtr<CParameterValue, CRefCount this); // 108
					CActivityValues::Count(); // 575
				}
				ThreadInterlockedIncrement(volatile int32* p); // 158
				Increment(int* p); // 290
				CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
				AddRef<const CActivityValues>(const CActivityValues* pObj); // 366
				CSmartPtr<const CActivityValues, CRefCountAccessor>::operator=(
						const CActivityValues* pObj);  // 406
				CSmartPtr<const CActivityValues, CRefCountAccessor>::operator=(
						const CSmartPtr<const CActivityValues, CRefCountAccessor>& other);  // 328
				CSmartPtr<const CActivityValues, CRefCountAccessor>::CSmartPtr(
						const CSmartPtr<const CActivityValues, CRefCountAccessor>& other);  // 573
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<const CActivityValues>(const CActivityValues* pObj); // 344
				CSmartPtr<const CActivityValues, CRefCountAccessor>::~CSmartPtr(); // 589
			}
			Mix32HashFunctor::operator(
					uint32 n);  // 218
			Find(const CUtlHashtable<int, CSmartPtr<const CActivityValues, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqual this,
				KeyArg_t k);  // 570
			CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >, int>::Count(); // 204
			CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >, int>::operator[](
					int i);  // 204
			CUtlHashtableEntry<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >::IsValid(); // 204
			IsValidHandle(const CUtlHashtable<int, CSmartPtr<const CActivityValues, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqual this,
					handle_t idx);  // 571
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 566
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 568
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 521
	CUtlMemory<int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 536
	CUtlMemory<int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 561
} /* size: 0, inline expansions: 5 (120 bytes) */

// <00E62E6C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:596
// variable: 1
// function calls: 77
void CAnimationGraphInstance::RegisterSequenceListener(IAnimGraphSequenceFinishedListener* pListener)
{
	CUtlMemory<IAnimGraphSequenceFinishedListener::NumAllocated(); // 1196
	CUtlMemory<IAnimGraphSequenceFinishedListener::Base(); // 112
	CUtlVectorBase<IAnimGraphSequenceFinishedListener::Base(); // 368
	CUtlVectorBase<IAnimGraphSequenceFinishedListener::ResetDbgInfo(); // 824
	CUtlMemory<IAnimGraphSequenceFinishedListener::IsGrowable(); // 823
	CUtlMemory<IAnimGraphSequenceFinishedListener::IsExternallyAllocated(); // 859
	CUtlMemory<IAnimGraphSequenceFinishedListener::IsExternallyAllocated(); // 861
	CUtlMemory<IAnimGraphSequenceFinishedListener::Grow(
		int num);  // 806
	CUtlVectorBase<IAnimGraphSequenceFinishedListener::GrowMemory(
			int num);  // 1198
	CUtlMemory<IAnimGraphSequenceFinishedListener::operator[](
			int i);  // 602
	CUtlVectorBase<IAnimGraphSequenceFinishedListener::Element(
		int i);  // 1201
	CopyConstruct<IAnimGraphSequenceFinishedListener*>(IAnimGraphSequenceFinishedListener** pMemory,
								IAnimGraphSequenceFinishedListener* const& src);  // 1201
	CUtlVectorBase<IAnimGraphSequenceFinishedListener::AddToTail(
			IAnimGraphSequenceFinishedListener* const& src);  // 600
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimationGraphInstance>(CAnimationGraphInstance* pObj); // 366
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::operator=(
			CAnimationGraphInstance* pObj);  // 319
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::CSmartPtr(
			CAnimationGraphInstance* pObj);  // 602
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimationGraphInstance>(CAnimationGraphInstance* pObj); // 366
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::operator=(
			CAnimationGraphInstance* pObj);  // 406
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>& other);  // 74
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 15
	CReceipt::CReceipt(); // 30
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimationGraphInstance>(CAnimationGraphInstance* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimationGraphInstance>(CAnimationGraphInstance* pObj); // 370
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::operator=(
			CAnimationGraphInstance* pObj);  // 406
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>& other);  // 30
	CUnregisterReceipt<CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>, void (CAnimationGraphInstance::::CUnregisterReceipt(
				CSmartPtr<CAnimationGraphInstance, CRefCountAccessor> obj,
				void ()(CAnimationGraphInstance *, IAnimGraphSequenceFinishedListener *) CAnimationGraphInstance::* func,
				IAnimGraphSequenceFinishedListener* param);  // 74
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CReceipt>(CReceipt* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CReceipt>(CReceipt* pObj); // 370
	CSmartPtr<CReceipt, CRefCountAccessor>::operator=(
			CReceipt* pObj);  // 319
	CSmartPtr<CReceipt, CRefCountAccessor>::CSmartPtr(
			CReceipt* pObj);  // 74
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimationGraphInstance>(CAnimationGraphInstance* pObj); // 344
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::~CSmartPtr(); // 74
	MakeUnregisterReceipt<CSmartPtr<CAnimationGraphInstance>, void (CAnimationGraphInstance::*)(IAnimGraphSequenceFinishedListener*), IAnimGraphSequenceFinishedListener*>(CSmartPtr<CAnimationGraphInstance, CRefCountAccessor> obj,
																void ()(CAnimationGraphInstance *, IAnimGraphSequenceFinishedListener *) CAnimationGraphInstance::* func,
																IAnimGraphSequenceFinishedListener* param); // 602
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimationGraphInstance>(CAnimationGraphInstance* pObj); // 344
	CSmartPtr<CAnimationGraphInstance, CRefCountAccessor>::~CSmartPtr(); // 602
	CSmartPtr<CReceipt, CRefCountAccessor>::operator=(
			CReceipt* pObj);  // 319
	CSmartPtr<CReceipt, CRefCountAccessor>::CSmartPtr(
			CReceipt* pObj);  // 605
} /* size: 558, inline expansions: 76 (1850 bytes) */

// <00E61A01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:609
// variables: 7
// function calls: 90
void CAnimationGraphInstance::DebugGetActiveNodes(bool bVerbose)
{
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > nodeInfoList; // 611
	{
		const AnimGraphOperation_t& sequenceInformation; // 615
		const CUtlVector<AnimGraphOperation_t, CUtlMemory<AnimGraphOperation_t, int> >& __for_range; // 28265
		const_iterator __for_begin; // 24855
		const_iterator __for_end; // 24855
		{
			const ISequence* pSequence; // 617
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 81
			CFmtStrN<256>::String(); // 618
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1252
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 1514
			Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
					CUtlString& src);  // 618
			CUtlString::~CUtlString(); // 618
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 618
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 617
			CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 64
			CAnimGraphInstanceContext::GetModel(); // 617
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 617
			CUtlString::CUtlString(
					const char* pString);  // 618
		}
		CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 436
		CAnimationGraphInstance::GetActiveSequences(); // 615
		CUtlMemory<AnimGraphOperation_t, int>::Base(); // 113
		CUtlVectorBase<AnimGraphOperation_t, CUtlMemory<AnimGraphOperation_t, int> >::Base(); // 103
		CUtlVectorBase<AnimGraphOperation_t, CUtlMemory<AnimGraphOperation_t, int> >::begin(); // 615
		CUtlVectorBase<AnimGraphOperation_t, CUtlMemory<AnimGraphOperation_t, int> >::Count(); // 105
		CUtlVectorBase<AnimGraphOperation_t, CUtlMemory<AnimGraphOperation_t, int> >::end(); // 615
	}
	{
		AnimNodeLocation_t nodeLocation; // 625
		CUtlString::CUtlString(
				const char* pString);  // 623
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1252
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1514
		Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				CUtlString& src);  // 623
		CUtlString::~CUtlString(); // 623
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
		AnimNodeLocation_t::AnimNodeLocation_t(); // 625
		AnimNodeID::operator=(
				const AnimNodeID& rhs);  // 626
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
		AnimNodeLocation_t::~AnimNodeLocation_t(); // 629
	}
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 611
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 81
	CFmtStrN<256>::String(); // 613
	CUtlString::CUtlString(
			const char* pString);  // 613
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1252
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1514
	Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
			CUtlString& src);  // 613
	CUtlString::~CUtlString(); // 613
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 613
} /* size: 1105, variables: 1, inline expansions: 25 (583 bytes) */

// <00E61707> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:635
// function calls: 15
void CAnimationGraphInstance::GetDebugReplay()
{
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::Get(); // 413
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphDebugReplay>(CAnimGraphDebugReplay* pObj); // 386
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<IAnimGraphDebugReplay>(IAnimGraphDebugReplay* pObj); // 390
	CSmartPtr<IAnimGraphDebugReplay, CRefCountAccessor>::operator=<CAnimGraphDebugReplay>(
					CAnimGraphDebugReplay* pObj);  // 413
	CSmartPtr<IAnimGraphDebugReplay, CRefCountAccessor>::operator=<CAnimGraphDebugReplay>(
					const CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>& other);  // 354
	CSmartPtr<IAnimGraphDebugReplay, CRefCountAccessor>::CSmartPtr<CAnimGraphDebugReplay>(
					const CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>& other);  // 637
} /* size: 97, inline expansions: 15 (346 bytes) */

// <00E8C083> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:641
// variable: 1
// function calls: 25
void CAnimationGraphInstance::SetDebugReplay(const IAnimGraphDebugReplayPtr& pReplay, IReplayPreprocessingHelper* pReplayPreprocessingHelper)
{
	CSmartPtr<IAnimGraphDebugReplay, CRefCountAccessor>::Get(); // 643
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphDebugReplay>(CAnimGraphDebugReplay* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphDebugReplay>(CAnimGraphDebugReplay* pObj); // 370
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator=(
			CAnimGraphDebugReplay* pObj);  // 643
	{
		int nFrame; // 648
		CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 286
		CAnimationGraphInstance::GetAnimTime(); // 651
		CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 286
		CAnimationGraphInstance::GetAnimTime(); // 651
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 168
		CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 48
		CAnimGraphInstanceContext::GetInstanceData(); // 168
		CAnimationGraphInstance::GetPreviousLocalToWorldTransform(); // 651
		CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator->(); // 652
		CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator->(); // 648
		CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator->(); // 650
	}
	CAnimationGraphInstance::SetDebugReplay(
			const IAnimGraphDebugReplayPtr& pReplay,
			IReplayPreprocessingHelper* pReplayPreprocessingHelper);  // 641
} /* size: 431, inline expansions: 14 (430 bytes) */

// <00E616C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:641
// variable: 1
void CAnimationGraphInstance::SetDebugReplay(const IAnimGraphDebugReplayPtr& pReplay, IReplayPreprocessingHelper* pReplayPreprocessingHelper)
{
	{
		int nFrame; // 648
	}
} /* size: 0 */

// <00E8EC6E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:660
// function calls: 3
void CAnimationGraphInstance::GetInstanceDataInternal()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 662
	CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 48
	CAnimGraphInstanceContext::GetInstanceData(); // 662
} /* size: 13, inline expansions: 3 (8 bytes) */

// <00E616AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:660
void CAnimationGraphInstance::GetInstanceDataInternal()
{
} /* size: 0 */

// <00E8ED2D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:672
// function call: 1
void CAnimationGraphInstance::GetPoseRecipe()
{
	CSmartPtr<CPoseRecipe, CRefCountAccessor>::operator*(); // 674
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00E6167B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:672
void CAnimationGraphInstance::GetPoseRecipe()
{
} /* size: 0 */

// <00E611D8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:684
// variables: 8
// function calls: 16
void* CAnimationGraphInstance::DoQueryInterface(ClassID typeID)
{
	ClassID nodeTypeID; // 697
	{
		UtlHashHandle_t iter; // 687
		{
			void* typePtr; // 689
			CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >, int>::operator[](
					int i);  // 297
			operator[](const CUtlHashtable<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqualFuncto this,
					handle_t idx);  // 689
			CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::operator->(); // 689
		}
		CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >, int>::Count(); // 915
			CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqual this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqual this); // 687
		CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >, int>::Count(); // 915
			CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqual this,
				handle_t start);  // 687
	}
	{
		int i; // 702
		{
			CAnimNodeInstanceBase* pNodeInstance; // 706
			void* typePtr; // 709
		}
		CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 702
		CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 704
		CClassInfo::GetID(); // 704
	}
	ClassID::IsValid(); // 699
} /* size: 337, variables: 1, inline expansions: 1 (0 bytes) */

// <00E93AFA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:724
// variables: 3
// function calls: 2
void CAnimationGraphInstance::GetNodeInternal(const AnimNodeLocation_t& nodeLocation)
{
	CAnimNodeInstanceBase* pNodeInstance; // 726
	AnimNodeID nodeID; // 728
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 728
	{
		int nodeIndex; // 732
		CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 732
	}
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <00E6115A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:724
// variables: 3
void CAnimationGraphInstance::GetNodeInternal(const AnimNodeLocation_t& nodeLocation)
{
	CAnimNodeInstanceBase* pNodeInstance; // 726
	AnimNodeID nodeID; // 728
	{
		int nodeIndex; // 732
	}
} /* size: 0, variables: 2 */

// <00E5FDF4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:741
// variables: 4
// function calls: 88
void CAnimationGraphInstance::GetNodeInternal(int nodeIndex)
{
	CAnimNodeInstanceBasePtr pNodeInstance; // 743
	{
		UtlHashHandle_t handle; // 747
		{
			const CAnimNodeBase* pNode; // 754
			const CAnimUpdateNodeBase* pUpdateNode; // 755
			CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 754
			CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 755
			CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::Get(); // 413
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimGraphUpdateContextBuilder>(CAnimGraphUpdateContextBuilder* pObj); // 386
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 390
			CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator=<CAnimGraphUpdateContextBuilder>(
									CAnimGraphUpdateContextBuilder* pObj);  // 413
			CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator=<CAnimGraphUpdateContextBuilder>(
									const CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>& other);  // 354
			CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::CSmartPtr<CAnimGraphUpdateContextBuilder>(
									const CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>& other);  // 759
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
					const CAnimNodeBase* pObj);  // 759
			CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::operator=(
					CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>& other);  // 759
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 344
			CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 759
			CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::~CSmartPtr(); // 759
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 344
			CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::~CSmartPtr(); // 759
			CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >, int>::operator[](
					int i);  // 720
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 366
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 370
			CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::operator=(
					CAnimNodeInstanceBase* pObj);  // 406
			CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::operator=(
					const CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>& other);  // 328
			CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::CSmartPtr(
					const CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>& other);  // 64
			CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >::CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase> >(
										const int& k,
										const CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>& v);  // 1514
			Construct<CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase> >, int&, const CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>&>(CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >* pMemory); // 720
			DoInsert<int>(const CUtlHashtable<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqualFuncto this,
					int k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 714
			DoInsert<int>(const CUtlHashtable<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqualFuncto this,
					int k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 249
			Insert(const CUtlHashtable<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqualFuncto this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 760
		}
		Mix32HashFunctor::operator(
				uint32 n);  // 218
		Find(const CUtlHashtable<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqual this,
			KeyArg_t k);  // 747
		CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >, int>::Count(); // 204
		CUtlMemory<CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >, int>::operator[](
				int i);  // 204
		CUtlHashtableEntry<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >::IsValid(); // 204
		IsValidHandle(const CUtlHashtable<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>, DefaultHashFunctor<int>, DefaultEqual this,
				handle_t idx);  // 748
		CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::Get(); // 750
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 366
		CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::operator=(
				CAnimNodeInstanceBase* pObj);  // 750
	}
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::CSmartPtr(); // 743
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::Get(); // 765
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 344
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::~CSmartPtr(); // 766
} /* size: 666, variables: 1, inline expansions: 9 (117 bytes) */

// <00E5FAEC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:769
// variables: 2
// function calls: 13
void CAnimationGraphInstance::UnregisterSequenceListener(IAnimGraphSequenceFinishedListener* pListener)
{
	{
		int i; // 1531
		CUtlVectorBase<IAnimGraphSequenceFinishedListener::Count(); // 1531
		CUtlMemory<IAnimGraphSequenceFinishedListener::operator[](
				int i);  // 609
		CUtlVectorBase<IAnimGraphSequenceFinishedListener::Element(
			int i);  // 1533
	}
	CUtlVectorBase<IAnimGraphSequenceFinishedListener::Find(
		IAnimGraphSequenceFinishedListener* const& src);  // 1629
	CUtlMemory<IAnimGraphSequenceFinishedListener::operator[](
			int i);  // 602
	CUtlVectorBase<IAnimGraphSequenceFinishedListener::Element(
		int i);  // 1575
	Destruct<IAnimGraphSequenceFinishedListener*>(IAnimGraphSequenceFinishedListener** pMemory); // 1575
	{
		const bool  bNotLast; // 1578
		CUtlMemory<IAnimGraphSequenceFinishedListener::operator[](
				int i);  // 602
		CUtlVectorBase<IAnimGraphSequenceFinishedListener::Element(
			int i);  // 1584
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1584
	}
	CUtlVectorBase<IAnimGraphSequenceFinishedListener::FastRemove(
			int elem);  // 1632
	CUtlVectorBase<IAnimGraphSequenceFinishedListener::FindAndFastRemove(
				IAnimGraphSequenceFinishedListener* const& src);  // 771
} /* size: 103, inline expansions: 6 (182 bytes) */

// <00E5DFB3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:775
// variables: 20
// function calls: 108
void CAnimationGraphInstance::DebugGetActiveNodesRecurs(int depth, const AnimNodeLocation_t& nodeLocation, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& nodeInfoList)
{
	int nodeIndex; // 777
	CAnimNodeBaseConstPtr pNode; // 779
	const IAnimStateMachine* smNode; // 784
	const char   __FUNCTION__; // 10646
	{
		const CStateMachineUpdateNode* pSMUpdateNode; // 787
		CUtlString stateName; // 788
		int currentState; // 798
		{
			int i; // 790
		}
		{
			const AnimNodeLocation_t& childNodeLocation; // 814
			CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 814
			AnimNodeID::IsValid(); // 816
		}
		CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 787
		CUtlString::CUtlString(); // 788
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 796
		CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator*(); // 798
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 48
		CAnimGraphInstanceContext::GetInstanceData(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 798
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 802
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1201
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1520
		CopyConstruct<CUtlString>(CUtlString* pMemory,
						const CUtlString& src);  // 1201
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				const CUtlString& src);  // 809
		CUtlString::~CUtlString(); // 821
	}
	{
		const CDirectPlaybackAnimNode* directPlaybackNode; // 824
		{
			const CDirectPlaybackUpdateNode* pUpdateNode; // 827
			CUtlString stateName; // 828
			HSequence hSeq; // 830
			{
				CUtlString sequenceName; // 833
				{
					int i; // 835
				}
				CUtlString::CUtlString(); // 833
				CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 841
				CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
				CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 64
				CAnimGraphInstanceContext::GetModel(); // 841
				CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 841
				CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1201
				CUtlString::Get(); // 354
				CUtlString::CUtlString(
						const CUtlString& string);  // 1520
				CopyConstruct<CUtlString>(CUtlString* pMemory,
								const CUtlString& src);  // 1201
				CUtlMemory<CUtlString, int>::Base(); // 112
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
						const CUtlString& src);  // 843
				CUtlString::~CUtlString(); // 844
			}
			CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 827
			CUtlString::CUtlString(); // 828
			CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator*(); // 830
			HSequence::operator==(
					const HSequence& other);  // 831
			CUtlString::~CUtlString(); // 845
		}
		{
			int i; // 848
			{
				const AnimNodeLocation_t& childNodeLocation; // 850
				{
					int childNodeIndex; // 854
					const CAnimUpdateNodeBase* pUpdateNode; // 857
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 855
					}
					CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 854
					CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 857
					CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator*(); // 860
					CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator->(); // 860
				}
				CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 850
				AnimNodeID::IsValid(); // 852
			}
		}
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 366
		CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator=(
				const CAnimNodeBase* pObj);  // 406
		CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator=(
				const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& other);  // 328
		CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
				const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& other);  // 824
		MyTypeID(void); // 170
		reflection_cast<const CDirectPlaybackAnimNode, CSmartPtr<const CAnimNodeBase> >(CSmartPtr<const CAnimNodeBase, CRefCountAccessor> obj); // 824
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 344
		CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 824
	}
	CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 777
	CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 779
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 366
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator=(
			const CAnimNodeBase* pObj);  // 319
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
			const CAnimNodeBase* pObj);  // 779
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 366
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator=(
			const CAnimNodeBase* pObj);  // 406
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator=(
			const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& other);  // 328
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& other);  // 784
	MyTypeID(void); // 170
	reflection_cast<const IAnimStateMachine, CSmartPtr<const CAnimNodeBase> >(CSmartPtr<const CAnimNodeBase, CRefCountAccessor> obj); // 784
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 344
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 784
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 344
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 867
} /* size: 0, variables: 4, inline expansions: 33 (701 bytes) */

// <00E5DE31> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphinstance.cpp:869
// variable: 1
// function calls: 4
void CAnimationGraphInstance::CollectVisualizations(IAnimationGraphVisualizationManager* pVisualizationManager)
{
	{
		int nNode; // 871
		CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 122
		CAnimationGraphInstance::GetNodeCount(); // 871
		CSmartPtr<const CAnimGraphFixedData, CRefCountAccessor>::operator->(); // 873
		CSmartPtr<CAnimGraphUpdateContextBuilder, CRefCountAccessor>::operator*(); // 873
	}
} /* size: 147 */

