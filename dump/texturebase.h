
//
// ./texturebase.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 66
//	classes: 2
//	structs: 2
//

// <00C4F635> ./texturebase.h:38
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
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 434
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 38
} /* size: 0, inline expansions: 56 (0 bytes) */

// <00C4F613> ./texturebase.h:38
inline void TextureSpecification_t::TextureSpecification_t(const TextureSpecification_t &)
{
} /* size: 0 */

// <00B8B54D> ./texturebase.h:38
void TextureSpecification_t::TextureSpecification_t(const TextureSpecification_t &)
{
} /* size: 0 */

// <00A56A17> ./texturebase.h:38
// function calls: 49
void TextureSpecification_t::TextureSpecification_t(const TextureSpecification_t &)
{
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 147
	CTextureDesc::CTextureDesc(
			const CTextureDesc& rhs);  // 38
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
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 434
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 38
} /* size: 0, inline expansions: 49 (0 bytes) */

// <00405803> ./texturebase.h:38
// member functions: 14
// member variables: 7
// struct size: 104
struct TextureSpecification_t : public CTextureDesc {
public:
	/* class CTextureDesc <ancestor>; */ /* 0 28 */
	/* ./texturebase.h:42 */
	void TextureSpecification_t(TextureSpecification_t* );
	/* ./texturebase.h:50 */
	void ~TextureSpecification_t(TextureSpecification_t* );
	/* ./texturebase.h:54 */
	void TextureSpecification_t(TextureSpecification_t* , const TextureSpecification_t* );
	/* ./texturebase.h:61 */
	TextureSpecification_t& operator=(TextureSpecification_t* , const TextureSpecification_t& );
	/* ./texturebase.h:74 */
	void InitFromSpec(TextureSpecification_t* , const CTextureCreationDesc* );
	/* ./texturebase.h:86 */
	void SetCompressedMipSizes(TextureSpecification_t* , CompressedMipFormat, int32, const uint32* );
	/* ./texturebase.h:93 */
	bool HasCompressedMips(const TextureSpecification_t* );
	/* ./texturebase.h:98 */
	bool IsMipCompressed(const TextureSpecification_t* , int);
	/* ./texturebase.h:108 */
	uint GetCompressedMipSize(const TextureSpecification_t* , int);
	/* ./texturebase.h:124 */
	uint GetUncompressedMipSize(const TextureSpecification_t* , uint);
	/* ./texturebase.h:132 */
	uint GetStreamingBitsByteCount(const TextureSpecification_t* );
	/* ./texturebase.h:153 */
	uint GetGpuMemorySizeInBytes(const TextureSpecification_t* );
	/* ./texturebase.h:159 */
	RenderTextureDimension_t ComputeTextureDimension(const TextureSpecification_t* );
	/* ./texturebase.h:184 */
	bool IsValid(const TextureSpecification_t* );
	TextureOnDiskCompressionType_t m_compressionType; /* 28 4 */
	RenderMultisampleType_t m_nMultisampleType; /* 32 4 */
	uint8 m_nFallbacktextureIndex; /* 36 1 */
	CompressedMipFormat m_compressedMipFormat; /* 37 1 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_CompressedMipSizes; /* 40 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_CubemapRadianceSH; /* 72 32 */
};

