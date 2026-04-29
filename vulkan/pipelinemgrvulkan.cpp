
//
// vulkan/pipelinemgrvulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 72
//

// <007400E0> vulkan/pipelinemgrvulkan.cpp:40
uint64 ComputePipelineCacheFileHash(const void* pData, size_t nBytes)
{
} /* size: 0 */

// <007400A7> vulkan/pipelinemgrvulkan.cpp:49
inline void UpdatePipelineCreateHash(XXH_NAMESPACEXXH3_state_t& state, const void* pData, size_t nBytes)
{
} /* size: 0 */

// <0074005F> vulkan/pipelinemgrvulkan.cpp:67
// variables: 2
VkShaderStageFlags GetVKShaderStageFlags(RenderShaderType_t nShaderType)
{
	const char   __FUNCTION__; // 57072
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 86
	}
} /* size: 0, variables: 1 */

// <0073FEE6> vulkan/pipelinemgrvulkan.cpp:144
// variables: 3
const char* GetShaderStageName(RenderShaderType_t nShaderType)
{
	const char* pShaderTypeName; // 146
	const char   __FUNCTION__; // 56996
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 156
	}
} /* size: 0, variables: 2 */

// <0073FEB6> vulkan/pipelinemgrvulkan.cpp:160
size_t ComputeOffset(const void* pDescriptorInfoAddr, const void* pBaseAddr)
{
} /* size: 0 */

// <0073FE86> vulkan/pipelinemgrvulkan.cpp:166
// variable: 1
VfxProgram_t GetProgramType(RenderShaderType_t eShaderType)
{
	VfxProgram_t programType; // 168
} /* size: 0, variables: 1 */

// <0073FE62> vulkan/pipelinemgrvulkan.cpp:195
int32 GetDynamicDescriptorSetIndex(RenderShaderType_t eShaderType)
{
} /* size: 0 */

// <0073FD1F> vulkan/pipelinemgrvulkan.cpp:242
// variables: 2
uint32 GetTopologyClass(VkPrimitiveTopology nPrimitiveTopology)
{
	const char   __FUNCTION__; // 56942
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 262
	}
} /* size: 0, variables: 1 */

// <00750831> vulkan/pipelinemgrvulkan.cpp:270
// variables: 2
void PipelineCreateHashFunctor_t::operator(const PipelineCreateInfo_t& pipelineCreateInfo)
{
	XXH_NAMESPACEXXH3_state_t hashState; // 277
	const uint64  nHash; // 383
} /* size: 0, variables: 2 */

// <0074A553> vulkan/pipelinemgrvulkan.cpp:270
// variables: 127
// function calls: 399
void PipelineCreateInfo_t& pipelineCreateInfo, const PipelineCreateHashFunctor_t::operator()(const PipelineCreateInfo_t& pipelineCreateInfo, const PipelineCreateHashFunctor_t* this)
{
	XXH_NAMESPACEXXH3_state_t hashState; // 277
	const uint64  nHash; // 383
	{
		const int  nbRounds; // 5301
		const __m128i  seed; // 5316
		int i; // 5318
		const void* src16; // 5320
		__m128i* dst16; // 5321
		_mm_load_si128(const __m128i* __P); // 5334
		_mm_add_epi64(__m128i __A,
				__m128i __B);  // 5334
	}
	XXH3_initCustomSecret_sse2(void* customSecret,
					xxh_u64 seed64);  // 6646
	memset(void* __dest,
		int __ch,
		size_t __len);  // 6602
	XXH3_reset_internal(XXH_NAMESPACEXXH3_state_t* statePtr,
				XXH64_hash_t seed,
				const void* secret,
				size_t secretSize);  // 6647
	XXH_INLINE_XXH3_64bits_reset_withSeed(XXH_NAMESPACEXXH3_state_t* statePtr,
						XXH64_hash_t seed);  // 278
	CRenderDeviceVulkan::EXTExtendedDynamicStateEnabled(); // 284
	CRenderDeviceVulkan::EXTExtendedDynamicState2Enabled(); // 284
	{
		CUtlVectorFixed<unsigned int, 29> stateToHash; // 308
		AlignedByteArrayExplicit_t<29, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<29, unsigned int>::AlignedByteArray_t(); // 256
		CUtlMemoryFixed<unsigned int, 29>::CUtlMemoryFixed(
				int nGrowSize,
				int nInitSize);  // 527
		AlignedByteArrayExplicit_t<29, unsigned int, 4>::Base(); // 268
		CUtlMemoryFixed<unsigned int, 29>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::Base(); // 368
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 467
		CUtlVectorFixed<unsigned int, 29>::CUtlVectorFixed(
				int growSize,
				int initCapacity);  // 308
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 319
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 309
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 317
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 314
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 310
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 311
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 312
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 313
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 316
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 318
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 326
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 327
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 340
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 328
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 329
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 330
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 331
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 332
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 333
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 334
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 335
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 336
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 337
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 338
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 339
		CRenderDeviceVulkan::EXTExtendedDynamicState2Enabled(); // 349
		CRenderDeviceVulkan::EXTExtendedDynamicState3Enabled(); // 355
		AlignedByteArrayExplicit_t<29, unsigned int, 4>::Base(); // 268
		CUtlMemoryFixed<unsigned int, 29>::Base(); // 272
		CUtlMemoryFixed<unsigned int, 29>::operator[](
				int i);  // 602
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::Element(
			int i);  // 1201
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		AlignedByteArrayExplicit_t<29, unsigned int, 4>::Base(); // 268
		CUtlMemoryFixed<unsigned int, 29>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::Base(); // 368
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::ResetDbgInfo(); // 824
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 357
		AlignedByteArrayExplicit_t<29, unsigned int, 4>::Base(); // 268
		CUtlMemoryFixed<unsigned int, 29>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::Base(); // 368
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::ResetDbgInfo(); // 824
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::GrowMemory(
				int num);  // 1198
		AlignedByteArrayExplicit_t<29, unsigned int, 4>::Base(); // 268
		CUtlMemoryFixed<unsigned int, 29>::Base(); // 272
		CUtlMemoryFixed<unsigned int, 29>::operator[](
				int i);  // 602
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::Element(
			int i);  // 1201
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 358
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::Count(); // 361
		AlignedByteArrayExplicit_t<29, unsigned int, 4>::Base(); // 268
		CUtlMemoryFixed<unsigned int, 29>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::Base(); // 361
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 53
		UpdatePipelineCreateHash(XXH_NAMESPACEXXH3_state_t& state,
					const void* pData,
					size_t nBytes);  // 361
		AlignedByteArrayExplicit_t<29, unsigned int, 4>::Base(); // 268
		CUtlMemoryFixed<unsigned int, 29>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::Base(); // 368
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::ResetDbgInfo(); // 824
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::GrowMemory(
				int num);  // 1249
		AlignedByteArrayExplicit_t<29, unsigned int, 4>::Base(); // 268
		CUtlMemoryFixed<unsigned int, 29>::Base(); // 272
		CUtlMemoryFixed<unsigned int, 29>::operator[](
				int i);  // 602
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::Element(
			int i);  // 1252
		Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				unsigned int& src);  // 345
		AlignedByteArrayExplicit_t<29, unsigned int, 4>::Base(); // 268
		CUtlMemoryFixed<unsigned int, 29>::Base(); // 272
		CUtlMemoryFixed<unsigned int, 29>::operator[](
				int i);  // 602
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::Element(
			int i);  // 1201
		CopyConstruct<unsigned int>(unsigned int* pMemory,
						const unsigned int& src);  // 1201
		AlignedByteArrayExplicit_t<29, unsigned int, 4>::Base(); // 268
		CUtlMemoryFixed<unsigned int, 29>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::Base(); // 368
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::ResetDbgInfo(); // 824
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::AddToTail(
				const unsigned int& src);  // 351
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 258
		CUtlMemoryFixed<unsigned int, 29>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 29> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<unsigned int, 29>::~CUtlVectorFixed(); // 362
	}
	{
		int nSizeToCompare; // 293
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 53
		UpdatePipelineCreateHash(XXH_NAMESPACEXXH3_state_t& state,
					const void* pData,
					size_t nBytes);  // 294
		XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
						const void* input,
						size_t len);  // 53
		UpdatePipelineCreateHash(XXH_NAMESPACEXXH3_state_t& state,
					const void* pData,
					size_t nBytes);  // 302
	}
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 53
	UpdatePipelineCreateHash(XXH_NAMESPACEXXH3_state_t& state,
				const void* pData,
				size_t nBytes);  // 365
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 53
	UpdatePipelineCreateHash(XXH_NAMESPACEXXH3_state_t& state,
				const void* pData,
				size_t nBytes);  // 366
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 53
	UpdatePipelineCreateHash(XXH_NAMESPACEXXH3_state_t& state,
				const void* pData,
				size_t nBytes);  // 367
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 53
	UpdatePipelineCreateHash(XXH_NAMESPACEXXH3_state_t& state,
				const void* pData,
				size_t nBytes);  // 371
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 53
	UpdatePipelineCreateHash(XXH_NAMESPACEXXH3_state_t& state,
				const void* pData,
				size_t nBytes);  // 372
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 53
	UpdatePipelineCreateHash(XXH_NAMESPACEXXH3_state_t& state,
				const void* pData,
				size_t nBytes);  // 373
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 53
	UpdatePipelineCreateHash(XXH_NAMESPACEXXH3_state_t& state,
				const void* pData,
				size_t nBytes);  // 374
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 53
	UpdatePipelineCreateHash(XXH_NAMESPACEXXH3_state_t& state,
				const void* pData,
				size_t nBytes);  // 379
	XXH_INLINE_XXH3_64bits_update(XXH_NAMESPACEXXH3_state_t* state,
					const void* input,
					size_t len);  // 53
	UpdatePipelineCreateHash(XXH_NAMESPACEXXH3_state_t& state,
				const void* pData,
				size_t nBytes);  // 382
	{
		XXH64_hash_t acc; // 6865
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 6835
		{
			const size_t  catchupSize; // 6848
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 6850
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 6851
		}
		{
			const size_t  nbStripes; // 6838
			size_t nbStripesSoFar; // 6839
			{
				size_t nbStripesThisIter; // 6692
				{
					const __m128i* xacc; // 5272
					const __m128i* xsecret; // 5275
					const __m128i  prime32; // 5276
					size_t i; // 5278
					{
						const __m128i  acc_vec; // 5281
						const __m128i  shifted; // 5282
						const __m128i  data_vec; // 5283
						const __m128i  key_vec; // 5285
						const __m128i  data_key; // 5286
						const __m128i  data_key_hi; // 5289
						const __m128i  prod_lo; // 5290
						const __m128i  prod_hi; // 5291
						_mm_mul_epu32(__m128i __A,
								__m128i __B);  // 5290
						_mm_srli_epi64(__m128i __A,
								int __B);  // 5282
						_mm_xor_si128(__m128i __A,
								__m128i __B);  // 5286
						_mm_xor_si128(__m128i __A,
								__m128i __B);  // 5283
						_mm_loadu_si128(const __m128i_u* __P); // 5285
						_mm_shuffle_epi32(__m128i __A,
									const int  __mask);  // 5289
						_mm_mul_epu32(__m128i __A,
								__m128i __B);  // 5291
						_mm_slli_epi64(__m128i __A,
								int __B);  // 5292
						_mm_add_epi64(__m128i __A,
								__m128i __B);  // 5292
					}
				}
				XXH3_scrambleAcc_sse2(void* acc,
							const void* secret);  // 6697
				{
					const xxh_u8* in; // 5266
					{
						const __m128i* xacc; // 5239
						const __m128i* xinput; // 5242
						const __m128i* xsecret; // 5245
						size_t i; // 5247
						{
							const __m128i  data_vec; // 5250
							const __m128i  key_vec; // 5252
							const __m128i  data_key; // 5254
							const __m128i  data_key_lo; // 5256
							const __m128i  product; // 5258
							const __m128i  data_swap; // 5260
							const __m128i  sum; // 5261
							_mm_loadu_si128(const __m128i_u* __P); // 5250
							_mm_loadu_si128(const __m128i_u* __P); // 5252
							_mm_xor_si128(__m128i __A,
									__m128i __B);  // 5254
							_mm_shuffle_epi32(__m128i __A,
										const int  __mask);  // 5256
							_mm_mul_epu32(__m128i __A,
									__m128i __B);  // 5258
							_mm_shuffle_epi32(__m128i __A,
										const int  __mask);  // 5260
							_mm_add_epi64(__m128i __A,
									__m128i __B);  // 5261
							_mm_add_epi64(__m128i __A,
									__m128i __B);  // 5263
						}
					}
					XXH3_accumulate_512_sse2(void* acc,
								const void* input,
								const void* secret);  // 5266
				}
				XXH3_accumulate_sse2(xxh_u64* acc,
							const xxh_u8* input,
							const xxh_u8* secret,
							size_t nbStripes);  // 6696
			}
			{
				const xxh_u8* in; // 5266
				{
					const __m128i* xacc; // 5239
					const __m128i* xinput; // 5242
					const __m128i* xsecret; // 5245
					size_t i; // 5247
					{
						const __m128i  data_vec; // 5250
						const __m128i  key_vec; // 5252
						const __m128i  data_key; // 5254
						const __m128i  data_key_lo; // 5256
						const __m128i  product; // 5258
						const __m128i  data_swap; // 5260
						const __m128i  sum; // 5261
						_mm_loadu_si128(const __m128i_u* __P); // 5250
						_mm_loadu_si128(const __m128i_u* __P); // 5252
						_mm_xor_si128(__m128i __A,
								__m128i __B);  // 5254
						_mm_shuffle_epi32(__m128i __A,
									const int  __mask);  // 5256
						_mm_mul_epu32(__m128i __A,
								__m128i __B);  // 5258
						_mm_shuffle_epi32(__m128i __A,
									const int  __mask);  // 5260
						_mm_add_epi64(__m128i __A,
								__m128i __B);  // 5261
						_mm_add_epi64(__m128i __A,
								__m128i __B);  // 5263
					}
				}
				XXH3_accumulate_512_sse2(void* acc,
							const void* input,
							const void* secret);  // 5266
			}
			XXH3_accumulate_sse2(xxh_u64* acc,
						const xxh_u8* input,
						const xxh_u8* secret,
						size_t nbStripes);  // 6708
			XXH3_consumeStripes(xxh_u64* acc,
						size_t* nbStripesSoFarPtr,
						size_t nbStripesPerBlock,
						const xxh_u8* input,
						size_t nbStripes,
						const xxh_u8* secret,
						size_t secretLimit,
						XXH3_f_accumulate f_acc,
						XXH3_f_scrambleAcc f_scramble);  // 6840
		}
		{
			const __m128i* xacc; // 5239
			const __m128i* xinput; // 5242
			const __m128i* xsecret; // 5245
			size_t i; // 5247
			{
				const __m128i  data_vec; // 5250
				const __m128i  key_vec; // 5252
				const __m128i  data_key; // 5254
				const __m128i  data_key_lo; // 5256
				const __m128i  product; // 5258
				const __m128i  data_swap; // 5260
				const __m128i  sum; // 5261
				_mm_loadu_si128(const __m128i_u* __P); // 5250
				_mm_loadu_si128(const __m128i_u* __P); // 5252
				_mm_xor_si128(__m128i __A,
						__m128i __B);  // 5254
				_mm_shuffle_epi32(__m128i __A,
							const int  __mask);  // 5256
				_mm_mul_epu32(__m128i __A,
						__m128i __B);  // 5258
				_mm_shuffle_epi32(__m128i __A,
							const int  __mask);  // 5260
				_mm_add_epi64(__m128i __A,
						__m128i __B);  // 5261
				_mm_add_epi64(__m128i __A,
						__m128i __B);  // 5263
			}
		}
		XXH3_accumulate_512_sse2(void* acc,
					const void* input,
					const void* secret);  // 6855
		XXH3_digest_long(XXH64_hash_t* acc,
				const XXH_NAMESPACEXXH3_state_t* state,
				const unsigned char* secret);  // 6866
		XXH3_finalizeLong_64b(const xxh_u64* acc,
					const xxh_u8* secret,
					xxh_u64 len);  // 6867
	}
	{
		const xxh_u64  bitflip1; // 4743
		const xxh_u64  bitflip2; // 4744
		const xxh_u64  input_lo; // 4745
		const xxh_u64  input_hi; // 4746
		const xxh_u64  acc; // 4747
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4743
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4743
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4744
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4744
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4745
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4746
		XXH_mult64to128(xxh_u64 lhs,
				xxh_u64 rhs);  // 4627
		XXH3_mul128_fold64(xxh_u64 lhs,
					xxh_u64 rhs);  // 4749
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH3_avalanche(xxh_u64 h64); // 4750
	}
	XXH3_len_9to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4758
	{
		const xxh_u32  input1; // 4728
		const xxh_u32  input2; // 4729
		const xxh_u64  bitflip; // 4730
		const xxh_u64  input64; // 4731
		const xxh_u64  keyed; // 4732
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4728
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4729
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4730
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4730
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4662
		XXH3_rrmxmx(xxh_u64 h64,
				xxh_u64 len);  // 4733
	}
	XXH3_len_4to8_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4759
	XXH_read64(const void* ptr); // 3466
	XXH_readLE64(const void* ptr); // 4761
	XXH_read64(const void* ptr); // 3466
	XXH_readLE64(const void* ptr); // 4761
	XXH64_avalanche(xxh_u64 hash); // 4761
	{
		const xxh_u8  c1; // 4710
		const xxh_u8  c2; // 4711
		const xxh_u8  c3; // 4712
		const xxh_u32  combined; // 4713
		const xxh_u64  bitflip; // 4715
		const xxh_u64  keyed; // 4716
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4715
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4715
		XXH64_avalanche(xxh_u64 hash); // 4717
	}
	XXH3_len_1to3_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4760
	XXH3_len_0to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 6441
	{
		xxh_u64 acc; // 4832
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 4856
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4844
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4845
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4847
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4848
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4850
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4851
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4853
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4818
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4817
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4854
	}
	XXH3_len_17to128_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				size_t secretSize,
				XXH64_hash_t seed);  // 6443
	XXH3_64bits_internal(const void* input,
				size_t len,
				XXH64_hash_t seed64,
				const void* secret,
				size_t secretLen,
				XXH3_hashLong64_f f_hashLong);  // 6462
	XXH_INLINE_XXH3_64bits_withSecret(const void* input,
						size_t length,
						const void* secret,
						size_t secretSize);  // 6872
	{
		const xxh_u64  bitflip1; // 4743
		const xxh_u64  bitflip2; // 4744
		const xxh_u64  input_lo; // 4745
		const xxh_u64  input_hi; // 4746
		const xxh_u64  acc; // 4747
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4745
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4746
	}
	XXH3_len_9to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4758
	{
		const xxh_u32  input1; // 4728
		const xxh_u32  input2; // 4729
		const xxh_u64  bitflip; // 4730
		const xxh_u64  input64; // 4731
		const xxh_u64  keyed; // 4732
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4728
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4729
		XXH3_rrmxmx(xxh_u64 h64,
				xxh_u64 len);  // 4733
	}
	XXH3_len_4to8_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4759
	{
		const xxh_u8  c1; // 4710
		const xxh_u8  c2; // 4711
		const xxh_u8  c3; // 4712
		const xxh_u32  combined; // 4713
		const xxh_u64  bitflip; // 4715
		const xxh_u64  keyed; // 4716
		XXH64_avalanche(xxh_u64 hash); // 4717
	}
	XXH3_len_1to3_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4760
	XXH3_len_0to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 6441
	{
		xxh_u64 acc; // 4832
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4844
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4845
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4847
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4848
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4850
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4851
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4853
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4854
	}
	XXH3_len_17to128_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				size_t secretSize,
				XXH64_hash_t seed);  // 6443
	XXH3_64bits_internal(const void* input,
				size_t len,
				XXH64_hash_t seed64,
				const void* secret,
				size_t secretLen,
				XXH3_hashLong64_f f_hashLong);  // 6469
	XXH_INLINE_XXH3_64bits_withSeed(const void* input,
					size_t length,
					XXH64_hash_t seed);  // 6871
	XXH_INLINE_XXH3_64bits_digest(const XXH_NAMESPACEXXH3_state_t* state); // 383
} /* size: 3935, variables: 2, inline expansions: 44 (8162 bytes) */

// <0073FC85> vulkan/pipelinemgrvulkan.cpp:270
// variables: 4
void PipelineCreateHashFunctor_t::operator(const PipelineCreateInfo_t& pipelineCreateInfo)
{
	XXH_NAMESPACEXXH3_state_t hashState; // 277
	const uint64  nHash; // 383
	{
		int nSizeToCompare; // 293
	}
	{
		CUtlVectorFixed<unsigned int, 29> stateToHash; // 308
	}
} /* size: 0, variables: 2 */

// <0073FBB4> vulkan/pipelinemgrvulkan.cpp:395
// variables: 2
// function call: 1
void CPipelineVulkan::CPipelineVulkan()
{
	{
		uint32_t nShader; // 397
	}
	PipelineCreateInfo_t::PipelineCreateInfo_t(); // 395
	{
		uint32_t nShader; // 397
	}
} /* size: 72, inline expansions: 1 (11 bytes) */

// <0073FB8C> vulkan/pipelinemgrvulkan.cpp:395
// variable: 1
void CPipelineVulkan::CPipelineVulkan()
{
	{
		uint32_t nShader; // 397
	}
} /* size: 0 */

// <0073FB5D> vulkan/pipelinemgrvulkan.cpp:409
void CPipelineVulkan::~CPipelineVulkan()
{
} /* size: 5 */

// <0073FAD6> vulkan/pipelinemgrvulkan.cpp:409
// function call: 1
void CPipelineVulkan::~CPipelineVulkan()
{
	CPipelineVulkan::~CPipelineVulkan(); // 411
} /* size: 14, inline expansions: 1 (0 bytes) */

// <0073F3BC> vulkan/pipelinemgrvulkan.cpp:416
// variables: 5
// function calls: 22
void CPipelineVulkan::Reset()
{
	{
		CAutoLockStaticDescriptorSet autoLockStaticDescriptorSet; // 451
		const CDescriptorSetVulkan* pDefaultStaticDescriptorSet; // 452
		VkDescriptorSet pDefaultDescriptorSet; // 453
		{
			int32 nDescriptor; // 454
		}
		CRenderDeviceVulkan::GetDefaultDescriptorSet(); // 451
		CAutoLockStaticDescriptorSet::CAutoLockStaticDescriptorSet(
						CRenderDeviceVulkan* pDevice,
						const RenderDescriptorSetHandle_t  hDescriptorSet);  // 451
		CDescriptorSetVulkan::GetDescriptorSet(); // 453
		CAutoLockStaticDescriptorSet::~CAutoLockStaticDescriptorSet(); // 458
	}
	{
		int32 nDescriptorSet; // 461
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 426
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 422
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 434
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 432
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 435
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 436
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 447
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 446
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 469
} /* size: 436, inline expansions: 18 (360 bytes) */

// <00750898> vulkan/pipelinemgrvulkan.cpp:477
// variables: 3
// function calls: 3
void CPipelineVulkan::ResetDefaultCBBindings()
{
	{
		ConstantBuffer_t* pBuf; // 1241
		ConstantBuffer_t::GetViewAlignedSize(); // 1243
	}
	CRenderDeviceVulkan::GetDefaultCBDescriptor(
				VkDescriptorBufferInfo* pBufferInfo);  // 488
	{
		uint32_t nShader; // 490
		{
			int8_t nCB; // 492
		}
	}
	CPipelineVulkan::ResetDefaultCBBindings(); // 477
} /* size: 203, inline expansions: 2 (189 bytes) */

// <0073F385> vulkan/pipelinemgrvulkan.cpp:477
// variables: 2
void CPipelineVulkan::ResetDefaultCBBindings()
{
	{
		uint32_t nShader; // 490
		{
			int8_t nCB; // 492
		}
	}
} /* size: 0 */

// <007473D0> vulkan/pipelinemgrvulkan.cpp:502
// variables: 3
// function calls: 14
void SetPipelineDebugName(const char* pDebugName, VkPipeline pPipeline)
{
	CUtlString strDebugName; // 516
	const char* pVfxStr; // 519
	CUtlString::CUtlString(
			const char* pString);  // 516
	CUtlString::Get(); // 99
	CUtlString::String(); // 519
	strstr(const char* __haystack,
		const char* __needle);  // 247
	V_strstr(const char* s1,
		const char* search);  // 519
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 522
	CUtlString::~CUtlString(); // 522
	CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 525
	{
		VkDebugUtilsObjectNameInfoEXT objectNameInfo; // 527
		CUtlString::Get(); // 531
		VulkanDevice(void); // 532
	}
	CUtlString::~CUtlString(); // 535
} /* size: 429, variables: 2, inline expansions: 12 (247 bytes) */

// <0073F332> vulkan/pipelinemgrvulkan.cpp:502
// variables: 3
void SetPipelineDebugName(const char* pDebugName, VkPipeline pPipeline)
{
	CUtlString strDebugName; // 516
	const char* pVfxStr; // 519
	{
		VkDebugUtilsObjectNameInfoEXT objectNameInfo; // 527
	}
} /* size: 0, variables: 2 */

// <0073EDAC> vulkan/pipelinemgrvulkan.cpp:540
// variables: 23
// function calls: 11
void CPipelineVulkan::BindShader(RenderShaderType_t shaderType, const CShaderVulkanBase* pShader, const InputLayoutVulkan_t* pInputLayout)
{
	const char   __FUNCTION__; // 56785
	{
		int32_t nShader; // 545
		{
			uint32_t nNumStaticDescriptorSets; // 549
			Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 229
			CShaderVulkanBase::GetNumDescriptorSets(); // 549
			Max<int>(const int& val1,
				const int& val2);  // 549
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 550
		}
	}
	{
		uint32 nBoundShaderStages; // 557
		uint32 nPipelineLibraryStages; // 558
		uint32 nSupportedStageMask; // 572
		{
			int32_t nShader; // 560
			CShaderVulkanBase::GetGraphicsPipelineLibrary(); // 565
		}
	}
	{
		const CVertexShaderVulkan* pVertexShader; // 590
		uint32 nUsedBindingSlots; // 592
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 597
		}
		{
			uint32_t nAttrib; // 598
			{
				int nDeclUsage; // 600
				uint32_t nAttribIndex; // 602
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 601
				}
				{
					int nVulkanUsage; // 611
					VkFormat nDefaultVBFormat; // 613
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 612
					}
				}
				{
					const VkVertexInputAttributeDescription* pVertexAttribDesc; // 627
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 626
					}
				}
				CUtlMemory<int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 600
			}
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 643
		}
		{
			uint32_t nBinding; // 644
			{
				const VkVertexInputBindingDescription* pVertexBindingDesc; // 646
			}
		}
		{
			uint32 nSlot; // 662
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 596
	}
	CRenderDeviceVulkan::EXTGraphicsPipelineLibraryEnabled(); // 555
	CPipelineVulkan::MarkPipelineDirty(); // 580
	CShaderVulkanBase::GetHash(); // 583
} /* size: 0, variables: 1, inline expansions: 3 (39 bytes) */

