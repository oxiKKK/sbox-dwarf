
//
// public/tier0/utlpriorityqueue.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 97
//	classes: 15
//

// <05E4A10F> ../public/tier0/utlpriorityqueue.h:15
// member function: 1
// class size: 1
class CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*> {
	/* ../public/tier0/utlpriorityqueue.h:19 */
	bool operator()<bool (*)(CHullIVR::VertexSet_t* const&, CHullIVR::VertexSet_t* const&)>(CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>* , VertexSet_t* const& , VertexSet_t* const& , bool (*)(VertexSet_t* const& , VertexSet_t* const& ));
};

// <06149E91> ../public/tier0/utlpriorityqueue.h:15
// member functions: 2
// class size: 1
class CDefUtlPriorityQueueLessFunc<edge_queue_entry_t> {
	/* ../public/tier0/utlpriorityqueue.h:19 */
	bool operator()<bool (*)(const edge_queue_entry_t&, const edge_queue_entry_t&)>(CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>* , const edge_queue_entry_t& , const edge_queue_entry_t& , bool (*)(const edge_queue_entry_t& , const edge_queue_entry_t& ));
	bool operator()<bool (*)(const edge_queue_entry_t&, const edge_queue_entry_t&)>(class CDefUtlPriorityQueueLessFunc<edge_queue_entry_t> *, const class edge_queue_entry_t  &, const class edge_queue_entry_t  &, bool (*)(const class edge_queue_entry_t  &, const class edge_queue_entry_t  &)); /* linkage=_ZN28CDefUtlPriorityQueueLessFuncI18edge_queue_entry_tEclIPFbRKS0_S4_EEEbS4_S4_T_ */
};

// <0614C4AC> ../public/tier0/utlpriorityqueue.h:19
inline void CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>::operator(const edge_queue_entry_t& lhs, const edge_queue_entry_t& rhs, bool (*lessFuncPtr)(const edge_queue_entry_t &, const edge_queue_entry_t &))
{
} /* size: 0 */

// <05E560EB> ../public/tier0/utlpriorityqueue.h:19
inline void CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t::operator(VertexSet_t* const& lhs, VertexSet_t* const& rhs, bool (*lessFuncPtr)(VertexSet_t* const &, VertexSet_t* const &))
{
} /* size: 0 */

// <05C19941> ../public/tier0/utlpriorityqueue.h:26
// member function: 1
// class size: 1
class CDefUtlPriorityQueueSetIndexFunc<CMeshEdgeSplitter::HalfEdgeWithLength_t> {
	/* ../public/tier0/utlpriorityqueue.h:30 */
	void SetIndex<bool (*)(const CMeshEdgeSplitter::HalfEdgeWithLength_t&, const CMeshEdgeSplitter::HalfEdgeWithLength_t&)>(HalfEdgeWithLength_t& , int, bool (*)(const HalfEdgeWithLength_t& , const HalfEdgeWithLength_t& ));
};

// <05E49F5F> ../public/tier0/utlpriorityqueue.h:26
// member function: 1
// class size: 1
class CDefUtlPriorityQueueSetIndexFunc<CHullIVR::VertexSet_t*> {
	/* ../public/tier0/utlpriorityqueue.h:30 */
	void SetIndex<bool (*)(CHullIVR::VertexSet_t* const&, CHullIVR::VertexSet_t* const&)>(VertexSet_t* & , int, bool (*)(VertexSet_t* const& , VertexSet_t* const& ));
};

// <06149E50> ../public/tier0/utlpriorityqueue.h:26
// member function: 1
// class size: 1
class CDefUtlPriorityQueueSetIndexFunc<edge_queue_entry_t> {
	/* ../public/tier0/utlpriorityqueue.h:30 */
	void SetIndex<bool (*)(const edge_queue_entry_t&, const edge_queue_entry_t&)>(edge_queue_entry_t& , int, bool (*)(const edge_queue_entry_t& , const edge_queue_entry_t& ));
};

// <06F1E194> ../../public/tier0/utlpriorityqueue.h:26
// member function: 1
// class size: 1
class CDefUtlPriorityQueueSetIndexFunc<CFeAgglomerator::CLink> {
	/* ../../public/tier0/utlpriorityqueue.h:30 */
	void SetIndex<bool (*)(const CFeAgglomerator::CLink&, const CFeAgglomerator::CLink&)>(CLink& , int, bool (*)(const CLink& , const CLink& ));
};

// <06F1F89A> ../../public/tier0/utlpriorityqueue.h:30
inline void SetIndex<bool (*)(const CFeAgglomerator::CLink&, const CFeAgglomerator::CLink&)>(CLink& heapElement, int nNewIndex, bool (*)(const CLink &, const CLink &))
{
} /* size: 0 */

// <0614D4A1> ../public/tier0/utlpriorityqueue.h:30
inline void SetIndex<bool (*)(const edge_queue_entry_t&, const edge_queue_entry_t&)>(edge_queue_entry_t& heapElement, int nNewIndex, bool (*)(const edge_queue_entry_t &, const edge_queue_entry_t &))
{
} /* size: 0 */

// <05E5D272> ../public/tier0/utlpriorityqueue.h:30
inline void SetIndex<bool (*)(CHullIVR::VertexSet_t* const&, CHullIVR::VertexSet_t* const&)>(VertexSet_t *& heapElement, int nNewIndex, bool (*)(VertexSet_t* const &, VertexSet_t* const &))
{
} /* size: 0 */

// <05C20A1D> ../public/tier0/utlpriorityqueue.h:30
inline void SetIndex<bool (*)(const CMeshEdgeSplitter::HalfEdgeWithLength_t&, const CMeshEdgeSplitter::HalfEdgeWithLength_t&)>(HalfEdgeWithLength_t& heapElement, int nNewIndex, bool (*)(const HalfEdgeWithLength_t &, const HalfEdgeWithLength_t &))
{
} /* size: 0 */

// <06F2DCD5> ../../public/tier0/utlpriorityqueue.h:38
void ~CUtlPriorityQueue(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this)
{
} /* size: 0 */

// <06F2DCB9> ../../public/tier0/utlpriorityqueue.h:38
inline void ~CUtlPriorityQueue(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this)
{
} /* size: 0 */

// <06F2A698> ../../public/tier0/utlpriorityqueue.h:38
void CUtlPriorityQueue<CFeAgglomerator::CCluster::~CUtlPriorityQueue()
{
} /* size: 0 */

// <06F2A67C> ../../public/tier0/utlpriorityqueue.h:38
inline void CUtlPriorityQueue<CFeAgglomerator::CCluster::~CUtlPriorityQueue()
{
} /* size: 0 */

// <0615A819> ../public/tier0/utlpriorityqueue.h:38
void ~CUtlPriorityQueue(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this)
{
} /* size: 0 */

// <0615A7FD> ../public/tier0/utlpriorityqueue.h:38
inline void ~CUtlPriorityQueue(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this)
{
} /* size: 0 */

// <05EFFEBF> ../public/tier0/utlpriorityqueue.h:38
void ~CUtlPriorityQueue(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this)
{
} /* size: 0 */

// <05EFFEA3> ../public/tier0/utlpriorityqueue.h:38
inline void ~CUtlPriorityQueue(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this)
{
} /* size: 0 */

// <05E815CF> ../public/tier0/utlpriorityqueue.h:38
void ~CUtlPriorityQueue(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this)
{
} /* size: 0 */

