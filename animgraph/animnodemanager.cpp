
//
// animgraph/animnodemanager.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 43
//

// <00F8A865> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:12
void MyTypeInfo(void)
{
} /* size: 0 */

// <00F8A835> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:12
void IAnimNodeManager::GetTypeInfo()
{
} /* size: 0 */

// <00F8A6A1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:12
// function calls: 3
void* IAnimNodeManager::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimNodeManager>::CastTo(
		IAnimNodeManager* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00F8A50D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:12
// function calls: 3
const void* IAnimNodeManager::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimNodeManager>::CastTo(
		const IAnimNodeManager* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00F98F98> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:13
void CAnimNodeManager::GetTypeInfo()
{
} /* size: 12 */

// <00F89FE0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:13
// function calls: 3
void* CAnimNodeManager::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAnimNodeManager>::CastTo(
		CAnimNodeManager* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (287 bytes) */

// <00F89E4B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:13
// function calls: 3
const void* CAnimNodeManager::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAnimNodeManager>::CastTo(
		const CAnimNodeManager* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (287 bytes) */

// <00F89762> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:15
// function calls: 15
void CAnimNodeManager::CAnimNodeManager()
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 15
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this); // 178
	CUtlHashtable(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
			int minimumSize);  // 15
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<AnimNodeID, CAnimNodeBase::Init(); // 178
	CUtlHashtable<AnimNodeID, CAnimNodeBase::CUtlHashtable(
			int minimumSize);  // 15
	IAnimNodeManager::IAnimNodeManager(); // 15
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(); // 15
	AnimNodeID::AnimNodeID(); // 15
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			CAnimGraphContext* pObj);  // 17
	AnimNodeID::operator=(
			uint32 id);  // 18
} /* size: 103, inline expansions: 15 (96 bytes) */

// <00F89749> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:15
void CAnimNodeManager::CAnimNodeManager()
{
} /* size: 0 */

// <00F896D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:22
void CAnimNodeManager::TransferPostSaveFn(CKV3TransferSaveContext* pContext)
{
} /* size: 23 */

// <00F891EC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:28
// variables: 6
// function calls: 16
void CAnimNodeManager::TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
	const char   __FUNCTION__; // 37808
	{
		UtlHashHandle_t iter; // 32
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 38
		}
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Count(); // 915
			CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this); // 32
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
				handle_t idx);  // 34
		CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator==(
				const CAnimNodeBase* pOther);  // 34
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Count(); // 915
			CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				handle_t start);  // 44
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Count(); // 915
			CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				handle_t start);  // 857
		RemoveAndAdvance(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
				UtlHashHandle_t idx);  // 37
	}
} /* size: 408, variables: 1 */

// <00F98FC2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:50
// function call: 1
void CAnimNodeManager::GetNodeCount()
{
	Count(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this); // 52
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00F891D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:50
void CAnimNodeManager::GetNodeCount()
{
} /* size: 0 */

// <00F88E85> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:56
// variables: 7
// function calls: 11
void CAnimNodeManager::GetNode(int index)
{
	const char   __FUNCTION__; // 37516
	int count; // 61
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 58
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
	{
		UtlHashHandle_t iter; // 62
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Count(); // 915
			CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this); // 62
		{
			int i; // 915
			CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				handle_t start);  // 62
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
				handle_t idx);  // 66
		CSmartPtr<CAnimNodeBase, CRefCountAccessor>::Get(); // 66
	}
	Count(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this); // 59
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <00F9DFD5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:76
void CAnimNodeManager::GetNode(int index)
{
} /* size: 9 */

// <00F9D62B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:82
// function calls: 11
void CAnimNodeManager::GetNode(AnimNodeID nodeID)
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 84
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 96
	CSmartPtr<CAnimNodeBase, CRefCountAccessor>::Get(); // 96
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeBase>(CAnimNodeBase* pObj); // 344
	CSmartPtr<CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 96
	CAnimNodeManager::GetNodeByID(
			AnimNodeID nodeID);  // 84
} /* size: 103, inline expansions: 11 (206 bytes) */

// <00F88E3B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:82
void CAnimNodeManager::GetNode(AnimNodeID nodeID)
{
} /* size: 0 */

// <00F9D40B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:94
// function calls: 9
void CAnimNodeManager::GetNodeByID(AnimNodeID nodeID)
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 96
	CSmartPtr<CAnimNodeBase, CRefCountAccessor>::Get(); // 96
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeBase>(CAnimNodeBase* pObj); // 344
	CSmartPtr<CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 96
} /* size: 103, inline expansions: 9 (152 bytes) */

// <00F88DF2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:94
void CAnimNodeManager::GetNodeByID(AnimNodeID nodeID)
{
} /* size: 0 */

