
//
// animgraph/animationgraph.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 67
//

// <00E7DA6F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:19
void IAnimationGraph::GetTypeInfo()
{
} /* size: 0 */

// <00E7D8DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:19
// function calls: 3
void* IAnimationGraph::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimationGraph>::CastTo(
		IAnimationGraph* derived,
		ClassID baseTypeInfo);  // 19
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00E7D747> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:19
// function calls: 3
const void* IAnimationGraph::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimationGraph>::CastTo(
		const IAnimationGraph* derived,
		ClassID baseTypeInfo);  // 19
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00E8E48D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:22
void MyTypeInfo(void)
{
} /* size: 0 */

// <00E7D3AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:22
void IAnimationGraphBuilder::GetTypeInfo()
{
} /* size: 0 */

// <00E7D219> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:22
// function calls: 3
void* IAnimationGraphBuilder::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimationGraphBuilder>::CastTo(
		IAnimationGraphBuilder* derived,
		ClassID baseTypeInfo);  // 22
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00E7D085> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:22
// function calls: 3
const void* IAnimationGraphBuilder::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimationGraphBuilder>::CastTo(
		const IAnimationGraphBuilder* derived,
		ClassID baseTypeInfo);  // 22
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00E89E13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:25
void CAnimationGraph::GetTypeInfo()
{
} /* size: 12 */

// <00E7CB57> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:25
// function calls: 3
void* CAnimationGraph::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAnimationGraph>::CastTo(
		CAnimationGraph* derived,
		ClassID baseTypeInfo);  // 25
} /* size: 0, inline expansions: 3 (295 bytes) */

// <00E7C9C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:25
// function calls: 3
const void* CAnimationGraph::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAnimationGraph>::CastTo(
		const CAnimationGraph* derived,
		ClassID baseTypeInfo);  // 25
} /* size: 0, inline expansions: 3 (295 bytes) */