// <05E815B3> ../public/tier0/utlpriorityqueue.h:38
inline void ~CUtlPriorityQueue(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this)
{
} /* size: 0 */

// <05E757AE> ../public/tier0/utlpriorityqueue.h:38
void CUtlPriorityQueue<CHullIVR::VertexSet_t::~CUtlPriorityQueue()
{
} /* size: 0 */

// <05E75792> ../public/tier0/utlpriorityqueue.h:38
inline void CUtlPriorityQueue<CHullIVR::VertexSet_t::~CUtlPriorityQueue()
{
} /* size: 0 */

// <05BCFC8F> ../public/tier0/utlpriorityqueue.h:38
void ~CUtlPriorityQueue(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this)
{
} /* size: 0 */

// <05BCFC73> ../public/tier0/utlpriorityqueue.h:38
inline void ~CUtlPriorityQueue(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this)
{
} /* size: 0 */

// <05B95D57> ../public/tier0/utlpriorityqueue.h:38
// member functions: 20
// member variables: 2
// class size: 40
class CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>, CDefUtlPriorityQueueSetIndexFunc<CMeshEdgeSplitter::HalfEdgeWithLength_t>, bool (*)(const CMeshEdgeSplitter::HalfEdgeWithLength_t&, const CMeshEdgeSplitter::HalfEdgeWithLength_t&)> {
	/* ../public/tier0/utlpriorityqueue.h:95 */
	void CUtlPriorityQueue(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, int, int, bool (*)(const HalfEdgeWithLength_t& , const HalfEdgeWithLength_t& ));
	/* ../public/tier0/utlpriorityqueue.h:101 */
	void CUtlPriorityQueue(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, HalfEdgeWithLength_t* , int, bool (*)(const HalfEdgeWithLength_t& , const HalfEdgeWithLength_t& ));
	/* ../public/tier0/utlpriorityqueue.h:54 */
	const HalfEdgeWithLength_t& ElementAtHead(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp);
	/* ../public/tier0/utlpriorityqueue.h:56 */
	bool IsValidIndex(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, int);
	/* ../public/tier0/utlpriorityqueue.h:107 */
	void RemoveAtHead(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter);
	/* ../public/tier0/utlpriorityqueue.h:121 */
	void RemoveAt(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, int);
	/* ../public/tier0/utlpriorityqueue.h:136 */
	void RevaluateElement(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, int);
	/* ../public/tier0/utlpriorityqueue.h:226 */
	void Insert(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, const HalfEdgeWithLength_t& );
	/* ../public/tier0/utlpriorityqueue.h:247 */
	void SetLessFunc(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, bool (*)(const HalfEdgeWithLength_t& , const HalfEdgeWithLength_t& ));
	/* ../public/tier0/utlpriorityqueue.h:71 */
	int Count(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp);
	/* ../public/tier0/utlpriorityqueue.h:74 */
	void RemoveAll(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter);
	/* ../public/tier0/utlpriorityqueue.h:77 */
	void Purge(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter);
	/* ../public/tier0/utlpriorityqueue.h:79 */
	const HalfEdgeWithLength_t& Element(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp, int);
	/* ../public/tier0/utlpriorityqueue.h:80 */
	HalfEdgeWithLength_t& Element(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, int);
	/* ../public/tier0/utlpriorityqueue.h:150 */
	bool IsHeapified(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter);
protected:
	CUtlVector<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > m_heap; /* 0 32 */
	/* ../public/tier0/utlpriorityqueue.h:236 */
	void Swap(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, int, int);
	/* ../public/tier0/utlpriorityqueue.h:165 */
	int PercolateDown(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, int);
	/* ../public/tier0/utlpriorityqueue.h:205 */
	int PercolateUp(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, int);
	bool (*m_LessFunc)(const HalfEdgeWithLength_t& , const HalfEdgeWithLength_t& ); /* 32 8* /
	void ~CUtlPriorityQueue(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter);
};

// <05C195EF> ../public/tier0/utlpriorityqueue.h:38
// member functions: 19
// member variables: 2
// class size: 40
class CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>, CDefUtlPriorityQueueSetIndexFunc<CMeshEdgeSplitter::HalfEdgeWithLength_t>, bool (*)(const CMeshEdgeSplitter::HalfEdgeWithLength_t&, const CMeshEdgeSplitter::HalfEdgeWithLength_t&)> {
	/* ../public/tier0/utlpriorityqueue.h:95 */
	void CUtlPriorityQueue(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, int, int, bool (*)(const HalfEdgeWithLength_t& , const HalfEdgeWithLength_t& ));
	/* ../public/tier0/utlpriorityqueue.h:101 */
	void CUtlPriorityQueue(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, HalfEdgeWithLength_t* , int, bool (*)(const HalfEdgeWithLength_t& , const HalfEdgeWithLength_t& ));
	/* ../public/tier0/utlpriorityqueue.h:54 */
	const HalfEdgeWithLength_t& ElementAtHead(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp);
	/* ../public/tier0/utlpriorityqueue.h:56 */
	bool IsValidIndex(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, int);
	/* ../public/tier0/utlpriorityqueue.h:107 */
	void RemoveAtHead(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter);
	/* ../public/tier0/utlpriorityqueue.h:121 */
	void RemoveAt(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, int);
	/* ../public/tier0/utlpriorityqueue.h:136 */
	void RevaluateElement(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, int);
	/* ../public/tier0/utlpriorityqueue.h:226 */
	void Insert(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, const HalfEdgeWithLength_t& );
	/* ../public/tier0/utlpriorityqueue.h:247 */
	void SetLessFunc(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, bool (*)(const HalfEdgeWithLength_t& , const HalfEdgeWithLength_t& ));
	/* ../public/tier0/utlpriorityqueue.h:71 */
	int Count(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp);
	/* ../public/tier0/utlpriorityqueue.h:74 */
	void RemoveAll(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter);
	/* ../public/tier0/utlpriorityqueue.h:77 */
	void Purge(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter);
	/* ../public/tier0/utlpriorityqueue.h:79 */
	const HalfEdgeWithLength_t& Element(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp, int);
	/* ../public/tier0/utlpriorityqueue.h:80 */
	HalfEdgeWithLength_t& Element(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, int);
	/* ../public/tier0/utlpriorityqueue.h:150 */
	bool IsHeapified(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter);
protected:
	CUtlVector<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > m_heap; /* 0 32 */
	/* ../public/tier0/utlpriorityqueue.h:236 */
	void Swap(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, int, int);
	/* ../public/tier0/utlpriorityqueue.h:165 */
	int PercolateDown(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, int);
	/* ../public/tier0/utlpriorityqueue.h:205 */
	int PercolateUp(CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter, int);
	bool (*m_LessFunc)(const HalfEdgeWithLength_t& , const HalfEdgeWithLength_t& ); /* 32 8* /
};

// <05D78AB5> ../public/tier0/utlpriorityqueue.h:38
// member functions: 19
// member variables: 2
// class size: 40
class CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefUtlPriorityQueueSetIndexFunc<CFeAgglomerator::CLink>, bool (*)(const CFeAgglomerator::CLink&, const CFeAgglomerator::CLink&)> {
	/* ../public/tier0/utlpriorityqueue.h:95 */
	void CUtlPriorityQueue(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, int, int, bool (*)(const CLink& , const CLink& ));
	/* ../public/tier0/utlpriorityqueue.h:101 */
	void CUtlPriorityQueue(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, CLink* , int, bool (*)(const CLink& , const CLink& ));
	/* ../public/tier0/utlpriorityqueue.h:54 */
	const CLink& ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>,);
	/* ../public/tier0/utlpriorityqueue.h:56 */
	bool IsValidIndex(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, int);
	/* ../public/tier0/utlpriorityqueue.h:107 */
	void RemoveAtHead(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU);
	/* ../public/tier0/utlpriorityqueue.h:121 */
	void RemoveAt(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, int);
	/* ../public/tier0/utlpriorityqueue.h:136 */
	void RevaluateElement(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, int);
	/* ../public/tier0/utlpriorityqueue.h:226 */
	void Insert(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, const CLink& );
	/* ../public/tier0/utlpriorityqueue.h:247 */
	void SetLessFunc(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, bool (*)(const CLink& , const CLink& ));
	/* ../public/tier0/utlpriorityqueue.h:71 */
	int Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>,);
	/* ../public/tier0/utlpriorityqueue.h:74 */
	void RemoveAll(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU);
	/* ../public/tier0/utlpriorityqueue.h:77 */
	void Purge(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU);
	/* ../public/tier0/utlpriorityqueue.h:79 */
	const CLink& Element(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>,, int);
	/* ../public/tier0/utlpriorityqueue.h:80 */
	CLink& Element(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, int);
	/* ../public/tier0/utlpriorityqueue.h:150 */
	bool IsHeapified(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU);
