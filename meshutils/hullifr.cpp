
//
// meshutils/hullifr.cpp
//
//	referenced by: libengine2.so
//
//	functions: 52
//

// <05F076E6> meshutils/hullifr.cpp:39
// variables: 7
// function calls: 12
void CHullIFR::GetTriPlaneRange(const CUtlVector<int, CUtlMemory<int, int> >& tris, const RnPlane_t& plane)
{
	Range_t range; // 41
	{
		int nTri; // 42
		const CUtlVector<int, CUtlMemory<int, int> >& __for_range; // 11252
		const_iterator __for_begin; // 8124
		const_iterator __for_end; // 8124
		{
			int j; // 44
			{
				const Vector& p; // 46
				CUtlMemory<HullIfrSourceTriangle_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::operator[](
						int i);  // 46
				CUtlMemory<Vector, int>::operator[](
						int i);  // 595
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
						int i);  // 46
				DotProduct(const Vector& a,
						const Vector& b);  // 223
				RnPlane_t::Distance(
					const Vector& vPoint);  // 47
			}
		}
		CUtlMemory<int, int>::Base(); // 113
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 103
		CUtlVectorBase<int, CUtlMemory<int, int> >::begin(); // 42
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 105
		CUtlVectorBase<int, CUtlMemory<int, int> >::end(); // 42
	}
	Range_t::Range_t(); // 41
} /* size: 186, variables: 1, inline expansions: 1 (19 bytes) */

// <05F06E6E> meshutils/hullifr.cpp:54
// variables: 10
// function calls: 26
void CHullIFR::ComputeMergeCost(FaceHandle_t fh0, FaceHandle_t fh1)
{
	const HullIFRFaceData_t* f0; // 56
	const HullIFRFaceData_t* f1; // 56
	const char   __FUNCTION__; // 4623
	HullIFREdgeDissolveCost_t cost; // 58
	CSurfaceFitter sumFitter; // 59
	Range_t range; // 63
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 57
	}
	{
		CNamespaceScope scope; // 69
		float flPushBack; // 70
		CNamespaceScope::CNamespaceScope(
				CGeoViewBuffer* pGeoView,
				const char* pName);  // 132
		CNamespaceScope::CNamespaceScope(
				CGeoViewBuffer* pGeoView,
				const char* pName);  // 69
		CNamespaceScope::~CNamespaceScope(); // 72
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
	}
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 57
	Vector::Vector(); // 218
	RnPlane_t::RnPlane_t(); // 21
	HullIFREdgeDissolveCost_t::HullIFREdgeDissolveCost_t(); // 58
	Vector::Vector(); // 218
	RnPlane_t::RnPlane_t(); // 894
	Vector::Normalized(); // 895
	DotProduct(const Vector& a,
			const Vector& b);  // 896
	CSurfaceFitter::GetAveragePlane(); // 60
	Vector::operator=(
			const Vector& vOther);  // 209
	RnPlane_t::operator=(
			RnPlane_t &);  // 60
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 61
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 61
	Max<float>(const float& val1,
			const float& val2);  // 48
	Min<float>(const float& val1,
			const float& val2);  // 48
	Range_t::Range_t(
		float flMin,
		float flMax);  // 48
	operator|(const Range_t& lhs,
			const Range_t& rhs);  // 63
} /* size: 0, variables: 6, inline expansions: 23 (487 bytes) */

// <05F0474F> meshutils/hullifr.cpp:80
// variables: 12
// function calls: 179
void CHullIFR::ComputePushBack(const RnPlane_t& plane, FaceHandle_t fh0, FaceHandle_t fhMerge, float flAllowedDistance)
{
	float flMaxPushBack; // 82
	HalfEdgeHandle_t hePerimeterFirst; // 83
	HalfEdgeHandle_t heThis; // 83
	GJKSimplexCache_t gjkCache; // 84
	const char   __FUNCTION__; // 4596
	{
		HalfEdgeHandle_t heNext; // 87
		FaceHandle_t fhThis; // 88
		FaceHandle_t fhNext; // 88
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 93
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 97
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 102
		}
		{
			float flVertexPushBack; // 106
		}
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1072
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidHalfEdge(); // 5597
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 480
		GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 5592
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetNextEdgeInFaceLoop(
					HalfEdgeHandle_t hEdge);  // 87
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 480
		GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 5609
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1072
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidHalfEdge(); // 5614
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetOppositeHalfEdge(
					HalfEdgeHandle_t hEdge);  // 88
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 480
		GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 5754
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 1093
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidFace(); // 5759
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetFaceConnectedToHalfEdge(
						HalfEdgeHandle_t hEdge);  // 88
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 480
		GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 5609
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1072
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidHalfEdge(); // 5614
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetOppositeHalfEdge(
					HalfEdgeHandle_t hEdge);  // 88
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 480
		GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 5754
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 1093
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidFace(); // 5759
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetFaceConnectedToHalfEdge(
						HalfEdgeHandle_t hEdge);  // 88
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 91
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t this,
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 480
		GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t this,
				ComponentHandle_t handle);  // 1369
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex(
			VertexHandle_t vertexHandle);  // 1452
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetVertexData(
				VertexHandle_t hVertex);  // 91
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 91
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t this,
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 480
		GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t this,
				ComponentHandle_t handle);  // 1369
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex(
			VertexHandle_t vertexHandle);  // 1452
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetVertexData(
				VertexHandle_t hVertex);  // 91
		CUtlMemory<Vector, int>::operator[](
				int i);  // 595
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
				int i);  // 91
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 93
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 93
		ComponentHandleWithListPointer_t::operator==(
				const ComponentHandleWithListPointer_t& src);  // 94
		ComponentHandleWithListPointer_t::operator==(
				const ComponentHandleWithListPointer_t& src);  // 99
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 480
		GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 5609
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1072
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidHalfEdge(); // 5614
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetOppositeHalfEdge(
					HalfEdgeHandle_t hEdge);  // 96
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 480
		GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 5592
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1072
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidHalfEdge(); // 5597
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetNextEdgeInFaceLoop(
					HalfEdgeHandle_t hEdge);  // 96
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 480
		GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 5754
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 1093
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidFace(); // 5759
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetFaceConnectedToHalfEdge(
						HalfEdgeHandle_t hEdge);  // 96
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 97
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 104
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 104
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 480
		GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 5609
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1072
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidHalfEdge(); // 5614
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetOppositeHalfEdge(
					HalfEdgeHandle_t hEdge);  // 101
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 480
		GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 5592
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1072
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidHalfEdge(); // 5597
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetNextEdgeInFaceLoop(
					HalfEdgeHandle_t hEdge);  // 101
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 480
		GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 5754
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 1093
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidFace(); // 5759
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetFaceConnectedToHalfEdge(
						HalfEdgeHandle_t hEdge);  // 101
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 102
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 104
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>  this,
				ComponentHandle_t handle);  // 476
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 480
	GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>  this,
			ComponentHandle_t handle);  // 1401
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face(
		FaceHandle_t faceHandle);  // 5578
	InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1072
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidHalfEdge(); // 5580
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetFirstEdgeInFaceLoop(
				FaceHandle_t hFace);  // 83
	GJKSimplexCache_t::GJKSimplexCache_t(); // 84
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 111
} /* size: 0, variables: 5, inline expansions: 14 (655 bytes) */

// <05F03BB2> meshutils/hullifr.cpp:115
// variables: 10
// function calls: 35
void CHullIFR::ComputeVertexPushBack(const RnPlane_t& face, const RnPlane_t& side0, const RnPlane_t& side1, float flAllowedDistance, GJKSimplexCache_t& gjkCache)
{
	matrix3x4_t intersection; // 117
	matrix3x4_t inv; // 121
	{
		Vector vVertex; // 124
		Vector vCheck; // 126
		{
			CGJKShapeProxy proxyHull; // 132
			CGJKSphereProxy proxyVertex; // 133
			DistanceQueryResult_t dist; // 134
			{
				float f; // 145
				Vector vNewVertex; // 146
				float flPushBack; // 147
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 146
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 146
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 146
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 147
				DotProduct(const Vector& a,
						const Vector& b);  // 147
			}
			CUtlMemory<Vector, int>::Base(); // 113
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 132
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 132
			CGJKShapeProxy::CGJKShapeProxy(
					int nVertexCount,
					const Vector* pVertexBuffer,
					float flScale);  // 132
			CGJKShapeProxy::CGJKShapeProxy(
					int nVertexCount,
					const Vector* pVertexBuffer,
					float flScale);  // 74
			Vector::operator=(
					const Vector& vOther);  // 76
			Vector::Vector(); // 74
			CGJKSphereProxy::CGJKSphereProxy(
					const Vector& vCenter);  // 133
			VertexColor_t::VertexColor_t(
					uint8 ir,
					uint8 ig,
					uint8 ib,
					uint8 ia);  // 138
			VertexColor_t::VertexColor_t(
					uint8 ir,
					uint8 ig,
					uint8 ib,
					uint8 ia);  // 139
			VertexColor_t::VertexColor_t(
					uint8 ir,
					uint8 ig,
					uint8 ib,
					uint8 ia);  // 140
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1307
			Vector::Vector(); // 1306
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2);  // 140
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 140
		}
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 161
		matrix3x4_t::GetOrigin(); // 124
		DotProduct(const Vector& a,
				const Vector& b);  // 223
		RnPlane_t::Distance(
			const Vector& vPoint);  // 126
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 126
	}
	matrix3x4_t::matrix3x4_t(
			float m00,
			float m01,
			float m02,
			float m03,
			float m10,
			float m11,
			float m12,
			float m13,
			float m20,
			float m21,
			float m22,
			float m23);  // 121
	matrix3x4_t::matrix3x4_t(); // 121
} /* size: 919, variables: 2, inline expansions: 2 (18 bytes) */