// <00F88877> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:100
// variable: 1
// function calls: 25
void CAnimNodeManager::FindNode(AnimNodeID nodeID)
{
	{
		UtlHashHandle_t handle; // 104
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 218
		Mix32HashFunctor::operator(
				uint32 n);  // 68
		DefaultHashFunctor<AnimNodeID>::operator(
				AnimNodeID s);  // 218
		Find(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
			KeyArg_t k);  // 104
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Count(); // 204
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::operator[](
				int i);  // 204
		CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 204
		IsValidHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				handle_t idx);  // 105
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimNodeBase>(CAnimNodeBase* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimNodeBase>(CAnimNodeBase* pObj); // 370
		CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator=(
				CAnimNodeBase* pObj);  // 406
		CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator=(
				const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& other);  // 328
		CSmartPtr<CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
				const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& other);  // 107
	}
	AnimNodeID::IsValid(); // 102
	CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator=(
			CAnimNodeBase* pObj);  // 319
	CSmartPtr<CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
			CAnimNodeBase* pObj);  // 111
} /* size: 215, inline expansions: 3 (9 bytes) */

// <00F88529> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:115
// variables: 7
// function calls: 11
void CAnimNodeManager::GetNodeInternal(int index)
{
	const char   __FUNCTION__; // 37727
	int count; // 120
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 117
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 118
	}
	{
		UtlHashHandle_t iter; // 121
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Count(); // 915
			CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this); // 121
		{
			int i; // 915
			CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				handle_t start);  // 121
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::operator[](
				int i);  // 296
		operator[](const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				handle_t idx);  // 125
		CSmartPtr<CAnimNodeBase, CRefCountAccessor>::Get(); // 125
	}
	Count(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this); // 118
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <00F8805F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:135
// variables: 3
// function calls: 19
void CAnimNodeManager::GetNodeManager(AnimNodeID nodeID)
{
	{
		CAnimNodeBase* pNode; // 137
		{
			IGroupAnimNode* pGroupNode; // 139
			{
				ISubGraphAnimNode* pSubGraphNode; // 143
				CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 149
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
				CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 149
			}
		}
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 137
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 96
		CSmartPtr<CAnimNodeBase, CRefCountAccessor>::Get(); // 96
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimNodeBase>(CAnimNodeBase* pObj); // 344
		CSmartPtr<CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 96
		CAnimNodeManager::GetNodeByID(
				AnimNodeID nodeID);  // 137
	}
} /* size: 232 */

// <00F87E2D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:157
// variables: 2
// function call: 1
void CAnimNodeManager::AddConnection(IAnimNode* parentNode, int parentPlugIndex, IAnimNode* childNode, int childPlugIndex)
{
	CAnimNodeBase* parentNodeBase; // 159
	CAnimNodeBase* childNodeBase; // 160
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 168
	}
} /* size: 0, variables: 2 */

// <00F87D04> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:175
// variable: 1
// function calls: 2
void CAnimNodeManager::RemoveConnection(IAnimNode* parentNode, int parentPlugIndex)
{
	CAnimNodeBase* parentNodeBase; // 177
	AnimNodeID::AnimNodeID(); // 183
	AnimOutputID::AnimOutputID(); // 183
} /* size: 122, variables: 1, inline expansions: 2 (8 bytes) */

// <00F8744C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:188
// variables: 4
// function calls: 40
void CAnimNodeManager::SetContext(const CAnimGraphContextPtr& context)
{
	{
		UtlHashHandle_t iter; // 197
		{
			CAnimNodeBasePtr currentNode; // 199
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::operator[](
					int i);  // 297
			operator[](const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
					handle_t idx);  // 199
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimNodeBase>(CAnimNodeBase* pObj); // 366
			CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator=(
					CAnimNodeBase* pObj);  // 406
			CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator=(
					const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& other);  // 328
			CSmartPtr<CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
					const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& other);  // 199
			AnimNodeID::operator=(
					const AnimNodeID& rhs);  // 204
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Base(); // 914
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Count(); // 915
				CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 917
			}
			NextHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
					handle_t start);  // 209
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimNodeBase>(CAnimNodeBase* pObj); // 344
			CSmartPtr<CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 210
		}
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Count(); // 915
			CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this); // 197
	}
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
			CAnimGraphContext* pObj);  // 406
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphContext, CRefCountAccessor>& other);  // 190
} /* size: 0, inline expansions: 13 (358 bytes) */

// <00F8741C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:214
void CAnimNodeManager::GetContext()
{
} /* size: 9 */

