
//
// vulkan/barrierhelpervulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 8
//

// <00429A99> vulkan/barrierhelpervulkan.cpp:4
// function calls: 118
void CBarrierHelperVulkan::~CBarrierHelperVulkan()
{
	Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResou this); // 135
	IsEmpty(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResou this); // 6
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::Count(); // 135
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::IsEmpty(); // 6
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<4, RenderUAVBarrier_t, 8>::Base(); // 237
	CUtlMemory<RenderUAVBarrier_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<RenderUAVBarrier_t, int>::ConvertToExternalMemory(
				RenderUAVBarrier_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<RenderUAVBarrier_t, int>::Purge_FixedGrowable(
				RenderUAVBarrier_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<RenderUAVBarrier_t, int>::Purge_FixedGrowable(
				RenderUAVBarrier_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::Purge(); // 560
	ValidateAlignment<RenderUAVBarrier_t>(void); // 508
	CUtlMemory<RenderUAVBarrier_t, int>::Purge(); // 903
	CUtlMemory<RenderUAVBarrier_t, int>::Purge(); // 510
	CUtlMemory<RenderUAVBarrier_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<RenderUAVBarrier_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<RenderUAVBarrier_t, 4>::~CUtlVectorFixedGrowable(); // 10
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<4, RenderBufferBarrier_t, 8>::Base(); // 237
	CUtlMemory<RenderBufferBarrier_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<RenderBufferBarrier_t, int>::ConvertToExternalMemory(
				RenderBufferBarrier_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<RenderBufferBarrier_t, int>::Purge_FixedGrowable(
				RenderBufferBarrier_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<RenderBufferBarrier_t, int>::Purge_FixedGrowable(
				RenderBufferBarrier_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<RenderBufferBarrier_t, int>::Base(); // 112
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::Base(); // 368
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::Purge(); // 560
	CUtlMemory<RenderBufferBarrier_t, int>::Purge(); // 903
	CUtlMemory<RenderBufferBarrier_t, int>::Purge(); // 510
	ValidateAlignment<RenderBufferBarrier_t>(void); // 508
	CUtlMemory<RenderBufferBarrier_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<RenderBufferBarrier_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<RenderBufferBarrier_t, 4>::~CUtlVectorFixedGrowable(); // 10
	RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 1798
	AlignedByteArrayExplicit_t<2, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 237
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::ConvertToExternalMemory(
				CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge_FixedGrowable(
				CWeakHandle<InfoForResourceTypeCTextureBase>* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge_FixedGrowable(
				CWeakHandle<InfoForResourceTypeCTextureBase>* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
	Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 368
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 1800
	Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 560
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 510
	ValidateAlignment<CWeakHandle<InfoForResourceTypeCTextureBase> >(void); // 508
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 478
	CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2>::~CUtlVectorFixedGrowable(); // 10
	CUtlVectorBase<RenderImageLayout_t, CUtlMemoryFixedGrowable<RenderImageLayout_t, 2, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<2, RenderImageLayout_t, 4>::Base(); // 237
	CUtlMemory<RenderImageLayout_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<RenderImageLayout_t, int>::ConvertToExternalMemory(
				RenderImageLayout_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<RenderImageLayout_t, int>::Purge_FixedGrowable(
				RenderImageLayout_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<RenderImageLayout_t, int>::Purge_FixedGrowable(
				RenderImageLayout_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<RenderImageLayout_t, 2, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<RenderImageLayout_t, int>::Base(); // 112
	CUtlVectorBase<RenderImageLayout_t, CUtlMemoryFixedGrowable<RenderImageLayout_t, 2, int> >::Base(); // 368
	CUtlVectorBase<RenderImageLayout_t, CUtlMemoryFixedGrowable<RenderImageLayout_t, 2, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<RenderImageLayout_t, CUtlMemoryFixedGrowable<RenderImageLayout_t, 2, int> >::Purge(); // 560
	CUtlMemory<RenderImageLayout_t, int>::Purge(); // 903
	CUtlMemory<RenderImageLayout_t, int>::Purge(); // 510
	ValidateAlignment<RenderImageLayout_t>(void); // 508
	CUtlMemory<RenderImageLayout_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<RenderImageLayout_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<RenderImageLayout_t, 2, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<RenderImageLayout_t, CUtlMemoryFixedGrowable<RenderImageLayout_t, 2, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<RenderImageLayout_t, 2>::~CUtlVectorFixedGrowable(); // 10
	RemoveAll(const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, int> this); // 1798
	CUtlMemory<CBarrierHelperVulkan::UAVState_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CBarrierHelperVulkan::UAVState_t, int>::ConvertToExternalMemory(
				UAVState_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CBarrierHelperVulkan::UAVState_t, int>::Purge_FixedGrowable(
				UAVState_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CBarrierHelperVulkan::UAVState_t, int>::Purge_FixedGrowable(
				UAVState_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::UAVState_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CBarrierHelperVulkan::UAVState_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, int> this); // 368
	ResetDbgInfo(const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, int> this); // 1800
	Purge(const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, int> this); // 560
	CUtlMemory<CBarrierHelperVulkan::UAVState_t, int>::Purge(); // 903
	CUtlMemory<CBarrierHelperVulkan::UAVState_t, int>::Purge(); // 510
	ValidateAlignment<CBarrierHelperVulkan::UAVState_t>(void); // 508
	CUtlMemory<CBarrierHelperVulkan::UAVState_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CBarrierHelperVulkan::UAVState_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, int> this); // 478
	CUtlVectorFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4>::~CUtlVectorFixedGrowable(); // 10
	RemoveAll(const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4, this); // 1798
	CUtlMemory<CBarrierHelperVulkan::BufferState_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CBarrierHelperVulkan::BufferState_t, int>::ConvertToExternalMemory(
				BufferState_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CBarrierHelperVulkan::BufferState_t, int>::Purge_FixedGrowable(
				BufferState_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CBarrierHelperVulkan::BufferState_t, int>::Purge_FixedGrowable(
				BufferState_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, CBarrierHelperVulkan::BufferState_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CBarrierHelperVulkan::BufferState_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4, this); // 368
	ResetDbgInfo(const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4, this); // 1800
	Purge(const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4, this); // 560
	CUtlMemory<CBarrierHelperVulkan::BufferState_t, int>::Purge(); // 903
	CUtlMemory<CBarrierHelperVulkan::BufferState_t, int>::Purge(); // 510
	ValidateAlignment<CBarrierHelperVulkan::BufferState_t>(void); // 508
	CUtlMemory<CBarrierHelperVulkan::BufferState_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CBarrierHelperVulkan::BufferState_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4, this); // 478
	CUtlVectorFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4>::~CUtlVectorFixedGrowable(); // 10
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::Count(); // 135
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::IsEmpty(); // 6
} /* size: 977, inline expansions: 118 (5218 bytes) */

// <00429A30> vulkan/barrierhelpervulkan.cpp:4
void CBarrierHelperVulkan::~CBarrierHelperVulkan()
{
} /* size: 36 */

// <0042958D> vulkan/barrierhelpervulkan.cpp:12
// variables: 5
// function calls: 19
void CBarrierHelperVulkan::AddBuffer(RenderBufferHandle_t hBuffer, RenderBarrierPipelineStageFlags_t currentStage, RenderBarrierAccessFlags_t currentFlags)
{
	const char   __FUNCTION__; // 843
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 17
	}
	{
		int i; // 221
		Count(const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState this); // 221
		CUtlMemory<CBarrierHelperVulkan::BufferState_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState this,
			int i);  // 223
		operator()(const class* __closure,
				const BufferState_t& buffer); // 223
	}
	FindMatching<CBarrierHelperVulkan::FindBufferIndex(RenderBufferHandle_t) const::<lambda(const CBarrierHelperVulkan::BufferState_t&)> >(const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState this,
																class& f); // 30
	CBarrierHelperVulkan::FindBufferIndex(
			RenderBufferHandle_t hBuffer);  // 17
	CUtlMemory<CBarrierHelperVulkan::BufferState_t, int>::NumAllocated(); // 1247
	CUtlMemory<CBarrierHelperVulkan::BufferState_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4, this); // 368
	ResetDbgInfo(const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4, this); // 824
	CUtlMemory<CBarrierHelperVulkan::BufferState_t, int>::IsGrowable(); // 823
	CUtlMemory<CBarrierHelperVulkan::BufferState_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CBarrierHelperVulkan::BufferState_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CBarrierHelperVulkan::BufferState_t, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4, this,
			int num);  // 1249
	CUtlMemory<CBarrierHelperVulkan::BufferState_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4, this,
		int i);  // 1252
	Construct<CBarrierHelperVulkan::BufferState_t, CBarrierHelperVulkan::BufferState_t>(BufferState_t* pMemory); // 1252
	AddToTail(const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4, this,
			BufferState_t& src);  // 18
} /* size: 0, variables: 1, inline expansions: 15 (1097 bytes) */

// <00428F56> vulkan/barrierhelpervulkan.cpp:21
// variables: 5
// function calls: 29
void CBarrierHelperVulkan::AddUAV(HRenderTexture hUAV, RenderBarrierPipelineStageFlags_t currentStage, RenderBarrierAccessFlags_t currentFlags)
{
	const char   __FUNCTION__; // 822
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 26
	}
	{
		int i; // 221
		Count(const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, this); // 221
		CUtlMemory<CBarrierHelperVulkan::UAVState_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, this,
			int i);  // 223
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 38
		operator()(const class* __closure,
				const UAVState_t& uav); // 223
	}
	FindMatching<CBarrierHelperVulkan::FindUAVIndex(HRenderTexture) const::<lambda(const CBarrierHelperVulkan::UAVState_t&)> >(const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, this,
																class& f); // 37
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 37
	CBarrierHelperVulkan::FindUAVIndex(
			HRenderTexture hUAV);  // 26
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 26
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 27
	CUtlMemory<CBarrierHelperVulkan::UAVState_t, int>::NumAllocated(); // 1247
	CUtlMemory<CBarrierHelperVulkan::UAVState_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, int> this); // 368
	ResetDbgInfo(const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, int> this); // 824
	CUtlMemory<CBarrierHelperVulkan::UAVState_t, int>::IsGrowable(); // 823
	CUtlMemory<CBarrierHelperVulkan::UAVState_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CBarrierHelperVulkan::UAVState_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CBarrierHelperVulkan::UAVState_t, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, int>  this,
			int num);  // 1249
	CUtlMemory<CBarrierHelperVulkan::UAVState_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, int>  this,
		int i);  // 1252
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 49
	UAVState_t::UAVState_t(
			UAVState_t &);  // 1514
	Construct<CBarrierHelperVulkan::UAVState_t, CBarrierHelperVulkan::UAVState_t>(UAVState_t* pMemory); // 1252
	AddToTail(const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, int>  this,
			UAVState_t& src);  // 27
} /* size: 0, variables: 1, inline expansions: 24 (1330 bytes) */

// <00428892> vulkan/barrierhelpervulkan.cpp:30
// function calls: 28
void CBarrierHelperVulkan::TextureTransition(HRenderTexture hTexture, RenderImageLayout_t layout)
{
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::NumAllocated(); // 1196
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
	Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 368
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 824
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsGrowable(); // 823
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this,
			int num);  // 1198
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this,
		int i);  // 1201
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1520
	CopyConstruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory,
									const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1201
	AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this,
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 34
	CUtlMemory<RenderImageLayout_t, int>::NumAllocated(); // 1196
	CUtlMemory<RenderImageLayout_t, int>::Base(); // 112
	CUtlVectorBase<RenderImageLayout_t, CUtlMemoryFixedGrowable<RenderImageLayout_t, 2, int> >::Base(); // 368
	CUtlVectorBase<RenderImageLayout_t, CUtlMemoryFixedGrowable<RenderImageLayout_t, 2, int> >::ResetDbgInfo(); // 824
	CUtlMemory<RenderImageLayout_t, int>::IsGrowable(); // 823
	CUtlMemory<RenderImageLayout_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<RenderImageLayout_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<RenderImageLayout_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<RenderImageLayout_t, CUtlMemoryFixedGrowable<RenderImageLayout_t, 2, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<RenderImageLayout_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<RenderImageLayout_t, CUtlMemoryFixedGrowable<RenderImageLayout_t, 2, int> >::Element(
		int i);  // 1201
	CopyConstruct<RenderImageLayout_t>(RenderImageLayout_t* pMemory,
						const RenderImageLayout_t& src);  // 1201
	CUtlVectorBase<RenderImageLayout_t, CUtlMemoryFixedGrowable<RenderImageLayout_t, 2, int> >::AddToTail(
			const RenderImageLayout_t& src);  // 35
} /* size: 681, inline expansions: 28 (1953 bytes) */

// <004282E8> vulkan/barrierhelpervulkan.cpp:38
// variables: 5
// function calls: 25
void CBarrierHelperVulkan::BufferTransition(RenderBufferHandle_t hBuffer, RenderBarrierPipelineStageFlags_t dstStage, RenderBarrierAccessFlags_t dstFlags)
{
	BufferState_t& bufferState; // 43
	RenderBufferBarrier_t* pBarrier; // 45
	{
		int i; // 221
		Count(const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState this); // 221
		CUtlMemory<CBarrierHelperVulkan::BufferState_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState this,
			int i);  // 223
		operator()(const class* __closure,
				const BufferState_t& buffer); // 223
	}
	FindMatching<CBarrierHelperVulkan::FindBufferIndex(RenderBufferHandle_t) const::<lambda(const CBarrierHelperVulkan::BufferState_t&)> >(const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState this,
																class& f); // 30
	CBarrierHelperVulkan::FindBufferIndex(
			RenderBufferHandle_t hBuffer);  // 43
	CUtlMemory<CBarrierHelperVulkan::BufferState_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CBarrierHelperVulkan::BufferState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::BufferState_t, 4, this,
			int i);  // 43
	CUtlMemory<RenderBufferBarrier_t, int>::NumAllocated(); // 1143
	CUtlMemory<RenderBufferBarrier_t, int>::Base(); // 112
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::Base(); // 368
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::ResetDbgInfo(); // 824
	CUtlMemory<RenderBufferBarrier_t, int>::IsGrowable(); // 823
	CUtlMemory<RenderBufferBarrier_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<RenderBufferBarrier_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<RenderBufferBarrier_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::GrowMemory(
			int num);  // 1145
	RenderBufferBarrier_t::RenderBufferBarrier_t(); // 1479
	Construct<RenderBufferBarrier_t>(RenderBufferBarrier_t* pMemory); // 1148
	CUtlMemory<RenderBufferBarrier_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::Element(
		int i);  // 1148
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::AddToTail(); // 1156
	CUtlMemory<RenderBufferBarrier_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::AddToTailGetPtr(); // 45
} /* size: 574, variables: 2, inline expansions: 21 (1777 bytes) */

