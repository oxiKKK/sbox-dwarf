
//
// empty/rendercontextempty.cpp
//
//	referenced by: librendersystemempty.so
//
//	functions: 88
//

// <0039FD0D> empty/rendercontextempty.cpp:27
// function calls: 5
void CRenderContextEmpty::CRenderContextEmpty()
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 192
	IRenderContext::IRenderContext(); // 27
	RenderViewport_t::RenderViewport_t(); // 27
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 31
} /* size: 155, inline expansions: 5 (89 bytes) */

// <0039FCF4> empty/rendercontextempty.cpp:27
void CRenderContextEmpty::CRenderContextEmpty()
{
} /* size: 0 */

// <0039FC72> empty/rendercontextempty.cpp:34
// function call: 1
void CRenderContextEmpty::~CRenderContextEmpty()
{
	IRenderContext::~IRenderContext(); // 36
} /* size: 66, inline expansions: 1 (19 bytes) */

// <0039FBA2> empty/rendercontextempty.cpp:34
// function calls: 2
void CRenderContextEmpty::~CRenderContextEmpty()
{
	IRenderContext::~IRenderContext(); // 36
	CRenderContextEmpty::~CRenderContextEmpty(); // 36
} /* size: 79, inline expansions: 2 (64 bytes) */

// <0039FB89> empty/rendercontextempty.cpp:34
void CRenderContextEmpty::~CRenderContextEmpty()
{
} /* size: 0 */

// <0039FB5B> empty/rendercontextempty.cpp:42
void CRenderContextEmpty::GetDevice()
{
} /* size: 15 */

// <0039FB12> empty/rendercontextempty.cpp:51
void CRenderContextEmpty::BeginPixEvent(Color c, const char* pEventName)
{
} /* size: 5 */

// <0039FAE4> empty/rendercontextempty.cpp:55
void CRenderContextEmpty::EndPixEvent()
{
} /* size: 5 */

// <0039FAB6> empty/rendercontextempty.cpp:59
void CRenderContextEmpty::PixSetMarker(Color c, const char* pMarkerName)
{
} /* size: 0 */

// <0039FA92> empty/rendercontextempty.cpp:66
void CRenderContextEmpty::BindRenderTargets(const RenderTargetDesc_t& renderTargetDesc)
{
} /* size: 0 */

// <0039FA38> empty/rendercontextempty.cpp:71
void CRenderContextEmpty::FindOrCreateRasterizerState(const RsRasterizerStateDesc_t* pRsDesc)
{
} /* size: 23 */

// <0039F9DE> empty/rendercontextempty.cpp:77
void CRenderContextEmpty::FindOrCreateDepthStencilState(const RsDepthStencilStateDesc_t* pDsDesc)
{
} /* size: 23 */

// <0039F984> empty/rendercontextempty.cpp:83
void CRenderContextEmpty::FindOrCreateBlendState(const RsBlendStateDesc_t* pBlendDesc)
{
} /* size: 23 */

// <0039F91D> empty/rendercontextempty.cpp:88
void CRenderContextEmpty::ResolveDepthStencilTarget(Rect_t* pSrcRect, int nDestX, int nDestY, HRenderTexture hDestTexture)
{
} /* size: 5 */

// <0039F8A8> empty/rendercontextempty.cpp:92
void CRenderContextEmpty::ResolveRenderTarget(int nRenderTargetIndex, Rect_t* pSrcRect, int nDestX, int nDestY, HRenderTexture hDestTexture)
{
} /* size: 5 */

// <0039F7E7> empty/rendercontextempty.cpp:100
void CRenderContextEmpty::CopyTexture(HRenderTexture hSrcTexture, HRenderTexture hDestTexture, Rect_t* pSrcRect, int nDestX, int nDestY, uint nSrcMipSlice, uint nSrcArraySlice, uint nDstMipSlice, uint nDstArraySlice, CopyTextureFlags_t nFlags)
{
} /* size: 5 */

// <0039F7B9> empty/rendercontextempty.cpp:105
void CRenderContextEmpty::DetachCommandList()
{
} /* size: 7 */

