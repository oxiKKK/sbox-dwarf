
//
// meshutils/quickhullbuilder.cpp
//
//	referenced by: libengine2.so
//
//	functions: 17
//

// <05C7DC3C> meshutils/quickhullbuilder.cpp:28
// variable: 1
// function calls: 9
void CQuickHullBuilder::~CQuickHullBuilder()
{
	{
		int i; // 1807
		CUtlMemory<qhConvex::operator[](
				int i);  // 602
		CUtlVectorBase<qhConvex::Element(
			int i);  // 1809
	}
	CUtlVectorBase<qhConvex::RemoveAll(); // 1798
	CUtlMemory<qhConvex::IsExternallyAllocated(); // 905
	CUtlMemory<qhConvex::Purge(); // 903
	CUtlMemory<qhConvex::Purge(); // 1799
	CUtlVectorBase<qhConvex::Purge(); // 1811
	CUtlVectorBase<qhConvex::PurgeAndDeleteElements(); // 38
	CQuickHullBuilder::Clear(); // 30
} /* size: 139, inline expansions: 7 (300 bytes) */

// <05C7DC20> meshutils/quickhullbuilder.cpp:28
void CQuickHullBuilder::~CQuickHullBuilder()
{
} /* size: 0 */

// <05C7E591> meshutils/quickhullbuilder.cpp:36
// variable: 1
// function calls: 9
void CQuickHullBuilder::Clear()
{
	{
		int i; // 1807
		CUtlMemory<qhConvex::operator[](
				int i);  // 602
		CUtlVectorBase<qhConvex::Element(
			int i);  // 1809
	}
	CUtlVectorBase<qhConvex::RemoveAll(); // 1798
	CUtlMemory<qhConvex::IsExternallyAllocated(); // 905
	CUtlMemory<qhConvex::Purge(); // 903
	CUtlMemory<qhConvex::Purge(); // 1799
	CUtlVectorBase<qhConvex::ResetDbgInfo(); // 1800
	CUtlVectorBase<qhConvex::Purge(); // 1811
	CUtlVectorBase<qhConvex::PurgeAndDeleteElements(); // 38
} /* size: 0, inline expansions: 7 (0 bytes) */

// <05C7DC04> meshutils/quickhullbuilder.cpp:36
void CQuickHullBuilder::Clear()
{
} /* size: 0 */

// <05C7DBA1> meshutils/quickhullbuilder.cpp:44
// function call: 1
void CQuickHullBuilder::GetNumHulls()
{
	CUtlVectorBase<qhConvex::Count(); // 46
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05C7E7D0> meshutils/quickhullbuilder.cpp:52
// function calls: 4
void CQuickHullBuilder::GetHull(int nHull)
{
	CUtlVectorBase<qhConvex::Count(); // 54
	{
	}
	CUtlMemory<qhConvex::operator[](
			int i);  // 595
	CUtlVectorBase<qhConvex::operator[](
			int i);  // 58
	CUtlVectorBase<qhConvex::Count(); // 55
} /* size: 0, inline expansions: 4 (12 bytes) */

// <05C7DB39> meshutils/quickhullbuilder.cpp:52
// variables: 2
void CQuickHullBuilder::GetHull(int nHull)
{
	const char   __FUNCTION__; // 11083
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 54
	}
} /* size: 0, variables: 1 */

// <05C7D866> meshutils/quickhullbuilder.cpp:64
// variables: 3
// function calls: 10
void CQuickHullBuilder::TakeHull(int nHull)
{
	const char   __FUNCTION__; // 11110
	qhConvex* pHull; // 70
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 66
	}
	CUtlVectorBase<qhConvex::Count(); // 66
	CUtlMemory<qhConvex::operator[](
			int i);  // 588
	CUtlVectorBase<qhConvex::operator[](
			int i);  // 70
	CUtlMemory<qhConvex::operator[](
			int i);  // 602
	CUtlVectorBase<qhConvex::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<qhConvex::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<qhConvex::Remove(
		int elem);  // 73
	CUtlVectorBase<qhConvex::Count(); // 67
} /* size: 0, variables: 2, inline expansions: 10 (0 bytes) */

