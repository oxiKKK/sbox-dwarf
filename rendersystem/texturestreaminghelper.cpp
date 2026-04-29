
//
// rendersystem/texturestreaminghelper.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 26
//

// <003A372B> rendersystem/texturestreaminghelper.cpp:68
// variables: 6
inline float ComputeTextureStreamingPriority(CTextureInfoChunkBase* pChunk, int nInChunkIdx, float32 flDecayRate)
{
	int nMaxRequestedDim; // 70
	const int  nMaxDiskDim; // 71
	int nResidentDim; // 74
	float32 flDecayingMaxRequestedDim; // 77
	const float32  flResidentDim; // 81
	const float  flDiff; // 87
} /* size: 0, variables: 6 */

// <003A5659> rendersystem/texturestreaminghelper.cpp:92
// function call: 1
bool TextureStreamingPrioritySortFunc(const TextureStreamingPriorityInfo_t& left, const TextureStreamingPriorityInfo_t& right)
{
	TextureStreamingPrioritySortFunc(const TextureStreamingPriorityInfo_t& left,
					const TextureStreamingPriorityInfo_t& right);  // 92
} /* size: 112, inline expansions: 1 (26 bytes) */

// <003A3700> rendersystem/texturestreaminghelper.cpp:92
inline bool TextureStreamingPrioritySortFunc(const TextureStreamingPriorityInfo_t& left, const TextureStreamingPriorityInfo_t& right)
{
} /* size: 0 */

// <003A3134> rendersystem/texturestreaminghelper.cpp:125
// function calls: 25
void CTextureStreamingHelper::CTextureStreamingHelper(CTextureManagerBase* pTextureManager)
{
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<TextureStreamingPriorityInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TextureStreamingPriorityInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::CUtlVector(); // 54
	BuildStreamableTextureListState_t::Reset(); // 54
	BuildStreamableTextureListState_t::BuildStreamableTextureListState_t(); // 133
	CUtlMemory<TextureStreamingPriorityInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TextureStreamingPriorityInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::CUtlVector(); // 54
	BuildStreamableTextureListState_t::Reset(); // 54
	BuildStreamableTextureListState_t::BuildStreamableTextureListState_t(); // 133
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 530
	CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 87
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 530
	CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 87
	TextureResidencyStats_t::TextureResidencyStats_t(); // 133
} /* size: 343, inline expansions: 25 (652 bytes) */

// <003A310F> rendersystem/texturestreaminghelper.cpp:125
void CTextureStreamingHelper::CTextureStreamingHelper(CTextureManagerBase* pTextureManager)
{
} /* size: 0 */

// <003A2991> rendersystem/texturestreaminghelper.cpp:139
// function calls: 40
void CTextureStreamingHelper::~CTextureStreamingHelper()
{
	RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 1798
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 560
	ValidateAlignment<CWeakHandle<InfoForResourceTypeCTextureBase> >(void); // 508
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 510
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 410
	~CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 87
	RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 1798
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 560
	ValidateAlignment<CWeakHandle<InfoForResourceTypeCTextureBase> >(void); // 508
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 510
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 410
	~CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 87
	TextureResidencyStats_t::~TextureResidencyStats_t(); // 141
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<TextureStreamingPriorityInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<TextureStreamingPriorityInfo_t, int>::Purge(); // 903
	CUtlMemory<TextureStreamingPriorityInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Purge(); // 560
	ValidateAlignment<TextureStreamingPriorityInfo_t>(void); // 508
	CUtlMemory<TextureStreamingPriorityInfo_t, int>::Purge(); // 510
	CUtlMemory<TextureStreamingPriorityInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::~CUtlVector(); // 29
	BuildStreamableTextureListState_t::~BuildStreamableTextureListState_t(); // 141
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<TextureStreamingPriorityInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<TextureStreamingPriorityInfo_t, int>::Purge(); // 903
	CUtlMemory<TextureStreamingPriorityInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Purge(); // 560
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::~CUtlVector(); // 29
	BuildStreamableTextureListState_t::~BuildStreamableTextureListState_t(); // 141
} /* size: 190, inline expansions: 40 (836 bytes) */

// <003A2929> rendersystem/texturestreaminghelper.cpp:139
void CTextureStreamingHelper::~CTextureStreamingHelper()
{
} /* size: 36 */

// <003A2880> rendersystem/texturestreaminghelper.cpp:144
// variable: 1
void CTextureStreamingHelper::Init()
{
	const bool  bToolsMode; // 146
} /* size: 89, variables: 1 */

// <003A1315> rendersystem/texturestreaminghelper.cpp:155
// variables: 7
// function calls: 93
void CTextureStreamingHelper::ComputeTextureSpecificationFromMipDelta(const CTextureBase* pTexture, int nMipDelta, TextureSpecification_t* pTexSpecOut)
{
	const char   __FUNCTION__; // 46390
	const TextureSpecification_t* pDiskSpec; // 161
	const int  nDeltaMipCount; // 169
	const size_t  nStreamingBitsByteCount; // 177
	const size_t  nOldSize; // 178
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 157
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
		CTextureInfoId::GetResourceHandle(); // 478
		CTextureBase::GetTextureHandle(); // 157
		CResourceName::Get(); // 157
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 157
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
		CTextureInfoId::GetResourceHandle(); // 478
		CTextureBase::GetTextureHandle(); // 170
		CResourceName::Get(); // 170
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 170
	}
	CTextureInfoId::IsOutOfBounds(); // 157
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 161
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 63
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<unsigned int, int>::NumAllocated(); // 782
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount(
		int count);  // 573
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
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 173
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 574
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 565
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 68
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
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 173
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
			const TextureSpecification_t& rhs);  // 163
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 406
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 406
	CTextureBase::GetMaxLoadedMipLevels(); // 404
	CTextureBase::GetMaxLoadedMipLevels(); // 168
	Max<short int>(const short int& val1,
			const short int& val2);  // 171
	Max<short int>(const short int& val1,
			const short int& val2);  // 172
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 179
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 181
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 182
	CTextureDesc::GetArrayCount(); // 155
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 187
	CTextureDesc::GetDepth(); // 155
	TextureSpecification_t::GetGpuMemorySizeInBytes(); // 986
	ComputeTextureSizeInBytes(const TextureSpecification_t& texSpec); // 177
} /* size: 0, variables: 5, inline expansions: 75 (3848 bytes) */