// <0039F747> empty/rendercontextempty.cpp:117
void CRenderContextEmpty::GetMaxToRender(int vertexSize, int indexSize, int* pMaxVerts, int* pMaxIndices)
{
} /* size: 77 */

// <0039F70B> empty/rendercontextempty.cpp:146
void CRenderContextEmpty::LockVertexBuffer(VertexBufferHandle_t hVertexBuffer, int nMaxSizeInBytes, LockDesc_t* pDesc)
{
} /* size: 0 */

// <0039F6CF> empty/rendercontextempty.cpp:159
void CRenderContextEmpty::UnlockVertexBuffer(VertexBufferHandle_t hVertexBuffer, int nWrittenSizeInBytes, LockDesc_t* pDesc)
{
} /* size: 0 */

// <0039F669> empty/rendercontextempty.cpp:167
void CRenderContextEmpty::SetVertexData(VertexBufferHandle_t hVertexBuffer, const void* pData, int nDataSize, int nDestOffset)
{
} /* size: 5 */

// <0039F621> empty/rendercontextempty.cpp:171
void CRenderContextEmpty::SetIndexData(IndexBufferHandle_t hIndexBuffer, const void* pData, int nDataSize, int nDestOffset)
{
} /* size: 0 */

// <0039F5D7> empty/rendercontextempty.cpp:179
void CRenderContextEmpty::LockDynamicVertexBuffer(const BufferDesc_t& desc, DynamicLockDesc_t* pLockDesc)
{
} /* size: 27 */

// <0039F58D> empty/rendercontextempty.cpp:186
void CRenderContextEmpty::UnlockDynamicVertexBuffer(DynamicVertexBufferHandle_t hVertexBuffer, int nWrittenSizeInBytes)
{
} /* size: 5 */

// <0039F527> empty/rendercontextempty.cpp:191
void CRenderContextEmpty::LockVertexBufferRegion(VertexBufferHandle_t hVertexBuffer, int32 nOffset, int32 nSizeInBytes, LockDesc_t* pDesc)
{
} /* size: 7 */

// <0039F4C1> empty/rendercontextempty.cpp:197
void CRenderContextEmpty::UnlockVertexBufferRegion(VertexBufferHandle_t hVertexBuffer, int32 nOffset, int32 nWrittenSizeInBytes, LockDesc_t* pDesc)
{
} /* size: 5 */

// <0039F45B> empty/rendercontextempty.cpp:202
void CRenderContextEmpty::LockDynamicGPUBuffer(const BufferDesc_t& desc, RenderBufferFlags_t nFlags, ImageFormat nFormat, DynamicLockDesc_t* pLockDesc)
{
} /* size: 7 */

// <0039F42B> empty/rendercontextempty.cpp:208
void CRenderContextEmpty::UnlockDynamicGPUBuffer(RenderBufferHandle_t hBuffer, int nWrittenSizeInBytes)
{
} /* size: 0 */

// <0039F407> empty/rendercontextempty.cpp:215
void CRenderContextEmpty::BeginQuery(RenderQueryHandle_t hQueryObject)
{
} /* size: 0 */

// <0039F3E3> empty/rendercontextempty.cpp:219
void CRenderContextEmpty::EndQuery(RenderQueryHandle_t hQueryObject)
{
} /* size: 0 */

// <0039F399> empty/rendercontextempty.cpp:227
void CRenderContextEmpty::LockDynamicIndexBuffer(const BufferDesc_t& desc, DynamicLockDesc_t* pLockDesc)
{
} /* size: 27 */

// <0039F369> empty/rendercontextempty.cpp:235
void CRenderContextEmpty::UnlockDynamicIndexBuffer(DynamicIndexBufferHandle_t hIndexBuffer, int nWrittenSizeInBytes)
{
} /* size: 0 */

// <0039F2DC> empty/rendercontextempty.cpp:240
void CRenderContextEmpty::LockIndexBuffer(IndexBufferHandle_t hIndexBuffer, int nSizeInBytes, LockDesc_t* pDesc)
{
} /* size: 66 */

