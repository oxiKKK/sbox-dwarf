
//
// rendersystem/renderhardwareconfig.cpp
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 45
//

// <001F7FFA> rendersystem/renderhardwareconfig.cpp:26
// function calls: 4
void CRenderHardwareConfig::CRenderHardwareConfig()
{
	IRenderHardwareConfig::IRenderHardwareConfig(); // 26
	memset(void* __dest,
		int __ch,
		size_t __len);  // 28
	memset(void* __dest,
		int __ch,
		size_t __len);  // 29
	memset(void* __dest,
		int __ch,
		size_t __len);  // 30
} /* size: 114, inline expansions: 4 (54 bytes) */

// <001F7FE1> rendersystem/renderhardwareconfig.cpp:26
void CRenderHardwareConfig::CRenderHardwareConfig()
{
} /* size: 0 */

// <001F844C> rendersystem/renderhardwareconfig.cpp:42
// function call: 1
void CRenderHardwareConfig::ForceCapsToDXLevel(HardwareCaps_t* pCaps, int nDxLevel, const HardwareCaps_t& actualCaps)
{
	CRenderHardwareConfig::ForceCapsToDXLevel(
				HardwareCaps_t* pCaps,
				int nDxLevel,
				const HardwareCaps_t& actualCaps);  // 42
} /* size: 0, inline expansions: 1 (0 bytes) */

// <001F7FA4> rendersystem/renderhardwareconfig.cpp:42
void CRenderHardwareConfig::ForceCapsToDXLevel(HardwareCaps_t* pCaps, int nDxLevel, const HardwareCaps_t& actualCaps)
{
} /* size: 0 */

// <001F7C17> rendersystem/renderhardwareconfig.cpp:63
// variables: 2
// function calls: 6
void CRenderHardwareConfig::SetupHardwareCaps(int nDXLevel, const HardwareCaps_t& actualCaps)
{
	const char   __FUNCTION__; // 52467
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 65
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 67
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 77
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 78
	CRenderHardwareConfig::ForceCapsToDXLevel(
				HardwareCaps_t* pCaps,
				int nDxLevel,
				const HardwareCaps_t& actualCaps);  // 42
	CRenderHardwareConfig::ForceCapsToDXLevel(
				HardwareCaps_t* pCaps,
				int nDxLevel,
				const HardwareCaps_t& actualCaps);  // 89
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 98
} /* size: 0, variables: 1, inline expansions: 6 (154 bytes) */

// <001F27FB> rendersystem/renderhardwareconfig.cpp:63
// variables: 2
// function calls: 6
void CRenderHardwareConfig::SetupHardwareCaps(int nDXLevel, const HardwareCaps_t& actualCaps)
{
	const char   __FUNCTION__; // 1028
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 65
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 67
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 77
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 78
	CRenderHardwareConfig::ForceCapsToDXLevel(
				HardwareCaps_t* pCaps,
				int nDxLevel,
				const HardwareCaps_t& actualCaps);  // 42
	CRenderHardwareConfig::ForceCapsToDXLevel(
				HardwareCaps_t* pCaps,
				int nDxLevel,
				const HardwareCaps_t& actualCaps);  // 89
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 98
} /* size: 0, variables: 1, inline expansions: 6 (154 bytes) */

// <001F7BE9> rendersystem/renderhardwareconfig.cpp:107
void CRenderHardwareConfig::GetRenderSystemDLL()
{
} /* size: 11 */

// <001F84E6> rendersystem/renderhardwareconfig.cpp:112
// function call: 1
void CRenderHardwareConfig::GetRenderSystemDLLName(RenderSystemDLL_t dll)
{
	CRenderHardwareConfig::GetRenderSystemDLLName(
				RenderSystemDLL_t dll);  // 112
} /* size: 96, inline expansions: 1 (30 bytes) */

// <001F7BAE> rendersystem/renderhardwareconfig.cpp:112
// variable: 1
void CRenderHardwareConfig::GetRenderSystemDLLName(RenderSystemDLL_t dll)
{
	char s_unknownName; // 114
} /* size: 0, variables: 1 */

// <001F7B71> rendersystem/renderhardwareconfig.cpp:132
void CRenderHardwareConfig::IsSubrectResolveSupported(bool bMSAA)
{
} /* size: 38 */

// <001F7B43> rendersystem/renderhardwareconfig.cpp:137
void CRenderHardwareConfig::IsFastSubrectClearSupported()
{
} /* size: 18 */

// <001F83BC> rendersystem/renderhardwareconfig.cpp:142
void CRenderHardwareConfig::SupportsMSAAMode(ImageFormat fmt, RenderMultisampleType_t nMSAAMode)
{
} /* size: 30 */

// <001F7A1D> rendersystem/renderhardwareconfig.cpp:162
// variable: 1
// function call: 1
void CRenderHardwareConfig::GetBestMSAAMode(ImageFormat fmt, RenderMultisampleType_t nMSAAModeMax)
{
	int nMode; // 164
	CRenderHardwareConfig::SupportsMSAAMode(
			ImageFormat fmt,
			RenderMultisampleType_t nMSAAMode);  // 180
} /* size: 181, variables: 1, inline expansions: 1 (27 bytes) */

// <001F796F> rendersystem/renderhardwareconfig.cpp:187
void CRenderHardwareConfig::SupportsCSAAMode(ImageFormat fmt, bool bWindowed, RenderMultisampleType_t nMSAAMode, int nQualityLevel)
{
} /* size: 26 */