// <05F03693> meshutils/hullifr.cpp:155
// variables: 2
// function calls: 20
void CHullIFR::CompareCost(const HalfEdgeHandle_t& feh0, const HalfEdgeHandle_t& feh1)
{
	const HullIFREdgeDissolveCost_t& l; // 157
	const HullIFREdgeDissolveCost_t& r; // 157
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 476
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 480
	GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
			ComponentHandle_t handle);  // 1385
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
		HalfEdgeHandle_t edgeHandle);  // 1482
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetEdgeData(
			HalfEdgeHandle_t hEdge);  // 157
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 476
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 480
	GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
			ComponentHandle_t handle);  // 1385
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
		HalfEdgeHandle_t edgeHandle);  // 1482
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetEdgeData(
			HalfEdgeHandle_t hEdge);  // 157
} /* size: 0, variables: 2, inline expansions: 20 (843 bytes) */

// <05F02C6A> meshutils/hullifr.cpp:173
// variables: 4
// function calls: 41
void CHullIFR::ComputeMergeCost(FullEdgeHandle_t feh, HalfEdgeHandle_t& eh0, HalfEdgeHandle_t& eh1)
{
	const char   __FUNCTION__; // 4623
	FaceHandle_t fh0; // 177
	FaceHandle_t fh1; // 178
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 176
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 476
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 480
	GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
			ComponentHandle_t handle);  // 1385
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
		HalfEdgeHandle_t edgeHandle);  // 5537
	InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1072
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidHalfEdge(); // 5545
	InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1072
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidHalfEdge(); // 5546
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetHalfEdgesConnectedToFullEdge(
					FullEdgeHandle_t hFullEdge,
					HalfEdgeHandle_t* hOutHalfEdgeA,
					HalfEdgeHandle_t* hOutHalfEdgeB);  // 5535
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetHalfEdgesConnectedToFullEdge(
					FullEdgeHandle_t hFullEdge,
					HalfEdgeHandle_t* hOutHalfEdgeA,
					HalfEdgeHandle_t* hOutHalfEdgeB);  // 175
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 176
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 176
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 476
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 480
	GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
			ComponentHandle_t handle);  // 1385
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
		HalfEdgeHandle_t edgeHandle);  // 5754
	InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 1093
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidFace(); // 5759
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetFaceConnectedToHalfEdge(
					HalfEdgeHandle_t hEdge);  // 177
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 476
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 480
	GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
			ComponentHandle_t handle);  // 1385
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
		HalfEdgeHandle_t edgeHandle);  // 5754
	InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 1093
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidFace(); // 5759
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetFaceConnectedToHalfEdge(
					HalfEdgeHandle_t hEdge);  // 178
} /* size: 0, variables: 3, inline expansions: 41 (1690 bytes) */

// <05F0220F> meshutils/hullifr.cpp:183
// variables: 5
// function calls: 45
void CHullIFR::RemoveFaceLoopFromEdgeQueue(EdgeDissolveQueue_t& edgeDissolveQueue, HalfEdgeHandle_t heStart)
{
	HalfEdgeHandle_t he; // 185
	const char   __FUNCTION__; // 4890
	{
		HullIFRHalfEdgeData_t* pData; // 188
		HullIFRHalfEdgeData_t* pOtherData; // 191
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 194
		}
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1072
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidHalfEdge(); // 5614
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 480
		GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 5609
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetOppositeHalfEdge(
					HalfEdgeHandle_t hEdge);  // 191
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
				HalfEdgeHandle_t hHalfEdge);  // 188
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
				HalfEdgeHandle_t hHalfEdge);  // 191
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 480
		GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 5592
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1072
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidHalfEdge(); // 5597
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetNextEdgeInFaceLoop(
					HalfEdgeHandle_t hEdge);  // 195
	}
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 196
} /* size: 0, variables: 2, inline expansions: 1 (26 bytes) */

// <05EFFF4C> meshutils/hullifr.cpp:199
// variables: 4
// function calls: 76
void CHullIFR::CHullIFR(const RnHullSimplificationParams_t* pSimplificationParams, const qhConvex* pSource)
{
	{
		COpMeshBuilder builder; // 207
	}
	Vector::Vector(); // 218
	RnPlane_t::RnPlane_t(); // 21
	HullIFREdgeDissolveCost_t::HullIFREdgeDissolveCost_t(); // 901
	HullIFRHalfEdgeData_t::HullIFRHalfEdgeData_t(); // 991
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 355
	SymMatrix3<float>::SetZero(); // 44
	CSurfaceFitter::CSurfaceFitter(); // 80
	Vector::Vector(); // 218
	RnPlane_t::RnPlane_t(); // 80
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 80
	HullIFRFaceData_t::HullIFRFaceData_t(); // 991
	ValidateGrowSize(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this); // 475
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this); // 384
	ValidateGrowSize(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this); // 475
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this); // 384
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::CHalfEdgeComponentList(); // 991
	ValidateGrowSize(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this); // 475
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this); // 384
	ValidateGrowSize(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this); // 475
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this); // 384
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::CHalfEdgeComponentList(); // 991
	ValidateGrowSize(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this); // 475
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this); // 384
	ValidateGrowSize(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this); // 475
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Fac this); // 384
	CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>::CHalfEdgeComponentList(); // 991
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::CHalfEdgeMesh(); // 199
	DEG2RAD(float flDegrees); // 205
	{
		COpMeshBuilder builder; // 207
		{
			entry_t* table; // 896
			CUtlMemory<CUtlHashtableEntry<const qhVertex::Base(); // 896
			{
				int i; // 897
				CUtlMemory<CUtlHashtableEntry<const qhVertex::Count(); // 897
				CUtlHashtableEntry<const qhVertex::IsValid(); // 899
				CUtlHashtableEntry<const qhVertex::MarkInvalid(); // 901
				Destruct<CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t> >(CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF pMemory); // 902
			}
		}
		CUtlHashtable<const qhVertex::RemoveAll(); // 188
		ValidateAlignment<CUtlHashtableEntry<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<const qhVertex::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<const qhVertex::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<const qhVertex::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<const qhVertex::~CUtlMemory(); // 188
		CUtlHashtable<const qhVertex::~CUtlHashtable(); // 169
		COpMeshBuilder::~COpMeshBuilder(); // 208
	}
	RnHullSimplificationParams_t::RnHullSimplificationParams_t(
					HullSimplificationAlgorithm_t nAlgo);  // 199
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 199
	CUtlMemory<HullIfrSourceTriangle_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<HullIfrSourceTriangle_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::CUtlVector(); // 199
	Vector::Vector(); // 199
} /* size: 882, inline expansions: 63 (1765 bytes) */

// <05EFFF0A> meshutils/hullifr.cpp:199
// variable: 1
void CHullIFR::CHullIFR(const RnHullSimplificationParams_t* pSimplificationParams, const qhConvex* pSource)
{
	{
		COpMeshBuilder builder; // 207
	}
} /* size: 0 */

// <05EFF9A1> meshutils/hullifr.cpp:211
// variable: 1
// function calls: 19
void CHullIFR::Run()
{
	{
		EdgeDissolveQueue_t edgeDissolveQueue; // 217
		DEG2RAD(float flDegrees); // 216
		SetLessFunc(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this,
				CHullIFR* lessfunc);  // 218
		ValidateGrowSize(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this); // 475
		CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 530
		CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int growSize,
				int initCapacity);  // 419
		CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
				int growSize,
				int initCapacity);  // 96
		CUtlPriorityQueue(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this,
					int growSize,
					int initSize,
					CHullIFR* lessfunc);  // 217
		Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this); // 903
		Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this); // 1799
		Purge(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 560
		ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge_t>::ComponentHandleWithListPointer_t>(void); // 508
		Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this); // 510
		~CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this); // 562
		~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 410
		~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this); // 38
		~CUtlPriorityQueue(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this); // 223
	}
	CHullIFR::TrySyncConvex(); // 346
	CHullIFR::LogSource(); // 213
} /* size: 258, inline expansions: 2 (101 bytes) */

