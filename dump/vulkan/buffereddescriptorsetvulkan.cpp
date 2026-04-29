
//
// vulkan/buffereddescriptorsetvulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 7
//

// <0044C34A> vulkan/buffereddescriptorsetvulkan.cpp:15
// variables: 7
// function calls: 123
void CBufferedDescriptorSetVulkan::CBufferedDescriptorSetVulkan(int nBufferDepth, int nNumDescriptors, const RenderDescriptorDesc_t* pDescs, int32 nNumBindings, const RenderDescriptorBinding_t* pBindings)
{
	{
		{
			const bool  bFullyRewriteEachFrame; // 22
			{
				int i; // 24
				{
					Set descriptorSet; // 26
					{
					}
				}
			}
		}
	}
	{
		CUtlMemory<CBufferedDescriptorSetVulkan::Set, int>::ValidateGrowSize(); // 475
		CUtlMemory<CBufferedDescriptorSetVulkan::Set, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::CUtlVector(); // 20
		{
			const bool  bFullyRewriteEachFrame; // 22
			{
				int i; // 24
				{
					Set descriptorSet; // 26
					CUtlMemory<RenderDescriptorBinding_t, int>::ValidateGrowSize(); // 475
					CUtlMemory<RenderDescriptorBinding_t, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::CUtlVector(); // 30
					CUtlMemory<CTextureInfoId, int>::ValidateGrowSize(); // 475
					CUtlMemory<CTextureInfoId, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::CUtlVector(); // 30
					Set::Set(); // 26
					CUtlMemory<CUtlHashtableEntry<RenderResourceHandle_t__::ValidateGrowSize(); // 475
					CUtlMemory<CUtlHashtableEntry<RenderResourceHandle_t__::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 178
					CUtlHashtable<RenderResourceHandle_t__::Init(); // 178
					CUtlHashtable<RenderResourceHandle_t__::CUtlHashtable(
							int minimumSize);  // 33
					{
					}
					CUtlMemory<CBufferedDescriptorSetVulkan::Set, int>::NumAllocated(); // 1196
					CUtlMemory<CBufferedDescriptorSetVulkan::Set, int>::Base(); // 112
					CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::Base(); // 368
					CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::ResetDbgInfo(); // 824
					CUtlMemory<CBufferedDescriptorSetVulkan::Set, int>::IsGrowable(); // 823
					CUtlMemory<CBufferedDescriptorSetVulkan::Set, int>::IsExternallyAllocated(); // 859
					CUtlMemory<CBufferedDescriptorSetVulkan::Set, int>::IsExternallyAllocated(); // 861
					CUtlMemory<CBufferedDescriptorSetVulkan::Set, int>::Grow(
						int num);  // 806
					CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::GrowMemory(
							int num);  // 1198
					CUtlMemory<CBufferedDescriptorSetVulkan::Set, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::Element(
						int i);  // 1201
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Count(); // 573
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::RemoveMultipleFromTail(
								int num);  // 1323
					CUtlMemory<RenderDescriptorBinding_t, int>::Base(); // 112
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Base(); // 368
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::GrowMemory(
							int num);  // 784
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::GrowVector(
							int num);  // 1445
					{
						int i; // 1451
						CUtlMemory<RenderDescriptorBinding_t, int>::operator[](
								int i);  // 602
						CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Element(
							int i);  // 1453
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
						Construct<RenderDescriptorBinding_t>(RenderDescriptorBinding_t* pMemory); // 1453
					}
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1437
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1294
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::AddMultipleToTail(
								int num);  // 1319
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::SetCount(
						int count);  // 573
					CUtlMemory<RenderDescriptorBinding_t, int>::Base(); // 112
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Base(); // 102
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::begin(); // 574
					CUtlMemory<RenderDescriptorBinding_t, int>::Base(); // 113
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Base(); // 105
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Count(); // 105
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::end(); // 574
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
					CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 753
					RenderDescriptorBinding_t::operator=(
							const RenderDescriptorBinding_t  &);  // 209
					UtlTraitsCopyRange<RenderDescriptorBinding_t>(const RenderDescriptorBinding_t* pFrom,
											const RenderDescriptorBinding_t* pFromEnd,
											RenderDescriptorBinding_t* pTo);  // 200
					UtlTraitsCopyRange<RenderDescriptorBinding_t>(const RenderDescriptorBinding_t* pFrom,
											const RenderDescriptorBinding_t* pFromEnd,
											RenderDescriptorBinding_t* pTo);  // 574
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::operator=(
							const CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >& other);  // 565
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::operator=(
							const CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >& other);  // 452
					CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::operator=(
							const CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >& src);  // 434
					CUtlMemory<RenderDescriptorBinding_t, int>::ValidateGrowSize(); // 475
					CUtlMemory<RenderDescriptorBinding_t, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 434
					CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::CUtlVector(
							const CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >& src);  // 30
					CUtlMemory<CTextureInfoId, int>::ValidateGrowSize(); // 475
					CUtlMemory<CTextureInfoId, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 434
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Count(); // 573
					CUtlMemory<CTextureInfoId, int>::Base(); // 112
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Base(); // 368
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::GrowMemory(
							int num);  // 784
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::GrowVector(
							int num);  // 1445
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1437
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1294
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::AddMultipleToTail(
								int num);  // 1319
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::SetCount(
						int count);  // 573
					CUtlMemory<CTextureInfoId, int>::Base(); // 113
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Base(); // 105
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Count(); // 105
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::end(); // 574
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 85
					V_memcpy(void* dest,
						const void* src,
						ptrdiff_t count);  // 180
					UtlTraitsCopyRange<CTextureInfoId>(const CTextureInfoId* pFrom,
										const CTextureInfoId* pFromEnd,
										CTextureInfoId* pTo);  // 173
					UtlTraitsCopyRange<CTextureInfoId>(const CTextureInfoId* pFrom,
										const CTextureInfoId* pFromEnd,
										CTextureInfoId* pTo);  // 574
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::operator=(
							const CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >& other);  // 565
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::operator=(
							const CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >& other);  // 452
					CUtlVector<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::operator=(
							const CUtlVector<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >& src);  // 434
					CUtlVector<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::CUtlVector(
							const CUtlVector<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >& src);  // 30
					Set::Set(
						const Set  &);  // 1520
					CopyConstruct<CBufferedDescriptorSetVulkan::Set>(Set* pMemory,
											const Set& src);  // 1201
					CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::AddToTail(
							const Set& src);  // 35
					CUtlMemory<CTextureInfoId, int>::Purge(); // 903
					CUtlMemory<CTextureInfoId, int>::IsExternallyAllocated(); // 905
					CUtlMemory<CTextureInfoId, int>::Purge(); // 1799
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::RemoveAll(); // 1798
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Purge(); // 560
					ValidateAlignment<CTextureInfoId>(void); // 508
					CUtlMemory<CTextureInfoId, int>::Purge(); // 510
					CUtlMemory<CTextureInfoId, int>::~CUtlMemory(); // 562
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::~CUtlVectorBase(); // 410
					CUtlVector<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::~CUtlVector(); // 30
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::RemoveAll(); // 1798
					CUtlMemory<RenderDescriptorBinding_t, int>::IsExternallyAllocated(); // 905
					CUtlMemory<RenderDescriptorBinding_t, int>::Purge(); // 903
					CUtlMemory<RenderDescriptorBinding_t, int>::Purge(); // 1799
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Purge(); // 560
					ValidateAlignment<RenderDescriptorBinding_t>(void); // 508
					CUtlMemory<RenderDescriptorBinding_t, int>::Purge(); // 510
					CUtlMemory<RenderDescriptorBinding_t, int>::~CUtlMemory(); // 562
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::~CUtlVectorBase(); // 410
					CUtlVector<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::~CUtlVector(); // 30
					Set::~Set(); // 36
				}
			}
		}
	}
} /* size: 0 */

