
//
// public/rendersystem/renderdevicetypes.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 65
//	classes: 10
//	structs: 33
//	unions: 2
//

// <000999ED> ../public/rendersystem/renderdevicetypes.h:66
// member variables: 11
// struct size: 676
struct RenderAdapterInfo_t {
	char m_pDriverName[512]; /* 0 512 */
	unsigned int m_VendorID; /* 512 4 */
	unsigned int m_DeviceID; /* 516 4 */
	unsigned int m_SubSysID; /* 520 4 */
	unsigned int m_Revision; /* 524 4 */
	int m_nDXSupportLevel; /* 528 4 */
	int m_nMinDXSupportLevel; /* 532 4 */
	int m_nMaxDXSupportLevel; /* 536 4 */
	unsigned int m_nDriverVersionHigh; /* 540 4 */
	unsigned int m_nDriverVersionLow; /* 544 4 */
	char m_pDriverVersion[128]; /* 548 128 */
};

// <0019B347> ../public/rendersystem/renderdevicetypes.h:211
// member functions: 3
// member variables: 7
// struct size: 28
struct RenderDisplayMode_t {
	/* ../public/rendersystem/renderdevicetypes.h:213 */
	void RenderDisplayMode_t(RenderDisplayMode_t* );
	/* ../public/rendersystem/renderdevicetypes.h:215 */
	float GetRefreshRate(const RenderDisplayMode_t* );
	int m_nVersion; /* 0 4 */
	int m_nWidth; /* 4 4 */
	int m_nHeight; /* 8 4 */
	ImageFormat m_Format; /* 12 4 */
	int m_nRefreshRateNumerator; /* 16 4 */
	int m_nRefreshRateDenominator; /* 20 4 */
	uint32 m_nFlags; /* 24 4 */
	/* ../public/rendersystem/renderdevicetypes.h:224 */
	bool IsValid(const RenderDisplayMode_t* );
};

// <02F2A0E0> ../public/rendersystem/renderdevicetypes.h:213
void RenderDisplayMode_t::RenderDisplayMode_t()
{
} /* size: 0 */

// <02F2A0C7> ../public/rendersystem/renderdevicetypes.h:213
inline void RenderDisplayMode_t::RenderDisplayMode_t()
{
} /* size: 0 */

// <0177D52E> ../public/rendersystem/renderdevicetypes.h:215
inline void RenderDisplayMode_t::GetRefreshRate()
{
} /* size: 0 */

// <005AB245> ../public/rendersystem/renderdevicetypes.h:224
inline void RenderDisplayMode_t::IsValid()
{
} /* size: 0 */

// <0019B434> ../public/rendersystem/renderdevicetypes.h:237
// member functions: 21
// member variables: 9
// struct size: 48
struct RenderDeviceInfo_t {
	/* ../public/rendersystem/renderdevicetypes.h:239 */
	void RenderDeviceInfo_t(RenderDeviceInfo_t* );
	int m_nVersion; /* 0 4 */
	RenderDisplayMode_t m_DisplayMode; /* 4 28 */
	int m_nBackBufferCount; /* 32 4 */
	RenderMultisampleType_t m_nMultisampleType; /* 36 4 */
	uint8 m_nModeUsage; /* 40 1 */
	bool m_bUseStencil; /* 41 1 */
	bool m_bWaitForVSync; /* 42 1 */
	bool m_bUsingMultipleWindows; /* 43 1 */
	bool m_bIsMainWindow; /* 44 1 */
	/* ../public/rendersystem/renderdevicetypes.h:257 */
	bool HasUsageType(const RenderDeviceInfo_t* );
	/* ../public/rendersystem/renderdevicetypes.h:262 */
	bool IsExclusiveFullscreen(const RenderDeviceInfo_t* );
	/* ../public/rendersystem/renderdevicetypes.h:266 */
	bool IsCooperativeFullscreen(const RenderDeviceInfo_t* );
	/* ../public/rendersystem/renderdevicetypes.h:270 */
	bool IsBorderlessWindow(const RenderDeviceInfo_t* );
	/* ../public/rendersystem/renderdevicetypes.h:274 */
	bool IsBorderedWindow(const RenderDeviceInfo_t* );
	/* ../public/rendersystem/renderdevicetypes.h:278 */
	bool IsHighDPI(const RenderDeviceInfo_t* );
	/* ../public/rendersystem/renderdevicetypes.h:283 */
	bool HasWindowBorder(const RenderDeviceInfo_t* );
	/* ../public/rendersystem/renderdevicetypes.h:288 */
	bool HasWindowedState(const RenderDeviceInfo_t* );
	/* ../public/rendersystem/renderdevicetypes.h:292 */
	bool DoesCoverMonitor(const RenderDeviceInfo_t* );
	/* ../public/rendersystem/renderdevicetypes.h:298 */
	void SetExclusiveFullscreen(RenderDeviceInfo_t* );
	/* ../public/rendersystem/renderdevicetypes.h:303 */
	void SetCooperativeFullscreen(RenderDeviceInfo_t* );
	/* ../public/rendersystem/renderdevicetypes.h:308 */
	void SetBorderlessWindow(RenderDeviceInfo_t* );
	/* ../public/rendersystem/renderdevicetypes.h:313 */
	void SetBorderedWindow(RenderDeviceInfo_t* );
	/* ../public/rendersystem/renderdevicetypes.h:318 */
	void SetHighDPI(RenderDeviceInfo_t* , bool);
	/* ../public/rendersystem/renderdevicetypes.h:329 */
	void GetSettingsFlags(const RenderDeviceInfo_t* , bool* , bool* , bool* , bool* );
	/* ../public/rendersystem/renderdevicetypes.h:362 */
	void SetSettingsFlags(RenderDeviceInfo_t* , bool, bool, bool, bool);
	/* ../public/rendersystem/renderdevicetypes.h:387 */
	const char* GetModeName(const RenderDeviceInfo_t* );
	/* ../public/rendersystem/renderdevicetypes.h:409 */
	uint32 DemoteExclusiveFullscreen(RenderDeviceInfo_t* );
	/* ../public/rendersystem/renderdevicetypes.h:420 */
	void RestoreExclusiveFullscreen(RenderDeviceInfo_t* , uint32);
	/* ../public/rendersystem/renderdevicetypes.h:430 */
	int GetWindowFlags(const RenderDeviceInfo_t* );
};

// <02F2A0B0> ../public/rendersystem/renderdevicetypes.h:239
void RenderDeviceInfo_t::RenderDeviceInfo_t()
{
} /* size: 0 */

// <02F2A097> ../public/rendersystem/renderdevicetypes.h:239
inline void RenderDeviceInfo_t::RenderDeviceInfo_t()
{
} /* size: 0 */

// <001AC4E4> ../public/rendersystem/renderdevicetypes.h:257
inline void RenderDeviceInfo_t::HasUsageType()
{
} /* size: 0 */

// <007D86BB> ../public/rendersystem/renderdevicetypes.h:262
inline void RenderDeviceInfo_t::IsExclusiveFullscreen()
{
} /* size: 0 */

// <007D86A2> ../public/rendersystem/renderdevicetypes.h:266
inline void RenderDeviceInfo_t::IsCooperativeFullscreen()
{
} /* size: 0 */

// <007D8689> ../public/rendersystem/renderdevicetypes.h:278
inline void RenderDeviceInfo_t::IsHighDPI()
{
} /* size: 0 */

// <007D8670> ../public/rendersystem/renderdevicetypes.h:283
inline void RenderDeviceInfo_t::HasWindowBorder()
{
} /* size: 0 */

// <007D8657> ../public/rendersystem/renderdevicetypes.h:292
inline void RenderDeviceInfo_t::DoesCoverMonitor()
{
} /* size: 0 */

// <0177D515> ../public/rendersystem/renderdevicetypes.h:298
inline void RenderDeviceInfo_t::SetExclusiveFullscreen()
{
} /* size: 0 */

// <0177D4FC> ../public/rendersystem/renderdevicetypes.h:303
inline void RenderDeviceInfo_t::SetCooperativeFullscreen()
{
} /* size: 0 */

