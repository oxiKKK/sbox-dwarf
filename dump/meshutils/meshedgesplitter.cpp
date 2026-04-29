
//
// meshutils/meshedgesplitter.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 46
//

// <05C267D5> meshutils/meshedgesplitter.cpp:9
// function call: 1
bool CompareHalfEdges(const HalfEdge_t& left, const HalfEdge_t& right)
{
	HalfEdge_t::operator<(
			const HalfEdge_t& right);  // 11
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05C26135> meshutils/meshedgesplitter.cpp:42
// variables: 6
// function calls: 26
void CMeshEdgeSplitter::CMeshEdgeSplitter(CMesh* pMesh)
{
	{
		uint nTriCount; // 50
		{
			uint nTri; // 51
			{
				uint32* pIndex; // 53
			}
		}
	}
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 69
	ValidateGrowSize(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this); // 475
	CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this,
			int nGrowSize,
			int nInitAllocationCount);  // 496
	InvalidIndex(void); // 498
	InvalidIndex(void); // 500
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this); // 501
	ResetDbgInfo(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this); // 503
	CUtlRBTree(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this,
			const LessFunc_t& lessfunc);  // 69
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::CUtlMap(
		LessFunc_t lessfunc);  // 43
	ValidateGrowSize(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this); // 475
	CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this,
			int nGrowSize,
			int nInitAllocationCount);  // 496
	InvalidIndex(void); // 498
	InvalidIndex(void); // 500
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this); // 501
	ResetDbgInfo(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this); // 503
	CUtlRBTree(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this,
			const LessFunc_t& lessfunc);  // 69
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 69
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::CUtlMap(
		LessFunc_t lessfunc);  // 43
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 530
	CUtlVectorBase(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 96
	CUtlPriorityQueue(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this,
				int growSize,
				int initSize,
				bool (*lessfunc)(const HalfEdgeWithLength_t &, const HalfEdgeWithLength_t &));  // 43
	{
		uint nTriCount; // 50
		{
			uint nTri; // 51
			{
				uint32* pIndex; // 53
			}
		}
	}
} /* size: 0, inline expansions: 26 (0 bytes) */

// <05C260E2> meshutils/meshedgesplitter.cpp:42
// variables: 3
void CMeshEdgeSplitter::CMeshEdgeSplitter(CMesh* pMesh)
{
	{
		uint nTriCount; // 50
		{
			uint nTri; // 51
			{
				uint32* pIndex; // 53
			}
		}
	}
} /* size: 0 */

// <05C26F51> meshutils/meshedgesplitter.cpp:69
// variables: 2
// function calls: 2
void CMeshEdgeSplitter::NewTri()
{
	uint nNewTri; // 71
	{
		uint32* pNewTris; // 75
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 76
	}
} /* size: 0, variables: 1 */

// <05C26096> meshutils/meshedgesplitter.cpp:69
// variables: 2
void CMeshEdgeSplitter::NewTri()
{
	uint nNewTri; // 71
	{
		uint32* pNewTris; // 75
	}
} /* size: 0, variables: 1 */

// <05C2704B> meshutils/meshedgesplitter.cpp:83
// variables: 3
// function calls: 4
void CMeshEdgeSplitter::NewTri(uint v0, uint v1, uint v2)
{
	uint nTri; // 85
	uint32* pTri; // 86
	{
		uint32* pNewTris; // 75
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 76
	}
	CMeshEdgeSplitter::NewTri(); // 85
	CMeshEdgeSplitter::GetTri(
		uint nIndex);  // 86
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <05C26040> meshutils/meshedgesplitter.cpp:83
// variables: 2
void CMeshEdgeSplitter::NewTri(uint v0, uint v1, uint v2)
{
	uint nTri; // 85
	uint32* pTri; // 86
} /* size: 0, variables: 2 */

// <05C25EE4> meshutils/meshedgesplitter.cpp:93
// variables: 3
// function calls: 2
void CMeshEdgeSplitter::NewVertex()
{
	uint nVert; // 95
	{
		int nStride; // 99
		float* pNewVerts; // 100
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 101
	}
} /* size: 0, variables: 1 */

// <05C25D51> meshutils/meshedgesplitter.cpp:110
// variables: 6
// function calls: 3
void CMeshEdgeSplitter::NewInterpolatedVertex(uint v0, uint v1)
{
	int nStride; // 112
	uint nNewVert; // 113
	float* pOut; // 114
	float* p0; // 116
	float* p1; // 116
	{
		int i; // 118
	}
	CMeshEdgeSplitter::GetVertex(
			uint nIndex);  // 114
	CMeshEdgeSplitter::GetVertex(
			uint nIndex);  // 116
	CMeshEdgeSplitter::GetVertex(
			uint nIndex);  // 116
} /* size: 0, variables: 5, inline expansions: 3 (0 bytes) */

// <05C258ED> meshutils/meshedgesplitter.cpp:126
// variables: 3
// function calls: 13
void CMeshEdgeSplitter::AddHalfEdge(uint v0, uint v1, uint v2, uint nTri, uint nOppositeIdx)
{
	HalfEdgeData_t data; // 128
	const char   __FUNCTION__; // 63752
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 150
	}
	FindAltKeyType<CMeshEdgeSplitter::HalfEdge_t>(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
							const HalfEdge_t& search);  // 243
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
		const KeyType_t& key);  // 132
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 132
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 329
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::InsertIfNotFound(
			const KeyType_t& key,
			const ElemType_t& insert);  // 135
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 135
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 143
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 329
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::InsertIfNotFound(
			const KeyType_t& key,
			const ElemType_t& insert);  // 143
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 150
	FindAltKeyType<CMeshEdgeSplitter::HalfEdge_t>(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
							const HalfEdge_t& search);  // 243
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
		const KeyType_t& key);  // 150
	HalfEdgeData_t::HalfEdgeData_t(); // 128
} /* size: 0, variables: 2, inline expansions: 13 (0 bytes) */

