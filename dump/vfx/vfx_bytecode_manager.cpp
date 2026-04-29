
//
// vfx/vfx_bytecode_manager.cpp
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 21
//

// <06AB75CE> vfx/vfx_bytecode_manager.cpp:12
// function calls: 25
void CVfxByteCodeManager::CVfxByteCodeManager()
{
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 69
	ResetDbgInfo(const CUtlRBTree<CUtlMap<CVfxHashValue, int, int>::Node_t, int, CUtlMap<CVfxHashValue, int, int>::CKeyLess, CUtlMemory<Ut this); // 503
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 496
	InvalidIndex(void); // 498
	InvalidIndex(void); // 500
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::InvalidIterator(); // 501
	CUtlRBTree(const CUtlRBTree<CUtlMap<CVfxHashValue, int, int>::Node_t, int, CUtlMap<CVfxHashValue, int, int>::CKeyLess, CUtlMemory<Ut this,
			const LessFunc_t& lessfunc);  // 69
	CUtlMap<CVfxHashValue, int, int, bool (::CUtlMap(
		LessFunc_t lessfunc);  // 13
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::ResetDbgInfo(); // 503
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 496
	InvalidIndex(void); // 498
	InvalidIndex(void); // 500
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::InvalidIterator(); // 501
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::CUtlRBTree(
			const LessFunc_t& lessfunc);  // 69
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 69
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::CUtlMap(
		LessFunc_t lessfunc);  // 14
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::CUtlVector(); // 18
} /* size: 136, inline expansions: 25 (262 bytes) */

// <06AB75B2> vfx/vfx_bytecode_manager.cpp:12
void CVfxByteCodeManager::CVfxByteCodeManager()
{
} /* size: 0 */

// <06AB7051> vfx/vfx_bytecode_manager.cpp:23
// function calls: 27
void CVfxByteCodeManager::~CVfxByteCodeManager()
{
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Purge(); // 1287
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Purge(); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t*, int>::Node_t, int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::~CUtlMemory(); // 510
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::~CUtlRBTree(); // 47
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::~CUtlMap()(long long unsigned int const this); // 26
	CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::Purge(); // 903
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::Purge(); // 560
	ValidateAlignment<CVfxByteCodeManager::ByteCodeInfo_t>(void); // 508
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::Purge(); // 510
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::~CUtlVector(); // 26
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::Purge(); // 1287
	Purge(const CUtlRBTree<CUtlMap<CVfxHashValue, int, int>::Node_t, int, CUtlMap<CVfxHashValue, int, int>::CKeyLess, CUtlMemory<Ut this); // 509
	~CUtlRBTree(const CUtlRBTree<CUtlMap<CVfxHashValue, int, int>::Node_t, int, CUtlMap<CVfxHashValue, int, int>::CKeyLess, CUtlMemory<Ut this); // 47
	CUtlMap<CVfxHashValue, int, int, bool (::~CUtlMap()(const CVfxHashValue&, const CVfxHashValue&)>* this); // 26
} /* size: 142, inline expansions: 27 (446 bytes) */

// <06AB7035> vfx/vfx_bytecode_manager.cpp:23
void CVfxByteCodeManager::~CVfxByteCodeManager()
{
} /* size: 0 */

// <06AB677A> vfx/vfx_bytecode_manager.cpp:29
// variables: 3
// function calls: 32
void CVfxByteCodeManager::OnStaticCombo(uint64 nStaticComboId)
{
	int idx; // 37
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::FindAltKeyType<long long unsigned int>(
						const long long unsigned int& search);  // 243
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Find(
		const KeyType_t& key);  // 37
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsIdxValid(
			int i);  // 661
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsIdxAfter(
			int i,
			const Iterator_t& it);  // 664
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
			int i);  // 611
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::LeftChild(
			int i);  // 667
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsValidIndex(
			int i);  // 659
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsValidIndex(
			int i);  // 190
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsValidIndex(
			IndexType_t i);  // 38
	CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::InvalidIterator(); // 448
	ConstructList(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this); // 454
	ResetDbgInfo(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this); // 455
	CUtlLinkedList(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this,
			int growSize,
			int initSize);  // 49
	StaticComboInfo_t::StaticComboInfo_t(); // 40
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
			int i);  // 611
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::LeftChild(
			int i);  // 1667
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
			int i);  // 539
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Element(
		int i);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1669
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
			int i);  // 617
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::RightChild(
			int i);  // 1677
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::FindInsertionPosition(
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
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Insert(
		const Node_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 207
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 40
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
			int i);  // 539
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Element(
		int i);  // 92
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
			IndexType_t i);  // 43
} /* size: 0, variables: 1, inline expansions: 32 (871 bytes) */

