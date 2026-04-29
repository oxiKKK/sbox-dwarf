
//
// tier0/stringregistry.cpp
//
//	referenced by: libtier0.so
//
//	functions: 18
//	struct: 1
//

// <004B7369> tier0/stringregistry.cpp:23
void StringTable_t::~StringTable_t()
{
} /* size: 0 */

// <004B734D> tier0/stringregistry.cpp:23
inline void StringTable_t::~StringTable_t()
{
} /* size: 0 */

// <004B6CE8> tier0/stringregistry.cpp:23
void StringTable_t::StringTable_t()
{
} /* size: 0 */

// <004B6CCC> tier0/stringregistry.cpp:23
inline void StringTable_t::StringTable_t()
{
} /* size: 0 */

// <004AF850> tier0/stringregistry.cpp:23
// member functions: 2
// member variable: 1
// struct size: 40
struct StringTable_t : public CUtlDict<int, short unsigned int> {
public:
	/* class CUtlDict<int, short unsigned int> <ancestor>; */ /* 0 40 */
	void StringTable_t(StringTable_t* );
	void ~StringTable_t(StringTable_t* );
};

// <004B838E> tier0/stringregistry.cpp:34
// function calls: 3
void CStringRegistry::AddString(const char* stringText, int stringID, ERBTreeInsertBehavior eInsertBehavior)
{
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMap<char const::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 343
	CUtlDict<int, short unsigned int>::Insert(
		const char* pName,
		const int& element,
		ERBTreeInsertBehavior eInsertBehavior);  // 36
} /* size: 101, inline expansions: 3 (62 bytes) */

// <004B7E1A> tier0/stringregistry.cpp:44
// variable: 1
// function calls: 20
void CStringRegistry::GetStringID(const char* stringText)
{
	uint16 index; // 46
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<CUtlMap<char const::LeftChild(
			short unsigned int i);  // 1913
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			short unsigned int i);  // 545
	CUtlRBTree<CUtlMap<char const::Element(
		short unsigned int i);  // 1912
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CKeyLess::operator(
			const Node_t& left,
			const KeyType_t& right);  // 1914
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			short unsigned int i);  // 617
	CUtlRBTree<CUtlMap<char const::RightChild(
			short unsigned int i);  // 1915
	CUtlRBTree<CUtlMap<char const::FindAltKeyType<char const*, CUtlMap<char const*, int, short unsigned int, bool (
																const char* const& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<char const::FindAltKeyType<char const*>(
					const char* const& search);  // 243
	CUtlMap<char const::Find(
		const KeyType_t& key);  // 360
	CUtlDict<int, short unsigned int>::Find(
		const char* pName);  // 46
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsIdxValid(
			short unsigned int i);  // 661
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 664
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<CUtlMap<char const::LeftChild(
			short unsigned int i);  // 667
	CUtlRBTree<CUtlMap<char const::IsValidIndex(
			short unsigned int i);  // 659
	CUtlRBTree<CUtlMap<char const::IsValidIndex(
			short unsigned int i);  // 190
	CUtlMap<char const::IsValidIndex(
			IndexType_t i);  // 250
	CUtlDict<int, short unsigned int>::IsValidIndex(
			short unsigned int i);  // 47
} /* size: 238, variables: 1, inline expansions: 20 (615 bytes) */

// <004B7D5C> tier0/stringregistry.cpp:55
// function calls: 3
void CStringRegistry::GetNumStrings()
{
	CUtlRBTree<CUtlMap<char const::Count()(char const* const&, char const* const&)>::N this); // 177
	CUtlMap<char const::Count()(char const* const&, char const* const&)>* this); // 232
	CUtlDict<int, short unsigned int>::Count(); // 57
} /* size: 19, inline expansions: 3 (0 bytes) */

// <004B7AA9> tier0/stringregistry.cpp:66
// variable: 1
// function calls: 13
void CStringRegistry::GetStringText(int stringID)
{
	{
		uint16 index; // 68
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<CUtlMap<char const::LeftChild(
				short unsigned int i);  // 1329
		CUtlRBTree<CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>::N this); // 351
		CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>* this); // 384
		CUtlDict<int, short unsigned int>::First(); // 68
		CUtlMap<char const::NextInorder(
				IndexType_t i);  // 390
		CUtlDict<int, short unsigned int>::Next(
			short unsigned int i);  // 68
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<char const::Element(
			short unsigned int i);  // 92
		CUtlMap<char const::operator[](
				IndexType_t i);  // 180
		CUtlDict<int, short unsigned int>::Element(
			short unsigned int i);  // 207
		CUtlDict<int, short unsigned int>::operator[](
				short unsigned int i);  // 70
		CUtlDict<int, short unsigned int>::GetElementName(
				short unsigned int i);  // 72
	}
} /* size: 165 */

// <004B784D> tier0/stringregistry.cpp:83
// function calls: 9
void CStringRegistry::GetStringForKey(uint16 key)
{
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsIdxValid(
			short unsigned int i);  // 661
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 664
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<CUtlMap<char const::LeftChild(
			short unsigned int i);  // 667
	CUtlRBTree<CUtlMap<char const::IsValidIndex(
			short unsigned int i);  // 659
	CUtlRBTree<CUtlMap<char const::IsValidIndex(
			short unsigned int i);  // 190
	CUtlMap<char const::IsValidIndex(
			IndexType_t i);  // 250
	CUtlDict<int, short unsigned int>::IsValidIndex(
			short unsigned int i);  // 85
	CUtlDict<int, short unsigned int>::GetElementName(
			short unsigned int i);  // 88
} /* size: 67, inline expansions: 9 (184 bytes) */