// <05EFF55C> meshutils/hullifr.cpp:229
// function calls: 20
void CHullIFR::~CHullIFR()
{
	CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::RemoveAll(); // 1798
	CUtlMemory<HullIfrSourceTriangle_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<HullIfrSourceTriangle_t, int>::Purge(); // 903
	CUtlMemory<HullIfrSourceTriangle_t, int>::Purge(); // 1799
	CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::Purge(); // 560
	ValidateAlignment<HullIfrSourceTriangle_t>(void); // 508
	CUtlMemory<HullIfrSourceTriangle_t, int>::Purge(); // 510
	CUtlMemory<HullIfrSourceTriangle_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::~CUtlVector(); // 233
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 233
} /* size: 142, inline expansions: 20 (346 bytes) */

// <05EFF540> meshutils/hullifr.cpp:229
void CHullIFR::~CHullIFR()
{
} /* size: 0 */

// <05F0EB47> meshutils/hullifr.cpp:236
// variables: 2
void CHullIFR::TrySyncConvex()
{
	CUtlVector<qhPlane, CUtlMemory<qhPlane, int> > planes; // 241
	qhConvex* pOut; // 249
} /* size: 0, variables: 2 */

// <05F0DE0F> meshutils/hullifr.cpp:236
// variables: 4
// function calls: 53
void CHullIFR::TrySyncConvex()
{
	CUtlVector<qhPlane, CUtlMemory<qhPlane, int> > planes; // 241
	qhConvex* pOut; // 249
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 575
	Count(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 1184
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetNumFaces(); // 242
	CUtlMemory<qhPlane, int>::ValidateGrowSize(); // 475
	CUtlMemory<qhPlane, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<qhPlane, CUtlMemory<qhPlane, int> >::CUtlVector(); // 241
	CUtlMemory<qhPlane, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::EnsureCapacity(
			int num);  // 242
	{
		FaceHandle_t fh; // 244
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 443
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 446
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 452
		Next(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>  this,
			ComponentHandle_t handle);  // 439
		Next(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>  this,
			ComponentHandle_t handle);  // 435
		First(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 1274
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::FirstFace(); // 244
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 244
		{
			HullIFRFaceData_t* pData; // 246
			CUtlMemory<qhPlane, int>::operator[](
					int i);  // 602
			CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::Element(
				int i);  // 1252
			Construct<qhPlane, qhPlane>(qhPlane* pMemory); // 1252
			CUtlMemory<qhPlane, int>::Grow(
				int num);  // 806
			CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::AddToTail(
					qhPlane& src);  // 247
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 247
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 247
			DotProduct(const Vector& a,
					const Vector& b);  // 247
			DotProduct(const Vector& a,
					const Vector& b);  // 247
			qhVector3::qhVector3(
					qhReal x,
					qhReal y,
					qhReal z);  // 18
			AsQhVector(const Vector& v); // 247
			qhPlane::qhPlane(
				const qhVector3& _Normal,
				qhReal _Offset);  // 247
		}
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 443
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 446
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 452
		Next(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>  this,
			ComponentHandle_t handle);  // 439
		Next(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>  this,
			ComponentHandle_t handle);  // 1284
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::NextFace(
			FaceHandle_t hFace);  // 244
	}
	qhVector3::qhVector3(
			qhReal x,
			qhReal y,
			qhReal z);  // 18
	AsQhVector(const Vector& v); // 250
	CUtlMemory<qhPlane, int>::Purge(); // 903
	CUtlMemory<qhPlane, int>::Purge(); // 1799
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::Purge(); // 560
	ValidateAlignment<qhPlane>(void); // 508
	CUtlMemory<qhPlane, int>::Purge(); // 510
	CUtlMemory<qhPlane, int>::~CUtlMemory(); // 562
	CUtlVectorBase<qhPlane, CUtlMemory<qhPlane, int> >::~CUtlVectorBase(); // 410
	CUtlVector<qhPlane, CUtlMemory<qhPlane, int> >::~CUtlVector(); // 263
} /* size: 967, variables: 2, inline expansions: 20 (209 bytes) */

// <05EFF4BD> meshutils/hullifr.cpp:236
// variables: 4
void CHullIFR::TrySyncConvex()
{
	CUtlVector<qhPlane, CUtlMemory<qhPlane, int> > planes; // 241
	qhConvex* pOut; // 249
	{
		FaceHandle_t fh; // 244
		{
			HullIFRFaceData_t* pData; // 246
		}
	}
} /* size: 0, variables: 2 */

// <05EFEB76> meshutils/hullifr.cpp:267
// variables: 4
// function calls: 36
void CHullIFR::InitEdgeDissolveQueue(EdgeDissolveQueue_t& edgeDissolveQueue)
{
	{
		FullEdgeHandle_t feh; // 269
		{
			HalfEdgeHandle_t eh0; // 271
			HalfEdgeHandle_t eh1; // 271
			HullIFREdgeDissolveCost_t cost; // 272
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
					HalfEdgeHandle_t hHalfEdge);  // 273
			Vector::operator=(
					const Vector& vOther);  // 209
			RnPlane_t::operator=(
					const RnPlane_t  &);  // 21
			HullIFREdgeDissolveCost_t::operator=(
					const HullIFREdgeDissolveCost_t  &);  // 273
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
					HalfEdgeHandle_t hHalfEdge);  // 273
			Vector::operator=(
					const Vector& vOther);  // 209
			RnPlane_t::operator=(
					const RnPlane_t  &);  // 21
			HullIFREdgeDissolveCost_t::operator=(
					const HullIFREdgeDissolveCost_t  &);  // 273
		}
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1082
		FullEdgeHandle_t::FullEdgeHandle_t(
				HalfEdgeHandle_t hHalfEdge);  // 1082
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidFullEdge(); // 1234
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::FirstFullEdge(); // 269
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1082
		FullEdgeHandle_t::FullEdgeHandle_t(
				HalfEdgeHandle_t hHalfEdge);  // 1082
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidFullEdge(); // 269
		ComponentHandleWithListPointer_t::operator==(
				const ComponentHandleWithListPointer_t& src);  // 180
		FullEdgeHandle_t::operator==(
				const FullEdgeHandle_t& src);  // 185
		FullEdgeHandle_t::operator!=(
				const FullEdgeHandle_t& src);  // 269
	}
} /* size: 0 */

