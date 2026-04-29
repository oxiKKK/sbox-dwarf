
//
// meshutils/dualhull.cpp
//
//	referenced by: libengine2.so
//
//	functions: 41
//

// <05DFFEEF> meshutils/dualhull.cpp:12
// function calls: 9
void CClusterInfo::Init(const qhFace* pFace, const Vector& vCentroid)
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 12
	AsVector(const qhVector3& V); // 14
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 14
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 244
	operator*(qhReal S,
			const qhVector3& V);  // 14
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 12
	AsVector(const qhVector3& V); // 14
	Vector4D::Init(
		const Vector& src,
		vec_t iw);  // 14
} /* size: 0, inline expansions: 9 (0 bytes) */

// <05DFDF6A> meshutils/dualhull.cpp:12
void CClusterInfo::Init(const qhFace* pFace, const Vector& vCentroid)
{
} /* size: 0 */

// <05E002C6> meshutils/dualhull.cpp:30
// function call: 1
void CClusterInfo::GetNormal()
{
	Vector::Normalized(); // 32
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05DFDEE8> meshutils/dualhull.cpp:30
void CClusterInfo::GetNormal()
{
} /* size: 0 */

// <05DFDCC0> meshutils/dualhull.cpp:35
// variables: 3
// function calls: 9
void CClusterInfo::GetDualVert()
{
	const char   __FUNCTION__; // 8134
	float flNormalLen; // 38
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 37
	}
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 38
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 45
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

// <05E00344> meshutils/dualhull.cpp:51
// variable: 1
// function calls: 6
void CClusterInfo::ConstructPlane(qhPlane& plane)
{
	float flNormalLen; // 54
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 54
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <05DFDC8C> meshutils/dualhull.cpp:51
// variable: 1
void CClusterInfo::ConstructPlane(qhPlane& plane)
{
	float flNormalLen; // 54
} /* size: 0, variables: 1 */

// <05DFD0C1> meshutils/dualhull.cpp:106
// variables: 7
// function calls: 33
void LogHull(CUtlVector<qhPlane, CUtlMemory<qhPlane, int> >& planes, CGeoViewBuffer& buf)
{
	qhConvex hull; // 108
	qhConvex dual; // 108
	CUtlVector<qhVector3, CUtlMemory<qhVector3, int> > dualVerts; // 109
	{
		qhPlane& plane; // 110
		CUtlVector<qhPlane, CUtlMemory<qhPlane, int> >& __for_range; // 48721
		iterator __for_begin; // 7458
		iterator __for_end; // 7458
		CUtlMemory<qhPlane, int>::Base(); // 112
		CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::Base(); // 102
		CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::begin(); // 110
		CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::Count(); // 104
		CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::end(); // 110
		CUtlMemory<qhVector3, int>::operator[](
				int i);  // 602
		CUtlVectorBase<qhVector3, CUtlMemory<qhVector3, int> >::Element(
			int i);  // 1252
		Construct<qhVector3, qhVector3>(qhVector3* pMemory); // 1252
		CUtlMemory<qhVector3, int>::Grow(
			int num);  // 806
		CUtlVectorBase<qhVector3, CUtlMemory<qhVector3, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<qhVector3, CUtlMemory<qhVector3, int> >::AddToTail(
				qhVector3& src);  // 111
		qhVector3::qhVector3(
				qhReal x,
				qhReal y,
				qhReal z);  // 258
		operator/(const qhVector3& V,
				qhReal S);  // 111
	}
	CUtlMemory<qhVector3, int>::ValidateGrowSize(); // 475
	CUtlMemory<qhVector3, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<qhVector3, CUtlMemory<qhVector3, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<qhVector3, CUtlMemory<qhVector3, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<qhVector3, CUtlMemory<qhVector3, int> >::CUtlVector(); // 109
	CUtlMemory<qhPlane, int>::Base(); // 112
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::Base(); // 114
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::Count(); // 114
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 117
	LogHull(qhConvex* pHull,
		CGeoViewBuffer& buf,
		const VertexColor_t& color,
		float flScale,
		bool bWireframeOnly);  // 117
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 119
	LogHull(qhConvex* pHull,
		CGeoViewBuffer& buf,
		const VertexColor_t& color,
		float flScale,
		bool bWireframeOnly);  // 119
	CUtlMemory<qhVector3, int>::Purge(); // 903
	CUtlMemory<qhVector3, int>::Purge(); // 1799
	CUtlVectorBase<qhVector3, CUtlMemory<qhVector3, int> >::Purge(); // 560
	ValidateAlignment<qhVector3>(void); // 508
	CUtlMemory<qhVector3, int>::Purge(); // 510
	CUtlMemory<qhVector3, int>::~CUtlMemory(); // 562
	CUtlVectorBase<qhVector3, CUtlMemory<qhVector3, int> >::~CUtlVectorBase(); // 410
	CUtlVector<qhVector3, CUtlMemory<qhVector3, int> >::~CUtlVector(); // 120
} /* size: 0, variables: 3, inline expansions: 20 (0 bytes) */

// <05DFC93F> meshutils/dualhull.cpp:124
// variables: 4
// function calls: 31
void CDualHullAgglomerator::LogClusters(CGeoViewBuffer& buf)
{
	{
		CUtlVector<qhPlane, CUtlMemory<qhPlane, int> > planes; // 127
		{
			int i; // 128
			{
				qhPlane plane; // 132
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 54
				CClusterInfo::ConstructPlane(
						qhPlane& plane);  // 133
				CUtlMemory<qhPlane, int>::operator[](
						int i);  // 602
				CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::Element(
					int i);  // 1201
				CopyConstruct<qhPlane>(qhPlane* pMemory,
							const qhPlane& src);  // 1201
				CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::AddToTail(
						const qhPlane& src);  // 134
			}
			CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 119
			CFeAgglomerator::GetClusterCount(); // 128
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 595
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 120
			CFeAgglomerator::GetCluster(
					int nIndex);  // 130
		}
		CUtlMemory<qhPlane, int>::ValidateGrowSize(); // 475
		CUtlMemory<qhPlane, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<qhPlane, CUtlMemory<qhPlane, int> >::CUtlVector(); // 127
		CUtlMemory<qhPlane, int>::Purge(); // 903
		CUtlMemory<qhPlane, int>::Purge(); // 1799
		CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::Purge(); // 560
		ValidateAlignment<qhPlane>(void); // 508
		CUtlMemory<qhPlane, int>::Purge(); // 510
		CUtlMemory<qhPlane, int>::~CUtlMemory(); // 562
		CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::~CUtlVectorBase(); // 410
		CUtlVector<qhPlane, CUtlMemory<qhPlane, int> >::~CUtlVector(); // 139
	}
	{
		CUtlVector<qhPlane, CUtlMemory<qhPlane, int> > planes; // 143
	}
} /* size: 0 */

// <05DFAD06> meshutils/dualhull.cpp:152
// variables: 5
// function calls: 67
void CDualHullAgglomerator::CDualHullAgglomerator(const qhConvex* pConvex, float flMaxMergeTan)
{
	{
		const qhFace* Node; // 62
		qhList<qhFace>::End(); // 62
		qhList<qhFace>::Begin(); // 62
	}
	qhList<qhFace>::Size(); // 61
	qhConvex::GetFaceCount(); // 153
	{
		const qhFace* Node; // 62
		qhList<qhFace>::Begin(); // 62
	}
	qhList<qhFace>::Size(); // 61
	qhConvex::GetFaceCount(); // 154
	qhList<qhVertex>::Empty(); // 14
	{
		int VertexCount; // 16
		{
			const qhVertex* Vertex; // 17
			qhVector3::operator+=(
					const qhVector3& V);  // 19
		}
		qhVector3::operator/=(
				qhReal S);  // 23
	}
	qhConvex::GetCentroid(); // 156
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 12
	AsVector(const qhVector3& V); // 156
	CUtlMemory<CUtlHashtableEntry<const qhFace::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<const qhFace::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<const qhFace::Init(); // 178
	CUtlHashtable<const qhFace::CUtlHashtable(
			int minimumSize);  // 157
	CUtlMemory<const qhFace::ValidateGrowSize(); // 475
	CUtlMemory<const qhFace::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const qhFace::ResetDbgInfo(); // 530
	CUtlVectorBase<const qhFace::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const qhFace::CUtlVector(); // 157
	CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::ValidateGrowSize(); // 475
	CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::CUtlVector(); // 157
	CUtlHashtable<const qhFace::Reserve(
		int expected);  // 287
	CUtlHashtable<const qhFace::Reserve(
		int expected);  // 159
	_Function_base::_Function_base(); // 378
	function<void()>::function(
		nullptr_t); // 173
	_Function_base::~_Function_base(); // 336
	function<void()>::~function()>* this); // 173
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMemory< this); // 384
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, CUt this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, CUt this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, CUtlMem this); // 384
	CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::CHalfEdgeComponentList(); // 991
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, CUtlM this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, CUtlM this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, CUtlMemor this); // 384
	ValidateGrowSize(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, int> this); // 475
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, int>  this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, C this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, C this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, CUtlM this); // 384
	CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::CHalfEdgeComponentList(); // 991
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, CUtlMemor this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, CUtlMemor this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentEntry_t, CUtlMemory<CH this); // 384
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, CUtlM this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, CUtlM this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::ComponentReference_t, CUtlMemor this); // 384
	CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Face_t>::CHalfEdgeComponentList(); // 991
	CHalfEdgeMesh<int, EdgeDataPair_t, int>::CHalfEdgeMesh(); // 157
} /* size: 902, inline expansions: 62 (1592 bytes) */

// <05DFACC7> meshutils/dualhull.cpp:152
// variable: 1
void CDualHullAgglomerator::CDualHullAgglomerator(const qhConvex* pConvex, float flMaxMergeTan)
{
	{
		CGeoViewBuffer buf; // 167
	}
} /* size: 0 */

// <05DFAC78> meshutils/dualhull.cpp:179
// variables: 2
float ComputeErrorMultiplier(const Vector& a, const Vector& b, float flTanA)
{
	float flCosB; // 181
	float flSinB; // 184
} /* size: 0, variables: 2 */

