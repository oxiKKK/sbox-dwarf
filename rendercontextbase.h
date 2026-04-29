
//
// ./rendercontextbase.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 20
//

// <0087A5EF> ./rendercontextbase.h:65
inline RenderChangeFlags_t CHANGE_FLAG_BOUNDRESOURCES(RenderShaderType_t nType)
{
} /* size: 0 */

// <0087A59C> ./rendercontextbase.h:129
void CRenderContextBase::BeginPixEvent(Color c, const char* pEventName)
{
} /* size: 0 */

// <0087A56D> ./rendercontextbase.h:132
void CRenderContextBase::PixSetMarker(Color c, const char* pEventName)
{
} /* size: 0 */

// <0087A510> ./rendercontextbase.h:156
void CRenderContextBase::SetAlphaTestState(bool bEnable, float flAlphaTestRef, RsComparison_t comparisonMode)
{
} /* size: 5 */

// <0087A4D1> ./rendercontextbase.h:172
void CRenderContextBase::SetTilingModeHint(RenderTilingModeHint_t eTilingMode)
{
} /* size: 5 */

// <0087A49D> ./rendercontextbase.h:187
void* CRenderContextBase::GetScratchBuffer()
{
} /* size: 7 */

// <00834B75> ./rendercontextbase.h:206
void CRenderContextBase::CRenderContextBase()
{
} /* size: 0 */

// <00834A8C> ./rendercontextbase.h:207
void CRenderContextBase::~CRenderContextBase()
{
} /* size: 0 */

// <0087A484> ./rendercontextbase.h:223
inline void CRenderContextBase::AssertThreadOwnershipDbg()
{
} /* size: 0 */

// <00A54AB1> ./rendercontextbase.h:227
inline void CRenderContextBase::SetContextFrameCount(int nFrame)
{
} /* size: 0 */

// <00A54A8C> ./rendercontextbase.h:228
inline void CRenderContextBase::SetContextId(int nId)
{
} /* size: 0 */

// <00A54A67> ./rendercontextbase.h:229
inline void CRenderContextBase::SetReleaseTextureReadLock(bool bRelease)
{
} /* size: 0 */

// <00A54A4E> ./rendercontextbase.h:332
inline void CRenderContextBase::GetStreamBuilder()
{
} /* size: 0 */

// <00A54A0C> ./rendercontextbase.h:378
// variables: 2
inline void CRenderContextBase::GetAttributesForModify()
{
	const char   __FUNCTION__; // 28943
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 380
	}
} /* size: 0, variables: 1 */

// <0087A3EF> ./rendercontextbase.h:378
// variables: 2
void CRenderContextBase::GetAttributesForModify()
{
	const char   __FUNCTION__; // 23156
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 380
	}
} /* size: 66, variables: 1 */

// <0087A3AF> ./rendercontextbase.h:406
inline void CRenderContextBase::SetBlendStateInternal(void* pBS, const float* pBlendFactor, uint32 nMultisampleMask)
{
} /* size: 0 */

// <0087A362> ./rendercontextbase.h:440
inline void CRenderContextBase::SetBoundConstantBuffer(RenderShaderType_t nType, ConstantBufferHandle_t hConstantBuffer, uint32 nView, int32 nSlot)
{
} /* size: 0 */

// <0087A31E> ./rendercontextbase.h:448
// variables: 2
inline void CRenderContextBase::RebindConstantBufferIfBound(ConstantBufferHandle_t hConstantBuffer)
{
	{
		int32 nType; // 450
		{
			int32 nSlot; // 452
		}
	}
} /* size: 0 */

// <0087A1DC> ./rendercontextbase.h:463
// variable: 1
// function calls: 2
void CRenderContextBase::BeginPixEvent(const char* pEventName)
{
	Color c; // 465
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 465
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0087A09A> ./rendercontextbase.h:470
// variable: 1
// function calls: 2
void CRenderContextBase::PixSetMarker(const char* pEventName)
{
	Color c; // 472
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 472
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