// <05C7D277> meshutils/quickhullbuilder.cpp:82
// function calls: 27
void CQuickHullBuilder::TakeAllHulls(CUtlVector<qhConvex*, CUtlMemory<qhConvex*, int> >* pOutHullList)
{
	CUtlVectorBase<qhConvex::Count(); // 573
	CUtlVectorBase<qhConvex::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<qhConvex::NumAllocated(); // 782
	CUtlMemory<qhConvex::Base(); // 112
	CUtlVectorBase<qhConvex::Base(); // 368
	CUtlVectorBase<qhConvex::ResetDbgInfo(); // 824
	CUtlVectorBase<qhConvex::GrowMemory(
			int num);  // 784
	CUtlVectorBase<qhConvex::GrowVector(
			int num);  // 1445
	CUtlVectorBase<qhConvex::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<qhConvex::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<qhConvex::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<qhConvex::SetCount(
		int count);  // 573
	CUtlMemory<qhConvex::Base(); // 112
	CUtlVectorBase<qhConvex::Base(); // 102
	CUtlVectorBase<qhConvex::begin(); // 574
	CUtlMemory<qhConvex::Base(); // 113
	CUtlVectorBase<qhConvex::Base(); // 105
	CUtlVectorBase<qhConvex::Count(); // 105
	CUtlVectorBase<qhConvex::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<qhConvex*>(qhConvex* const* pFrom,
					qhConvex* const* pFromEnd,
					qhConvex** pTo);  // 173
	UtlTraitsCopyRange<qhConvex*>(qhConvex* const* pFrom,
					qhConvex* const* pFromEnd,
					qhConvex** pTo);  // 574
	CUtlVectorBase<qhConvex::operator=(
			const CUtlVectorBase<qhConvex*, CUtlMemory<qhConvex*, int> >& other);  // 565
	CUtlVectorBase<qhConvex::operator=(
			const CUtlVectorBase<qhConvex*, CUtlMemory<qhConvex*, int> >& other);  // 452
	CUtlVector<qhConvex::operator=(
			const CUtlVector<qhConvex*, CUtlMemory<qhConvex*, int> >& src);  // 84
	CUtlVectorBase<qhConvex::RemoveAll(); // 85
} /* size: 0, inline expansions: 27 (0 bytes) */

// <05C7CC3B> meshutils/quickhullbuilder.cpp:92
// variables: 4
// function calls: 26
void CQuickHullBuilder::GetHullVertics(int nHull, CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutVertices)
{
	const qhConvex* pConvexHull; // 94
	{
		const qhVertex* itVertex; // 99
		{
			Vector vertexPosition; // 101
			CUtlMemory<Vector, int>::Base(); // 112
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 1201
			CopyConstruct<Vector>(Vector* pMemory,
						const Vector& src);  // 1201
			CUtlMemory<Vector, int>::NumAllocated(); // 1196
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
					const Vector& src);  // 102
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 101
		}
		qhList<qhVertex>::Begin(); // 99
	}
	CUtlVectorBase<qhConvex::Count(); // 54
	{
	}
	CUtlMemory<qhConvex::operator[](
			int i);  // 595
	CUtlVectorBase<qhConvex::operator[](
			int i);  // 58
	CUtlVectorBase<qhConvex::Count(); // 55
	CQuickHullBuilder::GetHull(
		int nHull);  // 94
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 98
	{
		const qhVertex* Node; // 62
		qhList<qhVertex>::Begin(); // 62
		qhList<qhVertex>::End(); // 62
	}
	qhList<qhVertex>::Size(); // 33
	qhConvex::GetVertexCount(); // 98
	CUtlMemory<Vector, int>::IsGrowable(); // 881
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 888
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::EnsureCapacity(
			int num);  // 98
} /* size: 0, variables: 1, inline expansions: 13 (0 bytes) */

