
//
// rendersystem/renderutils.cpp
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 10
//

// <002659F0> rendersystem/renderutils.cpp:20
void* __CreateCRenderUtilsIRenderUtils_interface(void)
{
} /* size: 12 */

// <00265CF4> rendersystem/renderutils.cpp:26
// variable: 1
// function calls: 5
void CRenderUtils::Init()
{
	InitReturnVal_t nRetVal; // 28
	CTier0AppSystem<IRenderUtils, 0>::Init(); // 71
	CTier2AppSystem<IRenderUtils, 0>::Init(); // 28
	CTier0AppSystem<IRenderUtils, 0>::Init(); // 71
	CTier2AppSystem<IRenderUtils, 0>::Init(); // 28
	CRenderUtils::Init(); // 26
} /* size: 46, variables: 1, inline expansions: 5 (53 bytes) */

// <002659CB> rendersystem/renderutils.cpp:26
// variable: 1
void CRenderUtils::Init()
{
	InitReturnVal_t nRetVal; // 28
} /* size: 0, variables: 1 */

// <0026592B> rendersystem/renderutils.cpp:35
// function calls: 2
void CRenderUtils::Shutdown()
{
	CTier0AppSystem<IRenderUtils, 0>::Shutdown(); // 85
	CTier2AppSystem<IRenderUtils, 0>::Shutdown(); // 37
} /* size: 33, inline expansions: 2 (56 bytes) */

// <002658C1> rendersystem/renderutils.cpp:43
// variable: 1
void CRenderUtils::CreateOcclusionQueryObject()
{
	OcclusionQueryObjectHandle_t h; // 45
} /* size: 53, variables: 1 */

// <00265865> rendersystem/renderutils.cpp:50
void CRenderUtils::DestroyOcclusionQueryObject(OcclusionQueryObjectHandle_t h)
{
} /* size: 19 */

// <00265804> rendersystem/renderutils.cpp:55
void CRenderUtils::OcclusionQuery_GetNumPixelsRendered(OcclusionQueryObjectHandle_t h)
{
} /* size: 24 */

// <002657A8> rendersystem/renderutils.cpp:60
void CRenderUtils::ResetOcclusionQueryObject(OcclusionQueryObjectHandle_t h)
{
} /* size: 19 */

// <00265731> rendersystem/renderutils.cpp:66
void CRenderUtils::BeginOcclusionQueryDrawing(OcclusionQueryObjectHandle_t h, IRenderContext* pRenderContext)
{
} /* size: 19 */

// <002656BA> rendersystem/renderutils.cpp:72
void CRenderUtils::EndOcclusionQueryDrawing(OcclusionQueryObjectHandle_t h, IRenderContext* pRenderContext)
{
} /* size: 19 */