// <0073EB57> vulkan/pipelinemgrvulkan.cpp:678
// variables: 8
// function calls: 3
void CPipelineVulkan::BindDescriptorSets(int32 nDescriptorSetIndex, int32 nDescriptorCount, const CDescriptorSetVulkan ** ppDescriptorSetsForLayout, VkDescriptorSet* ppDescriptorSets, const int32* pCBDynamicOffsetCount, const uint32 ** ppCBDynamicOffsets)
{
	bool bDynamicDescriptorsDirty; // 681
	const char   __FUNCTION__; // 56996
	{
		int32 nDescriptorSet; // 684
		{
			int32 nTargetDescriptorSet; // 686
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 696
			}
			{
				uint32 nDescriptor; // 715
			}
			Max<int>(const int& val1,
				const int& val2);  // 720
			CDescriptorSetVulkan::GetHash(); // 697
			CPipelineVulkan::MarkPipelineDirty(); // 700
		}
	}
	{
		int32 nDescriptorSet; // 729
		{
			uint32 nDescriptor; // 733
		}
	}
} /* size: 0, variables: 2 */

// <0073E99E> vulkan/pipelinemgrvulkan.cpp:750
// variables: 5
// function calls: 4
void CPipelineVulkan::ValidatePipelineLibraryDescriptorSets()
{
	const char   __FUNCTION__; // 57459
	uint32 nDescriptorSetBindingMask; // 754
	const CShaderVulkanBase* pVertexShader; // 757
	const CShaderVulkanBase* pFragmentShader; // 763
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 752
	}
	CPipelineVulkan::GetShader(
			RenderShaderType_t shaderType);  // 757
	CShaderVulkanBase::GetDescriptorSetBindingMask(); // 760
	CPipelineVulkan::GetShader(
			RenderShaderType_t shaderType);  // 763
	CShaderVulkanBase::GetDescriptorSetBindingMask(); // 766
} /* size: 0, variables: 4, inline expansions: 4 (20 bytes) */

// <0073E799> vulkan/pipelinemgrvulkan.cpp:777
// variables: 5
// function calls: 5
void CPipelineVulkan::ValidateComputeDispatchDescriptorSets()
{
	const char   __FUNCTION__; // 57459
	uint32 nDescriptorSetBindingMask; // 782
	const CShaderVulkanBase* pComputeShader; // 783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 779
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 784
	}
	CPipelineVulkan::GetShader(
			RenderShaderType_t shaderType);  // 783
	CShaderVulkanBase::GetDescriptorSetBindingMask(); // 787
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 229
	CShaderVulkanBase::GetNumDescriptorSets(); // 794
	Max<int>(const int& val1,
		const int& val2);  // 794
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <0073E6B2> vulkan/pipelinemgrvulkan.cpp:800
// variables: 4
void CPipelineVulkan::ValidateDescriptorSets(uint32 nDescriptorSetBindingMask)
{
	bool bDynamicDescriptorsDirty; // 803
	{
		int32 nSet; // 804
	}
	{
		int32 nDescriptorSet; // 822
		{
			uint32 nDescriptor; // 826
		}
	}
} /* size: 289, variables: 1 */

// <0073D297> vulkan/pipelinemgrvulkan.cpp:845
// variables: 2
// function calls: 81
void CPipelineManagerVulkan::CPipelineManagerVulkan()
{
	{
		int nShaderType; // 863
	}
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CPipelineManagerVulkan>::CConCommandMemberAccessor(
					CPipelineManagerVulkan* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 891
	CConCommandMemberAccessor<CPipelineManagerVulkan>::SetOwner(
		CPipelineManagerVulkan* pOwner);  // 891
	CCommandMemberInitializer_OnPrintStats::CCommandMemberInitializer_OnPrintStats(); // 859
	CThreadMutex::CThreadMutex(
			const char* pName);  // 3024
	CThreadRWLock::CThreadRWLock(
			const char* pLockName);  // 859
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 859
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 859
	CThreadMutex::CThreadMutex(
			const char* pName);  // 3024
	CThreadRWLock::CThreadRWLock(
			const char* pLockName);  // 859
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Init(); // 178
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::CUtlHashtable(
			int minimumSize);  // 859
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Init(); // 178
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::CUtlHashtable(
			int minimumSize);  // 859
	CTSListBase::CTSListBase(); // 846
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	Node_t::Node_t(); // 864
	CTSQueue<VkShaderModule_T::End(); // 865
	CTSQueue<VkShaderModule_T::CTSQueue(); // 859
	CTSListBase::CTSListBase(); // 846
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	Node_t::Node_t(); // 864
	CTSQueue<PipelineObjectVulkan_t::End(); // 865
	CTSQueue<PipelineObjectVulkan_t::CTSQueue(); // 859
	CThreadMutex::CThreadMutex(
			const char* pName);  // 3024
	CThreadRWLock::CThreadRWLock(
			const char* pLockName);  // 859
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Init(); // 178
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::CUtlHashtable(
			int minimumSize);  // 859
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Init(); // 178
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::CUtlHashtable(
			int minimumSize);  // 859
	CTSListBase::CTSListBase(); // 846
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	Node_t::Node_t(); // 864
	CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::End(); // 865
	CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::CTSQueue(); // 859
	CTSListBase::CTSListBase(); // 846
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	PipelineCreateInfo_t::PipelineCreateInfo_t(); // 957
	PreWarmPipeline_t::PreWarmPipeline_t(); // 827
	Node_t::Node_t(); // 864
	CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::End(); // 865
	CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::CTSQueue(); // 859
	CUtlLinkedList<PipelineObjectVulkan_t::ConstructList(); // 454
	CUtlLinkedList<PipelineObjectVulkan_t::ResetDbgInfo(); // 455
	CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::InvalidIterator(); // 448
	CUtlLinkedList<PipelineObjectVulkan_t::CUtlLinkedList(
			int growSize,
			int initSize);  // 859
	CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, PipelineLayout this); // 178
	CUtlHashtable(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, PipelineLayout this,
			int minimumSize);  // 859
	CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<VkRenderPass_T::Init(); // 178
	CUtlHashtable<VkRenderPass_T::CUtlHashtable(
			int minimumSize);  // 859
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 859
	{
		int nShaderType; // 863
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 870
	CUtlString::CUtlString(); // 859
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 859
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 859
} /* size: 1625, inline expansions: 81 (2164 bytes) */

// <0073D26F> vulkan/pipelinemgrvulkan.cpp:845
// variable: 1
void CPipelineManagerVulkan::CPipelineManagerVulkan()
{
	{
		int nShaderType; // 863
	}
} /* size: 0 */

// <0073B228> vulkan/pipelinemgrvulkan.cpp:876
// function calls: 113
void CPipelineManagerVulkan::~CPipelineManagerVulkan()
{
	CUtlString::~CUtlString(); // 879
	ValidateAlignment<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, PipelineLayout this); // 879
	ValidateAlignment<CUtlHashtableEntry<VkRenderPass_T*, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::~CUtlMemory(); // 188
	CUtlHashtable<VkRenderPass_T::~CUtlHashtable(); // 879
	ValidateAlignment<UtlLinkedListElem_t<PipelineObjectVulkan_t*, int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::~CUtlMemory(); // 462
	CUtlLinkedList<PipelineObjectVulkan_t::~CUtlLinkedList(); // 879
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 890
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 895
	{
	}
	{
	}
	{
	}
	CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::Purge(); // 870
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 871
	{
	}
	{
	}
	CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::End(); // 873
	{
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 876
	CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::~CTSQueue(); // 879
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
	CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::Purge(); // 870
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 871
	{
	}
	{
	}
	CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::End(); // 873
	{
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 876
	CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::~CTSQueue(); // 879
	ValidateAlignment<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t*> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::~CUtlMemory(); // 188
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::~CUtlHashtable(); // 879
	ValidateAlignment<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t*> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::~CUtlMemory(); // 188
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::~CUtlHashtable(); // 879
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 879
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
	CTSQueue<PipelineObjectVulkan_t::Purge(); // 870
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 871
	{
	}
	{
	}
	CTSQueue<PipelineObjectVulkan_t::End(); // 873
	{
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 876
	CTSQueue<PipelineObjectVulkan_t::~CTSQueue(); // 879
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
	CTSQueue<VkShaderModule_T::Purge(); // 870
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 871
	{
	}
	{
	}
	CTSQueue<VkShaderModule_T::End(); // 873
	{
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 876
	CTSQueue<VkShaderModule_T::~CTSQueue(); // 879
	ValidateAlignment<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t*> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::~CUtlMemory(); // 188
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::~CUtlHashtable(); // 879
	ValidateAlignment<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t*> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::~CUtlMemory(); // 188
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::~CUtlHashtable(); // 879
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 879
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 879
	CConCommandMemberAccessor<CPipelineManagerVulkan>::~CConCommandMemberAccessor(); // 891
	CCommandMemberInitializer_OnPrintStats::~CCommandMemberInitializer_OnPrintStats(); // 879
} /* size: 0, inline expansions: 113 (7653 bytes) */

// <0073B1C0> vulkan/pipelinemgrvulkan.cpp:876
void CPipelineManagerVulkan::~CPipelineManagerVulkan()
{
} /* size: 36 */

// <00738DC1> vulkan/pipelinemgrvulkan.cpp:884
// variables: 33
// function calls: 136
void CPipelineManagerVulkan::Shutdown()
{
	PipelineObjectVulkan_t* pPipelineStageLibraryToDelete; // 930
	VkShaderModule pShaderModule; // 986
	LinkTimeOptimizedPipeline_t linkTimeOptimizedPipeline; // 992
	{
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> > generated_id_890; // 890
		{
			UtlHashHandle_t nIndex; // 891
			{
				PipelineObjectVulkan_t* pPipeline; // 893
				CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
						int i);  // 297
				CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
						handle_t idx);  // 893
			}
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Base(); // 914
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 915
				CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsValid(); // 917
			}
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::NextHandle(
					handle_t start);  // 208
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::FirstHandle(); // 891
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Base(); // 914
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 915
				CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsValid(); // 917
			}
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::NextHandle(
					handle_t start);  // 891
		}
		Lock(CThreadRWLock& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >::CAutoLockT(
				const CThreadRWLock& lock,
				const char* pFilename,
				int nLineNumber);  // 890
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 284
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 896
		Unlock(CThreadRWLock& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >::~CAutoLockT(); // 897
	}
	{
		UtlHashHandle_t nIndex; // 900
		{
			PipelineObjectVulkan_t* pPipeline; // 902
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
					int i);  // 297
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
					handle_t idx);  // 902
		}
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 915
			CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsValid(); // 917
		}
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::FirstHandle(); // 900
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 915
			CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsValid(); // 917
		}
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::NextHandle(
				handle_t start);  // 900
	}
	{
		int nIndex; // 907
		{
			PipelineObjectVulkan_t* pPipeline; // 909
			CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::operator[](
					int i);  // 494
			CUtlLinkedList<PipelineObjectVulkan_t::operator[](
					int i);  // 909
		}
		CUtlLinkedList<PipelineObjectVulkan_t::Head(); // 907
		CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::operator[](
				int i);  // 368
		CUtlLinkedList<PipelineObjectVulkan_t::InternalElement(
				int i);  // 550
		CUtlLinkedList<PipelineObjectVulkan_t::Next(
			int i);  // 907
	}
	{
		UtlHashHandle_t nIndex; // 914
		{
			PipelineObjectVulkan_t* pPipeline; // 916
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
					int i);  // 297
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
					handle_t idx);  // 916
		}
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 915
			CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Base(); // 914
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::FirstHandle(); // 914
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 915
			CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsValid(); // 917
		}
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::NextHandle(
				handle_t start);  // 914
	}
	{
		UtlHashHandle_t nIndex; // 922
		{
			PipelineObjectVulkan_t* pPipeline; // 924
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
					int i);  // 297
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
					handle_t idx);  // 924
		}
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 915
			CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsValid(); // 917
		}
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::FirstHandle(); // 922
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 915
			CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsValid(); // 917
		}
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::NextHandle(
				handle_t start);  // 922
	}
	{
		UtlHashHandle_t nIndex; // 936
		{
			PipelineLayoutVulkan_t* pLayout; // 938
			{
				int32 nDescriptorSet; // 939
			}
			CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::operator[](
					int i);  // 297
			operator[](const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, PipelineLayout this,
					handle_t idx);  // 938
		}
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::Count(); // 915
			CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::Base(); // 914
		NextHandle(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, Pipeline this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, Pipeline this); // 936
		CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::Count(); // 915
			CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, Pipeline this,
				handle_t start);  // 936
	}
	{
		UtlHashHandle_t hElem; // 948
		CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::Count(); // 915
			CUtlHashtableEntry<VkRenderPass_T::IsValid(); // 917
		}
		CUtlHashtable<VkRenderPass_T::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<VkRenderPass_T::FirstHandle(); // 948
		CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::operator[](
				int i);  // 297
		CUtlHashtable<VkRenderPass_T::operator[](
				handle_t idx);  // 950
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::Count(); // 915
			CUtlHashtableEntry<VkRenderPass_T::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::Base(); // 914
		CUtlHashtable<VkRenderPass_T::NextHandle(
				handle_t start);  // 948
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_963; // 963
		{
			int _idx_pPerThread; // 964
			{
				PerThreadDataVulkan_t* pPerThread; // 964
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
				int nLineNumber);  // 963
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 972
	}
	CPipelineManagerVulkan::FlushPipelineCache(); // 887
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 284
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 905
	CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::Purge(); // 643
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::InvalidIterator(); // 648
	CUtlLinkedList<PipelineObjectVulkan_t::ResetDbgInfo(); // 650
	CUtlLinkedList<PipelineObjectVulkan_t::Purge(); // 912
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 284
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 920
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 284
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 928
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 1080
	CTSQueue<PipelineObjectVulkan_t::FreeNode(
		Node_t* pNode);  // 1103
	CTSQueue<PipelineObjectVulkan_t::PopItem(
		PipelineObjectVulkan_t** pResult);  // 931
	CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::Purge(); // 284
	Purge(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, PipelineLayout this); // 946
	CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::Purge(); // 284
	CUtlHashtable<VkRenderPass_T::Purge(); // 952
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 1080
	CTSQueue<VkShaderModule_T::FreeNode(
		Node_t* pNode);  // 1103
	CTSQueue<VkShaderModule_T::PopItem(
		VkShaderModule_T** pResult);  // 987
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 1080
	CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::FreeNode(
		Node_t* pNode);  // 1103
	CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::PopItem(
		LinkTimeOptimizedPipeline_t* pResult);  // 993
} /* size: 3519, variables: 3, inline expansions: 46 (2732 bytes) */

// <00738CB3> vulkan/pipelinemgrvulkan.cpp:999
// variables: 3
void CPipelineManagerVulkan::ShutdownPipelineObject(PipelineObjectVulkan_t* pPipeline)
{
	const char   __FUNCTION__; // 57099
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1001
	}
	{
		int32 i; // 1009
	}
} /* size: 0, variables: 1 */

// <0073861E> vulkan/pipelinemgrvulkan.cpp:1038
// variables: 2
// function calls: 17
void CPipelineManagerVulkan::MergePreWarmedPipelinesToPending()
{
	PreWarmPipeline_t preWarmPipeline; // 1040
	{
		handle_t hElem; // 1043
		PipelineCreateHashFunctor_t::operator(
				const PipelineCreateInfo_t& pipelineCreateInfo);  // 218
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Find(
			KeyArg_t k);  // 1043
		PipelineCreateHashFunctor_t::operator(
				const PipelineCreateInfo_t& pipelineCreateInfo);  // 249
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
				int i);  // 720
		CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t::CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>(
										const PipelineCreateInfo_t& k,
										PipelineObjectVulkan_t* const& v);  // 1514
		Construct<CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>, const PipelineCreateInfo_t&, PipelineObjectVulkan_t*&>(CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>* pMemory); // 720
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::DoInsert<const PipelineCreateInfo_t&>(
							const PipelineCreateInfo_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::DoInsert<const PipelineCreateInfo_t&>(
							const PipelineCreateInfo_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Insert(
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 1046
	}
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 1080
	CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::FreeNode(
		Node_t* pNode);  // 1103
	CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::PopItem(
		PreWarmPipeline_t* pResult);  // 1041
	PipelineCreateInfo_t::PipelineCreateInfo_t(); // 957
	PreWarmPipeline_t::PreWarmPipeline_t(); // 1040
} /* size: 561, variables: 1, inline expansions: 8 (386 bytes) */

// <00737ED5> vulkan/pipelinemgrvulkan.cpp:1059
// variable: 1
// function calls: 22
void CPipelineManagerVulkan::DestroyPipelinesReferencingShader(VkShaderModule pShaderModule)
{
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<VkShaderModule_T*>(VkShaderModule_T** pMemory,
					VkShaderModule_T* const& src);  // 1090
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
		CTSQueue<VkShaderModule_T::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<VkShaderModule_T::FinishPush(
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
		CTSQueue<VkShaderModule_T::InterlockedCompareExchangeNode(
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
	CTSQueue<VkShaderModule_T::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<VkShaderModule_T::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<VkShaderModule_T::Push(
		Node_t* pNode);  // 1091
	Node_t::Node_t(); // 1088
	CTSQueue<VkShaderModule_T::PushItem(
		VkShaderModule_T* const& init);  // 1063
} /* size: 0, inline expansions: 15 (1037 bytes) */

// <0073778C> vulkan/pipelinemgrvulkan.cpp:1070
// variable: 1
// function calls: 22
void CPipelineManagerVulkan::DestroyPipelineLibrary(PipelineObjectVulkan_t* pPipelineLibrary)
{
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<PipelineObjectVulkan_t*>(PipelineObjectVulkan_t** pMemory,
						PipelineObjectVulkan_t* const& src);  // 1090
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
		CTSQueue<PipelineObjectVulkan_t::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<PipelineObjectVulkan_t::FinishPush(
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
		CTSQueue<PipelineObjectVulkan_t::InterlockedCompareExchangeNode(
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
	CTSQueue<PipelineObjectVulkan_t::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<PipelineObjectVulkan_t::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<PipelineObjectVulkan_t::Push(
		Node_t* pNode);  // 1091
	Node_t::Node_t(); // 1088
	CTSQueue<PipelineObjectVulkan_t::PushItem(
		PipelineObjectVulkan_t* const& init);  // 1074
} /* size: 0, inline expansions: 15 (1037 bytes) */

// <00736A87> vulkan/pipelinemgrvulkan.cpp:1082
// variables: 10
// function calls: 50
void CPipelineManagerVulkan::ProcessShaderModuleDeletionQueue()
{
	const char   __FUNCTION__; // 57339
	VkShaderModule pShaderModule; // 1086
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1084
	}
	{
		CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int> > keysToDelete; // 1090
		{
			UtlHashHandle_t nIndex; // 1091
			{
				const PipelineObjectVulkan_t* pPipelineVulkan; // 1093
				{
					int32 nShaderType; // 1095
					CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
							int i);  // 297
					CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
							handle_t idx);  // 1099
					CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::operator[](
							int i);  // 482
					CUtlLinkedList<PipelineObjectVulkan_t::Element(
						int i);  // 825
					CopyConstruct<PipelineObjectVulkan_t*>(PipelineObjectVulkan_t** pMemory,
										PipelineObjectVulkan_t* const& src);  // 825
					CUtlLinkedList<PipelineObjectVulkan_t::InsertBefore(
							int before,
							PipelineObjectVulkan_t* const& src);  // 856
					CUtlLinkedList<PipelineObjectVulkan_t::AddToTail(
							PipelineObjectVulkan_t* const& src);  // 1099
					CopyConstruct<PipelineCreateInfo_t>(PipelineCreateInfo_t* pMemory,
										const PipelineCreateInfo_t& src);  // 825
					CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::operator[](
							short unsigned int i);  // 482
					Element(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this,
						short unsigned int i);  // 825
					InsertBefore(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this,
							short unsigned int before,
							const PipelineCreateInfo_t& src);  // 856
					AddToTail(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this,
							const PipelineCreateInfo_t& src);  // 1100
					CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
							int i);  // 293
					CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Key(
						handle_t idx);  // 1100
				}
				CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
						int i);  // 297
				CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
						handle_t idx);  // 1093
			}
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 915
				CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsValid(); // 917
			}
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Base(); // 914
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::NextHandle(
					handle_t start);  // 208
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::FirstHandle(); // 1091
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 915
				CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsValid(); // 917
			}
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Base(); // 914
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::NextHandle(
					handle_t start);  // 1091
		}
		{
			short unsigned int nKeyIndex; // 1106
			CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 494
			operator[](const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this,
					short unsigned int i);  // 1108
			PipelineCreateHashFunctor_t::operator(
					const PipelineCreateInfo_t& pipelineCreateInfo);  // 267
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Remove(
				KeyArg_t k);  // 1108
			Next(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListE this,
				short unsigned int i);  // 1106
		}
		CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
		CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 448
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 448
		ConstructList(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this); // 454
		ResetDbgInfo(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this); // 455
		CUtlLinkedList(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this,
				int growSize,
				int initSize);  // 1090
		ValidateAlignment<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int> >(void); // 508
		CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::Purge(); // 903
		CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::Purge(); // 510
		CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 462
		~CUtlLinkedList(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this); // 1112
	}
	CInterlockedIntT<int, 4>::operator int(); // 594
	CRenderDeviceBase::IsAsyncPresentEnabled(); // 1084
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 1080
	CTSQueue<VkShaderModule_T::FreeNode(
		Node_t* pNode);  // 1103
	CTSQueue<VkShaderModule_T::PopItem(
		VkShaderModule_T** pResult);  // 1087
} /* size: 0, variables: 2, inline expansions: 8 (323 bytes) */