// <06AB63FC> vfx/vfx_bytecode_manager.cpp:47
// variables: 5
// function calls: 10
void CVfxByteCodeManager::OnDynamicCombo(VfxCompiledShaderInfo_t* compile)
{
	const char   __FUNCTION__; // 17960
	CVfxHashValue hash; // 53
	MD5Context_t md5Context; // 54
	DynamicComboInfo_t* pDynamicComboInfo; // 59
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 49
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 286
	CVfxHashValue::Reset(); // 276
	CVfxHashValue::CVfxHashValue(); // 53
	CUtlBuffer::TellMaxPut(); // 56
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 56
	CUtlBuffer::TellMaxPut(); // 63
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 63
} /* size: 0, variables: 4, inline expansions: 10 (88 bytes) */

// <0175307E> vfx/vfx_bytecode_manager.cpp:47
// variables: 5
// function calls: 10
void CVfxByteCodeManager::OnDynamicCombo(VfxCompiledShaderInfo_t* compile)
{
	const char   __FUNCTION__; // 63837
	CVfxHashValue hash; // 53
	MD5Context_t md5Context; // 54
	DynamicComboInfo_t* pDynamicComboInfo; // 59
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 49
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 286
	CVfxHashValue::Reset(); // 276
	CVfxHashValue::CVfxHashValue(); // 53
	CUtlBuffer::TellMaxPut(); // 56
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 56
	CUtlBuffer::TellMaxPut(); // 63
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 63
} /* size: 0, variables: 4, inline expansions: 10 (0 bytes) */

// <009896DF> vfx/vfx_bytecode_manager.cpp:47
// variables: 5
// function calls: 10
void CVfxByteCodeManager::OnDynamicCombo(VfxCompiledShaderInfo_t* compile)
{
	const char   __FUNCTION__; // 8432
	CVfxHashValue hash; // 53
	MD5Context_t md5Context; // 54
	DynamicComboInfo_t* pDynamicComboInfo; // 59
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 49
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 286
	CVfxHashValue::Reset(); // 276
	CVfxHashValue::CVfxHashValue(); // 53
	CUtlBuffer::TellMaxPut(); // 56
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 56
	CUtlBuffer::TellMaxPut(); // 63
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 63
} /* size: 0, variables: 4, inline expansions: 10 (0 bytes) */

// <06AB6043> vfx/vfx_bytecode_manager.cpp:67
// variables: 7
// function calls: 11
void CVfxByteCodeManager::AddDynamicComboInfo(uint64 nDynamicComboId)
{
	const char   __FUNCTION__; // 18075
	CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int> >& dynamicCombos; // 71
	int idx; // 76
	bool bInserted; // 77
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 69
	}
	{
		int i; // 78
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
		}
		Head(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 78
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
				int i);  // 494
		operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this,
				int i);  // 80
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
				int i);  // 494
		operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this,
				int i);  // 82
		Next(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
			int i);  // 78
	}
	AddToTail(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this); // 91
	CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
			int i);  // 494
	operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this,
			int i);  // 94
	CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
			int i);  // 494
	operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this,
			int i);  // 95
} /* size: 0, variables: 4, inline expansions: 5 (33 bytes) */

// <01752CC5> vfx/vfx_bytecode_manager.cpp:67
// variables: 7
// function calls: 11
void CVfxByteCodeManager::AddDynamicComboInfo(uint64 nDynamicComboId)
{
	const char   __FUNCTION__; // 63952
	CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int> >& dynamicCombos; // 71
	int idx; // 76
	bool bInserted; // 77
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 69
	}
	{
		int i; // 78
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
		}
		Head(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 78
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
				int i);  // 494
		operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this,
				int i);  // 80
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
				int i);  // 494
		operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this,
				int i);  // 82
		Next(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
			int i);  // 78
	}
	AddToTail(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this); // 91
	CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
			int i);  // 494
	operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this,
			int i);  // 94
	CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
			int i);  // 494
	operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this,
			int i);  // 95
} /* size: 0, variables: 4, inline expansions: 5 (0 bytes) */

// <00634F14> vfx/vfx_bytecode_manager.cpp:67
// variables: 7
// function calls: 11
void CVfxByteCodeManager::AddDynamicComboInfo(uint64 nDynamicComboId)
{
	const char   __FUNCTION__; // 30076
	CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int> >& dynamicCombos; // 71
	int idx; // 76
	bool bInserted; // 77
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 69
	}
	{
		int i; // 78
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
		}
		Head(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 78
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
				int i);  // 494
		operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this,
				int i);  // 80
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
				int i);  // 494
		operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this,
				int i);  // 82
		Next(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
			int i);  // 78
	}
	AddToTail(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this); // 91
	CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
			int i);  // 494
	operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this,
			int i);  // 94
	CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
			int i);  // 494
	operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this,
			int i);  // 95
} /* size: 0, variables: 4, inline expansions: 5 (0 bytes) */

