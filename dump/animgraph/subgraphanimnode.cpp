
//
// animgraph/subgraphanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 52
//

// <012864F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:13
void ISubGraphAnimNode::GetTypeInfo()
{
} /* size: 0 */

// <0128635E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:13
// function calls: 3
void* ISubGraphAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<ISubGraphAnimNode>::CastTo(
		ISubGraphAnimNode* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (0 bytes) */

// <012861CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:13
// function calls: 3
const void* ISubGraphAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<ISubGraphAnimNode>::CastTo(
		const ISubGraphAnimNode* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0129F45B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:15
void MyTypeInfo(void)
{
} /* size: 0 */

// <0129C19C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:15
void CSubGraphAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <01285FB3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:15
// function calls: 3
void* CSubGraphAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CSubGraphAnimNode>::CastTo(
		CSubGraphAnimNode* derived,
		ClassID baseTypeInfo);  // 15
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01285E1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:15
// function calls: 3
const void* CSubGraphAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CSubGraphAnimNode>::CastTo(
		const CSubGraphAnimNode* derived,
		ClassID baseTypeInfo);  // 15
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01285A88> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:24
// function calls: 13
void CSubGraphAnimNode::CSubGraphAnimNode()
{
	ISubGraphAnimNode::ISubGraphAnimNode(); // 28
	AnimNodeID::AnimNodeID(); // 28
	AnimNodeID::AnimNodeID(); // 28
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u this); // 178
	CUtlHashtable(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u this,
			int minimumSize);  // 28
	CUtlString::CUtlString(); // 28
	CUtlString::CUtlString(); // 28
	CSmartPtr<CSubGraph, CRefCountAccessor>::operator=(
			CSubGraph* pObj);  // 319
	CSmartPtr<CSubGraph, CRefCountAccessor>::CSmartPtr(
			CSubGraph* pObj);  // 26
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator=(
			CAnimNodeManager* pObj);  // 319
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::CSmartPtr(
			CAnimNodeManager* pObj);  // 27
} /* size: 137, inline expansions: 13 (64 bytes) */

// <01285A6F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:24
void CSubGraphAnimNode::CSubGraphAnimNode()
{
} /* size: 0 */

// <01285996> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:34
// variable: 1
// function calls: 2
void CSubGraphAnimNode::GetChildCount()
{
	{
		IAnimNode* pNode; // 39
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 39
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator!(); // 36
} /* size: 120, inline expansions: 1 (7 bytes) */

// <012858BD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:48
// function call: 1
void CSubGraphAnimNode::GetChild(int index)
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 50
} /* size: 137, inline expansions: 1 (10 bytes) */

// <01285545> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:54
// variables: 3
// function calls: 12
void CSubGraphAnimNode::GetChildID(int index)
{
	{
		IAnimNode* pNode; // 59
		{
			AnimOutputID key; // 61
			{
				const CNodeConnection* pValue; // 65
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
						KeyArg_t k);  // 65
				AnimNodeID::AnimNodeID(
						const AnimNodeID& rhs);  // 67
			}
			AnimOutputID::IsValid(); // 62
		}
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 59
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator!(); // 56
	AnimNodeID::AnimNodeID(); // 71
} /* size: 258, inline expansions: 2 (15 bytes) */

// <012851CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:75
// variables: 3
// function calls: 12
void CSubGraphAnimNode::GetChildOutputID(int index)
{
	{
		IAnimNode* pNode; // 80
		{
			AnimOutputID key; // 82
			{
				const CNodeConnection* pValue; // 86
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
						KeyArg_t k);  // 86
				AnimOutputID::AnimOutputID(
						const AnimOutputID& rhs);  // 88
			}
			AnimOutputID::IsValid(); // 83
		}
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 80
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator!(); // 77
	AnimOutputID::AnimOutputID(); // 92
} /* size: 258, inline expansions: 2 (15 bytes) */

// <012850ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:96
// function call: 1
void CSubGraphAnimNode::SetChildID(int index, AnimNodeID nodeID)
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 98
} /* size: 162, inline expansions: 1 (15 bytes) */