// <00E79FF8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:29
// function calls: 172
void CAnimationGraph::CAnimationGraph()
{
	Object::Object(); // 30
	IAnimationGraph::IAnimationGraph(); // 72
	IAnimationGraphBuilder::IAnimationGraphBuilder(); // 37
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::CSmartPtr(); // 37
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterList>(CAnimParameterList* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterList>(CAnimParameterList* pObj); // 370
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator=(
			CAnimParameterList* pObj);  // 319
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::CSmartPtr(
			CAnimParameterList* pObj);  // 30
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimTagManager>(CAnimTagManager* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimTagManager>(CAnimTagManager* pObj); // 370
	CSmartPtr<CAnimTagManager, CRefCountAccessor>::operator=(
			CAnimTagManager* pObj);  // 319
	CSmartPtr<CAnimTagManager, CRefCountAccessor>::CSmartPtr(
			CAnimTagManager* pObj);  // 31
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimMovementManager>(CAnimMovementManager* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimMovementManager>(CAnimMovementManager* pObj); // 370
	CSmartPtr<CAnimMovementManager, CRefCountAccessor>::operator=(
			CAnimMovementManager* pObj);  // 319
	CSmartPtr<CAnimMovementManager, CRefCountAccessor>::CSmartPtr(
			CAnimMovementManager* pObj);  // 33
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphSettingsManager>(CAnimGraphSettingsManager* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphSettingsManager>(CAnimGraphSettingsManager* pObj); // 370
	CSmartPtr<CAnimGraphSettingsManager, CRefCountAccessor>::operator=(
			CAnimGraphSettingsManager* pObj);  // 319
	CSmartPtr<CAnimGraphSettingsManager, CRefCountAccessor>::CSmartPtr(
			CAnimGraphSettingsManager* pObj);  // 34
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	CUtlVectorBase<IAnimGraphLogListener::ResetDbgInfo(); // 530
	CUtlMemory<IAnimGraphLogListener::ValidateGrowSize(); // 475
	CUtlMemory<IAnimGraphLogListener::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IAnimGraphLogListener::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IAnimGraphLogListener::CUtlVector(); // 16
	CThreadMutex::CThreadMutex(
			const char* pName);  // 16
	CAnimGraphLogManager::CAnimGraphLogManager(); // 36
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphLogManager>(CAnimGraphLogManager* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphLogManager>(CAnimGraphLogManager* pObj); // 370
	CSmartPtr<CAnimGraphLogManager, CRefCountAccessor>::operator=(
			CAnimGraphLogManager* pObj);  // 319
	CSmartPtr<CAnimGraphLogManager, CRefCountAccessor>::CSmartPtr(
			CAnimGraphLogManager* pObj);  // 36
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimClipPropertiesManager>(CAnimClipPropertiesManager* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimClipPropertiesManager>(CAnimClipPropertiesManager* pObj); // 370
	CSmartPtr<CAnimClipPropertiesManager, CRefCountAccessor>::operator=(
			CAnimClipPropertiesManager* pObj);  // 319
	CSmartPtr<CAnimClipPropertiesManager, CRefCountAccessor>::CSmartPtr(
			CAnimClipPropertiesManager* pObj);  // 35
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 172
	IActivityValueList::IActivityValueList(); // 172
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccess this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CActivityValues, CRefCountAccessor>, CUtlMemory<CSmartPtr<CActivityValues, CRefCountAccessor>, this); // 172
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::CSmartPtr(); // 172
	CActivityValueList::CActivityValueList(); // 32
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CActivityValueList>(CActivityValueList* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CActivityValueList>(CActivityValueList* pObj); // 370
	CSmartPtr<CActivityValueList, CRefCountAccessor>::operator=(
			CActivityValueList* pObj);  // 319
	CSmartPtr<CActivityValueList, CRefCountAccessor>::CSmartPtr(
			CActivityValueList* pObj);  // 32
	CUtlString::CUtlString(
			const char* pString);  // 30
	CCameraSettings::CCameraSettings(); // 37
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 37
	CUtlMemory<CBoneMergeModel, int>::ValidateGrowSize(); // 475
	CUtlMemory<CBoneMergeModel, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::CUtlVector(); // 37
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(); // 37
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CSubGraphManager>(CSubGraphManager* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CSubGraphManager>(CSubGraphManager* pObj); // 370
	CSmartPtr<CSubGraphManager, CRefCountAccessor>::operator=(
			CSubGraphManager* pObj);  // 319
	CSmartPtr<CSubGraphManager, CRefCountAccessor>::CSmartPtr(
			CSubGraphManager* pObj);  // 37
	CUtlString::CUtlString(); // 37
	CUtlString::operator=(
			const char* src);  // 39
	CSmartPtr<CSubGraphManager, CRefCountAccessor>::operator->(); // 41
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeManager>(CAnimNodeManager* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeManager>(CAnimNodeManager* pObj); // 370
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator=(
			CAnimNodeManager* pObj);  // 42
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 14
	CAnimGraphContext::CAnimGraphContext(
				CAnimationGraph* pGraph,
				CAnimNodeManager* pNodeManager);  // 43
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::Get(); // 43
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphContext>(CAnimGraphContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 370
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			CAnimGraphContext* pObj);  // 43
	CSmartPtr<CActivityValueList, CRefCountAccessor>::operator->(); // 45
} /* size: 1099, inline expansions: 172 (2434 bytes) */

// <00E79FDF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:29
void CAnimationGraph::CAnimationGraph()
{
} /* size: 0 */

// <00E79ED2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:49
// variables: 2
// function calls: 2
void CAnimationGraph::GetNodeTypes(bool bIncludeDeprecatedTypes)
{
	const char   __FUNCTION__; // 10320
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 51
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 53
} /* size: 0, variables: 1, inline expansions: 2 (22 bytes) */

// <00E79EBA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:57
void CAnimationGraph::GetNodeManager()
{
} /* size: 0 */

// <00E8E4AB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:69
// function calls: 2
void CAnimationGraph::GetRootNodeID()
{
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 71
	{
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 73
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00E79E4B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:69
// variables: 2
void CAnimationGraph::GetRootNodeID()
{
	const char   __FUNCTION__; // 10347
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 71
	}
} /* size: 0, variables: 1 */

// <00E89E3C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:77
// function call: 1
void CAnimationGraph::GetParameterList()
{
	CSmartPtr<CAnimParameterList, CRefCountAccessor>::Get(); // 79
} /* size: 9, inline expansions: 1 (0 bytes) */

// <00E79E32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:77
void CAnimationGraph::GetParameterList()
{
} /* size: 0 */

// <00E79DBC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:89
// function call: 1
void CAnimationGraph::GetTagManager()
{
	CSmartPtr<CAnimTagManager, CRefCountAccessor>::Get(); // 91
} /* size: 9, inline expansions: 1 (0 bytes) */

// <00E79DA4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:95
void CAnimationGraph::GetTagManager()
{
} /* size: 0 */

// <00E79D46> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:101
// function call: 1
void CAnimationGraph::GetMovementManager()
{
	CSmartPtr<CAnimMovementManager, CRefCountAccessor>::Get(); // 103
} /* size: 9, inline expansions: 1 (0 bytes) */

// <00E79D2E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:107
void CAnimationGraph::GetMovementManager()
{
} /* size: 0 */

// <00E79CD0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:113
// function call: 1
void CAnimationGraph::GetSettingsManager()
{
	CSmartPtr<CAnimGraphSettingsManager, CRefCountAccessor>::Get(); // 115
} /* size: 20, inline expansions: 1 (4 bytes) */

// <00E79CB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:119
void CAnimationGraph::GetSettingsManager()
{
} /* size: 0 */

// <00E79C5A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:125
// function call: 1
void CAnimationGraph::GetClipPropertiesManager()
{
	CSmartPtr<CAnimClipPropertiesManager, CRefCountAccessor>::Get(); // 127
} /* size: 9, inline expansions: 1 (0 bytes) */

// <00E79BFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:131
// function call: 1
void CAnimationGraph::GetSubGraphManager()
{
	CSmartPtr<CSubGraphManager, CRefCountAccessor>::Get(); // 133
} /* size: 12, inline expansions: 1 (0 bytes) */

// <00E79BE4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:137
void CAnimationGraph::GetSubGraphManager()
{
} /* size: 0 */

// <00E798BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:143
// function calls: 13
void CAnimationGraph::CreateModelBinding(const CModel* pModel)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<IAnimGraphModelBinding>(IAnimGraphModelBinding* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<IAnimGraphModelBinding>(IAnimGraphModelBinding* pObj); // 370
	CSmartPtr<IAnimGraphModelBinding, CRefCountAccessor>::operator=(
			IAnimGraphModelBinding* pObj);  // 319
	CSmartPtr<IAnimGraphModelBinding, CRefCountAccessor>::CSmartPtr(
			IAnimGraphModelBinding* pObj);  // 145
} /* size: 106, inline expansions: 13 (150 bytes) */

// <00E796EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:149
// variable: 1
// function calls: 5
void CAnimationGraph::GetPreviewModel()
{
	CUtlString sEmpty; // 151
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 135
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::IsEmpty(); // 153
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 158
	CUtlString::CUtlString(
			const char* pString);  // 151
} /* size: 178, variables: 1, inline expansions: 5 (60 bytes) */

// <00E794D6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:162
// function calls: 8
void CAnimationGraph::SetPreviewModel(const CUtlString& modelName)
{
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 135
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::IsEmpty(); // 164
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
			int i);  // 169
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 169
} /* size: 128, inline expansions: 8 (143 bytes) */

// <00E79478> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:173
// function call: 1
void CAnimationGraph::GetBoneMergeModelCount()
{
	CUtlVectorBase<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::Count(); // 175
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00E793C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:179
// function calls: 2
void CAnimationGraph::GetBoneMergeModel(int nIndex)
{
	CUtlMemory<CBoneMergeModel, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::operator[](
			int i);  // 181
} /* size: 16, inline expansions: 2 (22 bytes) */

// <00E79303> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:185
// function calls: 2
void CAnimationGraph::IsBoneMergeModelEnabled(int nIndex)
{
	CUtlMemory<CBoneMergeModel, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::operator[](
			int i);  // 187
} /* size: 20, inline expansions: 2 (6 bytes) */

// <00E79144> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:191
// variable: 1
// function calls: 6
void CAnimationGraph::SetBoneMergeModel(int nIndex, const CUtlString& modelName)
{
	CBoneMergeModel& model; // 193
	CUtlMemory<CBoneMergeModel, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::operator[](
			int i);  // 193
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 194
} /* size: 86, variables: 1, inline expansions: 6 (121 bytes) */

// <00E7907C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:198
// variable: 1
// function calls: 2
void CAnimationGraph::EnableBoneMergeModel(int nIndex, bool bEnabled)
{
	CBoneMergeModel& model; // 200
	CUtlMemory<CBoneMergeModel, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::operator[](
			int i);  // 200
} /* size: 19, variables: 1, inline expansions: 2 (6 bytes) */

// <00E78BD9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:205
// variable: 1
// function calls: 21
void CAnimationGraph::AddBoneMergeModel(const CUtlString& modelName)
{
	CBoneMergeModel& model; // 207
	CUtlMemory<CBoneMergeModel, int>::NumAllocated(); // 1143
	CUtlMemory<CBoneMergeModel, int>::Base(); // 112
	CUtlVectorBase<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::Base(); // 368
	CUtlVectorBase<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CBoneMergeModel, int>::IsGrowable(); // 823
	CUtlMemory<CBoneMergeModel, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CBoneMergeModel, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CBoneMergeModel, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::GrowMemory(
			int num);  // 1145
	CUtlMemory<CBoneMergeModel, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 20
	CBoneMergeModel::CBoneMergeModel(); // 1479
	Construct<CBoneMergeModel>(CBoneMergeModel* pMemory); // 1148
	CUtlVectorBase<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::AddToTail(); // 207
	CUtlMemory<CBoneMergeModel, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::operator[](
			int i);  // 207
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 208
} /* size: 427, variables: 1, inline expansions: 21 (1154 bytes) */

// <00E788AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:213
// function calls: 13
void CAnimationGraph::RemoveBoneMergeModel(int nIndex)
{
	CUtlMemory<CBoneMergeModel, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::Element(
		int i);  // 1607
	CUtlString::~CUtlString(); // 20
	CBoneMergeModel::~CBoneMergeModel(); // 1526
	Destruct<CBoneMergeModel>(CBoneMergeModel* pMemory); // 1607
	CUtlMemory<CBoneMergeModel, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::Element(
		int i);  // 1114
	CUtlMemory<CBoneMergeModel, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CBoneMergeModel, CUtlMemory<CBoneMergeModel, int> >::Remove(
		int elem);  // 215
} /* size: 122, inline expansions: 13 (235 bytes) */

// <00E78850> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:219
// function call: 1
void CAnimationGraph::GetActivityParamValuesList()
{
	CSmartPtr<CActivityValueList, CRefCountAccessor>::Get(); // 221
} /* size: 20, inline expansions: 1 (4 bytes) */

// <00E78838> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:225
void CAnimationGraph::GetActivityParamValuesList()
{
} /* size: 0 */

// <00E7874E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:231
// function calls: 3
void CAnimationGraph::AddLogListener(IAnimGraphLogListener* pListener)
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 233
	CSmartPtr<CAnimGraphLogManager, CRefCountAccessor>::Get(); // 106
	CAnimGraphContext::GetLogManager(); // 233
} /* size: 24, inline expansions: 3 (15 bytes) */

// <00E78664> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:237
// function calls: 3
void CAnimationGraph::RemoveLogListener(IAnimGraphLogListener* pListener)
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 239
	CSmartPtr<CAnimGraphLogManager, CRefCountAccessor>::Get(); // 106
	CAnimGraphContext::GetLogManager(); // 239
} /* size: 24, inline expansions: 3 (15 bytes) */

// <00E8E563> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:243
void CAnimationGraph::GetParameterListInternal()
{
} /* size: 9 */

// <00E8E58C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:249
// function calls: 15
void CAnimationGraph::GetActivityValuesListInternal()
{
	CSmartPtr<CActivityValueList, CRefCountAccessor>::Get(); // 413
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CActivityValueList>(CActivityValueList* pObj); // 386
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CActivityValueList>(const CActivityValueList* pObj); // 390
	CSmartPtr<const CActivityValueList, CRefCountAccessor>::operator=<CActivityValueList>(
					CActivityValueList* pObj);  // 413
	CSmartPtr<const CActivityValueList, CRefCountAccessor>::operator=<CActivityValueList>(
					const CSmartPtr<CActivityValueList, CRefCountAccessor>& other);  // 354
	CSmartPtr<const CActivityValueList, CRefCountAccessor>::CSmartPtr<CActivityValueList>(
					const CSmartPtr<CActivityValueList, CRefCountAccessor>& other);  // 251
} /* size: 0, inline expansions: 15 (0 bytes) */

// <00E78632> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:249
void CAnimationGraph::GetActivityValuesListInternal()
{
} /* size: 0 */

// <00E78619> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:255
void CAnimationGraph::GetTagManagerInternal()
{
} /* size: 0 */

// <00E8E880> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:261
// function calls: 15
void CAnimationGraph::GetTagManagerInternal()
{
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
} /* size: 0, inline expansions: 15 (0 bytes) */

// <00E785E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:267
void CAnimationGraph::GetMovementManagerInternal()
{
} /* size: 0 */

// <00E8EB75> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:273
// function call: 1
void CAnimationGraph::GetSettingsManagerInternal()
{
	CSmartPtr<CAnimGraphSettingsManager, CRefCountAccessor>::Get(); // 275
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00E785CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:273
void CAnimationGraph::GetSettingsManagerInternal()
{
} /* size: 0 */

// <00E785A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:279
void CAnimationGraph::GetNodeManagerInternal()
{
} /* size: 0 */

// <00E782CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:285
// function calls: 14
void CAnimationGraph::GetNodeManagerInternal()
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeManager>(CAnimNodeManager* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeManager>(CAnimNodeManager* pObj); // 370
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator=(
			CAnimNodeManager* pObj);  // 406
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimNodeManager, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimNodeManager, CRefCountAccessor>& other);  // 287
} /* size: 0, inline expansions: 14 (0 bytes) */

// <00E8EBCF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:291
void CAnimationGraph::GetLogManagerInternal()
{
} /* size: 0 */

// <00E77FBC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:297
// function calls: 15
void CAnimationGraph::GetLogManagerInternal()
{
	CSmartPtr<CAnimGraphLogManager, CRefCountAccessor>::Get(); // 413
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphLogManager>(CAnimGraphLogManager* pObj); // 386
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimGraphLogManager>(const CAnimGraphLogManager* pObj); // 390
	CSmartPtr<const CAnimGraphLogManager, CRefCountAccessor>::operator=<CAnimGraphLogManager>(
					CAnimGraphLogManager* pObj);  // 413
	CSmartPtr<const CAnimGraphLogManager, CRefCountAccessor>::operator=<CAnimGraphLogManager>(
					const CSmartPtr<CAnimGraphLogManager, CRefCountAccessor>& other);  // 354
	CSmartPtr<const CAnimGraphLogManager, CRefCountAccessor>::CSmartPtr<CAnimGraphLogManager>(
					const CSmartPtr<CAnimGraphLogManager, CRefCountAccessor>& other);  // 299
} /* size: 0, inline expansions: 15 (0 bytes) */

// <00E77F7E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:303
void CAnimationGraph::TransferPostSaveFn(CKV3TransferSaveContext* pContext)
{
} /* size: 5 */

// <00E77EE8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:309
// function call: 1
void CAnimationGraph::TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
	CSmartPtr<CActivityValueList, CRefCountAccessor>::operator->(); // 311
} /* size: 17, inline expansions: 1 (0 bytes) */

// <00E8A574> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:315
// function call: 1
void CAnimationGraph::InitContext()
{
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 317
} /* size: 20, inline expansions: 1 (0 bytes) */

// <00E77ECF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:315
void CAnimationGraph::InitContext()
{
} /* size: 0 */

// <00E92900> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:321
// variables: 5
// function calls: 75
void CAnimationGraph::Bake()
{
	CAnimNodeManagerPtr nodeManager; // 337
	CAnimGraphContextPtr context; // 338
	AnimNodeLocation_t nodeLocation; // 341
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator!(); // 323
	{
		int i; // 329
		{
			CSubGraphAnimNode* subGraphNode; // 331
			CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 331
		}
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 329
	}
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeManager>(CAnimNodeManager* pObj); // 366
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator=(
			CAnimNodeManager* pObj);  // 319
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::CSmartPtr(
			CAnimNodeManager* pObj);  // 337
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphContext>(CAnimGraphContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 370
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			CAnimGraphContext* pObj);  // 319
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(
			CAnimGraphContext* pObj);  // 338
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 14
	CAnimGraphContext::CAnimGraphContext(
				CAnimationGraph* pGraph,
				CAnimNodeManager* pNodeManager);  // 338
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
	AnimNodeLocation_t::AnimNodeLocation_t(); // 341
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 342
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 342
	AnimOutputID::AnimOutputID(); // 344
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeManager>(CAnimNodeManager* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeManager>(CAnimNodeManager* pObj); // 370
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator=(
			CAnimNodeManager* pObj);  // 406
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimNodeManager, CRefCountAccessor>& other);  // 346
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
	AnimNodeLocation_t::~AnimNodeLocation_t(); // 347
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 347
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeManager>(CAnimNodeManager* pObj); // 344
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::~CSmartPtr(); // 347
	CAnimationGraph::Bake(); // 321
} /* size: 497, variables: 3, inline expansions: 73 (1418 bytes) */

// <00E77DD8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:321
// variables: 5
void CAnimationGraph::Bake()
{
	CAnimNodeManagerPtr nodeManager; // 337
	CAnimGraphContextPtr context; // 338
	AnimNodeLocation_t nodeLocation; // 341
	{
		int i; // 329
		{
			CSubGraphAnimNode* subGraphNode; // 331
		}
	}
} /* size: 0, variables: 3 */

// <00E75D0E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:350
// variables: 18
// function calls: 136
void CAnimationGraph::BakeNodesRecurs(const AnimNodeLocation_t& nodeLocation, AnimOutputID outputID, CAnimNodeManager* pNewNodeManager)
{
	CAnimNodeManager* currentNodeManager; // 357
	CAnimNodeBase* currentNode; // 358
	AnimNodeID nodeID; // 371
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> > newChildIDs; // 377
	CUtlBuffer nodeBuffer; // 393
	CUtlVector<IAnimNode*, CUtlMemory<IAnimNode*, int> > outNode; // 396
	CAnimNodeBase* newNode; // 399
	{
		AnimNodeLocation_t outputNodeLocation; // 367
		AnimOutputID::AnimOutputID(
				const AnimOutputID& rhs);  // 367
		AnimOutputID::AnimOutputID(); // 368
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveAll(); // 1798
		CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 905
		CUtlMemory<AnimNodeID, int>::Purge(); // 903
		CUtlMemory<AnimNodeID, int>::Purge(); // 1799
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
		CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 20
		AnimNodeLocation_t::~AnimNodeLocation_t(); // 369
	}
	{
		CAnimNodeBase* bakedNode; // 372
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 372
	}
	{
		int childIndex; // 380
		{
			AnimNodeID childID; // 382
			{
				AnimNodeLocation_t childNodeLocation; // 385
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
							const AnimNodeLocation_t  &);  // 385
				AnimNodeID::operator=(
						const AnimNodeID& rhs);  // 386
				AnimNodeID::operator=(
						const AnimNodeID& rhs);  // 387
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
				AnimNodeLocation_t::~AnimNodeLocation_t(); // 388
			}
			AnimNodeID::IsValid(); // 383
			CUtlMemory<AnimNodeID, int>::operator[](
					int i);  // 602
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Element(
				int i);  // 1201
			AnimNodeID::AnimNodeID(
					const AnimNodeID& rhs);  // 1520
			CopyConstruct<AnimNodeID>(AnimNodeID* pMemory,
							const AnimNodeID& src);  // 1201
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::AddToTail(
					const AnimNodeID& src);  // 390
		}
	}
	{
		int childIndex; // 400
		{
			CNodeConnection nodeConnection; // 402
			AnimNodeID::AnimNodeID(); // 22
			AnimOutputID::AnimOutputID(); // 22
			CNodeConnection::CNodeConnection(); // 402
			AnimNodeID::operator=(
					const AnimNodeID& rhs);  // 403
			AnimNodeID::AnimNodeID(
					const AnimNodeID& rhs);  // 22
			AnimOutputID::AnimOutputID(
					const AnimOutputID& rhs);  // 22
			CNodeConnection::CNodeConnection(
					const CNodeConnection  &);  // 404
		}
	}
	AnimNodeID::IsValid(); // 352
	AnimNodeID::AnimNodeID(); // 362
	AnimOutputID::IsValid(); // 365
	CUtlMemory<AnimNodeID, int>::Purge(); // 903
	CUtlMemory<AnimNodeID, int>::Purge(); // 1799
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
	ValidateAlignment<AnimNodeID>(void); // 508
	CUtlMemory<AnimNodeID, int>::Purge(); // 510
	CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 410
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 371
	CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimNodeID, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(); // 377
	CUtlMemory<AnimNodeID, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::EnsureCapacity(
			int num);  // 378
	CUtlMemory<IAnimNode::IsExternallyAllocated(); // 888
	CUtlMemory<IAnimNode::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<IAnimNode::ResetDbgInfo(); // 1024
	CUtlVectorBase<IAnimNode::EnsureCapacity(
			int num);  // 427
	CUtlMemory<IAnimNode::ValidateGrowSize(); // 475
	CUtlMemory<IAnimNode::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IAnimNode::ResetDbgInfo(); // 530
	CUtlVectorBase<IAnimNode::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 426
	initializer_list<IAnimNode::size(); // 427
	{
		IAnimNode* const& v; // 429
		initializer_list<IAnimNode*>& __for_range; // 64406
		const_iterator __for_begin; // 64417
		const_iterator __for_end; // 64428
		CUtlMemory<IAnimNode::operator[](
				int i);  // 602
		CUtlVectorBase<IAnimNode::Element(
			int i);  // 1201
		CopyConstruct<IAnimNode*>(IAnimNode** pMemory,
						IAnimNode* const& src);  // 1201
		CUtlMemory<IAnimNode::IsGrowable(); // 823
		CUtlMemory<IAnimNode::IsExternallyAllocated(); // 859
		CUtlMemory<IAnimNode::IsExternallyAllocated(); // 861
		CUtlMemory<IAnimNode::Grow(
			int num);  // 806
		CUtlVectorBase<IAnimNode::ResetDbgInfo(); // 824
		CUtlVectorBase<IAnimNode::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<IAnimNode::AddToTail(
				IAnimNode* const& src);  // 430
		initializer_list<IAnimNode::begin(); // 429
		initializer_list<IAnimNode::end(); // 429
	}
	CUtlVector<IAnimNode::CUtlVector(
			initializer_list<IAnimNode*> initializerList);  // 394
	CUtlVectorBase<IAnimNode::RemoveAll(); // 1798
	CUtlMemory<IAnimNode::IsExternallyAllocated(); // 905
	CUtlMemory<IAnimNode::Purge(); // 903
	CUtlMemory<IAnimNode::Purge(); // 1799
	CUtlVectorBase<IAnimNode::Purge(); // 560
	ValidateAlignment<IAnimNode*>(void); // 508
	CUtlMemory<IAnimNode::Purge(); // 510
	CUtlMemory<IAnimNode::~CUtlMemory(); // 562
	CUtlVectorBase<IAnimNode::~CUtlVectorBase(); // 410
	CUtlVector<IAnimNode::~CUtlVector(); // 394
	CUtlMemory<IAnimNode::ValidateGrowSize(); // 475
	CUtlMemory<IAnimNode::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IAnimNode::ResetDbgInfo(); // 530
	CUtlVectorBase<IAnimNode::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IAnimNode::CUtlVector(); // 396
	CUtlMemory<IAnimNode::operator[](
			int i);  // 630
	CUtlVectorBase<IAnimNode::Tail(); // 399
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 407
	CUtlVectorBase<IAnimNode::RemoveAll(); // 1798
	CUtlMemory<IAnimNode::IsExternallyAllocated(); // 905
	CUtlMemory<IAnimNode::Purge(); // 903
	CUtlMemory<IAnimNode::Purge(); // 1799
	CUtlVectorBase<IAnimNode::Purge(); // 560
	ValidateAlignment<IAnimNode*>(void); // 508
	CUtlMemory<IAnimNode::Purge(); // 510
	CUtlMemory<IAnimNode::~CUtlMemory(); // 562
	CUtlVectorBase<IAnimNode::~CUtlVectorBase(); // 410
	CUtlVector<IAnimNode::~CUtlVector(); // 410
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 410
} /* size: 1868, variables: 7, inline expansions: 64 (1701 bytes) */

// <00E75C7E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:413
// variables: 2
void CAnimationGraph::operator=(const CAnimationGraph& rhs)
{
	const char   __FUNCTION__; // 10239
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 415
	}
} /* size: 27, variables: 1 */

// <00E751E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:419
// variables: 6
// function calls: 49
void CAnimationGraph::GetAlignmentGridSize()
{
	const CAnimGraphGeneralSettings* pGeneralSettings; // 421
	CSmartPtr<CAnimGraphSettingsManager, CRefCountAccessor>::Get(); // 275
	CAnimationGraph::GetSettingsManagerInternal(); // 421
	{
		CAnimGraphSettingsGroupConstPtr pGroup; // 38
		const CUtlVector<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, CRefCount& __for_range; // 63923
		const_iterator __for_begin; // 63934
		const_iterator __for_end; // 63945
		CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, int>::Base(); // 113
		Base(const CUtlVectorBase<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimGraphSettings this); // 103
		begin(const CUtlVectorBase<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimGraphSettings this); // 38
		Count(const CUtlVectorBase<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimGraphSettings this); // 105
		end(const CUtlVectorBase<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimGraphSettings this); // 38
		{
			const CAnimGraphGeneralSettings* pFoundGroup; // 40
			MyTypeID(void); // 170
			reflection_cast<const CAnimGraphGeneralSettings, CSmartPtr<const CAnimGraphSettingsGroup> >(CSmartPtr<const CAnimGraphSettingsGroup, CRefCountAccessor> obj); // 40
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CAnimGraphSettingsGroup>(const CAnimGraphSettingsGroup* pObj); // 344
			CSmartPtr<const CAnimGraphSettingsGroup, CRefCountAccessor>::~CSmartPtr(); // 40
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CAnimGraphSettingsGroup>(const CAnimGraphSettingsGroup* pObj); // 344
			CSmartPtr<const CAnimGraphSettingsGroup, CRefCountAccessor>::~CSmartPtr(); // 38
			CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>::Get(); // 413
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimGraphSettingsGroup>(CAnimGraphSettingsGroup* pObj); // 386
			CSmartPtr<const CAnimGraphSettingsGroup, CRefCountAccessor>::operator=<CAnimGraphSettingsGroup>(
								CAnimGraphSettingsGroup* pObj);  // 413
			CSmartPtr<const CAnimGraphSettingsGroup, CRefCountAccessor>::operator=<CAnimGraphSettingsGroup>(
								const CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>& other);  // 354
			CSmartPtr<const CAnimGraphSettingsGroup, CRefCountAccessor>::CSmartPtr<CAnimGraphSettingsGroup>(
								const CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>& other);  // 38
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<const CAnimGraphSettingsGroup>(const CAnimGraphSettingsGroup* pObj); // 366
			CSmartPtr<const CAnimGraphSettingsGroup, CRefCountAccessor>::operator=(
					const CAnimGraphSettingsGroup* pObj);  // 406
			CSmartPtr<const CAnimGraphSettingsGroup, CRefCountAccessor>::operator=(
					const CSmartPtr<const CAnimGraphSettingsGroup, CRefCountAccessor>& other);  // 328
			CSmartPtr<const CAnimGraphSettingsGroup, CRefCountAccessor>::CSmartPtr(
					const CSmartPtr<const CAnimGraphSettingsGroup, CRefCountAccessor>& other);  // 40
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CAnimGraphSettingsGroup>(const CAnimGraphSettingsGroup* pObj); // 344
			CSmartPtr<const CAnimGraphSettingsGroup, CRefCountAccessor>::~CSmartPtr(); // 38
		}
	}
	CAnimGraphSettingsManager::FindSettings<const CAnimGraphGeneralSettings>(); // 421
	CAnimGraphGeneralSettings::GetGridSnap(); // 424
} /* size: 373, variables: 1, inline expansions: 4 (308 bytes) */

// <00E7517E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:431
void CAnimationGraph::GetNode(const AnimNodeLocation_t& nodeLocation)
{
} /* size: 11 */

// <00E7416A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:437
// variables: 9
// function calls: 67
void CAnimationGraph::GetNodeByLocation(const AnimNodeLocation_t& nodeLocation, CAnimNodeManager** pOutNodeManager)
{
	CAnimNodeManagerPtr pNodeManager; // 444
	const char   __FUNCTION__; // 10445
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 446
	}
	{
		int i; // 448
		{
			CAnimNodeBase* pNode; // 450
			{
				IGroupAnimNode* pGroupNode; // 452
				{
					ISubGraphAnimNode* pSubGraphNode; // 456
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
					ThreadInterlockedDecrement(volatile int32* p); // 159
					Decrement(int* p); // 295
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
					Release<CAnimNodeManager>(CAnimNodeManager* pObj); // 370
					ThreadInterlockedIncrement(volatile int32* p); // 158
					Increment(int* p); // 290
					CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
					AddRef<CAnimNodeManager>(CAnimNodeManager* pObj); // 366
					CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator=(
							CAnimNodeManager* pObj);  // 458
					CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 462
					CAnimGraphContext::GetNodeManager(); // 462
					ThreadInterlockedIncrement(volatile int32* p); // 158
					Increment(int* p); // 290
					CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
					AddRef<CAnimNodeManager>(CAnimNodeManager* pObj); // 366
					ThreadInterlockedDecrement(volatile int32* p); // 159
					Decrement(int* p); // 295
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
					Release<CAnimNodeManager>(CAnimNodeManager* pObj); // 370
					CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator=(
							CAnimNodeManager* pObj);  // 462
					ThreadInterlockedDecrement(volatile int32* p); // 159
					Decrement(int* p); // 295
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
					Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
					CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 462
				}
				ThreadInterlockedIncrement(volatile int32* p); // 158
				Increment(int* p); // 290
				CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
				AddRef<CAnimNodeManager>(CAnimNodeManager* pObj); // 366
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<CAnimNodeManager>(CAnimNodeManager* pObj); // 370
				CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator=(
						CAnimNodeManager* pObj);  // 454
				MyTypeID(void); // 170
				reflection_cast<IGroupAnimNode, CAnimNodeBase*>(CAnimNodeBase* obj); // 452
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 465
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 469
			}
			CUtlMemory<AnimNodeID, int>::operator[](
					int i);  // 595
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::operator[](
					int i);  // 450
			AnimNodeID::AnimNodeID(
					const AnimNodeID& rhs);  // 450
		}
		CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 448
	}
	AnimNodeID::IsValid(); // 439
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeManager>(CAnimNodeManager* pObj); // 366
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator=(
			CAnimNodeManager* pObj);  // 406
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimNodeManager, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimNodeManager, CRefCountAccessor>& other);  // 444
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 480
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeManager>(CAnimNodeManager* pObj); // 344
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::~CSmartPtr(); // 481
} /* size: 0, variables: 2, inline expansions: 17 (167 bytes) */

// <00E740AB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:484
// function call: 1
void CAnimationGraph::AddNewSubGraph(const CUtlString& filePath, IAnimationSubGraph* pSubGraph)
{
	CSmartPtr<CSubGraphManager, CRefCountAccessor>::operator->(); // 486
} /* size: 70, inline expansions: 1 (0 bytes) */

// <00E74008> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:490
// function call: 1
void CAnimationGraph::AddSubGraph(const CUtlString& filePath)
{
	CSmartPtr<CSubGraphManager, CRefCountAccessor>::operator->(); // 492
} /* size: 70, inline expansions: 1 (0 bytes) */

// <00E73F77> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraph.cpp:496
// function call: 1
void CAnimationGraph::GetSubGraphRefCount(const CUtlString& filePath)
{
	CSmartPtr<CSubGraphManager, CRefCountAccessor>::operator->(); // 498
} /* size: 17, inline expansions: 1 (7 bytes) */