// <02D66E35> meshutils/meshedgesplitter.cpp:126
// variables: 3
// function calls: 13
void CMeshEdgeSplitter::AddHalfEdge(uint v0, uint v1, uint v2, uint nTri, uint nOppositeIdx)
{
	HalfEdgeData_t data; // 128
	const char   __FUNCTION__; // 56645
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 150
	}
	FindAltKeyType<CMeshEdgeSplitter::HalfEdge_t>(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
							const HalfEdge_t& search);  // 243
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
		const KeyType_t& key);  // 132
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 132
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 329
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::InsertIfNotFound(
			const KeyType_t& key,
			const ElemType_t& insert);  // 135
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 135
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 143
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 329
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::InsertIfNotFound(
			const KeyType_t& key,
			const ElemType_t& insert);  // 143
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 150
	FindAltKeyType<CMeshEdgeSplitter::HalfEdge_t>(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
							const HalfEdge_t& search);  // 243
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
		const KeyType_t& key);  // 150
	HalfEdgeData_t::HalfEdgeData_t(); // 128
} /* size: 0, variables: 2, inline expansions: 13 (0 bytes) */

// <01550A6D> meshutils/meshedgesplitter.cpp:126
// variables: 3
// function calls: 13
void CMeshEdgeSplitter::AddHalfEdge(uint v0, uint v1, uint v2, uint nTri, uint nOppositeIdx)
{
	HalfEdgeData_t data; // 128
	const char   __FUNCTION__; // 46829
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 150
	}
	FindAltKeyType<CMeshEdgeSplitter::HalfEdge_t>(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
							const HalfEdge_t& search);  // 243
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
		const KeyType_t& key);  // 132
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 132
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 329
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::InsertIfNotFound(
			const KeyType_t& key,
			const ElemType_t& insert);  // 135
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 135
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 143
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 329
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::InsertIfNotFound(
			const KeyType_t& key,
			const ElemType_t& insert);  // 143
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 150
	FindAltKeyType<CMeshEdgeSplitter::HalfEdge_t>(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
							const HalfEdge_t& search);  // 243
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
		const KeyType_t& key);  // 150
	HalfEdgeData_t::HalfEdgeData_t(); // 128
} /* size: 0, variables: 2, inline expansions: 13 (0 bytes) */

// <05C250B6> meshutils/meshedgesplitter.cpp:160
// variables: 6
// function calls: 34
void CMeshEdgeSplitter::AddToSplitLists(HalfEdgeIndex_t it)
{
	HalfEdge_t& he; // 162
	const Vector  v0; // 164
	const Vector  v1; // 165
	float flLenSqr; // 166
	{
		HalfEdgeWithLength_t hewl; // 170
		CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::NumAllocated(); // 1143
		CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 368
		ResetDbgInfo(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 824
		CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::IsGrowable(); // 823
		CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 228
		CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
				int i);  // 229
		Count(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, i this); // 71
		Count(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMesh this); // 207
		{
			int parent; // 213
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 214
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 214
			HewlFunctor_t::operator(
					const T& left,
					const T& right,
					bool (*lessFuncPtr)(const T &, const T &));  // 214
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 240
			Swap(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this,
				int index1,
				int index2);  // 218
		}
		PercolateUp(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this,
				int index);  // 205
		PercolateUp(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this,
				int index);  // 232
		Insert(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this,
			const HalfEdgeWithLength_t& element);  // 173
	}
	CMeshEdgeSplitter::GetVert(
		uint nIndex);  // 164
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this,
			unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this,
		unsigned int i);  // 94
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Key(
		IndexType_t i);  // 162
	CMeshEdgeSplitter::GetVert(
		uint nIndex);  // 165
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 166
	Vector::LengthSqr(); // 166
} /* size: 0, variables: 4, inline expansions: 9 (0 bytes) */