// <0177D4E3> ../public/rendersystem/renderdevicetypes.h:308
inline void RenderDeviceInfo_t::SetBorderlessWindow()
{
} /* size: 0 */

// <0177D4CA> ../public/rendersystem/renderdevicetypes.h:313
inline void RenderDeviceInfo_t::SetBorderedWindow()
{
} /* size: 0 */

// <0177D4A4> ../public/rendersystem/renderdevicetypes.h:318
inline void RenderDeviceInfo_t::SetHighDPI(bool bHighDPI)
{
} /* size: 0 */

// <0177D457> ../public/rendersystem/renderdevicetypes.h:362
inline void RenderDeviceInfo_t::SetSettingsFlags(bool bFullscreen, bool bCoopFullscreen, bool bNoBorder, bool bHighDPI)
{
} /* size: 0 */

// <005AB1D4> ../public/rendersystem/renderdevicetypes.h:409
// variable: 1
inline void RenderDeviceInfo_t::DemoteExclusiveFullscreen()
{
	uint32 nOldUsage; // 411
} /* size: 0, variables: 1 */

// <007D855A> ../public/rendersystem/renderdevicetypes.h:430
// variable: 1
inline void RenderDeviceInfo_t::GetWindowFlags()
{
	int nFlags; // 432
} /* size: 0, variables: 1 */

// <03475187> ../public/rendersystem/renderdevicetypes.h:469
void RenderContextCreationInfo_t::RenderContextCreationInfo_t()
{
} /* size: 0 */

// <0347516A> ../public/rendersystem/renderdevicetypes.h:469
inline void RenderContextCreationInfo_t::RenderContextCreationInfo_t()
{
} /* size: 0 */

// <007BC80C> ../public/rendersystem/renderdevicetypes.h:469
// member variables: 2
// struct size: 8
struct RenderContextCreationInfo_t {
	RenderPassHandle_t m_hRenderPass; /* 0 4 */
	int m_nSubPass; /* 4 4 */
};

// <004262D5> ../public/rendersystem/renderdevicetypes.h:568
void RenderBufferBarrier_t::RenderBufferBarrier_t()
{
} /* size: 0 */

// <004262B8> ../public/rendersystem/renderdevicetypes.h:568
inline void RenderBufferBarrier_t::RenderBufferBarrier_t()
{
} /* size: 0 */

// <00099C31> ../public/rendersystem/renderdevicetypes.h:568
// member variables: 5
// struct size: 24
struct RenderBufferBarrier_t {
	RenderBufferHandle_t hBuffer; /* 0 8 */
	RenderBarrierPipelineStageFlags_t srcStage; /* 8 4 */
	RenderBarrierPipelineStageFlags_t dstStage; /* 12 4 */
	RenderBarrierAccessFlags_t srcFlags; /* 16 4 */
	RenderBarrierAccessFlags_t dstFlags; /* 20 4 */
};

// <00426212> ../public/rendersystem/renderdevicetypes.h:581
void RenderUAVBarrier_t::RenderUAVBarrier_t()
{
} /* size: 0 */

// <004261F5> ../public/rendersystem/renderdevicetypes.h:581
inline void RenderUAVBarrier_t::RenderUAVBarrier_t()
{
} /* size: 0 */

// <00099CE5> ../public/rendersystem/renderdevicetypes.h:581
// member variables: 8
// struct size: 40
struct RenderUAVBarrier_t {
	HRenderTexture hUAV; /* 0 8 */
	RenderBarrierPipelineStageFlags_t srcStage; /* 8 4 */
	RenderBarrierPipelineStageFlags_t dstStage; /* 12 4 */
	RenderBarrierAccessFlags_t srcFlags; /* 16 4 */
	RenderBarrierAccessFlags_t dstFlags; /* 20 4 */
	int32 nBaseMipLevel; /* 24 4 */
	int32 nNumMipLevel; /* 28 4 */
	RenderImageLayout_t imageLayout; /* 32 4 */
};

// <0013A1D7> ../public/rendersystem/renderdevicetypes.h:593
// member variables: 2
// struct size: 8
struct RenderShaderStats_t {
	int32 m_nInstructionCount; /* 0 4 */
	int32 m_nRegisterCount; /* 4 4 */
};

// <00099DD1> ../public/rendersystem/renderdevicetypes.h:624
// member functions: 2
// member variables: 5
// struct size: 24
struct RenderClearInfo_t {
	const class Vector4D * m_pClearColorArray; /* 0 8 */
	int m_nNumColors; /* 8 4 */
	int m_nFlags; /* 12 4 */
	int m_nStencilBitToCheck; /* 16 4 */
	int m_nStencilComparisonValue; /* 20 4 */
	/* ../public/rendersystem/renderdevicetypes.h:634 */
	void RenderClearInfo_t(RenderClearInfo_t* , const Vector4D& , int);
	/* ../public/rendersystem/renderdevicetypes.h:642 */
	void RenderClearInfo_t(RenderClearInfo_t* , const Vector4D* , int, int, int, int);
};

// <033D085E> ../public/rendersystem/renderdevicetypes.h:634
void RenderClearInfo_t::RenderClearInfo_t(const Vector4D& vecRGBAColor, int nFlags)
{
} /* size: 0 */

// <033D082B> ../public/rendersystem/renderdevicetypes.h:634
inline void RenderClearInfo_t::RenderClearInfo_t(const Vector4D& vecRGBAColor, int nFlags)
{
} /* size: 0 */

// <0347F856> ../public/rendersystem/renderdevicetypes.h:642
void RenderClearInfo_t::RenderClearInfo_t(const Vector4D* pClearColorArray, int nNumColors, int nFlags, int nStencilBitToCheck, int nStencilComparisonValue)
{
} /* size: 0 */

// <0347F7FC> ../public/rendersystem/renderdevicetypes.h:642
inline void RenderClearInfo_t::RenderClearInfo_t(const Vector4D* pClearColorArray, int nNumColors, int nFlags, int nStencilBitToCheck, int nStencilComparisonValue)
{
} /* size: 0 */

// <00099E97> ../public/rendersystem/renderdevicetypes.h:653
union RenderPassClearColorValue_t {
	float m_flValue[4]; /* 0 16 */
	int32_t m_iValue[4]; /* 0 16 */
	uint32_t m_uiValue[4]; /* 0 16 */
};

// <00099EEE> ../public/rendersystem/renderdevicetypes.h:661
// member variables: 2
// struct size: 8
struct RenderPassClearDepthStencilValue_t {
	float m_flDepth; /* 0 4 */
	uint32_t m_nStencil; /* 4 4 */
};

// <00099F1D> ../public/rendersystem/renderdevicetypes.h:668
union RenderPassClearValue_t {
	union RenderPassClearColorValue_t m_colorClear; /* 0 16 */
	RenderPassClearDepthStencilValue_t m_depthStencilClear; /* 0 8 */
};

// <00099FD4> ../public/rendersystem/renderdevicetypes.h:702
// member functions: 2
// member variables: 6
// struct size: 24
struct RenderDescriptorDesc_t {
	/* ../public/rendersystem/renderdevicetypes.h:704 */
	void RenderDescriptorDesc_t(RenderDescriptorDesc_t* );
	/* ../public/rendersystem/renderdevicetypes.h:716 */
	void Init(RenderDescriptorDesc_t* , RenderDescriptorType_t, uint32, uint32, uint32, CSamplerStateDesc* , RenderDescriptorBindingsFlags_t);
	uint32 m_nBinding:12; /* 0: 0 4 */
	enum RenderDescriptorBindingsFlags_t :0;
	RenderDescriptorBindingsFlags_t m_nDescriptorBindingFlags:8; /* 2: 0 1 */
	uint32 m_nDescriptorType:4; /* 0:24 4 */
	uint32 :0;
	uint32 m_nShaderStageMask:8; /* 4: 0 4 */
	uint32 :0;
	uint32 m_nArraySize:32; /* 8: 0 4 */
	CSamplerStateDesc * m_pImmutableSampler; /* 16 8 */
};

// <036AEA2A> ../public/rendersystem/renderdevicetypes.h:704
void RenderDescriptorDesc_t::RenderDescriptorDesc_t()
{
} /* size: 0 */