// <00F86403> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:220
// variables: 4
// function calls: 60
void CAnimNodeManager::AddAnimNode(const char* pNodeType)
{
	const char   __FUNCTION__; // 37624
	CAnimNodeBasePtr newNode; // 224
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 222
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 237
	}
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator bool(); // 222
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CSm this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CSm this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CSmartP this,
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbolTable this,
			bool caseInsensitive,
			int growSize,
			int initSize);  // 157
	CTypeFactory<CAnimNodeBase>::CTypeFactory(); // 66
	Get(void); // 61
	Get(void); // 224
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	Find(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbo this,
		const char* pString);  // 86
	Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemo this); // 53
	{
	}
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CSm this,
			int i);  // 54
	operator[](const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbolTable this,
			IndexType_t n);  // 89
	CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>::operator->(); // 89
	CTypeFactory<CAnimNodeBase>::Create(
		const char* typeName);  // 224
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeBase>(CAnimNodeBase* pObj); // 366
	CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator=(
			CAnimNodeBase* pObj);  // 319
	CSmartPtr<CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
			CAnimNodeBase* pObj);  // 224
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 249
	Mix32HashFunctor::operator(
			uint32 n);  // 68
	DefaultHashFunctor<AnimNodeID>::operator(
			AnimNodeID s);  // 249
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::operator[](
			int i);  // 720
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 64
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeBase>(CAnimNodeBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeBase>(CAnimNodeBase* pObj); // 370
	CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator=(
			CAnimNodeBase* pObj);  // 406
	CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& other);  // 64
	CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase> >(
								const AnimNodeID& k,
								const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& v);  // 1514
	Construct<CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase> >, const AnimNodeID&, const CSmartPtr<CAnimNodeBase, CRefCountAccessor>&>(CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >* pMemory); // 720
	DoInsert<const AnimNodeID&>(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
					const AnimNodeID& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 714
	DoInsert<const AnimNodeID&>(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
					const AnimNodeID& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 249
	Insert(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 232
	AnimNodeID::IsValid(); // 237
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 238
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeBase>(CAnimNodeBase* pObj); // 344
	CSmartPtr<CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 245
} /* size: 0, variables: 2, inline expansions: 60 (1865 bytes) */

// <00F8588D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:248
// variables: 5
// function calls: 49
void CAnimNodeManager::RemoveAnimNode(IAnimNode* node)
{
	CAnimNodeBase* nodeBase; // 250
	{
		UtlHashHandle_t iter; // 260
		{
			CAnimNodeBasePtr otherNode; // 262
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::operator[](
					int i);  // 297
			operator[](const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
					handle_t idx);  // 262
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimNodeBase>(CAnimNodeBase* pObj); // 366
			CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator=(
					CAnimNodeBase* pObj);  // 406
			CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator=(
					const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& other);  // 328
			CSmartPtr<CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
					const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& other);  // 262
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimNodeBase>(CAnimNodeBase* pObj); // 344
			CSmartPtr<CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 268
			AnimNodeID::operator=(
					const AnimNodeID& rhs);  // 265
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimNodeBase>(CAnimNodeBase* pObj); // 344
			CSmartPtr<CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 268
		}
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Count(); // 915
			CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Base(); // 914
		NextHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this); // 260
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Count(); // 915
			CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				handle_t start);  // 260
	}
	AnimNodeID::operator==(
			const AnimNodeID& rhs);  // 254
	AnimNodeID::operator=(
			uint32 id);  // 257
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			CAnimGraphContext* pObj);  // 319
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(
			CAnimGraphContext* pObj);  // 275
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 275
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 267
	Mix32HashFunctor::operator(
			uint32 n);  // 68
	DefaultHashFunctor<AnimNodeID>::operator(
			AnimNodeID s);  // 267
	Remove(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
		KeyArg_t k);  // 278
} /* size: 0, variables: 1, inline expansions: 15 (359 bytes) */