// <0092CFBC> ./texturebase.h:38
// member functions: 15
// member variables: 7
// struct size: 104
struct TextureSpecification_t : public CTextureDesc {
public:
	/* class CTextureDesc <ancestor>; */ /* 0 28 */
	/* ./texturebase.h:42 */
	void TextureSpecification_t(TextureSpecification_t* );
	/* ./texturebase.h:50 */
	void ~TextureSpecification_t(TextureSpecification_t* );
	/* ./texturebase.h:54 */
	void TextureSpecification_t(TextureSpecification_t* , const TextureSpecification_t* );
	/* ./texturebase.h:61 */
	TextureSpecification_t& operator=(TextureSpecification_t* , const TextureSpecification_t& );
	/* ./texturebase.h:74 */
	void InitFromSpec(TextureSpecification_t* , const CTextureCreationDesc* );
	/* ./texturebase.h:86 */
	void SetCompressedMipSizes(TextureSpecification_t* , CompressedMipFormat, int32, const uint32* );
	/* ./texturebase.h:93 */
	bool HasCompressedMips(const TextureSpecification_t* );
	/* ./texturebase.h:98 */
	bool IsMipCompressed(const TextureSpecification_t* , int);
	/* ./texturebase.h:108 */
	uint GetCompressedMipSize(const TextureSpecification_t* , int);
	/* ./texturebase.h:124 */
	uint GetUncompressedMipSize(const TextureSpecification_t* , uint);
	/* ./texturebase.h:132 */
	uint GetStreamingBitsByteCount(const TextureSpecification_t* );
	/* ./texturebase.h:153 */
	uint GetGpuMemorySizeInBytes(const TextureSpecification_t* );
	/* ./texturebase.h:159 */
	RenderTextureDimension_t ComputeTextureDimension(const TextureSpecification_t* );
	/* ./texturebase.h:184 */
	bool IsValid(const TextureSpecification_t* );
	TextureOnDiskCompressionType_t m_compressionType; /* 28 4 */
	RenderMultisampleType_t m_nMultisampleType; /* 32 4 */
	uint8 m_nFallbacktextureIndex; /* 36 1 */
	CompressedMipFormat m_compressedMipFormat; /* 37 1 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_CompressedMipSizes; /* 40 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_CubemapRadianceSH; /* 72 32 */
	void TextureSpecification_t(TextureSpecification_t* , const TextureSpecification_t& );
};

// <00C50C3D> ./texturebase.h:42
void TextureSpecification_t::TextureSpecification_t()
{
} /* size: 0 */

// <00C50C24> ./texturebase.h:42
inline void TextureSpecification_t::TextureSpecification_t()
{
} /* size: 0 */

// <00C50C0D> ./texturebase.h:50
void TextureSpecification_t::~TextureSpecification_t()
{
} /* size: 0 */

// <00C50BF4> ./texturebase.h:50
inline void TextureSpecification_t::~TextureSpecification_t()
{
} /* size: 0 */

// <00C58921> ./texturebase.h:61
// function calls: 53
void TextureSpecification_t::operator=(const TextureSpecification_t& rhs)
{
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
} /* size: 448, inline expansions: 53 (2183 bytes) */

// <00C50BCF> ./texturebase.h:61
inline void TextureSpecification_t::operator=(const TextureSpecification_t& rhs)
{
} /* size: 0 */

// <00C50B7D> ./texturebase.h:159
inline void TextureSpecification_t::ComputeTextureDimension()
{
} /* size: 0 */

// <00C4C0BB> ./texturebase.h:236
void TextureObjectInfo_t::TextureObjectInfo_t()
{
} /* size: 0 */

// <00C4C09E> ./texturebase.h:236
inline void TextureObjectInfo_t::TextureObjectInfo_t()
{
} /* size: 0 */

// <00C4C087> ./texturebase.h:236
void TextureObjectInfo_t::~TextureObjectInfo_t()
{
} /* size: 0 */

// <00C4C06A> ./texturebase.h:236
inline void TextureObjectInfo_t::~TextureObjectInfo_t()
{
} /* size: 0 */

