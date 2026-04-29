
//
// vulkan/renderdevicevulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 324
//	classes: 2
//	structs: 2
//

// <00A54330> vulkan/renderdevicevulkan.cpp:86
inline void operator()(const class* __closure, IConVar* pVar, const char* pOldValue, float flOldValue)
{
} /* size: 0 */

// <00A54275> vulkan/renderdevicevulkan.cpp:86
// variable: 1
// function calls: 2
void _FUN(IConVar *, const char *, float)
{
	CRenderDeviceVulkan::OnAnisotropyChanged(); // 90
	operator()(const class* __closure,
			IConVar* pVar,
			const char* pOldValue,
			float flOldValue); // 92
} /* size: 24, inline expansions: 2 (26 bytes) */

// <00997BC7> vulkan/renderdevicevulkan.cpp:86
// member functions: 2
// struct size: 1
struct {
	void operator()(const class* , IConVar* , const char* , float);
	void _FUN(IConVar* , const char* , float);
};

// <00A5420F> vulkan/renderdevicevulkan.cpp:102
// variable: 1
uintp RunVKThread(void* pParam)
{
	CRenderThreadBase* pThreadObject; // 104
} /* size: 20, variables: 1 */

// <00A500BB> vulkan/renderdevicevulkan.cpp:120
// function calls: 251
void CRenderDeviceVulkan::CRenderDeviceVulkan()
{
	CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::InvalidIterator(); // 448
	CUtlLinkedList<RenderDescriptorSetHandle_t__::ConstructList(); // 454
	CUtlLinkedList<RenderDescriptorSetHandle_t__::ResetDbgInfo(); // 455
	CUtlLinkedList<RenderDescriptorSetHandle_t__::CUtlLinkedList(
			int growSize,
			int initSize);  // 165
	ITextureResidencyListener::ITextureResidencyListener(); // 165
	IMobileEventListener::IMobileEventListener(); // 165
	CUtlTSHash<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc> >::CUtlTSHash(
			int nAllocationCount);  // 121
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::Grow(
		int num);  // 193
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::Init(
		int nGrowSize,
		int nInitSize);  // 161
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::CUtlFixedMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	ConstructList(const CUtlLinkedList<RasterizerStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<Ras this); // 454
	ResetDbgInfo(const CUtlLinkedList<RasterizerStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<Ras this); // 455
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::InvalidIterator(); // 448
	CUtlLinkedList(const CUtlLinkedList<RasterizerStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<Ras this,
			int growSize,
			int initSize);  // 404
	CUtlFixedLinkedList<RasterizerStateVulkan_t>::CUtlFixedLinkedList(
				int growSize,
				int initSize);  // 165
	ConstructList(const CUtlLinkedList<DepthStencilStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<D this); // 454
	ResetDbgInfo(const CUtlLinkedList<DepthStencilStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<D this); // 455
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::Grow(
		int num);  // 193
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::Init(
		int nGrowSize,
		int nInitSize);  // 161
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::CUtlFixedMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::InvalidIterator(); // 448
	CUtlLinkedList(const CUtlLinkedList<DepthStencilStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<D this,
			int growSize,
			int initSize);  // 404
	CUtlFixedLinkedList<DepthStencilStateVulkan_t>::CUtlFixedLinkedList(
				int growSize,
				int initSize);  // 165
	ConstructList(const CUtlLinkedList<BlendStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<BlendSta this); // 454
	ResetDbgInfo(const CUtlLinkedList<BlendStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<BlendSta this); // 455
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::Grow(
		int num);  // 193
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::Init(
		int nGrowSize,
		int nInitSize);  // 161
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::CUtlFixedMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::InvalidIterator(); // 448
	CUtlLinkedList(const CUtlLinkedList<BlendStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<BlendSta this,
			int growSize,
			int initSize);  // 404
	CUtlFixedLinkedList<BlendStateVulkan_t>::CUtlFixedLinkedList(
				int growSize,
				int initSize);  // 165
	CUtlMemory<RenderDescriptorDesc_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<RenderDescriptorDesc_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::CUtlVector(); // 165
	CUtlMemory<RenderDescriptorBinding_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<RenderDescriptorBinding_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::CUtlVector(); // 165
	_Head_base<1, std::default_delete<CBufferedDescriptorSetVulkan>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CBufferedDescriptorSetVulkan> >::_Tuple_impl(); // 303
	_Head_base<0, CBufferedDescriptorSetVulkan::_Head_base(); // 303
	_Tuple_impl<0, CBufferedDescriptorSetVulkan::_Tuple_impl(); // 966
	tuple<CBufferedDescriptorSetVulkan::tuple(); // 167
	__uniq_ptr_impl<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::__uniq_ptr_impl(); // 232
	__uniq_ptr_data<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan>, true, true>::__uniq_ptr_data(); // 298
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::unique_ptr<>(); // 165
	CUtlTSHash<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc> >::CUtlTSHash(
			int nAllocationCount);  // 122
	CColorFormatVulkan::CColorFormatVulkan(); // 165
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 99
	CAftermathVulkan::CAftermathVulkan(); // 165
	CUtlMemory<CUtlHashtableEntry<CUtlString, empty_t>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<CUtlString, empty_t>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CUtlString, empty_t, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CU this); // 178
	CUtlHashtable(const CUtlHashtable<CUtlString, empty_t, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CU this,
			int minimumSize);  // 165
	CThreadMutex::CThreadMutex(
			const char* pName);  // 165
	CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::Grow(
		int num);  // 193
	CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::Init(
		int nGrowSize,
		int nInitSize);  // 161
	CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::CUtlFixedMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	ConstructList(const CUtlLinkedList<CShaderVulkanBase, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CShaderVu this); // 454
	ResetDbgInfo(const CUtlLinkedList<CShaderVulkanBase, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CShaderVu this); // 455
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::InvalidIterator(); // 448
	CUtlLinkedList(const CUtlLinkedList<CShaderVulkanBase, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CShaderVu this,
			int growSize,
			int initSize);  // 404
	CUtlFixedLinkedList<CShaderVulkanBase>::CUtlFixedLinkedList(
				int growSize,
				int initSize);  // 165
	ConstructList(const CUtlLinkedList<CVertexShaderVulkan, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CVertex this); // 454
	CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::Grow(
		int num);  // 193
	CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::Init(
		int nGrowSize,
		int nInitSize);  // 161
	CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::CUtlFixedMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::InvalidIterator(); // 448
	ResetDbgInfo(const CUtlLinkedList<CVertexShaderVulkan, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CVertex this); // 455
	CUtlLinkedList(const CUtlLinkedList<CVertexShaderVulkan, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CVertex this,
			int growSize,
			int initSize);  // 404
	CUtlFixedLinkedList<CVertexShaderVulkan>::CUtlFixedLinkedList(
				int growSize,
				int initSize);  // 165
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 165
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 123
	CThreadMutex::CThreadMutex(
			const char* pName);  // 165
	CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextu this); // 530
	CUtlVectorBase(const CUtlVectorBase<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextu this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRe this,
			int growSize,
			int initCapacity);  // 25
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 25
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 25
	CUtlVectorMT(const CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVu this,
			int growSize,
			int initCapacity);  // 165
	CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this); // 530
	CUtlVectorBase(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRele this); // 165
	CThreadMutex::CThreadMutex(
			const char* pName);  // 165
	CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this); // 530
	CUtlVectorBase(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferReleas this); // 165
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 101
	CUtlMemory<CRenderResource::ValidateGrowSize(); // 475
	CUtlMemory<CRenderResource::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CRenderResource::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderResource::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CRenderResource::CUtlVector(); // 101
	CRenderResourceMgr::CRenderResourceMgr(); // 165
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 165
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 25
	CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 25
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 25
	CUtlVectorMT(const CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThr this,
			int growSize,
			int initCapacity);  // 165
	ConstructList(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this); // 454
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Grow(
		int num);  // 193
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Init(
		int nGrowSize,
		int nInitSize);  // 161
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::CUtlFixedMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::InvalidIterator(); // 448
	ResetDbgInfo(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this); // 455
	CUtlLinkedList(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
			int growSize,
			int initSize);  // 404
	CUtlFixedLinkedList<VulkanDescriptorSetPool_t>::CUtlFixedLinkedList(
				int growSize,
				int initSize);  // 165
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 165
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(
			unsigned int value);  // 161
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Grow(
		int num);  // 193
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Init(
		int nGrowSize,
		int nInitSize);  // 161
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::CUtlFixedMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::InvalidIterator(); // 448
	ConstructList(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this); // 454
	ResetDbgInfo(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this); // 455
	CUtlLinkedList(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
			int growSize,
			int initSize);  // 404
	CUtlFixedLinkedList<VulkanDescriptorSetPool_t>::CUtlFixedLinkedList(
				int growSize,
				int initSize);  // 165
	CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::Grow(
		int num);  // 193
	CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::Init(
		int nGrowSize,
		int nInitSize);  // 161
	CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::CUtlFixedMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::InvalidIterator(); // 448
	CUtlLinkedList<CDescriptorSetVulkan::ConstructList(); // 454
	CUtlLinkedList<CDescriptorSetVulkan::ResetDbgInfo(); // 455
	CUtlLinkedList<CDescriptorSetVulkan::CUtlLinkedList(
			int growSize,
			int initSize);  // 404
	CUtlFixedLinkedList<CDescriptorSetVulkan::CUtlFixedLinkedList(
				int growSize,
				int initSize);  // 165
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<CUtlStringToken, RenderDescriptorSetHandle_t__::Init(); // 178
	CUtlHashtable<CUtlStringToken, RenderDescriptorSetHandle_t__::CUtlHashtable(
			int minimumSize);  // 165
	CUtlLinkedList<CShaderVulkanBase::ConstructList(); // 454
	CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase::InvalidIterator(); // 448
	CUtlLinkedList<CShaderVulkanBase::ResetDbgInfo(); // 455
	CUtlLinkedList<CShaderVulkanBase::CUtlLinkedList(
			int growSize,
			int initSize);  // 165
	CThreadMutex::CThreadMutex(
			const char* pName);  // 165
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 165
	CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::InvalidIterator(); // 448
	CUtlLinkedList<VulkanSemaphore_t::ConstructList(); // 454
	CUtlLinkedList<VulkanSemaphore_t::ResetDbgInfo(); // 455
	CUtlLinkedList<VulkanSemaphore_t::CUtlLinkedList(
			int growSize,
			int initSize);  // 165
	CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::InvalidIterator(); // 448
	CUtlLinkedList<VulkanSemaphore_t::ConstructList(); // 454
	CUtlLinkedList<VulkanSemaphore_t::ResetDbgInfo(); // 455
	CUtlLinkedList<VulkanSemaphore_t::CUtlLinkedList(
			int growSize,
			int initSize);  // 165
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 165
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 165
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 165
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 165
	CUtlIntrusiveList<CBaseAccelerationStructureVulkan>::CUtlIntrusiveList(); // 1180
	CUtlIntrusiveDList<CBaseAccelerationStructureVulkan>::CUtlIntrusiveDList(); // 165
	CUtlIntrusiveList<CBaseAccelerationStructureVulkan>::CUtlIntrusiveList(); // 1180
	CUtlIntrusiveDList<CBaseAccelerationStructureVulkan>::CUtlIntrusiveDList(); // 165
	CUtlIntrusiveList<CRayTracePipelineVulkan>::CUtlIntrusiveList(); // 1180
	CUtlIntrusiveDList<CRayTracePipelineVulkan>::CUtlIntrusiveDList(); // 165
	CUtlIntrusiveList<CRayTraceShaderBindingTableVulkan>::CUtlIntrusiveList(); // 1180
	CUtlIntrusiveDList<CRayTraceShaderBindingTableVulkan>::CUtlIntrusiveDList(); // 165
	ValidateGrowSize(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, uns this); // 475
	CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, uns this,
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_ this); // 489
	ResetDbgInfo(const CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefL this); // 491
	CUtlRBTree(const CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefL this,
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMap(const CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefLess<CWeakHa this,
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 165
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__::InvalidIterator(); // 489
	CUtlRBTree<CUtlMap<RenderResourceHandle_t__::ResetDbgInfo(); // 491
	CUtlRBTree<CUtlMap<RenderResourceHandle_t__::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMap<RenderResourceHandle_t__::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 165
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__::InvalidIterator(); // 489
	CUtlRBTree<CUtlMap<RenderDescriptorSetHandle_t__::ResetDbgInfo(); // 491
	CUtlRBTree<CUtlMap<RenderDescriptorSetHandle_t__::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMap<RenderDescriptorSetHandle_t__::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 165
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__::InvalidIterator(); // 489
	CUtlRBTree<CUtlMap<RenderRayTracePipelineHandle_t__::ResetDbgInfo(); // 491
	CUtlRBTree<CUtlMap<RenderRayTracePipelineHandle_t__::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMap<RenderRayTracePipelineHandle_t__::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 165
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 165
	CThreadMutex::CThreadMutex(
			const char* pName);  // 165
	CUtlMemory<char, int>::ValidateGrowSize(); // 475
	CUtlMemory<char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char, CUtlMemory<char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<char, CUtlMemory<char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char, CUtlMemory<char, int> >::CUtlVector(); // 165
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 165
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 170
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 165
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 171
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 172
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 173
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 175
} /* size: 3436, inline expansions: 251 (4825 bytes) */

// <00A500A2> vulkan/renderdevicevulkan.cpp:120
void CRenderDeviceVulkan::CRenderDeviceVulkan()
{
} /* size: 0 */

// <00A4C1A5> vulkan/renderdevicevulkan.cpp:231
// variables: 24
// function calls: 293
void CRenderDeviceVulkan::~CRenderDeviceVulkan()
{
	CThreadMutex::~CThreadMutex(); // 234
	CUtlVectorBase<char, CUtlMemory<char, int> >::RemoveAll(); // 1798
	CUtlMemory<char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<char, int>::Purge(); // 903
	CUtlMemory<char, int>::Purge(); // 1799
	CUtlVectorBase<char, CUtlMemory<char, int> >::Purge(); // 560
	ValidateAlignment<char>(void); // 508
	CUtlMemory<char, int>::Purge(); // 510
	CUtlMemory<char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<char, CUtlMemory<char, int> >::~CUtlVector(); // 234
	CThreadMutex::~CThreadMutex(); // 234
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__::Purge(); // 1287
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<RenderRayTracePipelineHandle_t__::Purge(); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__*, VulkanDeviceSpecificRayTracePipeline_t, unsigned int, CDefLess<RenderRayTracePipelineHandle_t__*> >::Node_t, unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__::~CUtlMemory(); // 510
	CUtlRBTree<CUtlMap<RenderRayTracePipelineHandle_t__::~CUtlRBTree(); // 47
	CUtlMap<RenderRayTracePipelineHandle_t__::~CUtlMap(); // 234
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__::Purge(); // 1287
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<RenderDescriptorSetHandle_t__::Purge(); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__*, VulkanDeviceSpecificDescriptorSet_t, unsigned int, CDefLess<RenderDescriptorSetHandle_t__*> >::Node_t, unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__::~CUtlMemory(); // 510
	CUtlRBTree<CUtlMap<RenderDescriptorSetHandle_t__::~CUtlRBTree(); // 47
	CUtlMap<RenderDescriptorSetHandle_t__::~CUtlMap(); // 234
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__::Purge(); // 1287
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<RenderResourceHandle_t__::Purge(); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__*, VulkanDeviceSpecificBuffer_t, unsigned int, CDefLess<RenderResourceHandle_t__*> >::Node_t, unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__::~CUtlMemory(); // 510
	CUtlRBTree<CUtlMap<RenderResourceHandle_t__::~CUtlRBTree(); // 47
	CUtlMap<RenderResourceHandle_t__::~CUtlMap(); // 234
	IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_ this); // 905
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, uns this); // 903
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, uns this); // 1287
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_ this); // 1288
	Purge(const CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefL this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> > >::Node_t, unsigned int> >(void); // 508
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, uns this); // 510
	~CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, uns this); // 510
	~CUtlRBTree(const CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefL this); // 47
	~CUtlMap(const CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefLess<CWeakHa this); // 234
	ValidateAlignment<UtlLinkedListElem_t<VulkanSemaphore_t*, short unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::~CUtlMemory(); // 462
	CUtlLinkedList<VulkanSemaphore_t::~CUtlLinkedList(); // 234
	ValidateAlignment<UtlLinkedListElem_t<VulkanSemaphore_t*, short unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::~CUtlMemory(); // 462
	CUtlLinkedList<VulkanSemaphore_t::~CUtlLinkedList(); // 234
	ValidateAlignment<UtlLinkedListElem_t<CShaderVulkanBase*, int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase::~CUtlMemory(); // 462
	CUtlLinkedList<CShaderVulkanBase::~CUtlLinkedList(); // 234
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__::Count(); // 897
			CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__::IsValid(); // 899
			CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*> >(CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>* pMemory); // 902
		}
	}
	CUtlHashtable<CUtlStringToken, RenderDescriptorSetHandle_t__::RemoveAll(); // 188
	ValidateAlignment<CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__*> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__::~CUtlMemory(); // 188
	CUtlHashtable<CUtlStringToken, RenderDescriptorSetHandle_t__::~CUtlHashtable(); // 234
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 234
	ValidateAlignment<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__*, short unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::~CUtlMemory(); // 462
	CUtlLinkedList<RenderDescriptorSetHandle_t__::~CUtlLinkedList(); // 234
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::Purge(); // 167
	CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::~CUtlFixedMemory(); // 462
	CUtlLinkedList<CDescriptorSetVulkan::~CUtlLinkedList(); // 400
	CUtlFixedLinkedList<CDescriptorSetVulkan::~CUtlFixedLinkedList(); // 234
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Purge(); // 167
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::~CUtlFixedMemory(); // 462
	~CUtlLinkedList(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this); // 400
	CUtlFixedLinkedList<VulkanDescriptorSetPool_t>::~CUtlFixedLinkedList(); // 234
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 234
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Purge(); // 167
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::~CUtlFixedMemory(); // 462
	~CUtlLinkedList(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this); // 400
	CUtlFixedLinkedList<VulkanDescriptorSetPool_t>::~CUtlFixedLinkedList(); // 234
	CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::Purge(); // 903
	CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::Purge(); // 1799
	CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::Purge(); // 560
	ValidateAlignment<CRenderDeviceVulkan::QueryPool_t>(void); // 508
	CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::Purge(); // 510
	CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::~CUtlVector(); // 18
	~CUtlVectorMT(const CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThr this); // 234
	CUtlVectorBase<CRenderResource::RemoveAll(); // 1798
	CUtlMemory<CRenderResource::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderResource::Purge(); // 903
	CUtlMemory<CRenderResource::Purge(); // 1799
	CUtlVectorBase<CRenderResource::Purge(); // 560
	ValidateAlignment<CRenderResource*>(void); // 508
	CUtlMemory<CRenderResource::Purge(); // 510
	CUtlMemory<CRenderResource::~CUtlMemory(); // 562
	CUtlVectorBase<CRenderResource::~CUtlVectorBase(); // 410
	CUtlVector<CRenderResource::~CUtlVector(); // 98
	CRenderResourceMgr::~CRenderResourceMgr(); // 234
	{
		int i; // 1721
		CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this,
			int i);  // 1723
		CUtlVectorBase<CIndexBufferVulkan::RemoveAll(); // 1798
		CUtlMemory<CIndexBufferVulkan::IsExternallyAllocated(); // 905
		CUtlMemory<CIndexBufferVulkan::Purge(); // 903
		CUtlMemory<CIndexBufferVulkan::Purge(); // 1799
		CUtlVectorBase<CIndexBufferVulkan::Purge(); // 560
		ValidateAlignment<CIndexBufferVulkan*>(void); // 508
		CUtlMemory<CIndexBufferVulkan::Purge(); // 510
		CUtlMemory<CIndexBufferVulkan::~CUtlMemory(); // 562
		CUtlVectorBase<CIndexBufferVulkan::~CUtlVectorBase(); // 410
		CUtlVector<CIndexBufferVulkan::~CUtlVector(); // 901
		FencedIndexBufferRelease_t::~FencedIndexBufferRelease_t(); // 1526
		Destruct<CRenderDeviceVulkan::FencedIndexBufferRelease_t>(FencedIndexBufferRelease_t* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this); // 1798
	CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::Purge(); // 903
	CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this); // 560
	ValidateAlignment<CRenderDeviceVulkan::FencedIndexBufferRelease_t>(void); // 508
	CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::Purge(); // 510
	CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this); // 410
	~CUtlVector(const CUtlVector<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferReleas this); // 234
	CThreadMutex::~CThreadMutex(); // 234
	{
		int i; // 1721
		CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this,
			int i);  // 1723
		CUtlVectorBase<CVertexBufferVulkan::RemoveAll(); // 1798
		CUtlMemory<CVertexBufferVulkan::IsExternallyAllocated(); // 905
		CUtlMemory<CVertexBufferVulkan::Purge(); // 903
		CUtlMemory<CVertexBufferVulkan::Purge(); // 1799
		CUtlVectorBase<CVertexBufferVulkan::Purge(); // 560
		ValidateAlignment<CVertexBufferVulkan*>(void); // 508
		CUtlMemory<CVertexBufferVulkan::Purge(); // 510
		CUtlMemory<CVertexBufferVulkan::~CUtlMemory(); // 562
		CUtlVectorBase<CVertexBufferVulkan::~CUtlVectorBase(); // 410
		CUtlVector<CVertexBufferVulkan::~CUtlVector(); // 892
		FencedVertexBufferRelease_t::~FencedVertexBufferRelease_t(); // 1526
		Destruct<CRenderDeviceVulkan::FencedVertexBufferRelease_t>(FencedVertexBufferRelease_t* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this); // 1798
	CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::Purge(); // 903
	CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this); // 560
	ValidateAlignment<CRenderDeviceVulkan::FencedVertexBufferRelease_t>(void); // 508
	CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::Purge(); // 510
	CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this); // 410
	~CUtlVector(const CUtlVector<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRele this); // 234
	CThreadMutex::~CThreadMutex(); // 234
	CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::Purge(); // 903
	CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextu this); // 560
	ValidateAlignment<CRenderDeviceVulkan::FencedVulkanTextureRelease_t>(void); // 508
	CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::Purge(); // 510
	CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextu this); // 410
	~CUtlVector(const CUtlVector<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRe this); // 18
	~CUtlVectorMT(const CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVu this); // 234
	CThreadMutex::~CThreadMutex(); // 234
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::Purge(); // 167
	CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::~CUtlFixedMemory(); // 462
	~CUtlLinkedList(const CUtlLinkedList<CVertexShaderVulkan, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CVertex this); // 400
	CUtlFixedLinkedList<CVertexShaderVulkan>::~CUtlFixedLinkedList(); // 234
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::Purge(); // 167
	CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::~CUtlFixedMemory(); // 462
	~CUtlLinkedList(const CUtlLinkedList<CShaderVulkanBase, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CShaderVu this); // 400
	CUtlFixedLinkedList<CShaderVulkanBase>::~CUtlFixedLinkedList(); // 234
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<CUtlString, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<CUtlString, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<CUtlString, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<CUtlString, empty_t>::MarkInvalid(); // 901
			CUtlString::~CUtlString(); // 71
			CUtlKeyValuePair<CUtlString, empty_t>::~CUtlKeyValuePair(); // 1526
			Destruct<CUtlKeyValuePair<CUtlString, empty_t> >(CUtlKeyValuePair<CUtlString, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<CUtlString, empty_t, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CU this); // 188
	ValidateAlignment<CUtlHashtableEntry<CUtlString, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<CUtlString, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<CUtlString, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<CUtlString, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<CUtlString, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<CUtlString, empty_t, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CU this); // 234
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 100
	CAftermathVulkan::~CAftermathVulkan(); // 234
	CUtlMemory<ImageFormat, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ImageFormat, int>::Purge(); // 903
	CUtlMemory<ImageFormat, int>::Purge(); // 1799
	CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::RemoveAll(); // 1798
	CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::Purge(); // 560
	ValidateAlignment<ImageFormat>(void); // 508
	CUtlMemory<ImageFormat, int>::Purge(); // 510
	CUtlMemory<ImageFormat, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ImageFormat, CUtlMemory<ImageFormat, int> >::~CUtlVector(); // 22
	CColorFormatBase::~CColorFormatBase(); // 20
	CColorFormatVulkan::~CColorFormatVulkan(); // 234
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	RemoveAll(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this); // 352
	Purge(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this); // 343
	~CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerSta this); // 344
	~CUtlTSHashBase(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this); // 803
	CUtlTSHash<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc> >::~CUtlTSHash(); // 234
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	RemoveAll(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this); // 352
	Purge(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this); // 343
	~CUtlMemoryPool(const CUtlMemoryPool<CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerSta this); // 344
	~CUtlTSHashBase(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this); // 803
	CUtlTSHash<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc> >::~CUtlTSHash(); // 234
	{
		CBufferedDescriptorSetVulkan *& __ptr; // 396
		__uniq_ptr_impl<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::_M_ptr(); // 396
		unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::get_deleter(); // 398
		default_delete<CBufferedDescriptorSetVulkan>::operator(
				CBufferedDescriptorSetVulkan* __ptr);  // 398
	}
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::~unique_ptr(); // 234
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RenderDescriptorBinding_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RenderDescriptorBinding_t, int>::Purge(); // 903
	CUtlMemory<RenderDescriptorBinding_t, int>::Purge(); // 1799
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Purge(); // 560
	ValidateAlignment<RenderDescriptorBinding_t>(void); // 508
	CUtlMemory<RenderDescriptorBinding_t, int>::Purge(); // 510
	CUtlMemory<RenderDescriptorBinding_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::~CUtlVector(); // 234
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RenderDescriptorDesc_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RenderDescriptorDesc_t, int>::Purge(); // 903
	CUtlMemory<RenderDescriptorDesc_t, int>::Purge(); // 1799
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::Purge(); // 560
	ValidateAlignment<RenderDescriptorDesc_t>(void); // 508
	CUtlMemory<RenderDescriptorDesc_t, int>::Purge(); // 510
	CUtlMemory<RenderDescriptorDesc_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::~CUtlVector(); // 234
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::Purge(); // 167
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::~CUtlFixedMemory(); // 462
	~CUtlLinkedList(const CUtlLinkedList<BlendStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<BlendSta this); // 400
	CUtlFixedLinkedList<BlendStateVulkan_t>::~CUtlFixedLinkedList(); // 234
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::Purge(); // 167
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::~CUtlFixedMemory(); // 462
	~CUtlLinkedList(const CUtlLinkedList<DepthStencilStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<D this); // 400
	CUtlFixedLinkedList<DepthStencilStateVulkan_t>::~CUtlFixedLinkedList(); // 234
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::Purge(); // 167
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::~CUtlFixedMemory(); // 462
	~CUtlLinkedList(const CUtlLinkedList<RasterizerStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<Ras this); // 400
	CUtlFixedLinkedList<RasterizerStateVulkan_t>::~CUtlFixedLinkedList(); // 234
	IMobileEventListener::~IMobileEventListener(); // 234
} /* size: 2252, inline expansions: 246 (6846 bytes) */

// <00A4C13C> vulkan/renderdevicevulkan.cpp:231
void CRenderDeviceVulkan::~CRenderDeviceVulkan()
{
} /* size: 36 */

// <00A67D0C> vulkan/renderdevicevulkan.cpp:239
// variables: 2
// function calls: 3
void CRenderDeviceVulkan::ConfigureDeviceSpecificSettings()
{
	const HardwareCaps_t& caps; // 241
	strstr(const char* __haystack,
		const char* __needle);  // 247
	V_strstr(const char* s1,
		const char* search);  // 246
	{
		ConVar vulkan_amd_timestamp_workaround; // 248
	}
	CRenderDeviceVulkan::ConfigureDeviceSpecificSettings(); // 239
} /* size: 107, variables: 1, inline expansions: 3 (49 bytes) */

// <00A4C0ED> vulkan/renderdevicevulkan.cpp:239
// variables: 2
void CRenderDeviceVulkan::ConfigureDeviceSpecificSettings()
{
	const HardwareCaps_t& caps; // 241
	{
		ConVar vulkan_amd_timestamp_workaround; // 248
	}
} /* size: 0, variables: 1 */

// <00A4A55E> vulkan/renderdevicevulkan.cpp:332
// variables: 23
// function calls: 96
void CRenderDeviceVulkan::InitPipelineCacheManager()
{
	bool bUseSteamShaderCache; // 335
	CUtlString basePath; // 345
	const char* pSteamFossilizeDumpPath; // 346
	const char* pSteamFossilizeReadOnlyEnv; // 357
	const char* pSteamFossilizeDumpPathReadOnly; // 358
	CUtlString separator; // 366
	CUtlStringList fossilizePathList; // 367
	CUtlString additionalFossilizeFile; // 374
	const CUtlString  steamPipelineCache; // 385
	const CUtlString  steamAppPipelineCache; // 386
	bool bUseSteamAppShaderCache; // 389
	bool bUseSteamDownloadedShaderCache; // 393
	CUtlString whitelistPath; // 424
	int32 nWhitelistedDatabaseIndex; // 425
	{
		char fullFilePath; // 377
		CPathBufferString gamePath; // 378
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 378
		IFileSystem::GetSearchPath(
				const char* pathID,
				CBufferString* pPath,
				int nMaxElements);  // 379
		CUtlString::Get(); // 380
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 380
		V_ComposeFileName<long unsigned int>(const char* path,
							const char* filename,
							char* dest,
							long unsigned int destSize);  // 380
		V_strlen(const char* str); // 46
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 48
		CUtlMemory<char::NumAllocated(); // 1196
		CUtlMemory<char::Base(); // 112
		CUtlVectorBase<char::Base(); // 368
		CUtlVectorBase<char::ResetDbgInfo(); // 824
		CUtlMemory<char::IsGrowable(); // 823
		CUtlMemory<char::IsExternallyAllocated(); // 859
		CUtlMemory<char::IsExternallyAllocated(); // 861
		CUtlMemory<char::Grow(
			int num);  // 806
		CUtlVectorBase<char::GrowMemory(
				int num);  // 1198
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 1201
		CopyConstruct<char*>(char** pMemory,
					char* const& src);  // 1201
		CUtlVectorBase<char::AddToTail(
				char* const& src);  // 49
		CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
				const char* pString);  // 381
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 383
	}
	{
		int nIndex; // 399
		CUtlVectorBase<char::Count(); // 399
		CUtlString::Get(); // 401
		CUtlVectorBase<char::Remove(
			int elem);  // 403
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 401
		strstr(char* __haystack,
			const char* __needle);  // 255
		V_strstr(char* s1,
			const char* search);  // 401
	}
	{
		int nIndex; // 412
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 414
		CUtlVectorBase<char::Remove(
			int elem);  // 416
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 414
		strstr(char* __haystack,
			const char* __needle);  // 255
		V_strstr(char* s1,
			const char* search);  // 414
	}
	{
		CUtlString whitelistFileName; // 428
		char szWhiteListDir; // 429
		char szWhiteListPath; // 432
		{
			int nIndex; // 439
			CUtlVectorBase<char::Count(); // 439
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 441
			CUtlMemory<char::operator[](
					int i);  // 588
			CUtlVectorBase<char::operator[](
					int i);  // 441
			strstr(char* __haystack,
				const char* __needle);  // 255
			V_strstr(char* s1,
				const char* search);  // 441
		}
		CUtlString::CUtlString(
				const char* pString);  // 428
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 430
		V_ExtractFilePath<long unsigned int>(const char* path,
							char* dest,
							long unsigned int destSize);  // 430
		CUtlString::Get(); // 433
		V_FixupPathName<long unsigned int>(char* pOut,
							long unsigned int nOutLen,
							const char* pPath,
							bool bLowercaseName);  // 434
		CUtlString::operator=(
				const char* src);  // 438
		CUtlString::~CUtlString(); // 448
	}
	CUtlString::CUtlString(); // 345
	CUtlString::operator=(
			const char* src);  // 350
	CUtlString::CUtlString(
			const char* pString);  // 366
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 11
	CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base(); // 71
	CUtlStringList::CUtlStringList(); // 367
	CUtlString::Get(); // 370
	CUtlString::CUtlString(
			const char* pString);  // 374
	CUtlString::IsEmpty(); // 375
	CUtlString::CUtlString(
			const char* pString);  // 385
	CUtlString::CUtlString(
			const char* pString);  // 386
	CUtlString::CUtlString(); // 424
	CUtlVectorBase<char::Count(); // 450
	CUtlString::~CUtlString(); // 455
	CUtlString::~CUtlString(); // 455
	CUtlString::~CUtlString(); // 455
	{
		int i; // 22
		CUtlVectorBase<char::Count(); // 22
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 24
	}
	CUtlVectorBase<char::RemoveAll(); // 26
	CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
	CUtlMemory<char::IsExternallyAllocated(); // 905
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 18
	CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
	CUtlStringList::~CUtlStringList(); // 455
	CUtlString::~CUtlString(); // 455
	CUtlString::~CUtlString(); // 455
	CUtlString::~CUtlString(); // 455
} /* size: 2363, variables: 14, inline expansions: 36 (998 bytes) */

// <00A3DF92> vulkan/renderdevicevulkan.cpp:460
// variables: 84
// function calls: 520
void CRenderDeviceVulkan::InitDevice(int nAdapter, int nFlags, int nDXLevel)
{
	const bool  bRobustness; // 470
	bool bEXTRobutsness2; // 475
	const VulkanPhysicalDeviceInfo_t* pDevInfo; // 477
	CUtlStringList requiredDeviceExtensions; // 496
	CUtlStringList optionalDeviceExtensions; // 516
	bool bAllowGraphicsPipelineLibrary; // 600
	bool bRequestedGraphicsPipelineLibrary; // 607
	VkPhysicalDeviceFaultFeaturesEXT deviceFaultFeatures; // 645
	VkPhysicalDeviceMemoryPriorityFeaturesEXT deviceMemoryPriorityFeatures; // 660
	const bool  bGpuDiagnostics; // 699
	bool bDescriptorIndexing; // 741
	bool bUseEXTMemoryBudget; // 759
	uint32_t nExtensionCount; // 812
	VkResult nResult; // 813
	const char ** ppDeviceExtensionNames; // 822
	uint32_t nEnabledDeviceExtensionCount; // 823
	VkExtensionProperties* pDeviceExtProperties; // 825
	CUtlVector<char const*, CUtlMemory<char const*, int> > activeLayerNames; // 908
	const char* pStandardValidationName; // 909
	uint32_t nQueueCount; // 935
	VkQueueFamilyProperties* pQueueFamilyProperties; // 937
	bool bDisableAsyncCompute; // 947
	bool bFoundGraphicsQueue; // 948
	bool bFoundComputeQueue; // 949
	uint32_t nGraphicsQueueFamilyIndex; // 950
	uint32_t nComputeQueueFamilyIndex; // 951
	float flQueuePriorities; // 1005
	uint32_t nQueueCreateInfoCount; // 1006
	VkDeviceQueueCreateInfo deviceQueueCreateInfos; // 1007
	VkDeviceCreateInfo deviceCreateInfo; // 1035
	VkBaseInStructure* pDeviceCreateInfo; // 1036
	VkDeviceMemoryOverallocationCreateInfoAMD deviceMemoryOverallocationCreateInfoAMD; // 1060
	VkPhysicalDeviceVulkan12Features physicalDeviceVulkan12Features; // 1069
	VkPhysicalDeviceRayQueryFeaturesKHR rayQueryFeatures; // 1100
	VkPhysicalDeviceAccelerationStructureFeaturesKHR deviceAccelerationFeatures; // 1101
	VkPhysicalDeviceRayTracingPipelineFeaturesKHR deviceRayTracingPipelineFeatures; // 1102
	VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT pipelineCreationCacheControlFeatures; // 1122
	VkPhysicalDeviceSubgroupSizeControlFeaturesEXT subgroupSizeControlFeatures; // 1131
	VkPhysicalDeviceFeatures enabledFeatures; // 1159
	VkPhysicalDeviceExtendedDynamicStateFeaturesEXT extendedDynamicStateFeatures; // 1171
	VkPhysicalDeviceExtendedDynamicState2FeaturesEXT extendedDynamicState2Features; // 1180
	const char   __FUNCTION__; // 28624
	VkPhysicalDeviceExtendedDynamicState3FeaturesEXT extendedDynamicState3Features; // 1200
	VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT graphicsPipelineLibraryFeatures; // 1220
	VkPhysicalDeviceDynamicRenderingFeaturesKHR dynamicRenderingFeatures; // 1238
	VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT pageableDeviceLocalMemoryFeatures; // 1247
	VkPhysicalDeviceShaderClockFeaturesKHR shaderClockFeatures; // 1256
	VkPhysicalDeviceRobustness2FeaturesEXT robustness2Features; // 1276
	VkPhysicalDevicePipelineRobustnessFeaturesEXT pipelineRobustnessFeatures; // 1289
	VkDeviceDiagnosticsConfigCreateInfoNV deviceDiagnosticsConfigCreateInfo; // 1307
	bool bEnableValidation; // 1419
	const bool  bReflex; // 1420
	RenderAdapterInfo_t gpu; // 1434
	const RenderAdapterInfo_t& info; // 1479
	ImageFormat preferredDepthStencilFormat; // 1519
	{
		CUtlStringList vrDeviceExtensions; // 501
		{
			int i; // 504
			CUtlVectorBase<char::Count(); // 504
			CUtlMemory<char::operator[](
					int i);  // 588
			CUtlVectorBase<char::operator[](
					int i);  // 507
			V_strcmp(const char* s1,
				const char* s2);  // 507
			V_strlen(const char* str); // 46
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 48
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 1201
			CopyConstruct<char*>(char** pMemory,
						char* const& src);  // 1201
			CUtlMemory<char::Grow(
				int num);  // 806
			CUtlVectorBase<char::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<char::AddToTail(
					char* const& src);  // 49
			CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
					const char* pString);  // 510
		}
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 11
		CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base(); // 71
		CUtlStringList::CUtlStringList(); // 501
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 18
		{
			int i; // 22
			CUtlVectorBase<char::Count(); // 22
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 24
		}
		CUtlVectorBase<char::RemoveAll(); // 26
		CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
		CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
		CUtlStringList::~CUtlStringList(); // 512
	}
	{
		VkPhysicalDeviceFeatures2KHR physicalDeviceFeatures2; // 649
	}
	{
		VkPhysicalDeviceFeatures2KHR physicalDeviceFeatures2; // 664
	}
	{
		int nIndex; // 839
		{
			const char* pExtName; // 841
		}
	}
	{
		int nIndex; // 855
		{
			const char* pExtName; // 857
		}
	}
	{
		uint32_t nValidationExtensionCount; // 912
		VkExtensionProperties* pValidationExtensionProperties; // 915
		CUtlMemory<char const::Grow(
			int num);  // 806
		CUtlVectorBase<char const::GrowMemory(
				int num);  // 1198
		CopyConstruct<char const*>(const char ** pMemory,
						const char* const& src);  // 1201
		CUtlVectorBase<char const::AddToTail(
				const char* const& src);  // 922
	}
	{
		uint32_t nQueueFamilyIndex; // 952
	}
	{
		uint32_t nExt; // 1049
	}
	{
		VkPhysicalDeviceFeatures2KHR physicalDeviceFeatures2; // 1136
	}
	{
		VkPhysicalDeviceFeatures2KHR physicalDeviceFeatures2; // 1186
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1184
		}
		CRenderDeviceMgrVulkan::KHRGetPhysicalDeviceProperties2Enabled(); // 1184
	}
	{
		VkPhysicalDeviceFeatures2KHR physicalDeviceFeatures2; // 1206
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1204
		}
		CRenderDeviceMgrVulkan::KHRGetPhysicalDeviceProperties2Enabled(); // 1204
	}
	{
		VkPhysicalDeviceFeatures2 physicalDeviceFeatures2; // 1260
	}
	{
		VkPhysicalDeviceFeatures2 physicalDeviceFeatures2; // 1280
	}
	{
		VkPhysicalDeviceFeatures2 physicalDeviceFeatures2; // 1293
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1329
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1352
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1365
	}
	{
		int nMajor; // 1463
		int nMinor; // 1464
		int nPatch; // 1465
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 80
		CFmtStrN<256>::Get(); // 1470
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 1470
	}
	CUtlMemory<VulkanPhysicalDeviceInfo_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<VulkanPhysicalDeviceInfo_t, CUtlMemory<VulkanPhysicalDeviceInfo_t, int> >::operator[](
			int i);  // 80
	CRenderDeviceMgrVulkan::GetVulkanPhysicalDeviceInfo(
					int nAdapter);  // 477
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 11
	CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base(); // 71
	CUtlStringList::CUtlStringList(); // 496
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CUtlMemory<char::NumAllocated(); // 1196
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 514
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 11
	CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base(); // 71
	CUtlStringList::CUtlStringList(); // 516
	CRenderDeviceMgrVulkan::KHRGetPhysicalDeviceProperties2Enabled(); // 647
	CRenderDeviceMgrVulkan::KHRGetPhysicalDeviceProperties2Enabled(); // 662
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 682
	CRenderDeviceMgrVulkan::KHRGetPhysicalDeviceProperties2Enabled(); // 759
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 780
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 789
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 826
	{
		int i; // 22
	}
	CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 18
	CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
	CUtlStringList::~CUtlStringList(); // 1536
	{
		int i; // 22
	}
	CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 18
	CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
	CUtlStringList::~CUtlStringList(); // 1536
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 809
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 745
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 746
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 747
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 748
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 749
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 750
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 751
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 752
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 735
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 784
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 777
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 730
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 725
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 719
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 588
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 641
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 625
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 626
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 627
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 637
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 633
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 756
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 611
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 612
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 613
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 614
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 615
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 616
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 617
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 618
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 694
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
			const char* pString);  // 551
	CUtlMemory<char const::ValidateGrowSize(); // 475
	CUtlMemory<char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char const::ResetDbgInfo(); // 530
	CUtlVectorBase<char const::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char const::CUtlVector(); // 908
	CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 910
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1037
	CUtlMemory<char const::Purge(); // 903
	CUtlMemory<char const::Purge(); // 1799
	CUtlVectorBase<char const::Purge(); // 560
	ValidateAlignment<char const*>(void); // 508
	CUtlMemory<char const::Purge(); // 510
	CUtlMemory<char const::~CUtlMemory(); // 562
	CUtlVectorBase<char const::~CUtlVectorBase(); // 410
	CUtlVector<char const::~CUtlVector(); // 1536
	CRenderDeviceMgrVulkan::GetEnabledLayerCount(); // 1153
	CRenderDeviceMgrVulkan::GetEnabledLayerNames(); // 1154
	CRenderDeviceVulkan::KHRMaintenance2Enabled(); // 1399
	CRenderDeviceVulkan::GOOGLEDisplayTimingEnabled(); // 1429
	CRenderDeviceVulkan::ColorFormat(); // 1519
	CRenderDeviceVulkan::GetInitializedTextureManager(); // 1527
	CRenderDeviceVulkan::SetInitializedTextureManager(
					bool bInitialized);  // 1531
} /* size: 0, variables: 55, inline expansions: 470 (73706 bytes) */

// <00A3DF44> vulkan/renderdevicevulkan.cpp:1539
void CRenderDeviceVulkan::PreShutdown()
{
} /* size: 16 */

// <00A3B2A1> vulkan/renderdevicevulkan.cpp:1546
// variables: 19
// function calls: 176
void CRenderDeviceVulkan::ShutdownDevice()
{
	{
		int i; // 1596
		Count(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertex this); // 1596
		CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this,
				int i);  // 1598
		CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this,
				int i);  // 1601
		CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this,
				int i);  // 1603
		CUtlMemory<CVertexBufferVulkan::Base(); // 112
		CUtlVectorBase<CVertexBufferVulkan::Base(); // 1603
		CUtlVectorBase<CVertexBufferVulkan::Count(); // 1603
		CUtlMemory<CVertexBufferVulkan::NumAllocated(); // 782
		CUtlMemory<CVertexBufferVulkan::Base(); // 112
		CUtlVectorBase<CVertexBufferVulkan::Base(); // 368
		CUtlVectorBase<CVertexBufferVulkan::ResetDbgInfo(); // 824
		CUtlVectorBase<CVertexBufferVulkan::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CVertexBufferVulkan::GrowVector(
				int num);  // 1484
		{
			int i; // 1500
			CUtlMemory<CVertexBufferVulkan::operator[](
					int i);  // 602
			CUtlVectorBase<CVertexBufferVulkan::Element(
				int i);  // 1502
			CopyConstruct<CVertexBufferVulkan*>(CVertexBufferVulkan** pMemory,
								CVertexBufferVulkan* const& src);  // 1502
		}
		CUtlVectorBase<CVertexBufferVulkan::InsertMultipleBefore(
					int elem,
					int num,
					CVertexBufferVulkan* const* pToInsert);  // 1476
		CUtlVectorBase<CVertexBufferVulkan::InsertMultipleBefore(
					int elem,
					int num,
					CVertexBufferVulkan* const* pToInsert);  // 1303
		CUtlVectorBase<CVertexBufferVulkan::AddMultipleToTail(
					int num,
					CVertexBufferVulkan* const* pToCopy);  // 1603
	}
	{
		int i; // 1611
		Count(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBu this); // 1611
		CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this,
				int i);  // 1613
		CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this,
				int i);  // 1616
		CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this,
				int i);  // 1618
		CUtlMemory<CIndexBufferVulkan::Base(); // 112
		CUtlVectorBase<CIndexBufferVulkan::Base(); // 1618
		CUtlVectorBase<CIndexBufferVulkan::Count(); // 1618
		CUtlMemory<CIndexBufferVulkan::NumAllocated(); // 782
		CUtlMemory<CIndexBufferVulkan::Base(); // 112
		CUtlVectorBase<CIndexBufferVulkan::Base(); // 368
		CUtlVectorBase<CIndexBufferVulkan::ResetDbgInfo(); // 824
		CUtlVectorBase<CIndexBufferVulkan::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CIndexBufferVulkan::GrowVector(
				int num);  // 1484
		{
			int i; // 1500
			CUtlMemory<CIndexBufferVulkan::operator[](
					int i);  // 602
			CUtlVectorBase<CIndexBufferVulkan::Element(
				int i);  // 1502
			CopyConstruct<CIndexBufferVulkan*>(CIndexBufferVulkan** pMemory,
								CIndexBufferVulkan* const& src);  // 1502
		}
		CUtlVectorBase<CIndexBufferVulkan::InsertMultipleBefore(
					int elem,
					int num,
					CIndexBufferVulkan* const* pToInsert);  // 1476
		CUtlVectorBase<CIndexBufferVulkan::InsertMultipleBefore(
					int elem,
					int num,
					CIndexBufferVulkan* const* pToInsert);  // 1303
		CUtlVectorBase<CIndexBufferVulkan::AddMultipleToTail(
					int num,
					CIndexBufferVulkan* const* pToCopy);  // 1618
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 890
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 895
	{
	}
	{
	}
	{
	}
	CTSQueue<DynamicVertexBufferHandle_t__::Purge(); // 1559
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 890
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 895
	{
	}
	{
	}
	{
	}
	CTSQueue<DynamicIndexBufferHandle_t__::Purge(); // 1560
	CInterlockedIntT<int, 4>::operator int(); // 594
	CRenderDeviceBase::IsAsyncPresentEnabled(); // 161
	{
	}
	CUtlVectorBase<CRenderResource::Count(); // 166
	{
		int i; // 167
		{
			CRenderResource* pRenderResource; // 169
			CUtlMemory<CRenderResource::operator[](
					int i);  // 588
			CUtlVectorBase<CRenderResource::operator[](
					int i);  // 169
			CRenderResource::IsInUse(
				uint nCompletedFrameNumber);  // 170
			CUtlMemory<CRenderResource::operator[](
					int i);  // 602
			CUtlVectorBase<CRenderResource::Element(
				int i);  // 1575
			{
				const bool  bNotLast; // 1578
				CUtlMemory<CRenderResource::operator[](
						int i);  // 602
				CUtlVectorBase<CRenderResource::Element(
					int i);  // 1584
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 1584
			}
			Destruct<CRenderResource*>(CRenderResource** pMemory); // 1575
			CUtlVectorBase<CRenderResource::FastRemove(
					int elem);  // 174
		}
	}
	CRenderResourceMgr::PerformQueuedDeletions(
				uint nFinishedFrameNumber);  // 1579
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	RemoveAll(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this); // 352
	Purge(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this); // 1591
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	RemoveAll(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this); // 352
	Purge(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this); // 1593
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 1595
	{
		int i; // 1721
		CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this,
			int i);  // 1723
		CUtlVectorBase<CVertexBufferVulkan::RemoveAll(); // 1798
		CUtlMemory<CVertexBufferVulkan::IsExternallyAllocated(); // 905
		CUtlMemory<CVertexBufferVulkan::Purge(); // 903
		CUtlMemory<CVertexBufferVulkan::Purge(); // 1799
		CUtlVectorBase<CVertexBufferVulkan::Purge(); // 560
		ValidateAlignment<CVertexBufferVulkan*>(void); // 508
		CUtlMemory<CVertexBufferVulkan::Purge(); // 510
		CUtlMemory<CVertexBufferVulkan::~CUtlMemory(); // 562
		CUtlVectorBase<CVertexBufferVulkan::~CUtlVectorBase(); // 410
		CUtlVector<CVertexBufferVulkan::~CUtlVector(); // 892
		FencedVertexBufferRelease_t::~FencedVertexBufferRelease_t(); // 1526
		Destruct<CRenderDeviceVulkan::FencedVertexBufferRelease_t>(FencedVertexBufferRelease_t* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this); // 1798
	CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::Purge(); // 903
	CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::Purge(); // 1799
	ResetDbgInfo(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this); // 1800
	Purge(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this); // 1607
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1608
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 1610
	{
		int i; // 1721
		CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this,
			int i);  // 1723
		CUtlVectorBase<CIndexBufferVulkan::RemoveAll(); // 1798
		CUtlMemory<CIndexBufferVulkan::IsExternallyAllocated(); // 905
		CUtlMemory<CIndexBufferVulkan::Purge(); // 903
		CUtlMemory<CIndexBufferVulkan::Purge(); // 1799
		CUtlVectorBase<CIndexBufferVulkan::Purge(); // 560
		ValidateAlignment<CIndexBufferVulkan*>(void); // 508
		CUtlMemory<CIndexBufferVulkan::Purge(); // 510
		CUtlMemory<CIndexBufferVulkan::~CUtlMemory(); // 562
		CUtlVectorBase<CIndexBufferVulkan::~CUtlVectorBase(); // 410
		CUtlVector<CIndexBufferVulkan::~CUtlVector(); // 901
		FencedIndexBufferRelease_t::~FencedIndexBufferRelease_t(); // 1526
		Destruct<CRenderDeviceVulkan::FencedIndexBufferRelease_t>(FencedIndexBufferRelease_t* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this); // 1798
	CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::Purge(); // 903
	CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::Purge(); // 1799
	ResetDbgInfo(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this); // 1800
	Purge(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this); // 1620
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1621
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::Purge(); // 643
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::InvalidIterator(); // 648
	ResetDbgInfo(const CUtlLinkedList<CVertexShaderVulkan, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CVertex this); // 650
	Purge(const CUtlLinkedList<CVertexShaderVulkan, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CVertex this); // 1630
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::Purge(); // 643
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::InvalidIterator(); // 648
	ResetDbgInfo(const CUtlLinkedList<CShaderVulkanBase, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CShaderVu this); // 650
	Purge(const CUtlLinkedList<CShaderVulkanBase, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CShaderVu this); // 1631
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::Purge(); // 643
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::InvalidIterator(); // 648
	ResetDbgInfo(const CUtlLinkedList<RasterizerStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<Ras this); // 650
	Purge(const CUtlLinkedList<RasterizerStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<Ras this); // 1647
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::Purge(); // 643
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::InvalidIterator(); // 648
	ResetDbgInfo(const CUtlLinkedList<DepthStencilStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<D this); // 650
	Purge(const CUtlLinkedList<DepthStencilStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<D this); // 1648
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::Purge(); // 643
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::InvalidIterator(); // 648
	ResetDbgInfo(const CUtlLinkedList<BlendStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<BlendSta this); // 650
	Purge(const CUtlLinkedList<BlendStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<BlendSta this); // 1649
	IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_ this); // 905
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, uns this); // 903
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, uns this); // 1287
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_ this); // 1288
	Purge(const CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefL this); // 347
	Purge(const CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefLess<CWeakHa this); // 1651
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__::Purge(); // 1287
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<RenderResourceHandle_t__::Purge(); // 347
	CUtlMap<RenderResourceHandle_t__::Purge(); // 1652
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__::Purge(); // 1287
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<RenderDescriptorSetHandle_t__::Purge(); // 347
	CUtlMap<RenderDescriptorSetHandle_t__::Purge(); // 1653
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__::Purge(); // 1287
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<RenderRayTracePipelineHandle_t__::Purge(); // 347
	CUtlMap<RenderRayTracePipelineHandle_t__::Purge(); // 1654
} /* size: 0, inline expansions: 93 (4681 bytes) */

// <00A3AD39> vulkan/renderdevicevulkan.cpp:1684
// variables: 3
// function calls: 16
void CRenderDeviceVulkan::OnBeginningOfClientShutdown()
{
	const char   __FUNCTION__; // 29073
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1686
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1694; // 1694
		CRenderDeviceVulkan::RenderThread(); // 1694
		CRenderThreadVulkan::GetQueueMutex(); // 1694
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 1694
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 1695
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1696
	}
} /* size: 0, variables: 1 */

// <00A5E39F> vulkan/renderdevicevulkan.cpp:1705
void CRenderDeviceVulkan::GetRenderDeviceAPI()
{
} /* size: 10 */

// <00A3A892> vulkan/renderdevicevulkan.cpp:1713
// variables: 2
// function calls: 15
void CRenderDeviceVulkan::CreateDefaultSamplerStates()
{
	CSamplerStateDescBase::CSamplerStateDescBase(); // 927
	{
		float32 flZeros; // 936
		float32 flOnes; // 937
		CSamplerStateDescBase::SetFilterMode(
				RsFilter_t filter);  // 928
		CSamplerStateDescBase::SetTextureAddressModeU(
					RsTextureAddressMode_t addressMode);  // 929
		CSamplerStateDescBase::SetTextureAddressModeV(
					RsTextureAddressMode_t addressMode);  // 930
		CSamplerStateDescBase::SetTextureAddressModeW(
					RsTextureAddressMode_t addressMode);  // 931
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 800
		CSamplerStateDescBase::SetMaxAnisotropy(
				uint32 nMaxAniso);  // 933
		CSamplerStateDescBase::SetMipLodBias(
				float32 flBias);  // 932
		CSamplerStateDescBase::SetBorderColor(
				const float32* pBorderColor);  // 938
		CSamplerStateDescBase::SetComparisonFunc(
					RsComparison_t compFunc);  // 934
		CSamplerStateDescBase::SetMinMaxLod(
				uint32 nMinLod,
				uint32 nMaxLod);  // 935
		CSamplerStateDescBase::SetGlobalMipBiasOverrideAllowed(
						bool bAllow);  // 939
	}
	CSamplerStateDesc::CSamplerStateDesc(
				RsFilter_t filter,
				RsTextureAddressMode_t addressU,
				RsTextureAddressMode_t addressV,
				RsTextureAddressMode_t addressW,
				float32 flMipLodBias,
				uint32 nMaxAniso,
				RsComparison_t comparisonFunc,
				uint32 nMinLod,
				uint32 nMaxLod,
				bool bWhiteBorder,
				bool bAllowGlobalMipBiasOverride);  // 970
	DefaultSamplerStateDesc(void); // 959
	DefaultSamplerStateDesc(void); // 1741
} /* size: 190, inline expansions: 4 (312 bytes) */

// <00A67E3A> vulkan/renderdevicevulkan.cpp:1744
void CRenderDeviceVulkan::OnAnisotropyChanged()
{
} /* size: 0 */

// <00A394D9> vulkan/renderdevicevulkan.cpp:1751
// variables: 14
// function calls: 70
void CRenderDeviceVulkan::RebuildUserConfigurableSamplers()
{
	{
		CUtlVector<long long int, CUtlMemory<long long int, int> > handles; // 1772
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1765; // 1765
			CRenderDeviceVulkan::RenderThread(); // 1765
			CRenderThreadVulkan::GetQueueMutex(); // 1765
			ThreadInterlockedAssignIf64(volatile int64* pDest,
							int64 value,
							int64 comparand);  // 800
			CThreadFastMutex::TryLockInline(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 837
			ThreadPause(void); // 839
			CThreadFastMutex::Lock(
				const char* pFileName,
				int nLineNumber,
				unsigned int nSpinSleepTime);  // 943
			Lock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
					const CThreadFastMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 1765
			VulkanQueue(void); // 1766
			CUtlString::CUtlString(); // 149
			CUtlString::Get(); // 151
			CUtlString::~CUtlString(); // 153
			_DOVK(VkResult result,
				const char* pCommand);  // 1766
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1767
		}
		{
			UtlTSHashHandle_t hSampler; // 1776
			CUtlVector<long long int, CUtlMemory<long long int, int> >& __for_range; // 9998
			iterator __for_begin; // 7853
			iterator __for_end; // 7853
			{
				CSamplerStateBinding& sampler; // 1778
				const CSamplerStateDesc* pDesc; // 1779
				const bool  bImmutable; // 1780
				Element(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this,
					UtlTSHashHandle_t hHash);  // 1778
				GetPointerToKey(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>,  this,
						UtlTSHashHandle_t hHash);  // 1779
				{
				}
				CVulkanObject<VkSampler_T::DestroyObject()>* this); // 117
				CVulkanSamplerObject::ReplaceSampler(
						VkSampler pNewSampler);  // 1782
			}
			CUtlMemory<long long int, int>::Base(); // 112
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Base(); // 102
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::begin(); // 1776
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Count(); // 104
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::end(); // 1776
		}
		{
			long long int nIndex; // 1791
			{
				CDescriptorSetVulkan* pDescriptorSet; // 1793
				CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::operator[](
						intp i);  // 494
				CUtlLinkedList<CDescriptorSetVulkan::operator[](
						long long int i);  // 1793
				CDescriptorSetVulkan::IsFullyRewrittenEachFrame(); // 1794
			}
			CUtlLinkedList<CDescriptorSetVulkan::Head(); // 1791
			CUtlLinkedList<CDescriptorSetVulkan::Next(
				long long int i);  // 1791
		}
		CTextureManagerBase::GetTextureManagerRWLock(); // 1756
		CTextureManagerBase::GetTextureManagerRWLock(); // 1763
		CInterlockedIntT<int, 4>::GetRaw(); // 3180
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 3189
		CThreadRWLock_FastRead::LockForWrite(
				const char* pFileName,
				int nLineNumber);  // 1763
		CUtlMemory<long long int, int>::ValidateGrowSize(); // 475
		CUtlMemory<long long int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<long long int, CUtlMemory<long long int, int> >::CUtlVector(); // 1772
		CInterlockedIntT<int, 4>::operator int(); // 68
		CUtlMemoryPoolBase::Count(); // 365
		Count(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, this); // 1773
		CUtlMemory<long long int, int>::Base(); // 112
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Base(); // 368
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::SetCount(
			int count);  // 1773
		CTextureManagerVulkan::MarkAllSamplersDirty(); // 1787
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::RemoveAll(); // 1798
		CUtlMemory<long long int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<long long int, int>::Purge(); // 903
		CUtlMemory<long long int, int>::Purge(); // 1799
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Purge(); // 560
		ValidateAlignment<long long int>(void); // 508
		CUtlMemory<long long int, int>::Purge(); // 510
		CUtlMemory<long long int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<long long int, CUtlMemory<long long int, int> >::~CUtlVector(); // 1799
		{
			int i; // 379
			{
				const HashBucket_t& bucket; // 381
				CThreadSpinRWLock::LockForRead(
						const char* pFileName,
						int nLineNumber);  // 382
				{
					HashFixedData_t* pElement; // 383
					CThreadSpinRWLock::UnlockRead(
							const char* pFileName,
							int nLineNumber);  // 391
				}
				CThreadSpinRWLock::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 395
			}
		}
		GetElements(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>,  this,
				int nFirstElement,
				int nCount,
				UtlTSHashHandle_t* pHandles);  // 1774
	}
} /* size: 0 */

// <00A38F8A> vulkan/renderdevicevulkan.cpp:1918
// variable: 1
// function calls: 6
void CRenderDeviceVulkan::CreateDefaultShaders()
{
	const char   __FUNCTION__; // 28894
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1925
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1933
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1941
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1949
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1957
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1965
} /* size: 979, variables: 1, inline expansions: 6 (174 bytes) */

// <00A38F2B> vulkan/renderdevicevulkan.cpp:1970
// variable: 1
void CRenderDeviceVulkan::DestroyDefaultShaders()
{
	{
		int i; // 1972
	}
} /* size: 77 */

// <00A38D78> vulkan/renderdevicevulkan.cpp:1997
// function calls: 2
void CRenderDeviceVulkan::CreateDefaultInputLayouts()
{
	CRenderDeviceVulkan::CreateInputLayout(
				const char* pLayoutName,
				int nFieldCount,
				const RenderInputLayoutField_t* pFieldDescs);  // 1999
	CRenderDeviceVulkan::CreateInputLayout(
				const char* pLayoutName,
				int nFieldCount,
				const RenderInputLayoutField_t* pFieldDescs);  // 2000
} /* size: 196, inline expansions: 2 (62 bytes) */

// <00A38C87> vulkan/renderdevicevulkan.cpp:2003
// variable: 1
// function calls: 2
void CRenderDeviceVulkan::DestroyDefaultInputLayouts()
{
	{
		int i; // 2005
		CInputLayoutDict<CInputLayoutVulkan>::DestroyInputLayout(
					RenderInputLayout_t hInputLayout);  // 4975
		CRenderDeviceVulkan::DestroyInputLayout(
					RenderInputLayout_t hInputLayout);  // 2007
	}
} /* size: 106 */

// <00A387FE> vulkan/renderdevicevulkan.cpp:2015
// variable: 1
// function calls: 12
void CRenderDeviceVulkan::CreateDefaultDepthStencilStates()
{
	RsDepthStencilStateDesc_t desc; // 2017
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
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 435
	RsDepthStencilStateDesc_t::RsDepthStencilStateDesc_t(); // 2017
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 2018
	RsStencilStateDesc_t::SetStencilEnabled(
				bool bEnable);  // 2024
} /* size: 259, variables: 1, inline expansions: 12 (277 bytes) */

// <00A387E5> vulkan/renderdevicevulkan.cpp:2040
void CRenderDeviceVulkan::DestroyDefaultDepthStencilStates()
{
} /* size: 0 */

// <00A38371> vulkan/renderdevicevulkan.cpp:2048
// variables: 8
// function calls: 7
void CRenderDeviceVulkan::CreateDefaultBuffers()
{
	BufferDesc_t desc; // 2051
	const char   __FUNCTION__; // 28894
	CRenderContextVulkanPtr pRenderContextVulkan; // 2059
	LockDesc_t lockDesc; // 2061
	uint32_t nDefaultCBSize; // 2075
	uint8* pZeroData; // 2076
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2057
	}
	{
		Vector4D* pData; // 2064
	}
	CRenderContextVulkanPtr::operator->(); // 2062
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 2077
	CRenderDeviceVulkan::CreateDescriptorSet(
				int32 nNumDescriptors,
				const RenderDescriptorDesc_t* pDescriptorDescs,
				int32 nNumBindings,
				const RenderDescriptorBinding_t* pDescriptorBindings,
				bool bFullyRewriteEachFrame);  // 2081
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 481
	CRenderContextVulkanPtr::~CRenderContextVulkanPtr(); // 2082
} /* size: 0, variables: 6, inline expansions: 7 (155 bytes) */

// <00A38304> vulkan/renderdevicevulkan.cpp:2084
void CRenderDeviceVulkan::DestroyDefaultBuffers()
{
} /* size: 124 */

// <00A37EE5> vulkan/renderdevicevulkan.cpp:2106
// variables: 7
// function calls: 8
void CRenderDeviceVulkan::GetCmdPool(PerThreadDataVulkan_t* pPerThread, VulkanCommandBufferType_t nCommandBufferType)
{
	uint32_t nCommandPool; // 2108
	uint32_t nNumCommandPools; // 2114
	const char   __FUNCTION__; // 28624
	VkCommandPool cmdPool; // 2126
	VkCommandPoolCreateInfo cmdPoolCreateInfo; // 2127
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2117
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2122
	}
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 2132
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 2139
} /* size: 0, variables: 5, inline expansions: 8 (362 bytes) */

// <00A37BB0> vulkan/renderdevicevulkan.cpp:2147
// variables: 3
// function calls: 8
void CRenderDeviceVulkan::CreateCmdBuffer(PerThreadDataVulkan_t* pPerThread, VulkanCommandBufferType_t nCommandBufferType)
{
	VkCommandBuffer pCmdBuffer; // 2149
	VkCommandBufferAllocateInfo cmdBufferCreateinfo; // 2151
	{
		int curLive; // 2163
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 2163
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 2152
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 2158
} /* size: 323, variables: 2, inline expansions: 6 (239 bytes) */

// <00A37A3D> vulkan/renderdevicevulkan.cpp:2172
// variables: 3
// function calls: 2
void CRenderDeviceVulkan::DestroyCmdBuffer(VkCommandBuffer* pBuf, PerThreadDataVulkan_t* pPerThread, VulkanCommandBufferType_t nCommandBufferType)
{
	const char   __FUNCTION__; // 28786
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2174
	}
	{
		int curLive; // 2177
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 2177
	}
} /* size: 0, variables: 1 */

// <00A375BF> vulkan/renderdevicevulkan.cpp:2189
// variables: 5
// function calls: 12
void CRenderDeviceVulkan::TrimCommandPool(PerThreadDataVulkan_t* pPerThread)
{
	const char   __FUNCTION__; // 28759
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2195; // 2195
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2197
		}
		{
			uint32_t nNumCommandPools; // 2200
			{
				uint32_t nCommandBufferType; // 2201
			}
		}
		CRenderDeviceVulkan::RenderThread(); // 2195
		CRenderThreadVulkan::GetQueueMutex(); // 2195
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 2195
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2206
	}
} /* size: 0, variables: 1 */

// <00A36DDC> vulkan/renderdevicevulkan.cpp:2213
// variables: 9
// function calls: 22
void CRenderDeviceVulkan::TrimAllCommandPools()
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2217; // 2217
	const char   __FUNCTION__; // 28867
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2220; // 2220
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2219
	}
	{
		int _idx_pPerThread; // 2221
		{
			PerThreadDataVulkan_t* pPerThread; // 2221
			{
				uint32_t nNumCommandPools; // 2223
				{
					uint32_t nCommandBufferType; // 2224
					{
						VkCommandPool commandPool; // 2226
					}
				}
			}
		}
	}
	CRenderDeviceVulkan::RenderThread(); // 2217
	CRenderThreadVulkan::GetQueueMutex(); // 2217
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 2217
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 2220
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2233
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2233
} /* size: 0, variables: 3, inline expansions: 22 (858 bytes) */

// <00A368DD> vulkan/renderdevicevulkan.cpp:2238
// function calls: 22
void CSwapChainVulkan::CSwapChainVulkan()
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
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 327
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 327
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 327
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 332
	CSwapChainBase::CSwapChainBase(); // 2254
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
	RenderDeviceInfo_t::RenderDeviceInfo_t(); // 2254
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 2257
} /* size: 321, inline expansions: 22 (361 bytes) */

// <00A368C4> vulkan/renderdevicevulkan.cpp:2238
void CSwapChainVulkan::CSwapChainVulkan()
{
} /* size: 0 */

// <00A3661A> vulkan/renderdevicevulkan.cpp:2260
// function calls: 8
void CSwapChainVulkan::~CSwapChainVulkan()
{
	CRenderDeviceVulkan::IsShuttingDown(); // 2266
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 2270
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 337
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 337
	CSwapChainBase::~CSwapChainBase(); // 2278
} /* size: 306, inline expansions: 8 (256 bytes) */

// <00A365B3> vulkan/renderdevicevulkan.cpp:2260
void CSwapChainVulkan::~CSwapChainVulkan()
{
} /* size: 36 */

// <00A3640A> vulkan/renderdevicevulkan.cpp:2284
// variable: 1
// function call: 1
void CSwapChainVulkan::Init(PlatWindow_t hPlatWnd, OsSpecificWindowHandle_t hOsWnd, const RenderDeviceInfo_t& mode, const char* pDebugName, VkDevice pDeviceVulkan, VkPhysicalDevice pPhysicalDeviceVulkan, VkQueue pQueueVulkan)
{
	float flContentsScale; // 2291
	V_strcpy_safe<256>(char& pDest,
				const char* pSrc);  // 2300
} /* size: 319, variables: 1, inline expansions: 1 (13 bytes) */

// <00A32C58> vulkan/renderdevicevulkan.cpp:2308
// variables: 51
// function calls: 184
void CSwapChainVulkan::CreateSwapChain(VkDevice pDeviceVulkan, VkPhysicalDevice pPhysicalDeviceVulkan)
{
	VkBool32 bSupportsPresent; // 2311
	VkResult nResult; // 2312
	PlatWindow_t hPlatWnd; // 2316
	PlatWindow_t hTemporaryWrappedSDLWindow; // 2317
	bool bCreatedTemporaryWrappedSDLWindow; // 2318
	const CScopeGuardLambdaImpl<CSwapChainVulkan::CreateSwapChain(VkDevice, VkPhysicalDevice)::<lambda()> >& generated_id_2321; // 2321
	bool bNoWindow; // 2328
	bool bFakeSwapChain; // 2329
	const char   __FUNCTION__; // 28759
	uint32_t nNumSupportedSwapChainFormats; // 2361
	VkSurfaceFormatKHR* pSupportedSurfaceFormats; // 2362
	VkFormat selectedSwapChainFormat; // 2414
	VkColorSpaceKHR imageColorSpace; // 2415
	VkFormat nRequestedFormat; // 2416
	VkSurfaceCapabilitiesKHR surfaceCaps; // 2472
	uint32_t nPresentModeCount; // 2473
	VkPresentModeKHR* pPresentModes; // 2474
	VkImageUsageFlags nImageUsageFlags; // 2530
	VkSemaphore pAcquireNextImageSemaphore; // 2809
	CommandSetSwapChainSemaphore_t cmd; // 2815
	CRenderContextVulkanPtr pRenderContextVulkan; // 2817
	{
		bool bCreateSurfaceResult; // 2345
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2337
		}
		CRenderDeviceMgrVulkan::GetInstance(); // 2347
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 2351
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 2340
	}
	{
		uint32_t nQueueFamilyIndex; // 2365
		VulkanQueueFamilyIndex(void); // 2365
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 2397
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 2368
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 2390
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 2374
	}
	{
		bool bFoundMatch; // 2427
		{
			uint32 nFormat; // 2428
		}
		{
			bool bRequestedSRGB; // 2442
			{
				uint32 nFormat; // 2443
			}
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 2465
		}
	}
	{
		VkPresentModeKHR swapChainPresentMode; // 2535
		bool bRotated; // 2579
		bool bForceIntermediateSwapchainImage; // 2580
		VkSurfaceTransformFlagsKHR preTransform; // 2583
		bool bDisableSwapChainSampling; // 2615
		VkSwapchainCreateInfoKHR swapChainCreateInfo; // 2626
		VkBaseInStructure* pSwapChainCreateInfo; // 2627
		VkImageFormatListCreateInfoKHR imageFormatListCreateInfo; // 2658
		VkFormat viewFormats; // 2659
		bool bMSAA; // 2714
		bool bScalingCoopFullscreen; // 2715
		VkImage* pSwapChainImages; // 2734
		{
			uint32_t i; // 2536
			CRenderDeviceVulkan::GOOGLEDisplayTimingEnabled(); // 2544
		}
		{
			int32_t nNumImagesLessThanDesired; // 2570
			Max<int>(const int& val1,
				const int& val2);  // 2572
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2586
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2595
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2654
		}
		{
			CUtlString errString; // 2690
			CUtlString::CUtlString(); // 2690
			CUtlString::Get(); // 99
			CUtlString::String(); // 2692
			CUtlString::~CUtlString(); // 2694
		}
		{
			uint32 nImageIndex; // 2703
		}
		{
			uint32_t nImage; // 2737
		}
		CRenderDeviceVulkan::KHRSwapchainMutableFormatEnabled(); // 2660
		CUtlString::CUtlString(); // 171
		CUtlString::Get(); // 173
		CUtlString::~CUtlString(); // 176
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 167
		_DOVK_RESULT(VkResult result,
				const char* pCommand);  // 158
		_DOVK_RESULT(VkResult result,
				const char* pCommand);  // 2687
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 2697
		CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 2700
		CVulkanImage::SetIsResident(
				bool bResident);  // 2710
		RenderDeviceInfo_t::IsCooperativeFullscreen(); // 2718
		CVulkanImage::SetIsResident(
				bool bResident);  // 2723
		CVulkanImage::SetIsResident(
				bool bResident);  // 2729
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 2735
	}
	{
		uint32 nSem; // 2786
		{
			VkSemaphoreCreateInfo acquireNextImageSemaphoreCreateInfo; // 2788
			CUtlString::CUtlString(); // 149
			CUtlString::Get(); // 151
			CUtlString::~CUtlString(); // 153
			_DOVK(VkResult result,
				const char* pCommand);  // 2792
		}
	}
	CScopeGuardLambdaImpl<CSwapChainVulkan::CreateSwapChain(VkDevice, VkPhysicalDevice)::<lambda()> >::CScopeGuardLambdaImpl(
				class& lambda); // 39
	MakeScopeGuardLambda<CSwapChainVulkan::CreateSwapChain(VkDevice, VkPhysicalDevice)::<lambda()> >(class& lambda); // 2321
	operator()(const class* __closure); // 31
	CScopeGuardLambdaImpl<CSwapChainVulkan::CreateSwapChain(VkDevice, VkPhysicalDevice)::<lambda()> >::~CScopeGuardLambdaImpl()::<lambda()> >* this); // 2821
	CVulkanImage::SetIsResident(
			bool bResident);  // 2772
	CVulkanImage::SetIsResident(
			bool bResident);  // 2776
	CRenderDeviceVulkan::IsHibernating(); // 3034
	CSwapChainVulkan::SwapBuffers(
			VkSemaphore* ppAcquireNextImageSemaphoreOut);  // 2810
	CommandBase_t::CommandBase_t(
			int nOpCode,
			bool bSkipOnLostDevice,
			int nCmdSizeInBytes);  // 117
	CommandHelper_t<CommandSetSwapChainSemaphore_t, 19, true>::CommandHelper_t(); // 152
	CommandSetSwapChainSemaphore_t::CommandSetSwapChainSemaphore_t(); // 2815
	CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
	CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
	operator new(size_t size); // 133
	Alloc(void); // 328
	AllocateChunk(void); // 690
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
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
	CCommandStreamBuilder::EnsureStream(); // 641
	CCommandStreamBuilder::EnsureStream(); // 695
	{
		CommandJump_t cmd; // 705
		CommandBase_t::CommandBase_t(
				int nOpCode,
				bool bSkipOnLostDevice,
				int nCmdSizeInBytes);  // 117
		CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
		CommandJump_t::CommandJump_t(); // 705
		CCommandStreamBuilder::Store<CommandJump_t>(
					CommandJump_t obj);  // 707
	}
	CCommandStreamBuilder::GrowForCapacity(
			int nNumBytes);  // 681
	CCommandStreamBuilder::EnsureCapacity(
			int nNumBytes);  // 530
	CCommandStreamBuilder::WriteCmd<CommandSetSwapChainSemaphore_t>(
						const CommandSetSwapChainSemaphore_t& obj);  // 2818
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 481
	CRenderContextVulkanPtr::~CRenderContextVulkanPtr(); // 2821
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 2487
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 2489
	Min<int>(const int& val1,
		const int& val2);  // 2512
	Min<int>(const int& val1,
		const int& val2);  // 2513
} /* size: 0, variables: 21, inline expansions: 140 (9947 bytes) */

// <00A30F7E> vulkan/renderdevicevulkan.cpp:2824
// variables: 11
// function calls: 113
void CSwapChainVulkan::SetupViews(VkDevice pDeviceVulkan, VkFormat nOverrideSwapChainFormat, VkImageUsageFlags nImageUsageFlags)
{
	VkImageCreateInfo imageCreateDepthStencilInfo; // 2827
	const bool  bSwapchainSampleableDepth; // 2842
	const bool  bSwapchainSampleableStencil; // 2843
	const bool  bDedicatedAllocation; // 2855
	VkResult nResult; // 2856
	CTextureCreationDesc header; // 2873
	const char   __FUNCTION__; // 28624
	{
		VkImageCreateInfo imageCreateInfo; // 2895
		CTextureCreationDesc coopFullscreenImageHeader; // 2929
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2909
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 2896
		ComputeAASettings(RenderMultisampleType_t nType,
					VkSampleCountFlagBits* pSampleCount);  // 2905
		CRenderDeviceVulkan::MemoryManager(); // 2918
		CMemoryManagerVulkan::GetVmaAllocator(); // 1491
		GetVmaAllocator(void); // 2926
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 2926
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 142
		CTextureDesc::CTextureDesc(); // 228
		CTextureDesc::operator=(
				const CTextureDesc& rhs);  // 238
		Vector4D::operator=(
				const Vector4D& vOther);  // 239
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Count(); // 244
		CUtlMemory<TextureCreationExtraData_t, int>::Base(); // 113
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Base(); // 244
		CTextureCreationDesc::operator=(
				const CTextureCreationDesc& rhs);  // 229
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::ResetDbgInfo(); // 530
		CUtlMemory<TextureCreationExtraData_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<TextureCreationExtraData_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVector(); // 228
		Vector4D::Vector4D(); // 228
		CTextureCreationDesc::CTextureCreationDesc(
					const CTextureCreationDesc& rhs);  // 2929
		operator|(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 35
		operator|=(RuntimeTextureSpecificationFlags_t& a,
				RuntimeTextureSpecificationFlags_t b);  // 2930
		CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 2931
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2931
		CRenderDeviceVulkan::MemoryManager(); // 2944
		CMemoryManagerVulkan::GetVmaAllocator(); // 1491
		GetVmaAllocator(void); // 2952
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 2952
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::RemoveAll(); // 1798
		CUtlMemory<TextureCreationExtraData_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 903
		CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 1799
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Purge(); // 560
		ValidateAlignment<TextureCreationExtraData_t>(void); // 508
		CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 510
		CUtlMemory<TextureCreationExtraData_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVector(); // 234
		CTextureCreationDesc::~CTextureCreationDesc(); // 2954
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::RemoveAll(); // 1798
		CUtlMemory<TextureCreationExtraData_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 903
		CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 1799
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Purge(); // 560
		ValidateAlignment<TextureCreationExtraData_t>(void); // 508
		CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 510
		CUtlMemory<TextureCreationExtraData_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVector(); // 234
		CTextureCreationDesc::~CTextureCreationDesc(); // 2954
	}
	{
		uint32 nImageIndex; // 2957
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 2959
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2959
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 2828
	CRenderDeviceVulkan::ColorFormat(); // 2833
	ComputeAASettings(RenderMultisampleType_t nType,
				VkSampleCountFlagBits* pSampleCount);  // 2837
	CRenderDeviceVulkan::MemoryManager(); // 2864
	CMemoryManagerVulkan::GetVmaAllocator(); // 1491
	GetVmaAllocator(void); // 2871
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 2871
	V_memset(void* dest,
		int fill,
		size_t count);  // 142
	CTextureDesc::CTextureDesc(); // 221
	Vector4D::Vector4D(); // 221
	CUtlMemory<TextureCreationExtraData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TextureCreationExtraData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVector(); // 221
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 222
	CTextureCreationDesc::CTextureCreationDesc(); // 2873
	Vector4D::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz,
		vec_t iw);  // 2889
	operator|=(RuntimeTextureSpecificationFlags_t& a,
			RuntimeTextureSpecificationFlags_t b);  // 2886
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 2974
	operator&=(RuntimeTextureSpecificationFlags_t& a,
			RuntimeTextureSpecificationFlags_t b);  // 2965
	operator|(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 35
	operator|=(RuntimeTextureSpecificationFlags_t& a,
			RuntimeTextureSpecificationFlags_t b);  // 2968
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2974
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::RemoveAll(); // 1798
	CUtlMemory<TextureCreationExtraData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 903
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 1799
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Purge(); // 560
	ValidateAlignment<TextureCreationExtraData_t>(void); // 508
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 510
	CUtlMemory<TextureCreationExtraData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVector(); // 234
	CTextureCreationDesc::~CTextureCreationDesc(); // 2976
} /* size: 0, variables: 7, inline expansions: 44 (872 bytes) */

// <00A30F2F> vulkan/renderdevicevulkan.cpp:2978
void CRenderDeviceVulkan::WaitIfTooFarAheadOfGPU()
{
} /* size: 14 */

// <00A30798> vulkan/renderdevicevulkan.cpp:2987
// variables: 5
// function calls: 24
void CRenderDeviceVulkan::WaitIfAheadOfTheGPUByMoreThanNFrames(int32 nNumFramesAheadOfGPU)
{
	int32 nOutstandingFrames; // 2989
	{
		float64 flLastWaitTime; // 2994
		float64 flBeginWaitTime; // 2995
		{
			float64 flCurWaitTime; // 3009
			{
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_3004; // 3004
				ThreadInterlockedAssignIf64(volatile int64* pDest,
								int64 value,
								int64 comparand);  // 800
				CThreadFastMutex::TryLockInline(
						const char* pFileName,
						int nLineNumber,
						const ThreadId_t  threadId);  // 837
				ThreadPause(void); // 839
				CThreadFastMutex::Lock(
					const char* pFileName,
					int nLineNumber,
					unsigned int nSpinSleepTime);  // 943
				Lock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
						const CThreadFastMutex& lock,
						const char* pFilename,
						int nLineNumber);  // 3004
				VulkanQueue(void); // 3005
				CUtlString::CUtlString(); // 149
				CUtlString::Get(); // 151
				CUtlString::~CUtlString(); // 153
				_DOVK(VkResult result,
					const char* pCommand);  // 3005
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 3006
				CRenderDeviceVulkan::RenderThread(); // 3004
				CRenderThreadVulkan::GetQueueMutex(); // 3004
			}
			CInterlockedIntT<unsigned int, 4>::GetRaw(); // 3007
			CInterlockedIntT<unsigned int, 4>::GetRaw(); // 484
			CMemoryManagerVulkan::GetHighestFrameCompletedOnGPU(); // 3007
			CRenderDeviceVulkan::MemoryManager(); // 3000
		}
	}
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 2989
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 484
	CMemoryManagerVulkan::GetHighestFrameCompletedOnGPU(); // 2989
} /* size: 668, variables: 1, inline expansions: 3 (31 bytes) */

// <00A6F016> vulkan/renderdevicevulkan.cpp:3022
// variables: 4
// function call: 1
void CSwapChainVulkan::SwapBuffers(VkSemaphore* ppAcquireNextImageSemaphoreOut)
{
	bool bAttemptedToRecreateSwapchain; // 3049
	VkSemaphore pAcquireNextImageSemaphore; // 3052
	VkSemaphoreCreateInfo acquireNextImageSemaphoreCreateInfo; // 3053
	VkResult nResult; // 3078
	{
	}
	CRenderDeviceVulkan::IsHibernating(); // 3034
} /* size: 0, variables: 4, inline expansions: 1 (7 bytes) */

// <00A6E04C> vulkan/renderdevicevulkan.cpp:3022
// variables: 11
// function calls: 50
void CSwapChainVulkan::SwapBuffers(VkSemaphore* ppAcquireNextImageSemaphoreOut)
{
	bool bAttemptedToRecreateSwapchain; // 3049
	VkSemaphore pAcquireNextImageSemaphore; // 3052
	VkSemaphoreCreateInfo acquireNextImageSemaphoreCreateInfo; // 3053
	VkResult nResult; // 3078
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 3057
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_3081; // 3081
		uint64_t nTimeout; // 3085
		CRenderDeviceVulkan::RenderThread(); // 3081
		CRenderThreadVulkan::GetQueueMutex(); // 3081
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 3081
		{
			CUtlString errString; // 3091
			CUtlString::CUtlString(); // 3091
			CUtlString::Get(); // 99
			CUtlString::String(); // 3093
			CUtlString::~CUtlString(); // 3094
		}
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 3095
	}
	{
		CUtlString errString; // 3116
		CUtlString::Get(); // 3118
		CUtlString::CUtlString(); // 3116
		CUtlString::~CUtlString(); // 3141
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_3100; // 3100
		uint64_t nTimeout; // 3105
		CUtlString msgString; // 3108
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 3100
		VulkanQueue(void); // 3103
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 145
		_DOVK(VkResult result,
			const char* pCommand);  // 136
		_DOVK(VkResult result,
			const char* pCommand);  // 3103
		CUtlString::CUtlString(); // 3108
		CUtlString::Get(); // 99
		CUtlString::String(); // 3110
		CUtlString::~CUtlString(); // 3111
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 3111
		CRenderDeviceVulkan::RenderThread(); // 3100
		CRenderThreadVulkan::GetQueueMutex(); // 3100
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 604
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 666
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 3153
} /* size: 1635, variables: 4, inline expansions: 8 (357 bytes) */

// <00A30690> vulkan/renderdevicevulkan.cpp:3022
// variables: 13
void CSwapChainVulkan::SwapBuffers(VkSemaphore* ppAcquireNextImageSemaphoreOut)
{
	const char   __FUNCTION__; // 28651
	bool bAttemptedToRecreateSwapchain; // 3049
	VkSemaphore pAcquireNextImageSemaphore; // 3052
	VkSemaphoreCreateInfo acquireNextImageSemaphoreCreateInfo; // 3053
	VkResult nResult; // 3078
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3024
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_3081; // 3081
		uint64_t nTimeout; // 3085
		{
			CUtlString errString; // 3091
		}
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_3100; // 3100
		uint64_t nTimeout; // 3105
		CUtlString msgString; // 3108
	}
	{
		CUtlString errString; // 3116
	}
} /* size: 0, variables: 5 */

// <00A30199> vulkan/renderdevicevulkan.cpp:3162
// variable: 1
// function calls: 21
void CSwapChainVulkan::CleanupViews()
{
	{
		uint32 nImageIndex; // 3165
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 3174
	}
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 3181
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 3186
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 3191
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 3197
} /* size: 588, inline expansions: 16 (461 bytes) */

// <00A2FFA5> vulkan/renderdevicevulkan.cpp:3205
// variables: 2
// function calls: 2
void CSwapChainVulkan::CleanupVulkanSwapchain()
{
	bool bShouldLeak; // 3215
	{
		xcb_get_input_focus_reply_t* pXcbGetInputFocusReply; // 3242
	}
	CRenderDeviceVulkan::GOOGLEDisplayTimingEnabled(); // 3215
	CRenderDeviceMgrVulkan::GetInstance(); // 3265
} /* size: 578, variables: 1, inline expansions: 2 (17 bytes) */

// <00A2FC31> vulkan/renderdevicevulkan.cpp:3278
// variable: 1
// function calls: 9
void CSwapChainVulkan::Update(const RenderDeviceInfo_t& mode)
{
	float flContentsScale; // 3283
	CSwapChainBase::GetPlatWindowHandle(); // 3283
	CInterlockedIntT<int, 4>::operator int(); // 594
	CRenderDeviceBase::IsAsyncPresentEnabled(); // 3296
	VulkanQueue(void); // 3306
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 3306
	CRenderDeviceVulkan::RenderThread(); // 3308
} /* size: 656, variables: 1, inline expansions: 9 (204 bytes) */

// <00A2FAA7> vulkan/renderdevicevulkan.cpp:3338
// variables: 8
// function call: 1
void CSwapChainVulkan::FrameUpdate()
{
	int nWidth; // 3340
	int nHeight; // 3340
	const char   __FUNCTION__; // 28651
	bool bRequiresUpdate; // 3360
	float flContentsScale; // 3380
	bool bHighDPI; // 3381
	bool bIsMinimized; // 3403
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3356
	}
	RenderDeviceInfo_t::IsHighDPI(); // 3389
} /* size: 0, variables: 7, inline expansions: 1 (12 bytes) */

// <00A2F92C> vulkan/renderdevicevulkan.cpp:3418
// variables: 2
// function call: 1
void CRenderDeviceVulkan::CreateSwapChain(PlatWindow_t hPlatWnd, OsSpecificWindowHandle_t hOsWnd, const RenderDeviceInfo_t& info, const char* pDebugName)
{
	CSwapChainVulkan* pSwapChain; // 3420
	SwapChainHandle_t hSwapChain; // 3427
	CSwapChainVulkan::~CSwapChainVulkan(); // 3423
} /* size: 188, variables: 2, inline expansions: 1 (21 bytes) */

// <00A2F89A> vulkan/renderdevicevulkan.cpp:3431
// variable: 1
// function call: 1
void CRenderDeviceVulkan::CanRenderToSwapChain(SwapChainHandle_t hSwapChain)
{
	const CSwapChainVulkan* pSwapChain; // 3433
	CRenderDeviceBase::GetSwapChain<CSwapChainVulkan>(
					SwapChainHandle_t hSwapChain);  // 3433
} /* size: 27, variables: 1, inline expansions: 1 (5 bytes) */

// <00A63464> vulkan/renderdevicevulkan.cpp:3448
// variable: 1
// function calls: 8
void CRenderDeviceVulkan::GetSwapChainInfo(SwapChainHandle_t hSwapChain)
{
	const CSwapChainVulkan* pSwapChain; // 3450
	CRenderDeviceBase::GetSwapChain<CSwapChainVulkan>(
					SwapChainHandle_t hSwapChain);  // 3450
	CSwapChainVulkan::GetRenderDeviceInfoScaled(); // 3453
	V_memset(void* dest,
		int fill,
		size_t count);  // 213
	RenderDisplayMode_t::RenderDisplayMode_t(); // 239
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 239
	RenderDeviceInfo_t::RenderDeviceInfo_t(); // 3456
	CRenderDeviceVulkan::GetSwapChainInfo(
			SwapChainHandle_t hSwapChain);  // 3448
} /* size: 171, variables: 1, inline expansions: 8 (303 bytes) */

// <00A2F850> vulkan/renderdevicevulkan.cpp:3448
// variables: 2
void CRenderDeviceVulkan::GetSwapChainInfo(SwapChainHandle_t hSwapChain)
{
	const CSwapChainVulkan* pSwapChain; // 3450
	RenderDeviceInfo_t errorInfo; // 3456
} /* size: 0, variables: 2 */

// <00A2F785> vulkan/renderdevicevulkan.cpp:3464
// variable: 1
// function call: 1
void CRenderDeviceVulkan::UpdateSwapChain(SwapChainHandle_t hSwapChain, const RenderDeviceInfo_t& info)
{
	CSwapChainVulkan* pSwapChain; // 3466
	CRenderDeviceBase::GetSwapChain<CSwapChainVulkan>(
					SwapChainHandle_t hSwapChain);  // 3466
} /* size: 46, variables: 1, inline expansions: 1 (8 bytes) */

// <00A2F6A4> vulkan/renderdevicevulkan.cpp:3479
// function call: 1
void CRenderDeviceVulkan::GetNearestSupportedColorFormat(ImageFormat fmt, bool bIsRenderTarget, bool bIsVertexTexture, bool bIsFilterableRequired)
{
	CColorFormatBase::FindNearestSupportedFormat(
					ImageFormat format,
					bool bIsVertexTexture,
					bool bIsRenderTarget,
					bool bFilterableRequired,
					int nAlternateFormatIter);  // 3481
} /* size: 40, inline expansions: 1 (33 bytes) */

// <00A2E986> vulkan/renderdevicevulkan.cpp:3485
// variables: 13
// function calls: 42
void* CRenderDeviceVulkan::GetDeviceSpecificTexture(HRenderTexture hTexture, RenderTextureDimension_t renderDimension)
{
	IndexType_t nIndex; // 3487
	const char   __FUNCTION__; // 28997
	VulkanDeviceSpecificTexture_t* pDeviceSpecificTexture; // 3499
	CVulkanImage* pVulkanImage; // 3501
	const VkFormat* pVulkanFormat; // 3504
	const TextureSpecification_t* pSpec; // 3507
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_3489; // 3489
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 3489
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_ this,
				unsigned int i);  // 545
		Element(const CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, this,
			unsigned int i);  // 1912
		LeftChild(const CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, this,
				unsigned int i);  // 1913
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator<(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs);  // 49
		CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> >::operator(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& lhs,
				const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs);  // 426
		CKeyLess::operator(
				const KeyType_t& left,
				const Node_t& right);  // 1912
		RightChild(const CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, this,
				unsigned int i);  // 1915
		FindAltKeyType<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> > >::CKeyLess>(const CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, this,
																const CWeakHandle<InfoForResourceTypeCTextureBase>& search,
																const CKeyLess& altLess);  // 298
		FindAltKeyType<CWeakHandle<InfoForResourceTypeCTextureBase> >(const CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, this,
										const CWeakHandle<InfoForResourceTypeCTextureBase>& search);  // 243
		Find(const CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefLess<C this,
			const KeyType_t& key);  // 3491
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 405
		Node_t::Node_t(
			const KeyType_t& k);  // 213
		LeftChild(const CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, this,
				unsigned int i);  // 1667
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, uns this,
				unsigned int i);  // 539
		Element(const CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefL this,
			unsigned int i);  // 1665
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator<(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs);  // 49
		CDefLess<CWeakHandle<InfoForResourceTypeCTextureBase> >::operator(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& lhs,
				const CWeakHandle<InfoForResourceTypeCTextureBase>& rhs);  // 418
		CKeyLess::operator(
				const Node_t& left,
				const Node_t& right);  // 1665
		RightChild(const CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, this,
				unsigned int i);  // 1677
		FindInsertionPosition(const CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefL this,
					const Node_t& insert,
					bool bCheckForDuplicates,
					unsigned int& parent,
					bool& leftchild,
					bool& isDuplicate);  // 1693
		{
			unsigned int newNode; // 1696
		}
		{
			unsigned int newNode; // 1709
			{
			}
		}
		Insert(const CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefL this,
			const Node_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 213
		Insert(const CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefLess<CWeakHa this,
			const KeyType_t& key,
			ERBTreeInsertBehavior eInsertBehavior);  // 3494
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 3496
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3498
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3502
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3505
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3508
	}
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, uns this,
			unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefL this,
		unsigned int i);  // 92
	operator[](const CUtlMap<CWeakHandle<InfoForResourceTypeCTextureBase>, VulkanDeviceSpecificTexture_t, unsigned int, CDefLess<CWeakHa this,
			IndexType_t i);  // 3499
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3501
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3504
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
	CTextureManagerVulkan::GetVulkanFormat(
			HRenderTexture hTexture);  // 3504
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3507
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 3512
} /* size: 0, variables: 6, inline expansions: 13 (196 bytes) */

// <00A2E84F> vulkan/renderdevicevulkan.cpp:3523
// variable: 1
// function calls: 2
void* CRenderDeviceVulkan::GetDeviceSpecificImageView(HRenderTexture hTexture, RenderTextureDimension_t nDim, RenderColorSpace_t colorSpace)
{
	VkImageView vkImageView; // 3525
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3525
} /* size: 82, variables: 1, inline expansions: 2 (14 bytes) */

// <00A2E7E7> vulkan/renderdevicevulkan.cpp:3530
void* CRenderDeviceVulkan::GetDeviceSpecificBuffer(RenderBufferHandle_t hGPUBuffer)
{
} /* size: 13 */

// <00A2E1F2> vulkan/renderdevicevulkan.cpp:3537
// variables: 6
// function calls: 23
void* CRenderDeviceVulkan::GetDeviceSpecificBuffer(VertexBufferHandle_t hVertexBuffer)
{
	CVertexBufferVulkan* pVertexBuffer; // 3540
	IndexType_t nIndex; // 3542
	const char   __FUNCTION__; // 28970
	VulkanDeviceSpecificBuffer_t* pDeviceSpecificBuffer; // 3554
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_3544; // 3544
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 3544
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__::operator[](
				unsigned int i);  // 545
		CUtlRBTree<CUtlMap<RenderResourceHandle_t__::Element(
			unsigned int i);  // 1912
		CUtlRBTree<CUtlMap<RenderResourceHandle_t__::LeftChild(
				unsigned int i);  // 1913
		CDefLess<RenderResourceHandle_t__::operator(
				RenderResourceHandle_t__* const& lhs,
				RenderResourceHandle_t__* const& rhs);  // 426
		CKeyLess::operator(
				const KeyType_t& left,
				const Node_t& right);  // 1912
		CUtlRBTree<CUtlMap<RenderResourceHandle_t__::RightChild(
				unsigned int i);  // 1915
		CUtlRBTree<CUtlMap<RenderResourceHandle_t__::FindAltKeyType<RenderResourceHandle_t__*, CUtlMap<RenderResourceHandle_t__*, VulkanDeviceSpecificBuffer_t, unsigned int, CDefLess<RenderResourceHandle_t__*> >::CKeyLess>(
																RenderResourceHandle_t__* const& search,
																const CKeyLess& altLess);  // 298
		CUtlRBTree<CUtlMap<RenderResourceHandle_t__::FindAltKeyType<RenderResourceHandle_t__*>(
								RenderResourceHandle_t__* const& search);  // 243
		CUtlMap<RenderResourceHandle_t__::Find(
			const KeyType_t& key);  // 3546
		Node_t::Node_t(
			const KeyType_t& k);  // 213
		CUtlMap<RenderResourceHandle_t__::Insert(
			const KeyType_t& key,
			ERBTreeInsertBehavior eInsertBehavior);  // 3549
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 3551
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3552
	}
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__::operator[](
			unsigned int i);  // 539
	CUtlRBTree<CUtlMap<RenderResourceHandle_t__::Element(
		unsigned int i);  // 92
	CUtlMap<RenderResourceHandle_t__::operator[](
			IndexType_t i);  // 3554
	CVertexBufferVulkan::GetVKBuffer(); // 3555
	CVertexBufferVulkan::GetMemoryOffset(); // 3556
	CVertexBufferBase::GetBufferSizeInBytes(); // 3557
} /* size: 374, variables: 4, inline expansions: 6 (56 bytes) */

// <00A2DBF7> vulkan/renderdevicevulkan.cpp:3562
// variables: 6
// function calls: 23
void* CRenderDeviceVulkan::GetDeviceSpecificBuffer(IndexBufferHandle_t hBuffer)
{
	CIndexBufferVulkan* pIndexBuffer; // 3564
	IndexType_t nIndex; // 3566
	const char   __FUNCTION__; // 28970
	VulkanDeviceSpecificBuffer_t* pDeviceSpecificBuffer; // 3578
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_3568; // 3568
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 3568
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__::operator[](
				unsigned int i);  // 545
		CUtlRBTree<CUtlMap<RenderResourceHandle_t__::Element(
			unsigned int i);  // 1912
		CUtlRBTree<CUtlMap<RenderResourceHandle_t__::LeftChild(
				unsigned int i);  // 1913
		CDefLess<RenderResourceHandle_t__::operator(
				RenderResourceHandle_t__* const& lhs,
				RenderResourceHandle_t__* const& rhs);  // 426
		CKeyLess::operator(
				const KeyType_t& left,
				const Node_t& right);  // 1912
		CUtlRBTree<CUtlMap<RenderResourceHandle_t__::RightChild(
				unsigned int i);  // 1915
		CUtlRBTree<CUtlMap<RenderResourceHandle_t__::FindAltKeyType<RenderResourceHandle_t__*, CUtlMap<RenderResourceHandle_t__*, VulkanDeviceSpecificBuffer_t, unsigned int, CDefLess<RenderResourceHandle_t__*> >::CKeyLess>(
																RenderResourceHandle_t__* const& search,
																const CKeyLess& altLess);  // 298
		CUtlRBTree<CUtlMap<RenderResourceHandle_t__::FindAltKeyType<RenderResourceHandle_t__*>(
								RenderResourceHandle_t__* const& search);  // 243
		CUtlMap<RenderResourceHandle_t__::Find(
			const KeyType_t& key);  // 3570
		Node_t::Node_t(
			const KeyType_t& k);  // 213
		CUtlMap<RenderResourceHandle_t__::Insert(
			const KeyType_t& key,
			ERBTreeInsertBehavior eInsertBehavior);  // 3573
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 3575
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3576
	}
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderResourceHandle_t__::operator[](
			unsigned int i);  // 539
	CUtlRBTree<CUtlMap<RenderResourceHandle_t__::Element(
		unsigned int i);  // 92
	CUtlMap<RenderResourceHandle_t__::operator[](
			IndexType_t i);  // 3578
	CIndexBufferVulkan::GetVkBuffer(); // 3579
	CIndexBufferVulkan::GetBindOffset(); // 3580
	CIndexBufferBase::GetBufferSizeInBytes(); // 3581
} /* size: 374, variables: 4, inline expansions: 6 (49 bytes) */

// <00A2D047> vulkan/renderdevicevulkan.cpp:3586
// variables: 11
// function calls: 40
void* CRenderDeviceVulkan::GetDeviceSpecificDescriptorSet(RenderDescriptorSetHandle_t hDescriptorSet)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_3591; // 3591
	const char   __FUNCTION__; // 29154
	StaticDescriptorSetIndex_t nIdx; // 3594
	CDescriptorSetVulkan* pStaticDescriptorSet; // 3595
	IndexType_t nIndex; // 3597
	VulkanDeviceSpecificDescriptorSet_t* pDeviceSpecificDescriptorSet; // 3609
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3593
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_3599; // 3599
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 3599
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__::operator[](
				unsigned int i);  // 545
		CUtlRBTree<CUtlMap<RenderDescriptorSetHandle_t__::Element(
			unsigned int i);  // 1912
		CUtlRBTree<CUtlMap<RenderDescriptorSetHandle_t__::LeftChild(
				unsigned int i);  // 1913
		CDefLess<RenderDescriptorSetHandle_t__::operator(
				RenderDescriptorSetHandle_t__* const& lhs,
				RenderDescriptorSetHandle_t__* const& rhs);  // 426
		CKeyLess::operator(
				const KeyType_t& left,
				const Node_t& right);  // 1912
		CUtlRBTree<CUtlMap<RenderDescriptorSetHandle_t__::RightChild(
				unsigned int i);  // 1915
		CUtlRBTree<CUtlMap<RenderDescriptorSetHandle_t__::FindAltKeyType<RenderDescriptorSetHandle_t__*, CUtlMap<RenderDescriptorSetHandle_t__*, VulkanDeviceSpecificDescriptorSet_t, unsigned int, CDefLess<RenderDescriptorSetHandle_t__*> >::CKeyLess>(
																RenderDescriptorSetHandle_t__* const& search,
																const CKeyLess& altLess);  // 298
		CUtlRBTree<CUtlMap<RenderDescriptorSetHandle_t__::FindAltKeyType<RenderDescriptorSetHandle_t__*>(
								RenderDescriptorSetHandle_t__* const& search);  // 243
		CUtlMap<RenderDescriptorSetHandle_t__::Find(
			const KeyType_t& key);  // 3601
		Node_t::Node_t(
			const KeyType_t& k);  // 213
		CUtlRBTree<CUtlMap<RenderDescriptorSetHandle_t__::LeftChild(
				unsigned int i);  // 1667
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__::operator[](
				unsigned int i);  // 539
		CUtlRBTree<CUtlMap<RenderDescriptorSetHandle_t__::Element(
			unsigned int i);  // 1665
		CDefLess<RenderDescriptorSetHandle_t__::operator(
				RenderDescriptorSetHandle_t__* const& lhs,
				RenderDescriptorSetHandle_t__* const& rhs);  // 418
		CKeyLess::operator(
				const Node_t& left,
				const Node_t& right);  // 1665
		CUtlRBTree<CUtlMap<RenderDescriptorSetHandle_t__::RightChild(
				unsigned int i);  // 1677
		CUtlRBTree<CUtlMap<RenderDescriptorSetHandle_t__::FindInsertionPosition(
					const Node_t& insert,
					bool bCheckForDuplicates,
					unsigned int& parent,
					bool& leftchild,
					bool& isDuplicate);  // 1693
		{
			unsigned int newNode; // 1696
		}
		{
			unsigned int newNode; // 1709
			{
			}
		}
		CUtlRBTree<CUtlMap<RenderDescriptorSetHandle_t__::Insert(
			const Node_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 213
		CUtlMap<RenderDescriptorSetHandle_t__::Insert(
			const KeyType_t& key,
			ERBTreeInsertBehavior eInsertBehavior);  // 3604
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 3606
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3607
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 3591
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderDescriptorSetHandle_t__::operator[](
			unsigned int i);  // 539
	CUtlRBTree<CUtlMap<RenderDescriptorSetHandle_t__::Element(
		unsigned int i);  // 92
	CUtlMap<RenderDescriptorSetHandle_t__::operator[](
			IndexType_t i);  // 3609
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 3613
	CDescriptorSetVulkan::GetDescriptorSet(); // 3610
	CDescriptorSetVulkan::GetDescriptorSetLayout(); // 3611
} /* size: 0, variables: 6, inline expansions: 15 (456 bytes) */

// <00A2C794> vulkan/renderdevicevulkan.cpp:3616
// variables: 8
// function calls: 30
void* CRenderDeviceVulkan::GetDeviceSpecificRayTracePipeline(RenderRayTracePipelineHandle_t hRayTracePipeline)
{
	CRayTracePipelineVulkan* pRaytracePipeline; // 3618
	IndexType_t nIndex; // 3620
	const char   __FUNCTION__; // 29230
	VulkanDeviceSpecificRayTracePipeline_t* pDeviceSpecificRayTracePipeline; // 3632
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_3622; // 3622
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 3622
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__::operator[](
				unsigned int i);  // 545
		CUtlRBTree<CUtlMap<RenderRayTracePipelineHandle_t__::Element(
			unsigned int i);  // 1912
		CUtlRBTree<CUtlMap<RenderRayTracePipelineHandle_t__::LeftChild(
				unsigned int i);  // 1913
		CDefLess<RenderRayTracePipelineHandle_t__::operator(
				RenderRayTracePipelineHandle_t__* const& lhs,
				RenderRayTracePipelineHandle_t__* const& rhs);  // 426
		CKeyLess::operator(
				const KeyType_t& left,
				const Node_t& right);  // 1912
		CUtlRBTree<CUtlMap<RenderRayTracePipelineHandle_t__::RightChild(
				unsigned int i);  // 1915
		CUtlRBTree<CUtlMap<RenderRayTracePipelineHandle_t__::FindAltKeyType<RenderRayTracePipelineHandle_t__*, CUtlMap<RenderRayTracePipelineHandle_t__*, VulkanDeviceSpecificRayTracePipeline_t, unsigned int, CDefLess<RenderRayTracePipelineHandle_t__*> >::CKeyLess>(
																RenderRayTracePipelineHandle_t__* const& search,
																const CKeyLess& altLess);  // 298
		CUtlRBTree<CUtlMap<RenderRayTracePipelineHandle_t__::FindAltKeyType<RenderRayTracePipelineHandle_t__*>(
									RenderRayTracePipelineHandle_t__* const& search);  // 243
		CUtlMap<RenderRayTracePipelineHandle_t__::Find(
			const KeyType_t& key);  // 3624
		Node_t::Node_t(
			const KeyType_t& k);  // 213
		CUtlRBTree<CUtlMap<RenderRayTracePipelineHandle_t__::LeftChild(
				unsigned int i);  // 1667
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__::operator[](
				unsigned int i);  // 539
		CUtlRBTree<CUtlMap<RenderRayTracePipelineHandle_t__::Element(
			unsigned int i);  // 1665
		CDefLess<RenderRayTracePipelineHandle_t__::operator(
				RenderRayTracePipelineHandle_t__* const& lhs,
				RenderRayTracePipelineHandle_t__* const& rhs);  // 418
		CKeyLess::operator(
				const Node_t& left,
				const Node_t& right);  // 1665
		CUtlRBTree<CUtlMap<RenderRayTracePipelineHandle_t__::RightChild(
				unsigned int i);  // 1677
		CUtlRBTree<CUtlMap<RenderRayTracePipelineHandle_t__::FindInsertionPosition(
					const Node_t& insert,
					bool bCheckForDuplicates,
					unsigned int& parent,
					bool& leftchild,
					bool& isDuplicate);  // 1693
		{
			unsigned int newNode; // 1696
		}
		{
			unsigned int newNode; // 1709
			{
			}
		}
		CUtlRBTree<CUtlMap<RenderRayTracePipelineHandle_t__::Insert(
			const Node_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 213
		CUtlMap<RenderRayTracePipelineHandle_t__::Insert(
			const KeyType_t& key,
			ERBTreeInsertBehavior eInsertBehavior);  // 3627
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 3629
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3630
	}
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RenderRayTracePipelineHandle_t__::operator[](
			unsigned int i);  // 539
	CUtlRBTree<CUtlMap<RenderRayTracePipelineHandle_t__::Element(
		unsigned int i);  // 92
	CUtlMap<RenderRayTracePipelineHandle_t__::operator[](
			IndexType_t i);  // 3632
	CRayTracePipelineVulkan::Pipeline(); // 3633
	CRayTracePipelineVulkan::PipelineLayout(); // 3634
} /* size: 0, variables: 4, inline expansions: 5 (49 bytes) */

// <00A2C5DA> vulkan/renderdevicevulkan.cpp:3641
// variables: 5
// function call: 1
void CRenderDeviceVulkan::SupportsMSAAMode(ImageFormat fmt, bool bWindowed, RenderMultisampleType_t nMSAAMode)
{
	VkFormat nVulkanFormat; // 3643
	bool bIsDepthStencil; // 3644
	VkImageFormatProperties imageFormatProperties; // 3645
	VkResult nResult; // 3646
	VkSampleCountFlagBits nSampleCount; // 3656
	ComputeAASettings(RenderMultisampleType_t nType,
				VkSampleCountFlagBits* pSampleCount);  // 3657
} /* size: 0, variables: 5, inline expansions: 1 (102 bytes) */

// <00A2C56B> vulkan/renderdevicevulkan.cpp:3682
void CRenderDeviceVulkan::SupportsCSAAMode(ImageFormat fmt, bool bWindowed, RenderMultisampleType_t nMSAAMode, int nQualityLevel)
{
} /* size: 7 */

// <00A70C14> vulkan/renderdevicevulkan.cpp:3688
// variables: 11
// function calls: 16
void CRenderDeviceVulkan::PrintGPUMemoryStats()
{
	{
		uint64 nBLASUncompacted; // 3694
		uint64 nBLASUncompactedBytes; // 3695
		uint64 nBLASCompacted; // 3696
		uint64 nBLASCompactedBytes; // 3697
		uint64 nBLASCompactedBytesIfUncompacted; // 3698
		const float  flTotalMem; // 3717
		const float  flUncompactedMem; // 3718
		const float  flCompactedMem; // 3719
		const float  flCompactedMemIfUncompacted; // 3720
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_3700; // 3700
			ThreadInterlockedAssignIf64(volatile int64* pDest,
							int64 value,
							int64 comparand);  // 800
			CThreadFastMutex::TryLockInline(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 837
			ThreadPause(void); // 839
			CThreadFastMutex::Lock(
				const char* pFileName,
				int nLineNumber,
				unsigned int nSpinSleepTime);  // 943
			Lock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
					const CThreadFastMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 3700
			CUtlIntrusiveList<CBaseAccelerationStructureVulkan>::Head(); // 1125
			CBaseAccelerationStructureVulkan::OriginalUncompactedSizeInBytes(); // 3707
			CBaseAccelerationStructureVulkan::IsCompacted(); // 3703
			operator()(const class* __closure,
					CBaseAccelerationStructureVulkan* pAccelStruct); // 1128
			CUtlIntrusiveList<CBaseAccelerationStructureVulkan>::ForEach<CRenderDeviceVulkan::PrintGPUMemoryStats(
																 f);  // 3701
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 3715
		}
	}
	CRenderDeviceVulkan::PrintGPUMemoryStats(); // 3688
} /* size: 1033, inline expansions: 1 (862 bytes) */

// <00A2C3F4> vulkan/renderdevicevulkan.cpp:3688
// variables: 10
void CRenderDeviceVulkan::PrintGPUMemoryStats()
{
	{
		uint64 nBLASUncompacted; // 3694
		uint64 nBLASUncompactedBytes; // 3695
		uint64 nBLASCompacted; // 3696
		uint64 nBLASCompactedBytes; // 3697
		uint64 nBLASCompactedBytesIfUncompacted; // 3698
		const float  flTotalMem; // 3717
		const float  flUncompactedMem; // 3718
		const float  flCompactedMem; // 3719
		const float  flCompactedMemIfUncompacted; // 3720
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_3700; // 3700
		}
	}
} /* size: 0 */

// <00A29FA7> vulkan/renderdevicevulkan.cpp:3733
// variables: 14
// function calls: 160
void CRenderDeviceVulkan::ReadTexturePixels(HRenderTexture hTexture, Rect_t* pSrcRect, int nSrcSlice, int nSrcMip, Rect_t* pDstRect, void* pData, ImageFormat dstFormat, int nDstStride)
{
	CRenderContextVulkanPtr pRenderContextVK; // 3736
	const char   __FUNCTION__; // 28813
	CommandReadTexturePixelsVulkan_t cmd; // 3744
	CVulkanImage* pVulkanImage; // 3753
	const VkFormat* pVKFormat; // 3756
	const TextureSpecification_t* pSpec; // 3764
	const bool  validX; // 3787
	const bool  validY; // 3788
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3740
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3757
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3789
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 3738
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 3738
	CommandBase_t::CommandBase_t(
			int nOpCode,
			bool bSkipOnLostDevice,
			int nCmdSizeInBytes);  // 117
	CommandHelper_t<CommandReadTexturePixelsVulkan_t, 15, true>::CommandHelper_t(); // 126
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 126
	CommandReadTexturePixelsVulkan_t::CommandReadTexturePixelsVulkan_t(); // 3744
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3753
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 483
		CTextureBase::ComputeTextureDimension(); // 342
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 348
	}
	{
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 360
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 365
	CTextureManagerVulkan::GetTextureResource(
				HRenderTexture hTexture,
				RenderTextureDimension_t nDim,
				const char* szParamName);  // 3753
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 421
	CTextureManagerVulkan::GetVulkanFormat(
			HRenderTexture hTexture);  // 3756
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3756
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3764
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3766
	CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
	CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
	operator new(size_t size); // 133
	Alloc(void); // 328
	AllocateChunk(void); // 690
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
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
	CCommandStreamBuilder::EnsureStream(); // 641
	CCommandStreamBuilder::EnsureStream(); // 695
	{
		CommandJump_t cmd; // 705
		CommandBase_t::CommandBase_t(
				int nOpCode,
				bool bSkipOnLostDevice,
				int nCmdSizeInBytes);  // 117
		CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
		CommandJump_t::CommandJump_t(); // 705
		CCommandStreamBuilder::Store<CommandJump_t>(
					CommandJump_t obj);  // 707
	}
	CCommandStreamBuilder::GrowForCapacity(
			int nNumBytes);  // 681
	CCommandStreamBuilder::EnsureCapacity(
			int nNumBytes);  // 530
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 126
	CommandReadTexturePixelsVulkan_t::operator=(
			const CommandReadTexturePixelsVulkan_t  &);  // 532
	CCommandStreamBuilder::WriteCmd<CommandReadTexturePixelsVulkan_t>(
							const CommandReadTexturePixelsVulkan_t& obj);  // 3795
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 481
	CRenderContextVulkanPtr::~CRenderContextVulkanPtr(); // 3802
	Max<int>(const int& val1,
		const int& val2);  // 3771
	Max<int>(const int& val1,
		const int& val2);  // 3772
} /* size: 0, variables: 8, inline expansions: 151 (10851 bytes) */

// <00A29F78> vulkan/renderdevicevulkan.cpp:3808
void CRenderDeviceVulkan::IsUsingGraphics()
{
} /* size: 7 */

// <00A29F49> vulkan/renderdevicevulkan.cpp:3817
void CRenderDeviceVulkan::GetCurrentAdapter()
{
} /* size: 7 */

// <00A29EF9> vulkan/renderdevicevulkan.cpp:3826
void CRenderDeviceVulkan::SpewDriverInfo()
{
} /* size: 18 */

// <00A29E0D> vulkan/renderdevicevulkan.cpp:3832
// variable: 1
// function calls: 2
void CRenderDeviceVulkan::GetSwapChainDepthStencilFormat(SwapChainHandle_t hSwapChain)
{
	const CSwapChainVulkan* pSwapChain; // 3834
	CRenderDeviceBase::GetSwapChain<CSwapChainVulkan>(
					SwapChainHandle_t hSwapChain);  // 3834
	CRenderDeviceVulkan::ColorFormat(); // 3836
} /* size: 62, variables: 1, inline expansions: 2 (19 bytes) */

// <00A5E9DE> vulkan/renderdevicevulkan.cpp:3851
// variables: 2
// function call: 1
void CRenderDeviceVulkan::GetShaderVersionString(RenderShaderType_t nType)
{
	const char* pVsString; // 3853
	const char* pPsString; // 3854
	{
	}
	CRenderDeviceVulkan::GetShaderVersionString(
				RenderShaderType_t nType);  // 3851
} /* size: 0, variables: 2, inline expansions: 1 (26 bytes) */

// <00A29DA9> vulkan/renderdevicevulkan.cpp:3851
// variables: 4
void CRenderDeviceVulkan::GetShaderVersionString(RenderShaderType_t nType)
{
	const char* pVsString; // 3853
	const char* pPsString; // 3854
	const char   __FUNCTION__; // 28943
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3871
	}
} /* size: 0, variables: 3 */

// <00A2940C> vulkan/renderdevicevulkan.cpp:3877
// variables: 4
// function calls: 26
void CRenderDeviceVulkan::UpdatePipelineStats(SwapChainHandle_t hSwapChain)
{
	bool bPipelineStatsActive; // 3880
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_3890; // 3890
	{
		CRenderPipelineStatsVulkan* pPipelineStats; // 3899
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_3919; // 3919
		CRenderDeviceVulkan::RenderThread(); // 3919
		CRenderThreadVulkan::GetQueueMutex(); // 3919
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 3919
		VulkanQueue(void); // 3920
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 3920
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 3921
	}
	CTextureManagerBase::GetTextureManagerRWLock(); // 3890
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 3890
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 3929
} /* size: 1068, variables: 2, inline expansions: 9 (694 bytes) */

// <00A293C2> vulkan/renderdevicevulkan.cpp:3931
void CRenderDeviceVulkan::BeginRendering()
{
} /* size: 9 */

// <00A6F0B6> vulkan/renderdevicevulkan.cpp:3937
// variables: 3
// function calls: 135
void CRenderDeviceVulkan::BeginSubmittingDisplayLists(SwapChainHandle_t hSwapChain)
{
	__uniq_ptr_impl<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::_M_ptr(); // 472
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::get(); // 489
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::operator bool(); // 8747
	CUtlMemory<RenderDescriptorBinding_t, int>::Base(); // 112
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Base(); // 8749
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Count(); // 8749
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::RemoveAll(); // 8751
	CRenderDeviceVulkan::UpdateGlobalPerFrameDescriptorSet(); // 3940
	{
		CommandBeginSubmittingViews_t cmd; // 3944
		CRenderContextVulkanPtr pRenderContextVulkan; // 3947
		CommandBase_t::CommandBase_t(
				int nOpCode,
				bool bSkipOnLostDevice,
				int nCmdSizeInBytes);  // 117
		CommandHelper_t<CommandBeginSubmittingViews_t, 20, true>::CommandHelper_t(); // 162
		CommandBeginSubmittingViews_t::CommandBeginSubmittingViews_t(); // 3944
		CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
		CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
		operator new(size_t size); // 133
		Alloc(void); // 328
		AllocateChunk(void); // 690
		ThreadPause(void); // 208
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		CTSListBase::Pop(); // 376
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
		CCommandStreamBuilder::EnsureStream(); // 641
		CCommandStreamBuilder::EnsureStream(); // 695
		{
			CommandJump_t cmd; // 705
			CommandBase_t::CommandBase_t(
					int nOpCode,
					bool bSkipOnLostDevice,
					int nCmdSizeInBytes);  // 117
			CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
			CommandJump_t::CommandJump_t(); // 705
			CCommandStreamBuilder::Store<CommandJump_t>(
						CommandJump_t obj);  // 707
		}
		CCommandStreamBuilder::GrowForCapacity(
				int nNumBytes);  // 681
		CCommandStreamBuilder::EnsureCapacity(
				int nNumBytes);  // 530
		CCommandStreamBuilder::WriteCmd<CommandBeginSubmittingViews_t>(
							const CommandBeginSubmittingViews_t& obj);  // 3948
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 481
		CRenderContextVulkanPtr::~CRenderContextVulkanPtr(); // 3950
	}
	CRenderDeviceVulkan::BeginSubmittingDisplayLists(
					SwapChainHandle_t hSwapChain);  // 3937
} /* size: 1241, inline expansions: 9 (1143 bytes) */

// <00A2934C> vulkan/renderdevicevulkan.cpp:3937
// variables: 2
void CRenderDeviceVulkan::BeginSubmittingDisplayLists(SwapChainHandle_t hSwapChain)
{
	{
		CommandBeginSubmittingViews_t cmd; // 3944
		CRenderContextVulkanPtr pRenderContextVulkan; // 3947
	}
} /* size: 0 */

// <00A292B1> vulkan/renderdevicevulkan.cpp:3953
// variable: 1
void CRenderDeviceVulkan::Present(SwapChainHandle_t hSwapChain)
{
	bool bPreviousPresentCameBack; // 3955
} /* size: 47, variables: 1 */

// <00A291BD> vulkan/renderdevicevulkan.cpp:3963
// function calls: 2
void CRenderDeviceVulkan::GetPipelineFrameStats(CRenderPipelineFrameStats& frameStats)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3966
} /* size: 87, inline expansions: 2 (26 bytes) */

// <00A5E723> vulkan/renderdevicevulkan.cpp:3979
// function call: 1
void CRenderDeviceVulkan::ReleasePipelineFrameStats(CRenderPipelineFrameStats& frameStats)
{
	CRenderDeviceVulkan::ReleasePipelineFrameStats(
					CRenderPipelineFrameStats& frameStats);  // 3979
} /* size: 77, inline expansions: 1 (26 bytes) */

// <00A29197> vulkan/renderdevicevulkan.cpp:3979
void CRenderDeviceVulkan::ReleasePipelineFrameStats(CRenderPipelineFrameStats& frameStats)
{
} /* size: 0 */

// <00A28D85> vulkan/renderdevicevulkan.cpp:3992
// variables: 2
// function calls: 15
void CRenderDeviceVulkan::DestroyQueryPools()
{
	{
		int nIndex; // 3995
		{
			QueryPool_t* pQueryPool; // 3997
			CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::operator[](
					int i);  // 3997
		}
		CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::Count(); // 3995
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 3994
	CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::Purge(); // 903
	CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::Purge(); // 1799
	CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::Purge(); // 4001
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 4002
} /* size: 386, inline expansions: 12 (409 bytes) */

// <00A281D8> vulkan/renderdevicevulkan.cpp:4005
// variables: 9
// function calls: 40
void CRenderDeviceVulkan::AssignQueryObjectToPool(RenderQueryHandle_t hQueryObject)
{
	QueryObjectInternalVulkan_t* pQueryObjectInternal; // 4007
	CAutoLockT<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThreadFastMutex>, CAutoLockMutexTrait<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThreadFastMutex> > > generated_id_4009; // 4009
	QueryPool_t* pQueryPool; // 4010
	const char   __FUNCTION__; // 28970
	uint32 nSlot; // 4079
	{
		int nIndex; // 4011
		CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::Count(); // 4011
		CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::operator[](
				int i);  // 4013
		CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
		CRenderDeviceBase::GetContextFrameCount(); // 4024
		CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
		CRenderDeviceBase::GetContextFrameCount(); // 4020
	}
	{
		QueryPool_t newQueryPool; // 4035
		VkQueryPoolCreateInfo queryPoolCreateInfo; // 4036
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4062
		}
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 4066
		CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
		CRenderDeviceBase::GetContextFrameCount(); // 4068
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 4074
		CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::NumAllocated(); // 1196
		CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::Base(); // 112
		CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::Base(); // 368
		CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::ResetDbgInfo(); // 824
		CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::IsGrowable(); // 823
		CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::GrowMemory(
				int num);  // 1198
		CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::Element(
			int i);  // 1201
		CopyConstruct<CRenderDeviceVulkan::QueryPool_t>(QueryPool_t* pMemory,
								const QueryPool_t& src);  // 1201
		CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::AddToTail(
				const QueryPool_t& src);  // 4075
		CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::operator[](
				int i);  // 630
		CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::Tail(); // 4076
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThreadFas lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT(const CAutoLockT<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, i this,
			const CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThr lock,
			const char* pFilename,
			int nLineNumber);  // 4009
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThreadFas lock,
		const char* pFileName,
		int nLineNumber);  // 983
	~CAutoLockT(const CAutoLockT<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, i this); // 4093
} /* size: 0, variables: 5, inline expansions: 10 (455 bytes) */

// <00A2802F> vulkan/renderdevicevulkan.cpp:4095
// variables: 3
// function calls: 4
void CRenderDeviceVulkan::CreateQueryObject(RenderQueryType_t queryType)
{
	const char   __FUNCTION__; // 28813
	QueryObjectInternalVulkan_t* pQueryObjectInternal; // 4100
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4097
	}
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 27
	QueryObjectInternalVulkan_t::QueryObjectInternalVulkan_t(); // 4100
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 4105
} /* size: 0, variables: 2, inline expansions: 4 (29 bytes) */

// <00A66181> vulkan/renderdevicevulkan.cpp:4113
// variables: 3
// function calls: 127
void CRenderDeviceVulkan::DeleteQueryObject(RenderQueryHandle_t hQueryObject)
{
	CRenderContextVulkanPtr pRenderContextVulkan; // 4119
	CommandDestroyQueryVulkan_t cmd; // 4120
	CommandBase_t::CommandBase_t(
			int nOpCode,
			bool bSkipOnLostDevice,
			int nCmdSizeInBytes);  // 117
	CommandHelper_t<CommandDestroyQueryVulkan_t, 13, true>::CommandHelper_t(); // 121
	CommandDestroyQueryVulkan_t::CommandDestroyQueryVulkan_t(); // 4120
	CCommandStreamBuilder::AvailableCommandBufferSpace(); // 677
	CUtlMemoryPool<CCommandBufferChunk>::Alloc(); // 81
	operator new(size_t size); // 133
	Alloc(void); // 328
	AllocateChunk(void); // 690
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
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
	CCommandStreamBuilder::EnsureStream(); // 641
	CCommandStreamBuilder::EnsureStream(); // 695
	{
		CommandJump_t cmd; // 705
		CommandBase_t::CommandBase_t(
				int nOpCode,
				bool bSkipOnLostDevice,
				int nCmdSizeInBytes);  // 117
		CommandHelper_t<CommandJump_t, 1, false>::CommandHelper_t(); // 143
		CommandJump_t::CommandJump_t(); // 705
		CCommandStreamBuilder::Store<CommandJump_t>(
					CommandJump_t obj);  // 707
	}
	CCommandStreamBuilder::GrowForCapacity(
			int nNumBytes);  // 681
	CCommandStreamBuilder::EnsureCapacity(
			int nNumBytes);  // 530
	CCommandStreamBuilder::WriteCmd<CommandDestroyQueryVulkan_t>(
						const CommandDestroyQueryVulkan_t& obj);  // 4122
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 481
	CRenderContextVulkanPtr::~CRenderContextVulkanPtr(); // 4123
	CRenderDeviceVulkan::DeleteQueryObject(
				RenderQueryHandle_t hQueryObject);  // 4113
} /* size: 1106, variables: 2, inline expansions: 123 (8775 bytes) */

// <00A27FBB> vulkan/renderdevicevulkan.cpp:4113
// variables: 2
void CRenderDeviceVulkan::DeleteQueryObject(RenderQueryHandle_t hQueryObject)
{
	CRenderContextVulkanPtr pRenderContextVulkan; // 4119
	CommandDestroyQueryVulkan_t cmd; // 4120
} /* size: 0, variables: 2 */

// <00A27DF2> vulkan/renderdevicevulkan.cpp:4129
// variables: 2
// function calls: 5
void CRenderDeviceVulkan::GetQueryData(RenderQueryHandle_t hQueryObject, uint64* pQueryData)
{
	QueryObjectInternalVulkan_t* pQueryObjectInternal; // 4136
	RenderQueryState_t state; // 4137
	CInterlockedIntT<int, 4>::operator()(const CInterlockedIntT<int, 4>* this); // 4137
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 4142
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 4153
} /* size: 179, variables: 2, inline expansions: 5 (172 bytes) */

// <00A27DC3> vulkan/renderdevicevulkan.cpp:4167
void CRenderDeviceVulkan::ForceDeviceLost()
{
} /* size: 5 */

// <00A27208> vulkan/renderdevicevulkan.cpp:4174
// variables: 12
// function calls: 33
void CRenderDeviceVulkan::PerFrameCleanup(SwapChainHandle_t hSwapchain)
{
	uint nHighestFrameCompletedGPU; // 4190
	const bool  bDefragEachFrame; // 4232
	bool bDefragThisFrame; // 4233
	int curLive; // 4247
	{
		RenderDefragFlags_t nDefragAlgorithm; // 4242
		ConVar::GetInt(); // 4242
		Clamp<RenderDefragFlags_t>(const RenderDefragFlags_t& val,
						const RenderDefragFlags_t& minVal,
						const RenderDefragFlags_t& maxVal);  // 4242
	}
	CTextureManagerBase::GetTextureManagerRWLock(); // 4176
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 4176
	{
		int i; // 591
		{
			HashBucket_t& bucket; // 593
		}
	}
	Commit(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this); // 579
	Commit(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this); // 4187
	{
		int i; // 591
		{
			HashBucket_t& bucket; // 593
		}
	}
	Commit(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this); // 579
	Commit(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this); // 4188
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 484
	CMemoryManagerVulkan::GetHighestFrameCompletedOnGPU(); // 4190
	CInterlockedIntT<int, 4>::operator int(); // 594
	CRenderDeviceBase::IsAsyncPresentEnabled(); // 161
	{
	}
	CUtlVectorBase<CRenderResource::Count(); // 166
	{
		int i; // 167
		{
			CRenderResource* pRenderResource; // 169
			CUtlMemory<CRenderResource::operator[](
					int i);  // 588
			CUtlVectorBase<CRenderResource::operator[](
					int i);  // 169
			CRenderResource::IsInUse(
				uint nCompletedFrameNumber);  // 170
			CUtlMemory<CRenderResource::operator[](
					int i);  // 602
			CUtlVectorBase<CRenderResource::Element(
				int i);  // 1575
			{
				const bool  bNotLast; // 1578
				CUtlMemory<CRenderResource::operator[](
						int i);  // 602
				CUtlVectorBase<CRenderResource::Element(
					int i);  // 1584
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 1584
			}
			Destruct<CRenderResource*>(CRenderResource** pMemory); // 1575
			CUtlVectorBase<CRenderResource::FastRemove(
					int elem);  // 174
		}
	}
	CRenderResourceMgr::PerformQueuedDeletions(
				uint nFinishedFrameNumber);  // 4192
	CRenderDeviceVulkan::CommitInputLayoutChanges(); // 4201
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 4219
	CInterlockedIntT<int, 4>::operator int(); // 4247
	CTextureManagerBase::GetTextureManagerRWLock(); // 4249
} /* size: 0, variables: 4, inline expansions: 20 (851 bytes) */

// <00A27187> vulkan/renderdevicevulkan.cpp:4273
void CRenderDeviceVulkan::UpdateStats()
{
} /* size: 50 */

// <00A25966> vulkan/renderdevicevulkan.cpp:4285
// variables: 8
// function calls: 112
void CRenderDeviceVulkan::PerformQueuedTextureDeletions(bool bForce)
{
	uint nHighestFrameCompletedGPU; // 4287
	{
		int i; // 4290
		{
			uint nFrameNumber; // 4292
			{
				int j; // 4295
				{
					VulkanTextureReleaseResources_t* pTextureResources; // 4297
					CVulkanTextureObjectToDelete* pVulkanObjectToDelete; // 4302
					CUtlMemory<float, int>::Base(); // 112
					CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 368
					CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
							int num);  // 784
					CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector(
							int num);  // 1445
					CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1437
					CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1294
					CUtlVectorBase<float, CUtlMemory<float, int> >::AddMultipleToTail(
								int num);  // 1319
					CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount(
						int count);  // 573
					CUtlMemory<float, int>::Base(); // 113
					CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 105
					CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 105
					CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 574
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 85
					V_memcpy(void* dest,
						const void* src,
						ptrdiff_t count);  // 180
					UtlTraitsCopyRange<TextureCreationExtraData_t>(const TextureCreationExtraData_t* pFrom,
											const TextureCreationExtraData_t* pFromEnd,
											TextureCreationExtraData_t* pTo);  // 173
					UtlTraitsCopyRange<float>(const float* pFrom,
									const float* pFromEnd,
									float* pTo);  // 574
					CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
							const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
							const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
					CUtlVector<float, CUtlMemory<float, int> >::operator=(
							const CUtlVector<float, CUtlMemory<float, int> >& src);  // 434
					CUtlMemory<float, int>::ValidateGrowSize(); // 475
					CUtlMemory<float, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 434
					CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(
							const CUtlVector<float, CUtlMemory<float, int> >& src);  // 38
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 574
					CUtlMemory<unsigned int, int>::Base(); // 113
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 105
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 105
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::end(); // 574
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 85
					V_memcpy(void* dest,
						const void* src,
						ptrdiff_t count);  // 180
					UtlTraitsCopyRange<TextureCreationExtraData_t>(const TextureCreationExtraData_t* pFrom,
											const TextureCreationExtraData_t* pFromEnd,
											TextureCreationExtraData_t* pTo);  // 173
					UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
									const unsigned int* pFromEnd,
									unsigned int* pTo);  // 574
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
							const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 565
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
							const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
					CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
							const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 434
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
					CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
					CUtlMemory<unsigned int, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 434
					CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
							const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
					CTextureDesc::operator=(
							const CTextureDesc& rhs);  // 147
					CTextureDesc::CTextureDesc(
							const CTextureDesc& rhs);  // 38
					TextureSpecification_t::TextureSpecification_t(
								const TextureSpecification_t  &);  // 508
					CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
					CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 508
					CVulkanTextureObjectToDelete::CVulkanTextureObjectToDelete(
									CVulkanImage* pVulkanImage,
									VulkanImageViews_t* pImageViews,
									const TextureSpecification_t* pSpec);  // 4302
					CUtlMemory<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, CUtlMemory<CRenderDeviceVulkan::VulkanTextureR this,
							int i);  // 4297
				}
				CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextu this,
						int i);  // 4295
				Count(const CUtlVectorBase<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, CUtlMemory<CRenderDeviceVulkan::VulkanTe this); // 4295
			}
			{
				int i; // 1721
				CUtlMemory<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, CUtlMemory<CRenderDeviceVulkan::VulkanTextureR this,
					int i);  // 1723
				CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
				CUtlMemory<float, int>::IsExternallyAllocated(); // 905
				CUtlMemory<float, int>::Purge(); // 903
				CUtlMemory<float, int>::Purge(); // 1799
				CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
				ValidateAlignment<float>(void); // 508
				CUtlMemory<float, int>::Purge(); // 510
				CUtlMemory<float, int>::~CUtlMemory(); // 562
				CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
				CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 52
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
				CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
				CUtlMemory<unsigned int, int>::Purge(); // 903
				CUtlMemory<unsigned int, int>::Purge(); // 1799
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
				ValidateAlignment<unsigned int>(void); // 508
				CUtlMemory<unsigned int, int>::Purge(); // 510
				CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
				CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
				TextureSpecification_t::~TextureSpecification_t(); // 873
				VulkanTextureReleaseResources_t::~VulkanTextureReleaseResources_t(); // 1526
				Destruct<CRenderDeviceVulkan::VulkanTextureReleaseResources_t>(VulkanTextureReleaseResources_t* pMemory); // 1723
			}
			RemoveAll(const CUtlVectorBase<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, CUtlMemory<CRenderDeviceVulkan::VulkanTextureR this); // 1798
			CUtlMemory<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, int>::Purge(); // 903
			CUtlMemory<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, int>::Purge(); // 1799
			Purge(const CUtlVectorBase<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, CUtlMemory<CRenderDeviceVulkan::VulkanTextureR this); // 560
			ValidateAlignment<CRenderDeviceVulkan::VulkanTextureReleaseResources_t>(void); // 508
			CUtlMemory<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, int>::Purge(); // 510
			CUtlMemory<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, CUtlMemory<CRenderDeviceVulkan::VulkanTextureR this); // 410
			~CUtlVector(const CUtlVector<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, CUtlMemory<CRenderDeviceVulkan::VulkanTextureRelea this); // 884
			FencedVulkanTextureRelease_t::~FencedVulkanTextureRelease_t(); // 1526
			Destruct<CRenderDeviceVulkan::FencedVulkanTextureRelease_t>(FencedVulkanTextureRelease_t* pMemory); // 1575
			{
				const bool  bNotLast; // 1578
				CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextu this,
					int i);  // 1584
				CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextu this,
					int i);  // 1584
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 1584
			}
			FastRemove(const CUtlVectorBase<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextu this,
					int elem);  // 4306
			CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextu this,
					int i);  // 4292
		}
		Count(const CUtlVectorBase<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulka this); // 4290
	}
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 484
	CMemoryManagerVulkan::GetHighestFrameCompletedOnGPU(); // 4287
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 4289
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 4309
} /* size: 1404, variables: 1, inline expansions: 8 (217 bytes) */

// <00A2581F> vulkan/renderdevicevulkan.cpp:4314
// function calls: 5
void CRenderDeviceVulkan::MarkResourceUsed(RenderResourceHandle_t hResource)
{
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 4316
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 80
	CRenderResource::MarkUsed(
		uint nFrameNumber);  // 155
	CRenderResourceMgr::MarkUsed(
		RenderResourceHandle_t hResource,
		int nFrameCount);  // 4316
} /* size: 34, inline expansions: 5 (64 bytes) */

// <00A5F471> vulkan/renderdevicevulkan.cpp:4320
// variable: 1
// function calls: 2
void CRenderDeviceVulkan::SetHardwareGammaRamp(SwapChainHandle_t hSwapChain, float fGamma, float fGammaTVRangeMin, float fGammaTVRangeMax, float fGammaTVExponent, bool bTVEnabled)
{
	const CSwapChainVulkan* pSwapChain; // 4322
	CRenderDeviceBase::GetSwapChain<CSwapChainVulkan>(
					SwapChainHandle_t hSwapChain);  // 4322
	CRenderDeviceVulkan::SetHardwareGammaRamp(
				SwapChainHandle_t hSwapChain,
				float fGamma,
				float fGammaTVRangeMin,
				float fGammaTVRangeMax,
				float fGammaTVExponent,
				bool bTVEnabled);  // 4320
} /* size: 77, variables: 1, inline expansions: 2 (56 bytes) */

// <00A257AB> vulkan/renderdevicevulkan.cpp:4320
// variable: 1
void CRenderDeviceVulkan::SetHardwareGammaRamp(SwapChainHandle_t hSwapChain, float fGamma, float fGammaTVRangeMin, float fGammaTVRangeMax, float fGammaTVExponent, bool bTVEnabled)
{
	const CSwapChainVulkan* pSwapChain; // 4322
} /* size: 0, variables: 1 */

// <009A198A> vulkan/renderdevicevulkan.cpp:4334
// member functions: 12
// member variables: 3
// vtable entries: 2
// class size: 112
class CVfxShaderFileRenderShaderBuffer : public IRenderShaderByteCode {
public:
	/* class IRenderShaderByteCode <ancestor>; */ /* 0 8 */
private:
	/* vulkan/renderdevicevulkan.cpp:4336 */
	void CVfxShaderFileRenderShaderBuffer(CVfxShaderFileRenderShaderBuffer* , const CVfxShaderFileRenderShaderBuffer& );
	/* vulkan/renderdevicevulkan.cpp:4337 */
	CVfxShaderFileRenderShaderBuffer& operator=(CVfxShaderFileRenderShaderBuffer* , const CVfxShaderFileRenderShaderBuffer& );
	/* vulkan/renderdevicevulkan.cpp:4340 */
	void CVfxShaderFileRenderShaderBuffer(CVfxShaderFileRenderShaderBuffer* , const char* , uint32);
	/* vulkan/renderdevicevulkan.cpp:4346 */
	virtual void ~CVfxShaderFileRenderShaderBuffer(CVfxShaderFileRenderShaderBuffer* );
	/* vulkan/renderdevicevulkan.cpp:4348 */
	virtual uint32 GetSize(const CVfxShaderFileRenderShaderBuffer* );
	/* vulkan/renderdevicevulkan.cpp:4350 */
	virtual const void* GetBits(const CVfxShaderFileRenderShaderBuffer* );
	CVfxShaderFile m_ShaderFile; /* 8 0 */
	CUtlBuffer m_SerializedBuffer; /* 32 80 */
	void CVfxShaderFileRenderShaderBuffer(class CVfxShaderFileRenderShaderBuffer *, const class CVfxShaderFileRenderShaderBuffer  &); /* linkage=_ZN32CVfxShaderFileRenderShaderBufferC4ERKS_ */
	class CVfxShaderFileRenderShaderBuffer & operator=(class CVfxShaderFileRenderShaderBuffer *, const class CVfxShaderFileRenderShaderBuffer  &); /* linkage=_ZN32CVfxShaderFileRenderShaderBufferaSERKS_ */
	void CVfxShaderFileRenderShaderBuffer(class CVfxShaderFileRenderShaderBuffer *, const char  *, uint32); /* linkage=_ZN32CVfxShaderFileRenderShaderBufferC4EPKcj */
	virtual void ~CVfxShaderFileRenderShaderBuffer(class CVfxShaderFileRenderShaderBuffer *); /* linkage=_ZN32CVfxShaderFileRenderShaderBufferD4Ev */
	virtual uint32 GetSize(const class CVfxShaderFileRenderShaderBuffer  *); /* linkage=_ZNK32CVfxShaderFileRenderShaderBuffer7GetSizeEv */
	virtual const void  * GetBits(const class CVfxShaderFileRenderShaderBuffer  *); /* linkage=_ZNK32CVfxShaderFileRenderShaderBuffer7GetBitsEv */
};

// <00A25722> vulkan/renderdevicevulkan.cpp:4340
void CVfxShaderFileRenderShaderBuffer::CVfxShaderFileRenderShaderBuffer(const char* pShaderSource, uint32 nSizeInBytes)
{
} /* size: 0 */

// <00A256EF> vulkan/renderdevicevulkan.cpp:4340
inline void CVfxShaderFileRenderShaderBuffer::CVfxShaderFileRenderShaderBuffer(const char* pShaderSource, uint32 nSizeInBytes)
{
} /* size: 0 */

// <00A25585> vulkan/renderdevicevulkan.cpp:4346
// function calls: 6
void CVfxShaderFileRenderShaderBuffer::~CVfxShaderFileRenderShaderBuffer()
{
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 4346
} /* size: 81, inline expansions: 6 (99 bytes) */

// <00A253B6> vulkan/renderdevicevulkan.cpp:4346
// function calls: 8
void CVfxShaderFileRenderShaderBuffer::~CVfxShaderFileRenderShaderBuffer()
{
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 4346
	IRenderShaderByteCode::~IRenderShaderByteCode(); // 4346
	CVfxShaderFileRenderShaderBuffer::~CVfxShaderFileRenderShaderBuffer(); // 4346
} /* size: 76, inline expansions: 8 (125 bytes) */

// <00A2539D> vulkan/renderdevicevulkan.cpp:4346
inline void CVfxShaderFileRenderShaderBuffer::~CVfxShaderFileRenderShaderBuffer()
{
} /* size: 0 */

// <00A2533D> vulkan/renderdevicevulkan.cpp:4348
// function call: 1
void CVfxShaderFileRenderShaderBuffer::GetSize()
{
	CUtlBuffer::TellPut(); // 4348
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00A252A7> vulkan/renderdevicevulkan.cpp:4350
// function calls: 2
const void* CVfxShaderFileRenderShaderBuffer::GetBits()
{
	CUtlMemory<unsigned char, int>::Base(); // 1479
	CUtlBuffer::Base(); // 4350
} /* size: 9, inline expansions: 2 (0 bytes) */

// <00A71285> vulkan/renderdevicevulkan.cpp:4356
// function calls: 11
void CRenderDeviceVulkan::CompileShader(const char* pProgram, uint32 nBufLen, const char* pShaderVersion)
{
	IRenderShaderByteCode::IRenderShaderByteCode(); // 4341
	CVfxShaderFileRenderShaderBuffer::CVfxShaderFileRenderShaderBuffer(
					const char* pShaderSource,
					uint32 nSizeInBytes);  // 4359
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
			pointer __p);  // 4359
} /* size: 129, inline expansions: 11 (75 bytes) */

// <00A25267> vulkan/renderdevicevulkan.cpp:4356
void CRenderDeviceVulkan::CompileShader(const char* pProgram, uint32 nBufLen, const char* pShaderVersion)
{
} /* size: 0 */

// <00A24AA5> vulkan/renderdevicevulkan.cpp:4366
// variables: 5
// function calls: 22
void CRenderDeviceVulkan::CreateGenericShader(VkShaderStageFlagBits shaderStage, IRenderShaderByteCode* pShaderBuffer, const char* pDebugName)
{
	bool bIsSPIRV; // 4368
	UtlHashHandle_t hShaderFile; // 4369
	{
		BaseShaderIndex_t nIndex; // 4372
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_4375; // 4375
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 4375
			CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::IsValidIterator(
					const Iterator_t& it);  // 81
			CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::HeaderToBlock(
					const BlockHeader_t* pHeader);  // 131
			CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::IsInBlock(
					intp i,
					BlockHeader_t* pBlockHeader);  // 85
			CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::IsValidIterator(
					const Iterator_t& it);  // 82
			CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::GetIndex(
				const Iterator_t& it);  // 86
			{
				BlockHeader_t* pbh; // 88
				CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::HeaderToBlock(
						const BlockHeader_t* pHeader);  // 131
				CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::IsInBlock(
						intp i,
						BlockHeader_t* pBlockHeader);  // 90
			}
			{
			}
			CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::IsIdxAfter(
					intp i,
					const Iterator_t& it);  // 591
			IsValidIndex(const CUtlLinkedList<CShaderVulkanBase, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CSh this,
					long long int i);  // 977
			CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::operator[](
					intp i);  // 367
			InternalElement(const CUtlLinkedList<CShaderVulkanBase, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CShaderVu this,
					long long int i);  // 1011
			{
			}
			LinkBefore(const CUtlLinkedList<CShaderVulkanBase, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CShaderVu this,
					long long int before,
					long long int elem);  // 771
			Element(const CUtlLinkedList<CShaderVulkanBase, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CShaderVu this,
				long long int i);  // 774
			Construct<CShaderVulkanBase>(CShaderVulkanBase* pMemory); // 774
			InsertBefore(const CUtlLinkedList<CShaderVulkanBase, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CShaderVu this,
					long long int before);  // 805
			AddToTail(const CUtlLinkedList<CShaderVulkanBase, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CShaderVu this); // 4376
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 4377
		}
	}
} /* size: 0, variables: 2 */

// <00A6A3B3> vulkan/renderdevicevulkan.cpp:4398
// variables: 2
// function calls: 3
void CRenderDeviceVulkan::DestroyGenericShader(RenderShaderHandle_t hShader)
{
	BaseShaderIndex_t i; // 4403
	bool bDeferDeletion; // 4404
	CRenderDeviceVulkan::EXTGraphicsPipelineLibraryEnabled(); // 4406
	operator[](const CUtlLinkedList<CShaderVulkanBase, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CShaderVu this,
			long long int i);  // 4408
	CRenderDeviceVulkan::DestroyGenericShader(
				RenderShaderHandle_t hShader);  // 4398
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <00A24A67> vulkan/renderdevicevulkan.cpp:4398
// variables: 2
void CRenderDeviceVulkan::DestroyGenericShader(RenderShaderHandle_t hShader)
{
	BaseShaderIndex_t i; // 4403
	bool bDeferDeletion; // 4404
} /* size: 0, variables: 2 */

// <00A69C1B> vulkan/renderdevicevulkan.cpp:4418
// variables: 3
// function calls: 23
void CRenderDeviceVulkan::DeleteGenericShader(RenderShaderHandle_t hShader, bool bForceDeleteNow)
{
	CRenderDeviceVulkan::EXTGraphicsPipelineLibraryEnabled(); // 4420
	CAsyncCompileHelperVulkan::BEnabled(); // 4420
	{
		BaseShaderIndex_t i; // 4422
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_4424; // 4424
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 4424
			CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::IsValidIterator(
					const Iterator_t& it);  // 81
			CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::IsValidIterator(
					const Iterator_t& it);  // 82
			CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::HeaderToBlock(
					const BlockHeader_t* pHeader);  // 131
			CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::IsInBlock(
					intp i,
					BlockHeader_t* pBlockHeader);  // 85
			CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::GetIndex(
				const Iterator_t& it);  // 86
			{
				BlockHeader_t* pbh; // 88
				CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::HeaderToBlock(
						const BlockHeader_t* pHeader);  // 131
				CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::IsInBlock(
						intp i,
						BlockHeader_t* pBlockHeader);  // 90
			}
			{
			}
			CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::IsIdxAfter(
					intp i,
					const Iterator_t& it);  // 591
			IsValidIndex(const CUtlLinkedList<CShaderVulkanBase, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CSh this,
					long long int i);  // 749
			{
			}
			CUtlFixedMemory<UtlLinkedListElem_t<CShaderVulkanBase, long long int> >::operator[](
					intp i);  // 367
			InternalElement(const CUtlLinkedList<CShaderVulkanBase, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CShaderVu this,
					long long int i);  // 752
			Destruct<CShaderVulkanBase>(CShaderVulkanBase* pMemory); // 753
			{
			}
			Free(const CUtlLinkedList<CShaderVulkanBase, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CShaderVu this,
				long long int elem);  // 907
			Remove(const CUtlLinkedList<CShaderVulkanBase, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CShaderVu this,
				long long int elem);  // 4425
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 4426
		}
	}
	CRenderDeviceVulkan::DeleteGenericShader(
				RenderShaderHandle_t hShader,
				bool bForceDeleteNow);  // 4418
} /* size: 0, inline expansions: 3 (16 bytes) */

// <00A24A18> vulkan/renderdevicevulkan.cpp:4418
// variables: 2
void CRenderDeviceVulkan::DeleteGenericShader(RenderShaderHandle_t hShader, bool bForceDeleteNow)
{
	{
		BaseShaderIndex_t i; // 4422
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_4424; // 4424
		}
	}
} /* size: 0 */

// <00A243F4> vulkan/renderdevicevulkan.cpp:4435
// variables: 4
// function calls: 16
void CRenderDeviceVulkan::CreateMemoryPooledGPUBuffer(IBufferMovedListener* pMoveListener, const BufferDesc_t& desc, VulkanMemoryPoolType_t nMemoryPool, CRenderContextVulkan* pContext, void* pInitialData)
{
	CVertexBufferVulkan* pBuffer; // 4437
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4446; // 4446
	VertexBufferHandle_t hBuffer; // 4448
	LockDesc_t lockDesc; // 4450
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 4446
	AddToDHead<CVertexBufferBase>(CVertexBufferBase *& head,
					CVertexBufferBase* which);  // 1186
	CUtlIntrusiveDList<CVertexBufferBase>::AddToHead(
			CVertexBufferBase* node);  // 4447
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 4455
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 4465
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 4459
} /* size: 414, variables: 4, inline expansions: 16 (538 bytes) */

// <00A24399> vulkan/renderdevicevulkan.cpp:4468
void CRenderDeviceVulkan::ReserveAccelStructBuildScratchSize(int nSize)
{
} /* size: 81 */

// <00A23D1A> vulkan/renderdevicevulkan.cpp:4479
// variables: 4
// function calls: 18
void CRenderDeviceVulkan::AccelStructBuildScratchBuffer()
{
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 4481
	}
	{
		BufferDesc_t desc; // 4489
		CVertexBufferVulkan* pScratchBuf; // 4495
		{
			{
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4504; // 4504
				ThreadInterlockedAssignIf64(volatile int64* pDest,
								int64 value,
								int64 comparand);  // 800
				CThreadFastMutex::TryLockInline(
						const char* pFileName,
						int nLineNumber,
						const ThreadId_t  threadId);  // 837
				ThreadPause(void); // 839
				CThreadFastMutex::Lock(
					const char* pFileName,
					int nLineNumber,
					unsigned int nSpinSleepTime);  // 943
				Lock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
						const CThreadFastMutex& lock,
						const char* pFilename,
						int nLineNumber);  // 4504
				AddToDHead<CVertexBufferBase>(CVertexBufferBase *& head,
								CVertexBufferBase* which);  // 1186
				CUtlIntrusiveDList<CVertexBufferBase>::AddToHead(
						CVertexBufferBase* node);  // 4505
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 4507
			}
			_DebuggerBreakInlineExpressionWrapper(void); // 4501
		}
	}
	{
		CVertexBufferVulkan* pVertexBuffer; // 4516
		CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
		CRenderDeviceBase::GetContextFrameCount(); // 4521
		Max<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 80
		CRenderResource::MarkUsed(
			uint nFrameNumber);  // 4521
	}
} /* size: 0 */

// <00A2342A> vulkan/renderdevicevulkan.cpp:4531
// variables: 5
// function calls: 29
void CRenderDeviceVulkan::CreateVertexShader(unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShaderBuffer, const char* pDebugName)
{
	bool bIsSPIRV; // 4533
	UtlHashHandle_t hShaderFile; // 4534
	{
		VertexShaderIndex_t nIndex; // 4537
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_4539; // 4539
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 4539
			CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::IsValidIterator(
					const Iterator_t& it);  // 81
			CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::HeaderToBlock(
					const BlockHeader_t* pHeader);  // 131
			CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::IsInBlock(
					intp i,
					BlockHeader_t* pBlockHeader);  // 85
			CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::IsValidIterator(
					const Iterator_t& it);  // 82
			CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::GetIndex(
				const Iterator_t& it);  // 86
			{
				BlockHeader_t* pbh; // 88
				CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::HeaderToBlock(
						const BlockHeader_t* pHeader);  // 131
				CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::IsInBlock(
						intp i,
						BlockHeader_t* pBlockHeader);  // 90
			}
			{
			}
			CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::IsIdxAfter(
					intp i,
					const Iterator_t& it);  // 591
			IsValidIndex(const CUtlLinkedList<CVertexShaderVulkan, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<C this,
					long long int i);  // 977
			CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::operator[](
					intp i);  // 367
			InternalElement(const CUtlLinkedList<CVertexShaderVulkan, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CVertex this,
					long long int i);  // 1011
			{
			}
			LinkBefore(const CUtlLinkedList<CVertexShaderVulkan, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CVertex this,
					long long int before,
					long long int elem);  // 771
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 8081
			CVertexShaderVulkan::CVertexShaderVulkan(); // 1479
			Construct<CVertexShaderVulkan>(CVertexShaderVulkan* pMemory); // 774
			InsertBefore(const CUtlLinkedList<CVertexShaderVulkan, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CVertex this,
					long long int before);  // 805
			AddToTail(const CUtlLinkedList<CVertexShaderVulkan, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CVertex this); // 4540
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 4541
		}
	}
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 472
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::get(); // 4534
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <00A6ACCA> vulkan/renderdevicevulkan.cpp:4557
// variables: 2
// function calls: 3
void CRenderDeviceVulkan::DestroyVertexShader(RenderShaderHandle_t hShader)
{
	VertexShaderIndex_t i; // 4562
	bool bDeferDeletion; // 4563
	CRenderDeviceVulkan::EXTGraphicsPipelineLibraryEnabled(); // 4565
	operator[](const CUtlLinkedList<CVertexShaderVulkan, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CVertex this,
			long long int i);  // 4567
	CRenderDeviceVulkan::DestroyVertexShader(
				RenderShaderHandle_t hShader);  // 4557
} /* size: 97, variables: 2, inline expansions: 3 (24 bytes) */

// <00A233EC> vulkan/renderdevicevulkan.cpp:4557
// variables: 2
void CRenderDeviceVulkan::DestroyVertexShader(RenderShaderHandle_t hShader)
{
	VertexShaderIndex_t i; // 4562
	bool bDeferDeletion; // 4563
} /* size: 0, variables: 2 */

// <00A6A532> vulkan/renderdevicevulkan.cpp:4577
// variables: 3
// function calls: 23
void CRenderDeviceVulkan::DeleteVertexShader(RenderShaderHandle_t hShader, bool bForceDeleteNow)
{
	CRenderDeviceVulkan::EXTGraphicsPipelineLibraryEnabled(); // 4579
	CAsyncCompileHelperVulkan::BEnabled(); // 4579
	{
		BaseShaderIndex_t i; // 4581
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_4583; // 4583
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 4583
			CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::IsValidIterator(
					const Iterator_t& it);  // 81
			CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::IsValidIterator(
					const Iterator_t& it);  // 82
			CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::HeaderToBlock(
					const BlockHeader_t* pHeader);  // 131
			CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::IsInBlock(
					intp i,
					BlockHeader_t* pBlockHeader);  // 85
			CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::GetIndex(
				const Iterator_t& it);  // 86
			{
				BlockHeader_t* pbh; // 88
				CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::HeaderToBlock(
						const BlockHeader_t* pHeader);  // 131
				CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::IsInBlock(
						intp i,
						BlockHeader_t* pBlockHeader);  // 90
			}
			{
			}
			CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::IsIdxAfter(
					intp i,
					const Iterator_t& it);  // 591
			IsValidIndex(const CUtlLinkedList<CVertexShaderVulkan, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<C this,
					long long int i);  // 749
			{
			}
			CUtlFixedMemory<UtlLinkedListElem_t<CVertexShaderVulkan, long long int> >::operator[](
					intp i);  // 367
			InternalElement(const CUtlLinkedList<CVertexShaderVulkan, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CVertex this,
					long long int i);  // 752
			Destruct<CVertexShaderVulkan>(CVertexShaderVulkan* pMemory); // 753
			{
			}
			Free(const CUtlLinkedList<CVertexShaderVulkan, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CVertex this,
				long long int elem);  // 907
			Remove(const CUtlLinkedList<CVertexShaderVulkan, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CVertex this,
				long long int elem);  // 4584
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 4585
		}
	}
	CRenderDeviceVulkan::DeleteVertexShader(
				RenderShaderHandle_t hShader,
				bool bForceDeleteNow);  // 4577
} /* size: 0, inline expansions: 3 (24 bytes) */

// <00A2339D> vulkan/renderdevicevulkan.cpp:4577
// variables: 2
void CRenderDeviceVulkan::DeleteVertexShader(RenderShaderHandle_t hShader, bool bForceDeleteNow)
{
	{
		BaseShaderIndex_t i; // 4581
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_4583; // 4583
		}
	}
} /* size: 0 */

// <00A232B7> vulkan/renderdevicevulkan.cpp:4594
// function calls: 2
void CRenderDeviceVulkan::CreateGeometryShader(unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShaderBuffer, const char* pDebugName)
{
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 472
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::get(); // 4596
} /* size: 20, inline expansions: 2 (0 bytes) */

// <00A230FA> vulkan/renderdevicevulkan.cpp:4599
// function calls: 4
void CRenderDeviceVulkan::DestroyGeometryShader(RenderShaderHandle_t hShader)
{
	CRenderDeviceVulkan::EXTGraphicsPipelineLibraryEnabled(); // 4406
	operator[](const CUtlLinkedList<CShaderVulkanBase, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CShaderVu this,
			long long int i);  // 4408
	CRenderDeviceVulkan::DestroyGenericShader(
				RenderShaderHandle_t hShader);  // 4398
	CRenderDeviceVulkan::DestroyGenericShader(
				RenderShaderHandle_t hShader);  // 4601
} /* size: 97, inline expansions: 4 (100 bytes) */

// <00A23013> vulkan/renderdevicevulkan.cpp:4604
// function calls: 2
void CRenderDeviceVulkan::CreateComputeShader(unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShaderBuffer, const char* pDebugName)
{
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 472
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::get(); // 4606
} /* size: 20, inline expansions: 2 (0 bytes) */

// <00A22FED> vulkan/renderdevicevulkan.cpp:4609
void CRenderDeviceVulkan::DestroyComputeShader(RenderShaderHandle_t hShader)
{
} /* size: 0 */

// <00A22F07> vulkan/renderdevicevulkan.cpp:4614
// function calls: 2
void CRenderDeviceVulkan::CreatePixelShader(unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShaderBuffer, const char* pDebugName)
{
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 472
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::get(); // 4616
} /* size: 20, inline expansions: 2 (0 bytes) */

// <00A22EE1> vulkan/renderdevicevulkan.cpp:4619
void CRenderDeviceVulkan::DestroyPixelShader(RenderShaderHandle_t hShader)
{
} /* size: 0 */

// <00A22DF9> vulkan/renderdevicevulkan.cpp:4624
// function calls: 2
void CRenderDeviceVulkan::CreateRayTraceShader(unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShaderBuffer, const char* pDebugName)
{
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 472
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::get(); // 4626
} /* size: 20, inline expansions: 2 (0 bytes) */

// <00A22DD3> vulkan/renderdevicevulkan.cpp:4632
void CRenderDeviceVulkan::DestroyRayTraceShader(RenderShaderHandle_t hShader)
{
} /* size: 0 */

// <00A21D72> vulkan/renderdevicevulkan.cpp:4637
// variables: 6
// function calls: 82
void CRenderDeviceVulkan::RecycleDynamicBufferPools()
{
	{
		int i; // 4640
		Count(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertex this); // 4640
		CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this,
				int i);  // 4642
		CUtlMemory<CVertexBufferVulkan::Base(); // 112
		CUtlVectorBase<CVertexBufferVulkan::Base(); // 4644
		CUtlVectorBase<CVertexBufferVulkan::Count(); // 4644
		CUtlMemory<CVertexBufferVulkan::NumAllocated(); // 782
		CUtlMemory<CVertexBufferVulkan::Base(); // 112
		CUtlVectorBase<CVertexBufferVulkan::Base(); // 368
		CUtlVectorBase<CVertexBufferVulkan::ResetDbgInfo(); // 824
		CUtlVectorBase<CVertexBufferVulkan::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CVertexBufferVulkan::GrowVector(
				int num);  // 1484
		{
			int i; // 1500
			CUtlMemory<CVertexBufferVulkan::operator[](
					int i);  // 602
			CUtlVectorBase<CVertexBufferVulkan::Element(
				int i);  // 1502
			CopyConstruct<CVertexBufferVulkan*>(CVertexBufferVulkan** pMemory,
								CVertexBufferVulkan* const& src);  // 1502
		}
		CUtlVectorBase<CVertexBufferVulkan::InsertMultipleBefore(
					int elem,
					int num,
					CVertexBufferVulkan* const* pToInsert);  // 1476
		CUtlVectorBase<CVertexBufferVulkan::InsertMultipleBefore(
					int elem,
					int num,
					CVertexBufferVulkan* const* pToInsert);  // 1303
		CUtlVectorBase<CVertexBufferVulkan::AddMultipleToTail(
					int num,
					CVertexBufferVulkan* const* pToCopy);  // 4644
		CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this,
			int i);  // 1575
		CUtlMemory<CVertexBufferVulkan::Purge(); // 903
		CUtlMemory<CVertexBufferVulkan::IsExternallyAllocated(); // 905
		CUtlMemory<CVertexBufferVulkan::Purge(); // 1799
		CUtlVectorBase<CVertexBufferVulkan::RemoveAll(); // 1798
		CUtlVectorBase<CVertexBufferVulkan::Purge(); // 560
		ValidateAlignment<CVertexBufferVulkan*>(void); // 508
		CUtlMemory<CVertexBufferVulkan::Purge(); // 510
		CUtlMemory<CVertexBufferVulkan::~CUtlMemory(); // 562
		CUtlVectorBase<CVertexBufferVulkan::~CUtlVectorBase(); // 410
		CUtlVector<CVertexBufferVulkan::~CUtlVector(); // 892
		FencedVertexBufferRelease_t::~FencedVertexBufferRelease_t(); // 1526
		Destruct<CRenderDeviceVulkan::FencedVertexBufferRelease_t>(FencedVertexBufferRelease_t* pMemory); // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this,
				int i);  // 1584
			CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this,
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		FastRemove(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this,
				int elem);  // 4645
	}
	{
		int i; // 4651
		Count(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBu this); // 4651
		CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this,
				int i);  // 4653
		CUtlMemory<CIndexBufferVulkan::Base(); // 112
		CUtlVectorBase<CIndexBufferVulkan::Base(); // 4655
		CUtlVectorBase<CIndexBufferVulkan::Count(); // 4655
		CUtlMemory<CIndexBufferVulkan::NumAllocated(); // 782
		CUtlMemory<CIndexBufferVulkan::Base(); // 112
		CUtlVectorBase<CIndexBufferVulkan::Base(); // 368
		CUtlVectorBase<CIndexBufferVulkan::ResetDbgInfo(); // 824
		CUtlVectorBase<CIndexBufferVulkan::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CIndexBufferVulkan::GrowVector(
				int num);  // 1484
		{
			int i; // 1500
			CUtlMemory<CIndexBufferVulkan::operator[](
					int i);  // 602
			CUtlVectorBase<CIndexBufferVulkan::Element(
				int i);  // 1502
			CopyConstruct<CIndexBufferVulkan*>(CIndexBufferVulkan** pMemory,
								CIndexBufferVulkan* const& src);  // 1502
		}
		CUtlVectorBase<CIndexBufferVulkan::InsertMultipleBefore(
					int elem,
					int num,
					CIndexBufferVulkan* const* pToInsert);  // 1476
		CUtlVectorBase<CIndexBufferVulkan::InsertMultipleBefore(
					int elem,
					int num,
					CIndexBufferVulkan* const* pToInsert);  // 1303
		CUtlVectorBase<CIndexBufferVulkan::AddMultipleToTail(
					int num,
					CIndexBufferVulkan* const* pToCopy);  // 4655
		CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this,
			int i);  // 1575
		CUtlMemory<CIndexBufferVulkan::Purge(); // 903
		CUtlMemory<CIndexBufferVulkan::IsExternallyAllocated(); // 905
		CUtlMemory<CIndexBufferVulkan::Purge(); // 1799
		CUtlVectorBase<CIndexBufferVulkan::RemoveAll(); // 1798
		CUtlVectorBase<CIndexBufferVulkan::Purge(); // 560
		ValidateAlignment<CIndexBufferVulkan*>(void); // 508
		CUtlMemory<CIndexBufferVulkan::Purge(); // 510
		CUtlMemory<CIndexBufferVulkan::~CUtlMemory(); // 562
		CUtlVectorBase<CIndexBufferVulkan::~CUtlVectorBase(); // 410
		CUtlVector<CIndexBufferVulkan::~CUtlVector(); // 901
		FencedIndexBufferRelease_t::~FencedIndexBufferRelease_t(); // 1526
		Destruct<CRenderDeviceVulkan::FencedIndexBufferRelease_t>(FencedIndexBufferRelease_t* pMemory); // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this,
				int i);  // 1584
			CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this,
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		FastRemove(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this,
				int elem);  // 4656
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 4639
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 4648
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 4650
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 4659
} /* size: 1282, inline expansions: 4 (255 bytes) */

// <00A21915> vulkan/renderdevicevulkan.cpp:4662
// variables: 2
// function calls: 13
void CRenderDeviceVulkan::CreateVertexBuffer(RenderBufferType_t nType, const BufferDesc_t& desc, RenderBufferFlags_t nExtraUsageFlags)
{
	CVertexBufferVulkan* pVertexBuffer; // 4664
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4665; // 4665
	operator|(RenderBufferFlags_t a,
			RenderBufferFlags_t b);  // 4664
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 4665
	AddToDHead<CVertexBufferBase>(CVertexBufferBase *& head,
					CVertexBufferBase* which);  // 1186
	CUtlIntrusiveDList<CVertexBufferBase>::AddToHead(
			CVertexBufferBase* node);  // 4666
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 4668
} /* size: 269, variables: 2, inline expansions: 13 (506 bytes) */

// <00A21464> vulkan/renderdevicevulkan.cpp:4670
// variables: 2
// function calls: 13
void CRenderDeviceVulkan::CreateVertexBuffer(RenderBufferType_t nType, const BufferDesc_t& desc, int nLayoutFields, const RenderInputLayoutField_t* pLayoutFields, RenderBufferFlags_t nExtraUsageFlags)
{
	CVertexBufferVulkan* pVertexBuffer; // 4672
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4674; // 4674
	operator|(RenderBufferFlags_t a,
			RenderBufferFlags_t b);  // 4672
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 4674
	AddToDHead<CVertexBufferBase>(CVertexBufferBase *& head,
					CVertexBufferBase* which);  // 1186
	CUtlIntrusiveDList<CVertexBufferBase>::AddToHead(
			CVertexBufferBase* node);  // 4675
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 4677
} /* size: 296, variables: 2, inline expansions: 13 (508 bytes) */

// <00A20FF8> vulkan/renderdevicevulkan.cpp:4679
// variables: 2
// function calls: 13
void CRenderDeviceVulkan::CreateVertexBuffer(RenderBufferType_t nType, const BufferDesc_t& desc, RenderInputLayout_t hLayout, RenderBufferFlags_t nExtraUsageFlags)
{
	CVertexBufferVulkan* pVertexBuffer; // 4681
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4683; // 4683
	operator|(RenderBufferFlags_t a,
			RenderBufferFlags_t b);  // 4681
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 4683
	AddToDHead<CVertexBufferBase>(CVertexBufferBase *& head,
					CVertexBufferBase* which);  // 1186
	CUtlIntrusiveDList<CVertexBufferBase>::AddToHead(
			CVertexBufferBase* node);  // 4684
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 4686
} /* size: 277, variables: 2, inline expansions: 13 (500 bytes) */

// <00A636BA> vulkan/renderdevicevulkan.cpp:4689
// variables: 4
// function calls: 25
void CRenderDeviceVulkan::DestroyVertexBuffer(VertexBufferHandle_t hVertexBuffer)
{
	{
		CVertexBufferVulkan* pVertexBuffer; // 4693
		CInterlockedIntT<int, 4>::operator int(); // 43
		CDescriptorSetReferenced::GetDescriptorSetRefCount(); // 4694
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4702; // 4702
			ThreadInterlockedAssignIf64(volatile int64* pDest,
							int64 value,
							int64 comparand);  // 800
			CThreadFastMutex::TryLockInline(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 837
			ThreadPause(void); // 839
			CThreadFastMutex::Lock(
				const char* pFileName,
				int nLineNumber,
				unsigned int nSpinSleepTime);  // 943
			Lock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
					const CThreadFastMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 4702
			CDescriptorSetReferenced::SetDeleted(
					bool bDeleted);  // 4704
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 4705
		}
	}
	{
		CVertexBufferVulkan* pVertexBuffer; // 4693
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4696; // 4696
			ThreadInterlockedAssignIf64(volatile int64* pDest,
							int64 value,
							int64 comparand);  // 800
			CThreadFastMutex::TryLockInline(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 837
			ThreadPause(void); // 839
			CThreadFastMutex::Lock(
				const char* pFileName,
				int nLineNumber,
				unsigned int nSpinSleepTime);  // 943
			Lock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
					const CThreadFastMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 4696
			{
			}
			{
			}
			{
			}
			RemoveFromDList<CVertexBufferBase>(CVertexBufferBase *& head,
								CVertexBufferBase* which);  // 1195
			CUtlIntrusiveDList<CVertexBufferBase>::RemoveNode(
					CVertexBufferBase* which);  // 4697
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 4699
		}
	}
	CRenderDeviceVulkan::DestroyVertexBuffer(
				VertexBufferHandle_t hVertexBuffer);  // 4689
} /* size: 0, inline expansions: 1 (371 bytes) */

// <00A20FA1> vulkan/renderdevicevulkan.cpp:4689
// variables: 3
void CRenderDeviceVulkan::DestroyVertexBuffer(VertexBufferHandle_t hVertexBuffer)
{
	{
		CVertexBufferVulkan* pVertexBuffer; // 4693
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4696; // 4696
		}
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4702; // 4702
		}
	}
} /* size: 0 */

// <00A20688> vulkan/renderdevicevulkan.cpp:4709
// variables: 4
// function calls: 26
void CRenderDeviceVulkan::AcquirePooledDynamicVertexBuffer(PerThreadDataVulkan_t* pPerThread, const BufferDesc_t& desc, RenderBufferFlags_t nFlags, ImageFormat nFormat)
{
	int nLast; // 4711
	DynamicVertexBufferHandle_t hBuffer; // 4720
	{
		CVertexBufferVulkan* pVertexBuffer; // 4714
		CUtlMemory<CVertexBufferVulkan::operator[](
				int i);  // 588
		CUtlVectorBase<CVertexBufferVulkan::operator[](
				int i);  // 4714
		CUtlVectorBase<CVertexBufferVulkan::RemoveMultipleFromTail(
					int num);  // 4715
	}
	CUtlVectorBase<CVertexBufferVulkan::Count(); // 4711
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<DynamicVertexBufferHandle_t__*>(DynamicVertexBufferHandle_t__** pMemory,
							DynamicVertexBufferHandle_t__* const& src);  // 1090
	{
	}
	{
	}
	{
		Node_t* pCurEnd; // 977
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<DynamicVertexBufferHandle_t__::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<DynamicVertexBufferHandle_t__::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 985
		{
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 1142
		CTSQueue<DynamicVertexBufferHandle_t__::InterlockedCompareExchangeNode(
						volatile Node_t** ppNode,
						Node_t* value,
						Node_t* comperand);  // 977
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<DynamicVertexBufferHandle_t__::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<DynamicVertexBufferHandle_t__::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<DynamicVertexBufferHandle_t__::Push(
		Node_t* pNode);  // 1091
	Node_t::Node_t(); // 1088
	CTSQueue<DynamicVertexBufferHandle_t__::PushItem(
		DynamicVertexBufferHandle_t__* const& init);  // 4729
} /* size: 0, variables: 2, inline expansions: 16 (1062 bytes) */

// <00A1FD08> vulkan/renderdevicevulkan.cpp:4733
// variables: 6
// function calls: 35
void CRenderDeviceVulkan::ReleasePooledDynamicVertexBuffers(PerThreadDataVulkan_t* pPerThread, DynamicVertexBufferHandle_t* pVertexBufferHandles, size_t nVertexBufferHandles)
{
	CPipelineFence* pReleaseFence; // 4735
	FencedVertexBufferRelease_t* pSet; // 4738
	{
		int i; // 4739
		Count(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertex this); // 4739
		CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this,
				int i);  // 4741
	}
	{
		size_t i; // 4760
		{
			DynamicVertexBufferHandle_t hVertexBuffer; // 4762
			CVertexBufferVulkan* pVertexBuffer; // 4768
			CUtlMemory<CVertexBufferVulkan::Base(); // 112
			CUtlVectorBase<CVertexBufferVulkan::Base(); // 368
			CUtlVectorBase<CVertexBufferVulkan::ResetDbgInfo(); // 824
			CUtlVectorBase<CVertexBufferVulkan::GrowMemory(
					int num);  // 1198
			CUtlMemory<CVertexBufferVulkan::operator[](
					int i);  // 602
			CUtlVectorBase<CVertexBufferVulkan::Element(
				int i);  // 1201
			CopyConstruct<CVertexBufferVulkan*>(CVertexBufferVulkan** pMemory,
								CVertexBufferVulkan* const& src);  // 1201
			CUtlMemory<CVertexBufferVulkan::NumAllocated(); // 1196
			CUtlVectorBase<CVertexBufferVulkan::AddToTail(
					CVertexBufferVulkan* const& src);  // 4773
			CRenderResourceMgr::GetImplClass<CVertexBufferVulkan>(
								RenderResourceHandle_t hResource,
								bool bAllowDeleted);  // 1281
			CRenderDeviceVulkan::GetVertexBuffer(
					DynamicVertexBufferHandle_t hVertexBuffer);  // 4768
		}
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 4736
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 4776
	CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::NumAllocated(); // 1143
	CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this,
		int i);  // 1148
	CUtlMemory<CVertexBufferVulkan::ValidateGrowSize(); // 475
	CUtlMemory<CVertexBufferVulkan::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVertexBufferVulkan::ResetDbgInfo(); // 530
	CUtlVectorBase<CVertexBufferVulkan::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVertexBufferVulkan::CUtlVector(); // 892
	FencedVertexBufferRelease_t::FencedVertexBufferRelease_t(); // 1479
	Construct<CRenderDeviceVulkan::FencedVertexBufferRelease_t>(FencedVertexBufferRelease_t* pMemory); // 1148
	CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::IsGrowable(); // 823
	CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::Grow(
		int num);  // 806
	ResetDbgInfo(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this); // 824
	GrowMemory(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this); // 4751
	CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this,
			int i);  // 4751
} /* size: 740, variables: 2, inline expansions: 21 (1055 bytes) */

// <00A1F43C> vulkan/renderdevicevulkan.cpp:4780
// variables: 4
// function calls: 26
void CRenderDeviceVulkan::AcquirePooledDynamicIndexBuffer(PerThreadDataVulkan_t* pPerThread, const BufferDesc_t& desc)
{
	int nLast; // 4782
	DynamicIndexBufferHandle_t hBuffer; // 4791
	{
		CIndexBufferVulkan* pIndexBuffer; // 4785
		CUtlMemory<CIndexBufferVulkan::operator[](
				int i);  // 588
		CUtlVectorBase<CIndexBufferVulkan::operator[](
				int i);  // 4785
		CUtlVectorBase<CIndexBufferVulkan::RemoveMultipleFromTail(
					int num);  // 4786
	}
	CUtlVectorBase<CIndexBufferVulkan::Count(); // 4782
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<DynamicIndexBufferHandle_t__*>(DynamicIndexBufferHandle_t__** pMemory,
							DynamicIndexBufferHandle_t__* const& src);  // 1090
	{
	}
	{
	}
	{
		Node_t* pCurEnd; // 977
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<DynamicIndexBufferHandle_t__::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<DynamicIndexBufferHandle_t__::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 985
		{
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 1142
		CTSQueue<DynamicIndexBufferHandle_t__::InterlockedCompareExchangeNode(
						volatile Node_t** ppNode,
						Node_t* value,
						Node_t* comperand);  // 977
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<DynamicIndexBufferHandle_t__::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<DynamicIndexBufferHandle_t__::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<DynamicIndexBufferHandle_t__::Push(
		Node_t* pNode);  // 1091
	Node_t::Node_t(); // 1088
	CTSQueue<DynamicIndexBufferHandle_t__::PushItem(
		DynamicIndexBufferHandle_t__* const& init);  // 4792
} /* size: 0, variables: 2, inline expansions: 16 (1030 bytes) */

// <00A1EABC> vulkan/renderdevicevulkan.cpp:4796
// variables: 6
// function calls: 35
void CRenderDeviceVulkan::ReleasePooledDynamicIndexBuffers(PerThreadDataVulkan_t* pPerThread, DynamicIndexBufferHandle_t* pIndexBufferHandles, size_t nIndexBufferHandles)
{
	CPipelineFence* pReleaseFence; // 4798
	FencedIndexBufferRelease_t* pSet; // 4801
	{
		int i; // 4802
		Count(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBu this); // 4802
		CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this,
				int i);  // 4804
	}
	{
		size_t i; // 4823
		{
			DynamicIndexBufferHandle_t hIndexBuffer; // 4825
			CIndexBufferVulkan* pIndexBuffer; // 4826
			CUtlMemory<CIndexBufferVulkan::Base(); // 112
			CUtlVectorBase<CIndexBufferVulkan::Base(); // 368
			CUtlVectorBase<CIndexBufferVulkan::ResetDbgInfo(); // 824
			CUtlVectorBase<CIndexBufferVulkan::GrowMemory(
					int num);  // 1198
			CUtlMemory<CIndexBufferVulkan::operator[](
					int i);  // 602
			CUtlVectorBase<CIndexBufferVulkan::Element(
				int i);  // 1201
			CopyConstruct<CIndexBufferVulkan*>(CIndexBufferVulkan** pMemory,
								CIndexBufferVulkan* const& src);  // 1201
			CUtlMemory<CIndexBufferVulkan::NumAllocated(); // 1196
			CUtlVectorBase<CIndexBufferVulkan::AddToTail(
					CIndexBufferVulkan* const& src);  // 4830
			CRenderResourceMgr::GetImplClass<CIndexBufferVulkan>(
							RenderResourceHandle_t hResource,
							bool bAllowDeleted);  // 1286
			CRenderDeviceVulkan::GetIndexBuffer(
					DynamicIndexBufferHandle_t hIndexBuffer);  // 4826
		}
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 4799
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 4833
	CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::NumAllocated(); // 1143
	CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this,
		int i);  // 1148
	CUtlMemory<CIndexBufferVulkan::ValidateGrowSize(); // 475
	CUtlMemory<CIndexBufferVulkan::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CIndexBufferVulkan::ResetDbgInfo(); // 530
	CUtlVectorBase<CIndexBufferVulkan::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CIndexBufferVulkan::CUtlVector(); // 901
	FencedIndexBufferRelease_t::FencedIndexBufferRelease_t(); // 1479
	Construct<CRenderDeviceVulkan::FencedIndexBufferRelease_t>(FencedIndexBufferRelease_t* pMemory); // 1148
	CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::IsGrowable(); // 823
	CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::Grow(
		int num);  // 806
	ResetDbgInfo(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this); // 824
	GrowMemory(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this); // 4814
	CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this,
			int i);  // 4814
} /* size: 740, variables: 2, inline expansions: 21 (1055 bytes) */

// <00A5F5EF> vulkan/renderdevicevulkan.cpp:4837
// variable: 1
// function calls: 8
void CRenderDeviceVulkan::GetVertexBufferDesc(VertexBufferHandle_t hBuffer, BufferDesc_t* pDesc)
{
	CVertexBufferVulkan* pBuffer; // 4839
	CRenderResourceMgr::GetImplClass<CVertexBufferVulkan>(
						RenderResourceHandle_t hResource,
						bool bAllowDeleted);  // 1271
	CRenderDeviceVulkan::GetVertexBuffer(
			VertexBufferHandle_t hVertexBuffer);  // 4839
	CVertexBufferBase::GetBufferType(); // 136
	{
	}
	CVertexBufferBase::GetVertexCapacity(); // 4842
	CVertexBufferBase::GetBufferType(); // 122
	{
	}
	CVertexBufferBase::GetVertexSize(); // 4843
	CVertexBufferBase::GetBudgetGroupName(); // 4845
	CRenderDeviceVulkan::GetVertexBufferDesc(
				VertexBufferHandle_t hBuffer,
				BufferDesc_t* pDesc);  // 4837
} /* size: 0, variables: 1, inline expansions: 8 (134 bytes) */

// <00A1EA7C> vulkan/renderdevicevulkan.cpp:4837
// variable: 1
void CRenderDeviceVulkan::GetVertexBufferDesc(VertexBufferHandle_t hBuffer, BufferDesc_t* pDesc)
{
	CVertexBufferVulkan* pBuffer; // 4839
} /* size: 0, variables: 1 */

// <00A5ECCD> vulkan/renderdevicevulkan.cpp:4854
// variable: 1
// function calls: 7
void CRenderDeviceVulkan::GetIndexBufferDesc(IndexBufferHandle_t hBuffer, BufferDesc_t* pDesc)
{
	CIndexBufferVulkan* pBuffer; // 4856
	CRenderResourceMgr::GetImplClass<CIndexBufferVulkan>(
					RenderResourceHandle_t hResource,
					bool bAllowDeleted);  // 1276
	CRenderDeviceVulkan::GetIndexBuffer(
			IndexBufferHandle_t hIndexBuffer);  // 4856
	CIndexBufferBase::GetBufferType(); // 133
	{
	}
	CIndexBufferBase::GetIndexCapacity(); // 4859
	CIndexBufferVulkan::GetIndexSize(); // 4860
	CIndexBufferBase::GetBudgetGroupName(); // 4862
	CRenderDeviceVulkan::GetVertexBufferDesc(
				VertexBufferHandle_t hBuffer,
				BufferDesc_t* pDesc);  // 4837
} /* size: 0, variables: 1, inline expansions: 7 (98 bytes) */

// <00A1EA3C> vulkan/renderdevicevulkan.cpp:4854
// variable: 1
void CRenderDeviceVulkan::GetIndexBufferDesc(IndexBufferHandle_t hBuffer, BufferDesc_t* pDesc)
{
	CIndexBufferVulkan* pBuffer; // 4856
} /* size: 0, variables: 1 */

// <00A1E9BA> vulkan/renderdevicevulkan.cpp:4871
void CRenderDeviceVulkan::GetGPUBufferDesc(RenderBufferHandle_t hBuffer, BufferDesc_t* pDesc)
{
} /* size: 34 */

// <00A1E5A7> vulkan/renderdevicevulkan.cpp:4876
// variables: 2
// function calls: 12
void CRenderDeviceVulkan::CreateIndexBuffer(RenderBufferType_t nType, const BufferDesc_t& desc, RenderBufferFlags_t nExtraUsageFlags)
{
	CIndexBufferVulkan* pIndexBuffer; // 4878
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4879; // 4879
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 4879
	AddToDHead<CIndexBufferBase>(CIndexBufferBase *& head,
					CIndexBufferBase* which);  // 1186
	CUtlIntrusiveDList<CIndexBufferBase>::AddToHead(
			CIndexBufferBase* node);  // 4880
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 4882
} /* size: 253, variables: 2, inline expansions: 12 (498 bytes) */

// <00A63E85> vulkan/renderdevicevulkan.cpp:4884
// variables: 2
// function calls: 13
void CRenderDeviceVulkan::DestroyIndexBuffer(IndexBufferHandle_t hIndexBuffer)
{
	{
		CIndexBufferVulkan* pIndexBufferVulkan; // 4888
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4890; // 4890
			ThreadInterlockedAssignIf64(volatile int64* pDest,
							int64 value,
							int64 comparand);  // 800
			CThreadFastMutex::TryLockInline(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 837
			ThreadPause(void); // 839
			CThreadFastMutex::Lock(
				const char* pFileName,
				int nLineNumber,
				unsigned int nSpinSleepTime);  // 943
			Lock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
					const CThreadFastMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 4890
			{
			}
			{
			}
			{
			}
			RemoveFromDList<CIndexBufferBase>(CIndexBufferBase *& head,
								CIndexBufferBase* which);  // 1195
			CUtlIntrusiveDList<CIndexBufferBase>::RemoveNode(
					CIndexBufferBase* which);  // 4891
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 4893
		}
	}
	CRenderDeviceVulkan::DestroyIndexBuffer(
				IndexBufferHandle_t hIndexBuffer);  // 4884
} /* size: 0, inline expansions: 1 (372 bytes) */

// <00A1E563> vulkan/renderdevicevulkan.cpp:4884
// variables: 2
void CRenderDeviceVulkan::DestroyIndexBuffer(IndexBufferHandle_t hIndexBuffer)
{
	{
		CIndexBufferVulkan* pIndexBufferVulkan; // 4888
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4890; // 4890
		}
	}
} /* size: 0 */

// <00A1E4A6> vulkan/renderdevicevulkan.cpp:4897
void CRenderDeviceVulkan::CreateGPUBuffer(RenderBufferType_t nType, const BufferDesc_t& desc, RenderBufferFlags_t flags, const void* pInitialData)
{
} /* size: 25 */

// <00A1DEBF> vulkan/renderdevicevulkan.cpp:4902
// variables: 4
// function calls: 16
void CRenderDeviceVulkan::CreateGPUBufferFormatted(RenderBufferType_t nType, const BufferDesc_t& desc, RenderBufferFlags_t flags, ImageFormat fmt, const void* pInitialData)
{
	CVertexBufferVulkan* pVertexBuffer; // 4904
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4905; // 4905
	RenderBufferHandle_t hBuffer; // 4907
	{
		CRenderContextVulkanPtr pRenderContextVulkan; // 4911
		CRenderContextVulkanPtr::operator->(); // 4912
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 481
		CRenderContextVulkanPtr::~CRenderContextVulkanPtr(); // 4914
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 4905
	AddToDHead<CVertexBufferBase>(CVertexBufferBase *& head,
					CVertexBufferBase* which);  // 1186
	CUtlIntrusiveDList<CVertexBufferBase>::AddToHead(
			CVertexBufferBase* node);  // 4906
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 4916
} /* size: 415, variables: 3, inline expansions: 12 (496 bytes) */

// <00A1DCF8> vulkan/renderdevicevulkan.cpp:4919
// variables: 5
// function calls: 3
void CRenderDeviceVulkan::GetGPUBufferDeviceAddress(RenderBufferHandle_t hGPUBuffer)
{
	const char   __FUNCTION__; // 29024
	CVertexBufferVulkan* pBuffer; // 4923
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4921
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4926
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4930
	}
	CRenderDeviceVulkan::KHRBufferDeviceAddressEnabled(); // 4921
	CVertexBufferVulkan::GetBufferDeviceAddress(); // 4930
	CVertexBufferVulkan::GetBufferDeviceAddress(); // 4931
} /* size: 0, variables: 2, inline expansions: 3 (38 bytes) */

// <00A64304> vulkan/renderdevicevulkan.cpp:4935
// variables: 4
// function calls: 25
void CRenderDeviceVulkan::DestroyGPUBuffer(RenderBufferHandle_t hGPUBuffer)
{
	{
		CVertexBufferVulkan* pVertexBuffer; // 4939
		CInterlockedIntT<int, 4>::operator int(); // 43
		CDescriptorSetReferenced::GetDescriptorSetRefCount(); // 4940
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4948; // 4948
			ThreadInterlockedAssignIf64(volatile int64* pDest,
							int64 value,
							int64 comparand);  // 800
			CThreadFastMutex::TryLockInline(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 837
			ThreadPause(void); // 839
			CThreadFastMutex::Lock(
				const char* pFileName,
				int nLineNumber,
				unsigned int nSpinSleepTime);  // 943
			Lock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
					const CThreadFastMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 4948
			CDescriptorSetReferenced::SetDeleted(
					bool bDeleted);  // 4950
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 4951
		}
	}
	{
		CVertexBufferVulkan* pVertexBuffer; // 4939
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4942; // 4942
			ThreadInterlockedAssignIf64(volatile int64* pDest,
							int64 value,
							int64 comparand);  // 800
			CThreadFastMutex::TryLockInline(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 837
			ThreadPause(void); // 839
			CThreadFastMutex::Lock(
				const char* pFileName,
				int nLineNumber,
				unsigned int nSpinSleepTime);  // 943
			Lock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
					const CThreadFastMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 4942
			{
			}
			{
			}
			{
			}
			RemoveFromDList<CVertexBufferBase>(CVertexBufferBase *& head,
								CVertexBufferBase* which);  // 1195
			CUtlIntrusiveDList<CVertexBufferBase>::RemoveNode(
					CVertexBufferBase* which);  // 4943
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 4945
		}
	}
	CRenderDeviceVulkan::DestroyGPUBuffer(
			RenderBufferHandle_t hGPUBuffer);  // 4935
} /* size: 0, inline expansions: 1 (371 bytes) */

// <00A1DCA1> vulkan/renderdevicevulkan.cpp:4935
// variables: 3
void CRenderDeviceVulkan::DestroyGPUBuffer(RenderBufferHandle_t hGPUBuffer)
{
	{
		CVertexBufferVulkan* pVertexBuffer; // 4939
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4942; // 4942
		}
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4948; // 4948
		}
	}
} /* size: 0 */

// <00A6BC84> vulkan/renderdevicevulkan.cpp:4958
void CRenderDeviceVulkan::CreateInputLayout(const char* pLayoutName, int nFieldCount, const RenderInputLayoutField_t* pFieldDescs)
{
} /* size: 16 */

// <00A1DBB7> vulkan/renderdevicevulkan.cpp:4963
// function call: 1
void CRenderDeviceVulkan::AddInputLayoutReference(RenderInputLayout_t hInputLayout)
{
	CInputLayoutDict<CInputLayoutVulkan>::AddInputLayoutReference(
				RenderInputLayout_t hInputLayout);  // 4967
} /* size: 25, inline expansions: 1 (15 bytes) */

// <00A5E461> vulkan/renderdevicevulkan.cpp:4971
// function call: 1
void CRenderDeviceVulkan::DestroyInputLayout(RenderInputLayout_t hInputLayout)
{
	CInputLayoutDict<CInputLayoutVulkan>::DestroyInputLayout(
				RenderInputLayout_t hInputLayout);  // 4975
} /* size: 25, inline expansions: 1 (15 bytes) */

// <00A1DB91> vulkan/renderdevicevulkan.cpp:4971
void CRenderDeviceVulkan::DestroyInputLayout(RenderInputLayout_t hInputLayout)
{
} /* size: 0 */

// <00A1DAD3> vulkan/renderdevicevulkan.cpp:4979
void CRenderDeviceVulkan::ConcatentateInputLayouts(int nOutputLayoutVariations, RenderInputLayout_t* pOutputLayouts, int nInputLayouts, const RenderInputLayout_t* pInputLayouts)
{
} /* size: 16 */

// <00A1D9BD> vulkan/renderdevicevulkan.cpp:4985
// function calls: 2
void CRenderDeviceVulkan::GetInputLayoutFields(RenderInputLayout_t hInputLayout, const RenderInputLayoutField_t ** ppFieldsOut, int& nFieldsOut)
{
	CInputLayoutBase::GetFieldCount(); // 372
	CInputLayoutDict<CInputLayoutVulkan>::GetInputLayoutFields(
				RenderInputLayout_t hInputLayout,
				const RenderInputLayoutField_t ** ppFieldsOut,
				int& nFieldsOut);  // 4987
} /* size: 55, inline expansions: 2 (20 bytes) */

// <00A69B01> vulkan/renderdevicevulkan.cpp:4993
void CRenderDeviceVulkan::CommitInputLayoutChanges()
{
} /* size: 0 */

// <00A1D841> vulkan/renderdevicevulkan.cpp:5001
// variable: 1
void CRenderDeviceVulkan::EnableRenderContexts(bool bEnable)
{
	{
		uint32 nStackSize; // 5012
	}
} /* size: 305 */

// <00A1D079> vulkan/renderdevicevulkan.cpp:5036
// variables: 3
// function calls: 26
void CRenderDeviceVulkan::VaCreateRenderContext(uint nRenderContextFlags, RenderContextCreationInfo_t* pOptInfo, const char* pDebugStringFmt, va_list* pArglist)
{
	bool bReleaseReadLock; // 5041
	CRenderContextVulkan* pContext; // 5048
	int nCtxId; // 5074
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 5891
	CRenderDeviceVulkan::GetPerThreadData(); // 5058
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 5072
	CRenderContextBase::SetContextFrameCount(
				int nFrame);  // 5072
	CRenderContextBase::SetReleaseTextureReadLock(
					bool bRelease);  // 5073
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 5074
	CRenderContextBase::SetContextId(
			int nId);  // 5075
	CTextureManagerBase::GetTextureManagerRWLock(); // 5044
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 5044
	{
	}
	CRenderContextBase::GetAttributesForModify(); // 5054
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetParent(
			const ThisType_t* pParent);  // 866
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::SetParent(
			const ThisType_t* pParent);  // 867
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetParent(
			const ThisType_t* pParent);  // 868
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::SetParent(
			const ThisType_t* pParent);  // 869
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetParent(
			const ThisType_t* pParent);  // 870
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetParent(
			const ThisType_t* pParent);  // 871
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::SetParent(
			const ThisType_t* pParent);  // 872
	CUtlAttributeList<void::SetParent(
			const ThisType_t* pParent);  // 873
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::SetParent(
			const ThisType_t* pParent);  // 874
	CRenderAttributes::SetParent(
			const CRenderAttributes* pParent);  // 5054
} /* size: 0, variables: 3, inline expansions: 26 (413 bytes) */

// <00A1CB71> vulkan/renderdevicevulkan.cpp:5079
// variables: 5
// function calls: 17
void CRenderDeviceVulkan::DiscardCommandBuffers(CCommandStream* pCommands)
{
	CCommandBufferChunk* pCmd; // 5082
	const uint8* pCmdIn; // 5084
	{
		CommandBase_t command; // 5087
		{
			CommandJump_t cmd; // 5104
			{
			}
			LoadCmd<CommandJump_t>(const uint8 *& pPtr); // 352
			LoadCmd<CommandJump_t>(const uint8 *& pPtr); // 5104
			CUtlMemoryPool<CCommandBufferChunk>::Free(
				CCommandBufferChunk* pMem);  // 81
			operator delete(void* p); // 138
			CCommandBufferChunk::Release(); // 5108
		}
		{
			const CommandDynamicCBUpdate_t& cmd; // 5116
			{
			}
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 198
			CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Push(
				ConstantBuffer_t* pPushNode);  // 751
			CRenderDeviceBase::ReleasePooledDynamicConstantBuffer(
								ConstantBuffer_t* pConstantBuffer);  // 5117
			{
			}
			LoadCmd<CommandDynamicCBUpdate_t>(const uint8 *& pPtr); // 352
			LoadCmd<CommandDynamicCBUpdate_t>(const uint8 *& pPtr); // 5116
		}
		{
		}
		LoadCmd<CommandReturn_t>(const uint8 *& pPtr); // 352
		LoadCmd<CommandReturn_t>(const uint8 *& pPtr); // 5092
		CUtlMemoryPool<CCommandBufferChunk>::Free(
			CCommandBufferChunk* pMem);  // 81
		operator delete(void* p); // 138
		CCommandBufferChunk::Release(); // 5096
		Load<CommandBase_t>(const uint8 *& pPtr); // 5087
	}
} /* size: 0, variables: 2 */

// <00A1C5FC> vulkan/renderdevicevulkan.cpp:5128
// variables: 6
// function calls: 17
void CRenderDeviceVulkan::DiscardDisplayList(CDisplayList* pStream)
{
	CCommandStream* pCommands; // 5130
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 5133
		{
			long long int nCmdBufIndex; // 5134
			{
				VulkanCommandBufferAndPool_t* pCommandBufferAndPool; // 5136
				CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::operator[](
						intp i);  // 494
				operator[](const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
						long long int i);  // 5136
				CRenderDeviceVulkan::MemoryManager(); // 5137
			}
			Head(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this); // 5134
			Next(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this,
				long long int i);  // 5134
		}
		CRenderDeviceVulkan::MemoryManager(); // 5139
		ValidateAlignment<UtlLinkedListElem_t<QueryObjectInternalVulkan_t*, short unsigned int> >(void); // 508
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::IsExternallyAllocated(); // 905
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::Purge(); // 903
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::Purge(); // 510
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::~CUtlMemory(); // 462
		CUtlLinkedList<QueryObjectInternalVulkan_t::~CUtlLinkedList(); // 67
		{
			BlockHeader_t* pbh; // 338
			{
				BlockHeader_t* pFree; // 340
			}
		}
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::Purge(); // 167
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::~CUtlFixedMemory(); // 462
		~CUtlLinkedList(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this); // 400
		CUtlFixedLinkedList<VulkanCommandBufferAndPool_t>::~CUtlFixedLinkedList(); // 67
		VulkanCommandBuffer_t::~VulkanCommandBuffer_t(); // 5142
	}
} /* size: 289, variables: 1 */

// <00A1C393> vulkan/renderdevicevulkan.cpp:5151
// variables: 7
// function calls: 3
void CRenderDeviceVulkan::CreateConstantBufferInternal(ConstantBufferType_t nType, uint32 nNumViews, uint32 nViewReqSize, uint32 nViewAlignedSize, uint nFlags, const char* pDebugName)
{
	const char   __FUNCTION__; // 29100
	ConstantBufferHandle_t hBuf; // 5157
	ConstantBuffer_t* pBuf; // 5161
	bool bCreatedByContext; // 5162
	bool bPerFrameWriteOnce; // 5163
	bool bPerFramePooled; // 5164
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5155
	}
	CRenderDeviceVulkan::GetRequiredViewConstantBufferAlignment(); // 5155
	ConstantBuffer_t::GetAllocatedSize(); // 5165
	ConstantBuffer_t::GetAllViewsSize(); // 5165
} /* size: 0, variables: 6, inline expansions: 3 (27 bytes) */

// <00A1C1D5> vulkan/renderdevicevulkan.cpp:5171
// function calls: 6
void CRenderDeviceVulkan::FreeConstantBuffer(ConstantBuffer_t* pBuf)
{
	CInterlockedIntT<int, 4>::operator int(); // 43
	CDescriptorSetReferenced::GetDescriptorSetRefCount(); // 5173
	CDescriptorSetReferenced::SetDeleted(
			bool bDeleted);  // 5188
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 199
	CVmaAllocationDeferredDeletion::CVmaAllocationDeferredDeletion(
					IVmaAllocationBase* pVmaObject);  // 5179
} /* size: 126, inline expansions: 6 (50 bytes) */

// <00A5E3CA> vulkan/renderdevicevulkan.cpp:5193
void CRenderDeviceVulkan::GetRequiredViewConstantBufferAlignment()
{
} /* size: 18 */

// <00A1B5CF> vulkan/renderdevicevulkan.cpp:5207
// variables: 9
// function calls: 40
void* CRenderDeviceVulkan::CreateRasterizerStateFromDesc(const RsRasterizerStateDesc_t* pRsDesc)
{
	intp nIdx; // 5209
	RasterizerStateVulkan_t* pNew; // 5210
	const VkPolygonMode   s_fillModeTranslateVulkan; // 5213
	const VkCullModeFlags   s_cullModeTranslateVulkan; // 5219
	{
		int nHandedness; // 5240
	}
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 81
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::HeaderToBlock(
			const BlockHeader_t* pHeader);  // 131
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsInBlock(
			intp i,
			BlockHeader_t* pBlockHeader);  // 85
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::GetIndex(
		const Iterator_t& it);  // 86
	{
		BlockHeader_t* pbh; // 88
		CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 90
	}
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsIdxAfter(
			intp i,
			const Iterator_t& it);  // 591
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::operator[](
			intp i);  // 594
	IsValidIndex(const CUtlLinkedList<RasterizerStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem this,
			long long int i);  // 977
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 81
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::HeaderToBlock(
			const BlockHeader_t* pHeader);  // 131
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsInBlock(
			intp i,
			BlockHeader_t* pBlockHeader);  // 85
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::GetIndex(
		const Iterator_t& it);  // 86
	{
		BlockHeader_t* pbh; // 88
		CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 90
	}
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsIdxAfter(
			intp i,
			const Iterator_t& it);  // 591
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::operator[](
			intp i);  // 594
	IsValidIndex(const CUtlLinkedList<RasterizerStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem this,
			long long int i);  // 1059
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 81
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::HeaderToBlock(
			const BlockHeader_t* pHeader);  // 131
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsInBlock(
			intp i,
			BlockHeader_t* pBlockHeader);  // 85
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::GetIndex(
		const Iterator_t& it);  // 86
	{
		BlockHeader_t* pbh; // 88
		CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 90
	}
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::IsIdxAfter(
			intp i,
			const Iterator_t& it);  // 600
	IsInList(const CUtlLinkedList<RasterizerStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem this,
		long long int i);  // 1060
	{
		ListElem_t* pOldElem; // 1062
		CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::operator[](
				intp i);  // 1079
		CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::operator[](
				intp i);  // 1068
	}
	{
	}
	Unlink(const CUtlLinkedList<RasterizerStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<Ras this,
		long long int elem);  // 980
	CUtlFixedMemory<UtlLinkedListElem_t<RasterizerStateVulkan_t, long long int> >::operator[](
			intp i);  // 367
	InternalElement(const CUtlLinkedList<RasterizerStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<Ras this,
			long long int i);  // 1011
	{
	}
	LinkBefore(const CUtlLinkedList<RasterizerStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<Ras this,
			long long int before,
			long long int elem);  // 771
	InsertBefore(const CUtlLinkedList<RasterizerStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<Ras this,
			long long int before);  // 805
	AddToTail(const CUtlLinkedList<RasterizerStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<Ras this); // 5209
	Element(const CUtlLinkedList<RasterizerStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<Ras this,
		long long int i);  // 5210
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 5211
} /* size: 0, variables: 4, inline expansions: 32 (6495 bytes) */

// <00A1A88C> vulkan/renderdevicevulkan.cpp:5249
// variables: 8
// function calls: 49
void* CRenderDeviceVulkan::CreateDepthStencilStateFromDesc(const RsDepthStencilStateDesc_t* pDesc)
{
	intp nIdx; // 5251
	DepthStencilStateVulkan_t* pDS; // 5252
	const VkCompareOp   s_comparisonFuncTranslateVulkan; // 5255
	const VkStencilOp   s_stencilOpTranslateVulkan; // 5267
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 81
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::HeaderToBlock(
			const BlockHeader_t* pHeader);  // 131
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsInBlock(
			intp i,
			BlockHeader_t* pBlockHeader);  // 85
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::GetIndex(
		const Iterator_t& it);  // 86
	{
		BlockHeader_t* pbh; // 88
		CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 90
	}
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsIdxAfter(
			intp i,
			const Iterator_t& it);  // 591
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::operator[](
			intp i);  // 594
	IsValidIndex(const CUtlLinkedList<DepthStencilStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this,
			long long int i);  // 977
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 81
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::HeaderToBlock(
			const BlockHeader_t* pHeader);  // 131
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsInBlock(
			intp i,
			BlockHeader_t* pBlockHeader);  // 85
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::GetIndex(
		const Iterator_t& it);  // 86
	{
	}
	{
		BlockHeader_t* pbh; // 88
		CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 90
	}
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsIdxAfter(
			intp i,
			const Iterator_t& it);  // 591
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::operator[](
			intp i);  // 594
	IsValidIndex(const CUtlLinkedList<DepthStencilStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this,
			long long int i);  // 1059
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 81
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::HeaderToBlock(
			const BlockHeader_t* pHeader);  // 131
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsInBlock(
			intp i,
			BlockHeader_t* pBlockHeader);  // 85
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::GetIndex(
		const Iterator_t& it);  // 86
	{
		BlockHeader_t* pbh; // 88
		CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 90
	}
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::IsIdxAfter(
			intp i,
			const Iterator_t& it);  // 600
	IsInList(const CUtlLinkedList<DepthStencilStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this,
		long long int i);  // 1060
	{
		ListElem_t* pOldElem; // 1062
		CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::operator[](
				intp i);  // 1079
		CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::operator[](
				intp i);  // 1068
	}
	{
	}
	Unlink(const CUtlLinkedList<DepthStencilStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<D this,
		long long int elem);  // 980
	CUtlFixedMemory<UtlLinkedListElem_t<DepthStencilStateVulkan_t, long long int> >::operator[](
			intp i);  // 367
	InternalElement(const CUtlLinkedList<DepthStencilStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<D this,
			long long int i);  // 1011
	{
	}
	LinkBefore(const CUtlLinkedList<DepthStencilStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<D this,
			long long int before,
			long long int elem);  // 771
	InsertBefore(const CUtlLinkedList<DepthStencilStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<D this,
			long long int before);  // 805
	AddToTail(const CUtlLinkedList<DepthStencilStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<D this); // 5251
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 5253
	Element(const CUtlLinkedList<DepthStencilStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<D this,
		long long int i);  // 5252
	RsStencilStateDesc_t::IsStencilEnabled(); // 5282
	RsStencilStateDesc_t::GetFrontStencilFailOp(); // 5284
	RsStencilStateDesc_t::GetFrontStencilDepthFailOp(); // 5285
	RsStencilStateDesc_t::GetFrontStencilPassOp(); // 5286
	RsStencilStateDesc_t::GetFrontStencilFunc(); // 5287
	RsStencilStateDesc_t::GetBackStencilFailOp(); // 5289
	RsStencilStateDesc_t::GetBackStencilDepthFailOp(); // 5290
	RsStencilStateDesc_t::GetBackStencilPassOp(); // 5291
	RsStencilStateDesc_t::GetBackStencilFunc(); // 5292
} /* size: 0, variables: 4, inline expansions: 41 (6633 bytes) */

// <00A19AF2> vulkan/renderdevicevulkan.cpp:5319
// variables: 10
// function calls: 50
void* CRenderDeviceVulkan::CreateBlendStateFromDesc(const RsBlendStateDesc_t* pDesc)
{
	intp nIdx; // 5321
	BlendStateVulkan_t* pBS; // 5322
	const VkBlendOp   s_blendOpTranslateVulkan; // 5325
	const VkBlendFactor   s_blendModeTranslateVulkan; // 5334
	{
		int i; // 5354
		{
			int32 nBlendStateIndex; // 5356
			RsBlendStateDesc_t::IsAlphaBlendEnabled(
						int nRenderTargetIdx);  // 5366
			RsBlendStateDesc_t::GetSrcBlend(
					int nRenderTargetIdx);  // 5367
			RsBlendStateDesc_t::GetDestBlend(
					int nRenderTargetIdx);  // 5368
			RsBlendStateDesc_t::GetBlendOp(
					int nRenderTargetIdx);  // 5369
			RsBlendStateDesc_t::GetSrcBlendAlpha(
					int nRenderTargetIdx);  // 5370
			RsBlendStateDesc_t::GetDestBlendAlpha(
						int nRenderTargetIdx);  // 5371
			RsBlendStateDesc_t::GetBlendOpAlpha(
					int nRenderTargetIdx);  // 5372
			RsBlendStateDesc_t::GetRenderTargetWriteMask(
						int nRenderTargetIdx);  // 5374
			RsBlendStateDesc_t::IsIndependentBlendEnabled(); // 5357
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 81
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::HeaderToBlock(
			const BlockHeader_t* pHeader);  // 131
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsInBlock(
			intp i,
			BlockHeader_t* pBlockHeader);  // 85
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::GetIndex(
		const Iterator_t& it);  // 86
	{
		BlockHeader_t* pbh; // 88
		CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 90
	}
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsIdxAfter(
			intp i,
			const Iterator_t& it);  // 591
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::operator[](
			intp i);  // 594
	IsValidIndex(const CUtlLinkedList<BlendStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<Bl this,
			long long int i);  // 977
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 81
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::HeaderToBlock(
			const BlockHeader_t* pHeader);  // 131
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsInBlock(
			intp i,
			BlockHeader_t* pBlockHeader);  // 85
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::GetIndex(
		const Iterator_t& it);  // 86
	{
	}
	{
		BlockHeader_t* pbh; // 88
		CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 90
	}
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsIdxAfter(
			intp i,
			const Iterator_t& it);  // 591
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::operator[](
			intp i);  // 594
	IsValidIndex(const CUtlLinkedList<BlendStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<Bl this,
			long long int i);  // 1059
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 81
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::HeaderToBlock(
			const BlockHeader_t* pHeader);  // 131
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsInBlock(
			intp i,
			BlockHeader_t* pBlockHeader);  // 85
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::GetIndex(
		const Iterator_t& it);  // 86
	{
		BlockHeader_t* pbh; // 88
		CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 90
	}
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::IsIdxAfter(
			intp i,
			const Iterator_t& it);  // 600
	IsInList(const CUtlLinkedList<BlendStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<Bl this,
		long long int i);  // 1060
	{
		ListElem_t* pOldElem; // 1062
		CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::operator[](
				intp i);  // 1079
		CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::operator[](
				intp i);  // 1068
	}
	{
	}
	Unlink(const CUtlLinkedList<BlendStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<BlendSta this,
		long long int elem);  // 980
	CUtlFixedMemory<UtlLinkedListElem_t<BlendStateVulkan_t, long long int> >::operator[](
			intp i);  // 367
	InternalElement(const CUtlLinkedList<BlendStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<BlendSta this,
			long long int i);  // 1011
	{
	}
	LinkBefore(const CUtlLinkedList<BlendStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<BlendSta this,
			long long int before,
			long long int elem);  // 771
	InsertBefore(const CUtlLinkedList<BlendStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<BlendSta this,
			long long int before);  // 805
	AddToTail(const CUtlLinkedList<BlendStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<BlendSta this); // 5321
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 5323
	Element(const CUtlLinkedList<BlendStateVulkan_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<BlendSta this,
		long long int i);  // 5322
	RsBlendStateDesc_t::IsAlphaToCoverageEnabled(); // 5377
} /* size: 0, variables: 4, inline expansions: 33 (6892 bytes) */

// <00A193D7> vulkan/renderdevicevulkan.cpp:5383
// variables: 12
// function calls: 20
VkSampler CreateVulkanSamplerStateFromDesc(const CSamplerStateDesc* pDesc, const VulkanPhysicalDeviceInfo_t* pPhysicalDeviceInfo, bool bImmutableSampler)
{
	const VkSamplerAddressMode   s_addressModeTranslateVulkan; // 5385
	const VkCompareOp   s_comparisonFuncTranslateVulkan; // 5394
	VkSamplerCreateInfo samplerCreateInfo; // 5406
	RsFilter_t filter; // 5409
	const char   __FUNCTION__; // 29203
	uint32 nBorderColor; // 5532
	uint32 nMinLod; // 5551
	uint32 nMaxLod; // 5551
	VkSampler pSampler; // 5557
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5477
	}
	{
		const float  flUserMaxAnisotropy; // 5497
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5501
		}
		CSamplerStateDescBase::GetMaxAnisotropy(); // 5496
		ConVar::GetFloat(); // 5497
		Min<float>(const float& val1,
				const float& val2);  // 5504
		Min<float>(const float& val1,
				const float& val2);  // 5506
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 5407
	CSamplerStateDescBase::GetFilterMode(); // 5409
	CSamplerStateDescBase::GetTextureAddressModeU(); // 5481
	CSamplerStateDescBase::GetTextureAddressModeV(); // 5482
	CSamplerStateDescBase::GetMipLodBias(); // 5484
	CSamplerStateDescBase::GetTextureAddressModeW(); // 5483
	RsIsComparisonTextureFilter(RsFilter_t filter); // 5516
	CSamplerStateDescBase::GetComparisonFunc(); // 5530
	CSamplerStateDescBase::GetBorderColor32Bit(); // 5532
	CSamplerStateDescBase::GetMinMaxLod(
			uint32* pMinLodOut,
			uint32* pMaxLodOut);  // 5552
	VulkanDevice(void); // 5558
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 5558
} /* size: 0, variables: 9, inline expansions: 16 (268 bytes) */

// <009A1835> vulkan/renderdevicevulkan.cpp:5563
// member functions: 5
// member variables: 6
// vtable entry: 1
// struct size: 48
class CSamplerStateCreator : public ITSHashConstructor<CSamplerStateBinding> {
public:
	/* class ITSHashConstructor<CSamplerStateBinding> <ancestor>; */ /* 0 8 */
	void ~CSamplerStateCreator(CSamplerStateCreator* );
	void CSamplerStateCreator(CSamplerStateCreator* , CSamplerStateCreator& );
	void CSamplerStateCreator(CSamplerStateCreator* , const CSamplerStateCreator& );
private:
	const const class CSamplerStateDesc * m_pDesc; /* 8 8 */
	const VkDevice m_pDeviceVulkan; /* 16 8 */
	const bool m_bImmutableSampler; /* 24 1 */
	const const class VulkanPhysicalDeviceInfo_t * m_pPhysicalDeviceInfo; /* 32 8 */
	const const char * m_szDebugName; /* 40 8 */
	/* vulkan/renderdevicevulkan.cpp:5572 */
	void CSamplerStateCreator(CSamplerStateCreator* , VkDevice, const VulkanPhysicalDeviceInfo_t* , const CSamplerStateDesc* , bool, const char* );
	/* vulkan/renderdevicevulkan.cpp:5581 */
	virtual void Construct(CSamplerStateCreator* , CSamplerStateBinding* );
};

// <00A19373> vulkan/renderdevicevulkan.cpp:5572
void CSamplerStateCreator::CSamplerStateCreator(VkDevice pDeviceVulkan, const VulkanPhysicalDeviceInfo_t* pPhysicalDeviceInfo, const CSamplerStateDesc* pDesc, bool bImmutableSampler, const char* szDebugName)
{
} /* size: 0 */

// <00A19319> vulkan/renderdevicevulkan.cpp:5572
inline void CSamplerStateCreator::CSamplerStateCreator(VkDevice pDeviceVulkan, const VulkanPhysicalDeviceInfo_t* pPhysicalDeviceInfo, const CSamplerStateDesc* pDesc, bool bImmutableSampler, const char* szDebugName)
{
} /* size: 0 */

// <00A67E65> vulkan/renderdevicevulkan.cpp:5581
// variables: 2
// function calls: 3
void CSamplerStateCreator::Construct(CSamplerStateBinding* pElement)
{
	VkSampler pSampler; // 5583
	V_isempty(const char* pszString); // 5586
	CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 5586
	{
		VkDebugUtilsObjectNameInfoEXT objectNameInfo; // 5588
		VulkanDevice(void); // 5593
	}
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00A192C6> vulkan/renderdevicevulkan.cpp:5581
// variables: 2
inline void CSamplerStateCreator::Construct(CSamplerStateBinding* pElement)
{
	VkSampler pSampler; // 5583
	{
		VkDebugUtilsObjectNameInfoEXT objectNameInfo; // 5588
	}
} /* size: 0, variables: 1 */

// <00A186EA> vulkan/renderdevicevulkan.cpp:5601
// variables: 4
// function calls: 36
void CRenderDeviceVulkan::FindOrCreateSamplerState(const CSamplerStateDesc& samplerState, const char* szDebugName)
{
	Hash12(const void* pKey); // 870
	CSamplerStateDescBase::HashValue(); // 87
	Hash(const CSamplerStateDesc& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		CSamplerStateDesc::operator==(
				const CSamplerStateDesc& state);  // 93
		Compare(const CSamplerStateDesc& lhs,
			const CSamplerStateDesc& rhs);  // 721
	}
	Find(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>,  this,
		CSamplerStateDesc uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		CSamplerStateDesc::operator==(
				const CSamplerStateDesc& state);  // 93
		Compare(const CSamplerStateDesc& lhs,
			const CSamplerStateDesc& rhs);  // 721
	}
	Find(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>,  this,
		CSamplerStateDesc uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	Find(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>,  this,
		CSamplerStateDesc uiKey);  // 507
	Hash12(const void* pKey); // 870
	CSamplerStateDescBase::HashValue(); // 87
	Hash(const CSamplerStateDesc& key,
		int nBucketMask);  // 512
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 3305
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 3307
	ThreadPause(void); // 3309
	CThreadSpinRWLock::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 514
	{
		HashFixedData_t* pElement; // 719
		CSamplerStateDesc::operator==(
				const CSamplerStateDesc& state);  // 93
		Compare(const CSamplerStateDesc& lhs,
			const CSamplerStateDesc& rhs);  // 721
	}
	Find(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>,  this,
		CSamplerStateDesc uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 516
	Alloc(const CUtlMemoryPool<CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerSta this); // 438
	InsertUncommitted(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this,
				CSamplerStateDesc uiKey,
				HashBucket_t& bucket);  // 521
	V_isempty(const char* pszString); // 5586
	CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 5586
	{
		VkDebugUtilsObjectNameInfoEXT objectNameInfo; // 5588
		VulkanDevice(void); // 5593
	}
	CSamplerStateCreator::Construct(
			CSamplerStateBinding* pElement);  // 522
	Insert(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this,
		CSamplerStateDesc uiKey,
		ITSHashConstructor<CSamplerStateBinding>* pConstructor,
		bool* pDidInsert);  // 5625
	ITSHashConstructor<CSamplerStateBinding>::ITSHashConstructor(); // 5577
	CSamplerStateCreator::CSamplerStateCreator(
				VkDevice pDeviceVulkan,
				const VulkanPhysicalDeviceInfo_t* pPhysicalDeviceInfo,
				const CSamplerStateDesc* pDesc,
				bool bImmutableSampler,
				const char* szDebugName);  // 5624
	CRenderDeviceVulkan::CreateSamplerObject(
				const CSamplerStateDesc* pSamplerDesc,
				const char* szDebugName);  // 5603
} /* size: 1046, inline expansions: 29 (3183 bytes) */

// <00A1866C> vulkan/renderdevicevulkan.cpp:5606
// variable: 1
// function call: 1
void CRenderDeviceVulkan::GetSamplerIndex(SamplerStateHandle_t hSamplerState)
{
	CVulkanSamplerObject* pSamplerObject; // 5608
	CVulkanSamplerObject::Id(); // 5613
} /* size: 27, variables: 1, inline expansions: 1 (0 bytes) */

// <00A1862D> vulkan/renderdevicevulkan.cpp:5616
void CRenderDeviceVulkan::GetSamplerObject(SamplerStateHandle_t hSamplerState)
{
} /* size: 0 */

// <00A67F74> vulkan/renderdevicevulkan.cpp:5622
// variables: 7
// function calls: 35
void CRenderDeviceVulkan::CreateSamplerObject(const CSamplerStateDesc* pSamplerDesc, const char* szDebugName)
{
	CSamplerStateCreator constructor; // 5624
	UtlTSHashHandle_t objState; // 5625
	CVulkanSamplerObject* pStateObject; // 5626
	Hash12(const void* pKey); // 870
	CSamplerStateDescBase::HashValue(); // 87
	Hash(const CSamplerStateDesc& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		CSamplerStateDesc::operator==(
				const CSamplerStateDesc& state);  // 93
		Compare(const CSamplerStateDesc& lhs,
			const CSamplerStateDesc& rhs);  // 721
	}
	Find(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>,  this,
		CSamplerStateDesc uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		CSamplerStateDesc::operator==(
				const CSamplerStateDesc& state);  // 93
		Compare(const CSamplerStateDesc& lhs,
			const CSamplerStateDesc& rhs);  // 721
	}
	Find(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>,  this,
		CSamplerStateDesc uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	Find(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>,  this,
		CSamplerStateDesc uiKey);  // 507
	Hash12(const void* pKey); // 870
	CSamplerStateDescBase::HashValue(); // 87
	Hash(const CSamplerStateDesc& key,
		int nBucketMask);  // 512
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 3305
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 3307
	ThreadPause(void); // 3309
	CThreadSpinRWLock::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 514
	{
		HashFixedData_t* pElement; // 719
		CSamplerStateDesc::operator==(
				const CSamplerStateDesc& state);  // 93
		Compare(const CSamplerStateDesc& lhs,
			const CSamplerStateDesc& rhs);  // 721
	}
	Find(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>,  this,
		CSamplerStateDesc uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 516
	Alloc(const CUtlMemoryPool<CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerSta this); // 438
	InsertUncommitted(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this,
				CSamplerStateDesc uiKey,
				HashBucket_t& bucket);  // 521
	V_isempty(const char* pszString); // 5586
	CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 5586
	{
		VkDebugUtilsObjectNameInfoEXT objectNameInfo; // 5588
		VulkanDevice(void); // 5593
	}
	CSamplerStateCreator::Construct(
			CSamplerStateBinding* pElement);  // 522
	Insert(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this,
		CSamplerStateDesc uiKey,
		ITSHashConstructor<CSamplerStateBinding>* pConstructor,
		bool* pDidInsert);  // 5625
	ITSHashConstructor<CSamplerStateBinding>::ITSHashConstructor(); // 5577
	CSamplerStateCreator::CSamplerStateCreator(
				VkDevice pDeviceVulkan,
				const VulkanPhysicalDeviceInfo_t* pPhysicalDeviceInfo,
				const CSamplerStateDesc* pDesc,
				bool bImmutableSampler,
				const char* szDebugName);  // 5624
} /* size: 1046, variables: 3, inline expansions: 28 (2228 bytes) */

// <00A185D3> vulkan/renderdevicevulkan.cpp:5622
// variables: 3
void CRenderDeviceVulkan::CreateSamplerObject(const CSamplerStateDesc* pSamplerDesc, const char* szDebugName)
{
	CSamplerStateCreator constructor; // 5624
	UtlTSHashHandle_t objState; // 5625
	CVulkanSamplerObject* pStateObject; // 5626
} /* size: 0, variables: 3 */

// <00A179F5> vulkan/renderdevicevulkan.cpp:5634
// variables: 7
// function calls: 35
void CRenderDeviceVulkan::CreateImmutableSamplerObject(const CSamplerStateDesc* pSamplerDesc, const char* szDebugName)
{
	CSamplerStateCreator constructor; // 5636
	UtlTSHashHandle_t objState; // 5637
	CVulkanSamplerObject* pStateObject; // 5638
	Hash12(const void* pKey); // 870
	CSamplerStateDescBase::HashValue(); // 87
	Hash(const CSamplerStateDesc& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		CSamplerStateDesc::operator==(
				const CSamplerStateDesc& state);  // 93
		Compare(const CSamplerStateDesc& lhs,
			const CSamplerStateDesc& rhs);  // 721
	}
	Find(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>,  this,
		CSamplerStateDesc uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		CSamplerStateDesc::operator==(
				const CSamplerStateDesc& state);  // 93
		Compare(const CSamplerStateDesc& lhs,
			const CSamplerStateDesc& rhs);  // 721
	}
	Find(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>,  this,
		CSamplerStateDesc uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	Find(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>,  this,
		CSamplerStateDesc uiKey);  // 507
	Hash12(const void* pKey); // 870
	CSamplerStateDescBase::HashValue(); // 87
	Hash(const CSamplerStateDesc& key,
		int nBucketMask);  // 512
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 3305
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 3307
	ThreadPause(void); // 3309
	CThreadSpinRWLock::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 514
	{
		HashFixedData_t* pElement; // 719
		CSamplerStateDesc::operator==(
				const CSamplerStateDesc& state);  // 93
		Compare(const CSamplerStateDesc& lhs,
			const CSamplerStateDesc& rhs);  // 721
	}
	Find(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>,  this,
		CSamplerStateDesc uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 516
	Alloc(const CUtlMemoryPool<CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerSta this); // 438
	InsertUncommitted(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this,
				CSamplerStateDesc uiKey,
				HashBucket_t& bucket);  // 521
	V_isempty(const char* pszString); // 5586
	CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 5586
	{
		VkDebugUtilsObjectNameInfoEXT objectNameInfo; // 5588
		VulkanDevice(void); // 5593
	}
	CSamplerStateCreator::Construct(
			CSamplerStateBinding* pElement);  // 522
	Insert(const CUtlTSHashBase<CSamplerStateBinding, 1024, CSamplerStateDesc, CUtlTSHashUseKeyHashMethod<CSamplerStateDesc>, CThrea this,
		CSamplerStateDesc uiKey,
		ITSHashConstructor<CSamplerStateBinding>* pConstructor,
		bool* pDidInsert);  // 5637
	ITSHashConstructor<CSamplerStateBinding>::ITSHashConstructor(); // 5577
	CSamplerStateCreator::CSamplerStateCreator(
				VkDevice pDeviceVulkan,
				const VulkanPhysicalDeviceInfo_t* pPhysicalDeviceInfo,
				const CSamplerStateDesc* pDesc,
				bool bImmutableSampler,
				const char* szDebugName);  // 5636
} /* size: 1046, variables: 3, inline expansions: 28 (2228 bytes) */

// <00A715DD> vulkan/renderdevicevulkan.cpp:5643
// variables: 2
// function calls: 3
void* CRenderDeviceVulkan::GetDeviceSpecificInfo(DeviceSpecificInfo_t info)
{
	void* pDeviceSpecificInfo; // 5645
	RenderDeviceAPI_t renderDeviceAPI; // 5649
	CRenderDeviceMgrVulkan::GetInstance(); // 5656
	VulkanQueue(void); // 5668
	CRenderDeviceVulkan::GetDeviceSpecificInfo(
				DeviceSpecificInfo_t info);  // 5643
} /* size: 268, variables: 2, inline expansions: 3 (212 bytes) */

// <00A179B0> vulkan/renderdevicevulkan.cpp:5643
// variables: 2
void* CRenderDeviceVulkan::GetDeviceSpecificInfo(DeviceSpecificInfo_t info)
{
	void* pDeviceSpecificInfo; // 5645
	RenderDeviceAPI_t renderDeviceAPI; // 5649
} /* size: 0, variables: 2 */

// <00A15EA8> vulkan/renderdevicevulkan.cpp:5691
// variables: 4
// function calls: 123
void CRenderDeviceVulkan::ReleaseTextureResourcesVulkan(CVulkanImage* pImage, VulkanImageViews_t* pImageViews, const TextureSpecification_t* pSpec)
{
	{
		uint nCurrentFrame; // 5701
		FencedVulkanTextureRelease_t* pSet; // 5704
		VulkanTextureReleaseResources_t textureResources; // 5719
		{
			int i; // 5705
			Count(const CUtlVectorBase<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulka this); // 5705
			CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextu this,
					int i);  // 5707
		}
		CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
		CRenderDeviceBase::GetContextFrameCount(); // 5701
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 5702
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 142
		CTextureDesc::CTextureDesc(); // 43
		CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 43
		CUtlMemory<float, int>::ValidateGrowSize(); // 475
		CUtlMemory<float, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 43
		TextureSpecification_t::TextureSpecification_t(); // 5719
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
		CUtlMemory<unsigned int, int>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 574
		CUtlMemory<unsigned int, int>::Base(); // 113
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 105
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 105
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::end(); // 574
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<TextureCreationExtraData_t>(const TextureCreationExtraData_t* pFrom,
								const TextureCreationExtraData_t* pFromEnd,
								TextureCreationExtraData_t* pTo);  // 173
		UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
						const unsigned int* pFromEnd,
						unsigned int* pTo);  // 574
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
				const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 565
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
				const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
				const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 68
		CTextureDesc::operator=(
				const CTextureDesc& rhs);  // 63
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
		CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlMemory<float, int>::NumAllocated(); // 782
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 368
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<float, CUtlMemory<float, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount(
			int count);  // 573
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
		CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
		CUtlMemory<float, int>::Base(); // 113
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 105
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 105
		CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 574
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<TextureCreationExtraData_t>(const TextureCreationExtraData_t* pFrom,
								const TextureCreationExtraData_t* pFromEnd,
								TextureCreationExtraData_t* pTo);  // 173
		UtlTraitsCopyRange<float>(const float* pFrom,
						const float* pFromEnd,
						float* pTo);  // 574
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
				const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
				const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
		CUtlVector<float, CUtlMemory<float, int> >::operator=(
				const CUtlVector<float, CUtlMemory<float, int> >& src);  // 69
		TextureSpecification_t::operator=(
				const TextureSpecification_t& rhs);  // 5722
		CUtlMemory<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, int>::NumAllocated(); // 1196
		CUtlMemory<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, CUtlMemory<CRenderDeviceVulkan::VulkanTextureR this); // 368
		ResetDbgInfo(const CUtlVectorBase<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, CUtlMemory<CRenderDeviceVulkan::VulkanTextureR this); // 824
		CUtlMemory<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, int>::IsGrowable(); // 823
		CUtlMemory<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, CUtlMemory<CRenderDeviceVulkan::VulkanTextureR this,
				int num);  // 1198
		VulkanTextureReleaseResources_t::VulkanTextureReleaseResources_t(
						const VulkanTextureReleaseResources_t  &);  // 1520
		CopyConstruct<CRenderDeviceVulkan::VulkanTextureReleaseResources_t>(VulkanTextureReleaseResources_t* pMemory,
											const VulkanTextureReleaseResources_t& src);  // 1201
		CUtlMemory<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, CUtlMemory<CRenderDeviceVulkan::VulkanTextureR this,
			int i);  // 1201
		AddToTail(const CUtlVectorBase<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, CUtlMemory<CRenderDeviceVulkan::VulkanTextureR this,
				const VulkanTextureReleaseResources_t& src);  // 5723
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 5725
		CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
		CUtlMemory<float, int>::IsExternallyAllocated(); // 905
		CUtlMemory<float, int>::Purge(); // 903
		CUtlMemory<float, int>::Purge(); // 1799
		CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
		ValidateAlignment<float>(void); // 508
		CUtlMemory<float, int>::Purge(); // 510
		CUtlMemory<float, int>::~CUtlMemory(); // 562
		CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
		CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 52
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
		TextureSpecification_t::~TextureSpecification_t(); // 873
		VulkanTextureReleaseResources_t::~VulkanTextureReleaseResources_t(); // 5726
		CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::NumAllocated(); // 1143
		CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextu this,
			int i);  // 1148
		CUtlMemory<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, CUtlMemory<CRenderDeviceVulkan::VulkanTextureR this); // 530
		CUtlVectorBase(const CUtlVectorBase<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, CUtlMemory<CRenderDeviceVulkan::VulkanTextureR this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector(const CUtlVector<CRenderDeviceVulkan::VulkanTextureReleaseResources_t, CUtlMemory<CRenderDeviceVulkan::VulkanTextureRelea this); // 884
		FencedVulkanTextureRelease_t::FencedVulkanTextureRelease_t(); // 1479
		Construct<CRenderDeviceVulkan::FencedVulkanTextureRelease_t>(FencedVulkanTextureRelease_t* pMemory); // 1148
		CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::IsGrowable(); // 823
		CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::Grow(
			int num);  // 806
		ResetDbgInfo(const CUtlVectorBase<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextu this); // 824
		GrowMemory(const CUtlVectorBase<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextu this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextu this); // 5716
		CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextu this,
				int i);  // 5716
	}
} /* size: 1920 */

// <00A1557B> vulkan/renderdevicevulkan.cpp:5730
// variables: 6
// function calls: 29
void CRenderDeviceVulkan::OnPresentCompleted(SwapChainHandle_t hSwapChain, int nPresentId, CDeviceFence* pDeviceFence)
{
	uint nHighestFrameCompletedGPU; // 5758
	{
		int i; // 5733
		{
			CPipelineFence* pFence; // 5735
			CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this,
					int i);  // 5735
			CPipelineFence::IsCompleted(); // 5736
			CUtlMemory<CRenderDeviceVulkan::FencedVertexBufferRelease_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertexBuffer this,
					int i);  // 5740
		}
		Count(const CUtlVectorBase<CRenderDeviceVulkan::FencedVertexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVertex this); // 5733
	}
	{
		int i; // 5746
		{
			CPipelineFence* pFence; // 5748
			CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this,
					int i);  // 5748
			CPipelineFence::IsCompleted(); // 5749
			CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRelease_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBufferRe this,
					int i);  // 5753
		}
		Count(const CUtlVectorBase<CRenderDeviceVulkan::FencedIndexBufferRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedIndexBu this); // 5746
	}
	{
		int nIndex; // 5760
		CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::Count(); // 5760
		CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::operator[](
				int i);  // 5762
		CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >::operator[](
				int i);  // 5766
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 5732
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 5743
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 5745
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 5756
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 484
	CMemoryManagerVulkan::GetHighestFrameCompletedOnGPU(); // 5758
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 5759
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 5769
} /* size: 947, variables: 1, inline expansions: 12 (492 bytes) */

// <00A14A77> vulkan/renderdevicevulkan.cpp:5778
// variables: 14
// function calls: 41
void CRenderDeviceVulkan::ShutdownPerThreadDataPortion(PerThreadDataVulkan_t* pPerThread, PerThreadShutdownPortion_t portion)
{
	const char   __FUNCTION__; // 29100
	{
		int j; // 5799
		{
			VkCommandPool commandPool; // 5801
		}
	}
	{
		DescriptorSetPoolList_t* pInUseDescriptorSetPools; // 5822
		{
			long long int nIndex; // 5823
			{
				VulkanDescriptorSetPool_t& descriptorSetPool; // 5825
				CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::operator[](
						intp i);  // 494
				operator[](const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
						long long int i);  // 5825
			}
			Head(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this); // 5823
			Next(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this,
				long long int i);  // 5823
		}
	}
	{
		DescriptorSetPoolList_t* pAvailableDescriptorSetPools; // 5837
		{
			long long int nIndex; // 5838
			{
				VulkanDescriptorSetPool_t& descriptorSetPool; // 5840
				CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::operator[](
						intp i);  // 494
				operator[](const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
						long long int i);  // 5840
			}
			Head(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this); // 5838
			Next(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this,
				long long int i);  // 5838
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5853
	}
	{
		int i; // 1807
		CUtlMemory<VulkanDynamicDescriptorSet_t::operator[](
				int i);  // 602
		CUtlVectorBase<VulkanDynamicDescriptorSet_t::Element(
			int i);  // 1809
	}
	CUtlMemory<VulkanDynamicDescriptorSet_t::Purge(); // 903
	CUtlMemory<VulkanDynamicDescriptorSet_t::Purge(); // 1799
	CUtlVectorBase<VulkanDynamicDescriptorSet_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<VulkanDynamicDescriptorSet_t::Purge(); // 1811
	CUtlVectorBase<VulkanDynamicDescriptorSet_t::PurgeAndDeleteElements(); // 5817
	CUtlVectorBase<VulkanDynamicDescriptorSet_t::RemoveAll(); // 1798
	CUtlMemory<VulkanDynamicDescriptorSet_t::Purge(); // 903
	CUtlMemory<VulkanDynamicDescriptorSet_t::IsExternallyAllocated(); // 905
	CUtlMemory<VulkanDynamicDescriptorSet_t::Purge(); // 1799
	CUtlVectorBase<VulkanDynamicDescriptorSet_t::Purge(); // 1811
	{
		int i; // 1807
		CUtlMemory<VulkanDynamicDescriptorSet_t::operator[](
				int i);  // 602
		CUtlVectorBase<VulkanDynamicDescriptorSet_t::Element(
			int i);  // 1809
	}
	CUtlVectorBase<VulkanDynamicDescriptorSet_t::PurgeAndDeleteElements(); // 5813
	{
		int i; // 1807
		CUtlMemory<CVertexBufferVulkan::operator[](
				int i);  // 602
		CUtlVectorBase<CVertexBufferVulkan::Element(
			int i);  // 1809
	}
	CUtlVectorBase<CVertexBufferVulkan::RemoveAll(); // 1798
	CUtlMemory<CVertexBufferVulkan::IsExternallyAllocated(); // 905
	CUtlMemory<CVertexBufferVulkan::Purge(); // 903
	CUtlMemory<CVertexBufferVulkan::Purge(); // 1799
	CUtlVectorBase<CVertexBufferVulkan::ResetDbgInfo(); // 1800
	CUtlVectorBase<CVertexBufferVulkan::Purge(); // 1811
	CUtlVectorBase<CVertexBufferVulkan::PurgeAndDeleteElements(); // 5811
	{
		int i; // 1807
		CUtlMemory<CIndexBufferVulkan::operator[](
				int i);  // 602
		CUtlVectorBase<CIndexBufferVulkan::Element(
			int i);  // 1809
	}
	CUtlVectorBase<CIndexBufferVulkan::RemoveAll(); // 1798
	CUtlMemory<CIndexBufferVulkan::IsExternallyAllocated(); // 905
	CUtlMemory<CIndexBufferVulkan::Purge(); // 903
	CUtlMemory<CIndexBufferVulkan::Purge(); // 1799
	CUtlVectorBase<CIndexBufferVulkan::ResetDbgInfo(); // 1800
	CUtlVectorBase<CIndexBufferVulkan::Purge(); // 1811
	CUtlVectorBase<CIndexBufferVulkan::PurgeAndDeleteElements(); // 5812
} /* size: 0, variables: 1, inline expansions: 25 (904 bytes) */

// <00A69B50> vulkan/renderdevicevulkan.cpp:5857
// variable: 1
// function call: 1
void CRenderDeviceVulkan::ShutdownPerThreadData(PerThreadDataVulkan_t* pPerThread, PerThreadShutdownPortion_t portion)
{
	{
		int i; // 5865
	}
	CRenderDeviceVulkan::ShutdownPerThreadData(
				PerThreadDataVulkan_t* pPerThread,
				PerThreadShutdownPortion_t portion);  // 5857
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00A14A37> vulkan/renderdevicevulkan.cpp:5857
// variable: 1
void CRenderDeviceVulkan::ShutdownPerThreadData(PerThreadDataVulkan_t* pPerThread, PerThreadShutdownPortion_t portion)
{
	{
		int i; // 5865
	}
} /* size: 0 */

// <00A145B6> vulkan/renderdevicevulkan.cpp:5871
// variables: 4
// function calls: 12
void CRenderDeviceVulkan::ShutdownAllPerThreadData(PerThreadShutdownPortion_t portion)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_5873; // 5873
	{
		int _idx_pPerThread; // 5874
		{
			PerThreadDataVulkan_t* pPerThread; // 5874
			{
				int i; // 5865
			}
			CRenderDeviceVulkan::ShutdownPerThreadData(
						PerThreadDataVulkan_t* pPerThread,
						PerThreadShutdownPortion_t portion);  // 5857
			CRenderDeviceVulkan::ShutdownPerThreadData(
						PerThreadDataVulkan_t* pPerThread,
						PerThreadShutdownPortion_t portion);  // 5876
		}
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 5873
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 5878
} /* size: 260, variables: 1, inline expansions: 10 (355 bytes) */

// <00A14567> vulkan/renderdevicevulkan.cpp:5880
void CRenderDeviceVulkan::ShutdownCommandBufferPools()
{
} /* size: 14 */

// <00A68B26> vulkan/renderdevicevulkan.cpp:5889
// function calls: 2
void CRenderDeviceVulkan::GetPerThreadData()
{
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 5891
} /* size: 18, inline expansions: 2 (15 bytes) */

// <00A1454E> vulkan/renderdevicevulkan.cpp:5889
void CRenderDeviceVulkan::GetPerThreadData()
{
} /* size: 0 */

// <00A143D7> vulkan/renderdevicevulkan.cpp:5898
// variables: 4
// function calls: 3
void CRenderDeviceVulkan::AcquireDescriptorSetPool(PerThreadDataVulkan_t* pPerThread, int32 nContextFrameCount)
{
	DescriptorSetPoolList_t& inUseDescriptorPool; // 5903
	IndexType_t nTailIndex; // 5905
	VulkanDescriptorSetPool_t* pDescriptorSetPool; // 5917
	{
		VulkanDescriptorSetPool_t* pTail; // 5908
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::operator[](
				intp i);  // 482
		Element(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
			long long int i);  // 5908
	}
	Tail(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this); // 5905
} /* size: 110, variables: 3, inline expansions: 1 (20 bytes) */

// <00A6B82B> vulkan/renderdevicevulkan.cpp:5932
// variables: 2
// function calls: 3
void CRenderDeviceVulkan::ReleaseDescriptorSetPool(PerThreadDataVulkan_t* pPerThread, VulkanDescriptorSetPool_t* pDescriptorSetPool)
{
	{
		DescriptorSetPoolList_t& inUseDescriptorSetPools; // 5944
		DescriptorSetPoolList_t& availableDescriptorSetPools; // 5945
		AddToTail(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
				const VulkanDescriptorSetPool_t& src);  // 5947
		Remove(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
			long long int elem);  // 5951
	}
	CRenderDeviceVulkan::ReleaseDescriptorSetPool(
				PerThreadDataVulkan_t* pPerThread,
				VulkanDescriptorSetPool_t* pDescriptorSetPool);  // 5932
} /* size: 84, inline expansions: 1 (43 bytes) */

// <00A14388> vulkan/renderdevicevulkan.cpp:5932
// variables: 2
void CRenderDeviceVulkan::ReleaseDescriptorSetPool(PerThreadDataVulkan_t* pPerThread, VulkanDescriptorSetPool_t* pDescriptorSetPool)
{
	{
		DescriptorSetPoolList_t& inUseDescriptorSetPools; // 5944
		DescriptorSetPoolList_t& availableDescriptorSetPools; // 5945
	}
} /* size: 0 */

// <00A12D76> vulkan/renderdevicevulkan.cpp:5960
// variables: 27
// function calls: 55
void CRenderDeviceVulkan::UpdateDescriptorSetPool(PerThreadDataVulkan_t* pPerThread, int32 nContextFrameCount, VulkanDescriptorSetPool_t** ppCurrentDescriptorSetPool, VkDescriptorSetLayout pDescriptorSetLayout, uint32_t nDescriptorTypeMask)
{
	VulkanDescriptorSetPool_t* pCurrentDescriptorSetPool; // 5962
	VkDescriptorPoolSize descriptorPoolSizes; // 6076
	uint32_t nDescriptorPoolSizes; // 6077
	uint32_t nNewDescriptorTypeMask; // 6080
	VkDescriptorPool pDescriptorPool; // 6151
	VkDescriptorPoolCreateInfo descriptorPoolCreateInfo; // 6152
	const char   __FUNCTION__; // 28970
	VkDescriptorSet* ppDescriptorSets; // 6179
	VulkanDescriptorSetPool_t newDescriptorSetPool; // 6183
	DescriptorSetPoolList_t& inUseDescriptorSetPools; // 6192
	IndexType_t nIndex; // 6194
	{
		VkResult nResult; // 5973
		{
			VkDescriptorSetAllocateInfo allocInfo; // 5976
		}
	}
	{
		DescriptorSetPoolList_t& availableDescriptorSetPools; // 6007
		DescriptorSetPoolList_t& inUseDescriptorSetPools; // 6008
		IndexType_t nTailIndex; // 6010
		{
			const VulkanDescriptorSetPool_t* pAvailablePool; // 6013
			{
				IndexType_t nIndex; // 6018
				{
					VkDescriptorSetAllocateInfo allocInfo; // 6036
					VkResult nResult; // 6042
				}
				AddToTail(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
						const VulkanDescriptorSetPool_t& src);  // 6018
				Remove(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
					long long int elem);  // 6019
				CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::operator[](
						intp i);  // 494
				operator[](const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
						long long int i);  // 6020
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 6031
			}
			{
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_6068; // 6068
				ThreadInterlockedAssignIf64(volatile int64* pDest,
								int64 value,
								int64 comparand);  // 800
				CThreadFastMutex::TryLockInline(
						const char* pFileName,
						int nLineNumber,
						const ThreadId_t  threadId);  // 837
				ThreadPause(void); // 839
				CThreadFastMutex::Lock(
					const char* pFileName,
					int nLineNumber,
					unsigned int nSpinSleepTime);  // 943
				Lock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
						const CThreadFastMutex& lock,
						const char* pFilename,
						int nLineNumber);  // 6068
				AddToTail(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
						const VulkanDescriptorSetPool_t& src);  // 6069
				Remove(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
					long long int elem);  // 6070
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 6071
			}
			CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::operator[](
					intp i);  // 494
			operator[](const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
					long long int i);  // 6013
		}
		Tail(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this); // 6010
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_6163; // 6163
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 6163
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 6164
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 6165
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6167
	}
	{
		int* _pCrash; // 6174
	}
	{
		VkDescriptorSetAllocateInfo allocInfo; // 6202
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 6208
	}
	{
		DescriptorSetPoolList_t& inUseDescriptorSetPools; // 5944
		DescriptorSetPoolList_t& availableDescriptorSetPools; // 5945
		AddToTail(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
				const VulkanDescriptorSetPool_t& src);  // 5947
		Remove(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
			long long int elem);  // 5951
	}
	CRenderDeviceVulkan::ReleaseDescriptorSetPool(
				PerThreadDataVulkan_t* pPerThread,
				VulkanDescriptorSetPool_t* pDescriptorSetPool);  // 5932
	CRenderDeviceVulkan::ReleaseDescriptorSetPool(
				PerThreadDataVulkan_t* pPerThread,
				VulkanDescriptorSetPool_t* pDescriptorSetPool);  // 6001
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 6083
	CPipelineManagerVulkan::GetMaxTotalUniformBuffers(); // 6086
	CPipelineManagerVulkan::GetMaxTotalSamplers(); // 6095
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 618
	CInterlockedIntT<unsigned int, 4>::InterlockedOr(
			unsigned int newValue);  // 625
	CInterlockedIntT<unsigned int, 4>::operator|=(
			unsigned int mask);  // 6148
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 6181
	AddToTail(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
			const VulkanDescriptorSetPool_t& src);  // 6194
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::operator[](
			intp i);  // 494
	operator[](const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
			long long int i);  // 6195
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 6174
} /* size: 0, variables: 11, inline expansions: 14 (253 bytes) */

// <00A116DB> vulkan/renderdevicevulkan.cpp:6216
// variables: 15
// function calls: 90
void CRenderDeviceVulkan::RecycleDescriptorSetPools()
{
	uint nHighestFrameCompletedGPU; // 6218
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_6222; // 6222
	{
		int _idx_pPerThread; // 6223
		{
			PerThreadDataVulkan_t* pPerThread; // 6223
			{
				CUtlVector<long long int, CUtlMemory<long long int, int> > toRemove; // 6225
				DescriptorSetPoolList_t& inUseDescriptorSetPools; // 6226
				{
					long long int nIndex; // 6227
					{
						VulkanDescriptorSetPool_t& descriptorSetPool; // 6229
						CUtlMemory<long long int, int>::Base(); // 112
						CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Base(); // 368
						CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::GrowMemory(
								int num);  // 1198
						CUtlMemory<long long int, int>::NumAllocated(); // 1196
						CUtlMemory<long long int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Element(
							int i);  // 1201
						CopyConstruct<long long int>(long long int* pMemory,
										const long long int& src);  // 1201
						CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::AddToTail(
								const long long int& src);  // 6235
						CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::operator[](
								intp i);  // 494
						operator[](const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
								long long int i);  // 6229
						AddToTail(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
								const VulkanDescriptorSetPool_t& src);  // 6234
					}
					Head(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this); // 6227
					Next(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this,
						long long int i);  // 6227
				}
				{
					int nIndex; // 6239
					CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Count(); // 6239
					CUtlMemory<long long int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::operator[](
							int i);  // 6241
					Remove(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
						long long int elem);  // 6241
				}
				CUtlMemory<long long int, int>::ValidateGrowSize(); // 475
				CUtlMemory<long long int, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<long long int, CUtlMemory<long long int, int> >::CUtlVector(); // 6225
				CUtlMemory<long long int, int>::IsExternallyAllocated(); // 905
				CUtlMemory<long long int, int>::Purge(); // 903
				CUtlMemory<long long int, int>::Purge(); // 1799
				CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::RemoveAll(); // 1798
				CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Purge(); // 6243
				CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Purge(); // 560
				CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::~CUtlVectorBase(); // 410
				CUtlVector<long long int, CUtlMemory<long long int, int> >::~CUtlVector(); // 6244
			}
		}
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_6248; // 6248
		CUtlVector<long long int, CUtlMemory<long long int, int> > toRemove; // 6249
		{
			long long int nIndex; // 6250
			{
				VulkanDescriptorSetPool_t* pDescriptorSetPool; // 6252
				CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::operator[](
						intp i);  // 494
				operator[](const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
						long long int i);  // 6252
				CUtlMemory<long long int, int>::NumAllocated(); // 1196
				CUtlMemory<long long int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Element(
					int i);  // 1201
				CopyConstruct<long long int>(long long int* pMemory,
								const long long int& src);  // 1201
				CUtlMemory<long long int, int>::Base(); // 112
				CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Base(); // 368
				CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::AddToTail(
						const long long int& src);  // 6255
			}
			Head(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this); // 6250
			Next(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this,
				long long int i);  // 6250
		}
		{
			int nIndex; // 6259
			{
				VulkanDescriptorSetPool_t* pDescriptorSetPool; // 6261
				CUtlMemory<long long int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::operator[](
						int i);  // 6261
				{
				}
				CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::operator[](
						intp i);  // 494
				operator[](const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
						long long int i);  // 6261
				CUtlMemory<long long int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::operator[](
						int i);  // 6264
				Remove(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
					long long int elem);  // 6264
			}
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Count(); // 6259
		}
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 6248
		CUtlMemory<long long int, int>::ValidateGrowSize(); // 475
		CUtlMemory<long long int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<long long int, CUtlMemory<long long int, int> >::CUtlVector(); // 6249
		CUtlMemory<long long int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<long long int, int>::Purge(); // 903
		CUtlMemory<long long int, int>::Purge(); // 1799
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::RemoveAll(); // 1798
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::Purge(); // 560
		ValidateAlignment<long long int>(void); // 508
		CUtlMemory<long long int, int>::Purge(); // 903
		CUtlMemory<long long int, int>::Purge(); // 510
		CUtlMemory<long long int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<long long int, CUtlMemory<long long int, int> >::~CUtlVector(); // 6266
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 6266
	}
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 484
	CMemoryManagerVulkan::GetHighestFrameCompletedOnGPU(); // 6218
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 6222
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 6267
} /* size: 0, variables: 2, inline expansions: 12 (369 bytes) */

// <00A11104> vulkan/renderdevicevulkan.cpp:6270
// variables: 5
// function calls: 17
void CRenderDeviceVulkan::DestroyAllDescriptorSetPools()
{
	{
		long long int nIndex; // 6282
		{
			VulkanDescriptorSetPool_t* pDescriptorSetPool; // 6284
			CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::operator[](
					intp i);  // 494
			operator[](const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
					long long int i);  // 6284
		}
		Head(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this); // 6282
		Next(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this,
			long long int i);  // 6282
	}
	{
		long long int nIndex; // 6291
		{
			VulkanDescriptorSetPool_t* pDescriptorSetPool; // 6293
			CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::operator[](
					intp i);  // 494
			operator[](const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
					long long int i);  // 6293
		}
		Head(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this); // 6291
		Next(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this,
			long long int i);  // 6291
	}
	{
		long long int nIndex; // 6306
		CUtlLinkedList<CDescriptorSetVulkan::Head(); // 6306
		CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::operator[](
				intp i);  // 494
		CUtlLinkedList<CDescriptorSetVulkan::operator[](
				long long int i);  // 6308
		CUtlLinkedList<CDescriptorSetVulkan::Next(
			long long int i);  // 6306
	}
	default_delete<CBufferedDescriptorSetVulkan>::operator(
			CBufferedDescriptorSetVulkan* __ptr);  // 204
	__uniq_ptr_impl<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::reset(
		pointer __p);  // 511
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::reset(
		pointer __p);  // 436
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::operator=(
			nullptr_t);  // 8756
	CRenderDeviceVulkan::DestroyGlobalPerFrameDescriptorSet(); // 6274
} /* size: 327, inline expansions: 5 (130 bytes) */

// <00A10CFD> vulkan/renderdevicevulkan.cpp:6313
// variables: 3
// function calls: 16
void CRenderDeviceVulkan::DestroyAllStaticDescriptorSets()
{
	{
		long long int nIndex; // 6315
		CUtlLinkedList<CDescriptorSetVulkan::Head(); // 6315
		CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::operator[](
				intp i);  // 494
		CUtlLinkedList<CDescriptorSetVulkan::operator[](
				long long int i);  // 6317
		CUtlLinkedList<CDescriptorSetVulkan::Next(
			long long int i);  // 6315
	}
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::Purge(); // 643
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::InvalidIterator(); // 648
	CUtlLinkedList<CDescriptorSetVulkan::ResetDbgInfo(); // 650
	CUtlLinkedList<CDescriptorSetVulkan::Purge(); // 6319
	CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::Purge(); // 643
	CUtlLinkedList<RenderDescriptorSetHandle_t__::ResetDbgInfo(); // 650
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::InvalidIterator(); // 648
	CUtlLinkedList<RenderDescriptorSetHandle_t__::Purge(); // 6321
} /* size: 311, inline expansions: 12 (417 bytes) */

// <00A105B1> vulkan/renderdevicevulkan.cpp:6327
// variables: 5
// function calls: 28
void CRenderDeviceVulkan::CreateStaticDescriptorPool(VulkanDescriptorSetPool_t* pDescriptorSetPoolOut)
{
	CUtlVectorFixed<VkDescriptorPoolSize, 8> descriptorPoolSizes; // 6330
	VkDescriptorPoolSize* pDescriptorPoolSize; // 6331
	VkDescriptorPool pDescriptorPool; // 6366
	VkDescriptorPoolCreateInfo descriptorPoolCreateInfo; // 6367
	{
		int32 nDescriptorType; // 6385
		CUtlVectorBase<VkDescriptorPoolSize, CUtlMemoryFixed<VkDescriptorPoolSize, 8> >::Count(); // 6385
	}
	AlignedByteArrayExplicit_t<8, VkDescriptorPoolSize, 4>::Base(); // 268
	CUtlMemoryFixed<VkDescriptorPoolSize, 8>::Base(); // 112
	CUtlVectorBase<VkDescriptorPoolSize, CUtlMemoryFixed<VkDescriptorPoolSize, 8> >::Base(); // 368
	CUtlVectorBase<VkDescriptorPoolSize, CUtlMemoryFixed<VkDescriptorPoolSize, 8> >::ResetDbgInfo(); // 530
	AlignedByteArrayExplicit_t<8, VkDescriptorPoolSize, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, VkDescriptorPoolSize>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<VkDescriptorPoolSize, 8>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<VkDescriptorPoolSize, CUtlMemoryFixed<VkDescriptorPoolSize, 8> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<VkDescriptorPoolSize, 8>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 6330
	CPipelineManagerVulkan::GetMaxTotalUniformBuffers(); // 6333
	CUtlVectorBase<VkDescriptorPoolSize, CUtlMemoryFixed<VkDescriptorPoolSize, 8> >::AddToTail(); // 1156
	CUtlVectorBase<VkDescriptorPoolSize, CUtlMemoryFixed<VkDescriptorPoolSize, 8> >::AddToTailGetPtr(); // 6355
	CPipelineManagerVulkan::GetMaxTotalSamplers(); // 6337
	CUtlVectorBase<VkDescriptorPoolSize, CUtlMemoryFixed<VkDescriptorPoolSize, 8> >::AddToTail(); // 1156
	CUtlVectorBase<VkDescriptorPoolSize, CUtlMemoryFixed<VkDescriptorPoolSize, 8> >::AddToTailGetPtr(); // 6361
	CRenderDeviceVulkan::EXTDescriptorIndexingEnabled(); // 6371
	AlignedByteArrayExplicit_t<8, VkDescriptorPoolSize, 4>::Base(); // 268
	CUtlMemoryFixed<VkDescriptorPoolSize, 8>::Base(); // 112
	CUtlVectorBase<VkDescriptorPoolSize, CUtlMemoryFixed<VkDescriptorPoolSize, 8> >::Base(); // 6374
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 6376
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 6378
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 6383
} /* size: 661, variables: 4, inline expansions: 27 (395 bytes) */

// <00A1045A> vulkan/renderdevicevulkan.cpp:6394
// variables: 2
// function calls: 3
void CRenderDeviceVulkan::UpdateStaticDescriptorPool()
{
	VulkanDescriptorSetPool_t newDescriptorSetPool; // 6396
	IndexType_t nIndex; // 6398
	AddToTail(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
			const VulkanDescriptorSetPool_t& src);  // 6398
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::operator[](
			intp i);  // 494
	operator[](const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
			long long int i);  // 6399
} /* size: 94, variables: 2, inline expansions: 3 (11 bytes) */

// <00A6BBD7> vulkan/renderdevicevulkan.cpp:6405
void CRenderDeviceVulkan::CreateDescriptorSet(int32 nNumDescriptors, const RenderDescriptorDesc_t* pDescriptorDescs, int32 nNumBindings, const RenderDescriptorBinding_t* pDescriptorBindings, bool bFullyRewriteEachFrame)
{
} /* size: 25 */

// <00A0FA08> vulkan/renderdevicevulkan.cpp:6415
// variables: 9
// function calls: 23
void CRenderDeviceVulkan::CreateDescriptorSetVulkan(int32 nNumDescriptors, const RenderDescriptorDesc_t* pDescriptorDescs, int32 nNumBindings, const RenderDescriptorBinding_t* pDescriptorBindings, bool bFullyRewriteEachFrame, CDescriptorSetVulkan** ppOutSet)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_6428; // 6428
	const char   __FUNCTION__; // 29024
	CDescriptorSetVulkan* pNewStaticDescriptorSet; // 6438
	bool bCreatedDescriptorSet; // 6439
	StaticDescriptorSetIndex_t nIndex; // 6461
	RenderDescriptorSetHandle_t hDescriptorSet; // 6462
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6436
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6463
	}
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 6428
	CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::IsValidIterator(
			const Iterator_t& it);  // 81
	CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::IsValidIterator(
			const Iterator_t& it);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::HeaderToBlock(
			const BlockHeader_t* pHeader);  // 131
	CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::IsInBlock(
			intp i,
			BlockHeader_t* pBlockHeader);  // 85
	CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::GetIndex(
		const Iterator_t& it);  // 86
	{
		BlockHeader_t* pbh; // 88
		CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 90
	}
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::IsIdxAfter(
			intp i,
			const Iterator_t& it);  // 591
	CUtlLinkedList<CDescriptorSetVulkan::IsValidIndex(
			long long int i);  // 977
	CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::operator[](
			intp i);  // 367
	CUtlLinkedList<CDescriptorSetVulkan::InternalElement(
			long long int i);  // 1011
	{
	}
	CUtlLinkedList<CDescriptorSetVulkan::LinkBefore(
			long long int before,
			long long int elem);  // 822
	CopyConstruct<CDescriptorSetVulkan*>(CDescriptorSetVulkan** pMemory,
						CDescriptorSetVulkan* const& src);  // 825
	CUtlLinkedList<CDescriptorSetVulkan::InsertBefore(
			long long int before,
			CDescriptorSetVulkan* const& src);  // 856
	CUtlLinkedList<CDescriptorSetVulkan::AddToTail(
			CDescriptorSetVulkan* const& src);  // 6461
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 6465
} /* size: 0, variables: 6, inline expansions: 21 (2332 bytes) */

// <00A0F435> vulkan/renderdevicevulkan.cpp:6470
// variables: 7
// function calls: 12
void CRenderDeviceVulkan::UpdateDescriptorSet(RenderDescriptorSetHandle_t hDescriptorSet, int32 nNumBindings, const RenderDescriptorBinding_t* pDescriptorBindings)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_6478; // 6478
	const char   __FUNCTION__; // 28867
	StaticDescriptorSetIndex_t nIndex; // 6481
	CDescriptorSetVulkan* pStaticDescriptorSet; // 6482
	bool bAllocatedDescriptorSet; // 6496
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6480
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6495
	}
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 6478
	CDescriptorSetVulkan::GetDescriptorSetPool(); // 6717
	CRenderDeviceVulkan::QueueStaticDescriptorSetDeletion(
					CDescriptorSetVulkan* pStaticDescriptorSet);  // 6486
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 6513
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 6513
} /* size: 0, variables: 5, inline expansions: 12 (637 bytes) */

// <009A176B> vulkan/renderdevicevulkan.cpp:6520
// member functions: 8
// member variables: 2
// class size: 24
class CDescriptorSetDeferredDeletion : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CDescriptorSetDeferredDeletion(CDescriptorSetDeferredDeletion* , const CDescriptorSetDeferredDeletion& );
	/* vulkan/renderdevicevulkan.cpp:6523 */
	void CDescriptorSetDeferredDeletion(CDescriptorSetDeferredDeletion* , CDescriptorSetVulkan* );
	/* vulkan/renderdevicevulkan.cpp:6528 */
	virtual void ~CDescriptorSetDeferredDeletion(CDescriptorSetDeferredDeletion* );
private:
	/* vulkan/renderdevicevulkan.cpp:6534 */
	void CDescriptorSetDeferredDeletion(CDescriptorSetDeferredDeletion* );
	CDescriptorSetVulkan * m_pDescriptorSet; /* 16 8 */
	void CDescriptorSetDeferredDeletion(class CDescriptorSetDeferredDeletion *, const class CDescriptorSetDeferredDeletion  &); /* linkage=_ZN30CDescriptorSetDeferredDeletionC4ERKS_ */
	void CDescriptorSetDeferredDeletion(class CDescriptorSetDeferredDeletion *, class CDescriptorSetVulkan *); /* linkage=_ZN30CDescriptorSetDeferredDeletionC4EP20CDescriptorSetVulkan */
	virtual void ~CDescriptorSetDeferredDeletion(class CDescriptorSetDeferredDeletion *); /* linkage=_ZN30CDescriptorSetDeferredDeletionD4Ev */
	void CDescriptorSetDeferredDeletion(class CDescriptorSetDeferredDeletion *); /* linkage=_ZN30CDescriptorSetDeferredDeletionC4Ev */
};

// <00A0F419> vulkan/renderdevicevulkan.cpp:6523
void CDescriptorSetDeferredDeletion::CDescriptorSetDeferredDeletion(CDescriptorSetVulkan* pDescriptorSet)
{
} /* size: 0 */

// <00A0F3F3> vulkan/renderdevicevulkan.cpp:6523
inline void CDescriptorSetDeferredDeletion::CDescriptorSetDeferredDeletion(CDescriptorSetVulkan* pDescriptorSet)
{
} /* size: 0 */

// <00A0F3C0> vulkan/renderdevicevulkan.cpp:6528
void CDescriptorSetDeferredDeletion::~CDescriptorSetDeferredDeletion()
{
} /* size: 33 */

// <00A0F2E5> vulkan/renderdevicevulkan.cpp:6528
// function calls: 3
void CDescriptorSetDeferredDeletion::~CDescriptorSetDeferredDeletion()
{
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 328
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted(); // 6531
	CDescriptorSetDeferredDeletion::~CDescriptorSetDeferredDeletion(); // 6531
} /* size: 59, inline expansions: 3 (25 bytes) */

// <00A0F2CC> vulkan/renderdevicevulkan.cpp:6528
inline void CDescriptorSetDeferredDeletion::~CDescriptorSetDeferredDeletion()
{
} /* size: 0 */

// <00A0E277> vulkan/renderdevicevulkan.cpp:6542
// variables: 10
// function calls: 55
void CRenderDeviceVulkan::DestroyDescriptorSet(RenderDescriptorSetHandle_t hDescriptorSet)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_6549; // 6549
	const char   __FUNCTION__; // 28894
	StaticDescriptorSetIndex_t nStaticSetIndex; // 6582
	CDescriptorSetVulkan* pStaticDescriptorSet; // 6583
	{
		IndexType_t nIndex; // 6556
		{
			StaticDescriptorSetIndex_t nStaticSetIndex; // 6559
			CDescriptorSetVulkan* pStaticDescriptorSet; // 6560
			{
				IndexType_t nIndexToRemove; // 6570
				CUtlLinkedList<CDescriptorSetVulkan::Remove(
					long long int elem);  // 6564
				CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
				CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 6524
				CDescriptorSetDeferredDeletion::CDescriptorSetDeferredDeletion(
								CDescriptorSetVulkan* pDescriptorSet);  // 6568
				CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::operator[](
						short unsigned int i);  // 368
				CUtlLinkedList<RenderDescriptorSetHandle_t__::InternalElement(
						short unsigned int i);  // 550
				CUtlLinkedList<RenderDescriptorSetHandle_t__::Next(
					short unsigned int i);  // 6571
				CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::IsIdxValid(
						short unsigned int i);  // 588
				CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::IsIdxAfter(
						short unsigned int i,
						const Iterator_t& it);  // 591
				CUtlLinkedList<RenderDescriptorSetHandle_t__::IsValidIndex(
						short unsigned int i);  // 583
				CUtlLinkedList<RenderDescriptorSetHandle_t__::IsValidIndex(
						short unsigned int i);  // 749
				{
				}
				CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::operator[](
						short unsigned int i);  // 367
				CUtlLinkedList<RenderDescriptorSetHandle_t__::InternalElement(
						short unsigned int i);  // 752
				Destruct<RenderDescriptorSetHandle_t__*>(RenderDescriptorSetHandle_t__** pMemory); // 753
				CUtlLinkedList<RenderDescriptorSetHandle_t__::Free(
					short unsigned int elem);  // 907
				CUtlLinkedList<RenderDescriptorSetHandle_t__::Remove(
					short unsigned int elem);  // 6572
			}
			CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::operator[](
					short unsigned int i);  // 494
			CUtlLinkedList<RenderDescriptorSetHandle_t__::operator[](
					short unsigned int i);  // 6559
			{
			}
			CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::operator[](
					intp i);  // 494
			CUtlLinkedList<CDescriptorSetVulkan::operator[](
					long long int i);  // 6560
			CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::operator[](
					short unsigned int i);  // 368
			CUtlLinkedList<RenderDescriptorSetHandle_t__::InternalElement(
					short unsigned int i);  // 550
			CUtlLinkedList<RenderDescriptorSetHandle_t__::Next(
				short unsigned int i);  // 6576
		}
		CUtlLinkedList<RenderDescriptorSetHandle_t__::Head(); // 6556
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6581
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6584
	}
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 6549
	CUtlLinkedList<RenderDescriptorSetHandle_t__::Count(); // 6554
	CDescriptorSetVulkan::GetDescriptorSetPool(); // 6717
	CRenderDeviceVulkan::QueueStaticDescriptorSetDeletion(
					CDescriptorSetVulkan* pStaticDescriptorSet);  // 6587
	CDescriptorSetVulkan::SetQueuedForDeletion(); // 6593
	CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::IsIdxValid(
			short unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::operator[](
			short unsigned int i);  // 594
	CUtlLinkedList<RenderDescriptorSetHandle_t__::IsValidIndex(
			short unsigned int i);  // 583
	CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 591
	CUtlLinkedList<RenderDescriptorSetHandle_t__::IsValidIndex(
			short unsigned int i);  // 977
	{
	}
	CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::operator[](
			short unsigned int i);  // 367
	CUtlLinkedList<RenderDescriptorSetHandle_t__::InternalElement(
			short unsigned int i);  // 982
	CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::operator[](
			short unsigned int i);  // 367
	CUtlLinkedList<RenderDescriptorSetHandle_t__::InternalElement(
			short unsigned int i);  // 1011
	CUtlLinkedList<RenderDescriptorSetHandle_t__::LinkBefore(
			short unsigned int before,
			short unsigned int elem);  // 822
	CopyConstruct<RenderDescriptorSetHandle_t__*>(RenderDescriptorSetHandle_t__** pMemory,
							RenderDescriptorSetHandle_t__* const& src);  // 825
	CUtlMemory<UtlLinkedListElem_t<RenderDescriptorSetHandle_t__::operator[](
			short unsigned int i);  // 482
	CUtlLinkedList<RenderDescriptorSetHandle_t__::Element(
		short unsigned int i);  // 825
	CUtlLinkedList<RenderDescriptorSetHandle_t__::InsertBefore(
			short unsigned int before,
			RenderDescriptorSetHandle_t__* const& src);  // 856
	CUtlLinkedList<RenderDescriptorSetHandle_t__::AddToTail(
			RenderDescriptorSetHandle_t__* const& src);  // 6596
	CUtlLinkedList<CDescriptorSetVulkan::Remove(
		long long int elem);  // 6601
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 6524
	CDescriptorSetDeferredDeletion::CDescriptorSetDeferredDeletion(
					CDescriptorSetVulkan* pDescriptorSet);  // 6605
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 6607
} /* size: 0, variables: 4, inline expansions: 31 (1585 bytes) */

// <00A0E0F7> vulkan/renderdevicevulkan.cpp:6610
// variables: 3
// function calls: 3
void CRenderDeviceVulkan::LockStaticDescriptorSet(const RenderDescriptorSetHandle_t hDescriptorSet)
{
	const char   __FUNCTION__; // 28970
	const StaticDescriptorSetIndex_t  nIndex; // 6618
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6616
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 6617
} /* size: 0, variables: 2, inline expansions: 3 (75 bytes) */

// <00A68BCB> vulkan/renderdevicevulkan.cpp:6623
// function calls: 4
void CRenderDeviceVulkan::UnlockStaticDescriptorSet(const RenderDescriptorSetHandle_t hDescriptorSet)
{
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 6629
	CRenderDeviceVulkan::UnlockStaticDescriptorSet(
					const RenderDescriptorSetHandle_t  hDescriptorSet);  // 6623
} /* size: 57, inline expansions: 4 (105 bytes) */

// <00A0E0D1> vulkan/renderdevicevulkan.cpp:6623
void CRenderDeviceVulkan::UnlockStaticDescriptorSet(const RenderDescriptorSetHandle_t hDescriptorSet)
{
} /* size: 0 */

// <00A0DB3C> vulkan/renderdevicevulkan.cpp:6635
// variables: 8
// function calls: 21
void CRenderDeviceVulkan::AcquireDynamicDescriptorSet(PerThreadDataVulkan_t* pPerThread, const CDescriptorSetVulkan* pDescriptorSetUsedAsTemplate, VkDescriptorSet pDescriptorSet)
{
	CUtlVector<VulkanDynamicDescriptorSet_t*, CUtlMemory<VulkanDynamicDescriptorSet_t*, int> >& perThreadPool; // 6639
	VulkanDynamicDescriptorSet_t* pDynamicDescriptorSet; // 6640
	int32 nSearchCount; // 6643
	const char   __FUNCTION__; // 29073
	RenderDescriptorSetHandle_t hDescriptorSet; // 6671
	{
		uint16_t nCurIndex; // 6646
		CUtlMemory<VulkanDynamicDescriptorSet_t::operator[](
				int i);  // 588
		CUtlVectorBase<VulkanDynamicDescriptorSet_t::operator[](
				int i);  // 6649
		CInterlockedIntT<unsigned int, 4>::GetRaw(); // 484
		CMemoryManagerVulkan::GetHighestFrameCompletedOnGPU(); // 6649
	}
	{
		int32_t nIndex; // 6662
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6663
		}
		CUtlMemory<VulkanDynamicDescriptorSet_t::NumAllocated(); // 1196
		CUtlMemory<VulkanDynamicDescriptorSet_t::Base(); // 112
		CUtlVectorBase<VulkanDynamicDescriptorSet_t::Base(); // 368
		CUtlVectorBase<VulkanDynamicDescriptorSet_t::ResetDbgInfo(); // 824
		CUtlMemory<VulkanDynamicDescriptorSet_t::IsGrowable(); // 823
		CUtlMemory<VulkanDynamicDescriptorSet_t::IsExternallyAllocated(); // 859
		CUtlMemory<VulkanDynamicDescriptorSet_t::IsExternallyAllocated(); // 861
		CUtlMemory<VulkanDynamicDescriptorSet_t::Grow(
			int num);  // 806
		CUtlVectorBase<VulkanDynamicDescriptorSet_t::GrowMemory(
				int num);  // 1198
		CUtlMemory<VulkanDynamicDescriptorSet_t::operator[](
				int i);  // 602
		CUtlVectorBase<VulkanDynamicDescriptorSet_t::Element(
			int i);  // 1201
		CopyConstruct<VulkanDynamicDescriptorSet_t*>(VulkanDynamicDescriptorSet_t** pMemory,
								VulkanDynamicDescriptorSet_t* const& src);  // 1201
		CUtlVectorBase<VulkanDynamicDescriptorSet_t::AddToTail(
				VulkanDynamicDescriptorSet_t* const& src);  // 6661
		CUtlVectorBase<VulkanDynamicDescriptorSet_t::Count(); // 6662
	}
	CUtlVectorBase<VulkanDynamicDescriptorSet_t::Count(); // 6644
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 6670
} /* size: 0, variables: 5, inline expansions: 3 (28 bytes) */

// <00A5E4FF> vulkan/renderdevicevulkan.cpp:6682
// function calls: 2
void CRenderDeviceVulkan::TextureBecameFullyResident(HRenderTexture hTex)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6684
} /* size: 75, inline expansions: 2 (14 bytes) */

// <00A0DB16> vulkan/renderdevicevulkan.cpp:6682
void CRenderDeviceVulkan::TextureBecameFullyResident(HRenderTexture hTex)
{
} /* size: 0 */

// <00A5FBAF> vulkan/renderdevicevulkan.cpp:6694
// variable: 1
// function calls: 6
void CRenderDeviceVulkan::TextureBecameEvicted(HRenderTexture hTex)
{
	const CTextureVulkan* pTexture; // 6698
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 6696
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 6698
	{
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 6700
	}
	CRenderDeviceVulkan::TextureBecameEvicted(
				HRenderTexture hTex);  // 6694
} /* size: 0, variables: 1, inline expansions: 5 (56 bytes) */

// <00A0DA28> vulkan/renderdevicevulkan.cpp:6694
// variable: 1
void CRenderDeviceVulkan::TextureBecameEvicted(HRenderTexture hTex)
{
	const CTextureVulkan* pTexture; // 6698
	{
	}
} /* size: 0, variables: 1 */

// <00A6B981> vulkan/renderdevicevulkan.cpp:6710
// variable: 1
// function call: 1
void CRenderDeviceVulkan::QueueStaticDescriptorSetDeletion(CDescriptorSetVulkan* pStaticDescriptorSet)
{
	VulkanDescriptorSetPool_t* pDescriptorSetPool; // 6717
	CDescriptorSetVulkan::GetDescriptorSetPool(); // 6717
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00A0D9F5> vulkan/renderdevicevulkan.cpp:6710
// variable: 1
void CRenderDeviceVulkan::QueueStaticDescriptorSetDeletion(CDescriptorSetVulkan* pStaticDescriptorSet)
{
	VulkanDescriptorSetPool_t* pDescriptorSetPool; // 6717
} /* size: 0, variables: 1 */

// <00A0D49D> vulkan/renderdevicevulkan.cpp:6731
// variables: 5
// function calls: 16
void CRenderDeviceVulkan::QueueStaticDescriptorPoolDeletion(VulkanDescriptorSetPool_t* pDescriptorSetPool)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_6733; // 6733
	const char   __FUNCTION__; // 29230
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6735
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6736
	}
	{
		long long int nIndex; // 6745
		Head(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this); // 6745
		Next(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListEl this,
			long long int i);  // 6745
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::operator[](
				intp i);  // 494
		operator[](const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
				long long int i);  // 6747
		Remove(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
			long long int elem);  // 6749
	}
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 6733
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 6737
	AddToTail(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
			const VulkanDescriptorSetPool_t& src);  // 6738
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 6753
} /* size: 0, variables: 2, inline expansions: 11 (683 bytes) */

// <00A0C590> vulkan/renderdevicevulkan.cpp:6758
// variables: 11
// function calls: 51
void CRenderDeviceVulkan::RegisterDescriptorSetLayout(CUtlStringToken descriptorSetName, RenderDescriptorSetHandle_t hDescriptorSet)
{
	const char   __FUNCTION__; // 29073
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_6761; // 6761
	UtlHashHandle_t hIndex; // 6769
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6760
	}
	{
		CAutoLockStaticDescriptorSet autoLockStaticDescriptorSet; // 6765
		CAutoLockStaticDescriptorSet::CAutoLockStaticDescriptorSet(
						CRenderDeviceVulkan* pDevice,
						const RenderDescriptorSetHandle_t  hDescriptorSet);  // 6765
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
		CThreadRWLock_FastRead::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 6629
		CRenderDeviceVulkan::UnlockStaticDescriptorSet(
						const RenderDescriptorSetHandle_t  hDescriptorSet);  // 6623
		CRenderDeviceVulkan::UnlockStaticDescriptorSet(
						const RenderDescriptorSetHandle_t  hDescriptorSet);  // 1162
		CAutoLockStaticDescriptorSet::~CAutoLockStaticDescriptorSet(); // 6767
	}
	{
		RenderDescriptorSetHandle_t hPrevDescriptorSet; // 6776
		CAutoLockStaticDescriptorSet autoLockStaticDescriptorSet; // 6781
		CDescriptorSetVulkan* pPrevRegisteredDescriptorSet; // 6782
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__::operator[](
				int i);  // 297
		CUtlHashtable<CUtlStringToken, RenderDescriptorSetHandle_t__::operator[](
				handle_t idx);  // 6776
		CAutoLockStaticDescriptorSet::CAutoLockStaticDescriptorSet(
						CRenderDeviceVulkan* pDevice,
						const RenderDescriptorSetHandle_t  hDescriptorSet);  // 6781
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
		CThreadRWLock_FastRead::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 6629
		CRenderDeviceVulkan::UnlockStaticDescriptorSet(
						const RenderDescriptorSetHandle_t  hDescriptorSet);  // 6623
		CRenderDeviceVulkan::UnlockStaticDescriptorSet(
						const RenderDescriptorSetHandle_t  hDescriptorSet);  // 1162
		CAutoLockStaticDescriptorSet::~CAutoLockStaticDescriptorSet(); // 6787
	}
	{
		IndexType_t nIndex; // 6792
		{
			CShaderVulkanBase* pShader; // 6795
			{
				IndexType_t nIndexToRemove; // 6798
				CUtlLinkedList<CShaderVulkanBase::Next(
					int i);  // 6799
				CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase::IsIdxValid(
						int i);  // 588
				CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase::IsIdxAfter(
						int i,
						const Iterator_t& it);  // 591
				CUtlLinkedList<CShaderVulkanBase::IsValidIndex(
						int i);  // 583
				CUtlLinkedList<CShaderVulkanBase::IsValidIndex(
						int i);  // 749
				CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase::operator[](
						int i);  // 367
				CUtlLinkedList<CShaderVulkanBase::InternalElement(
						int i);  // 752
				Destruct<CShaderVulkanBase*>(CShaderVulkanBase** pMemory); // 753
				{
				}
				CUtlLinkedList<CShaderVulkanBase::Free(
					int elem);  // 907
				CUtlLinkedList<CShaderVulkanBase::Remove(
					int elem);  // 6800
			}
			CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase::operator[](
					int i);  // 368
			CUtlLinkedList<CShaderVulkanBase::InternalElement(
					int i);  // 550
			CUtlLinkedList<CShaderVulkanBase::Next(
				int i);  // 6804
			CShaderVulkanBase::PendingStaticDescriptorSetRegistration(); // 6796
			CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase::operator[](
					int i);  // 494
			CUtlLinkedList<CShaderVulkanBase::operator[](
					int i);  // 6795
		}
		CUtlLinkedList<CShaderVulkanBase::Head(); // 6792
	}
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 6761
	CUtlStringToken::GetHashCode(); // 206
	DefaultHashFunctor<CUtlStringToken>::operator(
			const CUtlStringToken& token);  // 218
	CUtlHashtable<CUtlStringToken, RenderDescriptorSetHandle_t__::Find(
		KeyArg_t k);  // 6769
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__::operator[](
			int i);  // 720
	CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__::CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>(
										const CUtlStringToken& k,
										RenderDescriptorSetHandle_t__* const& v);  // 1514
	Construct<CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>, const CUtlStringToken&, RenderDescriptorSetHandle_t__*&>(CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>* pMemory); // 720
	CUtlHashtable<CUtlStringToken, RenderDescriptorSetHandle_t__::DoInsert<const CUtlStringToken&>(
					const CUtlStringToken& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 714
	CUtlHashtable<CUtlStringToken, RenderDescriptorSetHandle_t__::DoInsert<const CUtlStringToken&>(
					const CUtlStringToken& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 249
	CUtlHashtable<CUtlStringToken, RenderDescriptorSetHandle_t__::Insert(
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 6772
	CRenderDeviceVulkan::EXTGraphicsPipelineLibraryEnabled(); // 6790
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 6808
} /* size: 0, variables: 3, inline expansions: 18 (886 bytes) */

// <00A0BFFA> vulkan/renderdevicevulkan.cpp:6811
// variables: 4
// function calls: 18
void CRenderDeviceVulkan::CreateBLAS(const BLASCreateDesc_t& desc, uint32* pSizeCounter)
{
	BLASCreateDesc_t modifiedDesc; // 6818
	CBLASVulkan* pBLAS; // 6825
	RenderBLASHandle_t hBLAS; // 6831
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_6827; // 6827
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 6827
		AddToDHead<CBaseAccelerationStructureVulkan>(CBaseAccelerationStructureVulkan *& head,
								CBaseAccelerationStructureVulkan* which);  // 1186
		CUtlIntrusiveDList<CBaseAccelerationStructureVulkan>::AddToHead(
				CBaseAccelerationStructureVulkan* node);  // 6828
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 6829
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 6819
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 6820
	operator&(RaytraceBuildFlags_t a,
			RaytraceBuildFlags_t b);  // 1218
	operator&=(RaytraceBuildFlags_t& a,
			RaytraceBuildFlags_t b);  // 6822
} /* size: 355, variables: 3, inline expansions: 6 (80 bytes) */

// <00A0BF45> vulkan/renderdevicevulkan.cpp:6842
// variable: 1
// function calls: 2
void CRenderDeviceVulkan::IsCompactible(RenderBLASHandle_t hBLAS)
{
	CBaseAccelerationStructureVulkan* pBLAS; // 6844
	CBaseAccelerationStructureVulkan::BuildFlags(); // 36
	CBaseAccelerationStructureVulkan::IsCompactible(); // 6845
} /* size: 14, variables: 1, inline expansions: 2 (9 bytes) */

// <00A5E5CF> vulkan/renderdevicevulkan.cpp:6849
// variable: 1
// function calls: 3
void CRenderDeviceVulkan::IsReadyToCompact(RenderBLASHandle_t hBLAS)
{
	CBaseAccelerationStructureVulkan* pBLAS; // 6851
	CBaseAccelerationStructureVulkan::BuildFlags(); // 36
	CBaseAccelerationStructureVulkan::IsCompactible(); // 6853
	CBaseAccelerationStructureVulkan::IsWaitingForCompactSizeQuery(); // 6858
} /* size: 65, variables: 1, inline expansions: 3 (0 bytes) */

// <00A0BF12> vulkan/renderdevicevulkan.cpp:6849
// variable: 1
void CRenderDeviceVulkan::IsReadyToCompact(RenderBLASHandle_t hBLAS)
{
	CBaseAccelerationStructureVulkan* pBLAS; // 6851
} /* size: 0, variables: 1 */

// <00A0B90C> vulkan/renderdevicevulkan.cpp:6865
// variables: 6
// function calls: 17
void CRenderDeviceVulkan::CreateBLASForCompact(RenderBLASHandle_t hBloated)
{
	CBaseAccelerationStructureVulkan* pBloated; // 6871
	const char   __FUNCTION__; // 28894
	CBLASVulkan* pCompact; // 6879
	RenderBLASHandle_t hBLAS; // 6885
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6872
	}
	{
		CBaseAccelerationStructureVulkan::BuildFlags(); // 36
		CBaseAccelerationStructureVulkan::IsCompactible(); // 6853
		CRenderDeviceVulkan::IsReadyToCompact(
				RenderBLASHandle_t hBLAS);  // 6875
		_DebuggerBreakInlineExpressionWrapper(void); // 6875
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_6881; // 6881
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 6881
		AddToDHead<CBaseAccelerationStructureVulkan>(CBaseAccelerationStructureVulkan *& head,
								CBaseAccelerationStructureVulkan* which);  // 1186
		CUtlIntrusiveDList<CBaseAccelerationStructureVulkan>::AddToHead(
				CBaseAccelerationStructureVulkan* node);  // 6882
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 6883
	}
	CRenderResource::GetResourceType(); // 6872
} /* size: 0, variables: 4, inline expansions: 1 (0 bytes) */

// <00A64ACF> vulkan/renderdevicevulkan.cpp:6891
// variables: 2
// function calls: 13
void CRenderDeviceVulkan::DestroyBLAS(RenderBLASHandle_t hBLAS)
{
	{
		CBLASVulkan* pBLAS; // 6895
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_6897; // 6897
			ThreadInterlockedAssignIf64(volatile int64* pDest,
							int64 value,
							int64 comparand);  // 800
			CThreadFastMutex::TryLockInline(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 837
			ThreadPause(void); // 839
			CThreadFastMutex::Lock(
				const char* pFileName,
				int nLineNumber,
				unsigned int nSpinSleepTime);  // 943
			Lock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
					const CThreadFastMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 6897
			{
			}
			{
			}
			{
			}
			RemoveFromDList<CBaseAccelerationStructureVulkan>(CBaseAccelerationStructureVulkan *& head,
										CBaseAccelerationStructureVulkan* which);  // 1195
			CUtlIntrusiveDList<CBaseAccelerationStructureVulkan>::RemoveNode(
					CBaseAccelerationStructureVulkan* which);  // 6898
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 6900
		}
	}
	CRenderDeviceVulkan::DestroyBLAS(
			RenderBLASHandle_t hBLAS);  // 6891
} /* size: 0, inline expansions: 1 (394 bytes) */

// <00A0B8C8> vulkan/renderdevicevulkan.cpp:6891
// variables: 2
void CRenderDeviceVulkan::DestroyBLAS(RenderBLASHandle_t hBLAS)
{
	{
		CBLASVulkan* pBLAS; // 6895
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_6897; // 6897
		}
	}
} /* size: 0 */

// <00A0B33B> vulkan/renderdevicevulkan.cpp:6906
// variables: 4
// function calls: 16
void CRenderDeviceVulkan::CreateTLAS(const TLASCreateDesc_t& desc, TLASInstance_t* pInstances, int nInstanceCount)
{
	CTLASVulkan* pTLAS; // 6911
	RenderTLASHandle_t hTlas; // 6917
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_6913; // 6913
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 6913
		AddToDHead<CBaseAccelerationStructureVulkan>(CBaseAccelerationStructureVulkan *& head,
								CBaseAccelerationStructureVulkan* which);  // 1186
		CUtlIntrusiveDList<CBaseAccelerationStructureVulkan>::AddToHead(
				CBaseAccelerationStructureVulkan* node);  // 6914
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 6915
	}
	{
		CRenderContextVulkanPtr pRenderContextVulkan; // 6921
		CRenderContextVulkanPtr::operator->(); // 6922
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 481
		CRenderContextVulkanPtr::~CRenderContextVulkanPtr(); // 6924
	}
} /* size: 358, variables: 2 */

// <00A64F65> vulkan/renderdevicevulkan.cpp:6930
// variables: 2
// function calls: 16
void CRenderDeviceVulkan::DestroyTLAS(RenderTLASHandle_t hTLAS)
{
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_6934; // 6934
		CTLASVulkan* pTLAS; // 6935
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 6934
		CInterlockedIntT<int, 4>::operator int(); // 43
		CDescriptorSetReferenced::GetDescriptorSetRefCount(); // 6936
		{
		}
		{
		}
		{
		}
		RemoveFromDList<CBaseAccelerationStructureVulkan>(CBaseAccelerationStructureVulkan *& head,
									CBaseAccelerationStructureVulkan* which);  // 1195
		CUtlIntrusiveDList<CBaseAccelerationStructureVulkan>::RemoveNode(
				CBaseAccelerationStructureVulkan* which);  // 6938
		CDescriptorSetReferenced::SetDeleted(
				bool bDeleted);  // 6944
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 6946
	}
	CRenderDeviceVulkan::DestroyTLAS(
			RenderTLASHandle_t hTLAS);  // 6930
} /* size: 0, inline expansions: 1 (417 bytes) */

// <00A0B2F9> vulkan/renderdevicevulkan.cpp:6930
// variables: 2
void CRenderDeviceVulkan::DestroyTLAS(RenderTLASHandle_t hTLAS)
{
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_6934; // 6934
		CTLASVulkan* pTLAS; // 6935
	}
} /* size: 0 */

// <00A0AF15> vulkan/renderdevicevulkan.cpp:6950
// variables: 2
// function calls: 12
void CRenderDeviceVulkan::CreateRayTracePipeline(const RayTracePipelineStateCreateDesc_t& desc)
{
	CRayTracePipelineVulkan* pRaytracePipeline; // 6952
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_6954; // 6954
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 6954
		AddToDHead<CRayTracePipelineVulkan>(CRayTracePipelineVulkan *& head,
							CRayTracePipelineVulkan* which);  // 1186
		CUtlIntrusiveDList<CRayTracePipelineVulkan>::AddToHead(
				CRayTracePipelineVulkan* node);  // 6955
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 6956
	}
} /* size: 242, variables: 1 */

// <00A65469> vulkan/renderdevicevulkan.cpp:6962
// variables: 2
// function calls: 13
void CRenderDeviceVulkan::DestroyRayTracePipeline(RenderRayTracePipelineHandle_t hPipeline)
{
	{
		CRayTracePipelineVulkan* pPipeline; // 6966
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_6968; // 6968
			ThreadInterlockedAssignIf64(volatile int64* pDest,
							int64 value,
							int64 comparand);  // 800
			CThreadFastMutex::TryLockInline(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 837
			ThreadPause(void); // 839
			CThreadFastMutex::Lock(
				const char* pFileName,
				int nLineNumber,
				unsigned int nSpinSleepTime);  // 943
			Lock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
					const CThreadFastMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 6968
			{
			}
			{
			}
			{
			}
			RemoveFromDList<CRayTracePipelineVulkan>(CRayTracePipelineVulkan *& head,
								CRayTracePipelineVulkan* which);  // 1195
			CUtlIntrusiveDList<CRayTracePipelineVulkan>::RemoveNode(
					CRayTracePipelineVulkan* which);  // 6969
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 6971
		}
	}
	CRenderDeviceVulkan::DestroyRayTracePipeline(
				RenderRayTracePipelineHandle_t hPipeline);  // 6962
} /* size: 0, inline expansions: 1 (421 bytes) */

// <00A0AED1> vulkan/renderdevicevulkan.cpp:6962
// variables: 2
void CRenderDeviceVulkan::DestroyRayTracePipeline(RenderRayTracePipelineHandle_t hPipeline)
{
	{
		CRayTracePipelineVulkan* pPipeline; // 6966
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_6968; // 6968
		}
	}
} /* size: 0 */

// <00A0AAED> vulkan/renderdevicevulkan.cpp:6976
// variables: 2
// function calls: 12
void CRenderDeviceVulkan::CreateRayTraceShaderBindingTable(const ShaderBindingTableCreateDesc_t& desc)
{
	CRayTraceShaderBindingTableVulkan* pSBT; // 6978
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_6980; // 6980
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 6980
		AddToDHead<CRayTraceShaderBindingTableVulkan>(CRayTraceShaderBindingTableVulkan *& head,
								CRayTraceShaderBindingTableVulkan* which);  // 1186
		CUtlIntrusiveDList<CRayTraceShaderBindingTableVulkan>::AddToHead(
				CRayTraceShaderBindingTableVulkan* node);  // 6981
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 6982
	}
} /* size: 244, variables: 1 */

// <00A658E8> vulkan/renderdevicevulkan.cpp:6989
// variables: 2
// function calls: 13
void CRenderDeviceVulkan::DestroyRayTraceShaderBindingTable(IRaytraceShaderBindingTable* pSBT)
{
	{
		CRayTraceShaderBindingTableVulkan* pSBTVulkan; // 6993
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_6995; // 6995
			ThreadInterlockedAssignIf64(volatile int64* pDest,
							int64 value,
							int64 comparand);  // 800
			CThreadFastMutex::TryLockInline(
					const char* pFileName,
					int nLineNumber,
					const ThreadId_t  threadId);  // 837
			ThreadPause(void); // 839
			CThreadFastMutex::Lock(
				const char* pFileName,
				int nLineNumber,
				unsigned int nSpinSleepTime);  // 943
			Lock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
					const CThreadFastMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 6995
			{
			}
			{
			}
			{
			}
			RemoveFromDList<CRayTraceShaderBindingTableVulkan>(CRayTraceShaderBindingTableVulkan *& head,
										CRayTraceShaderBindingTableVulkan* which);  // 1195
			CUtlIntrusiveDList<CRayTraceShaderBindingTableVulkan>::RemoveNode(
					CRayTraceShaderBindingTableVulkan* which);  // 6996
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 6998
		}
	}
	CRenderDeviceVulkan::DestroyRayTraceShaderBindingTable(
						IRaytraceShaderBindingTable* pSBT);  // 6989
} /* size: 0, inline expansions: 1 (469 bytes) */

// <00A0AAA9> vulkan/renderdevicevulkan.cpp:6989
// variables: 2
void CRenderDeviceVulkan::DestroyRayTraceShaderBindingTable(IRaytraceShaderBindingTable* pSBT)
{
	{
		CRayTraceShaderBindingTableVulkan* pSBTVulkan; // 6993
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_6995; // 6995
		}
	}
} /* size: 0 */

// <00A0A688> vulkan/renderdevicevulkan.cpp:7004
// variables: 2
// function calls: 15
void CRenderDeviceVulkan::GetRegisteredDescriptorSetLayout(CUtlStringToken descriptorSetName)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_7006; // 7006
	UtlHashHandle_t hIndex; // 7007
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 7006
	CUtlStringToken::GetHashCode(); // 206
	DefaultHashFunctor<CUtlStringToken>::operator(
			const CUtlStringToken& token);  // 218
	CUtlHashtable<CUtlStringToken, RenderDescriptorSetHandle_t__::Find(
		KeyArg_t k);  // 7007
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, RenderDescriptorSetHandle_t__::operator[](
			int i);  // 296
	CUtlHashtable<CUtlStringToken, RenderDescriptorSetHandle_t__::operator[](
			handle_t idx);  // 7010
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 7013
} /* size: 205, variables: 2, inline expansions: 15 (332 bytes) */

// <00A09F27> vulkan/renderdevicevulkan.cpp:7018
// function calls: 33
void CShaderVulkanBase::CShaderVulkanBase()
{
	InvalidHandle(void); // 7021
	InvalidHandle(void); // 7022
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 7035
	ValidateGrowSize(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t this); // 475
	CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t this,
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >:: this); // 489
	ResetDbgInfo(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short unsigned this); // 491
	CUtlRBTree(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short unsigned this,
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 7033
	CUtlMemory<VkDescriptorSetLayoutBinding, int>::ValidateGrowSize(); // 475
	CUtlMemory<VkDescriptorSetLayoutBinding, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::CUtlVector(); // 7033
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int> this); // 7033
	CUtlMemory<CUtlStringToken, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlStringToken, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVector(); // 7033
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 7036
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 7037
} /* size: 337, inline expansions: 33 (531 bytes) */

// <00A09F0E> vulkan/renderdevicevulkan.cpp:7018
void CShaderVulkanBase::CShaderVulkanBase()
{
} /* size: 0 */

// <00A084F3> vulkan/renderdevicevulkan.cpp:7040
// variables: 7
// function calls: 130
void CShaderVulkanBase::~CShaderVulkanBase()
{
	{
		int32 nDescSet; // 7042
		{
			RenderDescriptorSetHandle_t hDescriptorSet; // 7044
			{
				CAutoLockStaticDescriptorSet staticDescSet; // 7048
			}
		}
	}
	{
		int32 nDescSet; // 7042
		Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 7042
		{
			RenderDescriptorSetHandle_t hDescriptorSet; // 7044
			CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, i this,
					int i);  // 7044
			{
				CAutoLockStaticDescriptorSet staticDescSet; // 7048
				CAutoLockStaticDescriptorSet::CAutoLockStaticDescriptorSet(
								CRenderDeviceVulkan* pDevice,
								const RenderDescriptorSetHandle_t  hDescriptorSet);  // 7048
				CAutoLockStaticDescriptorSet::Get(); // 7049
				ThreadInterlockedDecrement(volatile int32* p); // 586
				CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
				CThreadRWLock_FastRead::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 6629
				CRenderDeviceVulkan::UnlockStaticDescriptorSet(
								const RenderDescriptorSetHandle_t  hDescriptorSet);  // 6623
				CRenderDeviceVulkan::UnlockStaticDescriptorSet(
								const RenderDescriptorSetHandle_t  hDescriptorSet);  // 1162
				CAutoLockStaticDescriptorSet::~CAutoLockStaticDescriptorSet(); // 7050
			}
		}
	}
	InvalidHandle(void); // 7053
	CRenderDeviceVulkan::ShaderTable(); // 7055
	InvalidHandle(void); // 7056
	InvalidHandle(void); // 7059
	CRenderDeviceVulkan::ShaderTable(); // 7061
	InvalidHandle(void); // 7062
	CRenderDeviceVulkan::PipelineManager(); // 7066
	IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >:: this); // 905
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t this); // 903
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t this); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >:: this); // 1288
	Purge(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short unsigned this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short unsigned int> >(void); // 508
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t this); // 510
	~CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t this); // 510
	~CUtlRBTree(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short unsigned this); // 47
	CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::~CUtlMap(); // 7080
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlStringToken, int>::Purge(); // 903
	CUtlMemory<CUtlStringToken, int>::Purge(); // 1799
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Purge(); // 560
	ValidateAlignment<CUtlStringToken>(void); // 508
	CUtlMemory<CUtlStringToken, int>::Purge(); // 510
	CUtlMemory<CUtlStringToken, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVector(); // 7080
	{
		int i; // 1721
		CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, i this,
			int i);  // 1723
		RemoveAll(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this); // 1798
		CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::Purge(); // 903
		CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this); // 560
		ValidateAlignment<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t>(void); // 508
		CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::Purge(); // 510
		CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this); // 410
		~CUtlVector(const CUtlVector<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::DescriptorSe this); // 295
		CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::RemoveAll(); // 1798
		CUtlMemory<ShaderStorageBufferBinding_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<ShaderStorageBufferBinding_t, int>::Purge(); // 903
		CUtlMemory<ShaderStorageBufferBinding_t, int>::Purge(); // 1799
		CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Purge(); // 560
		ValidateAlignment<ShaderStorageBufferBinding_t>(void); // 508
		CUtlMemory<ShaderStorageBufferBinding_t, int>::Purge(); // 510
		CUtlMemory<ShaderStorageBufferBinding_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::~CUtlVector(); // 295
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 295
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 295
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 295
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 295
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 295
		DescriptorSetBindings_t::~DescriptorSetBindings_t(); // 1526
		Destruct<CShaderVulkanBase::DescriptorSetBindings_t>(DescriptorSetBindings_t* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, i this); // 1798
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::Purge(); // 903
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, i this); // 560
	ValidateAlignment<CShaderVulkanBase::DescriptorSetBindings_t>(void); // 508
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::Purge(); // 510
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, i this); // 410
	~CUtlVector(const CUtlVector<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int> this); // 7080
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::RemoveAll(); // 1798
	CUtlMemory<VkDescriptorSetLayoutBinding, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VkDescriptorSetLayoutBinding, int>::Purge(); // 903
	CUtlMemory<VkDescriptorSetLayoutBinding, int>::Purge(); // 1799
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Purge(); // 560
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::~CUtlVector(); // 7080
} /* size: 889, inline expansions: 45 (2099 bytes) */

// <00A0848C> vulkan/renderdevicevulkan.cpp:7040
void CShaderVulkanBase::~CShaderVulkanBase()
{
} /* size: 36 */

// <00A08446> vulkan/renderdevicevulkan.cpp:7040
// variables: 3
void CShaderVulkanBase::~CShaderVulkanBase()
{
	{
		int32 nDescSet; // 7042
		{
			RenderDescriptorSetHandle_t hDescriptorSet; // 7044
			{
				CAutoLockStaticDescriptorSet staticDescSet; // 7048
			}
		}
	}
} /* size: 0 */

// <00A047A2> vulkan/renderdevicevulkan.cpp:7083
// variables: 19
// function calls: 274
void CShaderVulkanBase::BuildDescriptorSetsInfo(CVfxShaderFileVulkan* pShaderFileVulkan)
{
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > samplerBindings; // 7086
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > uniformBufferBindings; // 7087
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > textureBindings; // 7088
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > inputAttachmentBindings; // 7089
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > imageBindings; // 7090
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > uniformTexelBufferBindings; // 7091
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > storageTexelBufferBindings; // 7092
	CUtlVector<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> > storageBufferBindings; // 7093
	{
		int32 nDescriptorSet; // 7103
		{
			DescriptorSetBindings_t descriptorSetBindings; // 7105
			uint32 nTotalBindings; // 7106
			{
				int32 nUBO; // 7108
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 7108
				CUtlMemory<VfxDescriptor_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
						int i);  // 7110
				CUtlMemory<int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
					int i);  // 1201
				CopyConstruct<int>(int* pMemory,
							const int& src);  // 1201
				CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
						const int& src);  // 7112
			}
			{
				int32 nSampler; // 7117
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 7117
				CUtlMemory<VfxDescriptor_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
						int i);  // 7119
				CUtlMemory<int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
					int i);  // 1201
				CopyConstruct<int>(int* pMemory,
							const int& src);  // 1201
				CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
						const int& src);  // 7121
			}
			{
				int32 nTexture; // 7126
				{
					TextureBinding_t textureBinding; // 7130
					CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::operator[](
							int i);  // 602
					Element(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this,
						int i);  // 1201
					CopyConstruct<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t>(TextureBinding_t* pMemory,
															const TextureBinding_t& src);  // 1201
					ResetDbgInfo(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this); // 824
					GrowMemory(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this,
							int num);  // 1198
					AddToTail(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this,
							const TextureBinding_t& src);  // 7133
				}
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 7126
				CUtlMemory<VfxDescriptor_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
						int i);  // 7128
			}
			{
				int32 nImage; // 7138
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 7138
				CUtlMemory<VfxDescriptor_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
						int i);  // 7140
				CUtlMemory<int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
					int i);  // 1201
				CopyConstruct<int>(int* pMemory,
							const int& src);  // 1201
				CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
						const int& src);  // 7142
			}
			{
				int32 i; // 7147
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 7147
				CUtlMemory<VfxDescriptor_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
						int i);  // 7149
				CUtlMemory<int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
					int i);  // 1201
				CopyConstruct<int>(int* pMemory,
							const int& src);  // 1201
				CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
						const int& src);  // 7151
			}
			{
				int32 i; // 7156
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 7156
				CUtlMemory<VfxDescriptor_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
						int i);  // 7158
				CUtlMemory<int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
					int i);  // 1201
				CopyConstruct<int>(int* pMemory,
							const int& src);  // 1201
				CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
						const int& src);  // 7160
			}
			{
				int32 i; // 7165
				CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Count(); // 7165
				CUtlMemory<ShaderStorageBufferBinding_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::operator[](
						int i);  // 7167
				CUtlMemory<ShaderStorageBufferBinding_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<ShaderStorageBufferBinding_t>(ShaderStorageBufferBinding_t* pMemory,
										const ShaderStorageBufferBinding_t& src);  // 1201
				CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::AddToTail(
						const ShaderStorageBufferBinding_t& src);  // 7169
			}
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 295
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 295
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 295
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 295
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 295
			ResetDbgInfo(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this); // 530
			CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this,
					int growSize,
					int initCapacity);  // 418
			CUtlVector(const CUtlVector<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::DescriptorSe this); // 295
			CUtlMemory<ShaderStorageBufferBinding_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<ShaderStorageBufferBinding_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::CUtlVector(); // 295
			CUtlStringToken::CUtlStringToken(); // 295
			DescriptorSetBindings_t::DescriptorSetBindings_t(); // 7105
			CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::Purge(); // 903
			CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::Purge(); // 1799
			Purge(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this); // 560
			ValidateAlignment<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t>(void); // 508
			CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::Purge(); // 510
			CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this); // 410
			~CUtlVector(const CUtlVector<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::DescriptorSe this); // 295
			CUtlMemory<ShaderStorageBufferBinding_t, int>::Purge(); // 903
			CUtlMemory<ShaderStorageBufferBinding_t, int>::Purge(); // 1799
			CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Purge(); // 560
			ValidateAlignment<ShaderStorageBufferBinding_t>(void); // 508
			CUtlMemory<ShaderStorageBufferBinding_t, int>::Purge(); // 510
			CUtlMemory<ShaderStorageBufferBinding_t, int>::~CUtlMemory(); // 562
			CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::~CUtlVectorBase(); // 410
			CUtlVector<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::~CUtlVector(); // 295
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 295
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 295
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 295
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 295
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 295
			DescriptorSetBindings_t::~DescriptorSetBindings_t(); // 7184
		}
		CVfxShaderFileVulkan::GetNumDescriptorSets(); // 7103
	}
	CUtlMemory<VfxDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVector(); // 7086
	CUtlMemory<VfxDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVector(); // 7087
	CUtlMemory<VfxDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVector(); // 7088
	CUtlMemory<VfxDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVector(); // 7089
	CUtlMemory<VfxDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVector(); // 7090
	CUtlMemory<VfxDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVector(); // 7091
	CUtlMemory<VfxDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVector(); // 7092
	CUtlMemory<ShaderStorageBufferBinding_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ShaderStorageBufferBinding_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::CUtlVector(); // 7093
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::RemoveAll(); // 1798
	CUtlMemory<ShaderStorageBufferBinding_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ShaderStorageBufferBinding_t, int>::Purge(); // 903
	CUtlMemory<ShaderStorageBufferBinding_t, int>::Purge(); // 1799
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Purge(); // 560
	ValidateAlignment<ShaderStorageBufferBinding_t>(void); // 508
	CUtlMemory<ShaderStorageBufferBinding_t, int>::Purge(); // 510
	CUtlMemory<ShaderStorageBufferBinding_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::~CUtlVector(); // 7185
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 903
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<VfxDescriptor_t>(void); // 508
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 510
	CUtlMemory<VfxDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVector(); // 7185
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 903
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<VfxDescriptor_t>(void); // 508
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 510
	CUtlMemory<VfxDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVector(); // 7185
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 903
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<VfxDescriptor_t>(void); // 508
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 510
	CUtlMemory<VfxDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVector(); // 7185
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<VfxDescriptor_t>(void); // 508
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 510
	CUtlMemory<VfxDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVector(); // 7185
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 903
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<VfxDescriptor_t>(void); // 508
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 510
	CUtlMemory<VfxDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVector(); // 7185
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 903
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<VfxDescriptor_t>(void); // 508
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 510
	CUtlMemory<VfxDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVector(); // 7185
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VfxDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 903
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<VfxDescriptor_t>(void); // 508
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 510
	CUtlMemory<VfxDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVector(); // 7185
} /* size: 7410, variables: 8, inline expansions: 116 (1981 bytes) */

// <009FFE80> vulkan/renderdevicevulkan.cpp:7191
// variables: 31
// function calls: 248
void CShaderVulkanBase::Create()
{
	VkShaderModuleCreateInfo shaderModuleCreateInfo; // 7194
	char* pNewShaderSource; // 7198
	CVfxShaderFile* pShaderFile; // 7199
	const char   __FUNCTION__; // 28516
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 7200
	}
	{
		CVfxShaderFileVulkan* pShaderFileVulkan; // 7211
		CUtlVector<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> > hiddenUAVCounters; // 7222
		{
			int nUAVCounter; // 7225
			CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::Count(); // 7225
			CUtlMemory<HiddenUAVCounter_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::operator[](
					int i);  // 7227
			operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t this,
					short unsigned int i);  // 539
			Element(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short unsigned this,
				short unsigned int i);  // 1665
			LeftChild(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short un this,
					short unsigned int i);  // 1667
			CDefLess<unsigned int>::operator(
					const unsigned int& lhs,
					const unsigned int& rhs);  // 418
			CKeyLess::operator(
					const Node_t& left,
					const Node_t& right);  // 1665
			RightChild(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short un this,
					short unsigned int i);  // 1677
			FindInsertionPosition(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short unsigned this,
						const Node_t& insert,
						bool bCheckForDuplicates,
						short unsigned int& parent,
						bool& leftchild,
						bool& isDuplicate);  // 1693
			{
				short unsigned int newNode; // 1696
			}
			{
				short unsigned int newNode; // 1709
				{
				}
			}
			Insert(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short unsigned this,
				const Node_t& insert,
				ERBTreeInsertBehavior eInsertBehavior);  // 207
			Node_t::Node_t(
				const KeyType_t& k,
				const ElemType_t& e);  // 207
			CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Insert(
				const KeyType_t& key,
				const ElemType_t& insert,
				ERBTreeInsertBehavior eInsertBehavior);  // 7227
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 7208
		IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >:: this); // 905
		Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t this); // 903
		Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t this); // 1287
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >:: this); // 1288
		Purge(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short unsigned this); // 347
		CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Purge(); // 7224
		CVfxShaderFileVulkan::GetPushConstantSize(); // 7216
		CVfxShaderFileVulkan::GetEntryPointCount(); // 7220
		CVfxShaderFileVulkan::GetEntryPoints(); // 7218
		CUtlMemory<HiddenUAVCounter_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<HiddenUAVCounter_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::CUtlVector(); // 7222
		CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::RemoveAll(); // 1798
		CUtlMemory<HiddenUAVCounter_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<HiddenUAVCounter_t, int>::Purge(); // 903
		CUtlMemory<HiddenUAVCounter_t, int>::Purge(); // 1799
		CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::Purge(); // 560
		CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::~CUtlVector(); // 7231
	}
	{
		IDxcCompiler3* pDxcCompiler; // 7238
		IDxcResult* pDxcResult; // 7239
		IDxcBlobUtf8* pErrors; // 7240
		IDxcBlob* pDxcBlob; // 7241
		HRESULT hr; // 7243
		CUtlStringList arguments; // 7250
		RenderShaderType_t nShaderType; // 7262
		VfxProgram_t programType; // 7265
		LPCWSTR* lpArgs; // 7299
		DxcBuffer sourceBuffer; // 7308
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 7278
		}
		{
			int nDescriptorSet; // 7287
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 48
			CUtlMemory<char::Grow(
				int num);  // 806
			CUtlVectorBase<char::GrowMemory(
					int num);  // 1198
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 1201
			CopyConstruct<char*>(char** pMemory,
						char* const& src);  // 1201
			CUtlVectorBase<char::AddToTail(
					char* const& src);  // 49
			CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
					const char* pString);  // 7293
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 81
			CFmtStrN<256>::String(); // 7290
			V_strlen(const char* str); // 46
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 48
			CUtlMemory<char::Grow(
				int num);  // 806
			CUtlVectorBase<char::GrowMemory(
					int num);  // 1198
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 1201
			CopyConstruct<char*>(char** pMemory,
						char* const& src);  // 1201
			CUtlVectorBase<char::AddToTail(
					char* const& src);  // 49
			CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
					const char* pString);  // 7290
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 7290
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 7291
			V_strlen(const char* str); // 46
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 48
			CUtlMemory<char::Grow(
				int num);  // 806
			CUtlVectorBase<char::GrowMemory(
					int num);  // 1198
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 1201
			CopyConstruct<char*>(char** pMemory,
						char* const& src);  // 1201
			CUtlVectorBase<char::AddToTail(
					char* const& src);  // 49
			CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
					const char* pString);  // 7291
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 7291
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 81
			CFmtStrN<256>::String(); // 7294
			V_strlen(const char* str); // 46
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 48
			CUtlMemory<char::Grow(
				int num);  // 806
			CUtlVectorBase<char::GrowMemory(
					int num);  // 1198
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 1201
			CopyConstruct<char*>(char** pMemory,
						char* const& src);  // 1201
			CUtlVectorBase<char::AddToTail(
					char* const& src);  // 49
			CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
					const char* pString);  // 7294
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 7294
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 7295
			V_strlen(const char* str); // 46
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 48
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 1201
			CopyConstruct<char*>(char** pMemory,
						char* const& src);  // 1201
			CUtlMemory<char::Grow(
				int num);  // 806
			CUtlVectorBase<char::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<char::AddToTail(
					char* const& src);  // 49
			CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
					const char* pString);  // 7295
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 7295
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 1201
			CopyConstruct<char*>(char** pMemory,
						char* const& src);  // 1201
			CUtlMemory<char::Grow(
				int num);  // 806
			CUtlVectorBase<char::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<char::AddToTail(
					char* const& src);  // 49
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 48
			CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
					const char* pString);  // 7289
		}
		{
			int32 nArg; // 7300
			{
				int32 nLen; // 7302
				CStrAutoEncode strAutoEncode; // 7304
				V_strlen(const char* str); // 7302
				CStrAutoEncode::Set(
					const char* pch);  // 479
				CStrAutoEncode::CStrAutoEncode(
						const char* pch);  // 7304
				CStrAutoEncode::ToUTF16(); // 7305
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 7305
				CStrAutoEncode::~CStrAutoEncode(); // 7306
			}
		}
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 18
		{
			int i; // 22
		}
		CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
		CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
		CUtlStringList::~CUtlStringList(); // 7353
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 11
		CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base(); // 71
		CUtlStringList::CUtlStringList(); // 7250
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 48
		CUtlMemory<char::Grow(
			int num);  // 806
		CUtlVectorBase<char::GrowMemory(
				int num);  // 1198
		CopyConstruct<char*>(char** pMemory,
					char* const& src);  // 1201
		CUtlVectorBase<char::AddToTail(
				char* const& src);  // 49
		CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
				const char* pString);  // 7251
		CopyConstruct<char*>(char** pMemory,
					char* const& src);  // 1201
		CUtlMemory<char::Grow(
			int num);  // 806
		CUtlVectorBase<char::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<char::AddToTail(
				char* const& src);  // 49
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 48
		CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
				const char* pString);  // 7252
		CopyConstruct<char*>(char** pMemory,
					char* const& src);  // 1201
		CUtlMemory<char::Grow(
			int num);  // 806
		CUtlVectorBase<char::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<char::AddToTail(
				char* const& src);  // 49
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 48
		CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
				const char* pString);  // 7253
		CopyConstruct<char*>(char** pMemory,
					char* const& src);  // 1201
		CUtlMemory<char::Grow(
			int num);  // 806
		CUtlVectorBase<char::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<char::AddToTail(
				char* const& src);  // 49
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 48
		CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
				const char* pString);  // 7255
		CopyConstruct<char*>(char** pMemory,
					char* const& src);  // 1201
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 1201
		CUtlMemory<char::Grow(
			int num);  // 806
		CUtlVectorBase<char::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<char::AddToTail(
				char* const& src);  // 49
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 48
		CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
				const char* pString);  // 7282
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 7283
		V_strlen(const char* str); // 46
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 48
		CopyConstruct<char*>(char** pMemory,
					char* const& src);  // 1201
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 1201
		CUtlMemory<char::Grow(
			int num);  // 806
		CUtlVectorBase<char::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<char::AddToTail(
				char* const& src);  // 49
		CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
				const char* pString);  // 7283
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 7283
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 1201
		CopyConstruct<char*>(char** pMemory,
					char* const& src);  // 1201
		CUtlMemory<char::Grow(
			int num);  // 806
		CUtlVectorBase<char::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<char::AddToTail(
				char* const& src);  // 49
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 48
		CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
				const char* pString);  // 7285
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 7246
		V_strlen(const char* str); // 7310
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 7344
		CopyConstruct<char*>(char** pMemory,
					char* const& src);  // 1201
		CUtlMemory<char::Grow(
			int num);  // 806
		CUtlVectorBase<char::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<char::AddToTail(
				char* const& src);  // 49
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 48
		CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
				const char* pString);  // 7259
		{
			int i; // 22
		}
		CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 18
		CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
		CUtlStringList::~CUtlStringList(); // 7353
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 7316
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 7330
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 7338
	}
	{
		uint nShaderCount; // 7357
		char path; // 7358
		FILE* fp; // 7360
	}
	{
		const bool  bForceCreateNow; // 7386
		CAsyncCompileHelperVulkan::BEnabled(); // 7386
	}
	CRenderDeviceVulkan::ShaderTable(); // 7199
	CRenderDeviceVulkan::ShaderTable(); // 7365
	CRenderDeviceVulkan::ShaderTable(); // 7366
	CRenderDeviceVulkan::EXTGraphicsPipelineLibraryEnabled(); // 7373
	CShaderVulkanBase::SupportsGraphicsPipelineLibrary(); // 7384
	CRenderDeviceVulkan::EXTGraphicsPipelineLibraryEnabled(); // 7382
	CRenderDeviceVulkan::ShaderTable(); // 7395
} /* size: 0, variables: 4, inline expansions: 7 (86 bytes) */

// <009FF50A> vulkan/renderdevicevulkan.cpp:7414
// variables: 7
// function calls: 35
void CShaderVulkanBase::GetPipelineLibraryDependentStaticDescriptorSetLayouts(CUtlVectorFixedGrowable<RenderDescriptorSetHandle_t__*, 4>& descriptorSetLayouts)
{
	const int32  nNumStaticDescriptorSets; // 7416
	const char   __FUNCTION__; // 29680
	{
		int32 nDescSet; // 7423
		{
			const CUtlStringToken& descriptorSetNameHash; // 7425
			RenderDescriptorSetHandle_t hDescriptorSet; // 7426
			{
				CAutoLockStaticDescriptorSet staticDescSet; // 7440
				CAutoLockStaticDescriptorSet::CAutoLockStaticDescriptorSet(
								CRenderDeviceVulkan* pDevice,
								const RenderDescriptorSetHandle_t  hDescriptorSet);  // 7440
				CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, i this,
						int i);  // 7442
				ThreadInterlockedDecrement(volatile int32* p); // 586
				CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
				CThreadRWLock_FastRead::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 6629
				CRenderDeviceVulkan::UnlockStaticDescriptorSet(
								const RenderDescriptorSetHandle_t  hDescriptorSet);  // 6623
				CRenderDeviceVulkan::UnlockStaticDescriptorSet(
								const RenderDescriptorSetHandle_t  hDescriptorSet);  // 1162
				CAutoLockStaticDescriptorSet::~CAutoLockStaticDescriptorSet(); // 7443
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 7450
			}
			CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, i this,
					int i);  // 7438
			ThreadInterlockedAssignIf(volatile int32* p,
							int32 value,
							int32 comparand);  // 433
			ThreadInterlockedAssignIf(volatile uint32* p,
							uint32 value,
							uint32 comparand);  // 454
			InterlockedAssignIf<int>(int* p,
						const int& value,
						const int& comparand);  // 7438
			CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, i this,
					int i);  // 7444
			CUtlStringToken::IsValid(); // 7427
			CUtlMemory<RenderDescriptorSetHandle_t__::NumAllocated(); // 1196
			CUtlMemory<RenderDescriptorSetHandle_t__::Base(); // 112
			CUtlVectorBase<RenderDescriptorSetHandle_t__::Base(); // 368
			CUtlVectorBase<RenderDescriptorSetHandle_t__::ResetDbgInfo(); // 824
			CUtlMemory<RenderDescriptorSetHandle_t__::IsGrowable(); // 823
			CUtlMemory<RenderDescriptorSetHandle_t__::IsExternallyAllocated(); // 859
			CUtlMemory<RenderDescriptorSetHandle_t__::IsExternallyAllocated(); // 861
			CUtlMemory<RenderDescriptorSetHandle_t__::Grow(
				int num);  // 806
			CUtlVectorBase<RenderDescriptorSetHandle_t__::GrowMemory(
					int num);  // 1198
			CUtlMemory<RenderDescriptorSetHandle_t__::operator[](
					int i);  // 602
			CUtlVectorBase<RenderDescriptorSetHandle_t__::Element(
				int i);  // 1201
			CopyConstruct<RenderDescriptorSetHandle_t__*>(RenderDescriptorSetHandle_t__** pMemory,
									RenderDescriptorSetHandle_t__* const& src);  // 1201
			CUtlVectorBase<RenderDescriptorSetHandle_t__::AddToTail(
					RenderDescriptorSetHandle_t__* const& src);  // 7452
			CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, i this,
					int i);  // 7425
		}
		Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 7423
	}
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 7416
	CUtlVectorBase<RenderDescriptorSetHandle_t__::Count(); // 7456
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <00A68D0F> vulkan/renderdevicevulkan.cpp:7470
void CShaderVulkanBase::SupportsGraphicsPipelineLibrary()
{
} /* size: 34 */

// <009FA18E> vulkan/renderdevicevulkan.cpp:7498
// variables: 41
// function calls: 361
void CShaderVulkanBase::CreateGraphicsPipelineLibrary(const CUtlVectorFixedGrowable<RenderDescriptorSetHandle_t__*, 4>& staticDescriptorSetLayoutHandles)
{
	PipelineLayoutCreateInfo_t pipelineLayoutCreateInfo; // 7500
	CUtlVector<int, CUtlMemory<int, int> >& numLayoutBindingsPerSet; // 7501
	CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int> >& layoutBindings; // 7502
	CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int> >& layoutBindingFlags; // 7503
	CPipelineVulkan pipeline; // 7504
	VkGraphicsPipelineLibraryFlagsEXT nGraphicsPipelineLibraryStage; // 7505
	int nDynamicDescriptorSetIndex; // 7506
	const char   __FUNCTION__; // 29127
	uint32 nDescriptorSetTypeMask; // 7532
	const bool  bResult; // 7533
	uint8_t nUseNullDescriptorSetLayoutMask; // 7540
	CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> > immutableSamplers; // 7561
	CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> > pushConstantRanges; // 7613
	VkShaderStageFlags nPushConstantStages; // 7614
	PerThreadDataVulkan_t* pPerThread; // 7640
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 7515
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 7522
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 7534
	}
	{
		int32 nDynamicSet; // 7541
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 7555
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Count(); // 7545
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
				int i);  // 7546
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 7545
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 112
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 7546
	}
	{
		int32 nStaticDescSet; // 7562
		{
			const int32  nSetIndex; // 7564
			CAutoLockStaticDescriptorSet autoLockStaticDescriptorSet; // 7574
			CDescriptorSetVulkan* pStaticDescriptorSet; // 7575
			{
				int32 nImmutableSampler; // 7586
				{
					PipelineLayoutImmutableSampler_t* pImmutableSamplers; // 7588
					PipelineLayoutImmutableSampler_t immutableSampler; // 7592
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 7589
					}
					CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Base(); // 112
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Base(); // 368
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::GrowMemory(
							int num);  // 1198
					CUtlMemory<PipelineLayoutImmutableSampler_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Element(
						int i);  // 1201
					CopyConstruct<PipelineLayoutImmutableSampler_t>(PipelineLayoutImmutableSampler_t* pMemory,
											const PipelineLayoutImmutableSampler_t& src);  // 1201
					CUtlMemory<PipelineLayoutImmutableSampler_t, int>::NumAllocated(); // 1196
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::AddToTail(
							const PipelineLayoutImmutableSampler_t& src);  // 7596
					CDescriptorSetVulkan::GetImmutableSamplers(); // 7588
				}
				CDescriptorSetVulkan::GetNumImmutableSamplers(); // 7586
			}
			{
				const CDescriptorSetVulkan* ppDescriptorSetsForLayout; // 7603
				VkDescriptorSet ppDescriptorSet; // 7604
				CDescriptorSetVulkan::GetDescriptorSet(); // 7604
			}
			CUtlMemory<RenderDescriptorSetHandle_t__::operator[](
					int i);  // 595
			CUtlVectorBase<RenderDescriptorSetHandle_t__::operator[](
					int i);  // 7567
			CAutoLockStaticDescriptorSet::CAutoLockStaticDescriptorSet(
							CRenderDeviceVulkan* pDevice,
							const RenderDescriptorSetHandle_t  hDescriptorSet);  // 7574
			CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
					int i);  // 7577
			CDescriptorSetVulkan::GetDescriptorDescCount(); // 7577
			CDescriptorSetVulkan::GetDescriptorSetLayoutBindings(); // 7577
			CDescriptorSetVulkan::GetDescriptorDescCount(); // 7578
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 7578
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 7580
			ThreadInterlockedDecrement(volatile int32* p); // 586
			CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
			CThreadRWLock_FastRead::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 6629
			CRenderDeviceVulkan::UnlockStaticDescriptorSet(
							const RenderDescriptorSetHandle_t  hDescriptorSet);  // 6623
			CRenderDeviceVulkan::UnlockStaticDescriptorSet(
							const RenderDescriptorSetHandle_t  hDescriptorSet);  // 1162
			CAutoLockStaticDescriptorSet::~CAutoLockStaticDescriptorSet(); // 7607
			CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
					int i);  // 7569
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 7570
			CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
					int i);  // 7582
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 7582
			CUtlMemory<unsigned int, int>::Base(); // 113
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 7582
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 1344
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 85
			V_memcpy(void* dest,
				const void* src,
				ptrdiff_t count);  // 180
			UtlTraitsCopyRange<TextureCreationExtraData_t>(const TextureCreationExtraData_t* pFrom,
									const TextureCreationExtraData_t* pFromEnd,
									TextureCreationExtraData_t* pTo);  // 173
			UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
							const unsigned int* pFromEnd,
							unsigned int* pTo);  // 1344
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CopyArray(
					const unsigned int* pArray,
					int size);  // 7582
		}
		CUtlVectorBase<RenderDescriptorSetHandle_t__::Count(); // 7562
	}
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 255
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUt this); // 255
	CUtlMemory<VkPushConstantRange, int>::ValidateGrowSize(); // 475
	CUtlMemory<VkPushConstantRange, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::CUtlVector(); // 255
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVector(); // 255
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory this); // 255
	PipelineLayoutCreateInfo_t::PipelineLayoutCreateInfo_t(); // 7500
	CPipelineVulkan::MarkPipelineDirty(); // 1209
	CPipelineVulkan::SetIsComputeDispatch(
				bool bIsComputeDispatch);  // 7524
	CUtlVectorBase<RenderDescriptorSetHandle_t__::Count(); // 7528
	CUtlVectorBase<RenderDescriptorSetHandle_t__::Count(); // 7529
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::NumAllocated(); // 782
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::IsGrowable(); // 823
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::Grow(
		int num);  // 806
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 824
	GrowMemory(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
			int i);  // 1453
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::ValidateGrowSize(); // 475
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::CUtlVector(); // 1479
		Construct<CUtlVector<VkDescriptorSetLayoutBinding> >(CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pMemory); // 1453
	}
	InsertMultipleBefore(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
				int num);  // 1319
	{
		int i; // 1696
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
			int i);  // 1697
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::RemoveAll(); // 1798
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::IsExternallyAllocated(); // 905
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::Purge(); // 903
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::Purge(); // 1799
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Purge(); // 560
		ValidateAlignment<VkDescriptorSetLayoutBinding>(void); // 508
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::Purge(); // 510
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::~CUtlMemory(); // 562
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::~CUtlVectorBase(); // 410
		CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<VkDescriptorSetLayoutBinding> >(CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pMemory); // 1697
	}
	RemoveMultipleFromTail(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
				int num);  // 1323
	SetCount(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
		int count);  // 7529
	CUtlVectorBase<RenderDescriptorSetHandle_t__::Count(); // 7530
	Count(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, this); // 1078
	{
		const int  nAdd; // 1080
		const int  nAt; // 1081
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::NumAllocated(); // 782
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Base(); // 112
		Base(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 368
		ResetDbgInfo(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 824
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::IsGrowable(); // 823
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
				int num);  // 784
		GrowVector(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
				int num);  // 1445
		{
			int i; // 1451
			CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
				int i);  // 1453
			CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
			CUtlMemory<unsigned int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 1479
			Construct<CUtlVector<unsigned int> >(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pMemory); // 1453
		}
		InsertMultipleBefore(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
					int elem,
					int num);  // 1437
		InsertMultipleBefore(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
					int elem,
					int num);  // 1294
		AddMultipleToTail(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
					int num);  // 1081
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Base(); // 112
		Base(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 1082
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1082
	}
	EnsureCountZeroed(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
				int num);  // 7530
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVector(); // 7561
	CUtlMemory<VkPushConstantRange, int>::ValidateGrowSize(); // 475
	CUtlMemory<VkPushConstantRange, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::CUtlVector(); // 7613
	CShaderVulkanBase::GetPushConstantSize(); // 7624
	CUtlVectorBase<RenderDescriptorSetHandle_t__::Count(); // 7633
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Count(); // 7634
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<VkPushConstantRange, int>::NumAllocated(); // 782
	CUtlMemory<VkPushConstantRange, int>::Base(); // 112
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Base(); // 368
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::SetCount(
		int count);  // 573
	CUtlMemory<VkPushConstantRange, int>::Base(); // 112
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Base(); // 102
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::begin(); // 574
	CUtlMemory<VkPushConstantRange, int>::Base(); // 113
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Base(); // 105
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Count(); // 105
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<TextureCreationExtraData_t>(const TextureCreationExtraData_t* pFrom,
							const TextureCreationExtraData_t* pFromEnd,
							TextureCreationExtraData_t* pTo);  // 173
	UtlTraitsCopyRange<VkPushConstantRange>(const VkPushConstantRange* pFrom,
						const VkPushConstantRange* pFromEnd,
						VkPushConstantRange* pTo);  // 574
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::operator=(
			const CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >& other);  // 565
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::operator=(
			const CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >& other);  // 452
	CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::operator=(
			const CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >& src);  // 7636
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Count(); // 7637
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::NumAllocated(); // 782
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Base(); // 112
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Base(); // 368
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		{
			uint32* pThis; // 978
			const uint32* pDefault; // 979
			CSamplerStateDescBase::CSamplerStateDescBase(); // 927
			{
				float32 flZeros; // 936
				float32 flOnes; // 937
				CSamplerStateDescBase::SetFilterMode(
						RsFilter_t filter);  // 928
				CSamplerStateDescBase::SetTextureAddressModeU(
							RsTextureAddressMode_t addressMode);  // 929
				CSamplerStateDescBase::SetTextureAddressModeV(
							RsTextureAddressMode_t addressMode);  // 930
				CSamplerStateDescBase::SetTextureAddressModeW(
							RsTextureAddressMode_t addressMode);  // 931
				Min<unsigned int>(const unsigned int& val1,
							const unsigned int& val2);  // 800
				CSamplerStateDescBase::SetMaxAnisotropy(
						uint32 nMaxAniso);  // 933
				CSamplerStateDescBase::SetMipLodBias(
						float32 flBias);  // 932
				CSamplerStateDescBase::SetBorderColor(
						const float32* pBorderColor);  // 938
				CSamplerStateDescBase::SetComparisonFunc(
							RsComparison_t compFunc);  // 934
				CSamplerStateDescBase::SetMinMaxLod(
						uint32 nMinLod,
						uint32 nMaxLod);  // 935
				CSamplerStateDescBase::SetGlobalMipBiasOverrideAllowed(
								bool bAllow);  // 939
			}
			CSamplerStateDesc::CSamplerStateDesc(
						RsFilter_t filter,
						RsTextureAddressMode_t addressU,
						RsTextureAddressMode_t addressV,
						RsTextureAddressMode_t addressW,
						float32 flMipLodBias,
						uint32 nMaxAniso,
						RsComparison_t comparisonFunc,
						uint32 nMinLod,
						uint32 nMaxLod,
						bool bWhiteBorder,
						bool bAllowGlobalMipBiasOverride);  // 970
			DefaultSamplerStateDesc(void); // 959
			DefaultSamplerStateDesc(void); // 979
		}
		CSamplerStateDescBase::CSamplerStateDescBase(); // 975
		CSamplerStateDesc::CSamplerStateDesc(); // 241
		PipelineLayoutImmutableSampler_t::PipelineLayoutImmutableSampler_t(); // 1479
		Construct<PipelineLayoutImmutableSampler_t>(PipelineLayoutImmutableSampler_t* pMemory); // 1453
		CUtlMemory<PipelineLayoutImmutableSampler_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Element(
			int i);  // 1453
	}
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::SetCount(
		int count);  // 573
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Base(); // 112
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Base(); // 102
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::begin(); // 574
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Base(); // 113
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Base(); // 105
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Count(); // 105
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<TextureCreationExtraData_t>(const TextureCreationExtraData_t* pFrom,
							const TextureCreationExtraData_t* pFromEnd,
							TextureCreationExtraData_t* pTo);  // 173
	UtlTraitsCopyRange<PipelineLayoutImmutableSampler_t>(const PipelineLayoutImmutableSampler_t* pFrom,
								const PipelineLayoutImmutableSampler_t* pFromEnd,
								PipelineLayoutImmutableSampler_t* pTo);  // 574
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator=(
			const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >& other);  // 565
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator=(
			const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >& other);  // 452
	CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator=(
			const CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >& src);  // 7638
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 5891
	CRenderDeviceVulkan::GetPerThreadData(); // 7640
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 55
	PerThreadDataVulkan_t::AddRef(); // 7641
	CInterlockedIntT<int, 4>::operator int(); // 56
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 56
	PerThreadDataVulkan_t::Release(); // 7652
	CUtlMemory<VkPushConstantRange, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VkPushConstantRange, int>::Purge(); // 903
	CUtlMemory<VkPushConstantRange, int>::Purge(); // 1799
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::RemoveAll(); // 1798
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Purge(); // 560
	ValidateAlignment<VkPushConstantRange>(void); // 508
	CUtlMemory<VkPushConstantRange, int>::Purge(); // 510
	CUtlMemory<VkPushConstantRange, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::~CUtlVector(); // 7656
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::RemoveAll(); // 1798
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 903
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 1799
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Purge(); // 560
	ValidateAlignment<PipelineLayoutImmutableSampler_t>(void); // 508
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 510
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::~CUtlVector(); // 7656
	{
		int i; // 1721
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
			int i);  // 1723
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<unsigned int> >(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 1798
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 560
	ValidateAlignment<CUtlVector<unsigned int> >(void); // 508
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory this); // 255
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::RemoveAll(); // 1798
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 903
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 1799
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Purge(); // 560
	ValidateAlignment<PipelineLayoutImmutableSampler_t>(void); // 508
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 510
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::~CUtlVector(); // 255
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::RemoveAll(); // 1798
	CUtlMemory<VkPushConstantRange, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VkPushConstantRange, int>::Purge(); // 903
	CUtlMemory<VkPushConstantRange, int>::Purge(); // 1799
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Purge(); // 560
	ValidateAlignment<VkPushConstantRange>(void); // 508
	CUtlMemory<VkPushConstantRange, int>::Purge(); // 510
	CUtlMemory<VkPushConstantRange, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::~CUtlVector(); // 255
	{
		int i; // 1721
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
			int i);  // 1723
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::RemoveAll(); // 1798
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::IsExternallyAllocated(); // 905
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::Purge(); // 903
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::Purge(); // 1799
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Purge(); // 560
		ValidateAlignment<VkDescriptorSetLayoutBinding>(void); // 508
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::Purge(); // 510
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::~CUtlMemory(); // 562
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::~CUtlVectorBase(); // 410
		CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<VkDescriptorSetLayoutBinding> >(CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 1798
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 560
	ValidateAlignment<CUtlVector<VkDescriptorSetLayoutBinding> >(void); // 508
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUt this); // 255
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 255
	PipelineLayoutCreateInfo_t::~PipelineLayoutCreateInfo_t(); // 7656
	CUtlMemory<VkPushConstantRange, int>::Base(); // 112
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Base(); // 368
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::AddToTail(); // 7617
	CUtlMemory<VkPushConstantRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::operator[](
			int i);  // 7619
	CUtlMemory<VkPushConstantRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::operator[](
			int i);  // 7620
	CUtlMemory<VkPushConstantRange, int>::Base(); // 112
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Base(); // 368
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::AddToTail(); // 7626
	CShaderVulkanBase::GetPushConstantSize(); // 7628
	CUtlMemory<VkPushConstantRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::operator[](
			int i);  // 7628
	CUtlMemory<VkPushConstantRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::operator[](
			int i);  // 7629
} /* size: 0, variables: 15, inline expansions: 212 (10145 bytes) */

// <009F9377> vulkan/renderdevicevulkan.cpp:7662
// variables: 3
// function calls: 53
void CShaderVulkanBase::QueueCreateGraphicsPipelineLibrary(bool bForceCreateNow)
{
	CPipelineVulkan pipeline; // 7664
	CUtlVectorFixedGrowable<RenderDescriptorSetHandle_t__*, 4> staticDescriptorSetLayoutHandles; // 7667
	{
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_7672; // 7672
		CInterlockedIntT<int, 4>::GetRaw(); // 3180
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 3189
		CThreadRWLock_FastRead::LockForWrite(
				const char* pFileName,
				int nLineNumber);  // 959
		Lock(CThreadRWLock_FastRead& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
				const CThreadRWLock_FastRead& lock,
				const char* pFilename,
				int nLineNumber);  // 7672
		CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase::IsIdxValid(
				int i);  // 588
		CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase::operator[](
				int i);  // 594
		CUtlLinkedList<CShaderVulkanBase::IsValidIndex(
				int i);  // 583
		CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase::IsIdxAfter(
				int i,
				const Iterator_t& it);  // 591
		CUtlLinkedList<CShaderVulkanBase::IsValidIndex(
				int i);  // 977
		CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase::operator[](
				int i);  // 367
		CUtlLinkedList<CShaderVulkanBase::InternalElement(
				int i);  // 982
		CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase::operator[](
				int i);  // 367
		CUtlLinkedList<CShaderVulkanBase::InternalElement(
				int i);  // 1011
		{
		}
		CUtlLinkedList<CShaderVulkanBase::LinkBefore(
				int before,
				int elem);  // 822
		CopyConstruct<CShaderVulkanBase*>(CShaderVulkanBase** pMemory,
							CShaderVulkanBase* const& src);  // 825
		CUtlMemory<UtlLinkedListElem_t<CShaderVulkanBase::operator[](
				int i);  // 482
		CUtlLinkedList<CShaderVulkanBase::Element(
			int i);  // 825
		CUtlLinkedList<CShaderVulkanBase::InsertBefore(
				int before,
				CShaderVulkanBase* const& src);  // 856
		CUtlLinkedList<CShaderVulkanBase::AddToTail(
				CShaderVulkanBase* const& src);  // 7673
		Unlock(CThreadRWLock_FastRead& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 7675
	}
	CUtlMemory<RenderDescriptorSetHandle_t__::CUtlMemory(
			RenderDescriptorSetHandle_t__** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<RenderDescriptorSetHandle_t__::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<RenderDescriptorSetHandle_t__::CUtlMemoryFixedGrowable_Base(
					RenderDescriptorSetHandle_t__** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<4, RenderDescriptorSetHandle_t__::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, RenderDescriptorSetHandle_t__::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<4, RenderDescriptorSetHandle_t__::Base(); // 231
	CUtlMemoryFixedGrowable<RenderDescriptorSetHandle_t__::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<RenderDescriptorSetHandle_t__::ResetDbgInfo(); // 530
	CUtlVectorBase<RenderDescriptorSetHandle_t__::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<RenderDescriptorSetHandle_t__::CUtlVectorFixedGrowable(
				int growSize);  // 7667
	CAsyncCompileHelperVulkan::BEnabled(); // 7682
	CUtlVectorBase<RenderDescriptorSetHandle_t__::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<4, RenderDescriptorSetHandle_t__::Base(); // 237
	CUtlMemory<RenderDescriptorSetHandle_t__::IsExternallyAllocated(); // 577
	CUtlMemory<RenderDescriptorSetHandle_t__::ConvertToExternalMemory(
				RenderDescriptorSetHandle_t__** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<RenderDescriptorSetHandle_t__::Purge_FixedGrowable(
				RenderDescriptorSetHandle_t__** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<RenderDescriptorSetHandle_t__::Purge_FixedGrowable(
				RenderDescriptorSetHandle_t__** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<RenderDescriptorSetHandle_t__::Purge(
		int numElements);  // 1799
	CUtlMemory<RenderDescriptorSetHandle_t__::Base(); // 112
	CUtlVectorBase<RenderDescriptorSetHandle_t__::Base(); // 368
	CUtlVectorBase<RenderDescriptorSetHandle_t__::ResetDbgInfo(); // 1800
	CUtlVectorBase<RenderDescriptorSetHandle_t__::Purge(); // 560
	ValidateAlignment<RenderDescriptorSetHandle_t__*>(void); // 508
	CUtlMemory<RenderDescriptorSetHandle_t__::Purge(); // 903
	CUtlMemory<RenderDescriptorSetHandle_t__::Purge(); // 510
	CUtlMemory<RenderDescriptorSetHandle_t__::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<RenderDescriptorSetHandle_t__::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<RenderDescriptorSetHandle_t__::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<RenderDescriptorSetHandle_t__::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<RenderDescriptorSetHandle_t__::~CUtlVectorFixedGrowable(); // 7692
} /* size: 0, variables: 2, inline expansions: 30 (934 bytes) */

// <009F727E> vulkan/renderdevicevulkan.cpp:7699
// variables: 16
// function calls: 143
void CShaderVulkanBase::BuildReflectionInfo(const uint8_t* pSpirVByteCode, size_t nByteCodeSize)
{
	RenderShaderType_t nShaderType; // 7701
	unique_ptr<spv_reflect::ShaderModule, std::default_delete<spv_reflect::ShaderModule> > pSpvReflect; // 7702
	uint32_t nNumDescriptorSets; // 7704
	SpvReflectDescriptorSet** ppSets; // 7711
	{
		uint i; // 7714
		{
			DescriptorSetBindings_t descriptorSetBindings; // 7716
			CUtlVector<int, CUtlMemory<int, int> > textureBindings; // 7717
			SpvReflectDescriptorSet* pDescriptorSet; // 7719
			uint32_t nBindingCount; // 7726
			{
				uint j; // 7720
			}
			{
				uint32_t nBinding; // 7728
				{
					const SpvReflectDescriptorBinding* pBinding; // 7730
					const char* pName; // 7732
					CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
							int num);  // 1249
					CUtlMemory<int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
						int i);  // 1252
					Construct<int, int>(int* pMemory); // 1252
					CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
							int& src);  // 7738
					CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
							int num);  // 1249
					CUtlMemory<int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
						int i);  // 1252
					Construct<int, int>(int* pMemory); // 1252
					CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
							int& src);  // 7741
				}
			}
			{
				int32 nTexture; // 7752
				{
					TextureBinding_t textureBinding; // 7754
					ResetDbgInfo(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this); // 824
					GrowMemory(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this,
							int num);  // 1198
					CopyConstruct<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t>(TextureBinding_t* pMemory,
															const TextureBinding_t& src);  // 1201
					CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::operator[](
							int i);  // 602
					Element(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this,
						int i);  // 1201
					AddToTail(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this,
							const TextureBinding_t& src);  // 7757
				}
			}
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 295
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 295
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 295
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 295
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 295
			CUtlMemory<ShaderStorageBufferBinding_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<ShaderStorageBufferBinding_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::CUtlVector(); // 295
			CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			ResetDbgInfo(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this); // 530
			CUtlVectorBase(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this,
					int growSize,
					int initCapacity);  // 418
			CUtlVector(const CUtlVector<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::DescriptorSe this); // 295
			CUtlStringToken::CUtlStringToken(); // 295
			DescriptorSetBindings_t::DescriptorSetBindings_t(); // 7716
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 7717
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 7761
			CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::Purge(); // 903
			CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::Purge(); // 1799
			Purge(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this); // 560
			ValidateAlignment<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t>(void); // 508
			CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::Purge(); // 510
			CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this); // 410
			~CUtlVector(const CUtlVector<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::DescriptorSe this); // 295
			CUtlMemory<ShaderStorageBufferBinding_t, int>::Purge(); // 903
			CUtlMemory<ShaderStorageBufferBinding_t, int>::Purge(); // 1799
			CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Purge(); // 560
			ValidateAlignment<ShaderStorageBufferBinding_t>(void); // 508
			CUtlMemory<ShaderStorageBufferBinding_t, int>::Purge(); // 510
			CUtlMemory<ShaderStorageBufferBinding_t, int>::~CUtlMemory(); // 562
			CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::~CUtlVectorBase(); // 410
			CUtlVector<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::~CUtlVector(); // 295
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 295
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 295
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 295
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 295
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 295
			DescriptorSetBindings_t::~DescriptorSetBindings_t(); // 7761
		}
	}
	ShaderModule::ShaderModule(
			size_t size,
			const void* p_code,
			SpvReflectModuleFlags flags);  // 7702
	ShaderModule::EnumerateDescriptorSets(
				uint32_t* p_count,
				SpvReflectDescriptorSet** pp_sets);  // 7705
	_Head_base<1, std::default_delete<spv_reflect::ShaderModule>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<spv_reflect::ShaderModule> >::_Tuple_impl(); // 303
	_Head_base<0, spv_reflect::ShaderModule::_Head_base(); // 303
	_Tuple_impl<0, spv_reflect::ShaderModule::_Tuple_impl(); // 966
	tuple<spv_reflect::ShaderModule::tuple(); // 169
	__uniq_ptr_impl<spv_reflect::ShaderModule, std::default_delete<spv_reflect::ShaderModule> >::_M_ptr(); // 169
	__uniq_ptr_impl<spv_reflect::ShaderModule, std::default_delete<spv_reflect::ShaderModule> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<spv_reflect::ShaderModule, std::default_delete<spv_reflect::ShaderModule>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<spv_reflect::ShaderModule, std::default_delete<spv_reflect::ShaderModule> >::unique_ptr<>(
			pointer __p);  // 7702
	ShaderModule::EnumerateDescriptorSets(
				uint32_t* p_count,
				SpvReflectDescriptorSet** pp_sets);  // 7712
	{
		ShaderModule *& __ptr; // 396
		__uniq_ptr_impl<spv_reflect::ShaderModule, std::default_delete<spv_reflect::ShaderModule> >::_M_ptr(); // 396
		unique_ptr<spv_reflect::ShaderModule, std::default_delete<spv_reflect::ShaderModule> >::get_deleter(); // 398
		ShaderModule::~ShaderModule(); // 92
		default_delete<spv_reflect::ShaderModule>::operator(
				ShaderModule* __ptr);  // 86
		default_delete<spv_reflect::ShaderModule>::operator(
				ShaderModule* __ptr);  // 398
	}
	unique_ptr<spv_reflect::ShaderModule, std::default_delete<spv_reflect::ShaderModule> >::~unique_ptr(); // 7762
} /* size: 3391, variables: 4, inline expansions: 13 (138 bytes) */

// <009F659E> vulkan/renderdevicevulkan.cpp:7767
// variables: 2
// function calls: 56
void CShaderVulkanBase::ComputeHash(const uint8_t* pSpirVByteCode, uint32_t nByteCodeSize)
{
	{
		short unsigned int nIndex; // 7774
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >:: this,
				short unsigned int i);  // 611
		LeftChild(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short un this,
				short unsigned int i);  // 1329
		FirstInorder(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short un this); // 351
		CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::FirstInorder(); // 7774
		HashCombine(uint64& nSeed,
				uint64 nHash);  // 7776
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t this,
				short unsigned int i);  // 539
		Element(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short unsigned this,
			short unsigned int i);  // 92
		CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::operator[](
				IndexType_t i);  // 7776
		CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::NextInorder(
				IndexType_t i);  // 7774
	}
	{
		int32 nSet; // 7780
		Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 7780
		CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, i this,
				int i);  // 7782
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 7782
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 7784
		HashCombine(uint64& nSeed,
				uint64 nHash);  // 7784
		CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, i this,
				int i);  // 7786
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 7786
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 7788
		HashCombine(uint64& nSeed,
				uint64 nHash);  // 7788
		CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, i this,
				int i);  // 7790
		Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::De this); // 7790
		CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::Descript this); // 7792
		HashCombine(uint64& nSeed,
				uint64 nHash);  // 7792
		CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, i this,
				int i);  // 7794
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 7794
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 7796
		HashCombine(uint64& nSeed,
				uint64 nHash);  // 7796
		CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, i this,
				int i);  // 7798
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 7798
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 7800
		HashCombine(uint64& nSeed,
				uint64 nHash);  // 7800
		CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, i this,
				int i);  // 7802
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 7802
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 7804
		HashCombine(uint64& nSeed,
				uint64 nHash);  // 7804
		CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, i this,
				int i);  // 7806
		CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Count(); // 7806
		CUtlMemory<ShaderStorageBufferBinding_t, int>::Base(); // 112
		CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Base(); // 7808
		HashCombine(uint64& nSeed,
				uint64 nHash);  // 7808
	}
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 7773
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 7778
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 7779
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 7813
} /* size: 1132, inline expansions: 4 (176 bytes) */

// <009F62BC> vulkan/renderdevicevulkan.cpp:7820
// variables: 2
// function calls: 9
void CShaderVulkanBase::InitPipelineShader(const CVfxShaderFileVulkan* pShaderFileVulkan)
{
	const char   __FUNCTION__; // 28840
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 7854
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 7822
	CVfxShaderFileVulkan::UseShaderStageName(); // 7830
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 7859
	CVfxShaderFileVulkan::GetRequiredSubgroupSize(); // 7860
	CRenderDeviceVulkan::EXTSubgroupSizeControlEnabled(); // 7862
	CVfxShaderFileVulkan::GetRequiredSubgroupSize(); // 7885
	CVfxShaderFileVulkan::GetRequiredSubgroupSize(); // 7879
} /* size: 0, variables: 1, inline expansions: 9 (418 bytes) */

// <00A68D3A> vulkan/renderdevicevulkan.cpp:7895
// variables: 2
// function calls: 4
void CShaderVulkanBase::SetDebugName(const char* pDebugName)
{
	{
		size_t nLength; // 7900
		char* pDebugNameCopy; // 7901
		V_strlen(const char* str); // 7900
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 7902
	}
	CShaderVulkanBase::SetDebugName(
			const char* pDebugName);  // 7895
} /* size: 104, inline expansions: 1 (52 bytes) */

// <009F627A> vulkan/renderdevicevulkan.cpp:7895
// variables: 2
void CShaderVulkanBase::SetDebugName(const char* pDebugName)
{
	{
		size_t nLength; // 7900
		char* pDebugNameCopy; // 7901
	}
} /* size: 0 */

// <009F6154> vulkan/renderdevicevulkan.cpp:7908
// function calls: 2
void CShaderVulkanBase::SetShaderStats(uint32 nShaderStatCount, const VkPipelineExecutableStatisticKHR* pShaderStats)
{
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 7920
} /* size: 134, inline expansions: 2 (36 bytes) */

// <009F5B73> vulkan/renderdevicevulkan.cpp:7924
// variable: 1
// function calls: 24
void CShaderVulkanBase::GetNumTotalDescriptors(int32 nDescriptorSet)
{
	uint32 nTotalDescriptors; // 7926
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 7939
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 7941
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 7941
	CShaderVulkanBase::GetNumActiveSamplers(
				int32 nDescriptorSet);  // 7937
	CShaderVulkanBase::GetNumActiveSamplers(
				int32 nDescriptorSet);  // 7927
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 7959
	CShaderVulkanBase::GetNumActiveUniformBlocks(
					int32 nDescriptorSet);  // 7955
	CShaderVulkanBase::GetNumActiveUniformBlocks(
					int32 nDescriptorSet);  // 7928
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::De this); // 7950
	CShaderVulkanBase::GetNumActiveTextures(
				int32 nDescriptorSet);  // 7946
	CShaderVulkanBase::GetNumActiveTextures(
				int32 nDescriptorSet);  // 7929
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 7968
	CShaderVulkanBase::GetNumActiveImages(
				int32 nDescriptorSet);  // 7964
	CShaderVulkanBase::GetNumActiveImages(
				int32 nDescriptorSet);  // 7930
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Count(); // 7977
	CShaderVulkanBase::GetNumActiveStorageBuffers(
					int32 nDescriptorSet);  // 7973
	CShaderVulkanBase::GetNumActiveStorageBuffers(
					int32 nDescriptorSet);  // 7931
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 7986
	CShaderVulkanBase::GetNumActiveUniformTexelBuffers(
					int32 nDescriptorSet);  // 7982
	CShaderVulkanBase::GetNumActiveUniformTexelBuffers(
					int32 nDescriptorSet);  // 7932
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 7995
	CShaderVulkanBase::GetNumActiveStorageTexelBuffers(
					int32 nDescriptorSet);  // 7991
	CShaderVulkanBase::GetNumActiveStorageTexelBuffers(
					int32 nDescriptorSet);  // 7933
} /* size: 66, variables: 1, inline expansions: 24 (90 bytes) */

// <00A68EF8> vulkan/renderdevicevulkan.cpp:7937
// function calls: 5
void CShaderVulkanBase::GetNumActiveSamplers(int32 nDescriptorSet)
{
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 7939
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 7941
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 7941
	CShaderVulkanBase::GetNumActiveSamplers(
				int32 nDescriptorSet);  // 7937
} /* size: 39, inline expansions: 5 (48 bytes) */

// <009F5B4D> vulkan/renderdevicevulkan.cpp:7937
void CShaderVulkanBase::GetNumActiveSamplers(int32 nDescriptorSet)
{
} /* size: 0 */

// <00A69030> vulkan/renderdevicevulkan.cpp:7946
// function calls: 5
void CShaderVulkanBase::GetNumActiveTextures(int32 nDescriptorSet)
{
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 7948
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 7950
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::De this); // 7950
	CShaderVulkanBase::GetNumActiveTextures(
				int32 nDescriptorSet);  // 7946
} /* size: 42, inline expansions: 5 (51 bytes) */

// <009F5B27> vulkan/renderdevicevulkan.cpp:7946
void CShaderVulkanBase::GetNumActiveTextures(int32 nDescriptorSet)
{
} /* size: 0 */

// <00A69168> vulkan/renderdevicevulkan.cpp:7955
// function calls: 5
void CShaderVulkanBase::GetNumActiveUniformBlocks(int32 nDescriptorSet)
{
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 7957
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 7959
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 7959
	CShaderVulkanBase::GetNumActiveUniformBlocks(
					int32 nDescriptorSet);  // 7955
} /* size: 39, inline expansions: 5 (48 bytes) */

// <009F5B01> vulkan/renderdevicevulkan.cpp:7955
void CShaderVulkanBase::GetNumActiveUniformBlocks(int32 nDescriptorSet)
{
} /* size: 0 */

// <00A692A0> vulkan/renderdevicevulkan.cpp:7964
// function calls: 5
void CShaderVulkanBase::GetNumActiveImages(int32 nDescriptorSet)
{
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 7966
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 7968
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 7968
	CShaderVulkanBase::GetNumActiveImages(
				int32 nDescriptorSet);  // 7964
} /* size: 39, inline expansions: 5 (48 bytes) */

// <009F5ADB> vulkan/renderdevicevulkan.cpp:7964
void CShaderVulkanBase::GetNumActiveImages(int32 nDescriptorSet)
{
} /* size: 0 */

// <00A693D8> vulkan/renderdevicevulkan.cpp:7973
// function calls: 5
void CShaderVulkanBase::GetNumActiveStorageBuffers(int32 nDescriptorSet)
{
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 7975
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 7977
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Count(); // 7977
	CShaderVulkanBase::GetNumActiveStorageBuffers(
					int32 nDescriptorSet);  // 7973
} /* size: 42, inline expansions: 5 (51 bytes) */

// <009F5AB5> vulkan/renderdevicevulkan.cpp:7973
void CShaderVulkanBase::GetNumActiveStorageBuffers(int32 nDescriptorSet)
{
} /* size: 0 */

// <00A69510> vulkan/renderdevicevulkan.cpp:7982
// function calls: 5
void CShaderVulkanBase::GetNumActiveUniformTexelBuffers(int32 nDescriptorSet)
{
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 7984
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 7986
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 7986
	CShaderVulkanBase::GetNumActiveUniformTexelBuffers(
					int32 nDescriptorSet);  // 7982
} /* size: 39, inline expansions: 5 (48 bytes) */

// <009F5A8F> vulkan/renderdevicevulkan.cpp:7982
void CShaderVulkanBase::GetNumActiveUniformTexelBuffers(int32 nDescriptorSet)
{
} /* size: 0 */

// <00A69648> vulkan/renderdevicevulkan.cpp:7991
// function calls: 5
void CShaderVulkanBase::GetNumActiveStorageTexelBuffers(int32 nDescriptorSet)
{
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 7993
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 7995
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 7995
	CShaderVulkanBase::GetNumActiveStorageTexelBuffers(
					int32 nDescriptorSet);  // 7991
} /* size: 42, inline expansions: 5 (51 bytes) */

// <009F5A69> vulkan/renderdevicevulkan.cpp:7991
void CShaderVulkanBase::GetNumActiveStorageTexelBuffers(int32 nDescriptorSet)
{
} /* size: 0 */

// <009F57E0> vulkan/renderdevicevulkan.cpp:8000
// variables: 3
// function calls: 8
void CShaderVulkanBase::GetSamplerBinding(int32 nDescriptorSet, uint32 nSamplerIndex)
{
	const char   __FUNCTION__; // 28813
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8002
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8003
	}
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 8002
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 8003
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 8003
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 8004
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 8004
} /* size: 0, variables: 1, inline expansions: 8 (102 bytes) */

// <009F545E> vulkan/renderdevicevulkan.cpp:8007
// variables: 3
// function calls: 12
void CShaderVulkanBase::GetTextureBinding(int32 nDescriptorSet, uint32 nTextureIndex, bool* pIsInputAttachmentOut)
{
	const char   __FUNCTION__; // 28813
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8009
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8010
	}
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 8009
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 8010
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::De this); // 8010
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::De this,
			int i);  // 8013
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 8013
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 8015
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t::TextureBinding_t, CUtlMemory<CShaderVulkanBase::De this,
			int i);  // 8015
} /* size: 0, variables: 1, inline expansions: 12 (126 bytes) */

// <009F51D5> vulkan/renderdevicevulkan.cpp:8018
// variables: 3
// function calls: 8
void CShaderVulkanBase::GetUniformBufferBinding(int32 nDescriptorSet, uint32 nUniformBufferIndex)
{
	const char   __FUNCTION__; // 28970
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8020
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8021
	}
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 8020
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 8021
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 8021
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 8022
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 8022
} /* size: 0, variables: 1, inline expansions: 8 (102 bytes) */

// <009F4F4C> vulkan/renderdevicevulkan.cpp:8025
// variables: 3
// function calls: 8
void CShaderVulkanBase::GetImageBinding(int32 nDescriptorSet, uint32 nImageIndex)
{
	const char   __FUNCTION__; // 28759
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8027
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8028
	}
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 8027
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 8028
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 8028
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 8029
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 8029
} /* size: 0, variables: 1, inline expansions: 8 (102 bytes) */

// <009F4CC3> vulkan/renderdevicevulkan.cpp:8032
// variables: 3
// function calls: 8
void CShaderVulkanBase::GetStorageBufferBinding(int32 nDescriptorSet, uint32 nStorageBufferIndex)
{
	const char   __FUNCTION__; // 28970
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8034
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8035
	}
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 8034
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 8035
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Count(); // 8035
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 8036
	CUtlMemory<ShaderStorageBufferBinding_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::operator[](
			int i);  // 8036
} /* size: 0, variables: 1, inline expansions: 8 (102 bytes) */

// <009F4A3A> vulkan/renderdevicevulkan.cpp:8039
// variables: 3
// function calls: 8
void CShaderVulkanBase::GetUniformTexelBufferBinding(int32 nDescriptorSet, uint32 nUniformTexelBufferIndex)
{
	const char   __FUNCTION__; // 29100
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8041
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8042
	}
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 8041
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 8042
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 8042
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 8043
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 8043
} /* size: 0, variables: 1, inline expansions: 8 (102 bytes) */

// <009F47B1> vulkan/renderdevicevulkan.cpp:8046
// variables: 3
// function calls: 8
void CShaderVulkanBase::GetStorageTexelBufferBinding(int32 nDescriptorSet, uint32 nStorageTexelBufferIndex)
{
	const char   __FUNCTION__; // 29100
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8048
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8049
	}
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 8048
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 8049
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 8049
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 8050
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 8050
} /* size: 0, variables: 1, inline expansions: 8 (102 bytes) */

// <009F466E> vulkan/renderdevicevulkan.cpp:8053
// variables: 2
// function calls: 3
void CShaderVulkanBase::GetDescriptorSetNameHash(int32 nDescriptorSet)
{
	const char   __FUNCTION__; // 28997
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8055
	}
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 8055
	CUtlMemory<CShaderVulkanBase::DescriptorSetBindings_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this,
			int i);  // 8056
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <009F4367> vulkan/renderdevicevulkan.cpp:8059
// variable: 1
// function calls: 12
void CShaderVulkanBase::GetAssociatedHiddenUAVCounterIndex(uint32 nStorageBufferIndex, uint32_t& nHiddenUAVCounterBufferIndexOut)
{
	IndexType_t nIndex; // 8061
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >:: this,
			short unsigned int i);  // 545
	Element(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short un this,
		short unsigned int i);  // 1912
	LeftChild(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short un this,
			short unsigned int i);  // 1913
	CDefLess<unsigned int>::operator(
			const unsigned int& lhs,
			const unsigned int& rhs);  // 426
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	RightChild(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short un this,
			short unsigned int i);  // 1915
	FindAltKeyType<unsigned int, CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::CKeyLess>(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short un this,
																const unsigned int& search,
																const CKeyLess& altLess);  // 298
	FindAltKeyType<unsigned int>(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short un this,
					const unsigned int& search);  // 243
	CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Find(
		const KeyType_t& key);  // 8061
	operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >:: this,
			short unsigned int i);  // 545
	Element(const CUtlRBTree<CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::Node_t, short un this,
		short unsigned int i);  // 93
	CUtlMap<unsigned int, unsigned int, short unsigned int, CDefLess<unsigned int> >::operator[](
			IndexType_t i);  // 8064
} /* size: 92, variables: 1, inline expansions: 12 (237 bytes) */

// <009F4328> vulkan/renderdevicevulkan.cpp:8070
void CShaderVulkanBase::GetThreadGroupSize(uint32_t* pThreadGroupSizeOut)
{
} /* size: 31 */

// <009F41DE> vulkan/renderdevicevulkan.cpp:8080
// function calls: 5
void CVertexShaderVulkan::CVertexShaderVulkan()
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 8081
} /* size: 0, inline expansions: 5 (0 bytes) */

// <009F41C5> vulkan/renderdevicevulkan.cpp:8080
void CVertexShaderVulkan::CVertexShaderVulkan()
{
} /* size: 0 */

// <009F4081> vulkan/renderdevicevulkan.cpp:8085
// function calls: 5
void CVertexShaderVulkan::~CVertexShaderVulkan()
{
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 8087
} /* size: 88, inline expansions: 5 (95 bytes) */

// <009F3E65> vulkan/renderdevicevulkan.cpp:8085
// function calls: 9
void CVertexShaderVulkan::~CVertexShaderVulkan()
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 8087
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 8088
	CVertexShaderVulkan::~CVertexShaderVulkan(); // 8088
} /* size: 91, inline expansions: 9 (152 bytes) */

// <009F3E4C> vulkan/renderdevicevulkan.cpp:8085
void CVertexShaderVulkan::~CVertexShaderVulkan()
{
} /* size: 0 */

// <009EFF38> vulkan/renderdevicevulkan.cpp:8094
// variables: 22
// function calls: 254
void CVertexShaderVulkan::Create()
{
	CVfxShaderFile* pShaderFile; // 8096
	const char   __FUNCTION__; // 28516
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8097
	}
	{
		CVfxShaderFileVulkan* pShaderFileVulkan; // 8101
		const uint8* pAttribMap; // 8102
		{
			int32 nAttrib; // 8105
			CVfxShaderFileVulkan::GetAttribMapSize(); // 8105
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1249
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1252
			Construct<int, int>(int* pMemory); // 1252
			CUtlMemory<int, int>::NumAllocated(); // 1247
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					int& src);  // 8107
		}
		CVfxShaderFileVulkan::GetAttribMap(); // 8102
	}
	{
		const char* pShaderSource; // 8114
		istringstream inputStream; // 8115
		string line; // 8116
		{
			size_t nStartFind; // 8130
			size_t nEndFind; // 8131
			{
				size_t nSemanticIndexStart; // 8145
				size_t nSemanticIndexEnd; // 8146
				int32 nSemanticIndex; // 8153
				string sSemanticName; // 8162
				int32_t nSemantic; // 8165
				{
					size_t nDigitStart; // 8156
					string sSemanticIndex; // 8157
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
						size_type __pos,
						const char* __s);  // 3443
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 648
					__new_allocator<char>::__new_allocator(
							const __new_allocator<char>  &);  // 173
					allocator<char>::allocator(
							const allocator<char>& __a);  // 209
					_Alloc_hider::_Alloc_hider(
							pointer __dat,
							allocator<char>& __a);  // 648
					{
						const char* __start; // 650
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_limit(
							size_type __pos,
							size_type __off);  // 652
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 650
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
							size_type __pos,
							const char* __s);  // 651
						_Guard::_Guard(
							basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
						copy(char_type* __s1,
							const char_type* __s2,
							size_t __n);  // 453
						_S_copy(char* __d,
							const char* __s,
							size_type __n);  // 448
						assign(char_type& __c1,
							const char_type& __c2);  // 451
						_S_copy(char* __d,
							const char* __s,
							size_type __n);  // 489
						_S_copy_chars<char const*>(char* __p,
										const char* __k1,
										const char* __k2);  // 253
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
								size_type __length);  // 272
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
						assign(char_type& __c1,
							const char_type& __c2);  // 273
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
								size_type __n);  // 257
						_Guard::~_Guard(); // 258
						__new_allocator<char>::allocate(
							size_type __n,
							const void  *);  // 203
						allocator<char>::allocate(
							size_t __n);  // 614
						allocate(allocator_type& __a,
							size_type __n);  // 142
						_S_allocate(_Char_alloc_type& __a,
								size_type __n);  // 164
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
								size_type& __capacity,
								size_type __old_capacity);  // 235
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
								size_type __capacity);  // 236
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
							pointer __p);  // 235
						basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
										const char* __beg,
										const char* __end,
										forward_iterator_tag);  // 652
					}
					allocator<char>::~allocator(); // 648
					basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
							const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str,
							size_type __pos,
							size_type __n);  // 3443
					basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(
						size_type __pos,
						size_type __n);  // 8157
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2874
					basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str(); // 8158
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
					__new_allocator<char>::deallocate(
							char* __p,
							size_type __n);  // 215
					allocator<char>::deallocate(
							char* __p,
							size_t __n);  // 649
					deallocate(allocator_type& __a,
							pointer __p,
							size_type __n);  // 305
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
							size_type __size);  // 299
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
					allocator<char>::~allocator(); // 197
					_Alloc_hider::~_Alloc_hider(); // 896
					basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 8159
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8164
				}
				basic_string<char, std::char_traits<char>, std::allocator<char> >::operator[](
						size_type __pos);  // 8139
				basic_string<char, std::char_traits<char>, std::allocator<char> >::operator[](
						size_type __pos);  // 8147
				basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 411
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
					size_type __pos,
					const char* __s);  // 3443
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 648
				__new_allocator<char>::__new_allocator(
						const __new_allocator<char>  &);  // 173
				allocator<char>::allocator(
						const allocator<char>& __a);  // 209
				_Alloc_hider::_Alloc_hider(
						pointer __dat,
						allocator<char>& __a);  // 648
				{
					const char* __start; // 650
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_limit(
						size_type __pos,
						size_type __off);  // 652
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 650
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check(
						size_type __pos,
						const char* __s);  // 651
					_Guard::_Guard(
						basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
					copy(char_type* __s1,
						const char_type* __s2,
						size_t __n);  // 453
					_S_copy(char* __d,
						const char* __s,
						size_type __n);  // 448
					assign(char_type& __c1,
						const char_type& __c2);  // 451
					_S_copy(char* __d,
						const char* __s,
						size_type __n);  // 489
					_S_copy_chars<char const*>(char* __p,
									const char* __k1,
									const char* __k2);  // 253
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
							size_type __length);  // 272
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
					assign(char_type& __c1,
						const char_type& __c2);  // 273
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
							size_type __n);  // 257
					_Guard::~_Guard(); // 258
					__new_allocator<char>::allocate(
						size_type __n,
						const void  *);  // 203
					allocator<char>::allocate(
						size_t __n);  // 614
					allocate(allocator_type& __a,
						size_type __n);  // 142
					_S_allocate(_Char_alloc_type& __a,
							size_type __n);  // 164
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
							size_type& __capacity,
							size_type __old_capacity);  // 235
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
							size_type __capacity);  // 236
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
						pointer __p);  // 235
					basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
									const char* __beg,
									const char* __end,
									forward_iterator_tag);  // 652
				}
				allocator<char>::~allocator(); // 648
				basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
						const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str,
						size_type __pos,
						size_type __n);  // 3443
				basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(
					size_type __pos,
					size_type __n);  // 8162
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2874
				basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str(); // 8165
				CUtlMemory<int, int>::NumAllocated(); // 1196
				CUtlMemory<int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
					int i);  // 1201
				CopyConstruct<int>(int* pMemory,
							const int& src);  // 1201
				CUtlMemory<int, int>::Base(); // 112
				CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
				CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
						const int& src);  // 8166
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
				__new_allocator<char>::deallocate(
						char* __p,
						size_type __n);  // 215
				allocator<char>::deallocate(
						char* __p,
						size_t __n);  // 649
				deallocate(allocator_type& __a,
						pointer __p,
						size_type __n);  // 305
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
						size_type __size);  // 299
				basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
				allocator<char>::~allocator(); // 197
				_Alloc_hider::~_Alloc_hider(); // 896
				basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 8167
			}
			find(const char_type* __s,
				size_t __n,
				const char_type& __a);  // 678
			compare(const char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 684
			basic_string<char, std::char_traits<char>, std::allocator<char> >::find(
				const char* __s,
				size_type __pos,
				size_type __n);  // 2976
			basic_string<char, std::char_traits<char>, std::allocator<char> >::find(
				const char* __s,
				size_type __pos);  // 8125
			find(const char_type* __s,
				size_t __n,
				const char_type& __a);  // 678
			compare(const char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 684
			basic_string<char, std::char_traits<char>, std::allocator<char> >::find(
				const char* __s,
				size_type __pos,
				size_type __n);  // 2976
			basic_string<char, std::char_traits<char>, std::allocator<char> >::find(
				const char* __s,
				size_type __pos);  // 8130
			find(const char_type* __s,
				size_t __n,
				const char_type& __a);  // 678
			compare(const char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 684
			basic_string<char, std::char_traits<char>, std::allocator<char> >::find(
				const char* __s,
				size_type __pos,
				size_type __n);  // 2976
			basic_string<char, std::char_traits<char>, std::allocator<char> >::find(
				const char* __s,
				size_type __pos);  // 8131
		}
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 8174
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 81
		basic_streambuf<char, std::char_traits<char> >::~basic_streambuf(); // 81
		basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::~basic_stringbuf(); // 632
		basic_istream<char, std::char_traits<char> >::~basic_istream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 632
		basic_ios<char, std::char_traits<char> >::~basic_ios(); // 632
		basic_istringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_istringstream(
					const int  __in_chrg,
					const void **  __vtt_parm);  // 8174
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 707
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 205
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				const allocator<char>& __a);  // 707
		{
			const char* __end; // 713
			length(const char_type* __s); // 713
			_Guard::_Guard(
				basic_string<char, std::char_traits<char>, std::allocator<char> >* __s);  // 251
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 253
			copy(char_type* __s1,
				const char_type* __s2,
				size_t __n);  // 453
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 448
			assign(char_type& __c1,
				const char_type& __c2);  // 451
			_S_copy(char* __d,
				const char* __s,
				size_type __n);  // 489
			_S_copy_chars<char const*>(char* __p,
							const char* __k1,
							const char* __k2);  // 253
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
					size_type __length);  // 272
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
			assign(char_type& __c1,
				const char_type& __c2);  // 273
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
					size_type __n);  // 257
			_Guard::~_Guard(); // 258
			__new_allocator<char>::allocate(
				size_type __n,
				const void  *);  // 203
			allocator<char>::allocate(
				size_t __n);  // 614
			allocate(allocator_type& __a,
				size_type __n);  // 142
			_S_allocate(_Char_alloc_type& __a,
					size_type __n);  // 164
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
					size_type& __capacity,
					size_type __old_capacity);  // 235
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
					size_type __capacity);  // 236
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
				pointer __p);  // 235
			basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(
							const char* __beg,
							const char* __end,
							forward_iterator_tag);  // 714
		}
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<>(
				const char* __s,
				const allocator<char>& __a);  // 8115
		basic_ios<char, std::char_traits<char> >::basic_ios(); // 650
		basic_istream<char, std::char_traits<char> >::basic_istream(
				const int  __in_chrg,
				const void **  __vtt_parm);  // 650
		basic_streambuf<char, std::char_traits<char> >::basic_streambuf(); // 176
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_get_allocator(); // 743
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 743
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 743
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 745
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 753
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 753
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 754
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1176
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 760
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 760
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 761
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_use_local_data(); // 761
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 762
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 747
		basic_string<char, std::char_traits<char>, std::allocator<char> >::length(); // 749
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 748
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
				basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 176
		basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::_M_stringbuf_init(
					openmode __mode);  // 177
		basic_stringbuf<char, std::char_traits<char>, std::allocator<char> >::basic_stringbuf(
				__string_type& __s,
				openmode __mode);  // 650
		operator|(_Ios_Openmode __a,
				_Ios_Openmode __b);  // 650
		basic_istringstream<char, std::char_traits<char>, std::allocator<char> >::basic_istringstream(
					const int  __in_chrg,
					const void **  __vtt_parm,
					__string_type& __str,
					openmode __mode);  // 8115
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 8115
		allocator<char>::~allocator(); // 8115
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 590
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 593
		allocator<char>::~allocator(); // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 8116
		__check_facet<std::ctype<char> >(const ctype<char>* __f); // 465
		ctype<char>::widen(
			char __c);  // 882
		ctype<char>::widen(
			char __c);  // 465
		basic_ios<char, std::char_traits<char> >::widen(
			char __c);  // 4409
		getline<char, std::char_traits<char>, std::allocator<char> >(basic_istream<char, std::char_traits<char> >& __is,
										basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 8117
		find(const char_type* __s,
			size_t __n,
			const char_type& __a);  // 678
		compare(const char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 684
		basic_string<char, std::char_traits<char>, std::allocator<char> >::find(
			const char* __s,
			size_type __pos,
			size_type __n);  // 2976
		basic_string<char, std::char_traits<char>, std::allocator<char> >::find(
			const char* __s,
			size_type __pos);  // 8120
		find(const char_type* __s,
			size_t __n,
			const char_type& __a);  // 678
		compare(const char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 684
		basic_string<char, std::char_traits<char>, std::allocator<char> >::find(
			const char* __s,
			size_type __pos,
			size_type __n);  // 2976
		basic_string<char, std::char_traits<char>, std::allocator<char> >::find(
			const char* __s,
			size_type __pos);  // 8120
		__check_facet<std::ctype<char> >(const ctype<char>* __f); // 465
		ctype<char>::widen(
			char __c);  // 882
		ctype<char>::widen(
			char __c);  // 465
		basic_ios<char, std::char_traits<char> >::widen(
			char __c);  // 4409
		getline<char, std::char_traits<char>, std::allocator<char> >(basic_istream<char, std::char_traits<char> >& __is,
										basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 8122
		basic_ios<char, std::char_traits<char> >::rdstate(); // 214
		operator&(_Ios_Iostate __a,
				_Ios_Iostate __b);  // 214
		basic_ios<char, std::char_traits<char> >::fail(); // 125
		basic_ios<char, std::char_traits<char> >::operator bool(); // 8122
		basic_ios<char, std::char_traits<char> >::rdstate(); // 214
		operator&(_Ios_Iostate __a,
				_Ios_Iostate __b);  // 214
		basic_ios<char, std::char_traits<char> >::fail(); // 125
		basic_ios<char, std::char_traits<char> >::operator bool(); // 8117
	}
	CRenderDeviceVulkan::ShaderTable(); // 8096
} /* size: 0, variables: 2, inline expansions: 1 (14 bytes) */

// <009EFDCC> vulkan/renderdevicevulkan.cpp:8182
// function calls: 4
void CVertexShaderVulkan::ComputeHash(const uint8_t* pSpirVByteCode, uint32_t nByteCodeSize)
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 8186
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 8188
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 8188
} /* size: 105, inline expansions: 4 (51 bytes) */

// <009EFC04> vulkan/renderdevicevulkan.cpp:8193
// variables: 2
// function calls: 3
void CRenderDeviceVulkan::QueryFeature(CUtlStringToken nTok)
{
	const char   __FUNCTION__; // 28678
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8195
	}
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 8196
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 8201
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 8206
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <009EF8BA> vulkan/renderdevicevulkan.cpp:8222
// variables: 3
// function calls: 13
void CRenderDeviceVulkan::GetGraphicsAPISpecificTextureHandle(HRenderTexture hTexture)
{
	CVulkanImage* pVulkanImage; // 8224
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 8224
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
	{
		RenderTextureDimension_t nTextureDim; // 342
		bool bDimsOkay; // 343
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 483
		TextureSpecification_t::ComputeTextureDimension(); // 483
		CTextureBase::ComputeTextureDimension(); // 342
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 348
	}
	{
	}
	CTextureInfoId::GetTextureObject(); // 83
	CTextureVulkan::GetTextureResource(); // 365
	CTextureManagerVulkan::GetTextureResource(
				HRenderTexture hTexture,
				RenderTextureDimension_t nDim,
				const char* szParamName);  // 8224
} /* size: 300, variables: 1, inline expansions: 7 (326 bytes) */

// <009EF3FA> vulkan/renderdevicevulkan.cpp:8233
// variables: 8
// function calls: 13
void CRenderDeviceVulkan::ServiceFallbackTextureQueue(CRenderContextVulkan* pRenderContext)
{
	int nQueueIdx; // 8235
	int nTexCount; // 8238
	FallbackTextureCopyRequest_t req; // 8239
	float64 flStart; // 8240
	float32 flTime; // 8264
	{
		VkDeviceMemory pStagingGPUMemory; // 8243
		VkBuffer pStagingBuffer; // 8244
		VkDeviceSize nStagingOffset; // 8245
	}
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 607
	CInterlockedIntT<int, 4>::AtomicSet(
			int newValue);  // 614
	CInterlockedIntT<int, 4>::InterlockedExchange(
				int newValue);  // 8236
	CInterlockedIntT<int, 4>::operator int(); // 8235
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 782
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 786
	CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>::PopItem(
		FallbackTextureCopyRequest_t* pResult);  // 8241
} /* size: 736, variables: 5, inline expansions: 13 (527 bytes) */

// <009EF331> vulkan/renderdevicevulkan.cpp:8273
void CRenderDeviceVulkan::AppendStatsSummaryString(CBufferString* pOut)
{
} /* size: 71 */

// <009EF2E5> vulkan/renderdevicevulkan.cpp:8282
// variable: 1
void CRenderDeviceVulkan::OnRenderDeviceFlagsEnabled(RenderDeviceFlag_t nFlags)
{
	{
		SwapChainIndex_t h; // 8289
	}
} /* size: 5 */

// <009EF2BF> vulkan/renderdevicevulkan.cpp:8298
void CRenderDeviceVulkan::OnRenderDeviceFlagsDisabled(RenderDeviceFlag_t nFlags)
{
} /* size: 0 */

// <009EF290> vulkan/renderdevicevulkan.cpp:8304
void CRenderDeviceVulkan::GetVulkanPhysicalDeviceLimits()
{
} /* size: 18 */

// <009EF261> vulkan/renderdevicevulkan.cpp:8310
void CRenderDeviceVulkan::GetVulkanPhysicalDeviceFeatures()
{
} /* size: 0 */

// <009EEBBB> vulkan/renderdevicevulkan.cpp:8320
// variables: 6
// function calls: 22
void CRenderDeviceVulkan::AcquireSemaphore()
{
	VulkanSemaphore_t* pVulkanSemaphore; // 8322
	const char   __FUNCTION__; // 28786
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_8326; // 8326
		{
			IndexType_t nTailIndex; // 8329
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8330
			}
			CUtlLinkedList<VulkanSemaphore_t::Tail(); // 8329
			CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::operator[](
					short unsigned int i);  // 494
			CUtlLinkedList<VulkanSemaphore_t::operator[](
					short unsigned int i);  // 8331
			CUtlLinkedList<VulkanSemaphore_t::Remove(
				short unsigned int elem);  // 8332
		}
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 8326
		CUtlLinkedList<VulkanSemaphore_t::Head(); // 142
		CUtlLinkedList<VulkanSemaphore_t::IsEmpty(); // 8327
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 8334
	}
	{
		VkSemaphoreCreateInfo semaphoreCreateInfo; // 8340
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 8344
	}
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 8347
} /* size: 0, variables: 2, inline expansions: 2 (19 bytes) */

// <009EE687> vulkan/renderdevicevulkan.cpp:8354
// variables: 4
// function calls: 15
void CRenderDeviceVulkan::ReleaseSemaphore(RenderSemaphoreHandle_t hSemaphoreObject)
{
	VulkanSemaphore_t* pVulkanSemaphore; // 8361
	const char   __FUNCTION__; // 28786
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8362
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_8364; // 8364
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 8364
		CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::operator[](
				short unsigned int i);  // 482
		CUtlLinkedList<VulkanSemaphore_t::Element(
			short unsigned int i);  // 842
		CopyConstruct<VulkanSemaphore_t*>(VulkanSemaphore_t** pMemory,
							VulkanSemaphore_t* const& src);  // 842
		CUtlLinkedList<VulkanSemaphore_t::InsertAfter(
				short unsigned int after,
				VulkanSemaphore_t* const& src);  // 850
		CUtlLinkedList<VulkanSemaphore_t::AddToHead(
				VulkanSemaphore_t* const& src);  // 8365
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 8366
	}
} /* size: 298, variables: 2 */

// <009EDA58> vulkan/renderdevicevulkan.cpp:8370
// variables: 6
// function calls: 46
void CRenderDeviceVulkan::RecycleSemaphores(bool bForce)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_8372; // 8372
	{
		uint32_t nHighestFrameCompletedGPU; // 8375
		CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > toRemove; // 8376
		{
			short unsigned int nIndex; // 8377
			CUtlLinkedList<VulkanSemaphore_t::Head(); // 8377
			CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::operator[](
					short unsigned int i);  // 494
			CUtlLinkedList<VulkanSemaphore_t::operator[](
					short unsigned int i);  // 8379
			CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::operator[](
					short unsigned int i);  // 368
			CUtlLinkedList<VulkanSemaphore_t::InternalElement(
					short unsigned int i);  // 550
			CUtlLinkedList<VulkanSemaphore_t::Next(
				short unsigned int i);  // 8377
			CopyConstruct<short unsigned int>(short unsigned int* pMemory,
								const short unsigned int& src);  // 1201
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Element(
				int i);  // 1201
			CUtlMemory<short unsigned int, int>::Grow(
				int num);  // 806
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::AddToTail(
					const short unsigned int& src);  // 8381
		}
		{
			int32_t nToRemove; // 8385
			{
				VulkanSemaphore_t* pVulkanSemaphore; // 8387
				CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::operator[](
						short unsigned int i);  // 494
				CUtlLinkedList<VulkanSemaphore_t::operator[](
						short unsigned int i);  // 8387
				CUtlLinkedList<VulkanSemaphore_t::Remove(
					short unsigned int elem);  // 8388
				CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::operator[](
						short unsigned int i);  // 482
				CUtlLinkedList<VulkanSemaphore_t::Element(
					short unsigned int i);  // 842
				CopyConstruct<VulkanSemaphore_t*>(VulkanSemaphore_t** pMemory,
									VulkanSemaphore_t* const& src);  // 842
				CUtlLinkedList<VulkanSemaphore_t::InsertAfter(
						short unsigned int after,
						VulkanSemaphore_t* const& src);  // 850
				CUtlLinkedList<VulkanSemaphore_t::AddToHead(
						VulkanSemaphore_t* const& src);  // 8389
			}
		}
		CInterlockedIntT<unsigned int, 4>::GetRaw(); // 484
		CMemoryManagerVulkan::GetHighestFrameCompletedOnGPU(); // 8375
		CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<short unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(); // 8376
		CUtlMemory<short unsigned int, int>::Purge(); // 903
		CUtlMemory<short unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
		ValidateAlignment<short unsigned int>(void); // 508
		CUtlMemory<short unsigned int, int>::Purge(); // 510
		CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 8391
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 8372
	CUtlLinkedList<VulkanSemaphore_t::Count(); // 8373
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 8392
} /* size: 751, variables: 1, inline expansions: 11 (472 bytes) */

// <009ED3B3> vulkan/renderdevicevulkan.cpp:8395
// variables: 4
// function calls: 26
void CRenderDeviceVulkan::DestroyAllSemaphores()
{
	const char   __FUNCTION__; // 28894
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_8400; // 8400
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8398
	}
	{
		short unsigned int nIndex; // 8401
		CUtlLinkedList<VulkanSemaphore_t::Head(); // 8401
		CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::operator[](
				short unsigned int i);  // 494
		CUtlLinkedList<VulkanSemaphore_t::operator[](
				short unsigned int i);  // 8403
		CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::operator[](
				short unsigned int i);  // 494
		CUtlLinkedList<VulkanSemaphore_t::operator[](
				short unsigned int i);  // 8404
		CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::operator[](
				short unsigned int i);  // 368
		CUtlLinkedList<VulkanSemaphore_t::InternalElement(
				short unsigned int i);  // 550
		CUtlLinkedList<VulkanSemaphore_t::Next(
			short unsigned int i);  // 8401
	}
	CUtlLinkedList<VulkanSemaphore_t::Count(); // 8398
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 8400
	CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::Purge(); // 643
	CUtlLinkedList<VulkanSemaphore_t::ResetDbgInfo(); // 650
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<VulkanSemaphore_t::InvalidIterator(); // 648
	CUtlLinkedList<VulkanSemaphore_t::Purge(); // 8406
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 8407
} /* size: 0, variables: 2, inline expansions: 18 (663 bytes) */

// <009ED33C> vulkan/renderdevicevulkan.cpp:8410
// variable: 1
void CRenderDeviceVulkan::CreateRenderPass(const CRenderPassDesc* pRenderPassDesc)
{
	RenderPassHandle_t hRenderPass; // 8412
} /* size: 16, variables: 1 */

// <009ED29F> vulkan/renderdevicevulkan.cpp:8417
// function call: 1
void CRenderDeviceVulkan::DestroyRenderPass(RenderPassHandle_t hRenderPass)
{
	RenderPassHandle_t::operator==(
			const RenderPassHandle_t& other);  // 8419
} /* size: 25, inline expansions: 1 (0 bytes) */

// <009ECF98> vulkan/renderdevicevulkan.cpp:8428
// variables: 4
// function calls: 12
void CRenderDeviceVulkan::GetClearFlagsSupportedInRenderPass(int nClearFlags, const RenderTargetDesc_t& renderTargets, const RenderClearInfo_t& clearInfo)
{
	int nRetFlags; // 8430
	{
		int i; // 8431
		{
			HRenderTexture hRenderTarget; // 8435
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 8435
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator->(); // 8440
			CTextureInfoId::GetSpec(); // 403
			CTextureBase::GetSpec(); // 8440
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 8440
		}
	}
	{
		HRenderTexture hRenderTarget; // 8453
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 8453
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator->(); // 8458
		CTextureInfoId::GetSpec(); // 403
		CTextureBase::GetSpec(); // 8458
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 8458
	}
} /* size: 220, variables: 1 */

// <00A5EB7B> vulkan/renderdevicevulkan.cpp:8472
// function calls: 4
void CRenderDeviceVulkan::SetFramePacingFPS(double flFps)
{
	CRenderDeviceVulkan::RenderThread(); // 8474
	{
	}
	CRenderThreadVulkan::SetFramePacingFPS(
				double flFps);  // 8481
	CRenderDeviceVulkan::RenderThread(); // 8475
	CRenderDeviceVulkan::SetFramePacingFPS(
				double flFps);  // 8472
} /* size: 0, inline expansions: 4 (82 bytes) */

// <009ECF33> vulkan/renderdevicevulkan.cpp:8472
// variables: 2
void CRenderDeviceVulkan::SetFramePacingFPS(double flFps)
{
	const char   __FUNCTION__; // 28813
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8474
	}
} /* size: 0, variables: 1 */

// <00A5E6C8> vulkan/renderdevicevulkan.cpp:8490
void CRenderDeviceVulkan::OnEnterHibernationState()
{
} /* size: 50 */

// <00A5E3F5> vulkan/renderdevicevulkan.cpp:8506
void CRenderDeviceVulkan::OnExitHibernationState()
{
} /* size: 38 */

// <009ECE6D> vulkan/renderdevicevulkan.cpp:8520
void CRenderDeviceVulkan::OnLowMemoryNotification()
{
} /* size: 110 */

// <00A69780> vulkan/renderdevicevulkan.cpp:8533
void CRenderDeviceVulkan::IsHibernating()
{
} /* size: 12 */

// <009EC808> vulkan/renderdevicevulkan.cpp:8539
// variables: 5
// function calls: 23
void CRenderDeviceVulkan::AllocateDeviceCheckPointString(const char* pDebugString)
{
	uint32 nSize; // 8541
	uint32 nLocation; // 8542
	const char   __FUNCTION__; // 29154
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_8545; // 8545
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8551
		}
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 8545
		CInterlockedIntT<unsigned int, 4>::GetRaw(); // 8546
		CUtlVectorBase<char, CUtlMemory<char, int> >::Count(); // 8546
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 8550
		CUtlVectorBase<char, CUtlMemory<char, int> >::Count(); // 8551
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 8552
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<unsigned int, 4>::operator=(
				unsigned int newValue);  // 8548
	}
	V_strlen(const char* str); // 8541
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 8542
	CUtlVectorBase<char, CUtlMemory<char, int> >::Count(); // 8543
	CUtlMemory<char, int>::Base(); // 112
	CUtlVectorBase<char, CUtlMemory<char, int> >::Base(); // 8555
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 8555
	CUtlMemory<char, int>::Base(); // 112
	CUtlVectorBase<char, CUtlMemory<char, int> >::Base(); // 8556
} /* size: 0, variables: 3, inline expansions: 10 (84 bytes) */

// <009EC7C9> vulkan/renderdevicevulkan.cpp:8567
void CRenderDeviceVulkan::UnThrottlePipelineCreationForNFrames(uint32 nNumberOfFramesForUnthrottledPipelineCreation)
{
} /* size: 19 */

// <00A61500> vulkan/renderdevicevulkan.cpp:8574
// variables: 3
// function calls: 11
void CRenderDeviceVulkan::GetShaderStats(RenderShaderStats_t* pOutStats, RenderShaderType_t nType, RenderShaderHandle_t hShader)
{
	CShaderVulkanBase* pShader; // 8593
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 8576
	{
		uint32 nStatistic; // 8596
		{
			const VkPipelineExecutableStatisticKHR* pStat; // 8598
			strstr(const char* __haystack,
				const char* __needle);  // 247
			V_strstr(const char* s1,
				const char* search);  // 8601
			strstr(const char* __haystack,
				const char* __needle);  // 247
			V_strstr(const char* s1,
				const char* search);  // 8606
			strstr(const char* __haystack,
				const char* __needle);  // 247
			V_strstr(const char* s1,
				const char* search);  // 8607
			strstr(const char* __haystack,
				const char* __needle);  // 247
			V_strstr(const char* s1,
				const char* search);  // 8612
		}
	}
	CRenderDeviceVulkan::GetShaderStats(
			RenderShaderStats_t* pOutStats,
			RenderShaderType_t nType,
			RenderShaderHandle_t hShader);  // 8574
} /* size: 273, variables: 1, inline expansions: 3 (217 bytes) */

// <009EC75E> vulkan/renderdevicevulkan.cpp:8574
// variables: 3
void CRenderDeviceVulkan::GetShaderStats(RenderShaderStats_t* pOutStats, RenderShaderType_t nType, RenderShaderHandle_t hShader)
{
	CShaderVulkanBase* pShader; // 8593
	{
		uint32 nStatistic; // 8596
		{
			const VkPipelineExecutableStatisticKHR* pStat; // 8598
		}
	}
} /* size: 0, variables: 1 */

// <00A5EA97> vulkan/renderdevicevulkan.cpp:8631
// variables: 3
// function calls: 2
void CRenderDeviceVulkan::TriggerValidationError()
{
	VkShaderModule pShaderModule; // 8633
	VkShaderModuleCreateInfo shaderModuleValidationCacheCreateInfo; // 8634
	VkResult vkResult; // 8636
	VulkanDevice(void); // 8636
	{
	}
	CRenderDeviceVulkan::TriggerValidationError(); // 8631
} /* size: 0, variables: 3, inline expansions: 2 (33 bytes) */

// <009EC6FA> vulkan/renderdevicevulkan.cpp:8631
// variables: 5
void CRenderDeviceVulkan::TriggerValidationError()
{
	VkShaderModule pShaderModule; // 8633
	VkShaderModuleCreateInfo shaderModuleValidationCacheCreateInfo; // 8634
	VkResult vkResult; // 8636
	const char   __FUNCTION__; // 28943
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8637
	}
} /* size: 0, variables: 4 */

// <009EC6BB> vulkan/renderdevicevulkan.cpp:8641
void CRenderDeviceVulkan::GetTimestampCounterFrequencyInternal(double* pflOneOverTimestampCounterFrequency)
{
} /* size: 59 */

// <009EC66D> vulkan/renderdevicevulkan.cpp:8658
void CRenderDeviceVulkan::GetGPUMemoryFragmentationBytes()
{
} /* size: 16 */

// <009EC60D> vulkan/renderdevicevulkan.cpp:8664
// function call: 1
void CRenderDeviceVulkan::IsProfilerAttached()
{
	CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 8668
} /* size: 29, inline expansions: 1 (7 bytes) */

// <009EC38A> vulkan/renderdevicevulkan.cpp:8672
// function calls: 13
void CRenderDeviceVulkan::GetGlobalLateBoundBindlessDescriptorSet()
{
	__uniq_ptr_impl<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::_M_ptr(); // 472
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::get(); // 489
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::operator bool(); // 854
	operator==<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >(const unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >& __x,
													nullptr_t);  // 8674
	__uniq_ptr_impl<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::_M_ptr(); // 472
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::get(); // 465
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::operator->(); // 8681
	CUtlMemory<CBufferedDescriptorSetVulkan::Set, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::operator[](
			int i);  // 27
	CBufferedDescriptorSetVulkan::GetActiveHandle(); // 8681
	CUtlMemory<CBufferedDescriptorSetVulkan::Set, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::operator[](
			int i);  // 27
	CBufferedDescriptorSetVulkan::GetActiveHandle(); // 8678
} /* size: 183, inline expansions: 13 (153 bytes) */

// <00A62DAD> vulkan/renderdevicevulkan.cpp:8687
// variables: 8
// function calls: 30
void CRenderDeviceVulkan::AddDescriptorsToGlobalPerFrameDescriptorSet(int32 nNumDescriptors, const RenderDescriptorDesc_t* pDescriptorDescs)
{
	bool bDescriptorsValid; // 8694
	CRenderDeviceVulkan::EXTDescriptorIndexingEnabled(); // 8689
	{
		int i; // 8695
		{
			const RenderDescriptorDesc_t& oldDesc; // 8697
			CUtlVector<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >& __for_range; // 16943
			iterator __for_begin; // 16954
			iterator __for_end; // 16965
			CUtlMemory<RenderDescriptorDesc_t, int>::Base(); // 112
			CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::Base(); // 102
			CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::begin(); // 8697
			CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::Count(); // 104
			CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::end(); // 8697
		}
	}
	CUtlMemory<RenderDescriptorDesc_t, int>::NumAllocated(); // 782
	CUtlMemory<RenderDescriptorDesc_t, int>::IsGrowable(); // 823
	CUtlMemory<RenderDescriptorDesc_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<RenderDescriptorDesc_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<RenderDescriptorDesc_t, int>::Grow(
		int num);  // 806
	CUtlMemory<RenderDescriptorDesc_t, int>::Base(); // 112
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::Base(); // 368
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::GrowVector(
			int num);  // 1484
	{
		int i; // 1500
		CUtlMemory<RenderDescriptorDesc_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::Element(
			int i);  // 1502
		CopyConstruct<RenderDescriptorDesc_t>(RenderDescriptorDesc_t* pMemory,
							const RenderDescriptorDesc_t& src);  // 1502
	}
	{
		int i; // 1492
		CUtlMemory<RenderDescriptorDesc_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::Element(
			int i);  // 1494
		RenderDescriptorDesc_t::RenderDescriptorDesc_t(); // 1479
		Construct<RenderDescriptorDesc_t>(RenderDescriptorDesc_t* pMemory); // 1494
	}
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const RenderDescriptorDesc_t* pToInsert);  // 1476
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const RenderDescriptorDesc_t* pToInsert);  // 1303
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::AddMultipleToTail(
				int num,
				const RenderDescriptorDesc_t* pToCopy);  // 8708
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::Count(); // 135
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::IsEmpty(); // 8725
	CRenderDeviceVulkan::RecreateGlobalPerFrameDescriptorSet(); // 8710
	CRenderDeviceVulkan::AddDescriptorsToGlobalPerFrameDescriptorSet(
							int32 nNumDescriptors,
							const RenderDescriptorDesc_t* pDescriptorDescs);  // 8687
} /* size: 826, variables: 1, inline expansions: 18 (2649 bytes) */

// <009EC307> vulkan/renderdevicevulkan.cpp:8687
// variables: 6
void CRenderDeviceVulkan::AddDescriptorsToGlobalPerFrameDescriptorSet(int32 nNumDescriptors, const RenderDescriptorDesc_t* pDescriptorDescs)
{
	bool bDescriptorsValid; // 8694
	{
		int i; // 8695
		{
			const RenderDescriptorDesc_t& oldDesc; // 8697
			CUtlVector<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >& __for_range; // 16979
			iterator __for_begin; // 12128
			iterator __for_end; // 12128
		}
	}
} /* size: 0, variables: 1 */

// <009EBC59> vulkan/renderdevicevulkan.cpp:8717
// variables: 2
// function calls: 30
void CRenderDeviceVulkan::UpdateGlobalPerFrameDescriptorBindings(int32 nNumBindings, const RenderDescriptorBinding_t* pDescriptorBindings)
{
	CUtlMemory<RenderDescriptorBinding_t, int>::NumAllocated(); // 782
	CUtlMemory<RenderDescriptorBinding_t, int>::IsGrowable(); // 823
	CUtlMemory<RenderDescriptorBinding_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<RenderDescriptorBinding_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<RenderDescriptorBinding_t, int>::Grow(
		int num);  // 806
	CUtlMemory<RenderDescriptorBinding_t, int>::Base(); // 112
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Base(); // 368
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::GrowVector(
			int num);  // 1484
	{
		int i; // 1500
		CUtlMemory<RenderDescriptorBinding_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Element(
			int i);  // 1502
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 753
		RenderDescriptorBinding_t::RenderDescriptorBinding_t(
						const RenderDescriptorBinding_t  &);  // 1520
		CopyConstruct<RenderDescriptorBinding_t>(RenderDescriptorBinding_t* pMemory,
							const RenderDescriptorBinding_t& src);  // 1502
	}
	{
		int i; // 1492
		CUtlMemory<RenderDescriptorBinding_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Element(
			int i);  // 1494
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 756
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 844
		DescriptorBindParams_t(const union DescriptorBindParams_t* this); // 759
		RenderDescriptorBinding_t::RenderDescriptorBinding_t(); // 1479
		Construct<RenderDescriptorBinding_t>(RenderDescriptorBinding_t* pMemory); // 1494
	}
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const RenderDescriptorBinding_t* pToInsert);  // 1476
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const RenderDescriptorBinding_t* pToInsert);  // 1303
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::AddMultipleToTail(
				int num,
				const RenderDescriptorBinding_t* pToCopy);  // 8719
} /* size: 603, inline expansions: 13 (2103 bytes) */

// <00A697AB> vulkan/renderdevicevulkan.cpp:8723
// variable: 1
// function calls: 2
void CRenderDeviceVulkan::RecreateGlobalPerFrameDescriptorSet()
{
	const uint  nBufferDepth; // 8734
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::Count(); // 135
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::IsEmpty(); // 8725
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00A622DB> vulkan/renderdevicevulkan.cpp:8723
// variables: 6
// function calls: 49
void CRenderDeviceVulkan::RecreateGlobalPerFrameDescriptorSet()
{
	const uint  nBufferDepth; // 8734
	{
	}
	default_delete<CBufferedDescriptorSetVulkan>::operator(
			CBufferedDescriptorSetVulkan* __ptr);  // 204
	__uniq_ptr_impl<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::reset(
		pointer __p);  // 511
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::reset(
		pointer __p);  // 436
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::operator=(
			nullptr_t);  // 8729
	CUtlMemory<RenderDescriptorDesc_t, int>::Base(); // 112
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::Base(); // 973
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::Count(); // 973
	__countl_zero<long unsigned int>(long unsigned int __x); // 388
	__bit_width<long unsigned int>(long unsigned int __x); // 1555
	__lg<long int>(long int __n); // 1907
	{
		RenderDescriptorDesc_t* __i; // 1798
		operator()(const class* __closure,
				const RenderDescriptorDesc_t& lhs,
				const RenderDescriptorDesc_t& rhs); // 240
		operator()<RenderDescriptorDesc_t, RenderDescriptorDesc_t*>(const _Val_comp_iter<CRenderDeviceVulkan::RecreateGlobalPerFrameDescriptorSet()::<lambda(const RenderDescriptorDesc_t&, c this,
										RenderDescriptorDesc_t& __val,
										RenderDescriptorDesc_t* __it); // 1758
		__unguarded_linear_insert<RenderDescriptorDesc_t*, __gnu_cxx::__ops::_Val_comp_iter<CRenderDeviceVulkan::RecreateGlobalPerFrameDescriptorSet()::<lambda(const RenderDescriptorDesc_t&, const RenderDescriptorDesc_t&)> > >(RenderDescriptorDesc_t* __last,
																_Val_comp_iter<CRenderDeviceVulkan::RecreateGlobalPerFrameDescriptorSet()::<lambda(const RenderDescriptorDesc_t&, const R __comp); // 1799
	}
	__unguarded_insertion_sort<RenderDescriptorDesc_t*, __gnu_cxx::__ops::_Iter_comp_iter<CRenderDeviceVulkan::RecreateGlobalPerFrameDescriptorSet()::<lambda(const RenderDescriptorDesc_t&, const RenderDescriptorDesc_t&)> > >(RenderDescriptorDesc_t* __first,
																RenderDescriptorDesc_t* __last,
																_Iter_comp_iter<CRenderDeviceVulkan::RecreateGlobalPerFrameDescriptorSet()::<lambda(const RenderDescriptorDesc_t&, const __comp); // 1819
	__final_insertion_sort<RenderDescriptorDesc_t*, __gnu_cxx::__ops::_Iter_comp_iter<CRenderDeviceVulkan::RecreateGlobalPerFrameDescriptorSet()::<lambda(const RenderDescriptorDesc_t&, const RenderDescriptorDesc_t&)> > >(RenderDescriptorDesc_t* __first,
																RenderDescriptorDesc_t* __last,
																_Iter_comp_iter<CRenderDeviceVulkan::RecreateGlobalPerFrameDescriptorSet()::<lambda(const RenderDescriptorDesc_t&, const __comp); // 1909
	__sort<RenderDescriptorDesc_t*, __gnu_cxx::__ops::_Iter_comp_iter<CRenderDeviceVulkan::RecreateGlobalPerFrameDescriptorSet()::<lambda(const RenderDescriptorDesc_t&, const RenderDescriptorDesc_t&)> > >(RenderDescriptorDesc_t* __first,
																RenderDescriptorDesc_t* __last,
																_Iter_comp_iter<CRenderDeviceVulkan::RecreateGlobalPerFrameDescriptorSet()::<lambda(const RenderDescriptorDesc_t&, const __comp); // 4874
	sort<RenderDescriptorDesc_t*, CRenderDeviceVulkan::RecreateGlobalPerFrameDescriptorSet()::<lambda(const RenderDescriptorDesc_t&, const RenderDescriptorDesc_t&)> >(RenderDescriptorDesc_t* __first,
																RenderDescriptorDesc_t* __last,
																 __comp); // 973
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::SortPredicate<CRenderDeviceVulkan::RecreateGlobalPerFrameDescriptorSet(
																class& predicate);  // 8736
	CUtlMemory<RenderDescriptorDesc_t, int>::Base(); // 112
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::Base(); // 8739
	CUtlVectorBase<RenderDescriptorDesc_t, CUtlMemory<RenderDescriptorDesc_t, int> >::Count(); // 8739
	CUtlMemory<RenderDescriptorBinding_t, int>::Base(); // 112
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Base(); // 8739
	_Head_base<1, std::default_delete<CBufferedDescriptorSetVulkan>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CBufferedDescriptorSetVulkan> >::_Tuple_impl(); // 303
	_Head_base<0, CBufferedDescriptorSetVulkan::_Head_base(); // 303
	_Tuple_impl<0, CBufferedDescriptorSetVulkan::_Tuple_impl(); // 966
	tuple<CBufferedDescriptorSetVulkan::tuple(); // 169
	__uniq_ptr_impl<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::_M_ptr(); // 169
	__uniq_ptr_impl<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::unique_ptr<>(
			pointer __p);  // 1084
	make_unique<CBufferedDescriptorSetVulkan, unsigned int const&, int, RenderDescriptorDesc_t*, int, RenderDescriptorBinding_t*>(void); // 8739
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Count(); // 8739
	default_delete<CBufferedDescriptorSetVulkan>::operator(
			CBufferedDescriptorSetVulkan* __ptr);  // 204
	__uniq_ptr_impl<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::reset(
		pointer __p);  // 184
	__uniq_ptr_impl<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::operator=(
			__uniq_ptr_impl<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >& __u);  // 236
	__uniq_ptr_data<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan>, true, true>::operator=(
			__uniq_ptr_data<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan>, true, true> &);  // 408
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::operator=(
			unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> > &);  // 8739
	{
		CBufferedDescriptorSetVulkan *& __ptr; // 396
		__uniq_ptr_impl<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::_M_ptr(); // 396
	}
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::~unique_ptr(); // 8739
	__uniq_ptr_impl<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::_M_ptr(); // 472
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::get(); // 489
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::operator bool(); // 854
	operator==<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >(const unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >& __x,
													nullptr_t);  // 8740
	{
	}
} /* size: 0, variables: 1, inline expansions: 41 (1597 bytes) */

// <009EBB05> vulkan/renderdevicevulkan.cpp:8723
// variables: 4
void CRenderDeviceVulkan::RecreateGlobalPerFrameDescriptorSet()
{
	const char   __FUNCTION__; // 29279
	const uint  nBufferDepth; // 8734
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8728
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 8740
	}
} /* size: 0, variables: 2 */

// <00A6985B> vulkan/renderdevicevulkan.cpp:8744
// function calls: 7
void CRenderDeviceVulkan::UpdateGlobalPerFrameDescriptorSet()
{
	__uniq_ptr_impl<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::_M_ptr(); // 472
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::get(); // 489
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::operator bool(); // 8747
	CUtlMemory<RenderDescriptorBinding_t, int>::Base(); // 112
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Base(); // 8749
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Count(); // 8749
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::RemoveAll(); // 8751
} /* size: 0, inline expansions: 7 (0 bytes) */

// <009EBAEC> vulkan/renderdevicevulkan.cpp:8744
void CRenderDeviceVulkan::UpdateGlobalPerFrameDescriptorSet()
{
} /* size: 0 */

// <00A69A0C> vulkan/renderdevicevulkan.cpp:8754
// function calls: 4
void CRenderDeviceVulkan::DestroyGlobalPerFrameDescriptorSet()
{
	default_delete<CBufferedDescriptorSetVulkan>::operator(
			CBufferedDescriptorSetVulkan* __ptr);  // 204
	__uniq_ptr_impl<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::reset(
		pointer __p);  // 511
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::reset(
		pointer __p);  // 436
	unique_ptr<CBufferedDescriptorSetVulkan, std::default_delete<CBufferedDescriptorSetVulkan> >::operator=(
			nullptr_t);  // 8756
} /* size: 0, inline expansions: 4 (0 bytes) */

// <009EBAD3> vulkan/renderdevicevulkan.cpp:8754
void CRenderDeviceVulkan::DestroyGlobalPerFrameDescriptorSet()
{
} /* size: 0 */

// <009EB50A> vulkan/renderdevicevulkan.cpp:8764
// variables: 5
// function calls: 20
void CRenderDeviceVulkan::RebakeAllStaticDescriptorSets()
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_8766; // 8766
	{
		CDescriptorSetVulkan* pDescriptorSet; // 8768
		CUtlFixedLinkedList<CDescriptorSetVulkan*>& __for_range; // 14748
		iterator __for_begin; // 11978
		iterator __for_end; // 11978
		CUtlLinkedList<CDescriptorSetVulkan::Head(); // 334
		_CUtlLinkedList_constiterator_t<CUtlLinkedList<CDescriptorSetVulkan::_CUtlLinkedList_constiterator_t(
						const CUtlLinkedList<CDescriptorSetVulkan*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CDesc list,
						IndexType_t index);  // 264
		_CUtlLinkedList_iterator_t<CUtlLinkedList<CDescriptorSetVulkan::_CUtlLinkedList_iterator_t(
						const CUtlLinkedList<CDescriptorSetVulkan*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CDesc list,
						IndexType_t index);  // 334
		CUtlLinkedList<CDescriptorSetVulkan::begin(); // 8768
		_CUtlLinkedList_constiterator_t<CUtlLinkedList<CDescriptorSetVulkan::_CUtlLinkedList_constiterator_t(
						const CUtlLinkedList<CDescriptorSetVulkan*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CDesc list,
						IndexType_t index);  // 264
		_CUtlLinkedList_iterator_t<CUtlLinkedList<CDescriptorSetVulkan::_CUtlLinkedList_iterator_t(
						const CUtlLinkedList<CDescriptorSetVulkan*, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CDesc list,
						IndexType_t index);  // 343
		CUtlLinkedList<CDescriptorSetVulkan::end(); // 8768
		CUtlFixedMemory<UtlLinkedListElem_t<CDescriptorSetVulkan::operator[](
				intp i);  // 482
		CUtlLinkedList<CDescriptorSetVulkan::Element(
			long long int i);  // 317
		_CUtlLinkedList_iterator_t<CUtlLinkedList<CDescriptorSetVulkan::operator*(); // 8768
		CUtlLinkedList<CDescriptorSetVulkan::Next(
			long long int i);  // 272
		_CUtlLinkedList_iterator_t<CUtlLinkedList<CDescriptorSetVulkan::operator++(); // 8768
	}
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 8766
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 8772
} /* size: 253, variables: 1, inline expansions: 8 (565 bytes) */

// <009EB47E> vulkan/renderdevicevulkan.cpp:8777
void CRenderDeviceVulkan::DefragmentGPUMemory(RenderDefragFlags_t defragFlags, bool bAsyncDefrag)
{
} /* size: 35 */

// <009EB2DE> vulkan/renderdevicevulkan.cpp:8789
// variables: 3
void CRenderDeviceVulkan::CheckMinimumRequirements()
{
	const VkPhysicalDeviceLimits& limits; // 8791
	bool bSuccess; // 8792
	{
		char szMinRequirementsNotMet; // 8812
	}
} /* size: 559, variables: 2 */