// <05C7C925> meshutils/quickhullbuilder.cpp:111
// variable: 1
// function calls: 9
void CQuickHullBuilder::CreateHullFromConvexHullVertices(const Vector* pVertices, int nNumVertices)
{
	qhConvex* pConvex; // 113
	CUtlMemory<qhConvex::NumAllocated(); // 1196
	CUtlMemory<qhConvex::operator[](
			int i);  // 602
	CUtlVectorBase<qhConvex::Element(
		int i);  // 1201
	CopyConstruct<qhConvex*>(qhConvex** pMemory,
				qhConvex* const& src);  // 1201
	CUtlMemory<qhConvex::Base(); // 112
	CUtlVectorBase<qhConvex::Base(); // 368
	CUtlVectorBase<qhConvex::ResetDbgInfo(); // 824
	CUtlVectorBase<qhConvex::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<qhConvex::AddToTail(
			qhConvex* const& src);  // 126
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <05C7B913> meshutils/quickhullbuilder.cpp:135
// variables: 9
// function calls: 55
void CQuickHullBuilder::CreateHullFromMeshVertices(const Vector* pVertices, int nNumVertices, const HullSimplificationParams_t& params)
{
	qhConvex* pConvex; // 138
	{
		CUtlVector<Vector, CUtlMemory<Vector, int> > extrude; // 147
		{
			int i; // 149
			{
				const Vector& p; // 153
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 155
				Vector::operator=(
						const Vector& vOther);  // 154
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 155
				Vector::operator=(
						const Vector& vOther);  // 155
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 156
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 156
				Vector::operator=(
						const Vector& vOther);  // 156
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 157
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 157
				Vector::operator=(
						const Vector& vOther);  // 157
			}
		}
		CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
		CUtlMemory<Vector, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 147
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowVector(
				int num);  // 1445
		{
			int i; // 1451
		}
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount(
			int count);  // 148
		Max<float>(const float& val1,
				const float& val2);  // 160
		CUtlMemory<Vector, int>::Purge(); // 903
		CUtlMemory<Vector, int>::Purge(); // 1799
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
		ValidateAlignment<Vector>(void); // 508
		CUtlMemory<Vector, int>::Purge(); // 510
		CUtlMemory<Vector, int>::~CUtlMemory(); // 562
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
		CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 166
		CUtlMemory<Vector, int>::Purge(); // 903
		CUtlMemory<Vector, int>::Purge(); // 1799
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
		ValidateAlignment<Vector>(void); // 508
		CUtlMemory<Vector, int>::Purge(); // 510
		CUtlMemory<Vector, int>::~CUtlMemory(); // 562
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
		CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 166
	}
	{
		int i; // 179
		{
			qhConvex* pSimpified; // 181
		}
	}
	{
		qhConvex* pSimplified; // 198
	}
	{
		qhConvex* pSimplified; // 206
	}
	Max<float>(const float& val1,
			const float& val2);  // 139
	CUtlMemory<qhConvex::NumAllocated(); // 1196
	CUtlMemory<qhConvex::operator[](
			int i);  // 602
	CUtlVectorBase<qhConvex::Element(
		int i);  // 1201
	CopyConstruct<qhConvex*>(qhConvex** pMemory,
				qhConvex* const& src);  // 1201
	CUtlMemory<qhConvex::Base(); // 112
	CUtlVectorBase<qhConvex::Base(); // 368
	CUtlVectorBase<qhConvex::ResetDbgInfo(); // 824
	CUtlVectorBase<qhConvex::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<qhConvex::AddToTail(
			qhConvex* const& src);  // 218
} /* size: 1036, variables: 1, inline expansions: 10 (128 bytes) */

// <05C79C74> meshutils/quickhullbuilder.cpp:230
// variables: 12
// function calls: 115
void CQuickHullBuilder::CreateHullsFromMeshes(const CModelMesh* const* pMeshes, int nNumMeshes, HullsFromMeshesMode_t nMode, const HullSimplificationParams_t& params)
{
	bool bSuccess; // 232
	CUtlVector<Vector, CUtlMemory<Vector, int> > vertexPositions; // 234
	{
		int iMesh; // 236
		{
			const CModelMesh* pMesh; // 238
			VertexStreamIndex_t nPositionStream; // 243
			{
				CUtlVector<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> >, CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> >, int> > faceIslands; // 271
				const int  nNumFaceIslands; // 274
				{
					int iIsland; // 275
					{
						CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > islandVertices; // 278
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
								int num);  // 784
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowVector(
								int num);  // 1445
						{
							int i; // 1451
						}
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
									int elem,
									int num);  // 1437
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
									int elem,
									int num);  // 1294
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddMultipleToTail(
									int num);  // 1319
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveMultipleFromTail(
									int num);  // 1323
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount(
							int count);  // 282
						CUtlMemory<int, int>::Base(); // 112
						CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 335
						CUtlMemory<int, int>::ValidateGrowSize(); // 475
						CUtlMemory<int, int>::CUtlMemory(
								int nGrowSize,
								int nInitAllocationCount);  // 527
						CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
						CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
								int growSize,
								int initCapacity);  // 418
						CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 333
						CUtlMemory<int, int>::Grow(
							int num);  // 806
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
									int num);  // 1319
						CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount(
							int count);  // 334
						CModelStreamReader::GetStreamType(); // 567
						GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
						{
						}
						memset(void* __dest,
							int __ch,
							size_t __len);  // 67
						V_memset(void* dest,
							int fill,
							size_t count);  // 572
						CModelStreamReader::GetValues<Vector>(
									int nNumValues,
									const int* pValueIndices,
									Vector* pOutValues);  // 564
						CModelStreamReader::GetValues<Vector>(
									int nNumValues,
									const int* pValueIndices,
									Vector* pOutValues);  // 337
						CUtlMemory<int, int>::Purge(); // 903
						CUtlMemory<int, int>::Purge(); // 1799
						CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
						ValidateAlignment<int>(void); // 508
						CUtlMemory<int, int>::Purge(); // 510
						CUtlMemory<int, int>::~CUtlMemory(); // 562
						CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
						CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 338
						{
							int i; // 562
							CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
									int i);  // 595
							operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
									int i);  // 546
							ComponentHandleWithListPointer_t::operator!=(
									const ComponentHandleWithListPointer_t& src);  // 547
							Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
							CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
										ComponentHandle_t handle);  // 564
						}
						CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndices(
									const int  nCount,
									const ComponentHandle_t* pComponents,
									ComponentIndex_t* pOutIndices);  // 335
						CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetComponentDataValues<Vector>(
										VertexStreamIndex_t nStream,
										int nNumComponents,
										const ComponentHandle_t* pComponentHandles,
										Vector* pOutValues);  // 283
						Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHa this); // 283
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
						Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 283
						RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1798
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
						Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
						ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
						~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
						~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 290
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
								int nGrowSize,
								int nInitAllocationCount);  // 527
						ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
						CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
								int growSize,
								int initCapacity);  // 418
						CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 278
						operator[](const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHal this,
								int i);  // 588
						operator[](const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this,
								int i);  // 279
						Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 279
						CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
						Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 279
						Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHa this); // 282
					}
				}
				ValidateGrowSize(const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHal this); // 475
				CUtlMemory(const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHal this,
						int nGrowSize,
						int nInitAllocationCount);  // 527
				ResetDbgInfo(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this); // 530
				CUtlVectorBase(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this,
						int growSize,
						int initCapacity);  // 418
				CUtlVector(const CUtlVector<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHal this); // 271
				Count(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlM this); // 274
				{
					int i; // 1721
					operator[](const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHal this,
							int i);  // 602
					Element(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this,
						int i);  // 1723
					RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1798
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
					Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 560
					ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(void); // 508
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
					~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 410
					~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 1526
					Destruct<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pMemory); // 1723
				}
				RemoveAll(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this); // 1798
				IsExternallyAllocated(const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemor this); // 905
				Purge(const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHal this); // 903
				Purge(const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHal this); // 1799
				Purge(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this); // 560
				ValidateAlignment<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(void); // 508
				Purge(const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHal this); // 510
				~CUtlMemory(const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHal this); // 562
				~CUtlVectorBase(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this); // 410
				~CUtlVector(const CUtlVector<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHal this); // 291
			}
			CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
					VertexStreamIndex_t nStream);  // 261
			CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
					VertexStreamIndex_t nStream);  // 255
			CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
						int nIndex);  // 159
			VertexStreamIndex_t::VertexStreamIndex_t(
						int);  // 186
			CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetFirstStreamOfType(
						ModelStreamType_t nStreamType);  // 243
			CModelMeshStreamIndex<CModelMesh::Vertex_t>::operator==(
					const CModelMeshStreamIndex<CModelMesh::Vertex_t>& other);  // 244
		}
	}
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 234
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 302
} /* size: 0, variables: 2, inline expansions: 13 (0 bytes) */