// <00735D07> vulkan/pipelinemgrvulkan.cpp:1119
// variables: 9
// function calls: 53
void CPipelineManagerVulkan::ProcessPipelineLibraryDeletionQueue()
{
	const char   __FUNCTION__; // 57410
	PipelineObjectVulkan_t* pStagePipelineLibraryToDelete; // 1123
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1121
	}
	{
		CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int> > keysToDelete; // 1127
		{
			UtlHashHandle_t nIndex; // 1128
			{
				const PipelineObjectVulkan_t* pPipelineVulkan; // 1130
				CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
						int i);  // 297
				CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
						handle_t idx);  // 1130
				CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::operator[](
						int i);  // 482
				CUtlLinkedList<PipelineObjectVulkan_t::Element(
					int i);  // 825
				CopyConstruct<PipelineObjectVulkan_t*>(PipelineObjectVulkan_t** pMemory,
									PipelineObjectVulkan_t* const& src);  // 825
				CUtlLinkedList<PipelineObjectVulkan_t::InsertBefore(
						int before,
						PipelineObjectVulkan_t* const& src);  // 856
				CUtlLinkedList<PipelineObjectVulkan_t::AddToTail(
						PipelineObjectVulkan_t* const& src);  // 1137
				CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::operator[](
						short unsigned int i);  // 482
				Element(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this,
					short unsigned int i);  // 825
				CopyConstruct<PipelineCreateInfo_t>(PipelineCreateInfo_t* pMemory,
									const PipelineCreateInfo_t& src);  // 825
				InsertBefore(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this,
						short unsigned int before,
						const PipelineCreateInfo_t& src);  // 856
				AddToTail(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this,
						const PipelineCreateInfo_t& src);  // 1138
				CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
						int i);  // 293
				CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Key(
					handle_t idx);  // 1138
			}
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 915
				CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsValid(); // 917
			}
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Base(); // 914
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::NextHandle(
					handle_t start);  // 208
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::FirstHandle(); // 1128
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Base(); // 914
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 915
				CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsValid(); // 917
			}
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::NextHandle(
					handle_t start);  // 1128
		}
		{
			short unsigned int nKeyIndex; // 1143
			CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 494
			operator[](const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this,
					short unsigned int i);  // 1145
			PipelineCreateHashFunctor_t::operator(
					const PipelineCreateInfo_t& pipelineCreateInfo);  // 267
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Remove(
				KeyArg_t k);  // 1145
			Next(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListE this,
				short unsigned int i);  // 1143
		}
		CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
		CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 448
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 448
		ConstructList(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this); // 454
		ResetDbgInfo(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this); // 455
		CUtlLinkedList(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this,
				int growSize,
				int initSize);  // 1127
		CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::operator[](
				int i);  // 482
		CUtlLinkedList<PipelineObjectVulkan_t::Element(
			int i);  // 825
		CopyConstruct<PipelineObjectVulkan_t*>(PipelineObjectVulkan_t** pMemory,
							PipelineObjectVulkan_t* const& src);  // 825
		CUtlLinkedList<PipelineObjectVulkan_t::InsertBefore(
				int before,
				PipelineObjectVulkan_t* const& src);  // 856
		CUtlLinkedList<PipelineObjectVulkan_t::AddToTail(
				PipelineObjectVulkan_t* const& src);  // 1149
		ValidateAlignment<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int> >(void); // 508
		CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::Purge(); // 903
		CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::Purge(); // 510
		CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 462
		~CUtlLinkedList(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this); // 1150
	}
	CInterlockedIntT<int, 4>::operator int(); // 594
	CRenderDeviceBase::IsAsyncPresentEnabled(); // 1121
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 1080
	CTSQueue<PipelineObjectVulkan_t::FreeNode(
		Node_t* pNode);  // 1103
	CTSQueue<PipelineObjectVulkan_t::PopItem(
		PipelineObjectVulkan_t** pResult);  // 1124
} /* size: 0, variables: 2, inline expansions: 8 (320 bytes) */

// <00735A57> vulkan/pipelinemgrvulkan.cpp:1157
// variables: 4
// function calls: 8
void CPipelineManagerVulkan::ProcessPipelineLibraryLinkTimeOptimizationQueue()
{
	const char   __FUNCTION__; // 57694
	LinkTimeOptimizedPipeline_t linkTimeOptimizedPipeline; // 1161
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1159
	}
	{
		PipelineObjectVulkan_t* pPipelineObject; // 1164
	}
	CInterlockedIntT<int, 4>::operator int(); // 594
	CRenderDeviceBase::IsAsyncPresentEnabled(); // 1159
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 1080
	CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::FreeNode(
		Node_t* pNode);  // 1103
	CTSQueue<CPipelineManagerVulkan::LinkTimeOptimizedPipeline_t, false>::PopItem(
		LinkTimeOptimizedPipeline_t* pResult);  // 1162
} /* size: 0, variables: 2, inline expansions: 8 (302 bytes) */

// <007343DE> vulkan/pipelinemgrvulkan.cpp:1183
// variables: 11
// function calls: 82
void CPipelineManagerVulkan::DestroyPipelinesReferencingRenderpass(VkRenderPass pRenderPass)
{
	CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> > generated_id_1187; // 1187
	CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int> > keysToDelete; // 1200
	bool bPipelinesReferencingRenderPass; // 1201
	{
		UtlHashHandle_t nIndex; // 1192
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 915
			CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsValid(); // 917
		}
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::FirstHandle(); // 1192
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
				int i);  // 297
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
				handle_t idx);  // 1195
		PipelineCreateHashFunctor_t::operator(
				const PipelineCreateInfo_t& pipelineCreateInfo);  // 249
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
				int i);  // 720
		CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t::CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>(
										const PipelineCreateInfo_t& k,
										PipelineObjectVulkan_t* const& v);  // 1514
		Construct<CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>, const PipelineCreateInfo_t&, PipelineObjectVulkan_t*&>(CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>* pMemory); // 720
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::DoInsert<const PipelineCreateInfo_t&>(
							const PipelineCreateInfo_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::DoInsert<const PipelineCreateInfo_t&>(
							const PipelineCreateInfo_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Insert(
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 1195
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Key(
			handle_t idx);  // 1195
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 915
			CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsValid(); // 917
		}
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::NextHandle(
				handle_t start);  // 1192
	}
	{
		UtlHashHandle_t nIndex; // 1202
		{
			PipelineObjectVulkan_t* pPipelineObject; // 1204
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
					int i);  // 297
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
					handle_t idx);  // 1204
			CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::operator[](
					int i);  // 482
			CUtlLinkedList<PipelineObjectVulkan_t::Element(
				int i);  // 825
			CopyConstruct<PipelineObjectVulkan_t*>(PipelineObjectVulkan_t** pMemory,
								PipelineObjectVulkan_t* const& src);  // 825
			CUtlLinkedList<PipelineObjectVulkan_t::InsertBefore(
					int before,
					PipelineObjectVulkan_t* const& src);  // 856
			CUtlLinkedList<PipelineObjectVulkan_t::AddToTail(
					PipelineObjectVulkan_t* const& src);  // 1208
			CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 482
			Element(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this,
				short unsigned int i);  // 825
			CopyConstruct<PipelineCreateInfo_t>(PipelineCreateInfo_t* pMemory,
								const PipelineCreateInfo_t& src);  // 825
			InsertBefore(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this,
					short unsigned int before,
					const PipelineCreateInfo_t& src);  // 856
			AddToTail(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this,
					const PipelineCreateInfo_t& src);  // 1209
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
					int i);  // 293
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Key(
				handle_t idx);  // 1209
			Mix32HashFunctor::operator(
					uint32 n);  // 139
			PointerHashFunctor::operator(
					const void* s);  // 240
			CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::Base(); // 650
			IdealIndex(uint32_if32BitStorage h,
					uint32 m);  // 653
			CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::Count(); // 651
			CUtlHashtableEntry<VkRenderPass_T::IdealIndex(
					uint32 slotmask);  // 656
			CUtlHashtableEntry<VkRenderPass_T::IdealIndex(
					uint32 slotmask);  // 667
			CUtlHashtable<VkRenderPass_T::DoLookup<VkRenderPass_T*>(
							VkRenderPass_T* x,
							unsigned int h,
							handle_t* pPreviousInChain);  // 697
			CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::operator[](
					int i);  // 706
			CUtlKeyValuePair<VkRenderPass_T::CUtlKeyValuePair<VkRenderPass_T*>(
								VkRenderPass_T* const& k);  // 1514
			Construct<CUtlKeyValuePair<VkRenderPass_T*, empty_t>, VkRenderPass_T*&>(CUtlKeyValuePair<VkRenderPass_T*, empty_t>* pMemory); // 706
			CUtlHashtable<VkRenderPass_T::DoInsert<VkRenderPass_T*>(
							VkRenderPass_T* k,
							unsigned int h,
							bool* pDidInsert);  // 695
			CUtlHashtable<VkRenderPass_T::DoInsert<VkRenderPass_T*>(
							VkRenderPass_T* k,
							unsigned int h,
							bool* pDidInsert);  // 240
			CUtlHashtable<VkRenderPass_T::Insert(
				KeyArg_t k);  // 1214
		}
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 915
			CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsValid(); // 917
		}
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::FirstHandle(); // 1202
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 915
			CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsValid(); // 917
		}
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::NextHandle(
				handle_t start);  // 1202
	}
	{
		short unsigned int nKeyIndex; // 1224
		CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::operator[](
				short unsigned int i);  // 494
		operator[](const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this,
				short unsigned int i);  // 1226
		PipelineCreateHashFunctor_t::operator(
				const PipelineCreateInfo_t& pipelineCreateInfo);  // 267
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Remove(
			KeyArg_t k);  // 1226
		Next(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListE this,
			short unsigned int i);  // 1224
	}
	Lock(CThreadRWLock& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >::CAutoLockT(
			const CThreadRWLock& lock,
			const char* pFilename,
			int nLineNumber);  // 1187
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 1189
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 284
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 1197
	CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	ConstructList(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this); // 454
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 448
	ResetDbgInfo(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this); // 455
	CUtlLinkedList(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this,
			int growSize,
			int initSize);  // 1200
	ValidateAlignment<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<PipelineCreateInfo_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 462
	~CUtlLinkedList(const CUtlLinkedList<PipelineCreateInfo_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t< this); // 1233
	Unlock(CThreadRWLock& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >::~CAutoLockT(); // 1233
} /* size: 1506, variables: 3, inline expansions: 21 (517 bytes) */

// <007340F4> vulkan/pipelinemgrvulkan.cpp:1238
// variables: 3
// function calls: 4
void CPipelineManagerVulkan::Init(VkDevice pDeviceVulkan, VkQueue pQueueVulkan, const VulkanPhysicalDeviceInfo_t* pDeviceInfo, CAsyncCompileHelperVulkan* pAsyncCompileHelper)
{
	const char   __FUNCTION__; // 56623
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1240
	}
	{
		VkPipelineCacheCreateInfo pipelineCacheCreateInfo; // 1260
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 1263
	}
} /* size: 0, variables: 1 */

// <00733074> vulkan/pipelinemgrvulkan.cpp:1273
// variables: 44
// function calls: 26
void CPipelineManagerVulkan::BuildDescriptorUpdateTemplates(const CPipelineVulkan* pPipelineVulkan, PipelineObjectVulkan_t* pPipelineOut)
{
	bool bIsComputeShader; // 1275
	const char   __FUNCTION__; // 57285
	int32 nFirstStage; // 1277
	int32 nLastStage; // 1278
	const uint8* pDataBaseAddress; // 1283
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1276
	}
	{
		int32 nDescriptorSet; // 1286
		{
			int nShaderType; // 1290
			{
				const CShaderVulkanBase* pShader; // 1292
				{
					uint32_t nUpdateIndex; // 1295
					uint32 nMaxTotalBindings; // 1296
					VkDescriptorUpdateTemplateEntryKHR* pDescriptorUpdates; // 1297
					uint32_t nNumSamplerTextures; // 1301
					uint32_t nLastSamplerIndex; // 1302
					uint32_t nNumTextures; // 1330
					uint32_t nLastTextureIndex; // 1331
					uint32_t nNumImages; // 1358
					uint32_t nLastImageIndex; // 1359
					uint32_t nNumStorageBuffers; // 1385
					uint32_t nNumUniformTexelBuffers; // 1413
					uint32_t nLastUniformTexelBufferIndex; // 1414
					uint32_t nNumStorageTexelBuffers; // 1440
					uint32_t nLastStorageTexelBufferIndex; // 1441
					uint32_t nNumUniformBuffers; // 1467
					uint32_t nLastUniformBufferIndex; // 1468
					uint32_t nActualDescriptorUpdateEntries; // 1495
					{
						uint32_t nSampler; // 1303
						{
							uint32_t nSamplerIndex; // 1305
							GetBindingStartOffsetHLSLToSPIRV(RenderShaderType_t eShaderType,
											VkDescriptorType nDescriptorType,
											int32_t nDescriptorSet);  // 1319
							ComputeOffset(const void* pDescriptorInfoAddr,
									const void* pBaseAddr);  // 1321
						}
					}
					{
						uint32_t nTexture; // 1332
						{
							bool bIsInputAttachment; // 1334
							uint32_t nTextureIndex; // 1335
							GetBindingStartOffsetHLSLToSPIRV(RenderShaderType_t eShaderType,
											VkDescriptorType nDescriptorType,
											int32_t nDescriptorSet);  // 1347
							ComputeOffset(const void* pDescriptorInfoAddr,
									const void* pBaseAddr);  // 1349
						}
					}
					{
						uint32_t nImage; // 1360
						{
							uint32_t nImageIndex; // 1362
							GetBindingStartOffsetHLSLToSPIRV(RenderShaderType_t eShaderType,
											VkDescriptorType nDescriptorType,
											int32_t nDescriptorSet);  // 1374
							ComputeOffset(const void* pDescriptorInfoAddr,
									const void* pBaseAddr);  // 1376
						}
					}
					{
						uint32_t nStorageBuffer; // 1386
						{
							ShaderStorageBufferBinding_t ssboBinding; // 1388
							HLSLRegisterSpace_t hlslRegisterSpace; // 1389
							GetBindingStartOffsetHLSLToSPIRV(RenderShaderType_t eShaderType,
											VkDescriptorType nDescriptorType,
											int32_t nDescriptorSet);  // 1395
							ComputeOffset(const void* pDescriptorInfoAddr,
									const void* pBaseAddr);  // 1396
							GetBindingStartOffsetHLSLToSPIRV(RenderShaderType_t eShaderType,
											VkDescriptorType nDescriptorType,
											int32_t nDescriptorSet);  // 1401
							ComputeOffset(const void* pDescriptorInfoAddr,
									const void* pBaseAddr);  // 1402
						}
					}
					{
						uint32_t nUniformTexelBuffer; // 1415
						{
							uint32_t nUniformTexelBufferIndex; // 1417
							GetBindingStartOffsetHLSLToSPIRV(RenderShaderType_t eShaderType,
											VkDescriptorType nDescriptorType,
											int32_t nDescriptorSet);  // 1429
							ComputeOffset(const void* pDescriptorInfoAddr,
									const void* pBaseAddr);  // 1431
						}
					}
					{
						uint32_t nStorageTexelBuffer; // 1442
						{
							uint32_t nStorageTexelBufferIndex; // 1444
							GetBindingStartOffsetHLSLToSPIRV(RenderShaderType_t eShaderType,
											VkDescriptorType nDescriptorType,
											int32_t nDescriptorSet);  // 1456
							ComputeOffset(const void* pDescriptorInfoAddr,
									const void* pBaseAddr);  // 1458
						}
					}
					{
						uint32_t nBuffer; // 1469
						{
							uint32_t nUniformBufferIndex; // 1471
							GetBindingStartOffsetHLSLToSPIRV(RenderShaderType_t eShaderType,
											VkDescriptorType nDescriptorType,
											int32_t nDescriptorSet);  // 1483
							ComputeOffset(const void* pDescriptorInfoAddr,
									const void* pBaseAddr);  // 1485
						}
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1494
					}
					{
						VkDescriptorUpdateTemplateCreateInfoKHR descriptorUpdateTemplateCreateInfo; // 1500
						CUtlString::CUtlString(); // 149
						CUtlString::Get(); // 151
						CUtlString::~CUtlString(); // 153
						_DOVK(VkResult result,
							const char* pCommand);  // 1511
					}
					memset(void* __dest,
						int __ch,
						size_t __len);  // 67
					V_memset(void* dest,
						int fill,
						size_t count);  // 1298
				}
				CPipelineVulkan::GetShader(
						RenderShaderType_t shaderType);  // 1292
				GetProgramType(RenderShaderType_t eShaderType); // 197
				GetDynamicDescriptorSetIndex(RenderShaderType_t eShaderType); // 1293
			}
		}
	}
	CPipelineVulkan::GetShader(
			RenderShaderType_t shaderType);  // 1276
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <00731B0B> vulkan/pipelinemgrvulkan.cpp:1527
// variables: 27
// function calls: 36
void CPipelineManagerVulkan::BuildDynamicDescriptorSetLayout(int32 nDescriptorSet, const CPipelineVulkan* pPipelineVulkan, CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >& layoutBindingsOut, uint32& nDescriptorTypeMaskOut)
{
	bool bIsComputeShader; // 1530
	const char   __FUNCTION__; // 57312
	int32 nTotalBindings; // 1532
	RenderShaderType_t eShaderType; // 1533
	const CShaderVulkanBase* pShader; // 1567
	VkDescriptorSetLayoutBinding* pLayoutBindings; // 1636
	int32 nBinding; // 1638
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1531
	}
	{
		int32 nFirstStage; // 1542
		int32 nLastStage; // 1543
		{
			int nShaderStage; // 1545
			GetProgramType(RenderShaderType_t eShaderType); // 197
			GetDynamicDescriptorSetIndex(RenderShaderType_t eShaderType); // 1547
			CPipelineVulkan::GetShader(
					RenderShaderType_t shaderType);  // 1550
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1568
	}
	{
		uint32 nMaxSamplersPerStage; // 1572
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 1572
		CShaderVulkanBase::GetDebugName(); // 1575
	}
	{
		uint32 nMaxUniformBlocksPerStage; // 1586
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 1586
		CShaderVulkanBase::GetDebugName(); // 1589
	}
	{
		uint32 nMaxTexturesPerStage; // 1600
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 1600
		CShaderVulkanBase::GetDebugName(); // 1603
	}
	{
		uint32 nSampler; // 1643
		{
		}
		GetProgramType(RenderShaderType_t eShaderType); // 207
		GetBindingStartOffsetHLSLToSPIRV(RenderShaderType_t eShaderType,
						VkDescriptorType nDescriptorType,
						int32_t nDescriptorSet);  // 1645
		GetVKShaderStageFlags(RenderShaderType_t nShaderType); // 1648
	}
	{
		uint32 nTexture; // 1655
		{
			bool bIsInputAttachment; // 1657
			uint32 nTextureBinding; // 1658
			GetVKShaderStageFlags(RenderShaderType_t nShaderType); // 1662
			{
			}
			GetProgramType(RenderShaderType_t eShaderType); // 207
			GetBindingStartOffsetHLSLToSPIRV(RenderShaderType_t eShaderType,
							VkDescriptorType nDescriptorType,
							int32_t nDescriptorSet);  // 1659
		}
	}
	{
		uint32 nImage; // 1669
		{
		}
		GetProgramType(RenderShaderType_t eShaderType); // 207
		GetBindingStartOffsetHLSLToSPIRV(RenderShaderType_t eShaderType,
						VkDescriptorType nDescriptorType,
						int32_t nDescriptorSet);  // 1671
		GetVKShaderStageFlags(RenderShaderType_t nShaderType); // 1674
	}
	{
		uint32 nStorageBuffer; // 1683
		{
			ShaderStorageBufferBinding_t ssboBinding; // 1685
			HLSLRegisterSpace_t hlslRegisterSpace; // 1686
			{
			}
			GetProgramType(RenderShaderType_t eShaderType); // 207
			GetBindingStartOffsetHLSLToSPIRV(RenderShaderType_t eShaderType,
							VkDescriptorType nDescriptorType,
							int32_t nDescriptorSet);  // 1692
			GetVKShaderStageFlags(RenderShaderType_t nShaderType); // 1701
			{
			}
			GetProgramType(RenderShaderType_t eShaderType); // 207
			GetBindingStartOffsetHLSLToSPIRV(RenderShaderType_t eShaderType,
							VkDescriptorType nDescriptorType,
							int32_t nDescriptorSet);  // 1697
		}
	}
	{
		uint32 nUniformTexelBuffer; // 1710
		{
		}
		GetProgramType(RenderShaderType_t eShaderType); // 207
		GetBindingStartOffsetHLSLToSPIRV(RenderShaderType_t eShaderType,
						VkDescriptorType nDescriptorType,
						int32_t nDescriptorSet);  // 1712
		GetVKShaderStageFlags(RenderShaderType_t nShaderType); // 1715
	}
	{
		uint32 nStorageTexelBuffer; // 1724
		{
		}
		GetProgramType(RenderShaderType_t eShaderType); // 207
		GetBindingStartOffsetHLSLToSPIRV(RenderShaderType_t eShaderType,
						VkDescriptorType nDescriptorType,
						int32_t nDescriptorSet);  // 1726
		GetVKShaderStageFlags(RenderShaderType_t nShaderType); // 1729
	}
	{
		uint32 nBuffer; // 1737
		{
		}
		GetProgramType(RenderShaderType_t eShaderType); // 207
		GetBindingStartOffsetHLSLToSPIRV(RenderShaderType_t eShaderType,
						VkDescriptorType nDescriptorType,
						int32_t nDescriptorSet);  // 1739
		GetVKShaderStageFlags(RenderShaderType_t nShaderType); // 1742
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1748
	}
	CPipelineVulkan::GetShader(
			RenderShaderType_t shaderType);  // 1531
	CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 112
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 1636
	CPipelineVulkan::GetShader(
			RenderShaderType_t shaderType);  // 1560
} /* size: 0, variables: 7, inline expansions: 4 (34 bytes) */

