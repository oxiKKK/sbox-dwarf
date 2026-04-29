
//
// ./commandstreambuilder.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 35
//	classes: 7
//

// <004F6CE7> ./commandstreambuilder.h:79
// member functions: 8
// member variable: 1
// static member variable: 1
// class size: 2,048
class CCommandBufferChunk {
	/* ./commandstreambuilder.h:81 */
	void* operator new(size_t);
	/* ./commandstreambuilder.h:81 */
	void* operator new(size_t, int, const char* , int);
	/* ./commandstreambuilder.h:81 */
	void operator delete(void* );
	/* ./commandstreambuilder.h:81 */
	void operator delete(void* , int, const char* , int);
	/* ./commandstreambuilder.h:81 */
	void PurgeFixedAllocator(bool);
private:
	static CUtlMemoryPoolMT s_Allocator; /* 0 0 */
	uint8 m_nData[2048]; /* 0 2048 */
	/* ./commandstreambuilder.h:131 */
	CCommandBufferChunk* Alloc(void);
	/* ./commandstreambuilder.h:136 */
	void Release(CCommandBufferChunk* );
	/* ./commandstreambuilder.h:145 */
	size_t PeakAllocSize(void);
};

// <00A54C7A> ./commandstreambuilder.h:131
inline void Alloc(void)
{
} /* size: 0 */

// <00B8B760> ./commandstreambuilder.h:136
inline void CCommandBufferChunk::Release()
{
} /* size: 0 */

// <004F6DFB> ./commandstreambuilder.h:291
// member functions: 25
// member variables: 16
// static member variable: 1
// class size: 608
class CCommandStream : public CDisplayList {
	/* ./commandstreambuilder.h:402 */
	struct ExtraData_t {
		int m_nBlockBytes; /* 0 4 */
		int m_nUsed; /* 4 4 */
		ExtraData_t * m_pNext; /* 8 8 */
	};
public:
	/* class CDisplayList <ancestor>; */ /* 0 16 */
	/* ./commandstreambuilder.h:296 */
	void CCommandStream(CCommandStream* );
	/* ./commandstreambuilder.h:311 */
	void Cleanup(CCommandStream* );
	/* ./commandstreambuilder.h:313 */
	bool IsReadyToExecute(CCommandStream* );
	/* ./commandstreambuilder.h:315 */
	void SetDebugString(CCommandStream* , const char* );
	/* ./commandstreambuilder.h:317 */
	const char* GetDebugStringNonNull(CCommandStream* );
	/* ./commandstreambuilder.h:294 */
	typedef struct CCommandBufferChunk ChunkType_t;
	/* ./commandstreambuilder.h:326 */
	ChunkType_t* AllocateChunk(void);
	/* ./commandstreambuilder.h:331 */
	void FreeChunk(ChunkType_t* );
	/* ./commandstreambuilder.h:332 */
	int ChunkSize(void);
	/* ./commandstreambuilder.h:334 */
	bool IsFromPrimaryContext(const CCommandStream* );
	CCommandStream * m_pNext; /* 16 8 */
	CCommandStream * m_pPrev; /* 24 8 */
	CCommandBufferChunk * m_pFirstChunk; /* 32 8 */
	CUtlVectorFixedGrowable<CDependencyDescriptor*, 16> m_DependencyList __attribute__((__aligned__(8))); /* 40 160 */
	CUtlVectorFixedGrowable<CDependencyDescriptor*, 16> m_DependentsList __attribute__((__aligned__(8))); /* 200 160 */
	int m_nDisplayListFrame; /* 360 4 */
	int m_nDisplayListId; /* 364 4 */
	bool m_bIsEmpty; /* 368 1 */
	bool m_bIsFromPrimaryContext; /* 369 1 */
	VulkanCommandBuffer_t * m_pCommandBuffer; /* 376 8 */
	CBufferStringN<64> m_DebugString; /* 384 72 */
	CRenderPipelineStats m_CommandListStats; /* 456 120 */
	RenderPipelineStatsCommandListQueries_t m_CommandListQueries; /* 576 16 */
	/* ./commandstreambuilder.h:374 */
	void* AllocExtraDataBlock(CCommandStream* , int, int);
	/* ./commandstreambuilder.h:376 */
	void* AllocExtraData(CCommandStream* , int, int);
	/* ./commandstreambuilder.h:396 */
	int GetNumExtraDataFallbacks(void);
protected:
	ExtraData_t * m_pExtraDataHead; /* 592 8 */
	ExtraData_t * m_pExtraDataTail; /* 600 8 */
	static CInterlockedInt s_nExtraDataFallbacks; /* 0 0 */
	void CCommandStream(class CCommandStream *); /* linkage=_ZN14CCommandStreamC4Ev */
	void Cleanup(class CCommandStream *); /* linkage=_ZN14CCommandStream7CleanupEv */
	bool IsReadyToExecute(class CCommandStream *); /* linkage=_ZN14CCommandStream16IsReadyToExecuteEv */
	void SetDebugString(class CCommandStream *, const char  *); /* linkage=_ZN14CCommandStream14SetDebugStringEPKc */
	const char  * GetDebugStringNonNull(class CCommandStream *); /* linkage=_ZN14CCommandStream21GetDebugStringNonNullEv */
	ChunkType_t * AllocateChunk(void); /* linkage=_ZN14CCommandStream13AllocateChunkEv */
	void FreeChunk(ChunkType_t *); /* linkage=_ZN14CCommandStream9FreeChunkEP19CCommandBufferChunk */
	int ChunkSize(void); /* linkage=_ZN14CCommandStream9ChunkSizeEv */
	bool IsFromPrimaryContext(const class CCommandStream  *); /* linkage=_ZNK14CCommandStream20IsFromPrimaryContextEv */
	void * AllocExtraDataBlock(class CCommandStream *, int, int); /* linkage=_ZN14CCommandStream19AllocExtraDataBlockEii */
	void * AllocExtraData(class CCommandStream *, int, int); /* linkage=_ZN14CCommandStream14AllocExtraDataEii */
	int GetNumExtraDataFallbacks(void); /* linkage=_ZN14CCommandStream24GetNumExtraDataFallbacksEv */
	void ~CCommandStream(class CCommandStream *); /* linkage=_ZN14CCommandStreamD4Ev */
} __attribute__((__aligned__(8)));

