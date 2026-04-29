
//
// empty/renderdeviceempty.cpp
//
//	referenced by: librendersystemempty.so
//
//	functions: 86
//	class: 1
//

// <003E8C9E> empty/renderdeviceempty.cpp:35
void CRenderDeviceEmpty::CRenderDeviceEmpty()
{
} /* size: 56 */

// <003E8C21> empty/renderdeviceempty.cpp:40
void CRenderDeviceEmpty::~CRenderDeviceEmpty()
{
} /* size: 55 */

// <003E8B79> empty/renderdeviceempty.cpp:40
// function call: 1
void CRenderDeviceEmpty::~CRenderDeviceEmpty()
{
	CRenderDeviceEmpty::~CRenderDeviceEmpty(); // 42
} /* size: 68, inline expansions: 1 (34 bytes) */

// <003EA905> empty/renderdeviceempty.cpp:48
// function call: 1
void CRenderDeviceEmpty::InitDevice(int nAdapter, int nFlags, int nDXLevel)
{
	{
	}
	CRenderDeviceEmpty::InitDevice(
			int nAdapter,
			int nFlags,
			int nDXLevel);  // 48
} /* size: 0, inline expansions: 1 (103 bytes) */

// <003E8AFE> empty/renderdeviceempty.cpp:48
// variables: 2
void CRenderDeviceEmpty::InitDevice(int nAdapter, int nFlags, int nDXLevel)
{
	const char   __FUNCTION__; // 57666
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 53
	}
} /* size: 0, variables: 1 */

// <003E8A74> empty/renderdeviceempty.cpp:64
void CRenderDeviceEmpty::ShutdownDevice()
{
} /* size: 57 */

// <003E8A46> empty/renderdeviceempty.cpp:76
void CRenderDeviceEmpty::GetRenderDeviceAPI()
{
} /* size: 10 */

// <003E871D> empty/renderdeviceempty.cpp:85
// function calls: 15
void CSwapChainEmpty::CSwapChainEmpty()
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 239
	V_memset(void* dest,
		int fill,
		size_t count);  // 213
	RenderDisplayMode_t::RenderDisplayMode_t(); // 239
	RenderDeviceInfo_t::RenderDeviceInfo_t(); // 327
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 327
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 331
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 327
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 327
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 327
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 327
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 332
	CSwapChainBase::CSwapChainBase(); // 85
} /* size: 0, inline expansions: 15 (0 bytes) */

// <003E8704> empty/renderdeviceempty.cpp:85
void CSwapChainEmpty::CSwapChainEmpty()
{
} /* size: 0 */

// <003E862C> empty/renderdeviceempty.cpp:90
// function calls: 3
void CSwapChainEmpty::~CSwapChainEmpty()
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 337
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 337
	CSwapChainBase::~CSwapChainBase(); // 92
} /* size: 50, inline expansions: 3 (39 bytes) */

// <003E8513> empty/renderdeviceempty.cpp:90
// function calls: 4
void CSwapChainEmpty::~CSwapChainEmpty()
{
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 337
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 337
	CSwapChainBase::~CSwapChainBase(); // 92
	CSwapChainEmpty::~CSwapChainEmpty(); // 92
} /* size: 63, inline expansions: 4 (68 bytes) */

// <003E84FA> empty/renderdeviceempty.cpp:90
void CSwapChainEmpty::~CSwapChainEmpty()
{
} /* size: 0 */

// <003EA7F5> empty/renderdeviceempty.cpp:98
// function call: 1
void CSwapChainEmpty::Init(PlatWindow_t hPlatWnd, OsSpecificWindowHandle_t hOsWnd, const RenderDeviceInfo_t& mode, const char* pDebugName)
{
	V_strcpy_safe<256>(char& pDest,
				const char* pSrc);  // 102
} /* size: 0, inline expansions: 1 (0 bytes) */

// <003E84B1> empty/renderdeviceempty.cpp:98
void CSwapChainEmpty::Init(PlatWindow_t hPlatWnd, OsSpecificWindowHandle_t hOsWnd, const RenderDeviceInfo_t& mode, const char* pDebugName)
{
} /* size: 0 */

// <003EA8D2> empty/renderdeviceempty.cpp:110
void CSwapChainEmpty::Update(const RenderDeviceInfo_t& mode)
{
} /* size: 0 */

