
//
// rendersystem/renderutils.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 4
//	class: 1
//

// <00265A2D> rendersystem/renderutils.h:19
void CRenderUtils::CRenderUtils()
{
} /* size: 0 */

// <00265A11> rendersystem/renderutils.h:19
inline void CRenderUtils::CRenderUtils()
{
} /* size: 0 */

// <002650FA> rendersystem/renderutils.h:19
// function calls: 8
void CRenderUtils::~CRenderUtils()
{
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IRenderUtils, 0>::~CTier2AppSystem(); // 19
} /* size: 49, inline expansions: 8 (198 bytes) */

// <002650DE> rendersystem/renderutils.h:19
inline void CRenderUtils::~CRenderUtils()
{
} /* size: 0 */

// <00262253> rendersystem/renderutils.h:19
// member functions: 24
// member variable: 1
// vtable entries: 8
// class size: 48
class CRenderUtils : public CTier2AppSystem<IRenderUtils, 0> {
public:
	/* class CTier2AppSystem<IRenderUtils, 0> <ancestor>; */ /* 0 48 */
	void CRenderUtils(CRenderUtils* , CRenderUtils& );
	void CRenderUtils(CRenderUtils* , const CRenderUtils& );
	void CRenderUtils(CRenderUtils* );
	/* rendersystem/renderutils.cpp:26 */
	virtual InitReturnVal_t Init(CRenderUtils* );
	/* rendersystem/renderutils.cpp:35 */
	virtual void Shutdown(CRenderUtils* );
	/* rendersystem/renderutils.cpp:43 */
	virtual OcclusionQueryObjectHandle_t CreateOcclusionQueryObject(CRenderUtils* );
	/* rendersystem/renderutils.cpp:50 */
	virtual void DestroyOcclusionQueryObject(CRenderUtils* , OcclusionQueryObjectHandle_t);
	/* rendersystem/renderutils.cpp:55 */
	virtual int OcclusionQuery_GetNumPixelsRendered(CRenderUtils* , OcclusionQueryObjectHandle_t);
	/* rendersystem/renderutils.cpp:60 */
	virtual void ResetOcclusionQueryObject(CRenderUtils* , OcclusionQueryObjectHandle_t);
	/* rendersystem/renderutils.cpp:66 */
	virtual bool BeginOcclusionQueryDrawing(CRenderUtils* , OcclusionQueryObjectHandle_t, IRenderContext* );
	/* rendersystem/renderutils.cpp:72 */
	virtual void EndOcclusionQueryDrawing(CRenderUtils* , OcclusionQueryObjectHandle_t, IRenderContext* );
	void ~CRenderUtils(CRenderUtils* );
	void CRenderUtils(class CRenderUtils *, class CRenderUtils &); /* linkage=_ZN12CRenderUtilsC4EOS_ */
	void CRenderUtils(class CRenderUtils *, const class CRenderUtils  &); /* linkage=_ZN12CRenderUtilsC4ERKS_ */
	void CRenderUtils(class CRenderUtils *); /* linkage=_ZN12CRenderUtilsC4Ev */
	/* <265cf4> rendersystem/renderutils.cpp:26 */
	virtual enum InitReturnVal_t Init(class CRenderUtils *); /* linkage=_ZN12CRenderUtils4InitEv */
	virtual void Shutdown(class CRenderUtils *); /* linkage=_ZN12CRenderUtils8ShutdownEv */
	virtual OcclusionQueryObjectHandle_t CreateOcclusionQueryObject(class CRenderUtils *); /* linkage=_ZN12CRenderUtils26CreateOcclusionQueryObjectEv */
	virtual void DestroyOcclusionQueryObject(class CRenderUtils *, OcclusionQueryObjectHandle_t); /* linkage=_ZN12CRenderUtils27DestroyOcclusionQueryObjectEP30OcclusionQueryObjectHandle_t__ */
	virtual int OcclusionQuery_GetNumPixelsRendered(class CRenderUtils *, OcclusionQueryObjectHandle_t); /* linkage=_ZN12CRenderUtils35OcclusionQuery_GetNumPixelsRenderedEP30OcclusionQueryObjectHandle_t__ */
	virtual void ResetOcclusionQueryObject(class CRenderUtils *, OcclusionQueryObjectHandle_t); /* linkage=_ZN12CRenderUtils25ResetOcclusionQueryObjectEP30OcclusionQueryObjectHandle_t__ */
	virtual bool BeginOcclusionQueryDrawing(class CRenderUtils *, OcclusionQueryObjectHandle_t, class IRenderContext *); /* linkage=_ZN12CRenderUtils26BeginOcclusionQueryDrawingEP30OcclusionQueryObjectHandle_t__P14IRenderContext */
	virtual void EndOcclusionQueryDrawing(class CRenderUtils *, OcclusionQueryObjectHandle_t, class IRenderContext *); /* linkage=_ZN12CRenderUtils24EndOcclusionQueryDrawingEP30OcclusionQueryObjectHandle_t__P14IRenderContext */
	void ~CRenderUtils(class CRenderUtils *); /* linkage=_ZN12CRenderUtilsD4Ev */
};