// <00427ABA> vulkan/barrierhelpervulkan.cpp:56
// variables: 8
// function calls: 36
void CBarrierHelperVulkan::UAVTransition(HRenderTexture hUAV, RenderBarrierPipelineStageFlags_t dstStage, RenderBarrierAccessFlags_t dstFlags, RenderImageLayout_t dstLayout, int32 nMipLevelToTransition)
{
	int nIdx; // 63
	UAVState_t& uavState; // 64
	const char   __FUNCTION__; // 864
	RenderUAVBarrier_t* pBarrier; // 69
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 66
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 63
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 37
	{
		int i; // 221
		Count(const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, this); // 221
		CUtlMemory<CBarrierHelperVulkan::UAVState_t, int>::operator[](
				int i);  // 609
		Element(const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, this,
			int i);  // 223
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 38
		operator()(const class* __closure,
				const UAVState_t& uav); // 223
	}
	FindMatching<CBarrierHelperVulkan::FindUAVIndex(HRenderTexture) const::<lambda(const CBarrierHelperVulkan::UAVState_t&)> >(const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, this,
																class& f); // 37
	CBarrierHelperVulkan::FindUAVIndex(
			HRenderTexture hUAV);  // 63
	CUtlMemory<CBarrierHelperVulkan::UAVState_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CBarrierHelperVulkan::UAVState_t, CUtlMemoryFixedGrowable<CBarrierHelperVulkan::UAVState_t, 4, int>  this,
			int i);  // 64
	CUtlMemory<RenderUAVBarrier_t, int>::NumAllocated(); // 1143
	CUtlMemory<RenderUAVBarrier_t, int>::Base(); // 112
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::Base(); // 368
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::ResetDbgInfo(); // 824
	CUtlMemory<RenderUAVBarrier_t, int>::IsGrowable(); // 823
	CUtlMemory<RenderUAVBarrier_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<RenderUAVBarrier_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<RenderUAVBarrier_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::GrowMemory(
			int num);  // 1145
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 581
	RenderUAVBarrier_t::RenderUAVBarrier_t(); // 1479
	Construct<RenderUAVBarrier_t>(RenderUAVBarrier_t* pMemory); // 1148
	CUtlMemory<RenderUAVBarrier_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::Element(
		int i);  // 1148
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::AddToTail(); // 1156
	CUtlMemory<RenderUAVBarrier_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::AddToTailGetPtr(); // 69
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 70
} /* size: 0, variables: 4, inline expansions: 31 (1843 bytes) */

