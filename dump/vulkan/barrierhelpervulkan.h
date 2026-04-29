
//
// vulkan/barrierhelpervulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 7
//	class: 1
//

// <00419478> vulkan/barrierhelpervulkan.h:10
// member functions: 21
// member variables: 8
// vtable entries: 6
// class size: 648
class CBarrierHelperVulkan : public IBarrierHelper {
	/* vulkan/barrierhelpervulkan.h:43 */
	struct BufferState_t {
		const RenderBufferHandle_t m_hBuffer; /* 0 8 */
		RenderBarrierPipelineStageFlags_t m_stage; /* 8 4 */
		RenderBarrierAccessFlags_t m_access; /* 12 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/barrierhelpervulkan.h:49 */
	struct UAVState_t {
		const HRenderTexture m_hUAV; /* 0 8 */
		RenderBarrierPipelineStageFlags_t m_stage; /* 8 4 */
		RenderBarrierAccessFlags_t m_access; /* 12 4 */
		RenderImageLayout_t m_layout; /* 16 4 */
		void UAVState_t(UAVState_t* , UAVState_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class IBarrierHelper <ancestor>; */ /* 0 8 */
	/* vulkan/barrierhelpervulkan.h:13 */
	void CBarrierHelperVulkan(CBarrierHelperVulkan* , CRenderContextVulkan* );
	/* vulkan/barrierhelpervulkan.cpp:4 */
	virtual void ~CBarrierHelperVulkan(CBarrierHelperVulkan* );
	/* vulkan/barrierhelpervulkan.cpp:12 */
	virtual void AddBuffer(CBarrierHelperVulkan* , RenderBufferHandle_t, RenderBarrierPipelineStageFlags_t, RenderBarrierAccessFlags_t);
	/* vulkan/barrierhelpervulkan.cpp:21 */
	virtual void AddUAV(CBarrierHelperVulkan* , HRenderTexture, RenderBarrierPipelineStageFlags_t, RenderBarrierAccessFlags_t);
	/* vulkan/barrierhelpervulkan.cpp:30 */
	virtual void TextureTransition(CBarrierHelperVulkan* , HRenderTexture, RenderImageLayout_t);
	/* vulkan/barrierhelpervulkan.cpp:38 */
	virtual void BufferTransition(CBarrierHelperVulkan* , RenderBufferHandle_t, RenderBarrierPipelineStageFlags_t, RenderBarrierAccessFlags_t);
	/* vulkan/barrierhelpervulkan.cpp:56 */
	virtual void UAVTransition(CBarrierHelperVulkan* , HRenderTexture, RenderBarrierPipelineStageFlags_t, RenderBarrierAccessFlags_t, RenderImageLayout_t, int32);
	/* vulkan/barrierhelpervulkan.cpp:88 */
	virtual void Submit(CBarrierHelperVulkan* );
private:
	/* vulkan/barrierhelpervulkan.h:28 */
	int FindBufferIndex(const CBarrierHelperVulkan* , RenderBufferHandle_t);
	/* vulkan/barrierhelpervulkan.h:35 */
	int FindUAVIndex(const CBarrierHelperVulkan* , HRenderTexture);
	const class CRenderContextVulkan * m_pRenderContext; /* 8 8 */
	CUtlVectorFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4> m_knownBuffers __attribute__((__aligned__(8))); /* 16 96 */
	CUtlVectorFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4> m_knownUavs __attribute__((__aligned__(8))); /* 112 128 */
	CUtlVectorFixedGrowable<RenderImageLayout_t, 2> m_TextureLayout __attribute__((__aligned__(8))); /* 240 40 */
	CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2> m_Textures __attribute__((__aligned__(8))); /* 280 48 */
	CUtlVectorFixedGrowable<RenderBufferBarrier_t, 4> m_Buffers __attribute__((__aligned__(8))); /* 328 128 */
	CUtlVectorFixedGrowable<RenderUAVBarrier_t, 4> m_UAVs __attribute__((__aligned__(8))); /* 456 192 */
	void CBarrierHelperVulkan(class CBarrierHelperVulkan *, class CRenderContextVulkan *); /* linkage=_ZN20CBarrierHelperVulkanC4EP20CRenderContextVulkan */
	virtual void ~CBarrierHelperVulkan(class CBarrierHelperVulkan *); /* linkage=_ZN20CBarrierHelperVulkanD4Ev */
	virtual void AddBuffer(class CBarrierHelperVulkan *, RenderBufferHandle_t, enum RenderBarrierPipelineStageFlags_t, enum RenderBarrierAccessFlags_t); /* linkage=_ZN20CBarrierHelperVulkan9AddBufferEP22RenderBufferHandle_t__33RenderBarrierPipelineStageFlags_t26RenderBarrierAccessFlags_t */
	virtual void AddUAV(class CBarrierHelperVulkan *, HRenderTexture, enum RenderBarrierPipelineStageFlags_t, enum RenderBarrierAccessFlags_t); /* linkage=_ZN20CBarrierHelperVulkan6AddUAVE11CWeakHandleI31InfoForResourceTypeCTextureBaseE33RenderBarrierPipelineStageFlags_t26RenderBarrierAccessFlags_t */
	virtual void TextureTransition(class CBarrierHelperVulkan *, HRenderTexture, enum RenderImageLayout_t); /* linkage=_ZN20CBarrierHelperVulkan17TextureTransitionE11CWeakHandleI31InfoForResourceTypeCTextureBaseE19RenderImageLayout_t */
	virtual void BufferTransition(class CBarrierHelperVulkan *, RenderBufferHandle_t, enum RenderBarrierPipelineStageFlags_t, enum RenderBarrierAccessFlags_t); /* linkage=_ZN20CBarrierHelperVulkan16BufferTransitionEP22RenderBufferHandle_t__33RenderBarrierPipelineStageFlags_t26RenderBarrierAccessFlags_t */
	virtual void UAVTransition(class CBarrierHelperVulkan *, HRenderTexture, enum RenderBarrierPipelineStageFlags_t, enum RenderBarrierAccessFlags_t, enum RenderImageLayout_t, int32); /* linkage=_ZN20CBarrierHelperVulkan13UAVTransitionE11CWeakHandleI31InfoForResourceTypeCTextureBaseE33RenderBarrierPipelineStageFlags_t26RenderBarrierAccessFlags_t19RenderImageLayout_ti */
	virtual void Submit(class CBarrierHelperVulkan *); /* linkage=_ZN20CBarrierHelperVulkan6SubmitEv */
	int FindBufferIndex(const class CBarrierHelperVulkan  *, RenderBufferHandle_t); /* linkage=_ZNK20CBarrierHelperVulkan15FindBufferIndexEP22RenderBufferHandle_t__ */
	int FindUAVIndex(const class CBarrierHelperVulkan  *, HRenderTexture); /* linkage=_ZNK20CBarrierHelperVulkan12FindUAVIndexE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
} __attribute__((__aligned__(8)));

// <008757B7> vulkan/barrierhelpervulkan.h:13
// function calls: 61
void CBarrierHelperVulkan::CBarrierHelperVulkan(CRenderContextVulkan* pRenderContext)
{
	IBarrierHelper::IBarrierHelper(); // 14
	CUtlMemory<CBarrierHelperVulkan::BufferState_t, int>::CUtlMemory(
			BufferState_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CBarrierHelperVulkan::BufferState_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CBarrierHelperVulkan::BufferState_t, int>::CUtlMemoryFixedGrowable_Base(
					BufferState_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::BufferState_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CBarrierHelperVulkan::BufferState_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::BufferState_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4, this); // 530
	CUtlVectorBase(const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4, this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4>::CUtlVectorFixedGrowable(
				int growSize);  // 14
	{
	}
	AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::UAVState_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CBarrierHelperVulkan::UAVState_t>::AlignedByteArray_t(); // 228
	CUtlMemory<CBarrierHelperVulkan::UAVState_t, int>::CUtlMemory(
			UAVState_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CBarrierHelperVulkan::UAVState_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CBarrierHelperVulkan::UAVState_t, int>::CUtlMemoryFixedGrowable_Base(
					UAVState_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::UAVState_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, int> this); // 530
	CUtlVectorBase(const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, int>  this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4>::CUtlVectorFixedGrowable(
				int growSize);  // 14
	{
	}
	AlignedByteArrayExplicit_t<2, RenderImageLayout_t, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<2, RenderImageLayout_t>::AlignedByteArray_t(); // 228
	CUtlMemory<RenderImageLayout_t, int>::CUtlMemory(
			RenderImageLayout_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<RenderImageLayout_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<RenderImageLayout_t, int>::CUtlMemoryFixedGrowable_Base(
					RenderImageLayout_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<2, RenderImageLayout_t, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<RenderImageLayout_t, 2, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<RenderImageLayout_t, CUtlMemoryFixedGrowable<RenderImageLayout_t, 2, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<RenderImageLayout_t, CUtlMemoryFixedGrowable<RenderImageLayout_t, 2, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<RenderImageLayout_t, 2>::CUtlVectorFixedGrowable(
				int growSize);  // 14
	{
	}
	AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<2, CWeakHandle<InfoForResourceTypeCTextureBase> >::AlignedByteArray_t(); // 228
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::CUtlMemory(
			CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::CUtlMemoryFixedGrowable_Base(
					CWeakHandle<InfoForResourceTypeCTextureBase>* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 530
	CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2>::CUtlVectorFixedGrowable(
				int growSize);  // 14
	{
	}
	AlignedByteArrayExplicit_t<4, RenderBufferBarrier_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, RenderBufferBarrier_t>::AlignedByteArray_t(); // 228
	CUtlMemory<RenderBufferBarrier_t, int>::CUtlMemory(
			RenderBufferBarrier_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<RenderBufferBarrier_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<RenderBufferBarrier_t, int>::CUtlMemoryFixedGrowable_Base(
					RenderBufferBarrier_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<4, RenderBufferBarrier_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<RenderBufferBarrier_t, 4>::CUtlVectorFixedGrowable(
				int growSize);  // 14
	{
	}
	AlignedByteArrayExplicit_t<4, RenderUAVBarrier_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, RenderUAVBarrier_t>::AlignedByteArray_t(); // 228
	CUtlMemory<RenderUAVBarrier_t, int>::CUtlMemory(
			RenderUAVBarrier_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<RenderUAVBarrier_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<RenderUAVBarrier_t, int>::CUtlMemoryFixedGrowable_Base(
					RenderUAVBarrier_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<4, RenderUAVBarrier_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<RenderUAVBarrier_t, 4>::CUtlVectorFixedGrowable(
				int growSize);  // 14
} /* size: 570, inline expansions: 61 (1894 bytes) */

// <00875792> vulkan/barrierhelpervulkan.h:13
inline void CBarrierHelperVulkan::CBarrierHelperVulkan(CRenderContextVulkan* pRenderContext)
{
} /* size: 0 */

// <00834461> vulkan/barrierhelpervulkan.h:18
void CBarrierHelperVulkan::~CBarrierHelperVulkan()
{
} /* size: 0 */

// <0042B1A7> vulkan/barrierhelpervulkan.h:28
inline void CBarrierHelperVulkan::FindBufferIndex(RenderBufferHandle_t hBuffer)
{
} /* size: 0 */

// <0042B110> vulkan/barrierhelpervulkan.h:35
inline void CBarrierHelperVulkan::FindUAVIndex(HRenderTexture hUAV)
{
} /* size: 0 */

// <00426B83> vulkan/barrierhelpervulkan.h:49
void UAVState_t::UAVState_t(UAVState_t &)
{
} /* size: 0 */

// <00426B62> vulkan/barrierhelpervulkan.h:49
inline void UAVState_t::UAVState_t(UAVState_t &)
{
} /* size: 0 */