// <0039F25D> empty/rendercontextempty.cpp:253
void CRenderContextEmpty::UnlockIndexBuffer(IndexBufferHandle_t hIndexBuffer, int nWrittenSizeInBytes, LockDesc_t* pDesc)
{
} /* size: 33 */

// <0039F211> empty/rendercontextempty.cpp:262
void CRenderContextEmpty::LockIndexBufferRegion(IndexBufferHandle_t hIndexBuffer, int32 nOffset, int32 nSizeInBytes, LockDesc_t* pDesc)
{
} /* size: 0 */

// <0039F1C5> empty/rendercontextempty.cpp:268
void CRenderContextEmpty::UnlockIndexBufferRegion(IndexBufferHandle_t hIndexBuffer, int32 nOffset, int32 nWrittenSizeInBytes, LockDesc_t* pDesc)
{
} /* size: 0 */

// <0039F179> empty/rendercontextempty.cpp:275
void CRenderContextEmpty::BindIndexBuffer(IndexBufferHandle_t hIndexBuffer, int nOffset)
{
} /* size: 7 */

// <0039F147> empty/rendercontextempty.cpp:280
void CRenderContextEmpty::BindIndexBuffer(DynamicIndexBufferHandle_t hIndexBuffer, int nOffset)
{
} /* size: 0 */

// <0039F0EC> empty/rendercontextempty.cpp:285
void CRenderContextEmpty::BindIndexBuffer(RenderBufferHandle_t hIndexBuffer, int nIndexSize, int nOffset)
{
} /* size: 7 */

// <0039F082> empty/rendercontextempty.cpp:290
void CRenderContextEmpty::BindVertexBuffer(int nSlot, VertexBufferHandle_t hVertexBuffer, int nOffset, int nStride)
{
} /* size: 7 */

// <0039F036> empty/rendercontextempty.cpp:295
void CRenderContextEmpty::BindVertexBuffer(int nSlot, DynamicVertexBufferHandle_t hVertexBuffer, int nOffset, int nStride)
{
} /* size: 0 */

// <0039EFEA> empty/rendercontextempty.cpp:301
void CRenderContextEmpty::BindVertexBuffer(int nSlot, RenderBufferHandle_t hVertexBuffer, int nOffset, int nStride)
{
} /* size: 0 */

// <0039EF8F> empty/rendercontextempty.cpp:306
void CRenderContextEmpty::BindVertexShader(RenderShaderHandle_t hVertexShader, RenderInputLayout_t hInputLayout, const CVsInputSignatureVector* pInputSignature)
{
} /* size: 5 */

// <0039EF43> empty/rendercontextempty.cpp:310
void CRenderContextEmpty::BindShader(RenderShaderType_t nType, RenderShaderHandle_t hShader)
{
} /* size: 5 */

// <0039EEE8> empty/rendercontextempty.cpp:318
void CRenderContextEmpty::Draw(RenderPrimitiveType_t type, int nFirstVertex, int nVertexCount)
{
} /* size: 5 */

// <0039EE7E> empty/rendercontextempty.cpp:326
void CRenderContextEmpty::DrawInstanced(RenderPrimitiveType_t type, int nFirstVertex, int nVertexCountPerInstance, int nInstanceCount)
{
} /* size: 5 */

// <0039EE05> empty/rendercontextempty.cpp:335
void CRenderContextEmpty::DrawIndexed(RenderPrimitiveType_t type, int nFirstIndex, int nIndexCount, int nMaxVertexCount, int nBaseVertex)
{
} /* size: 5 */

// <0039ED6C> empty/rendercontextempty.cpp:343
void CRenderContextEmpty::DrawIndexedInstanced(RenderPrimitiveType_t type, int nFirstIndex, int nIndexCountPerInstance, int nInstanceCount, int nMaxVertexCount, int nBaseVertex, uint nBaseInstance)
{
} /* size: 5 */

// <0039ED11> empty/rendercontextempty.cpp:348
void CRenderContextEmpty::DrawInstancedIndirect(RenderPrimitiveType_t type, RenderBufferHandle_t hDrawArgBuffer, uint32 nBufferOffset)
{
} /* size: 5 */