// <05EFE46C> meshutils/hullifr.cpp:283
// variables: 7
// function calls: 27
void CHullIFR::MergeFaces(EdgeDissolveQueue_t& edgeDissolveQueue)
{
	const char   __FUNCTION__; // 4466
	{
		int numFaces; // 287
		int numVerts; // 290
		HalfEdgeHandle_t eh; // 294
		HullIFRHalfEdgeData_t* pData; // 295
		{
			int newFaces; // 314
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 315
			}
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 575
			Count(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 1184
			CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetNumFaces(); // 314
		}
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 322
		RnHullSimplificationParams_t::GetMaxRuntimeFaces(); // 303
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 575
		Count(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 1184
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetNumFaces(); // 287
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 575
		Count(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t this); // 1151
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetNumVertices(); // 290
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 609
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFac this); // 294
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
				HalfEdgeHandle_t hHalfEdge);  // 295
		CHullIFR::Log(
			const char* pStep,
			VertexColor_t hullColor);  // 322
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 71
	Count(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFac this); // 285
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <05F0D898> meshutils/hullifr.cpp:328
void CHullIFR::CollapseEdges()
{
} /* size: 0 */

// <05EFE422> meshutils/hullifr.cpp:333
// variable: 1
VertexColor_t GenerateColor(const CUtlVector<int, CUtlMemory<int, int> >& arr)
{
	uint32 hash; // 335
} /* size: 0, variables: 1 */

// <05EFE402> meshutils/hullifr.cpp:339
float Lighting(const Vector& vNormal)
{
} /* size: 0 */

// <05F0F33C> meshutils/hullifr.cpp:344
// function call: 1
void CHullIFR::LogSource()
{
	CHullIFR::TrySyncConvex(); // 346
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05F0EEC5> meshutils/hullifr.cpp:344
// variables: 4
// function calls: 17
void CHullIFR::LogSource()
{
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 349
	{
		const qhFace* Face; // 41
		qhList<qhFace>::Begin(); // 41
		qhList<qhFace>::End(); // 41
		{
			qhHalfEdge* Edge; // 43
		}
	}
	qhConvex::GetEdgeCount(); // 350
	{
		const qhVertex* Node; // 62
		qhList<qhVertex>::Begin(); // 62
		qhList<qhVertex>::End(); // 62
	}
	qhList<qhVertex>::Size(); // 33
	qhConvex::GetVertexCount(); // 350
	{
		const qhFace* Node; // 62
	}
	qhList<qhFace>::Size(); // 61
	qhConvex::GetFaceCount(); // 350
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 350
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 350
} /* size: 418, inline expansions: 13 (470 bytes) */

// <05EFE3E5> meshutils/hullifr.cpp:344
void CHullIFR::LogSource()
{
} /* size: 0 */

// <05F0D8C2> meshutils/hullifr.cpp:468
// variables: 3
void CHullIFR::ValidateEdges(EdgeDissolveQueue_t& edgeDissolveQueue)
{
	CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > edgesInQueue; // 481
	HalfEdgeHandle_t heBest; // 482
	int nFullEdgeCount; // 497
} /* size: 0, variables: 3 */

// <05EFCAE2> meshutils/hullifr.cpp:468
// variables: 22
void CHullIFR::ValidateEdges(EdgeDissolveQueue_t& edgeDissolveQueue)
{
	const char   __FUNCTION__; // 4547
	CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > edgesInQueue; // 481
	HalfEdgeHandle_t heBest; // 482
	int nFullEdgeCount; // 497
	{
		FullEdgeHandle_t hfe; // 472
		{
			HalfEdgeHandle_t eh0; // 474
			HalfEdgeHandle_t eh1; // 474
			HullIFRHalfEdgeData_t* e0; // 477
			HullIFRHalfEdgeData_t* e1; // 477
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 476
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 478
			}
		}
	}
	{
		int i; // 483
		{
			HalfEdgeHandle_t he; // 485
			FullEdgeHandle_t fe; // 488
			bool bDidInsert; // 491
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 486
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 487
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 489
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 493
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 495
	}
	{
		FullEdgeHandle_t feh; // 498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 504
	}
} /* size: 0, variables: 4 */

// <05EFC860> meshutils/hullifr.cpp:507
// function calls: 11
bool Same(const HullIFREdgeDissolveCost_t& a, const HullIFREdgeDissolveCost_t& b)
{
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 244
	Vector::LengthSqr(); // 244
	Sqr(float f); // 244
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 244
	Vector::LengthSqr(); // 244
	Sqr(float f); // 244
	ArePlanesSame(const RnPlane_t& a,
			const RnPlane_t& b,
			float flTolerance);  // 509
} /* size: 0, inline expansions: 11 (0 bytes) */

// <05EFC3F6> meshutils/hullifr.cpp:512
// variables: 9
// function calls: 10
void CHullIFR::ValidateEdge(FullEdgeHandle_t feh)
{
	const char   __FUNCTION__; // 4520
	HalfEdgeHandle_t eh0; // 515
	HalfEdgeHandle_t eh1; // 515
	HullIFREdgeDissolveCost_t cost; // 516
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 514
	}
	{
		const HullIFRHalfEdgeData_t* pEdge0; // 520
		const HullIFRHalfEdgeData_t* pEdge1; // 520
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 521
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 522
		}
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 476
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 480
	GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
			ComponentHandle_t handle);  // 1385
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
		HalfEdgeHandle_t edgeHandle);  // 1431
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::IsFullEdgeInMesh(
			FullEdgeHandle_t hFullEdge);  // 514
} /* size: 0, variables: 4, inline expansions: 10 (0 bytes) */

// <05EFB6DA> meshutils/hullifr.cpp:527
// variables: 10
// function calls: 55
void CHullIFR::ValidateFaces()
{
	CVarBitVec usedTris; // 529
	const char   __FUNCTION__; // 4547
	{
		FaceHandle_t fh; // 530
		{
			int nSourceTri; // 533
			CUtlVector<int, CUtlMemory<int, int> >& __for_range; // 5305
			iterator __for_begin; // 8079
			iterator __for_end; // 8079
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 535
			}
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 102
			CUtlVectorBase<int, CUtlMemory<int, int> >::begin(); // 533
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 104
			CUtlVectorBase<int, CUtlMemory<int, int> >::end(); // 533
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1435
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1436
			CBitVecAccessor::CBitVecAccessor(
					uint32* pDWords,
					int iBit);  // 1436
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::operator[](
					int i);  // 535
			CBitVecAccessor::operator uint32(); // 535
			CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
			{
			}
			CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 1480
			CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
				int bitNum);  // 536
		}
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 443
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 446
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 452
		Next(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>  this,
			ComponentHandle_t handle);  // 439
		Next(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>  this,
			ComponentHandle_t handle);  // 435
		First(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 1274
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::FirstFace(); // 530
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 530
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 443
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 446
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 452
		Next(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>  this,
			ComponentHandle_t handle);  // 439
		Next(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>  this,
			ComponentHandle_t handle);  // 1284
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::NextFace(
			FaceHandle_t hFace);  // 530
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 539
	}
	CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::Count(); // 529
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
			int nBitCount);  // 529
	CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1087
	GetEndMask(int numBits); // 1087
	CVarBitVecBase<short unsigned int, 32>::GetEndMask(); // 1898
	CVarBitVecBase<short unsigned int, 32>::Base(); // 1898
	CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1898
	{
		int i; // 1900
		CVarBitVecBase<short unsigned int, 32>::GetNumDWords(); // 1900
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1902
	}
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsAllSet(); // 539
	CVarBitVecBase<short unsigned int, 32>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 32>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 32> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 32>::~CVarBitVecT(); // 1220
	CVarBitVec::~CVarBitVec(); // 540
} /* size: 0, variables: 2, inline expansions: 23 (945 bytes) */