// <003E7FCE> empty/renderdeviceempty.cpp:116
// variables: 2
// function calls: 18
void CRenderDeviceEmpty::CreateSwapChain(PlatWindow_t hPlatWnd, OsSpecificWindowHandle_t hOsWnd, const RenderDeviceInfo_t& info, const char* pDebugName)
{
	CSwapChainEmpty* pSwapChain; // 118
	SwapChainHandle_t hSwapChain; // 125
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 239
	V_memset(void* dest,
		int fill,
		size_t count);  // 213
	RenderDisplayMode_t::RenderDisplayMode_t(); // 239
	RenderDeviceInfo_t::RenderDeviceInfo_t(); // 327
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 327
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 331
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 327
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 327
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 327
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 327
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 332
	CSwapChainBase::CSwapChainBase(); // 85
	CSwapChainEmpty::CSwapChainEmpty(); // 118
	V_strcpy_safe<256>(char& pDest,
				const char* pSrc);  // 102
	CSwapChainEmpty::Init(
		PlatWindow_t hPlatWnd,
		OsSpecificWindowHandle_t hOsWnd,
		const RenderDeviceInfo_t& mode,
		const char* pDebugName);  // 119
} /* size: 329, variables: 2, inline expansions: 18 (560 bytes) */

// <003E7F92> empty/renderdeviceempty.cpp:130
void CRenderDeviceEmpty::CanRenderToSwapChain(SwapChainHandle_t hSwapChain)
{
} /* size: 7 */

// <003E7EAF> empty/renderdeviceempty.cpp:139
// variable: 1
// function calls: 2
void CRenderDeviceEmpty::UpdateSwapChain(SwapChainHandle_t hSwapChain, const RenderDeviceInfo_t& info)
{
	CSwapChainEmpty* pSwapChain; // 141
	CRenderDeviceBase::GetSwapChain<CSwapChainEmpty>(
					SwapChainHandle_t hSwapChain);  // 141
	CSwapChainEmpty::Update(
		const RenderDeviceInfo_t& mode);  // 144
} /* size: 70, variables: 1, inline expansions: 2 (55 bytes) */

// <003E7E48> empty/renderdeviceempty.cpp:153
void CRenderDeviceEmpty::GetNearestSupportedColorFormat(ImageFormat fmt, bool bIsRenderTarget, bool bIsVertexTexture, bool bIsFilterableRequired)
{
} /* size: 7 */

// <003E7DF8> empty/renderdeviceempty.cpp:159
void* CRenderDeviceEmpty::GetDeviceSpecificTexture(HRenderTexture hTexture, RenderTextureDimension_t renderDimension)
{
} /* size: 7 */

// <003E7D9F> empty/renderdeviceempty.cpp:167
void CRenderDeviceEmpty::SupportsMSAAMode(ImageFormat fmt, bool bWindowed, RenderMultisampleType_t nMSAAMode)
{
} /* size: 7 */

// <003E7D38> empty/renderdeviceempty.cpp:172
void CRenderDeviceEmpty::SupportsCSAAMode(ImageFormat fmt, bool bWindowed, RenderMultisampleType_t nMSAAMode, int nQualityLevel)
{
} /* size: 7 */

// <003E7C96> empty/renderdeviceempty.cpp:181
void CRenderDeviceEmpty::ReadTexturePixels(HRenderTexture hTexture, Rect_t* pSrcRect, int nSrcSlice, int nSrcMip, Rect_t* pDstRect, void* pData, ImageFormat dstFormat, int nDstStride)
{
} /* size: 7 */

// <003E7C68> empty/renderdeviceempty.cpp:191
void CRenderDeviceEmpty::IsUsingGraphics()
{
} /* size: 7 */

// <003E7C3A> empty/renderdeviceempty.cpp:200
void CRenderDeviceEmpty::GetCurrentAdapter()
{
} /* size: 7 */

// <003E7BEA> empty/renderdeviceempty.cpp:209
void CRenderDeviceEmpty::SpewDriverInfo()
{
} /* size: 18 */