// <0043F098> ./texturebase.h:260
// member functions: 108
// member variable: 1
// class size: 4
class CTextureInfoId {
	/* ./texturebase.h:264 */
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
	/* ./texturebase.h:273 */
	bool operator==(const CTextureInfoId* , const CTextureInfoId& );
	/* ./texturebase.h:278 */
	bool operator!=(const CTextureInfoId* , const CTextureInfoId& );
	/* ./texturebase.h:283 */
	void Init(CTextureInfoId* , int, int);
	/* ./texturebase.h:285 */
	void SetFlags(CTextureInfoId* , uint16);
	/* ./texturebase.h:286 */
	void ClearFlags(CTextureInfoId* , uint16);
	/* ./texturebase.h:287 */
	bool HasAnyFlags(const CTextureInfoId* , uint16);
	/* ./texturebase.h:288 */
	bool HasAllFlags(const CTextureInfoId* , uint16);
	/* ./texturebase.h:289 */
	void SetLastBindFrame(CTextureInfoId* , uint32);
	/* ./texturebase.h:290 */
	uint32 GetLastBindFrame(const CTextureInfoId* );
	/* ./texturebase.h:291 */
	void SetLastAsyncUpdateFrame(CTextureInfoId* , uint32);
	/* ./texturebase.h:292 */
	uint32 GetLastAsyncUpdateFrame(const CTextureInfoId* );
	/* ./texturebase.h:293 */
	float32& DecayingMaxRequestedSize(CTextureInfoId* );
	/* ./texturebase.h:294 */
	void MarkUsed(CTextureInfoId* , int);
	/* ./texturebase.h:295 */
	int32 GetMaxRequestedSize(const CTextureInfoId* );
	/* ./texturebase.h:296 */
	void IncrementPinCount(CTextureInfoId* );
	/* ./texturebase.h:297 */
	void DecrementPinCount(CTextureInfoId* );
	/* ./texturebase.h:298 */
	int32 GetPinCount(const CTextureInfoId* );
	/* ./texturebase.h:299 */
	void SetPinCount(CTextureInfoId* , int32);
	/* ./texturebase.h:300 */
	const TextureSpecification_t* GetSpec(const CTextureInfoId* );
	/* ./texturebase.h:301 */
	void SetSpec(CTextureInfoId* , const TextureSpecification_t* );
	/* ./texturebase.h:302 */
	const TextureSpecification_t* GetDiskSpec(const CTextureInfoId* );
	/* ./texturebase.h:303 */
	void SetDiskSpec(CTextureInfoId* , const TextureSpecification_t* );
	/* ./texturebase.h:304 */
	void* GetTextureObject(const CTextureInfoId* );
	/* ./texturebase.h:305 */
	void SetTextureObject(CTextureInfoId* , void* );
	/* ./texturebase.h:306 */
	bool IsD3DSurface(const CTextureInfoId* );
	/* ./texturebase.h:307 */
	void SetD3DSurface(CTextureInfoId* , bool);
	/* ./texturebase.h:308 */
	uint16 GetRenderTargetIndex(const CTextureInfoId* );
	/* ./texturebase.h:309 */
	void SetRenderTargetIndex(CTextureInfoId* , uint16);
	/* ./texturebase.h:310 */
	bool IsLockable(const CTextureInfoId* );
	/* ./texturebase.h:311 */
	void SetLockable(CTextureInfoId* , bool);
	/* ./texturebase.h:312 */
	bool IsManaged(const CTextureInfoId* );
	/* ./texturebase.h:313 */
	void SetManaged(CTextureInfoId* , bool);
	/* ./texturebase.h:314 */
	CTextureBase* GetLegacyTexture(const CTextureInfoId* );
	/* ./texturebase.h:315 */
	int64 GetStreamingBitsOffset(const CTextureInfoId* );
	/* ./texturebase.h:316 */
	void SetStreamingBitsOffset(CTextureInfoId* , int64);
	/* ./texturebase.h:317 */
	Sheet_t* GetSheet(const CTextureInfoId* );
	/* ./texturebase.h:318 */
	void SetSheet(CTextureInfoId* , Sheet_t* );
	/* ./texturebase.h:319 */
	Vector GetAverageColor(const CTextureInfoId* );
	/* ./texturebase.h:320 */
	void SetAverageColor(CTextureInfoId* , Vector);
	/* ./texturebase.h:321 */
	HRenderTexture GetResourceHandle(const CTextureInfoId* );
	/* ./texturebase.h:322 */
	void SetResourceHandle(CTextureInfoId* , HRenderTexture);
	/* ./texturebase.h:323 */
	int32 GetPendingStreamingRequestId(const CTextureInfoId* );
	/* ./texturebase.h:324 */
	void SetPendingStreamingRequestId(CTextureInfoId* , int32);
	/* ./texturebase.h:325 */
	uint8* GetFallbackTextureBitsPtr(CTextureInfoId* );
	/* ./texturebase.h:326 */
	bool IsStandinTexture(const CTextureInfoId* );
	/* ./texturebase.h:327 */
	bool IsExternalTexture(const CTextureInfoId* );
	/* ./texturebase.h:328 */
	void* GetFallbackTexturePtr(const CTextureInfoId* );
	/* ./texturebase.h:329 */
	void SetFallbackTexturePtr(CTextureInfoId* , void* );
	/* ./texturebase.h:330 */
	bool SetFallbackTexturePtrIf(CTextureInfoId* , void* , void* );
	/* ./texturebase.h:331 */
	void SetTextureStreamingPriority(CTextureInfoId* , RenderTextureStreamingPriority_t);
	/* ./texturebase.h:332 */
	RenderTextureStreamingPriority_t GetTextureStreamingPriority(const CTextureInfoId* );
	/* ./texturebase.h:334 */
	CTextureInfoId NextValidTexture(const CTextureInfoId* );
	/* ./texturebase.h:335 */
	bool IsOutOfBounds(const CTextureInfoId* );
	/* ./texturebase.h:337 */
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

// <0044DFF0> ./texturebase.h:273
inline void CTextureInfoId::operator==(const CTextureInfoId& other)
{
} /* size: 0 */

// <0044DFCA> ./texturebase.h:278
inline void CTextureInfoId::operator!=(const CTextureInfoId& other)
{
} /* size: 0 */

// <00C23868> ./texturebase.h:357
void CTextureBase::CTextureBase()
{
} /* size: 0 */

// <00C238A2> ./texturebase.h:358
void CTextureBase::~CTextureBase()
{
} /* size: 0 */

// <00C50B64> ./texturebase.h:385
inline void CTextureBase::UniqueIndex()
{
} /* size: 0 */

// <00C50B4B> ./texturebase.h:388
inline void CTextureBase::GetDiskSpec()
{
} /* size: 0 */

// <00C50B32> ./texturebase.h:403
inline void CTextureBase::GetSpec()
{
} /* size: 0 */

// <00C50B0C> ./texturebase.h:404
// variable: 1
inline void CTextureBase::GetMaxLoadedMipLevels()
{
	int nMaxLoadededMips; // 406
} /* size: 0, variables: 1 */

// <00C50AC6> ./texturebase.h:414
// variables: 2
void CTextureBase::SpinWaitForFallbackTextureHookup(RenderColorSpace_t colorSpace)
{
	const char   __FUNCTION__; // 25247
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 415
	}
} /* size: 0, variables: 1 */