protected:
	CUtlVector<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> > m_heap; /* 0 32 */
	/* ../public/tier0/utlpriorityqueue.h:236 */
	void Swap(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, int, int);
	/* ../public/tier0/utlpriorityqueue.h:165 */
	int PercolateDown(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, int);
	/* ../public/tier0/utlpriorityqueue.h:205 */
	int PercolateUp(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, int);
	bool (*m_LessFunc)(const CLink& , const CLink& ); /* 32 8* /
};

// <05E33F34> ../public/tier0/utlpriorityqueue.h:38
// member functions: 38
// member variables: 2
// class size: 40
class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, CHullIVR::VertexOp_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, int>, CHullIVR::VertexOp_t, CHullIVR*> {
	/* ../public/tier0/utlpriorityqueue.h:95 */
	void CUtlPriorityQueue(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, int, int, CHullIVR* );
	/* ../public/tier0/utlpriorityqueue.h:101 */
	void CUtlPriorityQueue(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, ComponentHandleWithListPointer_t* , int, CHullIVR* );
	/* ../public/tier0/utlpriorityqueue.h:54 */
	const ComponentHandleWithListPointer_t& ElementAtHead(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:);
	/* ../public/tier0/utlpriorityqueue.h:56 */
	bool IsValidIndex(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, int);
	/* ../public/tier0/utlpriorityqueue.h:107 */
	void RemoveAtHead(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo);
	/* ../public/tier0/utlpriorityqueue.h:121 */
	void RemoveAt(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, int);
	/* ../public/tier0/utlpriorityqueue.h:136 */
	void RevaluateElement(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, int);
	/* ../public/tier0/utlpriorityqueue.h:226 */
	void Insert(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, const ComponentHandleWithListPointer_t& );
	/* ../public/tier0/utlpriorityqueue.h:247 */
	void SetLessFunc(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, CHullIVR* );
	/* ../public/tier0/utlpriorityqueue.h:71 */
	int Count(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:);
	/* ../public/tier0/utlpriorityqueue.h:74 */
	void RemoveAll(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo);
	/* ../public/tier0/utlpriorityqueue.h:77 */
	void Purge(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo);
	/* ../public/tier0/utlpriorityqueue.h:79 */
	const ComponentHandleWithListPointer_t& Element(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:, int);
	/* ../public/tier0/utlpriorityqueue.h:80 */
	ComponentHandleWithListPointer_t& Element(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, int);
	/* ../public/tier0/utlpriorityqueue.h:150 */
	bool IsHeapified(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo);
protected:
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, int> > m_heap; /* 0 32 */
	/* ../public/tier0/utlpriorityqueue.h:236 */
	void Swap(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, int, int);
	/* ../public/tier0/utlpriorityqueue.h:165 */
	int PercolateDown(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, int);
	/* ../public/tier0/utlpriorityqueue.h:205 */
	int PercolateUp(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, int);
	CHullIVR * m_LessFunc; /* 32 8 */
	void ~CUtlPriorityQueue(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo);
	void CUtlPriorityQueue(class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, int, int, class CHullIVR *); /* linkage=_ZN17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_EC4EiiSD_ */
	void CUtlPriorityQueue(class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, class ComponentHandleWithListPointer_t *, int, class CHullIVR *); /* linkage=_ZN17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_EC4EPS8_iSD_ */
	const class ComponentHandleWithListPointer_t  & ElementAtHead(const class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:); /* linkage=_ZNK17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_E13ElementAtHeadEv */
	bool IsValidIndex(class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, int); /* linkage=_ZN17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_E12IsValidIndexEi */
	void RemoveAtHead(class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo); /* linkage=_ZN17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_E12RemoveAtHeadEv */
	void RemoveAt(class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, int); /* linkage=_ZN17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_E8RemoveAtEi */
	void RevaluateElement(class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, int); /* linkage=_ZN17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_E16RevaluateElementEi */
	void Insert(class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, const class ComponentHandleWithListPointer_t  &); /* linkage=_ZN17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_E6InsertERKS8_ */
	void SetLessFunc(class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, class CHullIVR *); /* linkage=_ZN17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_E11SetLessFuncESD_ */
	int Count(const class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:); /* linkage=_ZNK17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_E5CountEv */
	void RemoveAll(class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo); /* linkage=_ZN17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_E9RemoveAllEv */
	void Purge(class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo); /* linkage=_ZN17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_E5PurgeEv */
	const class ComponentHandleWithListPointer_t  & Element(const class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:, int); /* linkage=_ZNK17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_E7ElementEi */
	class ComponentHandleWithListPointer_t & Element(class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, int); /* linkage=_ZN17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_E7ElementEi */
	bool IsHeapified(class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo); /* linkage=_ZN17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_E11IsHeapifiedEv */
	void Swap(class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, int, int); /* linkage=_ZN17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_E4SwapEii */
	int PercolateDown(class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, int); /* linkage=_ZN17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_E13PercolateDownEi */
	int PercolateUp(class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo, int); /* linkage=_ZN17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_E11PercolateUpEi */
	void ~CUtlPriorityQueue(class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compo); /* linkage=_ZN17CUtlPriorityQueueIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEN8CHullIVR10VertexOp_tE10CUtlMemoryIS8_iESA_PS9_ED4Ev */
};