// <036AEA11> ../public/rendersystem/renderdevicetypes.h:704
inline void RenderDescriptorDesc_t::RenderDescriptorDesc_t()
{
} /* size: 0 */

// <009BE090> ../public/rendersystem/renderdevicetypes.h:753
void RenderDescriptorBinding_t::RenderDescriptorBinding_t(const RenderDescriptorBinding_t &)
{
} /* size: 0 */

// <009BE06E> ../public/rendersystem/renderdevicetypes.h:753
inline void RenderDescriptorBinding_t::RenderDescriptorBinding_t(const RenderDescriptorBinding_t &)
{
} /* size: 0 */

// <004471B9> ../public/rendersystem/renderdevicetypes.h:753
inline void RenderDescriptorBinding_t::operator=(const RenderDescriptorBinding_t &)
{
} /* size: 0 */

// <00267E2B> ../public/rendersystem/renderdevicetypes.h:753
void RenderDescriptorBinding_t::RenderDescriptorBinding_t(RenderDescriptorBinding_t &)
{
} /* size: 0 */

// <00267E09> ../public/rendersystem/renderdevicetypes.h:753
inline void RenderDescriptorBinding_t::RenderDescriptorBinding_t(RenderDescriptorBinding_t &)
{
} /* size: 0 */

// <0009A0BC> ../public/rendersystem/renderdevicetypes.h:753
// member functions: 8
// member variables: 5
// struct size: 48
struct RenderDescriptorBinding_t {
	/* ../public/rendersystem/renderdevicetypes.h:840 */
	union DescriptorBindParams_t {
		struct {
			ConstantBufferHandle_t m_hConstantBuffer; /* 0 8 */
			uint16 m_nView; /* 8 2 */
		} m_constantBuffer; /* 0 16 */
		struct {
			CVulkanSamplerObject * m_pSamplerObject; /* 0 8 */
			CSamplerStateDesc m_samplerDesc; /* 8 20 */
		} m_sampler; /* 0 32 */
		struct {
			int8 m_nMipLevelToBind; /* 0 1 */
			bool m_bIsReadOnlyDepthStencil:1; /* 1: 0 1 */
			RenderColorSpace_t m_nColorSpace; /* 2 1 */
			RenderTextureDimension_t m_nTextureDim; /* 3 1 */
		} m_texture; /* 0 4 */
		struct {
			RenderResourceHandle_t m_hBuffer; /* 0 8 */
			uint64 m_nBufferOffset; /* 8 8 */
			uint64 m_nBufferRange; /* 16 8 */
			bool m_bIsVertexBuffer:1; /* 24: 0 1 */
		} m_buffer; /* 0 32 */
		struct {
			RenderTLASHandle_t m_hTLAS; /* 0 8 */
		} m_accelerationStructure; /* 0 8 */
	};
	/* ../public/rendersystem/renderdevicetypes.h:755 */
	void RenderDescriptorBinding_t(RenderDescriptorBinding_t* );
	/* ../public/rendersystem/renderdevicetypes.h:763 */
	void InitTexture(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , HRenderTexture, RenderTextureDimension_t, int, RenderColorSpace_t, uint32);
	/* ../public/rendersystem/renderdevicetypes.h:776 */
	void InitSampler(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , CVulkanSamplerObject* , uint32);
	/* ../public/rendersystem/renderdevicetypes.h:786 */
	void InitSampler(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , const CSamplerStateDesc& , uint32);
	/* ../public/rendersystem/renderdevicetypes.h:796 */
	void InitConstantBuffer(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , ConstantBufferHandle_t, int, uint32);
	/* ../public/rendersystem/renderdevicetypes.h:806 */
	void InitBuffer(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , RenderBufferHandle_t, uint64, uint64, uint32);
	/* ../public/rendersystem/renderdevicetypes.h:818 */
	void InitBuffer(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , VertexBufferHandle_t, uint64, uint64, uint32);
	/* ../public/rendersystem/renderdevicetypes.h:830 */
	void InitAccelerationStructure(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , RenderTLASHandle_t, uint32);
	HRenderTexture m_hTexture; /* 0 8 */
	uint32 m_nBinding:28; /* 8: 0 4 */
	uint32 m_nDescriptorType:4; /* 8:28 4 */
	uint32 m_nArrayIndex; /* 12 4 */
	union DescriptorBindParams_t m_bindParams; /* 16 32 */
};

// <0043B76C> ../public/rendersystem/renderdevicetypes.h:753
// member functions: 10
// member variables: 5
// struct size: 48
struct RenderDescriptorBinding_t {
	/* ../public/rendersystem/renderdevicetypes.h:840 */
	union DescriptorBindParams_t {
		struct {
			ConstantBufferHandle_t m_hConstantBuffer; /* 0 8 */
			uint16 m_nView; /* 8 2 */
		} m_constantBuffer; /* 0 16 */
		struct {
			CVulkanSamplerObject * m_pSamplerObject; /* 0 8 */
			CSamplerStateDesc m_samplerDesc; /* 8 20 */
		} m_sampler; /* 0 32 */
		struct {
			int8 m_nMipLevelToBind; /* 0 1 */
			bool m_bIsReadOnlyDepthStencil:1; /* 1: 0 1 */
			RenderColorSpace_t m_nColorSpace; /* 2 1 */
			RenderTextureDimension_t m_nTextureDim; /* 3 1 */
		} m_texture; /* 0 4 */
		struct {
			RenderResourceHandle_t m_hBuffer; /* 0 8 */
			uint64 m_nBufferOffset; /* 8 8 */
			uint64 m_nBufferRange; /* 16 8 */
			bool m_bIsVertexBuffer:1; /* 24: 0 1 */
		} m_buffer; /* 0 32 */
		struct {
			RenderTLASHandle_t m_hTLAS; /* 0 8 */
		} m_accelerationStructure; /* 0 8 */
	};
	/* ../public/rendersystem/renderdevicetypes.h:755 */
	void RenderDescriptorBinding_t(RenderDescriptorBinding_t* );
	/* ../public/rendersystem/renderdevicetypes.h:763 */
	void InitTexture(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , HRenderTexture, RenderTextureDimension_t, int, RenderColorSpace_t, uint32);
	/* ../public/rendersystem/renderdevicetypes.h:776 */
	void InitSampler(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , CVulkanSamplerObject* , uint32);
	/* ../public/rendersystem/renderdevicetypes.h:786 */
	void InitSampler(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , const CSamplerStateDesc& , uint32);
	/* ../public/rendersystem/renderdevicetypes.h:796 */
	void InitConstantBuffer(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , ConstantBufferHandle_t, int, uint32);
	/* ../public/rendersystem/renderdevicetypes.h:806 */
	void InitBuffer(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , RenderBufferHandle_t, uint64, uint64, uint32);
	/* ../public/rendersystem/renderdevicetypes.h:818 */
	void InitBuffer(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , VertexBufferHandle_t, uint64, uint64, uint32);
	/* ../public/rendersystem/renderdevicetypes.h:830 */
	void InitAccelerationStructure(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , RenderTLASHandle_t, uint32);
	HRenderTexture m_hTexture; /* 0 8 */
	uint32 m_nBinding:28; /* 8: 0 4 */
	uint32 m_nDescriptorType:4; /* 8:28 4 */
	uint32 m_nArrayIndex; /* 12 4 */
	union DescriptorBindParams_t m_bindParams; /* 16 32 */
	RenderDescriptorBinding_t& operator=(RenderDescriptorBinding_t* , const RenderDescriptorBinding_t& );
	void RenderDescriptorBinding_t(RenderDescriptorBinding_t* , const RenderDescriptorBinding_t& );
};