// <0072C53C> vulkan/pipelinemgrvulkan.cpp:1755
// variables: 43
// function calls: 315
void CPipelineManagerVulkan::FinalizeDescriptorSetAndPipelineLayouts(const CPipelineVulkan* pPipelineVulkan, PipelineObjectVulkan_t* pPipelineOut, VkGraphicsPipelineLibraryFlagsEXT nPipelineLibraryStage, const PipelineLayoutCreateInfo_t* pAlternatePipelineLayoutCreateInfo)
{
	bool bIsComputeShader; // 1758
	const char   __FUNCTION__; // 57508
	int32 nFirstStage; // 1760
	int32 nLastStage; // 1761
	uint8_t nNumDescriptorSets; // 1767
	VkShaderStageFlags nPushConstantStages; // 1768
	uint32_t nPushConstantSize; // 1769
	CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> > pushConstantRanges; // 1810
	CUtlVector<int, CUtlMemory<int, int> > totalBindingPerDescriptorSet; // 1819
	CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int> > layoutBindings; // 1821
	CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int> > vecPerDescriptorSetBindingFlags; // 1823
	CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> > immutableSamplers; // 1828
	VkPipelineLayoutCreateFlags nPipelineLayoutCreateFlags; // 1914
	bool bHaveBindingFlags; // 1921
	PipelineLayoutCreateInfo_t pipelineLayoutHash; // 1931
	PipelineLayoutVulkan_t pipelineLayout; // 1948
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1759
	}
	{
		const CShaderVulkanBase* pShader; // 1776
		CPipelineVulkan::GetShader(
				RenderShaderType_t shaderType);  // 1776
		Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 229
		CShaderVulkanBase::GetNumDescriptorSets(); // 1777
		CShaderVulkanBase::GetPushConstantSize(); // 1778
	}
	{
		int nShaderStage; // 1783
		{
			const CShaderVulkanBase* pShader; // 1785
			CPipelineVulkan::GetShader(
					RenderShaderType_t shaderType);  // 1785
			Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 229
			CShaderVulkanBase::GetNumDescriptorSets(); // 1788
			CShaderVulkanBase::GetPushConstantSize(); // 1789
			Max<unsigned char>(const unsigned char& val1,
						const unsigned char& val2);  // 1788
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 1792
		}
	}
	{
		int32 nDescriptorSet; // 1829
		{
			const CDescriptorSetVulkan* pStaticDescriptorSet; // 1851
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1857
			}
			{
				int32 nImmutableSampler; // 1861
				{
					PipelineLayoutImmutableSampler_t* pImmutableSamplers; // 1863
					PipelineLayoutImmutableSampler_t immutableSampler; // 1867
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1864
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1870
					}
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::GrowMemory(
							int num);  // 1198
					CopyConstruct<PipelineLayoutImmutableSampler_t>(PipelineLayoutImmutableSampler_t* pMemory,
											const PipelineLayoutImmutableSampler_t& src);  // 1201
					CUtlMemory<PipelineLayoutImmutableSampler_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Element(
						int i);  // 1201
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::AddToTail(
							const PipelineLayoutImmutableSampler_t& src);  // 1872
					CDescriptorSetVulkan::GetImmutableSamplers(); // 1863
				}
				CDescriptorSetVulkan::GetNumImmutableSamplers(); // 1861
			}
			CDescriptorSetVulkan::GetDescriptorDescCount(); // 1852
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 1854
			CUtlMemory<unsigned int, int>::Base(); // 113
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 1854
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 1855
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 1857
			CDescriptorSetVulkan::GetDescriptorSetLayoutBindings(); // 1859
			CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 112
			CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 1859
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1859
		}
		{
			uint32_t nImmutableSampler; // 1889
			CUtlMemory<PipelineLayoutImmutableSampler_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator[](
					int i);  // 1891
			CUtlMemory<PipelineLayoutImmutableSampler_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Element(
				int i);  // 1201
			CopyConstruct<PipelineLayoutImmutableSampler_t>(PipelineLayoutImmutableSampler_t* pMemory,
									const PipelineLayoutImmutableSampler_t& src);  // 1201
			CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::AddToTail(
					const PipelineLayoutImmutableSampler_t& src);  // 1893
		}
		CUtlMemory<int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 1880
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtl this,
				int i);  // 1882
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 113
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 1882
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 112
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 1882
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1882
		Count(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, this); // 1884
		CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int,  this,
				int i);  // 1887
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 1886
		CUtlMemory<unsigned int, int>::Base(); // 113
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 1886
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
				int i);  // 1839
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Count(); // 1843
	}
	{
		int32 nSet; // 1922
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 1924
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1937
	}
	CPipelineVulkan::GetShader(
			RenderShaderType_t shaderType);  // 1759
	CUtlMemory<VkPushConstantRange, int>::operator[](
			int i);  // 595
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::operator[](
			int i);  // 1804
	CUtlMemory<VkPushConstantRange, int>::ValidateGrowSize(); // 475
	CUtlMemory<VkPushConstantRange, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::CUtlVector(); // 1810
	{
		const int  nAdd; // 1080
		const int  nAt; // 1081
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddMultipleToTail(
					int num);  // 1081
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1082
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCountZeroed(
				int num);  // 1820
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1819
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUt this); // 1821
	{
		const int  nAdd; // 1080
		const int  nAt; // 1081
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::Grow(
			int num);  // 806
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
					int num);  // 1081
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1082
	}
	EnsureCountZeroed(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
				int num);  // 1822
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory this); // 1823
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Grow(
		int num);  // 806
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 824
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
				int num);  // 1071
	EnsureCount(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
			int num);  // 1824
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVector(); // 1828
	CUtlVectorBase<int, CUtlMemory<int, int> >::end(); // 574
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 102
	CUtlVectorBase<int, CUtlMemory<int, int> >::begin(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 173
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 574
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator=(
			const CUtlVectorBase<int, CUtlMemory<int, int> >& other);  // 565
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator=(
			const CUtlVectorBase<int, CUtlMemory<int, int> >& other);  // 452
	CUtlVector<int, CUtlMemory<int, int> >::operator=(
			const CUtlVector<int, CUtlMemory<int, int> >& src);  // 1933
	end(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtl this); // 574
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::Base(); // 112
	Base(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 102
	begin(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 574
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Count(); // 573
	CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 112
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 102
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::begin(); // 574
	CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 113
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 105
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Count(); // 105
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 173
	UtlTraitsCopyRange<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding* pFrom,
							const VkDescriptorSetLayoutBinding* pFromEnd,
							VkDescriptorSetLayoutBinding* pTo);  // 574
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::operator=(
			const CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >& other);  // 565
	CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::operator=(
			const CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >& other);  // 452
	CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::operator=(
			const CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >& src);  // 209
	UtlTraitsCopyRange<CUtlVector<VkDescriptorSetLayoutBinding> >(const CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pFrom,
									const CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pFromEnd,
									CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pTo);  // 200
	UtlTraitsCopyRange<CUtlVector<VkDescriptorSetLayoutBinding> >(const CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pFrom,
									const CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pFromEnd,
									CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pTo);  // 574
	operator=(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
			const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory other);  // 565
	operator=(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
			const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory other);  // 452
	operator=(const CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUt this,
			const CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUt src);  // 1934
	end(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, this); // 574
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Base(); // 112
	Base(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 102
	begin(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 574
	UtlTraitsCopyRange<CUtlVector<unsigned int> >(const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pFrom,
							const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pFromEnd,
							CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pTo);  // 574
	operator=(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
			const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe other);  // 565
	operator=(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
			const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe other);  // 452
	operator=(const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory this,
			const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory src);  // 1941
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
	PipelineLayoutCreateInfo_t::PipelineLayoutCreateInfo_t(); // 1931
	CUtlMemory<VkPushConstantRange, int>::Base(); // 112
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Base(); // 102
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::begin(); // 574
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 173
	UtlTraitsCopyRange<VkPushConstantRange>(const VkPushConstantRange* pFrom,
						const VkPushConstantRange* pFromEnd,
						VkPushConstantRange* pTo);  // 574
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::operator=(
			const CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >& other);  // 565
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::operator=(
			const CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >& other);  // 452
	CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::operator=(
			const CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >& src);  // 1936
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
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 173
	UtlTraitsCopyRange<PipelineLayoutImmutableSampler_t>(const PipelineLayoutImmutableSampler_t* pFrom,
								const PipelineLayoutImmutableSampler_t* pFromEnd,
								PipelineLayoutImmutableSampler_t* pTo);  // 574
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator=(
			const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >& other);  // 565
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator=(
			const CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >& other);  // 452
	CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator=(
			const CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >& src);  // 1939
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 903
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 1799
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Purge(); // 560
	ValidateAlignment<PipelineLayoutImmutableSampler_t>(void); // 508
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Purge(); // 510
	CUtlMemory<PipelineLayoutImmutableSampler_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::~CUtlVector(); // 1957
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 560
	ValidateAlignment<CUtlVector<unsigned int> >(void); // 508
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory this); // 1957
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
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Purge(); // 560
		ValidateAlignment<VkDescriptorSetLayoutBinding>(void); // 508
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::Purge(); // 510
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::~CUtlMemory(); // 562
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::~CUtlVectorBase(); // 410
		CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<VkDescriptorSetLayoutBinding> >(CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 1798
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 560
	ValidateAlignment<CUtlVector<VkDescriptorSetLayoutBinding> >(void); // 508
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUt this); // 1957
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1957
	CUtlMemory<VkPushConstantRange, int>::Purge(); // 903
	CUtlMemory<VkPushConstantRange, int>::Purge(); // 1799
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Purge(); // 560
	ValidateAlignment<VkPushConstantRange>(void); // 508
	CUtlMemory<VkPushConstantRange, int>::Purge(); // 510
	CUtlMemory<VkPushConstantRange, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::~CUtlVector(); // 1957
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::AddToTail(); // 1813
	CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Base(); // 112
	Base(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 102
	begin(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 574
	UtlTraitsCopyRange<CUtlVector<unsigned int> >(const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pFrom,
							const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pFromEnd,
							CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pTo);  // 574
	operator=(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
			const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe other);  // 565
	operator=(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
			const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe other);  // 452
	operator=(const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory this,
			const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory src);  // 1944
} /* size: 0, variables: 16, inline expansions: 191 (10054 bytes) */

// <0072AC32> vulkan/pipelinemgrvulkan.cpp:1959
// variables: 20
// function calls: 82
void CPipelineManagerVulkan::GetOrAddPipelineLayout(const PipelineLayoutCreateInfo_t& pipelineLayoutHash, PipelineLayoutVulkan_t* pPipelineLayoutOut)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1961; // 1961
	PipelineLayoutHashHandle_t hLayout; // 1962
	const char   __FUNCTION__; // 57099
	{
		PipelineLayoutVulkan_t& pipelineLayoutEntry; // 1965
		CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, PipelineLayout this,
				handle_t idx);  // 1965
	}
	{
		CUtlFixedLinkedList<VkSampler_T*> immutableSamplers; // 1978
		VkPipelineLayoutCreateInfo pipelineLayoutCreateInfo; // 2048
		PipelineLayoutVulkan_t pipelineLayoutVulkan; // 2061
		{
			int32 nDescriptorSet; // 1979
			{
				VkDescriptorSetLayoutBinding* pLayoutBindings; // 1981
				VkDescriptorSetLayoutCreateInfo descriptorSetLayoutCreateInfo; // 2011
				VkDescriptorSetLayoutBindingFlagsCreateInfoEXT descriptorSetLayoutBindingFlagsCreateInfo; // 2018
				{
					uint32_t nImmutableSampler; // 1989
					{
						const CSamplerStateDesc* pImmutableSamplerDesc; // 1997
						CVulkanSamplerObject* pSamplerObject; // 1998
						IndexType_t nSamplerIndex; // 1999
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1994
						}
						CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::operator[](
								intp i);  // 482
						CUtlLinkedList<VkSampler_T::Element(
							long long int i);  // 825
						CopyConstruct<VkSampler_T*>(VkSampler_T** pMemory,
										VkSampler_T* const& src);  // 825
						CUtlLinkedList<VkSampler_T::InsertBefore(
								long long int before,
								VkSampler_T* const& src);  // 856
						CUtlLinkedList<VkSampler_T::AddToTail(
								VkSampler_T* const& src);  // 1999
						CUtlMemory<int, int>::operator[](
								int i);  // 595
						CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
								int i);  // 1994
						CUtlMemory<PipelineLayoutImmutableSampler_t, int>::operator[](
								int i);  // 595
						CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator[](
								int i);  // 1997
						CVulkanObject<VkSampler_T::Get()>* this); // 1999
						CUtlLinkedList<VkSampler_T::operator[](
								long long int i);  // 2002
						CUtlMemory<PipelineLayoutImmutableSampler_t, int>::operator[](
								int i);  // 595
						CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator[](
								int i);  // 2002
					}
					CUtlMemory<PipelineLayoutImmutableSampler_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator[](
							int i);  // 1992
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2031
				}
				CUtlString::CUtlString(); // 149
				CUtlString::Get(); // 151
				CUtlString::~CUtlString(); // 153
				_DOVK(VkResult result,
					const char* pCommand);  // 2030
				CRenderDeviceVulkan::EXTGraphicsPipelineLibraryEnabled(); // 2026
				CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtl this,
						int i);  // 2041
				CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 113
				CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 2041
				CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtl this,
						int i);  // 2008
				CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 113
				CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 2008
				CUtlMemory<int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 1985
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 1986
				CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtl this,
						int i);  // 1986
				CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 113
				CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 1986
				CUtlMemory<int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 2015
				Count(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, this); // 2019
				CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int,  this,
						int i);  // 2019
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 2019
				CUtlMemory<unsigned int, int>::Base(); // 113
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 2023
			}
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2059
		}
		CUtlLinkedList<VkSampler_T::ConstructList(); // 454
		CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::Grow(
			int num);  // 193
		CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::Init(
			int nGrowSize,
			int nInitSize);  // 161
		CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::CUtlFixedMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 448
		Iterator_t::Iterator_t(
				BlockHeader_t* p,
				intp i);  // 96
		CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::InvalidIterator(); // 448
		CUtlLinkedList<VkSampler_T::ResetDbgInfo(); // 455
		CUtlLinkedList<VkSampler_T::CUtlLinkedList(
				int growSize,
				int initSize);  // 404
		CUtlFixedLinkedList<VkSampler_T::CUtlFixedLinkedList(
					int growSize,
					int initSize);  // 1978
		CUtlMemory<VkPushConstantRange, int>::Base(); // 113
		CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Base(); // 2055
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 2057
		CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::operator[](
				int i);  // 720
		CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>::CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>(
											const PipelineLayoutCreateInfo_t& k,
											const PipelineLayoutVulkan_t& v);  // 1514
		Construct<CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, const PipelineLayoutCreateInfo_t&, const PipelineLayoutVulkan_t&>(CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>* pMemory); // 720
		DoInsert<const PipelineLayoutCreateInfo_t&>(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, PipelineLayout this,
								const PipelineLayoutCreateInfo_t& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 714
		DoInsert<const PipelineLayoutCreateInfo_t&>(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, PipelineLayout this,
								const PipelineLayoutCreateInfo_t& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 249
		Insert(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, PipelineLayout this,
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 2065
		{
			BlockHeader_t* pbh; // 338
			{
				BlockHeader_t* pFree; // 340
			}
		}
		CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::Purge(); // 167
		CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::~CUtlFixedMemory(); // 462
		CUtlLinkedList<VkSampler_T::~CUtlLinkedList(); // 400
		CUtlFixedLinkedList<VkSampler_T::~CUtlFixedLinkedList(); // 2069
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
			int nLineNumber);  // 1961
	Find(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, Pipeline this,
		KeyArg_t k);  // 1962
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2070
} /* size: 0, variables: 3, inline expansions: 11 (623 bytes) */

// <0072A5E1> vulkan/pipelinemgrvulkan.cpp:2075
// variables: 2
// function calls: 24
void CPipelineManagerVulkan::BuildVertexInputStateCreateInfo(const PipelineObjectVulkan_t* pPipelineObject, VkPipelineVertexInputStateCreateInfo& vertexInputCreateInfo, CUtlVectorFixed<VkVertexInputAttributeDescription, 16>& attributeDescriptions, CUtlVectorFixed<VkVertexInputBindingDescription, 16>& bindingDescriptions)
{
	{
		uint32_t nAttrib; // 2083
	}
	{
		uint32_t nBinding; // 2090
	}
	CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::Count(); // 1069
	CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::EnsureCount(
			int num);  // 2081
	CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::Count(); // 1069
	AlignedByteArrayExplicit_t<16, VkVertexInputBindingDescription, 4>::Base(); // 268
	CUtlMemoryFixed<VkVertexInputBindingDescription, 16>::Base(); // 112
	CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::Base(); // 368
	CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::ResetDbgInfo(); // 824
	CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::ShiftElementsRight(
				int elem,
				int num);  // 1446
	CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::EnsureCount(
			int num);  // 2082
	AlignedByteArrayExplicit_t<16, VkVertexInputAttributeDescription, 4>::Base(); // 268
	CUtlMemoryFixed<VkVertexInputAttributeDescription, 16>::Base(); // 112
	CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::Base(); // 2096
	AlignedByteArrayExplicit_t<16, VkVertexInputBindingDescription, 4>::Base(); // 268
	CUtlMemoryFixed<VkVertexInputBindingDescription, 16>::Base(); // 112
	CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::Base(); // 2097
} /* size: 309, inline expansions: 24 (180 bytes) */

// <0072A26A> vulkan/pipelinemgrvulkan.cpp:2103
// variable: 1
// function calls: 13
void CPipelineManagerVulkan::BuildColorBlendStateCreateInfo(const PipelineObjectVulkan_t* pPipelineObject, VkPipelineColorBlendStateCreateInfo& cbState, CUtlVectorFixed<VkPipelineColorBlendAttachmentState, 8>& cbAttachmentState)
{
	{
		uint32_t nTarget; // 2111
	}
	AlignedByteArrayExplicit_t<8, VkPipelineColorBlendAttachmentState, 4>::Base(); // 268
	CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8>::Base(); // 112
	CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::Base(); // 368
	CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::ResetDbgInfo(); // 824
	CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::SetCount(
		int count);  // 2109
	AlignedByteArrayExplicit_t<8, VkPipelineColorBlendAttachmentState, 4>::Base(); // 268
	CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8>::Base(); // 112
	CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::Base(); // 2122
} /* size: 228, inline expansions: 13 (111 bytes) */

// <007509D5> vulkan/pipelinemgrvulkan.cpp:2128
// variables: 2
void CPipelineManagerVulkan::BuildMultisampleStateCreateInfo(const PipelineObjectVulkan_t* pPipelineObject, VkPipelineMultisampleStateCreateInfo& msState)
{
	VkBool32 bAlphaToCoverageEnable; // 2138
	VkBool32 bAlphaToOneEnable; // 2139
} /* size: 0, variables: 2 */

// <00750A41> vulkan/pipelinemgrvulkan.cpp:2147
// variables: 2
// function calls: 2
void CPipelineManagerVulkan::BuildDescriptorSetLayoutBindingFlagsCreateInfo(VkDescriptorSetLayoutCreateInfo& descriptorSetLayoutCreateInfo, VkDescriptorSetLayoutBindingFlagsCreateInfoEXT& descriptorSetLayoutBindingFlagsCreateInfo, uint32 nBindingCount, VkDescriptorBindingFlags* pDescriptorBindingFlags)
{
	{
		VkDescriptorBindingFlags nBindingFlags; // 2158
		CRenderDeviceVulkan::EXTDescriptorIndexingEnabled(); // 2152
		{
		}
		{
			uint32 nDesc; // 2159
		}
	}
	CPipelineManagerVulkan::BuildDescriptorSetLayoutBindingFlagsCreateInfo(
							VkDescriptorSetLayoutCreateInfo& descriptorSetLayoutCreateInfo,
							VkDescriptorSetLayoutBindingFlagsCreateInfoEXT& descriptorSetLayoutBindingFlagsCreateInfo,
							uint32 nBindingCount,
							VkDescriptorBindingFlags* pDescriptorBindingFlags);  // 2147
} /* size: 0, inline expansions: 1 (167 bytes) */

// <0072A18A> vulkan/pipelinemgrvulkan.cpp:2147
// variables: 4
void CPipelineManagerVulkan::BuildDescriptorSetLayoutBindingFlagsCreateInfo(VkDescriptorSetLayoutCreateInfo& descriptorSetLayoutCreateInfo, VkDescriptorSetLayoutBindingFlagsCreateInfoEXT& descriptorSetLayoutBindingFlagsCreateInfo, uint32 nBindingCount, VkDescriptorBindingFlags* pDescriptorBindingFlags)
{
	const char   __FUNCTION__; // 57667
	{
		VkDescriptorBindingFlags nBindingFlags; // 2158
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2152
		}
		{
			uint32 nDesc; // 2159
		}
	}
} /* size: 0, variables: 1 */

// <0072A0A1> vulkan/pipelinemgrvulkan.cpp:2192
// variables: 2
void CPipelineManagerVulkan::EnsurePipelineCache(PerThreadDataVulkan_t* pPerThread)
{
	{
		VkPipelineCacheCreateInfo cacheCreateInfo; // 2196
		VkResult nResult; // 2198
	}
} /* size: 232 */

