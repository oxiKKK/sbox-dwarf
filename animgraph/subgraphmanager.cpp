
//
// animgraph/subgraphmanager.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 18
//

// <0127F11A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:10
// function calls: 4
void CSubGraph::CSubGraph()
{
	ISubGraph::ISubGraph(); // 11
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 11
	CUtlString::CUtlString(); // 11
} /* size: 0, inline expansions: 4 (0 bytes) */

// <0127F101> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:10
void CSubGraph::CSubGraph()
{
} /* size: 0 */

// <0127F073> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:17
// variables: 2
void CSubGraph::operator=(const CSubGraph& rhs)
{
	const char   __FUNCTION__; // 9797
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 19
	}
} /* size: 0, variables: 1 */

// <0127F045> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:23
void CSubGraph::GetFilePath()
{
} /* size: 9 */

// <0129C3B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:29
void CSubGraph::GetSubGraph()
{
} /* size: 9 */

// <0127EE6B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:35
// function calls: 7
void CSubGraphManager::CSubGraphManager()
{
	ISubGraphManager::ISubGraphManager(); // 36
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 36
	CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqualFunc this); // 178
	CUtlHashtable(const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqualFunc this,
			int minimumSize);  // 36
} /* size: 72, inline expansions: 7 (39 bytes) */

// <0127EE52> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:35
void CSubGraphManager::CSubGraphManager()
{
} /* size: 0 */

// <0127EDF4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:42
// function call: 1
void CSubGraphManager::Count()
{
	Count(const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqu this); // 44
} /* size: 8, inline expansions: 1 (0 bytes) */

// <0127EB69> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:48
// variables: 4
// function calls: 10
void CSubGraphManager::GetSubGraph(int index)
{
	int i; // 50
	{
		UtlHashHandle_t iter; // 51
		CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int>::Count(); // 915
			CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqu this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqu this); // 51
		{
			int i; // 915
			CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqu this,
				handle_t start);  // 51
		CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqualFunc this,
				handle_t idx);  // 55
		CSmartPtr<CSubGraph, CRefCountAccessor>::Get(); // 55
	}
} /* size: 141, variables: 1 */

// <0127EB2C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:65
// variables: 2
void CSubGraphManager::GetSubGraph(int index)
{
	int i; // 67
	{
		UtlHashHandle_t iter; // 68
	}
} /* size: 0, variables: 1 */

// <0129D7AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:82
// variables: 3
// function calls: 9
void CSubGraphManager::GetSubGraphRefCount(const CUtlString& filePath)
{
	CUtlString::IsEmpty(); // 84
	{
		const CSubGraphPtr* pValue; // 89
		{
			uint32 c; // 354
		}
		StringHashFunctor::operator(
				const char* s);  // 218
		Find(const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqu this,
			KeyArg_t k);  // 226
		CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int>::operator[](
				int i);  // 294
		Element(const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqu this,
			handle_t idx);  // 226
		FindGetPtr(const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqu this,
				KeyArg_t k);  // 89
		{
			CSubGraph* pSubGraph; // 91
			CSmartPtr<CSubGraph, CRefCountAccessor>::Get(); // 91
			CMutableRefCountBase<true, CRefMT>::GetRefCount(); // 93
		}
	}
	CSubGraphManager::GetSubGraphRefCount(
				const CUtlString& filePath);  // 82
} /* size: 160, inline expansions: 2 (98 bytes) */

// <0127EAE5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:82
// variables: 2
void CSubGraphManager::GetSubGraphRefCount(const CUtlString& filePath)
{
	{
		const CSubGraphPtr* pValue; // 89
		{
			CSubGraph* pSubGraph; // 91
		}
	}
} /* size: 0 */

// <012A0D4A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:100
// function calls: 9
void CSubGraphManager::AddSubGraphFromBuffer(const CUtlString& filePath, const CUtlBuffer& buffer)
{
	CUtlString::IsEmpty(); // 102
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CSubGraph>(CSubGraph* pObj); // 344
	CSmartPtr<CSubGraph, CRefCountAccessor>::~CSmartPtr(); // 107
	CSubGraphManager::AddSubGraphFromBuffer(
				const CUtlString& filePath,
				const CUtlBuffer& buffer);  // 100
} /* size: 168, inline expansions: 9 (308 bytes) */

// <0127EAB4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:100
void CSubGraphManager::AddSubGraphFromBuffer(const CUtlString& filePath, const CUtlBuffer& buffer)
{
} /* size: 0 */

// <0127EA77> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:111
void CSubGraphManager::SetGraph(CAnimationGraph* pGraph)
{
} /* size: 9 */