// <05C79805> meshutils/quickhullbuilder.cpp:307
// variables: 5
// function calls: 13
void CQuickHullBuilder::CreateHullsByConvexDecomposition(const Vector* pVertices, int nNumVertices, const uint32* pIndices, int nNumIndices, const HullDecompositionParams_t& params, IHullDecompositionListener_t* pListener)
{
	CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int> > hullVertices; // 311
	bool bCreatedAllHulls; // 317
	const int  nNumHulls; // 319
	{
		int iHull; // 322
	}
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int>  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, i this); // 311
	{
	}
	RunConvexDecomposition(const Vector* pVertices,
				int nNumVertices,
				const uint32* pIndices,
				int nNumIndices,
				const HullDecompositionParams_t& params,
				IHullDecompositionListener_t* pListener,
				CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int> >  pOutHullVertices);  // 312
	{
		int i; // 1721
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 1798
	Purge(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 560
	ValidateAlignment<CUtlVector<Vector> >(void); // 508
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, i this); // 331
} /* size: 0, variables: 3, inline expansions: 13 (0 bytes) */

// <05C78F61> meshutils/quickhullbuilder.cpp:336
// variables: 5
// function calls: 38
void CQuickHullBuilder::CreateHullsByConvexDecomposition(const CModelMesh* const* pMeshes, int nNumMeshes, const HullDecompositionParams_t& params, IHullDecompositionListener_t* pListener)
{
	bool bCreatedAllHulls; // 338
	CUtlVector<Vector, CUtlMemory<Vector, int> > triangleVertices; // 340
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > triangleIndices; // 341
	{
		int iMesh; // 343
		{
			const CModelMesh* pMesh; // 345
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 350
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 351
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 355
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 355
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 355
			CUtlMemory<Vector, int>::Base(); // 112
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 355
		}
	}
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 340
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 341
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 362
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 362
} /* size: 0, variables: 3, inline expansions: 30 (0 bytes) */