// <0044C2A8> vulkan/buffereddescriptorsetvulkan.cpp:15
// variables: 5
void CBufferedDescriptorSetVulkan::CBufferedDescriptorSetVulkan(int nBufferDepth, int nNumDescriptors, const RenderDescriptorDesc_t* pDescs, int32 nNumBindings, const RenderDescriptorBinding_t* pBindings)
{
	const char   __FUNCTION__; // 2103
	{
		const bool  bFullyRewriteEachFrame; // 22
		{
			int i; // 24
			{
				Set descriptorSet; // 26
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 34
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <0044BEA0> vulkan/buffereddescriptorsetvulkan.cpp:39
// variables: 8
// function calls: 17
void CBufferedDescriptorSetVulkan::~CBufferedDescriptorSetVulkan()
{
	{
		Set& set; // 41
		CUtlVector<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >& __for_range; // 15585
		iterator __for_begin; // 15595
		iterator __for_end; // 15605
	}
	{
		Set& set; // 41
		CUtlVector<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >& __for_range; // 15585
		iterator __for_begin; // 15595
		iterator __for_end; // 15605
		CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::Count(); // 104
		CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::end(); // 41
		CUtlMemory<CBufferedDescriptorSetVulkan::Set, int>::Base(); // 112
		CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::Base(); // 102
		CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::begin(); // 41
		ValidateAlignment<CUtlHashtableEntry<RenderResourceHandle_t__*, RenderDescriptorBinding_t> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<RenderResourceHandle_t__::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<RenderResourceHandle_t__::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<RenderResourceHandle_t__::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<RenderResourceHandle_t__::~CUtlMemory(); // 188
		CUtlHashtable<RenderResourceHandle_t__::~CUtlHashtable(); // 47
	}
	CUtlMemory<CBufferedDescriptorSetVulkan::Set, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferedDescriptorSetVulkan::Set, int>::Purge(); // 903
	CUtlMemory<CBufferedDescriptorSetVulkan::Set, int>::Purge(); // 1799
	CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::Purge(); // 560
	CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::~CUtlVector(); // 51
} /* size: 223, inline expansions: 6 (139 bytes) */

// <0044BE38> vulkan/buffereddescriptorsetvulkan.cpp:39
void CBufferedDescriptorSetVulkan::~CBufferedDescriptorSetVulkan()
{
} /* size: 36 */

// <0044BDEC> vulkan/buffereddescriptorsetvulkan.cpp:39
// variables: 4
void CBufferedDescriptorSetVulkan::~CBufferedDescriptorSetVulkan()
{
	{
		Set& set; // 41
		CUtlVector<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >& __for_range; // 15617
		iterator __for_begin; // 41279
		iterator __for_end; // 41279
	}
} /* size: 0 */

// <0044A5BF> vulkan/buffereddescriptorsetvulkan.cpp:53
// variables: 13
// function calls: 96
void CBufferedDescriptorSetVulkan::UpdateBindingsAndSwitch(int32 nNumDescriptorBindings, const RenderDescriptorBinding_t* pDescriptorBindings)
{
	const CTextureInfoId  invalidId; // 55
	Set& activeSet; // 57
	const char   __FUNCTION__; // 2082
	{
		int nSet; // 62
		{
			Set& set; // 69
			{
				int i; // 75
				{
					const CTextureBase* pTexture; // 78
					{
						RenderResourceHandle_t hBuffer; // 88
						{
							CVertexBufferVulkan* pBuffer; // 92
							ThreadInterlockedExchangeAdd(volatile int32* p,
											int32 value);  // 660
							CInterlockedIntT<int, 4>::AtomicAdd(
									int add);  // 36
							CDescriptorSetReferenced::AddDescriptorSetRef(); // 93
							CUtlMemory<CUtlHashtableEntry<RenderResourceHandle_t__::operator[](
									int i);  // 720
							CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
							CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
									const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 753
							RenderDescriptorBinding_t::RenderDescriptorBinding_t(
											const RenderDescriptorBinding_t  &);  // 64
							CUtlKeyValuePair<RenderResourceHandle_t__::CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t>(
																RenderResourceHandle_t__* const& k,
																const RenderDescriptorBinding_t& v);  // 1514
							Construct<CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t>, RenderResourceHandle_t__*&, const RenderDescriptorBinding_t&>(CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t>* pMemory); // 720
							CUtlHashtable<RenderResourceHandle_t__::DoInsert<RenderResourceHandle_t__*>(
												RenderResourceHandle_t__* k,
												Arg_t v,
												unsigned int h,
												bool* pDidInsert);  // 249
							CUtlHashtable<RenderResourceHandle_t__::Insert(
								KeyArg_t k,
								ValueArg_t v,
								bool* pDidInsert);  // 94
						}
						Mix32HashFunctor::operator(
								uint32 n);  // 139
						PointerHashFunctor::operator(
								const void* s);  // 218
						CUtlHashtable<RenderResourceHandle_t__::Find(
							KeyArg_t k);  // 90
					}
					CUtlMemory<CTextureInfoId, int>::NumAllocated(); // 1196
					CUtlMemory<CTextureInfoId, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Element(
						int i);  // 1201
					CopyConstruct<CTextureInfoId>(CTextureInfoId* pMemory,
									const CTextureInfoId& src);  // 1201
					CUtlMemory<CTextureInfoId, int>::Base(); // 112
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Base(); // 368
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::AddToTail(
							const CTextureInfoId& src);  // 79
					CUtlMemory<RenderDescriptorBinding_t, int>::NumAllocated(); // 1196
					CUtlMemory<RenderDescriptorBinding_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Element(
						int i);  // 1201
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 753
					RenderDescriptorBinding_t::RenderDescriptorBinding_t(
									const RenderDescriptorBinding_t  &);  // 1520
					CopyConstruct<RenderDescriptorBinding_t>(RenderDescriptorBinding_t* pMemory,
										const RenderDescriptorBinding_t& src);  // 1201
					CUtlMemory<RenderDescriptorBinding_t, int>::Base(); // 112
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Base(); // 368
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::AddToTail(
							const RenderDescriptorBinding_t& src);  // 77
					CWeakHandle<InfoForResourceTypeCTextureBase>::operator const ResourceHandleInfo_t<InfoForResourceTypeCTextureBase>::RuntimeClass_t*(); // 78
				}
			}
			CUtlMemory<CBufferedDescriptorSetVulkan::Set, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::operator[](
					int i);  // 69
			CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Count(); // 71
			CUtlMemory<RenderDescriptorBinding_t, int>::IsGrowable(); // 881
			CUtlMemory<RenderDescriptorBinding_t, int>::IsExternallyAllocated(); // 888
			CUtlMemory<RenderDescriptorBinding_t, int>::EnsureCapacity(
					int num);  // 1006
			CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::ResetDbgInfo(); // 1024
			CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::EnsureCapacity(
					int num);  // 71
			CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Count(); // 72
			CUtlMemory<CTextureInfoId, int>::IsGrowable(); // 881
			CUtlMemory<CTextureInfoId, int>::IsExternallyAllocated(); // 888
			CUtlMemory<CTextureInfoId, int>::EnsureCapacity(
					int num);  // 1006
			CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::ResetDbgInfo(); // 1024
			CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::EnsureCapacity(
					int num);  // 72
		}
		CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::Count(); // 62
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 104
	}
	{
		int i; // 109
		{
			const CTextureInfoId& texId; // 111
			{
				const CTextureBase* pTexture; // 115
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 163
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 161
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 172
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 175
				TextureSpecification_t::ComputeTextureDimension(); // 483
				CTextureInfoId::GetDiskSpec(); // 388
				CTextureBase::GetDiskSpec(); // 483
				CTextureBase::ComputeTextureDimension(); // 118
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
				CTextureInfoId::GetResourceHandle(); // 114
				CUtlMemory<RenderDescriptorBinding_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::operator[](
						int i);  // 114
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 114
				CUtlMemory<RenderDescriptorBinding_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::operator[](
						int i);  // 115
				CInterlockedIntT<int, 4>::operator int(); // 282
				ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 115
				CUtlMemory<RenderDescriptorBinding_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::operator[](
						int i);  // 122
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 122
			}
			CTextureInfoId::operator==(
					const CTextureInfoId& other);  // 280
			CTextureInfoId::operator!=(
					const CTextureInfoId& other);  // 112
			CUtlMemory<CTextureInfoId, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::operator[](
					int i);  // 111
		}
		CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Count(); // 109
	}
	CUtlMemory<CBufferedDescriptorSetVulkan::Set, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::operator[](
			int i);  // 57
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Count(); // 102
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Count(); // 104
	CUtlMemory<RenderDescriptorBinding_t, int>::Base(); // 112
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::Base(); // 132
	CDescriptorSetVulkan::GetDescriptorDescCount(); // 127
	CDescriptorSetVulkan::GetDescriptorDesc(); // 127
	CDescriptorSetVulkan::GetDescriptorSet(); // 127
	VulkanDevice(void); // 127
	CUtlVectorBase<RenderDescriptorBinding_t, CUtlMemory<RenderDescriptorBinding_t, int> >::RemoveAll(); // 140
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::RemoveAll(); // 141
	CDescriptorSetVulkan::GetDescriptorDescCount(); // 148
	CDescriptorSetVulkan::GetDescriptorDesc(); // 148
	CDescriptorSetVulkan::GetDescriptorSet(); // 148
	VulkanDevice(void); // 148
	CUtlVectorBase<CBufferedDescriptorSetVulkan::Set, CUtlMemory<CBufferedDescriptorSetVulkan::Set, int> >::Count(); // 158
} /* size: 0, variables: 3, inline expansions: 17 (46 bytes) */

// <0044A00D> vulkan/buffereddescriptorsetvulkan.cpp:161
// variables: 9
// function calls: 23
void CBufferedDescriptorSetVulkan::ReleaseReferenceBuffers(const ReferencedBuffers_t& referencedBuffers)
{
	{
		const RenderDescriptorBinding_t& binding; // 163
		const CUtlHashtable<RenderResourceHandle_t__*, RenderDescriptorBinding_t, DefaultHashFunctor<RenderResourceHandle_t__*>, Defaul& __for_range; // 56790
		const_iterator __for_begin; // 38326
		const_iterator __for_end; // 38326
		{
			RenderResourceHandle_t hBuffer; // 165
			CVertexBufferVulkan* pBuffer; // 166
			int nCount; // 167
			CUtlMemory<CUtlHashtableEntry<RenderResourceHandle_t__::operator[](
					int i);  // 294
			CUtlHashtable<RenderResourceHandle_t__::Element(
				handle_t idx);  // 372
			const_iterator::operator*(); // 163
			ThreadInterlockedExchangeAdd(volatile int32* p,
							int32 value);  // 660
			CInterlockedIntT<int, 4>::AtomicAdd(
					int add);  // 39
			{
			}
			CDescriptorSetReferenced::ReleaseDescriptorSetRef(); // 37
			CDescriptorSetReferenced::ReleaseDescriptorSetRef(); // 167
			CDescriptorSetReferenced::IsDeleted(); // 168
		}
		CUtlMemory<CUtlHashtableEntry<RenderResourceHandle_t__::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<RenderResourceHandle_t__::Count(); // 915
			CUtlHashtableEntry<RenderResourceHandle_t__::IsValid(); // 917
		}
		CUtlHashtable<RenderResourceHandle_t__::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<RenderResourceHandle_t__::FirstHandle(); // 389
		const_iterator::const_iterator(
				const CUtlHashtable<RenderResourceHandle_t__*, RenderDescriptorBinding_t, DefaultHashFunctor<RenderResourceHandle_t__*>,  pTable,
				UtlHashHandle_t hHandle);  // 389
		CUtlHashtable<RenderResourceHandle_t__::begin(); // 163
		const_iterator::const_iterator(
				const CUtlHashtable<RenderResourceHandle_t__*, RenderDescriptorBinding_t, DefaultHashFunctor<RenderResourceHandle_t__*>,  pTable,
				UtlHashHandle_t hHandle);  // 390
		CUtlHashtable<RenderResourceHandle_t__::end(); // 163
		const_iterator::operator!=(
				const const_iterator& other);  // 163
		CUtlMemory<CUtlHashtableEntry<RenderResourceHandle_t__::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<RenderResourceHandle_t__::Count(); // 915
			CUtlHashtableEntry<RenderResourceHandle_t__::IsValid(); // 917
		}
		CUtlHashtable<RenderResourceHandle_t__::NextHandle(
				handle_t start);  // 376
		const_iterator::operator++(); // 163
	}
} /* size: 0 */

