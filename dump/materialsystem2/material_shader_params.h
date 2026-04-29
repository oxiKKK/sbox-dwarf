
//
// materialsystem2/material_shader_params.h
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 11
//	struct: 1
//

// <0007D76B> materialsystem2/material_shader_params.h:10
// member functions: 4
// member variables: 25
// struct size: 752
struct DynamicRenderState_t {
	/* materialsystem2/material_shader_params.h:12 */
	void DynamicRenderState_t(DynamicRenderState_t* );
	RsRasterizerStateDesc_t m_rasterizerState; /* 0 16 */
	RsDepthStencilStateDesc_t m_depthStencilState; /* 16 8 */
	RsBlendStateDesc_t m_blendState; /* 24 32 */
	float32 m_flBlendFactor[4]; /* 56 16 */
	uint32 m_nSampleMask; /* 72 4 */
	float32 m_flAlphaTestRef; /* 76 4 */
	CSamplerStateDescBase m_samplerState[32]; /* 80 640 */
	uint32 m_nSamplerTouchedBitField; /* 720 4 */
	uint32 m_nMaxSamplerIndex; /* 724 4 */
	HRenderTexture * m_pTexturesBoundToVariables; /* 728 8 */
	RsComparison_t m_alphaTestFunc; /* 736 1 */
	uint8 m_nStencilRefValue; /* 737 1 */
	bool m_bAlphaTestEnable; /* 738 1 */
	bool m_bRasterizerStateTouched; /* 739 1 */
	bool m_bDepthStencilStateTouched; /* 740 1 */
	bool m_bBlendStateTouched; /* 741 1 */
	bool m_bFoundDynamicRasterizerState; /* 742 1 */
	bool m_bFoundDynamicDepthStencilState; /* 743 1 */
	bool m_bFoundDynamicStencilRefValue; /* 744 1 */
	bool m_bFoundDynamicBlendState; /* 745 1 */
	bool m_bFoundDynamicAlphaTestState; /* 746 1 */
	bool m_bTexturesBound; /* 747 1 */
	bool m_bUAVsBound; /* 748 1 */
	bool m_bConstantBuffersBound; /* 749 1 */
	bool m_bDescriptorSetsBound; /* 750 1 */
	/* materialsystem2/material_shader_params.h:39 */
	CSamplerStateDesc* GetSamplerStateDesc(DynamicRenderState_t* , int);
	/* materialsystem2/material_shader_params.h:42 */
	void MarkSamplerTouched(DynamicRenderState_t* , int);
	/* materialsystem2/material_shader_params.h:43 */
	bool IsSamplerTouched(const DynamicRenderState_t* , int);
};

// <0027DAEF> materialsystem2/material_shader_params.h:39
inline void DynamicRenderState_t::GetSamplerStateDesc(int i)
{
} /* size: 0 */

// <0030BF30> materialsystem2/material_shader_params.h:42
inline void DynamicRenderState_t::MarkSamplerTouched(int i)
{
} /* size: 0 */

// <0027DAA9> materialsystem2/material_shader_params.h:43
inline void DynamicRenderState_t::IsSamplerTouched(int i)
{
} /* size: 0 */

// <0008AB5D> materialsystem2/material_shader_params.h:47
void InitPrototypeDynamicRenderState(void)
{
} /* size: 0 */

// <0030BF19> materialsystem2/material_shader_params.h:49
void DynamicRenderState_t::DynamicRenderState_t()
{
} /* size: 0 */

// <0030BEFD> materialsystem2/material_shader_params.h:49
inline void DynamicRenderState_t::DynamicRenderState_t()
{
} /* size: 0 */