// <0039ECD2> empty/rendercontextempty.cpp:352
void CRenderContextEmpty::DrawIndexedInstancedIndirect(RenderPrimitiveType_t type, RenderBufferHandle_t hDrawArgBuffer, uint32 nBufferOffset)
{
} /* size: 0 */

// <0039EC68> empty/rendercontextempty.cpp:356
void CRenderContextEmpty::MultiDrawIndexedInstancedIndirect(RenderPrimitiveType_t type, uint32 nDrawCount, RenderBufferHandle_t hDrawArgBuffer, uint32 nBufferOffset)
{
} /* size: 5 */

// <0039EBDF> empty/rendercontextempty.cpp:360
void CRenderContextEmpty::MultiDrawIndexedInstancedIndirectCount(RenderPrimitiveType_t type, RenderBufferHandle_t hDrawCountBuffer, uint32 nDrawCountBufferOffset, uint32 nMaxDrawCount, RenderBufferHandle_t hDrawArgBuffer, uint32 nDrawArgBufferOffset)
{
} /* size: 5 */

// <0039EB56> empty/rendercontextempty.cpp:364
void CRenderContextEmpty::MultiDrawIndexed(RenderPrimitiveType_t type, int nDrawCount, const RenderMultiDrawIndexedInfo_t* pIndexInfo, uint32 nInstanceCount, uint32 nFirstInstance, int nMaxVertexCount)
{
} /* size: 5 */

// <0039EAFB> empty/rendercontextempty.cpp:368
void CRenderContextEmpty::DispatchComputeShader(uint32 nThreadGroupCountX, uint32 nThreadGroupCountY, uint32 nThreadGroupCountZ)
{
} /* size: 5 */

// <0039EAAF> empty/rendercontextempty.cpp:372
void CRenderContextEmpty::DispatchComputeShaderIndirect(RenderBufferHandle_t hDispatchBuffer, uint32 nDispatchBufferOffset)
{
} /* size: 5 */

// <0039EA54> empty/rendercontextempty.cpp:376
void CRenderContextEmpty::BuildBLAS(RenderBLASHandle_t hBLAS, BLASTriangleData_t* pTriangleData, int nTriangleDataCount)
{
} /* size: 5 */

// <0039EA08> empty/rendercontextempty.cpp:381
void CRenderContextEmpty::CompactBLAS(RenderBLASHandle_t hBloated, RenderBLASHandle_t hCompact)
{
} /* size: 5 */

// <0039E9C9> empty/rendercontextempty.cpp:386
void CRenderContextEmpty::BuildTLAS(RenderTLASHandle_t hTLAS, TLASInstance_t* pInstances, int nInstanceCount)
{
} /* size: 0 */

// <0039E98C> empty/rendercontextempty.cpp:390
void CRenderContextEmpty::UpdateRayTraceShaderBindingTable(IRaytraceShaderBindingTable* pShaderBindingTable)
{
} /* size: 5 */

// <0039E967> empty/rendercontextempty.cpp:394
void CRenderContextEmpty::BindRayTracingPipeline(RenderRayTracePipelineHandle_t hRayTracingPipeline)
{
} /* size: 0 */

// <0039E8FD> empty/rendercontextempty.cpp:398
void CRenderContextEmpty::TraceRays(IRaytraceShaderBindingTable* pShaderBindingTable, uint32 nWidth, uint32 nHeight, uint32 nDepth)
{
} /* size: 5 */

// <0039E8A2> empty/rendercontextempty.cpp:402
void CRenderContextEmpty::TraceRaysIndirect(IRaytraceShaderBindingTable* pShaderBindingTable, RenderBufferHandle_t hDispatchBuffer, uint32 nDispatchBufferOffset)
{
} /* size: 5 */

// <0039E863> empty/rendercontextempty.cpp:406
void CRenderContextEmpty::CopyGPUBufferHiddenStructureCount(RenderBufferHandle_t hSrcBuffer, RenderBufferHandle_t hDestBuffer, uint32 nDestBufferOffset)
{
} /* size: 0 */

