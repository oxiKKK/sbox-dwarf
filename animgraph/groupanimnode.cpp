
//
// animgraph/groupanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 39
//

// <0118E84E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:12
void IGroupAnimNode::GetTypeInfo()
{
} /* size: 0 */

// <0118E6BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:12
// function calls: 3
void* IGroupAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IGroupAnimNode>::CastTo(
		IGroupAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0118E528> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:12
// function calls: 3
const void* IGroupAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IGroupAnimNode>::CastTo(
		const IGroupAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (0 bytes) */

// <011980FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:14
void MyTypeInfo(void)
{
} /* size: 0 */

// <01192C78> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:14
void CGroupAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0118E311> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:14
// function calls: 3
void* CGroupAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CGroupAnimNode>::CastTo(
		CGroupAnimNode* derived,
		ClassID baseTypeInfo);  // 14
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0118E17E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:14
// function calls: 3
const void* CGroupAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CGroupAnimNode>::CastTo(
		const CGroupAnimNode* derived,
		ClassID baseTypeInfo);  // 14
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0118D922> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:23
// function calls: 34
void CGroupAnimNode::CGroupAnimNode()
{
	IGroupAnimNode::IGroupAnimNode(); // 24
	AnimNodeID::AnimNodeID(); // 24
	AnimNodeID::AnimNodeID(); // 24
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u this); // 178
	CUtlHashtable(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u this,
			int minimumSize);  // 24
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::CSmartPtr(); // 24
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(); // 24
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
			CAnimNodeManager* pObj);  // 26
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::Get(); // 27
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
			CAnimGraphContext* pObj);  // 27
} /* size: 254, inline expansions: 34 (315 bytes) */

// <0118D909> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:23
void CGroupAnimNode::CGroupAnimNode()
{
} /* size: 0 */

// <0118D7C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:31
// variables: 3
// function calls: 3
void CGroupAnimNode::GetChildCount()
{
	const char   __FUNCTION__; // 43200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 33
	}
	{
		IAnimNode* pNode; // 35
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 35
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 35
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 33
} /* size: 0, variables: 1, inline expansions: 1 (4 bytes) */

// <0118D6E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:44
// function call: 1
void CGroupAnimNode::GetChild(int index)
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 46
} /* size: 137, inline expansions: 1 (10 bytes) */

// <0118D2FE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:50
// variables: 5
// function calls: 13
void CGroupAnimNode::GetChildID(int index)
{
	const char   __FUNCTION__; // 43119
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 52
	}
	{
		IAnimNode* pNode; // 54
		{
			AnimOutputID key; // 56
			{
				const CNodeConnection* pValue; // 60
				AnimOutputID::AnimOutputID(
						const AnimOutputID& rhs);  // 218
				Mix32HashFunctor::operator(
						uint32 n);  // 69
				DefaultHashFunctor<AnimOutputID>::operator(
						AnimOutputID s);  // 218
				Find(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutput this,
					KeyArg_t k);  // 226
				CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::operator[](
						int i);  // 294
				Element(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutput this,
					handle_t idx);  // 226
				FindGetPtr(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutput this,
						KeyArg_t k);  // 60
				AnimNodeID::AnimNodeID(
						const AnimNodeID& rhs);  // 62
			}
			AnimOutputID::IsValid(); // 57
		}
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 54
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 54
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 52
	AnimNodeID::AnimNodeID(); // 66
} /* size: 0, variables: 1, inline expansions: 2 (12 bytes) */

// <0118CF13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:70
// variables: 5
// function calls: 13
void CGroupAnimNode::GetChildOutputID(int index)
{
	const char   __FUNCTION__; // 43281
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 72
	}
	{
		IAnimNode* pNode; // 74
		{
			AnimOutputID key; // 76
			{
				const CNodeConnection* pValue; // 80
				AnimOutputID::AnimOutputID(
						const AnimOutputID& rhs);  // 218
				Mix32HashFunctor::operator(
						uint32 n);  // 69
				DefaultHashFunctor<AnimOutputID>::operator(
						AnimOutputID s);  // 218
				Find(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutput this,
					KeyArg_t k);  // 226
				CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::operator[](
						int i);  // 294
				Element(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutput this,
					handle_t idx);  // 226
				FindGetPtr(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutput this,
						KeyArg_t k);  // 80
				AnimOutputID::AnimOutputID(
						const AnimOutputID& rhs);  // 82
			}
			AnimOutputID::IsValid(); // 77
		}
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 74
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 74
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 72
	AnimOutputID::AnimOutputID(); // 86
} /* size: 0, variables: 1, inline expansions: 2 (12 bytes) */

