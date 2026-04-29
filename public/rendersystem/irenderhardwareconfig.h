
//
// public/rendersystem/irenderhardwareconfig.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 3
//	class: 1
//

// <001F81B0> ../public/rendersystem/irenderhardwareconfig.h:38
void IRenderHardwareConfig::IRenderHardwareConfig()
{
} /* size: 0 */

// <001F8193> ../public/rendersystem/irenderhardwareconfig.h:38
inline void IRenderHardwareConfig::IRenderHardwareConfig()
{
} /* size: 0 */

// <001F4733> ../public/rendersystem/irenderhardwareconfig.h:38
// member functions: 84
// member variable: 1
// vtable entries: 37
// class size: 8
class IRenderHardwareConfig {
	void ~IRenderHardwareConfig(IRenderHardwareConfig* );
	void IRenderHardwareConfig(IRenderHardwareConfig* , IRenderHardwareConfig& );
	void IRenderHardwareConfig(IRenderHardwareConfig* , const IRenderHardwareConfig& );
	void IRenderHardwareConfig(IRenderHardwareConfig* );
	int ()(void) * * _vptr.IRenderHardwareConfig; /* 0 8 */
	/* ../public/rendersystem/irenderhardwareconfig.h:41 */
	virtual int MaxTextureWidth(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:42 */
	virtual int MaxTextureHeight(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:43 */
	virtual int MaxTextureDepth(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:45 */
	virtual uint64 TextureMemorySize(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:47 */
	virtual int MaxUserClipPlanes(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:51 */
	virtual int GetDXSupportLevel(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:54 */
	virtual int GetMaxDXSupportLevel(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:56 */
	virtual int MaxViewports(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:59 */
	virtual bool ReverseDepth(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:62 */
	virtual const RenderAdapterInfo_t& AdapterInfo(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:65 */
	virtual RenderSystemDLL_t GetRenderSystemDLL(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:68 */
	virtual const char* GetRenderSystemDLLName(const IRenderHardwareConfig* , RenderSystemDLL_t);
	/* ../public/rendersystem/irenderhardwareconfig.h:71 */
	float GetPixelCenter(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:74 */
	virtual bool IsSubrectResolveSupported(const IRenderHardwareConfig* , bool);
	/* ../public/rendersystem/irenderhardwareconfig.h:77 */
	virtual bool IsFastSubrectClearSupported(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:80 */
	virtual bool SupportsMSAAMode(const IRenderHardwareConfig* , ImageFormat, RenderMultisampleType_t);
	/* ../public/rendersystem/irenderhardwareconfig.h:82 */
	virtual RenderMultisampleType_t GetBestMSAAMode(const IRenderHardwareConfig* , ImageFormat, RenderMultisampleType_t);
	/* ../public/rendersystem/irenderhardwareconfig.h:84 */
	virtual bool SupportsCSAAMode(const IRenderHardwareConfig* , ImageFormat, bool, RenderMultisampleType_t, int);
	/* ../public/rendersystem/irenderhardwareconfig.h:86 */
	virtual bool SupportsNonPowerOfTwoDxtTextures(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:88 */
	virtual bool AreSecondaryContextsSupported(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:90 */
	virtual bool SupportsDescriptorSets(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:91 */
	virtual uint32 GetMaxPerStageTextureDescriptors(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:92 */
	virtual uint32 GetMaxPushConstantSize(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:93 */
	virtual uint32 GetUniformBufferAlignment(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:97 */
	virtual bool SupportsBarriers(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:105 */
	virtual int32 GetScenesystemJobCost(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:107 */
	virtual bool SupportsComputeShaders(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:108 */
	virtual bool SupportsAsyncCompute(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:111 */
	virtual bool SupportsDepthOnlyRendering(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:114 */
	virtual bool SupportsShaderClipDistance(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:118 */
	virtual bool HasBroken16BitIndexBuffers(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:122 */
	virtual bool PerformsFramePacing(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:125 */
	virtual bool SupportsSubGroupWaveOps(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:128 */
	virtual bool SupportsCompressedBlockTexelViews(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:130 */
	virtual bool SupportsRayTracing(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:133 */
	virtual bool SupportsDepthBoundsTest(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:136 */
	virtual bool SupportsVulkanDynamicRendering(const IRenderHardwareConfig* );
	/* ../public/rendersystem/irenderhardwareconfig.h:138 */
	virtual bool SupportsBufferDeviceAddress(const IRenderHardwareConfig* );
	void ~IRenderHardwareConfig(class IRenderHardwareConfig *); /* linkage=_ZN21IRenderHardwareConfigD4Ev */
	void IRenderHardwareConfig(class IRenderHardwareConfig *, class IRenderHardwareConfig &); /* linkage=_ZN21IRenderHardwareConfigC4EOS_ */
	void IRenderHardwareConfig(class IRenderHardwareConfig *, const class IRenderHardwareConfig  &); /* linkage=_ZN21IRenderHardwareConfigC4ERKS_ */
	void IRenderHardwareConfig(class IRenderHardwareConfig *); /* linkage=_ZN21IRenderHardwareConfigC4Ev */
	virtual int MaxTextureWidth(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig15MaxTextureWidthEv */
	virtual int MaxTextureHeight(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig16MaxTextureHeightEv */
	virtual int MaxTextureDepth(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig15MaxTextureDepthEv */
	virtual uint64 TextureMemorySize(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig17TextureMemorySizeEv */
	virtual int MaxUserClipPlanes(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig17MaxUserClipPlanesEv */
	virtual int GetDXSupportLevel(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig17GetDXSupportLevelEv */
	virtual int GetMaxDXSupportLevel(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig20GetMaxDXSupportLevelEv */
	virtual int MaxViewports(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig12MaxViewportsEv */
	virtual bool ReverseDepth(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig12ReverseDepthEv */
	virtual const class RenderAdapterInfo_t  & AdapterInfo(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig11AdapterInfoEv */
	virtual enum RenderSystemDLL_t GetRenderSystemDLL(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig18GetRenderSystemDLLEv */
	virtual const char  * GetRenderSystemDLLName(const class IRenderHardwareConfig  *, enum RenderSystemDLL_t); /* linkage=_ZNK21IRenderHardwareConfig22GetRenderSystemDLLNameE17RenderSystemDLL_t */
	float GetPixelCenter(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig14GetPixelCenterEv */
	virtual bool IsSubrectResolveSupported(const class IRenderHardwareConfig  *, bool); /* linkage=_ZNK21IRenderHardwareConfig25IsSubrectResolveSupportedEb */
	virtual bool IsFastSubrectClearSupported(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig27IsFastSubrectClearSupportedEv */
	virtual bool SupportsMSAAMode(const class IRenderHardwareConfig  *, enum ImageFormat, enum RenderMultisampleType_t); /* linkage=_ZNK21IRenderHardwareConfig16SupportsMSAAModeE11ImageFormat23RenderMultisampleType_t */
	virtual enum RenderMultisampleType_t GetBestMSAAMode(const class IRenderHardwareConfig  *, enum ImageFormat, enum RenderMultisampleType_t); /* linkage=_ZNK21IRenderHardwareConfig15GetBestMSAAModeE11ImageFormat23RenderMultisampleType_t */
	virtual bool SupportsCSAAMode(const class IRenderHardwareConfig  *, enum ImageFormat, bool, enum RenderMultisampleType_t, int); /* linkage=_ZNK21IRenderHardwareConfig16SupportsCSAAModeE11ImageFormatb23RenderMultisampleType_ti */
	virtual bool SupportsNonPowerOfTwoDxtTextures(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig32SupportsNonPowerOfTwoDxtTexturesEv */
	virtual bool AreSecondaryContextsSupported(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig29AreSecondaryContextsSupportedEv */
	virtual bool SupportsDescriptorSets(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig22SupportsDescriptorSetsEv */
	virtual uint32 GetMaxPerStageTextureDescriptors(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig32GetMaxPerStageTextureDescriptorsEv */
	virtual uint32 GetMaxPushConstantSize(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig22GetMaxPushConstantSizeEv */
	virtual uint32 GetUniformBufferAlignment(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig25GetUniformBufferAlignmentEv */
	virtual bool SupportsBarriers(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig16SupportsBarriersEv */
	virtual int32 GetScenesystemJobCost(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig21GetScenesystemJobCostEv */
	virtual bool SupportsComputeShaders(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig22SupportsComputeShadersEv */
	virtual bool SupportsAsyncCompute(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig20SupportsAsyncComputeEv */
	virtual bool SupportsDepthOnlyRendering(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig26SupportsDepthOnlyRenderingEv */
	virtual bool SupportsShaderClipDistance(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig26SupportsShaderClipDistanceEv */
	virtual bool HasBroken16BitIndexBuffers(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig26HasBroken16BitIndexBuffersEv */
	virtual bool PerformsFramePacing(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig19PerformsFramePacingEv */
	virtual bool SupportsSubGroupWaveOps(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig23SupportsSubGroupWaveOpsEv */
	virtual bool SupportsCompressedBlockTexelViews(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig33SupportsCompressedBlockTexelViewsEv */
	virtual bool SupportsRayTracing(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig18SupportsRayTracingEv */
	virtual bool SupportsDepthBoundsTest(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig23SupportsDepthBoundsTestEv */
	virtual bool SupportsVulkanDynamicRendering(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig30SupportsVulkanDynamicRenderingEv */
	virtual bool SupportsBufferDeviceAddress(const class IRenderHardwareConfig  *); /* linkage=_ZNK21IRenderHardwareConfig27SupportsBufferDeviceAddressEv */
};

// <03AF4E0F> ../public/rendersystem/irenderhardwareconfig.h:71
inline void IRenderHardwareConfig::GetPixelCenter()
{
} /* size: 0 */