// <0039E831> empty/rendercontextempty.cpp:410
void CRenderContextEmpty::SetGPUBufferHiddenStructureCount(RenderBufferHandle_t hSrcBuffer, uint32 counterValue)
{
} /* size: 0 */

// <0039E7FF> empty/rendercontextempty.cpp:414
void CRenderContextEmpty::FillGPUBuffer(RenderBufferHandle_t hBuffer, uint32 nFillValue)
{
} /* size: 0 */

// <0039E795> empty/rendercontextempty.cpp:418
void CRenderContextEmpty::SetGPUBufferData(RenderBufferHandle_t hGpuBuffer, const void* pData, uint32 nDataSize, uint32 nOffset)
{
} /* size: 5 */

// <0039E651> empty/rendercontextempty.cpp:425
// variables: 2
// function calls: 2
void CRenderContextEmpty::SetViewports(int nCount, const RenderViewport_t* pViewports)
{
	const char   __FUNCTION__; // 4247
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 428
	}
	Min<int>(const int& val1,
		const int& val2);  // 427
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 429
} /* size: 0, variables: 1, inline expansions: 2 (23 bytes) */

// <0039E5AB> empty/rendercontextempty.cpp:432
// variables: 2
void CRenderContextEmpty::GetViewport(RenderViewport_t* pViewport, int nViewport)
{
	const char   __FUNCTION__; // 4220
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 434
	}
} /* size: 0, variables: 1 */

// <0039E579> empty/rendercontextempty.cpp:438
void CRenderContextEmpty::SetScissorRects(int nCount, const Rect_t* pRects)
{
} /* size: 0 */

// <0039E4EF> empty/rendercontextempty.cpp:445
void CRenderContextEmpty::BindTexture(int nTextureIndex, HRenderTexture hTexture, RenderTextureDimension_t nDim, RenderShaderType_t nTargetPipelineStage, RenderColorSpace_t nColorSpace, int nRequiredMipSize)
{
} /* size: 5 */

// <0039E455> empty/rendercontextempty.cpp:450
void CRenderContextEmpty::BindMipLevelOfTexture(int nTextureIndex, HRenderTexture hTexture, int nMipLevelToBind, RenderTextureDimension_t nDim, RenderShaderType_t nTargetPipelineStage, RenderColorSpace_t nColorSpace, int nRequiredMipSize)
{
} /* size: 5 */

// <0039E416> empty/rendercontextempty.cpp:455
void CRenderContextEmpty::SetConstantBufferData(ConstantBufferHandle_t hConstantBuffer, const void* pDataToSet, uint32 nDataSize)
{
} /* size: 0 */

// <0039E39D> empty/rendercontextempty.cpp:459
void CRenderContextEmpty::SetConstantBufferViewsData(ConstantBufferHandle_t hConstantBuffer, uint32 nStartView, uint32 nNumViews, const void* const* pViewData, uint32 nViewDataSize)
{
} /* size: 5 */

// <0039E319> empty/rendercontextempty.cpp:463
// function call: 1
void CRenderContextEmpty::LockDynamicConstantBuffer(uint32 nSize, DynamicLockDesc_t* pLockDesc)
{
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 465
} /* size: 46, inline expansions: 1 (6 bytes) */

// <0039E2E7> empty/rendercontextempty.cpp:481
void CRenderContextEmpty::UnlockDynamicConstantBuffer(ConstantBufferHandle_t hBuffer, uint32 nWrittenSizeInBytes)
{
} /* size: 0 */

// <0039E28C> empty/rendercontextempty.cpp:485
void CRenderContextEmpty::BindConstantBuffer(RenderShaderType_t nType, ConstantBufferHandle_t hConstantBuffer, int nSlot)
{
} /* size: 5 */

// <0039E222> empty/rendercontextempty.cpp:489
void CRenderContextEmpty::BindConstantBufferView(RenderShaderType_t nType, ConstantBufferHandle_t hConstantBuffer, uint32 nView, int nSlot)
{
} /* size: 5 */

