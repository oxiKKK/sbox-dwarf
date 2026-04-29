
//
// rendersystem/texturebase.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 160
//	classes: 4
//	structs: 5
//

// <003A0711> rendersystem/texturebase.h:38
// function calls: 56
void TextureSpecification_t::TextureSpecification_t(const TextureSpecification_t &)
{
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 147
	CTextureDesc::CTextureDesc(
			const CTextureDesc& rhs);  // 38
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveMultipleFromTail(
				int num);  // 1323
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
			const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 434
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
			const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveMultipleFromTail(
				int num);  // 1323
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
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 434
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 38
} /* size: 0, inline expansions: 56 (0 bytes) */

// <003A06EF> rendersystem/texturebase.h:38
inline void TextureSpecification_t::TextureSpecification_t(const TextureSpecification_t &)
{
} /* size: 0 */

// <003350E1> rendersystem/texturebase.h:38
// function calls: 47
void TextureSpecification_t::TextureSpecification_t(const TextureSpecification_t &)
{
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 147
	CTextureDesc::CTextureDesc(
			const CTextureDesc& rhs);  // 38
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveMultipleFromTail(
				int num);  // 1323
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
	CUtlMemory<unsigned int, int>::Base(); // 113
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 105
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 105
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::end(); // 574
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
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
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
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
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 574
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
	CUtlVector<float, CUtlMemory<float, int> >::operator=(
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 434
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 38
} /* size: 382, inline expansions: 47 (1513 bytes) */

// <0001D262> rendersystem/texturebase.h:38
// member functions: 14
// member variables: 7
// struct size: 104
struct TextureSpecification_t : public CTextureDesc {
public:
	/* class CTextureDesc <ancestor>; */ /* 0 28 */
	/* rendersystem/texturebase.h:42 */
	void TextureSpecification_t(TextureSpecification_t* );
	/* rendersystem/texturebase.h:50 */
	void ~TextureSpecification_t(TextureSpecification_t* );
	/* rendersystem/texturebase.h:54 */
	void TextureSpecification_t(TextureSpecification_t* , const TextureSpecification_t* );
	/* rendersystem/texturebase.h:61 */
	TextureSpecification_t& operator=(TextureSpecification_t* , const TextureSpecification_t& );
	/* rendersystem/texturebase.h:74 */
	void InitFromSpec(TextureSpecification_t* , const CTextureCreationDesc* );
	/* rendersystem/texturebase.h:86 */
	void SetCompressedMipSizes(TextureSpecification_t* , CompressedMipFormat, int32, const uint32* );
	/* rendersystem/texturebase.h:93 */
	bool HasCompressedMips(const TextureSpecification_t* );
	/* rendersystem/texturebase.h:98 */
	bool IsMipCompressed(const TextureSpecification_t* , int);
	/* rendersystem/texturebase.h:108 */
	uint GetCompressedMipSize(const TextureSpecification_t* , int);
	/* rendersystem/texturebase.h:124 */
	uint GetUncompressedMipSize(const TextureSpecification_t* , uint);
	/* rendersystem/texturebase.h:132 */
	uint GetStreamingBitsByteCount(const TextureSpecification_t* );
	/* rendersystem/texturebase.h:153 */
	uint GetGpuMemorySizeInBytes(const TextureSpecification_t* );
	/* rendersystem/texturebase.h:159 */
	RenderTextureDimension_t ComputeTextureDimension(const TextureSpecification_t* );
	/* rendersystem/texturebase.h:184 */
	bool IsValid(const TextureSpecification_t* );
	TextureOnDiskCompressionType_t m_compressionType; /* 28 4 */
	RenderMultisampleType_t m_nMultisampleType; /* 32 4 */
	uint8 m_nFallbacktextureIndex; /* 36 1 */
	CompressedMipFormat m_compressedMipFormat; /* 37 1 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_CompressedMipSizes; /* 40 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_CubemapRadianceSH; /* 72 32 */
};

// <002DB70E> rendersystem/texturebase.h:38
// member functions: 15
// member variables: 7
// struct size: 104
struct TextureSpecification_t : public CTextureDesc {
public:
	/* class CTextureDesc <ancestor>; */ /* 0 28 */
	/* rendersystem/texturebase.h:42 */
	void TextureSpecification_t(TextureSpecification_t* );
	/* rendersystem/texturebase.h:50 */
	void ~TextureSpecification_t(TextureSpecification_t* );
	/* rendersystem/texturebase.h:54 */
	void TextureSpecification_t(TextureSpecification_t* , const TextureSpecification_t* );
	/* rendersystem/texturebase.h:61 */
	TextureSpecification_t& operator=(TextureSpecification_t* , const TextureSpecification_t& );
	/* rendersystem/texturebase.h:74 */
	void InitFromSpec(TextureSpecification_t* , const CTextureCreationDesc* );
	/* rendersystem/texturebase.h:86 */
	void SetCompressedMipSizes(TextureSpecification_t* , CompressedMipFormat, int32, const uint32* );
	/* rendersystem/texturebase.h:93 */
	bool HasCompressedMips(const TextureSpecification_t* );
	/* rendersystem/texturebase.h:98 */
	bool IsMipCompressed(const TextureSpecification_t* , int);
	/* rendersystem/texturebase.h:108 */
	uint GetCompressedMipSize(const TextureSpecification_t* , int);
	/* rendersystem/texturebase.h:124 */
	uint GetUncompressedMipSize(const TextureSpecification_t* , uint);
	/* rendersystem/texturebase.h:132 */
	uint GetStreamingBitsByteCount(const TextureSpecification_t* );
	/* rendersystem/texturebase.h:153 */
	uint GetGpuMemorySizeInBytes(const TextureSpecification_t* );
	/* rendersystem/texturebase.h:159 */
	RenderTextureDimension_t ComputeTextureDimension(const TextureSpecification_t* );
	/* rendersystem/texturebase.h:184 */
	bool IsValid(const TextureSpecification_t* );
	TextureOnDiskCompressionType_t m_compressionType; /* 28 4 */
	RenderMultisampleType_t m_nMultisampleType; /* 32 4 */
	uint8 m_nFallbacktextureIndex; /* 36 1 */
	CompressedMipFormat m_compressedMipFormat; /* 37 1 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_CompressedMipSizes; /* 40 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_CubemapRadianceSH; /* 72 32 */
	void TextureSpecification_t(TextureSpecification_t* , const TextureSpecification_t& );
};

// <003A4263> rendersystem/texturebase.h:42
void TextureSpecification_t::TextureSpecification_t()
{
} /* size: 0 */

// <003A424A> rendersystem/texturebase.h:42
inline void TextureSpecification_t::TextureSpecification_t()
{
} /* size: 0 */

// <003A4233> rendersystem/texturebase.h:50
void TextureSpecification_t::~TextureSpecification_t()
{
} /* size: 0 */

// <003A421A> rendersystem/texturebase.h:50
inline void TextureSpecification_t::~TextureSpecification_t()
{
} /* size: 0 */

// <0001E4FC> rendersystem/texturebase.h:50
// function calls: 17
void TextureSpecification_t::~TextureSpecification_t()
{
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
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
} /* size: 137, inline expansions: 17 (492 bytes) */

// <003A41F5> rendersystem/texturebase.h:61
inline void TextureSpecification_t::operator=(const TextureSpecification_t& rhs)
{
} /* size: 0 */

// <003486D2> rendersystem/texturebase.h:61
// function calls: 36
void TextureSpecification_t::operator=(const TextureSpecification_t& rhs)
{
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 63
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveMultipleFromTail(
				int num);  // 1323
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
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
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
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 574
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
	CUtlVector<float, CUtlMemory<float, int> >::operator=(
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 69
} /* size: 347, inline expansions: 36 (1080 bytes) */

// <00343E27> rendersystem/texturebase.h:74
// variables: 5
inline void TextureSpecification_t::InitFromSpec(const CTextureCreationDesc* pCreationSpec)
{
	CTextureDesc* pThisDesc; // 76
	const CTextureDesc* pCreationDesc; // 77
	const char   __FUNCTION__; // 55722
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 82
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 83
	}
} /* size: 0, variables: 3 */

// <00326EC0> rendersystem/texturebase.h:74
// variables: 5
inline void TextureSpecification_t::InitFromSpec(const CTextureCreationDesc* pCreationSpec)
{
	CTextureDesc* pThisDesc; // 76
	const CTextureDesc* pCreationDesc; // 77
	const char   __FUNCTION__; // 38256
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 82
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 83
	}
} /* size: 0, variables: 3 */

// <00343DC1> rendersystem/texturebase.h:86
// variables: 2
inline void TextureSpecification_t::SetCompressedMipSizes(CompressedMipFormat compressedFormat, int32 nMipSizeCount, const uint32* pCompressedMipSizes)
{
	const char   __FUNCTION__; // 55965
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
	}
} /* size: 0, variables: 1 */

// <00326E5A> rendersystem/texturebase.h:86
// variables: 2
inline void TextureSpecification_t::SetCompressedMipSizes(CompressedMipFormat compressedFormat, int32 nMipSizeCount, const uint32* pCompressedMipSizes)
{
	const char   __FUNCTION__; // 38499
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
	}
} /* size: 0, variables: 1 */

// <003A41DC> rendersystem/texturebase.h:93
inline void TextureSpecification_t::HasCompressedMips()
{
} /* size: 0 */

// <00343D83> rendersystem/texturebase.h:98
inline void TextureSpecification_t::IsMipCompressed(int nMip)
{
} /* size: 0 */

// <00343D17> rendersystem/texturebase.h:108
// variables: 4
inline void TextureSpecification_t::GetCompressedMipSize(int nMip)
{
	const char   __FUNCTION__; // 55938
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 110
	}
	{
		const int  nOriginalMips; // 114
		const int  nMipDiff; // 115
	}
} /* size: 0, variables: 1 */

// <00326DB0> rendersystem/texturebase.h:108
// variables: 4
inline void TextureSpecification_t::GetCompressedMipSize(int nMip)
{
	const char   __FUNCTION__; // 38472
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 110
	}
	{
		const int  nOriginalMips; // 114
		const int  nMipDiff; // 115
	}
} /* size: 0, variables: 1 */

// <00343C95> rendersystem/texturebase.h:124
// variables: 3
inline void TextureSpecification_t::GetUncompressedMipSize(uint nMip)
{
	const int  nMipWidth; // 126
	const int  nMipHeight; // 127
	const int  nMipDepth; // 128
} /* size: 0, variables: 3 */

// <003A4156> rendersystem/texturebase.h:132
// variables: 4
inline void TextureSpecification_t::GetStreamingBitsByteCount()
{
	{
		const int  nOriginalMips; // 141
		const int  nMipDiff; // 142
		uint nBytes; // 144
		{
			int nMip; // 145
		}
	}
} /* size: 0 */

// <003A413D> rendersystem/texturebase.h:153
inline void TextureSpecification_t::GetGpuMemorySizeInBytes()
{
} /* size: 0 */

// <00343C16> rendersystem/texturebase.h:159
inline void TextureSpecification_t::ComputeTextureDimension()
{
} /* size: 0 */

// <0034006C> rendersystem/texturebase.h:236
void TextureObjectInfo_t::TextureObjectInfo_t()
{
} /* size: 0 */

// <0034004F> rendersystem/texturebase.h:236
inline void TextureObjectInfo_t::TextureObjectInfo_t()
{
} /* size: 0 */

// <00340038> rendersystem/texturebase.h:236
void TextureObjectInfo_t::~TextureObjectInfo_t()
{
} /* size: 0 */

// <0034001B> rendersystem/texturebase.h:236
inline void TextureObjectInfo_t::~TextureObjectInfo_t()
{
} /* size: 0 */

// <003263B4> rendersystem/texturebase.h:236
void TextureObjectInfo_t::TextureObjectInfo_t(const TextureObjectInfo_t &)
{
} /* size: 0 */

// <00326392> rendersystem/texturebase.h:236
inline void TextureObjectInfo_t::TextureObjectInfo_t(const TextureObjectInfo_t &)
{
} /* size: 0 */

// <0031F309> rendersystem/texturebase.h:236
inline void TextureObjectInfo_t::operator=(const TextureObjectInfo_t &)
{
} /* size: 0 */

// <002DBA35> rendersystem/texturebase.h:236
// member functions: 4
// member variables: 2
// struct size: 112
struct TextureObjectInfo_t {
	TextureSpecification_t m_spec; /* 0 104 */
	void * m_pTextureObject; /* 104 8 */
	TextureObjectInfo_t& operator=(TextureObjectInfo_t* , const TextureObjectInfo_t& );
	void TextureObjectInfo_t(TextureObjectInfo_t* , const TextureObjectInfo_t& );
	void ~TextureObjectInfo_t(TextureObjectInfo_t* );
	void TextureObjectInfo_t(TextureObjectInfo_t* );
};

