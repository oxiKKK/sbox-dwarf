
//
// empty/renderdeviceempty.h
//
//	referenced by: librendersystemempty.so
//
//	functions: 19
//	classes: 2
//

// <003E4F61> empty/renderdeviceempty.h:27
// member functions: 10
// member variable: 1
// class size: 376
class CSwapChainEmpty : public CSwapChainBase {
public:
	/* class CSwapChainBase <ancestor>; */ /* 0 376 */
	void CSwapChainEmpty(CSwapChainEmpty* , const CSwapChainEmpty& );
	/* empty/renderdeviceempty.cpp:85 */
	void CSwapChainEmpty(CSwapChainEmpty* );
	/* empty/renderdeviceempty.cpp:90 */
	virtual void ~CSwapChainEmpty(CSwapChainEmpty* );
	/* empty/renderdeviceempty.cpp:98 */
	bool Init(CSwapChainEmpty* , PlatWindow_t, OsSpecificWindowHandle_t, const RenderDeviceInfo_t& , const char* );
	/* empty/renderdeviceempty.cpp:110 */
	void Update(CSwapChainEmpty* , const RenderDeviceInfo_t& );
	void CSwapChainEmpty(class CSwapChainEmpty *, const class CSwapChainEmpty  &); /* linkage=_ZN15CSwapChainEmptyC4ERKS_ */
	void CSwapChainEmpty(class CSwapChainEmpty *); /* linkage=_ZN15CSwapChainEmptyC4Ev */
	virtual void ~CSwapChainEmpty(class CSwapChainEmpty *); /* linkage=_ZN15CSwapChainEmptyD4Ev */
	/* <3ea7f5> empty/renderdeviceempty.cpp:98 */
	bool Init(class CSwapChainEmpty *, PlatWindow_t, OsSpecificWindowHandle_t, const class RenderDeviceInfo_t  &, const char  *); /* linkage=_ZN15CSwapChainEmpty4InitEP14PlatWindow_t__P26OsSpecificWindowHandle_t__RK18RenderDeviceInfo_tPKc */
	/* <3ea8d2> empty/renderdeviceempty.cpp:110 */
	void Update(class CSwapChainEmpty *, const class RenderDeviceInfo_t  &); /* linkage=_ZN15CSwapChainEmpty6UpdateERK18RenderDeviceInfo_t */
} __attribute__((__aligned__(8)));