// <05C271F7> meshutils/meshedgesplitter.cpp:210
// function calls: 7
void CMeshEdgeSplitter::ClearSplitLists()
{
	RemoveAll(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 1798
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge(); // 903
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge(); // 1799
	ResetDbgInfo(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 1800
	Purge(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 77
	Purge(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this); // 213
} /* size: 0, inline expansions: 7 (0 bytes) */

// <05C25099> meshutils/meshedgesplitter.cpp:210
void CMeshEdgeSplitter::ClearSplitLists()
{
} /* size: 0 */

// <05C24564> meshutils/meshedgesplitter.cpp:226
// variables: 10
// function calls: 45
void CMeshEdgeSplitter::SplitLongEdges(float flMaxLength)
{
	int nInitialVerts; // 230
	int nInitialIndices; // 231
	float flLastSplit; // 245
	uint nSplitCount; // 246
	const char   __FUNCTION__; // 63823
	{
		HalfEdgeIndex_t it; // 239
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
				unsigned int i);  // 611
		LeftChild(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
				unsigned int i);  // 1329
		FirstInorder(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this); // 351
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::FirstInorder()(const CMeshE this); // 239
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::NextInorder(
				IndexType_t i);  // 239
	}
	{
		HalfEdgeWithLength_t hewl; // 249
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
		}
		{
			const bool  bNotLast; // 1578
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
			int i);  // 1575
		Destruct<CMeshEdgeSplitter::HalfEdgeWithLength_t>(HalfEdgeWithLength_t* pMemory); // 1575
		FastRemove(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
				int elem);  // 110
		{
			int child; // 174
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 178
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 178
			HewlFunctor_t::operator(
					const T& left,
					const T& right,
					bool (*lessFuncPtr)(const T &, const T &));  // 178
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 189
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 189
			HewlFunctor_t::operator(
					const T& left,
					const T& right,
					bool (*lessFuncPtr)(const T &, const T &));  // 189
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 238
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 239
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 240
			Swap(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this,
				int index1,
				int index2);  // 197
		}
		PercolateDown(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this,
				int index);  // 117
		RemoveAtHead(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this); // 258
		CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, i this,
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMesh this); // 249
	}
	RemoveAll(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 1798
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge(); // 903
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge(); // 1799
	ResetDbgInfo(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 1800
	Purge(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 77
	Purge(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this); // 213
	CMeshEdgeSplitter::ClearSplitLists(); // 228
	Count(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, i this); // 71
	Count(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMesh this); // 247
} /* size: 0, variables: 5, inline expansions: 10 (0 bytes) */

// <02D65AAC> meshutils/meshedgesplitter.cpp:226
// variables: 10
// function calls: 45
void CMeshEdgeSplitter::SplitLongEdges(float flMaxLength)
{
	int nInitialVerts; // 230
	int nInitialIndices; // 231
	float flLastSplit; // 245
	uint nSplitCount; // 246
	const char   __FUNCTION__; // 56716
	{
		HalfEdgeIndex_t it; // 239
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
				unsigned int i);  // 611
		LeftChild(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
				unsigned int i);  // 1329
		FirstInorder(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this); // 351
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::FirstInorder()(const CMeshE this); // 239
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::NextInorder(
				IndexType_t i);  // 239
	}
	{
		HalfEdgeWithLength_t hewl; // 249
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
		}
		{
			const bool  bNotLast; // 1578
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
			int i);  // 1575
		Destruct<CMeshEdgeSplitter::HalfEdgeWithLength_t>(HalfEdgeWithLength_t* pMemory); // 1575
		FastRemove(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
				int elem);  // 110
		{
			int child; // 174
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 178
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 178
			HewlFunctor_t::operator(
					const T& left,
					const T& right,
					bool (*lessFuncPtr)(const T &, const T &));  // 178
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 189
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 189
			HewlFunctor_t::operator(
					const T& left,
					const T& right,
					bool (*lessFuncPtr)(const T &, const T &));  // 189
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 238
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 239
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 240
			Swap(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this,
				int index1,
				int index2);  // 197
		}
		PercolateDown(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this,
				int index);  // 117
		RemoveAtHead(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this); // 258
		CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, i this,
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMesh this); // 249
	}
	RemoveAll(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 1798
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge(); // 903
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge(); // 1799
	ResetDbgInfo(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 1800
	Purge(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 77
	Purge(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this); // 213
	CMeshEdgeSplitter::ClearSplitLists(); // 228
	Count(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, i this); // 71
	Count(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMesh this); // 247
} /* size: 0, variables: 5, inline expansions: 10 (0 bytes) */

// <0154F6E4> meshutils/meshedgesplitter.cpp:226
// variables: 10
// function calls: 45
void CMeshEdgeSplitter::SplitLongEdges(float flMaxLength)
{
	int nInitialVerts; // 230
	int nInitialIndices; // 231
	float flLastSplit; // 245
	uint nSplitCount; // 246
	const char   __FUNCTION__; // 46900
	{
		HalfEdgeIndex_t it; // 239
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
				unsigned int i);  // 611
		LeftChild(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
				unsigned int i);  // 1329
		FirstInorder(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this); // 351
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::FirstInorder()(const CMeshE this); // 239
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::NextInorder(
				IndexType_t i);  // 239
	}
	{
		HalfEdgeWithLength_t hewl; // 249
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
		}
		{
			const bool  bNotLast; // 1578
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
			int i);  // 1575
		Destruct<CMeshEdgeSplitter::HalfEdgeWithLength_t>(HalfEdgeWithLength_t* pMemory); // 1575
		FastRemove(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
				int elem);  // 110
		{
			int child; // 174
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 178
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 178
			HewlFunctor_t::operator(
					const T& left,
					const T& right,
					bool (*lessFuncPtr)(const T &, const T &));  // 178
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 189
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 189
			HewlFunctor_t::operator(
					const T& left,
					const T& right,
					bool (*lessFuncPtr)(const T &, const T &));  // 189
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 238
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 239
			CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >  this,
					int i);  // 240
			Swap(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this,
				int index1,
				int index2);  // 197
		}
		PercolateDown(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this,
				int index);  // 117
		RemoveAtHead(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this); // 258
		CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, i this,
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMesh this); // 249
	}
	RemoveAll(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 1798
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge(); // 903
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge(); // 1799
	ResetDbgInfo(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 1800
	Purge(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 77
	Purge(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this); // 213
	CMeshEdgeSplitter::ClearSplitLists(); // 228
	Count(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, i this); // 71
	Count(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMesh this); // 247
} /* size: 0, variables: 5, inline expansions: 10 (0 bytes) */

// <05C242AC> meshutils/meshedgesplitter.cpp:299
// variables: 3
// function calls: 8
void CMeshEdgeSplitter::SplitEdge(HalfEdgeIndex_t itEdge)
{
	HalfEdge_t he; // 301
	uint nVertCenter; // 302
	HalfEdgeIndex_t itSecEdge; // 307
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this,
			unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this,
		unsigned int i);  // 94
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Key(
		IndexType_t i);  // 301
	CMeshEdgeSplitter::NewInterpolatedVertex(
				HalfEdge_t he);  // 302
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 54
	HalfEdge_t::GetReverse(); // 307
	FindAltKeyType<CMeshEdgeSplitter::HalfEdge_t>(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
							const HalfEdge_t& search);  // 243
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
		const KeyType_t& key);  // 307
} /* size: 0, variables: 3, inline expansions: 8 (0 bytes) */