// <0118CE33> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:90
// function call: 1
void CGroupAnimNode::SetChildID(int index, AnimNodeID nodeID)
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 92
} /* size: 162, inline expansions: 1 (15 bytes) */

// <0118CB3F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:96
// variables: 5
// function calls: 6
void CGroupAnimNode::GetChildName(int index)
{
	const char   __FUNCTION__; // 43173
	const CUtlString  sDefaultString; // 110
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 98
	}
	{
		IAnimNode* pNode; // 100
		{
			const CUtlString& name; // 102
			CUtlString::IsEmpty(); // 104
			operator!=(const CUtlString& utlString,
					const char* pString);  // 104
		}
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 100
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 100
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 98
	CUtlString::CUtlString(
			const char* pString);  // 110
} /* size: 0, variables: 2, inline expansions: 2 (34 bytes) */

// <0118C9F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:115
// variables: 3
// function calls: 3
void CGroupAnimNode::GetParentCount()
{
	const char   __FUNCTION__; // 43227
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 117
	}
	{
		IAnimNode* pNode; // 119
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 119
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 119
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 117
} /* size: 0, variables: 1, inline expansions: 1 (4 bytes) */

// <0118C704> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:128
// variables: 5
// function calls: 6
void CGroupAnimNode::GetParentName(int index)
{
	const char   __FUNCTION__; // 43200
	const CUtlString  sDefaultString; // 142
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 130
	}
	{
		IAnimNode* pNode; // 132
		{
			const CUtlString& name; // 134
			CUtlString::IsEmpty(); // 136
			operator!=(const CUtlString& utlString,
					const char* pString);  // 136
		}
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 132
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 132
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 130
	CUtlString::CUtlString(
			const char* pString);  // 142
} /* size: 0, variables: 2, inline expansions: 2 (34 bytes) */