// <05DF9F80> meshutils/dualhull.cpp:191
// variables: 9
// function calls: 54
void CDualHullAgglomerator::SetNodes()
{
	const qhList<qhFace>& faces; // 195
	uint nFace; // 196
	const char   __FUNCTION__; // 8053
	{
		const qhFace* itFace; // 197
		{
			CClusterInfo& ci; // 202
			const qhHalfEdge* heStart; // 205
			const qhHalfEdge* he; // 205
			{
				float flErrMul; // 209
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
				}
				Max<float>(const float& val1,
						const float& val2);  // 210
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 12
				AsVector(const qhVector3& V); // 209
				DotProduct(const Vector& a,
						const Vector& b);  // 1167
				Vector::Dot(
					const Vector& vOther);  // 181
				Vector::Vector(); // 1487
				CrossProduct(const Vector& a,
						const Vector& b,
						Vector& result);  // 1488
				Vector::Cross(
					const Vector& vOther);  // 184
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 184
				ComputeErrorMultiplier(const Vector& a,
							const Vector& b,
							float flTanA);  // 209
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 12
				AsVector(const qhVector3& V); // 209
			}
			Mix32HashFunctor::operator(
					uint32 n);  // 139
			PointerHashFunctor::operator(
					const void* s);  // 249
			CUtlMemory<CUtlHashtableEntry<const qhFace::operator[](
					int i);  // 720
			CUtlKeyValuePair<const qhFace::CUtlKeyValuePair<const qhFace*, int>(
								const qhFace* const& k,
								const int& v);  // 1514
			Construct<CUtlKeyValuePair<const qhFace*, int>, const qhFace*&, int&>(CUtlKeyValuePair<const qhFace*, int>* pMemory); // 720
			CUtlHashtable<const qhFace::DoInsert<const qhFace*>(
						const qhFace* k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
			CUtlHashtable<const qhFace::DoInsert<const qhFace*>(
						const qhFace* k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
			CUtlHashtable<const qhFace::Insert(
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 199
			CUtlMemory<const qhFace::operator[](
					int i);  // 588
			CUtlVectorBase<const qhFace::operator[](
					int i);  // 200
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 12
			AsVector(const qhVector3& V); // 201
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 127
			Vector::operator=(
					const Vector& vOther);  // 202
			Vector::operator=(
					const Vector& vOther);  // 203
			AABB_t::SetToPoint(
					const Vector& vPnt);  // 133
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 129
			Vector::operator=(
					const Vector& vOther);  // 202
			Vector::operator=(
					const Vector& vOther);  // 203
			AABB_t::SetToPoint(
					const Vector& vPnt);  // 129
			CFeAgglomerator::SetNode(
				int nIndex,
				const Vector& origin);  // 201
			CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::operator[](
					int i);  // 202
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 12
			AsVector(const qhVector3& V); // 14
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 14
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 244
			operator*(qhReal S,
					const qhVector3& V);  // 14
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 12
			AsVector(const qhVector3& V); // 14
			Vector4D::Init(
				const Vector& src,
				vec_t iw);  // 14
			CClusterInfo::Init(
				const qhFace* pFace,
				const Vector& vCentroid);  // 203
		}
		qhList<qhFace>::Begin(); // 197
		qhList<qhFace>::End(); // 197
	}
} /* size: 0, variables: 3 */

// <05DF5257> meshutils/dualhull.cpp:220
// variables: 36
// function calls: 321
void CDualHullAgglomerator::InitDualTopo()
{
	CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t, int> > vhs; // 222
	CUtlHashtable<const qhVertex*, int, DefaultHashFunctor<const qhVertex*>, DefaultEqualFunctor<const qhVertex*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const qhVertex*, int>, int> > dualFaceAdded; // 237
	CVarBitVec faceScanned; // 238
	CUtlQueue<int, CUtlMemory<int, int> > faceQueue; // 239
	int nNextFace; // 240
	CUtlVector<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t, 8>*, CUtlMemory<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t, 8>*, int> > failedDualFaces; // 244
	const char   __FUNCTION__; // 8161
	{
		int i; // 225
		CUtlVectorBase<const qhFace::Count(); // 225
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_ this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, i this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_ this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::GetComponentIndex(
					ComponentHandle_t handle);  // 466
		CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this,
				int i);  // 470
		CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::GetComponent(
				ComponentHandle_t handle);  // 1363
		CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex(
			VertexHandle_t vertexHandle);  // 1541
		CHalfEdgeMesh<int, EdgeDataPair_t, int>::SetVertexData(
				VertexHandle_t hVertex,
				const int& data);  // 227
		CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::operator[](
				int i);  // 228
	}
	{
		int nSubqueueStartIndex; // 250
		CUtlVectorFixedGrowable<const qhVertex*, 8> subQueue; // 251
		DualFaceVerts_t* pDualFaceVerts; // 279
		{
			const qhFace* pNextFace; // 253
			const qhHalfEdge* heRingStart; // 254
			const qhHalfEdge* heRing; // 254
			{
				int nQueueFace; // 259
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 258
				}
				CUtlMemory<CUtlHashtableEntry<const qhFace::operator[](
						int i);  // 294
				CUtlKeyValuePair<const qhFace::GetValue(); // 294
				CUtlHashtable<const qhFace::Element(
					handle_t idx);  // 302
				Mix32HashFunctor::operator(
						uint32 n);  // 139
				PointerHashFunctor::operator(
						const void* s);  // 218
				CUtlHashtable<const qhFace::Find(
					KeyArg_t k);  // 302
				CUtlHashtable<const qhFace::Get(
					KeyArg_t k,
					const Element_t& defaultValue);  // 259
				BitVec_IsBitSet(const uint32* pBase,
						int nBitNum);  // 1471
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
					int bitNum);  // 260
				Mix32HashFunctor::operator(
						uint32 n);  // 139
				PointerHashFunctor::operator(
						const void* s);  // 218
				CUtlHashtable<const qhVertex::Find(
					KeyArg_t k);  // 267
				CUtlMemory<const qhVertex::NumAllocated(); // 1196
				CUtlMemory<const qhVertex::Base(); // 112
				CUtlVectorBase<const qhVertex::Base(); // 368
				CUtlVectorBase<const qhVertex::ResetDbgInfo(); // 824
				CUtlMemory<const qhVertex::IsGrowable(); // 823
				CUtlMemory<const qhVertex::IsExternallyAllocated(); // 859
				CUtlMemory<const qhVertex::IsExternallyAllocated(); // 861
				CUtlMemory<const qhVertex::Grow(
					int num);  // 806
				CUtlVectorBase<const qhVertex::GrowMemory(
						int num);  // 1198
				CUtlMemory<const qhVertex::operator[](
						int i);  // 602
				CUtlVectorBase<const qhVertex::Element(
					int i);  // 1201
				CopyConstruct<const qhVertex*>(const qhVertex ** pMemory,
								const qhVertex* const& src);  // 1201
				CUtlVectorBase<const qhVertex::AddToTail(
						const qhVertex* const& src);  // 269
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
				Bitvec_Set(uint32* pBits,
						int nBitNum);  // 1480
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
				{
				}
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
					int bitNum);  // 263
				{
					QueueIter_t nextTail; // 216
					CUtlQueue<int, CUtlMemory<int, int> >::Next_Unchecked(
							QueueIter_t it);  // 216
					{
						int nOldAllocCount; // 219
						int nNewAllocCount; // 221
						int nGrowAmount; // 222
						CUtlMemory<int, int>::Grow(
							int num);  // 220
						CUtlQueue<int, CUtlMemory<int, int> >::Next_Unchecked(
								QueueIter_t it);  // 224
						CUtlMemory<int, int>::operator[](
								int i);  // 229
						CUtlMemory<int, int>::operator[](
								int i);  // 229
						memmove(void* __dest,
							const void* __src,
							size_t __len);  // 115
						V_memmove(void* dest,
								const void* src,
								size_t count);  // 229
					}
				}
				CUtlMemory<int, int>::EnsureCapacity(
						int num);  // 210
				CUtlMemory<int, int>::operator[](
						int i);  // 239
				CopyConstruct<int>(int* pMemory,
							const int& src);  // 239
				CUtlQueue<int, CUtlMemory<int, int> >::Insert(
					const int& element);  // 264
			}
			CUtlMemory<const qhFace::operator[](
					int i);  // 588
			CUtlVectorBase<const qhFace::operator[](
					int i);  // 253
		}
		{
			int nSub; // 281
			{
				const qhVertex* pOrigin; // 284
				const qhHalfEdge* heDualFaceStart; // 288
				const qhHalfEdge* heDualFace; // 288
				bool bOk; // 297
				{
					int nClusterIndex; // 292
					Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 112
					Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 368
					ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 824
					GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this,
							int num);  // 1198
					operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this,
							int i);  // 602
					Element(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this,
						int i);  // 1201
					CopyConstruct<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
																const ComponentHandleWithListPointer_t& src);  // 1201
					NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithList this); // 1196
					AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this,
							const ComponentHandleWithListPointer_t& src);  // 294
					Mix32HashFunctor::operator(
							uint32 n);  // 139
					PointerHashFunctor::operator(
							const void* s);  // 218
					CUtlHashtable<const qhFace::Find(
						KeyArg_t k);  // 302
					CUtlMemory<CUtlHashtableEntry<const qhFace::operator[](
							int i);  // 294
					CUtlKeyValuePair<const qhFace::GetValue(); // 294
					CUtlHashtable<const qhFace::Element(
						handle_t idx);  // 302
					CUtlHashtable<const qhFace::Get(
						KeyArg_t k,
						const Element_t& defaultValue);  // 292
					CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::operator[](
							int i);  // 294
				}
				CUtlMemory<const qhVertex::operator[](
						int i);  // 588
				CUtlVectorBase<const qhVertex::operator[](
						int i);  // 284
				CUtlMemory<CUtlHashtableEntry<const qhVertex::operator[](
						int i);  // 706
				CUtlKeyValuePair<const qhVertex::CUtlKeyValuePair<const qhVertex*>(
									const qhVertex* const& k);  // 1514
				Construct<CUtlKeyValuePair<const qhVertex*, int>, const qhVertex*&>(CUtlKeyValuePair<const qhVertex*, int>* pMemory); // 706
				CUtlHashtable<const qhVertex::DoInsert<const qhVertex*>(
								const qhVertex* k,
								unsigned int h,
								bool* pDidInsert);  // 695
				CUtlHashtable<const qhVertex::DoInsert<const qhVertex*>(
								const qhVertex* k,
								unsigned int h,
								bool* pDidInsert);  // 240
				Mix32HashFunctor::operator(
						uint32 n);  // 139
				PointerHashFunctor::operator(
						const void* s);  // 240
				CUtlHashtable<const qhVertex::Insert(
					KeyArg_t k);  // 285
				RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 289
				Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWith this); // 297
				Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 112
				Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 297
				CopyConstruct<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t, 8>*>(CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithLis pMemory,
																CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithLis src);  // 1201
				operator[](const CUtlMemory<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::Compo this,
						int i);  // 602
				Element(const CUtlVectorBase<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::C this,
					int i);  // 1201
				Grow(const CUtlMemory<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::Compo this,
					int num);  // 806
				GrowMemory(const CUtlVectorBase<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::C this,
						int num);  // 1198
				AddToTail(const CUtlVectorBase<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::C this,
						CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithLis src);  // 300
				{
				}
				AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentH this); // 1597
				AlignedByteArray_t(const AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWit this); // 228
				CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this,
						ComponentHandleWithListPointer_t* pMemory,
						int numElements,
						bool bGrowable,
						uint32 nGrowable_GrowSize);  // 197
				EnsureCapacity(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this,
						int num);  // 199
				CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHa this,
								ComponentHandleWithListPointer_t* pFixedMemory,
								int nFixedElements,
								int nGrowSize,
								int nInitAllocationCount);  // 228
				Base(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentH this); // 231
				CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleW this,
							int nGrowSize,
							int nInitSize);  // 527
				ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 530
				CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this,
						int growSize,
						int initCapacity);  // 484
				CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleW this,
							int growSize);  // 301
			}
			CUtlVectorBase<const qhVertex::Count(); // 281
		}
		CUtlMemory<const qhVertex::CUtlMemory(
				const qhVertex ** pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<const qhVertex::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<const qhVertex::CUtlMemoryFixedGrowable_Base(
						const qhVertex ** pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<8, const qhVertex::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<8, const qhVertex::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<8, const qhVertex::Base(); // 231
		CUtlMemoryFixedGrowable<const qhVertex::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<const qhVertex::ResetDbgInfo(); // 530
		CUtlVectorBase<const qhVertex::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<const qhVertex::CUtlVectorFixedGrowable(
					int growSize);  // 251
		{
		}
		AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentH this); // 1597
		AlignedByteArray_t(const AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWit this); // 228
		CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this,
				ComponentHandleWithListPointer_t* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		EnsureCapacity(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this,
				int num);  // 199
		CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHa this,
						ComponentHandleWithListPointer_t* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		Base(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentH this); // 231
		CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleW this,
					int nGrowSize,
					int nInitSize);  // 527
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 530
		CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this,
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleW this,
					int growSize);  // 279
		CUtlMemory<int, int>::operator[](
				int i);  // 134
		CUtlQueue<int, CUtlMemory<int, int> >::Next_Unchecked(
				QueueIter_t it);  // 142
		CUtlQueue<int, CUtlMemory<int, int> >::RemoveAtHead(
				int& removedElement);  // 119
		CUtlQueue<int, CUtlMemory<int, int> >::RemoveAtHead(); // 309
		CUtlVectorBase<const qhVertex::RemoveAll(); // 1798
		AlignedByteArrayExplicit_t<8, const qhVertex::Base(); // 237
		CUtlMemory<const qhVertex::IsExternallyAllocated(); // 577
		CUtlMemory<const qhVertex::ConvertToExternalMemory(
					const qhVertex ** pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<const qhVertex::Purge_FixedGrowable(
					const qhVertex ** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<const qhVertex::Purge_FixedGrowable(
					const qhVertex ** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<const qhVertex::Purge(
			int numElements);  // 1799
		CUtlMemory<const qhVertex::Base(); // 112
		CUtlVectorBase<const qhVertex::Base(); // 368
		CUtlVectorBase<const qhVertex::ResetDbgInfo(); // 1800
		CUtlVectorBase<const qhVertex::Purge(); // 560
		ValidateAlignment<const qhVertex*>(void); // 508
		CUtlMemory<const qhVertex::Purge(); // 903
		CUtlMemory<const qhVertex::Purge(); // 510
		CUtlMemory<const qhVertex::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<const qhVertex::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<const qhVertex::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<const qhVertex::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<const qhVertex::~CUtlVectorFixedGrowable(); // 310
		CUtlVectorBase<const qhVertex::RemoveAll(); // 1798
		AlignedByteArrayExplicit_t<8, const qhVertex::Base(); // 237
		CUtlMemory<const qhVertex::IsExternallyAllocated(); // 577
		CUtlMemory<const qhVertex::ConvertToExternalMemory(
					const qhVertex ** pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<const qhVertex::Purge_FixedGrowable(
					const qhVertex ** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<const qhVertex::Purge_FixedGrowable(
					const qhVertex ** pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<const qhVertex::Purge(
			int numElements);  // 1799
		CUtlMemory<const qhVertex::Base(); // 112
		CUtlVectorBase<const qhVertex::Base(); // 368
		CUtlVectorBase<const qhVertex::ResetDbgInfo(); // 1800
		CUtlVectorBase<const qhVertex::Purge(); // 560
		ValidateAlignment<const qhVertex*>(void); // 508
		CUtlMemory<const qhVertex::Purge(); // 903
		CUtlMemory<const qhVertex::Purge(); // 510
		CUtlMemory<const qhVertex::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<const qhVertex::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<const qhVertex::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<const qhVertex::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<const qhVertex::~CUtlVectorFixedGrowable(); // 310
	}
	{
		int i; // 315
		{
			DualFaceVerts_t* p; // 317
			operator[](const CUtlMemory<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::Compo this,
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::C this,
					int i);  // 317
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWith this); // 318
			Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 112
			Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 318
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 1798
			IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithList this); // 577
			ConvertToExternalMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this,
						ComponentHandleWithListPointer_t* pMemory,
						int numElements,
						int nCopyElements,
						bool bSetGrowable,
						uint32 nGrowable_GrowSize);  // 207
			Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHa this,
						ComponentHandleWithListPointer_t* pFixedMemory,
						int nFixedElements,
						int nPurgeToCount);  // 203
			Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHa this,
						ComponentHandleWithListPointer_t* pFixedMemory,
						int nFixedElements,
						int nPurgeToCount);  // 237
			Base(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentH this); // 237
			Purge(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleW this,
				int numElements);  // 1799
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 1800
			Purge(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 560
			ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
			Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 903
			Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 510
			~CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 191
			~CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHa this); // 223
			~CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleW this); // 562
			~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 478
			~CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleW this); // 320
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			ShiftElementsLeft(const CUtlVectorBase<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::C this,
						int elem,
						int num);  // 1608
			Remove(const CUtlVectorBase<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::C this,
				int elem);  // 321
		}
	}
	CUtlVectorBase<const qhFace::Count(); // 223
	ValidateGrowSize(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 475
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 222
	CUtlVectorBase<const qhFace::Count(); // 224
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, C this); // 575
	CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::Count(); // 1151
	CHalfEdgeMesh<int, EdgeDataPair_t, int>::GetNumVertices(); // 1871
	{
	}
	ValidateGrowSize(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 475
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 1877
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, C this); // 575
	CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::Count(); // 749
	{
		int iComp; // 754
		{
			ComponentHandle_t handle; // 756
		}
	}
	CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::AddMultiple(
			int nCount,
			ComponentHandle_t* pHandles);  // 1885
	{
		int iVertex; // 1901
		{
			Vertex_t* pVertex; // 1903
			CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::InvalidHandle(); // 1072
			CHalfEdgeMesh<int, EdgeDataPair_t, int>::InvalidHalfEdge(); // 1905
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_ this); // 541
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, i this,
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_ this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 466
			CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this,
					int i);  // 470
			CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::GetComponent(
					ComponentHandle_t handle);  // 1363
			CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex(
				VertexHandle_t vertexHandle);  // 1903
		}
	}
	{
		int iVertex; // 1891
		{
			Vertex_t* pVertex; // 1893
			CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::InvalidHandle(); // 1072
			CHalfEdgeMesh<int, EdgeDataPair_t, int>::InvalidHalfEdge(); // 1895
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_ this); // 541
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, i this,
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_ this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 466
			CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this,
					int i);  // 470
			CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::GetComponent(
					ComponentHandle_t handle);  // 1363
			CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex(
				VertexHandle_t vertexHandle);  // 1893
			CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::InvalidHandle(); // 1062
			CHalfEdgeMesh<int, EdgeDataPair_t, int>::InvalidVertex(); // 1896
		}
	}
	CHalfEdgeMesh<int, EdgeDataPair_t, int>::MarkStateModified(); // 1909
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 903
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 510
	~CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 1912
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, C this); // 575
	CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::Count(); // 1151
	CHalfEdgeMesh<int, EdgeDataPair_t, int>::GetNumVertices(); // 1872
	CHalfEdgeMesh<int, EdgeDataPair_t, int>::AddVertices(
			int nNumVertices,
			VertexHandle_t* pVertexHandles);  // 224
	CUtlMemory<CUtlHashtableEntry<const qhVertex::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<const qhVertex::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<const qhVertex::Init(); // 178
	CUtlHashtable<const qhVertex::CUtlHashtable(
			int minimumSize);  // 237
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 32>::AllocInts(
			int numInts);  // 2546
	CVarBitVecBase<short unsigned int, 32>::AllocInts(
			int numInts);  // 1294
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(
			int numBits);  // 1419
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1970
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1427
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(
			int numBits);  // 1224
	CVarBitVec::CVarBitVec(
			int nBitCount);  // 238
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 105
	CUtlQueue<int, CUtlMemory<int, int> >::CUtlQueue(
			int growSize,
			int initSize);  // 239
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
	{
	}
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
	Bitvec_Set(uint32* pBits,
			int nBitNum);  // 1480
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
		int bitNum);  // 242
	ValidateGrowSize(const CUtlMemory<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::Compo this); // 475
	CUtlMemory(const CUtlMemory<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::Compo this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::C this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::C this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::Compo this); // 244
	Count(const CUtlVectorBase<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex this); // 135
	IsEmpty(const CUtlVectorBase<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex this); // 312
	Purge(const CUtlMemory<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::Compo this); // 903
	Purge(const CUtlMemory<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::Compo this); // 1799
	Purge(const CUtlVectorBase<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::C this); // 560
	ValidateAlignment<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t, 8>*>(void); // 508
	Purge(const CUtlMemory<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::Compo this); // 510
	~CUtlMemory(const CUtlMemory<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::Compo this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::C this); // 410
	~CUtlVector(const CUtlVector<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::Compo this); // 366
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 22
	CUtlQueue<int, CUtlMemory<int, int> >::~CUtlQueue(); // 366
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
	CVarBitVec::~CVarBitVec(); // 366
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<const qhVertex::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<const qhVertex::Count(); // 897
			CUtlHashtableEntry<const qhVertex::IsValid(); // 899
			CUtlHashtableEntry<const qhVertex::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<const qhVertex*, int> >(CUtlKeyValuePair<const qhVertex*, int>* pMemory); // 902
		}
	}
	CUtlHashtable<const qhVertex::RemoveAll(); // 188
	ValidateAlignment<CUtlHashtableEntry<const qhVertex*, int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<const qhVertex::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<const qhVertex::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<const qhVertex::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<const qhVertex::~CUtlMemory(); // 188
	CUtlHashtable<const qhVertex::~CUtlHashtable(); // 366
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 903
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 510
	~CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 366
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 903
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 366
} /* size: 0, variables: 7, inline expansions: 98 (3683 bytes) */

