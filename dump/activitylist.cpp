
//
// activitylist.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 13
//	struct: 1
//

// <00B292B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:19
// member variables: 3
// struct size: 8
struct activitylist_t {
	Activity activityIndex; /* 0 4 */
	short unsigned int stringKey; /* 4 2 */
	short int isPrivate; /* 6 2 */
};

// <00D21078> _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:42
// variables: 2
// function calls: 12
activitylist_t* ActivityList_AddActivityEntry(const char* pName, Activity iActivityIndex, bool isPrivate)
{
	int index; // 44
	activitylist_t* pList; // 45
	CUtlMemory<activitylist_t, int>::NumAllocated(); // 1143
	CUtlMemory<activitylist_t, int>::Base(); // 112
	CUtlVectorBase<activitylist_t, CUtlMemory<activitylist_t, int> >::Base(); // 368
	CUtlVectorBase<activitylist_t, CUtlMemory<activitylist_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<activitylist_t, int>::IsGrowable(); // 823
	CUtlMemory<activitylist_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<activitylist_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<activitylist_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<activitylist_t, CUtlMemory<activitylist_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<activitylist_t, CUtlMemory<activitylist_t, int> >::AddToTail(); // 44
	CUtlMemory<activitylist_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<activitylist_t, CUtlMemory<activitylist_t, int> >::operator[](
			int i);  // 45
} /* size: 430, variables: 2, inline expansions: 12 (984 bytes) */

// <00D2104D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:61
// variable: 1
activitylist_t* ActivityListFromString(const char* pString)
{
	int stringID; // 64
} /* size: 0, variables: 1 */

// <00D21021> _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:72
// variable: 1
activitylist_t* ActivityListFromActivity(Activity activityIndex)
{
	{
		int i; // 75
	}
} /* size: 0 */

// <00D20B13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:86
// variables: 7
// function calls: 13
void CAnimationSystem::ActivityList_RegisterSharedActivity(const char* pszActivityName, Activity iActivityIndex)
{
	const char   __FUNCTION__; // 22580
	activitylist_t* pList; // 102
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
	{
		const char* pExistingActivityName; // 110
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 115
		}
		V_strcmp(const char* s1,
			const char* s2);  // 112
	}
	{
		int i; // 75
		CUtlVectorBase<activitylist_t, CUtlMemory<activitylist_t, int> >::Count(); // 75
		CUtlMemory<activitylist_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<activitylist_t, CUtlMemory<activitylist_t, int> >::operator[](
				int i);  // 77
	}
	ActivityListFromActivity(Activity activityIndex); // 183
	CAnimationSystem::ActivityList_NameForIndex(
					Activity activityIndex);  // 95
	CUtlMemory<activitylist_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<activitylist_t, CUtlMemory<activitylist_t, int> >::operator[](
			int i);  // 68
	ActivityListFromString(const char* pString); // 102
	{
		int i; // 75
		CUtlVectorBase<activitylist_t, CUtlMemory<activitylist_t, int> >::Count(); // 75
		CUtlMemory<activitylist_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<activitylist_t, CUtlMemory<activitylist_t, int> >::operator[](
				int i);  // 77
	}
	ActivityListFromActivity(Activity activityIndex); // 105
} /* size: 0, variables: 2, inline expansions: 6 (231 bytes) */

// <00D30F35> _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:131
// variable: 1
// function calls: 4
void CAnimationSystem::ActivityList_RegisterPrivateActivity(const char* pszActivityName)
{
	activitylist_t* pList; // 133
	CUtlMemory<activitylist_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<activitylist_t, CUtlMemory<activitylist_t, int> >::operator[](
			int i);  // 68
	ActivityListFromString(const char* pString); // 133
	{
	}
	CAnimationSystem::ActivityList_RegisterPrivateActivity(
						const char* pszActivityName);  // 131
} /* size: 155, variables: 1, inline expansions: 4 (102 bytes) */

// <00D20AA4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:131
// variables: 3
void CAnimationSystem::ActivityList_RegisterPrivateActivity(const char* pszActivityName)
{
	activitylist_t* pList; // 133
	const char   __FUNCTION__; // 22607
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 146
	}
} /* size: 0, variables: 2 */

// <00D2B931> _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:165
// variable: 1
// function calls: 3
void CAnimationSystem::ActivityList_IndexForName(const char* pszActivityName)
{
	activitylist_t* pList; // 168
	CUtlMemory<activitylist_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<activitylist_t, CUtlMemory<activitylist_t, int> >::operator[](
			int i);  // 68
	ActivityListFromString(const char* pString); // 168
} /* size: 55, variables: 1, inline expansions: 3 (55 bytes) */

// <00D20A73> _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:165
// variable: 1
void CAnimationSystem::ActivityList_IndexForName(const char* pszActivityName)
{
	activitylist_t* pList; // 168
} /* size: 0, variables: 1 */