// <0027D114> materialsystem2/material_shader_params.h:49
// variable: 1
// function calls: 31
void DynamicRenderState_t::DynamicRenderState_t()
{
	RsRasterizerStateDesc_t::RsRasterizerStateDesc_t(); // 49
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 251
	RsStencilStateDesc_t::RsStencilStateDesc_t(); // 433
	RsStencilStateDesc_t::RsStencilStateDesc_t(
				bool bStencilEnable,
				uint8 nStencilReadMask,
				uint8 nStencilWriteMask,
				RsStencilOp_t frontStencilFailOp,
				RsStencilOp_t frontStencilDepthFailOp,
				RsStencilOp_t frontStencilPassOp,
				RsComparison_t frontStencilFunc,
				RsStencilOp_t backStencilFailOp,
				RsStencilOp_t backStencilDepthFailOp,
				RsStencilOp_t backStencilPassOp,
				RsComparison_t backStencilFunc);  // 356
	RsDepthStencilStateDesc_t::RsDepthStencilStateDesc_t(
					bool bDepthTestEnable,
					bool bDepthWriteEnable,
					RsComparison_t depthFunc,
					bool bStencilEnable,
					uint8 nStencilReadMask,
					uint8 nStencilWriteMask,
					RsStencilOp_t frontStencilFailOp,
					RsStencilOp_t frontStencilDepthFailOp,
					RsStencilOp_t frontStencilPassOp,
					RsComparison_t frontStencilFunc,
					RsStencilOp_t backStencilFailOp,
					RsStencilOp_t backStencilDepthFailOp,
					RsStencilOp_t backStencilPassOp,
					RsComparison_t backStencilFunc);  // 429
	DefaultDepthStencilStateDesc(void); // 424
	DefaultDepthStencilStateDesc(void); // 435
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 435
	RsDepthStencilStateDesc_t::RsDepthStencilStateDesc_t(); // 49
	RsBlendStateDesc_t::SetAlphaToCoverageEnabled(
					bool bEnable);  // 453
	RsBlendStateDesc_t::SetIndependentBlendEnabled(
					bool bEnable);  // 454
	{
		int i; // 455
		RsBlendStateDesc_t::SetAlphaBlendEnabled(
					bool bEnable,
					int nRenderTargetIdx);  // 457
		RsBlendStateDesc_t::SetSrcBlend(
				RsBlendMode_t blendMode,
				int nRenderTargetIdx);  // 458
		RsBlendStateDesc_t::SetRenderTargetWriteMask(
					uint8 nWriteMask,
					int nRenderTargetIdx);  // 464
		RsBlendStateDesc_t::SetDestBlend(
				RsBlendMode_t blendMode,
				int nRenderTargetIdx);  // 459
		RsBlendStateDesc_t::SetBlendOp(
				RsBlendOp_t blendOp,
				int nRenderTargetIdx);  // 460
		RsBlendStateDesc_t::SetSrcBlendAlpha(
				RsBlendMode_t blendMode,
				int nRenderTargetIdx);  // 461
		RsBlendStateDesc_t::SetDestBlendAlpha(
					RsBlendMode_t blendMode,
					int nRenderTargetIdx);  // 462
		RsBlendStateDesc_t::SetBlendOpAlpha(
				RsBlendOp_t blendOp,
				int nRenderTargetIdx);  // 463
		RsBlendStateDesc_t::SetSrgbWriteEnabled(
					bool bEnable,
					int nRenderTargetIdx);  // 465
	}
	RsBlendStateDesc_t::RsBlendStateDesc_t(
				bool bBlendEnable,
				bool bAlphaToCoverageEnable,
				bool bIndependendBlendEnable,
				RsBlendMode_t srcBlend,
				RsBlendMode_t destBlend,
				RsBlendOp_t blendOp,
				RsBlendMode_t srcBlendAlpha,
				RsBlendMode_t destBlendAlpha,
				RsBlendOp_t blendOpAlpha,
				uint8 nRenderTargetWriteMask,
				bool bSrgbWriteEnable);  // 646
	DefaultBlendStateDesc(void); // 640
	DefaultBlendStateDesc(void); // 656
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 656
	RsBlendStateDesc_t::RsBlendStateDesc_t(); // 49
	CSamplerStateDescBase::CSamplerStateDescBase(); // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 52
	DynamicRenderState_t::DynamicRenderState_t(); // 49
} /* size: 518, inline expansions: 22 (1191 bytes) */

// <0008A601> materialsystem2/material_shader_params.h:59
int GetStaticComboValueFromSource(VfxStaticComboSourceType_t, VfxProgram_t, const CUtlVector<CMaterialParam, CUtlMemory<CMaterialParam, int> > *)
{
} /* size: 0 */

// <00150EB8> materialsystem2/material_shader_params.h:62
int GetDynamicComboValueFromSource(const CMaterialLayer *, const CVfxCombo *, const CRenderAttributes *, const CRenderAttributes *, VfxDynamicComboSourceType_t, VfxProgram_t)
{
} /* size: 0 */

// <00150DD6> materialsystem2/material_shader_params.h:68
void SetVariable(const CRenderAttributes *, const CRenderAttributes *, float *, DynamicRenderState_t *, IRenderContext *, const CVfxVariableDescription *, int, int, const CMaterialLayer *, const CVfxProgramData *, const CVfxPerLayerProgramData *, VfxProgram_t, int)
{
} /* size: 0 */

// <00150D5D> materialsystem2/material_shader_params.h:81
void AddVariableToCommandBuffer(CUtlBuffer *, const CVfxVariableDescription *, int, int, int, const CMaterialLayer *, const CVfxProgramData *, const CVfxPerLayerProgramData *, VfxProgram_t, DynamicRenderState_t &)
{
} /* size: 0 */