// <00396956> ./commandstreambuilder.h:291
// member functions: 25
// member variables: 15
// static member variable: 1
// class size: 600
class CCommandStream : public CDisplayList {
	/* ./commandstreambuilder.h:402 */
	struct ExtraData_t {
		int m_nBlockBytes; /* 0 4 */
		int m_nUsed; /* 4 4 */
		ExtraData_t * m_pNext; /* 8 8 */
	};
public:
	/* class CDisplayList <ancestor>; */ /* 0 16 */
	/* ./commandstreambuilder.h:296 */
	void CCommandStream(CCommandStream* );
	/* ./commandstreambuilder.h:311 */
	void Cleanup(CCommandStream* );
	/* ./commandstreambuilder.h:313 */
	bool IsReadyToExecute(CCommandStream* );
	/* ./commandstreambuilder.h:315 */
	void SetDebugString(CCommandStream* , const char* );
	/* ./commandstreambuilder.h:317 */
	const char* GetDebugStringNonNull(CCommandStream* );
	/* ./commandstreambuilder.h:294 */
	typedef struct CCommandBufferChunk ChunkType_t;
	/* ./commandstreambuilder.h:326 */
	ChunkType_t* AllocateChunk(void);
	/* ./commandstreambuilder.h:331 */
	void FreeChunk(ChunkType_t* );
	/* ./commandstreambuilder.h:332 */
	int ChunkSize(void);
	/* ./commandstreambuilder.h:334 */
	bool IsFromPrimaryContext(const CCommandStream* );
	CCommandStream * m_pNext; /* 16 8 */
	CCommandStream * m_pPrev; /* 24 8 */
	CCommandBufferChunk * m_pFirstChunk; /* 32 8 */
	CUtlVectorFixedGrowable<CDependencyDescriptor*, 16> m_DependencyList __attribute__((__aligned__(8))); /* 40 160 */
	CUtlVectorFixedGrowable<CDependencyDescriptor*, 16> m_DependentsList __attribute__((__aligned__(8))); /* 200 160 */
	int m_nDisplayListFrame; /* 360 4 */
	int m_nDisplayListId; /* 364 4 */
	bool m_bIsEmpty; /* 368 1 */
	bool m_bIsFromPrimaryContext; /* 369 1 */
	CBufferStringN<64> m_DebugString; /* 376 72 */
	CRenderPipelineStats m_CommandListStats; /* 448 120 */
	RenderPipelineStatsCommandListQueries_t m_CommandListQueries; /* 568 16 */
	/* ./commandstreambuilder.h:374 */
	void* AllocExtraDataBlock(CCommandStream* , int, int);
	/* ./commandstreambuilder.h:376 */
	void* AllocExtraData(CCommandStream* , int, int);
	/* ./commandstreambuilder.h:396 */
	int GetNumExtraDataFallbacks(void);
protected:
	ExtraData_t * m_pExtraDataHead; /* 584 8 */
	ExtraData_t * m_pExtraDataTail; /* 592 8 */
	static CInterlockedInt s_nExtraDataFallbacks; /* 0 0 */
	void CCommandStream(class CCommandStream *); /* linkage=_ZN14CCommandStreamC4Ev */
	void Cleanup(class CCommandStream *); /* linkage=_ZN14CCommandStream7CleanupEv */
	bool IsReadyToExecute(class CCommandStream *); /* linkage=_ZN14CCommandStream16IsReadyToExecuteEv */
	void SetDebugString(class CCommandStream *, const char  *); /* linkage=_ZN14CCommandStream14SetDebugStringEPKc */
	const char  * GetDebugStringNonNull(class CCommandStream *); /* linkage=_ZN14CCommandStream21GetDebugStringNonNullEv */
	ChunkType_t * AllocateChunk(void); /* linkage=_ZN14CCommandStream13AllocateChunkEv */
	void FreeChunk(ChunkType_t *); /* linkage=_ZN14CCommandStream9FreeChunkEP19CCommandBufferChunk */
	int ChunkSize(void); /* linkage=_ZN14CCommandStream9ChunkSizeEv */
	bool IsFromPrimaryContext(const class CCommandStream  *); /* linkage=_ZNK14CCommandStream20IsFromPrimaryContextEv */
	void * AllocExtraDataBlock(class CCommandStream *, int, int); /* linkage=_ZN14CCommandStream19AllocExtraDataBlockEii */
	void * AllocExtraData(class CCommandStream *, int, int); /* linkage=_ZN14CCommandStream14AllocExtraDataEii */
	int GetNumExtraDataFallbacks(void); /* linkage=_ZN14CCommandStream24GetNumExtraDataFallbacksEv */
	void ~CCommandStream(class CCommandStream *); /* linkage=_ZN14CCommandStreamD4Ev */
} __attribute__((__aligned__(8)));

// <00A54C4A> ./commandstreambuilder.h:296
void CCommandStream::CCommandStream()
{
} /* size: 0 */

// <00A54C31> ./commandstreambuilder.h:296
inline void CCommandStream::CCommandStream()
{
} /* size: 0 */

// <00A54C19> ./commandstreambuilder.h:326
// variable: 1
inline void AllocateChunk(void)
{
	ChunkType_t* pRet; // 328
} /* size: 0, variables: 1 */

// <00A54C12> ./commandstreambuilder.h:332
inline void ChunkSize(void)
{
} /* size: 0 */

// <0087A7C7> ./commandstreambuilder.h:334
inline void CCommandStream::IsFromPrimaryContext()
{
} /* size: 0 */

// <0050496D> ./commandstreambuilder.h:376
// variables: 2
inline void* CCommandStream::AllocExtraData(int nBytes, int nAlign)
{
	{
		int nAlignedUsed; // 384
		{
			void* pData; // 387
		}
	}
} /* size: 0 */

// <0087A79E> ./commandstreambuilder.h:469
inline void CCommandStream::SetDebugString(const char* pDebugString)
{
} /* size: 0 */

// <00801E27> ./commandstreambuilder.h:493
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class IStreamBuilderCallback<CCommandStream> {
	void IStreamBuilderCallback(IStreamBuilderCallback<CCommandStream>* , IStreamBuilderCallback<CCommandStream>& );
	void IStreamBuilderCallback(IStreamBuilderCallback<CCommandStream>* , const IStreamBuilderCallback<CCommandStream>& );
	void IStreamBuilderCallback(IStreamBuilderCallback<CCommandStream>* );
	void ~IStreamBuilderCallback(IStreamBuilderCallback<CCommandStream>* );
	int ()(void) * * _vptr.IStreamBuilderCallback; /* 0 8 */
	/* ./commandstreambuilder.h:496 */
	virtual void OnNewStreamStarted(IStreamBuilderCallback<CCommandStream>* , CCommandStream* );
	void IStreamBuilderCallback(class IStreamBuilderCallback<CCommandStream> *, class IStreamBuilderCallback<CCommandStream> &); /* linkage=_ZN22IStreamBuilderCallbackI14CCommandStreamEC4EOS1_ */
	void IStreamBuilderCallback(class IStreamBuilderCallback<CCommandStream> *, const class IStreamBuilderCallback<CCommandStream>  &); /* linkage=_ZN22IStreamBuilderCallbackI14CCommandStreamEC4ERKS1_ */
	void IStreamBuilderCallback(class IStreamBuilderCallback<CCommandStream> *); /* linkage=_ZN22IStreamBuilderCallbackI14CCommandStreamEC4Ev */
	void ~IStreamBuilderCallback(class IStreamBuilderCallback<CCommandStream> *); /* linkage=_ZN22IStreamBuilderCallbackI14CCommandStreamED4Ev */
	/* <5051e9> ./commandstreambuilder.h:496 */
	virtual void OnNewStreamStarted(class IStreamBuilderCallback<CCommandStream> *, class CCommandStream *); /* linkage=_ZN22IStreamBuilderCallbackI14CCommandStreamE18OnNewStreamStartedEPS0_ */
};