// <05EFB335> meshutils/hullifr.cpp:543
// variables: 6
// function calls: 15
void CHullIFR::ValidateFace(FaceHandle_t fh)
{
	const HullIFRFaceData_t* pData; // 545
	CSurfaceFitter fit; // 546
	{
		int nSource; // 547
		const CUtlVector<int, CUtlMemory<int, int> >& __for_range; // 11252
		const_iterator __for_begin; // 8124
		const_iterator __for_end; // 8124
		CUtlMemory<int, int>::Base(); // 113
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 103
		CUtlVectorBase<int, CUtlMemory<int, int> >::begin(); // 547
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 105
		CUtlVectorBase<int, CUtlMemory<int, int> >::end(); // 547
		CUtlMemory<HullIfrSourceTriangle_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::operator[](
				int i);  // 549
		Vector::operator=(
				const Vector& vOther);  // 42
		Vector::operator=(
				const Vector& vOther);  // 42
		CSurfaceFitter::operator=(
				CSurfaceFitter &);  // 74
		operator+=(CSurfaceFitter& left,
				const CSurfaceFitter& right);  // 549
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 355
	SymMatrix3<float>::SetZero(); // 44
	CSurfaceFitter::CSurfaceFitter(); // 546
} /* size: 307, variables: 2, inline expansions: 4 (181 bytes) */

// <05F0EB90> meshutils/hullifr.cpp:555
// variables: 4
// function calls: 14
void CHullIFR::IsConvexTooComplex()
{
	CHullIFR::TrySyncConvex(); // 557
	{
		const qhFace* Node; // 62
		qhList<qhFace>::Begin(); // 62
		qhList<qhFace>::End(); // 62
	}
	qhList<qhFace>::Size(); // 61
	qhConvex::GetFaceCount(); // 558
	RnHullSimplificationParams_t::GetMaxRuntimeFaces(); // 558
	{
		const qhVertex* Node; // 62
		qhList<qhVertex>::Begin(); // 62
		qhList<qhVertex>::End(); // 62
	}
	qhList<qhVertex>::Size(); // 33
	qhConvex::GetVertexCount(); // 559
	RnHullSimplificationParams_t::GetMaxRuntimeVerts(); // 559
	{
		const qhFace* Face; // 41
		{
			qhHalfEdge* Edge; // 43
		}
	}
	qhConvex::GetEdgeCount(); // 560
	RnHullSimplificationParams_t::GetMaxRuntimeEdges(); // 560
	CHullIFR::IsConvexTooComplex(); // 555
} /* size: 316, inline expansions: 10 (599 bytes) */

// <05EFB318> meshutils/hullifr.cpp:555
void CHullIFR::IsConvexTooComplex()
{
} /* size: 0 */

// <05EF84F5> meshutils/hullifr.cpp:565
// variables: 28
// function calls: 171
void CHullIFR::TryDissolveEdge(EdgeDissolveQueue_t& edgeDissolveQueue, HalfEdgeHandle_t eh0)
{
	HullIFRHalfEdgeData_t* e0; // 568
	HalfEdgeHandle_t eh1; // 569
	const char   __FUNCTION__; // 4596
	HullIFRHalfEdgeData_t* e1; // 575
	RnPlane_t newFacePlane; // 579
	FaceHandle_t fh0; // 582
	FaceHandle_t fh1; // 582
	HullIFRFaceData_t* f0; // 584
	HullIFRFaceData_t* f1; // 584
	CUtlVector<int, CUtlMemory<int, int> > newFaceTris; // 601
	CSurfaceFitter newFaceFit; // 606
	FaceHandle_t fhNew; // 618
	HullIFRFaceData_t* pNewFace; // 625
	HalfEdgeHandle_t hePerimeterFirst; // 630
	HalfEdgeHandle_t hePerimeter; // 630
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 572
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 577
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 580
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 583
	}
	{
		HullIFRHalfEdgeData_t* pEdgeData; // 613
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 609
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFac this); // 613
		RAD2DEG(float flRadians); // 614
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 614
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 614
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 615
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 609
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 54
		ElementAtHead(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFac this); // 615
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 621
	}
	{
		HalfEdgeHandle_t heTwin; // 633
		HullIFRHalfEdgeData_t* hed0; // 634
		HullIFRHalfEdgeData_t* hed1; // 634
		FaceHandle_t fhTwin; // 636
		HullIFREdgeDissolveCost_t newCost; // 644
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 635
		}
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 480
		GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 5609
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1072
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidHalfEdge(); // 5614
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetOppositeHalfEdge(
					HalfEdgeHandle_t hEdge);  // 633
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 480
		GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 5754
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 1093
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidFace(); // 5759
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetFaceConnectedToHalfEdge(
						HalfEdgeHandle_t hEdge);  // 636
		ComponentHandleWithListPointer_t::operator==(
				const ComponentHandleWithListPointer_t& src);  // 637
		Vector::operator=(
				const Vector& vOther);  // 209
		RnPlane_t::operator=(
				const RnPlane_t  &);  // 21
		HullIFREdgeDissolveCost_t::operator=(
				const HullIFREdgeDissolveCost_t  &);  // 645
		Vector::operator=(
				const Vector& vOther);  // 209
		RnPlane_t::operator=(
				const RnPlane_t  &);  // 21
		HullIFREdgeDissolveCost_t::operator=(
				const HullIFREdgeDissolveCost_t  &);  // 645
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 546
		ComponentHandleWithListPointer_t::operator!=(
				const ComponentHandleWithListPointer_t& src);  // 547
		GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
					ComponentHandle_t handle);  // 476
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
				int i);  // 595
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
				int i);  // 480
		GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 1385
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
			HalfEdgeHandle_t edgeHandle);  // 5592
		InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1072
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidHalfEdge(); // 5597
		CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetNextEdgeInFaceLoop(
					HalfEdgeHandle_t hEdge);  // 648
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 476
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 480
	GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
			ComponentHandle_t handle);  // 1385
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
		HalfEdgeHandle_t edgeHandle);  // 5609
	InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1072
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidHalfEdge(); // 5614
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetOppositeHalfEdge(
				HalfEdgeHandle_t hEdge);  // 569
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidHalfEdge(); // 570
	ComponentHandleWithListPointer_t::operator==(
			const ComponentHandleWithListPointer_t& src);  // 570
	SetIndex(const HalfEdgeHandle_t& heapElement,
		int nNewIndex,
		CHullIFR* pMesh);  // 109
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int i);  // 109
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 71
	Count(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFac this); // 112
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Hal this,
			int i);  // 588
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int i);  // 114
	SetIndex(const HalfEdgeHandle_t& heapElement,
		int nNewIndex,
		CHullIFR* pMesh);  // 114
	RemoveAtHead(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_ this); // 576
	Vector::operator==(
			const Vector& src);  // 228
	RnPlane_t::operator==(
			const RnPlane_t& other);  // 580
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 476
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 480
	GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
			ComponentHandle_t handle);  // 1385
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
		HalfEdgeHandle_t edgeHandle);  // 5754
	InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 1093
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidFace(); // 5759
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetFaceConnectedToHalfEdge(
					HalfEdgeHandle_t hEdge);  // 582
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
				ComponentHandle_t handle);  // 476
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 480
	GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this,
			ComponentHandle_t handle);  // 1385
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Edge(
		HalfEdgeHandle_t edgeHandle);  // 5754
	InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t> this); // 1093
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidFace(); // 5759
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetFaceConnectedToHalfEdge(
					HalfEdgeHandle_t hEdge);  // 582
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 583
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 585
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 586
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 587
	RAD2DEG(float flRadians); // 594
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 591
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 592
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 601
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1369
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<int, CUtlMemory<int, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 1378
		CopyConstruct<int>(int* pMemory,
					const int& src);  // 1378
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::AddVectorToTail<CUtlMemory<int, int> >(
						const CUtlVectorBase<int, CUtlMemory<int, int> >& src);  // 603
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 604
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 71
	Count(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFac this); // 611
	Vector::operator=(
			const Vector& vOther);  // 42
	Vector::operator=(
			const Vector& vOther);  // 42
	CSurfaceFitter::operator=(
			const CSurfaceFitter  &);  // 627
	Vector::operator=(
			const Vector& vOther);  // 209
	RnPlane_t::operator=(
			const RnPlane_t  &);  // 626
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 546
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 547
	GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>  this,
				ComponentHandle_t handle);  // 476
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 595
	operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
			int i);  // 480
	GetComponent(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face_t>  this,
			ComponentHandle_t handle);  // 1401
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Face(
		FaceHandle_t faceHandle);  // 5578
	InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1072
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidHalfEdge(); // 5580
	CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::GetFirstEdgeInFaceLoop(
				FaceHandle_t hFace);  // 630
	ComponentHandleWithListPointer_t::operator!=(
			const ComponentHandleWithListPointer_t& src);  // 650
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 652
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
			int i);  // 609
	Element(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
		int i);  // 54
	ElementAtHead(const CUtlPriorityQueue<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFac this); // 652
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 653
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 656
} /* size: 0, variables: 15, inline expansions: 110 (4266 bytes) */