// <00391766> rendersystem/texturestreaminghelper.cpp:183
// variables: 15
// function calls: 81
void CTextureStreamingHelper::IssueTextureLoadRequest(CTextureBase* pTexture, const TextureSpecification_t& texSpec)
{
	const char   __FUNCTION__; // 46023
	CPathBufferString fileName; // 197
	const int64  nStreamingBitsOffset; // 200
	size_t nStreamingBitsByteCount; // 201
	IAsyncResourceDataRequest* pRequest; // 210
	const HRenderTexture  hTextureHandle; // 212
	const int  nStreamingRequestId; // 213
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 226
	}
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 185
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 186
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 186
	CTextureInfoId::GetPendingStreamingRequestId(); // 191
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 194
	CTextureInfoId::SetPendingStreamingRequestId(
					int32 nId);  // 195
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 197
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 198
	CTextureInfoId::GetStreamingBitsOffset(); // 200
	TextureSpecification_t::HasCompressedMips(); // 134
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 179
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 181
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 182
	CTextureDesc::GetArrayCount(); // 155
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 187
	CTextureDesc::GetDepth(); // 155
	TextureSpecification_t::GetGpuMemorySizeInBytes(); // 136
	{
		const int  nOriginalMips; // 141
		const int  nMipDiff; // 142
		uint nBytes; // 144
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 141
		{
			int nMip; // 145
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 147
		}
	}
	TextureSpecification_t::GetStreamingBitsByteCount(); // 132
	TextureSpecification_t::GetStreamingBitsByteCount(); // 201
	CTextureInfoId::GetDiskSpec(); // 202
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 210
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 478
	CTextureBase::GetTextureHandle(); // 212
	CTextureInfoId::GetPendingStreamingRequestId(); // 213
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 214
	{
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 214
		<lambda>(const class* this,
			const   &);  // 163
		_M_create<CTextureStreamingHelper::IssueTextureLoadRequest(CTextureBase*, const TextureSpecification_t&)::<lambda(IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult>)> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
		_M_init_functor<CTextureStreamingHelper::IssueTextureLoadRequest(CTextureBase*, const TextureSpecification_t&)::<lambda(IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult>)> >(union _Any_data& __functor,
																class& __f); // 451
		_M_not_empty_function<CTextureStreamingHelper::IssueTextureLoadRequest(CTextureBase*, const TextureSpecification_t&)::<lambda(IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult>)> >(const &); // 449
	}
	_Function_base::_Function_base(); // 439
	function<void(IAsyncResourceDataRequest::function<CTextureStreamingHelper::IssueTextureLoadRequest(
																class& __f);  // 214
	_Function_base::~_Function_base(); // 336
	function<void(IAsyncResourceDataRequest::~function(); // 214
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 52
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
	TextureSpecification_t::~TextureSpecification_t(); // 214
	~<lambda>(const class* this); // 214
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 220
	CInterlockedIntT<int, 4>::operator int(); // 226
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 227
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 228
} /* size: 0, variables: 7, inline expansions: 72 (2010 bytes) */

// <0039DDE1> rendersystem/texturestreaminghelper.cpp:231
// variables: 22
// function calls: 166
void CTextureStreamingHelper::LoadExplicitlyRequestedTextures()
{
	const char   __FUNCTION__; // 46209
	CUtlVector<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> > unservicedRequests; // 235
	int64 nAvailableMemory; // 237
	const bool  bStreamingStats; // 238
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_240; // 240
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
	{
		int i; // 241
		{
			CacheRequest_t item; // 243
			int nRefCount; // 247
			CTextureBase* pTexture; // 251
			int nTextureDimLimit; // 261
			const TextureSpecification_t* pDiskSpec; // 296
			TextureSpecification_t texSpec; // 297
			size_t nTextureSize; // 300
			const bool  bIsHighPriorityTexture; // 306
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 255
			}
			{
				const int  nResidentDim; // 272
				const int  nMaxDim; // 273
				CTextureInfoId::GetSpec(); // 403
				CTextureBase::GetSpec(); // 272
				__atomic_base<short unsigned int>::load(
					memory_order __m);  // 361
				__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
				CTextureInfoChunkBase::HasAnyFlags(
						int nTexId,
						uint16 nFlagsToTest);  // 1017
				CTextureInfoId::HasAnyFlags(
						uint16 nFlagsToTest);  // 279
				CTextureInfoId::GetSpec(); // 403
				CTextureBase::GetSpec(); // 272
				Max<short int>(const short int& val1,
						const short int& val2);  // 272
				CTextureInfoId::GetDiskSpec(); // 388
				CTextureBase::GetDiskSpec(); // 273
				CTextureInfoId::GetDiskSpec(); // 388
				CTextureBase::GetDiskSpec(); // 273
				Max<short int>(const short int& val1,
						const short int& val2);  // 273
				CUtlSymbolLarge::String(); // 160
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 184
				ResourceGetName(ResourceHandle_t hResource,
						CResourceName* pTarget);  // 488
				CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
						CResourceName* pOutName);  // 206
				CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
											const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 281
				CResourceName::Get(); // 281
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 318
				CResourceName::~CResourceName(); // 191
				CResourceNameGetter::~CResourceNameGetter(); // 281
			}
			ResourceRelease(ResourceHandle_t hResource,
					uintp nLeakTrackingPairingID,
					ResourceLeakTrackingGroup_t leakTrackingGroup);  // 74
			{
			}
			CInterlockedIntT<int, 4>::operator int(); // 83
			{
			}
			ThreadInterlockedDecrement(volatile int32* p); // 586
			CInterlockedIntT<int, 4>::operator--(); // 84
			ResourceRelease(ResourceHandle_t hResource,
					uintp nLeakTrackingPairingID,
					ResourceLeakTrackingGroup_t leakTrackingGroup);  // 247
			CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::operator[](
					int i);  // 243
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 785
			CacheRequest_t::CacheRequest_t(
					const CacheRequest_t  &);  // 243
			{
				const bool  bNotLast; // 1578
				CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::Element(
					int i);  // 1584
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 1584
			}
			Destruct<CTextureManagerBase::CacheRequest_t>(CacheRequest_t* pMemory); // 1575
			CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::FastRemove(
					int elem);  // 244
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 251
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
			CTextureInfoId::GetResourceHandle(); // 255
			CTextureInfoId::SetLastBindFrame(
					uint32 nLastBindFrame);  // 257
			__atomic_base<short unsigned int>::operator&=(
					__int_type __i);  // 531
			CTextureInfoChunkBase::ClearFlags(
					int nTexId,
					uint16 nFlagsToClear);  // 1012
			CTextureInfoId::ClearFlags(
					uint16 nFlagsToClear);  // 258
			CTextureManagerBase::GetMaxPreloadTextureRes(); // 261
			Max<int>(const int& val1,
				const int& val2);  // 265
			Min<int>(const int& val1,
				const int& val2);  // 267
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
			CTextureInfoChunkBase::HasAnyFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1017
			CTextureInfoId::HasAnyFlags(
					uint16 nFlagsToTest);  // 270
			CTextureManagerBase::GetMaxTextureRes(); // 267
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
			CTextureInfoChunkBase::HasAnyFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1017
			CTextureInfoId::HasAnyFlags(
					uint16 nFlagsToTest);  // 290
			CTextureInfoId::GetDiskSpec(); // 388
			CTextureBase::GetDiskSpec(); // 296
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			CTextureDesc::GetArrayCount(); // 155
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 187
			CTextureDesc::GetDepth(); // 155
			TextureSpecification_t::GetGpuMemorySizeInBytes(); // 986
			ComputeTextureSizeInBytes(const TextureSpecification_t& texSpec); // 300
			CTextureInfoId::GetTextureStreamingPriority(); // 306
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
			TextureSpecification_t::~TextureSpecification_t(); // 326
			CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::Element(
				int i);  // 1201
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 785
			CacheRequest_t::CacheRequest_t(
					const CacheRequest_t  &);  // 1520
			CopyConstruct<CTextureManagerBase::CacheRequest_t>(CacheRequest_t* pMemory,
										const CacheRequest_t& src);  // 1201
			CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::AddToTail(
					const CacheRequest_t& src);  // 292
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			CTextureDesc::GetArrayCount(); // 155
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 187
			CTextureDesc::GetDepth(); // 155
			TextureSpecification_t::GetGpuMemorySizeInBytes(); // 986
			ComputeTextureSizeInBytes(const TextureSpecification_t& texSpec); // 311
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
			CTextureInfoId::GetResourceHandle(); // 324
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::NumAllocated(); // 1247
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int i);  // 1252
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1514
			Construct<CWeakHandle<InfoForResourceTypeCTextureBase>, CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory); // 1252
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
			Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 368
			ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 824
			GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					int num);  // 1249
			AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 324
		}
		CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::Count(); // 241
	}
	{
		int i; // 327
		{
			const CTextureBase* pTexture; // 331
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 332
			}
			CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::Element(
				int i);  // 1201
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 785
			CacheRequest_t::CacheRequest_t(
					const CacheRequest_t  &);  // 1520
			CopyConstruct<CTextureManagerBase::CacheRequest_t>(CacheRequest_t* pMemory,
										const CacheRequest_t& src);  // 1201
			CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::NumAllocated(); // 1196
			CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::Base(); // 112
			CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::Base(); // 368
			CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::AddToTail(
					const CacheRequest_t& src);  // 334
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 330
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 71
			ResourceAddRef(ResourceHandle_t hResource,
					uintp nLeakTrackingPairingID,
					ResourceLeakTrackingGroup_t leakTrackingGroup);  // 330
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 331
			__atomic_base<short unsigned int>::operator|=(
					__int_type __i);  // 530
			CTextureInfoChunkBase::SetFlags(
				int nTexId,
				uint16 nFlagsToSet);  // 1007
			CTextureInfoId::SetFlags(
				uint16 nFlagsToSet);  // 333
		}
	}
	CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::CUtlVector(); // 235
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 240
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 338
	Max<long long int>(const long long int& val1,
				const long long int& val2);  // 337
	CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::Purge(); // 903
	CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::Purge(); // 1799
	CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::Purge(); // 560
	ValidateAlignment<CTextureManagerBase::CacheRequest_t>(void); // 508
	CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::Purge(); // 510
	CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::~CUtlVector(); // 338
} /* size: 0, variables: 5, inline expansions: 20 (1014 bytes) */

