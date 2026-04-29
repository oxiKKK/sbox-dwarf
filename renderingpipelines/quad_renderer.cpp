
//
// renderingpipelines/quad_renderer.cpp
//
//	referenced by: libengine2.so
//
//	functions: 2
//

// <028BC7B3> renderingpipelines/quad_renderer.cpp:13
// variables: 2
// function calls: 6
void GetQuadInputLayout(void)
{
	{
		const RenderInputLayoutField_t  s_quadLayout; // 17
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_24; // 24
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 24
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 29
	}
} /* size: 329 */

// <028BB266> renderingpipelines/quad_renderer.cpp:34
// variables: 6
// function calls: 74
void CQuadRenderer::Render(ISceneView* pView, IRenderContext* pRenderContext, ISceneLayer* pLayer, SceneSystemPerFrameStats_t* pStats)
{
	IMaterialMode* pMode; // 45
	Vector vEyeRays; // 50
	Vector vAverageDir; // 54
	float flScalar; // 55
	ScreenSpaceVertex_t ssVerts; // 58
	CDynamicVertexData<CQuadRenderer::Vertex_t> vb; // 61
	CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 41
	ISceneView::GetFrustum(); // 51
	CFrustum::GetCameraFarPlane(); // 51
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 54
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 54
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 54
	Vector::Normalized(); // 54
	ISceneUtils::ComputeScreenSpaceVertices(
					const RenderViewport_t& viewport,
					const RenderViewport_t& destViewport,
					const RenderViewport_t& srcViewport,
					int nSrcTextureWidth,
					int nSrcTextureHeight,
					ScreenSpaceVertex_t* pVertices);  // 59
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 55
	Vector2D::Vector2D(); // 18
	Vector2D::Vector2D(); // 18
	Vector::Vector(); // 18
	Vertex_t::Vertex_t(); // 165
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<CQuadRenderer::Vertex_t>::ClearVertexFields(); // 171
	CVertexDataBase<CQuadRenderer::Vertex_t>::CVertexDataBase(); // 673
	CDynamicVertexData<CQuadRenderer::Vertex_t>::Lock(
		int nVertexCount);  // 680
	CDynamicVertexData<CQuadRenderer::Vertex_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 61
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 65
	{
	}
	Vector2D::operator=(
			const Vector2D& vOther);  // 18
	Vector::operator=(
			const Vector& vOther);  // 18
	Vertex_t::operator=(
			const Vertex_t  &);  // 355
	{
	}
	CVertexDataBase<CQuadRenderer::Vertex_t>::AdvanceVertex(); // 270
	CVertexDataBase<CQuadRenderer::Vertex_t>::AdvanceVertex(); // 66
	Vector2D::operator=(
			const Vector2D& vOther);  // 63
	Vector::operator=(
			const Vector& vOther);  // 65
	Vector2D::operator=(
			const Vector2D& vOther);  // 68
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 70
	{
	}
	Vector2D::operator=(
			const Vector2D& vOther);  // 18
	Vector::operator=(
			const Vector& vOther);  // 18
	Vertex_t::operator=(
			const Vertex_t  &);  // 355
	{
	}
	CVertexDataBase<CQuadRenderer::Vertex_t>::AdvanceVertex(); // 270
	CVertexDataBase<CQuadRenderer::Vertex_t>::AdvanceVertex(); // 71
	Vector::operator=(
			const Vector& vOther);  // 70
	Vector2D::operator=(
			const Vector2D& vOther);  // 73
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 75
	{
	}
	Vector2D::operator=(
			const Vector2D& vOther);  // 18
	Vector::operator=(
			const Vector& vOther);  // 18
	Vertex_t::operator=(
			const Vertex_t  &);  // 355
	{
	}
	CVertexDataBase<CQuadRenderer::Vertex_t>::AdvanceVertex(); // 270
	CVertexDataBase<CQuadRenderer::Vertex_t>::AdvanceVertex(); // 76
	Vector::operator=(
			const Vector& vOther);  // 75
	Vector2D::operator=(
			const Vector2D& vOther);  // 78
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 80
	{
	}
	Vector2D::operator=(
			const Vector2D& vOther);  // 18
	Vector::operator=(
			const Vector& vOther);  // 18
	Vertex_t::operator=(
			const Vertex_t  &);  // 355
	{
	}
	CVertexDataBase<CQuadRenderer::Vertex_t>::AdvanceVertex(); // 270
	CVertexDataBase<CQuadRenderer::Vertex_t>::AdvanceVertex(); // 81
	Vector::operator=(
			const Vector& vOther);  // 80
	CDynamicVertexData<CQuadRenderer::Vertex_t>::Unlock(); // 760
	CDynamicVertexData<CQuadRenderer::Vertex_t>::Unlock(); // 639
	CDynamicVertexData<CQuadRenderer::Vertex_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 640
	CDynamicVertexData<CQuadRenderer::Vertex_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 83
	CDynamicVertexData<CQuadRenderer::Vertex_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<CQuadRenderer::Vertex_t>::~CVertexDataBase(); // 194
	CVertexDataBase<CQuadRenderer::Vertex_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<CQuadRenderer::Vertex_t>::~CDynamicVertexData(); // 88
} /* size: 0, variables: 6, inline expansions: 74 (3528 bytes) */