// <009E9A63> ./commandstreambuilder.h:496
void IStreamBuilderCallback<CCommandStream>::OnNewStreamStarted(CCommandStream* pStream)
{
} /* size: 0 */

// <004FF6A4> ./commandstreambuilder.h:496
inline void IStreamBuilderCallback<CCommandStream>::OnNewStreamStarted(CCommandStream* pStream)
{
} /* size: 0 */

// <004F9378> ./commandstreambuilder.h:499
// member functions: 48
// member variables: 4
// static member variable: 1
// class size: 32
class CCommandStreamBuilder {
	/* ./commandstreambuilder.h:502 */
	void CCommandStreamBuilder(CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:503 */
	void Init(CCommandStreamBuilder* , IStreamBuilderCallback<CCommandStream>* );
	/* ./commandstreambuilder.h:504 */
	void Reset(CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:505 */
	CCommandStream* GetCurrentStream(CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:506 */
	int AvailableCommandBufferSpace(const CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:507 */
	void EnsureStream(CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:508 */
	bool HasStreamStarted(const CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:509 */
	void EnsureCapacity(CCommandStreamBuilder* , int);
	/* ./commandstreambuilder.h:510 */
	void WriteData(CCommandStreamBuilder* , const void* , int);
	/* ./commandstreambuilder.h:511 */
	void ReleaseStream(CCommandStream* );
	/* ./commandstreambuilder.h:513 */
	void* AllocExtraData(CCommandStreamBuilder* , int, int);
	/* ./commandstreambuilder.h:572 */
	uint8* OutputPtr(CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:578 */
	void IncrementOutputPtr(CCommandStreamBuilder* , int);
	/* ./commandstreambuilder.h:585 */
	void CheckForBufferOverrun(CCommandStreamBuilder* );
private:
	/* ./commandstreambuilder.h:596 */
	void GrowForCapacity(CCommandStreamBuilder* , int);
	IStreamBuilderCallback<CCommandStream> * m_pCallback; /* 0 8 */
	CCommandStream * m_pCommandStreamBeingWorkedOn; /* 8 8 */
	uint8 * m_pCmdOut; /* 16 8 */
	uint8 * m_pCmdOutEnd; /* 24 8 */
	static class CTSPool<CCommandStream> sm_StreamPool; /* 0 0 */
	void CCommandStreamBuilder(class CCommandStreamBuilder *); /* linkage=_ZN21CCommandStreamBuilderC4Ev */
	void Init(class CCommandStreamBuilder *, class IStreamBuilderCallback<CCommandStream> *); /* linkage=_ZN21CCommandStreamBuilder4InitEP22IStreamBuilderCallbackI14CCommandStreamE */
	void Reset(class CCommandStreamBuilder *); /* linkage=_ZN21CCommandStreamBuilder5ResetEv */
	class CCommandStream * GetCurrentStream(class CCommandStreamBuilder *); /* linkage=_ZN21CCommandStreamBuilder16GetCurrentStreamEv */
	int AvailableCommandBufferSpace(const class CCommandStreamBuilder  *); /* linkage=_ZNK21CCommandStreamBuilder27AvailableCommandBufferSpaceEv */
	void EnsureStream(class CCommandStreamBuilder *); /* linkage=_ZN21CCommandStreamBuilder12EnsureStreamEv */
	bool HasStreamStarted(const class CCommandStreamBuilder  *); /* linkage=_ZNK21CCommandStreamBuilder16HasStreamStartedEv */
	void EnsureCapacity(class CCommandStreamBuilder *, int); /* linkage=_ZN21CCommandStreamBuilder14EnsureCapacityEi */
	void WriteData(class CCommandStreamBuilder *, const void  *, int); /* linkage=_ZN21CCommandStreamBuilder9WriteDataEPKvi */
	void ReleaseStream(class CCommandStream *); /* linkage=_ZN21CCommandStreamBuilder13ReleaseStreamEP14CCommandStream */
	void * AllocExtraData(class CCommandStreamBuilder *, int, int); /* linkage=_ZN21CCommandStreamBuilder14AllocExtraDataEii */
	uint8 * OutputPtr(class CCommandStreamBuilder *); /* linkage=_ZN21CCommandStreamBuilder9OutputPtrEv */
	void IncrementOutputPtr(class CCommandStreamBuilder *, int); /* linkage=_ZN21CCommandStreamBuilder18IncrementOutputPtrEi */
	void CheckForBufferOverrun(class CCommandStreamBuilder *); /* linkage=_ZN21CCommandStreamBuilder21CheckForBufferOverrunEv */
	void GrowForCapacity(class CCommandStreamBuilder *, int); /* linkage=_ZN21CCommandStreamBuilder15GrowForCapacityEi */
	class CommandEndRenderDocCapture_t * WriteCmd<CommandEndRenderDocCapture_t>(class CCommandStreamBuilder *, const class CommandEndRenderDocCapture_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI28CommandEndRenderDocCapture_tEEPT_RKS2_ */
	class CommandStartRenderDocCapture_t * WriteCmd<CommandStartRenderDocCapture_t>(class CCommandStreamBuilder *, const class CommandStartRenderDocCapture_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI30CommandStartRenderDocCapture_tEEPT_RKS2_ */
	class CommandFence_t * WriteCmd<CommandFence_t>(class CCommandStreamBuilder *, const class CommandFence_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI14CommandFence_tEEPT_RKS2_ */
	class CommandPresent_t * WriteCmd<CommandPresent_t>(class CCommandStreamBuilder *, const class CommandPresent_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI16CommandPresent_tEEPT_RKS2_ */
	class CommandDynamicCBUpdate_t * WriteCmd<CommandDynamicCBUpdate_t>(class CCommandStreamBuilder *, const class CommandDynamicCBUpdate_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI24CommandDynamicCBUpdate_tEEPT_RKS2_ */
	void Store<CommandJump_t>(class CCommandStreamBuilder *, class CommandJump_t); /* linkage=_ZN21CCommandStreamBuilder5StoreI13CommandJump_tEEvT_ */
	class CommandUpdateSwappedImageLayout_t * WriteCmd<CommandUpdateSwappedImageLayout_t>(class CCommandStreamBuilder *, const class CommandUpdateSwappedImageLayout_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI33CommandUpdateSwappedImageLayout_tEEPT_RKS2_ */
	class CommandSetSteamVrCompositorTexture_t * WriteCmd<CommandSetSteamVrCompositorTexture_t>(class CCommandStreamBuilder *, const class CommandSetSteamVrCompositorTexture_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI36CommandSetSteamVrCompositorTexture_tEEPT_RKS2_ */
	class CommandDeviceThreadCallback_t * WriteCmd<CommandDeviceThreadCallback_t>(class CCommandStreamBuilder *, const class CommandDeviceThreadCallback_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI29CommandDeviceThreadCallback_tEEPT_RKS2_ */
	class CommandReadBufferVulkan_t * WriteCmd<CommandReadBufferVulkan_t>(class CCommandStreamBuilder *, const class CommandReadBufferVulkan_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI25CommandReadBufferVulkan_tEEPT_RKS2_ */
	class CommandReadTexturePixelsVulkan_t * WriteCmd<CommandReadTexturePixelsVulkan_t>(class CCommandStreamBuilder *, const class CommandReadTexturePixelsVulkan_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI32CommandReadTexturePixelsVulkan_tEEPT_RKS2_ */
	class CommandPresentVulkan_t * WriteCmd<CommandPresentVulkan_t>(class CCommandStreamBuilder *, const class CommandPresentVulkan_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI22CommandPresentVulkan_tEEPT_RKS2_ */
	class CommandEndQueryVulkan_t * WriteCmd<CommandEndQueryVulkan_t>(class CCommandStreamBuilder *, const class CommandEndQueryVulkan_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI23CommandEndQueryVulkan_tEEPT_RKS2_ */
	class CommandReturn_t * WriteCmd<CommandReturn_t>(class CCommandStreamBuilder *, const class CommandReturn_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI15CommandReturn_tEEPT_RKS2_ */
	class CommandDispatchCommandStream_t * WriteCmd<CommandDispatchCommandStream_t>(class CCommandStreamBuilder *, const class CommandDispatchCommandStream_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI30CommandDispatchCommandStream_tEEPT_RKS2_ */
	class CommandDestroyQueryVulkan_t * WriteCmd<CommandDestroyQueryVulkan_t>(class CCommandStreamBuilder *, const class CommandDestroyQueryVulkan_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI27CommandDestroyQueryVulkan_tEEPT_RKS2_ */
	class CommandBeginSubmittingViews_t * WriteCmd<CommandBeginSubmittingViews_t>(class CCommandStreamBuilder *, const class CommandBeginSubmittingViews_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI29CommandBeginSubmittingViews_tEEPT_RKS2_ */
	class CommandSetSwapChainSemaphore_t * WriteCmd<CommandSetSwapChainSemaphore_t>(class CCommandStreamBuilder *, const class CommandSetSwapChainSemaphore_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI30CommandSetSwapChainSemaphore_tEEPT_RKS2_ */
};

// <008019E8> ./commandstreambuilder.h:499
// member functions: 58
// member variables: 4
// static member variable: 1
// class size: 32
class CCommandStreamBuilder {
	/* ./commandstreambuilder.h:502 */
	void CCommandStreamBuilder(CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:503 */
	void Init(CCommandStreamBuilder* , IStreamBuilderCallback<CCommandStream>* );
	/* ./commandstreambuilder.h:504 */
	void Reset(CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:505 */
	CCommandStream* GetCurrentStream(CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:506 */
	int AvailableCommandBufferSpace(const CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:507 */
	void EnsureStream(CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:508 */
	bool HasStreamStarted(const CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:509 */
	void EnsureCapacity(CCommandStreamBuilder* , int);
	/* ./commandstreambuilder.h:510 */
	void WriteData(CCommandStreamBuilder* , const void* , int);
	/* ./commandstreambuilder.h:511 */
	void ReleaseStream(CCommandStream* );
	/* ./commandstreambuilder.h:513 */
	void* AllocExtraData(CCommandStreamBuilder* , int, int);
	/* ./commandstreambuilder.h:572 */
	uint8* OutputPtr(CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:578 */
	void IncrementOutputPtr(CCommandStreamBuilder* , int);
	/* ./commandstreambuilder.h:585 */
	void CheckForBufferOverrun(CCommandStreamBuilder* );
private:
	/* ./commandstreambuilder.h:596 */
	void GrowForCapacity(CCommandStreamBuilder* , int);
	IStreamBuilderCallback<CCommandStream> * m_pCallback; /* 0 8 */
	CCommandStream * m_pCommandStreamBeingWorkedOn; /* 8 8 */
	uint8 * m_pCmdOut; /* 16 8 */
	uint8 * m_pCmdOutEnd; /* 24 8 */
	static class CTSPool<CCommandStream> sm_StreamPool; /* 0 0 */
	/* ./commandstreambuilder.h:526 */
	CommandUpdateSwappedImageLayout_t* WriteCmd<CommandUpdateSwappedImageLayout_t>(CCommandStreamBuilder* , const CommandUpdateSwappedImageLayout_t& );
	/* ./commandstreambuilder.h:526 */
	CommandSetSteamVrCompositorTexture_t* WriteCmd<CommandSetSteamVrCompositorTexture_t>(CCommandStreamBuilder* , const CommandSetSteamVrCompositorTexture_t& );
	/* ./commandstreambuilder.h:526 */
	CommandDeviceThreadCallback_t* WriteCmd<CommandDeviceThreadCallback_t>(CCommandStreamBuilder* , const CommandDeviceThreadCallback_t& );
	/* ./commandstreambuilder.h:526 */
	CommandReadBufferVulkan_t* WriteCmd<CommandReadBufferVulkan_t>(CCommandStreamBuilder* , const CommandReadBufferVulkan_t& );
	/* ./commandstreambuilder.h:526 */
	CommandReadTexturePixelsVulkan_t* WriteCmd<CommandReadTexturePixelsVulkan_t>(CCommandStreamBuilder* , const CommandReadTexturePixelsVulkan_t& );
	/* ./commandstreambuilder.h:526 */
	CommandPresentVulkan_t* WriteCmd<CommandPresentVulkan_t>(CCommandStreamBuilder* , const CommandPresentVulkan_t& );
	/* ./commandstreambuilder.h:526 */
	CommandEndQueryVulkan_t* WriteCmd<CommandEndQueryVulkan_t>(CCommandStreamBuilder* , const CommandEndQueryVulkan_t& );
	/* ./commandstreambuilder.h:526 */
	CommandReturn_t* WriteCmd<CommandReturn_t>(CCommandStreamBuilder* , const CommandReturn_t& );
	/* ./commandstreambuilder.h:526 */
	CommandDispatchCommandStream_t* WriteCmd<CommandDispatchCommandStream_t>(CCommandStreamBuilder* , const CommandDispatchCommandStream_t& );
	/* ./commandstreambuilder.h:520 */
	void Store<CommandJump_t>(CCommandStreamBuilder* , CommandJump_t);
	void CCommandStreamBuilder(class CCommandStreamBuilder *); /* linkage=_ZN21CCommandStreamBuilderC4Ev */
	void Init(class CCommandStreamBuilder *, class IStreamBuilderCallback<CCommandStream> *); /* linkage=_ZN21CCommandStreamBuilder4InitEP22IStreamBuilderCallbackI14CCommandStreamE */
	void Reset(class CCommandStreamBuilder *); /* linkage=_ZN21CCommandStreamBuilder5ResetEv */
	class CCommandStream * GetCurrentStream(class CCommandStreamBuilder *); /* linkage=_ZN21CCommandStreamBuilder16GetCurrentStreamEv */
	int AvailableCommandBufferSpace(const class CCommandStreamBuilder  *); /* linkage=_ZNK21CCommandStreamBuilder27AvailableCommandBufferSpaceEv */
	void EnsureStream(class CCommandStreamBuilder *); /* linkage=_ZN21CCommandStreamBuilder12EnsureStreamEv */
	bool HasStreamStarted(const class CCommandStreamBuilder  *); /* linkage=_ZNK21CCommandStreamBuilder16HasStreamStartedEv */
	void EnsureCapacity(class CCommandStreamBuilder *, int); /* linkage=_ZN21CCommandStreamBuilder14EnsureCapacityEi */
	void WriteData(class CCommandStreamBuilder *, const void  *, int); /* linkage=_ZN21CCommandStreamBuilder9WriteDataEPKvi */
	void ReleaseStream(class CCommandStream *); /* linkage=_ZN21CCommandStreamBuilder13ReleaseStreamEP14CCommandStream */
	void * AllocExtraData(class CCommandStreamBuilder *, int, int); /* linkage=_ZN21CCommandStreamBuilder14AllocExtraDataEii */
	uint8 * OutputPtr(class CCommandStreamBuilder *); /* linkage=_ZN21CCommandStreamBuilder9OutputPtrEv */
	void IncrementOutputPtr(class CCommandStreamBuilder *, int); /* linkage=_ZN21CCommandStreamBuilder18IncrementOutputPtrEi */
	void CheckForBufferOverrun(class CCommandStreamBuilder *); /* linkage=_ZN21CCommandStreamBuilder21CheckForBufferOverrunEv */
	void GrowForCapacity(class CCommandStreamBuilder *, int); /* linkage=_ZN21CCommandStreamBuilder15GrowForCapacityEi */
	class CommandEndRenderDocCapture_t * WriteCmd<CommandEndRenderDocCapture_t>(class CCommandStreamBuilder *, const class CommandEndRenderDocCapture_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI28CommandEndRenderDocCapture_tEEPT_RKS2_ */
	class CommandStartRenderDocCapture_t * WriteCmd<CommandStartRenderDocCapture_t>(class CCommandStreamBuilder *, const class CommandStartRenderDocCapture_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI30CommandStartRenderDocCapture_tEEPT_RKS2_ */
	class CommandFence_t * WriteCmd<CommandFence_t>(class CCommandStreamBuilder *, const class CommandFence_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI14CommandFence_tEEPT_RKS2_ */
	class CommandPresent_t * WriteCmd<CommandPresent_t>(class CCommandStreamBuilder *, const class CommandPresent_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI16CommandPresent_tEEPT_RKS2_ */
	class CommandDynamicCBUpdate_t * WriteCmd<CommandDynamicCBUpdate_t>(class CCommandStreamBuilder *, const class CommandDynamicCBUpdate_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI24CommandDynamicCBUpdate_tEEPT_RKS2_ */
	void Store<CommandJump_t>(class CCommandStreamBuilder *, class CommandJump_t); /* linkage=_ZN21CCommandStreamBuilder5StoreI13CommandJump_tEEvT_ */
	class CommandUpdateSwappedImageLayout_t * WriteCmd<CommandUpdateSwappedImageLayout_t>(class CCommandStreamBuilder *, const class CommandUpdateSwappedImageLayout_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI33CommandUpdateSwappedImageLayout_tEEPT_RKS2_ */
	class CommandSetSteamVrCompositorTexture_t * WriteCmd<CommandSetSteamVrCompositorTexture_t>(class CCommandStreamBuilder *, const class CommandSetSteamVrCompositorTexture_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI36CommandSetSteamVrCompositorTexture_tEEPT_RKS2_ */
	class CommandDeviceThreadCallback_t * WriteCmd<CommandDeviceThreadCallback_t>(class CCommandStreamBuilder *, const class CommandDeviceThreadCallback_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI29CommandDeviceThreadCallback_tEEPT_RKS2_ */
	class CommandReadBufferVulkan_t * WriteCmd<CommandReadBufferVulkan_t>(class CCommandStreamBuilder *, const class CommandReadBufferVulkan_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI25CommandReadBufferVulkan_tEEPT_RKS2_ */
	class CommandReadTexturePixelsVulkan_t * WriteCmd<CommandReadTexturePixelsVulkan_t>(class CCommandStreamBuilder *, const class CommandReadTexturePixelsVulkan_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI32CommandReadTexturePixelsVulkan_tEEPT_RKS2_ */
	class CommandPresentVulkan_t * WriteCmd<CommandPresentVulkan_t>(class CCommandStreamBuilder *, const class CommandPresentVulkan_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI22CommandPresentVulkan_tEEPT_RKS2_ */
	class CommandEndQueryVulkan_t * WriteCmd<CommandEndQueryVulkan_t>(class CCommandStreamBuilder *, const class CommandEndQueryVulkan_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI23CommandEndQueryVulkan_tEEPT_RKS2_ */
	class CommandReturn_t * WriteCmd<CommandReturn_t>(class CCommandStreamBuilder *, const class CommandReturn_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI15CommandReturn_tEEPT_RKS2_ */
	class CommandDispatchCommandStream_t * WriteCmd<CommandDispatchCommandStream_t>(class CCommandStreamBuilder *, const class CommandDispatchCommandStream_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI30CommandDispatchCommandStream_tEEPT_RKS2_ */
	class CommandDestroyQueryVulkan_t * WriteCmd<CommandDestroyQueryVulkan_t>(class CCommandStreamBuilder *, const class CommandDestroyQueryVulkan_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI27CommandDestroyQueryVulkan_tEEPT_RKS2_ */
	class CommandBeginSubmittingViews_t * WriteCmd<CommandBeginSubmittingViews_t>(class CCommandStreamBuilder *, const class CommandBeginSubmittingViews_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI29CommandBeginSubmittingViews_tEEPT_RKS2_ */
	class CommandSetSwapChainSemaphore_t * WriteCmd<CommandSetSwapChainSemaphore_t>(class CCommandStreamBuilder *, const class CommandSetSwapChainSemaphore_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI30CommandSetSwapChainSemaphore_tEEPT_RKS2_ */
};

// <0097E1AA> ./commandstreambuilder.h:499
// member functions: 53
// member variables: 4
// static member variable: 1
// class size: 32
class CCommandStreamBuilder {
	/* ./commandstreambuilder.h:502 */
	void CCommandStreamBuilder(CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:503 */
	void Init(CCommandStreamBuilder* , IStreamBuilderCallback<CCommandStream>* );
	/* ./commandstreambuilder.h:504 */
	void Reset(CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:505 */
	CCommandStream* GetCurrentStream(CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:506 */
	int AvailableCommandBufferSpace(const CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:507 */
	void EnsureStream(CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:508 */
	bool HasStreamStarted(const CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:509 */
	void EnsureCapacity(CCommandStreamBuilder* , int);
	/* ./commandstreambuilder.h:510 */
	void WriteData(CCommandStreamBuilder* , const void* , int);
	/* ./commandstreambuilder.h:511 */
	void ReleaseStream(CCommandStream* );
	/* ./commandstreambuilder.h:513 */
	void* AllocExtraData(CCommandStreamBuilder* , int, int);
	/* ./commandstreambuilder.h:572 */
	uint8* OutputPtr(CCommandStreamBuilder* );
	/* ./commandstreambuilder.h:578 */
	void IncrementOutputPtr(CCommandStreamBuilder* , int);
	/* ./commandstreambuilder.h:585 */
	void CheckForBufferOverrun(CCommandStreamBuilder* );
private:
	/* ./commandstreambuilder.h:596 */
	void GrowForCapacity(CCommandStreamBuilder* , int);
	IStreamBuilderCallback<CCommandStream> * m_pCallback; /* 0 8 */
	CCommandStream * m_pCommandStreamBeingWorkedOn; /* 8 8 */
	uint8 * m_pCmdOut; /* 16 8 */
	uint8 * m_pCmdOutEnd; /* 24 8 */
	static class CTSPool<CCommandStream> sm_StreamPool; /* 0 0 */
	/* ./commandstreambuilder.h:526 */
	CommandDestroyQueryVulkan_t* WriteCmd<CommandDestroyQueryVulkan_t>(CCommandStreamBuilder* , const CommandDestroyQueryVulkan_t& );
	/* ./commandstreambuilder.h:526 */
	CommandBeginSubmittingViews_t* WriteCmd<CommandBeginSubmittingViews_t>(CCommandStreamBuilder* , const CommandBeginSubmittingViews_t& );
	/* ./commandstreambuilder.h:526 */
	CommandReadTexturePixelsVulkan_t* WriteCmd<CommandReadTexturePixelsVulkan_t>(CCommandStreamBuilder* , const CommandReadTexturePixelsVulkan_t& );
	/* ./commandstreambuilder.h:526 */
	CommandSetSwapChainSemaphore_t* WriteCmd<CommandSetSwapChainSemaphore_t>(CCommandStreamBuilder* , const CommandSetSwapChainSemaphore_t& );
	/* ./commandstreambuilder.h:520 */
	void Store<CommandJump_t>(CCommandStreamBuilder* , CommandJump_t);
	void CCommandStreamBuilder(class CCommandStreamBuilder *); /* linkage=_ZN21CCommandStreamBuilderC4Ev */
	void Init(class CCommandStreamBuilder *, class IStreamBuilderCallback<CCommandStream> *); /* linkage=_ZN21CCommandStreamBuilder4InitEP22IStreamBuilderCallbackI14CCommandStreamE */
	void Reset(class CCommandStreamBuilder *); /* linkage=_ZN21CCommandStreamBuilder5ResetEv */
	class CCommandStream * GetCurrentStream(class CCommandStreamBuilder *); /* linkage=_ZN21CCommandStreamBuilder16GetCurrentStreamEv */
	int AvailableCommandBufferSpace(const class CCommandStreamBuilder  *); /* linkage=_ZNK21CCommandStreamBuilder27AvailableCommandBufferSpaceEv */
	void EnsureStream(class CCommandStreamBuilder *); /* linkage=_ZN21CCommandStreamBuilder12EnsureStreamEv */
	bool HasStreamStarted(const class CCommandStreamBuilder  *); /* linkage=_ZNK21CCommandStreamBuilder16HasStreamStartedEv */
	void EnsureCapacity(class CCommandStreamBuilder *, int); /* linkage=_ZN21CCommandStreamBuilder14EnsureCapacityEi */
	void WriteData(class CCommandStreamBuilder *, const void  *, int); /* linkage=_ZN21CCommandStreamBuilder9WriteDataEPKvi */
	void ReleaseStream(class CCommandStream *); /* linkage=_ZN21CCommandStreamBuilder13ReleaseStreamEP14CCommandStream */
	void * AllocExtraData(class CCommandStreamBuilder *, int, int); /* linkage=_ZN21CCommandStreamBuilder14AllocExtraDataEii */
	uint8 * OutputPtr(class CCommandStreamBuilder *); /* linkage=_ZN21CCommandStreamBuilder9OutputPtrEv */
	void IncrementOutputPtr(class CCommandStreamBuilder *, int); /* linkage=_ZN21CCommandStreamBuilder18IncrementOutputPtrEi */
	void CheckForBufferOverrun(class CCommandStreamBuilder *); /* linkage=_ZN21CCommandStreamBuilder21CheckForBufferOverrunEv */
	void GrowForCapacity(class CCommandStreamBuilder *, int); /* linkage=_ZN21CCommandStreamBuilder15GrowForCapacityEi */
	class CommandEndRenderDocCapture_t * WriteCmd<CommandEndRenderDocCapture_t>(class CCommandStreamBuilder *, const class CommandEndRenderDocCapture_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI28CommandEndRenderDocCapture_tEEPT_RKS2_ */
	class CommandStartRenderDocCapture_t * WriteCmd<CommandStartRenderDocCapture_t>(class CCommandStreamBuilder *, const class CommandStartRenderDocCapture_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI30CommandStartRenderDocCapture_tEEPT_RKS2_ */
	class CommandFence_t * WriteCmd<CommandFence_t>(class CCommandStreamBuilder *, const class CommandFence_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI14CommandFence_tEEPT_RKS2_ */
	class CommandPresent_t * WriteCmd<CommandPresent_t>(class CCommandStreamBuilder *, const class CommandPresent_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI16CommandPresent_tEEPT_RKS2_ */
	class CommandDynamicCBUpdate_t * WriteCmd<CommandDynamicCBUpdate_t>(class CCommandStreamBuilder *, const class CommandDynamicCBUpdate_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI24CommandDynamicCBUpdate_tEEPT_RKS2_ */
	void Store<CommandJump_t>(class CCommandStreamBuilder *, class CommandJump_t); /* linkage=_ZN21CCommandStreamBuilder5StoreI13CommandJump_tEEvT_ */
	class CommandUpdateSwappedImageLayout_t * WriteCmd<CommandUpdateSwappedImageLayout_t>(class CCommandStreamBuilder *, const class CommandUpdateSwappedImageLayout_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI33CommandUpdateSwappedImageLayout_tEEPT_RKS2_ */
	class CommandSetSteamVrCompositorTexture_t * WriteCmd<CommandSetSteamVrCompositorTexture_t>(class CCommandStreamBuilder *, const class CommandSetSteamVrCompositorTexture_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI36CommandSetSteamVrCompositorTexture_tEEPT_RKS2_ */
	class CommandDeviceThreadCallback_t * WriteCmd<CommandDeviceThreadCallback_t>(class CCommandStreamBuilder *, const class CommandDeviceThreadCallback_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI29CommandDeviceThreadCallback_tEEPT_RKS2_ */
	class CommandReadBufferVulkan_t * WriteCmd<CommandReadBufferVulkan_t>(class CCommandStreamBuilder *, const class CommandReadBufferVulkan_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI25CommandReadBufferVulkan_tEEPT_RKS2_ */
	class CommandReadTexturePixelsVulkan_t * WriteCmd<CommandReadTexturePixelsVulkan_t>(class CCommandStreamBuilder *, const class CommandReadTexturePixelsVulkan_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI32CommandReadTexturePixelsVulkan_tEEPT_RKS2_ */
	class CommandPresentVulkan_t * WriteCmd<CommandPresentVulkan_t>(class CCommandStreamBuilder *, const class CommandPresentVulkan_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI22CommandPresentVulkan_tEEPT_RKS2_ */
	class CommandEndQueryVulkan_t * WriteCmd<CommandEndQueryVulkan_t>(class CCommandStreamBuilder *, const class CommandEndQueryVulkan_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI23CommandEndQueryVulkan_tEEPT_RKS2_ */
	class CommandReturn_t * WriteCmd<CommandReturn_t>(class CCommandStreamBuilder *, const class CommandReturn_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI15CommandReturn_tEEPT_RKS2_ */
	class CommandDispatchCommandStream_t * WriteCmd<CommandDispatchCommandStream_t>(class CCommandStreamBuilder *, const class CommandDispatchCommandStream_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI30CommandDispatchCommandStream_tEEPT_RKS2_ */
	class CommandDestroyQueryVulkan_t * WriteCmd<CommandDestroyQueryVulkan_t>(class CCommandStreamBuilder *, const class CommandDestroyQueryVulkan_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI27CommandDestroyQueryVulkan_tEEPT_RKS2_ */
	class CommandBeginSubmittingViews_t * WriteCmd<CommandBeginSubmittingViews_t>(class CCommandStreamBuilder *, const class CommandBeginSubmittingViews_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI29CommandBeginSubmittingViews_tEEPT_RKS2_ */
	class CommandSetSwapChainSemaphore_t * WriteCmd<CommandSetSwapChainSemaphore_t>(class CCommandStreamBuilder *, const class CommandSetSwapChainSemaphore_t  &); /* linkage=_ZN21CCommandStreamBuilder8WriteCmdI30CommandSetSwapChainSemaphore_tEEPT_RKS2_ */
};

// <00504935> ./commandstreambuilder.h:513
inline void* CCommandStreamBuilder::AllocExtraData(int nBytes, int nAlign)
{
} /* size: 0 */

// <009E9A06> ./commandstreambuilder.h:520
inline void CCommandStreamBuilder::Store<CommandJump_t>(CommandJump_t obj)
{
} /* size: 0 */

// <009E6663> ./commandstreambuilder.h:526
// variable: 1
inline void CCommandStreamBuilder::WriteCmd<CommandSetSwapChainSemaphore_t>(const CommandSetSwapChainSemaphore_t& obj)
{
	CommandSetSwapChainSemaphore_t* pCmd; // 531
} /* size: 0, variables: 1 */

// <009E5E77> ./commandstreambuilder.h:526
// variable: 1
inline void CCommandStreamBuilder::WriteCmd<CommandReadTexturePixelsVulkan_t>(const CommandReadTexturePixelsVulkan_t& obj)
{
	CommandReadTexturePixelsVulkan_t* pCmd; // 531
} /* size: 0, variables: 1 */

// <009E5D66> ./commandstreambuilder.h:526
// variable: 1
inline void CCommandStreamBuilder::WriteCmd<CommandBeginSubmittingViews_t>(const CommandBeginSubmittingViews_t& obj)
{
	CommandBeginSubmittingViews_t* pCmd; // 531
} /* size: 0, variables: 1 */

// <009E5BB3> ./commandstreambuilder.h:526
// variable: 1
inline void CCommandStreamBuilder::WriteCmd<CommandDestroyQueryVulkan_t>(const CommandDestroyQueryVulkan_t& obj)
{
	CommandDestroyQueryVulkan_t* pCmd; // 531
} /* size: 0, variables: 1 */

// <0083D5F9> ./commandstreambuilder.h:526
// variable: 1
inline void CCommandStreamBuilder::WriteCmd<CommandDispatchCommandStream_t>(const CommandDispatchCommandStream_t& obj)
{
	CommandDispatchCommandStream_t* pCmd; // 531
} /* size: 0, variables: 1 */

// <0083D57E> ./commandstreambuilder.h:526
// variable: 1
inline void CCommandStreamBuilder::WriteCmd<CommandReturn_t>(const CommandReturn_t& obj)
{
	CommandReturn_t* pCmd; // 531
} /* size: 0, variables: 1 */

// <0083D25C> ./commandstreambuilder.h:526
// variable: 1
inline void CCommandStreamBuilder::WriteCmd<CommandEndQueryVulkan_t>(const CommandEndQueryVulkan_t& obj)
{
	CommandEndQueryVulkan_t* pCmd; // 531
} /* size: 0, variables: 1 */

// <0083D113> ./commandstreambuilder.h:526
// variable: 1
inline void CCommandStreamBuilder::WriteCmd<CommandPresentVulkan_t>(const CommandPresentVulkan_t& obj)
{
	CommandPresentVulkan_t* pCmd; // 531
} /* size: 0, variables: 1 */

// <0083CEE8> ./commandstreambuilder.h:526
// variable: 1
inline void CCommandStreamBuilder::WriteCmd<CommandReadBufferVulkan_t>(const CommandReadBufferVulkan_t& obj)
{
	CommandReadBufferVulkan_t* pCmd; // 531
} /* size: 0, variables: 1 */

// <0083CE6D> ./commandstreambuilder.h:526
// variable: 1
inline void CCommandStreamBuilder::WriteCmd<CommandDeviceThreadCallback_t>(const CommandDeviceThreadCallback_t& obj)
{
	CommandDeviceThreadCallback_t* pCmd; // 531
} /* size: 0, variables: 1 */

// <0083CDCB> ./commandstreambuilder.h:526
// variable: 1
inline void CCommandStreamBuilder::WriteCmd<CommandSetSteamVrCompositorTexture_t>(const CommandSetSteamVrCompositorTexture_t& obj)
{
	CommandSetSteamVrCompositorTexture_t* pCmd; // 531
} /* size: 0, variables: 1 */

// <0083CBCE> ./commandstreambuilder.h:526
// variable: 1
inline void CCommandStreamBuilder::WriteCmd<CommandUpdateSwappedImageLayout_t>(const CommandUpdateSwappedImageLayout_t& obj)
{
	CommandUpdateSwappedImageLayout_t* pCmd; // 531
} /* size: 0, variables: 1 */

// <00A54BF9> ./commandstreambuilder.h:585
inline void CCommandStreamBuilder::CheckForBufferOverrun()
{
} /* size: 0 */

// <0087A769> ./commandstreambuilder.h:627
inline void CCommandStreamBuilder::Reset()
{
} /* size: 0 */

// <00A54BDC> ./commandstreambuilder.h:641
inline void CCommandStreamBuilder::EnsureStream()
{
} /* size: 0 */

// <0087F1D2> ./commandstreambuilder.h:641
// function calls: 106
void CCommandStreamBuilder::EnsureStream()
{
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
	CUtlMemory<CDependencyDescriptor::CUtlMemory(
			CDependencyDescriptor** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CDependencyDescriptor::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::CUtlMemoryFixedGrowable_Base(
					CDependencyDescriptor** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, CDependencyDescriptor::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::Base(); // 231
	CUtlMemoryFixedGrowable<CDependencyDescriptor::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 530
	CUtlVectorBase<CDependencyDescriptor::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CDependencyDescriptor::CUtlVectorFixedGrowable(
				int growSize);  // 296
	{
	}
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, CDependencyDescriptor::AlignedByteArray_t(); // 228
	CUtlMemory<CDependencyDescriptor::CUtlMemory(
			CDependencyDescriptor** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CDependencyDescriptor::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::CUtlMemoryFixedGrowable_Base(
					CDependencyDescriptor** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::Base(); // 231
	CUtlMemoryFixedGrowable<CDependencyDescriptor::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 530
	CUtlVectorBase<CDependencyDescriptor::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CDependencyDescriptor::CUtlVectorFixedGrowable(
				int growSize);  // 296
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<64>::CBufferStringN(); // 296
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CRenderPipelineStats::CRenderPipelineStats(); // 296
	CCommandStream::CCommandStream(); // 341
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
	CTSPool<CCommandStream>::GetObject(); // 390
	CTSPool<CCommandStream>::Get(); // 645
	{
	}
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, CDependencyDescriptor::AlignedByteArray_t(); // 228
	CUtlMemory<CDependencyDescriptor::CUtlMemory(
			CDependencyDescriptor** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CDependencyDescriptor::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::CUtlMemoryFixedGrowable_Base(
					CDependencyDescriptor** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::Base(); // 231
	CUtlMemoryFixedGrowable<CDependencyDescriptor::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 530
	CUtlVectorBase<CDependencyDescriptor::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CDependencyDescriptor::CUtlVectorFixedGrowable(
				int growSize);  // 296
	{
	}
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, CDependencyDescriptor::AlignedByteArray_t(); // 228
	CUtlMemory<CDependencyDescriptor::CUtlMemory(
			CDependencyDescriptor** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CDependencyDescriptor::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::CUtlMemoryFixedGrowable_Base(
					CDependencyDescriptor** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::Base(); // 231
	CUtlMemoryFixedGrowable<CDependencyDescriptor::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 530
	CUtlVectorBase<CDependencyDescriptor::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CDependencyDescriptor::CUtlVectorFixedGrowable(
				int growSize);  // 296
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<64>::CBufferStringN(); // 296
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CRenderPipelineStats::CRenderPipelineStats(); // 296
	CCommandStream::CCommandStream(); // 1479
	Construct<CCommandStream>(CCommandStream* pMemory); // 646
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 649
} /* size: 715, inline expansions: 106 (3018 bytes) */

// <0087A731> ./commandstreambuilder.h:655
inline void CCommandStreamBuilder::HasStreamStarted()
{
} /* size: 0 */

// <00A54BB2> ./commandstreambuilder.h:667
// variable: 1
inline void CCommandStreamBuilder::AvailableCommandBufferSpace()
{
	int nNumRemaining; // 669
} /* size: 0, variables: 1 */

// <00A54B5B> ./commandstreambuilder.h:673
// variables: 3
inline void CCommandStreamBuilder::EnsureCapacity(int nNumBytes)
{
	const char   __FUNCTION__; // 28732
	int nNumRemaining; // 677
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 676
	}
} /* size: 0, variables: 2 */

// <0087A6B2> ./commandstreambuilder.h:673
// variables: 3
inline void CCommandStreamBuilder::EnsureCapacity(int nNumBytes)
{
	const char   __FUNCTION__; // 22940
	int nNumRemaining; // 677
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 676
	}
} /* size: 0, variables: 2 */

// <00A54AD6> ./commandstreambuilder.h:688
// variables: 2
inline void CCommandStreamBuilder::GrowForCapacity(int nNumBytes)
{
	ChunkType_t* pNewBuf; // 690
	{
		CommandJump_t cmd; // 705
	}
} /* size: 0, variables: 1 */

// <0087A613> ./commandstreambuilder.h:718
inline void CCommandStreamBuilder::GetCurrentStream()
{
} /* size: 0 */