// <00911117> ../public/rendersystem/renderdevicetypes.h:753
// member functions: 9
// member variables: 5
// struct size: 48
struct RenderDescriptorBinding_t {
	/* ../public/rendersystem/renderdevicetypes.h:840 */
	union DescriptorBindParams_t {
		struct {
			ConstantBufferHandle_t m_hConstantBuffer; /* 0 8 */
			uint16 m_nView; /* 8 2 */
		} m_constantBuffer; /* 0 16 */
		struct {
			CVulkanSamplerObject * m_pSamplerObject; /* 0 8 */
			CSamplerStateDesc m_samplerDesc; /* 8 20 */
		} m_sampler; /* 0 32 */
		struct {
			int8 m_nMipLevelToBind; /* 0 1 */
			bool m_bIsReadOnlyDepthStencil:1; /* 1: 0 1 */
			RenderColorSpace_t m_nColorSpace; /* 2 1 */
			RenderTextureDimension_t m_nTextureDim; /* 3 1 */
		} m_texture; /* 0 4 */
		struct {
			RenderResourceHandle_t m_hBuffer; /* 0 8 */
			uint64 m_nBufferOffset; /* 8 8 */
			uint64 m_nBufferRange; /* 16 8 */
			bool m_bIsVertexBuffer:1; /* 24: 0 1 */
		} m_buffer; /* 0 32 */
		struct {
			RenderTLASHandle_t m_hTLAS; /* 0 8 */
		} m_accelerationStructure; /* 0 8 */
	};
	/* ../public/rendersystem/renderdevicetypes.h:755 */
	void RenderDescriptorBinding_t(RenderDescriptorBinding_t* );
	/* ../public/rendersystem/renderdevicetypes.h:763 */
	void InitTexture(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , HRenderTexture, RenderTextureDimension_t, int, RenderColorSpace_t, uint32);
	/* ../public/rendersystem/renderdevicetypes.h:776 */
	void InitSampler(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , CVulkanSamplerObject* , uint32);
	/* ../public/rendersystem/renderdevicetypes.h:786 */
	void InitSampler(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , const CSamplerStateDesc& , uint32);
	/* ../public/rendersystem/renderdevicetypes.h:796 */
	void InitConstantBuffer(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , ConstantBufferHandle_t, int, uint32);
	/* ../public/rendersystem/renderdevicetypes.h:806 */
	void InitBuffer(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , RenderBufferHandle_t, uint64, uint64, uint32);
	/* ../public/rendersystem/renderdevicetypes.h:818 */
	void InitBuffer(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , VertexBufferHandle_t, uint64, uint64, uint32);
	/* ../public/rendersystem/renderdevicetypes.h:830 */
	void InitAccelerationStructure(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , RenderTLASHandle_t, uint32);
	HRenderTexture m_hTexture; /* 0 8 */
	uint32 m_nBinding:28; /* 8: 0 4 */
	uint32 m_nDescriptorType:4; /* 8:28 4 */
	uint32 m_nArrayIndex; /* 12 4 */
	union DescriptorBindParams_t m_bindParams; /* 16 32 */
	void RenderDescriptorBinding_t(RenderDescriptorBinding_t* , const RenderDescriptorBinding_t& );
};

// <00205224> ../public/rendersystem/renderdevicetypes.h:753
// member functions: 9
// member variables: 5
// struct size: 48
struct RenderDescriptorBinding_t {
	/* ../public/rendersystem/renderdevicetypes.h:840 */
	union DescriptorBindParams_t {
		struct {
			ConstantBufferHandle_t m_hConstantBuffer; /* 0 8 */
			uint16 m_nView; /* 8 2 */
		} m_constantBuffer; /* 0 16 */
		struct {
			CVulkanSamplerObject * m_pSamplerObject; /* 0 8 */
			CSamplerStateDesc m_samplerDesc; /* 8 20 */
		} m_sampler; /* 0 32 */
		struct {
			int8 m_nMipLevelToBind; /* 0 1 */
			bool m_bIsReadOnlyDepthStencil:1; /* 1: 0 1 */
			RenderColorSpace_t m_nColorSpace; /* 2 1 */
			RenderTextureDimension_t m_nTextureDim; /* 3 1 */
		} m_texture; /* 0 4 */
		struct {
			RenderResourceHandle_t m_hBuffer; /* 0 8 */
			uint64 m_nBufferOffset; /* 8 8 */
			uint64 m_nBufferRange; /* 16 8 */
			bool m_bIsVertexBuffer:1; /* 24: 0 1 */
		} m_buffer; /* 0 32 */
		struct {
			RenderTLASHandle_t m_hTLAS; /* 0 8 */
		} m_accelerationStructure; /* 0 8 */
	};
	/* ../public/rendersystem/renderdevicetypes.h:755 */
	void RenderDescriptorBinding_t(RenderDescriptorBinding_t* );
	/* ../public/rendersystem/renderdevicetypes.h:763 */
	void InitTexture(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , HRenderTexture, RenderTextureDimension_t, int, RenderColorSpace_t, uint32);
	/* ../public/rendersystem/renderdevicetypes.h:776 */
	void InitSampler(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , CVulkanSamplerObject* , uint32);
	/* ../public/rendersystem/renderdevicetypes.h:786 */
	void InitSampler(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , const CSamplerStateDesc& , uint32);
	/* ../public/rendersystem/renderdevicetypes.h:796 */
	void InitConstantBuffer(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , ConstantBufferHandle_t, int, uint32);
	/* ../public/rendersystem/renderdevicetypes.h:806 */
	void InitBuffer(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , RenderBufferHandle_t, uint64, uint64, uint32);
	/* ../public/rendersystem/renderdevicetypes.h:818 */
	void InitBuffer(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , VertexBufferHandle_t, uint64, uint64, uint32);
	/* ../public/rendersystem/renderdevicetypes.h:830 */
	void InitAccelerationStructure(RenderDescriptorBinding_t* , const RenderDescriptorDesc_t& , RenderTLASHandle_t, uint32);
	HRenderTexture m_hTexture; /* 0 8 */
	uint32 m_nBinding:28; /* 8: 0 4 */
	uint32 m_nDescriptorType:4; /* 8:28 4 */
	uint32 m_nArrayIndex; /* 12 4 */
	union DescriptorBindParams_t m_bindParams; /* 16 32 */
	void RenderDescriptorBinding_t(RenderDescriptorBinding_t* , RenderDescriptorBinding_t& );
};

// <036AE9FA> ../public/rendersystem/renderdevicetypes.h:755
void RenderDescriptorBinding_t::RenderDescriptorBinding_t()
{
} /* size: 0 */

// <036AE9E1> ../public/rendersystem/renderdevicetypes.h:755
inline void RenderDescriptorBinding_t::RenderDescriptorBinding_t()
{
} /* size: 0 */

// <00C515D7> ../public/rendersystem/renderdevicetypes.h:763
inline void RenderDescriptorBinding_t::InitTexture(const RenderDescriptorDesc_t& rdd, HRenderTexture hTex, RenderTextureDimension_t texDim, int nMipLevel, RenderColorSpace_t colorSpace, uint32 nArrayIndex)
{
} /* size: 0 */

// <00C5156D> ../public/rendersystem/renderdevicetypes.h:776
// variables: 2
inline void RenderDescriptorBinding_t::InitSampler(const RenderDescriptorDesc_t& rdd, CVulkanSamplerObject* pSamplerObject, uint32 nArrayIndex)
{
	const char   __FUNCTION__; // 24715
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 779
	}
} /* size: 0, variables: 1 */

// <036AE9A1> ../public/rendersystem/renderdevicetypes.h:830
inline void RenderDescriptorBinding_t::InitAccelerationStructure(const RenderDescriptorDesc_t& rdd, RenderTLASHandle_t hTLAS, uint32 nArrayIndex)
{
} /* size: 0 */

// <036AE98A> ../public/rendersystem/renderdevicetypes.h:842
void DescriptorBindParams_t(const union DescriptorBindParams_t* this)
{
} /* size: 0 */

// <036AE971> ../public/rendersystem/renderdevicetypes.h:842
inline void DescriptorBindParams_t(const union DescriptorBindParams_t* this)
{
} /* size: 0 */

// <0009A44A> ../public/rendersystem/renderdevicetypes.h:906
// member variable: 1
// struct size: 4
struct RenderQueryHandle_t__ : public RenderResourceHandle_t__ {
public:
	/* struct RenderResourceHandle_t__ <ancestor>; */ /* 0 4 */
};

// <0695271A> ../public/rendersystem/renderdevicetypes.h:937
void IRenderShaderByteCode::IRenderShaderByteCode()
{
} /* size: 0 */

// <069526FD> ../public/rendersystem/renderdevicetypes.h:937
inline void IRenderShaderByteCode::IRenderShaderByteCode()
{
} /* size: 0 */