// <05EF6928> meshutils/hullifr.cpp:661
// variables: 28
// function calls: 112
void COpMeshBuilder::COpMeshBuilder(const qhConvex* pConvex, CHullIFR* pOut)
{
	{
		float flScale; // 672
		CUtlVector<const qhFace*, CUtlMemory<const qhFace*, int> > failedFaces; // 686
		{
			const qhVertex* itVert; // 673
			{
				VertexHandle_t vh; // 675
				HullIFRVertexData_t* pData; // 677
				Vector vPos; // 678
			}
		}
		{
			const qhFace* itFace; // 687
		}
		{
			int i; // 695
		}
	}
	{
		float flScale; // 672
		CUtlVector<const qhFace*, CUtlMemory<const qhFace*, int> > failedFaces; // 686
		{
			const qhFace* itFace; // 61
			qhList<qhFace>::End(); // 61
			qhList<qhFace>::Begin(); // 61
			{
				const qhHalfEdge* pEdge0; // 63
				const qhHalfEdge* pEdge1; // 63
				const qhHalfEdge* pEdge2; // 63
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
		EnumTriangles<GetTriangleCount(const qhConvex*)::<lambda(int, qhVertex*, qhVertex*, qhVertex*, const qhFace*)> >(const qhConvex* pConvex,
																const class& fn); // 95
		GetTriangleCount(const qhConvex* pConvex); // 666
		CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::RemoveAll(); // 665
		CUtlMemory<HullIfrSourceTriangle_t, int>::IsGrowable(); // 881
		CUtlMemory<HullIfrSourceTriangle_t, int>::IsExternallyAllocated(); // 888
		CUtlMemory<HullIfrSourceTriangle_t, int>::EnsureCapacity(
				int num);  // 1006
		CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::ResetDbgInfo(); // 1024
		CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::EnsureCapacity(
				int num);  // 666
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 667
		{
			const qhVertex* Node; // 62
			qhList<qhVertex>::End(); // 62
			qhList<qhVertex>::Begin(); // 62
		}
		qhList<qhVertex>::Size(); // 33
		qhConvex::GetVertexCount(); // 668
		CUtlMemory<Vector, int>::IsGrowable(); // 881
		CUtlMemory<Vector, int>::IsExternallyAllocated(); // 888
		CUtlMemory<Vector, int>::EnsureCapacity(
				int num);  // 1006
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1024
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::EnsureCapacity(
				int num);  // 668
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
		qhConvex::GetCentroid(); // 671
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 12
		AsVector(const qhVector3& V); // 671
		Vector::operator=(
				const Vector& vOther);  // 671
		{
			const qhVertex* itVert; // 673
			qhConvex::GetVertexList(); // 673
			qhList<qhVertex>::Begin(); // 673
			qhConvex::GetVertexList(); // 673
			qhList<qhVertex>::End(); // 673
			{
				VertexHandle_t vh; // 675
				HullIFRVertexData_t* pData; // 677
				Vector vPos; // 678
				Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 541
				operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this,
						int i);  // 595
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this,
						int i);  // 546
				ComponentHandleWithListPointer_t::operator!=(
						const ComponentHandleWithListPointer_t& src);  // 547
				GetComponentIndex(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t this,
							ComponentHandle_t handle);  // 466
				operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
						int i);  // 470
				CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::GetComponent(
						ComponentHandle_t handle);  // 1363
				CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex(
					VertexHandle_t vertexHandle);  // 1590
				InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::HalfEdge this); // 1072
				CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidHalfEdge(); // 1591
				CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::MarkStateModified(); // 1599
				ComponentHandleWithListPointer_t::operator==(
						InvalidMeshComponent_t);  // 1587
				InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t this); // 1062
				CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidVertex(); // 1588
				CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::AllocateVertex(
						VertexHandle_t hDataSrc);  // 1857
				InvalidHandle(const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t this); // 1062
				CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::InvalidVertex(); // 1857
				CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::AddVertex(); // 675
				CUtlMemory<CUtlHashtableEntry<const qhVertex::operator[](
						int i);  // 720
				CUtlKeyValuePair<const qhVertex::CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(
																const qhVertex* const& k,
																const ComponentHandleWithListPointer_t& v);  // 1514
				Construct<CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>, const qhVertex*&, const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t&>(CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF pMemory); // 720
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
				Mix32HashFunctor::operator(
						uint32 n);  // 139
				PointerHashFunctor::operator(
						const void* s);  // 249
				CUtlHashtable<const qhVertex::Insert(
					KeyArg_t k,
					ValueArg_t v,
					bool* pDidInsert);  // 676
				CUtlMemory<Vector, int>::NumAllocated(); // 1196
				CUtlMemory<Vector, int>::Base(); // 112
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
				CUtlMemory<Vector, int>::IsGrowable(); // 823
				CUtlMemory<Vector, int>::IsExternallyAllocated(); // 859
				CUtlMemory<Vector, int>::IsExternallyAllocated(); // 861
				CUtlMemory<Vector, int>::Grow(
					int num);  // 806
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
						int num);  // 1198
				CUtlMemory<Vector, int>::operator[](
						int i);  // 602
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
					int i);  // 1201
				CopyConstruct<Vector>(Vector* pMemory,
							const Vector& src);  // 1201
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
						const Vector& src);  // 679
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 12
				AsVector(const qhVector3& V); // 678
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 678
				Max<float>(const float& val1,
						const float& val2);  // 680
			}
		}
		CUtlMemory<const qhFace::ValidateGrowSize(); // 475
		CUtlMemory<const qhFace::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<const qhFace::ResetDbgInfo(); // 530
		CUtlVectorBase<const qhFace::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<const qhFace::CUtlVector(); // 686
		{
			const qhFace* itFace; // 687
			qhConvex::GetFaceList(); // 687
			qhList<qhFace>::Begin(); // 687
			qhConvex::GetFaceList(); // 687
			qhList<qhFace>::End(); // 687
			CUtlMemory<const qhFace::operator[](
					int i);  // 602
			CUtlVectorBase<const qhFace::Element(
				int i);  // 1201
			CopyConstruct<const qhFace*>(const qhFace ** pMemory,
							const qhFace* const& src);  // 1201
			CUtlMemory<const qhFace::Grow(
				int num);  // 806
			CUtlVectorBase<const qhFace::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<const qhFace::AddToTail(
					const qhFace* const& src);  // 690
		}
		CUtlVectorBase<const qhFace::IsEmpty(); // 694
		{
			int i; // 695
			CUtlMemory<const qhFace::operator[](
					int i);  // 588
			CUtlVectorBase<const qhFace::operator[](
					int i);  // 696
			Destruct<const qhFace*>(const qhFace ** pMemory); // 1575
			{
				const bool  bNotLast; // 1578
				CUtlMemory<const qhFace::operator[](
						int i);  // 602
				CUtlVectorBase<const qhFace::Element(
					int i);  // 1584
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 1584
			}
			CUtlVectorBase<const qhFace::FastRemove(
					int elem);  // 697
		}
		CUtlMemory<const qhFace::Purge(); // 903
		CUtlMemory<const qhFace::Purge(); // 1799
		CUtlVectorBase<const qhFace::Purge(); // 560
		CUtlVectorBase<const qhFace::~CUtlVectorBase(); // 410
		CUtlVector<const qhFace::~CUtlVector(); // 707
	}
	CUtlMemory<CUtlHashtableEntry<const qhVertex::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<const qhVertex::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<const qhVertex::Init(); // 178
	CUtlHashtable<const qhVertex::CUtlHashtable(
			int minimumSize);  // 661
} /* size: 0, inline expansions: 4 (11 bytes) */

// <05EF687A> meshutils/hullifr.cpp:661
// variables: 8
void COpMeshBuilder::COpMeshBuilder(const qhConvex* pConvex, CHullIFR* pOut)
{
	{
		float flScale; // 672
		CUtlVector<const qhFace*, CUtlMemory<const qhFace*, int> > failedFaces; // 686
		{
			const qhVertex* itVert; // 673
			{
				VertexHandle_t vh; // 675
				HullIFRVertexData_t* pData; // 677
				Vector vPos; // 678
			}
		}
		{
			const qhFace* itFace; // 687
		}
		{
			int i; // 695
		}
	}
} /* size: 0 */

// <05EF4CB2> meshutils/hullifr.cpp:710
// variables: 16
// function calls: 123
void COpMeshBuilder::ProcessFace(const qhFace* itFace)
{
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, 16> verts; // 712
	const qhHalfEdge* he; // 713
	const qhHalfEdge* heStart; // 713
	Range_t range; // 714
	FaceHandle_t fh; // 724
	const char   __FUNCTION__; // 4493
	{
		HullIFRFaceData_t* pFaceData; // 727
		HullIfrTriangle_t tri; // 730
		CSurfaceFitter& fit; // 734
		int nBeginSourceTri; // 735
		Vector vPlaneNormal; // 747
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 728
		}
		{
			int t; // 736
			{
				int nSourceTri; // 739
				HullIfrSourceTriangle_t& triOut; // 740
				CUtlMemory<Vector, int>::operator[](
						int i);  // 595
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
						int i);  // 788
				CUtlMemory<Vector, int>::operator[](
						int i);  // 595
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
						int i);  // 788
				CUtlMemory<Vector, int>::operator[](
						int i);  // 595
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
						int i);  // 788
				CHullIFR::ComputeTriangleFitter(
							const HullIfrTriangle_t& tri);  // 742
				CUtlMemory<int, int>::Base(); // 112
				CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
				CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
						int num);  // 1198
				CUtlMemory<int, int>::NumAllocated(); // 1196
				CUtlMemory<int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
					int i);  // 1201
				CopyConstruct<int>(int* pMemory,
							const int& src);  // 1201
				CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
						const int& src);  // 744
				CUtlMemory<HullIfrSourceTriangle_t, int>::Base(); // 112
				CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::Base(); // 368
				CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::ResetDbgInfo(); // 824
				CUtlMemory<HullIfrSourceTriangle_t, int>::IsGrowable(); // 823
				CUtlMemory<HullIfrSourceTriangle_t, int>::IsExternallyAllocated(); // 859
				CUtlMemory<HullIfrSourceTriangle_t, int>::IsExternallyAllocated(); // 861
				CUtlMemory<HullIfrSourceTriangle_t, int>::Grow(
					int num);  // 806
				CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::GrowMemory(
						int num);  // 1145
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 355
				SymMatrix3<float>::SetZero(); // 44
				CSurfaceFitter::CSurfaceFitter(); // 122
				Vector::Vector(); // 218
				RnPlane_t::RnPlane_t(); // 122
				HullIfrSourceTriangle_t::HullIfrSourceTriangle_t(); // 1479
				Construct<HullIfrSourceTriangle_t>(HullIfrSourceTriangle_t* pMemory); // 1148
				CUtlMemory<HullIfrSourceTriangle_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::Element(
					int i);  // 1148
				CUtlMemory<HullIfrSourceTriangle_t, int>::NumAllocated(); // 1143
				CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::AddToTail(); // 739
				CUtlMemory<HullIfrSourceTriangle_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::operator[](
						int i);  // 740
				Vector::operator=(
						const Vector& vOther);  // 42
				Vector::operator=(
						const Vector& vOther);  // 42
				CSurfaceFitter::operator=(
						CSurfaceFitter &);  // 742
				Vector::operator=(
						const Vector& vOther);  // 42
				Vector::operator=(
						const Vector& vOther);  // 42
				CSurfaceFitter::operator=(
						CSurfaceFitter &);  // 74
				operator+=(CSurfaceFitter& left,
						const CSurfaceFitter& right);  // 743
				operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
						int i);  // 738
			}
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 736
		}
		{
			int nTri; // 753
			CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::Count(); // 753
			CUtlMemory<HullIfrSourceTriangle_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::operator[](
					int i);  // 754
			Vector::operator=(
					const Vector& vOther);  // 209
			RnPlane_t::operator=(
					const RnPlane_t  &);  // 754
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 135
		CUtlVectorBase<int, CUtlMemory<int, int> >::IsEmpty(); // 728
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 729
		CUtlMemory<int, int>::IsGrowable(); // 881
		CUtlMemory<int, int>::IsExternallyAllocated(); // 888
		CUtlMemory<int, int>::EnsureCapacity(
				int num);  // 1006
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1024
		CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCapacity(
				int num);  // 729
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 731
		operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
				int i);  // 588
		operator[](const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
				int i);  // 732
		CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::Count(); // 735
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 12
		AsVector(const qhVector3& V); // 747
		DotProduct(const Vector& a,
				const Vector& b);  // 751
		Vector::operator=(
				const Vector& vOther);  // 750
	}
	CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
			ComponentHandleWithListPointer_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	EnsureCapacity(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
			int num);  // 199
	CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullI this,
					ComponentHandleWithListPointer_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, Hul this); // 1597
	AlignedByteArray_t(const AlignedByteArray_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFace this); // 228
	Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, Hul this); // 231
	CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFac this,
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFac this,
				int growSize);  // 712
	Range_t::Range_t(); // 714
	Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 824
	IsGrowable(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 823
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 859
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 861
	Grow(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			int num);  // 1249
	Construct<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory); // 1252
	operator[](const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
			int i);  // 602
	Element(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
		int i);  // 1252
	NumAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 1247
	AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this,
			ComponentHandleWithListPointer_t& src);  // 718
	Mix32HashFunctor::operator(
			uint32 n);  // 139
	PointerHashFunctor::operator(
			const void* s);  // 218
	CUtlHashtable<const qhVertex::Find(
		KeyArg_t k);  // 227
	CUtlMemory<CUtlHashtableEntry<const qhVertex::operator[](
			int i);  // 295
	CUtlHashtable<const qhVertex::Element(
		handle_t idx);  // 227
	CUtlHashtable<const qhVertex::FindGetPtr(
			KeyArg_t k);  // 832
	COpMeshBuilder::MapVert(
		qhVertex* v);  // 718
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceDa this); // 721
	Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 725
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 1798
	Base(const AlignedByteArrayExplicit_t<16, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, Hul this); // 237
	IsExternallyAllocated(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t this); // 577
	ConvertToExternalMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this,
				ComponentHandleWithListPointer_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullI this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	Purge_FixedGrowable(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullI this,
				ComponentHandleWithListPointer_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	Purge(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFac this,
		int numElements);  // 1799
	Base(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 368
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 1800
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this); // 903
	Purge(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this); // 510
	~CUtlMemory(const CUtlMemory<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Ver this); // 191
	~CUtlMemoryFixedGrowable_Base(const CUtlMemoryFixedGrowable_Base<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullI this); // 223
	~CUtlMemoryFixedGrowable(const CUtlMemoryFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFac this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>: this); // 478
	~CUtlVectorFixedGrowable(const CUtlVectorFixedGrowable<CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFac this); // 761
} /* size: 0, variables: 6, inline expansions: 53 (2400 bytes) */