// <05E4536D> ../public/tier0/utlpriorityqueue.h:38
// member functions: 20
// member variables: 2
// class size: 40
class CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR::VertexSet_t*, int>, CDefUtlPriorityQueueSetIndexFunc<CHullIVR::VertexSet_t*>, bool (*)(CHullIVR::VertexSet_t* const&, CHullIVR::VertexSet_t* const&)> {
	/* ../public/tier0/utlpriorityqueue.h:95 */
	void CUtlPriorityQueue(CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR::Vert, int, int, bool (*)(VertexSet_t* const& , VertexSet_t* const& ));
	/* ../public/tier0/utlpriorityqueue.h:101 */
	void CUtlPriorityQueue(CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR::Vert, VertexSet_t** , int, bool (*)(VertexSet_t* const& , VertexSet_t* const& ));
	/* ../public/tier0/utlpriorityqueue.h:54 */
	VertexSet_t* const& ElementAtHead(const CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR);
	/* ../public/tier0/utlpriorityqueue.h:56 */
	bool IsValidIndex(CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR::Vert, int);
	/* ../public/tier0/utlpriorityqueue.h:107 */
	void RemoveAtHead(CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR::Vert);
	/* ../public/tier0/utlpriorityqueue.h:121 */
	void RemoveAt(CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR::Vert, int);
	/* ../public/tier0/utlpriorityqueue.h:136 */
	void RevaluateElement(CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR::Vert, int);
	/* ../public/tier0/utlpriorityqueue.h:226 */
	void Insert(CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR::Vert, VertexSet_t* const& );
	/* ../public/tier0/utlpriorityqueue.h:247 */
	void SetLessFunc(CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR::Vert, bool (*)(VertexSet_t* const& , VertexSet_t* const& ));
	/* ../public/tier0/utlpriorityqueue.h:71 */
	int Count(const CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR);
	/* ../public/tier0/utlpriorityqueue.h:74 */
	void RemoveAll(CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR::Vert);
	/* ../public/tier0/utlpriorityqueue.h:77 */
	void Purge(CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR::Vert);
	/* ../public/tier0/utlpriorityqueue.h:79 */
	VertexSet_t* const& Element(const CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR, int);
	/* ../public/tier0/utlpriorityqueue.h:80 */
	VertexSet_t* & Element(CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR::Vert, int);
	/* ../public/tier0/utlpriorityqueue.h:150 */
	bool IsHeapified(CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR::Vert);
protected:
	CUtlVector<CHullIVR::VertexSet_t*, CUtlMemory<CHullIVR::VertexSet_t*, int> > m_heap; /* 0 32 */
	/* ../public/tier0/utlpriorityqueue.h:236 */
	void Swap(CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR::Vert, int, int);
	/* ../public/tier0/utlpriorityqueue.h:165 */
	int PercolateDown(CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR::Vert, int);
	/* ../public/tier0/utlpriorityqueue.h:205 */
	int PercolateUp(CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR::Vert, int);
	bool (*m_LessFunc)(VertexSet_t* const& , VertexSet_t* const& ); /* 32 8* /
	void ~CUtlPriorityQueue(CUtlPriorityQueue<CHullIVR::VertexSet_t*, CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*>, CUtlMemory<CHullIVR::Vert);
};

// <05EC4477> ../public/tier0/utlpriorityqueue.h:38
// member functions: 19
// member variables: 2
// class size: 40
class CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentHandleWithListPointer_t, CHullIFR::HalfEdgeOp_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentHandleWithListPointer_t, int>, CHullIFR::HalfEdgeOp_t, CHullIFR*> {
	/* ../public/tier0/utlpriorityqueue.h:95 */
	void CUtlPriorityQueue(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ha, int, int, CHullIFR* );
	/* ../public/tier0/utlpriorityqueue.h:101 */
	void CUtlPriorityQueue(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ha, ComponentHandleWithListPointer_t* , int, CHullIFR* );
	/* ../public/tier0/utlpriorityqueue.h:54 */
	const ComponentHandleWithListPointer_t& ElementAtHead(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_);
	/* ../public/tier0/utlpriorityqueue.h:56 */
	bool IsValidIndex(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ha, int);
	/* ../public/tier0/utlpriorityqueue.h:107 */
	void RemoveAtHead(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ha);
	/* ../public/tier0/utlpriorityqueue.h:121 */
	void RemoveAt(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ha, int);
	/* ../public/tier0/utlpriorityqueue.h:136 */
	void RevaluateElement(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ha, int);
	/* ../public/tier0/utlpriorityqueue.h:226 */
	void Insert(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ha, const ComponentHandleWithListPointer_t& );
	/* ../public/tier0/utlpriorityqueue.h:247 */
	void SetLessFunc(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ha, CHullIFR* );
	/* ../public/tier0/utlpriorityqueue.h:71 */
	int Count(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_);
	/* ../public/tier0/utlpriorityqueue.h:74 */
	void RemoveAll(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ha);
	/* ../public/tier0/utlpriorityqueue.h:77 */
	void Purge(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ha);
	/* ../public/tier0/utlpriorityqueue.h:79 */
	const ComponentHandleWithListPointer_t& Element(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_, int);
	/* ../public/tier0/utlpriorityqueue.h:80 */
	ComponentHandleWithListPointer_t& Element(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ha, int);
	/* ../public/tier0/utlpriorityqueue.h:150 */
	bool IsHeapified(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ha);
protected:
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentHandleWithListPointer_t, int> > m_heap; /* 0 32 */
	/* ../public/tier0/utlpriorityqueue.h:236 */
	void Swap(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ha, int, int);
	/* ../public/tier0/utlpriorityqueue.h:165 */
	int PercolateDown(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ha, int);
	/* ../public/tier0/utlpriorityqueue.h:205 */
	int PercolateUp(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ha, int);
	CHullIFR * m_LessFunc; /* 32 8 */
	void ~CUtlPriorityQueue(CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ha);
};