// <004276FC> vulkan/barrierhelpervulkan.cpp:88
// function calls: 18
void CBarrierHelperVulkan::Submit()
{
	Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResou this); // 135
	IsEmpty(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResou this); // 90
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::Count(); // 135
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::IsEmpty(); // 97
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::Count(); // 135
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::IsEmpty(); // 97
	CUtlMemory<RenderBufferBarrier_t, int>::Base(); // 112
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::Base(); // 99
	CUtlMemory<RenderUAVBarrier_t, int>::Base(); // 112
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::Base(); // 99
	CUtlVectorBase<RenderBufferBarrier_t, CUtlMemoryFixedGrowable<RenderBufferBarrier_t, 4, int> >::RemoveAll(); // 100
	CUtlVectorBase<RenderUAVBarrier_t, CUtlMemoryFixedGrowable<RenderUAVBarrier_t, 4, int> >::RemoveAll(); // 101
	CUtlMemory<RenderImageLayout_t, int>::Base(); // 112
	CUtlVectorBase<RenderImageLayout_t, CUtlMemoryFixedGrowable<RenderImageLayout_t, 2, int> >::Base(); // 92
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
	Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 92
	RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixedGrowable<CWeakHandle<InfoForResourceTyp this); // 93
	CUtlVectorBase<RenderImageLayout_t, CUtlMemoryFixedGrowable<RenderImageLayout_t, 2, int> >::RemoveAll(); // 94
} /* size: 144, inline expansions: 18 (78 bytes) */