// <007226FB> vulkan/pipelinemgrvulkan.cpp:2210
// variables: 59
// function calls: 473
void CPipelineManagerVulkan::CreatePipeline(const CPipelineVulkan* pPipelineVulkan, PipelineObjectVulkan_t* pPipelineOut, PerThreadDataVulkan_t* pPerThread, VkGraphicsPipelineLibraryFlagsEXT nPipelineLibraryStage, const PipelineLayoutCreateInfo_t* pPreWarmPiplineLayoutCreateInfo)
{
	VkPipelineCache pPipelineCache; // 2213
	float flThrottleMs; // 2215
	bool bTimeCompiles; // 2219
	uint64_t nStartTick; // 2220
	uint64_t nPipelineCompileStartTick; // 2221
	uint64_t nPipelineCompileEndTick; // 2222
	const bool  bIsComputeShader; // 2223
	const char   __FUNCTION__; // 56888
	int32 nFirstStage; // 2225
	int32 nLastStage; // 2226
	size_t nCurrentPipelineSize; // 2244
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2224
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2267
	}
	{
		const bool  bFullPipeline; // 2281
		VkGraphicsPipelineCreateInfo pipelineCreateInfo; // 2284
		VkPipelineVertexInputStateCreateInfo vertexInputCreateInfo; // 2289
		CUtlVectorFixed<VkVertexInputAttributeDescription, 16> attributeDescriptions; // 2290
		CUtlVectorFixed<VkVertexInputBindingDescription, 16> bindingDescriptions; // 2291
		VkPipelineDepthStencilStateCreateInfo dsState; // 2295
		VkPipelineColorBlendStateCreateInfo cbState; // 2317
		CUtlVectorFixed<VkPipelineColorBlendAttachmentState, 8> cbAttachmentState; // 2318
		VkPipelineRasterizationStateCreateInfo rsState; // 2322
		VkPipelineInputAssemblyStateCreateInfo iaState; // 2338
		VkPipelineTessellationStateCreateInfo tessState; // 2344
		VkPipelineMultisampleStateCreateInfo msState; // 2349
		VkPipelineViewportStateCreateInfo vpState; // 2353
		VkPipelineShaderStageCreateInfo shaderStages; // 2364
		uint32_t nPackedShaderCount; // 2365
		VkPipelineRenderingCreateInfoKHR pipelineRenderingCreateInfo; // 2414
		VkBaseInStructure* pInputStruct; // 2415
		CUtlVectorFixedGrowable<VkDynamicState, 23> dynamicStates; // 2432
		VkPipelineDynamicStateCreateInfo dynamicStateCreateInfo; // 2480
		VkGraphicsPipelineLibraryCreateInfoEXT pipelineLibraryCreateInfo; // 2487
		{
			int32 nShaderStage; // 2366
			{
				const CShaderVulkanBase* pShader; // 2368
				CPipelineVulkan::GetShader(
						RenderShaderType_t shaderType);  // 2368
			}
		}
		{
			VkFormat nDepthStencilFormat; // 2422
		}
		{
			const CVertexShaderVulkan* pVertexShader; // 2501
			CPipelineVulkan::GetShader(
					RenderShaderType_t shaderType);  // 2501
		}
		{
			const char* pDebugName; // 2523
			VkResult nResult; // 2545
			VkPipelineCache pPipelineCacheToUse; // 2546
			{
				uint32_t nShaderType; // 2525
				{
					const CShaderVulkanBase* pShader; // 2527
					CShaderVulkanBase::GetDebugName(); // 2528
				}
			}
			{
				CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> > generated_id_2549; // 2549
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2554
				}
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 3047
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 3053
				CThreadRWLock::LockForRead(
						const char* pFileName,
						int nLineNumber);  // 951
				Lock(CThreadRWLock& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::CAutoLockT(
						const CThreadRWLock& lock,
						const char* pFilename,
						int nLineNumber);  // 2549
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 3058
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 3064
				CThreadRWLock::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 952
				Unlock(CThreadRWLock& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::~CAutoLockT(); // 2557
			}
			{
				CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> > generated_id_2563; // 2563
				{
					uint32_t nShaderType; // 2568
					{
						const CShaderVulkanBase* pShader; // 2570
						CShaderVulkanBase::GetDebugName(); // 2571
						CShaderVulkanBase::GetDebugName(); // 2573
					}
				}
				{
					const int  nNumRetries; // 2583
					int nRetry; // 2584
					CUtlString::CUtlString(); // 171
					CUtlString::Get(); // 173
					CUtlString::~CUtlString(); // 176
					_DOVK_RESULT(VkResult result,
							const char* pCommand);  // 2587
				}
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 3047
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 3053
				CThreadRWLock::LockForRead(
						const char* pFileName,
						int nLineNumber);  // 951
				Lock(CThreadRWLock& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::CAutoLockT(
						const CThreadRWLock& lock,
						const char* pFilename,
						int nLineNumber);  // 2563
				CUtlString::CUtlString(); // 171
				CUtlString::Get(); // 173
				CUtlString::~CUtlString(); // 176
				_DOVK_RESULT(VkResult result,
						const char* pCommand);  // 2564
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 3058
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 3064
				CThreadRWLock::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 952
				Unlock(CThreadRWLock& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::~CAutoLockT(); // 2605
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 3058
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 3064
				CThreadRWLock::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 952
				Unlock(CThreadRWLock& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::~CAutoLockT(); // 2605
			}
			PLAT_CPU_TIME(void); // 263
			CCycleCount::Sample(); // 2539
			CRenderDeviceVulkan::EXTPipelineCreationCacheControlEnabled(); // 2547
			SetPipelineDebugName(const char* pDebugName,
						VkPipeline pPipeline);  // 2607
		}
		AlignedByteArrayExplicit_t<16, VkVertexInputAttributeDescription, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<16, VkVertexInputAttributeDescription>::AlignedByteArray_t(); // 256
		CUtlMemoryFixed<VkVertexInputAttributeDescription, 16>::CUtlMemoryFixed(
				int nGrowSize,
				int nInitSize);  // 527
		AlignedByteArrayExplicit_t<16, VkVertexInputAttributeDescription, 4>::Base(); // 268
		CUtlMemoryFixed<VkVertexInputAttributeDescription, 16>::Base(); // 112
		CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::Base(); // 368
		CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::ResetDbgInfo(); // 530
		CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 467
		CUtlVectorFixed<VkVertexInputAttributeDescription, 16>::CUtlVectorFixed(
				int growSize,
				int initCapacity);  // 2290
		AlignedByteArrayExplicit_t<16, VkVertexInputBindingDescription, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<16, VkVertexInputBindingDescription>::AlignedByteArray_t(); // 256
		CUtlMemoryFixed<VkVertexInputBindingDescription, 16>::CUtlMemoryFixed(
				int nGrowSize,
				int nInitSize);  // 527
		AlignedByteArrayExplicit_t<16, VkVertexInputBindingDescription, 4>::Base(); // 268
		CUtlMemoryFixed<VkVertexInputBindingDescription, 16>::Base(); // 112
		CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::Base(); // 368
		CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::ResetDbgInfo(); // 530
		CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 467
		CUtlVectorFixed<VkVertexInputBindingDescription, 16>::CUtlVectorFixed(
				int growSize,
				int initCapacity);  // 2291
		CRenderDeviceVulkan::KHRPipelineExecutablePropertiesEnabled(); // 2286
		AlignedByteArrayExplicit_t<8, VkPipelineColorBlendAttachmentState, 4>::Base(); // 268
		CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8>::Base(); // 112
		CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::Base(); // 368
		CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::ResetDbgInfo(); // 530
		AlignedByteArrayExplicit_t<8, VkPipelineColorBlendAttachmentState, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<8, VkPipelineColorBlendAttachmentState>::AlignedByteArray_t(); // 256
		CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8>::CUtlMemoryFixed(
				int nGrowSize,
				int nInitSize);  // 527
		CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 467
		CUtlVectorFixed<VkPipelineColorBlendAttachmentState, 8>::CUtlVectorFixed(
				int growSize,
				int initCapacity);  // 2318
		CPipelineManagerVulkan::BuildMultisampleStateCreateInfo(
						const PipelineObjectVulkan_t* pPipelineObject,
						VkPipelineMultisampleStateCreateInfo& msState);  // 2350
		CRenderDeviceVulkan::EXTExtendedDynamicStateEnabled(); // 2355
		CRenderDeviceVulkan::KHRDynamicRenderingEnabled(); // 2416
		CUtlMemory<VkDynamicState, int>::CUtlMemory(
				VkDynamicState* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<VkDynamicState, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<VkDynamicState, int>::CUtlMemoryFixedGrowable_Base(
						VkDynamicState* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<23, VkDynamicState, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<23, VkDynamicState>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<23, VkDynamicState, 4>::Base(); // 231
		CUtlMemoryFixedGrowable<VkDynamicState, 23, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<VkDynamicState, 23>::CUtlVectorFixedGrowable(
					int growSize);  // 2432
		CRenderDeviceVulkan::EXTExtendedDynamicStateEnabled(); // 2435
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2440
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2441
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2442
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2443
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2444
		CRenderDeviceVulkan::EXTExtendedDynamicStateEnabled(); // 2447
		CRenderDeviceVulkan::EXTExtendedDynamicState2Enabled(); // 2466
		CRenderDeviceVulkan::EXTExtendedDynamicState3Enabled(); // 2474
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Count(); // 2483
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 2484
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::RemoveAll(); // 1798
		AlignedByteArrayExplicit_t<23, VkDynamicState, 4>::Base(); // 237
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 577
		CUtlMemory<VkDynamicState, int>::ConvertToExternalMemory(
					VkDynamicState* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<VkDynamicState, int>::Purge_FixedGrowable(
					VkDynamicState* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<VkDynamicState, int>::Purge_FixedGrowable(
					VkDynamicState* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<VkDynamicState, 23, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Purge(); // 560
		ValidateAlignment<VkDynamicState>(void); // 508
		CUtlMemory<VkDynamicState, int>::Purge(); // 903
		CUtlMemory<VkDynamicState, int>::Purge(); // 510
		CUtlMemory<VkDynamicState, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<VkDynamicState, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<VkDynamicState, 23, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<VkDynamicState, 23>::~CUtlVectorFixedGrowable(); // 2609
		CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::Purge(); // 560
		ValidateAlignment<VkPipelineColorBlendAttachmentState>(void); // 258
		CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<VkPipelineColorBlendAttachmentState, 8>::~CUtlVectorFixed(); // 2609
		CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::Purge(); // 560
		ValidateAlignment<VkVertexInputBindingDescription>(void); // 258
		CUtlMemoryFixed<VkVertexInputBindingDescription, 16>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<VkVertexInputBindingDescription, 16>::~CUtlVectorFixed(); // 2609
		CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::Purge(); // 560
		ValidateAlignment<VkVertexInputAttributeDescription>(void); // 258
		CUtlMemoryFixed<VkVertexInputAttributeDescription, 16>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<VkVertexInputAttributeDescription, 16>::~CUtlVectorFixed(); // 2609
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::RemoveAll(); // 1798
		AlignedByteArrayExplicit_t<23, VkDynamicState, 4>::Base(); // 237
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 577
		CUtlMemory<VkDynamicState, int>::ConvertToExternalMemory(
					VkDynamicState* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<VkDynamicState, int>::Purge_FixedGrowable(
					VkDynamicState* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<VkDynamicState, int>::Purge_FixedGrowable(
					VkDynamicState* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<VkDynamicState, 23, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Purge(); // 560
		ValidateAlignment<VkDynamicState>(void); // 508
		CUtlMemory<VkDynamicState, int>::Purge(); // 903
		CUtlMemory<VkDynamicState, int>::Purge(); // 510
		CUtlMemory<VkDynamicState, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<VkDynamicState, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<VkDynamicState, 23, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<VkDynamicState, 23>::~CUtlVectorFixedGrowable(); // 2609
		CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::Purge(); // 560
		ValidateAlignment<VkPipelineColorBlendAttachmentState>(void); // 258
		CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<VkPipelineColorBlendAttachmentState, 8>::~CUtlVectorFixed(); // 2609
		CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::Purge(); // 560
		ValidateAlignment<VkVertexInputBindingDescription>(void); // 258
		CUtlMemoryFixed<VkVertexInputBindingDescription, 16>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<VkVertexInputBindingDescription, 16>::~CUtlVectorFixed(); // 2609
		CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::Purge(); // 560
		ValidateAlignment<VkVertexInputAttributeDescription>(void); // 258
		CUtlMemoryFixed<VkVertexInputAttributeDescription, 16>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<VkVertexInputAttributeDescription, 16>::~CUtlVectorFixed(); // 2609
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2476
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2477
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2449
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2450
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2451
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2452
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2453
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2454
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2455
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2456
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2457
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2458
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2461
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2462
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2437
		CUtlMemory<VkDynamicState, int>::NumAllocated(); // 1247
		CUtlMemory<VkDynamicState, int>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::ResetDbgInfo(); // 824
		CUtlMemory<VkDynamicState, int>::IsGrowable(); // 823
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 859
		CUtlMemory<VkDynamicState, int>::IsExternallyAllocated(); // 861
		CUtlMemory<VkDynamicState, int>::Grow(
			int num);  // 806
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<VkDynamicState, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::Element(
			int i);  // 1252
		Construct<VkDynamicState, VkDynamicState>(VkDynamicState* pMemory); // 1252
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixedGrowable<VkDynamicState, 23, int> >::AddToTail(
				VkDynamicState& src);  // 2470
	}
	{
		VkComputePipelineCreateInfo computePipelineCreateInfo; // 2624
		{
			VkResult nResult; // 2659
			{
				CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> > generated_id_2662; // 2662
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2667
				}
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 3047
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 3053
				CThreadRWLock::LockForRead(
						const char* pFileName,
						int nLineNumber);  // 951
				Lock(CThreadRWLock& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::CAutoLockT(
						const CThreadRWLock& lock,
						const char* pFilename,
						int nLineNumber);  // 2662
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 3058
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 3064
				CThreadRWLock::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 952
				Unlock(CThreadRWLock& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::~CAutoLockT(); // 2669
			}
			{
				CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> > generated_id_2675; // 2675
				{
					const CShaderVulkanBase* pShader; // 2679
					CShaderVulkanBase::GetDebugName(); // 2680
					CShaderVulkanBase::GetDebugName(); // 2682
				}
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 3047
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 3053
				CThreadRWLock::LockForRead(
						const char* pFileName,
						int nLineNumber);  // 951
				Lock(CThreadRWLock& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::CAutoLockT(
						const CThreadRWLock& lock,
						const char* pFilename,
						int nLineNumber);  // 2675
				CUtlString::CUtlString(); // 171
				CUtlString::Get(); // 173
				CUtlString::~CUtlString(); // 176
				_DOVK_RESULT(VkResult result,
						const char* pCommand);  // 2676
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 3058
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 3064
				CThreadRWLock::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 952
				Unlock(CThreadRWLock& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::~CAutoLockT(); // 2686
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 3058
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 3064
				CThreadRWLock::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 952
				Unlock(CThreadRWLock& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::~CAutoLockT(); // 2686
			}
			CRenderDeviceVulkan::EXTPipelineCreationCacheControlEnabled(); // 2660
			PLAT_CPU_TIME(void); // 263
			CCycleCount::Sample(); // 2653
			CPipelineVulkan::GetShader(
					RenderShaderType_t shaderType);  // 2688
			CShaderVulkanBase::GetDebugName(); // 2688
			SetPipelineDebugName(const char* pDebugName,
						VkPipeline pPipeline);  // 2688
		}
		CPipelineVulkan::GetShader(
				RenderShaderType_t shaderType);  // 2614
		CRenderDeviceVulkan::KHRPipelineExecutablePropertiesEnabled(); // 2626
		CPipelineVulkan::GetShader(
				RenderShaderType_t shaderType);  // 2627
	}
	{
		uint64_t nEndTick; // 2704
		uint64_t nCPUFrequency; // 2705
		double flPipelineCompileTimeInDriver; // 2707
		double flTotalTime; // 2708
		PLAT_CPU_TIME(void); // 263
		CCycleCount::Sample(); // 2703
		Plat_TickDiffMicroSecF(uint64 nStartTicks,
					uint64 nEndTicks,
					uint64 nFreq);  // 2707
		Plat_TickDiffMicroSecF(uint64 nStartTicks,
					uint64 nEndTicks,
					uint64 nFreq);  // 2708
	}
	ConVar::GetFloat(); // 2215
	CRenderDeviceVulkan::GetUnthrottledPipelineCreationFrameCount(); // 2216
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 2219
	CPipelineVulkan::GetShader(
			RenderShaderType_t shaderType);  // 2224
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 2247
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 2251
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 2270
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 2694
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 2239
	CRenderDeviceVulkan::KHRPipelineExecutablePropertiesEnabled(); // 2732
} /* size: 0, variables: 11, inline expansions: 18 (418 bytes) */

// <007224DD> vulkan/pipelinemgrvulkan.cpp:2743
// variables: 9
// function call: 1
void CPipelineManagerVulkan::SetShaderStatsFromPipelineExecutableInfo(const CPipelineVulkan* pPipelineVulkan, VkPipeline pPipeline)
{
	uint32_t nExecutableCount; // 2751
	VkPipelineInfoKHR pipelineInfo; // 2752
	VkPipelineExecutablePropertiesKHR* pExecutableProperties; // 2757
	{
		uint32_t nExecutableIndex; // 2760
		{
			RenderShaderType_t shaderType; // 2762
			CShaderVulkanBase* pBoundShader; // 2768
			VkPipelineExecutableInfoKHR executableInfo; // 2775
			uint32_t nStatisticCount; // 2780
			{
				VkPipelineExecutableStatisticKHR* pExecutableStats; // 2784
			}
		}
	}
	CRenderDeviceVulkan::KHRPipelineExecutablePropertiesEnabled(); // 2746
} /* size: 649, variables: 3, inline expansions: 1 (23 bytes) */

// <00721331> vulkan/pipelinemgrvulkan.cpp:2792
// variables: 11
// function calls: 65
void CPipelineManagerVulkan::UpdatePendingPipelineObjects(uint32_t nHighestFrameCompletedOnGPU)
{
	CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> > generated_id_2797; // 2797
	IndexType_t nIter; // 2826
	{
		UtlHashHandle_t nIndex; // 2800
		{
			bool bDidInsert; // 2805
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Key(
				handle_t idx);  // 2806
			PipelineCreateHashFunctor_t::operator(
					const PipelineCreateInfo_t& pipelineCreateInfo);  // 249
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
					int i);  // 720
			CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t::CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>(
											const PipelineCreateInfo_t& k,
											PipelineObjectVulkan_t* const& v);  // 1514
			Construct<CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>, const PipelineCreateInfo_t&, PipelineObjectVulkan_t*&>(CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>* pMemory); // 720
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::DoInsert<const PipelineCreateInfo_t&>(
								const PipelineCreateInfo_t& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 714
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::DoInsert<const PipelineCreateInfo_t&>(
								const PipelineCreateInfo_t& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 249
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Insert(
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 2806
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
					int i);  // 297
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
					handle_t idx);  // 2809
		}
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 915
			CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsValid(); // 917
		}
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::FirstHandle(); // 2800
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
				int i);  // 297
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
				handle_t idx);  // 2803
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 915
			CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsValid(); // 917
		}
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::NextHandle(
				handle_t start);  // 2800
	}
	{
		PipelineObjectVulkan_t* pPipelineObject; // 2829
		{
			IndexType_t nIndexToDelete; // 2834
			CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::operator[](
					int i);  // 368
			CUtlLinkedList<PipelineObjectVulkan_t::InternalElement(
					int i);  // 550
			CUtlLinkedList<PipelineObjectVulkan_t::Next(
				int i);  // 2835
			CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::IsIdxValid(
					int i);  // 588
			CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::IsIdxAfter(
					int i,
					const Iterator_t& it);  // 591
			CUtlLinkedList<PipelineObjectVulkan_t::IsValidIndex(
					int i);  // 583
			CUtlLinkedList<PipelineObjectVulkan_t::IsValidIndex(
					int i);  // 749
			CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::operator[](
					int i);  // 367
			CUtlLinkedList<PipelineObjectVulkan_t::InternalElement(
					int i);  // 752
			Destruct<PipelineObjectVulkan_t*>(PipelineObjectVulkan_t** pMemory); // 753
			{
			}
			CUtlLinkedList<PipelineObjectVulkan_t::Free(
				int elem);  // 907
			CUtlLinkedList<PipelineObjectVulkan_t::Remove(
				int elem);  // 2836
		}
		CUtlLinkedList<PipelineObjectVulkan_t::Next(
			int i);  // 2841
		CUtlMemory<UtlLinkedListElem_t<PipelineObjectVulkan_t::operator[](
				int i);  // 494
		CUtlLinkedList<PipelineObjectVulkan_t::operator[](
				int i);  // 2829
	}
	{
		UtlHashHandle_t hElem; // 2849
		CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::Count(); // 915
			CUtlHashtableEntry<VkRenderPass_T::IsValid(); // 917
		}
		CUtlHashtable<VkRenderPass_T::NextHandle(
				handle_t start);  // 208
		CUtlHashtable<VkRenderPass_T::FirstHandle(); // 2849
		CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::operator[](
				int i);  // 297
		CUtlHashtable<VkRenderPass_T::operator[](
				handle_t idx);  // 2851
		CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::Count(); // 915
			CUtlHashtableEntry<VkRenderPass_T::IsValid(); // 917
		}
		CUtlHashtable<VkRenderPass_T::NextHandle(
				handle_t start);  // 2849
	}
	Lock(CThreadRWLock& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >::CAutoLockT(
			const CThreadRWLock& lock,
			const char* pFilename,
			int nLineNumber);  // 2797
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 284
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Purge(); // 2813
	CUtlLinkedList<PipelineObjectVulkan_t::Head(); // 2826
	CUtlLinkedList<PipelineObjectVulkan_t::Head(); // 142
	CUtlLinkedList<PipelineObjectVulkan_t::IsEmpty(); // 2847
	CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<VkRenderPass_T::Purge(); // 284
	CUtlHashtable<VkRenderPass_T::Purge(); // 2853
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 2857
	Unlock(CThreadRWLock& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >::~CAutoLockT(); // 2878
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 2861
} /* size: 0, variables: 2, inline expansions: 18 (450 bytes) */

// <0071FE26> vulkan/pipelinemgrvulkan.cpp:2886
// variables: 13
// function calls: 63
void CPipelineManagerVulkan::GetOrCreatePipeline(PerThreadDataVulkan_t* pPerThread, const CPipelineVulkan* pPipelineVulkan, VkGraphicsPipelineLibraryFlagsEXT nPipelineLibraryStage, const PipelineLayoutCreateInfo_t* pPreWarmPiplineLayoutCreateInfo, bool* pCreatedNewPipelineOut)
{
	PipelineObjectVulkan_t* pPipeline; // 2888
	PipelineHashHandle_t hElem; // 2889
	const char   __FUNCTION__; // 57023
	{
		bool bFoundInPendingTable; // 2899
		COneTimeEvent* pCompileFinishedEvent; // 2900
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2904; // 2904
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
					int nLineNumber);  // 2904
			PipelineCreateHashFunctor_t::operator(
					const PipelineCreateInfo_t& pipelineCreateInfo);  // 218
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Find(
				KeyArg_t k);  // 2905
			CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
					int i);  // 297
			CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
					handle_t idx);  // 2910
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2922
		}
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2933; // 2933
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
					int nLineNumber);  // 2933
		}
		{
			bool bCompileOnThisThread; // 2943
			PipelineObjectVulkan_t* pNewPipelineObject; // 2944
			{
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2948; // 2948
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
						int nLineNumber);  // 2948
				PipelineCreateHashFunctor_t::operator(
						const PipelineCreateInfo_t& pipelineCreateInfo);  // 218
				CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Find(
					KeyArg_t k);  // 2949
				CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
						int i);  // 297
				CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
						handle_t idx);  // 2965
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2973
				PipelineCreateInfo_t::PipelineCreateInfo_t(); // 658
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 660
				PipelineObjectVulkan_t::PipelineObjectVulkan_t(); // 2954
				PipelineCreateHashFunctor_t::operator(
						const PipelineCreateInfo_t& pipelineCreateInfo);  // 249
				CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
						int i);  // 720
				CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t::CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>(
												const PipelineCreateInfo_t& k,
												PipelineObjectVulkan_t* const& v);  // 1514
				Construct<CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>, const PipelineCreateInfo_t&, PipelineObjectVulkan_t*&>(CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>* pMemory); // 720
				CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::DoInsert<const PipelineCreateInfo_t&>(
									const PipelineCreateInfo_t& k,
									Arg_t v,
									unsigned int h,
									bool* pDidInsert);  // 714
				CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::DoInsert<const PipelineCreateInfo_t&>(
									const PipelineCreateInfo_t& k,
									Arg_t v,
									unsigned int h,
									bool* pDidInsert);  // 249
				CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Insert(
					KeyArg_t k,
					ValueArg_t v,
					bool* pDidInsert);  // 2957
			}
			{
				bool bPipelineCreated; // 2996
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3003
				}
				COneTimeEvent::Set(); // 3004
			}
			{
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_3022; // 3022
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 3027
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
						int nLineNumber);  // 3022
			}
			COneTimeEvent::Wait(
				uint32 dwTimeout);  // 3016
		}
		COneTimeEvent::Wait(
			uint32 dwTimeout);  // 2928
	}
	CPipelineVulkan::GetPipelineInfo(); // 2889
	PipelineCreateHashFunctor_t::operator(
			const PipelineCreateInfo_t& pipelineCreateInfo);  // 218
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Find(
		KeyArg_t k);  // 2889
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
			int i);  // 297
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
			handle_t idx);  // 2893
} /* size: 0, variables: 3, inline expansions: 5 (101 bytes) */

// <0071E07D> vulkan/pipelinemgrvulkan.cpp:3039
// variables: 11
// function calls: 104
void CPipelineManagerVulkan::GetOrCreateVertexInputPipelineLibrary(const CPipelineVulkan* pPipelineVulkan)
{
	PipelineObjectVulkan_t* pPipelineOut; // 3041
	PipelineHashHandle_t hElem; // 3044
	{
		VkGraphicsPipelineCreateInfo pipelineCreateInfo; // 3063
		VkPipelineVertexInputStateCreateInfo vertexInputCreateInfo; // 3067
		CUtlVectorFixed<VkVertexInputAttributeDescription, 16> attributeDescriptions; // 3068
		CUtlVectorFixed<VkVertexInputBindingDescription, 16> bindingDescriptions; // 3069
		VkPipelineInputAssemblyStateCreateInfo iaState; // 3073
		VkGraphicsPipelineLibraryCreateInfoEXT pipelineLibraryCreateInfo; // 3078
		CUtlVectorFixed<VkDynamicState, 1> dynamicStates; // 3090
		VkPipelineDynamicStateCreateInfo dynamicStateCreateInfo; // 3093
		{
			VkResult nResult; // 3101
			CUtlString::CUtlString(); // 171
			CUtlString::Get(); // 173
			CUtlString::~CUtlString(); // 176
			_DOVK_RESULT(VkResult result,
					const char* pCommand);  // 3101
		}
		PipelineCreateInfo_t::PipelineCreateInfo_t(); // 658
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 660
		PipelineObjectVulkan_t::PipelineObjectVulkan_t(); // 3060
		AlignedByteArrayExplicit_t<16, VkVertexInputAttributeDescription, 4>::Base(); // 268
		CUtlMemoryFixed<VkVertexInputAttributeDescription, 16>::Base(); // 112
		CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::Base(); // 368
		CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::ResetDbgInfo(); // 530
		AlignedByteArrayExplicit_t<16, VkVertexInputAttributeDescription, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<16, VkVertexInputAttributeDescription>::AlignedByteArray_t(); // 256
		CUtlMemoryFixed<VkVertexInputAttributeDescription, 16>::CUtlMemoryFixed(
				int nGrowSize,
				int nInitSize);  // 527
		CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 467
		CUtlVectorFixed<VkVertexInputAttributeDescription, 16>::CUtlVectorFixed(
				int growSize,
				int initCapacity);  // 3068
		AlignedByteArrayExplicit_t<16, VkVertexInputBindingDescription, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<16, VkVertexInputBindingDescription>::AlignedByteArray_t(); // 256
		CUtlMemoryFixed<VkVertexInputBindingDescription, 16>::CUtlMemoryFixed(
				int nGrowSize,
				int nInitSize);  // 527
		AlignedByteArrayExplicit_t<16, VkVertexInputBindingDescription, 4>::Base(); // 268
		CUtlMemoryFixed<VkVertexInputBindingDescription, 16>::Base(); // 112
		CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::Base(); // 368
		CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::ResetDbgInfo(); // 530
		CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 467
		CUtlVectorFixed<VkVertexInputBindingDescription, 16>::CUtlVectorFixed(
				int growSize,
				int initCapacity);  // 3069
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixed<VkDynamicState, 1> >::AddToTail(
				VkDynamicState& src);  // 3091
		AlignedByteArrayExplicit_t<1, VkDynamicState, 4>::Base(); // 268
		CUtlMemoryFixed<VkDynamicState, 1>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixed<VkDynamicState, 1> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixed<VkDynamicState, 1> >::ResetDbgInfo(); // 530
		AlignedByteArrayExplicit_t<1, VkDynamicState, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<1, VkDynamicState>::AlignedByteArray_t(); // 256
		CUtlMemoryFixed<VkDynamicState, 1>::CUtlMemoryFixed(
				int nGrowSize,
				int nInitSize);  // 527
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixed<VkDynamicState, 1> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 467
		CUtlVectorFixed<VkDynamicState, 1>::CUtlVectorFixed(
				int growSize,
				int initCapacity);  // 3090
		AlignedByteArrayExplicit_t<1, VkDynamicState, 4>::Base(); // 268
		CUtlMemoryFixed<VkDynamicState, 1>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixed<VkDynamicState, 1> >::Base(); // 3097
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixed<VkDynamicState, 1> >::Purge(); // 560
		ValidateAlignment<VkDynamicState>(void); // 258
		CUtlMemoryFixed<VkDynamicState, 1>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixed<VkDynamicState, 1> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<VkDynamicState, 1>::~CUtlVectorFixed(); // 3114
		CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::Purge(); // 560
		ValidateAlignment<VkVertexInputBindingDescription>(void); // 258
		CUtlMemoryFixed<VkVertexInputBindingDescription, 16>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<VkVertexInputBindingDescription, 16>::~CUtlVectorFixed(); // 3114
		CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::Purge(); // 560
		ValidateAlignment<VkVertexInputAttributeDescription>(void); // 258
		CUtlMemoryFixed<VkVertexInputAttributeDescription, 16>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<VkVertexInputAttributeDescription, 16>::~CUtlVectorFixed(); // 3114
		SetPipelineDebugName(const char* pDebugName,
					VkPipeline pPipeline);  // 3111
		HashCombine(uint64& nSeed,
				uint64 nHash);  // 319
		HashCombine(uint64& nSeed,
				uint64 nHash);  // 320
		HashCombine(uint64& nSeed,
				uint64 nHash);  // 321
		HashCombine(uint64& nSeed,
				uint64 nHash);  // 322
		PipelineLibraryVertexInputCreateHashFunctor_t::operator(
				const PipelineCreateInfo_t& pipelineCreateInfo);  // 249
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
				int i);  // 720
		CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t::CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>(
										const PipelineCreateInfo_t& k,
										PipelineObjectVulkan_t* const& v);  // 1514
		Construct<CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>, const PipelineCreateInfo_t&, PipelineObjectVulkan_t*&>(CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>* pMemory); // 720
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::DoInsert<const PipelineCreateInfo_t&>(
							const PipelineCreateInfo_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::DoInsert<const PipelineCreateInfo_t&>(
							const PipelineCreateInfo_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Insert(
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 3113
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixed<VkDynamicState, 1> >::Purge(); // 560
		ValidateAlignment<VkDynamicState>(void); // 258
		CUtlMemoryFixed<VkDynamicState, 1>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixed<VkDynamicState, 1> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<VkDynamicState, 1>::~CUtlVectorFixed(); // 3114
		CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::Purge(); // 560
		ValidateAlignment<VkVertexInputBindingDescription>(void); // 258
		CUtlMemoryFixed<VkVertexInputBindingDescription, 16>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<VkVertexInputBindingDescription, CUtlMemoryFixed<VkVertexInputBindingDescription, 16> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<VkVertexInputBindingDescription, 16>::~CUtlVectorFixed(); // 3114
		CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::Purge(); // 560
		ValidateAlignment<VkVertexInputAttributeDescription>(void); // 258
		CUtlMemoryFixed<VkVertexInputAttributeDescription, 16>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<VkVertexInputAttributeDescription, CUtlMemoryFixed<VkVertexInputAttributeDescription, 16> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<VkVertexInputAttributeDescription, 16>::~CUtlVectorFixed(); // 3114
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 3043
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 319
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 320
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 321
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 322
	PipelineLibraryVertexInputCreateHashFunctor_t::operator(
			const PipelineCreateInfo_t& pipelineCreateInfo);  // 218
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Find(
		KeyArg_t k);  // 3044
	CPipelineVulkan::GetPipelineInfo(); // 3044
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
			int i);  // 297
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
			handle_t idx);  // 3047
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
			int i);  // 297
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
			handle_t idx);  // 3117
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 319
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 320
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 321
	HashCombine(uint64& nSeed,
			uint64 nHash);  // 322
	PipelineLibraryVertexInputCreateHashFunctor_t::operator(
			const PipelineCreateInfo_t& pipelineCreateInfo);  // 218
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Find(
		KeyArg_t k);  // 3056
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 3121
} /* size: 2706, variables: 2, inline expansions: 23 (2399 bytes) */