// <05C23904> meshutils/meshedgesplitter.cpp:316
// variables: 9
// function calls: 27
void CMeshEdgeSplitter::SplitEdge(HalfEdgeMap& refMap, HalfEdgeIndex_t itEdge, uint nVertCenter)
{
	HalfEdge_t he; // 318
	uint nTri; // 319
	uint32* pTriangleToSplit; // 322
	int itOppositeVert012; // 323
	uint nOppositeVert; // 326
	uint nNewTri; // 338
	HalfEdgeIndex_t itNewEdge0; // 343
	HalfEdgeIndex_t itNewEdge1; // 345
	HalfEdgeIndex_t itNewEdge3; // 350
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this,
			unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this,
		unsigned int i);  // 94
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Key(
		IndexType_t i);  // 318
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::RemoveAt(
		IndexType_t i);  // 320
	CMeshEdgeSplitter::GetTri(
		uint nIndex);  // 322
	CMeshEdgeSplitter::GetTri(
		uint nIndex);  // 86
	CMeshEdgeSplitter::NewTri(
		uint v0,
		uint v1,
		uint v2);  // 338
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 339
	HalfEdgeData_t::HalfEdgeData_t(
			uint nTri,
			uint nOppositeVert);  // 339
	HalfEdgeData_t::HalfEdgeData_t(
			uint nTri,
			uint nOppositeVert);  // 341
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 341
	HalfEdgeData_t::HalfEdgeData_t(
			uint nTri,
			uint nOppositeVert);  // 343
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 343
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 343
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 345
	HalfEdgeData_t::HalfEdgeData_t(
			uint nTri,
			uint nOppositeVert);  // 345
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 345
	HalfEdgeData_t::HalfEdgeData_t(
			uint nTri,
			uint nOppositeVert);  // 348
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 348
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 348
	HalfEdgeData_t::HalfEdgeData_t(
			uint nTri,
			uint nOppositeVert);  // 350
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 350
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 350
} /* size: 0, variables: 9, inline expansions: 27 (0 bytes) */