// <01284E42> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:102
// variables: 3
// function calls: 5
void CSubGraphAnimNode::GetChildName(int index)
{
	const CUtlString  sDefaultString; // 117
	{
		IAnimNode* pNode; // 106
		{
			const CUtlString& name; // 108
			CUtlString::IsEmpty(); // 110
			operator!=(const CUtlString& utlString,
					const char* pString);  // 110
		}
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 106
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 104
	CUtlString::CUtlString(
			const char* pString);  // 117
} /* size: 251, variables: 1, inline expansions: 2 (37 bytes) */

// <01284D69> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:122
// variable: 1
// function calls: 2
void CSubGraphAnimNode::GetParentCount()
{
	{
		IAnimNode* pNode; // 127
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 127
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator!(); // 124
} /* size: 120, inline expansions: 1 (7 bytes) */

// <01284ABE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:136
// variables: 3
// function calls: 5
void CSubGraphAnimNode::GetParentName(int index)
{
	const CUtlString  sDefaultString; // 151
	{
		IAnimNode* pNode; // 140
		{
			const CUtlString& name; // 142
			CUtlString::IsEmpty(); // 144
			operator!=(const CUtlString& utlString,
					const char* pString);  // 144
		}
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 140
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 138
	CUtlString::CUtlString(
			const char* pString);  // 151
} /* size: 251, variables: 1, inline expansions: 2 (37 bytes) */

// <01284480> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:156
// variable: 1
// function calls: 21
void CSubGraphAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
	{
		IAnimNode* pNode; // 161
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 161
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
				ValueArg_t v);  // 163
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator!(); // 158
} /* size: 309, inline expansions: 1 (7 bytes) */

// <01284343> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:168
// variable: 1
// function calls: 3
void CSubGraphAnimNode::GetOutputID(int index)
{
	{
		IAnimNode* pNode; // 173
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 173
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator!(); // 170
	AnimOutputID::AnimOutputID(); // 178
} /* size: 123, inline expansions: 2 (13 bytes) */

// <012841DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:182
// variable: 1
// function calls: 4
void CSubGraphAnimNode::GetOutputNodeID(AnimOutputID outputID)
{
	{
		IAnimNode* pNode; // 187
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 187
		AnimOutputID::AnimOutputID(
				const AnimOutputID& rhs);  // 189
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator!(); // 184
	AnimNodeID::AnimNodeID(); // 192
} /* size: 150, inline expansions: 2 (13 bytes) */

// <01283187> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:196
// variables: 5
// function calls: 70
void CSubGraphAnimNode::GetOutputNodeLocation(AnimOutputID outputID, const AnimNodePath& nodePath)
{
	const char   __FUNCTION__; // 10096
	{
		IAnimNode* pNode; // 201
		{
			AnimNodePath newNodePath; // 203
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
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::SetCount(
				int count);  // 573
			CUtlMemory<AnimNodeID, int>::Base(); // 112
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 102
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::begin(); // 574
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Count(); // 105
			CUtlMemory<AnimNodeID, int>::Base(); // 113
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Base(); // 105
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
					const CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >& src);  // 203
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
					AnimNodeID& src);  // 204
			AnimOutputID::AnimOutputID(
					const AnimOutputID& rhs);  // 206
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::RemoveAll(); // 1798
			CUtlMemory<AnimNodeID, int>::IsExternallyAllocated(); // 905
			CUtlMemory<AnimNodeID, int>::Purge(); // 903
			CUtlMemory<AnimNodeID, int>::Purge(); // 1799
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
			ValidateAlignment<AnimNodeID>(void); // 508
			CUtlMemory<AnimNodeID, int>::Purge(); // 510
			CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
			CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
			CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 207
		}
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 201
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator!(); // 198
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
	AnimNodeLocation_t::AnimNodeLocation_t(); // 199
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
	AnimNodeLocation_t::AnimNodeLocation_t(); // 211
} /* size: 0, variables: 1, inline expansions: 15 (63 bytes) */

// <01283059> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:215
// variable: 1
// function calls: 3
void CSubGraphAnimNode::GetOutputIndex(AnimOutputID outputID)
{
	{
		IAnimNode* pNode; // 220
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 220
		AnimOutputID::AnimOutputID(
				const AnimOutputID& rhs);  // 222
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator!(); // 217
} /* size: 140, inline expansions: 1 (7 bytes) */

// <01283033> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:229
// variable: 1
void CSubGraphAnimNode::GetOutputCount()
{
	{
		IAnimNode* pNode; // 234
	}
} /* size: 0 */

// <01283005> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:243
void CSubGraphAnimNode::HasOutputs()
{
} /* size: 10 */

// <01282C0B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:249
// variables: 2
// function calls: 11
void CSubGraphAnimNode::GetUIName()
{
	CUtlString sName; // 251
	{
		const CUtlString  sDefaultString; // 260
		CUtlString::IsEmpty(); // 255
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 261
		CUtlString::CUtlString(
				const char* pString);  // 260
	}
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 251
	CUtlString::IsEmpty(); // 253
	operator==(const CUtlString& utlString,
			const char* pString);  // 253
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 265
	CUtlString::~CUtlString(); // 267
} /* size: 402, variables: 1, inline expansions: 7 (144 bytes) */

// <01282B6E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:270
// variables: 2
void CSubGraphAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	const char   __FUNCTION__; // 9976
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 272
	}
} /* size: 38, variables: 1 */

// <0129F7AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:277
// variables: 3
// function calls: 14
void CSubGraphAnimNode::SetContext(const CAnimGraphContextPtr& context)
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator==(
			const CAnimGraphContext* pOther);  // 279
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 291
	{
		CAnimationSubGraph* pSubGraph; // 293
		CSmartPtr<CSubGraph, CRefCountAccessor>::operator->(); // 293
		CSubGraph::GetSubGraph(); // 293
		{
			int i; // 295
			{
				CSubGraphAnimNode* subGraphNode; // 297
				CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 297
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
				CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 299
			}
			CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 295
		}
	}
	CSubGraphAnimNode::SetContext(
			const CAnimGraphContextPtr& context);  // 277
} /* size: 354, inline expansions: 3 (191 bytes) */

// <01282B1D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:277
// variables: 3
void CSubGraphAnimNode::SetContext(const CAnimGraphContextPtr& context)
{
	{
		CAnimationSubGraph* pSubGraph; // 293
		{
			int i; // 295
			{
				CSubGraphAnimNode* subGraphNode; // 297
			}
		}
	}
} /* size: 0 */

// <0129C1C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:306
// function call: 1
void CSubGraphAnimNode::GetNodeManager()
{
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::Get(); // 308
} /* size: 23, inline expansions: 1 (7 bytes) */

// <01282B04> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:306
void CSubGraphAnimNode::GetNodeManager()
{
} /* size: 0 */

// <0129C221> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:312
// function call: 1
void CSubGraphAnimNode::SetInputNodeID(AnimNodeID nodeID)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 314
} /* size: 10, inline expansions: 1 (5 bytes) */