// <0115BEFE> ../public/rendersystem/renderdevicetypes.h:937
// member functions: 9
// member variable: 1
// vtable entries: 2
// class size: 8
class IRenderShaderByteCode {
	int ()(void) * * _vptr.IRenderShaderByteCode; /* 0 8 */
	/* ../public/rendersystem/renderdevicetypes.h:945 */
	virtual void ~IRenderShaderByteCode(IRenderShaderByteCode* );
	/* ../public/rendersystem/renderdevicetypes.h:941 */
	virtual uint32 GetSize(const IRenderShaderByteCode* );
	/* ../public/rendersystem/renderdevicetypes.h:942 */
	virtual const void* GetBits(const IRenderShaderByteCode* );
	void IRenderShaderByteCode(class IRenderShaderByteCode *, const class IRenderShaderByteCode  &); /* linkage=_ZN21IRenderShaderByteCodeC4ERKS_ */
	void IRenderShaderByteCode(class IRenderShaderByteCode *); /* linkage=_ZN21IRenderShaderByteCodeC4Ev */
	virtual void ~IRenderShaderByteCode(class IRenderShaderByteCode *); /* linkage=_ZN21IRenderShaderByteCodeD4Ev */
	virtual uint32 GetSize(const class IRenderShaderByteCode  *); /* linkage=_ZNK21IRenderShaderByteCode7GetSizeEv */
	virtual const void  * GetBits(const class IRenderShaderByteCode  *); /* linkage=_ZNK21IRenderShaderByteCode7GetBitsEv */
	class IRenderShaderByteCode & operator=(class IRenderShaderByteCode *, const class IRenderShaderByteCode  &); /* linkage=_ZN21IRenderShaderByteCodeaSERKS_ */
};

// <06894B82> ../public/rendersystem/renderdevicetypes.h:937
// member functions: 11
// member variable: 1
// vtable entries: 2
// class size: 8
class IRenderShaderByteCode {
	void IRenderShaderByteCode(IRenderShaderByteCode* , const IRenderShaderByteCode& );
	void IRenderShaderByteCode(IRenderShaderByteCode* );
	int ()(void) * * _vptr.IRenderShaderByteCode; /* 0 8 */
	/* ../public/rendersystem/renderdevicetypes.h:945 */
	virtual void ~IRenderShaderByteCode(IRenderShaderByteCode* );
	/* ../public/rendersystem/renderdevicetypes.h:941 */
	virtual uint32 GetSize(const IRenderShaderByteCode* );
	/* ../public/rendersystem/renderdevicetypes.h:942 */
	virtual const void* GetBits(const IRenderShaderByteCode* );
	void IRenderShaderByteCode(class IRenderShaderByteCode *, const class IRenderShaderByteCode  &); /* linkage=_ZN21IRenderShaderByteCodeC4ERKS_ */
	void IRenderShaderByteCode(class IRenderShaderByteCode *); /* linkage=_ZN21IRenderShaderByteCodeC4Ev */
	virtual void ~IRenderShaderByteCode(class IRenderShaderByteCode *); /* linkage=_ZN21IRenderShaderByteCodeD4Ev */
	virtual uint32 GetSize(const class IRenderShaderByteCode  *); /* linkage=_ZNK21IRenderShaderByteCode7GetSizeEv */
	virtual const void  * GetBits(const class IRenderShaderByteCode  *); /* linkage=_ZNK21IRenderShaderByteCode7GetBitsEv */
	class IRenderShaderByteCode & operator=(class IRenderShaderByteCode *, const class IRenderShaderByteCode  &); /* linkage=_ZN21IRenderShaderByteCodeaSERKS_ */
};

// <00913BD3> ../public/rendersystem/renderdevicetypes.h:937
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 8
class IRenderShaderByteCode {
	void IRenderShaderByteCode(IRenderShaderByteCode* , const IRenderShaderByteCode& );
	void IRenderShaderByteCode(IRenderShaderByteCode* );
	IRenderShaderByteCode& operator=(IRenderShaderByteCode* , const IRenderShaderByteCode& );
	int ()(void) * * _vptr.IRenderShaderByteCode; /* 0 8 */
	/* ../public/rendersystem/renderdevicetypes.h:945 */
	virtual void ~IRenderShaderByteCode(IRenderShaderByteCode* );
	/* ../public/rendersystem/renderdevicetypes.h:941 */
	virtual uint32 GetSize(const IRenderShaderByteCode* );
	/* ../public/rendersystem/renderdevicetypes.h:942 */
	virtual const void* GetBits(const IRenderShaderByteCode* );
	void IRenderShaderByteCode(class IRenderShaderByteCode *, const class IRenderShaderByteCode  &); /* linkage=_ZN21IRenderShaderByteCodeC4ERKS_ */
	void IRenderShaderByteCode(class IRenderShaderByteCode *); /* linkage=_ZN21IRenderShaderByteCodeC4Ev */
	virtual void ~IRenderShaderByteCode(class IRenderShaderByteCode *); /* linkage=_ZN21IRenderShaderByteCodeD4Ev */
	virtual uint32 GetSize(const class IRenderShaderByteCode  *); /* linkage=_ZNK21IRenderShaderByteCode7GetSizeEv */
	virtual const void  * GetBits(const class IRenderShaderByteCode  *); /* linkage=_ZNK21IRenderShaderByteCode7GetBitsEv */
	class IRenderShaderByteCode & operator=(class IRenderShaderByteCode *, const class IRenderShaderByteCode  &); /* linkage=_ZN21IRenderShaderByteCodeaSERKS_ */
};

// <0002BE84> ../../public/rendersystem/renderdevicetypes.h:937
// member functions: 9
// member variable: 1
// vtable entries: 2
// class size: 8
class IRenderShaderByteCode {
	int ()(void) * * _vptr.IRenderShaderByteCode; /* 0 8 */
	/* ../../public/rendersystem/renderdevicetypes.h:945 */
	virtual void ~IRenderShaderByteCode(IRenderShaderByteCode* );
	/* ../../public/rendersystem/renderdevicetypes.h:941 */
	virtual uint32 GetSize(const IRenderShaderByteCode* );
	/* ../../public/rendersystem/renderdevicetypes.h:942 */
	virtual const void* GetBits(const IRenderShaderByteCode* );
	void IRenderShaderByteCode(class IRenderShaderByteCode *, const class IRenderShaderByteCode  &); /* linkage=_ZN21IRenderShaderByteCodeC4ERKS_ */
	void IRenderShaderByteCode(class IRenderShaderByteCode *); /* linkage=_ZN21IRenderShaderByteCodeC4Ev */
	virtual void ~IRenderShaderByteCode(class IRenderShaderByteCode *); /* linkage=_ZN21IRenderShaderByteCodeD4Ev */
	virtual uint32 GetSize(const class IRenderShaderByteCode  *); /* linkage=_ZNK21IRenderShaderByteCode7GetSizeEv */
	virtual const void  * GetBits(const class IRenderShaderByteCode  *); /* linkage=_ZNK21IRenderShaderByteCode7GetBitsEv */
	class IRenderShaderByteCode & operator=(class IRenderShaderByteCode *, const class IRenderShaderByteCode  &); /* linkage=_ZN21IRenderShaderByteCodeaSERKS_ */
};

// <06971A8B> ../public/rendersystem/renderdevicetypes.h:945
void IRenderShaderByteCode::~IRenderShaderByteCode()
{
} /* size: 0 */

// <06971A5B> ../public/rendersystem/renderdevicetypes.h:945
inline void IRenderShaderByteCode::~IRenderShaderByteCode()
{
} /* size: 0 */

// <00239938> ../public/rendersystem/renderdevicetypes.h:954
void IRenderDeviceEventListener::IRenderDeviceEventListener()
{
} /* size: 0 */

// <0023991B> ../public/rendersystem/renderdevicetypes.h:954
inline void IRenderDeviceEventListener::IRenderDeviceEventListener()
{
} /* size: 0 */