// <0015419B> rendersystem/texturebase.h:260
// member functions: 108
// member variable: 1
// class size: 4
class CTextureInfoId {
	/* rendersystem/texturebase.h:264 */
	union {
		uint32 m_nData; /* 0 4 */
		struct {
			uint32 m_nInChunkIdx:8; /* 0: 0 4 */
			uint32 m_nChunkIdx:24; /* 0: 8 4 */
		} id; /* 0 4 */
	};
	union {
		uint32 m_nData; /* 0 4 */
		struct {
			uint32 m_nInChunkIdx:8; /* 0: 0 4 */
			uint32 m_nChunkIdx:24; /* 0: 8 4 */
		} id; /* 0 4 */
	}; /* 0 4 */
	/* rendersystem/texturebase.h:273 */
	bool operator==(const CTextureInfoId* , const CTextureInfoId& );
	/* rendersystem/texturebase.h:278 */
	bool operator!=(const CTextureInfoId* , const CTextureInfoId& );
	/* rendersystem/texturebase.h:283 */
	void Init(CTextureInfoId* , int, int);
	/* rendersystem/texturebase.h:285 */
	void SetFlags(CTextureInfoId* , uint16);
	/* rendersystem/texturebase.h:286 */
	void ClearFlags(CTextureInfoId* , uint16);
	/* rendersystem/texturebase.h:287 */
	bool HasAnyFlags(const CTextureInfoId* , uint16);
	/* rendersystem/texturebase.h:288 */
	bool HasAllFlags(const CTextureInfoId* , uint16);
	/* rendersystem/texturebase.h:289 */
	void SetLastBindFrame(CTextureInfoId* , uint32);
	/* rendersystem/texturebase.h:290 */
	uint32 GetLastBindFrame(const CTextureInfoId* );
	/* rendersystem/texturebase.h:291 */
	void SetLastAsyncUpdateFrame(CTextureInfoId* , uint32);
	/* rendersystem/texturebase.h:292 */
	uint32 GetLastAsyncUpdateFrame(const CTextureInfoId* );
	/* rendersystem/texturebase.h:293 */
	float32& DecayingMaxRequestedSize(CTextureInfoId* );
	/* rendersystem/texturebase.h:294 */
	void MarkUsed(CTextureInfoId* , int);
	/* rendersystem/texturebase.h:295 */
	int32 GetMaxRequestedSize(const CTextureInfoId* );
	/* rendersystem/texturebase.h:296 */
	void IncrementPinCount(CTextureInfoId* );
	/* rendersystem/texturebase.h:297 */
	void DecrementPinCount(CTextureInfoId* );
	/* rendersystem/texturebase.h:298 */
	int32 GetPinCount(const CTextureInfoId* );
	/* rendersystem/texturebase.h:299 */
	void SetPinCount(CTextureInfoId* , int32);
	/* rendersystem/texturebase.h:300 */
	const TextureSpecification_t* GetSpec(const CTextureInfoId* );
	/* rendersystem/texturebase.h:301 */
	void SetSpec(CTextureInfoId* , const TextureSpecification_t* );
	/* rendersystem/texturebase.h:302 */
	const TextureSpecification_t* GetDiskSpec(const CTextureInfoId* );
	/* rendersystem/texturebase.h:303 */
	void SetDiskSpec(CTextureInfoId* , const TextureSpecification_t* );
	/* rendersystem/texturebase.h:304 */
	void* GetTextureObject(const CTextureInfoId* );
	/* rendersystem/texturebase.h:305 */
	void SetTextureObject(CTextureInfoId* , void* );
	/* rendersystem/texturebase.h:306 */
	bool IsD3DSurface(const CTextureInfoId* );
	/* rendersystem/texturebase.h:307 */
	void SetD3DSurface(CTextureInfoId* , bool);
	/* rendersystem/texturebase.h:308 */
	uint16 GetRenderTargetIndex(const CTextureInfoId* );
	/* rendersystem/texturebase.h:309 */
	void SetRenderTargetIndex(CTextureInfoId* , uint16);
	/* rendersystem/texturebase.h:310 */
	bool IsLockable(const CTextureInfoId* );
	/* rendersystem/texturebase.h:311 */
	void SetLockable(CTextureInfoId* , bool);
	/* rendersystem/texturebase.h:312 */
	bool IsManaged(const CTextureInfoId* );
	/* rendersystem/texturebase.h:313 */
	void SetManaged(CTextureInfoId* , bool);
	/* rendersystem/texturebase.h:314 */
	CTextureBase* GetLegacyTexture(const CTextureInfoId* );
	/* rendersystem/texturebase.h:315 */
	int64 GetStreamingBitsOffset(const CTextureInfoId* );
	/* rendersystem/texturebase.h:316 */
	void SetStreamingBitsOffset(CTextureInfoId* , int64);
	/* rendersystem/texturebase.h:317 */
	Sheet_t* GetSheet(const CTextureInfoId* );
	/* rendersystem/texturebase.h:318 */
	void SetSheet(CTextureInfoId* , Sheet_t* );
	/* rendersystem/texturebase.h:319 */
	Vector GetAverageColor(const CTextureInfoId* );
	/* rendersystem/texturebase.h:320 */
	void SetAverageColor(CTextureInfoId* , Vector);
	/* rendersystem/texturebase.h:321 */
	HRenderTexture GetResourceHandle(const CTextureInfoId* );
	/* rendersystem/texturebase.h:322 */
	void SetResourceHandle(CTextureInfoId* , HRenderTexture);
	/* rendersystem/texturebase.h:323 */
	int32 GetPendingStreamingRequestId(const CTextureInfoId* );
	/* rendersystem/texturebase.h:324 */
	void SetPendingStreamingRequestId(CTextureInfoId* , int32);
	/* rendersystem/texturebase.h:325 */
	uint8* GetFallbackTextureBitsPtr(CTextureInfoId* );
	/* rendersystem/texturebase.h:326 */
	bool IsStandinTexture(const CTextureInfoId* );
	/* rendersystem/texturebase.h:327 */
	bool IsExternalTexture(const CTextureInfoId* );
	/* rendersystem/texturebase.h:328 */
	void* GetFallbackTexturePtr(const CTextureInfoId* );
	/* rendersystem/texturebase.h:329 */
	void SetFallbackTexturePtr(CTextureInfoId* , void* );
	/* rendersystem/texturebase.h:330 */
	bool SetFallbackTexturePtrIf(CTextureInfoId* , void* , void* );
	/* rendersystem/texturebase.h:331 */
	void SetTextureStreamingPriority(CTextureInfoId* , RenderTextureStreamingPriority_t);
	/* rendersystem/texturebase.h:332 */
	RenderTextureStreamingPriority_t GetTextureStreamingPriority(const CTextureInfoId* );
	/* rendersystem/texturebase.h:334 */
	CTextureInfoId NextValidTexture(const CTextureInfoId* );
	/* rendersystem/texturebase.h:335 */
	bool IsOutOfBounds(const CTextureInfoId* );
	/* rendersystem/texturebase.h:337 */
	CTextureInfoId InvalidId(void);
	bool operator==(const class CTextureInfoId  *, const class CTextureInfoId  &); /* linkage=_ZNK14CTextureInfoIdeqERKS_ */
	bool operator!=(const class CTextureInfoId  *, const class CTextureInfoId  &); /* linkage=_ZNK14CTextureInfoIdneERKS_ */
	void Init(class CTextureInfoId *, int, int); /* linkage=_ZN14CTextureInfoId4InitEii */
	void SetFlags(class CTextureInfoId *, uint16); /* linkage=_ZN14CTextureInfoId8SetFlagsEt */
	void ClearFlags(class CTextureInfoId *, uint16); /* linkage=_ZN14CTextureInfoId10ClearFlagsEt */
	bool HasAnyFlags(const class CTextureInfoId  *, uint16); /* linkage=_ZNK14CTextureInfoId11HasAnyFlagsEt */
	bool HasAllFlags(const class CTextureInfoId  *, uint16); /* linkage=_ZNK14CTextureInfoId11HasAllFlagsEt */
	void SetLastBindFrame(class CTextureInfoId *, uint32); /* linkage=_ZN14CTextureInfoId16SetLastBindFrameEj */
	uint32 GetLastBindFrame(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId16GetLastBindFrameEv */
	void SetLastAsyncUpdateFrame(class CTextureInfoId *, uint32); /* linkage=_ZN14CTextureInfoId23SetLastAsyncUpdateFrameEj */
	uint32 GetLastAsyncUpdateFrame(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId23GetLastAsyncUpdateFrameEv */
	float32 & DecayingMaxRequestedSize(class CTextureInfoId *); /* linkage=_ZN14CTextureInfoId24DecayingMaxRequestedSizeEv */
	void MarkUsed(class CTextureInfoId *, int); /* linkage=_ZN14CTextureInfoId8MarkUsedEi */
	int32 GetMaxRequestedSize(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId19GetMaxRequestedSizeEv */
	void IncrementPinCount(class CTextureInfoId *); /* linkage=_ZN14CTextureInfoId17IncrementPinCountEv */
	void DecrementPinCount(class CTextureInfoId *); /* linkage=_ZN14CTextureInfoId17DecrementPinCountEv */
	int32 GetPinCount(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId11GetPinCountEv */
	void SetPinCount(class CTextureInfoId *, int32); /* linkage=_ZN14CTextureInfoId11SetPinCountEi */
	const class TextureSpecification_t  * GetSpec(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId7GetSpecEv */
	void SetSpec(class CTextureInfoId *, const class TextureSpecification_t  *); /* linkage=_ZN14CTextureInfoId7SetSpecEPK22TextureSpecification_t */
	const class TextureSpecification_t  * GetDiskSpec(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId11GetDiskSpecEv */
	void SetDiskSpec(class CTextureInfoId *, const class TextureSpecification_t  *); /* linkage=_ZN14CTextureInfoId11SetDiskSpecEPK22TextureSpecification_t */
	void * GetTextureObject(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId16GetTextureObjectEv */
	void SetTextureObject(class CTextureInfoId *, void *); /* linkage=_ZN14CTextureInfoId16SetTextureObjectEPv */
	bool IsD3DSurface(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId12IsD3DSurfaceEv */
	void SetD3DSurface(class CTextureInfoId *, bool); /* linkage=_ZN14CTextureInfoId13SetD3DSurfaceEb */
	uint16 GetRenderTargetIndex(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId20GetRenderTargetIndexEv */
	void SetRenderTargetIndex(class CTextureInfoId *, uint16); /* linkage=_ZN14CTextureInfoId20SetRenderTargetIndexEt */
	bool IsLockable(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId10IsLockableEv */
	void SetLockable(class CTextureInfoId *, bool); /* linkage=_ZN14CTextureInfoId11SetLockableEb */
	bool IsManaged(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId9IsManagedEv */
	void SetManaged(class CTextureInfoId *, bool); /* linkage=_ZN14CTextureInfoId10SetManagedEb */
	class CTextureBase * GetLegacyTexture(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId16GetLegacyTextureEv */
	int64 GetStreamingBitsOffset(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId22GetStreamingBitsOffsetEv */
	void SetStreamingBitsOffset(class CTextureInfoId *, int64); /* linkage=_ZN14CTextureInfoId22SetStreamingBitsOffsetEx */
	class Sheet_t * GetSheet(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId8GetSheetEv */
	void SetSheet(class CTextureInfoId *, class Sheet_t *); /* linkage=_ZN14CTextureInfoId8SetSheetEP7Sheet_t */
	class Vector GetAverageColor(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId15GetAverageColorEv */
	void SetAverageColor(class CTextureInfoId *, class Vector); /* linkage=_ZN14CTextureInfoId15SetAverageColorE6Vector */
	HRenderTexture GetResourceHandle(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId17GetResourceHandleEv */
	void SetResourceHandle(class CTextureInfoId *, HRenderTexture); /* linkage=_ZN14CTextureInfoId17SetResourceHandleE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	int32 GetPendingStreamingRequestId(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId28GetPendingStreamingRequestIdEv */
	void SetPendingStreamingRequestId(class CTextureInfoId *, int32); /* linkage=_ZN14CTextureInfoId28SetPendingStreamingRequestIdEi */
	uint8 * GetFallbackTextureBitsPtr(class CTextureInfoId *); /* linkage=_ZN14CTextureInfoId25GetFallbackTextureBitsPtrEv */
	bool IsStandinTexture(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId16IsStandinTextureEv */
	bool IsExternalTexture(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId17IsExternalTextureEv */
	void * GetFallbackTexturePtr(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId21GetFallbackTexturePtrEv */
	void SetFallbackTexturePtr(class CTextureInfoId *, void *); /* linkage=_ZN14CTextureInfoId21SetFallbackTexturePtrEPv */
	bool SetFallbackTexturePtrIf(class CTextureInfoId *, void *, void *); /* linkage=_ZN14CTextureInfoId23SetFallbackTexturePtrIfEPvS0_ */
	void SetTextureStreamingPriority(class CTextureInfoId *, enum RenderTextureStreamingPriority_t); /* linkage=_ZN14CTextureInfoId27SetTextureStreamingPriorityE32RenderTextureStreamingPriority_t */
	enum RenderTextureStreamingPriority_t GetTextureStreamingPriority(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId27GetTextureStreamingPriorityEv */
	class CTextureInfoId NextValidTexture(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId16NextValidTextureEv */
	bool IsOutOfBounds(const class CTextureInfoId  *); /* linkage=_ZNK14CTextureInfoId13IsOutOfBoundsEv */
	/* <3478ec> rendersystem/texturebase.cpp:1629 */
	class CTextureInfoId InvalidId(void); /* linkage=_ZN14CTextureInfoId9InvalidIdEv */
};

// <003A4117> rendersystem/texturebase.h:273
inline void CTextureInfoId::operator==(const CTextureInfoId& other)
{
} /* size: 0 */

// <00343BD7> rendersystem/texturebase.h:340
// variable: 1
inline CTextureInfoId MakeTextureInfoId(int nChunkIdx, int nInChunkIdx)
{
	CTextureInfoId newId; // 342
} /* size: 0, variables: 1 */

// <002C1103> rendersystem/texturebase.h:352
// member functions: 72
// member variables: 3
// vtable entries: 8
// class size: 16
class CTextureBase {
	void CTextureBase(CTextureBase* , const CTextureBase& );
	int ()(void) * * _vptr.CTextureBase; /* 0 8 */
	/* rendersystem/texturebase.cpp:126 */
	void CTextureBase(CTextureBase* );
	/* rendersystem/texturebase.cpp:138 */
	virtual void ~CTextureBase(CTextureBase* );
	/* rendersystem/texturebase.cpp:147 */
	void Init(CTextureBase* , const CTextureCreationDesc* , size_t, HRenderTexture, CTextureInfoId* );
	/* rendersystem/texturebase.cpp:221 */
	void Init(CTextureBase* , const CTextureCreationDesc* , const void* , int, bool);
	/* rendersystem/texturebase.cpp:229 */
	virtual void Shutdown(CTextureBase* );
	/* rendersystem/texturebase.cpp:238 */
	virtual void SetTextureHandle(CTextureBase* , HRenderTexture, const CTextureCreationDesc* );
	/* rendersystem/texturebase.h:369 */
	virtual void AssignTextureObject(CTextureBase* , const TextureObjectInfo_t& , bool, uint32, CRenderContextBase* );
	/* rendersystem/texturebase.h:370 */
	virtual void AssignStandin(CTextureBase* , CTextureBase* , TextureStandinType_t, CRenderContextBase* );
	/* rendersystem/texturebase.h:371 */
	virtual void AssignFallbackTexture(CTextureBase* , CRenderContextBase* );
	/* rendersystem/texturebase.h:372 */
	virtual void AssignDebugName(CTextureBase* , const CResourceName& );
	/* rendersystem/texturebase.h:476 */
	HRenderTexture GetTextureHandle(const CTextureBase* );
	/* rendersystem/texturebase.h:496 */
	void MarkUsed(CTextureBase* , int);
	/* rendersystem/texturebase.cpp:345 */
	size_t ComputeSize(const CTextureBase* );
	/* rendersystem/texturebase.cpp:361 */
	size_t ComputeSize(const CTextureBase* , int, int, int);
	/* rendersystem/texturebase.cpp:370 */
	size_t ComputeCurrentlyResidentSize(const CTextureBase* );
	/* rendersystem/texturebase.h:385 */
	uint32 UniqueIndex(const CTextureBase* );
	/* rendersystem/texturebase.h:388 */
	const TextureSpecification_t* GetDiskSpec(const CTextureBase* );
	/* rendersystem/texturebase.h:481 */
	RenderTextureDimension_t ComputeTextureDimension(const CTextureBase* );
	/* rendersystem/texturebase.h:486 */
	bool IsStandinTexture(const CTextureBase* );
	/* rendersystem/texturebase.h:491 */
	bool IsExternalTexture(const CTextureBase* );
	/* rendersystem/texturebase.cpp:264 */
	void MarkTextureBitsLoadRequired(CTextureBase* , IResourceSystemUtils* );
	/* rendersystem/texturebase.cpp:280 */
	void MarkTextureBitsLoaded(CTextureBase* , IResourceSystemUtils* );
	/* rendersystem/texturebase.h:403 */
	const TextureSpecification_t* GetSpec(const CTextureBase* );
	/* rendersystem/texturebase.h:404 */
	int GetMaxLoadedMipLevels(const CTextureBase* );
	/* rendersystem/texturebase.h:410 */
	int PinInMemory(CTextureBase* );
	/* rendersystem/texturebase.h:411 */
	int UnpinInMemory(CTextureBase* );
	/* rendersystem/texturebase.h:412 */
	int GetPinCount(CTextureBase* );
	/* rendersystem/texturebase.h:414 */
	virtual void SpinWaitForFallbackTextureHookup(CTextureBase* , RenderColorSpace_t);
	/* rendersystem/texturebase.h:418 */
	uint16 GetRenderTargetIndex(const CTextureBase* );
	/* rendersystem/texturebase.h:420 */
	bool AssertTextureInfoId(const CTextureBase* , int, int);
	/* rendersystem/texturebase.h:439 */
	virtual void FreeGPUResources(CTextureBase* , CRenderContextBase* );
protected:
	CTextureInfoId m_nInternalHandle; /* 8 4 */
	/* rendersystem/texturebase.cpp:101 */
	int CalculateFallbackTextureIndex(const Vector4D& );
	/* rendersystem/texturebase.cpp:114 */
	void ComputeTextureColor(int, Vector4D* );
	uint32_t m_Sentinel; /* 12 4 */
	/* rendersystem/texturebase.h:460 */
	void* GetTextureObject(const CTextureBase* );
	/* rendersystem/texturebase.h:468 */
	int GetLastBindFrameAgo(const CTextureBase* );
	bool IsStandinTexture(const class CTextureBase  *); /* linkage=_ZNK12CTextureBase16IsStandinTextureEv */
	HRenderTexture GetTextureHandle(const class CTextureBase  *); /* linkage=_ZNK12CTextureBase16GetTextureHandleEv */
	int GetLastBindFrameAgo(const class CTextureBase  *); /* linkage=_ZNK12CTextureBase19GetLastBindFrameAgoEv */
	void * GetTextureObject(const class CTextureBase  *); /* linkage=_ZNK12CTextureBase16GetTextureObjectEv */
	/* <1ae974> rendersystem/texturebase.h:439 */
	virtual void FreeGPUResources(class CTextureBase *, class CRenderContextBase *); /* linkage=_ZN12CTextureBase16FreeGPUResourcesEP18CRenderContextBase */
	int GetPinCount(class CTextureBase *); /* linkage=_ZN12CTextureBase11GetPinCountEv */
	int UnpinInMemory(class CTextureBase *); /* linkage=_ZN12CTextureBase13UnpinInMemoryEv */
	int PinInMemory(class CTextureBase *); /* linkage=_ZN12CTextureBase11PinInMemoryEv */
	uint32 UniqueIndex(const class CTextureBase  *); /* linkage=_ZNK12CTextureBase11UniqueIndexEv */
	void CTextureBase(class CTextureBase *, const class CTextureBase  &); /* linkage=_ZN12CTextureBaseC4ERKS_ */
	void CTextureBase(class CTextureBase *); /* linkage=_ZN12CTextureBaseC4Ev */
	virtual void ~CTextureBase(class CTextureBase *); /* linkage=_ZN12CTextureBaseD4Ev */
	void Init(class CTextureBase *, const class CTextureCreationDesc  *, size_t, HRenderTexture, class CTextureInfoId *); /* linkage=_ZN12CTextureBase4InitEPK20CTextureCreationDescm11CWeakHandleI31InfoForResourceTypeCTextureBaseEP14CTextureInfoId */
	void Init(class CTextureBase *, const class CTextureCreationDesc  *, const void  *, int, bool); /* linkage=_ZN12CTextureBase4InitEPK20CTextureCreationDescPKvib */
	/* <34a6fe> rendersystem/texturebase.cpp:229 */
	virtual void Shutdown(class CTextureBase *); /* linkage=_ZN12CTextureBase8ShutdownEv */
	virtual void SetTextureHandle(class CTextureBase *, HRenderTexture, const class CTextureCreationDesc  *); /* linkage=_ZN12CTextureBase16SetTextureHandleE11CWeakHandleI31InfoForResourceTypeCTextureBaseEPK20CTextureCreationDesc */
	virtual void AssignTextureObject(class CTextureBase *, const class TextureObjectInfo_t  &, bool, uint32, class CRenderContextBase *); /* linkage=_ZN12CTextureBase19AssignTextureObjectERK19TextureObjectInfo_tbjP18CRenderContextBase */
	virtual void AssignStandin(class CTextureBase *, class CTextureBase *, enum TextureStandinType_t, class CRenderContextBase *); /* linkage=_ZN12CTextureBase13AssignStandinEPS_20TextureStandinType_tP18CRenderContextBase */
	virtual void AssignFallbackTexture(class CTextureBase *, class CRenderContextBase *); /* linkage=_ZN12CTextureBase21AssignFallbackTextureEP18CRenderContextBase */
	virtual void AssignDebugName(class CTextureBase *, const class CResourceName  &); /* linkage=_ZN12CTextureBase15AssignDebugNameERK13CResourceName */
	void MarkUsed(class CTextureBase *, int); /* linkage=_ZN12CTextureBase8MarkUsedEi */
	size_t ComputeSize(const class CTextureBase  *); /* linkage=_ZNK12CTextureBase11ComputeSizeEv */
	size_t ComputeSize(const class CTextureBase  *, int, int, int); /* linkage=_ZNK12CTextureBase11ComputeSizeEiii */
	/* <3470db> rendersystem/texturebase.cpp:370 */
	size_t ComputeCurrentlyResidentSize(const class CTextureBase  *); /* linkage=_ZNK12CTextureBase28ComputeCurrentlyResidentSizeEv */
	const class TextureSpecification_t  * GetDiskSpec(const class CTextureBase  *); /* linkage=_ZNK12CTextureBase11GetDiskSpecEv */
	enum RenderTextureDimension_t ComputeTextureDimension(const class CTextureBase  *); /* linkage=_ZNK12CTextureBase23ComputeTextureDimensionEv */
	bool IsExternalTexture(const class CTextureBase  *); /* linkage=_ZNK12CTextureBase17IsExternalTextureEv */
	void MarkTextureBitsLoadRequired(class CTextureBase *, class IResourceSystemUtils *); /* linkage=_ZN12CTextureBase27MarkTextureBitsLoadRequiredEP20IResourceSystemUtils */
	void MarkTextureBitsLoaded(class CTextureBase *, class IResourceSystemUtils *); /* linkage=_ZN12CTextureBase21MarkTextureBitsLoadedEP20IResourceSystemUtils */
	const class TextureSpecification_t  * GetSpec(const class CTextureBase  *); /* linkage=_ZNK12CTextureBase7GetSpecEv */
	int GetMaxLoadedMipLevels(const class CTextureBase  *); /* linkage=_ZNK12CTextureBase21GetMaxLoadedMipLevelsEv */
	virtual void SpinWaitForFallbackTextureHookup(class CTextureBase *, enum RenderColorSpace_t); /* linkage=_ZN12CTextureBase32SpinWaitForFallbackTextureHookupE18RenderColorSpace_t */
	uint16 GetRenderTargetIndex(const class CTextureBase  *); /* linkage=_ZNK12CTextureBase20GetRenderTargetIndexEv */
	bool AssertTextureInfoId(const class CTextureBase  *, int, int); /* linkage=_ZNK12CTextureBase19AssertTextureInfoIdEii */
	int CalculateFallbackTextureIndex(const class Vector4D  &); /* linkage=_ZN12CTextureBase29CalculateFallbackTextureIndexERK8Vector4D */
	/* <346f65> rendersystem/texturebase.cpp:114 */
	void ComputeTextureColor(int, class Vector4D *); /* linkage=_ZN12CTextureBase19ComputeTextureColorEiP8Vector4D */
};

// <001A921A> rendersystem/texturebase.h:385
inline void CTextureBase::UniqueIndex()
{
} /* size: 0 */

// <003A40FE> rendersystem/texturebase.h:388
inline void CTextureBase::GetDiskSpec()
{
} /* size: 0 */

// <003A40E5> rendersystem/texturebase.h:403
inline void CTextureBase::GetSpec()
{
} /* size: 0 */

// <003A40BF> rendersystem/texturebase.h:404
// variable: 1
inline void CTextureBase::GetMaxLoadedMipLevels()
{
	int nMaxLoadededMips; // 406
} /* size: 0, variables: 1 */

// <001A91D8> rendersystem/texturebase.h:410
// variables: 2
inline void CTextureBase::PinInMemory()
{
	const char   __FUNCTION__; // 2523
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 410
	}
} /* size: 0, variables: 1 */

// <001A453E> rendersystem/texturebase.h:410
// variables: 2
inline void CTextureBase::PinInMemory()
{
	const char   __FUNCTION__; // 31898
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 410
	}
} /* size: 0, variables: 1 */

// <001A9174> rendersystem/texturebase.h:411
// variables: 3
inline void CTextureBase::UnpinInMemory()
{
	const char   __FUNCTION__; // 2577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 411
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 411
	}
} /* size: 0, variables: 1 */

// <001A44DA> rendersystem/texturebase.h:411
// variables: 3
inline void CTextureBase::UnpinInMemory()
{
	const char   __FUNCTION__; // 31952
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 411
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 411
	}
} /* size: 0, variables: 1 */

// <001A9132> rendersystem/texturebase.h:412
// variables: 2
inline void CTextureBase::GetPinCount()
{
	const char   __FUNCTION__; // 2523
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 412
	}
} /* size: 0, variables: 1 */

// <001A4498> rendersystem/texturebase.h:412
// variables: 2
inline void CTextureBase::GetPinCount()
{
	const char   __FUNCTION__; // 31898
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 412
	}
} /* size: 0, variables: 1 */

// <00343ADF> rendersystem/texturebase.h:414
// variables: 2
void CTextureBase::SpinWaitForFallbackTextureHookup(RenderColorSpace_t colorSpace)
{
	const char   __FUNCTION__; // 56262
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 415
	}
} /* size: 36, variables: 1 */

// <00326B78> rendersystem/texturebase.h:414
// variables: 2
void CTextureBase::SpinWaitForFallbackTextureHookup(RenderColorSpace_t colorSpace)
{
	const char   __FUNCTION__; // 38796
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 415
	}
} /* size: 36, variables: 1 */

// <00343AAC> rendersystem/texturebase.h:420
inline void CTextureBase::AssertTextureInfoId(int nChunkIdx, int nInChunkIdx)
{
} /* size: 0 */

// <00343A6E> rendersystem/texturebase.h:439
void CTextureBase::FreeGPUResources(CRenderContextBase* pRenderContext)
{
} /* size: 5 */

// <001A910C> rendersystem/texturebase.h:439
inline void CTextureBase::FreeGPUResources(CRenderContextBase* pRenderContext)
{
} /* size: 0 */

// <001A90EE> rendersystem/texturebase.h:460
inline void* CTextureBase::GetTextureObject()
{
} /* size: 0 */

// <001A90D5> rendersystem/texturebase.h:468
inline void CTextureBase::GetLastBindFrameAgo()
{
} /* size: 0 */

// <003A40A6> rendersystem/texturebase.h:476
inline void CTextureBase::GetTextureHandle()
{
} /* size: 0 */

// <00343A3C> rendersystem/texturebase.h:481
inline void CTextureBase::ComputeTextureDimension()
{
} /* size: 0 */

// <00343A23> rendersystem/texturebase.h:486
inline void CTextureBase::IsStandinTexture()
{
} /* size: 0 */

// <00343A0A> rendersystem/texturebase.h:491
inline void CTextureBase::IsExternalTexture()
{
} /* size: 0 */

// <003439E4> rendersystem/texturebase.h:496
inline void CTextureBase::MarkUsed(int nDetail)
{
} /* size: 0 */

// <00154D59> rendersystem/texturebase.h:512
// member functions: 28
// member variables: 18
// class size: 336,128
class CTextureInfoChunkBase {
	/* rendersystem/texturebase.h:515 */
	void CTextureInfoChunkBase(CTextureInfoChunkBase* );
	/* rendersystem/texturebase.h:516 */
	void ~CTextureInfoChunkBase(CTextureInfoChunkBase* );
	/* rendersystem/texturebase.h:518 */
	void SwapSlots(CTextureInfoChunkBase* , int, CTextureInfoChunkBase* , int);
	/* rendersystem/texturebase.h:522 */
	void ClearSlot(CTextureInfoChunkBase* , int);
	/* rendersystem/texturebase.h:523 */
	bool IsStandinTexture(const CTextureInfoChunkBase* , int);
	/* rendersystem/texturebase.h:524 */
	bool IsExternalTexture(const CTextureInfoChunkBase* , int);
	/* rendersystem/texturebase.h:525 */
	bool SupportsPerMipStreaming(const CTextureInfoChunkBase* , int);
	/* rendersystem/texturebase.h:526 */
	size_t ComputeCurrentlyResidentSize(const CTextureInfoChunkBase* , int);
	/* rendersystem/texturebase.h:527 */
	int GetMaxLoadedMipLevels(const CTextureInfoChunkBase* , int);
	/* rendersystem/texturebase.h:528 */
	size_t ComputeSize(const CTextureInfoChunkBase* , int, int, int, int);
	/* rendersystem/texturebase.h:530 */
	void SetFlags(CTextureInfoChunkBase* , int, uint16);
	/* rendersystem/texturebase.h:531 */
	void ClearFlags(CTextureInfoChunkBase* , int, uint16);
	/* rendersystem/texturebase.h:532 */
	bool HasAnyFlags(const CTextureInfoChunkBase* , int, uint16);
	/* rendersystem/texturebase.h:533 */
	bool HasAllFlags(const CTextureInfoChunkBase* , int, uint16);
	CTextureBase * m_pTexture[256]; /* 0 2048 */
	TextureSpecification_t m_spec[256]; /* 2048 26624 */
	TextureSpecification_t m_onDiskSpec[256]; /* 28672 26624 */
	void * m_pTextureObject[256]; /* 55296 2048 */
	CInterlockedPtr<void> m_pFallbackTexture[256]; /* 57344 2048 */
	atomic_uint_least16_t m_nFlags[256] __attribute__((__aligned__(2))); /* 59392 512 */
	uint32 m_nLastBindFrame[256]; /* 59904 1024 */
	HRenderTexture m_hResourceHandle[256]; /* 60928 2048 */
	CInterlockedInt m_nMaxRequestedSize[256] __attribute__((__aligned__(4))); /* 62976 1024 */
	float32 m_flDecayingMaxRequestedSize[256]; /* 64000 1024 */
	Sheet_t * m_pSheet[256]; /* 65024 2048 */
	Vector m_vAverageColor[256]; /* 67072 3072 */
	int16 m_nPinCount[256]; /* 70144 512 */
	uint32 m_nLastAsyncUpdateFrame[256]; /* 70656 1024 */
	RenderTextureStreamingPriority_t m_eTextureStreamingPriority[256]; /* 71680 256 */
	uint32 m_nStreamingBitsOffset[256]; /* 71936 1024 */
	int32 m_nPendingStreamingRequestId[256]; /* 72960 1024 */
	uint8 m_fallbackTextureBits[256][1024]; /* 73984 262144 */
	void CTextureInfoChunkBase(class CTextureInfoChunkBase *); /* linkage=_ZN21CTextureInfoChunkBaseC4Ev */
	void ~CTextureInfoChunkBase(class CTextureInfoChunkBase *); /* linkage=_ZN21CTextureInfoChunkBaseD4Ev */
	void SwapSlots(class CTextureInfoChunkBase *, int, class CTextureInfoChunkBase *, int); /* linkage=_ZN21CTextureInfoChunkBase9SwapSlotsEPS_iS0_i */
	void ClearSlot(class CTextureInfoChunkBase *, int); /* linkage=_ZN21CTextureInfoChunkBase9ClearSlotEi */
	bool IsStandinTexture(const class CTextureInfoChunkBase  *, int); /* linkage=_ZNK21CTextureInfoChunkBase16IsStandinTextureEi */
	bool IsExternalTexture(const class CTextureInfoChunkBase  *, int); /* linkage=_ZNK21CTextureInfoChunkBase17IsExternalTextureEi */
	bool SupportsPerMipStreaming(const class CTextureInfoChunkBase  *, int); /* linkage=_ZNK21CTextureInfoChunkBase23SupportsPerMipStreamingEi */
	/* <3a5719> rendersystem/texturebase.h:1293 */
	size_t ComputeCurrentlyResidentSize(const class CTextureInfoChunkBase  *, int); /* linkage=_ZNK21CTextureInfoChunkBase28ComputeCurrentlyResidentSizeEi */
	int GetMaxLoadedMipLevels(const class CTextureInfoChunkBase  *, int); /* linkage=_ZNK21CTextureInfoChunkBase21GetMaxLoadedMipLevelsEi */
	size_t ComputeSize(const class CTextureInfoChunkBase  *, int, int, int, int); /* linkage=_ZNK21CTextureInfoChunkBase11ComputeSizeEiiii */
	void SetFlags(class CTextureInfoChunkBase *, int, uint16); /* linkage=_ZN21CTextureInfoChunkBase8SetFlagsEit */
	void ClearFlags(class CTextureInfoChunkBase *, int, uint16); /* linkage=_ZN21CTextureInfoChunkBase10ClearFlagsEit */
	bool HasAnyFlags(const class CTextureInfoChunkBase  *, int, uint16); /* linkage=_ZNK21CTextureInfoChunkBase11HasAnyFlagsEit */
	bool HasAllFlags(const class CTextureInfoChunkBase  *, int, uint16); /* linkage=_ZNK21CTextureInfoChunkBase11HasAllFlagsEit */
} __attribute__((__aligned__(8)));

// <003A4073> rendersystem/texturebase.h:530
inline void CTextureInfoChunkBase::SetFlags(int nTexId, uint16 nFlagsToSet)
{
} /* size: 0 */

// <003A4040> rendersystem/texturebase.h:531
inline void CTextureInfoChunkBase::ClearFlags(int nTexId, uint16 nFlagsToClear)
{
} /* size: 0 */

// <003A400D> rendersystem/texturebase.h:532
inline void CTextureInfoChunkBase::HasAnyFlags(int nTexId, uint16 nFlagsToTest)
{
} /* size: 0 */

// <003A3FDA> rendersystem/texturebase.h:533
inline void CTextureInfoChunkBase::HasAllFlags(int nTexId, uint16 nFlagsToTest)
{
} /* size: 0 */

// <0031F37C> rendersystem/texturebase.h:560
void ResourceLoadCompletedMessage_t::ResourceLoadCompletedMessage_t()
{
} /* size: 0 */

// <0031F35F> rendersystem/texturebase.h:560
inline void ResourceLoadCompletedMessage_t::ResourceLoadCompletedMessage_t()
{
} /* size: 0 */

// <0031F348> rendersystem/texturebase.h:560
void ResourceLoadCompletedMessage_t::~ResourceLoadCompletedMessage_t()
{
} /* size: 0 */

// <0031F32B> rendersystem/texturebase.h:560
inline void ResourceLoadCompletedMessage_t::~ResourceLoadCompletedMessage_t()
{
} /* size: 0 */

// <003020A4> rendersystem/texturebase.h:560
void ResourceLoadCompletedMessage_t::ResourceLoadCompletedMessage_t(const ResourceLoadCompletedMessage_t &)
{
} /* size: 0 */

// <00302082> rendersystem/texturebase.h:560
inline void ResourceLoadCompletedMessage_t::ResourceLoadCompletedMessage_t(const ResourceLoadCompletedMessage_t &)
{
} /* size: 0 */

// <002DCB62> rendersystem/texturebase.h:560
// member functions: 3
// member variables: 3
// struct size: 128
struct ResourceLoadCompletedMessage_t {
	TextureObjectInfo_t m_textureObject; /* 0 112 */
	int32 m_nStreamingRequestId; /* 112 4 */
	CTextureBase * m_pTex; /* 120 8 */
	void ResourceLoadCompletedMessage_t(ResourceLoadCompletedMessage_t* , const ResourceLoadCompletedMessage_t& );
	void ~ResourceLoadCompletedMessage_t(ResourceLoadCompletedMessage_t* );
	void ResourceLoadCompletedMessage_t(ResourceLoadCompletedMessage_t* );
};

// <002DCBF9> rendersystem/texturebase.h:567
// member variables: 2
// struct size: 16
struct ResourceLoadFailedMessage_t {
	int32 m_nStreamingRequestId; /* 0 4 */
	CTextureBase * m_pTex; /* 8 8 */
};

// <002DCC2D> rendersystem/texturebase.h:576
// member functions: 290
// member variables: 56
// static member variable: 1
// vtable entries: 34
// class size: 17,200
class CTextureManagerBase : public IResourceTypeManager, public IToolsResourceListener {
	/* rendersystem/texturebase.h:781 */
	enum {
		INVALID_STREAMING_REQUEST_ID = 0,
	};
	/* rendersystem/texturebase.h:785 */
	struct CacheRequest_t {
		HRenderTexture m_hTexture; /* 0 8 */
		int32 m_nRequiredMipSize; /* 8 4 */
		void CacheRequest_t(CacheRequest_t* , const CacheRequest_t& );
		void CacheRequest_t(CacheRequest_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* rendersystem/texturebase.h:791 */
	struct ToCacheHandle_t {
		HRenderTexture m_hTexture; /* 0 8 */
		size_t m_nDataSize; /* 8 8 */
		int m_nMaxMipWidth; /* 16 4 */
		int m_nMaxMipHeight; /* 20 4 */
		int m_nNumMipLevels; /* 24 4 */
		bool m_bWasRequested; /* 28 1 */
		bool m_bIsCompressedOnDisk; /* 29 1 */
		/* rendersystem/texturebase.h:800 */
		bool operator==(const ToCacheHandle_t* , const ToCacheHandle_t& );
		ToCacheHandle_t& operator=(ToCacheHandle_t* , ToCacheHandle_t& );
		void ToCacheHandle_t(ToCacheHandle_t* , ToCacheHandle_t& );
		void ToCacheHandle_t(ToCacheHandle_t* , const ToCacheHandle_t& );
		void ToCacheHandle_t(ToCacheHandle_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* rendersystem/texturebase.h:803 */
	struct AsyncTextureHookupData_t {
		TextureSpecification_t m_texSpec; /* 0 104 */
		const void * m_pTextureData; /* 104 8 */
		uint32 m_nTextureDataSize; /* 112 4 */
		int m_nStreamingRequestId; /* 116 4 */
		void * m_pOwnedMemory; /* 120 8 */
		IMemoryMappedFile * m_pMappedFile; /* 128 8 */
		TextureBitsMemoryType_t m_memoryType; /* 136 4 */
		void AsyncTextureHookupData_t(AsyncTextureHookupData_t* , const AsyncTextureHookupData_t& );
		void ~AsyncTextureHookupData_t(AsyncTextureHookupData_t* );
		void AsyncTextureHookupData_t(AsyncTextureHookupData_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* rendersystem/texturebase.h:872 */
	class CCommandMemberInitializer_EvictAllTexturesConCommand {
		/* rendersystem/texturebase.h:872 */
		void CCommandMemberInitializer_EvictAllTexturesConCommand(CCommandMemberInitializer_EvictAllTexturesConCommand* );
	private:
		CConCommandMemberAccessor<CTextureManagerBase> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_EvictAllTexturesConCommand(CCommandMemberInitializer_EvictAllTexturesConCommand* );
	};
	/* rendersystem/texturebase.h:873 */
	class CCommandMemberInitializer_ListAllTexturesConCommand {
		/* rendersystem/texturebase.h:873 */
		void CCommandMemberInitializer_ListAllTexturesConCommand(CCommandMemberInitializer_ListAllTexturesConCommand* );
	private:
		CConCommandMemberAccessor<CTextureManagerBase> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_ListAllTexturesConCommand(CCommandMemberInitializer_ListAllTexturesConCommand* );
	};
	/* rendersystem/texturebase.h:941 */
	struct ExternalTextureInfo_t {
		SharedResourceHandle_t hSharedResource; /* 0 8 */
		GraphicsAPISpecificTextureHandle_t hAPITextureHandle; /* 8 8 */
		HRenderTexture hRenderTexture; /* 16 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class IResourceTypeManager <ancestor>; */ /* 0 8 */
	/* class IToolsResourceListener <ancestor>; */ /* 8 8 */
	void CTextureManagerBase(CTextureManagerBase* , const CTextureManagerBase& );
	/* rendersystem/texturebase.cpp:659 */
	virtual bool Init(CTextureManagerBase* , IResourceSystemUtils* );
	/* rendersystem/texturebase.cpp:729 */
	virtual void Shutdown(CTextureManagerBase* );
	/* rendersystem/texturebase.h:582 */
	virtual bool NeedsFrameUpdate(const CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:3001 */
	virtual void FrameUpdate(CTextureManagerBase* , int);
	/* rendersystem/texturebase.cpp:3084 */
	virtual ResourceStreamingType_t GetStreamingType(const CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:796 */
	virtual int GetNonStreamingDataLoadSize(const CTextureManagerBase* , ResourceHandle_t, bool);
	/* rendersystem/texturebase.cpp:1300 */
	virtual void AllocateResource(CTextureManagerBase* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* rendersystem/texturebase.cpp:1474 */
	virtual void DeallocateResource(CTextureManagerBase* , void* , IResourceDeallocatorUtils* );
	/* rendersystem/texturebase.cpp:296 */
	virtual void NotifyResourceWithWorkPendingLoadCancelled(CTextureManagerBase* , ResourceHandle_t, void* );
	/* rendersystem/texturebase.h:589 */
	virtual bool MemoryMappedFileDataIsAcceptable(const CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:929 */
	virtual bool WantsAsyncProcessData(const CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:934 */
	virtual unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(CTextureManagerBase* , ResourceHandle_t, const ResourceFileHeader_t* );
	/* rendersystem/texturebase.cpp:3440 */
	virtual bool IsStreamingDataAlreadyLoaded(CTextureManagerBase* , ResourceHandle_t);
	/* rendersystem/texturebase.cpp:3469 */
	virtual void LoadStreamingData(CTextureManagerBase* , ResourceHandle_t, IResourceSystemUtils* );
	/* rendersystem/texturebase.cpp:1591 */
	virtual void NotifyResourceStatusChange(CTextureManagerBase* , const ResourceStatusChange_t* , int);
	/* rendersystem/texturebase.h:602 */
	virtual CTextureBase* NewTexture(const CTextureManagerBase* );
	/* rendersystem/texturebase.h:607 */
	virtual bool GenerateTextureObject(CTextureManagerBase* , TextureObjectInfo_t* , const TextureSpecification_t& , const void* , int, IMemoryMappedFile* , TextureBitsMemoryType_t);
	/* rendersystem/texturebase.h:611 */
	virtual void HookUpTextureObject(CTextureManagerBase* , CTextureBase* , const TextureObjectInfo_t& );
	/* rendersystem/texturebase.h:613 */
	virtual void HookupFallbackTextureAndQueueTextureBitsCopy(CTextureManagerBase* , CTextureBase* , void* );
	/* rendersystem/texturebase.h:617 */
	virtual HRenderTexture FindOrCreateExternalTexture(CTextureManagerBase* , const char* , SharedResourceHandle_t);
	/* rendersystem/texturebase.h:618 */
	virtual bool UpdateExternalTexture(CTextureManagerBase* , HRenderTexture, SharedResourceHandle_t);
	/* rendersystem/texturebase.h:620 */
	virtual void DestroyTextureObject(CTextureManagerBase* , TextureObjectInfo_t& );
	/* rendersystem/texturebase.h:621 */
	virtual void ComputeTextureObject(CTextureManagerBase* , TextureObjectInfo_t* , const TextureSpecification_t* , const void* , int, bool);
	/* rendersystem/texturebase.h:623 */
	virtual bool SupportsTextureDimension(const CTextureManagerBase* , RenderTextureDimension_t);
	/* rendersystem/texturebase.cpp:2500 */
	void RegisterTextureAllocation(CTextureManagerBase* , CTextureBase* );
	/* rendersystem/texturebase.cpp:2520 */
	void RegisterTextureDeallocation(CTextureManagerBase* , CTextureBase* );
	/* rendersystem/texturebase.cpp:2567 */
	void RegisterProceduralTextureAllocation(CTextureManagerBase* , const CTextureBase* );
	/* rendersystem/texturebase.cpp:2576 */
	void RegisterProceduralTextureDeallocation(CTextureManagerBase* , const CTextureBase* );
	/* rendersystem/texturebase.h:631 */
	virtual bool IsSwapChain(const CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.h:634 */
	virtual size_t RemoveMipLevels(CTextureManagerBase* , CTextureBase* , CRenderContextBase* , int);
	/* rendersystem/texturebase.h:635 */
	virtual void RemoveTextureFromStreamableList(CTextureManagerBase* , const CTextureBase* );
	/* rendersystem/texturebase.cpp:3156 */
	virtual void GetTextureResidencyInfo(CTextureManagerBase* , CUtlVector<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >& , TextureResidencyStats_t& );
	/* rendersystem/texturebase.cpp:968 */
	virtual HRenderTexture FindOrCreateProceduralTexture(CTextureManagerBase* , const CResourceName& , bool, const CTextureCreationDesc* );
	/* rendersystem/texturebase.cpp:610 */
	void CTextureManagerBase(CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:649 */
	virtual void ~CTextureManagerBase(CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:783 */
	virtual void InstallResourceType(CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:789 */
	void RemoveResourceType(CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:941 */
	CTextureBase* AllocateTexture(CTextureManagerBase* , const CTextureCreationDesc* , size_t, HRenderTexture, bool, const CResourceName& , CTextureInfoId* );
	/* rendersystem/texturebase.cpp:1001 */
	void AllocateStandardTextures(CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:1212 */
	void AssignErrorTexture(CTextureManagerBase* , CTextureBase* );
	/* rendersystem/texturebase.cpp:1248 */
	void AssignFallbackTexture(CTextureManagerBase* , CTextureBase* , CRenderContextBase* );
	/* rendersystem/texturebase.cpp:1829 */
	void PreloadTextureBits(CTextureManagerBase* , HRenderTexture, int32);
	/* rendersystem/texturebase.cpp:1869 */
	void UnloadTextureBits(CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.cpp:1886 */
	bool AreTextureBitsLoaded(const CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.cpp:1895 */
	void SetTextureStreamingPriority(CTextureManagerBase* , HRenderTexture, RenderTextureStreamingPriority_t);
	/* rendersystem/texturebase.cpp:1905 */
	RenderTextureStreamingPriority_t GetTextureStreamingPriority(const CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.cpp:3520 */
	const CTextureDesc* GetOnDiskTextureDesc(const CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.cpp:3540 */
	const CTextureDesc* GetTextureDesc(const CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.cpp:3560 */
	Vector GetTextureAverageColor(const CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.cpp:3581 */
	RenderMultisampleType_t GetTextureMultisampleType(const CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.cpp:3604 */
	bool IsTextureSampleableRenderTarget(const CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.cpp:3617 */
	bool IsTextureRenderTarget(const CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.cpp:3702 */
	size_t GetStreamingDataOffset(const CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.cpp:3630 */
	bool IsTextureCubeMap(const CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.cpp:3643 */
	bool IsTextureFullyResident(const CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.cpp:3669 */
	void AddTextureResidencyListener(CTextureManagerBase* , ITextureResidencyListener* );
	/* rendersystem/texturebase.cpp:3674 */
	void RemoveTextureResidencyListener(CTextureManagerBase* , ITextureResidencyListener* );
	/* rendersystem/texturebase.cpp:3679 */
	void MarkAsyncUpdatedThisFrame(CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.cpp:3690 */
	bool WasAsyncUpdatedThisFrame(const CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.cpp:3501 */
	void MarkUsed(CTextureManagerBase* , HRenderTexture, int);
	/* rendersystem/texturebase.cpp:2201 */
	CUtlPair GetDecompressionBuffer(CTextureManagerBase* , uint32);
	/* rendersystem/texturebase.cpp:2222 */
	void FreeDecompressionBuffer(CTextureManagerBase* , CUtlPair);
	/* rendersystem/texturebase.cpp:3480 */
	const TextureSpecification_t* GetTextureSpecification(CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.cpp:1790 */
	const Sheet_t* GetTextureSheet(CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.cpp:1672 */
	void RegisterTexture(CTextureManagerBase* , CTextureBase* , CTextureInfoId* );
	/* rendersystem/texturebase.cpp:1703 */
	void UnregisterTexture(CTextureManagerBase* , CTextureBase* );
	/* rendersystem/texturebase.cpp:2488 */
	void ValidateTextureHeap(CTextureManagerBase* );
	/* rendersystem/texturebase.h:698 */
	CThreadRWLock_FastRead& GetTextureManagerRWLock(CTextureManagerBase* );
	/* rendersystem/texturebase.h:699 */
	uint64 GetCurrentTextureMemorySize(const CTextureManagerBase* );
	/* rendersystem/texturebase.h:700 */
	uint64 GetTextureMemoryLimit(const CTextureManagerBase* );
	/* rendersystem/texturebase.h:701 */
	uint64 GetCurrentTextureCount(const CTextureManagerBase* );
	/* rendersystem/texturebase.h:702 */
	uint64 GetCurrentNonEvictableTextureMemorySize(const CTextureManagerBase* );
	/* rendersystem/texturebase.h:705 */
	int64 GetTotalTextureCount(const CTextureManagerBase* );
	/* rendersystem/texturebase.h:707 */
	int64 GetEvictedTextureCount(const CTextureManagerBase* );
	/* rendersystem/texturebase.h:709 */
	const CTextureBase* GetErrorTexture(const CTextureManagerBase* , RenderTextureDimension_t);
	/* rendersystem/texturebase.h:711 */
	int GetMaxTextureRes(const CTextureManagerBase* );
	/* rendersystem/texturebase.h:712 */
	int GetMaxPreloadTextureRes(const CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:3712 */
	void AdjustTextureSpecificationForMaxTextureResolution(const CTextureManagerBase* , TextureSpecification_t* , int);
	/* rendersystem/texturebase.cpp:3742 */
	void AdjustTextureSpecificationForStreamingMipBias(const CTextureManagerBase* , TextureSpecification_t* , const TextureSpecification_t* );
	/* rendersystem/texturebase.cpp:721 */
	void HardwareCapsUpdated(CTextureManagerBase* , const HardwareCaps_t* );
	/* rendersystem/texturebase.cpp:1722 */
	void SetDefaultTextureMemoryPoolSize(CTextureManagerBase* , uint64);
	/* rendersystem/texturebase.cpp:1750 */
	void SetTexturePoolSize(CTextureManagerBase* , int);
	/* rendersystem/texturebase.h:719 */
	void RequestGPUProfilerTextureList(CTextureManagerBase* );
	/* rendersystem/texturebase.h:720 */
	void UnThrottleTextureStreamingForNFrames(CTextureManagerBase* , uint32);
	/* rendersystem/texturebase.h:724 */
	bool IsTextureStreamingUnThrottled(const CTextureManagerBase* );
	/* rendersystem/texturebase.h:989 */
	void UpdateUnthrottleTextureStreamingFrameCount(CTextureManagerBase* );
	/* rendersystem/texturebase.h:727 */
	int GetNumTextureLoadsInFlight(const CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:3774 */
	bool IsSrgbFormat(const CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.h:731 */
	void PinTextureInGPUMemory(const CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.h:740 */
	void UnpinTextureInGPUMemory(const CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.h:749 */
	int GetTexturePinCount(const CTextureManagerBase* , HRenderTexture);
	/* rendersystem/texturebase.h:755 */
	bool AllowSampleableDepthInVr(const CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:2472 */
	virtual bool TextureAchievedResidency(const CTextureManagerBase* , const CTextureBase* , const TextureObjectInfo_t& , int32);
	/* rendersystem/texturebase.cpp:1782 */
	virtual void SetTextureStreamMipBias(CTextureManagerBase* , int);
	/* rendersystem/texturebase.cpp:3042 */
	void ValidateTextureStreaming(CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:3939 */
	void SetMaxTextureRes(CTextureManagerBase* , int32);
	/* rendersystem/texturebase.cpp:3947 */
	virtual void UpdateStats(const CTextureManagerBase* );
	/* rendersystem/texturebase.h:769 */
	int32 GetMinStreaminingMemoryPoolSizeMB(const CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:3322 */
	void EvictAllTextures(CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:1638 */
	uint16 GetTargetMipCount(const CTextureManagerBase* , CTextureInfoId);
	/* rendersystem/texturebase.cpp:1653 */
	void SetTargetMipCount(CTextureManagerBase* , CTextureInfoId, uint16);
	static const int nMinTexturePoolSizeToRunSource2GamesWithoutThrashing = 300; /* 0 0 */
protected:
	/* rendersystem/texturebase.cpp:2874 */
	int ResourceSizeComparisonFunc(const ToCacheHandle_t* , const ToCacheHandle_t* );
	/* rendersystem/texturebase.cpp:1968 */
	void MN_OnResourceFileLoaded(CTextureManagerBase* , IAsyncResourceDataRequest* , HRenderTexture, CTextureBase* , const TextureSpecification_t& , int32);
	/* rendersystem/texturebase.cpp:2075 */
	void MN_AddAsyncTextureBitsHookupJob(CTextureManagerBase* , CTextureBase* , const AsyncTextureHookupData_t& );
	/* rendersystem/texturebase.cpp:2248 */
	void AsyncHookUpTextureBits(CTextureManagerBase* , CTextureBase* , HRenderTexture, ResourceId_t, const AsyncTextureHookupData_t& , const TextureSpecification_t& , CUtlString);
	/* rendersystem/texturebase.cpp:3096 */
	virtual bool PerformTextureStreaming(CTextureManagerBase* , int);
	/* rendersystem/texturebase.cpp:2750 */
	uint64 MN_BuildRequestedResourcesList(CTextureManagerBase* , CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >& );
	/* rendersystem/texturebase.cpp:1918 */
	void MN_CacheRequestedResources(CTextureManagerBase* , CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >& );
	/* rendersystem/texturebase.cpp:2834 */
	uint64 MN_BuildToCacheList(CTextureManagerBase* , CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >& , int);
	/* rendersystem/texturebase.cpp:2886 */
	void MN_EvictResources(CTextureManagerBase* , CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >& , uint64);
	/* rendersystem/texturebase.cpp:2393 */
	void MN_OnResourceLoadFailed(CTextureManagerBase* , CTextureBase* , int32);
	/* rendersystem/texturebase.cpp:2422 */
	void MN_OnResourceLoadCompleted(CTextureManagerBase* , CTextureBase* , TextureObjectInfo_t& , int32, int);
	/* rendersystem/texturebase.cpp:2376 */
	void MN_DeallocateCacheableData(CTextureManagerBase* , CTextureInfoId, CRenderContextBase* );
	/* rendersystem/texturebase.cpp:2647 */
	void ProcessResourceThreadEvents(CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:3120 */
	void ResetTextureBindStats(CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:2694 */
	void MN_UnloadRequestedTextures(CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:2608 */
	void PostResourceLoadCompletedMessage(CTextureManagerBase* , CTextureBase* , TextureObjectInfo_t, int32);
	/* rendersystem/texturebase.cpp:2624 */
	void PostResourceLoadFailedMessage(CTextureManagerBase* , HRenderTexture, int32);
	/* rendersystem/texturebase.cpp:2585 */
	uint64 ComputeResidentTextureMemory(const CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:3231 */
	void BuildTextureListAndSendToGPUProfiler(const CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:3365 */
	int32 GetNewStreamingRequestId(CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:3377 */
	bool MarkStreamingRequestAbandonedIfNeeded(CTextureManagerBase* , HRenderTexture, int32);
	/* rendersystem/texturebase.cpp:3417 */
	void AbandonOutstandingStreamingRequestOnTextureDeletion(CTextureManagerBase* , CTextureBase* );
	/* rendersystem/texturebase.cpp:3823 */
	void DeleteQueuedTextureIds(CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:3787 */
	CTextureInfoId AllocTextureId(CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:1607 */
	CTextureInfoId NextValidTextureId(const CTextureManagerBase* , CTextureInfoId);
	/* rendersystem/texturebase.cpp:1499 */
	void RemoveTextureFromAnyQueues(CTextureManagerBase* , CTextureBase* );
	/* rendersystem/texturebase.cpp:1538 */
	void RemoveTextureFromHookupQueues(CTextureManagerBase* , CTextureBase* );
	/* rendersystem/texturebase.cpp:1559 */
	void RemoveTextureFromCacheRequests(CTextureManagerBase* , CTextureBase* );
	/* rendersystem/texturebase.cpp:1573 */
	void RemoveTextureFromUncacheRequests(CTextureManagerBase* , CTextureBase* );
	/* rendersystem/texturebase.h:866 */
	bool DeferTextureLoads(const CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:1803 */
	bool CheckForDeferedTextureLoad(CTextureManagerBase* , const CTextureBase* );
	/* rendersystem/texturebase.cpp:1011 */
	void InitErrorTexture(CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:1100 */
	void InitFallbackTextures(CTextureManagerBase* );
	/* rendersystem/texturebase.cpp:3358 */
	void EvictAllTexturesConCommand(CTextureManagerBase* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_EvictAllTexturesConCommand m_EvictAllTexturesConCommand_register; /* 16 160 */
	/* rendersystem/texturebase.cpp:3197 */
	void ListAllTexturesConCommand(CTextureManagerBase* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_ListAllTexturesConCommand m_ListAllTexturesConCommand_register; /* 176 160 */
	IResourceSystemUtils * m_pResourceSystemUtils; /* 336 8 */
	CThreadMutex m_cacheRequestsMutex; /* 344 72 */
	CUtlVector<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> > m_CacheRequests; /* 416 32 */
	CThreadMutex m_uncacheRequestsMutex; /* 448 72 */
	CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int> > m_UncacheRequests; /* 520 32 */
	CInterlockedInt m_nTextureLoadsInFlight __attribute__((__aligned__(4))); /* 552 4 */
	uint64 m_nMemoryUsed; /* 560 8 */
	uint64 m_nMemoryLimit; /* 568 8 */
	uint64 m_nNonEvictableMemoryUsed; /* 576 8 */
	int32_t m_nTextureStreamMipBias; /* 584 4 */
	CThreadMutex m_hookupAndTextureLoadFailedMutex; /* 592 72 */
	CUtlVector<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> > m_HookupRequests; /* 664 32 */
	CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int> > m_RenderBlockTextures; /* 696 32 */
	CUtlVector<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> > m_TextureLoadFailedMsgs; /* 728 32 */
	CThreadMutex m_HookupJobLock; /* 760 72 */
	CThreadRWLock_FastRead m_TextureManagerRWLock __attribute__((__aligned__(8))); /* 832 408 */
	CUtlIdGenerator m_TextureIdGenerator; /* 1240 16 */
	CTextureInfoChunkBase * m_pTextureInfoChunks[128]; /* 1256 1024 */
	uint m_nTextureInfoChunkCount; /* 2280 4 */
	CUtlVector<CTextureInfoId, CUtlMemory<CTextureInfoId, int> > m_textureInfoDeletionQueue; /* 2288 32 */
	CUtlVector<ITextureResidencyListener*, CUtlMemory<ITextureResidencyListener*, int> > m_textureResidencyListeners; /* 2320 32 */
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_textureStreamerTargetMipCount; /* 2352 32 */
	int m_nTextureCount; /* 2384 4 */
	int64 m_nTotalTextureCount; /* 2392 8 */
	CInterlockedInt64 m_nEvictedTextureCount __attribute__((__aligned__(8))); /* 2400 8 */
	bool m_bSkipEviction; /* 2408 1 */
	bool m_bDeviceLost; /* 2409 1 */
	int m_nMaxTextureRes; /* 2412 4 */
	bool m_bTextureListRequested; /* 2416 1 */
	uint32 m_nUnThrottleTextureStreaming; /* 2420 4 */
	int32 m_nMinStreamingMemoryPoolSizeMB; /* 2424 4 */
	CThreadMutex m_abandonedRequestsMutex; /* 2432 72 */
	CUtlVector<int, CUtlMemory<int, int> > m_abandonedStreamingRequests; /* 2504 32 */
	int32 m_nStreamingRequestIdCounter; /* 2536 4 */
	CUtlVector<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int> > m_abandonedHookupJobs; /* 2544 32 */
	CThreadMutex m_outstandingStreamCountMutex; /* 2576 72 */
	int m_nOutstandingStreamCount; /* 2648 4 */
	CUtlVector<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int> > m_externalTextures; /* 2656 32 */
	int m_nMaxPreloadTextureRes; /* 2688 4 */
	bool m_bForcePreloadStreamingData; /* 2692 1 */
	bool m_bAllowSampleableDepthInVR; /* 2693 1 */
	bool m_bDeferTextureLoads; /* 2694 1 */
	bool m_bAllowPartialMipChainImmediateLoads; /* 2695 1 */
	CThreadMutex m_DecompressionBufferLock; /* 2696 72 */
	uint8 * m_pDecompressionBuffer; /* 2768 8 */
	uint32 m_nDecompressionBufferSize; /* 2776 4 */
	uint32 m_nDecompressionBufferMaxSize; /* 2780 4 */
	float m_flAdditionalStreamResolutionBias; /* 2784 4 */
	IThreadPool * m_pAsyncTextureHookupPool; /* 2792 8 */
	CTextureBase * m_pErrorTexture[7]; /* 2800 56 */
	CTextureBase * m_pFallbackTexture[256][7]; /* 2856 14336 */
	bool m_bInMainThreadRenderBlock; /* 17192 1 */
	/* rendersystem/texturebase.h:978 */
	void SetForcePreloadStreamingData(CTextureManagerBase* , bool);
	void MarkUsed(class CTextureManagerBase *, HRenderTexture, int); /* linkage=_ZN19CTextureManagerBase8MarkUsedE11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	const class CTextureDesc  * GetTextureDesc(const class CTextureManagerBase  *, HRenderTexture); /* linkage=_ZNK19CTextureManagerBase14GetTextureDescE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	class CThreadRWLock_FastRead & GetTextureManagerRWLock(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBase23GetTextureManagerRWLockEv */
	const class Sheet_t  * GetTextureSheet(class CTextureManagerBase *, HRenderTexture); /* linkage=_ZN19CTextureManagerBase15GetTextureSheetE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void MarkAsyncUpdatedThisFrame(class CTextureManagerBase *, HRenderTexture); /* linkage=_ZN19CTextureManagerBase25MarkAsyncUpdatedThisFrameE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	bool WasAsyncUpdatedThisFrame(const class CTextureManagerBase  *, HRenderTexture); /* linkage=_ZNK19CTextureManagerBase24WasAsyncUpdatedThisFrameE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void AssignErrorTexture(class CTextureManagerBase *, class CTextureBase *); /* linkage=_ZN19CTextureManagerBase18AssignErrorTextureEP12CTextureBase */
	void RemoveTextureResidencyListener(class CTextureManagerBase *, class ITextureResidencyListener *); /* linkage=_ZN19CTextureManagerBase30RemoveTextureResidencyListenerEP25ITextureResidencyListener */
	void AddTextureResidencyListener(class CTextureManagerBase *, class ITextureResidencyListener *); /* linkage=_ZN19CTextureManagerBase27AddTextureResidencyListenerEP25ITextureResidencyListener */
	bool IsTextureFullyResident(const class CTextureManagerBase  *, HRenderTexture); /* linkage=_ZNK19CTextureManagerBase22IsTextureFullyResidentE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	bool IsTextureCubeMap(const class CTextureManagerBase  *, HRenderTexture); /* linkage=_ZNK19CTextureManagerBase16IsTextureCubeMapE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	bool IsTextureRenderTarget(const class CTextureManagerBase  *, HRenderTexture); /* linkage=_ZNK19CTextureManagerBase21IsTextureRenderTargetE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	size_t GetStreamingDataOffset(const class CTextureManagerBase  *, HRenderTexture); /* linkage=_ZNK19CTextureManagerBase22GetStreamingDataOffsetE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	bool IsTextureSampleableRenderTarget(const class CTextureManagerBase  *, HRenderTexture); /* linkage=_ZNK19CTextureManagerBase31IsTextureSampleableRenderTargetE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	enum RenderMultisampleType_t GetTextureMultisampleType(const class CTextureManagerBase  *, HRenderTexture); /* linkage=_ZNK19CTextureManagerBase25GetTextureMultisampleTypeE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	const class TextureSpecification_t  * GetTextureSpecification(class CTextureManagerBase *, HRenderTexture); /* linkage=_ZN19CTextureManagerBase23GetTextureSpecificationE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	class Vector GetTextureAverageColor(const class CTextureManagerBase  *, HRenderTexture); /* linkage=_ZNK19CTextureManagerBase22GetTextureAverageColorE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	const class CTextureDesc  * GetOnDiskTextureDesc(const class CTextureManagerBase  *, HRenderTexture); /* linkage=_ZNK19CTextureManagerBase20GetOnDiskTextureDescE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	bool AreTextureBitsLoaded(const class CTextureManagerBase  *, HRenderTexture); /* linkage=_ZNK19CTextureManagerBase20AreTextureBitsLoadedE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void SetTextureStreamingPriority(class CTextureManagerBase *, HRenderTexture, enum RenderTextureStreamingPriority_t); /* linkage=_ZN19CTextureManagerBase27SetTextureStreamingPriorityE11CWeakHandleI31InfoForResourceTypeCTextureBaseE32RenderTextureStreamingPriority_t */
	void UnloadTextureBits(class CTextureManagerBase *, HRenderTexture); /* linkage=_ZN19CTextureManagerBase17UnloadTextureBitsE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void PreloadTextureBits(class CTextureManagerBase *, HRenderTexture, int32); /* linkage=_ZN19CTextureManagerBase18PreloadTextureBitsE11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	void RegisterProceduralTextureAllocation(class CTextureManagerBase *, const class CTextureBase  *); /* linkage=_ZN19CTextureManagerBase35RegisterProceduralTextureAllocationEPK12CTextureBase */
	void UpdateUnthrottleTextureStreamingFrameCount(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBase42UpdateUnthrottleTextureStreamingFrameCountEv */
	void SetForcePreloadStreamingData(class CTextureManagerBase *, bool); /* linkage=_ZN19CTextureManagerBase28SetForcePreloadStreamingDataEb */
	int GetTexturePinCount(const class CTextureManagerBase  *, HRenderTexture); /* linkage=_ZNK19CTextureManagerBase18GetTexturePinCountE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void UnpinTextureInGPUMemory(const class CTextureManagerBase  *, HRenderTexture); /* linkage=_ZNK19CTextureManagerBase23UnpinTextureInGPUMemoryE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void PinTextureInGPUMemory(const class CTextureManagerBase  *, HRenderTexture); /* linkage=_ZNK19CTextureManagerBase21PinTextureInGPUMemoryE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	int GetNumTextureLoadsInFlight(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase26GetNumTextureLoadsInFlightEv */
	void UnThrottleTextureStreamingForNFrames(class CTextureManagerBase *, uint32); /* linkage=_ZN19CTextureManagerBase36UnThrottleTextureStreamingForNFramesEj */
	void RequestGPUProfilerTextureList(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBase29RequestGPUProfilerTextureListEv */
	const class CTextureBase  * GetErrorTexture(const class CTextureManagerBase  *, enum RenderTextureDimension_t); /* linkage=_ZNK19CTextureManagerBase15GetErrorTextureE24RenderTextureDimension_t */
	int64 GetEvictedTextureCount(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase22GetEvictedTextureCountEv */
	int64 GetTotalTextureCount(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase20GetTotalTextureCountEv */
	uint64 GetCurrentNonEvictableTextureMemorySize(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase39GetCurrentNonEvictableTextureMemorySizeEv */
	uint64 GetCurrentTextureCount(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase22GetCurrentTextureCountEv */
	uint64 GetTextureMemoryLimit(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase21GetTextureMemoryLimitEv */
	uint64 GetCurrentTextureMemorySize(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase27GetCurrentTextureMemorySizeEv */
	void CTextureManagerBase(class CTextureManagerBase *, const class CTextureManagerBase  &); /* linkage=_ZN19CTextureManagerBaseC4ERKS_ */
	virtual bool Init(class CTextureManagerBase *, class IResourceSystemUtils *); /* linkage=_ZN19CTextureManagerBase4InitEP20IResourceSystemUtils */
	virtual void Shutdown(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBase8ShutdownEv */
	virtual bool NeedsFrameUpdate(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase16NeedsFrameUpdateEv */
	virtual void FrameUpdate(class CTextureManagerBase *, int); /* linkage=_ZN19CTextureManagerBase11FrameUpdateEi */
	virtual enum ResourceStreamingType_t GetStreamingType(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase16GetStreamingTypeEv */
	/* <3465a7> rendersystem/texturebase.cpp:796 */
	virtual int GetNonStreamingDataLoadSize(const class CTextureManagerBase  *, ResourceHandle_t, bool); /* linkage=_ZNK19CTextureManagerBase27GetNonStreamingDataLoadSizeEPK21ResourceBindingBase_tb */
	virtual void AllocateResource(class CTextureManagerBase *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN19CTextureManagerBase16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	/* <34a744> rendersystem/texturebase.cpp:1474 */
	virtual void DeallocateResource(class CTextureManagerBase *, void *, class IResourceDeallocatorUtils *); /* linkage=_ZN19CTextureManagerBase18DeallocateResourceEPvP25IResourceDeallocatorUtils */
	virtual void NotifyResourceWithWorkPendingLoadCancelled(class CTextureManagerBase *, ResourceHandle_t, void *); /* linkage=_ZN19CTextureManagerBase42NotifyResourceWithWorkPendingLoadCancelledEPK21ResourceBindingBase_tPv */
	virtual bool MemoryMappedFileDataIsAcceptable(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase32MemoryMappedFileDataIsAcceptableEv */
	virtual bool WantsAsyncProcessData(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase21WantsAsyncProcessDataEv */
	virtual class unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(class CTextureManagerBase *, ResourceHandle_t, const class ResourceFileHeader_t  *); /* linkage=_ZN19CTextureManagerBase16AsyncProcessDataEPK21ResourceBindingBase_tPK20ResourceFileHeader_t */
	virtual bool IsStreamingDataAlreadyLoaded(class CTextureManagerBase *, ResourceHandle_t); /* linkage=_ZN19CTextureManagerBase28IsStreamingDataAlreadyLoadedEPK21ResourceBindingBase_t */
	virtual void LoadStreamingData(class CTextureManagerBase *, ResourceHandle_t, class IResourceSystemUtils *); /* linkage=_ZN19CTextureManagerBase17LoadStreamingDataEPK21ResourceBindingBase_tP20IResourceSystemUtils */
	/* <34688f> rendersystem/texturebase.cpp:1591 */
	virtual void NotifyResourceStatusChange(class CTextureManagerBase *, const class ResourceStatusChange_t  *, int); /* linkage=_ZN19CTextureManagerBase26NotifyResourceStatusChangeEPK22ResourceStatusChange_ti */
	virtual class CTextureBase * NewTexture(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase10NewTextureEv */
	virtual bool GenerateTextureObject(class CTextureManagerBase *, class TextureObjectInfo_t *, const class TextureSpecification_t  &, const void  *, int, class IMemoryMappedFile *, enum TextureBitsMemoryType_t); /* linkage=_ZN19CTextureManagerBase21GenerateTextureObjectEP19TextureObjectInfo_tRK22TextureSpecification_tPKviP17IMemoryMappedFile23TextureBitsMemoryType_t */
	virtual void HookUpTextureObject(class CTextureManagerBase *, class CTextureBase *, const class TextureObjectInfo_t  &); /* linkage=_ZN19CTextureManagerBase19HookUpTextureObjectEP12CTextureBaseRK19TextureObjectInfo_t */
	virtual void HookupFallbackTextureAndQueueTextureBitsCopy(class CTextureManagerBase *, class CTextureBase *, void *); /* linkage=_ZN19CTextureManagerBase44HookupFallbackTextureAndQueueTextureBitsCopyEP12CTextureBasePv */
	virtual HRenderTexture FindOrCreateExternalTexture(class CTextureManagerBase *, const char  *, SharedResourceHandle_t); /* linkage=_ZN19CTextureManagerBase27FindOrCreateExternalTextureEPKcy */
	virtual bool UpdateExternalTexture(class CTextureManagerBase *, HRenderTexture, SharedResourceHandle_t); /* linkage=_ZN19CTextureManagerBase21UpdateExternalTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseEy */
	virtual void DestroyTextureObject(class CTextureManagerBase *, class TextureObjectInfo_t &); /* linkage=_ZN19CTextureManagerBase20DestroyTextureObjectER19TextureObjectInfo_t */
	virtual void ComputeTextureObject(class CTextureManagerBase *, class TextureObjectInfo_t *, const class TextureSpecification_t  *, const void  *, int, bool); /* linkage=_ZN19CTextureManagerBase20ComputeTextureObjectEP19TextureObjectInfo_tPK22TextureSpecification_tPKvib */
	virtual bool SupportsTextureDimension(const class CTextureManagerBase  *, enum RenderTextureDimension_t); /* linkage=_ZNK19CTextureManagerBase24SupportsTextureDimensionE24RenderTextureDimension_t */
	void RegisterTextureAllocation(class CTextureManagerBase *, class CTextureBase *); /* linkage=_ZN19CTextureManagerBase25RegisterTextureAllocationEP12CTextureBase */
	void RegisterTextureDeallocation(class CTextureManagerBase *, class CTextureBase *); /* linkage=_ZN19CTextureManagerBase27RegisterTextureDeallocationEP12CTextureBase */
	void RegisterProceduralTextureDeallocation(class CTextureManagerBase *, const class CTextureBase  *); /* linkage=_ZN19CTextureManagerBase37RegisterProceduralTextureDeallocationEPK12CTextureBase */
	virtual bool IsSwapChain(const class CTextureManagerBase  *, HRenderTexture); /* linkage=_ZNK19CTextureManagerBase11IsSwapChainE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual size_t RemoveMipLevels(class CTextureManagerBase *, class CTextureBase *, class CRenderContextBase *, int); /* linkage=_ZN19CTextureManagerBase15RemoveMipLevelsEP12CTextureBaseP18CRenderContextBasei */
	/* <346576> rendersystem/texturebase.h:635 */
	virtual void RemoveTextureFromStreamableList(class CTextureManagerBase *, const class CTextureBase  *); /* linkage=_ZN19CTextureManagerBase31RemoveTextureFromStreamableListEPK12CTextureBase */
	virtual void GetTextureResidencyInfo(class CTextureManagerBase *, class CUtlVector<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> > &, class TextureResidencyStats_t &); /* linkage=_ZN19CTextureManagerBase23GetTextureResidencyInfoER10CUtlVectorI22TextureResidencyInfo_t10CUtlMemoryIS1_iEER23TextureResidencyStats_t */
	virtual HRenderTexture FindOrCreateProceduralTexture(class CTextureManagerBase *, const class CResourceName  &, bool, const class CTextureCreationDesc  *); /* linkage=_ZN19CTextureManagerBase29FindOrCreateProceduralTextureERK13CResourceNamebPK20CTextureCreationDesc */
	void CTextureManagerBase(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBaseC4Ev */
	virtual void ~CTextureManagerBase(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBaseD4Ev */
	virtual void InstallResourceType(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBase19InstallResourceTypeEv */
	void RemoveResourceType(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBase18RemoveResourceTypeEv */
	class CTextureBase * AllocateTexture(class CTextureManagerBase *, const class CTextureCreationDesc  *, size_t, HRenderTexture, bool, const class CResourceName  &, class CTextureInfoId *); /* linkage=_ZN19CTextureManagerBase15AllocateTextureEPK20CTextureCreationDescm11CWeakHandleI31InfoForResourceTypeCTextureBaseEbRK13CResourceNameP14CTextureInfoId */
	void AllocateStandardTextures(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBase24AllocateStandardTexturesEv */
	void AssignFallbackTexture(class CTextureManagerBase *, class CTextureBase *, class CRenderContextBase *); /* linkage=_ZN19CTextureManagerBase21AssignFallbackTextureEP12CTextureBaseP18CRenderContextBase */
	enum RenderTextureStreamingPriority_t GetTextureStreamingPriority(const class CTextureManagerBase  *, HRenderTexture); /* linkage=_ZNK19CTextureManagerBase27GetTextureStreamingPriorityE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	CUtlPair GetDecompressionBuffer(class CTextureManagerBase *, uint32); /* linkage=_ZN19CTextureManagerBase22GetDecompressionBufferEj */
	void FreeDecompressionBuffer(class CTextureManagerBase *, CUtlPair); /* linkage=_ZN19CTextureManagerBase23FreeDecompressionBufferESt4pairIPhjE */
	void RegisterTexture(class CTextureManagerBase *, class CTextureBase *, class CTextureInfoId *); /* linkage=_ZN19CTextureManagerBase15RegisterTextureEP12CTextureBaseP14CTextureInfoId */
	void UnregisterTexture(class CTextureManagerBase *, class CTextureBase *); /* linkage=_ZN19CTextureManagerBase17UnregisterTextureEP12CTextureBase */
	void ValidateTextureHeap(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBase19ValidateTextureHeapEv */
	int GetMaxTextureRes(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase16GetMaxTextureResEv */
	int GetMaxPreloadTextureRes(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase23GetMaxPreloadTextureResEv */
	/* <347c39> rendersystem/texturebase.cpp:3712 */
	void AdjustTextureSpecificationForMaxTextureResolution(const class CTextureManagerBase  *, class TextureSpecification_t *, int); /* linkage=_ZNK19CTextureManagerBase49AdjustTextureSpecificationForMaxTextureResolutionEP22TextureSpecification_ti */
	/* <34807a> rendersystem/texturebase.cpp:3742 */
	void AdjustTextureSpecificationForStreamingMipBias(const class CTextureManagerBase  *, class TextureSpecification_t *, const class TextureSpecification_t  *); /* linkage=_ZNK19CTextureManagerBase45AdjustTextureSpecificationForStreamingMipBiasEP22TextureSpecification_tPKS0_ */
	void HardwareCapsUpdated(class CTextureManagerBase *, const class HardwareCaps_t  *); /* linkage=_ZN19CTextureManagerBase19HardwareCapsUpdatedEPK14HardwareCaps_t */
	void SetDefaultTextureMemoryPoolSize(class CTextureManagerBase *, uint64); /* linkage=_ZN19CTextureManagerBase31SetDefaultTextureMemoryPoolSizeEy */
	void SetTexturePoolSize(class CTextureManagerBase *, int); /* linkage=_ZN19CTextureManagerBase18SetTexturePoolSizeEi */
	bool IsTextureStreamingUnThrottled(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase29IsTextureStreamingUnThrottledEv */
	bool IsSrgbFormat(const class CTextureManagerBase  *, HRenderTexture); /* linkage=_ZNK19CTextureManagerBase12IsSrgbFormatE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	bool AllowSampleableDepthInVr(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase24AllowSampleableDepthInVrEv */
	/* <346672> rendersystem/texturebase.cpp:2472 */
	virtual bool TextureAchievedResidency(const class CTextureManagerBase  *, const class CTextureBase  *, const class TextureObjectInfo_t  &, int32); /* linkage=_ZNK19CTextureManagerBase24TextureAchievedResidencyEPK12CTextureBaseRK19TextureObjectInfo_ti */
	/* <346641> rendersystem/texturebase.cpp:1782 */
	virtual void SetTextureStreamMipBias(class CTextureManagerBase *, int); /* linkage=_ZN19CTextureManagerBase23SetTextureStreamMipBiasEi */
	void ValidateTextureStreaming(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBase24ValidateTextureStreamingEv */
	/* <3483cc> rendersystem/texturebase.cpp:3939 */
	void SetMaxTextureRes(class CTextureManagerBase *, int32); /* linkage=_ZN19CTextureManagerBase16SetMaxTextureResEi */
	virtual void UpdateStats(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase11UpdateStatsEv */
	int32 GetMinStreaminingMemoryPoolSizeMB(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase33GetMinStreaminingMemoryPoolSizeMBEv */
	void EvictAllTextures(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBase16EvictAllTexturesEv */
	uint16 GetTargetMipCount(const class CTextureManagerBase  *, class CTextureInfoId); /* linkage=_ZNK19CTextureManagerBase17GetTargetMipCountE14CTextureInfoId */
	void SetTargetMipCount(class CTextureManagerBase *, class CTextureInfoId, uint16); /* linkage=_ZN19CTextureManagerBase17SetTargetMipCountE14CTextureInfoIdt */
	/* <346770> rendersystem/texturebase.cpp:2874 */
	int ResourceSizeComparisonFunc(const class ToCacheHandle_t  *, const class ToCacheHandle_t  *); /* linkage=_ZN19CTextureManagerBase26ResourceSizeComparisonFuncEPKNS_15ToCacheHandle_tES2_ */
	void MN_OnResourceFileLoaded(class CTextureManagerBase *, class IAsyncResourceDataRequest *, HRenderTexture, class CTextureBase *, const class TextureSpecification_t  &, int32); /* linkage=_ZN19CTextureManagerBase23MN_OnResourceFileLoadedEP25IAsyncResourceDataRequest11CWeakHandleI31InfoForResourceTypeCTextureBaseEP12CTextureBaseRK22TextureSpecification_ti */
	void MN_AddAsyncTextureBitsHookupJob(class CTextureManagerBase *, class CTextureBase *, const class AsyncTextureHookupData_t  &); /* linkage=_ZN19CTextureManagerBase31MN_AddAsyncTextureBitsHookupJobEP12CTextureBaseRKNS_24AsyncTextureHookupData_tE */
	void AsyncHookUpTextureBits(class CTextureManagerBase *, class CTextureBase *, HRenderTexture, class ResourceId_t, const class AsyncTextureHookupData_t  &, const class TextureSpecification_t  &, class CUtlString); /* linkage=_ZN19CTextureManagerBase22AsyncHookUpTextureBitsEP12CTextureBase11CWeakHandleI31InfoForResourceTypeCTextureBaseE12ResourceId_tRKNS_24AsyncTextureHookupData_tERK22TextureSpecification_t10CUtlString */
	virtual bool PerformTextureStreaming(class CTextureManagerBase *, int); /* linkage=_ZN19CTextureManagerBase23PerformTextureStreamingEi */
	uint64 MN_BuildRequestedResourcesList(class CTextureManagerBase *, class CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> > &); /* linkage=_ZN19CTextureManagerBase30MN_BuildRequestedResourcesListER10CUtlVectorINS_15ToCacheHandle_tE10CUtlMemoryIS1_iEE */
	void MN_CacheRequestedResources(class CTextureManagerBase *, class CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> > &); /* linkage=_ZN19CTextureManagerBase26MN_CacheRequestedResourcesER10CUtlVectorINS_15ToCacheHandle_tE10CUtlMemoryIS1_iEE */
	uint64 MN_BuildToCacheList(class CTextureManagerBase *, class CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> > &, int); /* linkage=_ZN19CTextureManagerBase19MN_BuildToCacheListER10CUtlVectorINS_15ToCacheHandle_tE10CUtlMemoryIS1_iEEi */
	/* <3496ea> rendersystem/texturebase.cpp:2886 */
	void MN_EvictResources(class CTextureManagerBase *, class CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> > &, uint64); /* linkage=_ZN19CTextureManagerBase17MN_EvictResourcesER10CUtlVectorINS_15ToCacheHandle_tE10CUtlMemoryIS1_iEEy */
	void MN_OnResourceLoadFailed(class CTextureManagerBase *, class CTextureBase *, int32); /* linkage=_ZN19CTextureManagerBase23MN_OnResourceLoadFailedEP12CTextureBasei */
	void MN_OnResourceLoadCompleted(class CTextureManagerBase *, class CTextureBase *, class TextureObjectInfo_t &, int32, int); /* linkage=_ZN19CTextureManagerBase26MN_OnResourceLoadCompletedEP12CTextureBaseR19TextureObjectInfo_tii */
	void MN_DeallocateCacheableData(class CTextureManagerBase *, class CTextureInfoId, class CRenderContextBase *); /* linkage=_ZN19CTextureManagerBase26MN_DeallocateCacheableDataE14CTextureInfoIdP18CRenderContextBase */
	void ProcessResourceThreadEvents(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBase27ProcessResourceThreadEventsEv */
	/* <347aee> rendersystem/texturebase.cpp:3120 */
	void ResetTextureBindStats(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBase21ResetTextureBindStatsEv */
	void MN_UnloadRequestedTextures(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBase26MN_UnloadRequestedTexturesEv */
	void PostResourceLoadCompletedMessage(class CTextureManagerBase *, class CTextureBase *, class TextureObjectInfo_t, int32); /* linkage=_ZN19CTextureManagerBase32PostResourceLoadCompletedMessageEP12CTextureBase19TextureObjectInfo_ti */
	void PostResourceLoadFailedMessage(class CTextureManagerBase *, HRenderTexture, int32); /* linkage=_ZN19CTextureManagerBase29PostResourceLoadFailedMessageE11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	uint64 ComputeResidentTextureMemory(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase28ComputeResidentTextureMemoryEv */
	void BuildTextureListAndSendToGPUProfiler(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase36BuildTextureListAndSendToGPUProfilerEv */
	/* <347be4> rendersystem/texturebase.cpp:3365 */
	int32 GetNewStreamingRequestId(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBase24GetNewStreamingRequestIdEv */
	bool MarkStreamingRequestAbandonedIfNeeded(class CTextureManagerBase *, HRenderTexture, int32); /* linkage=_ZN19CTextureManagerBase37MarkStreamingRequestAbandonedIfNeededE11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	void AbandonOutstandingStreamingRequestOnTextureDeletion(class CTextureManagerBase *, class CTextureBase *); /* linkage=_ZN19CTextureManagerBase51AbandonOutstandingStreamingRequestOnTextureDeletionEP12CTextureBase */
	void DeleteQueuedTextureIds(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBase22DeleteQueuedTextureIdsEv */
	class CTextureInfoId AllocTextureId(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBase14AllocTextureIdEv */
	class CTextureInfoId NextValidTextureId(const class CTextureManagerBase  *, class CTextureInfoId); /* linkage=_ZNK19CTextureManagerBase18NextValidTextureIdE14CTextureInfoId */
	void RemoveTextureFromAnyQueues(class CTextureManagerBase *, class CTextureBase *); /* linkage=_ZN19CTextureManagerBase26RemoveTextureFromAnyQueuesEP12CTextureBase */
	void RemoveTextureFromHookupQueues(class CTextureManagerBase *, class CTextureBase *); /* linkage=_ZN19CTextureManagerBase29RemoveTextureFromHookupQueuesEP12CTextureBase */
	void RemoveTextureFromCacheRequests(class CTextureManagerBase *, class CTextureBase *); /* linkage=_ZN19CTextureManagerBase30RemoveTextureFromCacheRequestsEP12CTextureBase */
	void RemoveTextureFromUncacheRequests(class CTextureManagerBase *, class CTextureBase *); /* linkage=_ZN19CTextureManagerBase32RemoveTextureFromUncacheRequestsEP12CTextureBase */
	bool DeferTextureLoads(const class CTextureManagerBase  *); /* linkage=_ZNK19CTextureManagerBase17DeferTextureLoadsEv */
	/* <34790a> rendersystem/texturebase.cpp:1803 */
	bool CheckForDeferedTextureLoad(class CTextureManagerBase *, const class CTextureBase  *); /* linkage=_ZN19CTextureManagerBase26CheckForDeferedTextureLoadEPK12CTextureBase */
	/* <349697> rendersystem/texturebase.cpp:1011 */
	void InitErrorTexture(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBase16InitErrorTextureEv */
	void InitFallbackTextures(class CTextureManagerBase *); /* linkage=_ZN19CTextureManagerBase20InitFallbackTexturesEv */
	void EvictAllTexturesConCommand(class CTextureManagerBase *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN19CTextureManagerBase26EvictAllTexturesConCommandERK15CCommandContextRK8CCommand */
	void ListAllTexturesConCommand(class CTextureManagerBase *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN19CTextureManagerBase25ListAllTexturesConCommandERK15CCommandContextRK8CCommand */
} __attribute__((__aligned__(8)));

// <003438EA> rendersystem/texturebase.h:582
void CTextureManagerBase::NeedsFrameUpdate()
{
} /* size: 10 */

// <003438BC> rendersystem/texturebase.h:589
void CTextureManagerBase::MemoryMappedFileDataIsAcceptable()
{
} /* size: 10 */

// <00343807> rendersystem/texturebase.h:613
// variables: 2
void CTextureManagerBase::HookupFallbackTextureAndQueueTextureBitsCopy(CTextureBase* pTextureBase, void* pFallbackTexture)
{
	const char   __FUNCTION__; // 56541
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 614
	}
} /* size: 36, variables: 1 */

// <003268A0> rendersystem/texturebase.h:613
// variables: 2
void CTextureManagerBase::HookupFallbackTextureAndQueueTextureBitsCopy(CTextureBase* pTextureBase, void* pFallbackTexture)
{
	const char   __FUNCTION__; // 39075
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 614
	}
} /* size: 36, variables: 1 */

// <003A3F79> rendersystem/texturebase.h:634
// variables: 2
void CTextureManagerBase::RemoveMipLevels(CTextureBase* pTexture, CRenderContextBase* pRenderContext, int nMipLevelsToRemove)
{
	const char   __FUNCTION__; // 45842
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 634
	}
} /* size: 0, variables: 1 */

// <0034373D> rendersystem/texturebase.h:634
// variables: 2
void CTextureManagerBase::RemoveMipLevels(CTextureBase* pTexture, CRenderContextBase* pRenderContext, int nMipLevelsToRemove)
{
	const char   __FUNCTION__; // 55803
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 634
	}
} /* size: 38, variables: 1 */

// <003267D6> rendersystem/texturebase.h:634
// variables: 2
void CTextureManagerBase::RemoveMipLevels(CTextureBase* pTexture, CRenderContextBase* pRenderContext, int nMipLevelsToRemove)
{
	const char   __FUNCTION__; // 38337
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 634
	}
} /* size: 38, variables: 1 */

// <00346576> rendersystem/texturebase.h:635
void CTextureManagerBase::RemoveTextureFromStreamableList(const CTextureBase* pTexture)
{
} /* size: 5 */

// <00343717> rendersystem/texturebase.h:635
inline void CTextureManagerBase::RemoveTextureFromStreamableList(const CTextureBase* pTexture)
{
} /* size: 0 */

// <003436FE> rendersystem/texturebase.h:698
inline void CTextureManagerBase::GetTextureManagerRWLock()
{
} /* size: 0 */

// <001EE487> rendersystem/texturebase.h:699
inline void CTextureManagerBase::GetCurrentTextureMemorySize()
{
} /* size: 0 */

// <001A9025> rendersystem/texturebase.h:700
inline void CTextureManagerBase::GetTextureMemoryLimit()
{
} /* size: 0 */

// <001A900C> rendersystem/texturebase.h:701
inline void CTextureManagerBase::GetCurrentTextureCount()
{
} /* size: 0 */

// <003A3F60> rendersystem/texturebase.h:702
inline void CTextureManagerBase::GetCurrentNonEvictableTextureMemorySize()
{
} /* size: 0 */

// <001A8FDA> rendersystem/texturebase.h:705
inline void CTextureManagerBase::GetTotalTextureCount()
{
} /* size: 0 */

// <001A8FC1> rendersystem/texturebase.h:707
inline void CTextureManagerBase::GetEvictedTextureCount()
{
} /* size: 0 */

// <003436D8> rendersystem/texturebase.h:709
inline void CTextureManagerBase::GetErrorTexture(RenderTextureDimension_t nDim)
{
} /* size: 0 */

// <003A3F47> rendersystem/texturebase.h:711
inline void CTextureManagerBase::GetMaxTextureRes()
{
} /* size: 0 */

// <003A3F2E> rendersystem/texturebase.h:712
inline void CTextureManagerBase::GetMaxPreloadTextureRes()
{
} /* size: 0 */

// <001A8F82> rendersystem/texturebase.h:719
inline void CTextureManagerBase::RequestGPUProfilerTextureList()
{
} /* size: 0 */

// <003A3F08> rendersystem/texturebase.h:720
inline void CTextureManagerBase::UnThrottleTextureStreamingForNFrames(uint32 nNumberOfFramesForUnthrottledTextureLoading)
{
} /* size: 0 */

// <003A3EEF> rendersystem/texturebase.h:724
inline void CTextureManagerBase::IsTextureStreamingUnThrottled()
{
} /* size: 0 */

// <001A8F1A> rendersystem/texturebase.h:727
// variables: 2
inline void CTextureManagerBase::GetNumTextureLoadsInFlight()
{
	const char   __FUNCTION__; // 2923
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 727
	}
} /* size: 0, variables: 1 */

// <001A42B2> rendersystem/texturebase.h:727
// variables: 2
inline void CTextureManagerBase::GetNumTextureLoadsInFlight()
{
	const char   __FUNCTION__; // 32298
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 727
	}
} /* size: 0, variables: 1 */

// <001A8EE7> rendersystem/texturebase.h:731
// variable: 1
inline void CTextureManagerBase::PinTextureInGPUMemory(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 733
} /* size: 0, variables: 1 */

// <001A8EB4> rendersystem/texturebase.h:740
// variable: 1
inline void CTextureManagerBase::UnpinTextureInGPUMemory(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 742
} /* size: 0, variables: 1 */

// <001A8E81> rendersystem/texturebase.h:749
// variable: 1
inline void CTextureManagerBase::GetTexturePinCount(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 751
} /* size: 0, variables: 1 */

// <003A3ED6> rendersystem/texturebase.h:769
inline void CTextureManagerBase::GetMinStreaminingMemoryPoolSizeMB()
{
} /* size: 0 */

// <003A0669> rendersystem/texturebase.h:785
void CacheRequest_t::CacheRequest_t(const CacheRequest_t &)
{
} /* size: 0 */

// <003A0646> rendersystem/texturebase.h:785
inline void CacheRequest_t::CacheRequest_t(const CacheRequest_t &)
{
} /* size: 0 */

// <0032A1D5> rendersystem/texturebase.h:785
void CacheRequest_t::CacheRequest_t()
{
} /* size: 0 */

// <0032A1B8> rendersystem/texturebase.h:785
inline void CacheRequest_t::CacheRequest_t()
{
} /* size: 0 */

// <0031A54D> rendersystem/texturebase.h:791
void ToCacheHandle_t::ToCacheHandle_t()
{
} /* size: 0 */

// <0031A530> rendersystem/texturebase.h:791
inline void ToCacheHandle_t::ToCacheHandle_t()
{
} /* size: 0 */

// <00301E8A> rendersystem/texturebase.h:791
void ToCacheHandle_t::ToCacheHandle_t(const ToCacheHandle_t &)
{
} /* size: 0 */

// <00301E68> rendersystem/texturebase.h:791
inline void ToCacheHandle_t::ToCacheHandle_t(const ToCacheHandle_t &)
{
} /* size: 0 */

// <002FB95C> rendersystem/texturebase.h:791
inline void ToCacheHandle_t::ToCacheHandle_t(ToCacheHandle_t &)
{
} /* size: 0 */

// <002FB93A> rendersystem/texturebase.h:791
inline void ToCacheHandle_t::operator=(ToCacheHandle_t &)
{
} /* size: 0 */

// <00343667> rendersystem/texturebase.h:800
inline void ToCacheHandle_t::operator==(const ToCacheHandle_t& src)
{
} /* size: 0 */

// <00335AFB> rendersystem/texturebase.h:803
void AsyncTextureHookupData_t::AsyncTextureHookupData_t()
{
} /* size: 0 */

// <00335ADE> rendersystem/texturebase.h:803
inline void AsyncTextureHookupData_t::AsyncTextureHookupData_t()
{
} /* size: 0 */

// <00335AC7> rendersystem/texturebase.h:803
void AsyncTextureHookupData_t::~AsyncTextureHookupData_t()
{
} /* size: 0 */

// <00335AAA> rendersystem/texturebase.h:803
inline void AsyncTextureHookupData_t::~AsyncTextureHookupData_t()
{
} /* size: 0 */

// <00326DBB> rendersystem/texturebase.h:803
void AsyncTextureHookupData_t::AsyncTextureHookupData_t(const AsyncTextureHookupData_t &)
{
} /* size: 0 */

// <00326D99> rendersystem/texturebase.h:803
inline void AsyncTextureHookupData_t::AsyncTextureHookupData_t(const AsyncTextureHookupData_t &)
{
} /* size: 0 */

// <0034364E> rendersystem/texturebase.h:866
inline void CTextureManagerBase::DeferTextureLoads()
{
} /* size: 0 */

// <00343637> rendersystem/texturebase.h:872
void CCommandMemberInitializer_EvictAllTexturesConCommand::CCommandMemberInitializer_EvictAllTexturesConCommand()
{
} /* size: 0 */

// <0034361E> rendersystem/texturebase.h:872
inline void CCommandMemberInitializer_EvictAllTexturesConCommand::CCommandMemberInitializer_EvictAllTexturesConCommand()
{
} /* size: 0 */

// <0033CE30> rendersystem/texturebase.h:872
void CCommandMemberInitializer_EvictAllTexturesConCommand::~CCommandMemberInitializer_EvictAllTexturesConCommand()
{
} /* size: 0 */

// <0033CE13> rendersystem/texturebase.h:872
inline void CCommandMemberInitializer_EvictAllTexturesConCommand::~CCommandMemberInitializer_EvictAllTexturesConCommand()
{
} /* size: 0 */

// <00343607> rendersystem/texturebase.h:873
void CCommandMemberInitializer_ListAllTexturesConCommand::CCommandMemberInitializer_ListAllTexturesConCommand()
{
} /* size: 0 */

// <003435EE> rendersystem/texturebase.h:873
inline void CCommandMemberInitializer_ListAllTexturesConCommand::CCommandMemberInitializer_ListAllTexturesConCommand()
{
} /* size: 0 */

// <0033CDFC> rendersystem/texturebase.h:873
void CCommandMemberInitializer_ListAllTexturesConCommand::~CCommandMemberInitializer_ListAllTexturesConCommand()
{
} /* size: 0 */

// <0033CDDF> rendersystem/texturebase.h:873
inline void CCommandMemberInitializer_ListAllTexturesConCommand::~CCommandMemberInitializer_ListAllTexturesConCommand()
{
} /* size: 0 */

// <001A8E5B> rendersystem/texturebase.h:978
inline void CTextureManagerBase::SetForcePreloadStreamingData(bool bForcePreloadStreamingData)
{
} /* size: 0 */

// <003A3EB1> rendersystem/texturebase.h:984
inline size_t ComputeTextureSizeInBytes(const TextureSpecification_t& texSpec)
{
} /* size: 0 */

// <001A8E42> rendersystem/texturebase.h:989
inline void CTextureManagerBase::UpdateUnthrottleTextureStreamingFrameCount()
{
} /* size: 0 */

// <003A3E88> rendersystem/texturebase.h:1005
inline void CTextureInfoId::SetFlags(uint16 nFlagsToSet)
{
} /* size: 0 */

// <003A3E5F> rendersystem/texturebase.h:1010
inline void CTextureInfoId::ClearFlags(uint16 nFlagsToClear)
{
} /* size: 0 */

// <003A3E36> rendersystem/texturebase.h:1015
inline void CTextureInfoId::HasAnyFlags(uint16 nFlagsToTest)
{
} /* size: 0 */

// <003A3E0D> rendersystem/texturebase.h:1025
inline void CTextureInfoId::SetLastBindFrame(uint32 nLastBindFrame)
{
} /* size: 0 */

// <0034352E> rendersystem/texturebase.h:1030
inline void CTextureInfoId::GetLastBindFrame()
{
} /* size: 0 */

// <00343505> rendersystem/texturebase.h:1035
inline void CTextureInfoId::SetLastAsyncUpdateFrame(uint32 nLastAsyncUpdateFrame)
{
} /* size: 0 */

// <003434E9> rendersystem/texturebase.h:1040
inline void CTextureInfoId::GetLastAsyncUpdateFrame()
{
} /* size: 0 */

// <003434B3> rendersystem/texturebase.h:1050
// variable: 1
inline void CTextureInfoId::MarkUsed(int nRequestedTextureSize)
{
	CTextureInfoChunkBase* pChunk; // 1052
} /* size: 0, variables: 1 */

// <003A3DD7> rendersystem/texturebase.h:1068
inline void CTextureInfoId::Init(int nChunkIdx, int nInChunkIdx)
{
} /* size: 0 */

// <001A8DE1> rendersystem/texturebase.h:1076
inline void CTextureInfoId::IncrementPinCount()
{
} /* size: 0 */

// <001A8DC5> rendersystem/texturebase.h:1081
inline void CTextureInfoId::DecrementPinCount()
{
} /* size: 0 */

// <00343461> rendersystem/texturebase.h:1086
inline void CTextureInfoId::GetPinCount()
{
} /* size: 0 */

// <00343418> rendersystem/texturebase.h:1091
// variables: 2
inline void CTextureInfoId::SetPinCount(int32 nCount)
{
	const char   __FUNCTION__; // 55695
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1093
	}
} /* size: 0, variables: 1 */

// <003264B1> rendersystem/texturebase.h:1091
// variables: 2
inline void CTextureInfoId::SetPinCount(int32 nCount)
{
	const char   __FUNCTION__; // 38229
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1093
	}
} /* size: 0, variables: 1 */

// <003A3DBB> rendersystem/texturebase.h:1097
inline void CTextureInfoId::GetSpec()
{
} /* size: 0 */

// <003A3D9F> rendersystem/texturebase.h:1117
inline void CTextureInfoId::GetDiskSpec()
{
} /* size: 0 */

// <003433A8> rendersystem/texturebase.h:1122
// variable: 1
inline void CTextureInfoId::SetDiskSpec(const TextureSpecification_t* pSpec)
{
	{
		bool bSupportsPerMipstreaming; // 1127
	}
} /* size: 0 */

// <00343387> rendersystem/texturebase.h:1148
inline void* CTextureInfoId::GetTextureObject()
{
} /* size: 0 */

// <003A3D83> rendersystem/texturebase.h:1158
inline void CTextureInfoId::GetLegacyTexture()
{
} /* size: 0 */

// <003A3D67> rendersystem/texturebase.h:1163
inline void CTextureInfoId::GetStreamingBitsOffset()
{
} /* size: 0 */

// <003432FC> rendersystem/texturebase.h:1168
// variables: 2
inline void CTextureInfoId::SetStreamingBitsOffset(int64 nOffset)
{
	const char   __FUNCTION__; // 55992
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1170
	}
} /* size: 0, variables: 1 */

// <00326395> rendersystem/texturebase.h:1168
// variables: 2
inline void CTextureInfoId::SetStreamingBitsOffset(int64 nOffset)
{
	const char   __FUNCTION__; // 38526
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1170
	}
} /* size: 0, variables: 1 */

// <003432E0> rendersystem/texturebase.h:1174
inline void CTextureInfoId::GetSheet()
{
} /* size: 0 */

// <003432B7> rendersystem/texturebase.h:1179
inline void CTextureInfoId::SetSheet(Sheet_t* pSheet)
{
} /* size: 0 */

// <0034329B> rendersystem/texturebase.h:1188
inline void CTextureInfoId::GetAverageColor()
{
} /* size: 0 */

// <00343274> rendersystem/texturebase.h:1193
inline void CTextureInfoId::SetAverageColor(Vector c)
{
} /* size: 0 */

// <003A3D4B> rendersystem/texturebase.h:1198
inline void CTextureInfoId::GetResourceHandle()
{
} /* size: 0 */

// <0034322F> rendersystem/texturebase.h:1203
inline void CTextureInfoId::SetResourceHandle(HRenderTexture hTex)
{
} /* size: 0 */

// <003A3D06> rendersystem/texturebase.h:1213
inline void CTextureInfoId::SetPendingStreamingRequestId(int32 nId)
{
} /* size: 0 */

// <003431CE> rendersystem/texturebase.h:1218
inline void CTextureInfoId::GetFallbackTextureBitsPtr()
{
} /* size: 0 */

// <003431B2> rendersystem/texturebase.h:1223
inline void CTextureInfoId::IsStandinTexture()
{
} /* size: 0 */

// <00343189> rendersystem/texturebase.h:1248
inline void CTextureInfoId::SetTextureStreamingPriority(RenderTextureStreamingPriority_t ePriority)
{
} /* size: 0 */

// <003A3CEA> rendersystem/texturebase.h:1253
inline void CTextureInfoId::GetTextureStreamingPriority()
{
} /* size: 0 */

// <003A3CCE> rendersystem/texturebase.h:1258
inline void CTextureInfoId::IsOutOfBounds()
{
} /* size: 0 */

// <003A3CA5> rendersystem/texturebase.h:1263
inline void CTextureInfoChunkBase::IsStandinTexture(int nTexIdx)
{
} /* size: 0 */

// <003A3C7C> rendersystem/texturebase.h:1273
inline void CTextureInfoChunkBase::SupportsPerMipStreaming(int nTexIdx)
{
} /* size: 0 */

// <003A3C46> rendersystem/texturebase.h:1278
// variable: 1
inline void CTextureInfoChunkBase::GetMaxLoadedMipLevels(int nTexIdx)
{
	int nMaxLoadededMips; // 1280
} /* size: 0, variables: 1 */

// <003A3BDC> rendersystem/texturebase.h:1284
// variables: 2
inline void CTextureInfoChunkBase::ComputeSize(int nTexIdx, int nWidth, int nHeight, int nNumMipLevels)
{
	const TextureSpecification_t* pDiskSpec; // 1287
	size_t nSize; // 1288
} /* size: 0, variables: 2 */

// <003A5719> rendersystem/texturebase.h:1293
// variables: 2
// function calls: 13
void CTextureInfoChunkBase::ComputeCurrentlyResidentSize(int nTexIdx)
{
	const int  nMaxLoadedMipLevels; // 1305
	size_t nSize; // 1314
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
} /* size: 394, variables: 2, inline expansions: 13 (310 bytes) */

// <003A3B99> rendersystem/texturebase.h:1293
// variables: 2
inline void CTextureInfoChunkBase::ComputeCurrentlyResidentSize(int nTexIdx)
{
	const int  nMaxLoadedMipLevels; // 1305
	size_t nSize; // 1314
} /* size: 0, variables: 2 */

