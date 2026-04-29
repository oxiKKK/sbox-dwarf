
//
// rendersystem/renderquerybase.cpp
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 5
//

// <00213B83> rendersystem/renderquerybase.cpp:15
// function calls: 7
void CRenderQueryBase::CRenderQueryBase(RenderQueryType_t queryType)
{
	CRenderResource::CRenderResource(
			RenderResourceType_t nType);  // 15
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 15
	CInterlockedIntT<long long unsigned int, 8>::CInterlockedIntT(); // 15
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 18
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 647
	CInterlockedIntT<long long unsigned int, 8>::operator=(
			long long unsigned int newValue);  // 19
} /* size: 0, inline expansions: 7 (0 bytes) */

// <00213B5E> rendersystem/renderquerybase.cpp:15
void CRenderQueryBase::CRenderQueryBase(RenderQueryType_t queryType)
{
} /* size: 0 */

// <00213B02> rendersystem/renderquerybase.cpp:22
// function call: 1
void CRenderQueryBase::~CRenderQueryBase()
{
	CRenderResource::~CRenderResource(); // 24
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00213A51> rendersystem/renderquerybase.cpp:22
// function calls: 2
void CRenderQueryBase::~CRenderQueryBase()
{
	CRenderResource::~CRenderResource(); // 24
	CRenderQueryBase::~CRenderQueryBase(); // 24
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00213A38> rendersystem/renderquerybase.cpp:22
void CRenderQueryBase::~CRenderQueryBase()
{
} /* size: 0 */