// <0039C5AE> rendersystem/texturestreaminghelper.cpp:342
// variables: 40
// function calls: 76
void CTextureStreamingHelper::BuildStreamableTextureList(BuildStreamableTextureListState_t* pState)
{
	const float64  flCurrTime; // 344
	const float32  flFrameDuration; // 345
	const float32  flTextureSizeDecayRate; // 346
	uint64 nAllTextureMemory; // 348
	uint64 nStreamableTextureMemory; // 349
	uint64 nRequiredStreamableTextureMemory; // 350
	uint64 nRequiredStreamableTextureMemoryWithoutEvictions; // 351
	int nTexturesToStreamIn; // 352
	int nTexturesToStreamOut; // 353
	int nTexturesKicked; // 354
	const int  nTextureStreamingMipBias; // 355
	const int  nGlobalMaxTextureRes; // 356
	const bool  bStreamingStats; // 357
	CTextureInfoId texId; // 359
	int nStreamableTexturesProcessed; // 361
	const char   __FUNCTION__; // 46094
	const bool  bFinishedIteratingAllTextures; // 577
	{
		CTextureInfoChunkBase* pChunk; // 370
		int nInChunkIdx; // 371
		CTextureInfoId currTexId; // 372
		size_t nTextureSize; // 487
		TextureStreamingPriorityInfo_t ti; // 491
		const int  nResidentMipCount; // 504
		int nMipDelta; // 505
		const TextureSpecification_t* pDiskSpec; // 506
		const int  nDiskMipLevels; // 507
		int nTargetMipCount; // 511
		uint32 nTargetWidth; // 527
		uint32 nTargetHeight; // 528
		size_t nTargetSize; // 532
		{
			const float  flMipLogDist; // 402
			const float  flResidentDim; // 404
			int nMaxReqSize; // 405
			{
				TextureStreamingPriorityInfo_t ti; // 433
				size_t nTextureSize; // 439
				CUtlMemory<TextureStreamingPriorityInfo_t, int>::NumAllocated(); // 1196
				CUtlMemory<TextureStreamingPriorityInfo_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<TextureStreamingPriorityInfo_t>(TextureStreamingPriorityInfo_t* pMemory,
										const TextureStreamingPriorityInfo_t& src);  // 1201
				CUtlMemory<TextureStreamingPriorityInfo_t, int>::Base(); // 112
				CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Base(); // 368
				CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::AddToTail(
						const TextureStreamingPriorityInfo_t& src);  // 89
				BuildStreamableTextureListState_t::AddRequest(
						const TextureStreamingPriorityInfo_t& newEntry);  // 448
			}
			CInterlockedIntT<int, 4>::operator int(); // 70
			Max<short int>(const short int& val1,
					const short int& val2);  // 71
			Max<short int>(const short int& val1,
					const short int& val2);  // 74
			Max<int>(const int& val1,
				const int& val2);  // 75
			ComputeTextureStreamingPriority(CTextureInfoChunkBase* pChunk,
							int nInChunkIdx,
							float32 flDecayRate);  // 402
			Max<short int>(const short int& val1,
					const short int& val2);  // 404
			CInterlockedIntT<int, 4>::operator int(); // 405
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
			CTextureInfoChunkBase::HasAllFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1265
			CTextureInfoChunkBase::IsStandinTexture(
					int nTexIdx);  // 406
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 411
		}
		{
			const float  flResidentDim; // 537
			Max<short int>(const short int& val1,
					const short int& val2);  // 537
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 573
		}
		Ceil2Int(float a); // 505
		__atomic_base<short unsigned int>::load(
			memory_order __m);  // 361
		__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
		CTextureInfoChunkBase::HasAnyFlags(
				int nTexId,
				uint16 nFlagsToTest);  // 382
		__atomic_base<short unsigned int>::load(
			memory_order __m);  // 361
		__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
		CTextureInfoChunkBase::HasAnyFlags(
				int nTexId,
				uint16 nFlagsToTest);  // 384
		__atomic_base<short unsigned int>::load(
			memory_order __m);  // 361
		__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
		CTextureInfoChunkBase::HasAllFlags(
				int nTexId,
				uint16 nFlagsToTest);  // 1275
		CTextureInfoChunkBase::SupportsPerMipStreaming(
					int nTexIdx);  // 400
		CInterlockedIntT<int, 4>::operator int(); // 466
		__atomic_base<short unsigned int>::load(
			memory_order __m);  // 361
		__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
		CTextureInfoChunkBase::HasAllFlags(
				int nTexId,
				uint16 nFlagsToTest);  // 1265
		CTextureInfoChunkBase::IsStandinTexture(
				int nTexIdx);  // 466
		CInterlockedIntT<int, 4>::operator int(); // 70
		Max<short int>(const short int& val1,
				const short int& val2);  // 71
		Max<short int>(const short int& val1,
				const short int& val2);  // 74
		Max<int>(const int& val1,
			const int& val2);  // 75
		ComputeTextureStreamingPriority(CTextureInfoChunkBase* pChunk,
						int nInChunkIdx,
						float32 flDecayRate);  // 495
		__atomic_base<short unsigned int>::load(
			memory_order __m);  // 361
		__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
		CTextureInfoChunkBase::HasAllFlags(
				int nTexId,
				uint16 nFlagsToTest);  // 1280
		CTextureInfoChunkBase::GetMaxLoadedMipLevels(
					int nTexIdx);  // 504
		Min<int>(const int& val1,
			const int& val2);  // 511
		clamp<int, int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 512
		Max<int>(const int& val1,
			const int& val2);  // 527
		Max<int>(const int& val1,
			const int& val2);  // 528
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 179
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 181
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 182
		CTextureDesc::GetArrayCount(); // 1288
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 187
		CTextureDesc::GetDepth(); // 1289
		CTextureInfoChunkBase::ComputeSize(
				int nTexIdx,
				int nWidth,
				int nHeight,
				int nNumMipLevels);  // 532
		Max<long unsigned int>(const long unsigned int& val1,
					const long unsigned int& val2);  // 555
		CUtlMemory<TextureStreamingPriorityInfo_t, int>::NumAllocated(); // 1196
		CUtlMemory<TextureStreamingPriorityInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Element(
			int i);  // 1201
		CopyConstruct<TextureStreamingPriorityInfo_t>(TextureStreamingPriorityInfo_t* pMemory,
								const TextureStreamingPriorityInfo_t& src);  // 1201
		CUtlMemory<TextureStreamingPriorityInfo_t, int>::Base(); // 112
		CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Base(); // 368
		CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::AddToTail(
				const TextureStreamingPriorityInfo_t& src);  // 89
		BuildStreamableTextureListState_t::AddRequest(
				const TextureStreamingPriorityInfo_t& newEntry);  // 574
	}
	{
		const int64  nAvailableStreamingTextureMemory; // 594
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 592
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 593
		}
		CTextureInfoId::Init(
			int nChunkIdx,
			int nInChunkIdx);  // 590
		Max<long long int>(const long long int& val1,
					const long long int& val2);  // 595
	}
	CTextureManagerBase::GetMaxTextureRes(); // 356
	CTextureInfoId::IsOutOfBounds(); // 362
	CTextureInfoId::IsOutOfBounds(); // 577
} /* size: 0, variables: 17, inline expansions: 3 (78 bytes) */