// <0071CBA1> vulkan/pipelinemgrvulkan.cpp:3128
// variables: 13
// function calls: 71
void CPipelineManagerVulkan::GetOrCreateFragmentOutputPipelineLibrary(const CPipelineVulkan* pPipelineVulkan)
{
	PipelineObjectVulkan_t* pPipelineOut; // 3130
	PipelineHashHandle_t hElem; // 3133
	{
		VkGraphicsPipelineCreateInfo pipelineCreateInfo; // 3152
		VkPipelineColorBlendStateCreateInfo cbState; // 3157
		CUtlVectorFixed<VkPipelineColorBlendAttachmentState, 8> cbAttachmentState; // 3158
		VkPipelineMultisampleStateCreateInfo msState; // 3162
		VkPipelineRenderingCreateInfoKHR pipelineRenderingCreateInfo; // 3166
		VkBaseInStructure* pInputStruct; // 3167
		VkFormat nDepthStencilFormat; // 3172
		CUtlVectorFixed<VkDynamicState, 1> dynamicStates; // 3186
		VkPipelineDynamicStateCreateInfo dynamicStateCreateInfo; // 3189
		VkGraphicsPipelineLibraryCreateInfoEXT pipelineLibraryCreateInfo; // 3196
		{
			VkResult nResult; // 3203
			CUtlString::CUtlString(); // 171
			CUtlString::Get(); // 173
			CUtlString::~CUtlString(); // 176
			_DOVK_RESULT(VkResult result,
					const char* pCommand);  // 3203
			SetPipelineDebugName(const char* pDebugName,
						VkPipeline pPipeline);  // 3212
		}
		PipelineCreateInfo_t::PipelineCreateInfo_t(); // 658
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 660
		PipelineObjectVulkan_t::PipelineObjectVulkan_t(); // 3149
		AlignedByteArrayExplicit_t<8, VkPipelineColorBlendAttachmentState, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<8, VkPipelineColorBlendAttachmentState>::AlignedByteArray_t(); // 256
		CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8>::CUtlMemoryFixed(
				int nGrowSize,
				int nInitSize);  // 527
		AlignedByteArrayExplicit_t<8, VkPipelineColorBlendAttachmentState, 4>::Base(); // 268
		CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8>::Base(); // 112
		CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::Base(); // 368
		CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::ResetDbgInfo(); // 530
		CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 467
		CUtlVectorFixed<VkPipelineColorBlendAttachmentState, 8>::CUtlVectorFixed(
				int growSize,
				int initCapacity);  // 3158
		CPipelineManagerVulkan::BuildMultisampleStateCreateInfo(
						const PipelineObjectVulkan_t* pPipelineObject,
						VkPipelineMultisampleStateCreateInfo& msState);  // 3163
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixed<VkDynamicState, 1> >::AddToTail(
				VkDynamicState& src);  // 3187
		AlignedByteArrayExplicit_t<1, VkDynamicState, 4>::Base(); // 268
		CUtlMemoryFixed<VkDynamicState, 1>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixed<VkDynamicState, 1> >::Base(); // 368
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixed<VkDynamicState, 1> >::ResetDbgInfo(); // 530
		AlignedByteArrayExplicit_t<1, VkDynamicState, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<1, VkDynamicState>::AlignedByteArray_t(); // 256
		CUtlMemoryFixed<VkDynamicState, 1>::CUtlMemoryFixed(
				int nGrowSize,
				int nInitSize);  // 527
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixed<VkDynamicState, 1> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 467
		CUtlVectorFixed<VkDynamicState, 1>::CUtlVectorFixed(
				int growSize,
				int initCapacity);  // 3186
		AlignedByteArrayExplicit_t<1, VkDynamicState, 4>::Base(); // 268
		CUtlMemoryFixed<VkDynamicState, 1>::Base(); // 112
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixed<VkDynamicState, 1> >::Base(); // 3193
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixed<VkDynamicState, 1> >::Purge(); // 560
		ValidateAlignment<VkDynamicState>(void); // 258
		CUtlMemoryFixed<VkDynamicState, 1>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixed<VkDynamicState, 1> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<VkDynamicState, 1>::~CUtlVectorFixed(); // 3216
		CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::Purge(); // 560
		ValidateAlignment<VkPipelineColorBlendAttachmentState>(void); // 258
		CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<VkPipelineColorBlendAttachmentState, 8>::~CUtlVectorFixed(); // 3216
		CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
				int i);  // 720
		CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t::CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>(
										const PipelineCreateInfo_t& k,
										PipelineObjectVulkan_t* const& v);  // 1514
		Construct<CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>, const PipelineCreateInfo_t&, PipelineObjectVulkan_t*&>(CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>* pMemory); // 720
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::DoInsert<const PipelineCreateInfo_t&>(
							const PipelineCreateInfo_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::DoInsert<const PipelineCreateInfo_t&>(
							const PipelineCreateInfo_t& k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Insert(
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 3215
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixed<VkDynamicState, 1> >::Purge(); // 560
		ValidateAlignment<VkDynamicState>(void); // 258
		CUtlMemoryFixed<VkDynamicState, 1>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<VkDynamicState, CUtlMemoryFixed<VkDynamicState, 1> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<VkDynamicState, 1>::~CUtlVectorFixed(); // 3216
		CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::Purge(); // 560
		ValidateAlignment<VkPipelineColorBlendAttachmentState>(void); // 258
		CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8>::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<VkPipelineColorBlendAttachmentState, CUtlMemoryFixed<VkPipelineColorBlendAttachmentState, 8> >::~CUtlVectorBase(); // 461
		CUtlVectorFixed<VkPipelineColorBlendAttachmentState, 8>::~CUtlVectorFixed(); // 3216
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 3132
	CPipelineVulkan::GetPipelineInfo(); // 3133
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Find(
		KeyArg_t k);  // 3133
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
			int i);  // 297
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
			handle_t idx);  // 3136
	CUtlMemory<CUtlHashtableEntry<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
			int i);  // 297
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::operator[](
			handle_t idx);  // 3219
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Find(
		KeyArg_t k);  // 3145
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 3223
} /* size: 1938, variables: 2, inline expansions: 13 (737 bytes) */