// <002268B6> ../public/rendersystem/renderdevicetypes.h:954
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 8
class IRenderDeviceEventListener {
	void IRenderDeviceEventListener(IRenderDeviceEventListener* , IRenderDeviceEventListener& );
	void IRenderDeviceEventListener(IRenderDeviceEventListener* , const IRenderDeviceEventListener& );
	void IRenderDeviceEventListener(IRenderDeviceEventListener* );
	void ~IRenderDeviceEventListener(IRenderDeviceEventListener* );
	int ()(void) * * _vptr.IRenderDeviceEventListener; /* 0 8 */
	/* ../public/rendersystem/renderdevicetypes.h:957 */
	virtual void OnDeviceLost(IRenderDeviceEventListener* );
	/* ../public/rendersystem/renderdevicetypes.h:958 */
	virtual void OnDeviceCreated(IRenderDeviceEventListener* );
	/* ../public/rendersystem/renderdevicetypes.h:959 */
	virtual void OnDeviceRestored(IRenderDeviceEventListener* );
	/* ../public/rendersystem/renderdevicetypes.h:960 */
	virtual void OnModeChanged(IRenderDeviceEventListener* , const RenderDeviceInfo_t& );
	void IRenderDeviceEventListener(class IRenderDeviceEventListener *, class IRenderDeviceEventListener &); /* linkage=_ZN26IRenderDeviceEventListenerC4EOS_ */
	void IRenderDeviceEventListener(class IRenderDeviceEventListener *, const class IRenderDeviceEventListener  &); /* linkage=_ZN26IRenderDeviceEventListenerC4ERKS_ */
	void IRenderDeviceEventListener(class IRenderDeviceEventListener *); /* linkage=_ZN26IRenderDeviceEventListenerC4Ev */
	void ~IRenderDeviceEventListener(class IRenderDeviceEventListener *); /* linkage=_ZN26IRenderDeviceEventListenerD4Ev */
	virtual void OnDeviceLost(class IRenderDeviceEventListener *); /* linkage=_ZN26IRenderDeviceEventListener12OnDeviceLostEv */
	virtual void OnDeviceCreated(class IRenderDeviceEventListener *); /* linkage=_ZN26IRenderDeviceEventListener15OnDeviceCreatedEv */
	virtual void OnDeviceRestored(class IRenderDeviceEventListener *); /* linkage=_ZN26IRenderDeviceEventListener16OnDeviceRestoredEv */
	virtual void OnModeChanged(class IRenderDeviceEventListener *, const class RenderDeviceInfo_t  &); /* linkage=_ZN26IRenderDeviceEventListener13OnModeChangedERK18RenderDeviceInfo_t */
};

// <00354515> ../public/rendersystem/renderdevicetypes.h:954
// member functions: 13
// member variable: 1
// vtable entries: 4
// class size: 8
class IRenderDeviceEventListener {
	void ~IRenderDeviceEventListener(IRenderDeviceEventListener* );
	int ()(void) * * _vptr.IRenderDeviceEventListener; /* 0 8 */
	/* ../public/rendersystem/renderdevicetypes.h:957 */
	virtual void OnDeviceLost(IRenderDeviceEventListener* );
	/* ../public/rendersystem/renderdevicetypes.h:958 */
	virtual void OnDeviceCreated(IRenderDeviceEventListener* );
	/* ../public/rendersystem/renderdevicetypes.h:959 */
	virtual void OnDeviceRestored(IRenderDeviceEventListener* );
	/* ../public/rendersystem/renderdevicetypes.h:960 */
	virtual void OnModeChanged(IRenderDeviceEventListener* , const RenderDeviceInfo_t& );
	void IRenderDeviceEventListener(class IRenderDeviceEventListener *, class IRenderDeviceEventListener &); /* linkage=_ZN26IRenderDeviceEventListenerC4EOS_ */
	void IRenderDeviceEventListener(class IRenderDeviceEventListener *, const class IRenderDeviceEventListener  &); /* linkage=_ZN26IRenderDeviceEventListenerC4ERKS_ */
	void IRenderDeviceEventListener(class IRenderDeviceEventListener *); /* linkage=_ZN26IRenderDeviceEventListenerC4Ev */
	void ~IRenderDeviceEventListener(class IRenderDeviceEventListener *); /* linkage=_ZN26IRenderDeviceEventListenerD4Ev */
	virtual void OnDeviceLost(class IRenderDeviceEventListener *); /* linkage=_ZN26IRenderDeviceEventListener12OnDeviceLostEv */
	virtual void OnDeviceCreated(class IRenderDeviceEventListener *); /* linkage=_ZN26IRenderDeviceEventListener15OnDeviceCreatedEv */
	virtual void OnDeviceRestored(class IRenderDeviceEventListener *); /* linkage=_ZN26IRenderDeviceEventListener16OnDeviceRestoredEv */
	virtual void OnModeChanged(class IRenderDeviceEventListener *, const class RenderDeviceInfo_t  &); /* linkage=_ZN26IRenderDeviceEventListener13OnModeChangedERK18RenderDeviceInfo_t */
};

// <00A541F8> ../public/rendersystem/renderdevicetypes.h:964
void ITextureResidencyListener::ITextureResidencyListener()
{
} /* size: 0 */

// <00A541DB> ../public/rendersystem/renderdevicetypes.h:964
inline void ITextureResidencyListener::ITextureResidencyListener()
{
} /* size: 0 */