// <05C78DCD> meshutils/quickhullbuilder.cpp:367
// variables: 4
// function calls: 5
void CQuickHullBuilder::ApplyScaleToCreatedHulls(float flScale)
{
	{
		qhConvex* pHull; // 369
		CUtlVector<qhConvex*, CUtlMemory<qhConvex*, int> >& __for_range; // 10103
		iterator __for_begin; // 44877
		iterator __for_end; // 44877
		CUtlMemory<qhConvex::Base(); // 112
		CUtlVectorBase<qhConvex::Base(); // 102
		CUtlVectorBase<qhConvex::begin(); // 369
		CUtlVectorBase<qhConvex::Count(); // 104
		CUtlVectorBase<qhConvex::end(); // 369
	}
} /* size: 0 */

// <05C78D0D> meshutils/quickhullbuilder.cpp:511
// variables: 2
bool RunConvexDecomposition(const Vector* pVertices, int nNumVertices, const uint32* pIndices, int nNumIndices, const HullDecompositionParams_t& params, IHullDecompositionListener_t* pListener, CUtlVector<CUtlVector<Vector, CUtlMemory<Vector, int> >, CUtlMemory<CUtlVector<Vector, CUtlMemory<Vector, int> >, int> > pOutHullVertices)
{
	const char   __FUNCTION__; // 11428
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 513
	}
} /* size: 0, variables: 1 */