// <05EF4A1B> meshutils/hullifr.cpp:769
// variables: 6
// function calls: 3
float IntegralSqErrTriV2(float v0x, float v1x, float v2x)
{
	float vsum; // 771
	Vector a; // 772
	Vector b; // 772
	float out; // 773
	const char   __FUNCTION__; // 4677
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 774
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 772
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 772
	DotProduct(const Vector& a,
			const Vector& b);  // 773
} /* size: 0, variables: 5, inline expansions: 3 (0 bytes) */

// <05EF4841> meshutils/hullifr.cpp:778
// variables: 4
// function calls: 3
float IntegralSqErrTri(float v0x, float v1x, float v2x, float v0y, float v1y, float v2y)
{
	float vsum; // 780
	Vector a; // 781
	Vector b; // 781
	float out; // 782
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 781
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 781
	DotProduct(const Vector& a,
			const Vector& b);  // 782
} /* size: 0, variables: 4, inline expansions: 3 (0 bytes) */

// <05F0D902> meshutils/hullifr.cpp:786
// function calls: 6
void CHullIFR::ComputeTriangleFitter(const HullIfrTriangle_t& tri)
{
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 788
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 788
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 788
} /* size: 0, inline expansions: 6 (0 bytes) */

// <05EF4817> meshutils/hullifr.cpp:786
void CHullIFR::ComputeTriangleFitter(const HullIfrTriangle_t& tri)
{
} /* size: 0 */

// <05EF3C17> meshutils/hullifr.cpp:791
// variables: 12
// function calls: 51
void CSurfaceFitter::CSurfaceFitter(const Vector& p0, const Vector& p1, const Vector& p2)
{
	{
		Vector c; // 793
		Vector vAreaNormal; // 795
		float flArea; // 797
		Vector3<float> Vx; // 811
		Vector3<float> Vy; // 811
		Vector3<float> Vz; // 811
	}
	{
		Vector c; // 793
		Vector vAreaNormal; // 795
		float flArea; // 797
		Vector3<float> Vx; // 811
		Vector3<float> Vy; // 811
		Vector3<float> Vz; // 811
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 793
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 795
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 793
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 795
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 795
		VectorDivide(const Vector& a,
				vec_t b,
				Vector& c);  // 1465
		Vector::Vector(); // 1464
		Vector::operator/(
				float fl);  // 793
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 795
		Vector::operator=(
				const Vector& vOther);  // 794
		Vector::operator=(
				const Vector& vOther);  // 796
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 797
		DotProduct<float>(const Vector3<float>& a,
					const Vector3<float>& b);  // 812
		Vector3<float>::Vector3(
			float flX,
			float flY,
			float flZ);  // 811
		Vector3<float>::Vector3(
			float flX,
			float flY,
			float flZ);  // 811
		DotProduct<float>(const Vector3<float>& a,
					const Vector3<float>& b);  // 816
		Vector3<float>::Vector3(
			float flX,
			float flY,
			float flZ);  // 811
		SymMatrix3<float>::m00(); // 812
		DotProduct<float>(const Vector3<float>& a,
					const Vector3<float>& b);  // 813
		SymMatrix3<float>::m01(); // 813
		DotProduct<float>(const Vector3<float>& a,
					const Vector3<float>& b);  // 814
		SymMatrix3<float>::m02(); // 814
		DotProduct<float>(const Vector3<float>& a,
					const Vector3<float>& b);  // 815
		SymMatrix3<float>::m11(); // 815
		SymMatrix3<float>::m12(); // 816
		DotProduct<float>(const Vector3<float>& a,
					const Vector3<float>& b);  // 817
		SymMatrix3<float>::m22(); // 817
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 804
		Vector::operator=(
				const Vector& vOther);  // 804
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 355
		SymMatrix3<float>::SetZero(); // 805
		SymMatrix3<float>::m22(); // 806
		SymMatrix3<float>::m11(); // 806
		SymMatrix3<float>::m00(); // 806
	}
} /* size: 859 */

// <05EF3B8B> meshutils/hullifr.cpp:791
// variables: 6
void CSurfaceFitter::CSurfaceFitter(const Vector& p0, const Vector& p1, const Vector& p2)
{
	{
		Vector c; // 793
		Vector vAreaNormal; // 795
		float flArea; // 797
		Vector3<float> Vx; // 811
		Vector3<float> Vy; // 811
		Vector3<float> Vz; // 811
	}
} /* size: 0 */

// <05EF381C> meshutils/hullifr.cpp:821
// variables: 4
// function calls: 14
void CHullIFR::TriPlaneError(int nSourceTri, const RnPlane_t& plane)
{
	const HullIfrSourceTriangle_t& source; // 823
	float h0; // 824
	float h1; // 824
	float h2; // 824
	CUtlMemory<HullIfrSourceTriangle_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::operator[](
			int i);  // 823
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 824
	DotProduct(const Vector& a,
			const Vector& b);  // 223
	RnPlane_t::Distance(
		const Vector& vPoint);  // 824
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 824
	DotProduct(const Vector& a,
			const Vector& b);  // 223
	RnPlane_t::Distance(
		const Vector& vPoint);  // 824
	CUtlMemory<Vector, int>::operator[](
			int i);  // 595
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
			int i);  // 824
	DotProduct(const Vector& a,
			const Vector& b);  // 223
	RnPlane_t::Distance(
		const Vector& vPoint);  // 824
} /* size: 0, variables: 4, inline expansions: 14 (0 bytes) */

// <05F11D69> meshutils/hullifr.cpp:830
// function calls: 6
void COpMeshBuilder::MapVert(qhVertex* v)
{
	Mix32HashFunctor::operator(
			uint32 n);  // 139
	PointerHashFunctor::operator(
			const void* s);  // 218
	CUtlHashtable<const qhVertex::Find(
		KeyArg_t k);  // 227
	CUtlMemory<CUtlHashtableEntry<const qhVertex::operator[](
			int i);  // 295
	CUtlHashtable<const qhVertex::Element(
		handle_t idx);  // 227
	CUtlHashtable<const qhVertex::FindGetPtr(
			KeyArg_t k);  // 832
} /* size: 0, inline expansions: 6 (0 bytes) */

// <05EF37F4> meshutils/hullifr.cpp:830
void COpMeshBuilder::MapVert(qhVertex* v)
{
} /* size: 0 */

// <05EF36A3> meshutils/hullifr.cpp:840
// function calls: 5
void CSurfaceFitter::GetBestFitPlane()
{
	Vector::Normalized(); // 895
	Vector::Vector(); // 218
	RnPlane_t::RnPlane_t(); // 894
	DotProduct(const Vector& a,
			const Vector& b);  // 896
	CSurfaceFitter::GetAveragePlane(); // 842
} /* size: 0, inline expansions: 5 (0 bytes) */