// <0092F3EC> ../public/rendersystem/renderdevicetypes.h:964
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 8
class ITextureResidencyListener {
	void ITextureResidencyListener(ITextureResidencyListener* , ITextureResidencyListener& );
	void ITextureResidencyListener(ITextureResidencyListener* , const ITextureResidencyListener& );
	void ITextureResidencyListener(ITextureResidencyListener* );
	void ~ITextureResidencyListener(ITextureResidencyListener* );
	int ()(void) * * _vptr.ITextureResidencyListener; /* 0 8 */
	/* ../public/rendersystem/renderdevicetypes.h:967 */
	virtual void TextureBecameFullyResident(ITextureResidencyListener* , HRenderTexture);
	/* ../public/rendersystem/renderdevicetypes.h:968 */
	virtual void TextureBecameEvicted(ITextureResidencyListener* , HRenderTexture);
	void ITextureResidencyListener(class ITextureResidencyListener *, class ITextureResidencyListener &); /* linkage=_ZN25ITextureResidencyListenerC4EOS_ */
	void ITextureResidencyListener(class ITextureResidencyListener *, const class ITextureResidencyListener  &); /* linkage=_ZN25ITextureResidencyListenerC4ERKS_ */
	void ITextureResidencyListener(class ITextureResidencyListener *); /* linkage=_ZN25ITextureResidencyListenerC4Ev */
	void ~ITextureResidencyListener(class ITextureResidencyListener *); /* linkage=_ZN25ITextureResidencyListenerD4Ev */
	virtual void TextureBecameFullyResident(class ITextureResidencyListener *, HRenderTexture); /* linkage=_ZN25ITextureResidencyListener26TextureBecameFullyResidentE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void TextureBecameEvicted(class ITextureResidencyListener *, HRenderTexture); /* linkage=_ZN25ITextureResidencyListener20TextureBecameEvictedE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
};

// <007D6DDA> ../public/rendersystem/renderdevicetypes.h:984
void IRenderDeviceSetup::IRenderDeviceSetup()
{
} /* size: 0 */

// <007D6DBC> ../public/rendersystem/renderdevicetypes.h:984
inline void IRenderDeviceSetup::IRenderDeviceSetup()
{
} /* size: 0 */

// <0079D3F2> ../public/rendersystem/renderdevicetypes.h:984
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class IRenderDeviceSetup {
	void IRenderDeviceSetup(IRenderDeviceSetup* , IRenderDeviceSetup& );
	void IRenderDeviceSetup(IRenderDeviceSetup* , const IRenderDeviceSetup& );
	void IRenderDeviceSetup(IRenderDeviceSetup* );
	void ~IRenderDeviceSetup(IRenderDeviceSetup* );
	int ()(void) * * _vptr.IRenderDeviceSetup; /* 0 8 */
	/* ../public/rendersystem/renderdevicetypes.h:988 */
	virtual bool CreateRenderDevice(IRenderDeviceSetup* );
	void IRenderDeviceSetup(class IRenderDeviceSetup *, class IRenderDeviceSetup &); /* linkage=_ZN18IRenderDeviceSetupC4EOS_ */
	void IRenderDeviceSetup(class IRenderDeviceSetup *, const class IRenderDeviceSetup  &); /* linkage=_ZN18IRenderDeviceSetupC4ERKS_ */
	void IRenderDeviceSetup(class IRenderDeviceSetup *); /* linkage=_ZN18IRenderDeviceSetupC4Ev */
	void ~IRenderDeviceSetup(class IRenderDeviceSetup *); /* linkage=_ZN18IRenderDeviceSetupD4Ev */
	virtual bool CreateRenderDevice(class IRenderDeviceSetup *); /* linkage=_ZN18IRenderDeviceSetup18CreateRenderDeviceEv */
};

// <0009A475> ../public/rendersystem/renderdevicetypes.h:994
// member variables: 4
// struct size: 24
struct BufferDesc_t {
	int m_nElementCount; /* 0 4 */
	int m_nElementSizeInBytes; /* 4 4 */
	const char * m_pDebugName; /* 8 8 */
	const char * m_pBudgetGroupName; /* 16 8 */
};

// <0009A4C9> ../public/rendersystem/renderdevicetypes.h:1006
// member variable: 1
// struct size: 8
struct LockDesc_t {
	void * m_pMemory; /* 0 8 */
};

// <0009A4E8> ../public/rendersystem/renderdevicetypes.h:1011
// member variables: 2
// struct size: 16
struct DynamicLockDesc_t : public LockDesc_t {
public:
	/* struct LockDesc_t <ancestor>; */ /* 0 8 */
	int m_nStartOffsetInBytes; /* 8 4 */
};

// <0009A548> ../public/rendersystem/renderdevicetypes.h:1080
// member variables: 3
// struct size: 12
struct RenderMultiDrawIndexedInfo_t {
	uint32_t m_nFirstIndex; /* 0 4 */
	uint32_t m_nIndexCount; /* 4 4 */
	int32_t m_nVertexOffset; /* 8 4 */
};

// <0091177B> ../public/rendersystem/renderdevicetypes.h:1090
// member variables: 4
// struct size: 24
struct VulkanDeviceSpecificTexture_t {
	uint64 m_pImage; /* 0 8 */
	uint32 m_nFormat; /* 8 4 */
	uint32 m_nWidth; /* 12 4 */
	uint32 m_nHeight; /* 16 4 */
};

// <009117CA> ../public/rendersystem/renderdevicetypes.h:1100
// member variables: 3
// struct size: 24
struct VulkanDeviceSpecificBuffer_t {
	uint64 m_pBuffer; /* 0 8 */
	uint64 m_nOffset; /* 8 8 */
	uint64 m_nSize; /* 16 8 */
};

// <0078067B> ../public/rendersystem/renderdevicetypes.h:1110
// member variables: 2
// struct size: 16
struct VulkanDeviceSpecificDescriptorSet_t {
	uint64 m_nDescriptorSet; /* 0 8 */
	uint64 m_nDescriptorSetLayout; /* 8 8 */
};

// <00911838> ../public/rendersystem/renderdevicetypes.h:1118
// member variables: 2
// struct size: 16
struct VulkanDeviceSpecificRayTracePipeline_t {
	uint64 m_nRayTracePipeline; /* 0 8 */
	uint64 m_nRayTracePipelineLayout; /* 8 8 */
};

// <02F118CF> ../public/rendersystem/renderdevicetypes.h:1128
void IMaxSwapChainDimensionsChangedListener::IMaxSwapChainDimensionsChangedListener()
{
} /* size: 0 */

// <02F118B2> ../public/rendersystem/renderdevicetypes.h:1128
inline void IMaxSwapChainDimensionsChangedListener::IMaxSwapChainDimensionsChangedListener()
{
} /* size: 0 */

// <02E09008> ../public/rendersystem/renderdevicetypes.h:1128
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class IMaxSwapChainDimensionsChangedListener {
	void IMaxSwapChainDimensionsChangedListener(IMaxSwapChainDimensionsChangedListener* , IMaxSwapChainDimensionsChangedListener& );
	void IMaxSwapChainDimensionsChangedListener(IMaxSwapChainDimensionsChangedListener* , const IMaxSwapChainDimensionsChangedListener& );
	void IMaxSwapChainDimensionsChangedListener(IMaxSwapChainDimensionsChangedListener* );
	void ~IMaxSwapChainDimensionsChangedListener(IMaxSwapChainDimensionsChangedListener* );
	int ()(void) * * _vptr.IMaxSwapChainDimensionsChangedListener; /* 0 8 */
	/* ../public/rendersystem/renderdevicetypes.h:1131 */
	virtual void OnMaxSwapChainDimensionsChanged(IMaxSwapChainDimensionsChangedListener* , int, int);
	void IMaxSwapChainDimensionsChangedListener(class IMaxSwapChainDimensionsChangedListener *, class IMaxSwapChainDimensionsChangedListener &); /* linkage=_ZN38IMaxSwapChainDimensionsChangedListenerC4EOS_ */
	void IMaxSwapChainDimensionsChangedListener(class IMaxSwapChainDimensionsChangedListener *, const class IMaxSwapChainDimensionsChangedListener  &); /* linkage=_ZN38IMaxSwapChainDimensionsChangedListenerC4ERKS_ */
	void IMaxSwapChainDimensionsChangedListener(class IMaxSwapChainDimensionsChangedListener *); /* linkage=_ZN38IMaxSwapChainDimensionsChangedListenerC4Ev */
	void ~IMaxSwapChainDimensionsChangedListener(class IMaxSwapChainDimensionsChangedListener *); /* linkage=_ZN38IMaxSwapChainDimensionsChangedListenerD4Ev */
	virtual void OnMaxSwapChainDimensionsChanged(class IMaxSwapChainDimensionsChangedListener *, int, int); /* linkage=_ZN38IMaxSwapChainDimensionsChangedListener31OnMaxSwapChainDimensionsChangedEii */
};

// <02D27315> ../public/rendersystem/renderdevicetypes.h:1136
// member functions: 2
// member variable: 1
// struct size: 8
struct DisplayListToSubmit_t {
	CDisplayList * m_pDList; /* 0 8 */
	/* ../public/rendersystem/renderdevicetypes.h:1140 */
	void DisplayListToSubmit_t(DisplayListToSubmit_t* , CDisplayList* , bool);
	/* ../public/rendersystem/renderdevicetypes.h:1142 */
	void DisplayListToSubmit_t(DisplayListToSubmit_t* );
};

// <03310D95> ../public/rendersystem/renderdevicetypes.h:1140
void DisplayListToSubmit_t::DisplayListToSubmit_t(CDisplayList* pList, bool bPersist)
{
} /* size: 0 */

// <03310D62> ../public/rendersystem/renderdevicetypes.h:1140
inline void DisplayListToSubmit_t::DisplayListToSubmit_t(CDisplayList* pList, bool bPersist)
{
} /* size: 0 */

// <02F29EBE> ../public/rendersystem/renderdevicetypes.h:1142
void DisplayListToSubmit_t::DisplayListToSubmit_t()
{
} /* size: 0 */

// <02F29EA5> ../public/rendersystem/renderdevicetypes.h:1142
inline void DisplayListToSubmit_t::DisplayListToSubmit_t()
{
} /* size: 0 */

// <00A5B4E0> ../public/rendersystem/renderdevicetypes.h:1218
inline RaytraceBuildFlags_t& operator&=(RaytraceBuildFlags_t& a, RaytraceBuildFlags_t b)
{
} /* size: 0 */

// <04C9A735> ../public/rendersystem/renderdevicetypes.h:1251
// member variables: 4
// struct size: 24
struct BLASTriangleDesc_t {
	int32 m_nMaxVertexCount; /* 0 4 */
	int32 m_nMaxPrimitiveCount; /* 4 4 */
	int32 m_nIndexSizeInBytes; /* 8 4 */
	const char * m_pGeometryName; /* 16 8 */
};

// <04C9A789> ../public/rendersystem/renderdevicetypes.h:1262
// member variables: 4
// struct size: 24
struct BLASCreateDesc_t {
	BLASTriangleDesc_t * m_pTriangleDescs; /* 0 8 */
	int32 m_nTriangleDescCount; /* 8 4 */
	RaytraceBuildFlags_t m_nFlags; /* 12 4 */
	const char * m_pName; /* 16 8 */
};

// <0009A618> ../public/rendersystem/renderdevicetypes.h:1273
// member variables: 10
// struct size: 56
struct BLASTriangleData_t {
	VertexBufferHandle_t m_hVertexBuffer; /* 0 8 */
	IndexBufferHandle_t m_hIndexBuffer; /* 8 8 */
	int32 m_nVertexStrideInBytes; /* 16 4 */
	int32 m_nVertexCount; /* 20 4 */
	int32 m_nPrimitiveCount; /* 24 4 */
	int32 m_nIndexSizeInBytes; /* 28 4 */
	int32 m_nVertexBufferOffsetInBytes; /* 32 4 */
	int32 m_nIndexBufferOffsetInBytes; /* 36 4 */
	RaytraceGeometryFlags_t m_nFlags; /* 40 4 */
	const char * m_pGeometryName; /* 48 8 */
};

// <0364D754> ../public/rendersystem/renderdevicetypes.h:1290
// member variables: 4
// struct size: 24
struct TLASCreateDesc_t {
	uint32 m_nMaxInstanceCount; /* 0 4 */
	uint32 m_nRayTypeCount; /* 4 4 */
	RaytraceBuildFlags_t m_nFlags; /* 8 4 */
	const char * m_pName; /* 16 8 */
};

// <036A6234> ../public/rendersystem/renderdevicetypes.h:1301
void TLASInstance_t::TLASInstance_t()
{
} /* size: 0 */

// <036A6217> ../public/rendersystem/renderdevicetypes.h:1301
inline void TLASInstance_t::TLASInstance_t()
{
} /* size: 0 */

// <0009A6C7> ../public/rendersystem/renderdevicetypes.h:1301
// member variables: 6
// struct size: 80
struct TLASInstance_t {
	RenderBLASHandle_t m_hBLAS; /* 0 8 */
	int32 m_nCustomId; /* 8 4 */
	int32 m_nMask; /* 12 4 */
	RaytraceInstanceFlags_t m_nFlags; /* 16 4 */
	matrix3x4_t m_mLocalToWorld; /* 20 48 */
	const char * m_pInstanceName; /* 72 8 */
};

// <018B4ACF> ../public/rendersystem/renderdevicetypes.h:1314
// member variables: 4
// struct size: 32
struct RayTraceGeneralShader_t {
	const char * m_pName; /* 0 8 */
	RayTraceShaderType_t m_nType; /* 8 4 */
	RenderShaderHandle_t m_hShader; /* 16 8 */
	const char * m_pEntryPoint; /* 24 8 */
};

// <018B4B23> ../public/rendersystem/renderdevicetypes.h:1325
// member variables: 5
// struct size: 40
struct RayTraceHitShaderGroup_t {
	const char * m_pName; /* 0 8 */
	RenderShaderHandle_t m_hShader; /* 8 8 */
	const char * m_pClosestHitEntryPoint; /* 16 8 */
	const char * m_pAnyHitEntryPoint; /* 24 8 */
	const char * m_pIntersectionEntryPoint; /* 32 8 */
};

// <018B4B87> ../public/rendersystem/renderdevicetypes.h:1336
// member variables: 8
// struct size: 56
struct RayTracePipelineStateCreateDesc_t {
	const class RayTraceGeneralShader_t * m_pGeneralShaders; /* 0 8 */
	int32 m_nGeneralShaderCount; /* 8 4 */
	const class RayTraceHitShaderGroup_t * m_pHitShaders; /* 16 8 */
	int32 m_nHitShaderCount; /* 24 4 */
	const RenderDescriptorSetHandle_t * m_pDescriptorSets; /* 32 8 */
	int32 m_nDescriptorSetCount; /* 40 4 */
	int32 m_nMaxRecursionDepth; /* 44 4 */
	uint32 m_nPushConstantsSize; /* 48 4 */
};

// <018B4C28> ../public/rendersystem/renderdevicetypes.h:1353
// member variables: 2
// struct size: 16
struct ShaderBindingTableCreateDesc_t {
	const char * m_pName; /* 0 8 */
	RenderRayTracePipelineHandle_t m_hPipeline; /* 8 8 */
};

// <007B150A> ../public/rendersystem/renderdevicetypes.h:1362
void IRaytraceShaderBindingTable::IRaytraceShaderBindingTable()
{
} /* size: 0 */

// <007B14ED> ../public/rendersystem/renderdevicetypes.h:1362
inline void IRaytraceShaderBindingTable::IRaytraceShaderBindingTable()
{
} /* size: 0 */

// <007A6C8B> ../public/rendersystem/renderdevicetypes.h:1362
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 8
class IRaytraceShaderBindingTable {
	void IRaytraceShaderBindingTable(IRaytraceShaderBindingTable* , IRaytraceShaderBindingTable& );
	void IRaytraceShaderBindingTable(IRaytraceShaderBindingTable* , const IRaytraceShaderBindingTable& );
	void IRaytraceShaderBindingTable(IRaytraceShaderBindingTable* );
	void ~IRaytraceShaderBindingTable(IRaytraceShaderBindingTable* );
	int ()(void) * * _vptr.IRaytraceShaderBindingTable; /* 0 8 */
	/* ../public/rendersystem/renderdevicetypes.h:1367 */
	virtual void BindRayGenShader(IRaytraceShaderBindingTable* , CUtlStringToken);
	/* ../public/rendersystem/renderdevicetypes.h:1370 */
	virtual void BindMissShader(IRaytraceShaderBindingTable* , CUtlStringToken, uint32);
	/* ../public/rendersystem/renderdevicetypes.h:1373 */
	virtual void BindHitGroupForInstance(IRaytraceShaderBindingTable* , RenderTLASHandle_t, CUtlStringToken, uint32, CUtlStringToken);
	/* ../public/rendersystem/renderdevicetypes.h:1376 */
	virtual void BindHitGroupForGeometry(IRaytraceShaderBindingTable* , RenderTLASHandle_t, CUtlStringToken, CUtlStringToken, uint32, CUtlStringToken);
	void IRaytraceShaderBindingTable(class IRaytraceShaderBindingTable *, class IRaytraceShaderBindingTable &); /* linkage=_ZN27IRaytraceShaderBindingTableC4EOS_ */
	void IRaytraceShaderBindingTable(class IRaytraceShaderBindingTable *, const class IRaytraceShaderBindingTable  &); /* linkage=_ZN27IRaytraceShaderBindingTableC4ERKS_ */
	void IRaytraceShaderBindingTable(class IRaytraceShaderBindingTable *); /* linkage=_ZN27IRaytraceShaderBindingTableC4Ev */
	void ~IRaytraceShaderBindingTable(class IRaytraceShaderBindingTable *); /* linkage=_ZN27IRaytraceShaderBindingTableD4Ev */
	virtual void BindRayGenShader(class IRaytraceShaderBindingTable *, class CUtlStringToken); /* linkage=_ZN27IRaytraceShaderBindingTable16BindRayGenShaderE15CUtlStringToken */
	virtual void BindMissShader(class IRaytraceShaderBindingTable *, class CUtlStringToken, uint32); /* linkage=_ZN27IRaytraceShaderBindingTable14BindMissShaderE15CUtlStringTokenj */
	virtual void BindHitGroupForInstance(class IRaytraceShaderBindingTable *, RenderTLASHandle_t, class CUtlStringToken, uint32, class CUtlStringToken); /* linkage=_ZN27IRaytraceShaderBindingTable23BindHitGroupForInstanceEP20RenderTLASHandle_t__15CUtlStringTokenjS2_ */
	virtual void BindHitGroupForGeometry(class IRaytraceShaderBindingTable *, RenderTLASHandle_t, class CUtlStringToken, class CUtlStringToken, uint32, class CUtlStringToken); /* linkage=_ZN27IRaytraceShaderBindingTable23BindHitGroupForGeometryEP20RenderTLASHandle_t__15CUtlStringTokenS2_jS2_ */
};