// <00F84C21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:283
// variables: 2
// function calls: 49
void CAnimNodeManager::GetNodeTypes(bool bIncludeDeprecatedTypes)
{
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CSm this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CSm this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemory<CSmartP this,
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbolTable this,
			bool caseInsensitive,
			int growSize,
			int initSize);  // 157
	CTypeFactory<CAnimNodeBase>::CTypeFactory(); // 66
	Get(void); // 61
	Get(void); // 285
	Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemo this); // 76
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 76
	{
	}
	Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemo this); // 79
	Count(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbo this); // 113
	CUtlMemory<const Reflection::CClassInfo::ValidateGrowSize(); // 475
	CUtlMemory<const Reflection::CClassInfo::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<const Reflection::CClassInfo::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const Reflection::CClassInfo::ResetDbgInfo(); // 530
	CUtlVectorBase<const Reflection::CClassInfo::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<const Reflection::CClassInfo::CUtlVector(
			int growSize,
			int initCapacity);  // 113
	{
		short unsigned int i; // 115
		Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemo this); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemo this); // 79
		Count(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbo this); // 142
		First(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbo this); // 115
		{
			const CClassInfo& typeInfo; // 117
			CUtlMemory<const Reflection::CClassInfo::Base(); // 112
			CUtlVectorBase<const Reflection::CClassInfo::Base(); // 368
			CUtlVectorBase<const Reflection::CClassInfo::ResetDbgInfo(); // 824
			CUtlVectorBase<const Reflection::CClassInfo::GrowMemory(
					int num);  // 1249
			CUtlMemory<const Reflection::CClassInfo::NumAllocated(); // 1247
			CUtlMemory<const Reflection::CClassInfo::operator[](
					int i);  // 602
			CUtlVectorBase<const Reflection::CClassInfo::Element(
				int i);  // 1252
			Construct<const Reflection::CClassInfo*, const Reflection::CClassInfo*>(const CClassInfo ** pMemory); // 1252
			CUtlVectorBase<const Reflection::CClassInfo::AddToTail(
					const CClassInfo  *& src);  // 120
			{
			}
			CUtlMemory<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemo this,
					int i);  // 63
			operator[](const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbo this,
					IndexType_t n);  // 117
			CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>::operator->(); // 117
			MyTypeID(void); // 46
			CAttributeContainer::HasAttribute<Attribute::Deprecated>(); // 118
		}
		Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemo this); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		Count(const CUtlVectorBase<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlMemo this); // 79
		Count(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbo this); // 155
		Next(const CUtlStringMap<CSmartPtr<Reflection::CTypeFactory<CAnimNodeBase>::CFactoryMaker, CRefCountAccessor>, CUtlSymbo this,
			IndexType_t i);  // 115
	}
	CTypeFactory<CAnimNodeBase>::GetTypes(
		bool bIncludeDeprecatedTypes);  // 285
} /* size: 0, inline expansions: 22 (1530 bytes) */

// <00F84511> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:290
// variables: 6
// function calls: 28
void CAnimNodeManager::DisconnectFromParents(CAnimNodeBase* node)
{
	{
		AnimNodeID nodeID; // 297
		{
			UtlHashHandle_t iter; // 299
			{
				CAnimNodeBasePtr otherNode; // 301
				{
					int childIndex; // 304
					AnimNodeID::operator==(
							const AnimNodeID& rhs);  // 306
					AnimNodeID::AnimNodeID(); // 308
				}
				CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::operator[](
						int i);  // 297
				operator[](const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
						handle_t idx);  // 301
				ThreadInterlockedIncrement(volatile int32* p); // 158
				Increment(int* p); // 290
				CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
				AddRef<CAnimNodeBase>(CAnimNodeBase* pObj); // 366
				CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator=(
						CAnimNodeBase* pObj);  // 406
				CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator=(
						const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& other);  // 328
				CSmartPtr<CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
						const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& other);  // 301
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<CAnimNodeBase>(CAnimNodeBase* pObj); // 344
				CSmartPtr<CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 312
			}
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Base(); // 914
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Count(); // 915
				CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 917
			}
			NextHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
					handle_t start);  // 208
			FirstHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this); // 299
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Base(); // 914
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Count(); // 915
				CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 917
			}
			NextHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
					handle_t start);  // 299
		}
	}
} /* size: 380 */

// <00F83BCE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:317
// variables: 4
// function calls: 41
void CAnimNodeManager::CopyNodesToBuffer(CUtlBuffer& bufferOut)
{
	CUtlVector<IAnimNode*, CUtlMemory<IAnimNode*, int> > nodes; // 319
	{
		UtlHashHandle_t iter; // 322
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Count(); // 915
			CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Base(); // 914
		NextHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this); // 322
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
				handle_t idx);  // 324
		CUtlMemory<IAnimNode::NumAllocated(); // 1247
		CUtlMemory<IAnimNode::operator[](
				int i);  // 602
		CUtlVectorBase<IAnimNode::Element(
			int i);  // 1252
		Construct<IAnimNode*, IAnimNode*>(IAnimNode** pMemory); // 1252
		CUtlMemory<IAnimNode::Base(); // 112
		CUtlVectorBase<IAnimNode::Base(); // 368
		CUtlVectorBase<IAnimNode::ResetDbgInfo(); // 824
		CUtlVectorBase<IAnimNode::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<IAnimNode::AddToTail(
				IAnimNode *& src);  // 324
		CSmartPtr<CAnimNodeBase, CRefCountAccessor>::Get(); // 324
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Count(); // 915
			CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Base(); // 914
		NextHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				handle_t start);  // 322
	}
	Count(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this); // 320
	CUtlMemory<IAnimNode::ValidateGrowSize(); // 475
	CUtlMemory<IAnimNode::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IAnimNode::ResetDbgInfo(); // 530
	CUtlVectorBase<IAnimNode::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IAnimNode::CUtlVector(); // 319
	CUtlMemory<IAnimNode::IsExternallyAllocated(); // 888
	CUtlMemory<IAnimNode::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<IAnimNode::ResetDbgInfo(); // 1024
	CUtlVectorBase<IAnimNode::EnsureCapacity(
			int num);  // 320
	CUtlVectorBase<IAnimNode::RemoveAll(); // 1798
	CUtlMemory<IAnimNode::IsExternallyAllocated(); // 905
	CUtlMemory<IAnimNode::Purge(); // 903
	CUtlMemory<IAnimNode::Purge(); // 1799
	CUtlVectorBase<IAnimNode::Purge(); // 560
	ValidateAlignment<IAnimNode*>(void); // 508
	CUtlMemory<IAnimNode::Purge(); // 510
	CUtlMemory<IAnimNode::~CUtlMemory(); // 562
	CUtlVectorBase<IAnimNode::~CUtlVectorBase(); // 410
	CUtlVector<IAnimNode::~CUtlVector(); // 328
} /* size: 460, variables: 1, inline expansions: 20 (367 bytes) */