// <01282ADE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:312
void CSubGraphAnimNode::SetInputNodeID(AnimNodeID nodeID)
{
} /* size: 0 */

// <0129C291> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:318
// function call: 1
void CSubGraphAnimNode::SetOutputNodeID(AnimNodeID nodeID)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 320
} /* size: 10, inline expansions: 1 (5 bytes) */

// <01282AB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:318
void CSubGraphAnimNode::SetOutputNodeID(AnimNodeID nodeID)
{
} /* size: 0 */

// <0129C301> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:324
// function call: 1
void CSubGraphAnimNode::GetInputNodeID()
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 326
} /* size: 13, inline expansions: 1 (5 bytes) */

// <01282A9F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:324
void CSubGraphAnimNode::GetInputNodeID()
{
} /* size: 0 */

// <0129C35D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:330
// function call: 1
void CSubGraphAnimNode::GetOutputNodeID()
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 332
} /* size: 13, inline expansions: 1 (5 bytes) */

// <01282A86> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:330
void CSubGraphAnimNode::GetOutputNodeID()
{
} /* size: 0 */

// <01282A10> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:336
void CSubGraphAnimNode::TransferPostSaveFn(CKV3TransferSaveContext* pContext)
{
} /* size: 23 */

// <0128297A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:342
void CSubGraphAnimNode::TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
} /* size: 54 */

// <0128290E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:350
// function call: 1
void CSubGraphAnimNode::ShowVisualizer()
{
	CSmartPtr<CSubGraph, CRefCountAccessor>::operator!=(
			const CSubGraph* pOther);  // 352
} /* size: 16, inline expansions: 1 (11 bytes) */