// <001F7941> rendersystem/renderhardwareconfig.cpp:194
void CRenderHardwareConfig::MaxTextureWidth()
{
} /* size: 11 */

// <001F7913> rendersystem/renderhardwareconfig.cpp:199
void CRenderHardwareConfig::MaxTextureHeight()
{
} /* size: 11 */

// <001F78E5> rendersystem/renderhardwareconfig.cpp:204
void CRenderHardwareConfig::TextureMemorySize()
{
} /* size: 12 */

// <001F78B7> rendersystem/renderhardwareconfig.cpp:209
void CRenderHardwareConfig::MaxUserClipPlanes()
{
} /* size: 11 */

// <001F7889> rendersystem/renderhardwareconfig.cpp:214
void CRenderHardwareConfig::MaxTextureDepth()
{
} /* size: 11 */

// <001F8423> rendersystem/renderhardwareconfig.cpp:219
void CRenderHardwareConfig::GetDXSupportLevel()
{
} /* size: 11 */

// <001F7842> rendersystem/renderhardwareconfig.cpp:225
void CRenderHardwareConfig::GetMaxDXSupportLevel()
{
} /* size: 11 */

// <001F7814> rendersystem/renderhardwareconfig.cpp:231
void CRenderHardwareConfig::MaxViewports()
{
} /* size: 11 */

// <001F77E6> rendersystem/renderhardwareconfig.cpp:236
void CRenderHardwareConfig::ReverseDepth()
{
} /* size: 15 */

// <001F77B8> rendersystem/renderhardwareconfig.cpp:241
void CRenderHardwareConfig::SupportsHardwareCommandBuffers()
{
} /* size: 0 */

// <001F778A> rendersystem/renderhardwareconfig.cpp:246
void CRenderHardwareConfig::SupportsAlphaToOne()
{
} /* size: 18 */

// <001F775C> rendersystem/renderhardwareconfig.cpp:251
void CRenderHardwareConfig::SupportsNonPowerOfTwoDxtTextures()
{
} /* size: 18 */

// <001F772E> rendersystem/renderhardwareconfig.cpp:256
void CRenderHardwareConfig::AreSecondaryContextsSupported()
{
} /* size: 18 */

// <001F7700> rendersystem/renderhardwareconfig.cpp:261
void CRenderHardwareConfig::SupportsDescriptorSets()
{
} /* size: 15 */

// <001F76D2> rendersystem/renderhardwareconfig.cpp:266
void CRenderHardwareConfig::GetMaxPerStageTextureDescriptors()
{
} /* size: 11 */

// <001F76A4> rendersystem/renderhardwareconfig.cpp:271
void CRenderHardwareConfig::GetMaxPushConstantSize()
{
} /* size: 11 */

// <001F7676> rendersystem/renderhardwareconfig.cpp:276
void CRenderHardwareConfig::GetUniformBufferAlignment()
{
} /* size: 11 */

// <001F7648> rendersystem/renderhardwareconfig.cpp:281
void CRenderHardwareConfig::SupportsBarriers()
{
} /* size: 17 */

// <001F761A> rendersystem/renderhardwareconfig.cpp:286
void CRenderHardwareConfig::GetScenesystemJobCost()
{
} /* size: 11 */

// <001F75B4> rendersystem/renderhardwareconfig.cpp:291
// function call: 1
void CRenderHardwareConfig::SupportsComputeShaders()
{
	CRenderHardwareConfig::GetDXSupportLevel(); // 294
} /* size: 78, inline expansions: 1 (6 bytes) */

// <001F7586> rendersystem/renderhardwareconfig.cpp:297
void CRenderHardwareConfig::SupportsAsyncCompute()
{
} /* size: 18 */

// <001F7558> rendersystem/renderhardwareconfig.cpp:302
void CRenderHardwareConfig::SupportsDepthOnlyRendering()
{
} /* size: 18 */

// <001F752A> rendersystem/renderhardwareconfig.cpp:307
void CRenderHardwareConfig::SupportsShaderClipDistance()
{
} /* size: 18 */

// <001F74FC> rendersystem/renderhardwareconfig.cpp:312
void CRenderHardwareConfig::HasBroken16BitIndexBuffers()
{
} /* size: 18 */

// <001F74CE> rendersystem/renderhardwareconfig.cpp:317
void CRenderHardwareConfig::PerformsFramePacing()
{
} /* size: 15 */

// <001F74A0> rendersystem/renderhardwareconfig.cpp:322
void CRenderHardwareConfig::SupportsSubGroupWaveOps()
{
} /* size: 15 */

// <001F7472> rendersystem/renderhardwareconfig.cpp:327
void CRenderHardwareConfig::SupportsCompressedBlockTexelViews()
{
} /* size: 18 */

// <001F7444> rendersystem/renderhardwareconfig.cpp:332
void CRenderHardwareConfig::SupportsRayTracing()
{
} /* size: 17 */

// <001F7416> rendersystem/renderhardwareconfig.cpp:337
void CRenderHardwareConfig::SupportsDepthBoundsTest()
{
} /* size: 18 */

// <001F73E8> rendersystem/renderhardwareconfig.cpp:342
void CRenderHardwareConfig::SupportsVulkanDynamicRendering()
{
} /* size: 18 */

// <001F73BA> rendersystem/renderhardwareconfig.cpp:348
void CRenderHardwareConfig::SupportsBufferDeviceAddress()
{
} /* size: 18 */