// <00F837BD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:331
// variables: 2
// function calls: 15
void CAnimNodeManager::CopyNodesToBuffer(const CUtlVector<IAnimNode*, CUtlMemory<IAnimNode*, int> >& nodesToCopy, CUtlBuffer& bufferOut)
{
	CAnimNodeList nodeList; // 333
	CUtlString errors; // 338
	CUtlString::CUtlString(); // 338
	CUtlString::~CUtlString(); // 340
	CUtlVectorBase<CAnimNodeBase::RemoveAll(); // 1798
	CUtlMemory<CAnimNodeBase::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimNodeBase::Purge(); // 903
	CUtlMemory<CAnimNodeBase::Purge(); // 1799
	CUtlVectorBase<CAnimNodeBase::Purge(); // 560
	ValidateAlignment<CAnimNodeBase*>(void); // 508
	CUtlMemory<CAnimNodeBase::Purge(); // 510
	CUtlMemory<CAnimNodeBase::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimNodeBase::~CUtlVectorBase(); // 410
	CUtlVector<CAnimNodeBase::~CUtlVector(); // 10
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 10
	CAnimNodeList::~CAnimNodeList(); // 340
} /* size: 194, variables: 2, inline expansions: 15 (203 bytes) */

// <00F80B7C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:343
// variables: 20
// function calls: 171
void CAnimNodeManager::PasteNodesFromBuffer(const CUtlBuffer& buffer, CUtlVector<IAnimNode*, CUtlMemory<IAnimNode*, int> >* nodeListOut)
{
	CUtlString errors; // 345
	CAnimNodeListPtr nodeList; // 349
	const char   __FUNCTION__; // 37857
	{
		CUtlHashtable<AnimNodeID, CAnimNodeBase*, DefaultHashFunctor<AnimNodeID>, DefaultEqualFunctor<AnimNodeID>, undefined_t, CUtlMemory<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase*>, int> > tmpNodeMap; // 354
		{
			int i; // 355
			{
				CAnimNodeBase* currentNode; // 357
				CUtlMemory<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase::operator[](
						int i);  // 720
				AnimNodeID::AnimNodeID(
						const AnimNodeID& rhs);  // 64
				CUtlKeyValuePair<AnimNodeID, CAnimNodeBase::CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>(
										const AnimNodeID& k,
										CAnimNodeBase* const& v);  // 1514
				Construct<CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>, const AnimNodeID&, CAnimNodeBase*&>(CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>* pMemory); // 720
				CUtlHashtable<AnimNodeID, CAnimNodeBase::DoInsert<const AnimNodeID&>(
								const AnimNodeID& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 714
				CUtlHashtable<AnimNodeID, CAnimNodeBase::DoInsert<const AnimNodeID&>(
								const AnimNodeID& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 249
				AnimNodeID::AnimNodeID(
						const AnimNodeID& rhs);  // 249
				Mix32HashFunctor::operator(
						uint32 n);  // 68
				DefaultHashFunctor<AnimNodeID>::operator(
						AnimNodeID s);  // 249
				CUtlHashtable<AnimNodeID, CAnimNodeBase::Insert(
					KeyArg_t k,
					ValueArg_t v,
					bool* pDidInsert);  // 364
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
				CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 362
				CUtlMemory<CAnimNodeBase::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimNodeBase::operator[](
						int i);  // 34
				CAnimNodeList::Get(
					int index);  // 357
				CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator!=(
						const CAnimGraphContext* pOther);  // 362
				AnimNodeID::AnimNodeID(); // 369
			}
			CUtlVectorBase<CAnimNodeBase::Count(); // 26
			CAnimNodeList::Count(); // 355
		}
		{
			int i; // 373
			{
				CAnimNodeBase* currentNode; // 375
				AnimNodeID oldID; // 392
				AnimNodeID newID; // 428
				{
					int childIndex; // 380
					{
						AnimNodeID childID; // 382
						AnimNodeID::IsValid(); // 383
						AnimNodeID::AnimNodeID(
								const AnimNodeID& rhs);  // 218
						Mix32HashFunctor::operator(
								uint32 n);  // 68
						DefaultHashFunctor<AnimNodeID>::operator(
								AnimNodeID s);  // 218
						CUtlHashtable<AnimNodeID, CAnimNodeBase::Find(
							KeyArg_t k);  // 235
						CUtlHashtable<AnimNodeID, CAnimNodeBase::HasElement(
								KeyArg_t k);  // 383
						AnimNodeID::AnimNodeID(); // 386
					}
				}
				{
					AnimNodeID newID; // 396
					{
						int j; // 409
						{
							CAnimNodeBase* pNode; // 416
							{
								int childIndex; // 418
								AnimNodeID::operator==(
										const AnimNodeID& rhs);  // 420
								AnimNodeID::AnimNodeID(
										const AnimNodeID& rhs);  // 422
							}
							CUtlMemory<CAnimNodeBase::operator[](
									int i);  // 588
							CUtlVectorBase<CAnimNodeBase::operator[](
									int i);  // 34
							CAnimNodeList::Get(
								int index);  // 416
						}
						CUtlVectorBase<CAnimNodeBase::Count(); // 26
						CAnimNodeList::Count(); // 409
					}
					AnimNodeID::operator=(
							const AnimNodeID& rhs);  // 399
					AnimNodeID::AnimNodeID(
							const AnimNodeID& rhs);  // 218
					Mix32HashFunctor::operator(
							uint32 n);  // 68
					DefaultHashFunctor<AnimNodeID>::operator(
							AnimNodeID s);  // 218
					CUtlHashtable<AnimNodeID, CAnimNodeBase::Find(
						KeyArg_t k);  // 235
					CUtlHashtable<AnimNodeID, CAnimNodeBase::HasElement(
							KeyArg_t k);  // 400
					AnimNodeID::AnimNodeID(
							const AnimNodeID& rhs);  // 402
					AnimNodeID::AnimNodeID(
							const AnimNodeID& rhs);  // 267
					Mix32HashFunctor::operator(
							uint32 n);  // 68
					DefaultHashFunctor<AnimNodeID>::operator(
							AnimNodeID s);  // 267
					CUtlHashtable<AnimNodeID, CAnimNodeBase::Remove(
						KeyArg_t k);  // 405
					AnimNodeID::AnimNodeID(
							const AnimNodeID& rhs);  // 249
					Mix32HashFunctor::operator(
							uint32 n);  // 68
					DefaultHashFunctor<AnimNodeID>::operator(
							AnimNodeID s);  // 249
					CUtlMemory<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase::operator[](
							int i);  // 720
					AnimNodeID::AnimNodeID(
							const AnimNodeID& rhs);  // 64
					CUtlKeyValuePair<AnimNodeID, CAnimNodeBase::CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>(
											const AnimNodeID& k,
											CAnimNodeBase* const& v);  // 1514
					Construct<CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>, const AnimNodeID&, CAnimNodeBase*&>(CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>* pMemory); // 720
					CUtlHashtable<AnimNodeID, CAnimNodeBase::DoInsert<const AnimNodeID&>(
									const AnimNodeID& k,
									Arg_t v,
									unsigned int h,
									bool* pDidInsert);  // 714
					CUtlHashtable<AnimNodeID, CAnimNodeBase::DoInsert<const AnimNodeID&>(
									const AnimNodeID& k,
									Arg_t v,
									unsigned int h,
									bool* pDidInsert);  // 249
					CUtlHashtable<AnimNodeID, CAnimNodeBase::Insert(
						KeyArg_t k,
						ValueArg_t v,
						bool* pDidInsert);  // 406
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 431
				}
				{
					CSubGraphAnimNode* pSubGraphNode; // 434
					AnimNodeID::AnimNodeID(
							const AnimNodeID& rhs);  // 267
					Mix32HashFunctor::operator(
							uint32 n);  // 68
					DefaultHashFunctor<AnimNodeID>::operator(
							AnimNodeID s);  // 267
					Remove(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
						KeyArg_t k);  // 438
					AnimNodeID::AnimNodeID(
							const AnimNodeID& rhs);  // 267
					Mix32HashFunctor::operator(
							uint32 n);  // 68
					DefaultHashFunctor<AnimNodeID>::operator(
							AnimNodeID s);  // 267
					CUtlHashtable<AnimNodeID, CAnimNodeBase::Remove(
						KeyArg_t k);  // 439
				}
				CUtlMemory<CAnimNodeBase::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimNodeBase::operator[](
						int i);  // 34
				CAnimNodeList::Get(
					int index);  // 375
				AnimNodeID::IsValid(); // 376
				AnimNodeID::AnimNodeID(
						const AnimNodeID& rhs);  // 394
				AnimNodeID::AnimNodeID(
						const AnimNodeID& rhs);  // 96
				CSmartPtr<CAnimNodeBase, CRefCountAccessor>::Get(); // 96
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<CAnimNodeBase>(CAnimNodeBase* pObj); // 344
				CSmartPtr<CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 96
				CAnimNodeManager::GetNodeByID(
						AnimNodeID nodeID);  // 394
				AnimNodeID::AnimNodeID(
						const AnimNodeID& rhs);  // 218
				Mix32HashFunctor::operator(
						uint32 n);  // 68
				DefaultHashFunctor<AnimNodeID>::operator(
						AnimNodeID s);  // 218
				Find(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
					KeyArg_t k);  // 235
				HasElement(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
						KeyArg_t k);  // 431
				ThreadInterlockedIncrement(volatile int32* p); // 158
				Increment(int* p); // 290
				CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
				AddRef<CAnimNodeBase>(CAnimNodeBase* pObj); // 366
				CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator=(
						CAnimNodeBase* pObj);  // 319
				CSmartPtr<CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
						CAnimNodeBase* pObj);  // 432
				AnimNodeID::AnimNodeID(
						const AnimNodeID& rhs);  // 249
				CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::operator[](
						int i);  // 720
				AnimNodeID::AnimNodeID(
						const AnimNodeID& rhs);  // 64
				ThreadInterlockedIncrement(volatile int32* p); // 158
				Increment(int* p); // 290
				CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
				AddRef<CAnimNodeBase>(CAnimNodeBase* pObj); // 366
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<CAnimNodeBase>(CAnimNodeBase* pObj); // 370
				CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator=(
						CAnimNodeBase* pObj);  // 406
				CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator=(
						const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& other);  // 328
				CSmartPtr<CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
						const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& other);  // 64
				CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase> >(
											const AnimNodeID& k,
											const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& v);  // 1514
				Construct<CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase> >, const AnimNodeID&, const CSmartPtr<CAnimNodeBase, CRefCountAccessor>&>(CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >* pMemory); // 720
				DoInsert<const AnimNodeID&>(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
								const AnimNodeID& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 714
				DoInsert<const AnimNodeID&>(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
								const AnimNodeID& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 249
				Mix32HashFunctor::operator(
						uint32 n);  // 68
				DefaultHashFunctor<AnimNodeID>::operator(
						AnimNodeID s);  // 249
				Insert(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
					KeyArg_t k,
					ValueArg_t v,
					bool* pDidInsert);  // 432
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<CAnimNodeBase>(CAnimNodeBase* pObj); // 344
				CSmartPtr<CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 432
				CUtlMemory<IAnimNode::NumAllocated(); // 1247
				CUtlMemory<IAnimNode::operator[](
						int i);  // 602
				CUtlVectorBase<IAnimNode::Element(
					int i);  // 1252
				Construct<IAnimNode*, IAnimNode*>(IAnimNode** pMemory); // 1252
				CUtlMemory<IAnimNode::Base(); // 112
				CUtlVectorBase<IAnimNode::Base(); // 368
				CUtlVectorBase<IAnimNode::ResetDbgInfo(); // 824
				CUtlVectorBase<IAnimNode::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<IAnimNode::AddToTail(
						IAnimNode *& src);  // 448
				AnimNodeID::IsValid(); // 453
				AnimNodeID::operator=(
						const AnimNodeID& rhs);  // 455
			}
			CUtlVectorBase<CAnimNodeBase::Count(); // 26
			CAnimNodeList::Count(); // 373
		}
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 178
		CUtlHashtable<AnimNodeID, CAnimNodeBase::Init(); // 178
		CUtlHashtable<AnimNodeID, CAnimNodeBase::CUtlHashtable(
				int minimumSize);  // 354
		{
			entry_t* table; // 896
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase::Base(); // 896
			{
				int i; // 897
				CUtlMemory<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase::Count(); // 897
				CUtlHashtableEntry<AnimNodeID, CAnimNodeBase::IsValid(); // 899
				CUtlHashtableEntry<AnimNodeID, CAnimNodeBase::MarkInvalid(); // 901
				Destruct<CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> >(CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>* pMemory); // 902
			}
		}
		CUtlHashtable<AnimNodeID, CAnimNodeBase::RemoveAll(); // 188
		ValidateAlignment<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase*> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase::~CUtlMemory(); // 188
		CUtlHashtable<AnimNodeID, CAnimNodeBase::~CUtlHashtable(); // 465
		CUtlVectorBase<IAnimNode::Count(); // 459
	}
	CUtlString::CUtlString(); // 345
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeList>(CAnimNodeList* pObj); // 366
	CSmartPtr<CAnimNodeList, CRefCountAccessor>::operator=(
			CAnimNodeList* pObj);  // 319
	CSmartPtr<CAnimNodeList, CRefCountAccessor>::CSmartPtr(
			CAnimNodeList* pObj);  // 349
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeList>(CAnimNodeList* pObj); // 344
	CSmartPtr<CAnimNodeList, CRefCountAccessor>::~CSmartPtr(); // 468
	CUtlString::~CUtlString(); // 468
} /* size: 0, variables: 3, inline expansions: 16 (188 bytes) */

// <00F9901C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:471
// function call: 1
void CAnimNodeManager::GetRootNodeID()
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 473
} /* size: 13, inline expansions: 1 (5 bytes) */

// <00F80B63> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:471
void CAnimNodeManager::GetRootNodeID()
{
} /* size: 0 */

// <00F99078> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:477
// function call: 1
void CAnimNodeManager::HasRootNode()
{
	AnimNodeID::IsValid(); // 479
} /* size: 12, inline expansions: 1 (7 bytes) */

// <00F80B4A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:477
void CAnimNodeManager::HasRootNode()
{
} /* size: 0 */

// <00F9DC47> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:483
// function calls: 15
void CAnimNodeManager::GetRootNode()
{
	AnimNodeID::IsValid(); // 479
	CAnimNodeManager::HasRootNode(); // 485
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 487
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 84
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 96
	CSmartPtr<CAnimNodeBase, CRefCountAccessor>::Get(); // 96
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeBase>(CAnimNodeBase* pObj); // 344
	CSmartPtr<CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 96
	CAnimNodeManager::GetNodeByID(
			AnimNodeID nodeID);  // 84
	CAnimNodeManager::GetNode(
		AnimNodeID nodeID);  // 487
} /* size: 205, inline expansions: 15 (275 bytes) */

// <00F80B31> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:483
void CAnimNodeManager::GetRootNode()
{
} /* size: 0 */

// <00F9D8B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:494
// function calls: 15
void CAnimNodeManager::GetRootNode()
{
	AnimNodeID::IsValid(); // 479
	CAnimNodeManager::HasRootNode(); // 496
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 498
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 84
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 96
	CSmartPtr<CAnimNodeBase, CRefCountAccessor>::Get(); // 96
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeBase>(CAnimNodeBase* pObj); // 344
	CSmartPtr<CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 96
	CAnimNodeManager::GetNodeByID(
			AnimNodeID nodeID);  // 84
	CAnimNodeManager::GetNode(
		AnimNodeID nodeID);  // 498
} /* size: 205, inline expansions: 15 (275 bytes) */

// <00F8091F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:505
// variable: 1
// function calls: 7
void CAnimNodeManager::CreateNodeID()
{
	AnimNodeID newID; // 507
	AnimNodeID::AnimNodeID(); // 507
	AnimNodeID::operator=(
			uint32 id);  // 511
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 218
	Mix32HashFunctor::operator(
			uint32 n);  // 68
	DefaultHashFunctor<AnimNodeID>::operator(
			AnimNodeID s);  // 218
	Find(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
		KeyArg_t k);  // 235
	HasElement(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
			KeyArg_t k);  // 513
} /* size: 142, variables: 1, inline expansions: 7 (300 bytes) */

// <00F806EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:519
// variable: 1
// function calls: 8
void CAnimNodeManager::GetBakedNode(AnimNodeID nodeID)
{
	UtlHashHandle_t handle; // 521
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 218
	Mix32HashFunctor::operator(
			uint32 n);  // 68
	DefaultHashFunctor<AnimNodeID>::operator(
			AnimNodeID s);  // 218
	CUtlHashtable<AnimNodeID, CAnimNodeBase::Find(
		KeyArg_t k);  // 521
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase::operator[](
			int i);  // 204
	CUtlHashtableEntry<AnimNodeID, CAnimNodeBase::IsValid(); // 204
	CUtlHashtable<AnimNodeID, CAnimNodeBase::IsValidHandle(
			handle_t idx);  // 522
} /* size: 135, variables: 1, inline expansions: 8 (247 bytes) */

// <00F8036B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodemanager.cpp:531
// function calls: 10
void CAnimNodeManager::AddBakedNode(AnimNodeID nodeID, CAnimNodeBase* pNode)
{
	CUtlMemory<CUtlHashtableEntry<AnimNodeID, CAnimNodeBase::operator[](
			int i);  // 720
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 64
	CUtlKeyValuePair<AnimNodeID, CAnimNodeBase::CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>(
							const AnimNodeID& k,
							CAnimNodeBase* const& v);  // 1514
	Construct<CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>, const AnimNodeID&, CAnimNodeBase*&>(CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>* pMemory); // 720
	CUtlHashtable<AnimNodeID, CAnimNodeBase::DoInsert<const AnimNodeID&>(
					const AnimNodeID& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 714
	CUtlHashtable<AnimNodeID, CAnimNodeBase::DoInsert<const AnimNodeID&>(
					const AnimNodeID& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 249
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 249
	Mix32HashFunctor::operator(
			uint32 n);  // 68
	DefaultHashFunctor<AnimNodeID>::operator(
			AnimNodeID s);  // 249
	CUtlHashtable<AnimNodeID, CAnimNodeBase::Insert(
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 533
} /* size: 201, inline expansions: 10 (427 bytes) */