// <01281C57> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:356
// variables: 7
// function calls: 51
void CSubGraphAnimNode::CreateNewSubGraph(const char* pFilePath)
{
	const char   __FUNCTION__; // 10003
	CUtlString filePath; // 360
	IAnimationSubGraph* pSubGraph; // 370
	CUtlString errorString; // 373
	CUtlString fileName; // 379
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
	{
		CAnimationSubGraph* pNewSubGraph; // 390
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 384
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CSubGraph>(CSubGraph* pObj); // 496
		CSmartPtr<CSubGraph, CRefCountAccessor>::Reset(
			ESmartPtrNoAddRef,
			CSubGraph* pObj);  // 419
		CSmartPtr<CSubGraph, CRefCountAccessor>::operator=(
				CSmartPtr<CSubGraph, CRefCountAccessor>& other);  // 385
		CSmartPtr<CSubGraph, CRefCountAccessor>::~CSmartPtr(); // 385
		CSubGraph::GetSubGraph(); // 386
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
				CAnimNodeManager* pObj);  // 386
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 387
		CSmartPtr<CSubGraph, CRefCountAccessor>::operator->(); // 390
		CSubGraph::GetSubGraph(); // 390
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 391
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
		CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 391
		CSmartPtr<CSubGraph, CRefCountAccessor>::operator bool(); // 393
		CSubGraph::GetSubGraph(); // 395
	}
	CSmartPtr<CSubGraph, CRefCountAccessor>::operator!(); // 358
	CUtlString::CUtlString(
			const char* pString);  // 360
	CUtlString::CUtlString(); // 373
	CUtlString::CUtlString(); // 379
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 380
	CUtlString::~CUtlString(); // 400
	CUtlString::~CUtlString(); // 400
	CUtlString::~CUtlString(); // 400
} /* size: 0, variables: 5, inline expansions: 9 (117 bytes) */

// <0129D55D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:403
// function calls: 2
void CSubGraphAnimNode::GetSubGraph()
{
	CSmartPtr<CSubGraph, CRefCountAccessor>::operator bool(); // 405
	CSubGraph::GetSubGraph(); // 407
} /* size: 61, inline expansions: 2 (20 bytes) */

// <01281C3E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:403
void CSubGraphAnimNode::GetSubGraph()
{
} /* size: 0 */

// <0129FBFB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:414
// variables: 3
// function calls: 13
void CSubGraphAnimNode::OnSubGraphFilenameChanged()
{
	CAnimGraphContextPtr pContext; // 423
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 418
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 434
	{
		int i; // 436
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 436
		{
			CSubGraphAnimNode* subGraphNode; // 438
			CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 438
		}
	}
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 444
	CSubGraphAnimNode::OnSubGraphFilenameChanged(); // 414
} /* size: 294, variables: 1, inline expansions: 11 (342 bytes) */

// <01281BFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:414
// variables: 3
void CSubGraphAnimNode::OnSubGraphFilenameChanged()
{
	CAnimGraphContextPtr pContext; // 423
	{
		int i; // 436
		{
			CSubGraphAnimNode* subGraphNode; // 438
		}
	}
} /* size: 0, variables: 1 */

// <012814E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:447
// variables: 4
// function calls: 27
void CSubGraphAnimNode::ReleaseSubGraph()
{
	{
		IAsset* pAsset; // 451
		CUtlString filePath; // 452
		{
			int i; // 458
			{
				CSubGraphAnimNode* subGraphNode; // 460
				CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 460
			}
			CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 458
		}
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 451
		CUtlTypesafeInt<ModSearchIndex_t_id::CUtlTypesafeInt(
				int nVal);  // 452
		CUtlString::CUtlString(
				const char* pString);  // 452
		CUtlString::~CUtlString(); // 466
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 449
	CUtlString::Clear(); // 468
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CSubGraph>(CSubGraph* pObj); // 370
	CSmartPtr<CSubGraph, CRefCountAccessor>::operator=(
			CSubGraph* pObj);  // 488
	CSmartPtr<CSubGraph, CRefCountAccessor>::Reset(); // 469
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeManager>(CAnimNodeManager* pObj); // 370
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator=(
			CAnimNodeManager* pObj);  // 470
	AnimNodeID::AnimNodeID(); // 471
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 471
	AnimNodeID::AnimNodeID(); // 472
} /* size: 389, inline expansions: 20 (253 bytes) */

// <01280F00> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:477
// function calls: 25
void CSubGraphAnimNode::CheckForCircularDependencies()
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 479
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 479
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeManager>(CAnimNodeManager* pObj); // 370
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator=(
			CAnimNodeManager* pObj);  // 481
	CUtlString::Clear(); // 485
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			CAnimGraphContext* pObj);  // 319
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(
			CAnimGraphContext* pObj);  // 487
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 487
} /* size: 266, inline expansions: 25 (383 bytes) */