// <003E7B5D> empty/renderdeviceempty.cpp:215
// variable: 1
// function call: 1
void CRenderDeviceEmpty::GetSwapChainDepthStencilFormat(SwapChainHandle_t hSwapChain)
{
	const CSwapChainEmpty* pSwapChain; // 217
	CRenderDeviceBase::GetSwapChain<CSwapChainEmpty>(
					SwapChainHandle_t hSwapChain);  // 217
} /* size: 30, variables: 1, inline expansions: 1 (5 bytes) */

// <003E7B21> empty/renderdeviceempty.cpp:228
void CRenderDeviceEmpty::GetShaderVersionString(RenderShaderType_t nType)
{
} /* size: 12 */

// <003E7ABA> empty/renderdeviceempty.cpp:233
void CRenderDeviceEmpty::Present(SwapChainHandle_t hSwapChain)
{
} /* size: 20 */

// <003E7A7E> empty/renderdeviceempty.cpp:245
void CRenderDeviceEmpty::CreateQueryObject(RenderQueryType_t queryType)
{
} /* size: 10 */

// <003E7A5A> empty/renderdeviceempty.cpp:250
void CRenderDeviceEmpty::DeleteQueryObject(RenderQueryHandle_t hQueryObject)
{
} /* size: 0 */

// <003E7A0E> empty/renderdeviceempty.cpp:258
void CRenderDeviceEmpty::GetQueryData(RenderQueryHandle_t hQueryObject, uint64* pQueryData)
{
} /* size: 10 */

// <003E79D1> empty/renderdeviceempty.cpp:267
void CRenderDeviceEmpty::OtherAppInitializing(bool bOtherAppInitializing)
{
} /* size: 5 */

// <003E79A3> empty/renderdeviceempty.cpp:274
void CRenderDeviceEmpty::ForceDeviceLost()
{
} /* size: 5 */

// <003E797E> empty/renderdeviceempty.cpp:281
void CRenderDeviceEmpty::PerFrameCleanup(SwapChainHandle_t hSwapchain)
{
} /* size: 0 */

// <003E78F6> empty/renderdeviceempty.cpp:285
void CRenderDeviceEmpty::SetHardwareGammaRamp(SwapChainHandle_t hSwapChain, float fGamma, float fGammaTVRangeMin, float fGammaTVRangeMax, float fGammaTVExponent, bool bTVEnabled)
{
} /* size: 5 */

// <003E771E> empty/renderdeviceempty.cpp:289
void CEmptyShaderBuffer::CEmptyShaderBuffer()
{
} /* size: 0 */

// <003E7700> empty/renderdeviceempty.cpp:289
inline void CEmptyShaderBuffer::CEmptyShaderBuffer()
{
} /* size: 0 */

// <003E4E74> empty/renderdeviceempty.cpp:289
// member functions: 10
// member variable: 1
// vtable entries: 2
// class size: 8
class CEmptyShaderBuffer : public IRenderShaderByteCode {
public:
	/* class IRenderShaderByteCode <ancestor>; */ /* 0 8 */
	void CEmptyShaderBuffer(CEmptyShaderBuffer* , const CEmptyShaderBuffer& );
	void CEmptyShaderBuffer(CEmptyShaderBuffer* );
	/* empty/renderdeviceempty.cpp:292 */
	virtual void ~CEmptyShaderBuffer(CEmptyShaderBuffer* );
	/* empty/renderdeviceempty.cpp:293 */
	virtual uint32 GetSize(const CEmptyShaderBuffer* );
	/* empty/renderdeviceempty.cpp:294 */
	virtual const void* GetBits(const CEmptyShaderBuffer* );
	void CEmptyShaderBuffer(class CEmptyShaderBuffer *, const class CEmptyShaderBuffer  &); /* linkage=_ZN18CEmptyShaderBufferC4ERKS_ */
	void CEmptyShaderBuffer(class CEmptyShaderBuffer *); /* linkage=_ZN18CEmptyShaderBufferC4Ev */
	virtual void ~CEmptyShaderBuffer(class CEmptyShaderBuffer *); /* linkage=_ZN18CEmptyShaderBufferD4Ev */
	virtual uint32 GetSize(const class CEmptyShaderBuffer  *); /* linkage=_ZNK18CEmptyShaderBuffer7GetSizeEv */
	virtual const void  * GetBits(const class CEmptyShaderBuffer  *); /* linkage=_ZNK18CEmptyShaderBuffer7GetBitsEv */
};