// <0039BA53> rendersystem/texturestreaminghelper.cpp:602
// variables: 15
// function calls: 36
void CTextureStreamingHelper::SatisfyTextureMemoryConstraints(CUtlVector<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >& textureList, int64 nRequiredStreamableTextureMemory, uint64 nAvailableStreamingTextureMemory, int* pTexturesToStreamIn, int* pTexturesToStreamOut)
{
	uint32 nTexturePriority; // 606
	const char   __FUNCTION__; // 46209
	{
		const int64  nRequiredStreamableTextureMemoryBefore; // 609
		{
			int i; // 610
			{
				TextureStreamingPriorityInfo_t& ti; // 612
				int nTargetMipCount; // 617
				CTextureInfoId texId; // 618
				CTextureInfoChunkBase* pChunk; // 619
				const TextureSpecification_t* pDiskSpec; // 621
				const int  nMipDelta; // 622
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 623
				}
				{
					int nMipWidth; // 637
					int nMipHeight; // 638
					size_t nMipSize; // 639
					const int  nResidentMipDelta; // 640
					Max<int>(const int& val1,
						const int& val2);  // 637
					Max<int>(const int& val1,
						const int& val2);  // 638
					{
					}
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 179
					{
					}
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 181
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 182
					CTextureDesc::GetArrayCount(); // 1288
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 187
					CTextureDesc::GetDepth(); // 1289
					CTextureInfoChunkBase::ComputeSize(
							int nTexIdx,
							int nWidth,
							int nHeight,
							int nNumMipLevels);  // 639
					__atomic_base<short unsigned int>::load(
						memory_order __m);  // 361
					__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
					CTextureInfoChunkBase::HasAllFlags(
							int nTexId,
							uint16 nFlagsToTest);  // 1280
					CTextureInfoChunkBase::GetMaxLoadedMipLevels(
								int nTexIdx);  // 640
				}
				__atomic_base<short unsigned int>::load(
					memory_order __m);  // 361
				__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
				CTextureInfoChunkBase::HasAllFlags(
						int nTexId,
						uint16 nFlagsToTest);  // 1295
				__atomic_base<short unsigned int>::load(
					memory_order __m);  // 361
				__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
				CTextureInfoChunkBase::HasAllFlags(
						int nTexId,
						uint16 nFlagsToTest);  // 1265
				CTextureInfoChunkBase::IsStandinTexture(
						int nTexIdx);  // 1300
				{
				}
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 179
				{
				}
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 181
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 182
				CTextureDesc::GetArrayCount(); // 1314
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 187
				CTextureDesc::GetDepth(); // 1315
				CTextureInfoChunkBase::ComputeCurrentlyResidentSize(
								int nTexIdx);  // 627
				CUtlMemory<TextureStreamingPriorityInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::operator[](
						int i);  // 612
				CTextureInfoId::GetDiskSpec(); // 621
			}
			CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Count(); // 610
		}
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 1093
		CTextureManagerBase::IsTextureStreamingUnThrottled(); // 1093
		CTextureStreamingHelper::IsTextureStreamingTimeSliced(); // 687
		CTextureManagerBase::UnThrottleTextureStreamingForNFrames(
							uint32 nNumberOfFramesForUnthrottledTextureLoading);  // 690
	}
} /* size: 0, variables: 2 */