// <01280D50> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:496
// variables: 2
// function calls: 5
void CSubGraphAnimNode::CheckForCircularDependencies(IAnimNodeManager* pNodeManager)
{
	{
		int i; // 500
		{
			CSubGraphAnimNode* subGraphNode; // 502
			CSmartPtr<CAnimNodeManager, CRefCountAccessor>::Get(); // 308
			CSubGraphAnimNode::GetNodeManager(); // 504
			CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 502
		}
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 500
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator bool(); // 498
} /* size: 207, inline expansions: 1 (7 bytes) */

// <0127FD50> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:515
// variables: 9
// function calls: 64
void CSubGraphAnimNode::LoadSubGraph()
{
	CPathBufferString fullpath; // 527
	const char   __FUNCTION__; // 9873
	CAnimationSubGraph* pSubGraph; // 552
	{
		CPathBufferString gamePaths; // 530
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 530
		IFileSystem::GetSearchPath(
				const char* pathID,
				CBufferString* pPath,
				int nMaxElements);  // 531
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 533
		CUtlString::Get(); // 533
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 536
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 544
	}
	{
		int i; // 560
		{
			IAnimNode* pNode; // 562
			{
				CGroupInputAnimNode* groupInputNode; // 564
				AnimNodeID::operator=(
						const AnimNodeID& rhs);  // 566
			}
			{
				CGroupOutputAnimNode* groupOutputNode; // 569
				AnimNodeID::operator=(
						const AnimNodeID& rhs);  // 571
			}
			CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 562
		}
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 560
	}
	CUtlString::IsEmpty(); // 517
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 522
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 527
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 528
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CSubGraph>(CSubGraph* pObj); // 496
	CSmartPtr<CSubGraph, CRefCountAccessor>::Reset(
		ESmartPtrNoAddRef,
		CSubGraph* pObj);  // 419
	CSmartPtr<CSubGraph, CRefCountAccessor>::operator=(
			CSmartPtr<CSubGraph, CRefCountAccessor>& other);  // 540
	CUtlString::~CUtlString(); // 540
	CSmartPtr<CSubGraph, CRefCountAccessor>::~CSmartPtr(); // 540
	CSmartPtr<CSubGraph, CRefCountAccessor>::operator!(); // 542
	CSubGraph::GetSubGraph(); // 549
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
			CAnimNodeManager* pObj);  // 549
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 550
	CSmartPtr<CSubGraph, CRefCountAccessor>::operator->(); // 552
	CSubGraph::GetSubGraph(); // 552
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 555
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator!(); // 555
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 574
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 557
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 557
} /* size: 0, variables: 3, inline expansions: 50 (784 bytes) */

// <0127FCF0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:577
// variable: 1
void OnSubGraphFilenameChanged(void* pThis)
{
	CSubGraphAnimNode* pThisPtr; // 579
} /* size: 20, variables: 1 */

// <0127F22B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subgraphanimnode.cpp:587
// variables: 4
// function calls: 45
void CSubGraphAnimNode::Bake()
{
	CUtlBuffer buffer; // 595
	CAnimGraphContextPtr context; // 599
	{
		int i; // 605
		{
			CSubGraphAnimNode* subGraphNode; // 607
			CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 607
		}
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 605
	}
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator!(); // 592
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 596
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
			CAnimNodeManager* pObj);  // 598
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::Get(); // 599
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
			CAnimGraphContext* pObj);  // 599
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 600
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 601
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 344
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::~CSmartPtr(); // 612
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 612
} /* size: 466, variables: 2, inline expansions: 43 (501 bytes) */

