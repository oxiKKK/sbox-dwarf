
//
// public/scenesystem/scratchrendertargetinfo.h
//
//	referenced by: libengine2.so
//
//	functions: 6
//	struct: 1
//

// <0055D92A> ../public/scenesystem/scratchrendertargetinfo.h:7
// member functions: 7
// member variables: 7
// struct size: 40
struct SceneScratchRenderTargetInfo_t {
	/* ../public/scenesystem/scratchrendertargetinfo.h:37 */
	union {
		int m_nWidth; /* 0 4 */
		int m_nDivisor; /* 0 4 */
	};
	/* ../public/scenesystem/scratchrendertargetinfo.h:11 */
	void SceneScratchRenderTargetInfo_t(SceneScratchRenderTargetInfo_t* );
	/* ../public/scenesystem/scratchrendertargetinfo.h:12 */
	void SceneScratchRenderTargetInfo_t(SceneScratchRenderTargetInfo_t* , int, int, ImageFormat, RenderMultisampleType_t, RuntimeTextureSpecificationFlags_t);
	/* ../public/scenesystem/scratchrendertargetinfo.h:13 */
	void SceneScratchRenderTargetInfo_t(SceneScratchRenderTargetInfo_t* , SwapChainHandle_t, int, ImageFormat, RenderMultisampleType_t, RuntimeTextureSpecificationFlags_t);
	/* ../public/scenesystem/scratchrendertargetinfo.h:14 */
	void SceneScratchRenderTargetInfo_t(SceneScratchRenderTargetInfo_t* , ImageFormat, RenderMultisampleType_t, RuntimeTextureSpecificationFlags_t);
	/* ../public/scenesystem/scratchrendertargetinfo.h:16 */
	void SetSize(SceneScratchRenderTargetInfo_t* , int, int);
	/* ../public/scenesystem/scratchrendertargetinfo.h:23 */
	void SetSize(SceneScratchRenderTargetInfo_t* , SwapChainHandle_t, int);
	/* ../public/scenesystem/scratchrendertargetinfo.h:30 */
	void SetSizeToDesktopSize(SceneScratchRenderTargetInfo_t* );
	SceneScratchRenderTargetSize_t m_Size; /* 0 4 */
	union {
		int m_nWidth; /* 4 4 */
		int m_nDivisor; /* 4 4 */
	}; /* 4 4 */
	int m_nHeight; /* 8 4 */
	SwapChainHandle_t m_hSwapChain; /* 16 8 */
	ImageFormat m_Format; /* 24 4 */
	RenderMultisampleType_t m_nMultisampleType; /* 28 4 */
	RuntimeTextureSpecificationFlags_t m_nTextureSpecFlags; /* 32 4 */
};

// <02F2051D> ../public/scenesystem/scratchrendertargetinfo.h:48
void SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t()
{
} /* size: 0 */

// <02F20501> ../public/scenesystem/scratchrendertargetinfo.h:48
inline void SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t()
{
} /* size: 0 */

// <03754A9F> ../public/scenesystem/scratchrendertargetinfo.h:55
void SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(int nWidth, int nHeight, ImageFormat fmt, RenderMultisampleType_t nMultisampleType, RuntimeTextureSpecificationFlags_t nTextureSpecFlags)
{
} /* size: 0 */

// <03754A47> ../public/scenesystem/scratchrendertargetinfo.h:55
inline void SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(int nWidth, int nHeight, ImageFormat fmt, RenderMultisampleType_t nMultisampleType, RuntimeTextureSpecificationFlags_t nTextureSpecFlags)
{
} /* size: 0 */

// <005A6E62> ../public/scenesystem/scratchrendertargetinfo.h:66
void SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(SwapChainHandle_t hSwapChain, int nDivisor, ImageFormat fmt, RenderMultisampleType_t nMultisampleType, RuntimeTextureSpecificationFlags_t nTextureSpecFlags)
{
} /* size: 0 */

// <005A6E0A> ../public/scenesystem/scratchrendertargetinfo.h:66
inline void SceneScratchRenderTargetInfo_t::SceneScratchRenderTargetInfo_t(SwapChainHandle_t hSwapChain, int nDivisor, ImageFormat fmt, RenderMultisampleType_t nMultisampleType, RuntimeTextureSpecificationFlags_t nTextureSpecFlags)
{
} /* size: 0 */