// <0039A969> rendersystem/texturestreaminghelper.cpp:698
// variables: 11
// function calls: 74
void CTextureStreamingHelper::BalanceStreamableTextureMemory()
{
	const uint64  nAdditionalMemoryRequired; // 703
	{
		bool bFinishedIteratingAllTextures; // 707
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 1093
		CTextureManagerBase::IsTextureStreamingUnThrottled(); // 1093
		CTextureStreamingHelper::IsTextureStreamingTimeSliced(); // 721
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 1093
		CTextureManagerBase::IsTextureStreamingUnThrottled(); // 1093
		CTextureStreamingHelper::IsTextureStreamingTimeSliced(); // 711
		CTextureStreamingHelper::StreamInTextures(
				BuildStreamableTextureListState_t& s);  // 723
	}
	{
		int nTotalEvictedMipCount; // 768
		int nTotalEvictedTextureCount; // 769
		uint64 nTotalReclaimedMemory; // 770
		uint64 nRequiredStreamableTextureMemoryWithoutEvictions; // 771
		uint64 nRequiredStreamableTextureMemoryWithEvictions; // 787
		{
			const uint64  nTextureStreamingThrottleAmount; // 777
			const int  nTextureStreamingThrottleCount; // 778
			float flTextureUnthrottleTimeMs; // 779
			CTextureManagerBase::IsTextureStreamingUnThrottled(); // 777
			ConVar::GetFloat(); // 777
			ConVar::GetInt(); // 778
			ConVar::GetFloat(); // 779
		}
		CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::RemoveAll(); // 58
		BuildStreamableTextureListState_t::Reset(); // 756
		CUtlMemory<TextureStreamingPriorityInfo_t, int>::IsExternallyAllocated(); // 535
		CUtlMemory<TextureStreamingPriorityInfo_t, int>::IsExternallyAllocated(); // 535
		{
		}
		V_swap_through_temp<unsigned int>(unsigned int& x,
							unsigned int& y);  // 536
		V_swap_through_temp<TextureStreamingPriorityInfo_t*>(TextureStreamingPriorityInfo_t *& x,
									TextureStreamingPriorityInfo_t *& y);  // 537
		V_swap_through_temp<int>(int& x,
					int& y);  // 538
		CUtlMemory<TextureStreamingPriorityInfo_t, int>::Swap(
			CUtlMemory<TextureStreamingPriorityInfo_t, int>& mem);  // 1351
		swap<int>(int& __a,
				int& __b);  // 19
		V_swap<int>(int& x,
				int& y);  // 1352
		swap<TextureStreamingPriorityInfo_t*>(TextureStreamingPriorityInfo_t *& __a,
							TextureStreamingPriorityInfo_t *& __b);  // 19
		V_swap<TextureStreamingPriorityInfo_t*>(TextureStreamingPriorityInfo_t *& x,
							TextureStreamingPriorityInfo_t *& y);  // 1354
		CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Swap(
			CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >& vec);  // 757
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 775
		Max<long long int>(const long long int& val1,
					const long long int& val2);  // 787
		CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Count(); // 878
		CTextureStreamingHelper::StreamInTextures(
				BuildStreamableTextureListState_t& s);  // 800
		CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::RemoveAll(); // 58
		BuildStreamableTextureListState_t::Reset(); // 801
	}
	RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 1798
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 1800
	Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 104
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
	RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 1798
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 1800
	Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 105
	TextureResidencyStats_t::Reset(); // 700
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Count(); // 878
	CTextureStreamingHelper::StreamInTextures(
			BuildStreamableTextureListState_t& s);  // 740
	CUtlMemory<TextureStreamingPriorityInfo_t, int>::Base(); // 112
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Base(); // 104
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Count(); // 104
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::end(); // 735
	_Iter_comp_iter<bool (::_Iter_comp_iter(
			bool (*__comp)(const TextureStreamingPriorityInfo_t &, const TextureStreamingPriorityInfo_t &));  // 165
	__iter_comp_iter<bool (*)(const TextureStreamingPriorityInfo_t&, const TextureStreamingPriorityInfo_t&)>(bool (*__comp)(const TextureStreamingPriorityInfo_t &, const TextureStreamingPriorityInfo_t &)); // 4874
	__countl_zero<long unsigned int>(long unsigned int __x); // 388
	__bit_width<long unsigned int>(long unsigned int __x); // 1555
	__lg<long int>(long int __n); // 1907
	{
		TextureStreamingPriorityInfo_t* __i; // 1798
		_Val_comp_iter<bool (::_Val_comp_iter(
				_Iter_comp_iter<bool (*)(const TextureStreamingPriorityInfo_t&, const TextureStreamingPriorityInfo_t&)>& __comp);  // 253
		__val_comp_iter<bool (*)(const TextureStreamingPriorityInfo_t&, const TextureStreamingPriorityInfo_t&)>(_Iter_comp_iter<bool (*)(const TextureStreamingPriorityInfo_t&, const TextureStreamingPriorityInfo_t&)> __comp); // 1799
		_Val_comp_iter<bool (::operator(
												TextureStreamingPriorityInfo_t& __val,
												TextureStreamingPriorityInfo_t* __it);  // 1758
		__unguarded_linear_insert<TextureStreamingPriorityInfo_t*, __gnu_cxx::__ops::_Val_comp_iter<bool (*)(const TextureStreamingPriorityInfo_t&, const TextureStreamingPriorityInfo_t&)> >(TextureStreamingPriorityInfo_t* __last,
																_Val_comp_iter<bool (*)(const TextureStreamingPriorityInfo_t&, const TextureStreamingPriorityInfo_t&)> __comp); // 1799
	}
	__unguarded_insertion_sort<TextureStreamingPriorityInfo_t*, __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(const TextureStreamingPriorityInfo_t&, const TextureStreamingPriorityInfo_t&)> >(TextureStreamingPriorityInfo_t* __first,
																TextureStreamingPriorityInfo_t* __last,
																_Iter_comp_iter<bool (*)(const TextureStreamingPriorityInfo_t&, const TextureStreamingPriorityInfo_t&)> __comp); // 1819
	__final_insertion_sort<TextureStreamingPriorityInfo_t*, __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(const TextureStreamingPriorityInfo_t&, const TextureStreamingPriorityInfo_t&)> >(TextureStreamingPriorityInfo_t* __first,
																TextureStreamingPriorityInfo_t* __last,
																_Iter_comp_iter<bool (*)(const TextureStreamingPriorityInfo_t&, const TextureStreamingPriorityInfo_t&)> __comp); // 1909
	__sort<TextureStreamingPriorityInfo_t*, __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(const TextureStreamingPriorityInfo_t&, const TextureStreamingPriorityInfo_t&)> >(TextureStreamingPriorityInfo_t* __first,
																TextureStreamingPriorityInfo_t* __last,
																_Iter_comp_iter<bool (*)(const TextureStreamingPriorityInfo_t&, const TextureStreamingPriorityInfo_t&)> __comp); // 4874
	sort<TextureStreamingPriorityInfo_t*, bool (*)(const TextureStreamingPriorityInfo_t&, const TextureStreamingPriorityInfo_t&)>(TextureStreamingPriorityInfo_t* __first,
																TextureStreamingPriorityInfo_t* __last,
																bool (*__comp)(const TextureStreamingPriorityInfo_t &, const TextureStreamingPriorityInfo_t &)); // 735
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1093
	CTextureManagerBase::IsTextureStreamingUnThrottled(); // 1093
	CTextureStreamingHelper::IsTextureStreamingTimeSliced(); // 738
} /* size: 0, variables: 1, inline expansions: 32 (1360 bytes) */

// <003A5AE9> rendersystem/texturestreaminghelper.cpp:811
// variables: 7
// function calls: 6
void CTextureStreamingHelper::UpdateRequestedResolutionBias()
{
	double flCurrentTime; // 819
	bool bUpdateNow; // 820
	float flTimeElapsedInSeconds; // 821
	ConVar::GetFloat(); // 813
	ConVar::GetFloat(); // 833
	{
		float flCurrentBias; // 847
		float flNewBias; // 848
		{
			float flResolutionBiasIncrease; // 856
			ConVar::GetFloat(); // 856
		}
		{
			float flResolutionBiasDecrease; // 851
			ConVar::GetFloat(); // 851
			ConVar::GetFloat(); // 852
		}
	}
	CTextureStreamingHelper::UpdateRequestedResolutionBias(); // 811
} /* size: 427, variables: 3, inline expansions: 3 (381 bytes) */

// <0039A8EA> rendersystem/texturestreaminghelper.cpp:811
// variables: 7
void CTextureStreamingHelper::UpdateRequestedResolutionBias()
{
	double flCurrentTime; // 819
	bool bUpdateNow; // 820
	float flTimeElapsedInSeconds; // 821
	{
		float flCurrentBias; // 847
		float flNewBias; // 848
		{
			float flResolutionBiasDecrease; // 851
		}
		{
			float flResolutionBiasIncrease; // 856
		}
	}
} /* size: 0, variables: 3 */

// <0039A8BA> rendersystem/texturestreaminghelper.cpp:872
void CTextureStreamingHelper::UpdateStats()
{
} /* size: 5 */

// <003A789C> rendersystem/texturestreaminghelper.cpp:876
// variables: 7
// function call: 1
void CTextureStreamingHelper::StreamInTextures(BuildStreamableTextureListState_t& s)
{
	const bool  bStreamingStats; // 883
	const uint64  nTextureStreamingThrottleAmount; // 885
	int nTextureStreamingThrottleCount; // 886
	int32 nMipDeltaThreshold; // 888
	uint64 nTotalNewMemory; // 900
	int nTotalMipCount; // 901
	int nTotalTextureCount; // 902
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Count(); // 878
} /* size: 0, variables: 7, inline expansions: 1 (0 bytes) */

// <003A5DB2> rendersystem/texturestreaminghelper.cpp:876
// variables: 15
// function calls: 124
void CTextureStreamingHelper::StreamInTextures(BuildStreamableTextureListState_t& s)
{
	const bool  bStreamingStats; // 883
	const uint64  nTextureStreamingThrottleAmount; // 885
	int nTextureStreamingThrottleCount; // 886
	int32 nMipDeltaThreshold; // 888
	uint64 nTotalNewMemory; // 900
	int nTotalMipCount; // 901
	int nTotalTextureCount; // 902
	CTextureManagerBase::IsTextureStreamingUnThrottled(); // 885
	{
		int i; // 905
		CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Count(); // 905
		{
			CTextureInfoId texId; // 909
			CTextureBase* pTexture; // 912
			const int  nResidentMipCount; // 935
			const int  nMipDelta; // 936
			TextureSpecification_t adjustedTexSpec; // 942
			size_t nNewMemory; // 943
			CUtlMemory<TextureStreamingPriorityInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::operator[](
					int i);  // 909
			CTextureInfoId::GetLegacyTexture(); // 912
			{
				int i; // 1531
				CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Count(); // 1531
				CUtlMemory<CTextureInfoId, int>::operator[](
						int i);  // 609
				CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Element(
					int i);  // 1533
				CTextureInfoId::operator==(
						const CTextureInfoId& other);  // 1533
			}
			CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Find(
				const CTextureInfoId& src);  // 916
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
			CTextureInfoChunkBase::HasAnyFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1017
			CTextureInfoId::HasAnyFlags(
					uint16 nFlagsToTest);  // 919
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
			CTextureInfoId::GetResourceHandle(); // 923
			CInterlockedIntT<int, 4>::GetRaw(); // 383
			CWeakHandle<InfoForResourceTypeCTextureBase>::GetRefCount(); // 923
			{
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
				CTextureInfoId::GetResourceHandle(); // 929
				CWeakHandle<InfoForResourceTypeCTextureBase>::GetData(); // 929
				_DebuggerBreakInlineExpressionWrapper(void); // 929
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
				CTextureInfoId::GetResourceHandle(); // 931
				CResourceName::Get(); // 931
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 318
				CResourceName::~CResourceName(); // 191
				CResourceNameGetter::~CResourceNameGetter(); // 931
			}
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
			CTextureInfoChunkBase::HasAnyFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1017
			CTextureInfoId::HasAnyFlags(
					uint16 nFlagsToTest);  // 406
			CTextureInfoId::GetSpec(); // 403
			CTextureBase::GetSpec(); // 406
			CTextureBase::GetMaxLoadedMipLevels(); // 404
			CTextureBase::GetMaxLoadedMipLevels(); // 935
			CUtlMemory<TextureStreamingPriorityInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::operator[](
					int i);  // 936
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
			TextureSpecification_t::TextureSpecification_t(); // 942
			CUtlMemory<TextureStreamingPriorityInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::operator[](
					int i);  // 947
			CUtlMemory<float, int>::IsExternallyAllocated(); // 905
			CUtlMemory<float, int>::Purge(); // 903
			CUtlMemory<float, int>::Purge(); // 1799
			CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
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
			TextureSpecification_t::~TextureSpecification_t(); // 975
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			CTextureDesc::GetArrayCount(); // 155
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 187
			CTextureDesc::GetDepth(); // 155
			TextureSpecification_t::GetGpuMemorySizeInBytes(); // 986
			ComputeTextureSizeInBytes(const TextureSpecification_t& texSpec); // 958
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
			CTextureInfoId::GetResourceHandle(); // 960
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::NumAllocated(); // 1247
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int i);  // 1252
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1514
			Construct<CWeakHandle<InfoForResourceTypeCTextureBase>, CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory); // 1252
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
			Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 368
			ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 824
			GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					int num);  // 1249
			AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 960
			CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
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
			TextureSpecification_t::~TextureSpecification_t(); // 975
		}
	}
	ConVar::GetFloat(); // 885
	ConVar::GetInt(); // 886
	ConVar::GetInt(); // 893
} /* size: 0, variables: 7, inline expansions: 4 (42 bytes) */

