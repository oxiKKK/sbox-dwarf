
//
// scenesystem/utils/fullscreenquadrenderer.cpp
//
//	referenced by: libengine2.so
//
//	functions: 9
//	class: 1
//	struct: 1
//

// <03C87BFB> ../scenesystem/utils/fullscreenquadrenderer.cpp:20
inline void FullscreenQuadVertex_t::operator=(const FullscreenQuadVertex_t &)
{
} /* size: 0 */

// <03C87730> ../scenesystem/utils/fullscreenquadrenderer.cpp:20
void FullscreenQuadVertex_t::FullscreenQuadVertex_t()
{
} /* size: 0 */

// <03C87714> ../scenesystem/utils/fullscreenquadrenderer.cpp:20
inline void FullscreenQuadVertex_t::FullscreenQuadVertex_t()
{
} /* size: 0 */

// <03C859D0> ../scenesystem/utils/fullscreenquadrenderer.cpp:20
// member functions: 2
// member variables: 3
// struct size: 24
struct FullscreenQuadVertex_t {
	Vector m_vecPosition; /* 0 12 */
	VertexColor_t m_color; /* 12 4 */
	Vector2D m_vecTexCoord; /* 16 8 */
	void FullscreenQuadVertex_t(FullscreenQuadVertex_t* );
	FullscreenQuadVertex_t& operator=(FullscreenQuadVertex_t* , const FullscreenQuadVertex_t& );
};

// <03C89165> ../scenesystem/utils/fullscreenquadrenderer.cpp:35
void CInputLayoutRegistration_sm_hLayout::CInputLayoutRegistration_sm_hLayout()
{
} /* size: 0 */

// <03C8914C> ../scenesystem/utils/fullscreenquadrenderer.cpp:35
inline void CInputLayoutRegistration_sm_hLayout::CInputLayoutRegistration_sm_hLayout()
{
} /* size: 0 */

// <03C890EC> ../scenesystem/utils/fullscreenquadrenderer.cpp:35
void CInputLayoutRegistration_sm_hLayout::OnConnect()
{
} /* size: 70 */

// <03C85A8A> ../scenesystem/utils/fullscreenquadrenderer.cpp:35
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 24
class CInputLayoutRegistration_sm_hLayout : public CPostConnectCallback {
public:
	/* class CPostConnectCallback <ancestor>; */ /* 0 24 */
	void ~CInputLayoutRegistration_sm_hLayout(CInputLayoutRegistration_sm_hLayout* );
	void CInputLayoutRegistration_sm_hLayout(CInputLayoutRegistration_sm_hLayout* , CInputLayoutRegistration_sm_hLayout& );
	void CInputLayoutRegistration_sm_hLayout(CInputLayoutRegistration_sm_hLayout* , const CInputLayoutRegistration_sm_hLayout& );
	/* ../scenesystem/utils/fullscreenquadrenderer.cpp:35 */
	void CInputLayoutRegistration_sm_hLayout(CInputLayoutRegistration_sm_hLayout* );
	/* ../scenesystem/utils/fullscreenquadrenderer.cpp:35 */
	virtual PostConnectCallbackRetVal_t OnConnect(CInputLayoutRegistration_sm_hLayout* );
	void ~CInputLayoutRegistration_sm_hLayout(class CInputLayoutRegistration_sm_hLayout *); /* linkage=_ZN35CInputLayoutRegistration_sm_hLayoutD4Ev */
	void CInputLayoutRegistration_sm_hLayout(class CInputLayoutRegistration_sm_hLayout *, class CInputLayoutRegistration_sm_hLayout &); /* linkage=_ZN35CInputLayoutRegistration_sm_hLayoutC4EOS_ */
	void CInputLayoutRegistration_sm_hLayout(class CInputLayoutRegistration_sm_hLayout *, const class CInputLayoutRegistration_sm_hLayout  &); /* linkage=_ZN35CInputLayoutRegistration_sm_hLayoutC4ERKS_ */
	void CInputLayoutRegistration_sm_hLayout(class CInputLayoutRegistration_sm_hLayout *); /* linkage=_ZN35CInputLayoutRegistration_sm_hLayoutC4Ev */
	virtual enum PostConnectCallbackRetVal_t OnConnect(class CInputLayoutRegistration_sm_hLayout *); /* linkage=_ZN35CInputLayoutRegistration_sm_hLayout9OnConnectEv */
};