// <00989326> vfx/vfx_bytecode_manager.cpp:67
// variables: 7
// function calls: 11
void CVfxByteCodeManager::AddDynamicComboInfo(uint64 nDynamicComboId)
{
	const char   __FUNCTION__; // 8547
	CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int> >& dynamicCombos; // 71
	int idx; // 76
	bool bInserted; // 77
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 69
	}
	{
		int i; // 78
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
		}
		Head(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 78
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
				int i);  // 494
		operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this,
				int i);  // 80
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
				int i);  // 494
		operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this,
				int i);  // 82
		Next(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
			int i);  // 78
	}
	AddToTail(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this); // 91
	CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
			int i);  // 494
	operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this,
			int i);  // 94
	CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
			int i);  // 494
	operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this,
			int i);  // 95
} /* size: 0, variables: 4, inline expansions: 5 (0 bytes) */

// <06AB5108> vfx/vfx_bytecode_manager.cpp:99
// variables: 9
// function calls: 55
void CVfxByteCodeManager::StoreByteCode(const CVfxHashValue& uncompressedHash, const void* pByteCode, int nSize)
{
	int nByteCodeInfoIdx; // 101
	bool bReplaceExisting; // 102
	CVfxHashValue replacementHash; // 103
	int idx; // 108
	ByteCodeInfo_t& byteCodeInfo; // 125
	uint32 nCompressedSize; // 134
	uint8* pCompressedByteCode; // 135
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::operator[](
			int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CVfxHashValue, int, int>::Node_t, int, CUtlMap<CVfxHashValue, int, int>::CKeyLess, CUtlMem this,
			int i);  // 1913
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::operator[](
			int i);  // 545
	Element(const CUtlRBTree<CUtlMap<CVfxHashValue, int, int>::Node_t, int, CUtlMap<CVfxHashValue, int, int>::CKeyLess, CUtlMem this,
		int i);  // 1912
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CKeyLess::operator(
			const Node_t& left,
			const KeyType_t& right);  // 1914
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::operator[](
			int i);  // 617
	RightChild(const CUtlRBTree<CUtlMap<CVfxHashValue, int, int>::Node_t, int, CUtlMap<CVfxHashValue, int, int>::CKeyLess, CUtlMem this,
			int i);  // 1915
	FindAltKeyType<CVfxHashValue, CUtlMap<CVfxHashValue, int, int>::CKeyLess>(const CUtlRBTree<CUtlMap<CVfxHashValue, int, int>::Node_t, int, CUtlMap<CVfxHashValue, int, int>::CKeyLess, CUtlMem this,
											const CVfxHashValue& search,
											const CKeyLess& altLess);  // 298
	FindAltKeyType<CVfxHashValue>(const CUtlRBTree<CUtlMap<CVfxHashValue, int, int>::Node_t, int, CUtlMap<CVfxHashValue, int, int>::CKeyLess, CUtlMem this,
					const CVfxHashValue& search);  // 243
	CUtlMap<CVfxHashValue, int, int, bool (::Find(
		const KeyType_t& key);  // 108
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 286
	CVfxHashValue::Reset(); // 276
	CVfxHashValue::CVfxHashValue(); // 103
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::NumAllocated(); // 1143
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::Base(); // 112
	CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::Base(); // 368
	CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::IsGrowable(); // 823
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::Element(
		int i);  // 1148
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 286
	CVfxHashValue::Reset(); // 276
	CVfxHashValue::CVfxHashValue(); // 34
	ByteCodeInfo_t::ByteCodeInfo_t(); // 1479
	Construct<CVfxByteCodeManager::ByteCodeInfo_t>(ByteCodeInfo_t* pMemory); // 1148
	CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::AddToTail(); // 123
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::operator[](
			int i);  // 125
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::operator[](
			int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CVfxHashValue, int, int>::Node_t, int, CUtlMap<CVfxHashValue, int, int>::CKeyLess, CUtlMem this,
			int i);  // 1667
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::operator[](
			int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CVfxHashValue, int, int>::Node_t, int, CUtlMap<CVfxHashValue, int, int>::CKeyLess, CUtlMemory<Ut this,
		int i);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1669
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::operator[](
			int i);  // 617
	RightChild(const CUtlRBTree<CUtlMap<CVfxHashValue, int, int>::Node_t, int, CUtlMap<CVfxHashValue, int, int>::CKeyLess, CUtlMem this,
			int i);  // 1677
	FindInsertionPosition(const CUtlRBTree<CUtlMap<CVfxHashValue, int, int>::Node_t, int, CUtlMap<CVfxHashValue, int, int>::CKeyLess, CUtlMemory<Ut this,
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
	Insert(const CUtlRBTree<CUtlMap<CVfxHashValue, int, int>::Node_t, int, CUtlMap<CVfxHashValue, int, int>::CKeyLess, CUtlMemory<Ut this,
		const Node_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 207
	CUtlMap<CVfxHashValue, int, int, bool (::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 152
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::IsIdxValid(
			int i);  // 661
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::IsIdxAfter(
			int i,
			const Iterator_t& it);  // 664
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::operator[](
			int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CVfxHashValue, int, int>::Node_t, int, CUtlMap<CVfxHashValue, int, int>::CKeyLess, CUtlMem this,
			int i);  // 667
	IsValidIndex(const CUtlRBTree<CUtlMap<CVfxHashValue, int, int>::Node_t, int, CUtlMap<CVfxHashValue, int, int>::CKeyLess, CUtlMem this,
			int i);  // 659
	IsValidIndex(const CUtlRBTree<CUtlMap<CVfxHashValue, int, int>::Node_t, int, CUtlMap<CVfxHashValue, int, int>::CKeyLess, CUtlMem this,
			int i);  // 190
	CUtlMap<CVfxHashValue, int, int, bool (::IsValidIndex(
			IndexType_t i);  // 109
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 141
} /* size: 0, variables: 7, inline expansions: 55 (1942 bytes) */

// <06AB8AD7> vfx/vfx_bytecode_manager.cpp:159
// variables: 3
// function calls: 3
void CVfxByteCodeManager::GetByteCode(int nByteCodeInfoIdx, int* pByteCodeSizeOut)
{
	const uint8* pSrcData; // 167
	const size_t  nSrcDataSize; // 168
	uint8* pBuf; // 173
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::operator[](
			int i);  // 161
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 174
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <06AB50B0> vfx/vfx_bytecode_manager.cpp:159
// variables: 3
void CVfxByteCodeManager::GetByteCode(int nByteCodeInfoIdx, int* pByteCodeSizeOut)
{
	const uint8* pSrcData; // 167
	const size_t  nSrcDataSize; // 168
	uint8* pBuf; // 173
} /* size: 0, variables: 3 */

// <06AB3240> vfx/vfx_bytecode_manager.cpp:179
// variables: 24
// function calls: 119
void CVfxByteCodeManager::SerializeStaticCombo(CUtlBuffer& buf, uint64 nStaticComboID, VfxProgram_t programType)
{
	int nStart; // 182
	int idx; // 185
	const char   __FUNCTION__; // 18102
	const StaticComboInfo_t& staticCombo; // 187
	CUtlVector<int, CUtlMemory<int, int> > uniqueByteCodeIdxs; // 194
	CUtlVector<int, CUtlMemory<int, int> > byteCodeUsage; // 197
	int nUniqueShaders; // 215
	CUtlVector<int, CUtlMemory<int, int> > byteCodeStartArray; // 218
	bool unusedValue; // 224
	int nUnskippedDynamicCombos; // 250
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 186
	}
	{
		int i; // 200
		{
			const DynamicComboInfo_t& dynamicCombo; // 202
			int nByteCodeIdx; // 204
			CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
					int i);  // 500
			operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
					int i);  // 202
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 207
			{
				int i; // 1531
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::Find(
				const int& src);  // 204
			CUtlVectorBase<int, CUtlMemory<int, int> >::IsValidIndex(
					int i);  // 205
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 209
		}
		Head(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 200
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
				int i);  // 368
		InternalElement(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
				int i);  // 550
		Next(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
			int i);  // 200
	}
	{
		int i; // 227
		{
			int nByteCodeSize; // 229
			uint8* pByteCode; // 230
			const CVfxHashValue  hashValue; // 243
			{
				uint i; // 291
				GetFmtStr<short unsigned int>(int nRadix,
								bool bPrint);  // 1244
				CUtlBuffer::PutType<short unsigned int>(
								short unsigned int src);  // 1236
				CUtlBuffer::PutType<short unsigned int>(
								short unsigned int src);  // 1330
				CUtlBuffer::PutUnsignedShort(
						short unsigned int s);  // 1319
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 1166
				CUtlBuffer::PeekPut(
					int offset);  // 1210
				CUtlBuffer::PutTypeBin<unsigned char>(
								unsigned char src);  // 1204
				CUtlBuffer::PutTypeBin<unsigned char>(
								unsigned char src);  // 1315
				CUtlBuffer::IsText(); // 1313
				CUtlBuffer::PutUnsignedChar(
						unsigned char c);  // 293
			}
			CVfxHashValue::Serialize(
					CUtlBuffer& buf);  // 244
			CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::operator[](
					int i);  // 161
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 174
			CVfxByteCodeManager::GetByteCode(
					int nByteCodeInfoIdx,
					int* pByteCodeSizeOut);  // 230
			CUtlBuffer::TellPut(); // 233
			CUtlBuffer::PutInt(
				int i);  // 236
			CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::operator[](
					int i);  // 243
		}
	}
	{
		int i; // 252
		{
			const DynamicComboInfo_t& dynamicCombo; // 254
			VfxProgramHasRenderState(VfxProgram_t programType); // 260
			GetFmtStr<long long int>(int nRadix,
						bool bPrint);  // 1244
			CUtlBuffer::PutType<long long int>(
						long long int src);  // 1236
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<long long int>(
							long long int src);  // 1204
			{
			}
			{
				int i; // 200
				{
					int i; // 214
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 218
				LowLevelByteSwap<long long int>(long long int* output,
								long long int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<long long int>(
								long long int* outputBuffer,
								long long int* inputBuffer,
								int count);  // 170
			CByteswap::SwapBufferToTargetEndian<long long int>(
								long long int* outputBuffer,
								long long int* inputBuffer,
								int count);  // 1214
			CUtlBuffer::PutTypeBin<long long int>(
							long long int src);  // 1240
			CUtlBuffer::IsText(); // 1238
			CUtlBuffer::PutType<long long int>(
						long long int src);  // 1340
			CUtlBuffer::PutInt64(
				int64 i);  // 256
			CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
					int i);  // 500
			operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
					int i);  // 254
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 257
			CUtlBuffer::PutInt(
				int i);  // 257
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 258
			CUtlBuffer::PutInt(
				int i);  // 258
		}
		Head(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 252
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
				int i);  // 368
		InternalElement(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
				int i);  // 550
		Next(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
			int i);  // 252
	}
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::FindAltKeyType<long long unsigned int>(
						const long long unsigned int& search);  // 243
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Find(
		const KeyType_t& key);  // 185
	CUtlBuffer::TellPut(); // 182
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsIdxValid(
			int i);  // 661
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
			int i);  // 611
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::LeftChild(
			int i);  // 667
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsValidIndex(
			int i);  // 659
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsIdxAfter(
			int i,
			const Iterator_t& it);  // 664
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsValidIndex(
			int i);  // 190
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsValidIndex(
			IndexType_t i);  // 186
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
			int i);  // 545
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Element(
		int i);  // 93
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
			IndexType_t i);  // 187
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 194
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 197
	Count(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 198
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 218
	CUtlBuffer::PutInt(
		int i);  // 221
	CUtlBuffer::PutInt(
		int i);  // 251
	Count(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 250
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 272
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 272
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 272
} /* size: 0, variables: 10, inline expansions: 56 (1344 bytes) */

// <0174FEC2> vfx/vfx_bytecode_manager.cpp:179
// variables: 24
// function calls: 119
void CVfxByteCodeManager::SerializeStaticCombo(CUtlBuffer& buf, uint64 nStaticComboID, VfxProgram_t programType)
{
	int nStart; // 182
	int idx; // 185
	const char   __FUNCTION__; // 63979
	const StaticComboInfo_t& staticCombo; // 187
	CUtlVector<int, CUtlMemory<int, int> > uniqueByteCodeIdxs; // 194
	CUtlVector<int, CUtlMemory<int, int> > byteCodeUsage; // 197
	int nUniqueShaders; // 215
	CUtlVector<int, CUtlMemory<int, int> > byteCodeStartArray; // 218
	bool unusedValue; // 224
	int nUnskippedDynamicCombos; // 250
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 186
	}
	{
		int i; // 200
		{
			const DynamicComboInfo_t& dynamicCombo; // 202
			int nByteCodeIdx; // 204
			CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
					int i);  // 500
			operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
					int i);  // 202
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 207
			{
				int i; // 1531
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::Find(
				const int& src);  // 204
			CUtlVectorBase<int, CUtlMemory<int, int> >::IsValidIndex(
					int i);  // 205
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 209
		}
		Head(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 200
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
				int i);  // 368
		InternalElement(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
				int i);  // 550
		Next(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
			int i);  // 200
	}
	{
		int i; // 227
		{
			int nByteCodeSize; // 229
			uint8* pByteCode; // 230
			const CVfxHashValue  hashValue; // 243
			{
				uint i; // 291
				GetFmtStr<short unsigned int>(int nRadix,
								bool bPrint);  // 1244
				CUtlBuffer::PutType<short unsigned int>(
								short unsigned int src);  // 1236
				CUtlBuffer::PutType<short unsigned int>(
								short unsigned int src);  // 1330
				CUtlBuffer::PutUnsignedShort(
						short unsigned int s);  // 1319
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 1166
				CUtlBuffer::PeekPut(
					int offset);  // 1210
				CUtlBuffer::PutTypeBin<unsigned char>(
								unsigned char src);  // 1204
				CUtlBuffer::PutTypeBin<unsigned char>(
								unsigned char src);  // 1315
				CUtlBuffer::IsText(); // 1313
				CUtlBuffer::PutUnsignedChar(
						unsigned char c);  // 293
			}
			CVfxHashValue::Serialize(
					CUtlBuffer& buf);  // 244
			CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::operator[](
					int i);  // 161
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 174
			CVfxByteCodeManager::GetByteCode(
					int nByteCodeInfoIdx,
					int* pByteCodeSizeOut);  // 230
			CUtlBuffer::TellPut(); // 233
			CUtlBuffer::PutInt(
				int i);  // 236
			CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::operator[](
					int i);  // 243
		}
	}
	{
		int i; // 252
		{
			const DynamicComboInfo_t& dynamicCombo; // 254
			VfxProgramHasRenderState(VfxProgram_t programType); // 260
			GetFmtStr<long long int>(int nRadix,
						bool bPrint);  // 1244
			CUtlBuffer::PutType<long long int>(
						long long int src);  // 1236
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<long long int>(
							long long int src);  // 1204
			{
			}
			{
				int i; // 200
				{
					int i; // 214
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 218
				LowLevelByteSwap<long long int>(long long int* output,
								long long int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<long long int>(
								long long int* outputBuffer,
								long long int* inputBuffer,
								int count);  // 170
			CByteswap::SwapBufferToTargetEndian<long long int>(
								long long int* outputBuffer,
								long long int* inputBuffer,
								int count);  // 1214
			CUtlBuffer::PutTypeBin<long long int>(
							long long int src);  // 1240
			CUtlBuffer::IsText(); // 1238
			CUtlBuffer::PutType<long long int>(
						long long int src);  // 1340
			CUtlBuffer::PutInt64(
				int64 i);  // 256
			CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
					int i);  // 500
			operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
					int i);  // 254
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 257
			CUtlBuffer::PutInt(
				int i);  // 257
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 258
			CUtlBuffer::PutInt(
				int i);  // 258
		}
		Head(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 252
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
				int i);  // 368
		InternalElement(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
				int i);  // 550
		Next(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
			int i);  // 252
	}
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::FindAltKeyType<long long unsigned int>(
						const long long unsigned int& search);  // 243
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Find(
		const KeyType_t& key);  // 185
	CUtlBuffer::TellPut(); // 182
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsIdxValid(
			int i);  // 661
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
			int i);  // 611
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::LeftChild(
			int i);  // 667
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsValidIndex(
			int i);  // 659
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsIdxAfter(
			int i,
			const Iterator_t& it);  // 664
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsValidIndex(
			int i);  // 190
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsValidIndex(
			IndexType_t i);  // 186
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
			int i);  // 545
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Element(
		int i);  // 93
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
			IndexType_t i);  // 187
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 194
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 197
	Count(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 198
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 218
	CUtlBuffer::PutInt(
		int i);  // 221
	CUtlBuffer::PutInt(
		int i);  // 251
	Count(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 250
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 272
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 272
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 272
} /* size: 0, variables: 10, inline expansions: 56 (0 bytes) */

// <00632111> vfx/vfx_bytecode_manager.cpp:179
// variables: 24
// function calls: 119
void CVfxByteCodeManager::SerializeStaticCombo(CUtlBuffer& buf, uint64 nStaticComboID, VfxProgram_t programType)
{
	int nStart; // 182
	int idx; // 185
	const char   __FUNCTION__; // 30103
	const StaticComboInfo_t& staticCombo; // 187
	CUtlVector<int, CUtlMemory<int, int> > uniqueByteCodeIdxs; // 194
	CUtlVector<int, CUtlMemory<int, int> > byteCodeUsage; // 197
	int nUniqueShaders; // 215
	CUtlVector<int, CUtlMemory<int, int> > byteCodeStartArray; // 218
	bool unusedValue; // 224
	int nUnskippedDynamicCombos; // 250
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 186
	}
	{
		int i; // 200
		{
			const DynamicComboInfo_t& dynamicCombo; // 202
			int nByteCodeIdx; // 204
			CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
					int i);  // 500
			operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
					int i);  // 202
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 207
			{
				int i; // 1531
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::Find(
				const int& src);  // 204
			CUtlVectorBase<int, CUtlMemory<int, int> >::IsValidIndex(
					int i);  // 205
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 209
		}
		Head(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 200
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
				int i);  // 368
		InternalElement(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
				int i);  // 550
		Next(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
			int i);  // 200
	}
	{
		int i; // 227
		{
			int nByteCodeSize; // 229
			uint8* pByteCode; // 230
			const CVfxHashValue  hashValue; // 243
			{
				uint i; // 291
				GetFmtStr<short unsigned int>(int nRadix,
								bool bPrint);  // 1244
				CUtlBuffer::PutType<short unsigned int>(
								short unsigned int src);  // 1236
				CUtlBuffer::PutType<short unsigned int>(
								short unsigned int src);  // 1330
				CUtlBuffer::PutUnsignedShort(
						short unsigned int s);  // 1319
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 1166
				CUtlBuffer::PeekPut(
					int offset);  // 1210
				CUtlBuffer::PutTypeBin<unsigned char>(
								unsigned char src);  // 1204
				CUtlBuffer::PutTypeBin<unsigned char>(
								unsigned char src);  // 1315
				CUtlBuffer::IsText(); // 1313
				CUtlBuffer::PutUnsignedChar(
						unsigned char c);  // 293
			}
			CVfxHashValue::Serialize(
					CUtlBuffer& buf);  // 244
			CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::operator[](
					int i);  // 161
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 174
			CVfxByteCodeManager::GetByteCode(
					int nByteCodeInfoIdx,
					int* pByteCodeSizeOut);  // 230
			CUtlBuffer::TellPut(); // 233
			CUtlBuffer::PutInt(
				int i);  // 236
			CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::operator[](
					int i);  // 243
		}
	}
	{
		int i; // 252
		{
			const DynamicComboInfo_t& dynamicCombo; // 254
			VfxProgramHasRenderState(VfxProgram_t programType); // 260
			GetFmtStr<long long int>(int nRadix,
						bool bPrint);  // 1244
			CUtlBuffer::PutType<long long int>(
						long long int src);  // 1236
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<long long int>(
							long long int src);  // 1204
			{
			}
			{
				int i; // 200
				{
					int i; // 214
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 218
				LowLevelByteSwap<long long int>(long long int* output,
								long long int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<long long int>(
								long long int* outputBuffer,
								long long int* inputBuffer,
								int count);  // 170
			CByteswap::SwapBufferToTargetEndian<long long int>(
								long long int* outputBuffer,
								long long int* inputBuffer,
								int count);  // 1214
			CUtlBuffer::PutTypeBin<long long int>(
							long long int src);  // 1240
			CUtlBuffer::IsText(); // 1238
			CUtlBuffer::PutType<long long int>(
						long long int src);  // 1340
			CUtlBuffer::PutInt64(
				int64 i);  // 256
			CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
					int i);  // 500
			operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
					int i);  // 254
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 257
			CUtlBuffer::PutInt(
				int i);  // 257
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 258
			CUtlBuffer::PutInt(
				int i);  // 258
		}
		Head(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 252
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
				int i);  // 368
		InternalElement(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
				int i);  // 550
		Next(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
			int i);  // 252
	}
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::FindAltKeyType<long long unsigned int>(
						const long long unsigned int& search);  // 243
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Find(
		const KeyType_t& key);  // 185
	CUtlBuffer::TellPut(); // 182
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsIdxValid(
			int i);  // 661
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
			int i);  // 611
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::LeftChild(
			int i);  // 667
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsValidIndex(
			int i);  // 659
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsIdxAfter(
			int i,
			const Iterator_t& it);  // 664
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsValidIndex(
			int i);  // 190
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsValidIndex(
			IndexType_t i);  // 186
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
			int i);  // 545
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Element(
		int i);  // 93
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
			IndexType_t i);  // 187
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 194
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 197
	Count(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 198
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 218
	CUtlBuffer::PutInt(
		int i);  // 221
	CUtlBuffer::PutInt(
		int i);  // 251
	Count(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 250
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 272
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 272
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 272
} /* size: 0, variables: 10, inline expansions: 56 (0 bytes) */

// <00986523> vfx/vfx_bytecode_manager.cpp:179
// variables: 24
// function calls: 119
void CVfxByteCodeManager::SerializeStaticCombo(CUtlBuffer& buf, uint64 nStaticComboID, VfxProgram_t programType)
{
	int nStart; // 182
	int idx; // 185
	const char   __FUNCTION__; // 8574
	const StaticComboInfo_t& staticCombo; // 187
	CUtlVector<int, CUtlMemory<int, int> > uniqueByteCodeIdxs; // 194
	CUtlVector<int, CUtlMemory<int, int> > byteCodeUsage; // 197
	int nUniqueShaders; // 215
	CUtlVector<int, CUtlMemory<int, int> > byteCodeStartArray; // 218
	bool unusedValue; // 224
	int nUnskippedDynamicCombos; // 250
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 186
	}
	{
		int i; // 200
		{
			const DynamicComboInfo_t& dynamicCombo; // 202
			int nByteCodeIdx; // 204
			CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
					int i);  // 500
			operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
					int i);  // 202
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 207
			{
				int i; // 1531
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::Find(
				const int& src);  // 204
			CUtlVectorBase<int, CUtlMemory<int, int> >::IsValidIndex(
					int i);  // 205
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 209
		}
		Head(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 200
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
				int i);  // 368
		InternalElement(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
				int i);  // 550
		Next(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
			int i);  // 200
	}
	{
		int i; // 227
		{
			int nByteCodeSize; // 229
			uint8* pByteCode; // 230
			const CVfxHashValue  hashValue; // 243
			{
				uint i; // 291
				GetFmtStr<short unsigned int>(int nRadix,
								bool bPrint);  // 1244
				CUtlBuffer::PutType<short unsigned int>(
								short unsigned int src);  // 1236
				CUtlBuffer::PutType<short unsigned int>(
								short unsigned int src);  // 1330
				CUtlBuffer::PutUnsignedShort(
						short unsigned int s);  // 1319
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 1166
				CUtlBuffer::PeekPut(
					int offset);  // 1210
				CUtlBuffer::PutTypeBin<unsigned char>(
								unsigned char src);  // 1204
				CUtlBuffer::PutTypeBin<unsigned char>(
								unsigned char src);  // 1315
				CUtlBuffer::IsText(); // 1313
				CUtlBuffer::PutUnsignedChar(
						unsigned char c);  // 293
			}
			CVfxHashValue::Serialize(
					CUtlBuffer& buf);  // 244
			CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::operator[](
					int i);  // 161
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 174
			CVfxByteCodeManager::GetByteCode(
					int nByteCodeInfoIdx,
					int* pByteCodeSizeOut);  // 230
			CUtlBuffer::TellPut(); // 233
			CUtlBuffer::PutInt(
				int i);  // 236
			CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::operator[](
					int i);  // 243
		}
	}
	{
		int i; // 252
		{
			const DynamicComboInfo_t& dynamicCombo; // 254
			VfxProgramHasRenderState(VfxProgram_t programType); // 260
			GetFmtStr<long long int>(int nRadix,
						bool bPrint);  // 1244
			CUtlBuffer::PutType<long long int>(
						long long int src);  // 1236
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<long long int>(
							long long int src);  // 1204
			{
			}
			{
				int i; // 200
				{
					int i; // 214
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 218
				LowLevelByteSwap<long long int>(long long int* output,
								long long int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<long long int>(
								long long int* outputBuffer,
								long long int* inputBuffer,
								int count);  // 170
			CByteswap::SwapBufferToTargetEndian<long long int>(
								long long int* outputBuffer,
								long long int* inputBuffer,
								int count);  // 1214
			CUtlBuffer::PutTypeBin<long long int>(
							long long int src);  // 1240
			CUtlBuffer::IsText(); // 1238
			CUtlBuffer::PutType<long long int>(
						long long int src);  // 1340
			CUtlBuffer::PutInt64(
				int64 i);  // 256
			CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
					int i);  // 500
			operator[](const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
					int i);  // 254
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 257
			CUtlBuffer::PutInt(
				int i);  // 257
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 258
			CUtlBuffer::PutInt(
				int i);  // 258
		}
		Head(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 252
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::operator[](
				int i);  // 368
		InternalElement(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
				int i);  // 550
		Next(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this,
			int i);  // 252
	}
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::FindAltKeyType<long long unsigned int>(
						const long long unsigned int& search);  // 243
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Find(
		const KeyType_t& key);  // 185
	CUtlBuffer::TellPut(); // 182
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsIdxValid(
			int i);  // 661
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
			int i);  // 611
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::LeftChild(
			int i);  // 667
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsValidIndex(
			int i);  // 659
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsIdxAfter(
			int i,
			const Iterator_t& it);  // 664
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsValidIndex(
			int i);  // 190
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsValidIndex(
			IndexType_t i);  // 186
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
			int i);  // 545
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Element(
		int i);  // 93
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
			IndexType_t i);  // 187
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 194
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 197
	Count(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 198
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 218
	CUtlBuffer::PutInt(
		int i);  // 221
	CUtlBuffer::PutInt(
		int i);  // 251
	Count(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxB this); // 250
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 272
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 272
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 272
} /* size: 0, variables: 10, inline expansions: 56 (0 bytes) */