// <0039A762> rendersystem/texturestreaminghelper.cpp:876
// variables: 14
void CTextureStreamingHelper::StreamInTextures(BuildStreamableTextureListState_t& s)
{
	const bool  bStreamingStats; // 883
	const uint64  nTextureStreamingThrottleAmount; // 885
	int nTextureStreamingThrottleCount; // 886
	int32 nMipDeltaThreshold; // 888
	uint64 nTotalNewMemory; // 900
	int nTotalMipCount; // 901
	int nTotalTextureCount; // 902
	{
		int i; // 905
		{
			CTextureInfoId texId; // 909
			CTextureBase* pTexture; // 912
			const int  nResidentMipCount; // 935
			const int  nMipDelta; // 936
			TextureSpecification_t adjustedTexSpec; // 942
			size_t nNewMemory; // 943
			{
			}
		}
	}
} /* size: 0, variables: 7 */

// <00399B72> rendersystem/texturestreaminghelper.cpp:979
// variables: 6
// function calls: 46
void CTextureStreamingHelper::RemoveTextureFromStreamableList(const CTextureBase* pTexture)
{
	const char   __FUNCTION__; // 46209
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 981
	}
	{
		int i; // 221
		CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Count(); // 221
		CUtlMemory<TextureStreamingPriorityInfo_t, int>::operator[](
				int i);  // 609
		CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Element(
			int i);  // 223
		CTextureInfoId::operator==(
				const CTextureInfoId& other);  // 96
		operator()(const class* __closure,
				const TextureStreamingPriorityInfo_t& stream); // 223
	}
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::FindMatching<BuildStreamableTextureListState_t::RemoveTexture(
																class& f);  // 99
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Remove(
		int elem);  // 102
	BuildStreamableTextureListState_t::RemoveTexture(
			const CTextureInfoId& id);  // 983
	{
		int i; // 221
		CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Count(); // 221
		CUtlMemory<TextureStreamingPriorityInfo_t, int>::operator[](
				int i);  // 609
		CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Element(
			int i);  // 223
		CTextureInfoId::operator==(
				const CTextureInfoId& other);  // 96
		operator()(const class* __closure,
				const TextureStreamingPriorityInfo_t& stream); // 223
	}
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::FindMatching<BuildStreamableTextureListState_t::RemoveTexture(
																class& f);  // 99
	CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Remove(
		int elem);  // 102
	BuildStreamableTextureListState_t::RemoveTexture(
			const CTextureInfoId& id);  // 988
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 478
	CTextureBase::GetTextureHandle(); // 990
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 488
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
			CResourceName* pOutName);  // 206
	CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 990
	CResourceName::Get(); // 990
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 990
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 478
	CTextureBase::GetTextureHandle(); // 985
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 488
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
			CResourceName* pOutName);  // 206
	CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 985
	CResourceName::Get(); // 985
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 985
} /* size: 0, variables: 1, inline expansions: 36 (1171 bytes) */