// <06140DC1> ../public/tier0/utlpriorityqueue.h:38
// member functions: 20
// member variables: 2
// class size: 40
class CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, int>, CDefUtlPriorityQueueSetIndexFunc<edge_queue_entry_t>, bool (*)(const edge_queue_entry_t&, const edge_queue_entry_t&)> {
	/* ../public/tier0/utlpriorityqueue.h:95 */
	void CUtlPriorityQueue(CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, in, int, int, bool (*)(const edge_queue_entry_t& , const edge_queue_entry_t& ));
	/* ../public/tier0/utlpriorityqueue.h:101 */
	void CUtlPriorityQueue(CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, in, edge_queue_entry_t* , int, bool (*)(const edge_queue_entry_t& , const edge_queue_entry_t& ));
	/* ../public/tier0/utlpriorityqueue.h:54 */
	const edge_queue_entry_t& ElementAtHead(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry);
	/* ../public/tier0/utlpriorityqueue.h:56 */
	bool IsValidIndex(CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, in, int);
	/* ../public/tier0/utlpriorityqueue.h:107 */
	void RemoveAtHead(CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, in);
	/* ../public/tier0/utlpriorityqueue.h:121 */
	void RemoveAt(CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, in, int);
	/* ../public/tier0/utlpriorityqueue.h:136 */
	void RevaluateElement(CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, in, int);
	/* ../public/tier0/utlpriorityqueue.h:226 */
	void Insert(CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, in, const edge_queue_entry_t& );
	/* ../public/tier0/utlpriorityqueue.h:247 */
	void SetLessFunc(CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, in, bool (*)(const edge_queue_entry_t& , const edge_queue_entry_t& ));
	/* ../public/tier0/utlpriorityqueue.h:71 */
	int Count(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry);
	/* ../public/tier0/utlpriorityqueue.h:74 */
	void RemoveAll(CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, in);
	/* ../public/tier0/utlpriorityqueue.h:77 */
	void Purge(CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, in);
	/* ../public/tier0/utlpriorityqueue.h:79 */
	const edge_queue_entry_t& Element(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry, int);
	/* ../public/tier0/utlpriorityqueue.h:80 */
	edge_queue_entry_t& Element(CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, in, int);
	/* ../public/tier0/utlpriorityqueue.h:150 */
	bool IsHeapified(CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, in);
protected:
	CUtlVector<edge_queue_entry_t, CUtlMemory<edge_queue_entry_t, int> > m_heap; /* 0 32 */
	/* ../public/tier0/utlpriorityqueue.h:236 */
	void Swap(CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, in, int, int);
	/* ../public/tier0/utlpriorityqueue.h:165 */
	int PercolateDown(CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, in, int);
	/* ../public/tier0/utlpriorityqueue.h:205 */
	int PercolateUp(CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, in, int);
	bool (*m_LessFunc)(const edge_queue_entry_t& , const edge_queue_entry_t& ); /* 32 8* /
	void ~CUtlPriorityQueue(CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry_t, in);
};

// <06F1A96E> ../../public/tier0/utlpriorityqueue.h:38
// member functions: 20
// member variables: 2
// class size: 40
class CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefUtlPriorityQueueSetIndexFunc<CFeAgglomerator::CLink>, bool (*)(const CFeAgglomerator::CLink&, const CFeAgglomerator::CLink&)> {
	/* ../../public/tier0/utlpriorityqueue.h:95 */
	void CUtlPriorityQueue(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, int, int, bool (*)(const CLink& , const CLink& ));
	/* ../../public/tier0/utlpriorityqueue.h:101 */
	void CUtlPriorityQueue(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, CLink* , int, bool (*)(const CLink& , const CLink& ));
	/* ../../public/tier0/utlpriorityqueue.h:54 */
	const CLink& ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>,);
	/* ../../public/tier0/utlpriorityqueue.h:56 */
	bool IsValidIndex(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, int);
	/* ../../public/tier0/utlpriorityqueue.h:107 */
	void RemoveAtHead(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU);
	/* ../../public/tier0/utlpriorityqueue.h:121 */
	void RemoveAt(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, int);
	/* ../../public/tier0/utlpriorityqueue.h:136 */
	void RevaluateElement(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, int);
	/* ../../public/tier0/utlpriorityqueue.h:226 */
	void Insert(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, const CLink& );
	/* ../../public/tier0/utlpriorityqueue.h:247 */
	void SetLessFunc(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, bool (*)(const CLink& , const CLink& ));
	/* ../../public/tier0/utlpriorityqueue.h:71 */
	int Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>,);
	/* ../../public/tier0/utlpriorityqueue.h:74 */
	void RemoveAll(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU);
	/* ../../public/tier0/utlpriorityqueue.h:77 */
	void Purge(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU);
	/* ../../public/tier0/utlpriorityqueue.h:79 */
	const CLink& Element(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>,, int);
	/* ../../public/tier0/utlpriorityqueue.h:80 */
	CLink& Element(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, int);
	/* ../../public/tier0/utlpriorityqueue.h:150 */
	bool IsHeapified(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU);
protected:
	CUtlVector<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> > m_heap; /* 0 32 */
	/* ../../public/tier0/utlpriorityqueue.h:236 */
	void Swap(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, int, int);
	/* ../../public/tier0/utlpriorityqueue.h:165 */
	int PercolateDown(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, int);
	/* ../../public/tier0/utlpriorityqueue.h:205 */
	int PercolateUp(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU, int);
	bool (*m_LessFunc)(const CLink& , const CLink& ); /* 32 8* /
	void ~CUtlPriorityQueue(CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, CDefU);
};

// <06F1CDA9> ../../public/tier0/utlpriorityqueue.h:38
// member functions: 20
// member variables: 2
// class size: 40
class CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CCluster*, int>, CFeAgglomerator::ClusterSetIndexFunc_t, bool (*)(CFeAgglomerator::CCluster* const&, CFeAgglomerator::CCluster* const&)> {
	/* ../../public/tier0/utlpriorityqueue.h:95 */
	void CUtlPriorityQueue(CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CCluster*, , int, int, bool (*)(CCluster* const& , CCluster* const& ));
	/* ../../public/tier0/utlpriorityqueue.h:101 */
	void CUtlPriorityQueue(CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CCluster*, , CCluster** , int, bool (*)(CCluster* const& , CCluster* const& ));
	/* ../../public/tier0/utlpriorityqueue.h:54 */
	CCluster* const& ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CClus);
	/* ../../public/tier0/utlpriorityqueue.h:56 */
	bool IsValidIndex(CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CCluster*, , int);
	/* ../../public/tier0/utlpriorityqueue.h:107 */
	void RemoveAtHead(CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CCluster*, );
	/* ../../public/tier0/utlpriorityqueue.h:121 */
	void RemoveAt(CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CCluster*, , int);
	/* ../../public/tier0/utlpriorityqueue.h:136 */
	void RevaluateElement(CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CCluster*, , int);
	/* ../../public/tier0/utlpriorityqueue.h:226 */
	void Insert(CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CCluster*, , CCluster* const& );
	/* ../../public/tier0/utlpriorityqueue.h:247 */
	void SetLessFunc(CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CCluster*, , bool (*)(CCluster* const& , CCluster* const& ));
	/* ../../public/tier0/utlpriorityqueue.h:71 */
	int Count(const CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CClus);
	/* ../../public/tier0/utlpriorityqueue.h:74 */
	void RemoveAll(CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CCluster*, );
	/* ../../public/tier0/utlpriorityqueue.h:77 */
	void Purge(CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CCluster*, );
	/* ../../public/tier0/utlpriorityqueue.h:79 */
	CCluster* const& Element(const CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CClus, int);
	/* ../../public/tier0/utlpriorityqueue.h:80 */
	CCluster* & Element(CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CCluster*, , int);
	/* ../../public/tier0/utlpriorityqueue.h:150 */
	bool IsHeapified(CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CCluster*, );
protected:
	CUtlVector<CFeAgglomerator::CCluster*, CUtlMemory<CFeAgglomerator::CCluster*, int> > m_heap; /* 0 32 */
	/* ../../public/tier0/utlpriorityqueue.h:236 */
	void Swap(CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CCluster*, , int, int);
	/* ../../public/tier0/utlpriorityqueue.h:165 */
	int PercolateDown(CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CCluster*, , int);
	/* ../../public/tier0/utlpriorityqueue.h:205 */
	int PercolateUp(CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CCluster*, , int);
	bool (*m_LessFunc)(CCluster* const& , CCluster* const& ); /* 32 8* /
	void ~CUtlPriorityQueue(CUtlPriorityQueue<CFeAgglomerator::CCluster*, CFeAgglomerator::ClusterLessFunc_t, CUtlMemory<CFeAgglomerator::CCluster*, );
};

// <06F20663> ../../public/tier0/utlpriorityqueue.h:54
inline void ElementAtHead(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this)
{
} /* size: 0 */

// <06F1FED6> ../../public/tier0/utlpriorityqueue.h:54
inline void CUtlPriorityQueue<CFeAgglomerator::CCluster::ElementAtHead()
{
} /* size: 0 */

// <0614DE33> ../public/tier0/utlpriorityqueue.h:54
inline void ElementAtHead(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue this)
{
} /* size: 0 */

// <05EEE6B5> ../public/tier0/utlpriorityqueue.h:54
inline void ElementAtHead(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFac this)
{
} /* size: 0 */

// <05E6B482> ../public/tier0/utlpriorityqueue.h:54
inline void ElementAtHead(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this)
{
} /* size: 0 */

// <05E66659> ../public/tier0/utlpriorityqueue.h:54
inline void CUtlPriorityQueue<CHullIVR::VertexSet_t::ElementAtHead()
{
} /* size: 0 */

// <05C20FCF> ../public/tier0/utlpriorityqueue.h:54
inline void ElementAtHead(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMesh this)
{
} /* size: 0 */

