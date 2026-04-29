
//
// public/rendersystem/irendercontext.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 75
//	classes: 14
//	structs: 4
//

// <0009A58C> ../public/rendersystem/irendercontext.h:77
// member variables: 2
// class size: 16
class CDisplayList {
	CDisplayList * m_pNext; /* 0 8 */
	void * m_pAppData; /* 8 8 */
};

// <0010EAF7> ../public/rendersystem/irendercontext.h:102
// member variables: 3
// struct size: 16
struct LockedDynamicTexture_t {
	int m_nRowPitch; /* 0 4 */
	int m_nSlicePitch; /* 4 4 */
	void * m_pData; /* 8 8 */
};

// <0027C045> ../public/rendersystem/irendercontext.h:117
void bind_resource_list_t::bind_resource_list_t()
{
} /* size: 0 */

// <0027C028> ../public/rendersystem/irendercontext.h:117
inline void bind_resource_list_t::bind_resource_list_t()
{
} /* size: 0 */

// <0010EB51> ../public/rendersystem/irendercontext.h:117
// member variables: 6
// struct size: 32
struct bind_resource_list_t {
	/* ../public/rendersystem/irendercontext.h:125 */
	union {
		struct {
			uint16 m_nRequiredTextureSize; /* 0 2 */
			RenderColorSpace_t m_nColorSpace; /* 2 1 */
			RenderTextureDimension_t m_nTextureDim; /* 3 1 */
		} m_textureBindParams; /* 0 4 */
		struct {
			uint32 m_nInitialHiddenCounterValue; /* 0 4 */
		} m_uavBindParams; /* 0 4 */
	};
	HRenderTexture m_texture; /* 0 8 */
	RenderBufferHandle_t m_buffer; /* 8 8 */
	union {
		struct {
			uint16 m_nRequiredTextureSize; /* 16 2 */
			RenderColorSpace_t m_nColorSpace; /* 18 1 */
			RenderTextureDimension_t m_nTextureDim; /* 19 1 */
		} m_textureBindParams; /* 16 4 */
		struct {
			uint32 m_nInitialHiddenCounterValue; /* 16 4 */
		} m_uavBindParams; /* 16 4 */
	}; /* 16 4 */
	int8 m_nMipLevelToBind; /* 20 1 */
	bool m_bBindBuffer; /* 21 1 */
	const char * m_szDebugParamName; /* 24 8 */
};

// <0023AE2B> ../public/rendersystem/irendercontext.h:117
// member function: 1
// member variables: 6
// struct size: 32
struct bind_resource_list_t {
	/* ../public/rendersystem/irendercontext.h:125 */
	union {
		struct {
			uint16 m_nRequiredTextureSize; /* 0 2 */
			RenderColorSpace_t m_nColorSpace; /* 2 1 */
			RenderTextureDimension_t m_nTextureDim; /* 3 1 */
		} m_textureBindParams; /* 0 4 */
		struct {
			uint32 m_nInitialHiddenCounterValue; /* 0 4 */
		} m_uavBindParams; /* 0 4 */
	};
	HRenderTexture m_texture; /* 0 8 */
	RenderBufferHandle_t m_buffer; /* 8 8 */
	union {
		struct {
			uint16 m_nRequiredTextureSize; /* 16 2 */
			RenderColorSpace_t m_nColorSpace; /* 18 1 */
			RenderTextureDimension_t m_nTextureDim; /* 19 1 */
		} m_textureBindParams; /* 16 4 */
		struct {
			uint32 m_nInitialHiddenCounterValue; /* 16 4 */
		} m_uavBindParams; /* 16 4 */
	}; /* 16 4 */
	int8 m_nMipLevelToBind; /* 20 1 */
	bool m_bBindBuffer; /* 21 1 */
	const char * m_szDebugParamName; /* 24 8 */
	void bind_resource_list_t(bind_resource_list_t* );
};

// <0027BF41> ../public/rendersystem/irendercontext.h:145
void texture_use_info_t::texture_use_info_t()
{
} /* size: 0 */

// <0027BF24> ../public/rendersystem/irendercontext.h:145
inline void texture_use_info_t::texture_use_info_t()
{
} /* size: 0 */

// <0026AEDF> ../public/rendersystem/irendercontext.h:145
inline void texture_use_info_t::operator=(const texture_use_info_t &)
{
} /* size: 0 */

// <00267D51> ../public/rendersystem/irendercontext.h:145
void texture_use_info_t::texture_use_info_t(texture_use_info_t &)
{
} /* size: 0 */

// <00267D2F> ../public/rendersystem/irendercontext.h:145
inline void texture_use_info_t::texture_use_info_t(texture_use_info_t &)
{
} /* size: 0 */

// <0010EC2B> ../public/rendersystem/irendercontext.h:145
// member variables: 2
// struct size: 16
struct texture_use_info_t {
	HRenderTexture hTexture; /* 0 8 */
	uint16 nRequiredTextureSize; /* 8 2 */
};

// <01DAC73A> ../public/rendersystem/irendercontext.h:163
void IRenderReadCallback::IRenderReadCallback()
{
} /* size: 0 */

// <01DAC71E> ../public/rendersystem/irendercontext.h:163
inline void IRenderReadCallback::IRenderReadCallback()
{
} /* size: 0 */

// <001244DA> ../public/rendersystem/irendercontext.h:163
// member functions: 6
// member variable: 1
// vtable entry: 1
// class size: 8
class IRenderReadCallback {
	int ()(void) * * _vptr.IRenderReadCallback; /* 0 8 */
	/* ../public/rendersystem/irendercontext.h:166 */
	virtual void ~IRenderReadCallback(IRenderReadCallback* );
	/* ../public/rendersystem/irendercontext.h:170 */
	virtual bool IsDoneWithData(const IRenderReadCallback* );
	void IRenderReadCallback(class IRenderReadCallback *, const class IRenderReadCallback  &); /* linkage=_ZN19IRenderReadCallbackC4ERKS_ */
	void IRenderReadCallback(class IRenderReadCallback *); /* linkage=_ZN19IRenderReadCallbackC4Ev */
	virtual void ~IRenderReadCallback(class IRenderReadCallback *); /* linkage=_ZN19IRenderReadCallbackD4Ev */
	/* <b8ced9> ../public/rendersystem/irendercontext.h:170 */
	virtual bool IsDoneWithData(const class IRenderReadCallback  *); /* linkage=_ZNK19IRenderReadCallback14IsDoneWithDataEv */
};

// <01254E83> ../public/rendersystem/irendercontext.h:163
// member functions: 8
// member variable: 1
// vtable entry: 1
// class size: 8
class IRenderReadCallback {
	void IRenderReadCallback(IRenderReadCallback* , const IRenderReadCallback& );
	void IRenderReadCallback(IRenderReadCallback* );
	int ()(void) * * _vptr.IRenderReadCallback; /* 0 8 */
	/* ../public/rendersystem/irendercontext.h:166 */
	virtual void ~IRenderReadCallback(IRenderReadCallback* );
	/* ../public/rendersystem/irendercontext.h:170 */
	virtual bool IsDoneWithData(const IRenderReadCallback* );
	void IRenderReadCallback(class IRenderReadCallback *, const class IRenderReadCallback  &); /* linkage=_ZN19IRenderReadCallbackC4ERKS_ */
	void IRenderReadCallback(class IRenderReadCallback *); /* linkage=_ZN19IRenderReadCallbackC4Ev */
	virtual void ~IRenderReadCallback(class IRenderReadCallback *); /* linkage=_ZN19IRenderReadCallbackD4Ev */
	/* <b8ced9> ../public/rendersystem/irendercontext.h:170 */
	virtual bool IsDoneWithData(const class IRenderReadCallback  *); /* linkage=_ZNK19IRenderReadCallback14IsDoneWithDataEv */
};

// <01DC8282> ../public/rendersystem/irendercontext.h:166
void IRenderReadCallback::~IRenderReadCallback()
{
} /* size: 0 */

// <01DC8252> ../public/rendersystem/irendercontext.h:166
inline void IRenderReadCallback::~IRenderReadCallback()
{
} /* size: 0 */

// <00B8B95D> ../public/rendersystem/irendercontext.h:166
// function call: 1
void IRenderReadCallback::~IRenderReadCallback()
{
	IRenderReadCallback::~IRenderReadCallback(); // 166
} /* size: 14, inline expansions: 1 (0 bytes) */

// <01DC8224> ../public/rendersystem/irendercontext.h:170
void IRenderReadCallback::IsDoneWithData()
{
} /* size: 10 */

// <00B8B92B> ../public/rendersystem/irendercontext.h:170
inline void IRenderReadCallback::IsDoneWithData()
{
} /* size: 0 */

// <01DAC707> ../public/rendersystem/irendercontext.h:173
void IReadTexturePixelsCallback::IReadTexturePixelsCallback()
{
} /* size: 0 */

// <01DAC6EB> ../public/rendersystem/irendercontext.h:173
inline void IReadTexturePixelsCallback::IReadTexturePixelsCallback()
{
} /* size: 0 */

// <00124399> ../public/rendersystem/irendercontext.h:173
// member functions: 6
// member variable: 1
// vtable entry: 1
// class size: 8
class IReadTexturePixelsCallback : public IRenderReadCallback {
public:
	/* class IRenderReadCallback <ancestor>; */ /* 0 8 */
	/* ../public/rendersystem/irendercontext.h:176 */
	virtual void OnReadTexturePixels(IReadTexturePixelsCallback* , const uint8* , ImageFormat, int, int, int, int);
	/* ../public/rendersystem/irendercontext.h:178 */
	virtual void ~IReadTexturePixelsCallback(IReadTexturePixelsCallback* );
	virtual void OnReadTexturePixels(class IReadTexturePixelsCallback *, const uint8  *, enum ImageFormat, int, int, int, int); /* linkage=_ZN26IReadTexturePixelsCallback19OnReadTexturePixelsEPKh11ImageFormatiiii */
	virtual void ~IReadTexturePixelsCallback(class IReadTexturePixelsCallback *); /* linkage=_ZN26IReadTexturePixelsCallbackD4Ev */
	void IReadTexturePixelsCallback(class IReadTexturePixelsCallback *, const class IReadTexturePixelsCallback  &); /* linkage=_ZN26IReadTexturePixelsCallbackC4ERKS_ */
	void IReadTexturePixelsCallback(class IReadTexturePixelsCallback *); /* linkage=_ZN26IReadTexturePixelsCallbackC4Ev */
};

// <01DC820D> ../public/rendersystem/irendercontext.h:178
void IReadTexturePixelsCallback::~IReadTexturePixelsCallback()
{
} /* size: 0 */

// <01DC81DD> ../public/rendersystem/irendercontext.h:178
inline void IReadTexturePixelsCallback::~IReadTexturePixelsCallback()
{
} /* size: 0 */

// <01A03BC4> ../public/rendersystem/irendercontext.h:181
void IReadBufferCallback::IReadBufferCallback()
{
} /* size: 0 */

// <01A03BA8> ../public/rendersystem/irendercontext.h:181
inline void IReadBufferCallback::IReadBufferCallback()
{
} /* size: 0 */

// <0012441C> ../public/rendersystem/irendercontext.h:181
// member functions: 6
// member variable: 1
// vtable entry: 1
// class size: 8
class IReadBufferCallback : public IRenderReadCallback {
public:
	/* class IRenderReadCallback <ancestor>; */ /* 0 8 */
	/* ../public/rendersystem/irendercontext.h:184 */
	virtual void ~IReadBufferCallback(IReadBufferCallback* );
	/* ../public/rendersystem/irendercontext.h:186 */
	virtual void OnReadBuffer(IReadBufferCallback* , const uint8* , int32);
	void IReadBufferCallback(class IReadBufferCallback *, const class IReadBufferCallback  &); /* linkage=_ZN19IReadBufferCallbackC4ERKS_ */
	void IReadBufferCallback(class IReadBufferCallback *); /* linkage=_ZN19IReadBufferCallbackC4Ev */
	virtual void ~IReadBufferCallback(class IReadBufferCallback *); /* linkage=_ZN19IReadBufferCallbackD4Ev */
	virtual void OnReadBuffer(class IReadBufferCallback *, const uint8  *, int32); /* linkage=_ZN19IReadBufferCallback12OnReadBufferEPKhi */
};

// <01A12BDC> ../public/rendersystem/irendercontext.h:184
void IReadBufferCallback::~IReadBufferCallback()
{
} /* size: 0 */

// <01A12BAC> ../public/rendersystem/irendercontext.h:184
inline void IReadBufferCallback::~IReadBufferCallback()
{
} /* size: 0 */

// <001019BE> ../public/rendersystem/irendercontext.h:192
void IRenderContext::IRenderContext()
{
} /* size: 0 */

// <001019A2> ../public/rendersystem/irendercontext.h:192
inline void IRenderContext::IRenderContext()
{
} /* size: 0 */