// <006F131A> vulkan/pipelinemgrvulkan.cpp:3230
// variables: 50
// function calls: 449
void CPipelineManagerVulkan::LinkPipelineLibrary(const CPipelineVulkan* pPipelineVulkan, PipelineObjectVulkan_t* pPipelineOut, VkPipelineCache pPipelineCache, PerThreadDataVulkan_t* pPerThread)
{
	PipelineObjectVulkan_t* pVertexInputPipelineLibrary; // 3232
	PipelineObjectVulkan_t* pFragmentOutputPipelineLibrary; // 3233
	CUtlVectorFixed<VkPipeline_T*, 4> pipelineLibraries; // 3240
	uint16 nPushConstantSize; // 3243
	int32 nMaxDescriptorSetUsedByShader; // 3244
	const CShaderVulkanBase* pPreRasterizationShader; // 3245
	const char   __FUNCTION__; // 57023
	const CShaderVulkanBase* pFragmentShader; // 3263
	bool bNeedsNullFragmentShader; // 3264
	CUtlVectorFixedGrowable<const CDescriptorSetVulkan*, 4> staticDescriptorSet; // 3283
	PipelineLayoutCreateInfo_t pipelineLayoutCreateInfo; // 3297
	CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int> >& layoutBindings; // 3298
	CUtlVector<int, CUtlMemory<int, int> >& numLayoutBindingsPerSet; // 3299
	CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int> >& layoutBindingFlags; // 3300
	CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >& immutableSamplers; // 3301
	CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >& pushConstantRanges; // 3355
	VkShaderStageFlags nPushConstantStages; // 3356
	PipelineLayoutVulkan_t pipelineLayout; // 3373
	VkPipelineLibraryCreateInfoKHR linkingInfo; // 3406
	VkGraphicsPipelineCreateInfo executablePipelineCreateInfo; // 3411
	VkResult nResult; // 3432
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3248
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3267
	}
	{
		int32 nDset; // 3284
		{
			CAutoLockStaticDescriptorSet autoLockStaticDescriptorSet; // 3292
			const CDescriptorSetVulkan* pStaticDescriptorSet; // 3293
			CRenderDeviceVulkan::GetDefaultDescriptorSet(); // 3292
			CAutoLockStaticDescriptorSet::CAutoLockStaticDescriptorSet(
							CRenderDeviceVulkan* pDevice,
							const RenderDescriptorSetHandle_t  hDescriptorSet);  // 3292
			CUtlMemory<const CDescriptorSetVulkan::NumAllocated(); // 1196
			CUtlMemory<const CDescriptorSetVulkan::operator[](
					int i);  // 602
			CUtlVectorBase<const CDescriptorSetVulkan::Element(
				int i);  // 1201
			CopyConstruct<const CDescriptorSetVulkan*>(const CDescriptorSetVulkan ** pMemory,
									const CDescriptorSetVulkan* const& src);  // 1201
			CUtlMemory<const CDescriptorSetVulkan::Base(); // 112
			CUtlVectorBase<const CDescriptorSetVulkan::Base(); // 368
			CUtlVectorBase<const CDescriptorSetVulkan::ResetDbgInfo(); // 824
			CUtlVectorBase<const CDescriptorSetVulkan::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<const CDescriptorSetVulkan::AddToTail(
					const CDescriptorSetVulkan* const& src);  // 3294
			CAutoLockStaticDescriptorSet::~CAutoLockStaticDescriptorSet(); // 3295
		}
		Min<int>(const int& val1,
			const int& val2);  // 3284
		CUtlMemory<const CDescriptorSetVulkan::NumAllocated(); // 1196
		CUtlMemory<const CDescriptorSetVulkan::operator[](
				int i);  // 602
		CUtlVectorBase<const CDescriptorSetVulkan::Element(
			int i);  // 1201
		CopyConstruct<const CDescriptorSetVulkan*>(const CDescriptorSetVulkan ** pMemory,
								const CDescriptorSetVulkan* const& src);  // 1201
		CUtlMemory<const CDescriptorSetVulkan::Base(); // 112
		CUtlVectorBase<const CDescriptorSetVulkan::Base(); // 368
		CUtlVectorBase<const CDescriptorSetVulkan::ResetDbgInfo(); // 824
		CUtlVectorBase<const CDescriptorSetVulkan::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<const CDescriptorSetVulkan::AddToTail(
				const CDescriptorSetVulkan* const& src);  // 3288
	}
	{
		int32 nDset; // 3307
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Count(); // 573
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 112
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 102
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::begin(); // 574
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 113
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 105
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Count(); // 105
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::end(); // 574
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::operator=(
				const CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >& other);  // 565
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::operator=(
				const CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >& other);  // 452
		CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::operator=(
				const CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >& src);  // 3311
		GetDynamicDescriptorSetIndex(RenderShaderType_t eShaderType); // 3309
		GetDynamicDescriptorSetIndex(RenderShaderType_t eShaderType); // 3314
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 3321
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
				int i);  // 3311
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 113
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 105
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Count(); // 105
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::end(); // 574
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
						const unsigned int* pFromEnd,
						unsigned int* pTo);  // 173
		UtlTraitsCopyRange<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding* pFrom,
								const VkDescriptorSetLayoutBinding* pFromEnd,
								VkDescriptorSetLayoutBinding* pTo);  // 574
		CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 112
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 102
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::begin(); // 574
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Count(); // 573
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::operator=(
				const CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >& other);  // 565
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::operator=(
				const CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >& other);  // 452
		CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::operator=(
				const CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >& src);  // 3316
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
				int i);  // 3317
		CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Count(); // 3317
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 3317
		CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
				int i);  // 3316
	}
	{
		int32 nStaticDescSet; // 3326
		{
			const int32  nSetIndex; // 3328
			const CDescriptorSetVulkan* pStaticDescriptorSet; // 3329
			{
				int32 nImmutableSampler; // 3340
				{
					PipelineLayoutImmutableSampler_t* pImmutableSamplers; // 3342
					PipelineLayoutImmutableSampler_t immutableSampler; // 3346
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3343
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
							const PipelineLayoutImmutableSampler_t& src);  // 3350
					CDescriptorSetVulkan::GetImmutableSamplers(); // 3342
				}
				CDescriptorSetVulkan::GetNumImmutableSamplers(); // 3340
			}
			CUtlMemory<const CDescriptorSetVulkan::operator[](
					int i);  // 588
			CUtlVectorBase<const CDescriptorSetVulkan::operator[](
					int i);  // 3329
			CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
					int i);  // 3331
			CDescriptorSetVulkan::GetDescriptorDescCount(); // 3331
			CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
					int i);  // 3332
			CDescriptorSetVulkan::GetDescriptorDescCount(); // 3332
			CDescriptorSetVulkan::GetDescriptorSetLayoutBindings(); // 3332
			CDescriptorSetVulkan::GetDescriptorDescCount(); // 3333
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 3333
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 3335
			CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
					int i);  // 3337
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 3337
			CUtlMemory<unsigned int, int>::Base(); // 113
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 3337
		}
		CUtlVectorBase<const CDescriptorSetVulkan::Count(); // 3326
	}
	{
		CPipelineVulkan nullFragmentShaderPipeline; // 3380
		PipelineObjectVulkan_t* pNullFragmentShader; // 3401
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3379
		}
		{
			int i; // 3393
			Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 229
			CShaderVulkanBase::GetNumDescriptorSets(); // 3393
			CShaderVulkanBase::GetDescriptorSetBindingMask(); // 3395
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3402
		}
		{
			uint32_t nShader; // 397
		}
		PipelineCreateInfo_t::PipelineCreateInfo_t(); // 395
		CPipelineVulkan::CPipelineVulkan(); // 3380
		Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 229
		CShaderVulkanBase::GetNumDescriptorSets(); // 3390
		AlignedByteArrayExplicit_t<4, VkPipeline_T::Base(); // 268
		CUtlMemoryFixed<VkPipeline_T::Base(); // 112
		CUtlVectorBase<VkPipeline_T::Base(); // 368
		CUtlVectorBase<VkPipeline_T::ResetDbgInfo(); // 824
		CUtlVectorBase<VkPipeline_T::GrowMemory(
				int num);  // 1198
		AlignedByteArrayExplicit_t<4, VkPipeline_T::Base(); // 268
		CUtlMemoryFixed<VkPipeline_T::Base(); // 272
		CUtlMemoryFixed<VkPipeline_T::operator[](
				int i);  // 602
		CUtlVectorBase<VkPipeline_T::Element(
			int i);  // 1201
		CopyConstruct<VkPipeline_T*>(VkPipeline_T** pMemory,
						VkPipeline_T* const& src);  // 1201
		CUtlVectorBase<VkPipeline_T::AddToTail(
				VkPipeline_T* const& src);  // 3403
		CPipelineVulkan::~CPipelineVulkan(); // 3404
	}
	{
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> > generated_id_3435; // 3435
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3440
		}
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3047
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3053
		CThreadRWLock::LockForRead(
				const char* pFileName,
				int nLineNumber);  // 951
		Lock(CThreadRWLock& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::CAutoLockT(
				const CThreadRWLock& lock,
				const char* pFilename,
				int nLineNumber);  // 3435
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3058
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3064
		CThreadRWLock::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 952
		Unlock(CThreadRWLock& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::~CAutoLockT(); // 3442
	}
	{
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> > generated_id_3449; // 3449
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3047
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3053
		CThreadRWLock::LockForRead(
				const char* pFileName,
				int nLineNumber);  // 951
		Lock(CThreadRWLock& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::CAutoLockT(
				const CThreadRWLock& lock,
				const char* pFilename,
				int nLineNumber);  // 3449
		CUtlString::CUtlString(); // 171
		CUtlString::Get(); // 173
		CUtlString::~CUtlString(); // 176
		_DOVK_RESULT(VkResult result,
				const char* pCommand);  // 3450
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3058
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3064
		CThreadRWLock::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 952
		Unlock(CThreadRWLock& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::~CAutoLockT(); // 3458
		CShaderVulkanBase::GetDebugName(); // 3457
		SetPipelineDebugName(const char* pDebugName,
					VkPipeline pPipeline);  // 3457
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3058
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3064
		CThreadRWLock::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 952
		Unlock(CThreadRWLock& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::~CAutoLockT(); // 3458
	}
	{
		CUtlString strDebugName; // 3468
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<int, 4>::AtomicAdd(
				int add);  // 3466
		CShaderVulkanBase::GetDebugName(); // 3468
		CUtlString::CUtlString(
				const char* pString);  // 3468
		AlignedByteArrayExplicit_t<4, VkPipeline_T::Base(); // 268
		CUtlMemoryFixed<VkPipeline_T::Base(); // 112
		CUtlVectorBase<VkPipeline_T::Base(); // 368
		CUtlVectorBase<VkPipeline_T::ResetDbgInfo(); // 530
		AlignedByteArrayExplicit_t<4, VkPipeline_T::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<4, VkPipeline_T::AlignedByteArray_t(); // 256
		CUtlMemoryFixed<VkPipeline_T::CUtlMemoryFixed(
				int nGrowSize,
				int nInitSize);  // 527
		CUtlVectorBase<VkPipeline_T::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 469
		CUtlVectorBase<VkPipeline_T::Count(); // 469
		AlignedByteArrayExplicit_t<4, VkPipeline_T::Base(); // 269
		CUtlMemoryFixed<VkPipeline_T::Base(); // 113
		CUtlVectorBase<VkPipeline_T::Base(); // 469
		CUtlVectorBase<VkPipeline_T::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlVectorBase<VkPipeline_T::GrowVector(
				int num);  // 1445
		CUtlVectorBase<VkPipeline_T::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<VkPipeline_T::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<VkPipeline_T::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<VkPipeline_T::SetCount(
			int count);  // 1341
		AlignedByteArrayExplicit_t<4, VkPipeline_T::Base(); // 268
		CUtlMemoryFixed<VkPipeline_T::Base(); // 112
		CUtlVectorBase<VkPipeline_T::Base(); // 102
		CUtlVectorBase<VkPipeline_T::begin(); // 1344
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
						const unsigned int* pFromEnd,
						unsigned int* pTo);  // 173
		UtlTraitsCopyRange<VkPipeline_T*>(VkPipeline_T* const* pFrom,
							VkPipeline_T* const* pFromEnd,
							VkPipeline_T** pTo);  // 1344
		CUtlVectorBase<VkPipeline_T::CopyArray(
				VkPipeline_T* const* pArray,
				int size);  // 469
		CUtlVectorFixed<VkPipeline_T::CUtlVectorFixed(
				const CUtlVectorFixed<VkPipeline_T*, 4>& vec);  // 3473
		CAsyncCompileHelperVulkan::GetThreadPool(); // 3472
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 3473
		{
			{
			}
			AlignedByteArrayExplicit_t<4, VkPipeline_T::AlignedByteArrayExplicit_t(); // 1597
			AlignedByteArray_t<4, VkPipeline_T::AlignedByteArray_t(); // 256
			CUtlMemoryFixed<VkPipeline_T::CUtlMemoryFixed(
					int nGrowSize,
					int nInitSize);  // 527
			CUtlVectorBase<VkPipeline_T::ResetDbgInfo(); // 530
			CUtlVectorBase<VkPipeline_T::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 469
			CUtlVectorBase<VkPipeline_T::Count(); // 469
			AlignedByteArrayExplicit_t<4, VkPipeline_T::Base(); // 269
			CUtlMemoryFixed<VkPipeline_T::Base(); // 113
			CUtlVectorBase<VkPipeline_T::Base(); // 469
			CUtlVectorBase<VkPipeline_T::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlVectorBase<VkPipeline_T::SetCount(
				int count);  // 1341
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 85
			V_memcpy(void* dest,
				const void* src,
				ptrdiff_t count);  // 180
			UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
							const unsigned int* pFromEnd,
							unsigned int* pTo);  // 173
			UtlTraitsCopyRange<VkPipeline_T*>(VkPipeline_T* const* pFrom,
								VkPipeline_T* const* pFromEnd,
								VkPipeline_T** pTo);  // 1344
			CUtlVectorBase<VkPipeline_T::CopyArray(
					VkPipeline_T* const* pArray,
					int size);  // 469
			CUtlVectorFixed<VkPipeline_T::CUtlVectorFixed(
					const CUtlVectorFixed<VkPipeline_T*, 4>& vec);  // 3473
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 437
			CUtlMemory<int, int>::IsExternallyAllocated(); // 535
			{
			}
			V_swap_through_temp<unsigned int>(unsigned int& x,
								unsigned int& y);  // 536
			V_swap_through_temp<int*>(int *& x,
							int *& y);  // 537
			V_swap_through_temp<int>(int& x,
						int& y);  // 538
			CUtlMemory<int, int>::Swap(
				CUtlMemory<int, int>& mem);  // 1351
			swap<int>(int& __a,
					int& __b);  // 19
			V_swap<int>(int& x,
					int& y);  // 1352
			swap<int*>(int *& __a,
					int *& __b);  // 19
			V_swap<int*>(int *& x,
					int *& y);  // 1354
			CUtlVectorBase<int, CUtlMemory<int, int> >::Swap(
				CUtlVectorBase<int, CUtlMemory<int, int> >& vec);  // 437
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
					CUtlVector<int, CUtlMemory<int, int> >& src);  // 255
			ResetDbgInfo(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this); // 530
			CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
					int growSize,
					int initCapacity);  // 437
			CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::IsExternallyAllocated(); // 535
			{
			}
			V_swap_through_temp<unsigned int>(unsigned int& x,
								unsigned int& y);  // 536
			V_swap_through_temp<CUtlVector<VkDescriptorSetLayoutBinding>*>(CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> > *& x,
											CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> > *& y);  // 537
			V_swap_through_temp<int>(int& x,
						int& y);  // 538
			CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::Swap(
				CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>& mem);  // 1351
			swap<int>(int& __a,
					int& __b);  // 19
			V_swap<int>(int& x,
					int& y);  // 1352
			swap<CUtlVector<VkDescriptorSetLayoutBinding>*>(CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> > *& __a,
									CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> > *& __b);  // 19
			V_swap<CUtlVector<VkDescriptorSetLayoutBinding>*>(CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> > *& x,
										CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> > *& y);  // 1354
			Swap(const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
				CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUtlV vec);  // 437
			CUtlVector(const CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUt this,
					CUtlVector<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory<CUtlVecto src);  // 255
			CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::ResetDbgInfo(); // 530
			CUtlMemory<VkPushConstantRange, int>::ValidateGrowSize(); // 475
			CUtlMemory<VkPushConstantRange, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 437
			CUtlMemory<VkPushConstantRange, int>::IsExternallyAllocated(); // 535
			{
			}
			V_swap_through_temp<unsigned int>(unsigned int& x,
								unsigned int& y);  // 536
			V_swap_through_temp<VkPushConstantRange*>(VkPushConstantRange *& x,
									VkPushConstantRange *& y);  // 537
			V_swap_through_temp<int>(int& x,
						int& y);  // 538
			CUtlMemory<VkPushConstantRange, int>::Swap(
				CUtlMemory<VkPushConstantRange, int>& mem);  // 1351
			swap<int>(int& __a,
					int& __b);  // 19
			V_swap<int>(int& x,
					int& y);  // 1352
			swap<VkPushConstantRange*>(VkPushConstantRange *& __a,
							VkPushConstantRange *& __b);  // 19
			V_swap<VkPushConstantRange*>(VkPushConstantRange *& x,
							VkPushConstantRange *& y);  // 1354
			CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Swap(
				CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >& vec);  // 437
			CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::CUtlVector(
					CUtlVector<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >& src);  // 255
			CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::ResetDbgInfo(); // 530
			CUtlMemory<PipelineLayoutImmutableSampler_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<PipelineLayoutImmutableSampler_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 437
			CUtlMemory<PipelineLayoutImmutableSampler_t, int>::IsExternallyAllocated(); // 535
			{
			}
			V_swap_through_temp<unsigned int>(unsigned int& x,
								unsigned int& y);  // 536
			V_swap_through_temp<PipelineLayoutImmutableSampler_t*>(PipelineLayoutImmutableSampler_t *& x,
										PipelineLayoutImmutableSampler_t *& y);  // 537
			V_swap_through_temp<int>(int& x,
						int& y);  // 538
			CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Swap(
				CUtlMemory<PipelineLayoutImmutableSampler_t, int>& mem);  // 1351
			swap<int>(int& __a,
					int& __b);  // 19
			V_swap<int>(int& x,
					int& y);  // 1352
			swap<PipelineLayoutImmutableSampler_t*>(PipelineLayoutImmutableSampler_t *& __a,
								PipelineLayoutImmutableSampler_t *& __b);  // 19
			V_swap<PipelineLayoutImmutableSampler_t*>(PipelineLayoutImmutableSampler_t *& x,
									PipelineLayoutImmutableSampler_t *& y);  // 1354
			CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Swap(
				CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >& vec);  // 437
			CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CUtlVector(
					CUtlVector<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >& src);  // 255
			ResetDbgInfo(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this); // 530
			CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
					int growSize,
					int initCapacity);  // 437
			CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::IsExternallyAllocated(); // 535
			{
			}
			V_swap_through_temp<unsigned int>(unsigned int& x,
								unsigned int& y);  // 536
			V_swap_through_temp<CUtlVector<unsigned int>*>(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > *& x,
									CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > *& y);  // 537
			V_swap_through_temp<int>(int& x,
						int& y);  // 538
			CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::Swap(
				CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>& mem);  // 1351
			swap<int>(int& __a,
					int& __b);  // 19
			V_swap<int>(int& x,
					int& y);  // 1352
			swap<CUtlVector<unsigned int>*>(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > *& __a,
							CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > *& __b);  // 19
			V_swap<CUtlVector<unsigned int>*>(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > *& x,
								CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > *& y);  // 1354
			Swap(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
				CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory<u vec);  // 437
			CUtlVector(const CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory this,
					CUtlVector<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsig src);  // 255
			PipelineLayoutCreateInfo_t::PipelineLayoutCreateInfo_t(
							PipelineLayoutCreateInfo_t &);  // 3473
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 3473
			<lambda>(const class* this,
				 &);  // 163
			_M_create<CPipelineManagerVulkan::LinkPipelineLibrary(const CPipelineVulkan*, PipelineObjectVulkan_t*, VkPipelineCache, PerThreadDataVulkan_t*)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
			_M_init_functor<CPipelineManagerVulkan::LinkPipelineLibrary(const CPipelineVulkan*, PipelineObjectVulkan_t*, VkPipelineCache, PerThreadDataVulkan_t*)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
			_M_not_empty_function<CPipelineManagerVulkan::LinkPipelineLibrary(const CPipelineVulkan*, PipelineObjectVulkan_t*, VkPipelineCache, PerThreadDataVulkan_t*)::<lambda()> >(const &); // 449
		}
		_Function_base::_Function_base(); // 439
		function<void()>::function<CPipelineManagerVulkan::LinkPipelineLibrary(
																class& __f); // 3473
		IThreadPool::QueueCallWithFlags(
					const char* szDescription,
					JobPriority_t jobPriority,
					uint nFlags,
					function<void()>& func);  // 3472
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 3473
		CUtlString::~CUtlString(); // 3473
		CUtlVectorBase<VkPipeline_T::Purge(); // 560
		ValidateAlignment<VkPipeline_T*>(void); // 258
		CUtlMemoryFixed<VkPipeline_T::~CUtlMemoryFixed(); // 562
		CUtlVectorBase<VkPipeline_T::~CUtlVectorBase(); // 461
		CUtlVectorFixed<VkPipeline_T::~CUtlVectorFixed(); // 3473
		~<lambda>(const class* this); // 3473
		CUtlString::~CUtlString(); // 3477
	}
	AlignedByteArrayExplicit_t<4, VkPipeline_T::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, VkPipeline_T::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<VkPipeline_T::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	AlignedByteArrayExplicit_t<4, VkPipeline_T::Base(); // 268
	CUtlMemoryFixed<VkPipeline_T::Base(); // 112
	CUtlVectorBase<VkPipeline_T::Base(); // 368
	CUtlVectorBase<VkPipeline_T::ResetDbgInfo(); // 530
	CUtlVectorBase<VkPipeline_T::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<VkPipeline_T::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 3240
	CopyConstruct<VkPipeline_T*>(VkPipeline_T** pMemory,
					VkPipeline_T* const& src);  // 1201
	CUtlVectorBase<VkPipeline_T::AddToTail(
			VkPipeline_T* const& src);  // 3241
	CopyConstruct<VkPipeline_T*>(VkPipeline_T** pMemory,
					VkPipeline_T* const& src);  // 1201
	CUtlVectorBase<VkPipeline_T::AddToTail(
			VkPipeline_T* const& src);  // 3242
	CPipelineVulkan::GetShader(
			RenderShaderType_t shaderType);  // 3245
	CShaderVulkanBase::GetGraphicsPipelineLibrary(); // 3248
	AlignedByteArrayExplicit_t<4, VkPipeline_T::Base(); // 268
	CUtlMemoryFixed<VkPipeline_T::Base(); // 272
	CUtlMemoryFixed<VkPipeline_T::operator[](
			int i);  // 602
	CUtlVectorBase<VkPipeline_T::Element(
		int i);  // 1201
	CopyConstruct<VkPipeline_T*>(VkPipeline_T** pMemory,
					VkPipeline_T* const& src);  // 1201
	AlignedByteArrayExplicit_t<4, VkPipeline_T::Base(); // 268
	CUtlMemoryFixed<VkPipeline_T::Base(); // 112
	CUtlVectorBase<VkPipeline_T::Base(); // 368
	CUtlVectorBase<VkPipeline_T::ResetDbgInfo(); // 824
	CUtlVectorBase<VkPipeline_T::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<VkPipeline_T::AddToTail(
			VkPipeline_T* const& src);  // 3249
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 229
	CShaderVulkanBase::GetNumDescriptorSets(); // 3251
	CShaderVulkanBase::GetGraphicsPipelineLibrary(); // 3254
	CShaderVulkanBase::GetGraphicsPipelineLibrary(); // 3249
	CPipelineVulkan::GetShader(
			RenderShaderType_t shaderType);  // 3263
	CShaderVulkanBase::GetGraphicsPipelineLibrary(); // 3267
	CShaderVulkanBase::GetGraphicsPipelineLibrary(); // 3268
	AlignedByteArrayExplicit_t<4, VkPipeline_T::Base(); // 268
	CUtlMemoryFixed<VkPipeline_T::Base(); // 112
	CUtlVectorBase<VkPipeline_T::Base(); // 368
	CUtlVectorBase<VkPipeline_T::ResetDbgInfo(); // 824
	CUtlVectorBase<VkPipeline_T::GrowMemory(
			int num);  // 1198
	AlignedByteArrayExplicit_t<4, VkPipeline_T::Base(); // 268
	CUtlMemoryFixed<VkPipeline_T::Base(); // 272
	CUtlMemoryFixed<VkPipeline_T::operator[](
			int i);  // 602
	CUtlVectorBase<VkPipeline_T::Element(
		int i);  // 1201
	CopyConstruct<VkPipeline_T*>(VkPipeline_T** pMemory,
					VkPipeline_T* const& src);  // 1201
	CUtlVectorBase<VkPipeline_T::AddToTail(
			VkPipeline_T* const& src);  // 3268
	Count(const CUtlVectorBase<CShaderVulkanBase::DescriptorSetBindings_t, CUtlMemory<CShaderVulkanBase::DescriptorSetBinding this); // 229
	CShaderVulkanBase::GetNumDescriptorSets(); // 3270
	Max<int>(const int& val1,
		const int& val2);  // 3270
	CShaderVulkanBase::GetGraphicsPipelineLibrary(); // 3273
	CUtlMemory<const CDescriptorSetVulkan::CUtlMemory(
			const CDescriptorSetVulkan ** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<const CDescriptorSetVulkan::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<const CDescriptorSetVulkan::CUtlMemoryFixedGrowable_Base(
					const CDescriptorSetVulkan ** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<4, const CDescriptorSetVulkan::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, const CDescriptorSetVulkan::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<4, const CDescriptorSetVulkan::Base(); // 231
	CUtlMemoryFixedGrowable<const CDescriptorSetVulkan::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<const CDescriptorSetVulkan::ResetDbgInfo(); // 530
	CUtlVectorBase<const CDescriptorSetVulkan::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<const CDescriptorSetVulkan::CUtlVectorFixedGrowable(
				int growSize);  // 3283
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
	PipelineLayoutCreateInfo_t::PipelineLayoutCreateInfo_t(); // 3297
	CUtlVectorBase<const CDescriptorSetVulkan::Count(); // 3303
	CUtlVectorBase<const CDescriptorSetVulkan::Count(); // 3304
	CUtlVectorBase<const CDescriptorSetVulkan::Count(); // 3325
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
				int num);  // 3325
	CUtlMemory<VkPushConstantRange, int>::NumAllocated(); // 1143
	CUtlMemory<VkPushConstantRange, int>::Base(); // 112
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Base(); // 368
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::AddToTail(); // 3360
	CUtlMemory<VkPushConstantRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::operator[](
			int i);  // 3361
	CUtlMemory<VkPushConstantRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::operator[](
			int i);  // 3362
	CUtlMemory<VkPushConstantRange, int>::operator[](
			int i);  // 588
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::operator[](
			int i);  // 3365
	CUtlVectorBase<const CDescriptorSetVulkan::Count(); // 3368
	CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Count(); // 3369
	CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Count(); // 3370
	CUtlVectorBase<VkPipeline_T::Count(); // 3408
	AlignedByteArrayExplicit_t<4, VkPipeline_T::Base(); // 268
	CUtlMemoryFixed<VkPipeline_T::Base(); // 112
	CUtlVectorBase<VkPipeline_T::Base(); // 3409
	CRenderDeviceVulkan::EXTPipelineCreationCacheControlEnabled(); // 3433
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 3462
	CAsyncCompileHelperVulkan::BEnabled(); // 3462
	CUtlVectorBase<const CDescriptorSetVulkan::RemoveAll(); // 1798
	CUtlMemory<const CDescriptorSetVulkan::IsExternallyAllocated(); // 577
	CUtlMemory<const CDescriptorSetVulkan::ConvertToExternalMemory(
				const CDescriptorSetVulkan ** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<const CDescriptorSetVulkan::Purge_FixedGrowable(
				const CDescriptorSetVulkan ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<const CDescriptorSetVulkan::Purge_FixedGrowable(
				const CDescriptorSetVulkan ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, const CDescriptorSetVulkan::Base(); // 237
	CUtlMemoryFixedGrowable<const CDescriptorSetVulkan::Purge(
		int numElements);  // 1799
	CUtlMemory<const CDescriptorSetVulkan::Base(); // 112
	CUtlVectorBase<const CDescriptorSetVulkan::Base(); // 368
	CUtlVectorBase<const CDescriptorSetVulkan::ResetDbgInfo(); // 1800
	CUtlVectorBase<const CDescriptorSetVulkan::Purge(); // 560
	ValidateAlignment<const CDescriptorSetVulkan*>(void); // 508
	CUtlMemory<const CDescriptorSetVulkan::Purge(); // 903
	CUtlMemory<const CDescriptorSetVulkan::Purge(); // 510
	CUtlMemory<const CDescriptorSetVulkan::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<const CDescriptorSetVulkan::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<const CDescriptorSetVulkan::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<const CDescriptorSetVulkan::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<const CDescriptorSetVulkan::~CUtlVectorFixedGrowable(); // 3480
	CUtlVectorBase<VkPipeline_T::Purge(); // 560
	ValidateAlignment<VkPipeline_T*>(void); // 258
	CUtlMemoryFixed<VkPipeline_T::~CUtlMemoryFixed(); // 562
	CUtlVectorBase<VkPipeline_T::~CUtlVectorBase(); // 461
	CUtlVectorFixed<VkPipeline_T::~CUtlVectorFixed(); // 3480
} /* size: 0, variables: 21, inline expansions: 136 (2728 bytes) */

// <0071AA13> vulkan/pipelinemgrvulkan.cpp:3484
// variables: 8
// function calls: 30
void CPipelineManagerVulkan::LinkPipelineShaderOptimized(PipelineObjectVulkan_t* pPipelineOut, CUtlVectorFixed<VkPipeline_T*, 4> pipelineLibraries, PipelineLayoutCreateInfo_t pipelineLayoutCreateInfo, bool bShutdownPipelineLayout)
{
	{
		VkPipelineLibraryCreateInfoKHR linkingInfo; // 3489
		VkGraphicsPipelineCreateInfo executablePipelineCreateInfo; // 3494
		PipelineLayoutVulkan_t pipelineLayout; // 3500
		VkPipeline pLinkTimeOptimizedPipeline; // 3507
		VkResult nResult; // 3508
		{
			CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> > generated_id_3512; // 3512
			PerThreadDataVulkan_t* pPerThread; // 3515
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3047
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3053
			CThreadRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 951
			Lock(CThreadRWLock& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::CAutoLockT(
					const CThreadRWLock& lock,
					const char* pFilename,
					int nLineNumber);  // 3512
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 55
			PerThreadDataVulkan_t::AddRef(); // 3516
			CUtlString::CUtlString(); // 171
			CUtlString::Get(); // 173
			CUtlString::~CUtlString(); // 176
			_DOVK_RESULT(VkResult result,
					const char* pCommand);  // 3517
			CInterlockedIntT<int, 4>::operator int(); // 56
			{
			}
			ThreadInterlockedDecrement(volatile int32* p); // 586
			CInterlockedIntT<int, 4>::operator--(); // 592
			CInterlockedIntT<int, 4>::operator--(
					int);  // 56
			PerThreadDataVulkan_t::Release(); // 3518
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3058
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3064
			CThreadRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 952
			Unlock(CThreadRWLock& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::~CAutoLockT(); // 3519
		}
		{
			LinkTimeOptimizedPipeline_t linkTimeOptimizedPipeline; // 3526
		}
		AlignedByteArrayExplicit_t<4, VkPipeline_T::Base(); // 268
		CUtlMemoryFixed<VkPipeline_T::Base(); // 112
		CUtlVectorBase<VkPipeline_T::Base(); // 3492
		CUtlVectorBase<VkPipeline_T::Count(); // 3491
	}
	CRenderDeviceVulkan::IsShuttingDown(); // 3487
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 3537
} /* size: 0, inline expansions: 3 (28 bytes) */

// <00719F9A> vulkan/pipelinemgrvulkan.cpp:3543
// variables: 34
// function calls: 20
void CPipelineManagerVulkan::BindForUse(CCommandStreamBuilder* pStreamBuilder, VulkanCommandBuffer_t* pCommandBuffer, CPipelineVulkan* pPipelineVulkan, VulkanDescriptorSetPool_t** ppDescriptorSetPool, PerThreadDataVulkan_t* pPerThread, int32 nContextFrameCount, bool bReuseLastDescriptorSet)
{
	PipelineObjectVulkan_t* pPipeline; // 3545
	const bool  bIsComputeDispatch; // 3582
	int32_t nMaxBinding; // 3591
	int32_t nMaxBindingForMask; // 3592
	uint32 nPipelineVertexMask; // 3593
	bool bDynamicDescriptorUpdate; // 3695
	const char   __FUNCTION__; // 56785
	{
		uint32_t nBinding; // 3555
		CPipelineVulkan::MarkPipelineDirty(); // 1181
		CPipelineVulkan::BindVertexBuffer(
				uint32 nSlot,
				VkBuffer pBuffer,
				VkDeviceSize nOffset,
				VkDeviceSize nStride);  // 3559
	}
	{
		uint32 nDefaultVBIndex; // 3631
		{
			int32_t nBinding; // 3598
			{
				int32_t nBindingStart; // 3603
				int32_t nBindingEnd; // 3604
			}
		}
	}
	{
		int32 nDescriptorSet; // 3698
		{
			VkDescriptorSet pDescriptorSet; // 3702
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3709
			}
		}
		{
			CAutoLockStaticDescriptorSet autoLockStaticDescriptorSet; // 3716
			const CDescriptorSetVulkan* pDefaultStaticDescriptorSet; // 3717
			VkDescriptorSet pDefaultDescriptorSet; // 3719
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3718
			}
			CRenderDeviceVulkan::GetDefaultDescriptorSet(); // 3716
			CAutoLockStaticDescriptorSet::CAutoLockStaticDescriptorSet(
							CRenderDeviceVulkan* pDevice,
							const RenderDescriptorSetHandle_t  hDescriptorSet);  // 3716
			CDescriptorSetVulkan::GetDescriptorSet(); // 3719
			CAutoLockStaticDescriptorSet::~CAutoLockStaticDescriptorSet(); // 3721
		}
	}
	{
		CAutoLockStaticDescriptorSet autoLockStaticDescriptorSet; // 3729
		const CDescriptorSetVulkan* pDefaultStaticDescriptorSet; // 3730
		VkDescriptorSet pDefaultDescriptorSet; // 3732
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3731
		}
		{
			int32 nDescriptorSet; // 3733
		}
		CRenderDeviceVulkan::GetDefaultDescriptorSet(); // 3729
		CAutoLockStaticDescriptorSet::CAutoLockStaticDescriptorSet(
						CRenderDeviceVulkan* pDevice,
						const RenderDescriptorSetHandle_t  hDescriptorSet);  // 3729
		CDescriptorSetVulkan::GetDescriptorSet(); // 3732
		CAutoLockStaticDescriptorSet::~CAutoLockStaticDescriptorSet(); // 3737
	}
	{
		int32 nDescriptorSet; // 3743
	}
	{
		uint32 nFirstSetIndex; // 3753
		uint32 nSetCount; // 3754
		uint32 nMaxSetBinding; // 3755
		{
			VkPipelineLayout pPipelineLayout; // 3761
			uint32 nDynamicOffsetCount; // 3762
			uint32_t* pDynamicOffsets; // 3763
			{
				uint32_t nBinding; // 3774
				{
					uint32_t nBindingStart; // 3779
					uint32_t nBindingEnd; // 3780
				}
			}
		}
	}
	Max<int>(const int& val1,
		const int& val2);  // 3592
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 3643
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 3662
	V_memcmp(const void* m1,
		const void* m2,
		uint count);  // 3662
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 3675
	CPipelineVulkan::UseGraphicsPipelineLibrary(); // 3727
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3679
} /* size: 0, variables: 7, inline expansions: 10 (200 bytes) */

// <00719F6A> vulkan/pipelinemgrvulkan.cpp:3810
void CPipelineManagerVulkan::UpdateStats()
{
} /* size: 5 */

// <00719D8E> vulkan/pipelinemgrvulkan.cpp:3817
// function calls: 3
void CPipelineManagerVulkan::OnPrintStats(const CCommandContext& ctx, const CCommand& args)
{
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 3820
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 3820
	Count(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, Pipeline this); // 3821
} /* size: 203, inline expansions: 3 (0 bytes) */

// <00719C67> vulkan/pipelinemgrvulkan.cpp:3827
// function calls: 3
void CPipelineManagerVulkan::AppendStatsSummaryString(CBufferString* pOut)
{
	Count(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, Pipeline this); // 3831
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 3830
	CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Count(); // 3830
} /* size: 93, inline expansions: 3 (0 bytes) */

// <00750B77> vulkan/pipelinemgrvulkan.cpp:3835
void CPipelineManagerVulkan::CreateCacheDirectory()
{
} /* size: 0 */

// <00748EBF> vulkan/pipelinemgrvulkan.cpp:3835
// variable: 1
// function calls: 12
void CPipelineManagerVulkan::CreateCacheDirectory()
{
	{
		CPathBufferString shaderCachePathName; // 3842
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 3842
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 3844
		CFileSystemPassThru::CreateDirHierarchy(
					const char* path,
					const char* pathID);  // 104
		CFileSystemPassThru::CreateDirHierarchy(
					const char* path,
					const char* pathID);  // 104
		CFileSystemPassThru::CreateDirHierarchy(
					const char* path,
					const char* pathID);  // 104
		CFileSystemPassThru::CreateDirHierarchy(
					const char* path,
					const char* pathID);  // 3844
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 3845
	}
} /* size: 315 */

// <00719C28> vulkan/pipelinemgrvulkan.cpp:3835
// variables: 2
void CPipelineManagerVulkan::CreateCacheDirectory()
{
	bool s_bAttemptedToCreateCacheDir; // 3837
	{
		CPathBufferString shaderCachePathName; // 3842
	}
} /* size: 0, variables: 1 */

// <007154D6> vulkan/pipelinemgrvulkan.cpp:3851
// variables: 67
// function calls: 221
void CPipelineManagerVulkan::LoadPipelineCache()
{
	CUtlBuffer shaderCacheBuffer; // 3865
	CKeyValues3Context pipelineCacheKV3Context; // 3873
	KeyValues3* pPipelineCacheKV3Root; // 3874
	CUtlString errMsg; // 3875
	int nVersion; // 3884
	KeyValues3* pPipelineCacheBlobKV; // 3893
	const int32  nShaderCacheSize32; // 3901
	const uint64  nShaderCacheSize; // 3902
	const byte* pShaderCacheData; // 3917
	KeyValues3* pCacheSizeKV; // 3918
	uint64 nRecordedSize; // 3919
	KeyValues3* pCacheHashKV; // 3927
	uint64 nRecordedHash; // 3928
	uint32_t nHeaderVersion; // 3939
	uint32_t nVendorID; // 3940
	uint32_t nDeviceID; // 3941
	uint8_t pipelineCacheUUID; // 3942
	VkPipelineCacheCreateInfo pipelineCacheCreateInfo; // 3970
	VkResult nResult; // 3975
	KeyValues3* pPipelineLayoutTableKV; // 3984
	const char   __FUNCTION__; // 56969
	{
		uint64 nComputedHash; // 3931
		ComputePipelineCacheFileHash(const void* pData,
						size_t nBytes);  // 3931
		CUtlString::Get(); // 3934
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_3988; // 3988
		{
			int32 nPipelineLayout; // 3991
			{
				PipelineLayoutCreateInfo_t pipelineLayoutHash; // 3993
				KeyValues3* pPipelineLayoutElement; // 3994
				KeyValues3* pDescriptorSetTableKV; // 3997
				{
					bool bCanCreateDescriptorSetLayout; // 4000
					const uint32_t  nUBOLimit; // 4001
					uint32_t nNumUBOsPerStage; // 4002
					bool bCreatedAllDescriptorSetLayouts; // 4052
					KeyValues3* pPushConstantRangesBlob; // 4095
					KeyValues3* pImmutableSamplersBlob; // 4105
					{
						int32 nDescriptorSet; // 4004
						{
							KeyValues3* pDescriptorSetKV; // 4006
							uint32 nNumLayoutBindings; // 4007
							KeyValues3* pLayoutBindingsBlob; // 4008
							const VkDescriptorSetLayoutBinding* pBinding; // 4009
							{
								uint32 nBinding; // 4010
							}
							CKV3MemberName::CKV3MemberName<15>(
										const char& str);  // 4008
							CKV3MemberName::CKV3MemberName<18>(
										const char& str);  // 4007
							CKV3MemberName::CKV3MemberName(
									const CKV3MemberName& rhs);  // 96
							KeyValues3::FindMember(
									CKV3MemberName memberName,
									KeyValues3* pDefaultValue);  // 4008
						}
					}
					{
						int32 nDescriptorSet; // 4056
						{
							KeyValues3* pDescriptorSetKV; // 4059
							KeyValues3* pLayoutBindingsBlob; // 4063
							KeyValues3* pLayoutBindingFlagsBlob; // 4070
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4066
							}
							{
								int32 nSet; // 4083
								CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
										int i);  // 588
								operator[](const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
										int i);  // 4085
							}
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4088
							}
							CUtlMemory<int, int>::operator[](
									int i);  // 588
							CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
									int i);  // 4066
							CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
									int i);  // 588
							operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
									int i);  // 4067
							CUtlMemory<int, int>::operator[](
									int i);  // 588
							CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
									int i);  // 4088
							CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
									int i);  // 588
							operator[](const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
									int i);  // 4089
							CRenderDeviceVulkan::EXTDescriptorIndexingEnabled(); // 4073
							Count(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, this); // 4080
							CKV3MemberName::CKV3MemberName<18>(
										const char& str);  // 4060
							CUtlMemory<int, int>::operator[](
									int i);  // 588
							CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
									int i);  // 4060
							CKV3MemberName::CKV3MemberName<15>(
										const char& str);  // 4063
							CKV3MemberName::CKV3MemberName(
									const CKV3MemberName& rhs);  // 96
							KeyValues3::FindMember(
									CKV3MemberName memberName,
									KeyValues3* pDefaultValue);  // 4063
							CKV3MemberName::CKV3MemberName<19>(
										const char& str);  // 4070
							CKV3MemberName::CKV3MemberName(
									const CKV3MemberName& rhs);  // 96
							KeyValues3::FindMember(
									CKV3MemberName memberName,
									KeyValues3* pDefaultValue);  // 4070
						}
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4108
					}
					{
						PipelineLayoutVulkan_t pipelineLayout; // 4117
						CUtlFixedLinkedList<VkSampler_T*> immutableSamplers; // 4121
						VkPipelineLayoutCreateInfo pipelineLayoutCreateInfo; // 4203
						{
							int32 nDescriptorSet; // 4122
							{
								VkDescriptorSetLayoutBinding* pLayoutBindings; // 4124
								VkDescriptorSetLayoutCreateInfo descriptorSetLayoutCreateInfo; // 4155
								VkDescriptorSetLayoutBindingFlagsCreateInfoEXT descriptorSetLayoutBindingFlagsCreateInfo; // 4161
								{
									uint32_t nImmutableSampler; // 4132
									{
										const CSamplerStateDesc* pImmutableSamplerDesc; // 4140
										CVulkanSamplerObject* pSamplerObject; // 4141
										IndexType_t nSamplerIndex; // 4142
										{
											const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4137
										}
										CUtlMemory<int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
												int i);  // 4137
										CUtlMemory<PipelineLayoutImmutableSampler_t, int>::operator[](
												int i);  // 588
										CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator[](
												int i);  // 4140
										CVulkanObject<VkSampler_T::Get()>* this); // 4142
										CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::operator[](
												intp i);  // 482
										CUtlLinkedList<VkSampler_T::Element(
											long long int i);  // 825
										CopyConstruct<VkSampler_T*>(VkSampler_T** pMemory,
														VkSampler_T* const& src);  // 825
										CUtlLinkedList<VkSampler_T::InsertBefore(
												long long int before,
												VkSampler_T* const& src);  // 856
										CUtlLinkedList<VkSampler_T::AddToTail(
												VkSampler_T* const& src);  // 4142
										CUtlLinkedList<VkSampler_T::operator[](
												long long int i);  // 4145
										CUtlMemory<PipelineLayoutImmutableSampler_t, int>::operator[](
												int i);  // 588
										CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator[](
												int i);  // 4145
									}
									CUtlMemory<PipelineLayoutImmutableSampler_t, int>::operator[](
											int i);  // 588
									CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::operator[](
											int i);  // 4135
								}
								CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
										int i);  // 588
								operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
										int i);  // 4181
								CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 112
								CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 4181
								CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
										int i);  // 588
								operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
										int i);  // 4151
								CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 112
								CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 4151
								CUtlMemory<int, int>::operator[](
										int i);  // 588
								CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
										int i);  // 4128
								memcpy(void* __dest,
									const void* __src,
									size_t __len);  // 91
								V_memcpy(void* dest,
									const void* src,
									size_t count);  // 4129
								CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
										int i);  // 588
								operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtlMemory this,
										int i);  // 4129
								CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 112
								CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 4129
								CUtlMemory<int, int>::operator[](
										int i);  // 588
								CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
										int i);  // 4158
								Count(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, this); // 4162
								CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
										int i);  // 588
								operator[](const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, CUtlMe this,
										int i);  // 4162
								CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 4162
								CUtlMemory<unsigned int, int>::Base(); // 112
								CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 4164
								CRenderDeviceVulkan::EXTGraphicsPipelineLibraryEnabled(); // 4169
								CUtlString::CUtlString(); // 149
								CUtlString::Get(); // 151
								CUtlString::~CUtlString(); // 153
								_DOVK(VkResult result,
									const char* pCommand);  // 4173
							}
						}
						CUtlLinkedList<VkSampler_T::ResetDbgInfo(); // 455
						CUtlLinkedList<VkSampler_T::ConstructList(); // 454
						CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::CUtlFixedMemory(
								int nGrowSize,
								int nInitAllocationCount);  // 448
						CUtlLinkedList<VkSampler_T::CUtlLinkedList(
								int growSize,
								int initSize);  // 404
						CUtlFixedLinkedList<VkSampler_T::CUtlFixedLinkedList(
									int growSize,
									int initSize);  // 4121
						CRenderDeviceVulkan::EXTGraphicsPipelineLibraryEnabled(); // 4191
						CUtlMemory<VkPushConstantRange, int>::Base(); // 112
						CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Base(); // 4210
						CUtlString::CUtlString(); // 149
						CUtlString::Get(); // 151
						CUtlString::~CUtlString(); // 153
						_DOVK(VkResult result,
							const char* pCommand);  // 4211
						CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::operator[](
								int i);  // 720
						CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>::CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>(
															const PipelineLayoutCreateInfo_t& k,
															const PipelineLayoutVulkan_t& v);  // 1514
						Construct<CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, const PipelineLayoutCreateInfo_t&, const PipelineLayoutVulkan_t&>(CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>* pMemory); // 720
						DoInsert<const PipelineLayoutCreateInfo_t&>(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, PipelineLayout this,
												const PipelineLayoutCreateInfo_t& k,
												Arg_t v,
												unsigned int h,
												bool* pDidInsert);  // 714
						DoInsert<const PipelineLayoutCreateInfo_t&>(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, PipelineLayout this,
												const PipelineLayoutCreateInfo_t& k,
												Arg_t v,
												unsigned int h,
												bool* pDidInsert);  // 249
						Insert(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, PipelineLayout this,
							KeyArg_t k,
							ValueArg_t v,
							bool* pDidInsert);  // 4212
						{
							BlockHeader_t* pbh; // 338
							{
								BlockHeader_t* pFree; // 340
							}
						}
						CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::Purge(); // 167
						CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::~CUtlFixedMemory(); // 462
						CUtlLinkedList<VkSampler_T::~CUtlLinkedList(); // 400
						CUtlFixedLinkedList<VkSampler_T::~CUtlFixedLinkedList(); // 4213
						{
							BlockHeader_t* pbh; // 338
							{
								BlockHeader_t* pFree; // 340
							}
						}
						CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::Purge(); // 167
						CUtlFixedMemory<UtlLinkedListElem_t<VkSampler_T::~CUtlFixedMemory(); // 462
						CUtlLinkedList<VkSampler_T::~CUtlLinkedList(); // 400
						CUtlFixedLinkedList<VkSampler_T::~CUtlFixedLinkedList(); // 4213
					}
					CKV3MemberName::CKV3MemberName<22>(
								const char& str);  // 4094
					CKV3MemberName::CKV3MemberName<19>(
								const char& str);  // 4095
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 4095
					CKV3MemberName::CKV3MemberName<31>(
								const char& str);  // 4101
					CKV3MemberName::CKV3MemberName<21>(
								const char& str);  // 4104
					CKV3MemberName::CKV3MemberName<18>(
								const char& str);  // 4105
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 4105
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::RemoveMultipleFromTail(
								int num);  // 1323
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1294
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::AddMultipleToTail(
								int num);  // 1319
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::SetCount(
						int count);  // 1341
					CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Base(); // 112
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Base(); // 102
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::begin(); // 1344
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 85
					V_memcpy(void* dest,
						const void* src,
						ptrdiff_t count);  // 180
					UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
									const unsigned int* pFromEnd,
									unsigned int* pTo);  // 173
					UtlTraitsCopyRange<PipelineLayoutImmutableSampler_t>(const PipelineLayoutImmutableSampler_t* pFrom,
												const PipelineLayoutImmutableSampler_t* pFromEnd,
												PipelineLayoutImmutableSampler_t* pTo);  // 1344
					CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::CopyArray(
							const PipelineLayoutImmutableSampler_t* pArray,
							int size);  // 4109
					CKV3MemberName::CKV3MemberName<20>(
								const char& str);  // 4112
					Find(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, Pipeline this,
						KeyArg_t k);  // 4115
					CUtlMemory<VkPushConstantRange, int>::Base(); // 112
					CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Base(); // 102
					CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::begin(); // 1344
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 85
					V_memcpy(void* dest,
						const void* src,
						ptrdiff_t count);  // 180
					UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
									const unsigned int* pFromEnd,
									unsigned int* pTo);  // 173
					UtlTraitsCopyRange<VkPushConstantRange>(const VkPushConstantRange* pFrom,
										const VkPushConstantRange* pFromEnd,
										VkPushConstantRange* pTo);  // 1344
					CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::CopyArray(
							const VkPushConstantRange* pArray,
							int size);  // 4098
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
				PipelineLayoutCreateInfo_t::PipelineLayoutCreateInfo_t(); // 3993
				CKV3MemberName::CKV3MemberName<19>(
							const char& str);  // 3997
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 96
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						KeyValues3* pDefaultValue);  // 3997
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
				int nLineNumber);  // 3988
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 4216
	}
	CPipelineManagerVulkan::CreateCacheDirectory(); // 3859
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 3866
	CUtlString::CUtlString(); // 3875
	{
		const uint32  m; // 123
		uint32 h; // 124
		uint32 k; // 125
		const int  r; // 126
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<8>(
				const char& str);  // 3884
	CUtlString::Get(); // 3888
	CUtlString::~CUtlString(); // 4222
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 4222
	CUtlString::Get(); // 3878
	CUtlString::Get(); // 3878
	CUtlString::Get(); // 3868
	CKV3MemberName::CKV3MemberName<10>(
				const char& str);  // 3893
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 3893
	CKV3MemberName::CKV3MemberName<14>(
				const char& str);  // 3918
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 3918
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 3919
	CUtlString::Get(); // 3887
	CUtlString::Get(); // 3896
	CUtlString::Get(); // 3947
	CKV3MemberName::CKV3MemberName<14>(
				const char& str);  // 3927
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 3927
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long unsigned int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 694
	KeyValues3::GetValueAsNumeric<long long unsigned int>(); // 194
	KeyValues3::GetValueUint64(); // 3928
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 3943
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 3962
	CUtlString::Get(); // 3946
	CUtlString::Get(); // 3964
	CUtlString::Get(); // 3922
	CUtlString::Get(); // 3905
	CUtlString::Get(); // 3952
	CUtlString::Get(); // 3958
	CKV3MemberName::CKV3MemberName<20>(
				const char& str);  // 3984
	CUtlString::Get(); // 3978
} /* size: 0, variables: 21, inline expansions: 54 (1938 bytes) */

