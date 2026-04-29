
//
// vfx/vfx_render_state.cpp
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 4
//

// <0094A83B> vfx/vfx_render_state.cpp:67
// variables: 2
bool VfxIsDefaultRasterizerState(const RsRasterizerStateDesc_t* pRasterizerDesc, VfxRenderState_t renderStateId)
{
	const char   __FUNCTION__; // 10453
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 93
	}
} /* size: 0, variables: 1 */

// <00948504> vfx/vfx_render_state.cpp:167
// variables: 2
// function calls: 74
bool VfxIsDefaultDepthStencilState(const RsDepthStencilStateDesc_t* pDepthStencilDesc, VfxRenderState_t renderStateId)
{
	const char   __FUNCTION__; // 10474
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 214
	}
	RsStencilStateDesc_t::GetBackStencilFunc(); // 211
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
	DefaultDepthStencilStateDesc(void); // 211
	RsStencilStateDesc_t::GetBackStencilFunc(); // 211
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
	DefaultDepthStencilStateDesc(void); // 172
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
	DefaultDepthStencilStateDesc(void); // 175
	RsStencilStateDesc_t::IsStencilEnabled(); // 181
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
	DefaultDepthStencilStateDesc(void); // 181
	RsStencilStateDesc_t::IsStencilEnabled(); // 181
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
	DefaultDepthStencilStateDesc(void); // 178
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
	DefaultDepthStencilStateDesc(void); // 184
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
	DefaultDepthStencilStateDesc(void); // 187
	RsStencilStateDesc_t::GetFrontStencilFunc(); // 199
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
	DefaultDepthStencilStateDesc(void); // 199
	RsStencilStateDesc_t::GetFrontStencilFunc(); // 199
	RsStencilStateDesc_t::GetFrontStencilDepthFailOp(); // 193
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
	DefaultDepthStencilStateDesc(void); // 193
	RsStencilStateDesc_t::GetFrontStencilDepthFailOp(); // 193
	RsStencilStateDesc_t::GetBackStencilDepthFailOp(); // 205
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
	DefaultDepthStencilStateDesc(void); // 205
	RsStencilStateDesc_t::GetBackStencilDepthFailOp(); // 205
	RsStencilStateDesc_t::GetFrontStencilFailOp(); // 190
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
	DefaultDepthStencilStateDesc(void); // 190
	RsStencilStateDesc_t::GetFrontStencilFailOp(); // 190
	RsStencilStateDesc_t::GetBackStencilFailOp(); // 202
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
	DefaultDepthStencilStateDesc(void); // 202
	RsStencilStateDesc_t::GetBackStencilFailOp(); // 202
	RsStencilStateDesc_t::GetFrontStencilPassOp(); // 196
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
	DefaultDepthStencilStateDesc(void); // 196
	RsStencilStateDesc_t::GetFrontStencilPassOp(); // 196
	RsStencilStateDesc_t::GetBackStencilPassOp(); // 208
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
	DefaultDepthStencilStateDesc(void); // 208
	RsStencilStateDesc_t::GetBackStencilPassOp(); // 208
} /* size: 0, variables: 1, inline expansions: 74 (0 bytes) */

// <00944BDF> vfx/vfx_render_state.cpp:322
// variables: 21
// function calls: 176
bool VfxIsDefaultBlendState(const RsBlendStateDesc_t* pBlendDesc, VfxRenderState_t renderStateId)
{
	bool bDefault; // 324
	const char   __FUNCTION__; // 10411
	{
		int i; // 336
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
		DefaultBlendStateDesc(void); // 338
		RsBlendStateDesc_t::IsAlphaBlendEnabled(
					int nRenderTargetIdx);  // 338
		RsBlendStateDesc_t::IsAlphaBlendEnabled(
					int nRenderTargetIdx);  // 338
	}
	{
		int i; // 346
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
		DefaultBlendStateDesc(void); // 348
		RsBlendStateDesc_t::GetSrcBlend(
				int nRenderTargetIdx);  // 348
		RsBlendStateDesc_t::GetSrcBlend(
				int nRenderTargetIdx);  // 348
	}
	{
		int i; // 353
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
		DefaultBlendStateDesc(void); // 355
		RsBlendStateDesc_t::GetDestBlend(
				int nRenderTargetIdx);  // 355
		RsBlendStateDesc_t::GetDestBlend(
				int nRenderTargetIdx);  // 355
	}
	{
		int i; // 360
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
		DefaultBlendStateDesc(void); // 362
		RsBlendStateDesc_t::GetBlendOp(
				int nRenderTargetIdx);  // 362
		RsBlendStateDesc_t::GetBlendOp(
				int nRenderTargetIdx);  // 362
	}
	{
		int i; // 367
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
		DefaultBlendStateDesc(void); // 369
		RsBlendStateDesc_t::GetSrcBlendAlpha(
				int nRenderTargetIdx);  // 369
		RsBlendStateDesc_t::GetSrcBlendAlpha(
				int nRenderTargetIdx);  // 369
	}
	{
		int i; // 374
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
		DefaultBlendStateDesc(void); // 376
		RsBlendStateDesc_t::GetDestBlendAlpha(
					int nRenderTargetIdx);  // 376
		RsBlendStateDesc_t::GetDestBlendAlpha(
					int nRenderTargetIdx);  // 376
	}
	{
		int i; // 381
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
		DefaultBlendStateDesc(void); // 383
		RsBlendStateDesc_t::GetBlendOpAlpha(
				int nRenderTargetIdx);  // 383
		RsBlendStateDesc_t::GetBlendOpAlpha(
				int nRenderTargetIdx);  // 383
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 413
	}
	RsBlendStateDesc_t::GetRenderTargetWriteMask(
				int nRenderTargetIdx);  // 395
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
	DefaultBlendStateDesc(void); // 396
	RsBlendStateDesc_t::GetRenderTargetWriteMask(
				int nRenderTargetIdx);  // 396
	RsBlendStateDesc_t::IsSrgbWriteEnabled(
				int nRenderTargetIdx);  // 406
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
	DefaultBlendStateDesc(void); // 407
	RsBlendStateDesc_t::IsSrgbWriteEnabled(
				int nRenderTargetIdx);  // 407
	RsBlendStateDesc_t::IsAlphaToCoverageEnabled(); // 329
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
	DefaultBlendStateDesc(void); // 329
	RsBlendStateDesc_t::IsAlphaToCoverageEnabled(); // 329
	RsBlendStateDesc_t::IsIndependentBlendEnabled(); // 410
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
	DefaultBlendStateDesc(void); // 410
	RsBlendStateDesc_t::IsIndependentBlendEnabled(); // 410
} /* size: 0, variables: 2, inline expansions: 28 (0 bytes) */