// <004B7631> tier0/stringregistry.cpp:94
// function calls: 8
void CStringRegistry::GetIDForKey(uint16 key)
{
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsIdxValid(
			short unsigned int i);  // 661
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 664
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<CUtlMap<char const::LeftChild(
			short unsigned int i);  // 667
	CUtlRBTree<CUtlMap<char const::IsValidIndex(
			short unsigned int i);  // 659
	CUtlRBTree<CUtlMap<char const::IsValidIndex(
			short unsigned int i);  // 190
	CUtlMap<char const::IsValidIndex(
			IndexType_t i);  // 250
	CUtlDict<int, short unsigned int>::IsValidIndex(
			short unsigned int i);  // 96
} /* size: 67, inline expansions: 8 (180 bytes) */

// <004B7380> tier0/stringregistry.cpp:105
// variable: 1
// function calls: 10
void CStringRegistry::ClearStrings()
{
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<CUtlMap<char const::LeftChild(
			short unsigned int i);  // 1329
	CUtlRBTree<CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>::N this); // 351
	CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>* this); // 294
	CUtlMap<char const::RemoveAll()(char const* const&, char const* const&)>* this); // 302
	{
		const char* pKey; // 297
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<char const::Element(
			short unsigned int i);  // 94
		CUtlMap<char const::Key(
			IndexType_t i);  // 297
		CUtlMap<char const::NextInorder(
				IndexType_t i);  // 299
	}
	CUtlDict<int, short unsigned int>::RemoveAll(); // 107
} /* size: 149, inline expansions: 6 (293 bytes) */

// <004B6D1B> tier0/stringregistry.cpp:115
// variable: 1
// function calls: 29
void CStringRegistry::~CStringRegistry()
{
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<CUtlMap<char const::LeftChild(
			short unsigned int i);  // 1329
	CUtlRBTree<CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>::N this); // 351
	CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>* this); // 308
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsExternallyAllocated()(char const* const&, char co this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* c this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* c this); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::InvalidIterator()(char const* const&, char co this); // 1288
	CUtlRBTree<CUtlMap<char const::Purge()(char const* const&, char const* const&)>::Node_t, this); // 347
	CUtlMap<char const::Purge()(char const* const&, char const* const&)>* this); // 316
	{
		const char* pKey; // 311
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				short unsigned int i);  // 539
		CUtlRBTree<CUtlMap<char const::Element(
			short unsigned int i);  // 94
		CUtlMap<char const::Key(
			IndexType_t i);  // 311
		CUtlMap<char const::NextInorder(
				IndexType_t i);  // 313
	}
	CUtlDict<int, short unsigned int>::Purge(); // 138
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsExternallyAllocated()(char const* const&, char co this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* c this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* c this); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::InvalidIterator()(char const* const&, char co this); // 1288
	CUtlRBTree<CUtlMap<char const::Purge()(char const* const&, char const* const&)>::Node_t, this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* c this); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::~CUtlMemory()(char const* const&, char const* c this); // 510
	CUtlRBTree<CUtlMap<char const::~CUtlRBTree()(char const* const&, char const* const&)>::Node_t, this); // 47
	CUtlMap<char const::~CUtlMap()(char const* const&, char const* const&)>* this); // 139
	CUtlDict<int, short unsigned int>::~CUtlDict(); // 23
	StringTable_t::~StringTable_t(); // 117
} /* size: 270, inline expansions: 25 (1131 bytes) */

// <004B6CFF> tier0/stringregistry.cpp:115
void CStringRegistry::~CStringRegistry()
{
} /* size: 0 */

// <004B6901> tier0/stringregistry.cpp:125
// function calls: 17
void CStringRegistry::CStringRegistry()
{
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::ValidateGrowSize()(char const* const&, char const* c this); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::InvalidIterator()(char const* const&, char co this); // 489
	CUtlRBTree<CUtlMap<char const::ResetDbgInfo()(char const* const&, char const* const&)>::Node_t, this); // 491
	CUtlRBTree<CUtlMap<char const::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<char const::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 130
	CUtlRBTree<CUtlMap<char const::SetLessFunc(
			const LessFunc_t& func);  // 201
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 201
	CUtlMap<char const::SetLessFunc(
			LessFunc_t func);  // 150
	CUtlDict<int, short unsigned int>::SetCompareType(
			EDictCompareType compareType);  // 142
	CUtlDict<int, short unsigned int>::SetCompareType(
			EDictCompareType compareType);  // 132
	CUtlDict<int, short unsigned int>::CUtlDict(
		int compareType,
		int growSize,
		int initSize);  // 23
	StringTable_t::StringTable_t(); // 127
} /* size: 80, inline expansions: 17 (216 bytes) */

// <004B68E5> tier0/stringregistry.cpp:125
void CStringRegistry::CStringRegistry()
{
} /* size: 0 */

// <004B67C1> tier0/stringregistry.cpp:131
// function calls: 5
void CStringRegistry::First()
{
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<CUtlMap<char const::LeftChild(
			short unsigned int i);  // 1329
	CUtlRBTree<CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>::N this); // 351
	CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>* this); // 384
	CUtlDict<int, short unsigned int>::First(); // 133
} /* size: 55, inline expansions: 5 (132 bytes) */

// <004B66E3> tier0/stringregistry.cpp:136
// function calls: 2
void CStringRegistry::Next(uint16 key)
{
	CUtlMap<char const::NextInorder(
			IndexType_t i);  // 390
	CUtlDict<int, short unsigned int>::Next(
		short unsigned int i);  // 138
} /* size: 15, inline expansions: 2 (22 bytes) */

// <004B66B2> tier0/stringregistry.cpp:141
void CStringRegistry::InvalidIndex()
{
} /* size: 10 */