// <05DF4FDC> meshutils/dualhull.cpp:369
// variables: 5
// function calls: 7
void CDualHullAgglomerator::LinkNodes()
{
	{
		uint nFace; // 371
		{
			const qhHalfEdge* heStart; // 373
			const qhHalfEdge* he; // 373
			{
				UtlHashHandle_t hOtherFace; // 376
				{
					int nOtherFace; // 379
					CUtlMemory<CUtlHashtableEntry<const qhFace::operator[](
							int i);  // 297
					CUtlHashtable<const qhFace::operator[](
							handle_t idx);  // 379
				}
				Mix32HashFunctor::operator(
						uint32 n);  // 139
				PointerHashFunctor::operator(
						const void* s);  // 218
				CUtlHashtable<const qhFace::Find(
					KeyArg_t k);  // 376
			}
			CUtlMemory<const qhFace::operator[](
					int i);  // 588
			CUtlVectorBase<const qhFace::operator[](
					int i);  // 373
		}
	}
} /* size: 241 */

// <05DF4D5F> meshutils/dualhull.cpp:389
// variables: 2
// function calls: 11
float ComputeAngle(const Vector& a, const Vector& b)
{
	float flCos; // 391
	float flSin; // 391
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 391
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 391
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 391
} /* size: 0, variables: 2, inline expansions: 11 (0 bytes) */

// <05DF4AFF> meshutils/dualhull.cpp:397
// variables: 2
// function calls: 11
float ComputeTan(const Vector& a, const Vector& b)
{
	float flCos; // 399
	float flSin; // 399
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 399
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 399
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 399
} /* size: 185, variables: 2, inline expansions: 11 (292 bytes) */

// <05DF48AA> meshutils/dualhull.cpp:407
// variables: 9
// function calls: 3
void CDualHullAgglomerator::ComputeCost(const CCluster* pCluster0, const CCluster* pCluster1)
{
	CClusterInfo ci0; // 409
	CClusterInfo ci1; // 409
	Vector vAreaNormal0; // 411
	Vector vAreaNormal1; // 411
	Vector vAreaNormalAve; // 411
	float flError0; // 412
	float flError1; // 413
	float flObjective; // 414
	float flLogObjective; // 415
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 411
} /* size: 335, variables: 9, inline expansions: 3 (40 bytes) */