// <0093FA50> vfx/vfx_render_state.cpp:420
// variables: 15
// function calls: 232
Vector4D VfxGetDefaultRenderState(const VfxRenderStateInfo_t& rsInfo)
{
	Vector4D defaultVal; // 422
	const char   __FUNCTION__; // 10432
	{
		const float* pDefaultBlendFactor; // 582
		VfxGetDefaultBlendFactor(void); // 582
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 607
	}
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 422
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
	DefaultBlendStateDesc(void); // 466
	RsBlendStateDesc_t::IsSrgbWriteEnabled(
				int nRenderTargetIdx);  // 466
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
	DefaultBlendStateDesc(void); // 577
	RsBlendStateDesc_t::GetRenderTargetWriteMask(
				int nRenderTargetIdx);  // 577
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
	DefaultBlendStateDesc(void); // 591
	RsBlendStateDesc_t::IsIndependentBlendEnabled(); // 591
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
	DefaultBlendStateDesc(void); // 554
	RsBlendStateDesc_t::GetBlendOp(
			int nRenderTargetIdx);  // 554
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
	DefaultBlendStateDesc(void); // 550
	RsBlendStateDesc_t::GetDestBlend(
			int nRenderTargetIdx);  // 550
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
	DefaultDepthStencilStateDesc(void); // 470
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
	DefaultDepthStencilStateDesc(void); // 514
	RsStencilStateDesc_t::GetBackStencilDepthFailOp(); // 514
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
	DefaultBlendStateDesc(void); // 530
	RsBlendStateDesc_t::IsAlphaToCoverageEnabled(); // 530
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
	DefaultDepthStencilStateDesc(void); // 522
	RsStencilStateDesc_t::GetBackStencilFunc(); // 522
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
	DefaultDepthStencilStateDesc(void); // 498
	RsStencilStateDesc_t::GetFrontStencilDepthFailOp(); // 498
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
	DefaultDepthStencilStateDesc(void); // 494
	RsStencilStateDesc_t::GetFrontStencilFailOp(); // 494
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
	DefaultDepthStencilStateDesc(void); // 478
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
	DefaultDepthStencilStateDesc(void); // 474
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
	DefaultDepthStencilStateDesc(void); // 506
	RsStencilStateDesc_t::GetFrontStencilFunc(); // 506
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
	DefaultDepthStencilStateDesc(void); // 510
	RsStencilStateDesc_t::GetBackStencilFailOp(); // 510
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
	DefaultDepthStencilStateDesc(void); // 502
	RsStencilStateDesc_t::GetFrontStencilPassOp(); // 502
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
	DefaultBlendStateDesc(void); // 546
	RsBlendStateDesc_t::GetSrcBlend(
			int nRenderTargetIdx);  // 546
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
	DefaultDepthStencilStateDesc(void); // 518
	RsStencilStateDesc_t::GetBackStencilPassOp(); // 518
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
	DefaultBlendStateDesc(void); // 538
	RsBlendStateDesc_t::IsAlphaBlendEnabled(
				int nRenderTargetIdx);  // 538
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
	DefaultBlendStateDesc(void); // 562
	RsBlendStateDesc_t::GetDestBlendAlpha(
				int nRenderTargetIdx);  // 562
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
	DefaultBlendStateDesc(void); // 558
	RsBlendStateDesc_t::GetSrcBlendAlpha(
			int nRenderTargetIdx);  // 558
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
	DefaultBlendStateDesc(void); // 566
	RsBlendStateDesc_t::GetBlendOpAlpha(
			int nRenderTargetIdx);  // 566
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
	DefaultDepthStencilStateDesc(void); // 486
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
	DefaultDepthStencilStateDesc(void); // 490
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
	DefaultDepthStencilStateDesc(void); // 482
	RsStencilStateDesc_t::IsStencilEnabled(); // 482
} /* size: 0, variables: 2, inline expansions: 132 (0 bytes) */