// <003E24EF> empty/renderdeviceempty.h:41
// member functions: 176
// member variables: 3
// vtable entries: 85
// class size: 168,976
class CRenderDeviceEmpty : public CRenderDeviceBase {
public:
	/* class CRenderDeviceBase <ancestor>; */ /* 0 0 */
	void CRenderDeviceEmpty(CRenderDeviceEmpty* , const CRenderDeviceEmpty& );
	/* empty/renderdeviceempty.cpp:76 */
	virtual RenderDeviceAPI_t GetRenderDeviceAPI(const CRenderDeviceEmpty* );
	/* empty/renderdeviceempty.cpp:116 */
	virtual SwapChainHandle_t CreateSwapChain(CRenderDeviceEmpty* , PlatWindow_t, OsSpecificWindowHandle_t, const RenderDeviceInfo_t& , const char* );
	/* empty/renderdeviceempty.cpp:139 */
	virtual bool UpdateSwapChain(CRenderDeviceEmpty* , SwapChainHandle_t, const RenderDeviceInfo_t& );
	/* empty/renderdeviceempty.cpp:130 */
	virtual bool CanRenderToSwapChain(const CRenderDeviceEmpty* , SwapChainHandle_t);
	/* empty/renderdeviceempty.cpp:215 */
	virtual ImageFormat GetSwapChainDepthStencilFormat(const CRenderDeviceEmpty* , SwapChainHandle_t);
	/* empty/renderdeviceempty.cpp:191 */
	virtual bool IsUsingGraphics(const CRenderDeviceEmpty* );
	/* empty/renderdeviceempty.cpp:228 */
	virtual const char* GetShaderVersionString(const CRenderDeviceEmpty* , RenderShaderType_t);
	/* empty/renderdeviceempty.cpp:233 */
	virtual bool Present(CRenderDeviceEmpty* , SwapChainHandle_t);
	/* empty/renderdeviceempty.cpp:297 */
	virtual unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > CompileShader(CRenderDeviceEmpty* , const char* , uint32, const char* );
	/* empty/renderdeviceempty.cpp:338 */
	virtual VertexBufferHandle_t CreateVertexBuffer(CRenderDeviceEmpty* , RenderBufferType_t, const BufferDesc_t& , RenderBufferFlags_t);
	/* empty/renderdeviceempty.cpp:348 */
	virtual VertexBufferHandle_t CreateVertexBuffer(CRenderDeviceEmpty* , RenderBufferType_t, const BufferDesc_t& , RenderInputLayout_t, RenderBufferFlags_t);
	/* empty/renderdeviceempty.cpp:343 */
	virtual VertexBufferHandle_t CreateVertexBuffer(CRenderDeviceEmpty* , RenderBufferType_t, const BufferDesc_t& , int, const RenderInputLayoutField_t* , RenderBufferFlags_t);
	/* empty/renderdeviceempty.cpp:354 */
	virtual void DestroyVertexBuffer(CRenderDeviceEmpty* , VertexBufferHandle_t);
	/* empty/renderdeviceempty.cpp:404 */
	virtual IndexBufferHandle_t CreateIndexBuffer(CRenderDeviceEmpty* , RenderBufferType_t, const BufferDesc_t& , RenderBufferFlags_t);
	/* empty/renderdeviceempty.cpp:409 */
	virtual void DestroyIndexBuffer(CRenderDeviceEmpty* , IndexBufferHandle_t);
	/* empty/renderdeviceempty.cpp:358 */
	virtual void GetVertexBufferDesc(CRenderDeviceEmpty* , VertexBufferHandle_t, BufferDesc_t* );
	/* empty/renderdeviceempty.cpp:378 */
	virtual void GetIndexBufferDesc(CRenderDeviceEmpty* , IndexBufferHandle_t, BufferDesc_t* );
	/* empty/renderdeviceempty.cpp:398 */
	virtual void GetGPUBufferDesc(CRenderDeviceEmpty* , RenderBufferHandle_t, BufferDesc_t* );
	/* empty/renderdeviceempty.cpp:413 */
	virtual RenderBufferHandle_t CreateGPUBuffer(CRenderDeviceEmpty* , RenderBufferType_t, const BufferDesc_t& , RenderBufferFlags_t, const void* );
	/* empty/renderdeviceempty.cpp:418 */
	virtual RenderBufferHandle_t CreateGPUBufferFormatted(CRenderDeviceEmpty* , RenderBufferType_t, const BufferDesc_t& , RenderBufferFlags_t, ImageFormat, const void* );
	/* empty/renderdeviceempty.cpp:423 */
	virtual uint64 GetGPUBufferDeviceAddress(const CRenderDeviceEmpty* , RenderBufferHandle_t);
	/* empty/renderdeviceempty.cpp:428 */
	virtual void DestroyGPUBuffer(CRenderDeviceEmpty* , RenderBufferHandle_t);
	/* empty/renderdeviceempty.cpp:436 */
	virtual RenderInputLayout_t CreateInputLayout(CRenderDeviceEmpty* , const char* , int, const RenderInputLayoutField_t* );
	/* empty/renderdeviceempty.cpp:441 */
	virtual void AddInputLayoutReference(CRenderDeviceEmpty* , RenderInputLayout_t);
	/* empty/renderdeviceempty.cpp:445 */
	virtual void DestroyInputLayout(CRenderDeviceEmpty* , RenderInputLayout_t);
	/* empty/renderdeviceempty.cpp:449 */
	virtual void ConcatentateInputLayouts(CRenderDeviceEmpty* , int, RenderInputLayout_t* , int, const RenderInputLayout_t* );
	/* empty/renderdeviceempty.cpp:458 */
	virtual void GetInputLayoutFields(CRenderDeviceEmpty* , RenderInputLayout_t, const RenderInputLayoutField_t** , int& );
	/* empty/renderdeviceempty.cpp:285 */
	virtual void SetHardwareGammaRamp(CRenderDeviceEmpty* , SwapChainHandle_t, float, float, float, float, bool);
	/* empty/renderdeviceempty.cpp:209 */
	virtual void SpewDriverInfo(const CRenderDeviceEmpty* );
	/* empty/renderdeviceempty.cpp:200 */
	virtual int GetCurrentAdapter(const CRenderDeviceEmpty* );
	/* empty/renderdeviceempty.cpp:467 */
	virtual void EnableRenderContexts(CRenderDeviceEmpty* , bool);
	/* empty/renderdeviceempty.cpp:475 */
	virtual IRenderContext* VaCreateRenderContext(CRenderDeviceEmpty* , uint, RenderContextCreationInfo_t* , const char* , va_list* );
	/* empty/renderdeviceempty.cpp:274 */
	virtual void ForceDeviceLost(CRenderDeviceEmpty* );
	/* empty/renderdeviceempty.cpp:181 */
	virtual bool ReadTexturePixels(CRenderDeviceEmpty* , HRenderTexture, Rect_t* , int, int, Rect_t* , void* , ImageFormat, int);
	/* empty/renderdeviceempty.cpp:488 */
	virtual void DestroyConstantBuffer(CRenderDeviceEmpty* , ConstantBufferHandle_t);
	/* empty/renderdeviceempty.h:85 */
	virtual RenderDescriptorSetHandle_t CreateDescriptorSet(CRenderDeviceEmpty* , int32, const RenderDescriptorDesc_t* , int32, const RenderDescriptorBinding_t* , bool);
	/* empty/renderdeviceempty.h:86 */
	virtual void UpdateDescriptorSet(CRenderDeviceEmpty* , RenderDescriptorSetHandle_t, int32, const RenderDescriptorBinding_t* );
	/* empty/renderdeviceempty.h:87 */
	virtual void DestroyDescriptorSet(CRenderDeviceEmpty* , RenderDescriptorSetHandle_t);
	/* empty/renderdeviceempty.h:88 */
	virtual bool AddDescriptorsToGlobalPerFrameDescriptorSet(CRenderDeviceEmpty* , int32, const RenderDescriptorDesc_t* );
	/* empty/renderdeviceempty.h:89 */
	virtual void UpdateGlobalPerFrameDescriptorBindings(CRenderDeviceEmpty* , int32, const RenderDescriptorBinding_t* );
	/* empty/renderdeviceempty.h:90 */
	virtual RenderPassHandle_t CreateRenderPass(CRenderDeviceEmpty* , const CRenderPassDesc* );
	/* empty/renderdeviceempty.h:91 */
	virtual void DestroyRenderPass(CRenderDeviceEmpty* , RenderPassHandle_t);
	/* empty/renderdeviceempty.cpp:483 */
	virtual void DiscardDisplayList(CRenderDeviceEmpty* , CDisplayList* );
	/* empty/renderdeviceempty.cpp:153 */
	virtual ImageFormat GetNearestSupportedColorFormat(CRenderDeviceEmpty* , ImageFormat, bool, bool, bool);
	/* empty/renderdeviceempty.cpp:159 */
	virtual void* GetDeviceSpecificTexture(CRenderDeviceEmpty* , HRenderTexture, RenderTextureDimension_t);
	/* empty/renderdeviceempty.h:98 */
	virtual void OnBeginningOfClientShutdown(CRenderDeviceEmpty* );
	/* empty/renderdeviceempty.h:100 */
	virtual bool GetGPUFrameTimeMS(const CRenderDeviceEmpty* , SwapChainHandle_t, float* , uint32* );
	/* empty/renderdeviceempty.h:101 */
	virtual bool GetTimestampCounterFrequencyInternal(CRenderDeviceEmpty* , double* );
	/* empty/renderdeviceempty.h:103 */
	virtual void RegisterDescriptorSetLayout(CRenderDeviceEmpty* , CUtlStringToken, RenderDescriptorSetHandle_t);
	/* empty/renderdeviceempty.h:104 */
	virtual RenderDescriptorSetHandle_t GetRegisteredDescriptorSetLayout(const CRenderDeviceEmpty* , CUtlStringToken);
	/* empty/renderdeviceempty.cpp:540 */
	virtual SamplerStateHandle_t FindOrCreateSamplerState(CRenderDeviceEmpty* , const CSamplerStateDesc& , const char* );
	/* empty/renderdeviceempty.cpp:545 */
	virtual uint GetSamplerIndex(const CRenderDeviceEmpty* , SamplerStateHandle_t);
	/* empty/renderdeviceempty.cpp:550 */
	virtual uint GetTextureViewIndex(const CRenderDeviceEmpty* , HRenderTexture, RenderColorSpace_t, RenderTextureDimension_t);
	/* empty/renderdeviceempty.cpp:560 */
	virtual PooledIndexBufferHandle_t AllocatePooledIndexBuffer(CRenderDeviceEmpty* , uint, const uint16* , uint* );
	/* empty/renderdeviceempty.cpp:565 */
	virtual void FreePooledIndexBuffer(CRenderDeviceEmpty* , PooledIndexBufferHandle_t);
	/* empty/renderdeviceempty.cpp:569 */
	virtual uint GetPooledIndexBufferOffset(CRenderDeviceEmpty* , PooledIndexBufferHandle_t);
	/* empty/renderdeviceempty.cpp:574 */
	virtual IndexBufferHandle_t GetPooledIndexBuffer(CRenderDeviceEmpty* );
	/* empty/renderdeviceempty.h:115 */
	virtual void TriggerValidationError(CRenderDeviceEmpty* );
	/* empty/renderdeviceempty.cpp:48 */
	virtual bool InitDevice(CRenderDeviceEmpty* , int, int, int);
	/* empty/renderdeviceempty.cpp:64 */
	virtual void ShutdownDevice(CRenderDeviceEmpty* );
	/* empty/renderdeviceempty.h:189 */
	virtual bool IsDeactivated(const CRenderDeviceEmpty* );
	/* empty/renderdeviceempty.cpp:167 */
	virtual bool SupportsMSAAMode(const CRenderDeviceEmpty* , ImageFormat, bool, RenderMultisampleType_t);
	/* empty/renderdeviceempty.cpp:172 */
	virtual bool SupportsCSAAMode(const CRenderDeviceEmpty* , ImageFormat, bool, RenderMultisampleType_t, int);
	/* empty/renderdeviceempty.cpp:281 */
	virtual void PerFrameCleanup(CRenderDeviceEmpty* , SwapChainHandle_t);
	/* empty/renderdeviceempty.cpp:302 */
	virtual RenderShaderHandle_t CreateVertexShader(CRenderDeviceEmpty* , unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* empty/renderdeviceempty.cpp:307 */
	virtual void DestroyVertexShader(CRenderDeviceEmpty* , RenderShaderHandle_t);
	/* empty/renderdeviceempty.cpp:311 */
	virtual RenderShaderHandle_t CreateGeometryShader(CRenderDeviceEmpty* , unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* empty/renderdeviceempty.cpp:316 */
	virtual void DestroyGeometryShader(CRenderDeviceEmpty* , RenderShaderHandle_t);
	/* empty/renderdeviceempty.cpp:320 */
	virtual RenderShaderHandle_t CreateComputeShader(CRenderDeviceEmpty* , unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* empty/renderdeviceempty.cpp:325 */
	virtual void DestroyComputeShader(CRenderDeviceEmpty* , RenderShaderHandle_t);
	/* empty/renderdeviceempty.cpp:329 */
	virtual RenderShaderHandle_t CreatePixelShader(CRenderDeviceEmpty* , unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char* );
	/* empty/renderdeviceempty.cpp:334 */
	virtual void DestroyPixelShader(CRenderDeviceEmpty* , RenderShaderHandle_t);
	/* empty/renderdeviceempty.cpp:245 */
	virtual RenderQueryHandle_t CreateQueryObject(CRenderDeviceEmpty* , RenderQueryType_t);
	/* empty/renderdeviceempty.cpp:258 */
	virtual RenderQueryState_t GetQueryData(CRenderDeviceEmpty* , RenderQueryHandle_t, uint64* );
	/* empty/renderdeviceempty.cpp:250 */
	virtual void DeleteQueryObject(CRenderDeviceEmpty* , RenderQueryHandle_t);
	/* empty/renderdeviceempty.cpp:531 */
	virtual void* GetDeviceSpecificInfo(CRenderDeviceEmpty* , DeviceSpecificInfo_t);
	/* empty/renderdeviceempty.cpp:35 */
	void CRenderDeviceEmpty(CRenderDeviceEmpty* );
	/* empty/renderdeviceempty.cpp:40 */
	virtual void ~CRenderDeviceEmpty(CRenderDeviceEmpty* );
	/* empty/renderdeviceempty.cpp:267 */
	virtual void OtherAppInitializing(CRenderDeviceEmpty* , bool);
protected:
	/* empty/renderdeviceempty.cpp:514 */
	virtual void* CreateRasterizerStateFromDesc(CRenderDeviceEmpty* , const RsRasterizerStateDesc_t* );
	/* empty/renderdeviceempty.cpp:520 */
	virtual void* CreateDepthStencilStateFromDesc(CRenderDeviceEmpty* , const RsDepthStencilStateDesc_t* );
	/* empty/renderdeviceempty.cpp:526 */
	virtual void* CreateBlendStateFromDesc(CRenderDeviceEmpty* , const RsBlendStateDesc_t* );
private:
	CTextureManagerEmpty m_TextureManager __attribute__((__aligned__(8))); /* 151744 0 */
	bool m_bRenderContextsEnabled:1; /* 168960: 0 1 */
	/* empty/renderdeviceempty.h:170 */
	virtual int GetTextureLastUsed(CRenderDeviceEmpty* , HRenderTexture);
	/* empty/renderdeviceempty.h:175 */
	virtual void PreloadTextureBits(CRenderDeviceEmpty* , HRenderTexture, int32);
	/* empty/renderdeviceempty.h:176 */
	virtual void UnloadTextureBits(CRenderDeviceEmpty* , HRenderTexture);
	/* empty/renderdeviceempty.h:177 */
	virtual bool AreTextureBitsLoaded(const CRenderDeviceEmpty* , HRenderTexture);
	/* empty/renderdeviceempty.h:178 */
	virtual void SetTextureStreamingPriority(CRenderDeviceEmpty* , HRenderTexture, RenderTextureStreamingPriority_t);
	void CRenderDeviceEmpty(class CRenderDeviceEmpty *, const class CRenderDeviceEmpty  &); /* linkage=_ZN18CRenderDeviceEmptyC4ERKS_ */
	virtual enum RenderDeviceAPI_t GetRenderDeviceAPI(const class CRenderDeviceEmpty  *); /* linkage=_ZNK18CRenderDeviceEmpty18GetRenderDeviceAPIEv */
	virtual SwapChainHandle_t CreateSwapChain(class CRenderDeviceEmpty *, PlatWindow_t, OsSpecificWindowHandle_t, const class RenderDeviceInfo_t  &, const char  *); /* linkage=_ZN18CRenderDeviceEmpty15CreateSwapChainEP14PlatWindow_t__P26OsSpecificWindowHandle_t__RK18RenderDeviceInfo_tPKc */
	virtual bool UpdateSwapChain(class CRenderDeviceEmpty *, SwapChainHandle_t, const class RenderDeviceInfo_t  &); /* linkage=_ZN18CRenderDeviceEmpty15UpdateSwapChainEP19SwapChainHandle_t__RK18RenderDeviceInfo_t */
	virtual bool CanRenderToSwapChain(const class CRenderDeviceEmpty  *, SwapChainHandle_t); /* linkage=_ZNK18CRenderDeviceEmpty20CanRenderToSwapChainEP19SwapChainHandle_t__ */
	virtual enum ImageFormat GetSwapChainDepthStencilFormat(const class CRenderDeviceEmpty  *, SwapChainHandle_t); /* linkage=_ZNK18CRenderDeviceEmpty30GetSwapChainDepthStencilFormatEP19SwapChainHandle_t__ */
	virtual bool IsUsingGraphics(const class CRenderDeviceEmpty  *); /* linkage=_ZNK18CRenderDeviceEmpty15IsUsingGraphicsEv */
	virtual const char  * GetShaderVersionString(const class CRenderDeviceEmpty  *, enum RenderShaderType_t); /* linkage=_ZNK18CRenderDeviceEmpty22GetShaderVersionStringE18RenderShaderType_t */
	virtual bool Present(class CRenderDeviceEmpty *, SwapChainHandle_t); /* linkage=_ZN18CRenderDeviceEmpty7PresentEP19SwapChainHandle_t__ */
	virtual class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > CompileShader(class CRenderDeviceEmpty *, const char  *, uint32, const char  *); /* linkage=_ZN18CRenderDeviceEmpty13CompileShaderEPKcjS1_ */
	virtual VertexBufferHandle_t CreateVertexBuffer(class CRenderDeviceEmpty *, enum RenderBufferType_t, const class BufferDesc_t  &, enum RenderBufferFlags_t); /* linkage=_ZN18CRenderDeviceEmpty18CreateVertexBufferE18RenderBufferType_tRK12BufferDesc_t19RenderBufferFlags_t */
	virtual VertexBufferHandle_t CreateVertexBuffer(class CRenderDeviceEmpty *, enum RenderBufferType_t, const class BufferDesc_t  &, RenderInputLayout_t, enum RenderBufferFlags_t); /* linkage=_ZN18CRenderDeviceEmpty18CreateVertexBufferE18RenderBufferType_tRK12BufferDesc_tP21RenderInputLayout_t__19RenderBufferFlags_t */
	virtual VertexBufferHandle_t CreateVertexBuffer(class CRenderDeviceEmpty *, enum RenderBufferType_t, const class BufferDesc_t  &, int, const class RenderInputLayoutField_t  *, enum RenderBufferFlags_t); /* linkage=_ZN18CRenderDeviceEmpty18CreateVertexBufferE18RenderBufferType_tRK12BufferDesc_tiPK24RenderInputLayoutField_t19RenderBufferFlags_t */
	virtual void DestroyVertexBuffer(class CRenderDeviceEmpty *, VertexBufferHandle_t); /* linkage=_ZN18CRenderDeviceEmpty19DestroyVertexBufferEP22VertexBufferHandle_t__ */
	virtual IndexBufferHandle_t CreateIndexBuffer(class CRenderDeviceEmpty *, enum RenderBufferType_t, const class BufferDesc_t  &, enum RenderBufferFlags_t); /* linkage=_ZN18CRenderDeviceEmpty17CreateIndexBufferE18RenderBufferType_tRK12BufferDesc_t19RenderBufferFlags_t */
	virtual void DestroyIndexBuffer(class CRenderDeviceEmpty *, IndexBufferHandle_t); /* linkage=_ZN18CRenderDeviceEmpty18DestroyIndexBufferEP21IndexBufferHandle_t__ */
	virtual void GetVertexBufferDesc(class CRenderDeviceEmpty *, VertexBufferHandle_t, class BufferDesc_t *); /* linkage=_ZN18CRenderDeviceEmpty19GetVertexBufferDescEP22VertexBufferHandle_t__P12BufferDesc_t */
	virtual void GetIndexBufferDesc(class CRenderDeviceEmpty *, IndexBufferHandle_t, class BufferDesc_t *); /* linkage=_ZN18CRenderDeviceEmpty18GetIndexBufferDescEP21IndexBufferHandle_t__P12BufferDesc_t */
	virtual void GetGPUBufferDesc(class CRenderDeviceEmpty *, RenderBufferHandle_t, class BufferDesc_t *); /* linkage=_ZN18CRenderDeviceEmpty16GetGPUBufferDescEP22RenderBufferHandle_t__P12BufferDesc_t */
	virtual RenderBufferHandle_t CreateGPUBuffer(class CRenderDeviceEmpty *, enum RenderBufferType_t, const class BufferDesc_t  &, enum RenderBufferFlags_t, const void  *); /* linkage=_ZN18CRenderDeviceEmpty15CreateGPUBufferE18RenderBufferType_tRK12BufferDesc_t19RenderBufferFlags_tPKv */
	virtual RenderBufferHandle_t CreateGPUBufferFormatted(class CRenderDeviceEmpty *, enum RenderBufferType_t, const class BufferDesc_t  &, enum RenderBufferFlags_t, enum ImageFormat, const void  *); /* linkage=_ZN18CRenderDeviceEmpty24CreateGPUBufferFormattedE18RenderBufferType_tRK12BufferDesc_t19RenderBufferFlags_t11ImageFormatPKv */
	virtual uint64 GetGPUBufferDeviceAddress(const class CRenderDeviceEmpty  *, RenderBufferHandle_t); /* linkage=_ZNK18CRenderDeviceEmpty25GetGPUBufferDeviceAddressEP22RenderBufferHandle_t__ */
	virtual void DestroyGPUBuffer(class CRenderDeviceEmpty *, RenderBufferHandle_t); /* linkage=_ZN18CRenderDeviceEmpty16DestroyGPUBufferEP22RenderBufferHandle_t__ */
	virtual RenderInputLayout_t CreateInputLayout(class CRenderDeviceEmpty *, const char  *, int, const class RenderInputLayoutField_t  *); /* linkage=_ZN18CRenderDeviceEmpty17CreateInputLayoutEPKciPK24RenderInputLayoutField_t */
	virtual void AddInputLayoutReference(class CRenderDeviceEmpty *, RenderInputLayout_t); /* linkage=_ZN18CRenderDeviceEmpty23AddInputLayoutReferenceEP21RenderInputLayout_t__ */
	virtual void DestroyInputLayout(class CRenderDeviceEmpty *, RenderInputLayout_t); /* linkage=_ZN18CRenderDeviceEmpty18DestroyInputLayoutEP21RenderInputLayout_t__ */
	virtual void ConcatentateInputLayouts(class CRenderDeviceEmpty *, int, RenderInputLayout_t *, int, const RenderInputLayout_t  *); /* linkage=_ZN18CRenderDeviceEmpty24ConcatentateInputLayoutsEiPP21RenderInputLayout_t__iPKS1_ */
	virtual void GetInputLayoutFields(class CRenderDeviceEmpty *, RenderInputLayout_t, const class RenderInputLayoutField_t  * *, int &); /* linkage=_ZN18CRenderDeviceEmpty20GetInputLayoutFieldsEP21RenderInputLayout_t__PPK24RenderInputLayoutField_tRi */
	virtual void SetHardwareGammaRamp(class CRenderDeviceEmpty *, SwapChainHandle_t, float, float, float, float, bool); /* linkage=_ZN18CRenderDeviceEmpty20SetHardwareGammaRampEP19SwapChainHandle_t__ffffb */
	virtual void SpewDriverInfo(const class CRenderDeviceEmpty  *); /* linkage=_ZNK18CRenderDeviceEmpty14SpewDriverInfoEv */
	virtual int GetCurrentAdapter(const class CRenderDeviceEmpty  *); /* linkage=_ZNK18CRenderDeviceEmpty17GetCurrentAdapterEv */
	virtual void EnableRenderContexts(class CRenderDeviceEmpty *, bool); /* linkage=_ZN18CRenderDeviceEmpty20EnableRenderContextsEb */
	virtual class IRenderContext * VaCreateRenderContext(class CRenderDeviceEmpty *, uint, class RenderContextCreationInfo_t *, const char  *, va_list *); /* linkage=_ZN18CRenderDeviceEmpty21VaCreateRenderContextEjP27RenderContextCreationInfo_tPKcPA1_13__va_list_tag */
	virtual void ForceDeviceLost(class CRenderDeviceEmpty *); /* linkage=_ZN18CRenderDeviceEmpty15ForceDeviceLostEv */
	virtual bool ReadTexturePixels(class CRenderDeviceEmpty *, HRenderTexture, class Rect_t *, int, int, class Rect_t *, void *, enum ImageFormat, int); /* linkage=_ZN18CRenderDeviceEmpty17ReadTexturePixelsE11CWeakHandleI31InfoForResourceTypeCTextureBaseEP6Rect_tiiS4_Pv11ImageFormati */
	/* <3ea5d8> empty/renderdeviceempty.cpp:488 */
	virtual void DestroyConstantBuffer(class CRenderDeviceEmpty *, ConstantBufferHandle_t); /* linkage=_ZN18CRenderDeviceEmpty21DestroyConstantBufferEP24ConstantBufferHandle_t__ */
	virtual RenderDescriptorSetHandle_t CreateDescriptorSet(class CRenderDeviceEmpty *, int32, const class RenderDescriptorDesc_t  *, int32, const class RenderDescriptorBinding_t  *, bool); /* linkage=_ZN18CRenderDeviceEmpty19CreateDescriptorSetEiPK22RenderDescriptorDesc_tiPK25RenderDescriptorBinding_tb */
	virtual void UpdateDescriptorSet(class CRenderDeviceEmpty *, RenderDescriptorSetHandle_t, int32, const class RenderDescriptorBinding_t  *); /* linkage=_ZN18CRenderDeviceEmpty19UpdateDescriptorSetEP29RenderDescriptorSetHandle_t__iPK25RenderDescriptorBinding_t */
	virtual void DestroyDescriptorSet(class CRenderDeviceEmpty *, RenderDescriptorSetHandle_t); /* linkage=_ZN18CRenderDeviceEmpty20DestroyDescriptorSetEP29RenderDescriptorSetHandle_t__ */
	virtual bool AddDescriptorsToGlobalPerFrameDescriptorSet(class CRenderDeviceEmpty *, int32, const class RenderDescriptorDesc_t  *); /* linkage=_ZN18CRenderDeviceEmpty43AddDescriptorsToGlobalPerFrameDescriptorSetEiPK22RenderDescriptorDesc_t */
	virtual void UpdateGlobalPerFrameDescriptorBindings(class CRenderDeviceEmpty *, int32, const class RenderDescriptorBinding_t  *); /* linkage=_ZN18CRenderDeviceEmpty38UpdateGlobalPerFrameDescriptorBindingsEiPK25RenderDescriptorBinding_t */
	virtual class RenderPassHandle_t CreateRenderPass(class CRenderDeviceEmpty *, const class CRenderPassDesc  *); /* linkage=_ZN18CRenderDeviceEmpty16CreateRenderPassEPK15CRenderPassDesc */
	virtual void DestroyRenderPass(class CRenderDeviceEmpty *, class RenderPassHandle_t); /* linkage=_ZN18CRenderDeviceEmpty17DestroyRenderPassE18RenderPassHandle_t */
	virtual void DiscardDisplayList(class CRenderDeviceEmpty *, class CDisplayList *); /* linkage=_ZN18CRenderDeviceEmpty18DiscardDisplayListEP12CDisplayList */
	virtual enum ImageFormat GetNearestSupportedColorFormat(class CRenderDeviceEmpty *, enum ImageFormat, bool, bool, bool); /* linkage=_ZN18CRenderDeviceEmpty30GetNearestSupportedColorFormatE11ImageFormatbbb */
	virtual void * GetDeviceSpecificTexture(class CRenderDeviceEmpty *, HRenderTexture, enum RenderTextureDimension_t); /* linkage=_ZN18CRenderDeviceEmpty24GetDeviceSpecificTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE24RenderTextureDimension_t */
	virtual void OnBeginningOfClientShutdown(class CRenderDeviceEmpty *); /* linkage=_ZN18CRenderDeviceEmpty27OnBeginningOfClientShutdownEv */
	virtual bool GetGPUFrameTimeMS(const class CRenderDeviceEmpty  *, SwapChainHandle_t, float *, uint32 *); /* linkage=_ZNK18CRenderDeviceEmpty17GetGPUFrameTimeMSEP19SwapChainHandle_t__PfPj */
	virtual bool GetTimestampCounterFrequencyInternal(class CRenderDeviceEmpty *, double *); /* linkage=_ZN18CRenderDeviceEmpty36GetTimestampCounterFrequencyInternalEPd */
	virtual void RegisterDescriptorSetLayout(class CRenderDeviceEmpty *, class CUtlStringToken, RenderDescriptorSetHandle_t); /* linkage=_ZN18CRenderDeviceEmpty27RegisterDescriptorSetLayoutE15CUtlStringTokenP29RenderDescriptorSetHandle_t__ */
	virtual RenderDescriptorSetHandle_t GetRegisteredDescriptorSetLayout(const class CRenderDeviceEmpty  *, class CUtlStringToken); /* linkage=_ZNK18CRenderDeviceEmpty32GetRegisteredDescriptorSetLayoutE15CUtlStringToken */
	virtual SamplerStateHandle_t FindOrCreateSamplerState(class CRenderDeviceEmpty *, const class CSamplerStateDesc  &, const char  *); /* linkage=_ZN18CRenderDeviceEmpty24FindOrCreateSamplerStateERK17CSamplerStateDescPKc */
	virtual uint GetSamplerIndex(const class CRenderDeviceEmpty  *, SamplerStateHandle_t); /* linkage=_ZNK18CRenderDeviceEmpty15GetSamplerIndexEP22SamplerStateHandle_t__ */
	virtual uint GetTextureViewIndex(const class CRenderDeviceEmpty  *, HRenderTexture, enum RenderColorSpace_t, enum RenderTextureDimension_t); /* linkage=_ZNK18CRenderDeviceEmpty19GetTextureViewIndexE11CWeakHandleI31InfoForResourceTypeCTextureBaseE18RenderColorSpace_t24RenderTextureDimension_t */
	virtual PooledIndexBufferHandle_t AllocatePooledIndexBuffer(class CRenderDeviceEmpty *, uint, const uint16  *, uint *); /* linkage=_ZN18CRenderDeviceEmpty25AllocatePooledIndexBufferEjPKtPj */
	virtual void FreePooledIndexBuffer(class CRenderDeviceEmpty *, PooledIndexBufferHandle_t); /* linkage=_ZN18CRenderDeviceEmpty21FreePooledIndexBufferEP27PooledIndexBufferHandle_t__ */
	virtual uint GetPooledIndexBufferOffset(class CRenderDeviceEmpty *, PooledIndexBufferHandle_t); /* linkage=_ZN18CRenderDeviceEmpty26GetPooledIndexBufferOffsetEP27PooledIndexBufferHandle_t__ */
	virtual IndexBufferHandle_t GetPooledIndexBuffer(class CRenderDeviceEmpty *); /* linkage=_ZN18CRenderDeviceEmpty20GetPooledIndexBufferEv */
	virtual void TriggerValidationError(class CRenderDeviceEmpty *); /* linkage=_ZN18CRenderDeviceEmpty22TriggerValidationErrorEv */
	/* <3ea905> empty/renderdeviceempty.cpp:48 */
	virtual bool InitDevice(class CRenderDeviceEmpty *, int, int, int); /* linkage=_ZN18CRenderDeviceEmpty10InitDeviceEiii */
	virtual void ShutdownDevice(class CRenderDeviceEmpty *); /* linkage=_ZN18CRenderDeviceEmpty14ShutdownDeviceEv */
	virtual bool IsDeactivated(const class CRenderDeviceEmpty  *); /* linkage=_ZNK18CRenderDeviceEmpty13IsDeactivatedEv */
	virtual bool SupportsMSAAMode(const class CRenderDeviceEmpty  *, enum ImageFormat, bool, enum RenderMultisampleType_t); /* linkage=_ZNK18CRenderDeviceEmpty16SupportsMSAAModeE11ImageFormatb23RenderMultisampleType_t */
	virtual bool SupportsCSAAMode(const class CRenderDeviceEmpty  *, enum ImageFormat, bool, enum RenderMultisampleType_t, int); /* linkage=_ZNK18CRenderDeviceEmpty16SupportsCSAAModeE11ImageFormatb23RenderMultisampleType_ti */
	virtual void PerFrameCleanup(class CRenderDeviceEmpty *, SwapChainHandle_t); /* linkage=_ZN18CRenderDeviceEmpty15PerFrameCleanupEP19SwapChainHandle_t__ */
	virtual RenderShaderHandle_t CreateVertexShader(class CRenderDeviceEmpty *, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN18CRenderDeviceEmpty18CreateVertexShaderESt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS1_EEPKc */
	virtual void DestroyVertexShader(class CRenderDeviceEmpty *, RenderShaderHandle_t); /* linkage=_ZN18CRenderDeviceEmpty19DestroyVertexShaderEP22RenderShaderHandle_t__ */
	virtual RenderShaderHandle_t CreateGeometryShader(class CRenderDeviceEmpty *, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN18CRenderDeviceEmpty20CreateGeometryShaderESt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS1_EEPKc */
	virtual void DestroyGeometryShader(class CRenderDeviceEmpty *, RenderShaderHandle_t); /* linkage=_ZN18CRenderDeviceEmpty21DestroyGeometryShaderEP22RenderShaderHandle_t__ */
	virtual RenderShaderHandle_t CreateComputeShader(class CRenderDeviceEmpty *, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN18CRenderDeviceEmpty19CreateComputeShaderESt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS1_EEPKc */
	virtual void DestroyComputeShader(class CRenderDeviceEmpty *, RenderShaderHandle_t); /* linkage=_ZN18CRenderDeviceEmpty20DestroyComputeShaderEP22RenderShaderHandle_t__ */
	virtual RenderShaderHandle_t CreatePixelShader(class CRenderDeviceEmpty *, class unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >, const char  *); /* linkage=_ZN18CRenderDeviceEmpty17CreatePixelShaderESt10unique_ptrI21IRenderShaderByteCodeSt14default_deleteIS1_EEPKc */
	virtual void DestroyPixelShader(class CRenderDeviceEmpty *, RenderShaderHandle_t); /* linkage=_ZN18CRenderDeviceEmpty18DestroyPixelShaderEP22RenderShaderHandle_t__ */
	virtual RenderQueryHandle_t CreateQueryObject(class CRenderDeviceEmpty *, enum RenderQueryType_t); /* linkage=_ZN18CRenderDeviceEmpty17CreateQueryObjectE17RenderQueryType_t */
	virtual enum RenderQueryState_t GetQueryData(class CRenderDeviceEmpty *, RenderQueryHandle_t, uint64 *); /* linkage=_ZN18CRenderDeviceEmpty12GetQueryDataEP21RenderQueryHandle_t__Py */
	virtual void DeleteQueryObject(class CRenderDeviceEmpty *, RenderQueryHandle_t); /* linkage=_ZN18CRenderDeviceEmpty17DeleteQueryObjectEP21RenderQueryHandle_t__ */
	virtual void * GetDeviceSpecificInfo(class CRenderDeviceEmpty *, enum DeviceSpecificInfo_t); /* linkage=_ZN18CRenderDeviceEmpty21GetDeviceSpecificInfoE20DeviceSpecificInfo_t */
	void CRenderDeviceEmpty(class CRenderDeviceEmpty *); /* linkage=_ZN18CRenderDeviceEmptyC4Ev */
	virtual void ~CRenderDeviceEmpty(class CRenderDeviceEmpty *); /* linkage=_ZN18CRenderDeviceEmptyD4Ev */
	virtual void OtherAppInitializing(class CRenderDeviceEmpty *, bool); /* linkage=_ZN18CRenderDeviceEmpty20OtherAppInitializingEb */
	virtual void * CreateRasterizerStateFromDesc(class CRenderDeviceEmpty *, const class RsRasterizerStateDesc_t  *); /* linkage=_ZN18CRenderDeviceEmpty29CreateRasterizerStateFromDescEPK23RsRasterizerStateDesc_t */
	virtual void * CreateDepthStencilStateFromDesc(class CRenderDeviceEmpty *, const class RsDepthStencilStateDesc_t  *); /* linkage=_ZN18CRenderDeviceEmpty31CreateDepthStencilStateFromDescEPK25RsDepthStencilStateDesc_t */
	virtual void * CreateBlendStateFromDesc(class CRenderDeviceEmpty *, const class RsBlendStateDesc_t  *); /* linkage=_ZN18CRenderDeviceEmpty24CreateBlendStateFromDescEPK18RsBlendStateDesc_t */
	virtual int GetTextureLastUsed(class CRenderDeviceEmpty *, HRenderTexture); /* linkage=_ZN18CRenderDeviceEmpty18GetTextureLastUsedE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void PreloadTextureBits(class CRenderDeviceEmpty *, HRenderTexture, int32); /* linkage=_ZN18CRenderDeviceEmpty18PreloadTextureBitsE11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	virtual void UnloadTextureBits(class CRenderDeviceEmpty *, HRenderTexture); /* linkage=_ZN18CRenderDeviceEmpty17UnloadTextureBitsE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual bool AreTextureBitsLoaded(const class CRenderDeviceEmpty  *, HRenderTexture); /* linkage=_ZNK18CRenderDeviceEmpty20AreTextureBitsLoadedE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void SetTextureStreamingPriority(class CRenderDeviceEmpty *, HRenderTexture, enum RenderTextureStreamingPriority_t); /* linkage=_ZN18CRenderDeviceEmpty27SetTextureStreamingPriorityE11CWeakHandleI31InfoForResourceTypeCTextureBaseE32RenderTextureStreamingPriority_t */
} __attribute__((__aligned__(16)));

// <003E9191> empty/renderdeviceempty.h:85
void CRenderDeviceEmpty::CreateDescriptorSet(int32 nNumDescriptors, const RenderDescriptorDesc_t* pDescriptorDescs, int32 nNumBindings, const RenderDescriptorBinding_t* pDescriptorBindings, bool bFullyRewriteEachFrame)
{
} /* size: 7 */

// <003E9139> empty/renderdeviceempty.h:86
void CRenderDeviceEmpty::UpdateDescriptorSet(RenderDescriptorSetHandle_t hDescriptorSet, int32 nNumDescriptors, const RenderDescriptorBinding_t* pDescriptorBindings)
{
} /* size: 5 */

// <003E90FD> empty/renderdeviceempty.h:87
void CRenderDeviceEmpty::DestroyDescriptorSet(RenderDescriptorSetHandle_t hDescriptorSet)
{
} /* size: 5 */

// <003E90B3> empty/renderdeviceempty.h:88
void CRenderDeviceEmpty::AddDescriptorsToGlobalPerFrameDescriptorSet(int32 nNumDescriptors, const RenderDescriptorDesc_t* pDescriptorDescs)
{
} /* size: 7 */

// <003E9069> empty/renderdeviceempty.h:89
void CRenderDeviceEmpty::UpdateGlobalPerFrameDescriptorBindings(int32 nNumBindings, const RenderDescriptorBinding_t* pDescriptorBindings)
{
} /* size: 5 */

// <003E902D> empty/renderdeviceempty.h:90
void CRenderDeviceEmpty::CreateRenderPass(const CRenderPassDesc* pRenderPassDesc)
{
} /* size: 10 */

// <003E8FF1> empty/renderdeviceempty.h:91
void CRenderDeviceEmpty::DestroyRenderPass(RenderPassHandle_t hRenderPass)
{
} /* size: 5 */

// <003E8FC3> empty/renderdeviceempty.h:98
void CRenderDeviceEmpty::OnBeginningOfClientShutdown()
{
} /* size: 5 */

// <003E8F6B> empty/renderdeviceempty.h:100
void CRenderDeviceEmpty::GetGPUFrameTimeMS(SwapChainHandle_t hSwapChain, float* pGPUFrameTimeMSOut, uint32* pFrameNumberOut)
{
} /* size: 7 */

// <003E8F2F> empty/renderdeviceempty.h:101
void CRenderDeviceEmpty::GetTimestampCounterFrequencyInternal(double* pflOneOverTimestampCounterFrequency)
{
} /* size: 7 */

// <003E8EE5> empty/renderdeviceempty.h:103
void CRenderDeviceEmpty::RegisterDescriptorSetLayout(CUtlStringToken descriptorSetName, RenderDescriptorSetHandle_t hDescriptorSet)
{
} /* size: 5 */

// <003E8EA9> empty/renderdeviceempty.h:104
void CRenderDeviceEmpty::GetRegisteredDescriptorSetLayout(CUtlStringToken descriptorSetName)
{
} /* size: 7 */

// <003E8E7B> empty/renderdeviceempty.h:115
void CRenderDeviceEmpty::TriggerValidationError()
{
} /* size: 5 */

// <003E8E3E> empty/renderdeviceempty.h:170
void CRenderDeviceEmpty::GetTextureLastUsed(HRenderTexture hTexture)
{
} /* size: 10 */

// <003E8DF3> empty/renderdeviceempty.h:175
void CRenderDeviceEmpty::PreloadTextureBits(HRenderTexture hTexture, int32 nRequiredMipSize)
{
} /* size: 5 */

// <003E8DB6> empty/renderdeviceempty.h:176
void CRenderDeviceEmpty::UnloadTextureBits(HRenderTexture hTexture)
{
} /* size: 5 */

// <003E8D79> empty/renderdeviceempty.h:177
void CRenderDeviceEmpty::AreTextureBitsLoaded(HRenderTexture hTexture)
{
} /* size: 10 */

// <003E8D2E> empty/renderdeviceempty.h:178
void CRenderDeviceEmpty::SetTextureStreamingPriority(HRenderTexture hTexture, RenderTextureStreamingPriority_t eTextureStreamingPriority)
{
} /* size: 5 */

// <003E8D00> empty/renderdeviceempty.h:189
void CRenderDeviceEmpty::IsDeactivated()
{
} /* size: 7 */