// <0118C06B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:147
// variables: 3
// function calls: 22
void CGroupAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
	const char   __FUNCTION__; // 43335
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 149
	}
	{
		IAnimNode* pNode; // 151
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 151
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 151
		AnimOutputID::AnimOutputID(
				const AnimOutputID& rhs);  // 249
		Mix32HashFunctor::operator(
				uint32 n);  // 69
		DefaultHashFunctor<AnimOutputID>::operator(
				AnimOutputID s);  // 249
		CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::operator[](
				int i);  // 720
		AnimOutputID::AnimOutputID(
				const AnimOutputID& rhs);  // 64
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 22
		AnimOutputID::AnimOutputID(
				const AnimOutputID& rhs);  // 22
		CNodeConnection::CNodeConnection(
				const CNodeConnection  &);  // 64
		CUtlKeyValuePair<AnimOutputID, CNodeConnection>::CUtlKeyValuePair<AnimOutputID, CNodeConnection>(
								const AnimOutputID& k,
								const CNodeConnection& v);  // 1514
		Construct<CUtlKeyValuePair<AnimOutputID, CNodeConnection>, const AnimOutputID&, const CNodeConnection&>(CUtlKeyValuePair<AnimOutputID, CNodeConnection>* pMemory); // 720
		DoInsert<const AnimOutputID&>(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u this,
						const AnimOutputID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
		DoInsert<const AnimOutputID&>(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u this,
						const AnimOutputID& k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
		Insert(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u this,
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 837
		CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::operator[](
				int i);  // 295
		Element(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u this,
			handle_t idx);  // 840
		AnimNodeID::operator=(
				const AnimNodeID& rhs);  // 22
		AnimOutputID::operator=(
				const AnimOutputID& rhs);  // 22
		CNodeConnection::operator=(
				const CNodeConnection  &);  // 840
		InsertOrReplace(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u this,
				KeyArg_t k,
				ValueArg_t v);  // 153
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 149
} /* size: 0, variables: 1, inline expansions: 1 (4 bytes) */

// <0118BEBF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:158
// variables: 3
// function calls: 4
void CGroupAnimNode::GetOutputID(int index)
{
	const char   __FUNCTION__; // 43146
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 160
	}
	{
		IAnimNode* pNode; // 162
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 162
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 162
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 160
	AnimOutputID::AnimOutputID(); // 167
} /* size: 0, variables: 1, inline expansions: 2 (12 bytes) */

// <0118BCE8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:171
// variables: 3
// function calls: 5
void CGroupAnimNode::GetOutputNodeID(AnimOutputID outputID)
{
	const char   __FUNCTION__; // 43254
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
	{
		IAnimNode* pNode; // 175
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 175
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 175
		AnimOutputID::AnimOutputID(
				const AnimOutputID& rhs);  // 177
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 173
	AnimNodeID::AnimNodeID(); // 180
} /* size: 0, variables: 1, inline expansions: 2 (12 bytes) */

// <0118AD8E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:184
// variables: 6
// function calls: 64
void CGroupAnimNode::GetOutputNodeLocation(AnimOutputID outputID, const AnimNodePath& nodePath)
{
	const char   __FUNCTION__; // 43406
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 186
	}
	{
		IAnimNode* pNode; // 188
		{
			AnimNodePath outputNodePath; // 190
			CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
			CUtlMemory<AnimNodeID, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 434
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 573
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlMemory<AnimNodeID, int>::Base(); // 112
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 368
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::GrowVector(
					int num);  // 1445
			{
				int i; // 1451
				CUtlMemory<AnimNodeID, int>::operator[](
						int i);  // 602
				CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Element(
					int i);  // 1453
				AnimNodeID::AnimNodeID(); // 1479
				Construct<AnimNodeID>(AnimNodeID* pMemory); // 1453
			}
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::SetCount(
				int count);  // 573
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
					const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 190
			CUtlMemory<AnimNodeID, int>::NumAllocated(); // 1247
			CUtlMemory<AnimNodeID, int>::operator[](
					int i);  // 602
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Element(
				int i);  // 1252
			AnimNodeID::AnimNodeID(
					const AnimNodeID& rhs);  // 1514
			Construct<AnimNodeID, AnimNodeID>(AnimNodeID* pMemory); // 1252
			CUtlMemory<AnimNodeID, int>::Base(); // 112
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 368
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::AddToTail(
					AnimNodeID& src);  // 191
			AnimOutputID::AnimOutputID(
					const AnimOutputID& rhs);  // 193
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveAll(); // 1798
			CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 905
			CUtlMemory<AnimNodeID, int>::Purge(); // 903
			CUtlMemory<AnimNodeID, int>::Purge(); // 1799
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
			ValidateAlignment<AnimNodeID>(void); // 508
			CUtlMemory<AnimNodeID, int>::Purge(); // 510
			CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
			CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 194
		}
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 188
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 188
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 186
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
	AnimNodeLocation_t::AnimNodeLocation_t(); // 198
} /* size: 0, variables: 1, inline expansions: 8 (34 bytes) */

// <0118ABFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:202
// variables: 3
// function calls: 4
void CGroupAnimNode::GetOutputIndex(AnimOutputID outputID)
{
	const char   __FUNCTION__; // 43227
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 204
	}
	{
		IAnimNode* pNode; // 206
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 206
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 206
		AnimOutputID::AnimOutputID(
				const AnimOutputID& rhs);  // 208
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 204
} /* size: 0, variables: 1, inline expansions: 1 (4 bytes) */

// <0118AAB6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:215
// variables: 3
// function calls: 3
void CGroupAnimNode::GetOutputCount()
{
	const char   __FUNCTION__; // 43227
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 217
	}
	{
		IAnimNode* pNode; // 219
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 219
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 219
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 217
} /* size: 0, variables: 1, inline expansions: 1 (4 bytes) */

// <0118AA88> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:228
void CGroupAnimNode::HasOutputs()
{
} /* size: 10 */

// <0118A9EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:234
// variables: 2
void CGroupAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	const char   __FUNCTION__; // 43281
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 236
	}
} /* size: 38, variables: 1 */

// <0118A5F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:241
// function calls: 13
void CGroupAnimNode::TransferPostSaveFn(CKV3TransferSaveContext* pContext)
{
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<14>(
				const char& str);  // 245
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::Get(); // 717
	SaveValue<CSmartPtr<CAnimNodeManager> >(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const CSmartPtr<CAnimNodeManager, CRefCountAccessor>& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CSmartPtr<CAnimNodeManager> >(
							const CSmartPtr<CAnimNodeManager, CRefCountAccessor>& sourceValue,
							KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CSmartPtr<CAnimNodeManager> >(
							CKV3MemberName memberNameAndHash,
							const CSmartPtr<CAnimNodeManager, CRefCountAccessor>& sourceValue);  // 245
} /* size: 234, inline expansions: 13 (395 bytes) */

// <01189C6E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:249
// variable: 1
// function calls: 37
void CGroupAnimNode::TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<14>(
				const char& str);  // 253
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
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
			CAnimNodeManager* pObj);  // 725
	LoadValue<CSmartPtr<CAnimNodeManager> >(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						CSmartPtr<CAnimNodeManager, CRefCountAccessor>& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CSmartPtr<CAnimNodeManager> >(
							CSmartPtr<CAnimNodeManager, CRefCountAccessor>& destValue,
							const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
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
				CAnimNodeManager* pObj);  // 725
		LoadValue<CSmartPtr<CAnimNodeManager> >(CKV3TransferLoadContext* pContext,
							const KeyValues3* pLoadFromValue,
							CSmartPtr<CAnimNodeManager, CRefCountAccessor>& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<CSmartPtr<CAnimNodeManager> >(
								CSmartPtr<CAnimNodeManager, CRefCountAccessor>& destValue,
								const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<CSmartPtr<CAnimNodeManager> >(
								CKV3MemberName memberNameAndHash,
								CSmartPtr<CAnimNodeManager, CRefCountAccessor>& destValue,
								uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<CSmartPtr<CAnimNodeManager> >(
								CKV3MemberName memberNameAndHash,
								CSmartPtr<CAnimNodeManager, CRefCountAccessor>& destValue,
								uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<CSmartPtr<CAnimNodeManager> >(
								CKV3MemberName memberNameAndHash,
								CSmartPtr<CAnimNodeManager, CRefCountAccessor>& destValue);  // 253
} /* size: 324, inline expansions: 23 (871 bytes) */

// <011895D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:257
// variables: 4
// function calls: 21
void CGroupAnimNode::SetContext(const CAnimGraphContextPtr& context)
{
	{
		int i; // 271
		{
			IAnimNode* pNode; // 273
			{
				CGroupInputAnimNode* groupInputNode; // 275
				MyTypeID(void); // 170
				reflection_cast<CGroupInputAnimNode, IAnimNode*>(IAnimNode* obj); // 275
				AnimNodeID::operator=(
						const AnimNodeID& rhs);  // 277
			}
			{
				CGroupOutputAnimNode* groupOutputNode; // 280
				MyTypeID(void); // 170
				reflection_cast<CGroupOutputAnimNode, IAnimNode*>(IAnimNode* obj); // 280
				AnimNodeID::operator=(
						const AnimNodeID& rhs);  // 282
			}
			CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 273
		}
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 271
	}
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator==(
			const CAnimGraphContext* pOther);  // 261
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 268
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 269
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 263
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			CAnimGraphContext* pObj);  // 319
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(
			CAnimGraphContext* pObj);  // 263
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 263
} /* size: 587, inline expansions: 13 (100 bytes) */

// <01192CA1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:288
// function call: 1
void CGroupAnimNode::GetNodeManager()
{
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::Get(); // 290
} /* size: 20, inline expansions: 1 (4 bytes) */

// <011895B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:288
void CGroupAnimNode::GetNodeManager()
{
} /* size: 0 */

// <01192CFB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:294
// function call: 1
void CGroupAnimNode::SetInputNodeID(AnimNodeID nodeID)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 296
} /* size: 10, inline expansions: 1 (5 bytes) */

// <01189593> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:294
void CGroupAnimNode::SetInputNodeID(AnimNodeID nodeID)
{
} /* size: 0 */

// <01192D6A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:300
// function call: 1
void CGroupAnimNode::SetOutputNodeID(AnimNodeID nodeID)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 302
} /* size: 10, inline expansions: 1 (5 bytes) */

// <0118956D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:300
void CGroupAnimNode::SetOutputNodeID(AnimNodeID nodeID)
{
} /* size: 0 */

// <01192DD9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:306
// function call: 1
void CGroupAnimNode::GetInputNodeID()
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 308
} /* size: 13, inline expansions: 1 (5 bytes) */

// <01189554> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:306
void CGroupAnimNode::GetInputNodeID()
{
} /* size: 0 */

// <01192E34> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:312
// function call: 1
void CGroupAnimNode::GetOutputNodeID()
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 314
} /* size: 13, inline expansions: 1 (5 bytes) */

// <0118953B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:312
void CGroupAnimNode::GetOutputNodeID()
{
} /* size: 0 */

// <01189241> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groupanimnode.cpp:318
// variables: 2
// function calls: 8
void CGroupAnimNode::AddProxyItems()
{
	{
		CGroupInputAnimNode* groupInputNode; // 320
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 320
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 320
		MyTypeID(void); // 170
		reflection_cast<CGroupInputAnimNode, IAnimNode*>(IAnimNode* obj); // 320
	}
	{
		CGroupOutputAnimNode* groupOutputNode; // 325
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 325
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 325
		MyTypeID(void); // 170
		reflection_cast<CGroupOutputAnimNode, IAnimNode*>(IAnimNode* obj); // 325
	}
} /* size: 413 */