// <06F2067C> ../../public/tier0/utlpriorityqueue.h:71
inline void Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this)
{
} /* size: 0 */

// <06F1FF14> ../../public/tier0/utlpriorityqueue.h:71
inline void CUtlPriorityQueue<CFeAgglomerator::CCluster::Count()
{
} /* size: 0 */

// <0614DE4C> ../public/tier0/utlpriorityqueue.h:71
inline void Count(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue this)
{
} /* size: 0 */

// <05EEE6E7> ../public/tier0/utlpriorityqueue.h:71
inline void Count(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFac this)
{
} /* size: 0 */

// <05E6B4B4> ../public/tier0/utlpriorityqueue.h:71
inline void Count(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vert this)
{
} /* size: 0 */

// <05E66672> ../public/tier0/utlpriorityqueue.h:71
inline void CUtlPriorityQueue<CHullIVR::VertexSet_t::Count()
{
} /* size: 0 */

// <05C20FE8> ../public/tier0/utlpriorityqueue.h:71
inline void Count(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMesh this)
{
} /* size: 0 */

// <06F1FCD2> ../../public/tier0/utlpriorityqueue.h:77
inline void Purge(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this)
{
} /* size: 0 */

// <05E6B4CD> ../public/tier0/utlpriorityqueue.h:77
inline void Purge(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this)
{
} /* size: 0 */

// <05C2103E> ../public/tier0/utlpriorityqueue.h:77
inline void Purge(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this)
{
} /* size: 0 */

// <06F2063E> ../../public/tier0/utlpriorityqueue.h:80
inline void Element(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this, int index)
{
} /* size: 0 */

// <06F1FEEF> ../../public/tier0/utlpriorityqueue.h:80
inline void CUtlPriorityQueue<CFeAgglomerator::CCluster::Element(int index)
{
} /* size: 0 */

// <06F20702> ../../public/tier0/utlpriorityqueue.h:95
void CUtlPriorityQueue(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this, int growSize, int initSize, bool (*lessfunc)(const CLink &, const CLink &))
{
} /* size: 0 */

// <06F206C5> ../../public/tier0/utlpriorityqueue.h:95
inline void CUtlPriorityQueue(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this, int growSize, int initSize, bool (*lessfunc)(const CLink &, const CLink &))
{
} /* size: 0 */

// <06F2000D> ../../public/tier0/utlpriorityqueue.h:95
void CUtlPriorityQueue<CFeAgglomerator::CCluster::CUtlPriorityQueue(int growSize, int initSize, bool (*lessfunc)(CCluster* const &, CCluster* const &))
{
} /* size: 0 */

// <06F1FFD0> ../../public/tier0/utlpriorityqueue.h:95
inline void CUtlPriorityQueue<CFeAgglomerator::CCluster::CUtlPriorityQueue(int growSize, int initSize, bool (*lessfunc)(CCluster* const &, CCluster* const &))
{
} /* size: 0 */

// <0614F626> ../public/tier0/utlpriorityqueue.h:95
void CUtlPriorityQueue(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this, int growSize, int initSize, bool (*lessfunc)(const edge_queue_entry_t &, const edge_queue_entry_t &))
{
} /* size: 0 */

// <0614F5E9> ../public/tier0/utlpriorityqueue.h:95
inline void CUtlPriorityQueue(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this, int growSize, int initSize, bool (*lessfunc)(const edge_queue_entry_t &, const edge_queue_entry_t &))
{
} /* size: 0 */

// <05EF020A> ../public/tier0/utlpriorityqueue.h:95
void CUtlPriorityQueue(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this, int growSize, int initSize, CHullIFR* lessfunc)
{
} /* size: 0 */

// <05EF01CD> ../public/tier0/utlpriorityqueue.h:95
inline void CUtlPriorityQueue(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this, int growSize, int initSize, CHullIFR* lessfunc)
{
} /* size: 0 */

// <05E6C72C> ../public/tier0/utlpriorityqueue.h:95
void CUtlPriorityQueue(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this, int growSize, int initSize, CHullIVR* lessfunc)
{
} /* size: 0 */

// <05E6C6EF> ../public/tier0/utlpriorityqueue.h:95
inline void CUtlPriorityQueue(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this, int growSize, int initSize, CHullIVR* lessfunc)
{
} /* size: 0 */

// <05E66986> ../public/tier0/utlpriorityqueue.h:95
void CUtlPriorityQueue<CHullIVR::VertexSet_t::CUtlPriorityQueue(int growSize, int initSize, bool (*lessfunc)(VertexSet_t* const &, VertexSet_t* const &))
{
} /* size: 0 */

// <05E66949> ../public/tier0/utlpriorityqueue.h:95
inline void CUtlPriorityQueue<CHullIVR::VertexSet_t::CUtlPriorityQueue(int growSize, int initSize, bool (*lessfunc)(VertexSet_t* const &, VertexSet_t* const &))
{
} /* size: 0 */

// <05C21131> ../public/tier0/utlpriorityqueue.h:95
void CUtlPriorityQueue(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this, int growSize, int initSize, bool (*lessfunc)(const HalfEdgeWithLength_t &, const HalfEdgeWithLength_t &))
{
} /* size: 0 */

// <05C210F4> ../public/tier0/utlpriorityqueue.h:95
inline void CUtlPriorityQueue(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this, int growSize, int initSize, bool (*lessfunc)(const HalfEdgeWithLength_t &, const HalfEdgeWithLength_t &))
{
} /* size: 0 */

// <06F1FEBD> ../../public/tier0/utlpriorityqueue.h:107
inline void CUtlPriorityQueue<CFeAgglomerator::CCluster::RemoveAtHead()
{
} /* size: 0 */

// <0614DE1A> ../public/tier0/utlpriorityqueue.h:107
inline void RemoveAtHead(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this)
{
} /* size: 0 */

// <05EEDC1C> ../public/tier0/utlpriorityqueue.h:107
inline void RemoveAtHead(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this)
{
} /* size: 0 */

// <05E6B469> ../public/tier0/utlpriorityqueue.h:107
inline void RemoveAtHead(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this)
{
} /* size: 0 */

// <05E66640> ../public/tier0/utlpriorityqueue.h:107
inline void CUtlPriorityQueue<CHullIVR::VertexSet_t::RemoveAtHead()
{
} /* size: 0 */

// <05C20FB6> ../public/tier0/utlpriorityqueue.h:107
inline void RemoveAtHead(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this)
{
} /* size: 0 */

// <06F205FA> ../../public/tier0/utlpriorityqueue.h:121
// variables: 2
inline void RemoveAt(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this, int index)
{
	const char   __FUNCTION__; // 26802
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 123
	}
} /* size: 0, variables: 1 */

// <06F1FE6F> ../../public/tier0/utlpriorityqueue.h:121
// variables: 2
inline void CUtlPriorityQueue<CFeAgglomerator::CCluster::RemoveAt(int index)
{
	const char   __FUNCTION__; // 26802
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 123
	}
} /* size: 0, variables: 1 */