// <0127D878> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:117
// variables: 11
// function calls: 71
void CSubGraphManager::AddNewSubGraph(const CUtlString& filePath, IAnimationSubGraph* pSubGraph)
{
	CAnimationSubGraph* pNewSubGraph; // 124
	CAnimNodeManager* pNodeManager; // 125
	CAnimGraphContextPtr pContext; // 126
	CSubGraphPtr pSubGraphAsset; // 148
	{
		int i; // 128
		{
			CAnimParameterBase* pParam; // 130
			const CAnimParameterListPtr& pParamList; // 134
			CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator->(); // 135
		}
	}
	{
		int i; // 138
		{
			CAnimTagBase* pTag; // 140
			const CAnimTagManagerPtr& pTagManager; // 144
			CSmartPtr<CAnimTagManager, CRefCountAccessor>::operator->(); // 145
		}
	}
	CUtlString::CUtlString(); // 11
	ISubGraph::ISubGraph(); // 11
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 11
	CSubGraph::CSubGraph(); // 148
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CSubGraph>(CSubGraph* pObj); // 366
	CSmartPtr<CSubGraph, CRefCountAccessor>::operator=(
			CSubGraph* pObj);  // 319
	CSmartPtr<CSubGraph, CRefCountAccessor>::CSmartPtr(
			CSubGraph* pObj);  // 148
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 149
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 249
	{
		uint32 c; // 354
	}
	StringHashFunctor::operator(
			const char* s);  // 249
	CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int>::operator[](
			int i);  // 720
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 64
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CSubGraph>(CSubGraph* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CSubGraph>(CSubGraph* pObj); // 370
	CSmartPtr<CSubGraph, CRefCountAccessor>::operator=(
			CSubGraph* pObj);  // 406
	CSmartPtr<CSubGraph, CRefCountAccessor>::operator=(
			const CSmartPtr<CSubGraph, CRefCountAccessor>& other);  // 328
	CSmartPtr<CSubGraph, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CSubGraph, CRefCountAccessor>& other);  // 64
	CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >::CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph> >(
								const CUtlString& k,
								const CSmartPtr<CSubGraph, CRefCountAccessor>& v);  // 1514
	Construct<CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph> >, const CUtlString&, const CSmartPtr<CSubGraph, CRefCountAccessor>&>(CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >* pMemory); // 720
	DoInsert<const CUtlString&>(const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqualFunc this,
					const CUtlString& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 714
	DoInsert<const CUtlString&>(const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqualFunc this,
					const CUtlString& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 249
	Insert(const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqualFunc this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 837
	CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int>::operator[](
			int i);  // 295
	Element(const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqualFunc this,
		handle_t idx);  // 840
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CSubGraph>(CSubGraph* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CSubGraph>(CSubGraph* pObj); // 370
	CSmartPtr<CSubGraph, CRefCountAccessor>::operator=(
			CSubGraph* pObj);  // 406
	CSmartPtr<CSubGraph, CRefCountAccessor>::operator=(
			const CSmartPtr<CSubGraph, CRefCountAccessor>& other);  // 840
	InsertOrReplace(const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqualFunc this,
			KeyArg_t k,
			ValueArg_t v);  // 152
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 154
	CSmartPtr<CSubGraph, CRefCountAccessor>::CSmartPtr(
			CSmartPtr<CSubGraph, CRefCountAccessor>& other);  // 156
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 157
	CSmartPtr<CSubGraph, CRefCountAccessor>::~CSmartPtr(); // 157
	CSmartPtr<CSubGraph, CRefCountAccessor>::operator=(
			CSubGraph* pObj);  // 319
	CSmartPtr<CSubGraph, CRefCountAccessor>::CSmartPtr(
			CSubGraph* pObj);  // 121
} /* size: 776, variables: 4, inline expansions: 69 (1923 bytes) */

// <0127D2F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:160
// variables: 2
// function calls: 23
void CSubGraphManager::AddSubGraph(const CUtlString& filePath)
{
	UtlHashHandle_t handle; // 167
	CUtlString::IsEmpty(); // 162
	CSmartPtr<CSubGraph, CRefCountAccessor>::operator=(
			CSubGraph* pObj);  // 319
	CSmartPtr<CSubGraph, CRefCountAccessor>::CSmartPtr(
			CSubGraph* pObj);  // 164
	{
		uint32 c; // 354
	}
	StringHashFunctor::operator(
			const char* s);  // 218
	Find(const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqu this,
		KeyArg_t k);  // 167
	CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor>, DefaultHashFunctor<CUtlString>, DefaultEqu this,
			handle_t idx);  // 168
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CSubGraph>(CSubGraph* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CSubGraph>(CSubGraph* pObj); // 370
	CSmartPtr<CSubGraph, CRefCountAccessor>::operator=(
			CSubGraph* pObj);  // 406
	CSmartPtr<CSubGraph, CRefCountAccessor>::operator=(
			const CSmartPtr<CSubGraph, CRefCountAccessor>& other);  // 328
	CSmartPtr<CSubGraph, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CSubGraph, CRefCountAccessor>& other);  // 170
} /* size: 307, variables: 1, inline expansions: 23 (408 bytes) */

// <0127D26B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphmanager.cpp:177
// variables: 2
void CSubGraphManager::operator=(const CSubGraphManager& rhs)
{
	const char   __FUNCTION__; // 9797
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 1 */