// <0039E1E5> empty/rendercontextempty.cpp:497
void CRenderContextEmpty::GetInputLayoutForVertexBuffer(VertexBufferHandle_t hBuffer)
{
} /* size: 10 */

// <0039E04A> empty/rendercontextempty.cpp:502
// function calls: 4
void CRenderContextEmpty::SetTextureData(HRenderTexture hTexture, const CTextureDesc* pDataDesc, const void* pData, int nDataSize, int nSpecificMipLevelToSet, const Rect3D_t* pSubRectToUpdate, uint nTextureUpdateFlags, const DataRecycleDelegate_t* pDataRecycleDelegate)
{
	CUtlAbstractDelegate::operator!(); // 1180
	FastDelegate1<void const::IsEmpty(); // 504
	ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(void const*), void (*)(void const*), void (*)(void const*)>* this); // 1150
	FastDelegate1<void const::operator(
			const void* p1);  // 506
} /* size: 65, inline expansions: 4 (64 bytes) */

// <0039DFFD> empty/rendercontextempty.cpp:511
void CRenderContextEmpty::LockDynamicTexture(HRenderTexture hTexture, LockedDynamicTexture_t& lockedTexture)
{
} /* size: 5 */

// <0039DFBF> empty/rendercontextempty.cpp:516
void CRenderContextEmpty::UnlockDynamicTexture(HRenderTexture hTexture)
{
} /* size: 5 */

// <003A3CD1> empty/rendercontextempty.cpp:521
// function call: 1
void CRenderContextEmpty::ReadTexturePixels(HRenderTexture hTexture, IReadTexturePixelsCallback* pCallback, Rect_t* pSrcRect, int nSlice, int nMip, bool bDeleteCallbackWhenFinished)
{
	CRenderContextEmpty::ReadTexturePixels(
				HRenderTexture hTexture,
				IReadTexturePixelsCallback* pCallback,
				Rect_t* pSrcRect,
				int nSlice,
				int nMip,
				bool bDeleteCallbackWhenFinished);  // 521
} /* size: 89, inline expansions: 1 (12 bytes) */

// <0039DF58> empty/rendercontextempty.cpp:521
void CRenderContextEmpty::ReadTexturePixels(HRenderTexture hTexture, IReadTexturePixelsCallback* pCallback, Rect_t* pSrcRect, int nSlice, int nMip, bool bDeleteCallbackWhenFinished)
{
} /* size: 0 */

// <003A3DFF> empty/rendercontextempty.cpp:534
// function call: 1
void CRenderContextEmpty::ReadBuffer(RenderBufferHandle_t hBuffer, IReadBufferCallback* pCallback, int32 nOffset, int32 nBytesToRead, bool bDeleteCallbackWhenFinished)
{
	CRenderContextEmpty::ReadBuffer(
			RenderBufferHandle_t hBuffer,
			IReadBufferCallback* pCallback,
			int32 nOffset,
			int32 nBytesToRead,
			bool bDeleteCallbackWhenFinished);  // 534
} /* size: 73, inline expansions: 1 (20 bytes) */

// <0039DEFE> empty/rendercontextempty.cpp:534
void CRenderContextEmpty::ReadBuffer(RenderBufferHandle_t hBuffer, IReadBufferCallback* pCallback, int32 nOffset, int32 nBytesToRead, bool bDeleteCallbackWhenFinished)
{
} /* size: 0 */

// <0039DEA4> empty/rendercontextempty.cpp:547
void CRenderContextEmpty::ReadBuffer(IndexBufferHandle_t hBuffer, IReadBufferCallback* pCallback, int32 nOffset, int32 nBytesToRead, bool bDeleteCallbackWhenFinished)
{
} /* size: 0 */

// <0039DE7F> empty/rendercontextempty.cpp:560
void CRenderContextEmpty::GenerateMipMaps(HRenderTexture hTexture)
{
} /* size: 0 */

// <0039DE5A> empty/rendercontextempty.cpp:564
void CRenderContextEmpty::QueueDeviceThreadCallback(IDeviceThreadCallback* pDeviceThreadCallback)
{
} /* size: 0 */