// <00398B9A> rendersystem/texturestreaminghelper.cpp:996
// variables: 17
// function calls: 57
void CTextureStreamingHelper::RemoveMipLevelsForTextures(const CUtlVector<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >& textures, uint64 nTextureStreamingThrottleAmount, int nTextureStreamingThrottleCount, float flUnthrottleTimeMs, uint64 nMemoryRequired, int& nTotalEvictedMipCountOut, int& nTotalEvictedTextureCountOut, uint64& nTotalReclaimedMemoryOut)
{
	CFastTimer timer; // 1000
	const char   __FUNCTION__; // 46094
	int nTotalEvictedMipCount; // 1004
	int nTotalEvictedTextureCount; // 1005
	uint64 nTotalReclaimedMemory; // 1006
	const bool  bStreamingStats; // 1007
	CRenderContextBasePtr pRenderContext; // 1009
	uint32 nTexturePriority; // 1011
	bool bFinished; // 1012
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1003
	}
	{
		int i; // 1015
		{
			const CTextureInfoId  texId; // 1017
			CTextureInfoChunkBase* pChunk; // 1018
			const int  nResidentMipCount; // 1019
			CTextureBase* pTexture; // 1021
			{
				size_t nReclaimedMemory; // 1024
				__atomic_base<short unsigned int>::load(
					memory_order __m);  // 361
				__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
				CTextureInfoChunkBase::HasAllFlags(
						int nTexId,
						uint16 nFlagsToTest);  // 1295
				__atomic_base<short unsigned int>::load(
					memory_order __m);  // 361
				__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
				CTextureInfoChunkBase::HasAllFlags(
						int nTexId,
						uint16 nFlagsToTest);  // 1265
				CTextureInfoChunkBase::IsStandinTexture(
						int nTexIdx);  // 1300
				{
				}
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 179
				{
				}
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 181
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 182
				CTextureDesc::GetArrayCount(); // 1314
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 187
				CTextureDesc::GetDepth(); // 1315
				CTextureInfoChunkBase::ComputeCurrentlyResidentSize(
								int nTexIdx);  // 1024
			}
			{
				int nMipDelta; // 1037
			}
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
			CTextureInfoChunkBase::HasAllFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1280
			CTextureInfoChunkBase::GetMaxLoadedMipLevels(
						int nTexIdx);  // 1019
			CTextureInfoId::GetLegacyTexture(); // 1021
			CUtlMemory<TextureStreamingPriorityInfo_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::operator[](
					int i);  // 1022
			CUtlMemory<TextureStreamingPriorityInfo_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::operator[](
					int i);  // 1017
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
			CTextureInfoId::GetResourceHandle(); // 1048
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::NumAllocated(); // 1247
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int i);  // 1252
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1514
			Construct<CWeakHandle<InfoForResourceTypeCTextureBase>, CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory); // 1252
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
			Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 368
			ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 824
			GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					int num);  // 1249
			AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1048
			CCycleCount::Init(
				uint64 cycles);  // 238
			CCycleCount::CCycleCount(); // 356
			PLAT_CPU_TIME(void); // 263
			CCycleCount::Sample(); // 357
			CCycleCount::Init(
				uint64 cycles);  // 238
			CCycleCount::CCycleCount(); // 359
			CFastTimer::GetDurationInProgress(); // 1070
			CCycleCount::GetMillisecondsF(); // 1070
		}
		CUtlVectorBase<TextureStreamingPriorityInfo_t, CUtlMemory<TextureStreamingPriorityInfo_t, int> >::Count(); // 1015
	}
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 63
	CFastTimer::CFastTimer(); // 1000
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 335
	CFastTimer::Start(); // 1001
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 356
	CRenderContextBasePtr::CRenderContextBasePtr(
				IRenderDevice* pDevice,
				const char* pDebugString);  // 1009
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 341
	CRenderContextBasePtr::~CRenderContextBasePtr(); // 1089
} /* size: 0, variables: 9, inline expansions: 11 (330 bytes) */

