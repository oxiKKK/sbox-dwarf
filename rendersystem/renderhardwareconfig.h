
//
// rendersystem/renderhardwareconfig.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	function: 1
//	class: 1
//	struct: 1
//

// <001D6469> rendersystem/renderhardwareconfig.h:39
// member variables: 51
// struct size: 776
struct HardwareCaps_t : public RenderAdapterInfo_t {
public:
	/* struct RenderAdapterInfo_t <ancestor>; */ /* 0 676 */
	int m_MaxTextureWidth; /* 676 4 */
	int m_MaxTextureHeight; /* 680 4 */
	int m_MaxTextureDepth; /* 684 4 */
	int m_MaxCubemapDimension; /* 688 4 */
	int m_MaxShaderModel; /* 692 4 */
	uint64 m_TextureMemorySize; /* 696 8 */
	int m_MaxUserClipPlanes; /* 704 4 */
	RenderSystemDLL_t m_RenderSystemDLL; /* 708 4 */
	long unsigned int m_AlphaToCoverageState; /* 712 8 */
	long unsigned int m_AlphaToCoverageEnableValue; /* 720 8 */
	long unsigned int m_AlphaToCoverageDisableValue; /* 728 8 */
	int m_nMaxViewports; /* 736 4 */
	int m_MaxSimultaneousRenderTargets; /* 740 4 */
	float m_flPixelCenter; /* 744 4 */
	int m_nTextureBitsAlignment; /* 748 4 */
	uint32 m_nMaxPerStageTextureDescriptors; /* 752 4 */
	uint32 m_nMaxPushConstantSize; /* 756 4 */
	uint32 m_nUniformBufferAlignment; /* 760 4 */
	int32 m_nScenesystemJobCost; /* 764 4 */
	bool m_bDeviceOk:1; /* 768: 0 1 */
	bool m_ZBiasAndSlopeScaledDepthBiasSupported:1; /* 768: 1 1 */
	bool m_bFogColorSpecifiedInLinearSpace:1; /* 768: 2 1 */
	bool m_bFogColorAlwaysLinearSpace:1; /* 768: 3 1 */
	bool m_bSupportsAlphaToCoverage:1; /* 768: 4 1 */
	bool m_bScissorSupported:1; /* 768: 5 1 */
	bool m_bSupportsFloat32RenderTargets:1; /* 768: 6 1 */
	bool m_bSupportsTessellation:1; /* 768: 7 1 */
	bool m_bReverseDepth:1; /* 769: 0 1 */
	bool m_bNonAASubrectResolveSupported:1; /* 769: 1 1 */
	bool m_bAASubrectResolveSupported:1; /* 769: 2 1 */
	bool m_bFastSubrectClearSupported:1; /* 769: 3 1 */
	bool m_bSupportsHardwareCommandBuffers:1; /* 769: 4 1 */
	bool m_bSupportsNonPowerOfTwoDxtTextures:1; /* 769: 5 1 */
	bool m_bSupportsSecondaryContexts:1; /* 769: 6 1 */
	bool m_bSupportsMultiViewConstantBuffers:1; /* 769: 7 1 */
	bool m_bSupportsDescriptorSets:1; /* 770: 0 1 */
	bool m_bSupportsBarriers:1; /* 770: 1 1 */
	bool m_bSupportsComputeShaders:1; /* 770: 2 1 */
	bool m_bSupportsAsyncCompute:1; /* 770: 3 1 */
	bool m_bSupportsDepthOnlyRendering:1; /* 770: 4 1 */
	bool m_bSupportsShaderClipDistance:1; /* 770: 5 1 */
	bool m_bHasBroken16BitIndexBuffers:1; /* 770: 6 1 */
	bool m_bPerformsFramePacing:1; /* 770: 7 1 */
	bool m_bSupportsSubGroupWaveOps:1; /* 771: 0 1 */
	bool m_bSupportsRayTracing:1; /* 771: 1 1 */
	bool m_bSupportsDepthBoundsTest:1; /* 771: 2 1 */
	bool m_bSupportsVulkanDynamicRendering:1; /* 771: 3 1 */
	bool m_bSupportsBufferDeviceAddress:1; /* 771: 4 1 */
	bool m_bSupportsCompressedBlockTexelViews:1; /* 771: 5 1 */
	bool m_bSupportsAlphaToOne:1; /* 771: 6 1 */
};