// <003E7897> empty/renderdeviceempty.cpp:292
// function call: 1
void CEmptyShaderBuffer::~CEmptyShaderBuffer()
{
	IRenderShaderByteCode::~IRenderShaderByteCode(); // 292
} /* size: 5, inline expansions: 1 (0 bytes) */

// <003E77E4> empty/renderdeviceempty.cpp:292
// function calls: 2
void CEmptyShaderBuffer::~CEmptyShaderBuffer()
{
	IRenderShaderByteCode::~IRenderShaderByteCode(); // 292
	CEmptyShaderBuffer::~CEmptyShaderBuffer(); // 292
} /* size: 14, inline expansions: 2 (0 bytes) */

// <003E77CB> empty/renderdeviceempty.cpp:292
inline void CEmptyShaderBuffer::~CEmptyShaderBuffer()
{
} /* size: 0 */

// <003E779D> empty/renderdeviceempty.cpp:293
void CEmptyShaderBuffer::GetSize()
{
} /* size: 7 */

// <003E776A> empty/renderdeviceempty.cpp:294
const void* CEmptyShaderBuffer::GetBits()
{
} /* size: 7 */

// <003E7433> empty/renderdeviceempty.cpp:297
// function calls: 11
void CRenderDeviceEmpty::CompileShader(const char* pProgram, uint32 nBufLen, const char* pShaderVersion)
{
	IRenderShaderByteCode::IRenderShaderByteCode(); // 289
	CEmptyShaderBuffer::CEmptyShaderBuffer(); // 299
	_Head_base<1, std::default_delete<IRenderShaderByteCode>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<IRenderShaderByteCode> >::_Tuple_impl(); // 303
	_Head_base<0, IRenderShaderByteCode::_Head_base(); // 303
	_Tuple_impl<0, IRenderShaderByteCode::_Tuple_impl(); // 966
	tuple<IRenderShaderByteCode::tuple(); // 169
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 169
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::unique_ptr<>(
			pointer __p);  // 299
} /* size: 48, inline expansions: 11 (19 bytes) */

// <003E73E6> empty/renderdeviceempty.cpp:302
void CRenderDeviceEmpty::CreateVertexShader(unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShaderBuffer, const char* pDebugName)
{
} /* size: 10 */

// <003E73C1> empty/renderdeviceempty.cpp:307
void CRenderDeviceEmpty::DestroyVertexShader(RenderShaderHandle_t hShader)
{
} /* size: 0 */

// <003E738F> empty/renderdeviceempty.cpp:311
void CRenderDeviceEmpty::CreateGeometryShader(unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShaderBuffer, const char* pDebugName)
{
} /* size: 0 */

// <003E736A> empty/renderdeviceempty.cpp:316
void CRenderDeviceEmpty::DestroyGeometryShader(RenderShaderHandle_t hShader)
{
} /* size: 0 */

// <003E7338> empty/renderdeviceempty.cpp:320
void CRenderDeviceEmpty::CreateComputeShader(unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShaderBuffer, const char* pDebugName)
{
} /* size: 0 */

// <003E7313> empty/renderdeviceempty.cpp:325
void CRenderDeviceEmpty::DestroyComputeShader(RenderShaderHandle_t hShader)
{
} /* size: 0 */

// <003E72E1> empty/renderdeviceempty.cpp:329
void CRenderDeviceEmpty::CreatePixelShader(unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShaderBuffer, const char* pDebugName)
{
} /* size: 0 */

// <003E72BC> empty/renderdeviceempty.cpp:334
void CRenderDeviceEmpty::DestroyPixelShader(RenderShaderHandle_t hShader)
{
} /* size: 0 */

// <003E7261> empty/renderdeviceempty.cpp:338
void CRenderDeviceEmpty::CreateVertexBuffer(RenderBufferType_t nType, const BufferDesc_t& desc, RenderBufferFlags_t nExtraUsageFlags)
{
} /* size: 10 */

// <003E71E8> empty/renderdeviceempty.cpp:343
void CRenderDeviceEmpty::CreateVertexBuffer(RenderBufferType_t nType, const BufferDesc_t& desc, int nLayoutFields, const RenderInputLayoutField_t* pLayoutFields, RenderBufferFlags_t nExtraUsageFlags)
{
} /* size: 10 */