// <05C2386C> meshutils/meshedgesplitter.cpp:362
void CMeshEdgeSplitter::IsBorderVertex(uint nVertex)
{
} /* size: 0 */

// <05C23591> meshutils/meshedgesplitter.cpp:369
// variables: 2
// function calls: 12
void CMeshEdgeSplitter::HasBorderEdges()
{
	{
		HalfEdgeIndex_t it; // 373
		{
			HalfEdge_t he; // 375
			operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this,
					unsigned int i);  // 539
			Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this,
				unsigned int i);  // 94
			CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Key(
				IndexType_t i);  // 375
			FindAltKeyType<CMeshEdgeSplitter::HalfEdge_t>(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
									const HalfEdge_t& search);  // 243
			CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
				const KeyType_t& key);  // 376
			HalfEdge_t::HalfEdge_t(
					uint nVert0,
					uint nVert1);  // 54
			HalfEdge_t::GetReverse(); // 376
		}
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
				unsigned int i);  // 611
		LeftChild(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
				unsigned int i);  // 1329
		FirstInorder(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this); // 351
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::FirstInorder()(const CMeshE this); // 373
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::NextInorder(
				IndexType_t i);  // 373
	}
} /* size: 0 */

// <05C23013> meshutils/meshedgesplitter.cpp:384
// variables: 4
// function calls: 20
void IsBorderVertex(uint nVertex, const HalfEdgeMap& hePri, const HalfEdgeMap& heSec)
{
	HalfEdgeIndex_t itPriEdge; // 386
	const char   __FUNCTION__; // 63823
	{
		HalfEdge_t he; // 390
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 391
		}
		HalfEdge_t::HalfEdge_t(
				uint nVert0,
				uint nVert1);  // 54
		HalfEdge_t::GetReverse(); // 398
		FindAltKeyType<CMeshEdgeSplitter::HalfEdge_t>(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
								const HalfEdge_t& search);  // 243
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
			const KeyType_t& key);  // 398
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
				unsigned int i);  // 545
		Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
			unsigned int i);  // 95
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Key(
			IndexType_t i);  // 390
	}
	HalfEdgeData_t::HalfEdgeData_t(); // 405
	Node_t::Node_t(
		const KeyType_t& k);  // 335
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
			unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
			unsigned int i);  // 1808
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
			unsigned int i);  // 545
	Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
		unsigned int i);  // 1806
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1806
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1810
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
			unsigned int i);  // 617
	RightChild(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
			unsigned int i);  // 1812
	Find(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
		const Node_t& search,
		FindCondition_t findCondition);  // 335
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
		const KeyType_t& key,
		FindCondition_t findCondition);  // 386
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 386
} /* size: 0, variables: 2, inline expansions: 13 (0 bytes) */

// <02D6455B> meshutils/meshedgesplitter.cpp:384
// variables: 4
// function calls: 20
void IsBorderVertex(uint nVertex, const HalfEdgeMap& hePri, const HalfEdgeMap& heSec)
{
	HalfEdgeIndex_t itPriEdge; // 386
	const char   __FUNCTION__; // 56716
	{
		HalfEdge_t he; // 390
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 391
		}
		HalfEdge_t::HalfEdge_t(
				uint nVert0,
				uint nVert1);  // 54
		HalfEdge_t::GetReverse(); // 398
		FindAltKeyType<CMeshEdgeSplitter::HalfEdge_t>(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
								const HalfEdge_t& search);  // 243
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
			const KeyType_t& key);  // 398
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
				unsigned int i);  // 545
		Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
			unsigned int i);  // 95
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Key(
			IndexType_t i);  // 390
	}
	HalfEdgeData_t::HalfEdgeData_t(); // 405
	Node_t::Node_t(
		const KeyType_t& k);  // 335
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
			unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
			unsigned int i);  // 1808
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
			unsigned int i);  // 545
	Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
		unsigned int i);  // 1806
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1806
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1810
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
			unsigned int i);  // 617
	RightChild(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
			unsigned int i);  // 1812
	Find(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
		const Node_t& search,
		FindCondition_t findCondition);  // 335
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
		const KeyType_t& key,
		FindCondition_t findCondition);  // 386
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 386
} /* size: 0, variables: 2, inline expansions: 13 (0 bytes) */