// <00419BFB> ./texturebase.h:414
// variables: 2
void CTextureBase::SpinWaitForFallbackTextureHookup(RenderColorSpace_t colorSpace)
{
	const char   __FUNCTION__; // 59049
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 415
	}
} /* size: 36, variables: 1 */

// <00419BBD> ./texturebase.h:439
void CTextureBase::FreeGPUResources(CRenderContextBase* pRenderContext)
{
} /* size: 5 */

// <00C50AAD> ./texturebase.h:476
inline void CTextureBase::GetTextureHandle()
{
} /* size: 0 */

// <00C50A94> ./texturebase.h:481
inline void CTextureBase::ComputeTextureDimension()
{
} /* size: 0 */

// <00C50A7B> ./texturebase.h:486
inline void CTextureBase::IsStandinTexture()
{
} /* size: 0 */

// <00C056E6> ./texturebase.h:512
// member functions: 28
// member variables: 18
// class size: 336,128
class CTextureInfoChunkBase {
	/* ./texturebase.h:515 */
	void CTextureInfoChunkBase(CTextureInfoChunkBase* );
	/* ./texturebase.h:516 */
	void ~CTextureInfoChunkBase(CTextureInfoChunkBase* );
	/* ./texturebase.h:518 */
	void SwapSlots(CTextureInfoChunkBase* , int, CTextureInfoChunkBase* , int);
	/* ./texturebase.h:522 */
	void ClearSlot(CTextureInfoChunkBase* , int);
	/* ./texturebase.h:523 */
	bool IsStandinTexture(const CTextureInfoChunkBase* , int);
	/* ./texturebase.h:524 */
	bool IsExternalTexture(const CTextureInfoChunkBase* , int);
	/* ./texturebase.h:525 */
	bool SupportsPerMipStreaming(const CTextureInfoChunkBase* , int);
	/* ./texturebase.h:526 */
	size_t ComputeCurrentlyResidentSize(const CTextureInfoChunkBase* , int);
	/* ./texturebase.h:527 */
	int GetMaxLoadedMipLevels(const CTextureInfoChunkBase* , int);
	/* ./texturebase.h:528 */
	size_t ComputeSize(const CTextureInfoChunkBase* , int, int, int, int);
	/* ./texturebase.h:530 */
	void SetFlags(CTextureInfoChunkBase* , int, uint16);
	/* ./texturebase.h:531 */
	void ClearFlags(CTextureInfoChunkBase* , int, uint16);
	/* ./texturebase.h:532 */
	bool HasAnyFlags(const CTextureInfoChunkBase* , int, uint16);
	/* ./texturebase.h:533 */
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

// <00C50A48> ./texturebase.h:530
inline void CTextureInfoChunkBase::SetFlags(int nTexId, uint16 nFlagsToSet)
{
} /* size: 0 */

// <00C50A15> ./texturebase.h:531
inline void CTextureInfoChunkBase::ClearFlags(int nTexId, uint16 nFlagsToClear)
{
} /* size: 0 */

// <00C509E2> ./texturebase.h:532
inline void CTextureInfoChunkBase::HasAnyFlags(int nTexId, uint16 nFlagsToTest)
{
} /* size: 0 */

// <00C509AF> ./texturebase.h:533
inline void CTextureInfoChunkBase::HasAllFlags(int nTexId, uint16 nFlagsToTest)
{
} /* size: 0 */

// <00C50981> ./texturebase.h:582
void CTextureManagerBase::NeedsFrameUpdate()
{
} /* size: 10 */

// <00C50953> ./texturebase.h:589
void CTextureManagerBase::MemoryMappedFileDataIsAcceptable()
{
} /* size: 10 */

// <00C50900> ./texturebase.h:613
// variables: 2
void CTextureManagerBase::HookupFallbackTextureAndQueueTextureBitsCopy(CTextureBase* pTextureBase, void* pFallbackTexture)
{
	const char   __FUNCTION__; // 25521
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 614
	}
} /* size: 0, variables: 1 */