// <003A5CF0> rendersystem/texturestreaminghelper.cpp:1091
// function calls: 3
void CTextureStreamingHelper::IsTextureStreamingTimeSliced()
{
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1093
	CTextureManagerBase::IsTextureStreamingUnThrottled(); // 1093
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00398B81> rendersystem/texturestreaminghelper.cpp:1091
void CTextureStreamingHelper::IsTextureStreamingTimeSliced()
{
} /* size: 0 */

// <00398765> rendersystem/texturestreaminghelper.cpp:1100
// variables: 17
// function calls: 9
void CTextureStreamingHelper::UpdateTextureMemoryBudget()
{
	double flCurrentTime; // 1111
	bool bUpdateNow; // 1112
	float flTimeElapsedInSeconds; // 1113
	{
		uint64_t nHeapBudget; // 1125
		uint64_t nHeapUsage; // 1126
		{
			int32 nHeapBudgetThresholdPercent; // 1134
			uint64 nHeapBudgetThresholdInBytes; // 1135
			uint64 nMinPoolSize; // 1138
			{
				float flReduceBytesPerSecond; // 1143
				float flCurrentPoolSize; // 1144
				float flNewPoolSize; // 1145
				uint64 nNewPoolSize; // 1146
				ConVar::GetFloat(); // 1143
				Max<long long unsigned int>(const long long unsigned int& val1,
								const long long unsigned int& val2);  // 1149
			}
			{
				int32 nHeapBudgetThresholdIncreasePercent; // 1163
				{
					float flIncreaseBytesPerSecond; // 1173
					float flCurrentPoolSize; // 1174
					float flNewPoolSize; // 1177
					uint64 nNewPoolSize; // 1180
					ConVar::GetFloat(); // 1173
				}
			}
			ConVar::GetFloat(); // 1134
			CTextureManagerBase::GetCurrentNonEvictableTextureMemorySize(); // 1138
			CTextureManagerBase::GetMinStreaminingMemoryPoolSizeMB(); // 1138
		}
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1102
	ConVar::GetFloat(); // 1114
} /* size: 1035, variables: 3, inline expansions: 3 (52 bytes) */

// <00397ACA> rendersystem/texturestreaminghelper.cpp:1197
// variables: 2
// function calls: 61
void CTextureStreamingHelper::GetTextureResidencyStats(TextureResidencyStats_t& stats)
{
	Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this); // 573
	RemoveMultipleFromTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int num);  // 1323
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::NumAllocated(); // 782
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
	Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 368
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 824
	GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			int i);  // 1453
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 1479
		Construct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory); // 1453
	}
	InsertMultipleBefore(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int num);  // 1319
	SetCount(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
		int count);  // 573
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
	Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 102
	begin(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 574
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 113
	Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this); // 105
	Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this); // 105
	end(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this); // 574
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 209
	UtlTraitsCopyRange<CWeakHandle<InfoForResourceTypeCTextureBase> >(const CWeakHandle<InfoForResourceTypeCTextureBase>* pFrom,
										const CWeakHandle<InfoForResourceTypeCTextureBase>* pFromEnd,
										CWeakHandle<InfoForResourceTypeCTextureBase>* pTo);  // 200
	UtlTraitsCopyRange<CWeakHandle<InfoForResourceTypeCTextureBase> >(const CWeakHandle<InfoForResourceTypeCTextureBase>* pFrom,
										const CWeakHandle<InfoForResourceTypeCTextureBase>* pFromEnd,
										CWeakHandle<InfoForResourceTypeCTextureBase>* pTo);  // 574
	operator=(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase other);  // 565
	operator=(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase other);  // 452
	operator=(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this,
			const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i src);  // 87
	Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this); // 573
	RemoveMultipleFromTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int num);  // 1323
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::NumAllocated(); // 782
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
	Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 368
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 824
	GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			int i);  // 1453
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 1479
		Construct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory); // 1453
	}
	InsertMultipleBefore(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int num);  // 1319
	SetCount(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
		int count);  // 573
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
	Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 102
	begin(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 574
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 113
	Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this); // 105
	Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this); // 105
	end(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this); // 574
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 209
	UtlTraitsCopyRange<CWeakHandle<InfoForResourceTypeCTextureBase> >(const CWeakHandle<InfoForResourceTypeCTextureBase>* pFrom,
										const CWeakHandle<InfoForResourceTypeCTextureBase>* pFromEnd,
										CWeakHandle<InfoForResourceTypeCTextureBase>* pTo);  // 200
	UtlTraitsCopyRange<CWeakHandle<InfoForResourceTypeCTextureBase> >(const CWeakHandle<InfoForResourceTypeCTextureBase>* pFrom,
										const CWeakHandle<InfoForResourceTypeCTextureBase>* pFromEnd,
										CWeakHandle<InfoForResourceTypeCTextureBase>* pTo);  // 574
	operator=(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase other);  // 565
	operator=(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase other);  // 452
	operator=(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this,
			const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i src);  // 87
	TextureResidencyStats_t::operator=(
			const TextureResidencyStats_t  &);  // 1199
} /* size: 627, inline expansions: 53 (4190 bytes) */