// <001F5B05> rendersystem/renderhardwareconfig.h:107
// member functions: 98
// member variables: 4
// vtable entries: 37
// class size: 2,336
class CRenderHardwareConfig : public IRenderHardwareConfig {
public:
	/* class IRenderHardwareConfig <ancestor>; */ /* 0 8 */
	void ~CRenderHardwareConfig(CRenderHardwareConfig* );
	void CRenderHardwareConfig(CRenderHardwareConfig* , CRenderHardwareConfig& );
	void CRenderHardwareConfig(CRenderHardwareConfig* , const CRenderHardwareConfig& );
	/* rendersystem/renderhardwareconfig.cpp:26 */
	void CRenderHardwareConfig(CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:63 */
	void SetupHardwareCaps(CRenderHardwareConfig* , int, const HardwareCaps_t& );
	/* rendersystem/renderhardwareconfig.h:114 */
	HardwareCaps_t& ActualCapsForEdit(CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.h:115 */
	HardwareCaps_t& CapsForEdit(CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:194 */
	virtual int MaxTextureWidth(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:199 */
	virtual int MaxTextureHeight(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:204 */
	virtual uint64 TextureMemorySize(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:209 */
	virtual int MaxUserClipPlanes(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:219 */
	virtual int GetDXSupportLevel(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:225 */
	virtual int GetMaxDXSupportLevel(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:214 */
	virtual int MaxTextureDepth(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:231 */
	virtual int MaxViewports(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:236 */
	virtual bool ReverseDepth(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:107 */
	virtual RenderSystemDLL_t GetRenderSystemDLL(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:112 */
	virtual const char* GetRenderSystemDLLName(const CRenderHardwareConfig* , RenderSystemDLL_t);
	/* rendersystem/renderhardwareconfig.cpp:132 */
	virtual bool IsSubrectResolveSupported(const CRenderHardwareConfig* , bool);
	/* rendersystem/renderhardwareconfig.cpp:137 */
	virtual bool IsFastSubrectClearSupported(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:142 */
	virtual bool SupportsMSAAMode(const CRenderHardwareConfig* , ImageFormat, RenderMultisampleType_t);
	/* rendersystem/renderhardwareconfig.cpp:162 */
	virtual RenderMultisampleType_t GetBestMSAAMode(const CRenderHardwareConfig* , ImageFormat, RenderMultisampleType_t);
	/* rendersystem/renderhardwareconfig.cpp:187 */
	virtual bool SupportsCSAAMode(const CRenderHardwareConfig* , ImageFormat, bool, RenderMultisampleType_t, int);
	/* rendersystem/renderhardwareconfig.cpp:251 */
	virtual bool SupportsNonPowerOfTwoDxtTextures(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:256 */
	virtual bool AreSecondaryContextsSupported(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:261 */
	virtual bool SupportsDescriptorSets(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:266 */
	virtual uint32 GetMaxPerStageTextureDescriptors(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:271 */
	virtual uint32 GetMaxPushConstantSize(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:276 */
	virtual uint32 GetUniformBufferAlignment(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:281 */
	virtual bool SupportsBarriers(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:286 */
	virtual int32 GetScenesystemJobCost(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:291 */
	virtual bool SupportsComputeShaders(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:297 */
	virtual bool SupportsAsyncCompute(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:302 */
	virtual bool SupportsDepthOnlyRendering(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:307 */
	virtual bool SupportsShaderClipDistance(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:312 */
	virtual bool HasBroken16BitIndexBuffers(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.h:149 */
	const HardwareCaps_t& ActualCaps(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.h:150 */
	const HardwareCaps_t& Caps(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.h:151 */
	virtual const RenderAdapterInfo_t& AdapterInfo(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:317 */
	virtual bool PerformsFramePacing(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:322 */
	virtual bool SupportsSubGroupWaveOps(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:327 */
	virtual bool SupportsCompressedBlockTexelViews(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:332 */
	virtual bool SupportsRayTracing(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:337 */
	virtual bool SupportsDepthBoundsTest(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:342 */
	virtual bool SupportsVulkanDynamicRendering(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:348 */
	virtual bool SupportsBufferDeviceAddress(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:241 */
	bool SupportsHardwareCommandBuffers(const CRenderHardwareConfig* );
	/* rendersystem/renderhardwareconfig.cpp:246 */
	bool SupportsAlphaToOne(const CRenderHardwareConfig* );
protected:
	/* rendersystem/renderhardwareconfig.cpp:42 */
	void ForceCapsToDXLevel(CRenderHardwareConfig* , HardwareCaps_t* , int, const HardwareCaps_t& );
	HardwareCaps_t m_ActualCaps; /* 8 776 */
	HardwareCaps_t m_Caps; /* 784 776 */
	HardwareCaps_t m_UnOverriddenCaps; /* 1560 776 */
	void ~CRenderHardwareConfig(class CRenderHardwareConfig *); /* linkage=_ZN21CRenderHardwareConfigD4Ev */
	void CRenderHardwareConfig(class CRenderHardwareConfig *, class CRenderHardwareConfig &); /* linkage=_ZN21CRenderHardwareConfigC4EOS_ */
	void CRenderHardwareConfig(class CRenderHardwareConfig *, const class CRenderHardwareConfig  &); /* linkage=_ZN21CRenderHardwareConfigC4ERKS_ */
	void CRenderHardwareConfig(class CRenderHardwareConfig *); /* linkage=_ZN21CRenderHardwareConfigC4Ev */
	void SetupHardwareCaps(class CRenderHardwareConfig *, int, const class HardwareCaps_t  &); /* linkage=_ZN21CRenderHardwareConfig17SetupHardwareCapsEiRK14HardwareCaps_t */
	class HardwareCaps_t & ActualCapsForEdit(class CRenderHardwareConfig *); /* linkage=_ZN21CRenderHardwareConfig17ActualCapsForEditEv */
	class HardwareCaps_t & CapsForEdit(class CRenderHardwareConfig *); /* linkage=_ZN21CRenderHardwareConfig11CapsForEditEv */
	virtual int MaxTextureWidth(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig15MaxTextureWidthEv */
	virtual int MaxTextureHeight(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig16MaxTextureHeightEv */
	virtual uint64 TextureMemorySize(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig17TextureMemorySizeEv */
	virtual int MaxUserClipPlanes(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig17MaxUserClipPlanesEv */
	/* <1f8423> rendersystem/renderhardwareconfig.cpp:219 */
	virtual int GetDXSupportLevel(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig17GetDXSupportLevelEv */
	virtual int GetMaxDXSupportLevel(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig20GetMaxDXSupportLevelEv */
	virtual int MaxTextureDepth(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig15MaxTextureDepthEv */
	virtual int MaxViewports(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig12MaxViewportsEv */
	virtual bool ReverseDepth(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig12ReverseDepthEv */
	virtual enum RenderSystemDLL_t GetRenderSystemDLL(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig18GetRenderSystemDLLEv */
	/* <1f84e6> rendersystem/renderhardwareconfig.cpp:112 */
	virtual const char  * GetRenderSystemDLLName(const class CRenderHardwareConfig  *, enum RenderSystemDLL_t); /* linkage=_ZNK21CRenderHardwareConfig22GetRenderSystemDLLNameE17RenderSystemDLL_t */
	virtual bool IsSubrectResolveSupported(const class CRenderHardwareConfig  *, bool); /* linkage=_ZNK21CRenderHardwareConfig25IsSubrectResolveSupportedEb */
	virtual bool IsFastSubrectClearSupported(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig27IsFastSubrectClearSupportedEv */
	/* <1f83bc> rendersystem/renderhardwareconfig.cpp:142 */
	virtual bool SupportsMSAAMode(const class CRenderHardwareConfig  *, enum ImageFormat, enum RenderMultisampleType_t); /* linkage=_ZNK21CRenderHardwareConfig16SupportsMSAAModeE11ImageFormat23RenderMultisampleType_t */
	virtual enum RenderMultisampleType_t GetBestMSAAMode(const class CRenderHardwareConfig  *, enum ImageFormat, enum RenderMultisampleType_t); /* linkage=_ZNK21CRenderHardwareConfig15GetBestMSAAModeE11ImageFormat23RenderMultisampleType_t */
	virtual bool SupportsCSAAMode(const class CRenderHardwareConfig  *, enum ImageFormat, bool, enum RenderMultisampleType_t, int); /* linkage=_ZNK21CRenderHardwareConfig16SupportsCSAAModeE11ImageFormatb23RenderMultisampleType_ti */
	virtual bool SupportsNonPowerOfTwoDxtTextures(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig32SupportsNonPowerOfTwoDxtTexturesEv */
	virtual bool AreSecondaryContextsSupported(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig29AreSecondaryContextsSupportedEv */
	virtual bool SupportsDescriptorSets(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig22SupportsDescriptorSetsEv */
	virtual uint32 GetMaxPerStageTextureDescriptors(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig32GetMaxPerStageTextureDescriptorsEv */
	virtual uint32 GetMaxPushConstantSize(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig22GetMaxPushConstantSizeEv */
	virtual uint32 GetUniformBufferAlignment(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig25GetUniformBufferAlignmentEv */
	virtual bool SupportsBarriers(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig16SupportsBarriersEv */
	virtual int32 GetScenesystemJobCost(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig21GetScenesystemJobCostEv */
	virtual bool SupportsComputeShaders(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig22SupportsComputeShadersEv */
	virtual bool SupportsAsyncCompute(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig20SupportsAsyncComputeEv */
	virtual bool SupportsDepthOnlyRendering(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig26SupportsDepthOnlyRenderingEv */
	virtual bool SupportsShaderClipDistance(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig26SupportsShaderClipDistanceEv */
	virtual bool HasBroken16BitIndexBuffers(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig26HasBroken16BitIndexBuffersEv */
	const class HardwareCaps_t  & ActualCaps(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig10ActualCapsEv */
	const class HardwareCaps_t  & Caps(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig4CapsEv */
	/* <a5e318> ./renderhardwareconfig.h:151 */
	virtual const class RenderAdapterInfo_t  & AdapterInfo(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig11AdapterInfoEv */
	virtual bool PerformsFramePacing(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig19PerformsFramePacingEv */
	virtual bool SupportsSubGroupWaveOps(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig23SupportsSubGroupWaveOpsEv */
	virtual bool SupportsCompressedBlockTexelViews(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig33SupportsCompressedBlockTexelViewsEv */
	virtual bool SupportsRayTracing(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig18SupportsRayTracingEv */
	virtual bool SupportsDepthBoundsTest(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig23SupportsDepthBoundsTestEv */
	virtual bool SupportsVulkanDynamicRendering(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig30SupportsVulkanDynamicRenderingEv */
	virtual bool SupportsBufferDeviceAddress(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig27SupportsBufferDeviceAddressEv */
	bool SupportsHardwareCommandBuffers(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig30SupportsHardwareCommandBuffersEv */
	bool SupportsAlphaToOne(const class CRenderHardwareConfig  *); /* linkage=_ZNK21CRenderHardwareConfig18SupportsAlphaToOneEv */
	/* <1f844c> rendersystem/renderhardwareconfig.cpp:42 */
	void ForceCapsToDXLevel(class CRenderHardwareConfig *, class HardwareCaps_t *, int, const class HardwareCaps_t  &); /* linkage=_ZN21CRenderHardwareConfig18ForceCapsToDXLevelEP14HardwareCaps_tiRKS0_ */
};

// <001F81C7> rendersystem/renderhardwareconfig.h:151
void CRenderHardwareConfig::AdapterInfo()
{
} /* size: 12 */