// <0154E193> meshutils/meshedgesplitter.cpp:384
// variables: 4
// function calls: 20
void IsBorderVertex(uint nVertex, const HalfEdgeMap& hePri, const HalfEdgeMap& heSec)
{
	HalfEdgeIndex_t itPriEdge; // 386
	const char   __FUNCTION__; // 46900
	{
		HalfEdge_t he; // 390
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 391
		}
		HalfEdge_t::HalfEdge_t(
				uint nVert0,
				uint nVert1);  // 54
		HalfEdge_t::GetReverse(); // 398
		FindAltKeyType<CMeshEdgeSplitter::HalfEdge_t>(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
								const HalfEdge_t& search);  // 243
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
			const KeyType_t& key);  // 398
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
				unsigned int i);  // 545
		Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
			unsigned int i);  // 95
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Key(
			IndexType_t i);  // 390
	}
	HalfEdgeData_t::HalfEdgeData_t(); // 405
	Node_t::Node_t(
		const KeyType_t& k);  // 335
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
			unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
			unsigned int i);  // 1808
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
			unsigned int i);  // 545
	Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
		unsigned int i);  // 1806
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1806
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1810
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
			unsigned int i);  // 617
	RightChild(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
			unsigned int i);  // 1812
	Find(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
		const Node_t& search,
		FindCondition_t findCondition);  // 335
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
		const KeyType_t& key,
		FindCondition_t findCondition);  // 386
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 386
} /* size: 0, variables: 2, inline expansions: 13 (0 bytes) */

// <05C22C73> meshutils/meshedgesplitter.cpp:409
// function calls: 13
void CMeshEdgeSplitter::FindFirstPrimaryHalfEdgeOfVertex(uint nVertex)
{
	HalfEdgeData_t::HalfEdgeData_t(); // 405
	Node_t::Node_t(
		const KeyType_t& k);  // 335
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
			unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
			unsigned int i);  // 1808
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
			unsigned int i);  // 545
	Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
		unsigned int i);  // 1806
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1806
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1810
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
			unsigned int i);  // 617
	RightChild(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
			unsigned int i);  // 1812
	Find(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
		const Node_t& search,
		FindCondition_t findCondition);  // 335
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
		const KeyType_t& key,
		FindCondition_t findCondition);  // 411
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 411
} /* size: 0, inline expansions: 13 (0 bytes) */

// <05C22BCB> meshutils/meshedgesplitter.cpp:415
// function call: 1
void CMeshEdgeSplitter::FindNextPrimaryHalfEdge(HalfEdgeIndex_t hei)
{
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::NextInorder(
			IndexType_t i);  // 417
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05C22B98> meshutils/meshedgesplitter.cpp:421
void CMeshEdgeSplitter::GetInvalidPrimaryHalfEdge()
{
} /* size: 0 */

// <05C22B1C> meshutils/meshedgesplitter.cpp:428
void CMeshEdgeSplitter::GetMinPrimaryHalfEdgeAngle(float flAngleOfBorderEdge)
{
} /* size: 0 */

// <05C22AA0> meshutils/meshedgesplitter.cpp:433
void CMeshEdgeSplitter::GetMinSecondaryHalfEdgeAngle(float flAngleOfBorderEdge)
{
} /* size: 0 */

// <05C22886> meshutils/meshedgesplitter.cpp:438
// variables: 3
// function calls: 5
void CMeshEdgeSplitter::GetMinHalfEdgeAngle(const HalfEdgeMap& hePri, const HalfEdgeMap& heSec, float flAngleOfBorderEdge)
{
	float flMinAngle; // 440
	{
		HalfEdgeIndex_t it; // 441
		{
			float flAngle; // 443
		}
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
				unsigned int i);  // 611
		LeftChild(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
				unsigned int i);  // 1329
		FirstInorder(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this); // 351
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::FirstInorder()(const CMeshE this); // 441
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::NextInorder(
				IndexType_t i);  // 441
	}
} /* size: 0, variables: 1 */

// <05C227EF> meshutils/meshedgesplitter.cpp:451
void CMeshEdgeSplitter::GetPrimaryHalfEdgeAngle(HalfEdgeIndex_t it, float flAngleOfBorderEdge)
{
} /* size: 0 */

// <05C22758> meshutils/meshedgesplitter.cpp:457
void CMeshEdgeSplitter::GetSecondaryHalfEdgeAngle(HalfEdgeIndex_t it, float flAngleOfBorderEdge)
{
} /* size: 0 */