// <05DF2744> meshutils/dualhull.cpp:423
// variables: 19
// function calls: 147
void CDualHullAgglomerator::GetClusterInfo(int nCluster)
{
	const char   __FUNCTION__; // 8215
	{
		int nNewClusterInfo; // 428
		const CCluster* pCluster; // 429
		CClusterInfo& ci0; // 431
		CClusterInfo& ci1; // 432
		CClusterInfo& ciNew; // 433
		bool bOk; // 437
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 430
		}
		{
			Vector vNewNormal; // 444
			CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t, 8> dvs; // 447
			{
				VertexHandle_t h; // 449
				CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t, 8>& __for_range; // 50175
				iterator __for_begin; // 31913
				iterator __for_end; // 31913
				{
					int nOtherFace; // 451
					CClusterInfo& ciOther; // 453
					float flErrMul; // 454
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 452
					}
					Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_ this); // 541
					operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, i this,
							int i);  // 595
					operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_ this,
							int i);  // 546
					ComponentHandleWithListPointer_t::operator!=(
							const ComponentHandleWithListPointer_t& src);  // 547
					CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::GetComponentIndex(
								ComponentHandle_t handle);  // 466
					CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this,
							int i);  // 470
					CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::GetComponent(
							ComponentHandle_t handle);  // 1363
					CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex(
						VertexHandle_t vertexHandle);  // 1467
					CHalfEdgeMesh<int, EdgeDataPair_t, int>::GetVertexData(
							VertexHandle_t hVertex);  // 451
					CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::operator[](
							int i);  // 453
					Vector::Normalized(); // 32
					CClusterInfo::GetNormal(); // 454
					Max<float>(const float& val1,
							const float& val2);  // 455
					Max<float>(const float& val1,
							const float& val2);  // 456
				}
				Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 112
				Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 102
				begin(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 449
				Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWith this); // 104
				end(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 449
			}
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_ this); // 541
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, i this,
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_ this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 466
			CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, CUtlMem this,
					int i);  // 470
			CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::GetComponent(
					ComponentHandle_t handle);  // 1363
			CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex(
				VertexHandle_t vertexHandle);  // 1541
			CHalfEdgeMesh<int, EdgeDataPair_t, int>::SetVertexData(
					VertexHandle_t hVertex,
					const int& data);  // 440
			CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::InvalidHandle(); // 1062
			CHalfEdgeMesh<int, EdgeDataPair_t, int>::InvalidVertex(); // 443
			CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this,
					ComponentHandleWithListPointer_t* pMemory,
					int numElements,
					bool bGrowable,
					uint32 nGrowable_GrowSize);  // 197
			EnsureCapacity(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this,
					int num);  // 199
			CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHa this,
							ComponentHandleWithListPointer_t* pFixedMemory,
							int nFixedElements,
							int nGrowSize,
							int nInitAllocationCount);  // 228
			AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentH this); // 1597
			AlignedByteArray_t(const AlignedByteArray_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWit this); // 228
			Base(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentH this); // 231
			CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleW this,
						int nGrowSize,
						int nInitSize);  // 527
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 530
			CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this,
					int growSize,
					int initCapacity);  // 484
			CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleW this,
						int growSize);  // 447
			Vector::Normalized(); // 32
			CClusterInfo::GetNormal(); // 444
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_ this); // 541
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_t, i this,
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentReference_ this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 476
			operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, int>  this,
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentEntry_t, C this,
					int i);  // 480
			CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::GetComponent(
					ComponentHandle_t handle);  // 1369
			CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex(
				VertexHandle_t vertexHandle);  // 6983
			IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithList this); // 888
			EnsureCapacity(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this,
					int num);  // 1006
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 1024
			EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this,
					int num);  // 6991
			{
				const HalfEdge_t* pEdge; // 7002
				Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReferenc this); // 541
				operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, this,
						int i);  // 595
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReferenc this,
						int i);  // 546
				ComponentHandleWithListPointer_t::operator!=(
						const ComponentHandleWithListPointer_t& src);  // 547
				CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::GetComponentIndex(
							ComponentHandle_t handle);  // 476
				operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, int this,
						int i);  // 595
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, this,
						int i);  // 480
				CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::GetComponent(
						ComponentHandle_t handle);  // 1385
				CHalfEdgeMesh<int, EdgeDataPair_t, int>::Edge(
					HalfEdgeHandle_t edgeHandle);  // 7002
				NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithList this); // 1196
				operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this,
						int i);  // 602
				Element(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this,
					int i);  // 1201
				CopyConstruct<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
																const ComponentHandleWithListPointer_t& src);  // 1201
				Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 112
				Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 368
				ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 824
				GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this,
						int num);  // 1198
				AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this,
						const ComponentHandleWithListPointer_t& src);  // 7003
				Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReferenc this); // 541
				operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReference_t, this,
						int i);  // 595
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentReferenc this,
						int i);  // 546
				ComponentHandleWithListPointer_t::operator!=(
						const ComponentHandleWithListPointer_t& src);  // 547
				CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::GetComponentIndex(
							ComponentHandle_t handle);  // 476
				operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, int this,
						int i);  // 595
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::ComponentEntry_t, this,
						int i);  // 480
				CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::GetComponent(
						ComponentHandle_t handle);  // 1385
				CHalfEdgeMesh<int, EdgeDataPair_t, int>::Edge(
					HalfEdgeHandle_t edgeHandle);  // 7004
			}
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 7006
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWith this); // 7008
			{
			}
			CHalfEdgeMesh<int, EdgeDataPair_t, int>::GetVerticesConnectedToVertexByEdge<CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t, 8> >(
																VertexHandle_t hVertex,
																CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithLis vertices);  // 448
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 1798
			Base(const AlignedByteArrayExplicit_t<8, CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentH this); // 237
			IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithList this); // 577
			ConvertToExternalMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this,
						ComponentHandleWithListPointer_t* pMemory,
						int numElements,
						int nCopyElements,
						bool bSetGrowable,
						uint32 nGrowable_GrowSize);  // 207
			Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHa this,
						ComponentHandleWithListPointer_t* pFixedMemory,
						int nFixedElements,
						int nPurgeToCount);  // 203
			Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHa this,
						ComponentHandleWithListPointer_t* pFixedMemory,
						int nFixedElements,
						int nPurgeToCount);  // 237
			Purge(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleW this,
				int numElements);  // 1799
			Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 112
			Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 368
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 1800
			Purge(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 560
			ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
			Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 903
			Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 510
			~CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPointe this); // 191
			~CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHa this); // 223
			~CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleW this); // 562
			~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleWithListPo this); // 478
			~CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::ComponentHandleW this); // 458
		}
		CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::Base(); // 112
		CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::Base(); // 368
		CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::GrowMemory(
				int num);  // 1145
		CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::Element(
			int i);  // 1148
		Vector4D::Vector4D(); // 33
		CClusterInfo::CClusterInfo(); // 1479
		Construct<CDualHullAgglomerator::CClusterInfo>(CClusterInfo* pMemory); // 1148
		CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::NumAllocated(); // 1143
		CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::AddToTail(); // 428
		CUtlMemory<CFeAgglomerator::CCluster::operator[](
				int i);  // 588
		CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
				int i);  // 429
		CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::operator[](
				int i);  // 431
		CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::Vertex_t>::InvalidHandle(); // 1062
		CHalfEdgeMesh<int, EdgeDataPair_t, int>::InvalidVertex(); // 435
		CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::InvalidHandle(); // 1072
		CHalfEdgeMesh<int, EdgeDataPair_t, int>::InvalidHalfEdge(); // 3532
		CHalfEdgeComponentList<CHalfEdgeMesh<int, EdgeDataPair_t, int>::HalfEdge_t>::InvalidHandle(); // 1072
		CHalfEdgeMesh<int, EdgeDataPair_t, int>::InvalidHalfEdge(); // 3532
		CHalfEdgeMesh<int, EdgeDataPair_t, int>::MergeVertices(
				VertexHandle_t hVertexA,
				VertexHandle_t hVertexB,
				VertexHandle_t* hOutNewVertex);  // 437
		CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::operator[](
				int i);  // 432
		CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::operator[](
				int i);  // 433
		Vector4D::Vector4D(); // 33
		CClusterInfo::CClusterInfo(); // 22
		Vector4DAdd(const Vector4D& a,
				const Vector4D& b,
				Vector4D& c);  // 442
		Vector4D::Vector4D(); // 441
		Vector4D::operator+(
				const Vector4D& v);  // 24
		Max<float>(const float& val1,
				const float& val2);  // 25
		CClusterInfo::operator+(
				const CClusterInfo& right);  // 434
		Vector4D::operator=(
				const Vector4D& vOther);  // 33
		CClusterInfo::operator=(
				CClusterInfo &);  // 434
	}
	CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::Count(); // 426
	CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::operator[](
			int i);  // 465
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 33
	CClusterInfo::CClusterInfo(
			const CClusterInfo  &);  // 465
} /* size: 0, variables: 1, inline expansions: 5 (129 bytes) */

// <05DF246C> meshutils/dualhull.cpp:470
// variables: 6
// function calls: 11
bool IsAngleLtTan(const Vector& a, const Vector& b, float flTanMergeAngle)
{
	const char   __FUNCTION__; // 8161
	float flCos; // 473
	float flSin; // 476
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 472
	}
	{
		Vector na; // 480
		Vector nb; // 480
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 473
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 476
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 476
} /* size: 0, variables: 3, inline expansions: 11 (298 bytes) */

// <05DF20B2> meshutils/dualhull.cpp:487
// variables: 2
// function calls: 12
bool HasFlatOrShortEdge(qhConvex* pConvex, float flTanMergeAngle, float flShortLength)
{
	{
		const qhFace* pFace; // 491
		{
			const qhHalfEdge* pEdge; // 493
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 237
			operator-(const qhVector3& V1,
					const qhVector3& V2);  // 501
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 12
			AsVector(const qhVector3& V); // 501
			Vector::LengthSqr(); // 501
			Sqr(float f); // 501
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 12
			AsVector(const qhVector3& V); // 497
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 12
			AsVector(const qhVector3& V); // 497
		}
		qhList<qhFace>::Begin(); // 491
		qhList<qhFace>::End(); // 491
	}
} /* size: 0 */

// <05DF1C14> meshutils/dualhull.cpp:512
// variables: 4
// function calls: 18
void CDualHullAgglomerator::ConstructReducedPrimalHull(uint nMaxFaces)
{
	CVarBitVec planes; // 515
	int nPlanesLeft; // 516
	qhConvex* pDualHull; // 519
	qhConvex* pPrimalHull; // 520
	CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 119
	CFeAgglomerator::GetClusterCount(); // 515
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 32>::AllocInts(
			int numInts);  // 2546
	CVarBitVecBase<short unsigned int, 32>::AllocInts(
			int numInts);  // 1294
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(
			int numBits);  // 1419
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1970
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1427
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(
			int numBits);  // 1224
	CVarBitVec::CVarBitVec(
			int nBitCount);  // 515
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
	CVarBitVec::~CVarBitVec(); // 522
} /* size: 0, variables: 4, inline expansions: 18 (0 bytes) */