// <05EF30DB> meshutils/hullifr.cpp:847
// variables: 5
// function calls: 22
void CHullIFR::GetMinMomentumPlane(const HullIFRFaceData_t* f0, const HullIFRFaceData_t* f1)
{
	CSurfaceFitter fitter; // 849
	Vector vNormal; // 850
	Vector vMomentum; // 851
	{
		int i; // 852
		{
			Vector dn; // 856
			Vector::NormalizeInPlace(); // 854
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 855
			VectorDivide(const Vector& a,
					vec_t b,
					Vector& c);  // 1465
			Vector::Vector(); // 1464
			Vector::operator/(
					float fl);  // 855
			Vector::operator+=(
					const Vector& v);  // 857
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 856
		}
	}
	Vector::Vector(); // 851
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 859
	Vector::Normalized(); // 861
	DotProduct(const Vector& a,
			const Vector& b);  // 220
	Vector::Vector(); // 220
	Vector::operator=(
			const Vector& vOther);  // 220
	RnPlane_t::RnPlane_t(
			const Vector& n,
			const Vector& p);  // 861
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

// <05EF2E21> meshutils/hullifr.cpp:865
// variables: 5
// function calls: 10
void CHullIFR::GetNormalMomentum(const HullIFRFaceData_t& face, const Vector& vCenterNormal)
{
	Vector vMomentum; // 867
	{
		int nSourceTri; // 868
		const CUtlVector<int, CUtlMemory<int, int> >& __for_range; // 11252
		const_iterator __for_begin; // 8124
		const_iterator __for_end; // 8124
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 105
		CUtlVectorBase<int, CUtlMemory<int, int> >::end(); // 868
		CUtlMemory<int, int>::Base(); // 113
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 103
		CUtlVectorBase<int, CUtlMemory<int, int> >::begin(); // 868
		CUtlMemory<HullIfrSourceTriangle_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<HullIfrSourceTriangle_t, CUtlMemory<HullIfrSourceTriangle_t, int> >::operator[](
				int i);  // 869
		Vector::operator+=(
				const Vector& v);  // 869
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 869
	}
} /* size: 0, variables: 1 */

// <05EF1B81> meshutils/hullifr.cpp:873
// variables: 14
// function calls: 78
void CSurfaceFitter::GetBestFitPlaneLSq()
{
	SvdIterator<float> si; // 875
	Matrix3<float> nullSpace; // 879
	int nSmallestEigenvalue; // 881
	RnPlane_t plane; // 882
	const char   __FUNCTION__; // 4677
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 884
	}
	Quaternion<float>::SetIdentity(); // 876
	SvdIterator<float>::SvdIterator(); // 875
	{
		int i; // 705
		{
			float sumErrors; // 708
			Select(float a,
				float b,
				bool mask);  // 664
			{
				fltx4 retVal; // 1051
				_mm_load_ss(const float* __P); // 1052
			}
			LoadUnalignedFloatSIMD<>(const float* pFlt); // 66
			{
				fltx4 retVal; // 2369
				_mm_rsqrt_ps(__m128 __A); // 2370
			}
			ReciprocalSqrtEstSIMD<>(const fltx4& a); // 55
			RsqrtEst(const fltx4& a); // 66
			_mm_store_ss(float* __P,
					__m128 __A);  // 528
			StoreUnalignedFloat<>(float* pSingleFloat,
						const fltx4& a);  // 66
			RsqrtEst(float a); // 662
			Select(float a,
				float b,
				bool mask);  // 665
			SinCos<float>::SinCos(); // 663
			ApproximateGivensRotation<float>(const float& a11,
							const float& a12,
							const float& a22);  // 707
			SinCos<float>::SinCos(); // 439
			SinCos<float>::DoubleAngle(); // 709
			PerformGivensRotationQuaternion<float>(const SinCos<float>& res,
								float& x,
								float& y,
								float& z,
								float& w);  // 710
			{
				fltx4 retVal; // 1051
				_mm_load_ss(const float* __P); // 1052
			}
			LoadUnalignedFloatSIMD<>(const float* pFlt); // 66
			{
				fltx4 retVal; // 2369
				_mm_rsqrt_ps(__m128 __A); // 2370
			}
			ReciprocalSqrtEstSIMD<>(const fltx4& a); // 55
			RsqrtEst(const fltx4& a); // 66
			_mm_store_ss(float* __P,
					__m128 __A);  // 528
			StoreUnalignedFloat<>(float* pSingleFloat,
						const fltx4& a);  // 66
			RsqrtEst(float a); // 662
			SinCos<float>::SinCos(); // 663
			Select(float a,
				float b,
				bool mask);  // 664
			Select(float a,
				float b,
				bool mask);  // 665
			ApproximateGivensRotation<float>(const float& a11,
							const float& a12,
							const float& a22);  // 713
			SinCos<float>::SinCos(); // 439
			SinCos<float>::DoubleAngle(); // 715
			PerformGivensRotationQuaternion<float>(const SinCos<float>& res,
								float& x,
								float& y,
								float& z,
								float& w);  // 716
			{
				fltx4 retVal; // 1051
				_mm_load_ss(const float* __P); // 1052
			}
			LoadUnalignedFloatSIMD<>(const float* pFlt); // 66
			{
				fltx4 retVal; // 2369
				_mm_rsqrt_ps(__m128 __A); // 2370
			}
			ReciprocalSqrtEstSIMD<>(const fltx4& a); // 55
			RsqrtEst(const fltx4& a); // 66
			_mm_store_ss(float* __P,
					__m128 __A);  // 528
			StoreUnalignedFloat<>(float* pSingleFloat,
						const fltx4& a);  // 66
			RsqrtEst(float a); // 662
			SinCos<float>::SinCos(); // 663
			Select(float a,
				float b,
				bool mask);  // 664
			ApproximateGivensRotation<float>(const float& a11,
							const float& a12,
							const float& a22);  // 719
			SinCos<float>::SinCos(); // 439
			SinCos<float>::DoubleAngle(); // 721
			PerformGivensRotationQuaternion<float>(const SinCos<float>& res,
								float& x,
								float& y,
								float& z,
								float& w);  // 722
		}
	}
	SinCos<float>::SinCos(); // 701
	SvdIterator<float>::Iterate(
		int nIterations,
		float flEpsilon);  // 878
	Quaternion<float>::LengthSqr(); // 729
	Rsqrt<float>(const float& a); // 729
	Quaternion<float>::operator*(
			const float& f);  // 729
	Matrix3<float>::Matrix3(); // 477
	QuaternionMatrix<float>(const Quaternion<float>& q); // 729
	SvdIterator<float>::ComputeV(); // 879
	Abs(float fl); // 146
	Abs(float fl); // 148
	Abs(float fl); // 147
	Vector3<float>::SmallestComponent(); // 881
	Vector3<float>::Vector3(
		float flX,
		float flY,
		float flZ);  // 402
	SymMatrix3<float>::GetDiag(); // 881
	Vector3<float>::Vector3(
		float flX,
		float flY,
		float flZ);  // 274
	Matrix3<float>::GetColumn(
			int i);  // 883
	Vector::Vector(); // 218
	RnPlane_t::RnPlane_t(); // 882
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 166
	AsVector<float>(const Vector3<float>& v); // 883
	Vector::operator=(
			const Vector& vOther);  // 883
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 884
	DotProduct(const Vector& a,
			const Vector& b);  // 885
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 886
	Vector::operator=(
			const Vector& vOther);  // 886
	DotProduct(const Vector& a,
			const Vector& b);  // 887
} /* size: 0, variables: 5, inline expansions: 34 (0 bytes) */

// <05F0DA95> meshutils/hullifr.cpp:892
// variable: 1
// function calls: 4
void CSurfaceFitter::GetAveragePlane()
{
	RnPlane_t plane; // 894
	Vector::Normalized(); // 895
	Vector::Vector(); // 218
	RnPlane_t::RnPlane_t(); // 894
	DotProduct(const Vector& a,
			const Vector& b);  // 896
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <05EF1B57> meshutils/hullifr.cpp:892
// variable: 1
void CSurfaceFitter::GetAveragePlane()
{
	RnPlane_t plane; // 894
} /* size: 0, variables: 1 */

// <05EF1A98> meshutils/hullifr.cpp:901
// function calls: 3
void HullIFRHalfEdgeData_t::HullIFRHalfEdgeData_t()
{
	Vector::Vector(); // 218
	RnPlane_t::RnPlane_t(); // 21
	HullIFREdgeDissolveCost_t::HullIFREdgeDissolveCost_t(); // 901
} /* size: 0, inline expansions: 3 (0 bytes) */

// <05EF1A7B> meshutils/hullifr.cpp:901
void HullIFRHalfEdgeData_t::HullIFRHalfEdgeData_t()
{
} /* size: 0 */