// <007137B4> vulkan/pipelinemgrvulkan.cpp:4225
// variables: 30
// function calls: 85
void CPipelineManagerVulkan::StorePipelineCache()
{
	size_t nCacheSize; // 4237
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4262; // 4262
	CKeyValues3Context pipelineCacheKV3Context; // 4264
	KeyValues3* pPipelineCacheKV3Root; // 4265
	const char   __FUNCTION__; // 56996
	KeyValues3* pPipelineCacheDataBlob; // 4270
	byte* pData; // 4272
	VkResult nResult; // 4274
	const uint64  nCacheHash; // 4281
	KeyValues3* pPipelineLayoutTableKV; // 4286
	int32 nCurrentIndex; // 4289
	CUtlString errMsg; // 4339
	CUtlString tmpPath; // 4345
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4266
	}
	{
		UtlHashHandle_t nIndex; // 4290
		{
			const PipelineLayoutCreateInfo_t& pipelineLayoutCreateInfo; // 4292
			KeyValues3* pPipelineLayoutElement; // 4293
			KeyValues3* pDescriptorSetTableKV; // 4296
			{
				int32 nDescriptorSet; // 4299
				{
					KeyValues3* pDescriptorSetKV; // 4302
					KeyValues3* pLayoutBindingsBlob; // 4306
					{
						KeyValues3* pLayoutBindingsFlagBlob; // 4311
						CKV3MemberName::CKV3MemberName<19>(
									const char& str);  // 4311
						CUtlMemory<int, int>::operator[](
								int i);  // 595
						CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
								int i);  // 4312
						CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int,  this,
								int i);  // 4312
						CUtlMemory<unsigned int, int>::Base(); // 113
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 4312
					}
					CKV3MemberName::CKV3MemberName<18>(
								const char& str);  // 4303
					CUtlMemory<int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 4303
					CKV3MemberName::CKV3MemberName<15>(
								const char& str);  // 4306
					CUtlMemory<int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 4307
					CUtlMemory<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CUtlVector<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >, CUtl this,
							int i);  // 4307
					CUtlMemory<VkDescriptorSetLayoutBinding, int>::Base(); // 113
					CUtlVectorBase<VkDescriptorSetLayoutBinding, CUtlMemory<VkDescriptorSetLayoutBinding, int> >::Base(); // 4307
					Count(const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int, this); // 4309
					CUtlMemory<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >, CUtlMemory<CUtlVector<unsigned int,  this,
							int i);  // 4309
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 4309
				}
			}
			{
				KeyValues3* pPushConstantRangesBlob; // 4320
				CKV3MemberName::CKV3MemberName<19>(
							const char& str);  // 4320
				CUtlMemory<VkPushConstantRange, int>::Base(); // 113
				CUtlVectorBase<VkPushConstantRange, CUtlMemory<VkPushConstantRange, int> >::Base(); // 4321
			}
			{
				KeyValues3* pImmutableSamplersBlob; // 4330
				CKV3MemberName::CKV3MemberName<18>(
							const char& str);  // 4330
				CUtlMemory<PipelineLayoutImmutableSampler_t, int>::Base(); // 113
				CUtlVectorBase<PipelineLayoutImmutableSampler_t, CUtlMemory<PipelineLayoutImmutableSampler_t, int> >::Base(); // 4331
			}
			CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::operator[](
					int i);  // 293
			Key(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, Pipeline this,
				handle_t idx);  // 4292
			CKV3MemberName::CKV3MemberName<19>(
						const char& str);  // 4296
			CKV3MemberName::CKV3MemberName<22>(
						const char& str);  // 4317
			CKV3MemberName::CKV3MemberName<31>(
						const char& str);  // 4324
			CKV3MemberName::CKV3MemberName<21>(
						const char& str);  // 4327
			CKV3MemberName::CKV3MemberName<20>(
						const char& str);  // 4334
		}
		CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::Count(); // 915
			CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, Pipeline this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, Pipeline this); // 4290
		CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>, int>::Count(); // 915
			CUtlHashtableEntry<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, Pipeline this,
				handle_t start);  // 4290
	}
	CPipelineManagerVulkan::CreateCacheDirectory(); // 4227
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 4238
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
			int nLineNumber);  // 4262
	CUtlString::Get(); // 4251
	{
		const uint32  m; // 123
		uint32 h; // 124
		uint32 k; // 125
		const int  r; // 126
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<8>(
				const char& str);  // 4267
	CKV3MemberName::CKV3MemberName<10>(
				const char& str);  // 4270
	ComputePipelineCacheFileHash(const void* pData,
					size_t nBytes);  // 4281
	CKV3MemberName::CKV3MemberName<14>(
				const char& str);  // 4282
	CKV3MemberName::CKV3MemberName<14>(
				const char& str);  // 4283
	CKV3MemberName::CKV3MemberName<20>(
				const char& str);  // 4286
	Count(const CUtlHashtable<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t, PipelineLayoutCreateHashFunctor_t, Pipeline this); // 4287
	CUtlString::CUtlString(); // 4339
	CUtlString::CUtlString(); // 4345
	CUtlString::Get(); // 4346
	CUtlString::Get(); // 4347
	CUtlString::Get(); // 4348
	CUtlString::Get(); // 4354
	CUtlString::Get(); // 4354
	CUtlString::Get(); // 4358
	CUtlString::Get(); // 4359
	CUtlString::Get(); // 4359
	CUtlString::~CUtlString(); // 4368
	CUtlString::~CUtlString(); // 4368
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 4368
	CUtlString::Get(); // 4350
	CUtlString::Get(); // 4350
	CUtlString::Get(); // 4351
	CUtlString::Get(); // 4361
	CUtlString::Get(); // 4361
	CUtlString::Get(); // 4362
} /* size: 0, variables: 13, inline expansions: 42 (1377 bytes) */

// <00751720> vulkan/pipelinemgrvulkan.cpp:4371
void CPipelineManagerVulkan::FlushPipelineCache()
{
} /* size: 33 */

// <00750BBF> vulkan/pipelinemgrvulkan.cpp:4371
// variables: 5
// function calls: 39
void CPipelineManagerVulkan::FlushPipelineCache()
{
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4375; // 4375
		CUtlVector<VkPipelineCache_T*, CUtlMemory<VkPipelineCache_T*, int> > perThreadCaches; // 4379
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
				int nLineNumber);  // 4375
		CUtlMemory<VkPipelineCache_T::ValidateGrowSize(); // 475
		CUtlMemory<VkPipelineCache_T::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<VkPipelineCache_T::ResetDbgInfo(); // 530
		CUtlVectorBase<VkPipelineCache_T::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<VkPipelineCache_T::CUtlVector(); // 4379
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4381; // 4381
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
					int nLineNumber);  // 4381
			{
				int _idx_pPerThread; // 4382
				{
					PerThreadDataVulkan_t* pPerThread; // 4382
					CUtlMemory<VkPipelineCache_T::operator[](
							int i);  // 602
					CUtlVectorBase<VkPipelineCache_T::Element(
						int i);  // 1201
					CopyConstruct<VkPipelineCache_T*>(VkPipelineCache_T** pMemory,
										VkPipelineCache_T* const& src);  // 1201
					CUtlMemory<VkPipelineCache_T::Grow(
						int num);  // 806
					CUtlVectorBase<VkPipelineCache_T::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<VkPipelineCache_T::AddToTail(
							VkPipelineCache_T* const& src);  // 4386
				}
			}
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 4389
		}
		CUtlMemory<VkPipelineCache_T::Purge(); // 903
		CUtlMemory<VkPipelineCache_T::Purge(); // 1799
		CUtlVectorBase<VkPipelineCache_T::Purge(); // 560
		ValidateAlignment<VkPipelineCache_T*>(void); // 508
		CUtlMemory<VkPipelineCache_T::Purge(); // 510
		CUtlMemory<VkPipelineCache_T::~CUtlMemory(); // 562
		CUtlVectorBase<VkPipelineCache_T::~CUtlVectorBase(); // 410
		CUtlVector<VkPipelineCache_T::~CUtlVector(); // 4397
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 4397
	}
} /* size: 618 */

// <0071371E> vulkan/pipelinemgrvulkan.cpp:4371
// variables: 5
void CPipelineManagerVulkan::FlushPipelineCache()
{
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4375; // 4375
		CUtlVector<VkPipelineCache_T*, CUtlMemory<VkPipelineCache_T*, int> > perThreadCaches; // 4379
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_4381; // 4381
			{
				int _idx_pPerThread; // 4382
				{
					PerThreadDataVulkan_t* pPerThread; // 4382
				}
			}
		}
	}
} /* size: 0 */

// <0071279D> vulkan/pipelinemgrvulkan.cpp:4403
// variables: 6
// function calls: 48
void CPipelineManagerVulkan::PreWarmPipeline(PerThreadDataVulkan_t* pPerThread, const CPipelineVulkan* pPipelineVulkan, const PipelineLayoutCreateInfo_t* pPipelineLayoutCreateInfo)
{
	PipelineObjectVulkan_t* pNewPipelineObject; // 4416
	bool bPipelineCreated; // 4417
	{
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> > generated_id_4407; // 4407
		PipelineHashHandle_t hElem; // 4408
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3047
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3053
		CThreadRWLock::LockForRead(
				const char* pFileName,
				int nLineNumber);  // 951
		Lock(CThreadRWLock& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::CAutoLockT(
				const CThreadRWLock& lock,
				const char* pFilename,
				int nLineNumber);  // 4407
		PipelineCreateHashFunctor_t::operator(
				const PipelineCreateInfo_t& pipelineCreateInfo);  // 218
		CUtlHashtable<PipelineCreateInfo_t, PipelineObjectVulkan_t::Find(
			KeyArg_t k);  // 4408
		CPipelineVulkan::GetPipelineInfo(); // 4408
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3058
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3064
		CThreadRWLock::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 952
		Unlock(CThreadRWLock& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::~CAutoLockT(); // 4414
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 3058
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 3064
		CThreadRWLock::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 952
		Unlock(CThreadRWLock& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::~CAutoLockT(); // 4414
	}
	{
		PreWarmPipeline_t preWarmPipeline; // 4420
		PipelineCreateInfo_t::PipelineCreateInfo_t(); // 957
		PreWarmPipeline_t::PreWarmPipeline_t(); // 4420
		ThreadPause(void); // 208
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		CTSListBase::Pop(); // 1085
		CopyConstruct<CPipelineManagerVulkan::PreWarmPipeline_t>(PreWarmPipeline_t* pMemory,
									const PreWarmPipeline_t& src);  // 1090
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
			CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::InterlockedCompareExchangeNodeLink(
								volatile union NodeLink_t* pLink,
								const union NodeLink_t& value,
								const union NodeLink_t& comperand);  // 1135
			CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::FinishPush(
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
			CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::InterlockedCompareExchangeNode(
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
		CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 991
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 993
		CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::Push(
			Node_t* pNode);  // 1091
		PipelineCreateInfo_t::PipelineCreateInfo_t(); // 957
		PreWarmPipeline_t::PreWarmPipeline_t(); // 827
		Node_t::Node_t(); // 1088
		CTSQueue<CPipelineManagerVulkan::PreWarmPipeline_t, false>::PushItem(
			const PreWarmPipeline_t& init);  // 4423
	}
	PipelineCreateInfo_t::PipelineCreateInfo_t(); // 658
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 660
	PipelineObjectVulkan_t::PipelineObjectVulkan_t(); // 4416
} /* size: 0, variables: 2, inline expansions: 4 (255 bytes) */

// <00712591> vulkan/pipelinemgrvulkan.cpp:4443
// variables: 2
// function calls: 4
void CPipelineManagerVulkan::CreateGraphicsPipelineLibrary(PerThreadDataVulkan_t* pPerThread, const CPipelineVulkan* pPipelineVulkan, VkGraphicsPipelineLibraryFlagsEXT nPipelineLibraryStage, const PipelineLayoutCreateInfo_t* pPipelineLibraryPipelineLayout)
{
	PipelineObjectVulkan_t* pPipeline; // 4446
	bool bCreated; // 4447
	PipelineCreateInfo_t::PipelineCreateInfo_t(); // 658
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 660
	PipelineObjectVulkan_t::PipelineObjectVulkan_t(); // 4446
} /* size: 305, variables: 2, inline expansions: 4 (255 bytes) */

// <0071184B> vulkan/pipelinemgrvulkan.cpp:4461
// variables: 5
void PipelineCreateInfo_t::Dump()
{
	{
		uint32 nShader; // 4497
	}
	{
		uint32 nSet; // 4505
	}
	{
		uint32 nAttach; // 4510
	}
	{
		uint32 nBinding; // 4523
	}
	{
		uint32 nAttrib; // 4530
	}
} /* size: 0 */