// <00D2A90A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:181
// variables: 2
// function calls: 4
void CAnimationSystem::ActivityList_NameForIndex(Activity activityIndex)
{
	activitylist_t* pList; // 183
	{
		int i; // 75
		CUtlVectorBase<activitylist_t, CUtlMemory<activitylist_t, int> >::Count(); // 75
		CUtlMemory<activitylist_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<activitylist_t, CUtlMemory<activitylist_t, int> >::operator[](
				int i);  // 77
	}
	ActivityListFromActivity(Activity activityIndex); // 183
} /* size: 67, variables: 1, inline expansions: 1 (41 bytes) */

// <00D20A42> _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:181
// variable: 1
void CAnimationSystem::ActivityList_NameForIndex(Activity activityIndex)
{
	activitylist_t* pList; // 183
} /* size: 0, variables: 1 */

// <00D3A92A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:192
// variables: 17
// function calls: 113
void CAnimationSystem::ActivityList_LoadActivityRemapFile(const char* filename, const char* section, CUtlVector<CActivityRemap, CUtlMemory<CActivityRemap, int> >& entries)
{
	int iIndex; // 194
	KeyValues* pkvFile; // 203
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 611
	CUtlRBTree<CUtlMap<char const::LeftChild(
			int i);  // 1913
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 545
	CUtlRBTree<CUtlMap<char const::Element(
		int i);  // 1912
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CKeyLess::operator(
			const Node_t& left,
			const KeyType_t& right);  // 1914
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 617
	CUtlRBTree<CUtlMap<char const::RightChild(
			int i);  // 1915
	CUtlRBTree<CUtlMap<char const::FindAltKeyType<char const*, CUtlMap<char const*, CActivityRemapCache, int, bool (
																const char* const& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<char const::FindAltKeyType<char const*>(
					const char* const& search);  // 243
	CUtlMap<char const::Find(
		const KeyType_t& key);  // 360
	CUtlDict<CActivityRemapCache, int>::Find(
		const char* pName);  // 194
	{
		KeyValues* pTestKey; // 207
		CActivityRemapCache actRemap; // 209
		CUtlMemory<CActivityRemap, int>::ValidateGrowSize(); // 475
		CUtlMemory<CActivityRemap, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CActivityRemap, CUtlMemory<CActivityRemap, int> >::CUtlVector(); // 42
		CActivityRemapCache::CActivityRemapCache(); // 209
		{
			Activity ActBase; // 213
			CUtlMemory<activitylist_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<activitylist_t, CUtlMemory<activitylist_t, int> >::operator[](
					int i);  // 68
			ActivityListFromString(const char* pString); // 168
			CAnimationSystem::ActivityList_IndexForName(
							const char* pszActivityName);  // 213
			{
				KeyValues* pRemapKey; // 217
				CActivityRemap actMap; // 219
				CActivityRemap::CActivityRemap(); // 219
				{
					const char* pKeyName; // 224
					const char* pKeyValue; // 225
					{
						Activity Act; // 229
						CUtlMemory<activitylist_t, int>::operator[](
								int i);  // 588
						CUtlVectorBase<activitylist_t, CUtlMemory<activitylist_t, int> >::operator[](
								int i);  // 68
						ActivityListFromString(const char* pString); // 168
						CAnimationSystem::ActivityList_IndexForName(
										const char* pszActivityName);  // 229
					}
					CActivityRemap::SetExtraKeyValueBlock(
								KeyValues* pKVBlock);  // 242
				}
				CUtlMemory<CActivityRemap, int>::NumAllocated(); // 1196
				CUtlMemory<CActivityRemap, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::Element(
					int i);  // 1201
				CopyConstruct<CActivityRemap>(CActivityRemap* pMemory,
								const CActivityRemap& src);  // 1201
				CUtlMemory<CActivityRemap, int>::Base(); // 112
				CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::Base(); // 368
				CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::AddToTail(
						const CActivityRemap& src);  // 248
			}
		}
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::Count(); // 1369
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::GrowVector(
				int num);  // 1373
		{
			int i; // 1376
			CUtlMemory<CActivityRemap, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::operator[](
					int i);  // 1378
			CopyConstruct<CActivityRemap>(CActivityRemap* pMemory,
							const CActivityRemap& src);  // 1378
		}
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::AddVectorToTail<CUtlMemory<CActivityRemap, int> >(
									const CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >& src);  // 254
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::ResetDbgInfo(); // 530
		CUtlMemory<CActivityRemap, int>::ValidateGrowSize(); // 475
		CUtlMemory<CActivityRemap, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CActivityRemap, CUtlMemory<CActivityRemap, int> >::CUtlVector(); // 46
		{
			int c; // 47
			CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::Count(); // 47
			{
				int i; // 48
				CUtlMemory<CActivityRemap, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::Element(
					int i);  // 1201
				CopyConstruct<CActivityRemap>(CActivityRemap* pMemory,
								const CActivityRemap& src);  // 1201
				CUtlMemory<CActivityRemap, int>::NumAllocated(); // 1196
				CUtlMemory<CActivityRemap, int>::Base(); // 112
				CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::Base(); // 368
				CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::AddToTail(
						const CActivityRemap& src);  // 50
				CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::operator[](
						int i);  // 50
			}
		}
		CActivityRemapCache::CActivityRemapCache(
					const CActivityRemapCache& src);  // 406
		Node_t::Node_t(
			const KeyType_t& k,
			const ElemType_t& e);  // 207
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 611
		CUtlRBTree<CUtlMap<char const::LeftChild(
				int i);  // 1667
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 539
		CUtlRBTree<CUtlMap<char const::Element(
			int i);  // 1665
		CKeyLess::operator(
				const Node_t& left,
				const Node_t& right);  // 1665
		CKeyLess::operator(
				const Node_t& left,
				const Node_t& right);  // 1669
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 617
		CUtlRBTree<CUtlMap<char const::RightChild(
				int i);  // 1677
		CUtlRBTree<CUtlMap<char const::FindInsertionPosition(
					const Node_t& insert,
					bool bCheckForDuplicates,
					int& parent,
					bool& leftchild,
					bool& isDuplicate);  // 1693
		{
			int newNode; // 1709
			{
			}
		}
		{
			int newNode; // 1696
		}
		CUtlRBTree<CUtlMap<char const::Insert(
			const Node_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 207
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::RemoveAll(); // 1798
		CUtlMemory<CActivityRemap, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CActivityRemap, int>::Purge(); // 903
		CUtlMemory<CActivityRemap, int>::Purge(); // 1799
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::Purge(); // 560
		ValidateAlignment<CActivityRemap>(void); // 508
		CUtlMemory<CActivityRemap, int>::Purge(); // 510
		CUtlMemory<CActivityRemap, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CActivityRemap, CUtlMemory<CActivityRemap, int> >::~CUtlVector(); // 37
		CActivityRemapCache::~CActivityRemapCache(); // 402
		Node_t::~Node_t(); // 207
		CUtlMap<char const::Insert(
			const KeyType_t& key,
			const ElemType_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 343
		CUtlDict<CActivityRemapCache, int>::Insert(
			const char* pName,
			const CActivityRemapCache& element,
			ERBTreeInsertBehavior eInsertBehavior);  // 255
		CUtlMemory<CActivityRemap, int>::Purge(); // 903
		CUtlMemory<CActivityRemap, int>::Purge(); // 1799
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::Purge(); // 560
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CActivityRemap, CUtlMemory<CActivityRemap, int> >::~CUtlVector(); // 37
		CActivityRemapCache::~CActivityRemapCache(); // 256
	}
	CAnimationSystem::ActivityList_LoadActivityRemapFile(
						const char* filename,
						const char* section,
						CUtlVector<CActivityRemap, CUtlMemory<CActivityRemap, int> >& entries);  // 192
	{
		CActivityRemapCache* actRemap; // 198
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 539
		CUtlRBTree<CUtlMap<char const::Element(
			int i);  // 92
		CUtlMap<char const::operator[](
				IndexType_t i);  // 180
		CUtlDict<CActivityRemapCache, int>::Element(
			int i);  // 207
		CUtlDict<CActivityRemapCache, int>::operator[](
				int i);  // 198
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::Count(); // 1366
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::Count(); // 1369
		CUtlMemory<CActivityRemap, int>::NumAllocated(); // 782
		CUtlMemory<CActivityRemap, int>::Base(); // 112
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::Base(); // 368
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::GrowVector(
				int num);  // 1373
		{
			int i; // 1376
			CUtlMemory<CActivityRemap, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::operator[](
					int i);  // 1378
			CUtlMemory<CActivityRemap, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::Element(
				int i);  // 1378
			CopyConstruct<CActivityRemap>(CActivityRemap* pMemory,
							const CActivityRemap& src);  // 1378
		}
		CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >::AddVectorToTail<CUtlMemory<CActivityRemap, int> >(
									const CUtlVectorBase<CActivityRemap, CUtlMemory<CActivityRemap, int> >& src);  // 199
	}
} /* size: 0, variables: 2, inline expansions: 13 (1900 bytes) */

// <00D2093D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:192
// variables: 11
void CAnimationSystem::ActivityList_LoadActivityRemapFile(const char* filename, const char* section, CUtlVector<CActivityRemap, CUtlMemory<CActivityRemap, int> >& entries)
{
	int iIndex; // 194
	KeyValues* pkvFile; // 203
	{
		CActivityRemapCache* actRemap; // 198
	}
	{
		KeyValues* pTestKey; // 207
		CActivityRemapCache actRemap; // 209
		{
			Activity ActBase; // 213
			{
				KeyValues* pRemapKey; // 217
				CActivityRemap actMap; // 219
				{
					const char* pKeyName; // 224
					const char* pKeyValue; // 225
					{
						Activity Act; // 229
					}
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <00D2090F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../activitylist.cpp:259
void CAnimationSystem::ActivityList_HighestIndex()
{
} /* size: 11 */