// <05DF11CB> meshutils/dualhull.cpp:524
// variables: 4
// function calls: 46
void CDualHullAgglomerator::ComputeMergedPlanes(CUtlVector<qhPlane, CUtlMemory<qhPlane, int> >& rnPlanes, uint nMaxFaces)
{
	CVarBitVec planes; // 526
	int nPlanesLeft; // 527
	{
		int i; // 530
		{
			qhPlane plane; // 534
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 54
			CClusterInfo::ConstructPlane(
					qhPlane& plane);  // 535
			CUtlMemory<qhPlane, int>::NumAllocated(); // 1196
			CUtlMemory<qhPlane, int>::operator[](
					int i);  // 602
			CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::Element(
				int i);  // 1201
			CopyConstruct<qhPlane>(qhPlane* pMemory,
						const qhPlane& src);  // 1201
			CUtlMemory<qhPlane, int>::Base(); // 112
			CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::Base(); // 368
			CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::AddToTail(
					const qhPlane& src);  // 536
		}
		CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 119
		CFeAgglomerator::GetClusterCount(); // 530
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
		{
		}
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 1471
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
			int bitNum);  // 532
	}
	CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 119
	CFeAgglomerator::GetClusterCount(); // 526
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 32>::AllocInts(
			int numInts);  // 2546
	CVarBitVecBase<short unsigned int, 32>::AllocInts(
			int numInts);  // 1294
	CVarBitVecBase<short unsigned int, 32>::CVarBitVecBase(
			int numBits);  // 1419
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1970
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::ClearAll(); // 1427
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 32>::CVarBitVecT(
			int numBits);  // 1224
	CVarBitVec::CVarBitVec(
			int nBitCount);  // 526
	CUtlMemory<qhPlane, int>::IsGrowable(); // 881
	CUtlMemory<qhPlane, int>::IsExternallyAllocated(); // 888
	CUtlMemory<qhPlane, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::EnsureCapacity(
			int num);  // 529
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::RemoveAll(); // 528
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
	CVarBitVec::~CVarBitVec(); // 539
} /* size: 0, variables: 2, inline expansions: 24 (1013 bytes) */

// <05DF0E88> meshutils/dualhull.cpp:541
// variables: 3
// function calls: 7
void CDualHullAgglomerator::ComputeMergedPlanes(CVarBitVec& planes, uint nMaxFaces)
{
	int nPlanesLeft; // 544
	{
		int nReducedByIn2ndPass; // 551
	}
	{
	}
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1926
	GetStartBitMask(int startBit); // 1932
	GetEndMask(int numBits); // 1933
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1957
	{
		uint32 nCombinedMask; // 1937
	}
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Ranged_Set(
			int nStartBit,
			int nEndBit);  // 543
	CDualHullAgglomerator::ReducePlaneCount(
			uint nMaxFaces,
			int& nPlanesLeft,
			CVarBitVec& planes);  // 548
} /* size: 0, variables: 1, inline expansions: 7 (220 bytes) */

// <05DF0720> meshutils/dualhull.cpp:577
// variables: 3
// function calls: 24
qhConvex* ConstructHull(const CMesh& mesh, float flWeld)
{
	CUtlVector<Vector, CUtlMemory<Vector, int> > verts; // 579
	{
		int v; // 581
		CMesh::GetVertex(
				int nIndex);  // 187
		CMesh::GetVertexPosition(
					int nIndex);  // 582
		Vector::operator=(
				const Vector& vOther);  // 582
	}
	CMesh::VertexCount(); // 580
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 579
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
		int count);  // 580
	ConstructHull(const CUtlVector<Vector, CUtlMemory<Vector, int> >& verts,
			float flWeld);  // 583
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 584
} /* size: 0, variables: 1, inline expansions: 21 (0 bytes) */

// <05DEFFD3> meshutils/dualhull.cpp:586
// variables: 2
// function calls: 29
void CDualHullAgglomerator::ConstructDualHull(int nPlanesLeft, const CVarBitVec& planes)
{
	CUtlVector<Vector, CUtlMemory<Vector, int> > dualVerts; // 588
	{
		int i; // 590
		CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 119
		CFeAgglomerator::GetClusterCount(); // 590
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
		{
		}
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 1471
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
			int bitNum);  // 592
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1201
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1201
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
				const Vector& src);  // 594
	}
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::EnsureCapacity(
			int num);  // 589
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 588
	ConstructHull(const CUtlVector<Vector, CUtlMemory<Vector, int> >& verts,
			float flWeld);  // 597
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 598
} /* size: 0, variables: 1, inline expansions: 17 (0 bytes) */

// <05DEF6E5> meshutils/dualhull.cpp:600
// variables: 7
// function calls: 36
void CDualHullAgglomerator::ConstructPrimalHull(qhConvex* pDualHull)
{
	CUtlVector<Vector, CUtlMemory<Vector, int> > arrVertices; // 605
	const char   __FUNCTION__; // 8350
	{
		const qhFace* itFace; // 607
		{
			const qhPlane& plane; // 609
			Vector vertex; // 612
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 610
			}
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 1201
			CopyConstruct<Vector>(Vector* pMemory,
						const Vector& src);  // 1201
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
					const Vector& src);  // 613
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 12
			AsVector(const qhVector3& V); // 612
			Vector::Vector(); // 1464
			VectorDivide(const Vector& a,
					vec_t b,
					Vector& c);  // 1465
			Vector::operator/(
					float fl);  // 612
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 612
		}
		qhList<qhFace>::Begin(); // 607
	}
	{
		const qhFace* Node; // 62
		qhList<qhFace>::Begin(); // 62
		qhList<qhFace>::End(); // 62
	}
	qhList<qhFace>::Size(); // 61
	qhConvex::GetFaceCount(); // 606
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 605
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::EnsureCapacity(
			int num);  // 606
	ConstructHull(const CUtlVector<Vector, CUtlMemory<Vector, int> >& verts,
			float flWeld);  // 616
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 617
} /* size: 0, variables: 2, inline expansions: 19 (0 bytes) */

// <05E00790> meshutils/dualhull.cpp:619
// variable: 1
void CDualHullAgglomerator::ReducePlaneCount(uint nMaxFaces, int& nPlanesLeft, CVarBitVec& planes)
{
	int nReducedBy; // 624
} /* size: 0, variables: 1 */

// <05DFF5DF> meshutils/dualhull.cpp:619
// variables: 5
// function calls: 34
void CDualHullAgglomerator::ReducePlaneCount(uint nMaxFaces, int& nPlanesLeft, CVarBitVec& planes)
{
	int nReducedBy; // 624
	{
		int nCluster; // 627
		CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 119
		CFeAgglomerator::GetClusterCount(); // 627
		{
			CCluster* pCluster; // 629
			uint nChild0; // 630
			uint nChild1; // 630
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
				int bitNum);  // 644
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
				int bitNum);  // 644
			{
			}
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
				int bitNum);  // 632
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
				int bitNum);  // 632
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
				int bitNum);  // 634
			{
			}
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1497
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1498
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Clear(
				int bitNum);  // 636
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1497
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1498
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Clear(
				int bitNum);  // 637
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 1480
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
				int bitNum);  // 638
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 629
		}
	}
} /* size: 0, variables: 1 */

// <05DEF61F> meshutils/dualhull.cpp:619
// variables: 8
void CDualHullAgglomerator::ReducePlaneCount(uint nMaxFaces, int& nPlanesLeft, CVarBitVec& planes)
{
	int nReducedBy; // 624
	const char   __FUNCTION__; // 8269
	{
		int nCluster; // 627
		{
			CCluster* pCluster; // 629
			uint nChild0; // 630
			uint nChild1; // 630
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 634
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 644
			}
		}
	}
} /* size: 0, variables: 2 */

// <05DEEEA3> meshutils/dualhull.cpp:652
// variables: 11
// function calls: 23
void CDualHullAgglomerator::ReduceFlatEdges(int& nPlanesLeft, CVarBitVec& planes)
{
	int nReducedBy; // 654
	{
		int nCluster; // 658
		{
			Vector n; // 660
		}
	}
	{
		int nCluster; // 665
		{
			CCluster* pCluster; // 667
			uint nChild0; // 668
			uint nChild1; // 668
			{
				CClusterInfo ci0; // 671
				CClusterInfo ci1; // 672
				Vector n0; // 673
				Vector n1; // 674
				Max<float>(const float& val1,
						const float& val2);  // 676
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1497
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1498
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Clear(
					int bitNum);  // 680
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1497
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1498
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Clear(
					int bitNum);  // 681
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
				Bitvec_Set(uint32* pBits,
						int nBitNum);  // 1480
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
					int bitNum);  // 682
			}
			CUtlMemory<CFeAgglomerator::CCluster::operator[](
					int i);  // 588
			CUtlVectorBase<CFeAgglomerator::CCluster::operator[](
					int i);  // 667
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
				int bitNum);  // 669
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
				int bitNum);  // 669
		}
		CUtlVectorBase<CFeAgglomerator::CCluster::Count(); // 119
		CFeAgglomerator::GetClusterCount(); // 665
	}
} /* size: 0, variables: 1 */

// <05DEE3C3> meshutils/dualhull.cpp:694
// variables: 10
// function calls: 43
qhConvex* SimplifyAgg(const RnHullSimplificationParams_t* pSimplificationParams, qhConvex* pConvex, float flTanMergeAngle)
{
	CDualHullAgglomerator simplifier; // 697
	uint nMaxFaces; // 698
	qhConvex* pSimple; // 701
	{
		qhConvex* pCandidate; // 704
	}
	{
		const qhFace* Node; // 62
		qhList<qhFace>::Begin(); // 62
		qhList<qhFace>::End(); // 62
	}
	qhList<qhFace>::Size(); // 61
	qhConvex::GetFaceCount(); // 48
	{
		const qhFace* Face; // 41
		{
			qhHalfEdge* Edge; // 43
		}
	}
	qhConvex::GetEdgeCount(); // 49
	{
		const qhVertex* Node; // 62
		qhList<qhVertex>::Begin(); // 62
		qhList<qhVertex>::End(); // 62
	}
	qhList<qhVertex>::Size(); // 33
	qhConvex::GetVertexCount(); // 50
	IsConvexTooComplexForRuntime(qhConvex* pConvex,
					const RnHullSimplificationParams_t* pParams);  // 702
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<const qhFace::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<const qhFace::Count(); // 897
			CUtlHashtableEntry<const qhFace::IsValid(); // 899
			CUtlHashtableEntry<const qhFace::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<const qhFace*, int> >(CUtlKeyValuePair<const qhFace*, int>* pMemory); // 902
		}
	}
	CUtlHashtable<const qhFace::RemoveAll(); // 188
	ValidateAlignment<CUtlHashtableEntry<const qhFace*, int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<const qhFace::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<const qhFace::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<const qhFace::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<const qhFace::~CUtlMemory(); // 188
	CUtlHashtable<const qhFace::~CUtlHashtable(); // 18
	CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::RemoveAll(); // 1798
	CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::Purge(); // 903
	CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::Purge(); // 1799
	CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::Purge(); // 560
	ValidateAlignment<CDualHullAgglomerator::CClusterInfo>(void); // 508
	CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::Purge(); // 510
	CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::~CUtlVector(); // 18
	CUtlVectorBase<const qhFace::RemoveAll(); // 1798
	CUtlMemory<const qhFace::IsExternallyAllocated(); // 905
	CUtlMemory<const qhFace::Purge(); // 903
	CUtlMemory<const qhFace::Purge(); // 1799
	CUtlVectorBase<const qhFace::Purge(); // 560
	ValidateAlignment<const qhFace*>(void); // 508
	CUtlMemory<const qhFace::Purge(); // 510
	CUtlMemory<const qhFace::~CUtlMemory(); // 562
	CUtlVectorBase<const qhFace::~CUtlVectorBase(); // 410
	CUtlVector<const qhFace::~CUtlVector(); // 18
	CDualHullAgglomerator::~CDualHullAgglomerator(); // 712
} /* size: 0, variables: 3, inline expansions: 34 (0 bytes) */