// <003E717E> empty/renderdeviceempty.cpp:348
void CRenderDeviceEmpty::CreateVertexBuffer(RenderBufferType_t nType, const BufferDesc_t& desc, RenderInputLayout_t hLayout, RenderBufferFlags_t nExtraUsageFlags)
{
} /* size: 10 */

// <003E7141> empty/renderdeviceempty.cpp:354
void CRenderDeviceEmpty::DestroyVertexBuffer(VertexBufferHandle_t hVertexBuffer)
{
} /* size: 5 */

// <003E70AB> empty/renderdeviceempty.cpp:358
// function call: 1
void CRenderDeviceEmpty::GetVertexBufferDesc(VertexBufferHandle_t hBuffer, BufferDesc_t* pDesc)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 360
} /* size: 28, inline expansions: 1 (23 bytes) */

// <003E7079> empty/renderdeviceempty.cpp:378
void CRenderDeviceEmpty::GetIndexBufferDesc(IndexBufferHandle_t hBuffer, BufferDesc_t* pDesc)
{
} /* size: 0 */

// <003E7047> empty/renderdeviceempty.cpp:398
void CRenderDeviceEmpty::GetGPUBufferDesc(RenderBufferHandle_t hBuffer, BufferDesc_t* pDesc)
{
} /* size: 0 */

// <003E7010> empty/renderdeviceempty.cpp:404
void CRenderDeviceEmpty::CreateIndexBuffer(RenderBufferType_t nType, const BufferDesc_t& desc, RenderBufferFlags_t)
{
} /* size: 0 */

// <003E6FEB> empty/renderdeviceempty.cpp:409
void CRenderDeviceEmpty::DestroyIndexBuffer(IndexBufferHandle_t hIndexBuffer)
{
} /* size: 0 */

// <003E6F81> empty/renderdeviceempty.cpp:413
void CRenderDeviceEmpty::CreateGPUBuffer(RenderBufferType_t nType, const BufferDesc_t& desc, RenderBufferFlags_t usage, const void* pInitialData)
{
} /* size: 7 */

// <003E6F07> empty/renderdeviceempty.cpp:418
void CRenderDeviceEmpty::CreateGPUBufferFormatted(RenderBufferType_t nType, const BufferDesc_t& desc, RenderBufferFlags_t flags, ImageFormat fmt, const void* pInitialData)
{
} /* size: 7 */

// <003E6ECA> empty/renderdeviceempty.cpp:423
void CRenderDeviceEmpty::GetGPUBufferDeviceAddress(RenderBufferHandle_t hGPUBuffer)
{
} /* size: 7 */

// <003E6EA5> empty/renderdeviceempty.cpp:428
void CRenderDeviceEmpty::DestroyGPUBuffer(RenderBufferHandle_t hGPUBuffer)
{
} /* size: 0 */

// <003E6E4A> empty/renderdeviceempty.cpp:436
void CRenderDeviceEmpty::CreateInputLayout(const char* pLayoutName, int nFieldCount, const RenderInputLayoutField_t* pFieldDescs)
{
} /* size: 10 */

// <003E6E25> empty/renderdeviceempty.cpp:441
void CRenderDeviceEmpty::AddInputLayoutReference(RenderInputLayout_t hInputLayout)
{
} /* size: 0 */

// <003E6E00> empty/renderdeviceempty.cpp:445
void CRenderDeviceEmpty::DestroyInputLayout(RenderInputLayout_t hInputLayout)
{
} /* size: 0 */

// <003E6D63> empty/renderdeviceempty.cpp:449
// variable: 1
void CRenderDeviceEmpty::ConcatentateInputLayouts(int nOutputLayoutVariations, RenderInputLayout_t* pOutputLayouts, int nInputLayouts, const RenderInputLayout_t* pInputLayouts)
{
	{
		int i; // 452
	}
} /* size: 90 */

// <003E6D08> empty/renderdeviceempty.cpp:458
void CRenderDeviceEmpty::GetInputLayoutFields(RenderInputLayout_t hInputLayout, const RenderInputLayoutField_t ** ppFieldsOut, int& nFieldsOut)
{
} /* size: 18 */

// <003E6CC5> empty/renderdeviceempty.cpp:467
void CRenderDeviceEmpty::EnableRenderContexts(bool bEnable)
{
} /* size: 29 */