// <00419AAD> ./texturebase.h:613
// variables: 2
void CTextureManagerBase::HookupFallbackTextureAndQueueTextureBitsCopy(CTextureBase* pTextureBase, void* pFallbackTexture)
{
	const char   __FUNCTION__; // 59070
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 614
	}
} /* size: 36, variables: 1 */

// <004199E4> ./texturebase.h:634
// variables: 2
void CTextureManagerBase::RemoveMipLevels(CTextureBase* pTexture, CRenderContextBase* pRenderContext, int nMipLevelsToRemove)
{
	const char   __FUNCTION__; // 58986
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 634
	}
} /* size: 38, variables: 1 */

// <004199A6> ./texturebase.h:635
void CTextureManagerBase::RemoveTextureFromStreamableList(const CTextureBase* pTexture)
{
} /* size: 5 */

// <00C23517> ./texturebase.h:645
void CTextureManagerBase::CTextureManagerBase()
{
} /* size: 0 */

// <00C2343E> ./texturebase.h:646
void CTextureManagerBase::~CTextureManagerBase()
{
} /* size: 0 */

// <00C508E7> ./texturebase.h:698
inline void CTextureManagerBase::GetTextureManagerRWLock()
{
} /* size: 0 */

// <008CA201> ./texturebase.h:699
inline void CTextureManagerBase::GetCurrentTextureMemorySize()
{
} /* size: 0 */