// <05C21D3B> meshutils/meshedgesplitter.cpp:463
// variables: 18
// function calls: 38
void CMeshEdgeSplitter::GetHalfEdgeAngle(const HalfEdgeMap& hePri, const HalfEdgeMap& heSec, HalfEdgeIndex_t it, float flReturnIfBorderEdge)
{
	HalfEdge_t he; // 465
	HalfEdgeData_t hedPrimary; // 466
	HalfEdgeIndex_t itSec; // 467
	HalfEdgeData_t hedSecondary; // 473
	Vector v0; // 474
	Vector v1; // 474
	Vector vPrimary; // 475
	Vector vSecondary; // 475
	Vector vEdge; // 481
	Vector vPrimaryEdge; // 481
	Vector vSecondaryEdge; // 481
	Vector vPrimaryNormal; // 482
	Vector vSecondaryNormal; // 482
	Vector vConcavityDir; // 483
	float flConcavity; // 485
	float y; // 494
	float x; // 494
	float flAngle; // 495
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
			unsigned int i);  // 545
	Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
		unsigned int i);  // 95
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Key(
		IndexType_t i);  // 465
	FindAltKeyType<CMeshEdgeSplitter::HalfEdge_t>(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
							const HalfEdge_t& search);  // 243
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
		const KeyType_t& key);  // 467
	HalfEdge_t::HalfEdge_t(
			uint nVert0,
			uint nVert1);  // 54
	HalfEdge_t::GetReverse(); // 467
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
			unsigned int i);  // 545
	Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
		unsigned int i);  // 93
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::operator[](
			IndexType_t i);  // 473
	CMeshEdgeSplitter::GetVert(
		uint nIndex);  // 474
	CMeshEdgeSplitter::GetVert(
		uint nIndex);  // 474
	CMeshEdgeSplitter::GetVert(
		uint nIndex);  // 475
	CMeshEdgeSplitter::GetVert(
		uint nIndex);  // 475
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 481
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 481
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 482
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 481
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 482
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 483
	DotProduct(const Vector& a,
			const Vector& b);  // 485
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 494
	DotProduct(const Vector& a,
			const Vector& b);  // 494
	Sign(float x); // 496
} /* size: 0, variables: 18, inline expansions: 38 (0 bytes) */

// <05C21A1F> meshutils/meshedgesplitter.cpp:501
// variable: 1
// function calls: 10
void CMeshEdgeSplitter::FindHalfEdge(const HalfEdgeMap& heMap, const HalfEdge_t he, uint nTri)
{
	{
		HalfEdgeIndex_t it; // 503
		FindAltKeyType<CMeshEdgeSplitter::HalfEdge_t>(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
								const HalfEdge_t& search);  // 243
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
			const KeyType_t& key);  // 503
		HalfEdge_t::operator!=(
				const HalfEdge_t& right);  // 511
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
				unsigned int i);  // 545
		Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
			unsigned int i);  // 93
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::operator[](
				IndexType_t i);  // 505
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::NextInorder(
				IndexType_t i);  // 510
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this,
				unsigned int i);  // 545
		Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
			unsigned int i);  // 95
		CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Key(
			IndexType_t i);  // 511
	}
} /* size: 0 */

// <05C21788> meshutils/meshedgesplitter.cpp:519
// variables: 3
// function calls: 6
void CMeshEdgeSplitter::ReplaceHalfEdgeTri(const HalfEdge_t he, uint nWasTri, const HalfEdgeData_t& newTri)
{
	HalfEdgeIndex_t it; // 521
	const char   __FUNCTION__; // 63921
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 535
	}
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this,
			unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this,
		unsigned int i);  // 92
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::operator[](
			IndexType_t i);  // 524
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this,
			unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this,
		unsigned int i);  // 92
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::operator[](
			IndexType_t i);  // 531
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <02D62CD0> meshutils/meshedgesplitter.cpp:519
// variables: 3
// function calls: 6
void CMeshEdgeSplitter::ReplaceHalfEdgeTri(const HalfEdge_t he, uint nWasTri, const HalfEdgeData_t& newTri)
{
	HalfEdgeIndex_t it; // 521
	const char   __FUNCTION__; // 56814
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 535
	}
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this,
			unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this,
		unsigned int i);  // 92
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::operator[](
			IndexType_t i);  // 524
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this,
			unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this,
		unsigned int i);  // 92
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::operator[](
			IndexType_t i);  // 531
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <0154C908> meshutils/meshedgesplitter.cpp:519
// variables: 3
// function calls: 6
void CMeshEdgeSplitter::ReplaceHalfEdgeTri(const HalfEdge_t he, uint nWasTri, const HalfEdgeData_t& newTri)
{
	HalfEdgeIndex_t it; // 521
	const char   __FUNCTION__; // 46998
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 535
	}
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this,
			unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this,
		unsigned int i);  // 92
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::operator[](
			IndexType_t i);  // 524
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this,
			unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this,
		unsigned int i);  // 92
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::operator[](
			IndexType_t i);  // 531
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <05C21609> meshutils/meshedgesplitter.cpp:541
// variables: 5
void CMeshEdgeSplitter::GetOppositeVertIt(const HalfEdge_t he, const uint32* pTri)
{
	const char   __FUNCTION__; // 63894
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 545
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 550
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 555
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 558
	}
} /* size: 0, variables: 1 */