// <000F07D7> ../public/rendersystem/irendercontext.h:192
// member functions: 312
// member variables: 6
// vtable entries: 140
// class size: 1,232
class IRenderContext {
	/* ../public/rendersystem/irendercontext.h:264 */
	enum ClearSubrectResult_t {
		k_EClearedError = 0,
		k_EClearedNone = 1,
		k_EClearedSubrect = 2,
		k_EClearedTarget = 3,
		k_EClearedChangedRenderState = 2147483648,
		k_EClearedSetTargetViewport = 1073741824,
		k_EClearedSetSubrectViewport = 536870912,
	};
	int ()(void) * * _vptr.IRenderContext; /* 0 8 */
	/* ../public/rendersystem/irendercontext.h:204 */
	virtual void SetStatesToDefault(IRenderContext* , uint32, uint32);
	/* ../public/rendersystem/irendercontext.h:208 */
	virtual void BindRenderTargets(IRenderContext* , const RenderTargetDesc_t& );
	/* ../public/rendersystem/irendercontext.h:213 */
	virtual void ResolveDepthStencilTarget(IRenderContext* , Rect_t* , int, int, HRenderTexture);
	/* ../public/rendersystem/irendercontext.h:218 */
	virtual void ResolveRenderTarget(IRenderContext* , int, Rect_t* , int, int, HRenderTexture);
	/* ../public/rendersystem/irendercontext.h:224 */
	virtual void Clear(IRenderContext* , const RenderClearInfo_t& );
	/* ../public/rendersystem/irendercontext.h:233 */
	void Clear(IRenderContext* , const Vector4D* , int, int, int, int);
	/* ../public/rendersystem/irendercontext.h:239 */
	void Clear(IRenderContext* , const Vector4D& , int);
	/* ../public/rendersystem/irendercontext.h:245 */
	virtual void ClearUnorderedAccessViewUint(IRenderContext* , HRenderTexture, int, const uint32* );
	/* ../public/rendersystem/irendercontext.h:250 */
	virtual void DiscardRenderTarget(IRenderContext* , RenderClearFlags_t, uint);
	/* ../public/rendersystem/irendercontext.h:254 */
	virtual void SetTilingModeHint(IRenderContext* , RenderTilingModeHint_t);
	/* ../public/rendersystem/irendercontext.h:279 */
	virtual ClearSubrectResult_t ClearSubrect(IRenderContext* , const RenderClearInfo_t& , int, int, int, int, bool);
	/* ../public/rendersystem/irendercontext.h:282 */
	virtual void Submit(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:287 */
	virtual void SubmitSecondaryDisplayList(IRenderContext* , CDisplayList* , bool);
	/* ../public/rendersystem/irendercontext.h:290 */
	virtual CDisplayList* DetachCommandList(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:293 */
	virtual void DependsOn(IRenderContext* , CDependencyDescriptor* );
	/* ../public/rendersystem/irendercontext.h:294 */
	virtual void Satisfies(IRenderContext* , CDependencyDescriptor* );
	/* ../public/rendersystem/irendercontext.h:296 */
	virtual void GetViewport(IRenderContext* , RenderViewport_t* , int);
	/* ../public/rendersystem/irendercontext.h:298 */
	virtual void SetViewports(IRenderContext* , int, const RenderViewport_t* );
	/* ../public/rendersystem/irendercontext.h:301 */
	virtual void SetScissorRects(IRenderContext* , int, const Rect_t* );
	/* ../public/rendersystem/irendercontext.h:304 */
	void SetScissorRect(IRenderContext* , const Rect_t& );
	/* ../public/rendersystem/irendercontext.h:310 */
	virtual void BindVertexShader(IRenderContext* , RenderShaderHandle_t, RenderInputLayout_t, const CVsInputSignatureVector* );
	/* ../public/rendersystem/irendercontext.h:313 */
	virtual void BindShader(IRenderContext* , RenderShaderType_t, RenderShaderHandle_t);
	/* ../public/rendersystem/irendercontext.h:316 */
	virtual void BindTexture(IRenderContext* , int, HRenderTexture, RenderTextureDimension_t, RenderShaderType_t, RenderColorSpace_t, int);
	/* ../public/rendersystem/irendercontext.h:319 */
	virtual void BindMipLevelOfTexture(IRenderContext* , int, HRenderTexture, int, RenderTextureDimension_t, RenderShaderType_t, RenderColorSpace_t, int);
	/* ../public/rendersystem/irendercontext.h:322 */
	virtual void BindMipLevelOfTextures(IRenderContext* , int, int, bind_resource_list_t* , RenderShaderType_t);
	/* ../public/rendersystem/irendercontext.h:324 */
	virtual void BindUnordedAccessViews(IRenderContext* , int, int, bind_resource_list_t* , RenderShaderType_t);
	/* ../public/rendersystem/irendercontext.h:325 */
	virtual void MarkTexturesUsedThisFrame(IRenderContext* , int, const texture_use_info_t* );
	/* ../public/rendersystem/irendercontext.h:329 */
	virtual void PrepareTextureForUse(IRenderContext* , HRenderTexture, RenderColorSpace_t, int, int);
	/* ../public/rendersystem/irendercontext.h:331 */
	virtual void SetSamplerStatePS(IRenderContext* , int, RsFilter_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsComparison_t);
	/* ../public/rendersystem/irendercontext.h:335 */
	virtual void SetSamplerStateVS(IRenderContext* , int, RsFilter_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsComparison_t);
	/* ../public/rendersystem/irendercontext.h:339 */
	virtual void SetSamplerState(IRenderContext* , int32, const CSamplerStateDesc* , RenderShaderType_t);
	/* ../public/rendersystem/irendercontext.h:341 */
	virtual void SetSamplerStates(IRenderContext* , int, int, const CSamplerStateDesc* , RenderShaderType_t);
	/* ../public/rendersystem/irendercontext.h:348 */
	virtual void BindDescriptorSets(IRenderContext* , int32, int32, const RenderDescriptorSetHandle_t* , const int32* , const uint32** );
	/* ../public/rendersystem/irendercontext.h:354 */
	virtual void FillAndBindDynamicDescriptorSet(IRenderContext* , RenderDescriptorSetHandle_t, int32, int32, const RenderDescriptorBinding_t* , bool, const int32* , const uint32** );
	/* ../public/rendersystem/irendercontext.h:358 */
	virtual RenderDescriptorSetHandle_t FillDynamicDescriptorSet(IRenderContext* , RenderDescriptorSetHandle_t, int32, const RenderDescriptorBinding_t* , bool);
	/* ../public/rendersystem/irendercontext.h:362 */
	virtual void SetConstantBufferData(IRenderContext* , ConstantBufferHandle_t, const void* , uint32);
	/* ../public/rendersystem/irendercontext.h:365 */
	virtual void SetConstantBufferViewsData(IRenderContext* , ConstantBufferHandle_t, uint32, uint32, const void* const* , uint32);
	/* ../public/rendersystem/irendercontext.h:368 */
	virtual ConstantBufferHandle_t LockDynamicConstantBuffer(IRenderContext* , uint32, DynamicLockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:369 */
	virtual void UnlockDynamicConstantBuffer(IRenderContext* , ConstantBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:372 */
	virtual void BindConstantBuffer(IRenderContext* , RenderShaderType_t, ConstantBufferHandle_t, int);
	/* ../public/rendersystem/irendercontext.h:374 */
	virtual void BindConstantBufferView(IRenderContext* , RenderShaderType_t, ConstantBufferHandle_t, uint32, int);
	/* ../public/rendersystem/irendercontext.h:382 */
	virtual void PushConstants(IRenderContext* , const void* , uint32);
	/* ../public/rendersystem/irendercontext.h:385 */
	virtual void SetAlphaTestState(IRenderContext* , bool, float, RsComparison_t);
	/* ../public/rendersystem/irendercontext.h:387 */
	virtual RsRasterizerStateHandle_t FindOrCreateRasterizerState(IRenderContext* , const RsRasterizerStateDesc_t* );
	/* ../public/rendersystem/irendercontext.h:388 */
	virtual void SetRasterizerState(IRenderContext* , RsRasterizerStateHandle_t);
	/* ../public/rendersystem/irendercontext.h:389 */
	virtual void SetOverrideRasterizerState(IRenderContext* , RsRasterizerStateHandle_t);
	/* ../public/rendersystem/irendercontext.h:391 */
	virtual RsDepthStencilStateHandle_t FindOrCreateDepthStencilState(IRenderContext* , const RsDepthStencilStateDesc_t* );
	/* ../public/rendersystem/irendercontext.h:392 */
	virtual void SetDepthStencilState(IRenderContext* , RsDepthStencilStateHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:393 */
	virtual void SetOverrideDepthStencilState(IRenderContext* , RsDepthStencilStateHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:395 */
	virtual RsBlendStateHandle_t FindOrCreateBlendState(IRenderContext* , const RsBlendStateDesc_t* );
	/* ../public/rendersystem/irendercontext.h:396 */
	virtual void SetBlendState(IRenderContext* , RsBlendStateHandle_t, const float* , uint32);
	/* ../public/rendersystem/irendercontext.h:398 */
	virtual void SetTessellationState(IRenderContext* , bool, uint32);
	/* ../public/rendersystem/irendercontext.h:401 */
	virtual void SetCullMode(IRenderContext* , RenderCullMode_t);
	/* ../public/rendersystem/irendercontext.h:403 */
	virtual void FlipHandedness(IRenderContext* , bool);
	/* ../public/rendersystem/irendercontext.h:404 */
	virtual void SetBlendMode(IRenderContext* , RenderBlendMode_t, const float* );
	/* ../public/rendersystem/irendercontext.h:405 */
	virtual void SetZBufferMode(IRenderContext* , RenderZBufferMode_t);
	/* ../public/rendersystem/irendercontext.h:409 */
	virtual void GetMaxToRender(IRenderContext* , int, int, int* , int* );
	/* ../public/rendersystem/irendercontext.h:412 */
	virtual RenderInputLayout_t GetInputLayoutForVertexBuffer(IRenderContext* , VertexBufferHandle_t);
	/* ../public/rendersystem/irendercontext.h:418 */
	virtual DynamicVertexBufferHandle_t LockDynamicVertexBuffer(IRenderContext* , const BufferDesc_t& , DynamicLockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:419 */
	virtual void UnlockDynamicVertexBuffer(IRenderContext* , DynamicVertexBufferHandle_t, int);
	/* ../public/rendersystem/irendercontext.h:420 */
	virtual DynamicIndexBufferHandle_t LockDynamicIndexBuffer(IRenderContext* , const BufferDesc_t& , DynamicLockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:421 */
	virtual void UnlockDynamicIndexBuffer(IRenderContext* , DynamicIndexBufferHandle_t, int);
	/* ../public/rendersystem/irendercontext.h:422 */
	virtual RenderBufferHandle_t LockDynamicGPUBuffer(IRenderContext* , const BufferDesc_t& , RenderBufferFlags_t, ImageFormat, DynamicLockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:423 */
	virtual void UnlockDynamicGPUBuffer(IRenderContext* , RenderBufferHandle_t, int);
	/* ../public/rendersystem/irendercontext.h:427 */
	virtual bool LockIndexBuffer(IRenderContext* , IndexBufferHandle_t, int, LockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:428 */
	virtual void UnlockIndexBuffer(IRenderContext* , IndexBufferHandle_t, int, LockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:429 */
	virtual bool LockVertexBuffer(IRenderContext* , VertexBufferHandle_t, int, LockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:430 */
	virtual void UnlockVertexBuffer(IRenderContext* , VertexBufferHandle_t, int, LockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:435 */
	virtual bool LockVertexBufferRegion(IRenderContext* , VertexBufferHandle_t, int32, int32, LockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:436 */
	virtual void UnlockVertexBufferRegion(IRenderContext* , VertexBufferHandle_t, int32, int32, LockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:437 */
	virtual bool LockIndexBufferRegion(IRenderContext* , IndexBufferHandle_t, int32, int32, LockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:438 */
	virtual void UnlockIndexBufferRegion(IRenderContext* , IndexBufferHandle_t, int32, int32, LockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:440 */
	virtual void SetVertexData(IRenderContext* , VertexBufferHandle_t, const void* , int, int);
	/* ../public/rendersystem/irendercontext.h:441 */
	virtual void SetIndexData(IRenderContext* , IndexBufferHandle_t, const void* , int, int);
	/* ../public/rendersystem/irendercontext.h:445 */
	virtual bool BindIndexBuffer(IRenderContext* , IndexBufferHandle_t, int);
	/* ../public/rendersystem/irendercontext.h:446 */
	virtual bool BindIndexBuffer(IRenderContext* , DynamicIndexBufferHandle_t, int);
	/* ../public/rendersystem/irendercontext.h:447 */
	virtual bool BindIndexBuffer(IRenderContext* , RenderBufferHandle_t, int, int);
	/* ../public/rendersystem/irendercontext.h:448 */
	virtual bool BindVertexBuffer(IRenderContext* , int, VertexBufferHandle_t, int, int);
	/* ../public/rendersystem/irendercontext.h:449 */
	virtual bool BindVertexBuffer(IRenderContext* , int, DynamicVertexBufferHandle_t, int, int);
	/* ../public/rendersystem/irendercontext.h:450 */
	virtual bool BindVertexBuffer(IRenderContext* , int, RenderBufferHandle_t, int, int);
	/* ../public/rendersystem/irendercontext.h:459 */
	virtual void SetTextureData(IRenderContext* , HRenderTexture, const CTextureDesc* , const void* , int, int, const Rect3D_t* , uint32, const DataRecycleDelegate_t* );
	/* ../public/rendersystem/irendercontext.h:461 */
	virtual void LockDynamicTexture(IRenderContext* , HRenderTexture, LockedDynamicTexture_t& );
	/* ../public/rendersystem/irendercontext.h:464 */
	virtual void UnlockDynamicTexture(IRenderContext* , HRenderTexture);
	/* ../public/rendersystem/irendercontext.h:467 */
	virtual void ReadTexturePixels(IRenderContext* , HRenderTexture, IReadTexturePixelsCallback* , Rect_t* , int, int, bool);
	/* ../public/rendersystem/irendercontext.h:470 */
	virtual void ReadBuffer(IRenderContext* , RenderBufferHandle_t, IReadBufferCallback* , int32, int32, bool);
	/* ../public/rendersystem/irendercontext.h:473 */
	virtual void GenerateMipMaps(IRenderContext* , HRenderTexture);
	/* ../public/rendersystem/irendercontext.h:477 */
	virtual void CopyTexture(IRenderContext* , HRenderTexture, HRenderTexture, Rect_t* , int, int, uint, uint, uint, uint, CopyTextureFlags_t);
	/* ../public/rendersystem/irendercontext.h:478 */
	virtual void CopyFromVolumeTexture(IRenderContext* , HRenderTexture, HRenderTexture, Rect3D_t* , int, int, int, uint, uint, uint, uint, CopyTextureFlags_t);
	/* ../public/rendersystem/irendercontext.h:482 */
	virtual void CopyFallbackTextureData(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:486 */
	virtual void Draw(IRenderContext* , RenderPrimitiveType_t, int, int);
	/* ../public/rendersystem/irendercontext.h:487 */
	virtual void DrawInstanced(IRenderContext* , RenderPrimitiveType_t, int, int, int);
	/* ../public/rendersystem/irendercontext.h:488 */
	virtual void DrawIndexed(IRenderContext* , RenderPrimitiveType_t, int, int, int, int);
	/* ../public/rendersystem/irendercontext.h:489 */
	virtual void DrawIndexedInstanced(IRenderContext* , RenderPrimitiveType_t, int, int, int, int, int, uint);
	/* ../public/rendersystem/irendercontext.h:490 */
	virtual void MultiDrawIndexed(IRenderContext* , RenderPrimitiveType_t, int, const RenderMultiDrawIndexedInfo_t* , uint32, uint32, int);
	/* ../public/rendersystem/irendercontext.h:491 */
	virtual void DrawInstancedIndirect(IRenderContext* , RenderPrimitiveType_t, RenderBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:494 */
	virtual void DrawIndexedInstancedIndirect(IRenderContext* , RenderPrimitiveType_t, RenderBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:495 */
	virtual void MultiDrawIndexedInstancedIndirect(IRenderContext* , RenderPrimitiveType_t, uint32, RenderBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:496 */
	virtual void MultiDrawIndexedInstancedIndirectCount(IRenderContext* , RenderPrimitiveType_t, RenderBufferHandle_t, uint32, uint32, RenderBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:499 */
	virtual void DispatchComputeShader(IRenderContext* , uint32, uint32, uint32);
	/* ../public/rendersystem/irendercontext.h:503 */
	virtual void DispatchComputeShaderIndirect(IRenderContext* , RenderBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:506 */
	virtual void BuildBLAS(IRenderContext* , RenderBLASHandle_t, BLASTriangleData_t* , int);
	/* ../public/rendersystem/irendercontext.h:507 */
	virtual void CompactBLAS(IRenderContext* , RenderBLASHandle_t, RenderBLASHandle_t);
	/* ../public/rendersystem/irendercontext.h:508 */
	virtual void BuildTLAS(IRenderContext* , RenderTLASHandle_t, TLASInstance_t* , int);
	/* ../public/rendersystem/irendercontext.h:509 */
	virtual void BindRayTracingPipeline(IRenderContext* , RenderRayTracePipelineHandle_t);
	/* ../public/rendersystem/irendercontext.h:510 */
	virtual void UpdateRayTraceShaderBindingTable(IRenderContext* , IRaytraceShaderBindingTable* );
	/* ../public/rendersystem/irendercontext.h:511 */
	virtual void TraceRays(IRenderContext* , IRaytraceShaderBindingTable* , uint32, uint32, uint32);
	/* ../public/rendersystem/irendercontext.h:512 */
	virtual void TraceRaysIndirect(IRenderContext* , IRaytraceShaderBindingTable* , RenderBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:517 */
	virtual void CopyGPUBufferHiddenStructureCount(IRenderContext* , RenderBufferHandle_t, RenderBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:520 */
	virtual void SetGPUBufferHiddenStructureCount(IRenderContext* , RenderBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:522 */
	virtual void FillGPUBuffer(IRenderContext* , RenderBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:524 */
	virtual void SetGPUBufferData(IRenderContext* , RenderBufferHandle_t, const void* , uint32, uint32);
	/* ../public/rendersystem/irendercontext.h:527 */
	virtual void Flush(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:530 */
	virtual void ForceFlushGPU(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:533 */
	virtual void ForceDeviceLost(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:536 */
	virtual IRenderDevice* GetDevice(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:539 */
	virtual void BeginPixEvent(IRenderContext* , Color, const char* );
	/* ../public/rendersystem/irendercontext.h:540 */
	virtual void BeginPixEvent(IRenderContext* , const char* );
	/* ../public/rendersystem/irendercontext.h:541 */
	virtual void EndPixEvent(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:542 */
	virtual void PixSetMarker(IRenderContext* , Color, const char* );
	/* ../public/rendersystem/irendercontext.h:543 */
	virtual void PixSetMarker(IRenderContext* , const char* );
	/* ../public/rendersystem/irendercontext.h:547 */
	virtual void BeginQuery(IRenderContext* , RenderQueryHandle_t);
	/* ../public/rendersystem/irendercontext.h:548 */
	virtual void EndQuery(IRenderContext* , RenderQueryHandle_t);
	/* ../public/rendersystem/irendercontext.h:552 */
	virtual void SetDepthBoundsTestEnabled(IRenderContext* , bool);
	/* ../public/rendersystem/irendercontext.h:553 */
	virtual void SetDepthBounds(IRenderContext* , float, float);
	/* ../public/rendersystem/irendercontext.h:561 */
	virtual void BeginRenderPass(IRenderContext* , RenderPassHandle_t, int32, const union RenderPassClearValue_t* , const Rect_t& );
	/* ../public/rendersystem/irendercontext.h:565 */
	virtual void NextSubPass(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:568 */
	virtual void EndRenderPass(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:578 */
	virtual unique_ptr<IBarrierHelper, std::default_delete<IBarrierHelper> > GetBarrierHelper(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:587 */
	virtual void TextureBarrier(IRenderContext* , int32, const HRenderTexture* , const RenderImageLayout_t* , bool);
	/* ../public/rendersystem/irendercontext.h:594 */
	virtual void UAVBarrier(IRenderContext* , int32, const RenderUAVBarrier_t* );
	/* ../public/rendersystem/irendercontext.h:597 */
	virtual void BufferBarrier(IRenderContext* , int32, const RenderBufferBarrier_t* );
	/* ../public/rendersystem/irendercontext.h:598 */
	void BufferBarrier(IRenderContext* , const RenderBufferBarrier_t& );
	/* ../public/rendersystem/irendercontext.h:603 */
	virtual void SetDebugFlag(IRenderContext* , RenderDebugFlag_t, bool);
	/* ../public/rendersystem/irendercontext.h:605 */
	virtual void SetDebugString(IRenderContext* , const char* , ...);
	/* ../public/rendersystem/irendercontext.h:606 */
	virtual void VaSetDebugString(IRenderContext* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../public/rendersystem/irendercontext.h:607 */
	virtual const char* GetDebugString(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:609 */
	virtual void QueueDeviceThreadCallback(IRenderContext* , IDeviceThreadCallback* );
	/* ../public/rendersystem/irendercontext.h:615 */
	virtual RenderSemaphoreHandle_t SemaphoreSignalAtEnd(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:620 */
	virtual void SemaphoreWaitAtBegin(IRenderContext* , RenderSemaphoreHandle_t);
	/* ../public/rendersystem/irendercontext.h:623 */
	virtual void SetSteamVrCompositorTexture(IRenderContext* , HRenderTexture, HRenderTexture);
	/* ../public/rendersystem/irendercontext.h:637 */
	virtual bool IsOwnedByCurrentThread(const IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:640 */
	virtual CRenderAttributes& GetAttributesForModify(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:641 */
	const CRenderAttributes& GetAttributes(const IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:647 */
	void LockAttributes(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:648 */
	void UnlockAttributes(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:672 */
	const IMaterialMode* GetMaterialStateHintMode(const IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:676 */
	HRenderTexture GetMaterialStateHintTexture(const IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:680 */
	uint64 GetMaterialStateHintKey(const IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:684 */
	void SetMaterialStateHint(IRenderContext* , const IMaterialMode* , HRenderTexture, uint64);
	/* ../public/rendersystem/irendercontext.h:690 */
	void ResetMaterialStateHint(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:697 */
	bool IsSecondaryContext(const IRenderContext* );
protected:
	/* ../public/rendersystem/irendercontext.h:704 */
	virtual void ~IRenderContext(IRenderContext* );
	CRenderAttributes m_attributes; /* 16 1184 */
	const class IMaterialMode * m_pMaterialStateHintMode; /* 1200 8 */
	HRenderTexture m_hMaterialStateHintTexture; /* 1208 8 */
	uint64 m_nMaterialStateHintKey; /* 1216 8 */
	bool m_bIsSecondaryContext; /* 1224 1 */
	/* ../public/rendersystem/irendercontext.h:719 */
	CRenderAttributes* GetAttributesPtrForModify(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:729 */
	virtual IRenderContext* GetSubContext(IRenderContext* , const ISceneLayer* );
	/* ../public/rendersystem/irendercontext.h:731 */
	virtual void ReadBuffer(IRenderContext* , IndexBufferHandle_t, IReadBufferCallback* , int32, int32, bool);
	virtual void SetStatesToDefault(class IRenderContext *, uint32, uint32); /* linkage=_ZN14IRenderContext18SetStatesToDefaultEjj */
	virtual void BindRenderTargets(class IRenderContext *, const class RenderTargetDesc_t  &); /* linkage=_ZN14IRenderContext17BindRenderTargetsERK18RenderTargetDesc_t */
	virtual void ResolveDepthStencilTarget(class IRenderContext *, class Rect_t *, int, int, HRenderTexture); /* linkage=_ZN14IRenderContext25ResolveDepthStencilTargetEP6Rect_tii11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void ResolveRenderTarget(class IRenderContext *, int, class Rect_t *, int, int, HRenderTexture); /* linkage=_ZN14IRenderContext19ResolveRenderTargetEiP6Rect_tii11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void Clear(class IRenderContext *, const class RenderClearInfo_t  &); /* linkage=_ZN14IRenderContext5ClearERK17RenderClearInfo_t */
	void Clear(class IRenderContext *, const class Vector4D  *, int, int, int, int); /* linkage=_ZN14IRenderContext5ClearEPK8Vector4Diiii */
	void Clear(class IRenderContext *, const class Vector4D  &, int); /* linkage=_ZN14IRenderContext5ClearERK8Vector4Di */
	virtual void ClearUnorderedAccessViewUint(class IRenderContext *, HRenderTexture, int, const uint32  *); /* linkage=_ZN14IRenderContext28ClearUnorderedAccessViewUintE11CWeakHandleI31InfoForResourceTypeCTextureBaseEiPKj */
	virtual void DiscardRenderTarget(class IRenderContext *, enum RenderClearFlags_t, uint); /* linkage=_ZN14IRenderContext19DiscardRenderTargetE18RenderClearFlags_tj */
	virtual void SetTilingModeHint(class IRenderContext *, enum RenderTilingModeHint_t); /* linkage=_ZN14IRenderContext17SetTilingModeHintE22RenderTilingModeHint_t */
	virtual enum ClearSubrectResult_t ClearSubrect(class IRenderContext *, const class RenderClearInfo_t  &, int, int, int, int, bool); /* linkage=_ZN14IRenderContext12ClearSubrectERK17RenderClearInfo_tiiiib */
	virtual void Submit(class IRenderContext *); /* linkage=_ZN14IRenderContext6SubmitEv */
	virtual void SubmitSecondaryDisplayList(class IRenderContext *, class CDisplayList *, bool); /* linkage=_ZN14IRenderContext26SubmitSecondaryDisplayListEP12CDisplayListb */
	virtual class CDisplayList * DetachCommandList(class IRenderContext *); /* linkage=_ZN14IRenderContext17DetachCommandListEv */
	virtual void DependsOn(class IRenderContext *, class CDependencyDescriptor *); /* linkage=_ZN14IRenderContext9DependsOnEP21CDependencyDescriptor */
	virtual void Satisfies(class IRenderContext *, class CDependencyDescriptor *); /* linkage=_ZN14IRenderContext9SatisfiesEP21CDependencyDescriptor */
	virtual void GetViewport(class IRenderContext *, class RenderViewport_t *, int); /* linkage=_ZN14IRenderContext11GetViewportEP16RenderViewport_ti */
	virtual void SetViewports(class IRenderContext *, int, const class RenderViewport_t  *); /* linkage=_ZN14IRenderContext12SetViewportsEiPK16RenderViewport_t */
	virtual void SetScissorRects(class IRenderContext *, int, const class Rect_t  *); /* linkage=_ZN14IRenderContext15SetScissorRectsEiPK6Rect_t */
	void SetScissorRect(class IRenderContext *, const class Rect_t  &); /* linkage=_ZN14IRenderContext14SetScissorRectERK6Rect_t */
	virtual void BindVertexShader(class IRenderContext *, RenderShaderHandle_t, RenderInputLayout_t, const CVsInputSignatureVector  *); /* linkage=_ZN14IRenderContext16BindVertexShaderEP22RenderShaderHandle_t__P21RenderInputLayout_t__PK10CUtlVectorI25VsInputSignatureElement_t10CUtlMemoryIS5_iEE */
	virtual void BindShader(class IRenderContext *, enum RenderShaderType_t, RenderShaderHandle_t); /* linkage=_ZN14IRenderContext10BindShaderE18RenderShaderType_tP22RenderShaderHandle_t__ */
	virtual void BindTexture(class IRenderContext *, int, HRenderTexture, enum RenderTextureDimension_t, enum RenderShaderType_t, enum RenderColorSpace_t, int); /* linkage=_ZN14IRenderContext11BindTextureEi11CWeakHandleI31InfoForResourceTypeCTextureBaseE24RenderTextureDimension_t18RenderShaderType_t18RenderColorSpace_ti */
	virtual void BindMipLevelOfTexture(class IRenderContext *, int, HRenderTexture, int, enum RenderTextureDimension_t, enum RenderShaderType_t, enum RenderColorSpace_t, int); /* linkage=_ZN14IRenderContext21BindMipLevelOfTextureEi11CWeakHandleI31InfoForResourceTypeCTextureBaseEi24RenderTextureDimension_t18RenderShaderType_t18RenderColorSpace_ti */
	virtual void BindMipLevelOfTextures(class IRenderContext *, int, int, class bind_resource_list_t *, enum RenderShaderType_t); /* linkage=_ZN14IRenderContext22BindMipLevelOfTexturesEiiP20bind_resource_list_t18RenderShaderType_t */
	virtual void BindUnordedAccessViews(class IRenderContext *, int, int, class bind_resource_list_t *, enum RenderShaderType_t); /* linkage=_ZN14IRenderContext22BindUnordedAccessViewsEiiP20bind_resource_list_t18RenderShaderType_t */
	virtual void MarkTexturesUsedThisFrame(class IRenderContext *, int, const class texture_use_info_t  *); /* linkage=_ZN14IRenderContext25MarkTexturesUsedThisFrameEiPK18texture_use_info_t */
	virtual void PrepareTextureForUse(class IRenderContext *, HRenderTexture, enum RenderColorSpace_t, int, int); /* linkage=_ZN14IRenderContext20PrepareTextureForUseE11CWeakHandleI31InfoForResourceTypeCTextureBaseE18RenderColorSpace_tii */
	virtual void SetSamplerStatePS(class IRenderContext *, int, enum RsFilter_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsComparison_t); /* linkage=_ZN14IRenderContext17SetSamplerStatePSEi10RsFilter_t22RsTextureAddressMode_tS1_S1_14RsComparison_t */
	virtual void SetSamplerStateVS(class IRenderContext *, int, enum RsFilter_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsComparison_t); /* linkage=_ZN14IRenderContext17SetSamplerStateVSEi10RsFilter_t22RsTextureAddressMode_tS1_S1_14RsComparison_t */
	virtual void SetSamplerState(class IRenderContext *, int32, const class CSamplerStateDesc  *, enum RenderShaderType_t); /* linkage=_ZN14IRenderContext15SetSamplerStateEiPK17CSamplerStateDesc18RenderShaderType_t */
	virtual void SetSamplerStates(class IRenderContext *, int, int, const class CSamplerStateDesc  *, enum RenderShaderType_t); /* linkage=_ZN14IRenderContext16SetSamplerStatesEiiPK17CSamplerStateDesc18RenderShaderType_t */
	virtual void BindDescriptorSets(class IRenderContext *, int32, int32, const RenderDescriptorSetHandle_t  *, const int32  *, const uint32  * *); /* linkage=_ZN14IRenderContext18BindDescriptorSetsEiiPKP29RenderDescriptorSetHandle_t__PKiPPKj */
	virtual void FillAndBindDynamicDescriptorSet(class IRenderContext *, RenderDescriptorSetHandle_t, int32, int32, const class RenderDescriptorBinding_t  *, bool, const int32  *, const uint32  * *); /* linkage=_ZN14IRenderContext31FillAndBindDynamicDescriptorSetEP29RenderDescriptorSetHandle_t__iiPK25RenderDescriptorBinding_tbPKiPPKj */
	virtual RenderDescriptorSetHandle_t FillDynamicDescriptorSet(class IRenderContext *, RenderDescriptorSetHandle_t, int32, const class RenderDescriptorBinding_t  *, bool); /* linkage=_ZN14IRenderContext24FillDynamicDescriptorSetEP29RenderDescriptorSetHandle_t__iPK25RenderDescriptorBinding_tb */
	virtual void SetConstantBufferData(class IRenderContext *, ConstantBufferHandle_t, const void  *, uint32); /* linkage=_ZN14IRenderContext21SetConstantBufferDataEP24ConstantBufferHandle_t__PKvj */
	virtual void SetConstantBufferViewsData(class IRenderContext *, ConstantBufferHandle_t, uint32, uint32, const void  * const *, uint32); /* linkage=_ZN14IRenderContext26SetConstantBufferViewsDataEP24ConstantBufferHandle_t__jjPKPKvj */
	virtual ConstantBufferHandle_t LockDynamicConstantBuffer(class IRenderContext *, uint32, class DynamicLockDesc_t *); /* linkage=_ZN14IRenderContext25LockDynamicConstantBufferEjP17DynamicLockDesc_t */
	virtual void UnlockDynamicConstantBuffer(class IRenderContext *, ConstantBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext27UnlockDynamicConstantBufferEP24ConstantBufferHandle_t__j */
	virtual void BindConstantBuffer(class IRenderContext *, enum RenderShaderType_t, ConstantBufferHandle_t, int); /* linkage=_ZN14IRenderContext18BindConstantBufferE18RenderShaderType_tP24ConstantBufferHandle_t__i */
	virtual void BindConstantBufferView(class IRenderContext *, enum RenderShaderType_t, ConstantBufferHandle_t, uint32, int); /* linkage=_ZN14IRenderContext22BindConstantBufferViewE18RenderShaderType_tP24ConstantBufferHandle_t__ji */
	virtual void PushConstants(class IRenderContext *, const void  *, uint32); /* linkage=_ZN14IRenderContext13PushConstantsEPKvj */
	virtual void SetAlphaTestState(class IRenderContext *, bool, float, enum RsComparison_t); /* linkage=_ZN14IRenderContext17SetAlphaTestStateEbf14RsComparison_t */
	virtual RsRasterizerStateHandle_t FindOrCreateRasterizerState(class IRenderContext *, const class RsRasterizerStateDesc_t  *); /* linkage=_ZN14IRenderContext27FindOrCreateRasterizerStateEPK23RsRasterizerStateDesc_t */
	virtual void SetRasterizerState(class IRenderContext *, RsRasterizerStateHandle_t); /* linkage=_ZN14IRenderContext18SetRasterizerStateEP27RsRasterizerStateHandle_t__ */
	virtual void SetOverrideRasterizerState(class IRenderContext *, RsRasterizerStateHandle_t); /* linkage=_ZN14IRenderContext26SetOverrideRasterizerStateEP27RsRasterizerStateHandle_t__ */
	virtual RsDepthStencilStateHandle_t FindOrCreateDepthStencilState(class IRenderContext *, const class RsDepthStencilStateDesc_t  *); /* linkage=_ZN14IRenderContext29FindOrCreateDepthStencilStateEPK25RsDepthStencilStateDesc_t */
	virtual void SetDepthStencilState(class IRenderContext *, RsDepthStencilStateHandle_t, uint32); /* linkage=_ZN14IRenderContext20SetDepthStencilStateEP29RsDepthStencilStateHandle_t__j */
	virtual void SetOverrideDepthStencilState(class IRenderContext *, RsDepthStencilStateHandle_t, uint32); /* linkage=_ZN14IRenderContext28SetOverrideDepthStencilStateEP29RsDepthStencilStateHandle_t__j */
	virtual RsBlendStateHandle_t FindOrCreateBlendState(class IRenderContext *, const class RsBlendStateDesc_t  *); /* linkage=_ZN14IRenderContext22FindOrCreateBlendStateEPK18RsBlendStateDesc_t */
	virtual void SetBlendState(class IRenderContext *, RsBlendStateHandle_t, const float  *, uint32); /* linkage=_ZN14IRenderContext13SetBlendStateEP22RsBlendStateHandle_t__PKfj */
	virtual void SetTessellationState(class IRenderContext *, bool, uint32); /* linkage=_ZN14IRenderContext20SetTessellationStateEbj */
	virtual void SetCullMode(class IRenderContext *, enum RenderCullMode_t); /* linkage=_ZN14IRenderContext11SetCullModeE16RenderCullMode_t */
	virtual void FlipHandedness(class IRenderContext *, bool); /* linkage=_ZN14IRenderContext14FlipHandednessEb */
	virtual void SetBlendMode(class IRenderContext *, enum RenderBlendMode_t, const float  *); /* linkage=_ZN14IRenderContext12SetBlendModeE17RenderBlendMode_tPKf */
	virtual void SetZBufferMode(class IRenderContext *, enum RenderZBufferMode_t); /* linkage=_ZN14IRenderContext14SetZBufferModeE19RenderZBufferMode_t */
	virtual void GetMaxToRender(class IRenderContext *, int, int, int *, int *); /* linkage=_ZN14IRenderContext14GetMaxToRenderEiiPiS0_ */
	virtual RenderInputLayout_t GetInputLayoutForVertexBuffer(class IRenderContext *, VertexBufferHandle_t); /* linkage=_ZN14IRenderContext29GetInputLayoutForVertexBufferEP22VertexBufferHandle_t__ */
	virtual DynamicVertexBufferHandle_t LockDynamicVertexBuffer(class IRenderContext *, const class BufferDesc_t  &, class DynamicLockDesc_t *); /* linkage=_ZN14IRenderContext23LockDynamicVertexBufferERK12BufferDesc_tP17DynamicLockDesc_t */
	virtual void UnlockDynamicVertexBuffer(class IRenderContext *, DynamicVertexBufferHandle_t, int); /* linkage=_ZN14IRenderContext25UnlockDynamicVertexBufferEP29DynamicVertexBufferHandle_t__i */
	virtual DynamicIndexBufferHandle_t LockDynamicIndexBuffer(class IRenderContext *, const class BufferDesc_t  &, class DynamicLockDesc_t *); /* linkage=_ZN14IRenderContext22LockDynamicIndexBufferERK12BufferDesc_tP17DynamicLockDesc_t */
	virtual void UnlockDynamicIndexBuffer(class IRenderContext *, DynamicIndexBufferHandle_t, int); /* linkage=_ZN14IRenderContext24UnlockDynamicIndexBufferEP28DynamicIndexBufferHandle_t__i */
	virtual RenderBufferHandle_t LockDynamicGPUBuffer(class IRenderContext *, const class BufferDesc_t  &, enum RenderBufferFlags_t, enum ImageFormat, class DynamicLockDesc_t *); /* linkage=_ZN14IRenderContext20LockDynamicGPUBufferERK12BufferDesc_t19RenderBufferFlags_t11ImageFormatP17DynamicLockDesc_t */
	virtual void UnlockDynamicGPUBuffer(class IRenderContext *, RenderBufferHandle_t, int); /* linkage=_ZN14IRenderContext22UnlockDynamicGPUBufferEP22RenderBufferHandle_t__i */
	virtual bool LockIndexBuffer(class IRenderContext *, IndexBufferHandle_t, int, class LockDesc_t *); /* linkage=_ZN14IRenderContext15LockIndexBufferEP21IndexBufferHandle_t__iP10LockDesc_t */
	virtual void UnlockIndexBuffer(class IRenderContext *, IndexBufferHandle_t, int, class LockDesc_t *); /* linkage=_ZN14IRenderContext17UnlockIndexBufferEP21IndexBufferHandle_t__iP10LockDesc_t */
	virtual bool LockVertexBuffer(class IRenderContext *, VertexBufferHandle_t, int, class LockDesc_t *); /* linkage=_ZN14IRenderContext16LockVertexBufferEP22VertexBufferHandle_t__iP10LockDesc_t */
	virtual void UnlockVertexBuffer(class IRenderContext *, VertexBufferHandle_t, int, class LockDesc_t *); /* linkage=_ZN14IRenderContext18UnlockVertexBufferEP22VertexBufferHandle_t__iP10LockDesc_t */
	virtual bool LockVertexBufferRegion(class IRenderContext *, VertexBufferHandle_t, int32, int32, class LockDesc_t *); /* linkage=_ZN14IRenderContext22LockVertexBufferRegionEP22VertexBufferHandle_t__iiP10LockDesc_t */
	virtual void UnlockVertexBufferRegion(class IRenderContext *, VertexBufferHandle_t, int32, int32, class LockDesc_t *); /* linkage=_ZN14IRenderContext24UnlockVertexBufferRegionEP22VertexBufferHandle_t__iiP10LockDesc_t */
	virtual bool LockIndexBufferRegion(class IRenderContext *, IndexBufferHandle_t, int32, int32, class LockDesc_t *); /* linkage=_ZN14IRenderContext21LockIndexBufferRegionEP21IndexBufferHandle_t__iiP10LockDesc_t */
	virtual void UnlockIndexBufferRegion(class IRenderContext *, IndexBufferHandle_t, int32, int32, class LockDesc_t *); /* linkage=_ZN14IRenderContext23UnlockIndexBufferRegionEP21IndexBufferHandle_t__iiP10LockDesc_t */
	virtual void SetVertexData(class IRenderContext *, VertexBufferHandle_t, const void  *, int, int); /* linkage=_ZN14IRenderContext13SetVertexDataEP22VertexBufferHandle_t__PKvii */
	virtual void SetIndexData(class IRenderContext *, IndexBufferHandle_t, const void  *, int, int); /* linkage=_ZN14IRenderContext12SetIndexDataEP21IndexBufferHandle_t__PKvii */
	virtual bool BindIndexBuffer(class IRenderContext *, IndexBufferHandle_t, int); /* linkage=_ZN14IRenderContext15BindIndexBufferEP21IndexBufferHandle_t__i */
	virtual bool BindIndexBuffer(class IRenderContext *, DynamicIndexBufferHandle_t, int); /* linkage=_ZN14IRenderContext15BindIndexBufferEP28DynamicIndexBufferHandle_t__i */
	virtual bool BindIndexBuffer(class IRenderContext *, RenderBufferHandle_t, int, int); /* linkage=_ZN14IRenderContext15BindIndexBufferEP22RenderBufferHandle_t__ii */
	virtual bool BindVertexBuffer(class IRenderContext *, int, VertexBufferHandle_t, int, int); /* linkage=_ZN14IRenderContext16BindVertexBufferEiP22VertexBufferHandle_t__ii */
	virtual bool BindVertexBuffer(class IRenderContext *, int, DynamicVertexBufferHandle_t, int, int); /* linkage=_ZN14IRenderContext16BindVertexBufferEiP29DynamicVertexBufferHandle_t__ii */
	virtual bool BindVertexBuffer(class IRenderContext *, int, RenderBufferHandle_t, int, int); /* linkage=_ZN14IRenderContext16BindVertexBufferEiP22RenderBufferHandle_t__ii */
	virtual void SetTextureData(class IRenderContext *, HRenderTexture, const class CTextureDesc  *, const void  *, int, int, const class Rect3D_t  *, uint32, const DataRecycleDelegate_t  *); /* linkage=_ZN14IRenderContext14SetTextureDataE11CWeakHandleI31InfoForResourceTypeCTextureBaseEPK12CTextureDescPKviiPK8Rect3D_tjPK12CUtlDelegateIFvS7_EE */
	virtual void LockDynamicTexture(class IRenderContext *, HRenderTexture, class LockedDynamicTexture_t &); /* linkage=_ZN14IRenderContext18LockDynamicTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseER22LockedDynamicTexture_t */
	virtual void UnlockDynamicTexture(class IRenderContext *, HRenderTexture); /* linkage=_ZN14IRenderContext20UnlockDynamicTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void ReadTexturePixels(class IRenderContext *, HRenderTexture, class IReadTexturePixelsCallback *, class Rect_t *, int, int, bool); /* linkage=_ZN14IRenderContext17ReadTexturePixelsE11CWeakHandleI31InfoForResourceTypeCTextureBaseEP26IReadTexturePixelsCallbackP6Rect_tiib */
	virtual void ReadBuffer(class IRenderContext *, RenderBufferHandle_t, class IReadBufferCallback *, int32, int32, bool); /* linkage=_ZN14IRenderContext10ReadBufferEP22RenderBufferHandle_t__P19IReadBufferCallbackiib */
	virtual void GenerateMipMaps(class IRenderContext *, HRenderTexture); /* linkage=_ZN14IRenderContext15GenerateMipMapsE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void CopyTexture(class IRenderContext *, HRenderTexture, HRenderTexture, class Rect_t *, int, int, uint, uint, uint, uint, enum CopyTextureFlags_t); /* linkage=_ZN14IRenderContext11CopyTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseES2_P6Rect_tiijjjj18CopyTextureFlags_t */
	virtual void CopyFromVolumeTexture(class IRenderContext *, HRenderTexture, HRenderTexture, class Rect3D_t *, int, int, int, uint, uint, uint, uint, enum CopyTextureFlags_t); /* linkage=_ZN14IRenderContext21CopyFromVolumeTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseES2_P8Rect3D_tiiijjjj18CopyTextureFlags_t */
	virtual void CopyFallbackTextureData(class IRenderContext *); /* linkage=_ZN14IRenderContext23CopyFallbackTextureDataEv */
	virtual void Draw(class IRenderContext *, enum RenderPrimitiveType_t, int, int); /* linkage=_ZN14IRenderContext4DrawE21RenderPrimitiveType_tii */
	virtual void DrawInstanced(class IRenderContext *, enum RenderPrimitiveType_t, int, int, int); /* linkage=_ZN14IRenderContext13DrawInstancedE21RenderPrimitiveType_tiii */
	virtual void DrawIndexed(class IRenderContext *, enum RenderPrimitiveType_t, int, int, int, int); /* linkage=_ZN14IRenderContext11DrawIndexedE21RenderPrimitiveType_tiiii */
	virtual void DrawIndexedInstanced(class IRenderContext *, enum RenderPrimitiveType_t, int, int, int, int, int, uint); /* linkage=_ZN14IRenderContext20DrawIndexedInstancedE21RenderPrimitiveType_tiiiiij */
	virtual void MultiDrawIndexed(class IRenderContext *, enum RenderPrimitiveType_t, int, const class RenderMultiDrawIndexedInfo_t  *, uint32, uint32, int); /* linkage=_ZN14IRenderContext16MultiDrawIndexedE21RenderPrimitiveType_tiPK28RenderMultiDrawIndexedInfo_tjji */
	virtual void DrawInstancedIndirect(class IRenderContext *, enum RenderPrimitiveType_t, RenderBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext21DrawInstancedIndirectE21RenderPrimitiveType_tP22RenderBufferHandle_t__j */
	virtual void DrawIndexedInstancedIndirect(class IRenderContext *, enum RenderPrimitiveType_t, RenderBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext28DrawIndexedInstancedIndirectE21RenderPrimitiveType_tP22RenderBufferHandle_t__j */
	virtual void MultiDrawIndexedInstancedIndirect(class IRenderContext *, enum RenderPrimitiveType_t, uint32, RenderBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext33MultiDrawIndexedInstancedIndirectE21RenderPrimitiveType_tjP22RenderBufferHandle_t__j */
	virtual void MultiDrawIndexedInstancedIndirectCount(class IRenderContext *, enum RenderPrimitiveType_t, RenderBufferHandle_t, uint32, uint32, RenderBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext38MultiDrawIndexedInstancedIndirectCountE21RenderPrimitiveType_tP22RenderBufferHandle_t__jjS2_j */
	virtual void DispatchComputeShader(class IRenderContext *, uint32, uint32, uint32); /* linkage=_ZN14IRenderContext21DispatchComputeShaderEjjj */
	virtual void DispatchComputeShaderIndirect(class IRenderContext *, RenderBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext29DispatchComputeShaderIndirectEP22RenderBufferHandle_t__j */
	virtual void BuildBLAS(class IRenderContext *, RenderBLASHandle_t, class BLASTriangleData_t *, int); /* linkage=_ZN14IRenderContext9BuildBLASEP20RenderBLASHandle_t__P18BLASTriangleData_ti */
	virtual void CompactBLAS(class IRenderContext *, RenderBLASHandle_t, RenderBLASHandle_t); /* linkage=_ZN14IRenderContext11CompactBLASEP20RenderBLASHandle_t__S1_ */
	virtual void BuildTLAS(class IRenderContext *, RenderTLASHandle_t, class TLASInstance_t *, int); /* linkage=_ZN14IRenderContext9BuildTLASEP20RenderTLASHandle_t__P14TLASInstance_ti */
	virtual void BindRayTracingPipeline(class IRenderContext *, RenderRayTracePipelineHandle_t); /* linkage=_ZN14IRenderContext22BindRayTracingPipelineEP32RenderRayTracePipelineHandle_t__ */
	virtual void UpdateRayTraceShaderBindingTable(class IRenderContext *, class IRaytraceShaderBindingTable *); /* linkage=_ZN14IRenderContext32UpdateRayTraceShaderBindingTableEP27IRaytraceShaderBindingTable */
	virtual void TraceRays(class IRenderContext *, class IRaytraceShaderBindingTable *, uint32, uint32, uint32); /* linkage=_ZN14IRenderContext9TraceRaysEP27IRaytraceShaderBindingTablejjj */
	virtual void TraceRaysIndirect(class IRenderContext *, class IRaytraceShaderBindingTable *, RenderBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext17TraceRaysIndirectEP27IRaytraceShaderBindingTableP22RenderBufferHandle_t__j */
	virtual void CopyGPUBufferHiddenStructureCount(class IRenderContext *, RenderBufferHandle_t, RenderBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext33CopyGPUBufferHiddenStructureCountEP22RenderBufferHandle_t__S1_j */
	virtual void SetGPUBufferHiddenStructureCount(class IRenderContext *, RenderBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext32SetGPUBufferHiddenStructureCountEP22RenderBufferHandle_t__j */
	virtual void FillGPUBuffer(class IRenderContext *, RenderBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext13FillGPUBufferEP22RenderBufferHandle_t__j */
	virtual void SetGPUBufferData(class IRenderContext *, RenderBufferHandle_t, const void  *, uint32, uint32); /* linkage=_ZN14IRenderContext16SetGPUBufferDataEP22RenderBufferHandle_t__PKvjj */
	virtual void Flush(class IRenderContext *); /* linkage=_ZN14IRenderContext5FlushEv */
	virtual void ForceFlushGPU(class IRenderContext *); /* linkage=_ZN14IRenderContext13ForceFlushGPUEv */
	virtual void ForceDeviceLost(class IRenderContext *); /* linkage=_ZN14IRenderContext15ForceDeviceLostEv */
	virtual class IRenderDevice * GetDevice(class IRenderContext *); /* linkage=_ZN14IRenderContext9GetDeviceEv */
	virtual void BeginPixEvent(class IRenderContext *, class Color, const char  *); /* linkage=_ZN14IRenderContext13BeginPixEventE5ColorPKc */
	virtual void BeginPixEvent(class IRenderContext *, const char  *); /* linkage=_ZN14IRenderContext13BeginPixEventEPKc */
	virtual void EndPixEvent(class IRenderContext *); /* linkage=_ZN14IRenderContext11EndPixEventEv */
	virtual void PixSetMarker(class IRenderContext *, class Color, const char  *); /* linkage=_ZN14IRenderContext12PixSetMarkerE5ColorPKc */
	virtual void PixSetMarker(class IRenderContext *, const char  *); /* linkage=_ZN14IRenderContext12PixSetMarkerEPKc */
	virtual void BeginQuery(class IRenderContext *, RenderQueryHandle_t); /* linkage=_ZN14IRenderContext10BeginQueryEP21RenderQueryHandle_t__ */
	virtual void EndQuery(class IRenderContext *, RenderQueryHandle_t); /* linkage=_ZN14IRenderContext8EndQueryEP21RenderQueryHandle_t__ */
	virtual void SetDepthBoundsTestEnabled(class IRenderContext *, bool); /* linkage=_ZN14IRenderContext25SetDepthBoundsTestEnabledEb */
	virtual void SetDepthBounds(class IRenderContext *, float, float); /* linkage=_ZN14IRenderContext14SetDepthBoundsEff */
	virtual void BeginRenderPass(class IRenderContext *, class RenderPassHandle_t, int32, const union RenderPassClearValue_t  *, const class Rect_t  &); /* linkage=_ZN14IRenderContext15BeginRenderPassE18RenderPassHandle_tiPK22RenderPassClearValue_tRK6Rect_t */
	virtual void NextSubPass(class IRenderContext *); /* linkage=_ZN14IRenderContext11NextSubPassEv */
	virtual void EndRenderPass(class IRenderContext *); /* linkage=_ZN14IRenderContext13EndRenderPassEv */
	virtual class unique_ptr<IBarrierHelper, std::default_delete<IBarrierHelper> > GetBarrierHelper(class IRenderContext *); /* linkage=_ZN14IRenderContext16GetBarrierHelperEv */
	virtual void TextureBarrier(class IRenderContext *, int32, const HRenderTexture  *, const enum RenderImageLayout_t  *, bool); /* linkage=_ZN14IRenderContext14TextureBarrierEiPK11CWeakHandleI31InfoForResourceTypeCTextureBaseEPK19RenderImageLayout_tb */
	virtual void UAVBarrier(class IRenderContext *, int32, const class RenderUAVBarrier_t  *); /* linkage=_ZN14IRenderContext10UAVBarrierEiPK18RenderUAVBarrier_t */
	virtual void BufferBarrier(class IRenderContext *, int32, const class RenderBufferBarrier_t  *); /* linkage=_ZN14IRenderContext13BufferBarrierEiPK21RenderBufferBarrier_t */
	void BufferBarrier(class IRenderContext *, const class RenderBufferBarrier_t  &); /* linkage=_ZN14IRenderContext13BufferBarrierERK21RenderBufferBarrier_t */
	virtual void SetDebugFlag(class IRenderContext *, enum RenderDebugFlag_t, bool); /* linkage=_ZN14IRenderContext12SetDebugFlagE17RenderDebugFlag_tb */
	virtual void SetDebugString(class IRenderContext *, const char  *, ...); /* linkage=_ZN14IRenderContext14SetDebugStringEPKcz */
	virtual void VaSetDebugString(class IRenderContext *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN14IRenderContext16VaSetDebugStringEPKcP13__va_list_tag */
	virtual const char  * GetDebugString(class IRenderContext *); /* linkage=_ZN14IRenderContext14GetDebugStringEv */
	virtual void QueueDeviceThreadCallback(class IRenderContext *, class IDeviceThreadCallback *); /* linkage=_ZN14IRenderContext25QueueDeviceThreadCallbackEP21IDeviceThreadCallback */
	virtual RenderSemaphoreHandle_t SemaphoreSignalAtEnd(class IRenderContext *); /* linkage=_ZN14IRenderContext20SemaphoreSignalAtEndEv */
	virtual void SemaphoreWaitAtBegin(class IRenderContext *, RenderSemaphoreHandle_t); /* linkage=_ZN14IRenderContext20SemaphoreWaitAtBeginEP25RenderSemaphoreHandle_t__ */
	virtual void SetSteamVrCompositorTexture(class IRenderContext *, HRenderTexture, HRenderTexture); /* linkage=_ZN14IRenderContext27SetSteamVrCompositorTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseES2_ */
	virtual bool IsOwnedByCurrentThread(const class IRenderContext  *); /* linkage=_ZNK14IRenderContext22IsOwnedByCurrentThreadEv */
	virtual class CRenderAttributes & GetAttributesForModify(class IRenderContext *); /* linkage=_ZN14IRenderContext22GetAttributesForModifyEv */
	const class CRenderAttributes  & GetAttributes(const class IRenderContext  *); /* linkage=_ZNK14IRenderContext13GetAttributesEv */
	void LockAttributes(class IRenderContext *); /* linkage=_ZN14IRenderContext14LockAttributesEv */
	void UnlockAttributes(class IRenderContext *); /* linkage=_ZN14IRenderContext16UnlockAttributesEv */
	const class IMaterialMode  * GetMaterialStateHintMode(const class IRenderContext  *); /* linkage=_ZNK14IRenderContext24GetMaterialStateHintModeEv */
	HRenderTexture GetMaterialStateHintTexture(const class IRenderContext  *); /* linkage=_ZNK14IRenderContext27GetMaterialStateHintTextureEv */
	uint64 GetMaterialStateHintKey(const class IRenderContext  *); /* linkage=_ZNK14IRenderContext23GetMaterialStateHintKeyEv */
	void SetMaterialStateHint(class IRenderContext *, const class IMaterialMode  *, HRenderTexture, uint64); /* linkage=_ZN14IRenderContext20SetMaterialStateHintEPK13IMaterialMode11CWeakHandleI31InfoForResourceTypeCTextureBaseEy */
	void ResetMaterialStateHint(class IRenderContext *); /* linkage=_ZN14IRenderContext22ResetMaterialStateHintEv */
	bool IsSecondaryContext(const class IRenderContext  *); /* linkage=_ZNK14IRenderContext18IsSecondaryContextEv */
	virtual void ~IRenderContext(class IRenderContext *); /* linkage=_ZN14IRenderContextD4Ev */
	class CRenderAttributes * GetAttributesPtrForModify(class IRenderContext *); /* linkage=_ZN14IRenderContext25GetAttributesPtrForModifyEv */
	virtual class IRenderContext * GetSubContext(class IRenderContext *, const class ISceneLayer  *); /* linkage=_ZN14IRenderContext13GetSubContextEPK11ISceneLayer */
	virtual void ReadBuffer(class IRenderContext *, IndexBufferHandle_t, class IReadBufferCallback *, int32, int32, bool); /* linkage=_ZN14IRenderContext10ReadBufferEP21IndexBufferHandle_t__P19IReadBufferCallbackiib */
	void IRenderContext(class IRenderContext *, const class IRenderContext  &); /* linkage=_ZN14IRenderContextC4ERKS_ */
	void IRenderContext(class IRenderContext *); /* linkage=_ZN14IRenderContextC4Ev */
};

// <000D8BE6> ../public/rendersystem/irendercontext.h:192
// member functions: 314
// member variables: 6
// vtable entries: 140
// class size: 1,232
class IRenderContext {
	/* ../public/rendersystem/irendercontext.h:264 */
	enum ClearSubrectResult_t {
		k_EClearedError = 0,
		k_EClearedNone = 1,
		k_EClearedSubrect = 2,
		k_EClearedTarget = 3,
		k_EClearedChangedRenderState = 2147483648,
		k_EClearedSetTargetViewport = 1073741824,
		k_EClearedSetSubrectViewport = 536870912,
	};
	void IRenderContext(IRenderContext* , const IRenderContext& );
	void IRenderContext(IRenderContext* );
	int ()(void) * * _vptr.IRenderContext; /* 0 8 */
	/* ../public/rendersystem/irendercontext.h:204 */
	virtual void SetStatesToDefault(IRenderContext* , uint32, uint32);
	/* ../public/rendersystem/irendercontext.h:208 */
	virtual void BindRenderTargets(IRenderContext* , const RenderTargetDesc_t& );
	/* ../public/rendersystem/irendercontext.h:213 */
	virtual void ResolveDepthStencilTarget(IRenderContext* , Rect_t* , int, int, HRenderTexture);
	/* ../public/rendersystem/irendercontext.h:218 */
	virtual void ResolveRenderTarget(IRenderContext* , int, Rect_t* , int, int, HRenderTexture);
	/* ../public/rendersystem/irendercontext.h:224 */
	virtual void Clear(IRenderContext* , const RenderClearInfo_t& );
	/* ../public/rendersystem/irendercontext.h:233 */
	void Clear(IRenderContext* , const Vector4D* , int, int, int, int);
	/* ../public/rendersystem/irendercontext.h:239 */
	void Clear(IRenderContext* , const Vector4D& , int);
	/* ../public/rendersystem/irendercontext.h:245 */
	virtual void ClearUnorderedAccessViewUint(IRenderContext* , HRenderTexture, int, const uint32* );
	/* ../public/rendersystem/irendercontext.h:250 */
	virtual void DiscardRenderTarget(IRenderContext* , RenderClearFlags_t, uint);
	/* ../public/rendersystem/irendercontext.h:254 */
	virtual void SetTilingModeHint(IRenderContext* , RenderTilingModeHint_t);
	/* ../public/rendersystem/irendercontext.h:279 */
	virtual ClearSubrectResult_t ClearSubrect(IRenderContext* , const RenderClearInfo_t& , int, int, int, int, bool);
	/* ../public/rendersystem/irendercontext.h:282 */
	virtual void Submit(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:287 */
	virtual void SubmitSecondaryDisplayList(IRenderContext* , CDisplayList* , bool);
	/* ../public/rendersystem/irendercontext.h:290 */
	virtual CDisplayList* DetachCommandList(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:293 */
	virtual void DependsOn(IRenderContext* , CDependencyDescriptor* );
	/* ../public/rendersystem/irendercontext.h:294 */
	virtual void Satisfies(IRenderContext* , CDependencyDescriptor* );
	/* ../public/rendersystem/irendercontext.h:296 */
	virtual void GetViewport(IRenderContext* , RenderViewport_t* , int);
	/* ../public/rendersystem/irendercontext.h:298 */
	virtual void SetViewports(IRenderContext* , int, const RenderViewport_t* );
	/* ../public/rendersystem/irendercontext.h:301 */
	virtual void SetScissorRects(IRenderContext* , int, const Rect_t* );
	/* ../public/rendersystem/irendercontext.h:304 */
	void SetScissorRect(IRenderContext* , const Rect_t& );
	/* ../public/rendersystem/irendercontext.h:310 */
	virtual void BindVertexShader(IRenderContext* , RenderShaderHandle_t, RenderInputLayout_t, const CVsInputSignatureVector* );
	/* ../public/rendersystem/irendercontext.h:313 */
	virtual void BindShader(IRenderContext* , RenderShaderType_t, RenderShaderHandle_t);
	/* ../public/rendersystem/irendercontext.h:316 */
	virtual void BindTexture(IRenderContext* , int, HRenderTexture, RenderTextureDimension_t, RenderShaderType_t, RenderColorSpace_t, int);
	/* ../public/rendersystem/irendercontext.h:319 */
	virtual void BindMipLevelOfTexture(IRenderContext* , int, HRenderTexture, int, RenderTextureDimension_t, RenderShaderType_t, RenderColorSpace_t, int);
	/* ../public/rendersystem/irendercontext.h:322 */
	virtual void BindMipLevelOfTextures(IRenderContext* , int, int, bind_resource_list_t* , RenderShaderType_t);
	/* ../public/rendersystem/irendercontext.h:324 */
	virtual void BindUnordedAccessViews(IRenderContext* , int, int, bind_resource_list_t* , RenderShaderType_t);
	/* ../public/rendersystem/irendercontext.h:325 */
	virtual void MarkTexturesUsedThisFrame(IRenderContext* , int, const texture_use_info_t* );
	/* ../public/rendersystem/irendercontext.h:329 */
	virtual void PrepareTextureForUse(IRenderContext* , HRenderTexture, RenderColorSpace_t, int, int);
	/* ../public/rendersystem/irendercontext.h:331 */
	virtual void SetSamplerStatePS(IRenderContext* , int, RsFilter_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsComparison_t);
	/* ../public/rendersystem/irendercontext.h:335 */
	virtual void SetSamplerStateVS(IRenderContext* , int, RsFilter_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsComparison_t);
	/* ../public/rendersystem/irendercontext.h:339 */
	virtual void SetSamplerState(IRenderContext* , int32, const CSamplerStateDesc* , RenderShaderType_t);
	/* ../public/rendersystem/irendercontext.h:341 */
	virtual void SetSamplerStates(IRenderContext* , int, int, const CSamplerStateDesc* , RenderShaderType_t);
	/* ../public/rendersystem/irendercontext.h:348 */
	virtual void BindDescriptorSets(IRenderContext* , int32, int32, const RenderDescriptorSetHandle_t* , const int32* , const uint32** );
	/* ../public/rendersystem/irendercontext.h:354 */
	virtual void FillAndBindDynamicDescriptorSet(IRenderContext* , RenderDescriptorSetHandle_t, int32, int32, const RenderDescriptorBinding_t* , bool, const int32* , const uint32** );
	/* ../public/rendersystem/irendercontext.h:358 */
	virtual RenderDescriptorSetHandle_t FillDynamicDescriptorSet(IRenderContext* , RenderDescriptorSetHandle_t, int32, const RenderDescriptorBinding_t* , bool);
	/* ../public/rendersystem/irendercontext.h:362 */
	virtual void SetConstantBufferData(IRenderContext* , ConstantBufferHandle_t, const void* , uint32);
	/* ../public/rendersystem/irendercontext.h:365 */
	virtual void SetConstantBufferViewsData(IRenderContext* , ConstantBufferHandle_t, uint32, uint32, const void* const* , uint32);
	/* ../public/rendersystem/irendercontext.h:368 */
	virtual ConstantBufferHandle_t LockDynamicConstantBuffer(IRenderContext* , uint32, DynamicLockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:369 */
	virtual void UnlockDynamicConstantBuffer(IRenderContext* , ConstantBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:372 */
	virtual void BindConstantBuffer(IRenderContext* , RenderShaderType_t, ConstantBufferHandle_t, int);
	/* ../public/rendersystem/irendercontext.h:374 */
	virtual void BindConstantBufferView(IRenderContext* , RenderShaderType_t, ConstantBufferHandle_t, uint32, int);
	/* ../public/rendersystem/irendercontext.h:382 */
	virtual void PushConstants(IRenderContext* , const void* , uint32);
	/* ../public/rendersystem/irendercontext.h:385 */
	virtual void SetAlphaTestState(IRenderContext* , bool, float, RsComparison_t);
	/* ../public/rendersystem/irendercontext.h:387 */
	virtual RsRasterizerStateHandle_t FindOrCreateRasterizerState(IRenderContext* , const RsRasterizerStateDesc_t* );
	/* ../public/rendersystem/irendercontext.h:388 */
	virtual void SetRasterizerState(IRenderContext* , RsRasterizerStateHandle_t);
	/* ../public/rendersystem/irendercontext.h:389 */
	virtual void SetOverrideRasterizerState(IRenderContext* , RsRasterizerStateHandle_t);
	/* ../public/rendersystem/irendercontext.h:391 */
	virtual RsDepthStencilStateHandle_t FindOrCreateDepthStencilState(IRenderContext* , const RsDepthStencilStateDesc_t* );
	/* ../public/rendersystem/irendercontext.h:392 */
	virtual void SetDepthStencilState(IRenderContext* , RsDepthStencilStateHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:393 */
	virtual void SetOverrideDepthStencilState(IRenderContext* , RsDepthStencilStateHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:395 */
	virtual RsBlendStateHandle_t FindOrCreateBlendState(IRenderContext* , const RsBlendStateDesc_t* );
	/* ../public/rendersystem/irendercontext.h:396 */
	virtual void SetBlendState(IRenderContext* , RsBlendStateHandle_t, const float* , uint32);
	/* ../public/rendersystem/irendercontext.h:398 */
	virtual void SetTessellationState(IRenderContext* , bool, uint32);
	/* ../public/rendersystem/irendercontext.h:401 */
	virtual void SetCullMode(IRenderContext* , RenderCullMode_t);
	/* ../public/rendersystem/irendercontext.h:403 */
	virtual void FlipHandedness(IRenderContext* , bool);
	/* ../public/rendersystem/irendercontext.h:404 */
	virtual void SetBlendMode(IRenderContext* , RenderBlendMode_t, const float* );
	/* ../public/rendersystem/irendercontext.h:405 */
	virtual void SetZBufferMode(IRenderContext* , RenderZBufferMode_t);
	/* ../public/rendersystem/irendercontext.h:409 */
	virtual void GetMaxToRender(IRenderContext* , int, int, int* , int* );
	/* ../public/rendersystem/irendercontext.h:412 */
	virtual RenderInputLayout_t GetInputLayoutForVertexBuffer(IRenderContext* , VertexBufferHandle_t);
	/* ../public/rendersystem/irendercontext.h:418 */
	virtual DynamicVertexBufferHandle_t LockDynamicVertexBuffer(IRenderContext* , const BufferDesc_t& , DynamicLockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:419 */
	virtual void UnlockDynamicVertexBuffer(IRenderContext* , DynamicVertexBufferHandle_t, int);
	/* ../public/rendersystem/irendercontext.h:420 */
	virtual DynamicIndexBufferHandle_t LockDynamicIndexBuffer(IRenderContext* , const BufferDesc_t& , DynamicLockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:421 */
	virtual void UnlockDynamicIndexBuffer(IRenderContext* , DynamicIndexBufferHandle_t, int);
	/* ../public/rendersystem/irendercontext.h:422 */
	virtual RenderBufferHandle_t LockDynamicGPUBuffer(IRenderContext* , const BufferDesc_t& , RenderBufferFlags_t, ImageFormat, DynamicLockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:423 */
	virtual void UnlockDynamicGPUBuffer(IRenderContext* , RenderBufferHandle_t, int);
	/* ../public/rendersystem/irendercontext.h:427 */
	virtual bool LockIndexBuffer(IRenderContext* , IndexBufferHandle_t, int, LockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:428 */
	virtual void UnlockIndexBuffer(IRenderContext* , IndexBufferHandle_t, int, LockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:429 */
	virtual bool LockVertexBuffer(IRenderContext* , VertexBufferHandle_t, int, LockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:430 */
	virtual void UnlockVertexBuffer(IRenderContext* , VertexBufferHandle_t, int, LockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:435 */
	virtual bool LockVertexBufferRegion(IRenderContext* , VertexBufferHandle_t, int32, int32, LockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:436 */
	virtual void UnlockVertexBufferRegion(IRenderContext* , VertexBufferHandle_t, int32, int32, LockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:437 */
	virtual bool LockIndexBufferRegion(IRenderContext* , IndexBufferHandle_t, int32, int32, LockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:438 */
	virtual void UnlockIndexBufferRegion(IRenderContext* , IndexBufferHandle_t, int32, int32, LockDesc_t* );
	/* ../public/rendersystem/irendercontext.h:440 */
	virtual void SetVertexData(IRenderContext* , VertexBufferHandle_t, const void* , int, int);
	/* ../public/rendersystem/irendercontext.h:441 */
	virtual void SetIndexData(IRenderContext* , IndexBufferHandle_t, const void* , int, int);
	/* ../public/rendersystem/irendercontext.h:445 */
	virtual bool BindIndexBuffer(IRenderContext* , IndexBufferHandle_t, int);
	/* ../public/rendersystem/irendercontext.h:446 */
	virtual bool BindIndexBuffer(IRenderContext* , DynamicIndexBufferHandle_t, int);
	/* ../public/rendersystem/irendercontext.h:447 */
	virtual bool BindIndexBuffer(IRenderContext* , RenderBufferHandle_t, int, int);
	/* ../public/rendersystem/irendercontext.h:448 */
	virtual bool BindVertexBuffer(IRenderContext* , int, VertexBufferHandle_t, int, int);
	/* ../public/rendersystem/irendercontext.h:449 */
	virtual bool BindVertexBuffer(IRenderContext* , int, DynamicVertexBufferHandle_t, int, int);
	/* ../public/rendersystem/irendercontext.h:450 */
	virtual bool BindVertexBuffer(IRenderContext* , int, RenderBufferHandle_t, int, int);
	/* ../public/rendersystem/irendercontext.h:459 */
	virtual void SetTextureData(IRenderContext* , HRenderTexture, const CTextureDesc* , const void* , int, int, const Rect3D_t* , uint32, const DataRecycleDelegate_t* );
	/* ../public/rendersystem/irendercontext.h:461 */
	virtual void LockDynamicTexture(IRenderContext* , HRenderTexture, LockedDynamicTexture_t& );
	/* ../public/rendersystem/irendercontext.h:464 */
	virtual void UnlockDynamicTexture(IRenderContext* , HRenderTexture);
	/* ../public/rendersystem/irendercontext.h:467 */
	virtual void ReadTexturePixels(IRenderContext* , HRenderTexture, IReadTexturePixelsCallback* , Rect_t* , int, int, bool);
	/* ../public/rendersystem/irendercontext.h:470 */
	virtual void ReadBuffer(IRenderContext* , RenderBufferHandle_t, IReadBufferCallback* , int32, int32, bool);
	/* ../public/rendersystem/irendercontext.h:473 */
	virtual void GenerateMipMaps(IRenderContext* , HRenderTexture);
	/* ../public/rendersystem/irendercontext.h:477 */
	virtual void CopyTexture(IRenderContext* , HRenderTexture, HRenderTexture, Rect_t* , int, int, uint, uint, uint, uint, CopyTextureFlags_t);
	/* ../public/rendersystem/irendercontext.h:478 */
	virtual void CopyFromVolumeTexture(IRenderContext* , HRenderTexture, HRenderTexture, Rect3D_t* , int, int, int, uint, uint, uint, uint, CopyTextureFlags_t);
	/* ../public/rendersystem/irendercontext.h:482 */
	virtual void CopyFallbackTextureData(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:486 */
	virtual void Draw(IRenderContext* , RenderPrimitiveType_t, int, int);
	/* ../public/rendersystem/irendercontext.h:487 */
	virtual void DrawInstanced(IRenderContext* , RenderPrimitiveType_t, int, int, int);
	/* ../public/rendersystem/irendercontext.h:488 */
	virtual void DrawIndexed(IRenderContext* , RenderPrimitiveType_t, int, int, int, int);
	/* ../public/rendersystem/irendercontext.h:489 */
	virtual void DrawIndexedInstanced(IRenderContext* , RenderPrimitiveType_t, int, int, int, int, int, uint);
	/* ../public/rendersystem/irendercontext.h:490 */
	virtual void MultiDrawIndexed(IRenderContext* , RenderPrimitiveType_t, int, const RenderMultiDrawIndexedInfo_t* , uint32, uint32, int);
	/* ../public/rendersystem/irendercontext.h:491 */
	virtual void DrawInstancedIndirect(IRenderContext* , RenderPrimitiveType_t, RenderBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:494 */
	virtual void DrawIndexedInstancedIndirect(IRenderContext* , RenderPrimitiveType_t, RenderBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:495 */
	virtual void MultiDrawIndexedInstancedIndirect(IRenderContext* , RenderPrimitiveType_t, uint32, RenderBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:496 */
	virtual void MultiDrawIndexedInstancedIndirectCount(IRenderContext* , RenderPrimitiveType_t, RenderBufferHandle_t, uint32, uint32, RenderBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:499 */
	virtual void DispatchComputeShader(IRenderContext* , uint32, uint32, uint32);
	/* ../public/rendersystem/irendercontext.h:503 */
	virtual void DispatchComputeShaderIndirect(IRenderContext* , RenderBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:506 */
	virtual void BuildBLAS(IRenderContext* , RenderBLASHandle_t, BLASTriangleData_t* , int);
	/* ../public/rendersystem/irendercontext.h:507 */
	virtual void CompactBLAS(IRenderContext* , RenderBLASHandle_t, RenderBLASHandle_t);
	/* ../public/rendersystem/irendercontext.h:508 */
	virtual void BuildTLAS(IRenderContext* , RenderTLASHandle_t, TLASInstance_t* , int);
	/* ../public/rendersystem/irendercontext.h:509 */
	virtual void BindRayTracingPipeline(IRenderContext* , RenderRayTracePipelineHandle_t);
	/* ../public/rendersystem/irendercontext.h:510 */
	virtual void UpdateRayTraceShaderBindingTable(IRenderContext* , IRaytraceShaderBindingTable* );
	/* ../public/rendersystem/irendercontext.h:511 */
	virtual void TraceRays(IRenderContext* , IRaytraceShaderBindingTable* , uint32, uint32, uint32);
	/* ../public/rendersystem/irendercontext.h:512 */
	virtual void TraceRaysIndirect(IRenderContext* , IRaytraceShaderBindingTable* , RenderBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:517 */
	virtual void CopyGPUBufferHiddenStructureCount(IRenderContext* , RenderBufferHandle_t, RenderBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:520 */
	virtual void SetGPUBufferHiddenStructureCount(IRenderContext* , RenderBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:522 */
	virtual void FillGPUBuffer(IRenderContext* , RenderBufferHandle_t, uint32);
	/* ../public/rendersystem/irendercontext.h:524 */
	virtual void SetGPUBufferData(IRenderContext* , RenderBufferHandle_t, const void* , uint32, uint32);
	/* ../public/rendersystem/irendercontext.h:527 */
	virtual void Flush(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:530 */
	virtual void ForceFlushGPU(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:533 */
	virtual void ForceDeviceLost(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:536 */
	virtual IRenderDevice* GetDevice(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:539 */
	virtual void BeginPixEvent(IRenderContext* , Color, const char* );
	/* ../public/rendersystem/irendercontext.h:540 */
	virtual void BeginPixEvent(IRenderContext* , const char* );
	/* ../public/rendersystem/irendercontext.h:541 */
	virtual void EndPixEvent(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:542 */
	virtual void PixSetMarker(IRenderContext* , Color, const char* );
	/* ../public/rendersystem/irendercontext.h:543 */
	virtual void PixSetMarker(IRenderContext* , const char* );
	/* ../public/rendersystem/irendercontext.h:547 */
	virtual void BeginQuery(IRenderContext* , RenderQueryHandle_t);
	/* ../public/rendersystem/irendercontext.h:548 */
	virtual void EndQuery(IRenderContext* , RenderQueryHandle_t);
	/* ../public/rendersystem/irendercontext.h:552 */
	virtual void SetDepthBoundsTestEnabled(IRenderContext* , bool);
	/* ../public/rendersystem/irendercontext.h:553 */
	virtual void SetDepthBounds(IRenderContext* , float, float);
	/* ../public/rendersystem/irendercontext.h:561 */
	virtual void BeginRenderPass(IRenderContext* , RenderPassHandle_t, int32, const union RenderPassClearValue_t* , const Rect_t& );
	/* ../public/rendersystem/irendercontext.h:565 */
	virtual void NextSubPass(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:568 */
	virtual void EndRenderPass(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:578 */
	virtual unique_ptr<IBarrierHelper, std::default_delete<IBarrierHelper> > GetBarrierHelper(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:587 */
	virtual void TextureBarrier(IRenderContext* , int32, const HRenderTexture* , const RenderImageLayout_t* , bool);
	/* ../public/rendersystem/irendercontext.h:594 */
	virtual void UAVBarrier(IRenderContext* , int32, const RenderUAVBarrier_t* );
	/* ../public/rendersystem/irendercontext.h:597 */
	virtual void BufferBarrier(IRenderContext* , int32, const RenderBufferBarrier_t* );
	/* ../public/rendersystem/irendercontext.h:598 */
	void BufferBarrier(IRenderContext* , const RenderBufferBarrier_t& );
	/* ../public/rendersystem/irendercontext.h:603 */
	virtual void SetDebugFlag(IRenderContext* , RenderDebugFlag_t, bool);
	/* ../public/rendersystem/irendercontext.h:605 */
	virtual void SetDebugString(IRenderContext* , const char* , ...);
	/* ../public/rendersystem/irendercontext.h:606 */
	virtual void VaSetDebugString(IRenderContext* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../public/rendersystem/irendercontext.h:607 */
	virtual const char* GetDebugString(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:609 */
	virtual void QueueDeviceThreadCallback(IRenderContext* , IDeviceThreadCallback* );
	/* ../public/rendersystem/irendercontext.h:615 */
	virtual RenderSemaphoreHandle_t SemaphoreSignalAtEnd(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:620 */
	virtual void SemaphoreWaitAtBegin(IRenderContext* , RenderSemaphoreHandle_t);
	/* ../public/rendersystem/irendercontext.h:623 */
	virtual void SetSteamVrCompositorTexture(IRenderContext* , HRenderTexture, HRenderTexture);
	/* ../public/rendersystem/irendercontext.h:637 */
	virtual bool IsOwnedByCurrentThread(const IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:640 */
	virtual CRenderAttributes& GetAttributesForModify(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:641 */
	const CRenderAttributes& GetAttributes(const IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:647 */
	void LockAttributes(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:648 */
	void UnlockAttributes(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:672 */
	const IMaterialMode* GetMaterialStateHintMode(const IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:676 */
	HRenderTexture GetMaterialStateHintTexture(const IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:680 */
	uint64 GetMaterialStateHintKey(const IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:684 */
	void SetMaterialStateHint(IRenderContext* , const IMaterialMode* , HRenderTexture, uint64);
	/* ../public/rendersystem/irendercontext.h:690 */
	void ResetMaterialStateHint(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:697 */
	bool IsSecondaryContext(const IRenderContext* );
protected:
	/* ../public/rendersystem/irendercontext.h:704 */
	virtual void ~IRenderContext(IRenderContext* );
	CRenderAttributes m_attributes; /* 16 1184 */
	const class IMaterialMode * m_pMaterialStateHintMode; /* 1200 8 */
	HRenderTexture m_hMaterialStateHintTexture; /* 1208 8 */
	uint64 m_nMaterialStateHintKey; /* 1216 8 */
	bool m_bIsSecondaryContext; /* 1224 1 */
	/* ../public/rendersystem/irendercontext.h:719 */
	CRenderAttributes* GetAttributesPtrForModify(IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:729 */
	virtual IRenderContext* GetSubContext(IRenderContext* , const ISceneLayer* );
	/* ../public/rendersystem/irendercontext.h:731 */
	virtual void ReadBuffer(IRenderContext* , IndexBufferHandle_t, IReadBufferCallback* , int32, int32, bool);
	virtual void SetStatesToDefault(class IRenderContext *, uint32, uint32); /* linkage=_ZN14IRenderContext18SetStatesToDefaultEjj */
	virtual void BindRenderTargets(class IRenderContext *, const class RenderTargetDesc_t  &); /* linkage=_ZN14IRenderContext17BindRenderTargetsERK18RenderTargetDesc_t */
	virtual void ResolveDepthStencilTarget(class IRenderContext *, class Rect_t *, int, int, HRenderTexture); /* linkage=_ZN14IRenderContext25ResolveDepthStencilTargetEP6Rect_tii11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void ResolveRenderTarget(class IRenderContext *, int, class Rect_t *, int, int, HRenderTexture); /* linkage=_ZN14IRenderContext19ResolveRenderTargetEiP6Rect_tii11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void Clear(class IRenderContext *, const class RenderClearInfo_t  &); /* linkage=_ZN14IRenderContext5ClearERK17RenderClearInfo_t */
	void Clear(class IRenderContext *, const class Vector4D  *, int, int, int, int); /* linkage=_ZN14IRenderContext5ClearEPK8Vector4Diiii */
	void Clear(class IRenderContext *, const class Vector4D  &, int); /* linkage=_ZN14IRenderContext5ClearERK8Vector4Di */
	virtual void ClearUnorderedAccessViewUint(class IRenderContext *, HRenderTexture, int, const uint32  *); /* linkage=_ZN14IRenderContext28ClearUnorderedAccessViewUintE11CWeakHandleI31InfoForResourceTypeCTextureBaseEiPKj */
	virtual void DiscardRenderTarget(class IRenderContext *, enum RenderClearFlags_t, uint); /* linkage=_ZN14IRenderContext19DiscardRenderTargetE18RenderClearFlags_tj */
	virtual void SetTilingModeHint(class IRenderContext *, enum RenderTilingModeHint_t); /* linkage=_ZN14IRenderContext17SetTilingModeHintE22RenderTilingModeHint_t */
	virtual enum ClearSubrectResult_t ClearSubrect(class IRenderContext *, const class RenderClearInfo_t  &, int, int, int, int, bool); /* linkage=_ZN14IRenderContext12ClearSubrectERK17RenderClearInfo_tiiiib */
	virtual void Submit(class IRenderContext *); /* linkage=_ZN14IRenderContext6SubmitEv */
	virtual void SubmitSecondaryDisplayList(class IRenderContext *, class CDisplayList *, bool); /* linkage=_ZN14IRenderContext26SubmitSecondaryDisplayListEP12CDisplayListb */
	virtual class CDisplayList * DetachCommandList(class IRenderContext *); /* linkage=_ZN14IRenderContext17DetachCommandListEv */
	virtual void DependsOn(class IRenderContext *, class CDependencyDescriptor *); /* linkage=_ZN14IRenderContext9DependsOnEP21CDependencyDescriptor */
	virtual void Satisfies(class IRenderContext *, class CDependencyDescriptor *); /* linkage=_ZN14IRenderContext9SatisfiesEP21CDependencyDescriptor */
	virtual void GetViewport(class IRenderContext *, class RenderViewport_t *, int); /* linkage=_ZN14IRenderContext11GetViewportEP16RenderViewport_ti */
	virtual void SetViewports(class IRenderContext *, int, const class RenderViewport_t  *); /* linkage=_ZN14IRenderContext12SetViewportsEiPK16RenderViewport_t */
	virtual void SetScissorRects(class IRenderContext *, int, const class Rect_t  *); /* linkage=_ZN14IRenderContext15SetScissorRectsEiPK6Rect_t */
	void SetScissorRect(class IRenderContext *, const class Rect_t  &); /* linkage=_ZN14IRenderContext14SetScissorRectERK6Rect_t */
	virtual void BindVertexShader(class IRenderContext *, RenderShaderHandle_t, RenderInputLayout_t, const CVsInputSignatureVector  *); /* linkage=_ZN14IRenderContext16BindVertexShaderEP22RenderShaderHandle_t__P21RenderInputLayout_t__PK10CUtlVectorI25VsInputSignatureElement_t10CUtlMemoryIS5_iEE */
	virtual void BindShader(class IRenderContext *, enum RenderShaderType_t, RenderShaderHandle_t); /* linkage=_ZN14IRenderContext10BindShaderE18RenderShaderType_tP22RenderShaderHandle_t__ */
	virtual void BindTexture(class IRenderContext *, int, HRenderTexture, enum RenderTextureDimension_t, enum RenderShaderType_t, enum RenderColorSpace_t, int); /* linkage=_ZN14IRenderContext11BindTextureEi11CWeakHandleI31InfoForResourceTypeCTextureBaseE24RenderTextureDimension_t18RenderShaderType_t18RenderColorSpace_ti */
	virtual void BindMipLevelOfTexture(class IRenderContext *, int, HRenderTexture, int, enum RenderTextureDimension_t, enum RenderShaderType_t, enum RenderColorSpace_t, int); /* linkage=_ZN14IRenderContext21BindMipLevelOfTextureEi11CWeakHandleI31InfoForResourceTypeCTextureBaseEi24RenderTextureDimension_t18RenderShaderType_t18RenderColorSpace_ti */
	virtual void BindMipLevelOfTextures(class IRenderContext *, int, int, class bind_resource_list_t *, enum RenderShaderType_t); /* linkage=_ZN14IRenderContext22BindMipLevelOfTexturesEiiP20bind_resource_list_t18RenderShaderType_t */
	virtual void BindUnordedAccessViews(class IRenderContext *, int, int, class bind_resource_list_t *, enum RenderShaderType_t); /* linkage=_ZN14IRenderContext22BindUnordedAccessViewsEiiP20bind_resource_list_t18RenderShaderType_t */
	virtual void MarkTexturesUsedThisFrame(class IRenderContext *, int, const class texture_use_info_t  *); /* linkage=_ZN14IRenderContext25MarkTexturesUsedThisFrameEiPK18texture_use_info_t */
	virtual void PrepareTextureForUse(class IRenderContext *, HRenderTexture, enum RenderColorSpace_t, int, int); /* linkage=_ZN14IRenderContext20PrepareTextureForUseE11CWeakHandleI31InfoForResourceTypeCTextureBaseE18RenderColorSpace_tii */
	virtual void SetSamplerStatePS(class IRenderContext *, int, enum RsFilter_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsComparison_t); /* linkage=_ZN14IRenderContext17SetSamplerStatePSEi10RsFilter_t22RsTextureAddressMode_tS1_S1_14RsComparison_t */
	virtual void SetSamplerStateVS(class IRenderContext *, int, enum RsFilter_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsTextureAddressMode_t, enum RsComparison_t); /* linkage=_ZN14IRenderContext17SetSamplerStateVSEi10RsFilter_t22RsTextureAddressMode_tS1_S1_14RsComparison_t */
	virtual void SetSamplerState(class IRenderContext *, int32, const class CSamplerStateDesc  *, enum RenderShaderType_t); /* linkage=_ZN14IRenderContext15SetSamplerStateEiPK17CSamplerStateDesc18RenderShaderType_t */
	virtual void SetSamplerStates(class IRenderContext *, int, int, const class CSamplerStateDesc  *, enum RenderShaderType_t); /* linkage=_ZN14IRenderContext16SetSamplerStatesEiiPK17CSamplerStateDesc18RenderShaderType_t */
	virtual void BindDescriptorSets(class IRenderContext *, int32, int32, const RenderDescriptorSetHandle_t  *, const int32  *, const uint32  * *); /* linkage=_ZN14IRenderContext18BindDescriptorSetsEiiPKP29RenderDescriptorSetHandle_t__PKiPPKj */
	virtual void FillAndBindDynamicDescriptorSet(class IRenderContext *, RenderDescriptorSetHandle_t, int32, int32, const class RenderDescriptorBinding_t  *, bool, const int32  *, const uint32  * *); /* linkage=_ZN14IRenderContext31FillAndBindDynamicDescriptorSetEP29RenderDescriptorSetHandle_t__iiPK25RenderDescriptorBinding_tbPKiPPKj */
	virtual RenderDescriptorSetHandle_t FillDynamicDescriptorSet(class IRenderContext *, RenderDescriptorSetHandle_t, int32, const class RenderDescriptorBinding_t  *, bool); /* linkage=_ZN14IRenderContext24FillDynamicDescriptorSetEP29RenderDescriptorSetHandle_t__iPK25RenderDescriptorBinding_tb */
	virtual void SetConstantBufferData(class IRenderContext *, ConstantBufferHandle_t, const void  *, uint32); /* linkage=_ZN14IRenderContext21SetConstantBufferDataEP24ConstantBufferHandle_t__PKvj */
	virtual void SetConstantBufferViewsData(class IRenderContext *, ConstantBufferHandle_t, uint32, uint32, const void  * const *, uint32); /* linkage=_ZN14IRenderContext26SetConstantBufferViewsDataEP24ConstantBufferHandle_t__jjPKPKvj */
	virtual ConstantBufferHandle_t LockDynamicConstantBuffer(class IRenderContext *, uint32, class DynamicLockDesc_t *); /* linkage=_ZN14IRenderContext25LockDynamicConstantBufferEjP17DynamicLockDesc_t */
	virtual void UnlockDynamicConstantBuffer(class IRenderContext *, ConstantBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext27UnlockDynamicConstantBufferEP24ConstantBufferHandle_t__j */
	virtual void BindConstantBuffer(class IRenderContext *, enum RenderShaderType_t, ConstantBufferHandle_t, int); /* linkage=_ZN14IRenderContext18BindConstantBufferE18RenderShaderType_tP24ConstantBufferHandle_t__i */
	virtual void BindConstantBufferView(class IRenderContext *, enum RenderShaderType_t, ConstantBufferHandle_t, uint32, int); /* linkage=_ZN14IRenderContext22BindConstantBufferViewE18RenderShaderType_tP24ConstantBufferHandle_t__ji */
	virtual void PushConstants(class IRenderContext *, const void  *, uint32); /* linkage=_ZN14IRenderContext13PushConstantsEPKvj */
	virtual void SetAlphaTestState(class IRenderContext *, bool, float, enum RsComparison_t); /* linkage=_ZN14IRenderContext17SetAlphaTestStateEbf14RsComparison_t */
	virtual RsRasterizerStateHandle_t FindOrCreateRasterizerState(class IRenderContext *, const class RsRasterizerStateDesc_t  *); /* linkage=_ZN14IRenderContext27FindOrCreateRasterizerStateEPK23RsRasterizerStateDesc_t */
	virtual void SetRasterizerState(class IRenderContext *, RsRasterizerStateHandle_t); /* linkage=_ZN14IRenderContext18SetRasterizerStateEP27RsRasterizerStateHandle_t__ */
	virtual void SetOverrideRasterizerState(class IRenderContext *, RsRasterizerStateHandle_t); /* linkage=_ZN14IRenderContext26SetOverrideRasterizerStateEP27RsRasterizerStateHandle_t__ */
	virtual RsDepthStencilStateHandle_t FindOrCreateDepthStencilState(class IRenderContext *, const class RsDepthStencilStateDesc_t  *); /* linkage=_ZN14IRenderContext29FindOrCreateDepthStencilStateEPK25RsDepthStencilStateDesc_t */
	virtual void SetDepthStencilState(class IRenderContext *, RsDepthStencilStateHandle_t, uint32); /* linkage=_ZN14IRenderContext20SetDepthStencilStateEP29RsDepthStencilStateHandle_t__j */
	virtual void SetOverrideDepthStencilState(class IRenderContext *, RsDepthStencilStateHandle_t, uint32); /* linkage=_ZN14IRenderContext28SetOverrideDepthStencilStateEP29RsDepthStencilStateHandle_t__j */
	virtual RsBlendStateHandle_t FindOrCreateBlendState(class IRenderContext *, const class RsBlendStateDesc_t  *); /* linkage=_ZN14IRenderContext22FindOrCreateBlendStateEPK18RsBlendStateDesc_t */
	virtual void SetBlendState(class IRenderContext *, RsBlendStateHandle_t, const float  *, uint32); /* linkage=_ZN14IRenderContext13SetBlendStateEP22RsBlendStateHandle_t__PKfj */
	virtual void SetTessellationState(class IRenderContext *, bool, uint32); /* linkage=_ZN14IRenderContext20SetTessellationStateEbj */
	virtual void SetCullMode(class IRenderContext *, enum RenderCullMode_t); /* linkage=_ZN14IRenderContext11SetCullModeE16RenderCullMode_t */
	virtual void FlipHandedness(class IRenderContext *, bool); /* linkage=_ZN14IRenderContext14FlipHandednessEb */
	virtual void SetBlendMode(class IRenderContext *, enum RenderBlendMode_t, const float  *); /* linkage=_ZN14IRenderContext12SetBlendModeE17RenderBlendMode_tPKf */
	virtual void SetZBufferMode(class IRenderContext *, enum RenderZBufferMode_t); /* linkage=_ZN14IRenderContext14SetZBufferModeE19RenderZBufferMode_t */
	virtual void GetMaxToRender(class IRenderContext *, int, int, int *, int *); /* linkage=_ZN14IRenderContext14GetMaxToRenderEiiPiS0_ */
	virtual RenderInputLayout_t GetInputLayoutForVertexBuffer(class IRenderContext *, VertexBufferHandle_t); /* linkage=_ZN14IRenderContext29GetInputLayoutForVertexBufferEP22VertexBufferHandle_t__ */
	virtual DynamicVertexBufferHandle_t LockDynamicVertexBuffer(class IRenderContext *, const class BufferDesc_t  &, class DynamicLockDesc_t *); /* linkage=_ZN14IRenderContext23LockDynamicVertexBufferERK12BufferDesc_tP17DynamicLockDesc_t */
	virtual void UnlockDynamicVertexBuffer(class IRenderContext *, DynamicVertexBufferHandle_t, int); /* linkage=_ZN14IRenderContext25UnlockDynamicVertexBufferEP29DynamicVertexBufferHandle_t__i */
	virtual DynamicIndexBufferHandle_t LockDynamicIndexBuffer(class IRenderContext *, const class BufferDesc_t  &, class DynamicLockDesc_t *); /* linkage=_ZN14IRenderContext22LockDynamicIndexBufferERK12BufferDesc_tP17DynamicLockDesc_t */
	virtual void UnlockDynamicIndexBuffer(class IRenderContext *, DynamicIndexBufferHandle_t, int); /* linkage=_ZN14IRenderContext24UnlockDynamicIndexBufferEP28DynamicIndexBufferHandle_t__i */
	virtual RenderBufferHandle_t LockDynamicGPUBuffer(class IRenderContext *, const class BufferDesc_t  &, enum RenderBufferFlags_t, enum ImageFormat, class DynamicLockDesc_t *); /* linkage=_ZN14IRenderContext20LockDynamicGPUBufferERK12BufferDesc_t19RenderBufferFlags_t11ImageFormatP17DynamicLockDesc_t */
	virtual void UnlockDynamicGPUBuffer(class IRenderContext *, RenderBufferHandle_t, int); /* linkage=_ZN14IRenderContext22UnlockDynamicGPUBufferEP22RenderBufferHandle_t__i */
	virtual bool LockIndexBuffer(class IRenderContext *, IndexBufferHandle_t, int, class LockDesc_t *); /* linkage=_ZN14IRenderContext15LockIndexBufferEP21IndexBufferHandle_t__iP10LockDesc_t */
	virtual void UnlockIndexBuffer(class IRenderContext *, IndexBufferHandle_t, int, class LockDesc_t *); /* linkage=_ZN14IRenderContext17UnlockIndexBufferEP21IndexBufferHandle_t__iP10LockDesc_t */
	virtual bool LockVertexBuffer(class IRenderContext *, VertexBufferHandle_t, int, class LockDesc_t *); /* linkage=_ZN14IRenderContext16LockVertexBufferEP22VertexBufferHandle_t__iP10LockDesc_t */
	virtual void UnlockVertexBuffer(class IRenderContext *, VertexBufferHandle_t, int, class LockDesc_t *); /* linkage=_ZN14IRenderContext18UnlockVertexBufferEP22VertexBufferHandle_t__iP10LockDesc_t */
	virtual bool LockVertexBufferRegion(class IRenderContext *, VertexBufferHandle_t, int32, int32, class LockDesc_t *); /* linkage=_ZN14IRenderContext22LockVertexBufferRegionEP22VertexBufferHandle_t__iiP10LockDesc_t */
	virtual void UnlockVertexBufferRegion(class IRenderContext *, VertexBufferHandle_t, int32, int32, class LockDesc_t *); /* linkage=_ZN14IRenderContext24UnlockVertexBufferRegionEP22VertexBufferHandle_t__iiP10LockDesc_t */
	virtual bool LockIndexBufferRegion(class IRenderContext *, IndexBufferHandle_t, int32, int32, class LockDesc_t *); /* linkage=_ZN14IRenderContext21LockIndexBufferRegionEP21IndexBufferHandle_t__iiP10LockDesc_t */
	virtual void UnlockIndexBufferRegion(class IRenderContext *, IndexBufferHandle_t, int32, int32, class LockDesc_t *); /* linkage=_ZN14IRenderContext23UnlockIndexBufferRegionEP21IndexBufferHandle_t__iiP10LockDesc_t */
	virtual void SetVertexData(class IRenderContext *, VertexBufferHandle_t, const void  *, int, int); /* linkage=_ZN14IRenderContext13SetVertexDataEP22VertexBufferHandle_t__PKvii */
	virtual void SetIndexData(class IRenderContext *, IndexBufferHandle_t, const void  *, int, int); /* linkage=_ZN14IRenderContext12SetIndexDataEP21IndexBufferHandle_t__PKvii */
	virtual bool BindIndexBuffer(class IRenderContext *, IndexBufferHandle_t, int); /* linkage=_ZN14IRenderContext15BindIndexBufferEP21IndexBufferHandle_t__i */
	virtual bool BindIndexBuffer(class IRenderContext *, DynamicIndexBufferHandle_t, int); /* linkage=_ZN14IRenderContext15BindIndexBufferEP28DynamicIndexBufferHandle_t__i */
	virtual bool BindIndexBuffer(class IRenderContext *, RenderBufferHandle_t, int, int); /* linkage=_ZN14IRenderContext15BindIndexBufferEP22RenderBufferHandle_t__ii */
	virtual bool BindVertexBuffer(class IRenderContext *, int, VertexBufferHandle_t, int, int); /* linkage=_ZN14IRenderContext16BindVertexBufferEiP22VertexBufferHandle_t__ii */
	virtual bool BindVertexBuffer(class IRenderContext *, int, DynamicVertexBufferHandle_t, int, int); /* linkage=_ZN14IRenderContext16BindVertexBufferEiP29DynamicVertexBufferHandle_t__ii */
	virtual bool BindVertexBuffer(class IRenderContext *, int, RenderBufferHandle_t, int, int); /* linkage=_ZN14IRenderContext16BindVertexBufferEiP22RenderBufferHandle_t__ii */
	virtual void SetTextureData(class IRenderContext *, HRenderTexture, const class CTextureDesc  *, const void  *, int, int, const class Rect3D_t  *, uint32, const DataRecycleDelegate_t  *); /* linkage=_ZN14IRenderContext14SetTextureDataE11CWeakHandleI31InfoForResourceTypeCTextureBaseEPK12CTextureDescPKviiPK8Rect3D_tjPK12CUtlDelegateIFvS7_EE */
	virtual void LockDynamicTexture(class IRenderContext *, HRenderTexture, class LockedDynamicTexture_t &); /* linkage=_ZN14IRenderContext18LockDynamicTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseER22LockedDynamicTexture_t */
	virtual void UnlockDynamicTexture(class IRenderContext *, HRenderTexture); /* linkage=_ZN14IRenderContext20UnlockDynamicTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void ReadTexturePixels(class IRenderContext *, HRenderTexture, class IReadTexturePixelsCallback *, class Rect_t *, int, int, bool); /* linkage=_ZN14IRenderContext17ReadTexturePixelsE11CWeakHandleI31InfoForResourceTypeCTextureBaseEP26IReadTexturePixelsCallbackP6Rect_tiib */
	virtual void ReadBuffer(class IRenderContext *, RenderBufferHandle_t, class IReadBufferCallback *, int32, int32, bool); /* linkage=_ZN14IRenderContext10ReadBufferEP22RenderBufferHandle_t__P19IReadBufferCallbackiib */
	virtual void GenerateMipMaps(class IRenderContext *, HRenderTexture); /* linkage=_ZN14IRenderContext15GenerateMipMapsE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void CopyTexture(class IRenderContext *, HRenderTexture, HRenderTexture, class Rect_t *, int, int, uint, uint, uint, uint, enum CopyTextureFlags_t); /* linkage=_ZN14IRenderContext11CopyTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseES2_P6Rect_tiijjjj18CopyTextureFlags_t */
	virtual void CopyFromVolumeTexture(class IRenderContext *, HRenderTexture, HRenderTexture, class Rect3D_t *, int, int, int, uint, uint, uint, uint, enum CopyTextureFlags_t); /* linkage=_ZN14IRenderContext21CopyFromVolumeTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseES2_P8Rect3D_tiiijjjj18CopyTextureFlags_t */
	virtual void CopyFallbackTextureData(class IRenderContext *); /* linkage=_ZN14IRenderContext23CopyFallbackTextureDataEv */
	virtual void Draw(class IRenderContext *, enum RenderPrimitiveType_t, int, int); /* linkage=_ZN14IRenderContext4DrawE21RenderPrimitiveType_tii */
	virtual void DrawInstanced(class IRenderContext *, enum RenderPrimitiveType_t, int, int, int); /* linkage=_ZN14IRenderContext13DrawInstancedE21RenderPrimitiveType_tiii */
	virtual void DrawIndexed(class IRenderContext *, enum RenderPrimitiveType_t, int, int, int, int); /* linkage=_ZN14IRenderContext11DrawIndexedE21RenderPrimitiveType_tiiii */
	virtual void DrawIndexedInstanced(class IRenderContext *, enum RenderPrimitiveType_t, int, int, int, int, int, uint); /* linkage=_ZN14IRenderContext20DrawIndexedInstancedE21RenderPrimitiveType_tiiiiij */
	virtual void MultiDrawIndexed(class IRenderContext *, enum RenderPrimitiveType_t, int, const class RenderMultiDrawIndexedInfo_t  *, uint32, uint32, int); /* linkage=_ZN14IRenderContext16MultiDrawIndexedE21RenderPrimitiveType_tiPK28RenderMultiDrawIndexedInfo_tjji */
	virtual void DrawInstancedIndirect(class IRenderContext *, enum RenderPrimitiveType_t, RenderBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext21DrawInstancedIndirectE21RenderPrimitiveType_tP22RenderBufferHandle_t__j */
	virtual void DrawIndexedInstancedIndirect(class IRenderContext *, enum RenderPrimitiveType_t, RenderBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext28DrawIndexedInstancedIndirectE21RenderPrimitiveType_tP22RenderBufferHandle_t__j */
	virtual void MultiDrawIndexedInstancedIndirect(class IRenderContext *, enum RenderPrimitiveType_t, uint32, RenderBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext33MultiDrawIndexedInstancedIndirectE21RenderPrimitiveType_tjP22RenderBufferHandle_t__j */
	virtual void MultiDrawIndexedInstancedIndirectCount(class IRenderContext *, enum RenderPrimitiveType_t, RenderBufferHandle_t, uint32, uint32, RenderBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext38MultiDrawIndexedInstancedIndirectCountE21RenderPrimitiveType_tP22RenderBufferHandle_t__jjS2_j */
	virtual void DispatchComputeShader(class IRenderContext *, uint32, uint32, uint32); /* linkage=_ZN14IRenderContext21DispatchComputeShaderEjjj */
	virtual void DispatchComputeShaderIndirect(class IRenderContext *, RenderBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext29DispatchComputeShaderIndirectEP22RenderBufferHandle_t__j */
	virtual void BuildBLAS(class IRenderContext *, RenderBLASHandle_t, class BLASTriangleData_t *, int); /* linkage=_ZN14IRenderContext9BuildBLASEP20RenderBLASHandle_t__P18BLASTriangleData_ti */
	virtual void CompactBLAS(class IRenderContext *, RenderBLASHandle_t, RenderBLASHandle_t); /* linkage=_ZN14IRenderContext11CompactBLASEP20RenderBLASHandle_t__S1_ */
	virtual void BuildTLAS(class IRenderContext *, RenderTLASHandle_t, class TLASInstance_t *, int); /* linkage=_ZN14IRenderContext9BuildTLASEP20RenderTLASHandle_t__P14TLASInstance_ti */
	virtual void BindRayTracingPipeline(class IRenderContext *, RenderRayTracePipelineHandle_t); /* linkage=_ZN14IRenderContext22BindRayTracingPipelineEP32RenderRayTracePipelineHandle_t__ */
	virtual void UpdateRayTraceShaderBindingTable(class IRenderContext *, class IRaytraceShaderBindingTable *); /* linkage=_ZN14IRenderContext32UpdateRayTraceShaderBindingTableEP27IRaytraceShaderBindingTable */
	virtual void TraceRays(class IRenderContext *, class IRaytraceShaderBindingTable *, uint32, uint32, uint32); /* linkage=_ZN14IRenderContext9TraceRaysEP27IRaytraceShaderBindingTablejjj */
	virtual void TraceRaysIndirect(class IRenderContext *, class IRaytraceShaderBindingTable *, RenderBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext17TraceRaysIndirectEP27IRaytraceShaderBindingTableP22RenderBufferHandle_t__j */
	virtual void CopyGPUBufferHiddenStructureCount(class IRenderContext *, RenderBufferHandle_t, RenderBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext33CopyGPUBufferHiddenStructureCountEP22RenderBufferHandle_t__S1_j */
	virtual void SetGPUBufferHiddenStructureCount(class IRenderContext *, RenderBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext32SetGPUBufferHiddenStructureCountEP22RenderBufferHandle_t__j */
	virtual void FillGPUBuffer(class IRenderContext *, RenderBufferHandle_t, uint32); /* linkage=_ZN14IRenderContext13FillGPUBufferEP22RenderBufferHandle_t__j */
	virtual void SetGPUBufferData(class IRenderContext *, RenderBufferHandle_t, const void  *, uint32, uint32); /* linkage=_ZN14IRenderContext16SetGPUBufferDataEP22RenderBufferHandle_t__PKvjj */
	virtual void Flush(class IRenderContext *); /* linkage=_ZN14IRenderContext5FlushEv */
	virtual void ForceFlushGPU(class IRenderContext *); /* linkage=_ZN14IRenderContext13ForceFlushGPUEv */
	virtual void ForceDeviceLost(class IRenderContext *); /* linkage=_ZN14IRenderContext15ForceDeviceLostEv */
	virtual class IRenderDevice * GetDevice(class IRenderContext *); /* linkage=_ZN14IRenderContext9GetDeviceEv */
	virtual void BeginPixEvent(class IRenderContext *, class Color, const char  *); /* linkage=_ZN14IRenderContext13BeginPixEventE5ColorPKc */
	virtual void BeginPixEvent(class IRenderContext *, const char  *); /* linkage=_ZN14IRenderContext13BeginPixEventEPKc */
	virtual void EndPixEvent(class IRenderContext *); /* linkage=_ZN14IRenderContext11EndPixEventEv */
	virtual void PixSetMarker(class IRenderContext *, class Color, const char  *); /* linkage=_ZN14IRenderContext12PixSetMarkerE5ColorPKc */
	virtual void PixSetMarker(class IRenderContext *, const char  *); /* linkage=_ZN14IRenderContext12PixSetMarkerEPKc */
	virtual void BeginQuery(class IRenderContext *, RenderQueryHandle_t); /* linkage=_ZN14IRenderContext10BeginQueryEP21RenderQueryHandle_t__ */
	virtual void EndQuery(class IRenderContext *, RenderQueryHandle_t); /* linkage=_ZN14IRenderContext8EndQueryEP21RenderQueryHandle_t__ */
	virtual void SetDepthBoundsTestEnabled(class IRenderContext *, bool); /* linkage=_ZN14IRenderContext25SetDepthBoundsTestEnabledEb */
	virtual void SetDepthBounds(class IRenderContext *, float, float); /* linkage=_ZN14IRenderContext14SetDepthBoundsEff */
	virtual void BeginRenderPass(class IRenderContext *, class RenderPassHandle_t, int32, const union RenderPassClearValue_t  *, const class Rect_t  &); /* linkage=_ZN14IRenderContext15BeginRenderPassE18RenderPassHandle_tiPK22RenderPassClearValue_tRK6Rect_t */
	virtual void NextSubPass(class IRenderContext *); /* linkage=_ZN14IRenderContext11NextSubPassEv */
	virtual void EndRenderPass(class IRenderContext *); /* linkage=_ZN14IRenderContext13EndRenderPassEv */
	virtual class unique_ptr<IBarrierHelper, std::default_delete<IBarrierHelper> > GetBarrierHelper(class IRenderContext *); /* linkage=_ZN14IRenderContext16GetBarrierHelperEv */
	virtual void TextureBarrier(class IRenderContext *, int32, const HRenderTexture  *, const enum RenderImageLayout_t  *, bool); /* linkage=_ZN14IRenderContext14TextureBarrierEiPK11CWeakHandleI31InfoForResourceTypeCTextureBaseEPK19RenderImageLayout_tb */
	virtual void UAVBarrier(class IRenderContext *, int32, const class RenderUAVBarrier_t  *); /* linkage=_ZN14IRenderContext10UAVBarrierEiPK18RenderUAVBarrier_t */
	virtual void BufferBarrier(class IRenderContext *, int32, const class RenderBufferBarrier_t  *); /* linkage=_ZN14IRenderContext13BufferBarrierEiPK21RenderBufferBarrier_t */
	void BufferBarrier(class IRenderContext *, const class RenderBufferBarrier_t  &); /* linkage=_ZN14IRenderContext13BufferBarrierERK21RenderBufferBarrier_t */
	virtual void SetDebugFlag(class IRenderContext *, enum RenderDebugFlag_t, bool); /* linkage=_ZN14IRenderContext12SetDebugFlagE17RenderDebugFlag_tb */
	virtual void SetDebugString(class IRenderContext *, const char  *, ...); /* linkage=_ZN14IRenderContext14SetDebugStringEPKcz */
	virtual void VaSetDebugString(class IRenderContext *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN14IRenderContext16VaSetDebugStringEPKcP13__va_list_tag */
	virtual const char  * GetDebugString(class IRenderContext *); /* linkage=_ZN14IRenderContext14GetDebugStringEv */
	virtual void QueueDeviceThreadCallback(class IRenderContext *, class IDeviceThreadCallback *); /* linkage=_ZN14IRenderContext25QueueDeviceThreadCallbackEP21IDeviceThreadCallback */
	virtual RenderSemaphoreHandle_t SemaphoreSignalAtEnd(class IRenderContext *); /* linkage=_ZN14IRenderContext20SemaphoreSignalAtEndEv */
	virtual void SemaphoreWaitAtBegin(class IRenderContext *, RenderSemaphoreHandle_t); /* linkage=_ZN14IRenderContext20SemaphoreWaitAtBeginEP25RenderSemaphoreHandle_t__ */
	virtual void SetSteamVrCompositorTexture(class IRenderContext *, HRenderTexture, HRenderTexture); /* linkage=_ZN14IRenderContext27SetSteamVrCompositorTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseES2_ */
	virtual bool IsOwnedByCurrentThread(const class IRenderContext  *); /* linkage=_ZNK14IRenderContext22IsOwnedByCurrentThreadEv */
	virtual class CRenderAttributes & GetAttributesForModify(class IRenderContext *); /* linkage=_ZN14IRenderContext22GetAttributesForModifyEv */
	const class CRenderAttributes  & GetAttributes(const class IRenderContext  *); /* linkage=_ZNK14IRenderContext13GetAttributesEv */
	void LockAttributes(class IRenderContext *); /* linkage=_ZN14IRenderContext14LockAttributesEv */
	void UnlockAttributes(class IRenderContext *); /* linkage=_ZN14IRenderContext16UnlockAttributesEv */
	const class IMaterialMode  * GetMaterialStateHintMode(const class IRenderContext  *); /* linkage=_ZNK14IRenderContext24GetMaterialStateHintModeEv */
	HRenderTexture GetMaterialStateHintTexture(const class IRenderContext  *); /* linkage=_ZNK14IRenderContext27GetMaterialStateHintTextureEv */
	uint64 GetMaterialStateHintKey(const class IRenderContext  *); /* linkage=_ZNK14IRenderContext23GetMaterialStateHintKeyEv */
	void SetMaterialStateHint(class IRenderContext *, const class IMaterialMode  *, HRenderTexture, uint64); /* linkage=_ZN14IRenderContext20SetMaterialStateHintEPK13IMaterialMode11CWeakHandleI31InfoForResourceTypeCTextureBaseEy */
	void ResetMaterialStateHint(class IRenderContext *); /* linkage=_ZN14IRenderContext22ResetMaterialStateHintEv */
	bool IsSecondaryContext(const class IRenderContext  *); /* linkage=_ZNK14IRenderContext18IsSecondaryContextEv */
	virtual void ~IRenderContext(class IRenderContext *); /* linkage=_ZN14IRenderContextD4Ev */
	class CRenderAttributes * GetAttributesPtrForModify(class IRenderContext *); /* linkage=_ZN14IRenderContext25GetAttributesPtrForModifyEv */
	virtual class IRenderContext * GetSubContext(class IRenderContext *, const class ISceneLayer  *); /* linkage=_ZN14IRenderContext13GetSubContextEPK11ISceneLayer */
	virtual void ReadBuffer(class IRenderContext *, IndexBufferHandle_t, class IReadBufferCallback *, int32, int32, bool); /* linkage=_ZN14IRenderContext10ReadBufferEP21IndexBufferHandle_t__P19IReadBufferCallbackiib */
	void IRenderContext(class IRenderContext *, const class IRenderContext  &); /* linkage=_ZN14IRenderContextC4ERKS_ */
	void IRenderContext(class IRenderContext *); /* linkage=_ZN14IRenderContextC4Ev */
};

// <03475268> ../public/rendersystem/irendercontext.h:233
inline void IRenderContext::Clear(const Vector4D* pClearColorArray, int nNumColors, int nFlags, int nStencilBitToCheck, int nStencilComparisonValue)
{
} /* size: 0 */

// <033CB407> ../public/rendersystem/irendercontext.h:239
inline void IRenderContext::Clear(const Vector4D& vecRGBAColor, int nFlags)
{
} /* size: 0 */

// <03475242> ../public/rendersystem/irendercontext.h:304
inline void IRenderContext::SetScissorRect(const Rect_t& rect)
{
} /* size: 0 */

// <01345C67> ../public/rendersystem/irendercontext.h:598
inline void IRenderContext::BufferBarrier(const RenderBufferBarrier_t& barrier)
{
} /* size: 0 */

// <03E9CA44> ../public/rendersystem/irendercontext.h:641
inline void IRenderContext::GetAttributes()
{
} /* size: 0 */

// <03475229> ../public/rendersystem/irendercontext.h:647
inline void IRenderContext::LockAttributes()
{
} /* size: 0 */

// <03475210> ../public/rendersystem/irendercontext.h:648
inline void IRenderContext::UnlockAttributes()
{
} /* size: 0 */

// <0049892F> ../public/rendersystem/irendercontext.h:672
inline void IRenderContext::GetMaterialStateHintMode()
{
} /* size: 0 */

// <00498916> ../public/rendersystem/irendercontext.h:676
inline void IRenderContext::GetMaterialStateHintTexture()
{
} /* size: 0 */

// <004988FD> ../public/rendersystem/irendercontext.h:680
inline void IRenderContext::GetMaterialStateHintKey()
{
} /* size: 0 */

// <004988BD> ../public/rendersystem/irendercontext.h:684
inline void IRenderContext::SetMaterialStateHint(const IMaterialMode* pMode, HRenderTexture hTexture, uint64 nKey)
{
} /* size: 0 */

// <039392FC> ../public/rendersystem/irendercontext.h:690
inline void IRenderContext::ResetMaterialStateHint()
{
} /* size: 0 */

// <0330AA87> ../public/rendersystem/irendercontext.h:697
inline void IRenderContext::IsSecondaryContext()
{
} /* size: 0 */

// <00102F94> ../public/rendersystem/irendercontext.h:704
void IRenderContext::~IRenderContext()
{
} /* size: 0 */

// <00102F64> ../public/rendersystem/irendercontext.h:704
inline void IRenderContext::~IRenderContext()
{
} /* size: 0 */

// <01345C4E> ../public/rendersystem/irendercontext.h:719
inline void IRenderContext::GetAttributesPtrForModify()
{
} /* size: 0 */

// <007C8D5E> ../public/rendersystem/irendercontext.h:738
// member functions: 34
// member variables: 2
// class size: 16
class CRenderContextPtr {
	/* ../public/rendersystem/irendercontext.h:741 */
	void CRenderContextPtr(CRenderContextPtr* , uint, IRenderDevice* , const RenderTargetDesc_t& , const char* , ...);
	/* ../public/rendersystem/irendercontext.h:742 */
	void CRenderContextPtr(CRenderContextPtr* , uint, RenderContextCreationInfo_t* , IRenderDevice* , const char* , ...);
	/* ../public/rendersystem/irendercontext.h:744 */
	void CRenderContextPtr(CRenderContextPtr* , IRenderDevice* );
	/* ../public/rendersystem/irendercontext.h:756 */
	void ~CRenderContextPtr(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:757 */
	IRenderContext* operator->(const CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:758 */
	IRenderContext* operator IRenderContext*(const CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:759 */
	IRenderContext* GetContext(const CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:762 */
	void Release(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:764 */
	void Discard(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:765 */
	CDisplayList* DetachDisplayListAndClear(CRenderContextPtr* );
protected:
	IRenderContext * m_pContext; /* 0 8 */
	IRenderDevice * m_pDevice; /* 8 8 */
	/* ../public/rendersystem/irendercontext.h:771 */
	void CRenderContextPtr(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:773 */
	void Init(CRenderContextPtr* , uint, RenderContextCreationInfo_t* , IRenderDevice* , const RenderTargetDesc_t& , const char* , va_list* );
private:
	/* ../public/rendersystem/irendercontext.h:777 */
	void InitPreallocated(CRenderContextPtr* , IRenderDevice* , const RenderTargetDesc_t& , IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:747 */
	void CRenderContextPtr<char const*>(CRenderContextPtr* , IRenderDevice* , const RenderTargetDesc_t& , const char* );
	void CRenderContextPtr(class CRenderContextPtr *, uint, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, ...); /* linkage=_ZN17CRenderContextPtrC4EjP13IRenderDeviceRK18RenderTargetDesc_tPKcz */
	void CRenderContextPtr(class CRenderContextPtr *, uint, class RenderContextCreationInfo_t *, class IRenderDevice *, const char  *, ...); /* linkage=_ZN17CRenderContextPtrC4EjP27RenderContextCreationInfo_tP13IRenderDevicePKcz */
	void CRenderContextPtr(class CRenderContextPtr *, class IRenderDevice *); /* linkage=_ZN17CRenderContextPtrC4EP13IRenderDevice */
	void ~CRenderContextPtr(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtrD4Ev */
	class IRenderContext * operator->(const class CRenderContextPtr  *); /* linkage=_ZNK17CRenderContextPtrptEv */
	class IRenderContext * operator IRenderContext*(const class CRenderContextPtr  *); /* linkage=_ZNK17CRenderContextPtrcvP14IRenderContextEv */
	class IRenderContext * GetContext(const class CRenderContextPtr  *); /* linkage=_ZNK17CRenderContextPtr10GetContextEv */
	void Release(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtr7ReleaseEv */
	void Discard(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtr7DiscardEv */
	class CDisplayList * DetachDisplayListAndClear(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtr25DetachDisplayListAndClearEv */
	void CRenderContextPtr(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtrC4Ev */
	void Init(class CRenderContextPtr *, uint, class RenderContextCreationInfo_t *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, va_list *); /* linkage=_ZN17CRenderContextPtr4InitEjP27RenderContextCreationInfo_tP13IRenderDeviceRK18RenderTargetDesc_tPKcPA1_13__va_list_tag */
	void InitPreallocated(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, class IRenderContext *); /* linkage=_ZN17CRenderContextPtr16InitPreallocatedEP13IRenderDeviceRK18RenderTargetDesc_tP14IRenderContext */
	void CRenderContextPtr<>(class CRenderContextPtr *, class IRenderDevice *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJEEEP13IRenderDevicePKcDpT_ */
	void CRenderContextPtr<char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcEEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*, char const*, char const*, int, int, int, int>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *, const char  *, int, int, int, int); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_S2_iiiiEEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*, char const*, char const*, char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_S2_S2_EEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*>(class CRenderContextPtr *, class IRenderDevice *, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcEEEP13IRenderDeviceS2_DpT_ */
	void CRenderContextPtr<char const*, char const*, char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_S2_EEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*, char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_EEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
} __attribute__((__aligned__(16)));

// <009915A4> ../public/rendersystem/irendercontext.h:738
// member functions: 34
// member variables: 2
// class size: 16
class CRenderContextPtr {
	/* ../public/rendersystem/irendercontext.h:741 */
	void CRenderContextPtr(CRenderContextPtr* , uint, IRenderDevice* , const RenderTargetDesc_t& , const char* , ...);
	/* ../public/rendersystem/irendercontext.h:742 */
	void CRenderContextPtr(CRenderContextPtr* , uint, RenderContextCreationInfo_t* , IRenderDevice* , const char* , ...);
	/* ../public/rendersystem/irendercontext.h:744 */
	void CRenderContextPtr(CRenderContextPtr* , IRenderDevice* );
	/* ../public/rendersystem/irendercontext.h:756 */
	void ~CRenderContextPtr(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:757 */
	IRenderContext* operator->(const CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:758 */
	IRenderContext* operator IRenderContext*(const CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:759 */
	IRenderContext* GetContext(const CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:762 */
	void Release(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:764 */
	void Discard(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:765 */
	CDisplayList* DetachDisplayListAndClear(CRenderContextPtr* );
protected:
	IRenderContext * m_pContext; /* 0 8 */
	IRenderDevice * m_pDevice; /* 8 8 */
	/* ../public/rendersystem/irendercontext.h:771 */
	void CRenderContextPtr(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:773 */
	void Init(CRenderContextPtr* , uint, RenderContextCreationInfo_t* , IRenderDevice* , const RenderTargetDesc_t& , const char* , va_list* );
private:
	/* ../public/rendersystem/irendercontext.h:777 */
	void InitPreallocated(CRenderContextPtr* , IRenderDevice* , const RenderTargetDesc_t& , IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:751 */
	void CRenderContextPtr<>(CRenderContextPtr* , IRenderDevice* , const char* );
	void CRenderContextPtr(class CRenderContextPtr *, uint, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, ...); /* linkage=_ZN17CRenderContextPtrC4EjP13IRenderDeviceRK18RenderTargetDesc_tPKcz */
	void CRenderContextPtr(class CRenderContextPtr *, uint, class RenderContextCreationInfo_t *, class IRenderDevice *, const char  *, ...); /* linkage=_ZN17CRenderContextPtrC4EjP27RenderContextCreationInfo_tP13IRenderDevicePKcz */
	void CRenderContextPtr(class CRenderContextPtr *, class IRenderDevice *); /* linkage=_ZN17CRenderContextPtrC4EP13IRenderDevice */
	void ~CRenderContextPtr(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtrD4Ev */
	class IRenderContext * operator->(const class CRenderContextPtr  *); /* linkage=_ZNK17CRenderContextPtrptEv */
	class IRenderContext * operator IRenderContext*(const class CRenderContextPtr  *); /* linkage=_ZNK17CRenderContextPtrcvP14IRenderContextEv */
	class IRenderContext * GetContext(const class CRenderContextPtr  *); /* linkage=_ZNK17CRenderContextPtr10GetContextEv */
	void Release(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtr7ReleaseEv */
	void Discard(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtr7DiscardEv */
	class CDisplayList * DetachDisplayListAndClear(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtr25DetachDisplayListAndClearEv */
	void CRenderContextPtr(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtrC4Ev */
	void Init(class CRenderContextPtr *, uint, class RenderContextCreationInfo_t *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, va_list *); /* linkage=_ZN17CRenderContextPtr4InitEjP27RenderContextCreationInfo_tP13IRenderDeviceRK18RenderTargetDesc_tPKcPA1_13__va_list_tag */
	void InitPreallocated(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, class IRenderContext *); /* linkage=_ZN17CRenderContextPtr16InitPreallocatedEP13IRenderDeviceRK18RenderTargetDesc_tP14IRenderContext */
	void CRenderContextPtr<>(class CRenderContextPtr *, class IRenderDevice *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJEEEP13IRenderDevicePKcDpT_ */
	void CRenderContextPtr<char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcEEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*, char const*, char const*, int, int, int, int>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *, const char  *, int, int, int, int); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_S2_iiiiEEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*, char const*, char const*, char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_S2_S2_EEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*>(class CRenderContextPtr *, class IRenderDevice *, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcEEEP13IRenderDeviceS2_DpT_ */
	void CRenderContextPtr<char const*, char const*, char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_S2_EEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*, char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_EEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
} __attribute__((__aligned__(16)));

// <017F6562> ../public/rendersystem/irendercontext.h:738
// member functions: 33
// member variables: 2
// class size: 16
class CRenderContextPtr {
	/* ../public/rendersystem/irendercontext.h:741 */
	void CRenderContextPtr(CRenderContextPtr* , uint, IRenderDevice* , const RenderTargetDesc_t& , const char* , ...);
	/* ../public/rendersystem/irendercontext.h:742 */
	void CRenderContextPtr(CRenderContextPtr* , uint, RenderContextCreationInfo_t* , IRenderDevice* , const char* , ...);
	/* ../public/rendersystem/irendercontext.h:744 */
	void CRenderContextPtr(CRenderContextPtr* , IRenderDevice* );
	/* ../public/rendersystem/irendercontext.h:756 */
	void ~CRenderContextPtr(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:757 */
	IRenderContext* operator->(const CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:758 */
	IRenderContext* operator IRenderContext*(const CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:759 */
	IRenderContext* GetContext(const CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:762 */
	void Release(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:764 */
	void Discard(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:765 */
	CDisplayList* DetachDisplayListAndClear(CRenderContextPtr* );
protected:
	IRenderContext * m_pContext; /* 0 8 */
	IRenderDevice * m_pDevice; /* 8 8 */
	/* ../public/rendersystem/irendercontext.h:771 */
	void CRenderContextPtr(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:773 */
	void Init(CRenderContextPtr* , uint, RenderContextCreationInfo_t* , IRenderDevice* , const RenderTargetDesc_t& , const char* , va_list* );
private:
	/* ../public/rendersystem/irendercontext.h:777 */
	void InitPreallocated(CRenderContextPtr* , IRenderDevice* , const RenderTargetDesc_t& , IRenderContext* );
	void CRenderContextPtr(class CRenderContextPtr *, uint, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, ...); /* linkage=_ZN17CRenderContextPtrC4EjP13IRenderDeviceRK18RenderTargetDesc_tPKcz */
	void CRenderContextPtr(class CRenderContextPtr *, uint, class RenderContextCreationInfo_t *, class IRenderDevice *, const char  *, ...); /* linkage=_ZN17CRenderContextPtrC4EjP27RenderContextCreationInfo_tP13IRenderDevicePKcz */
	void CRenderContextPtr(class CRenderContextPtr *, class IRenderDevice *); /* linkage=_ZN17CRenderContextPtrC4EP13IRenderDevice */
	void ~CRenderContextPtr(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtrD4Ev */
	class IRenderContext * operator->(const class CRenderContextPtr  *); /* linkage=_ZNK17CRenderContextPtrptEv */
	class IRenderContext * operator IRenderContext*(const class CRenderContextPtr  *); /* linkage=_ZNK17CRenderContextPtrcvP14IRenderContextEv */
	class IRenderContext * GetContext(const class CRenderContextPtr  *); /* linkage=_ZNK17CRenderContextPtr10GetContextEv */
	void Release(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtr7ReleaseEv */
	void Discard(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtr7DiscardEv */
	class CDisplayList * DetachDisplayListAndClear(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtr25DetachDisplayListAndClearEv */
	void CRenderContextPtr(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtrC4Ev */
	void Init(class CRenderContextPtr *, uint, class RenderContextCreationInfo_t *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, va_list *); /* linkage=_ZN17CRenderContextPtr4InitEjP27RenderContextCreationInfo_tP13IRenderDeviceRK18RenderTargetDesc_tPKcPA1_13__va_list_tag */
	void InitPreallocated(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, class IRenderContext *); /* linkage=_ZN17CRenderContextPtr16InitPreallocatedEP13IRenderDeviceRK18RenderTargetDesc_tP14IRenderContext */
	void CRenderContextPtr<>(class CRenderContextPtr *, class IRenderDevice *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJEEEP13IRenderDevicePKcDpT_ */
	void CRenderContextPtr<char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcEEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*, char const*, char const*, int, int, int, int>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *, const char  *, int, int, int, int); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_S2_iiiiEEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*, char const*, char const*, char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_S2_S2_EEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*>(class CRenderContextPtr *, class IRenderDevice *, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcEEEP13IRenderDeviceS2_DpT_ */
	void CRenderContextPtr<char const*, char const*, char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_S2_EEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*, char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_EEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
} __attribute__((__aligned__(16)));

// <02DDCCDB> ../public/rendersystem/irendercontext.h:738
// member functions: 40
// member variables: 2
// class size: 16
class CRenderContextPtr {
	/* ../public/rendersystem/irendercontext.h:741 */
	void CRenderContextPtr(CRenderContextPtr* , uint, IRenderDevice* , const RenderTargetDesc_t& , const char* , ...);
	/* ../public/rendersystem/irendercontext.h:742 */
	void CRenderContextPtr(CRenderContextPtr* , uint, RenderContextCreationInfo_t* , IRenderDevice* , const char* , ...);
	/* ../public/rendersystem/irendercontext.h:744 */
	void CRenderContextPtr(CRenderContextPtr* , IRenderDevice* );
	/* ../public/rendersystem/irendercontext.h:756 */
	void ~CRenderContextPtr(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:757 */
	IRenderContext* operator->(const CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:758 */
	IRenderContext* operator IRenderContext*(const CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:759 */
	IRenderContext* GetContext(const CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:762 */
	void Release(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:764 */
	void Discard(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:765 */
	CDisplayList* DetachDisplayListAndClear(CRenderContextPtr* );
protected:
	IRenderContext * m_pContext; /* 0 8 */
	IRenderDevice * m_pDevice; /* 8 8 */
	/* ../public/rendersystem/irendercontext.h:771 */
	void CRenderContextPtr(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:773 */
	void Init(CRenderContextPtr* , uint, RenderContextCreationInfo_t* , IRenderDevice* , const RenderTargetDesc_t& , const char* , va_list* );
private:
	/* ../public/rendersystem/irendercontext.h:777 */
	void InitPreallocated(CRenderContextPtr* , IRenderDevice* , const RenderTargetDesc_t& , IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:747 */
	void CRenderContextPtr<char const*, char const*, char const*, int, int, int, int>(CRenderContextPtr* , IRenderDevice* , const RenderTargetDesc_t& , const char* , const char* , const char* , int, int, int, int);
	/* ../public/rendersystem/irendercontext.h:747 */
	void CRenderContextPtr<char const*>(CRenderContextPtr* , IRenderDevice* , const RenderTargetDesc_t& , const char* );
	/* ../public/rendersystem/irendercontext.h:747 */
	void CRenderContextPtr<char const*, char const*, char const*, char const*>(CRenderContextPtr* , IRenderDevice* , const RenderTargetDesc_t& , const char* , const char* , const char* , const char* );
	/* ../public/rendersystem/irendercontext.h:751 */
	void CRenderContextPtr<char const*>(CRenderContextPtr* , IRenderDevice* , const char* , const char* );
	/* ../public/rendersystem/irendercontext.h:747 */
	void CRenderContextPtr<char const*, char const*, char const*>(CRenderContextPtr* , IRenderDevice* , const RenderTargetDesc_t& , const char* , const char* , const char* );
	/* ../public/rendersystem/irendercontext.h:747 */
	void CRenderContextPtr<char const*, char const*>(CRenderContextPtr* , IRenderDevice* , const RenderTargetDesc_t& , const char* , const char* );
	/* ../public/rendersystem/irendercontext.h:751 */
	void CRenderContextPtr<>(CRenderContextPtr* , IRenderDevice* , const char* );
	void CRenderContextPtr(class CRenderContextPtr *, uint, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, ...); /* linkage=_ZN17CRenderContextPtrC4EjP13IRenderDeviceRK18RenderTargetDesc_tPKcz */
	void CRenderContextPtr(class CRenderContextPtr *, uint, class RenderContextCreationInfo_t *, class IRenderDevice *, const char  *, ...); /* linkage=_ZN17CRenderContextPtrC4EjP27RenderContextCreationInfo_tP13IRenderDevicePKcz */
	void CRenderContextPtr(class CRenderContextPtr *, class IRenderDevice *); /* linkage=_ZN17CRenderContextPtrC4EP13IRenderDevice */
	void ~CRenderContextPtr(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtrD4Ev */
	class IRenderContext * operator->(const class CRenderContextPtr  *); /* linkage=_ZNK17CRenderContextPtrptEv */
	class IRenderContext * operator IRenderContext*(const class CRenderContextPtr  *); /* linkage=_ZNK17CRenderContextPtrcvP14IRenderContextEv */
	class IRenderContext * GetContext(const class CRenderContextPtr  *); /* linkage=_ZNK17CRenderContextPtr10GetContextEv */
	void Release(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtr7ReleaseEv */
	void Discard(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtr7DiscardEv */
	class CDisplayList * DetachDisplayListAndClear(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtr25DetachDisplayListAndClearEv */
	void CRenderContextPtr(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtrC4Ev */
	void Init(class CRenderContextPtr *, uint, class RenderContextCreationInfo_t *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, va_list *); /* linkage=_ZN17CRenderContextPtr4InitEjP27RenderContextCreationInfo_tP13IRenderDeviceRK18RenderTargetDesc_tPKcPA1_13__va_list_tag */
	void InitPreallocated(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, class IRenderContext *); /* linkage=_ZN17CRenderContextPtr16InitPreallocatedEP13IRenderDeviceRK18RenderTargetDesc_tP14IRenderContext */
	void CRenderContextPtr<>(class CRenderContextPtr *, class IRenderDevice *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJEEEP13IRenderDevicePKcDpT_ */
	void CRenderContextPtr<char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcEEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*, char const*, char const*, int, int, int, int>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *, const char  *, int, int, int, int); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_S2_iiiiEEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*, char const*, char const*, char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_S2_S2_EEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*>(class CRenderContextPtr *, class IRenderDevice *, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcEEEP13IRenderDeviceS2_DpT_ */
	void CRenderContextPtr<char const*, char const*, char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_S2_EEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*, char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_EEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
} __attribute__((__aligned__(16)));

// <03394B5C> ../public/rendersystem/irendercontext.h:738
// member functions: 35
// member variables: 2
// class size: 16
class CRenderContextPtr {
	/* ../public/rendersystem/irendercontext.h:741 */
	void CRenderContextPtr(CRenderContextPtr* , uint, IRenderDevice* , const RenderTargetDesc_t& , const char* , ...);
	/* ../public/rendersystem/irendercontext.h:742 */
	void CRenderContextPtr(CRenderContextPtr* , uint, RenderContextCreationInfo_t* , IRenderDevice* , const char* , ...);
	/* ../public/rendersystem/irendercontext.h:744 */
	void CRenderContextPtr(CRenderContextPtr* , IRenderDevice* );
	/* ../public/rendersystem/irendercontext.h:756 */
	void ~CRenderContextPtr(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:757 */
	IRenderContext* operator->(const CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:758 */
	IRenderContext* operator IRenderContext*(const CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:759 */
	IRenderContext* GetContext(const CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:762 */
	void Release(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:764 */
	void Discard(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:765 */
	CDisplayList* DetachDisplayListAndClear(CRenderContextPtr* );
protected:
	IRenderContext * m_pContext; /* 0 8 */
	IRenderDevice * m_pDevice; /* 8 8 */
	/* ../public/rendersystem/irendercontext.h:771 */
	void CRenderContextPtr(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:773 */
	void Init(CRenderContextPtr* , uint, RenderContextCreationInfo_t* , IRenderDevice* , const RenderTargetDesc_t& , const char* , va_list* );
private:
	/* ../public/rendersystem/irendercontext.h:777 */
	void InitPreallocated(CRenderContextPtr* , IRenderDevice* , const RenderTargetDesc_t& , IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:747 */
	void CRenderContextPtr<char const*>(CRenderContextPtr* , IRenderDevice* , const RenderTargetDesc_t& , const char* );
	/* ../public/rendersystem/irendercontext.h:751 */
	void CRenderContextPtr<>(CRenderContextPtr* , IRenderDevice* , const char* );
	void CRenderContextPtr(class CRenderContextPtr *, uint, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, ...); /* linkage=_ZN17CRenderContextPtrC4EjP13IRenderDeviceRK18RenderTargetDesc_tPKcz */
	void CRenderContextPtr(class CRenderContextPtr *, uint, class RenderContextCreationInfo_t *, class IRenderDevice *, const char  *, ...); /* linkage=_ZN17CRenderContextPtrC4EjP27RenderContextCreationInfo_tP13IRenderDevicePKcz */
	void CRenderContextPtr(class CRenderContextPtr *, class IRenderDevice *); /* linkage=_ZN17CRenderContextPtrC4EP13IRenderDevice */
	void ~CRenderContextPtr(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtrD4Ev */
	class IRenderContext * operator->(const class CRenderContextPtr  *); /* linkage=_ZNK17CRenderContextPtrptEv */
	class IRenderContext * operator IRenderContext*(const class CRenderContextPtr  *); /* linkage=_ZNK17CRenderContextPtrcvP14IRenderContextEv */
	class IRenderContext * GetContext(const class CRenderContextPtr  *); /* linkage=_ZNK17CRenderContextPtr10GetContextEv */
	void Release(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtr7ReleaseEv */
	void Discard(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtr7DiscardEv */
	class CDisplayList * DetachDisplayListAndClear(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtr25DetachDisplayListAndClearEv */
	void CRenderContextPtr(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtrC4Ev */
	void Init(class CRenderContextPtr *, uint, class RenderContextCreationInfo_t *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, va_list *); /* linkage=_ZN17CRenderContextPtr4InitEjP27RenderContextCreationInfo_tP13IRenderDeviceRK18RenderTargetDesc_tPKcPA1_13__va_list_tag */
	void InitPreallocated(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, class IRenderContext *); /* linkage=_ZN17CRenderContextPtr16InitPreallocatedEP13IRenderDeviceRK18RenderTargetDesc_tP14IRenderContext */
	void CRenderContextPtr<>(class CRenderContextPtr *, class IRenderDevice *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJEEEP13IRenderDevicePKcDpT_ */
	void CRenderContextPtr<char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcEEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*, char const*, char const*, int, int, int, int>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *, const char  *, int, int, int, int); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_S2_iiiiEEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*, char const*, char const*, char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_S2_S2_EEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*>(class CRenderContextPtr *, class IRenderDevice *, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcEEEP13IRenderDeviceS2_DpT_ */
	void CRenderContextPtr<char const*, char const*, char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_S2_EEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*, char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_EEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
} __attribute__((__aligned__(16)));

// <039AD515> ../public/rendersystem/irendercontext.h:738
// member functions: 34
// member variables: 2
// class size: 16
class CRenderContextPtr {
	/* ../public/rendersystem/irendercontext.h:741 */
	void CRenderContextPtr(CRenderContextPtr* , uint, IRenderDevice* , const RenderTargetDesc_t& , const char* , ...);
	/* ../public/rendersystem/irendercontext.h:742 */
	void CRenderContextPtr(CRenderContextPtr* , uint, RenderContextCreationInfo_t* , IRenderDevice* , const char* , ...);
	/* ../public/rendersystem/irendercontext.h:744 */
	void CRenderContextPtr(CRenderContextPtr* , IRenderDevice* );
	/* ../public/rendersystem/irendercontext.h:756 */
	void ~CRenderContextPtr(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:757 */
	IRenderContext* operator->(const CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:758 */
	IRenderContext* operator IRenderContext*(const CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:759 */
	IRenderContext* GetContext(const CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:762 */
	void Release(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:764 */
	void Discard(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:765 */
	CDisplayList* DetachDisplayListAndClear(CRenderContextPtr* );
protected:
	IRenderContext * m_pContext; /* 0 8 */
	IRenderDevice * m_pDevice; /* 8 8 */
	/* ../public/rendersystem/irendercontext.h:771 */
	void CRenderContextPtr(CRenderContextPtr* );
	/* ../public/rendersystem/irendercontext.h:773 */
	void Init(CRenderContextPtr* , uint, RenderContextCreationInfo_t* , IRenderDevice* , const RenderTargetDesc_t& , const char* , va_list* );
private:
	/* ../public/rendersystem/irendercontext.h:777 */
	void InitPreallocated(CRenderContextPtr* , IRenderDevice* , const RenderTargetDesc_t& , IRenderContext* );
	/* ../public/rendersystem/irendercontext.h:751 */
	void CRenderContextPtr<char const*>(CRenderContextPtr* , IRenderDevice* , const char* , const char* );
	void CRenderContextPtr(class CRenderContextPtr *, uint, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, ...); /* linkage=_ZN17CRenderContextPtrC4EjP13IRenderDeviceRK18RenderTargetDesc_tPKcz */
	void CRenderContextPtr(class CRenderContextPtr *, uint, class RenderContextCreationInfo_t *, class IRenderDevice *, const char  *, ...); /* linkage=_ZN17CRenderContextPtrC4EjP27RenderContextCreationInfo_tP13IRenderDevicePKcz */
	void CRenderContextPtr(class CRenderContextPtr *, class IRenderDevice *); /* linkage=_ZN17CRenderContextPtrC4EP13IRenderDevice */
	void ~CRenderContextPtr(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtrD4Ev */
	class IRenderContext * operator->(const class CRenderContextPtr  *); /* linkage=_ZNK17CRenderContextPtrptEv */
	class IRenderContext * operator IRenderContext*(const class CRenderContextPtr  *); /* linkage=_ZNK17CRenderContextPtrcvP14IRenderContextEv */
	class IRenderContext * GetContext(const class CRenderContextPtr  *); /* linkage=_ZNK17CRenderContextPtr10GetContextEv */
	void Release(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtr7ReleaseEv */
	void Discard(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtr7DiscardEv */
	class CDisplayList * DetachDisplayListAndClear(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtr25DetachDisplayListAndClearEv */
	void CRenderContextPtr(class CRenderContextPtr *); /* linkage=_ZN17CRenderContextPtrC4Ev */
	void Init(class CRenderContextPtr *, uint, class RenderContextCreationInfo_t *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, va_list *); /* linkage=_ZN17CRenderContextPtr4InitEjP27RenderContextCreationInfo_tP13IRenderDeviceRK18RenderTargetDesc_tPKcPA1_13__va_list_tag */
	void InitPreallocated(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, class IRenderContext *); /* linkage=_ZN17CRenderContextPtr16InitPreallocatedEP13IRenderDeviceRK18RenderTargetDesc_tP14IRenderContext */
	void CRenderContextPtr<>(class CRenderContextPtr *, class IRenderDevice *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJEEEP13IRenderDevicePKcDpT_ */
	void CRenderContextPtr<char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcEEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*, char const*, char const*, int, int, int, int>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *, const char  *, int, int, int, int); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_S2_iiiiEEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*, char const*, char const*, char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_S2_S2_EEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*>(class CRenderContextPtr *, class IRenderDevice *, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcEEEP13IRenderDeviceS2_DpT_ */
	void CRenderContextPtr<char const*, char const*, char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_S2_EEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
	void CRenderContextPtr<char const*, char const*>(class CRenderContextPtr *, class IRenderDevice *, const class RenderTargetDesc_t  &, const char  *, const char  *); /* linkage=_ZN17CRenderContextPtrC4IJPKcS2_EEEP13IRenderDeviceRK18RenderTargetDesc_tDpT_ */
} __attribute__((__aligned__(16)));

// <02F1A572> ../public/rendersystem/irendercontext.h:744
void CRenderContextPtr::CRenderContextPtr(IRenderDevice* pDevice)
{
} /* size: 0 */

// <02F1A54C> ../public/rendersystem/irendercontext.h:744
inline void CRenderContextPtr::CRenderContextPtr(IRenderDevice* pDevice)
{
} /* size: 0 */

// <033AF2EE> ../public/rendersystem/irendercontext.h:747
void CRenderContextPtr<char CRenderContextPtr::const*>(IRenderDevice* pDevice, const RenderTargetDesc_t& renderTargetDesc)
{
} /* size: 0 */

// <033AF29A> ../public/rendersystem/irendercontext.h:747
inline void CRenderContextPtr<char CRenderContextPtr::const*>(IRenderDevice* pDevice, const RenderTargetDesc_t& renderTargetDesc)
{
} /* size: 0 */

// <02EA7966> ../public/rendersystem/irendercontext.h:747
void CRenderContextPtr<char const*, char CRenderContextPtr::const*>(IRenderDevice* pDevice, const RenderTargetDesc_t& renderTargetDesc)
{
} /* size: 0 */

// <02EA7909> ../public/rendersystem/irendercontext.h:747
inline void CRenderContextPtr<char const*, char CRenderContextPtr::const*>(IRenderDevice* pDevice, const RenderTargetDesc_t& renderTargetDesc)
{
} /* size: 0 */

// <02EA74C8> ../public/rendersystem/irendercontext.h:747
void CRenderContextPtr<char const*, char const*, char CRenderContextPtr::const*>(IRenderDevice* pDevice, const RenderTargetDesc_t& renderTargetDesc)
{
} /* size: 0 */

// <02EA7461> ../public/rendersystem/irendercontext.h:747
inline void CRenderContextPtr<char const*, char const*, char CRenderContextPtr::const*>(IRenderDevice* pDevice, const RenderTargetDesc_t& renderTargetDesc)
{
} /* size: 0 */

// <02EA68AB> ../public/rendersystem/irendercontext.h:747
void CRenderContextPtr<char const*, char const*, char const*, char CRenderContextPtr::const*>(IRenderDevice* pDevice, const RenderTargetDesc_t& renderTargetDesc)
{
} /* size: 0 */

// <02EA683A> ../public/rendersystem/irendercontext.h:747
inline void CRenderContextPtr<char const*, char const*, char const*, char CRenderContextPtr::const*>(IRenderDevice* pDevice, const RenderTargetDesc_t& renderTargetDesc)
{
} /* size: 0 */

// <02EA572C> ../public/rendersystem/irendercontext.h:747
void CRenderContextPtr<char const*, char const*, char const*, int, int, int, CRenderContextPtr::int>(IRenderDevice* pDevice, const RenderTargetDesc_t& renderTargetDesc)
{
} /* size: 0 */

// <02EA569D> ../public/rendersystem/irendercontext.h:747
inline void CRenderContextPtr<char const*, char const*, char const*, int, int, int, CRenderContextPtr::int>(IRenderDevice* pDevice, const RenderTargetDesc_t& renderTargetDesc)
{
} /* size: 0 */

// <06455FD2> ../public/rendersystem/irendercontext.h:751
void CRenderContextPtr::CRenderContextPtr<>(IRenderDevice* pDevice, const char* pDebugStringFmt)
{
} /* size: 0 */

// <06455F8F> ../public/rendersystem/irendercontext.h:751
inline void CRenderContextPtr::CRenderContextPtr<>(IRenderDevice* pDevice, const char* pDebugStringFmt)
{
} /* size: 0 */

// <039D6AA1> ../public/rendersystem/irendercontext.h:751
void CRenderContextPtr<char CRenderContextPtr::const*>(IRenderDevice* pDevice, const char* pDebugStringFmt)
{
} /* size: 0 */

// <039D6A4D> ../public/rendersystem/irendercontext.h:751
inline void CRenderContextPtr<char CRenderContextPtr::const*>(IRenderDevice* pDevice, const char* pDebugStringFmt)
{
} /* size: 0 */

// <00C51109> ../public/rendersystem/irendercontext.h:771
void CRenderContextPtr::CRenderContextPtr()
{
} /* size: 0 */

// <00C510F0> ../public/rendersystem/irendercontext.h:771
inline void CRenderContextPtr::CRenderContextPtr()
{
} /* size: 0 */

// <02F1A521> ../public/rendersystem/irendercontext.h:780
// variable: 1
inline void CRenderContextPtr::DetachDisplayListAndClear()
{
	{
		CDisplayList* pRet; // 784
	}
} /* size: 0 */

// <06468EA0> ../public/rendersystem/irendercontext.h:794
inline void CRenderContextPtr::InitPreallocated(IRenderDevice* pDevice, const RenderTargetDesc_t& renderTargetDesc, IRenderContext* pContext)
{
} /* size: 0 */

// <06468E36> ../public/rendersystem/irendercontext.h:808
inline void CRenderContextPtr::Init(uint nRenderContextFlags, RenderContextCreationInfo_t* pOptInfo, IRenderDevice* pDevice, const RenderTargetDesc_t& renderTargetDesc, const char* pDebugStringFmt, va_list* pArglist)
{
} /* size: 0 */

// <06468B27> ../public/rendersystem/irendercontext.h:817
// variables: 5
// function calls: 10
void CRenderContextPtr::CRenderContextPtr(uint nRenderContextFlags, RenderContextCreationInfo_t* pOptInfo, IRenderDevice* pDevice, const char* pDebugStringFmt, ...)
{
	{
		RenderTargetDesc_t rtDesc; // 819
		va_list args; // 822
	}
	{
		RenderTargetDesc_t rtDesc; // 819
		va_list args; // 822
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 115
		{
			int i; // 121
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 123
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 127
		RenderTargetDesc_t::Clear(); // 116
		RenderTargetDesc_t::RenderTargetDesc_t(); // 819
		CRenderContextPtr::InitPreallocated(
				IRenderDevice* pDevice,
				const RenderTargetDesc_t& renderTargetDesc,
				IRenderContext* pContext);  // 811
		CRenderContextPtr::Init(
			uint nRenderContextFlags,
			RenderContextCreationInfo_t* pOptInfo,
			IRenderDevice* pDevice,
			const RenderTargetDesc_t& renderTargetDesc,
			const char* pDebugStringFmt,
			va_list* pArglist);  // 824
	}
} /* size: 355 */

// <06468ABA> ../public/rendersystem/irendercontext.h:817
// variables: 2
inline void CRenderContextPtr::CRenderContextPtr(uint nRenderContextFlags, RenderContextCreationInfo_t* pOptInfo, IRenderDevice* pDevice, const char* pDebugStringFmt, ...)
{
	{
		RenderTargetDesc_t rtDesc; // 819
		va_list args; // 822
	}
} /* size: 0 */

// <033CAE0B> ../public/rendersystem/irendercontext.h:831
// variables: 2
// function calls: 2
void CRenderContextPtr::CRenderContextPtr(uint nRenderContextFlags, IRenderDevice* pDevice, const RenderTargetDesc_t& renderTargetDesc, const char* pDebugStringFmt, ...)
{
	{
		va_list args; // 834
	}
	{
		va_list args; // 834
		CRenderContextPtr::InitPreallocated(
				IRenderDevice* pDevice,
				const RenderTargetDesc_t& renderTargetDesc,
				IRenderContext* pContext);  // 811
		CRenderContextPtr::Init(
			uint nRenderContextFlags,
			RenderContextCreationInfo_t* pOptInfo,
			IRenderDevice* pDevice,
			const RenderTargetDesc_t& renderTargetDesc,
			const char* pDebugStringFmt,
			va_list* pArglist);  // 836
	}
} /* size: 243 */

// <033CADAB> ../public/rendersystem/irendercontext.h:831
// variable: 1
inline void CRenderContextPtr::CRenderContextPtr(uint nRenderContextFlags, IRenderDevice* pDevice, const RenderTargetDesc_t& renderTargetDesc, const char* pDebugStringFmt, ...)
{
	{
		va_list args; // 834
	}
} /* size: 0 */

// <06468AA3> ../public/rendersystem/irendercontext.h:843
void CRenderContextPtr::~CRenderContextPtr()
{
} /* size: 0 */

// <06468A87> ../public/rendersystem/irendercontext.h:843
inline void CRenderContextPtr::~CRenderContextPtr()
{
} /* size: 0 */

// <06468A6B> ../public/rendersystem/irendercontext.h:848
inline void CRenderContextPtr::Release()
{
} /* size: 0 */

// <06468A4F> ../public/rendersystem/irendercontext.h:870
inline void CRenderContextPtr::operator->()
{
} /* size: 0 */

// <06468A33> ../public/rendersystem/irendercontext.h:876
inline void operator CRenderContextPtr::IRenderContext*()
{
} /* size: 0 */

// <018F1137> ../public/rendersystem/irendercontext.h:889
// member functions: 8
// member variable: 1
// class size: 8
class CRenderPixEvent {
	/* ../public/rendersystem/irendercontext.h:892 */
	void CRenderPixEvent(CRenderPixEvent* , IRenderContext* , const char* );
	/* ../public/rendersystem/irendercontext.h:898 */
	void CRenderPixEvent(CRenderPixEvent* , IRenderContext* , Color, const char* );
	/* ../public/rendersystem/irendercontext.h:904 */
	void ~CRenderPixEvent(CRenderPixEvent* );
	/* ../public/rendersystem/irendercontext.h:909 */
	void Release(CRenderPixEvent* );
private:
	IRenderContext * m_pContext; /* 0 8 */
	void CRenderPixEvent(class CRenderPixEvent *, class IRenderContext *, const char  *); /* linkage=_ZN15CRenderPixEventC4EP14IRenderContextPKc */
	void CRenderPixEvent(class CRenderPixEvent *, class IRenderContext *, class Color, const char  *); /* linkage=_ZN15CRenderPixEventC4EP14IRenderContext5ColorPKc */
	void ~CRenderPixEvent(class CRenderPixEvent *); /* linkage=_ZN15CRenderPixEventD4Ev */
	void Release(class CRenderPixEvent *); /* linkage=_ZN15CRenderPixEvent7ReleaseEv */
};

// <019520C7> ../public/rendersystem/irendercontext.h:898
void CRenderPixEvent::CRenderPixEvent(IRenderContext* pRenderContext, Color c, const char* pName)
{
} /* size: 0 */

// <01952089> ../public/rendersystem/irendercontext.h:898
inline void CRenderPixEvent::CRenderPixEvent(IRenderContext* pRenderContext, Color c, const char* pName)
{
} /* size: 0 */

// <01952072> ../public/rendersystem/irendercontext.h:904
void CRenderPixEvent::~CRenderPixEvent()
{
} /* size: 0 */

// <01952059> ../public/rendersystem/irendercontext.h:904
inline void CRenderPixEvent::~CRenderPixEvent()
{
} /* size: 0 */

// <01952040> ../public/rendersystem/irendercontext.h:909
inline void CRenderPixEvent::Release()
{
} /* size: 0 */