// <00C508C1> ./texturebase.h:709
inline void CTextureManagerBase::GetErrorTexture(RenderTextureDimension_t nDim)
{
} /* size: 0 */

// <00C508A8> ./texturebase.h:711
inline void CTextureManagerBase::GetMaxTextureRes()
{
} /* size: 0 */

// <00C2EF64> ./texturebase.h:941
void ExternalTextureInfo_t::ExternalTextureInfo_t()
{
} /* size: 0 */

// <00C2EF47> ./texturebase.h:941
inline void ExternalTextureInfo_t::ExternalTextureInfo_t()
{
} /* size: 0 */

// <00C5087F> ./texturebase.h:1005
inline void CTextureInfoId::SetFlags(uint16 nFlagsToSet)
{
} /* size: 0 */

// <00C50856> ./texturebase.h:1010
inline void CTextureInfoId::ClearFlags(uint16 nFlagsToClear)
{
} /* size: 0 */

// <00C5082D> ./texturebase.h:1015
inline void CTextureInfoId::HasAnyFlags(uint16 nFlagsToTest)
{
} /* size: 0 */

// <00C50811> ./texturebase.h:1097
inline void CTextureInfoId::GetSpec()
{
} /* size: 0 */

// <00C507E8> ./texturebase.h:1102
inline void CTextureInfoId::SetSpec(const TextureSpecification_t* pSpec)
{
} /* size: 0 */

// <00C507CC> ./texturebase.h:1117
inline void CTextureInfoId::GetDiskSpec()
{
} /* size: 0 */

// <00C507AB> ./texturebase.h:1148
inline void* CTextureInfoId::GetTextureObject()
{
} /* size: 0 */

// <00C50782> ./texturebase.h:1153
inline void CTextureInfoId::SetTextureObject(void* pObj)
{
} /* size: 0 */

// <00C50766> ./texturebase.h:1158
inline void CTextureInfoId::GetLegacyTexture()
{
} /* size: 0 */

// <00C5074A> ./texturebase.h:1198
inline void CTextureInfoId::GetResourceHandle()
{
} /* size: 0 */

// <00C5072E> ./texturebase.h:1218
inline void CTextureInfoId::GetFallbackTextureBitsPtr()
{
} /* size: 0 */

// <00C50712> ./texturebase.h:1223
inline void CTextureInfoId::IsStandinTexture()
{
} /* size: 0 */

// <00C506F6> ./texturebase.h:1228
inline void CTextureInfoId::IsExternalTexture()
{
} /* size: 0 */

// <00C506D5> ./texturebase.h:1233
inline void* CTextureInfoId::GetFallbackTexturePtr()
{
} /* size: 0 */

// <00C506AC> ./texturebase.h:1238
inline void CTextureInfoId::SetFallbackTexturePtr(void* pNewValue)
{
} /* size: 0 */

// <00C50676> ./texturebase.h:1243
inline void CTextureInfoId::SetFallbackTexturePtrIf(void* pTestValue, void* pNewValue)
{
} /* size: 0 */

// <00A58D4D> ./texturebase.h:1258
inline void CTextureInfoId::IsOutOfBounds()
{
} /* size: 0 */

// <00C5064D> ./texturebase.h:1263
inline void CTextureInfoChunkBase::IsStandinTexture(int nTexIdx)
{
} /* size: 0 */

// <00C50624> ./texturebase.h:1268
inline void CTextureInfoChunkBase::IsExternalTexture(int nTexIdx)
{
} /* size: 0 */