// <05EF04A3> ../public/tier0/utlpriorityqueue.h:121
// variables: 3
// function calls: 28
void RemoveAt(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this, int index)
{
	const char   __FUNCTION__; // 4412
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 123
	}
	IsValidIndex(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 123
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int i);  // 124
	SetIndex(const HalfEdgeHandle_t& heapElement,
		int nNewIndex,
		CHullIFR* pMesh);  // 124
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 71
	Count(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFac this); // 127
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int i);  // 129
	SetIndex(const HalfEdgeHandle_t& heapElement,
		int nNewIndex,
		CHullIFR* pMesh);  // 129
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 71
	Count(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFac this); // 207
	{
		int parent; // 213
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 214
		HalfEdgeOp_t::operator(
				const HalfEdgeHandle_t& lhs,
				const HalfEdgeHandle_t& rhs,
				CHullIFR* pMesh);  // 214
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 214
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 240
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 242
		SetIndex(const HalfEdgeHandle_t& heapElement,
			int nNewIndex,
			CHullIFR* pMesh);  // 242
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 243
		SetIndex(const HalfEdgeHandle_t& heapElement,
			int nNewIndex,
			CHullIFR* pMesh);  // 243
		Swap(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this,
			int index1,
			int index2);  // 218
	}
	PercolateUp(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this,
			int index);  // 205
	PercolateUp(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this,
			int index);  // 145
	RevaluateElement(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this,
			const int  nStartingIndex);  // 132
} /* size: 357, variables: 1, inline expansions: 14 (636 bytes) */

// <06F20033> ../../public/tier0/utlpriorityqueue.h:136
// variable: 1
inline void CUtlPriorityQueue<CFeAgglomerator::CCluster::RevaluateElement(const int nStartingIndex)
{
	int index; // 138
} /* size: 0, variables: 1 */

// <06F1F834> ../../public/tier0/utlpriorityqueue.h:136
// variable: 1
inline void RevaluateElement(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this, const int nStartingIndex)
{
	int index; // 138
} /* size: 0, variables: 1 */

// <05EE9B42> ../public/tier0/utlpriorityqueue.h:136
// variable: 1
inline void RevaluateElement(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this, const int nStartingIndex)
{
	int index; // 138
} /* size: 0, variables: 1 */

// <05E6C0D7> ../public/tier0/utlpriorityqueue.h:136
// variable: 1
inline void RevaluateElement(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this, const int nStartingIndex)
{
	int index; // 138
} /* size: 0, variables: 1 */

// <06F1F76C> ../../public/tier0/utlpriorityqueue.h:165
// variables: 5
inline void CUtlPriorityQueue<CFeAgglomerator::CCluster::PercolateDown(int index)
{
	int count; // 167
	ClusterLessFunc_t lessFunc; // 169
	int half; // 170
	int larger; // 171
	{
		int child; // 174
	}
} /* size: 0, variables: 4 */

// <06F1EF5B> ../../public/tier0/utlpriorityqueue.h:165
// variables: 5
inline void PercolateDown(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this, int index)
{
	int count; // 167
	LinkLessFunc_t lessFunc; // 169
	int half; // 170
	int larger; // 171
	{
		int child; // 174
	}
} /* size: 0, variables: 4 */

// <0614CC39> ../public/tier0/utlpriorityqueue.h:165
// variables: 5
inline void PercolateDown(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this, int index)
{
	int count; // 167
	CDefUtlPriorityQueueLessFunc<edge_queue_entry_t> lessFunc; // 169
	int half; // 170
	int larger; // 171
	{
		int child; // 174
	}
} /* size: 0, variables: 4 */

// <05EE85C5> ../public/tier0/utlpriorityqueue.h:165
// variables: 5
// function calls: 45
void PercolateDown(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this, int index)
{
	int count; // 167
	HalfEdgeOp_t lessFunc; // 169
	int half; // 170
	int larger; // 171
	{
		int child; // 174
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 178
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 178
		HalfEdgeOp_t::operator(
				const HalfEdgeHandle_t& lhs,
				const HalfEdgeHandle_t& rhs,
				CHullIFR* pMesh);  // 178
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 189
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 189
		HalfEdgeOp_t::operator(
				const HalfEdgeHandle_t& lhs,
				const HalfEdgeHandle_t& rhs,
				CHullIFR* pMesh);  // 189
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 238
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 239
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 240
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 242
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 466
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 470
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::GetComponent(
				ComponentHandle_t handle);  // 1379
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 1497
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetEdgeData(
				HalfEdgeHandle_t hHalfEdge);  // 165
		SetIndex(const HalfEdgeHandle_t& heapElement,
			int nNewIndex,
			CHullIFR* pMesh);  // 242
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 243
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 466
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 470
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::GetComponent(
				ComponentHandle_t handle);  // 1379
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 1497
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetEdgeData(
				HalfEdgeHandle_t hHalfEdge);  // 165
		SetIndex(const HalfEdgeHandle_t& heapElement,
			int nNewIndex,
			CHullIFR* pMesh);  // 243
		Swap(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this,
			int index1,
			int index2);  // 197
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 71
	Count(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFac this); // 167
} /* size: 576, variables: 4, inline expansions: 2 (8 bytes) */

// <05E65212> ../public/tier0/utlpriorityqueue.h:165
// variables: 5
inline void PercolateDown(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this, int index)
{
	int count; // 167
	VertexOp_t lessFunc; // 169
	int half; // 170
	int larger; // 171
	{
		int child; // 174
	}
} /* size: 0, variables: 4 */

// <05E5D06B> ../public/tier0/utlpriorityqueue.h:165
// variables: 5
inline void CUtlPriorityQueue<CHullIVR::VertexSet_t::PercolateDown(int index)
{
	int count; // 167
	CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*> lessFunc; // 169
	int half; // 170
	int larger; // 171
	{
		int child; // 174
	}
} /* size: 0, variables: 4 */

// <05C204F4> ../public/tier0/utlpriorityqueue.h:165
// variables: 5
inline void PercolateDown(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this, int index)
{
	int count; // 167
	HewlFunctor_t lessFunc; // 169
	int half; // 170
	int larger; // 171
	{
		int child; // 174
	}
} /* size: 0, variables: 4 */

// <06F1F7CF> ../../public/tier0/utlpriorityqueue.h:205
// variables: 2
inline void PercolateUp(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this, int index)
{
	LinkLessFunc_t lessFunc; // 210
	{
		int parent; // 213
	}
} /* size: 0, variables: 1 */

// <06F1F72D> ../../public/tier0/utlpriorityqueue.h:205
// variables: 2
inline void CUtlPriorityQueue<CFeAgglomerator::CCluster::PercolateUp(int index)
{
	ClusterLessFunc_t lessFunc; // 210
	{
		int parent; // 213
	}
} /* size: 0, variables: 1 */

// <0614D462> ../public/tier0/utlpriorityqueue.h:205
// variables: 2
inline void PercolateUp(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this, int index)
{
	CDefUtlPriorityQueueLessFunc<edge_queue_entry_t> lessFunc; // 210
	{
		int parent; // 213
	}
} /* size: 0, variables: 1 */

// <05EE92E0> ../public/tier0/utlpriorityqueue.h:205
// variables: 2
inline void PercolateUp(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this, int index)
{
	HalfEdgeOp_t lessFunc; // 210
	{
		int parent; // 213
	}
} /* size: 0, variables: 1 */

// <05E65275> ../public/tier0/utlpriorityqueue.h:205
// variables: 2
inline void PercolateUp(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this, int index)
{
	VertexOp_t lessFunc; // 210
	{
		int parent; // 213
	}
} /* size: 0, variables: 1 */

// <05E5D233> ../public/tier0/utlpriorityqueue.h:205
// variables: 2
inline void CUtlPriorityQueue<CHullIVR::VertexSet_t::PercolateUp(int index)
{
	CDefUtlPriorityQueueLessFunc<CHullIVR::VertexSet_t*> lessFunc; // 210
	{
		int parent; // 213
	}
} /* size: 0, variables: 1 */

// <05C209DE> ../public/tier0/utlpriorityqueue.h:205
// variables: 2
inline void PercolateUp(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this, int index)
{
	HewlFunctor_t lessFunc; // 210
	{
		int parent; // 213
	}
} /* size: 0, variables: 1 */

// <06F20064> ../../public/tier0/utlpriorityqueue.h:226
// variables: 2
// function calls: 24
void Insert(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this, const CLink& element)
{
	int index; // 228
	CUtlMemory<CFeAgglomerator::CLink, int>::NumAllocated(); // 1143
	CUtlMemory<CFeAgglomerator::CLink, int>::Base(); // 112
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Base(); // 368
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CFeAgglomerator::CLink, int>::IsGrowable(); // 823
	CUtlMemory<CFeAgglomerator::CLink, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CFeAgglomerator::CLink, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CFeAgglomerator::CLink, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::AddToTail(); // 228
	CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::operator[](
			int i);  // 229
	CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::Count(); // 71
	Count(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, this); // 207
	{
		int parent; // 213
		CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::operator[](
				int i);  // 214
		CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::operator[](
				int i);  // 214
		LinkLessFunc_t::operator(
				const CLink& lhs,
				const CLink& rhs,
				bool (*lessFuncPtr)(const CLink &, const CLink &));  // 214
		CUtlMemory<CFeAgglomerator::CLink, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CLink, CUtlMemory<CFeAgglomerator::CLink, int> >::operator[](
				int i);  // 240
		Swap(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this,
			int index1,
			int index2);  // 218
	}
	PercolateUp(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this,
			int index);  // 205
	PercolateUp(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this,
			int index);  // 232
} /* size: 443, variables: 1, inline expansions: 16 (1081 bytes) */

// <06F1FF9F> ../../public/tier0/utlpriorityqueue.h:226
// variable: 1
inline void CUtlPriorityQueue<CFeAgglomerator::CCluster::Insert(CCluster* const& element)
{
	int index; // 228
} /* size: 0, variables: 1 */

// <0614F4F0> ../public/tier0/utlpriorityqueue.h:226
// variable: 1
inline void Insert(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this, const edge_queue_entry_t& element)
{
	int index; // 228
} /* size: 0, variables: 1 */

// <05EEE700> ../public/tier0/utlpriorityqueue.h:226
// variables: 2
// function calls: 53
void Insert(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this, const ComponentHandleWithListPointer_t& element)
{
	int index; // 228
	NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 1143
	Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 824
	IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 823
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 859
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 861
	Grow(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 228
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int i);  // 229
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int i);  // 230
	SetIndex(const HalfEdgeHandle_t& heapElement,
		int nNewIndex,
		CHullIFR* pMesh);  // 230
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 71
	Count(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFac this); // 207
	{
		int parent; // 213
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 240
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 242
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 466
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 470
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::GetComponent(
				ComponentHandle_t handle);  // 1379
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 1497
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetEdgeData(
				HalfEdgeHandle_t hHalfEdge);  // 165
		SetIndex(const HalfEdgeHandle_t& heapElement,
			int nNewIndex,
			CHullIFR* pMesh);  // 242
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 243
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 466
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 470
		CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::GetComponent(
				ComponentHandle_t handle);  // 1379
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 1497
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetEdgeData(
				HalfEdgeHandle_t hHalfEdge);  // 165
		SetIndex(const HalfEdgeHandle_t& heapElement,
			int nNewIndex,
			CHullIFR* pMesh);  // 243
		Swap(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this,
			int index1,
			int index2);  // 218
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 214
		HalfEdgeOp_t::operator(
				const HalfEdgeHandle_t& lhs,
				const HalfEdgeHandle_t& rhs,
				CHullIFR* pMesh);  // 214
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 214
	}
	PercolateUp(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this,
			int index);  // 205
	PercolateUp(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this,
			int index);  // 232
} /* size: 742, variables: 1, inline expansions: 19 (1609 bytes) */