// <03C88DD1> ../scenesystem/utils/fullscreenquadrenderer.cpp:38
// function calls: 12
void CFullscreenQuadRenderer::CFullscreenQuadRenderer(HMaterial hMaterial, const VertexColor_t& modulationColor)
{
	{
		{
		}
	}
	{
		IProceduralLayerRenderer::IProceduralLayerRenderer(); // 38
		CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 38
		CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 673
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 570
		CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
			ResourceHandleTyped_t hResource);  // 673
		CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 40
		CStrongHandle<InfoForResourceTypeIMaterial2>::HasData(); // 43
		VertexColor_t::AsUint32(); // 203
		VertexColor_t::operator=(
				const VertexColor_t& src);  // 41
		VertexColor_t::VertexColor_t(); // 38
	}
	{
	}
	CFullscreenQuadRenderer::CFullscreenQuadRenderer(
				HMaterial hMaterial,
				const VertexColor_t& modulationColor);  // 38
} /* size: 0, inline expansions: 1 (26 bytes) */

// <03C88D7A> ../scenesystem/utils/fullscreenquadrenderer.cpp:38
// variables: 2
void CFullscreenQuadRenderer::CFullscreenQuadRenderer(HMaterial hMaterial, const VertexColor_t& modulationColor)
{
	const char   __FUNCTION__; // 25819
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 43
	}
} /* size: 0, variables: 1 */

// <03C87DE2> ../scenesystem/utils/fullscreenquadrenderer.cpp:46
// variables: 5
// function calls: 57
void CFullscreenQuadRenderer::Render(ISceneView* pView, IRenderContext* pRenderContext, ISceneLayer* pLayer, SceneSystemPerFrameStats_t* pStats)
{
	int nCount; // 50
	CDynamicVertexData<FullscreenQuadVertex_t> vb; // 51
	BufferDesc_t indexDesc; // 77
	IndexBufferHandle_t hIndexBuffer; // 83
	IMaterialMode* pMode; // 87
	CDynamicVertexData<FullscreenQuadVertex_t>::Lock(
		int nVertexCount);  // 680
	Vector::Vector(); // 20
	VertexColor_t::VertexColor_t(); // 20
	Vector2D::Vector2D(); // 20
	FullscreenQuadVertex_t::FullscreenQuadVertex_t(); // 165
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<FullscreenQuadVertex_t>::ClearVertexFields(); // 171
	CVertexDataBase<FullscreenQuadVertex_t>::CVertexDataBase(); // 673
	CDynamicVertexData<FullscreenQuadVertex_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 51
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 55
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 53
	Vector::operator=(
			const Vector& vOther);  // 20
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 20
	Vector2D::operator=(
			const Vector2D& vOther);  // 20
	FullscreenQuadVertex_t::operator=(
			const FullscreenQuadVertex_t  &);  // 355
	{
	}
	CVertexDataBase<FullscreenQuadVertex_t>::AdvanceVertex(); // 270
	CVertexDataBase<FullscreenQuadVertex_t>::AdvanceVertex(); // 56
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 59
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 20
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 20
	Vector2D::operator=(
			const Vector2D& vOther);  // 20
	FullscreenQuadVertex_t::operator=(
			const FullscreenQuadVertex_t  &);  // 355
	{
	}
	CVertexDataBase<FullscreenQuadVertex_t>::AdvanceVertex(); // 270
	CVertexDataBase<FullscreenQuadVertex_t>::AdvanceVertex(); // 61
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 60
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 65
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 64
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 20
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 20
	Vector2D::operator=(
			const Vector2D& vOther);  // 20
	FullscreenQuadVertex_t::operator=(
			const FullscreenQuadVertex_t  &);  // 355
	{
	}
	CVertexDataBase<FullscreenQuadVertex_t>::AdvanceVertex(); // 270
	CVertexDataBase<FullscreenQuadVertex_t>::AdvanceVertex(); // 66
	VertexColor_t::AsUint32(); // 203
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 69
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 70
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 20
	VertexColor_t::operator=(
			const VertexColor_t& src);  // 20
	Vector2D::operator=(
			const Vector2D& vOther);  // 20
	FullscreenQuadVertex_t::operator=(
			const FullscreenQuadVertex_t  &);  // 355
	{
	}
	CVertexDataBase<FullscreenQuadVertex_t>::AdvanceVertex(); // 270
	CVertexDataBase<FullscreenQuadVertex_t>::AdvanceVertex(); // 71
	CDynamicVertexData<FullscreenQuadVertex_t>::Unlock(); // 760
	CDynamicVertexData<FullscreenQuadVertex_t>::Unlock(); // 639
	CDynamicVertexData<FullscreenQuadVertex_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 640
	CDynamicVertexData<FullscreenQuadVertex_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 73
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator->(); // 87
	CUtlStringToken::CUtlStringToken(); // 87
	CDynamicVertexData<FullscreenQuadVertex_t>::Unlock(); // 760
	CDynamicVertexData<FullscreenQuadVertex_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<FullscreenQuadVertex_t>::~CVertexDataBase(); // 194
	CVertexDataBase<FullscreenQuadVertex_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<FullscreenQuadVertex_t>::~CDynamicVertexData(); // 95
} /* size: 0, variables: 5, inline expansions: 57 (2721 bytes) */