// <06AB315B> vfx/vfx_bytecode_manager.cpp:275
// function calls: 3
void CVfxByteCodeManager::ContainsValidCompiledShaders()
{
	CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::Count(); // 277
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::operator[](
			int i);  // 286
} /* size: 0, inline expansions: 3 (0 bytes) */

// <06AB2547> vfx/vfx_bytecode_manager.cpp:294
// variables: 3
// function calls: 53
void CVfxByteCodeManager::Reset()
{
	{
		int i; // 296
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
				int i);  // 611
		CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::LeftChild(
				int i);  // 1329
		CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::FirstInorder(); // 351
		CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::FirstInorder()(long long unsigned int this); // 296
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
				int i);  // 539
		CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Element(
			int i);  // 92
		CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
				IndexType_t i);  // 298
		ValidateAlignment<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int> >(void); // 508
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::Purge(); // 903
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::Purge(); // 510
		CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int>::~CUtlMemory(); // 462
		~CUtlLinkedList(const CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCod this); // 49
		StaticComboInfo_t::~StaticComboInfo_t(); // 298
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsIdxValid(
				int i);  // 661
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsIdxAfter(
				int i,
				const Iterator_t& it);  // 664
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
				int i);  // 611
		CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::LeftChild(
				int i);  // 667
		CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsValidIndex(
				int i);  // 659
		CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsValidIndex(
				int i);  // 1339
		CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::RightChild(
				int i);  // 1343
		{
			int left; // 1346
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
					int i);  // 611
			CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::LeftChild(
					int i);  // 1347
		}
		CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Parent(
			int i);  // 1352
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::operator[](
				int i);  // 617
		CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::RightChild(
				int i);  // 633
		CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsRightChild(
				int i);  // 1353
		CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Parent(
			int i);  // 1357
		CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::NextInorder(
				int i);  // 352
		CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::NextInorder(
				IndexType_t i);  // 296
	}
	{
		int i; // 302
		CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::Count(); // 302
		CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::operator[](
				int i);  // 304
	}
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Purge(); // 1287
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Purge(); // 347
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t::Purge()(long long unsigned int const this); // 300
	CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::Purge(); // 903
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> >::Purge(); // 309
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::Purge(); // 1287
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CVfxHashValue, int, int>::Node_t, int>, int>::InvalidIterator(); // 1288
	Purge(const CUtlRBTree<CUtlMap<CVfxHashValue, int, int>::Node_t, int, CUtlMap<CVfxHashValue, int, int>::CKeyLess, CUtlMemory<Ut this); // 347
	CUtlMap<CVfxHashValue, int, int, bool (::Purge()(const CVfxHashValue&, const CVfxHashValue&)>* this); // 310
} /* size: 608, inline expansions: 20 (595 bytes) */