// <003E6C5B> empty/renderdeviceempty.cpp:475
void CRenderDeviceEmpty::VaCreateRenderContext(uint nRenderContextFlags, RenderContextCreationInfo_t* pOptInfo, const char* pDebugStringFmt, va_list* pArglist)
{
} /* size: 35 */

// <003E6C36> empty/renderdeviceempty.cpp:483
void CRenderDeviceEmpty::DiscardDisplayList(CDisplayList* pStream)
{
} /* size: 0 */

// <003EA5D8> empty/renderdeviceempty.cpp:488
// variable: 1
// function calls: 7
void CRenderDeviceEmpty::DestroyConstantBuffer(ConstantBufferHandle_t hConstantBuffer)
{
	ConstantBuffer_t* pCBuf; // 496
	ConstantBuffer_t::IsPerFrameLifetimePooled(); // 497
	{
	}
	{
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 198
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Push(
		ConstantBuffer_t* pPushNode);  // 751
	CRenderDeviceBase::ReleasePooledDynamicConstantBuffer(
						ConstantBuffer_t* pConstantBuffer);  // 500
	CRenderDeviceBase::FreeConstantBuffer(
				ConstantBufferHandle_t hConstantBuffer);  // 504
	CRenderDeviceEmpty::DestroyConstantBuffer(
				ConstantBufferHandle_t hConstantBuffer);  // 488
} /* size: 0, variables: 1, inline expansions: 7 (198 bytes) */

// <003E6BC1> empty/renderdeviceempty.cpp:488
// variables: 3
void CRenderDeviceEmpty::DestroyConstantBuffer(ConstantBufferHandle_t hConstantBuffer)
{
	ConstantBuffer_t* pCBuf; // 496
	const char   __FUNCTION__; // 57913
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 499
	}
} /* size: 0, variables: 2 */

// <003E6B7F> empty/renderdeviceempty.cpp:514
void* CRenderDeviceEmpty::CreateRasterizerStateFromDesc(const RsRasterizerStateDesc_t* pRsDesc)
{
} /* size: 7 */

// <003E6B55> empty/renderdeviceempty.cpp:520
void* CRenderDeviceEmpty::CreateDepthStencilStateFromDesc(const RsDepthStencilStateDesc_t* pDesc)
{
} /* size: 0 */

// <003E6B2B> empty/renderdeviceempty.cpp:526
void* CRenderDeviceEmpty::CreateBlendStateFromDesc(const RsBlendStateDesc_t* pDesc)
{
} /* size: 0 */

// <003E6AB2> empty/renderdeviceempty.cpp:531
// variable: 1
void* CRenderDeviceEmpty::GetDeviceSpecificInfo(DeviceSpecificInfo_t info)
{
	void* pDeviceSpecificInfo; // 533
} /* size: 9, variables: 1 */

// <003E6A66> empty/renderdeviceempty.cpp:540
void CRenderDeviceEmpty::FindOrCreateSamplerState(const CSamplerStateDesc& samplerState, const char* szDebugName)
{
} /* size: 7 */

// <003E6A29> empty/renderdeviceempty.cpp:545
void CRenderDeviceEmpty::GetSamplerIndex(SamplerStateHandle_t hSamplerState)
{
} /* size: 7 */

// <003E69CD> empty/renderdeviceempty.cpp:550
void CRenderDeviceEmpty::GetTextureViewIndex(HRenderTexture hTexture, RenderColorSpace_t colorSpace, RenderTextureDimension_t nDimension)
{
} /* size: 7 */

// <003E6972> empty/renderdeviceempty.cpp:560
void CRenderDeviceEmpty::AllocatePooledIndexBuffer(uint nIndexCount, const uint16* pIndices, uint* pOutStartIndex)
{
} /* size: 7 */

// <003E694D> empty/renderdeviceempty.cpp:565
void CRenderDeviceEmpty::FreePooledIndexBuffer(PooledIndexBufferHandle_t handle)
{
} /* size: 0 */

// <003E6928> empty/renderdeviceempty.cpp:569
void CRenderDeviceEmpty::GetPooledIndexBufferOffset(PooledIndexBufferHandle_t handle)
{
} /* size: 0 */

// <003E68FA> empty/renderdeviceempty.cpp:574
void CRenderDeviceEmpty::GetPooledIndexBuffer()
{
} /* size: 7 */