// <05E6C108> ../public/tier0/utlpriorityqueue.h:226
// variable: 1
inline void Insert(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this, const ComponentHandleWithListPointer_t& element)
{
	int index; // 228
} /* size: 0, variables: 1 */

// <05E666FC> ../public/tier0/utlpriorityqueue.h:226
// variable: 1
inline void CUtlPriorityQueue<CHullIVR::VertexSet_t::Insert(VertexSet_t* const& element)
{
	int index; // 228
} /* size: 0, variables: 1 */

// <05C21057> ../public/tier0/utlpriorityqueue.h:226
// variable: 1
inline void Insert(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this, const HalfEdgeWithLength_t& element)
{
	int index; // 228
} /* size: 0, variables: 1 */

// <06F1EEB3> ../../public/tier0/utlpriorityqueue.h:236
// variable: 1
inline void Swap(const CUtlPriorityQueue<CFeAgglomerator::CLink, CFeAgglomerator::LinkLessFunc_t, CUtlMemory<CFeAgglomerator::CLink, int>, this, int index1, int index2)
{
	CLink tmp; // 238
} /* size: 0, variables: 1 */

// <06F1EE76> ../../public/tier0/utlpriorityqueue.h:236
// variable: 1
inline void CUtlPriorityQueue<CFeAgglomerator::CCluster::Swap(int index1, int index2)
{
	CCluster* tmp; // 238
} /* size: 0, variables: 1 */

// <0614C464> ../public/tier0/utlpriorityqueue.h:236
// variable: 1
inline void Swap(const CUtlPriorityQueue<edge_queue_entry_t, CDefUtlPriorityQueueLessFunc<edge_queue_entry_t>, CUtlMemory<edge_queue_entry this, int index1, int index2)
{
	edge_queue_entry_t tmp; // 238
} /* size: 0, variables: 1 */

// <05EE35F0> ../public/tier0/utlpriorityqueue.h:236
// variable: 1
inline void Swap(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this, int index1, int index2)
{
	ComponentHandleWithListPointer_t tmp; // 238
} /* size: 0, variables: 1 */

// <05E5BF28> ../public/tier0/utlpriorityqueue.h:236
// variable: 1
inline void Swap(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this, int index1, int index2)
{
	ComponentHandleWithListPointer_t tmp; // 238
} /* size: 0, variables: 1 */

// <05E560A3> ../public/tier0/utlpriorityqueue.h:236
// variable: 1
inline void CUtlPriorityQueue<CHullIVR::VertexSet_t::Swap(int index1, int index2)
{
	VertexSet_t* tmp; // 238
} /* size: 0, variables: 1 */

// <05C1F75A> ../public/tier0/utlpriorityqueue.h:236
// variable: 1
inline void Swap(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this, int index1, int index2)
{
	HalfEdgeWithLength_t tmp; // 238
} /* size: 0, variables: 1 */

// <05EF0178> ../public/tier0/utlpriorityqueue.h:247
inline void SetLessFunc(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this, CHullIFR* lessfunc)
{
} /* size: 0 */

// <05E6C69A> ../public/tier0/utlpriorityqueue.h:247
inline void SetLessFunc(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>: this, CHullIVR* lessfunc)
{
} /* size: 0 */

// <05E668F4> ../public/tier0/utlpriorityqueue.h:247
inline void CUtlPriorityQueue<CHullIVR::VertexSet_t::SetLessFunc(bool (*lessfunc)(VertexSet_t* const &, VertexSet_t* const &))
{
} /* size: 0 */