// <02D62B51> meshutils/meshedgesplitter.cpp:541
// variables: 5
void CMeshEdgeSplitter::GetOppositeVertIt(const HalfEdge_t he, const uint32* pTri)
{
	const char   __FUNCTION__; // 56787
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 545
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 550
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 555
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 558
	}
} /* size: 0, variables: 1 */

// <0154C789> meshutils/meshedgesplitter.cpp:541
// variables: 5
void CMeshEdgeSplitter::GetOppositeVertIt(const HalfEdge_t he, const uint32* pTri)
{
	const char   __FUNCTION__; // 46971
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 545
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 550
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 555
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 558
	}
} /* size: 0, variables: 1 */

// <05C2130C> meshutils/meshedgesplitter.cpp:565
// variable: 1
// function calls: 10
void CMeshEdgeSplitter::GetTri(const HalfEdge_t he)
{
	HalfEdgeIndex_t it; // 567
	FindAltKeyType<CMeshEdgeSplitter::HalfEdge_t>(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
							const HalfEdge_t& search);  // 243
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
		const KeyType_t& key);  // 567
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this,
			unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this,
		unsigned int i);  // 92
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::operator[](
			IndexType_t i);  // 570
	FindAltKeyType<CMeshEdgeSplitter::HalfEdge_t>(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, u this,
							const HalfEdge_t& search);  // 243
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::Find(
		const KeyType_t& key);  // 574
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this,
			unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this,
		unsigned int i);  // 92
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::operator[](
			IndexType_t i);  // 577
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <05C2734E> meshutils/meshedgesplitter.cpp:589
void CMeshEdgeSplitter::Validate()
{
} /* size: 0 */

// <05C211BB> meshutils/meshedgesplitter.cpp:589
// variables: 21
void CMeshEdgeSplitter::Validate()
{
	const char   __FUNCTION__; // 63681
	{
		HalfEdgeIndex_t it; // 594
		{
			HalfEdge_t he; // 596
			HalfEdgeData_t data; // 597
			const uint32* pTri; // 598
			int itOpposite; // 599
			uint nFoundOppositeVert; // 601
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 600
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 602
			}
		}
	}
	{
		HalfEdgeIndex_t it; // 605
		{
			HalfEdge_t heSecEdge; // 607
			HalfEdgeData_t heSecData; // 608
			uint32* pTri; // 609
			int nOppositeVert; // 610
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 611
			}
		}
	}
	{
		int nTri; // 614
		{
			uint32* pTri; // 616
			{
				int nVert0; // 617
				{
					int nVert1; // 619
					int nFoundTri; // 621
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 622
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <02D62703> meshutils/meshedgesplitter.cpp:589
// variables: 21
void CMeshEdgeSplitter::Validate()
{
	const char   __FUNCTION__; // 56574
	{
		HalfEdgeIndex_t it; // 594
		{
			HalfEdge_t he; // 596
			HalfEdgeData_t data; // 597
			const uint32* pTri; // 598
			int itOpposite; // 599
			uint nFoundOppositeVert; // 601
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 600
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 602
			}
		}
	}
	{
		HalfEdgeIndex_t it; // 605
		{
			HalfEdge_t heSecEdge; // 607
			HalfEdgeData_t heSecData; // 608
			uint32* pTri; // 609
			int nOppositeVert; // 610
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 611
			}
		}
	}
	{
		int nTri; // 614
		{
			uint32* pTri; // 616
			{
				int nVert0; // 617
				{
					int nVert1; // 619
					int nFoundTri; // 621
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 622
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <0154C33B> meshutils/meshedgesplitter.cpp:589
// variables: 21
void CMeshEdgeSplitter::Validate()
{
	const char   __FUNCTION__; // 46758
	{
		HalfEdgeIndex_t it; // 594
		{
			HalfEdge_t he; // 596
			HalfEdgeData_t data; // 597
			const uint32* pTri; // 598
			int itOpposite; // 599
			uint nFoundOppositeVert; // 601
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 600
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 602
			}
		}
	}
	{
		HalfEdgeIndex_t it; // 605
		{
			HalfEdge_t heSecEdge; // 607
			HalfEdgeData_t heSecData; // 608
			uint32* pTri; // 609
			int nOppositeVert; // 610
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 611
			}
		}
	}
	{
		int nTri; // 614
		{
			uint32* pTri; // 616
			{
				int nVert0; // 617
				{
					int nVert1; // 619
					int nFoundTri; // 621
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 622
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