// <05DEC924> meshutils/dualhull.cpp:715
// variables: 10
// function calls: 120
qhConvex* SimplifyLloyd(const RnHullSimplificationParams_t* pSimplificationParams, qhConvex* pConvex, float flTanMergeAngle)
{
	qhConvex* pSimple; // 717
	{
		int nPrevFaceCount; // 724
		int nNextFaceCount; // 725
		CQuickHullSimplifier simplifier; // 733
		{
			const qhFace* Node; // 62
			qhList<qhFace>::Begin(); // 62
			qhList<qhFace>::End(); // 62
		}
		qhList<qhFace>::Size(); // 61
		qhConvex::GetFaceCount(); // 724
		Max<int>(const int& val1,
			const int& val2);  // 725
		Min<int>(const int& val1,
			const int& val2);  // 725
		Max<int>(const int& val1,
			const int& val2);  // 725
		CUtlMemory<CQuickHullSimplifier::Face_t, int>::CUtlMemory(
				Face_t* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<CQuickHullSimplifier::Face_t, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<CQuickHullSimplifier::Face_t, int>::CUtlMemoryFixedGrowable_Base(
						Face_t* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Face_t, 8>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<256, CQuickHullSimplifier::Face_t>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Face_t, 8>::Base(); // 231
		CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<CQuickHullSimplifier::Face_t, 256>::CUtlVectorFixedGrowable(
					int growSize);  // 34
		CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::CUtlMemory(
				Cluster_t* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<CQuickHullSimplifier::Cluster_t, int>::CUtlMemoryFixedGrowable_Base(
						Cluster_t* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Cluster_t, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<256, CQuickHullSimplifier::Cluster_t>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Cluster_t, 4>::Base(); // 231
		CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		ResetDbgInfo(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int> this); // 530
		CUtlVectorBase(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int>  this,
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<CQuickHullSimplifier::Cluster_t, 256>::CUtlVectorFixedGrowable(
					int growSize);  // 34
		CQuickHullSimplifier::CQuickHullSimplifier(); // 733
		{
			const qhFace* Node; // 62
			qhList<qhFace>::Begin(); // 62
			qhList<qhFace>::End(); // 62
		}
		qhList<qhFace>::Size(); // 61
		qhConvex::GetFaceCount(); // 735
		RemoveAll(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int> this); // 1798
		CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::IsExternallyAllocated(); // 577
		CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::ConvertToExternalMemory(
					Cluster_t* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<CQuickHullSimplifier::Cluster_t, int>::Purge_FixedGrowable(
					Cluster_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<CQuickHullSimplifier::Cluster_t, int>::Purge_FixedGrowable(
					Cluster_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Cluster_t, 4>::Base(); // 237
		CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int> this); // 368
		ResetDbgInfo(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int> this); // 1800
		Purge(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int> this); // 560
		ValidateAlignment<CQuickHullSimplifier::Cluster_t>(void); // 508
		CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::Purge(); // 903
		CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::Purge(); // 510
		CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<CQuickHullSimplifier::Cluster_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int>::~CUtlMemoryFixedGrowable(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int> this); // 478
		CUtlVectorFixedGrowable<CQuickHullSimplifier::Cluster_t, 256>::~CUtlVectorFixedGrowable(); // 34
		CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::RemoveAll(); // 1798
		AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Face_t, 8>::Base(); // 237
		CUtlMemory<CQuickHullSimplifier::Face_t, int>::IsExternallyAllocated(); // 577
		CUtlMemory<CQuickHullSimplifier::Face_t, int>::ConvertToExternalMemory(
					Face_t* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<CQuickHullSimplifier::Face_t, int>::Purge_FixedGrowable(
					Face_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<CQuickHullSimplifier::Face_t, int>::Purge_FixedGrowable(
					Face_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<CQuickHullSimplifier::Face_t, int>::Base(); // 112
		CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::Base(); // 368
		CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::Purge(); // 560
		ValidateAlignment<CQuickHullSimplifier::Face_t>(void); // 508
		CUtlMemory<CQuickHullSimplifier::Face_t, int>::Purge(); // 903
		CUtlMemory<CQuickHullSimplifier::Face_t, int>::Purge(); // 510
		CUtlMemory<CQuickHullSimplifier::Face_t, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<CQuickHullSimplifier::Face_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<CQuickHullSimplifier::Face_t, 256>::~CUtlVectorFixedGrowable(); // 34
		CQuickHullSimplifier::~CQuickHullSimplifier(); // 740
		RemoveAll(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int> this); // 1798
		AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Cluster_t, 4>::Base(); // 237
		CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::IsExternallyAllocated(); // 577
		CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::ConvertToExternalMemory(
					Cluster_t* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<CQuickHullSimplifier::Cluster_t, int>::Purge_FixedGrowable(
					Cluster_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<CQuickHullSimplifier::Cluster_t, int>::Purge_FixedGrowable(
					Cluster_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int> this); // 368
		ResetDbgInfo(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int> this); // 1800
		Purge(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int> this); // 560
		ValidateAlignment<CQuickHullSimplifier::Cluster_t>(void); // 508
		CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::Purge(); // 903
		CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::Purge(); // 510
		CUtlMemory<CQuickHullSimplifier::Cluster_t, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<CQuickHullSimplifier::Cluster_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int>::~CUtlMemoryFixedGrowable(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CQuickHullSimplifier::Cluster_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Cluster_t, 256, int> this); // 478
		CUtlVectorFixedGrowable<CQuickHullSimplifier::Cluster_t, 256>::~CUtlVectorFixedGrowable(); // 34
		CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::RemoveAll(); // 1798
		AlignedByteArrayExplicit_t<256, CQuickHullSimplifier::Face_t, 8>::Base(); // 237
		CUtlMemory<CQuickHullSimplifier::Face_t, int>::IsExternallyAllocated(); // 577
		CUtlMemory<CQuickHullSimplifier::Face_t, int>::ConvertToExternalMemory(
					Face_t* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<CQuickHullSimplifier::Face_t, int>::Purge_FixedGrowable(
					Face_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<CQuickHullSimplifier::Face_t, int>::Purge_FixedGrowable(
					Face_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<CQuickHullSimplifier::Face_t, int>::Base(); // 112
		CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::Base(); // 368
		CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::Purge(); // 560
		ValidateAlignment<CQuickHullSimplifier::Face_t>(void); // 508
		CUtlMemory<CQuickHullSimplifier::Face_t, int>::Purge(); // 903
		CUtlMemory<CQuickHullSimplifier::Face_t, int>::Purge(); // 510
		CUtlMemory<CQuickHullSimplifier::Face_t, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<CQuickHullSimplifier::Face_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<CQuickHullSimplifier::Face_t, CUtlMemoryFixedGrowable<CQuickHullSimplifier::Face_t, 256, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<CQuickHullSimplifier::Face_t, 256>::~CUtlVectorFixedGrowable(); // 34
		CQuickHullSimplifier::~CQuickHullSimplifier(); // 740
	}
	{
		const qhFace* Node; // 62
		qhList<qhFace>::Begin(); // 62
		qhList<qhFace>::End(); // 62
	}
	qhList<qhFace>::Size(); // 61
	qhConvex::GetFaceCount(); // 48
	{
		const qhFace* Face; // 41
		{
			qhHalfEdge* Edge; // 43
		}
	}
	qhConvex::GetEdgeCount(); // 49
	{
		const qhVertex* Node; // 62
		qhList<qhVertex>::Begin(); // 62
		qhList<qhVertex>::End(); // 62
	}
	qhList<qhVertex>::Size(); // 33
	qhConvex::GetVertexCount(); // 50
	IsConvexTooComplexForRuntime(qhConvex* pConvex,
					const RnHullSimplificationParams_t* pParams);  // 719
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <05DEAF5F> meshutils/dualhull.cpp:746
// variables: 24
// function calls: 83
bool ConstructMeshFromConvex(const qhConvex* pConvex, CMesh& primalMesh)
{
	int nPrimalTriangles; // 750
	int nVertex; // 752
	CUtlHashtable<const qhVertex*, int, PointerHashFunctor, DefaultEqualFunctor<const qhVertex*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const qhVertex*, int>, int> > vertToIndex; // 753
	int nPrimalFilledTriangles; // 760
	const char   __FUNCTION__; // 8453
	{
		const qhVertex* itVertex; // 754
		qhList<qhVertex>::Begin(); // 754
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 12
		AsVector(const qhVector3& V); // 757
		CMesh::GetVertex(
				int nIndex);  // 191
		Vector::operator=(
				const Vector& vOther);  // 191
		CMesh::SetVertexPosition(
					int nIndex,
					const Vector& v);  // 757
		Mix32HashFunctor::operator(
				uint32 n);  // 139
		PointerHashFunctor::operator(
				const void* s);  // 249
		CUtlMemory<CUtlHashtableEntry<const qhVertex::operator[](
				int i);  // 720
		CUtlKeyValuePair<const qhVertex::CUtlKeyValuePair<const qhVertex*, int>(
							const qhVertex* const& k,
							const int& v);  // 1514
		Construct<CUtlKeyValuePair<const qhVertex*, int>, const qhVertex*&, int&>(CUtlKeyValuePair<const qhVertex*, int>* pMemory); // 720
		CUtlHashtable<const qhVertex::DoInsert<const qhVertex*>(
						const qhVertex* k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
		CUtlHashtable<const qhVertex::DoInsert<const qhVertex*>(
						const qhVertex* k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
		CUtlHashtable<const qhVertex::Insert(
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 756
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 767
	}
	{
		const qhFace* itFace; // 61
		qhList<qhFace>::Begin(); // 61
		qhList<qhFace>::End(); // 61
		{
			const qhHalfEdge* pEdge0; // 63
			const qhHalfEdge* pEdge1; // 63
			const qhHalfEdge* pEdge2; // 63
			{
				const qhHalfEdge* pEdge3; // 65
			}
		}
	}
	EnumTriangles<ConstructMeshFromConvex(const qhConvex*, CMesh&)::<lambda(int, qhVertex*, qhVertex*, qhVertex*, const qhFace*)> >(const qhConvex* pConvex,
																const class& fn); // 750
	{
		const qhVertex* Node; // 62
		qhList<qhVertex>::Begin(); // 62
		qhList<qhVertex>::End(); // 62
	}
	qhList<qhVertex>::Size(); // 33
	qhConvex::GetVertexCount(); // 751
	CUtlMemory<CUtlHashtableEntry<const qhVertex::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<const qhVertex::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<const qhVertex::Init(); // 178
	CUtlHashtable<const qhVertex::CUtlHashtable(
			int minimumSize);  // 753
	{
		const qhFace* itFace; // 61
		qhList<qhFace>::Begin(); // 61
		{
			const qhHalfEdge* pEdge0; // 63
			const qhHalfEdge* pEdge1; // 63
			const qhHalfEdge* pEdge2; // 63
			Mix32HashFunctor::operator(
					uint32 n);  // 139
			PointerHashFunctor::operator(
					const void* s);  // 218
			CUtlHashtable<const qhVertex::Find(
				KeyArg_t k);  // 302
			CUtlMemory<CUtlHashtableEntry<const qhVertex::operator[](
					int i);  // 294
			CUtlKeyValuePair<const qhVertex::GetValue(); // 294
			CUtlHashtable<const qhVertex::Element(
				handle_t idx);  // 302
			CUtlHashtable<const qhVertex::Get(
				KeyArg_t k,
				const Element_t& defaultValue);  // 762
			Mix32HashFunctor::operator(
					uint32 n);  // 139
			PointerHashFunctor::operator(
					const void* s);  // 218
			CUtlHashtable<const qhVertex::Find(
				KeyArg_t k);  // 302
			CUtlMemory<CUtlHashtableEntry<const qhVertex::operator[](
					int i);  // 294
			CUtlKeyValuePair<const qhVertex::GetValue(); // 294
			CUtlHashtable<const qhVertex::Element(
				handle_t idx);  // 302
			CUtlHashtable<const qhVertex::Get(
				KeyArg_t k,
				const Element_t& defaultValue);  // 763
			Mix32HashFunctor::operator(
					uint32 n);  // 139
			PointerHashFunctor::operator(
					const void* s);  // 218
			CUtlHashtable<const qhVertex::Find(
				KeyArg_t k);  // 302
			CUtlMemory<CUtlHashtableEntry<const qhVertex::operator[](
					int i);  // 294
			CUtlKeyValuePair<const qhVertex::GetValue(); // 294
			CUtlHashtable<const qhVertex::Element(
				handle_t idx);  // 302
			CUtlHashtable<const qhVertex::Get(
				KeyArg_t k,
				const Element_t& defaultValue);  // 764
			operator()(const class* __closure,
					int nTri,
					qhVertex* v0,
					qhVertex* v1,
					qhVertex* v2,
					const qhFace* pFace); // 64
			{
				const qhHalfEdge* pEdge3; // 65
				Mix32HashFunctor::operator(
						uint32 n);  // 139
				PointerHashFunctor::operator(
						const void* s);  // 218
				CUtlHashtable<const qhVertex::Find(
					KeyArg_t k);  // 302
				CUtlMemory<CUtlHashtableEntry<const qhVertex::operator[](
						int i);  // 294
				CUtlKeyValuePair<const qhVertex::GetValue(); // 294
				CUtlHashtable<const qhVertex::Element(
					handle_t idx);  // 302
				CUtlHashtable<const qhVertex::Get(
					KeyArg_t k,
					const Element_t& defaultValue);  // 762
				Mix32HashFunctor::operator(
						uint32 n);  // 139
				PointerHashFunctor::operator(
						const void* s);  // 218
				CUtlHashtable<const qhVertex::Find(
					KeyArg_t k);  // 302
				CUtlMemory<CUtlHashtableEntry<const qhVertex::operator[](
						int i);  // 294
				CUtlKeyValuePair<const qhVertex::GetValue(); // 294
				CUtlHashtable<const qhVertex::Element(
					handle_t idx);  // 302
				CUtlHashtable<const qhVertex::Get(
					KeyArg_t k,
					const Element_t& defaultValue);  // 763
				Mix32HashFunctor::operator(
						uint32 n);  // 139
				PointerHashFunctor::operator(
						const void* s);  // 218
				CUtlHashtable<const qhVertex::Find(
					KeyArg_t k);  // 302
				CUtlMemory<CUtlHashtableEntry<const qhVertex::operator[](
						int i);  // 294
				CUtlKeyValuePair<const qhVertex::GetValue(); // 294
				CUtlHashtable<const qhVertex::Element(
					handle_t idx);  // 302
				CUtlHashtable<const qhVertex::Get(
					KeyArg_t k,
					const Element_t& defaultValue);  // 764
				operator()(const class* __closure,
						int nTri,
						qhVertex* v0,
						qhVertex* v1,
						qhVertex* v2,
						const qhFace* pFace); // 67
			}
		}
	}
	EnumTriangles<ConstructMeshFromConvex(const qhConvex*, CMesh&)::<lambda(int, qhVertex*, qhVertex*, qhVertex*, const qhFace*)> >(const qhConvex* pConvex,
																const class& fn); // 760
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<const qhVertex::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<const qhVertex::Count(); // 897
			CUtlHashtableEntry<const qhVertex::IsValid(); // 899
			CUtlHashtableEntry<const qhVertex::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<const qhVertex*, int> >(CUtlKeyValuePair<const qhVertex*, int>* pMemory); // 902
		}
	}
	CUtlHashtable<const qhVertex::RemoveAll(); // 188
	ValidateAlignment<CUtlHashtableEntry<const qhVertex*, int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<const qhVertex::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<const qhVertex::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<const qhVertex::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<const qhVertex::~CUtlMemory(); // 188
	CUtlHashtable<const qhVertex::~CUtlHashtable(); // 769
} /* size: 0, variables: 5, inline expansions: 15 (1431 bytes) */

// <05DE9296> meshutils/dualhull.cpp:772
// variables: 24
// function calls: 96
void ConstructGaussMeshFromConvex(const qhConvex* pConvex, CMesh& gaussMesh, CUtlVector<float, CUtlMemory<float, int> >& areas)
{
	int nDualTriangles; // 774
	int nDualVert; // 776
	CUtlHashtable<const qhFace*, int, PointerHashFunctor, DefaultEqualFunctor<const qhFace*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const qhFace*, int>, int> > faceToIndex; // 777
	int nDualFilledTriangles; // 786
	const char   __FUNCTION__; // 8573
	{
		const qhFace* itFace; // 778
		qhList<qhFace>::Begin(); // 778
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 368
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
		CUtlMemory<float, int>::IsGrowable(); // 823
		CUtlMemory<float, int>::IsExternallyAllocated(); // 859
		CUtlMemory<float, int>::IsExternallyAllocated(); // 861
		CUtlMemory<float, int>::Grow(
			int num);  // 806
		CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
				int num);  // 1198
		CUtlMemory<float, int>::operator[](
				int i);  // 602
		CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
			int i);  // 1201
		CopyConstruct<float>(float* pMemory,
					const float& src);  // 1201
		CUtlMemory<float, int>::NumAllocated(); // 1196
		CUtlVectorBase<float, CUtlMemory<float, int> >::AddToTail(
				const float& src);  // 781
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 12
		AsVector(const qhVector3& V); // 782
		CMesh::GetVertex(
				int nIndex);  // 191
		Vector::operator=(
				const Vector& vOther);  // 191
		CMesh::SetVertexPosition(
					int nIndex,
					const Vector& v);  // 782
		Mix32HashFunctor::operator(
				uint32 n);  // 139
		PointerHashFunctor::operator(
				const void* s);  // 249
		CUtlMemory<CUtlHashtableEntry<const qhFace::operator[](
				int i);  // 720
		CUtlKeyValuePair<const qhFace::CUtlKeyValuePair<const qhFace*, int>(
							const qhFace* const& k,
							const int& v);  // 1514
		Construct<CUtlKeyValuePair<const qhFace*, int>, const qhFace*&, int&>(CUtlKeyValuePair<const qhFace*, int>* pMemory); // 720
		CUtlHashtable<const qhFace::DoInsert<const qhFace*>(
					const qhFace* k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 714
		CUtlHashtable<const qhFace::DoInsert<const qhFace*>(
					const qhFace* k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 249
		CUtlHashtable<const qhFace::Insert(
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 780
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 793
	}
	{
		const qhVertex* itVertex; // 78
		qhList<qhVertex>::End(); // 78
		qhList<qhVertex>::Begin(); // 78
		{
			const qhHalfEdge* pEdge0; // 80
			const qhHalfEdge* pEdge1; // 80
			const qhHalfEdge* pEdge2; // 80
			{
				const qhHalfEdge* pEdge3; // 82
			}
		}
	}
	EnumDualTriangles<ConstructGaussMeshFromConvex(const qhConvex*, CMesh&, CUtlVector<float>&)::<lambda(int, qhFace*, qhFace*, qhFace*)> >(const qhConvex* pConvex,
																const class& fn); // 774
	{
		const qhFace* Node; // 62
		qhList<qhFace>::Begin(); // 62
		qhList<qhFace>::End(); // 62
	}
	qhList<qhFace>::Size(); // 61
	qhConvex::GetFaceCount(); // 775
	CUtlMemory<CUtlHashtableEntry<const qhFace::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<const qhFace::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<const qhFace::Init(); // 178
	CUtlHashtable<const qhFace::CUtlHashtable(
			int minimumSize);  // 777
	{
		const qhVertex* itVertex; // 78
		qhList<qhVertex>::Begin(); // 78
		{
			const qhHalfEdge* pEdge0; // 80
			const qhHalfEdge* pEdge1; // 80
			const qhHalfEdge* pEdge2; // 80
			Mix32HashFunctor::operator(
					uint32 n);  // 139
			PointerHashFunctor::operator(
					const void* s);  // 218
			CUtlHashtable<const qhFace::Find(
				KeyArg_t k);  // 302
			CUtlMemory<CUtlHashtableEntry<const qhFace::operator[](
					int i);  // 294
			CUtlKeyValuePair<const qhFace::GetValue(); // 294
			CUtlHashtable<const qhFace::Element(
				handle_t idx);  // 302
			CUtlHashtable<const qhFace::Get(
				KeyArg_t k,
				const Element_t& defaultValue);  // 788
			Mix32HashFunctor::operator(
					uint32 n);  // 139
			PointerHashFunctor::operator(
					const void* s);  // 218
			CUtlHashtable<const qhFace::Find(
				KeyArg_t k);  // 302
			CUtlMemory<CUtlHashtableEntry<const qhFace::operator[](
					int i);  // 294
			CUtlKeyValuePair<const qhFace::GetValue(); // 294
			CUtlHashtable<const qhFace::Element(
				handle_t idx);  // 302
			CUtlHashtable<const qhFace::Get(
				KeyArg_t k,
				const Element_t& defaultValue);  // 789
			Mix32HashFunctor::operator(
					uint32 n);  // 139
			PointerHashFunctor::operator(
					const void* s);  // 218
			CUtlHashtable<const qhFace::Find(
				KeyArg_t k);  // 302
			CUtlMemory<CUtlHashtableEntry<const qhFace::operator[](
					int i);  // 294
			CUtlKeyValuePair<const qhFace::GetValue(); // 294
			CUtlHashtable<const qhFace::Element(
				handle_t idx);  // 302
			CUtlHashtable<const qhFace::Get(
				KeyArg_t k,
				const Element_t& defaultValue);  // 790
			operator()(const class* __closure,
					int nTri,
					qhFace* f0,
					qhFace* f1,
					qhFace* f2); // 81
			{
				const qhHalfEdge* pEdge3; // 82
				Mix32HashFunctor::operator(
						uint32 n);  // 139
				PointerHashFunctor::operator(
						const void* s);  // 218
				CUtlHashtable<const qhFace::Find(
					KeyArg_t k);  // 302
				CUtlMemory<CUtlHashtableEntry<const qhFace::operator[](
						int i);  // 294
				CUtlKeyValuePair<const qhFace::GetValue(); // 294
				CUtlHashtable<const qhFace::Element(
					handle_t idx);  // 302
				CUtlHashtable<const qhFace::Get(
					KeyArg_t k,
					const Element_t& defaultValue);  // 788
				Mix32HashFunctor::operator(
						uint32 n);  // 139
				PointerHashFunctor::operator(
						const void* s);  // 218
				CUtlHashtable<const qhFace::Find(
					KeyArg_t k);  // 302
				CUtlMemory<CUtlHashtableEntry<const qhFace::operator[](
						int i);  // 294
				CUtlKeyValuePair<const qhFace::GetValue(); // 294
				CUtlHashtable<const qhFace::Element(
					handle_t idx);  // 302
				CUtlHashtable<const qhFace::Get(
					KeyArg_t k,
					const Element_t& defaultValue);  // 789
				Mix32HashFunctor::operator(
						uint32 n);  // 139
				PointerHashFunctor::operator(
						const void* s);  // 218
				CUtlHashtable<const qhFace::Find(
					KeyArg_t k);  // 302
				CUtlMemory<CUtlHashtableEntry<const qhFace::operator[](
						int i);  // 294
				CUtlKeyValuePair<const qhFace::GetValue(); // 294
				CUtlHashtable<const qhFace::Element(
					handle_t idx);  // 302
				CUtlHashtable<const qhFace::Get(
					KeyArg_t k,
					const Element_t& defaultValue);  // 790
				operator()(const class* __closure,
						int nTri,
						qhFace* f0,
						qhFace* f1,
						qhFace* f2); // 84
			}
		}
	}
	EnumDualTriangles<ConstructGaussMeshFromConvex(const qhConvex*, CMesh&, CUtlVector<float>&)::<lambda(int, qhFace*, qhFace*, qhFace*)> >(const qhConvex* pConvex,
																const class& fn); // 786
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<const qhFace::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<const qhFace::Count(); // 897
			CUtlHashtableEntry<const qhFace::IsValid(); // 899
			CUtlHashtableEntry<const qhFace::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<const qhFace*, int> >(CUtlKeyValuePair<const qhFace*, int>* pMemory); // 902
		}
	}
	CUtlHashtable<const qhFace::RemoveAll(); // 188
	ValidateAlignment<CUtlHashtableEntry<const qhFace*, int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<const qhFace::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<const qhFace::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<const qhFace::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<const qhFace::~CUtlMemory(); // 188
	CUtlHashtable<const qhFace::~CUtlHashtable(); // 794
} /* size: 0, variables: 5, inline expansions: 15 (0 bytes) */

// <05DE923B> meshutils/dualhull.cpp:797
// variables: 3
float GetSupportMax(const CMesh& mesh, const Vector& vNormal)
{
	float flSupport; // 799
	{
		int i; // 800
		{
			float flDot; // 802
		}
	}
} /* size: 0, variables: 1 */

// <05DE8D39> meshutils/dualhull.cpp:810
// variables: 5
// function calls: 17
void ConstructGaussSimplifiedMeshQEM(const qhConvex* pPrimalSimplifiedHull, RnHullSimplificationParams_t* pSimplificationParams, CMesh& gaussSimplifiedMesh)
{
	qhConvex dualHull; // 812
	CMesh gaussMesh; // 813
	CUtlVector<float, CUtlMemory<float, int> > gaussAreas; // 814
	mesh_simplifyparams_t gaussParams; // 816
	mesh_simplifyweights_t gaussWeights; // 821
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 814
	DEG2RAD(float flDegrees); // 818
	mesh_simplifyparams_t::Defaults(); // 817
	Sqr(float f); // 818
	RnHullSimplificationParams_t::GetMaxRuntimeFaces(); // 819
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 826
} /* size: 0, variables: 5, inline expansions: 17 (0 bytes) */

// <05DE831D> meshutils/dualhull.cpp:829
// variables: 11
// function calls: 40
qhConvex* WrapPrimalMeshIntoGaussMesh(const CMesh& gaussSimplifiedMesh, const CMesh& primalMesh, const qhConvex* pConvex)
{
	qhConvex* pResult; // 831
	CUtlVector<qhPlane, CUtlMemory<qhPlane, int> > planes; // 832
	{
		int i; // 834
		{
			Vector vNormal; // 836
			float flLength; // 837
			{
				float flDist; // 841
				qhPlane plane; // 842
				Vector::operator/=(
						float fl);  // 840
				{
					int i; // 800
					CMesh::VertexCount(); // 800
					{
						float flDot; // 802
						CMesh::GetVertex(
								int nIndex);  // 187
						CMesh::GetVertexPosition(
									int nIndex);  // 802
						DotProduct(const Vector& a,
								const Vector& b);  // 1167
						Vector::Dot(
							const Vector& vOther);  // 802
					}
				}
				GetSupportMax(const CMesh& mesh,
						const Vector& vNormal);  // 841
			}
			CMesh::GetVertex(
					int nIndex);  // 187
			CMesh::GetVertexPosition(
						int nIndex);  // 836
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 837
		}
		CMesh::VertexCount(); // 834
	}
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::SetCount(
		int count);  // 833
	CUtlMemory<qhPlane, int>::ValidateGrowSize(); // 475
	CUtlMemory<qhPlane, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<qhPlane, CUtlMemory<qhPlane, int> >::CUtlVector(); // 832
	CMesh::VertexCount(); // 833
	qhList<qhVertex>::Empty(); // 14
	{
		int VertexCount; // 16
		{
			const qhVertex* Vertex; // 17
			qhVector3::operator+=(
					const qhVector3& V);  // 19
		}
		qhVector3::operator/=(
				qhReal S);  // 23
	}
	qhConvex::GetCentroid(); // 850
	CUtlMemory<qhPlane, int>::Purge(); // 903
	CUtlMemory<qhPlane, int>::Purge(); // 1799
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::Purge(); // 560
	ValidateAlignment<qhPlane>(void); // 508
	CUtlMemory<qhPlane, int>::Purge(); // 510
	CUtlMemory<qhPlane, int>::~CUtlMemory(); // 562
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::~CUtlVectorBase(); // 410
	CUtlVector<qhPlane, CUtlMemory<qhPlane, int> >::~CUtlVector(); // 852
} /* size: 0, variables: 2, inline expansions: 22 (0 bytes) */

// <05DE80DD> meshutils/dualhull.cpp:854
// variables: 2
// function calls: 6
void LogMesh(const CMesh& mesh, CGeoViewBuffer& buf)
{
	{
		int nIndex; // 856
		{
			Vector v; // 858
			CMesh::GetVertex(
					int nIndex);  // 187
			CMesh::GetVertexPosition(
						int nIndex);  // 858
			CMesh::GetVertex(
					int nIndex);  // 187
			CMesh::GetVertexPosition(
						int nIndex);  // 858
			CMesh::GetVertex(
					int nIndex);  // 187
			CMesh::GetVertexPosition(
						int nIndex);  // 858
		}
	}
} /* size: 0 */

// <05DE6EE7> meshutils/dualhull.cpp:864
// variables: 26
// function calls: 69
qhConvex* WrapSimplifiedMeshAgg(const qhConvex* pPrimalSimplifiedHull, const RnHullSimplificationParams_t* pSimplificationParams, const CMesh& origMesh)
{
	float flTanNextMergeAngle; // 866
	CDualHullAgglomerator agg; // 867
	CUtlVector<qhPlane, CUtlMemory<qhPlane, int> > planes; // 868
	int nNextMaxFaces; // 869
	CGeoViewBuffer buf; // 870
	bool bExtraLogging; // 872
	const char   __FUNCTION__; // 8404
	{
		qhConvex* pResult; // 883
		bool s_bShiftPlanes; // 898
		int nResultFaces; // 916
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 886
		}
		{
			int i; // 887
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 889
			}
		}
		{
			qhPlane& plane; // 901
			CUtlVector<qhPlane, CUtlMemory<qhPlane, int> >& __for_range; // 48721
			iterator __for_begin; // 7458
			iterator __for_end; // 7458
			{
				Vector vNormal; // 903
			}
		}
		{
			qhVector3 vCentroid; // 929
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 18
			AsQhVector(const Vector& v); // 929
		}
		{
			const qhFace* Node; // 62
			qhList<qhFace>::Begin(); // 62
			qhList<qhFace>::End(); // 62
		}
		qhList<qhFace>::Size(); // 61
		qhConvex::GetFaceCount(); // 916
		{
			const qhFace* Node; // 62
		}
		qhList<qhFace>::Size(); // 61
		qhConvex::GetFaceCount(); // 48
		{
			const qhFace* Face; // 41
			{
				qhHalfEdge* Edge; // 43
			}
		}
		qhConvex::GetEdgeCount(); // 49
		{
			const qhVertex* Node; // 62
			qhList<qhVertex>::Begin(); // 62
			qhList<qhVertex>::End(); // 62
		}
		qhList<qhVertex>::Size(); // 33
		qhConvex::GetVertexCount(); // 50
		IsConvexTooComplexForRuntime(qhConvex* pConvex,
						const RnHullSimplificationParams_t* pParams);  // 919
	}
	DEG2RAD(float flDegrees); // 866
	CUtlMemory<qhPlane, int>::ValidateGrowSize(); // 475
	CUtlMemory<qhPlane, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<qhPlane, CUtlMemory<qhPlane, int> >::CUtlVector(); // 868
	RnHullSimplificationParams_t::GetMaxRuntimeFaces(); // 869
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 79
	CGeoViewBuffer::~CGeoViewBuffer(); // 935
	CUtlMemory<qhPlane, int>::Purge(); // 903
	CUtlMemory<qhPlane, int>::Purge(); // 1799
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::Purge(); // 560
	ValidateAlignment<qhPlane>(void); // 508
	CUtlMemory<qhPlane, int>::Purge(); // 510
	CUtlMemory<qhPlane, int>::~CUtlMemory(); // 562
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::~CUtlVectorBase(); // 410
	CUtlVector<qhPlane, CUtlMemory<qhPlane, int> >::~CUtlVector(); // 935
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<const qhFace::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<const qhFace::Count(); // 897
			CUtlHashtableEntry<const qhFace::IsValid(); // 899
			CUtlHashtableEntry<const qhFace::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<const qhFace*, int> >(CUtlKeyValuePair<const qhFace*, int>* pMemory); // 902
		}
	}
	CUtlHashtable<const qhFace::RemoveAll(); // 188
	ValidateAlignment<CUtlHashtableEntry<const qhFace*, int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<const qhFace::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<const qhFace::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<const qhFace::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<const qhFace::~CUtlMemory(); // 188
	CUtlHashtable<const qhFace::~CUtlHashtable(); // 18
	CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::RemoveAll(); // 1798
	CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::Purge(); // 903
	CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::Purge(); // 1799
	CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::Purge(); // 560
	ValidateAlignment<CDualHullAgglomerator::CClusterInfo>(void); // 508
	CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::Purge(); // 510
	CUtlMemory<CDualHullAgglomerator::CClusterInfo, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CDualHullAgglomerator::CClusterInfo, CUtlMemory<CDualHullAgglomerator::CClusterInfo, int> >::~CUtlVector(); // 18
	CUtlVectorBase<const qhFace::RemoveAll(); // 1798
	CUtlMemory<const qhFace::IsExternallyAllocated(); // 905
	CUtlMemory<const qhFace::Purge(); // 903
	CUtlMemory<const qhFace::Purge(); // 1799
	CUtlVectorBase<const qhFace::Purge(); // 560
	ValidateAlignment<const qhFace*>(void); // 508
	CUtlMemory<const qhFace::Purge(); // 510
	CUtlMemory<const qhFace::~CUtlMemory(); // 562
	CUtlVectorBase<const qhFace::~CUtlVectorBase(); // 410
	CUtlVector<const qhFace::~CUtlVector(); // 18
	CDualHullAgglomerator::~CDualHullAgglomerator(); // 935
} /* size: 0, variables: 7, inline expansions: 50 (1305 bytes) */

// <05DE63C3> meshutils/dualhull.cpp:1022
// variables: 9
// function calls: 7
SurfaceDiffSqr_t ComputeDiffSqr(qhConvex* pOriginal, qhConvex* pSimplified)
{
	SurfaceDiffSqr_t diff; // 1024
	{
		{
			const qhFace* itFace; // 61
			qhList<qhFace>::Begin(); // 61
			qhList<qhFace>::End(); // 61
			{
				const qhHalfEdge* pEdge0; // 63
				const qhHalfEdge* pEdge1; // 63
				const qhHalfEdge* pEdge2; // 63
				Max<float>(const float& val1,
						const float& val2);  // 93
				SurfaceDiffSqr_t::operator+=(
						const SurfaceDiffSqr_t& other);  // 1033
				operator()(const class* __closure,
						int nTri,
						qhVertex* v0,
						qhVertex* v1,
						qhVertex* v2,
						const qhFace* pFace); // 64
				{
					const qhHalfEdge* pEdge3; // 65
					operator()(const class* __closure,
							int nTri,
							qhVertex* v0,
							qhVertex* v1,
							qhVertex* v2,
							const qhFace* pFace); // 67
				}
			}
		}
		EnumTriangles<ComputeDiffSqr(qhConvex*, qhConvex*)::<lambda(int, qhVertex*, qhVertex*, qhVertex*, const qhFace*)> >(const qhConvex* pConvex,
																const class& fn); // 1031
	}
} /* size: 0, variables: 1 */

