
//
// rendersystem/texturebase.cpp
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 195
//

// <003484EF> rendersystem/texturebase.cpp:60
// variable: 1
// function calls: 5
void TextureStreamMaxResolutionChanged(IConVar* pConVar, const char* pOldValue, float flOldValue)
{
	ConVarRef var; // 65
	ConVarRef::CheckAccess(); // 129
	ConVarRef::GetInt(); // 66
	ConVarRef::CheckAccess(); // 129
	ConVarRef::GetInt(); // 68
	TextureStreamMaxResolutionChanged(IConVar* pConVar,
						const char* pOldValue,
						float flOldValue);  // 60
} /* size: 164, variables: 1, inline expansions: 5 (144 bytes) */

// <00342995> rendersystem/texturebase.cpp:60
// variable: 1
void TextureStreamMaxResolutionChanged(IConVar* pConVar, const char* pOldValue, float flOldValue)
{
	ConVarRef var; // 65
} /* size: 0, variables: 1 */

// <00342834> rendersystem/texturebase.cpp:79
// variables: 4
// function calls: 2
bool AssertIsValidTextureSpec(const TextureSpecification_t& spec, const char* szContext)
{
	bool bValid; // 81
	const char   __FUNCTION__; // 56046
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 92
	}
	Max<short int>(const short int& val1,
			const short int& val2);  // 84
	Max<short int>(const short int& val1,
			const short int& val2);  // 84
} /* size: 0, variables: 2, inline expansions: 2 (21 bytes) */

// <003258CD> rendersystem/texturebase.cpp:79
// variables: 4
// function calls: 2
bool AssertIsValidTextureSpec(const TextureSpecification_t& spec, const char* szContext)
{
	bool bValid; // 81
	const char   __FUNCTION__; // 38580
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 92
	}
	Max<short int>(const short int& val1,
			const short int& val2);  // 84
	Max<short int>(const short int& val1,
			const short int& val2);  // 84
} /* size: 0, variables: 2, inline expansions: 2 (21 bytes) */

// <00342722> rendersystem/texturebase.cpp:101
// variables: 4
// function calls: 4
void CalculateFallbackTextureIndex(const Vector4D& vecReflectivity)
{
	int nRed; // 103
	int nGreen; // 104
	int nBlue; // 105
	int nAlpha; // 106
	Min<int>(const int& val1,
		const int& val2);  // 103
	Min<int>(const int& val1,
		const int& val2);  // 104
	Min<int>(const int& val1,
		const int& val2);  // 105
	Min<int>(const int& val1,
		const int& val2);  // 106
} /* size: 120, variables: 4, inline expansions: 4 (30 bytes) */

// <00346F65> rendersystem/texturebase.cpp:114
void ComputeTextureColor(int nFallback, Vector4D* pColor)
{
} /* size: 0 */

// <003426D1> rendersystem/texturebase.cpp:126
void CTextureBase::CTextureBase()
{
} /* size: 26 */

// <0034268A> rendersystem/texturebase.cpp:138
void CTextureBase::~CTextureBase()
{
} /* size: 5 */

// <00342607> rendersystem/texturebase.cpp:138
// function call: 1
void CTextureBase::~CTextureBase()
{
	CTextureBase::~CTextureBase(); // 141
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00340083> rendersystem/texturebase.cpp:147
// variables: 19
// function calls: 146
void CTextureBase::Init(const CTextureCreationDesc* pRuntimeSpec, size_t nStreamingBitsOffset, HRenderTexture hRenderTexture, CTextureInfoId* pId)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_149; // 149
	const TextureCreationExtraData_t* pSheetData; // 152
	TextureSpecification_t spec; // 164
	const char   __FUNCTION__; // 55526
	const TextureCreationExtraData_t* pMipSizeData; // 168
	const TextureCreationExtraData_t* pFallbackData; // 184
	const TextureCreationExtraData_t* pCubemapRadianceSHData; // 192
	{
		Sheet_t* pSheet; // 155
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 156
		CTextureInfoId::SetSheet(
			Sheet_t* pSheet);  // 157
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 166
	}
	{
		const VTEX_CompressedMipSizeData_t* pCompressedMipSizeData; // 171
		ResolveOffset(const int32* pOffset); // 304
		CResourceArrayBase::GetRawPtr(); // 426
		CResourceArray<unsigned int>::Base(); // 177
		{
		}
		VTEX_FormatToRuntime(VTEX_CompressedMipFormat_t n); // 177
		CResourceArrayBase::Count(); // 177
		{
		}
		{
			int i; // 1500
			CopyConstruct<unsigned int>(unsigned int* pMemory,
							const unsigned int& src);  // 1502
		}
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
					int elem,
					int num,
					const unsigned int* pToInsert);  // 1476
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
					int elem,
					int num,
					const unsigned int* pToInsert);  // 1303
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddMultipleToTail(
					int num,
					const unsigned int* pToCopy);  // 90
		TextureSpecification_t::SetCompressedMipSizes(
					CompressedMipFormat compressedFormat,
					int32 nMipSizeCount,
					const uint32* pCompressedMipSizes);  // 177
	}
	{
		int nCopySize; // 188
		CTextureInfoId::GetFallbackTextureBitsPtr(); // 189
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 189
	}
	{
		const VTEX_CubemapRadianceSH_t* pCubemapRadianceSH; // 195
		CResourceArrayBase::Count(); // 196
		ResolveOffset(const int32* pOffset); // 304
		CResourceArrayBase::GetRawPtr(); // 426
		CResourceArray<float>::Base(); // 196
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
						float* pTo);  // 1344
		CUtlVectorBase<float, CUtlMemory<float, int> >::CopyArray(
				const float* pArray,
				int size);  // 196
	}
	CTextureManagerBase::GetTextureManagerRWLock(); // 149
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
			int nLineNumber);  // 149
	{
		int i; // 250
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Count(); // 250
		CUtlMemory<TextureCreationExtraData_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::operator[](
				int i);  // 252
	}
	CTextureCreationDesc::FindExtraData(
			TextureCreationExtraDataType_t nType);  // 152
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
	TextureSpecification_t::TextureSpecification_t(); // 164
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 79
	{
	}
	{
	}
	TextureSpecification_t::InitFromSpec(
			const CTextureCreationDesc* pCreationSpec);  // 74
	TextureSpecification_t::InitFromSpec(
			const CTextureCreationDesc* pCreationSpec);  // 165
	{
		int i; // 250
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Count(); // 250
		CUtlMemory<TextureCreationExtraData_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::operator[](
				int i);  // 252
	}
	CTextureCreationDesc::FindExtraData(
			TextureCreationExtraDataType_t nType);  // 168
	Vector::operator=(
			const Vector& vOther);  // 1195
	CTextureInfoId::SetAverageColor(
			Vector c);  // 181
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 182
	{
		int i; // 250
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Count(); // 250
		CUtlMemory<TextureCreationExtraData_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::operator[](
				int i);  // 252
	}
	CTextureCreationDesc::FindExtraData(
			TextureCreationExtraDataType_t nType);  // 184
	{
		int i; // 250
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Count(); // 250
		CUtlMemory<TextureCreationExtraData_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::operator[](
				int i);  // 252
	}
	CTextureCreationDesc::FindExtraData(
			TextureCreationExtraDataType_t nType);  // 192
	{
		bool bSupportsPerMipstreaming; // 1127
		CTextureDesc::operator=(
				const CTextureDesc& rhs);  // 63
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
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
		CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
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
		TextureSpecification_t::operator=(
				const TextureSpecification_t& rhs);  // 1126
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 1127
		__atomic_base<short unsigned int>::operator&=(
				__int_type __i);  // 531
		CTextureInfoChunkBase::ClearFlags(
				int nTexId,
				uint16 nFlagsToClear);  // 1135
	}
	{
		bool bSupportsPerMipstreaming; // 1127
		__atomic_base<short unsigned int>::operator|=(
				__int_type __i);  // 530
		CTextureInfoChunkBase::SetFlags(
			int nTexId,
			uint16 nFlagsToSet);  // 1131
	}
	CTextureInfoId::SetDiskSpec(
			const TextureSpecification_t* pSpec);  // 1122
	CTextureInfoId::SetDiskSpec(
			const TextureSpecification_t* pSpec);  // 199
	{
	}
	CTextureInfoId::SetStreamingBitsOffset(
				int64 nOffset);  // 200
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 201
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1205
	CTextureInfoId::SetResourceHandle(
				HRenderTexture hTex);  // 201
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 202
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 204
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 208
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 209
	ResourceIsProcedural(ResourceHandle_t hResource); // 209
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 211
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
	TextureSpecification_t::~TextureSpecification_t(); // 218
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 218
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 215
	CTextureInfoId::SetSheet(
		Sheet_t* pSheet);  // 161
} /* size: 0, variables: 7, inline expansions: 76 (3816 bytes) */

// <0032311C> rendersystem/texturebase.cpp:147
// variables: 19
// function calls: 146
void CTextureBase::Init(const CTextureCreationDesc* pRuntimeSpec, size_t nStreamingBitsOffset, HRenderTexture hRenderTexture, CTextureInfoId* pId)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_149; // 149
	const TextureCreationExtraData_t* pSheetData; // 152
	TextureSpecification_t spec; // 164
	const char   __FUNCTION__; // 38060
	const TextureCreationExtraData_t* pMipSizeData; // 168
	const TextureCreationExtraData_t* pFallbackData; // 184
	const TextureCreationExtraData_t* pCubemapRadianceSHData; // 192
	{
		Sheet_t* pSheet; // 155
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 156
		CTextureInfoId::SetSheet(
			Sheet_t* pSheet);  // 157
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 166
	}
	{
		const VTEX_CompressedMipSizeData_t* pCompressedMipSizeData; // 171
		ResolveOffset(const int32* pOffset); // 304
		CResourceArrayBase::GetRawPtr(); // 426
		CResourceArray<unsigned int>::Base(); // 177
		{
		}
		VTEX_FormatToRuntime(VTEX_CompressedMipFormat_t n); // 177
		CResourceArrayBase::Count(); // 177
		{
		}
		{
			int i; // 1500
			CopyConstruct<unsigned int>(unsigned int* pMemory,
							const unsigned int& src);  // 1502
		}
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
					int elem,
					int num,
					const unsigned int* pToInsert);  // 1476
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
					int elem,
					int num,
					const unsigned int* pToInsert);  // 1303
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddMultipleToTail(
					int num,
					const unsigned int* pToCopy);  // 90
		TextureSpecification_t::SetCompressedMipSizes(
					CompressedMipFormat compressedFormat,
					int32 nMipSizeCount,
					const uint32* pCompressedMipSizes);  // 177
	}
	{
		int nCopySize; // 188
		CTextureInfoId::GetFallbackTextureBitsPtr(); // 189
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 189
	}
	{
		const VTEX_CubemapRadianceSH_t* pCubemapRadianceSH; // 195
		CResourceArrayBase::Count(); // 196
		ResolveOffset(const int32* pOffset); // 304
		CResourceArrayBase::GetRawPtr(); // 426
		CResourceArray<float>::Base(); // 196
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
						float* pTo);  // 1344
		CUtlVectorBase<float, CUtlMemory<float, int> >::CopyArray(
				const float* pArray,
				int size);  // 196
	}
	CTextureManagerBase::GetTextureManagerRWLock(); // 149
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
			int nLineNumber);  // 149
	{
		int i; // 250
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Count(); // 250
		CUtlMemory<TextureCreationExtraData_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::operator[](
				int i);  // 252
	}
	CTextureCreationDesc::FindExtraData(
			TextureCreationExtraDataType_t nType);  // 152
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
	TextureSpecification_t::TextureSpecification_t(); // 164
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 79
	{
	}
	{
	}
	TextureSpecification_t::InitFromSpec(
			const CTextureCreationDesc* pCreationSpec);  // 74
	TextureSpecification_t::InitFromSpec(
			const CTextureCreationDesc* pCreationSpec);  // 165
	{
		int i; // 250
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Count(); // 250
		CUtlMemory<TextureCreationExtraData_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::operator[](
				int i);  // 252
	}
	CTextureCreationDesc::FindExtraData(
			TextureCreationExtraDataType_t nType);  // 168
	Vector::operator=(
			const Vector& vOther);  // 1195
	CTextureInfoId::SetAverageColor(
			Vector c);  // 181
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 182
	{
		int i; // 250
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Count(); // 250
		CUtlMemory<TextureCreationExtraData_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::operator[](
				int i);  // 252
	}
	CTextureCreationDesc::FindExtraData(
			TextureCreationExtraDataType_t nType);  // 184
	{
		int i; // 250
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Count(); // 250
		CUtlMemory<TextureCreationExtraData_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::operator[](
				int i);  // 252
	}
	CTextureCreationDesc::FindExtraData(
			TextureCreationExtraDataType_t nType);  // 192
	{
		bool bSupportsPerMipstreaming; // 1127
		CTextureDesc::operator=(
				const CTextureDesc& rhs);  // 63
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
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
		CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
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
		TextureSpecification_t::operator=(
				const TextureSpecification_t& rhs);  // 1126
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 1127
		__atomic_base<short unsigned int>::operator&=(
				__int_type __i);  // 531
		CTextureInfoChunkBase::ClearFlags(
				int nTexId,
				uint16 nFlagsToClear);  // 1135
	}
	{
		bool bSupportsPerMipstreaming; // 1127
		__atomic_base<short unsigned int>::operator|=(
				__int_type __i);  // 530
		CTextureInfoChunkBase::SetFlags(
			int nTexId,
			uint16 nFlagsToSet);  // 1131
	}
	CTextureInfoId::SetDiskSpec(
			const TextureSpecification_t* pSpec);  // 1122
	CTextureInfoId::SetDiskSpec(
			const TextureSpecification_t* pSpec);  // 199
	{
	}
	CTextureInfoId::SetStreamingBitsOffset(
				int64 nOffset);  // 200
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 201
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1205
	CTextureInfoId::SetResourceHandle(
				HRenderTexture hTex);  // 201
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 202
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 204
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 208
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 209
	ResourceIsProcedural(ResourceHandle_t hResource); // 209
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 211
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
	TextureSpecification_t::~TextureSpecification_t(); // 218
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 218
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 215
	CTextureInfoId::SetSheet(
		Sheet_t* pSheet);  // 161
} /* size: 0, variables: 7, inline expansions: 76 (3816 bytes) */

// <0033F6F0> rendersystem/texturebase.cpp:221
// variable: 1
// function calls: 43
void CTextureBase::Init(const CTextureCreationDesc* pSpec, const void* pTextureBitsData, int nTextureBitsSize, bool bImmutable)
{
	TextureObjectInfo_t info; // 224
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 223
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
	TextureSpecification_t::TextureSpecification_t(); // 236
	TextureObjectInfo_t::TextureObjectInfo_t(); // 224
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 225
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
	TextureSpecification_t::~TextureSpecification_t(); // 236
	TextureObjectInfo_t::~TextureObjectInfo_t(); // 227
} /* size: 392, variables: 1, inline expansions: 43 (1039 bytes) */

// <0034A6FE> rendersystem/texturebase.cpp:229
void CTextureBase::Shutdown()
{
} /* size: 19 */

// <0033F011> rendersystem/texturebase.cpp:238
// variables: 2
// function calls: 32
void CTextureBase::SetTextureHandle(HRenderTexture hRenderTexture, const CTextureCreationDesc *)
{
	const char   __FUNCTION__; // 55830
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 240
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 240
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 240
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 240
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 240
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 241
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1205
	CTextureInfoId::SetResourceHandle(
				HRenderTexture hTex);  // 241
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 242
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 244
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 248
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 249
	ResourceIsProcedural(ResourceHandle_t hResource); // 249
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 251
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 255
} /* size: 0, variables: 1, inline expansions: 32 (451 bytes) */

// <003220AA> rendersystem/texturebase.cpp:238
// variables: 2
// function calls: 32
void CTextureBase::SetTextureHandle(HRenderTexture hRenderTexture, const CTextureCreationDesc *)
{
	const char   __FUNCTION__; // 38364
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 240
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 240
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 240
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 240
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 240
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 241
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1205
	CTextureInfoId::SetResourceHandle(
				HRenderTexture hTex);  // 241
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 242
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 244
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 248
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 249
	ResourceIsProcedural(ResourceHandle_t hResource); // 249
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 251
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 255
} /* size: 0, variables: 1, inline expansions: 32 (451 bytes) */

// <0033E8A8> rendersystem/texturebase.cpp:264
// variables: 2
// function calls: 31
void CTextureBase::MarkTextureBitsLoadRequired(IResourceSystemUtils* pUtils)
{
	{
		int n; // 269
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_271; // 271
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 271
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 274
		}
		__atomic_base<short unsigned int>::operator|=(
				__int_type __i);  // 530
		CTextureInfoChunkBase::SetFlags(
			int nTexId,
			uint16 nFlagsToSet);  // 1007
		CTextureInfoId::SetFlags(
			uint16 nFlagsToSet);  // 268
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
		CTextureInfoId::GetResourceHandle(); // 478
		CTextureBase::GetTextureHandle(); // 276
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
		CTextureInfoId::GetResourceHandle(); // 275
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
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 275
		CResourceName::Get(); // 275
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 275
	}
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 266
} /* size: 631, inline expansions: 4 (135 bytes) */

// <0033E16A> rendersystem/texturebase.cpp:280
// variables: 2
// function calls: 31
void CTextureBase::MarkTextureBitsLoaded(IResourceSystemUtils* pUtils)
{
	{
		int n; // 284
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_286; // 286
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 286
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 289
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
		CTextureInfoId::GetResourceHandle(); // 478
		CTextureBase::GetTextureHandle(); // 291
		__atomic_base<short unsigned int>::operator&=(
				__int_type __i);  // 531
		CTextureInfoChunkBase::ClearFlags(
				int nTexId,
				uint16 nFlagsToClear);  // 1012
		CTextureInfoId::ClearFlags(
				uint16 nFlagsToClear);  // 292
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
		CTextureInfoId::GetResourceHandle(); // 290
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
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 290
		CResourceName::Get(); // 290
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 290
	}
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 282
} /* size: 599, inline expansions: 4 (135 bytes) */

// <0033E07E> rendersystem/texturebase.cpp:296
// variables: 3
void CTextureManagerBase::NotifyResourceWithWorkPendingLoadCancelled(ResourceHandle_t hResource, void* pData)
{
	CTextureBase* pTex; // 298
	const char   __FUNCTION__; // 56492
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 299
	}
} /* size: 0, variables: 2 */

// <00321117> rendersystem/texturebase.cpp:296
// variables: 3
void CTextureManagerBase::NotifyResourceWithWorkPendingLoadCancelled(ResourceHandle_t hResource, void* pData)
{
	CTextureBase* pTex; // 298
	const char   __FUNCTION__; // 39026
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 299
	}
} /* size: 0, variables: 2 */

// <0033DFDB> rendersystem/texturebase.cpp:305
// variables: 4
void ComputeClampedTextureDim(uint32 nStartWidth, uint32 nStartHeight, int nStartMipLevelCount, int nMaxTextureRes, uint32* pWidthOut, uint32* pHeightOut, int* pMipLevelCountOut)
{
	int nNewWidth; // 307
	int nNewHeight; // 308
	int nNewMipLevelCount; // 309
	int nNewSize; // 320
} /* size: 0, variables: 4 */

// <0033DD18> rendersystem/texturebase.cpp:345
// variables: 4
// function calls: 9
void CTextureBase::ComputeSize()
{
	const TextureSpecification_t* pOnDiskSpec; // 349
	uint32 nClampedWidth; // 350
	uint32 nClampedHeight; // 351
	int32 nClampedNumMipLevels; // 352
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 349
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 353
	CTextureManagerBase::GetMaxTextureRes(); // 355
	Max<int>(const int& val1,
		const int& val2);  // 320
	Max<int>(const int& val1,
		const int& val2);  // 323
	Max<int>(const int& val1,
		const int& val2);  // 324
	Max<int>(const int& val1,
		const int& val2);  // 325
	ComputeClampedTextureDim(uint32 nStartWidth,
				uint32 nStartHeight,
				int nStartMipLevelCount,
				int nMaxTextureRes,
				uint32* pWidthOut,
				uint32* pHeightOut,
				int* pMipLevelCountOut);  // 355
} /* size: 188, variables: 4, inline expansions: 9 (183 bytes) */

// <0033DA94> rendersystem/texturebase.cpp:361
// variables: 2
// function calls: 8
void CTextureBase::ComputeSize(int nWidth, int nHeight, int nNumMipLevels)
{
	const TextureSpecification_t* pOnDiskSpec; // 364
	size_t nSize; // 365
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 364
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
	CTextureDesc::GetArrayCount(); // 365
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 187
	CTextureDesc::GetDepth(); // 365
} /* size: 0, variables: 2, inline expansions: 8 (348 bytes) */

// <003470DB> rendersystem/texturebase.cpp:370
// variables: 2
// function calls: 37
void CTextureBase::ComputeCurrentlyResidentSize()
{
	const TextureSpecification_t* pOnDiskSpec; // 387
	int nMissingMips; // 388
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 372
	CTextureInfoId::GetTextureObject(); // 488
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 488
	CTextureBase::IsStandinTexture(); // 377
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
	CTextureBase::GetMaxLoadedMipLevels(); // 382
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 387
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
	CTextureBase::GetMaxLoadedMipLevels(); // 388
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
	CTextureBase::GetMaxLoadedMipLevels(); // 389
	CTextureBase::ComputeCurrentlyResidentSize(); // 370
} /* size: 365, variables: 2, inline expansions: 37 (1019 bytes) */

// <0033DA61> rendersystem/texturebase.cpp:370
// variables: 2
void CTextureBase::ComputeCurrentlyResidentSize()
{
	const TextureSpecification_t* pOnDiskSpec; // 387
	int nMissingMips; // 388
} /* size: 0, variables: 2 */

// <0033D97F> rendersystem/texturebase.cpp:392
// variables: 15
void DilateColorIntoTransparentPixels(Bitmap_t& bm)
{
	int nWidth; // 394
	int nHeight; // 395
	{
		int y; // 396
		{
			int x; // 398
			{
				uint8 nCurrAlpha; // 400
				int nWeight; // 406
				int nR; // 407
				int nG; // 408
				int nB; // 409
				{
					int dy; // 410
					{
						int dx; // 412
						{
							int x2; // 414
							int y2; // 415
							Color c; // 416
						}
					}
				}
				{
					Color c; // 429
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <0033D8F9> rendersystem/texturebase.cpp:436
// variables: 5
void CopyAndPadImageSlice(const Bitmap_t& bm, int nStartRow, uint8* pOutBuf, int nOutWidth)
{
	uint32* pOutData; // 438
	{
		int i; // 440
		{
			int nSrcRow; // 442
			uint32 nPadPixel; // 445
			{
				int x; // 446
			}
		}
	}
} /* size: 0, variables: 1 */

// <0033D83C> rendersystem/texturebase.cpp:453
// variables: 7
inline uint32 ConvertRGBA8888ToYCoCg(uint32 nRGBA)
{
	uint8* p; // 455
	int32 r; // 456
	int32 g; // 457
	int32 b; // 458
	int32 y; // 459
	int32 co; // 460
	int32 cg; // 461
} /* size: 0, variables: 7 */

// <0033D713> rendersystem/texturebase.cpp:470
// variables: 18
void SwizzleImageSliceAndConvertToYCoCg(const uint8* pImageSlice, uint8* pSwizzledImageSlice, int nWidth)
{
	const uint32* pSrc; // 472
	uint32* pDest; // 473
	const int  nBlockCount; // 475
	{
		int i; // 476
		{
			uint8* pBlockStart; // 478
			uint8* p; // 479
			int32 nMaxChroma; // 480
			int32 nBlockScale; // 500
			int32 nScaleFactor; // 501
			{
				int y; // 483
				{
					int x; // 485
					{
						uint32 nSrcPixel; // 487
						int32 nCoDelta; // 491
						int32 nCgDelta; // 492
					}
				}
			}
			{
				int j; // 515
				{
					uint8* pPix; // 517
					int32 nCoDelta; // 518
					int32 nCgDelta; // 519
				}
			}
		}
	}
} /* size: 0, variables: 3 */

// <0033D6C2> rendersystem/texturebase.cpp:528
// variables: 2
void CompressImageSliceToDxt5(const uint8* pSwizzledYCoCgImageSlice, uint8* pDxt5Data, int nWidth)
{
	int nBlockCount; // 530
	{
		int i; // 531
	}
} /* size: 0, variables: 1 */

// <0033CEAF> rendersystem/texturebase.cpp:539
// variables: 30
// function calls: 19
uint8* PadAndCompressImageData(Bitmap_t& bm, const TextureSpecification_t* pTexSpec, bool* pbNeedToFreeDataOut)
{
	const char   __FUNCTION__; // 56019
	const int  nCompressedDxt5Size; // 543
	uint8* pCompressedDxt5Data; // 544
	int nImageBytes; // 559
	void* pImageBuffer; // 560
	uint8* pPaddedImageSlice; // 569
	uint8* pSwizzledImageSlice; // 570
	const int  nSliceCount; // 572
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 541
	}
	{
		int nSlice; // 580
		{
			int i; // 440
			{
				int nSrcRow; // 442
				uint32 nPadPixel; // 445
				Bitmap_t::Height(); // 442
				Min<int>(const int& val1,
					const int& val2);  // 442
				Bitmap_t::GetPixel(
					int x,
					int y);  // 443
				Bitmap_t::Width(); // 443
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 75
				V_memcpy(void* dest,
					const void* src,
					int count);  // 443
				Bitmap_t::GetPixel(
					int x,
					int y);  // 445
				Bitmap_t::Width(); // 444
				{
					int x; // 446
				}
			}
		}
		CopyAndPadImageSlice(const Bitmap_t& bm,
					int nStartRow,
					uint8* pOutBuf,
					int nOutWidth);  // 582
		{
			int i; // 476
			{
				uint8* pBlockStart; // 478
				uint8* p; // 479
				int32 nMaxChroma; // 480
				int32 nBlockScale; // 500
				int32 nScaleFactor; // 501
				{
					int y; // 483
					{
						int x; // 485
						{
							uint32 nSrcPixel; // 487
							int32 nCoDelta; // 491
							int32 nCgDelta; // 492
							clamp<int, int>(const int& val,
									const int& minVal,
									const int& maxVal);  // 462
							clamp<int, int>(const int& val,
									const int& minVal,
									const int& maxVal);  // 463
							ConvertRGBA8888ToYCoCg(uint32 nRGBA); // 488
							Max<int>(const int& val1,
								const int& val2);  // 494
						}
					}
				}
				{
					int j; // 515
					{
						uint8* pPix; // 517
						int32 nCoDelta; // 518
						int32 nCgDelta; // 519
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 520
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 521
					}
				}
			}
		}
		SwizzleImageSliceAndConvertToYCoCg(const uint8* pImageSlice,
							uint8* pSwizzledImageSlice,
							int nWidth);  // 583
		{
			int i; // 531
		}
		CompressImageSliceToDxt5(const uint8* pSwizzledYCoCgImageSlice,
					uint8* pDxt5Data,
					int nWidth);  // 584
	}
	Bitmap_t::GetImageFormat(); // 541
	memset(void* __dest,
		int __ch,
		size_t __len);  // 577
} /* size: 0, variables: 8, inline expansions: 2 (52 bytes) */

// <0031FF48> rendersystem/texturebase.cpp:539
// variables: 30
// function calls: 19
uint8* PadAndCompressImageData(Bitmap_t& bm, const TextureSpecification_t* pTexSpec, bool* pbNeedToFreeDataOut)
{
	const char   __FUNCTION__; // 38553
	const int  nCompressedDxt5Size; // 543
	uint8* pCompressedDxt5Data; // 544
	int nImageBytes; // 559
	void* pImageBuffer; // 560
	uint8* pPaddedImageSlice; // 569
	uint8* pSwizzledImageSlice; // 570
	const int  nSliceCount; // 572
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 541
	}
	{
		int nSlice; // 580
		{
			int i; // 440
			{
				int nSrcRow; // 442
				uint32 nPadPixel; // 445
				Bitmap_t::Height(); // 442
				Min<int>(const int& val1,
					const int& val2);  // 442
				Bitmap_t::GetPixel(
					int x,
					int y);  // 443
				Bitmap_t::Width(); // 443
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 75
				V_memcpy(void* dest,
					const void* src,
					int count);  // 443
				Bitmap_t::GetPixel(
					int x,
					int y);  // 445
				Bitmap_t::Width(); // 444
				{
					int x; // 446
				}
			}
		}
		CopyAndPadImageSlice(const Bitmap_t& bm,
					int nStartRow,
					uint8* pOutBuf,
					int nOutWidth);  // 582
		{
			int i; // 476
			{
				uint8* pBlockStart; // 478
				uint8* p; // 479
				int32 nMaxChroma; // 480
				int32 nBlockScale; // 500
				int32 nScaleFactor; // 501
				{
					int y; // 483
					{
						int x; // 485
						{
							uint32 nSrcPixel; // 487
							int32 nCoDelta; // 491
							int32 nCgDelta; // 492
							clamp<int, int>(const int& val,
									const int& minVal,
									const int& maxVal);  // 462
							clamp<int, int>(const int& val,
									const int& minVal,
									const int& maxVal);  // 463
							ConvertRGBA8888ToYCoCg(uint32 nRGBA); // 488
							Max<int>(const int& val1,
								const int& val2);  // 494
						}
					}
				}
				{
					int j; // 515
					{
						uint8* pPix; // 517
						int32 nCoDelta; // 518
						int32 nCgDelta; // 519
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 520
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 521
					}
				}
			}
		}
		SwizzleImageSliceAndConvertToYCoCg(const uint8* pImageSlice,
							uint8* pSwizzledImageSlice,
							int nWidth);  // 583
		{
			int i; // 531
		}
		CompressImageSliceToDxt5(const uint8* pSwizzledYCoCgImageSlice,
					uint8* pDxt5Data,
					int nWidth);  // 584
	}
	Bitmap_t::GetImageFormat(); // 541
	memset(void* __dest,
		int __ch,
		size_t __len);  // 577
} /* size: 0, variables: 8, inline expansions: 2 (52 bytes) */

// <0033B6F5> rendersystem/texturebase.cpp:610
// function calls: 81
void CTextureManagerBase::CTextureManagerBase()
{
	{
		{
		}
		{
		}
	}
	{
		IResourceTypeManager::IResourceTypeManager(); // 626
		IToolsResourceListener::IToolsResourceListener(); // 626
		ICommandCallback::ICommandCallback(); // 556
		ICommandCompletionCallback::ICommandCompletionCallback(); // 556
		CConCommandMemberAccessor<CTextureManagerBase>::CConCommandMemberAccessor(
						CTextureManagerBase* pOwner,
						const char* pName,
						FnMemberCommandCallback_t callback,
						const char* pHelpString,
						ConVarFlags_t flags,
						FnMemberCommandCompletionCallback_t completionFunc);  // 872
		CConCommandMemberAccessor<CTextureManagerBase>::SetOwner(
			CTextureManagerBase* pOwner);  // 872
		CCommandMemberInitializer_EvictAllTexturesConCommand::CCommandMemberInitializer_EvictAllTexturesConCommand(); // 626
		ICommandCallback::ICommandCallback(); // 556
		ICommandCompletionCallback::ICommandCompletionCallback(); // 556
		CConCommandMemberAccessor<CTextureManagerBase>::CConCommandMemberAccessor(
						CTextureManagerBase* pOwner,
						const char* pName,
						FnMemberCommandCallback_t callback,
						const char* pHelpString,
						ConVarFlags_t flags,
						FnMemberCommandCompletionCallback_t completionFunc);  // 873
		CConCommandMemberAccessor<CTextureManagerBase>::SetOwner(
			CTextureManagerBase* pOwner);  // 873
		CCommandMemberInitializer_ListAllTexturesConCommand::CCommandMemberInitializer_ListAllTexturesConCommand(); // 626
		CThreadMutex::CThreadMutex(
				const char* pName);  // 626
		CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::CUtlVector(); // 626
		CThreadMutex::CThreadMutex(
				const char* pName);  // 626
		CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::ValidateGrowSize(); // 475
		CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 530
		CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 626
		CInterlockedIntT<int, 4>::CInterlockedIntT(
				int value);  // 611
		CThreadMutex::CThreadMutex(
				const char* pName);  // 626
		CUtlMemory<ResourceLoadCompletedMessage_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<ResourceLoadCompletedMessage_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::CUtlVector(); // 626
		CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::ValidateGrowSize(); // 475
		CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 530
		CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 626
		CUtlMemory<ResourceLoadFailedMessage_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<ResourceLoadFailedMessage_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::CUtlVector(); // 626
		CThreadMutex::CThreadMutex(
				const char* pName);  // 626
		CUtlIdGenerator::CUtlIdGenerator(
				const uint  max_id);  // 614
		CThreadMutex::CThreadMutex(
				const char* pName);  // 626
		CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::ResetDbgInfo(); // 530
		CUtlMemory<CTextureInfoId, int>::ValidateGrowSize(); // 475
		CUtlMemory<CTextureInfoId, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::CUtlVector(); // 626
		CUtlMemory<ITextureResidencyListener::ValidateGrowSize(); // 475
		CUtlMemory<ITextureResidencyListener::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<ITextureResidencyListener::ResetDbgInfo(); // 530
		CUtlVectorBase<ITextureResidencyListener::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<ITextureResidencyListener::CUtlVector(); // 626
		CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<short unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(); // 626
		CInterlockedIntT<long long int, 8>::CInterlockedIntT(
				long long int value);  // 619
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 626
		CThreadMutex::CThreadMutex(
				const char* pName);  // 626
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::ValidateGrowSize(); // 475
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this); // 530
		CUtlVectorBase(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector(const CUtlVector<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int> this); // 626
		CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, i this); // 530
		CUtlVectorBase(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, i this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector(const CUtlVector<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int> this); // 626
		CThreadMutex::CThreadMutex(
				const char* pName);  // 626
		{
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 631
		memset(void* __dest,
			int __ch,
			size_t __len);  // 639
		memset(void* __dest,
			int __ch,
			size_t __len);  // 640
	}
} /* size: 0 */

// <0033B6A5> rendersystem/texturebase.cpp:610
// variables: 3
void CTextureManagerBase::CTextureManagerBase()
{
	const char   __FUNCTION__; // 55911
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 628
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 644
	}
} /* size: 0, variables: 1 */

// <0031E73E> rendersystem/texturebase.cpp:610
// variables: 3
void CTextureManagerBase::CTextureManagerBase()
{
	const char   __FUNCTION__; // 38445
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 628
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 644
	}
} /* size: 0, variables: 1 */

// <00339877> rendersystem/texturebase.cpp:649
// variable: 1
// function calls: 151
void CTextureManagerBase::~CTextureManagerBase()
{
	{
		{
		}
	}
	{
		{
		}
		CThreadMutex::~CThreadMutex(); // 653
		RemoveAll(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, i this); // 1798
		CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::Purge(); // 903
		CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, i this); // 560
		ValidateAlignment<CTextureManagerBase::ExternalTextureInfo_t>(void); // 508
		CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::Purge(); // 510
		CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, i this); // 410
		~CUtlVector(const CUtlVector<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int> this); // 653
		CThreadMutex::~CThreadMutex(); // 653
		RemoveAll(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this); // 1798
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::Purge(); // 903
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this); // 560
		ValidateAlignment<std::pair<ResourceId_t, long unsigned int> >(void); // 508
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::Purge(); // 510
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this); // 410
		~CUtlVector(const CUtlVector<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int> this); // 653
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 653
		CThreadMutex::~CThreadMutex(); // 653
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<short unsigned int, int>::Purge(); // 903
		CUtlMemory<short unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
		ValidateAlignment<short unsigned int>(void); // 508
		CUtlMemory<short unsigned int, int>::Purge(); // 510
		CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 653
		CUtlVectorBase<ITextureResidencyListener::RemoveAll(); // 1798
		CUtlMemory<ITextureResidencyListener::IsExternallyAllocated(); // 905
		CUtlMemory<ITextureResidencyListener::Purge(); // 903
		CUtlMemory<ITextureResidencyListener::Purge(); // 1799
		CUtlVectorBase<ITextureResidencyListener::Purge(); // 560
		ValidateAlignment<ITextureResidencyListener*>(void); // 508
		CUtlMemory<ITextureResidencyListener::Purge(); // 510
		CUtlMemory<ITextureResidencyListener::~CUtlMemory(); // 562
		CUtlVectorBase<ITextureResidencyListener::~CUtlVectorBase(); // 410
		CUtlVector<ITextureResidencyListener::~CUtlVector(); // 653
		CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::RemoveAll(); // 1798
		CUtlMemory<CTextureInfoId, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CTextureInfoId, int>::Purge(); // 903
		CUtlMemory<CTextureInfoId, int>::Purge(); // 1799
		CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Purge(); // 560
		ValidateAlignment<CTextureInfoId>(void); // 508
		CUtlMemory<CTextureInfoId, int>::Purge(); // 510
		CUtlMemory<CTextureInfoId, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::~CUtlVector(); // 653
		CUtlIdGenerator::~CUtlIdGenerator(); // 653
		CThreadEvent::~CThreadEvent(); // 2177
		CThreadEvent::~CThreadEvent(); // 2177
		CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 653
		CThreadMutex::~CThreadMutex(); // 653
		CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::RemoveAll(); // 1798
		CUtlMemory<ResourceLoadFailedMessage_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<ResourceLoadFailedMessage_t, int>::Purge(); // 903
		CUtlMemory<ResourceLoadFailedMessage_t, int>::Purge(); // 1799
		CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::Purge(); // 560
		ValidateAlignment<ResourceLoadFailedMessage_t>(void); // 508
		CUtlMemory<ResourceLoadFailedMessage_t, int>::Purge(); // 510
		CUtlMemory<ResourceLoadFailedMessage_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::~CUtlVector(); // 653
		RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 1798
		CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
		CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 560
		ValidateAlignment<CWeakHandle<InfoForResourceTypeCTextureBase> >(void); // 508
		CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 510
		CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 410
		~CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 653
		{
			int i; // 1721
			CUtlMemory<ResourceLoadCompletedMessage_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::Element(
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
			TextureSpecification_t::~TextureSpecification_t(); // 236
			TextureObjectInfo_t::~TextureObjectInfo_t(); // 560
			ResourceLoadCompletedMessage_t::~ResourceLoadCompletedMessage_t(); // 1526
			Destruct<ResourceLoadCompletedMessage_t>(ResourceLoadCompletedMessage_t* pMemory); // 1723
		}
		CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::RemoveAll(); // 1798
		CUtlMemory<ResourceLoadCompletedMessage_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<ResourceLoadCompletedMessage_t, int>::Purge(); // 903
		CUtlMemory<ResourceLoadCompletedMessage_t, int>::Purge(); // 1799
		CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::Purge(); // 560
		ValidateAlignment<ResourceLoadCompletedMessage_t>(void); // 508
		CUtlMemory<ResourceLoadCompletedMessage_t, int>::Purge(); // 510
		CUtlMemory<ResourceLoadCompletedMessage_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::~CUtlVector(); // 653
		CThreadMutex::~CThreadMutex(); // 653
		RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 1798
		CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
		CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 560
		ValidateAlignment<CWeakHandle<InfoForResourceTypeCTextureBase> >(void); // 508
		CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 510
		CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 410
		~CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 653
		CThreadMutex::~CThreadMutex(); // 653
		CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::RemoveAll(); // 1798
		CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::Purge(); // 903
		CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::Purge(); // 1799
		CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::Purge(); // 560
		ValidateAlignment<CTextureManagerBase::CacheRequest_t>(void); // 508
		CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::Purge(); // 510
		CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::~CUtlVector(); // 653
		CThreadMutex::~CThreadMutex(); // 653
		CConCommandMemberAccessor<CTextureManagerBase>::~CConCommandMemberAccessor(); // 873
		CCommandMemberInitializer_ListAllTexturesConCommand::~CCommandMemberInitializer_ListAllTexturesConCommand(); // 653
		CConCommandMemberAccessor<CTextureManagerBase>::~CConCommandMemberAccessor(); // 872
		CCommandMemberInitializer_EvictAllTexturesConCommand::~CCommandMemberInitializer_EvictAllTexturesConCommand(); // 653
	}
} /* size: 0 */

// <00339810> rendersystem/texturebase.cpp:649
void CTextureManagerBase::~CTextureManagerBase()
{
} /* size: 0 */

// <003397D3> rendersystem/texturebase.cpp:649
// variables: 2
void CTextureManagerBase::~CTextureManagerBase()
{
	const char   __FUNCTION__; // 55938
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 651
	}
} /* size: 0, variables: 1 */

// <0031C86C> rendersystem/texturebase.cpp:649
// variables: 2
void CTextureManagerBase::~CTextureManagerBase()
{
	const char   __FUNCTION__; // 38472
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 651
	}
} /* size: 0, variables: 1 */

// <003392AD> rendersystem/texturebase.cpp:659
// variables: 6
// function calls: 7
void CTextureManagerBase::Init(IResourceSystemUtils* pUtils)
{
	const float  flLogMaxTextureRes; // 672
	uint8 tmpDestData; // 677
	uint8 tmpSrcData; // 678
	bool bGameRequiresPreloadTextures; // 684
	ThreadPoolStartParams_t threadPoolParams; // 699
	{
		int n2gbSetting; // 667
		Min<int>(const int& val1,
			const int& val2);  // 668
	}
	Floor2Int(float a); // 673
	Max<int>(const int& val1,
		const int& val2);  // 674
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 681
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 684
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 689
	ThreadPoolStartParams_t::ThreadPoolStartParams_t(
				unsigned int _nThreads,
				uint64* _pAffinities,
				ThreadPoolDistribute_t _fDistribute,
				unsigned int _nStackSize,
				int _iThreadPriority,
				ThreadAffinityPreference_t _affinityPref,
				ThreadAffinityPreferenceFlag_t _nAffinityPrefFlags);  // 699
} /* size: 880, variables: 5, inline expansions: 6 (192 bytes) */

// <0033918F> rendersystem/texturebase.cpp:721
// variables: 3
// function calls: 2
void CTextureManagerBase::HardwareCapsUpdated(const HardwareCaps_t* pCaps)
{
	int nMaxHardwareWidth; // 723
	int nMaxHardwareHeight; // 724
	int nMaxTextureResHW; // 725
	Min<int>(const int& val1,
		const int& val2);  // 725
	Min<int>(const int& val1,
		const int& val2);  // 726
} /* size: 39, variables: 3, inline expansions: 2 (28 bytes) */

// <0033875E> rendersystem/texturebase.cpp:729
// variables: 7
// function calls: 34
void CTextureManagerBase::Shutdown()
{
	{
		int i; // 731
		{
			const bool  bNoInitFallbackTextures; // 740
			{
				int j; // 741
				CTextureBase::Shutdown(); // 747
			}
			CTextureBase::Shutdown(); // 735
		}
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_756; // 756
		{
			int i; // 757
			CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::Count(); // 757
			CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::operator[](
					int i);  // 759
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 759
			{
			}
			CInterlockedIntT<int, 4>::operator int(); // 83
			{
			}
			ThreadInterlockedDecrement(volatile int32* p); // 586
			CInterlockedIntT<int, 4>::operator--(); // 84
			ResourceRelease(ResourceHandle_t hResource,
					uintp nLeakTrackingPairingID,
					ResourceLeakTrackingGroup_t leakTrackingGroup);  // 74
			ResourceRelease(ResourceHandle_t hResource,
					uintp nLeakTrackingPairingID,
					ResourceLeakTrackingGroup_t leakTrackingGroup);  // 759
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
				int nLineNumber);  // 756
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 762
		CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::RemoveAll(); // 761
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_765; // 765
		{
			int i; // 766
			Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this); // 766
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					int i);  // 768
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 768
			{
			}
			CInterlockedIntT<int, 4>::operator int(); // 83
			{
			}
			ThreadInterlockedDecrement(volatile int32* p); // 586
			CInterlockedIntT<int, 4>::operator--(); // 84
			ResourceRelease(ResourceHandle_t hResource,
					uintp nLeakTrackingPairingID,
					ResourceLeakTrackingGroup_t leakTrackingGroup);  // 74
			ResourceRelease(ResourceHandle_t hResource,
					uintp nLeakTrackingPairingID,
					ResourceLeakTrackingGroup_t leakTrackingGroup);  // 768
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
				int nLineNumber);  // 765
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 771
		RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 770
	}
} /* size: 0 */

// <00338683> rendersystem/texturebase.cpp:783
// function calls: 2
void CTextureManagerBase::InstallResourceType()
{
	ResourceTypeName(void); // 673
	IResourceSystem::InstallTypeManager<2019914870>(
					IResourceTypeManager* pTypeManager,
					const char* pErrorManifestName);  // 785
} /* size: 73, inline expansions: 2 (24 bytes) */

// <00338625> rendersystem/texturebase.cpp:789
void CTextureManagerBase::RemoveResourceType()
{
} /* size: 61 */

// <003465A7> rendersystem/texturebase.cpp:796
// function calls: 2
void CTextureManagerBase::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 801
} /* size: 35, inline expansions: 2 (14 bytes) */

// <003385F2> rendersystem/texturebase.cpp:796
void CTextureManagerBase::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
} /* size: 0 */

// <0033853B> rendersystem/texturebase.cpp:818
// variables: 7
bool VTEX_InitCreationDescFromHeader(CTextureCreationDesc* pDesc, const VTEX_Header_t* pHeader)
{
	const char   __FUNCTION__; // 56235
	int nExtraData; // 894
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 867
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 891
	}
	{
		int i; // 896
		{
			TextureCreationExtraDataType_t nType; // 898
			{
				const VTEX_ExtraMetaData_t* pExtraMetaData; // 910
			}
		}
	}
} /* size: 0, variables: 2 */

// <0031B5D4> rendersystem/texturebase.cpp:818
// variables: 7
bool VTEX_InitCreationDescFromHeader(CTextureCreationDesc* pDesc, const VTEX_Header_t* pHeader)
{
	const char   __FUNCTION__; // 38769
	int nExtraData; // 894
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 867
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 891
	}
	{
		int i; // 896
		{
			TextureCreationExtraDataType_t nType; // 898
			{
				const VTEX_ExtraMetaData_t* pExtraMetaData; // 910
			}
		}
	}
} /* size: 0, variables: 2 */

// <0033850D> rendersystem/texturebase.cpp:929
void CTextureManagerBase::WantsAsyncProcessData()
{
} /* size: 7 */

// <003384BF> rendersystem/texturebase.cpp:934
void CTextureManagerBase::AsyncProcessData(ResourceHandle_t hResource, const ResourceFileHeader_t* pHeader)
{
} /* size: 15 */

// <00337AE4> rendersystem/texturebase.cpp:941
// variables: 4
// function calls: 41
void CTextureManagerBase::AllocateTexture(const CTextureCreationDesc* pSpec, size_t nStreamingDataOffset, HRenderTexture hRenderTexture, bool bInitiallyFallback, const CResourceName& resourceName, CTextureInfoId* pId)
{
	const char   __FUNCTION__; // 55803
	CTextureBase* pTexture; // 945
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 943
	}
	{
		TextureObjectInfo_t info; // 956
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
		TextureSpecification_t::TextureSpecification_t(); // 236
		TextureObjectInfo_t::TextureObjectInfo_t(); // 956
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 957
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
		TextureSpecification_t::~TextureSpecification_t(); // 236
		TextureObjectInfo_t::~TextureObjectInfo_t(); // 960
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 946
} /* size: 0, variables: 2, inline expansions: 2 (22 bytes) */

// <0031AB7D> rendersystem/texturebase.cpp:941
// variables: 4
// function calls: 41
void CTextureManagerBase::AllocateTexture(const CTextureCreationDesc* pSpec, size_t nStreamingDataOffset, HRenderTexture hRenderTexture, bool bInitiallyFallback, const CResourceName& resourceName, CTextureInfoId* pId)
{
	const char   __FUNCTION__; // 38337
	CTextureBase* pTexture; // 945
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 943
	}
	{
		TextureObjectInfo_t info; // 956
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
		TextureSpecification_t::TextureSpecification_t(); // 236
		TextureObjectInfo_t::TextureObjectInfo_t(); // 956
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 957
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
		TextureSpecification_t::~TextureSpecification_t(); // 236
		TextureObjectInfo_t::~TextureObjectInfo_t(); // 960
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 946
} /* size: 0, variables: 2, inline expansions: 2 (22 bytes) */

// <00336EDD> rendersystem/texturebase.cpp:968
// variables: 5
// function calls: 42
void CTextureManagerBase::FindOrCreateProceduralTexture(const CResourceName& resourceName, bool bIsAnonymous, const CTextureCreationDesc* pDescriptor)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_970; // 970
	HRenderTexture hResource; // 972
	const char   __FUNCTION__; // 56181
	CTextureBase* pTexture; // 990
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 986
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
			int nLineNumber);  // 970
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 972
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 718
	IResourceSystem::FindExistingResourceByName(
					const CResourceName& resourceName);  // 720
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 720
	IResourceSystem::FindExistingResourceByName<2019914870>(
						const CResourceName& resourceName);  // 976
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 977
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 983
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 987
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 990
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 695
	IResourceSystem::FindOrCreateProceduralResource<2019914870>(
							const CResourceName& resourceName,
							void* pResourceData,
							ProceduralResourceType_t type);  // 992
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 994
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 995
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 996
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 979
} /* size: 0, variables: 4, inline expansions: 42 (937 bytes) */

// <00319F76> rendersystem/texturebase.cpp:968
// variables: 5
// function calls: 42
void CTextureManagerBase::FindOrCreateProceduralTexture(const CResourceName& resourceName, bool bIsAnonymous, const CTextureCreationDesc* pDescriptor)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_970; // 970
	HRenderTexture hResource; // 972
	const char   __FUNCTION__; // 38715
	CTextureBase* pTexture; // 990
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 986
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
			int nLineNumber);  // 970
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 972
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 718
	IResourceSystem::FindExistingResourceByName(
					const CResourceName& resourceName);  // 720
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 720
	IResourceSystem::FindExistingResourceByName<2019914870>(
						const CResourceName& resourceName);  // 976
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 977
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 983
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 987
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 990
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 695
	IResourceSystem::FindOrCreateProceduralResource<2019914870>(
							const CResourceName& resourceName,
							void* pResourceData,
							ProceduralResourceType_t type);  // 992
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 994
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 995
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 996
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 979
} /* size: 0, variables: 4, inline expansions: 42 (937 bytes) */

// <00336E25> rendersystem/texturebase.cpp:1001
// function call: 1
void CTextureManagerBase::AllocateStandardTextures()
{
	CTextureManagerBase::InitErrorTexture(); // 1003
} /* size: 59, inline expansions: 1 (33 bytes) */

// <00349697> rendersystem/texturebase.cpp:1011
// variables: 4
void CTextureManagerBase::InitErrorTexture()
{
	CTextureCreationDesc header; // 1017
	uint32* imageBits; // 1025
	uint32* pImageBits; // 1026
	CResourceName errorName; // 1085
} /* size: 0, variables: 4 */

// <00348E8F> rendersystem/texturebase.cpp:1011
// variables: 11
// function calls: 22
void CTextureManagerBase::InitErrorTexture()
{
	CTextureCreationDesc header; // 1017
	uint32* imageBits; // 1025
	uint32* pImageBits; // 1026
	CResourceName errorName; // 1085
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 222
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
	CTextureCreationDesc::CTextureCreationDesc(); // 1017
	Vector4D::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz,
		vec_t iw);  // 1022
	{
		int i; // 1027
		{
			int j; // 1029
			{
				int k; // 1031
			}
		}
	}
	{
		CTextureBase* pError; // 1086
		CTextureBase *& __for_range; // 60613
		CTextureBase** __for_begin; // 60624
		CTextureBase** __for_end; // 60635
	}
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 1094
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Purge(); // 560
	ValidateAlignment<TextureCreationExtraData_t>(void); // 508
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 510
	CUtlMemory<TextureCreationExtraData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVector(); // 234
	CTextureCreationDesc::~CTextureCreationDesc(); // 1094
} /* size: 883, variables: 4, inline expansions: 22 (105 bytes) */

// <00336D71> rendersystem/texturebase.cpp:1011
// variables: 11
void CTextureManagerBase::InitErrorTexture()
{
	CTextureCreationDesc header; // 1017
	uint32* imageBits; // 1025
	uint32* pImageBits; // 1026
	CResourceName errorName; // 1085
	{
		int i; // 1027
		{
			int j; // 1029
			{
				int k; // 1031
			}
		}
	}
	{
		CTextureBase* pError; // 1086
		CTextureBase *& __for_range; // 60648
		CTextureBase** __for_begin; // 60654
		CTextureBase** __for_end; // 60654
	}
} /* size: 0, variables: 4 */

// <0032BF28> rendersystem/texturebase.cpp:1011
// variables: 11
// function calls: 22
void CTextureManagerBase::InitErrorTexture()
{
	CTextureCreationDesc header; // 1017
	uint32* imageBits; // 1025
	uint32* pImageBits; // 1026
	CResourceName errorName; // 1085
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 222
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
	CTextureCreationDesc::CTextureCreationDesc(); // 1017
	Vector4D::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz,
		vec_t iw);  // 1022
	{
		int i; // 1027
		{
			int j; // 1029
			{
				int k; // 1031
			}
		}
	}
	{
		CTextureBase* pError; // 1086
		CTextureBase *& __for_range; // 43147
		CTextureBase** __for_begin; // 43158
		CTextureBase** __for_end; // 43169
	}
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 1094
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Purge(); // 560
	ValidateAlignment<TextureCreationExtraData_t>(void); // 508
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 510
	CUtlMemory<TextureCreationExtraData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVector(); // 234
	CTextureCreationDesc::~CTextureCreationDesc(); // 1094
} /* size: 0, variables: 4, inline expansions: 22 (0 bytes) */

// <003360BB> rendersystem/texturebase.cpp:1100
// variables: 14
// function calls: 36
void CTextureManagerBase::InitFallbackTextures()
{
	const bool  bNoInitFallbackTextures; // 1106
	CTextureCreationDesc header; // 1108
	CResourceName fallback2D; // 1115
	CResourceName fallback3D; // 1116
	CResourceName fallbackCube; // 1117
	CResourceName fallback2DArray; // 1118
	CResourceName fallbackCubeArray; // 1119
	RGBA8888_t c32; // 1121
	RGBA8888_t cBuf; // 1122
	{
		int i; // 1123
		{
			Vector4D c; // 1125
			{
				int j; // 1135
			}
			Vector4D::Vector4D(); // 1125
			ComputeTextureColor(int nFallback,
						Vector4D* pColor);  // 1126
			Vector4D::operator=(
					const Vector4D& vOther);  // 1128
		}
	}
	{
		int32 i; // 1201
		{
			int32 nDim; // 1203
		}
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 222
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
	CTextureCreationDesc::CTextureCreationDesc(); // 1108
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 1209
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 1209
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 1209
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 1209
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 1209
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Purge(); // 560
	ValidateAlignment<TextureCreationExtraData_t>(void); // 508
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 510
	CUtlMemory<TextureCreationExtraData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVector(); // 234
	CTextureCreationDesc::~CTextureCreationDesc(); // 1209
} /* size: 1256, variables: 9, inline expansions: 33 (234 bytes) */

// <00335EF6> rendersystem/texturebase.cpp:1212
// variables: 2
// function calls: 5
void CTextureManagerBase::AssignErrorTexture(CTextureBase* pTextureBase)
{
	const TextureSpecification_t* pSpec; // 1214
	CTextureBase* pFallbackTexture; // 1215
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 1214
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1220
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1224
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1226
} /* size: 145, variables: 2, inline expansions: 5 (12 bytes) */

// <00335B12> rendersystem/texturebase.cpp:1248
// variables: 6
// function calls: 14
void CTextureManagerBase::AssignFallbackTexture(CTextureBase* pTextureBase, CRenderContextBase* pRenderContext)
{
	const TextureSpecification_t* pSpec; // 1250
	CTextureBase* pFallbackTexture; // 1251
	TextureStandinType_t fallbackType; // 1252
	Vector vAverageColor; // 1253
	float flLum; // 1258
	int nFallbackTextureIdx; // 1265
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 1250
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1254
	CTextureInfoId::GetAverageColor(); // 1253
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 119
	ClampFloatToInt<float>(float val,
				int minVal,
				int maxVal);  // 1265
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1270
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 1258
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1258
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1259
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1274
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1276
} /* size: 377, variables: 6, inline expansions: 14 (234 bytes) */

// <0032E0CE> rendersystem/texturebase.cpp:1300
// variables: 42
// function calls: 481
void CTextureManagerBase::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	CTextureBase* pOldTexture; // 1309
	const char   __FUNCTION__; // 55830
	VTEX_Header_t* pVTEXHeader; // 1328
	CTextureCreationDesc creationSpec; // 1331
	const uint  nStreamingOffset; // 1339
	HRenderTexture hTexture; // 1340
	CTextureInfoId* pIdToAssume; // 1343
	CResourceName name; // 1344
	CTextureBase* pTexture; // 1345
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1315; // 1315
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_1316; // 1316
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 1315
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
				int nLineNumber);  // 1316
		Unlock(CThreadRWLock_FastRead& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1319
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1319
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1323
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1329
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1357
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1358
	}
	{
		const TextureSpecification_t* pDiskSpec; // 1376
		const uint  nStreamingBytesAvailable; // 1377
		const uint8* pTextureBits; // 1378
		{
			const bool  bLoadedEntireFile; // 1383
			{
				AsyncTextureHookupData_t hookupData; // 1386
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1395
				}
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 142
				CTextureDesc::CTextureDesc(); // 43
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
				CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
				CUtlMemory<unsigned int, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
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
				TextureSpecification_t::TextureSpecification_t(); // 803
				AsyncTextureHookupData_t::AsyncTextureHookupData_t(); // 1386
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
				TextureSpecification_t::operator=(
						const TextureSpecification_t& rhs);  // 1387
				CInterlockedIntT<int, 4>::operator int(); // 1395
				ThreadInterlockedIncrement(volatile int32* p); // 576
				CInterlockedIntT<int, 4>::operator++(); // 582
				CInterlockedIntT<int, 4>::operator++(
						int);  // 1396
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
				TextureSpecification_t::~TextureSpecification_t(); // 803
				AsyncTextureHookupData_t::~AsyncTextureHookupData_t(); // 1399
			}
		}
		{
			uint nMipsToLoad; // 1404
			uint nDiskBytesForMips; // 1405
			{
				int mip; // 1406
				{
					uint nMipDiskSize; // 1408
					{
						const int  nOriginalMips; // 114
						const int  nMipDiff; // 115
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 114
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 595
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
								int i);  // 116
					}
					TextureSpecification_t::GetCompressedMipSize(
								int nMip);  // 108
					{
					}
					TextureSpecification_t::HasCompressedMips(); // 112
					Max<int>(const int& val1,
						const int& val2);  // 126
					Max<int>(const int& val1,
						const int& val2);  // 128
					Max<int>(const int& val1,
						const int& val2);  // 127
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 187
					CTextureDesc::GetDepth(); // 128
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 176
					{
					}
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 179
					{
					}
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 182
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 181
					CTextureDesc::GetArrayCount(); // 129
					TextureSpecification_t::GetUncompressedMipSize(
								uint nMip);  // 120
					TextureSpecification_t::GetCompressedMipSize(
								int nMip);  // 1408
				}
			}
			{
				TextureSpecification_t loadSpec; // 1418
				TextureSpecification_t preAdjustedSpec; // 1423
				TextureSpecification_t adjustedDiskSpec; // 1427
				const bool  bAtHighestRes; // 1444
				const bool  bTextureAllowsStreaming; // 1448
				{
					uint nNewDiskBytesForMips; // 1434
					{
						int mip; // 1435
						{
							const int  nOriginalMips; // 114
							const int  nMipDiff; // 115
							CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 114
							CUtlMemory<unsigned int, int>::operator[](
									int i);  // 595
							CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
									int i);  // 116
						}
						TextureSpecification_t::GetCompressedMipSize(
									int nMip);  // 108
						{
						}
						TextureSpecification_t::HasCompressedMips(); // 112
						Max<int>(const int& val1,
							const int& val2);  // 126
						Max<int>(const int& val1,
							const int& val2);  // 128
						Max<int>(const int& val1,
							const int& val2);  // 127
						operator&(RuntimeTextureSpecificationFlags_t a,
								RuntimeTextureSpecificationFlags_t b);  // 187
						CTextureDesc::GetDepth(); // 128
						operator&(RuntimeTextureSpecificationFlags_t a,
								RuntimeTextureSpecificationFlags_t b);  // 176
						{
						}
						operator&(RuntimeTextureSpecificationFlags_t a,
								RuntimeTextureSpecificationFlags_t b);  // 179
						{
						}
						operator&(RuntimeTextureSpecificationFlags_t a,
								RuntimeTextureSpecificationFlags_t b);  // 182
						operator&(RuntimeTextureSpecificationFlags_t a,
								RuntimeTextureSpecificationFlags_t b);  // 181
						CTextureDesc::GetArrayCount(); // 129
						TextureSpecification_t::GetUncompressedMipSize(
									uint nMip);  // 120
						TextureSpecification_t::GetCompressedMipSize(
									int nMip);  // 1437
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1439
					}
				}
				{
					AsyncTextureHookupData_t hookupData; // 1452
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1461
					}
					memset(void* __dest,
						int __ch,
						size_t __len);  // 67
					V_memset(void* dest,
						int fill,
						size_t count);  // 142
					CTextureDesc::CTextureDesc(); // 43
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
					CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
					CUtlMemory<unsigned int, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
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
					TextureSpecification_t::TextureSpecification_t(); // 803
					AsyncTextureHookupData_t::AsyncTextureHookupData_t(); // 1452
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
							const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 68
					CTextureDesc::operator=(
							const CTextureDesc& rhs);  // 63
					CUtlMemory<float, int>::Base(); // 112
					CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
					CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
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
					TextureSpecification_t::operator=(
							const TextureSpecification_t& rhs);  // 1453
					CInterlockedIntT<int, 4>::operator int(); // 1461
					ThreadInterlockedIncrement(volatile int32* p); // 576
					CInterlockedIntT<int, 4>::operator++(); // 582
					CInterlockedIntT<int, 4>::operator++(
							int);  // 1462
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
					TextureSpecification_t::~TextureSpecification_t(); // 803
					AsyncTextureHookupData_t::~AsyncTextureHookupData_t(); // 1465
				}
				CTextureDesc::operator=(
						const CTextureDesc& rhs);  // 147
				CTextureDesc::CTextureDesc(
						const CTextureDesc& rhs);  // 38
				CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
				CUtlMemory<unsigned int, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 434
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
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
				CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
						const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
				CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
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
				TextureSpecification_t::TextureSpecification_t(
							const TextureSpecification_t  &);  // 1418
				CTextureDesc::operator=(
						const CTextureDesc& rhs);  // 147
				CTextureDesc::CTextureDesc(
						const CTextureDesc& rhs);  // 38
				CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
				CUtlMemory<unsigned int, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 434
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
				CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
						const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
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
				TextureSpecification_t::TextureSpecification_t(
							const TextureSpecification_t  &);  // 1423
				Max<short int>(const short int& val1,
						const short int& val2);  // 1419
				Max<short int>(const short int& val1,
						const short int& val2);  // 1420
				CTextureDesc::operator=(
						const CTextureDesc& rhs);  // 147
				CTextureDesc::CTextureDesc(
						const CTextureDesc& rhs);  // 38
				CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
				CUtlMemory<unsigned int, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 434
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
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
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
						const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 434
				CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
						const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
				CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
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
				TextureSpecification_t::TextureSpecification_t(
							const TextureSpecification_t  &);  // 1427
				CUtlMemory<unsigned int, int>::Purge(); // 903
				CUtlMemory<unsigned int, int>::Purge(); // 1799
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
				ValidateAlignment<unsigned int>(void); // 508
				CUtlMemory<unsigned int, int>::Purge(); // 510
				CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
				CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
				CUtlMemory<float, int>::Purge(); // 903
				CUtlMemory<float, int>::Purge(); // 1799
				CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
				ValidateAlignment<float>(void); // 508
				CUtlMemory<float, int>::Purge(); // 510
				CUtlMemory<float, int>::~CUtlMemory(); // 562
				CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
				CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 52
				TextureSpecification_t::~TextureSpecification_t(); // 1466
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
				CTextureDesc::GetArrayCount(); // 1448
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 187
				CTextureDesc::GetDepth(); // 1448
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
				TextureSpecification_t::~TextureSpecification_t(); // 1466
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
				TextureSpecification_t::~TextureSpecification_t(); // 1466
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 1448
			}
		}
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 1376
	}
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
	CTextureCreationDesc::CTextureCreationDesc(); // 1331
	{
	}
	VTEX_FormatToRuntime(VTEX_Format_t n); // 833
	Vector4D::operator=(
			const Vector4D& vOther);  // 835
	operator|(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 35
	operator|=(RuntimeTextureSpecificationFlags_t& a,
			RuntimeTextureSpecificationFlags_t b);  // 838
	operator|(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 35
	operator|=(RuntimeTextureSpecificationFlags_t& a,
			RuntimeTextureSpecificationFlags_t b);  // 839
	operator|(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 35
	operator|=(RuntimeTextureSpecificationFlags_t& a,
			RuntimeTextureSpecificationFlags_t b);  // 840
	operator|(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 35
	operator|=(RuntimeTextureSpecificationFlags_t& a,
			RuntimeTextureSpecificationFlags_t b);  // 841
	{
	}
	operator|(TextureDecodingFlags_t a,
			TextureDecodingFlags_t b);  // 133
	operator|=(TextureDecodingFlags_t& a,
			TextureDecodingFlags_t b);  // 868
	operator&(TextureDecodingFlags_t a,
			TextureDecodingFlags_t b);  // 891
	{
	}
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 887
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 888
	CResourceArrayBase::Count(); // 894
	CUtlMemory<TextureCreationExtraData_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::SetCount(
		int count);  // 895
	{
		int i; // 896
		{
			TextureCreationExtraDataType_t nType; // 898
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<VTEX_ExtraDataEntry_t>::GetPtr(); // 379
			CResourceArray<VTEX_ExtraDataEntry_t>::operator[](
					int nIndex);  // 898
			{
			}
			VTEX_ExtraDataTypeToRuntime(VTEX_ExtraDataType_t n); // 302
			VTEX_ExtraDataTypeToRuntime(VTEX_ExtraDataType_t n); // 898
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<VTEX_ExtraDataEntry_t>::GetPtr(); // 379
			CResourceArray<VTEX_ExtraDataEntry_t>::operator[](
					int nIndex);  // 901
			CResourceArrayBase::Count(); // 901
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<VTEX_ExtraDataEntry_t>::GetPtr(); // 379
			CResourceArray<VTEX_ExtraDataEntry_t>::operator[](
					int nIndex);  // 902
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 426
			CResourceArray<unsigned char>::Base(); // 902
			{
				const VTEX_ExtraMetaData_t* pExtraMetaData; // 910
				ResolveOffset(const int32* pOffset); // 304
				CResourceArrayBase::GetRawPtr(); // 416
				CResourceArray<VTEX_ExtraDataEntry_t>::GetPtr(); // 379
				CResourceArray<VTEX_ExtraDataEntry_t>::operator[](
						int nIndex);  // 910
				ResolveOffset(const int32* pOffset); // 304
				CResourceArrayBase::GetRawPtr(); // 426
				CResourceArray<unsigned char>::Base(); // 910
			}
		}
	}
	VTEX_InitCreationDescFromHeader(CTextureCreationDesc* pDesc,
					const VTEX_Header_t* pHeader);  // 1332
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 1304
	CResourceName::Get(); // 1304
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 1304
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 1334
	CResourceName::Get(); // 1334
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 1334
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 235
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 234
	FromUntypedHandle(ResourceHandle_t hResource); // 1340
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1345
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 1357
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 1358
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetData(); // 1358
	CTextureInfoId::GetPinCount(); // 1363
	CTextureInfoId::SetPinCount(
			int32 nCount);  // 1363
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1374
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 1469
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 903
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 1799
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Purge(); // 560
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVector(); // 234
	CTextureCreationDesc::~CTextureCreationDesc(); // 1469
} /* size: 0, variables: 9, inline expansions: 81 (4865 bytes) */

// <00311167> rendersystem/texturebase.cpp:1300
// variables: 42
// function calls: 481
void CTextureManagerBase::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	CTextureBase* pOldTexture; // 1309
	const char   __FUNCTION__; // 38364
	VTEX_Header_t* pVTEXHeader; // 1328
	CTextureCreationDesc creationSpec; // 1331
	const uint  nStreamingOffset; // 1339
	HRenderTexture hTexture; // 1340
	CTextureInfoId* pIdToAssume; // 1343
	CResourceName name; // 1344
	CTextureBase* pTexture; // 1345
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1315; // 1315
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_1316; // 1316
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 1315
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
				int nLineNumber);  // 1316
		Unlock(CThreadRWLock_FastRead& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1319
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1319
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1323
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1329
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1357
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1358
	}
	{
		const TextureSpecification_t* pDiskSpec; // 1376
		const uint  nStreamingBytesAvailable; // 1377
		const uint8* pTextureBits; // 1378
		{
			const bool  bLoadedEntireFile; // 1383
			{
				AsyncTextureHookupData_t hookupData; // 1386
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1395
				}
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 142
				CTextureDesc::CTextureDesc(); // 43
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
				CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
				CUtlMemory<unsigned int, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
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
				TextureSpecification_t::TextureSpecification_t(); // 803
				AsyncTextureHookupData_t::AsyncTextureHookupData_t(); // 1386
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
				TextureSpecification_t::operator=(
						const TextureSpecification_t& rhs);  // 1387
				CInterlockedIntT<int, 4>::operator int(); // 1395
				ThreadInterlockedIncrement(volatile int32* p); // 576
				CInterlockedIntT<int, 4>::operator++(); // 582
				CInterlockedIntT<int, 4>::operator++(
						int);  // 1396
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
				TextureSpecification_t::~TextureSpecification_t(); // 803
				AsyncTextureHookupData_t::~AsyncTextureHookupData_t(); // 1399
			}
		}
		{
			uint nMipsToLoad; // 1404
			uint nDiskBytesForMips; // 1405
			{
				int mip; // 1406
				{
					uint nMipDiskSize; // 1408
					{
						const int  nOriginalMips; // 114
						const int  nMipDiff; // 115
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 114
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 595
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
								int i);  // 116
					}
					TextureSpecification_t::GetCompressedMipSize(
								int nMip);  // 108
					{
					}
					TextureSpecification_t::HasCompressedMips(); // 112
					Max<int>(const int& val1,
						const int& val2);  // 126
					Max<int>(const int& val1,
						const int& val2);  // 128
					Max<int>(const int& val1,
						const int& val2);  // 127
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 187
					CTextureDesc::GetDepth(); // 128
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 176
					{
					}
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 179
					{
					}
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 182
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 181
					CTextureDesc::GetArrayCount(); // 129
					TextureSpecification_t::GetUncompressedMipSize(
								uint nMip);  // 120
					TextureSpecification_t::GetCompressedMipSize(
								int nMip);  // 1408
				}
			}
			{
				TextureSpecification_t loadSpec; // 1418
				TextureSpecification_t preAdjustedSpec; // 1423
				TextureSpecification_t adjustedDiskSpec; // 1427
				const bool  bAtHighestRes; // 1444
				const bool  bTextureAllowsStreaming; // 1448
				{
					uint nNewDiskBytesForMips; // 1434
					{
						int mip; // 1435
						{
							const int  nOriginalMips; // 114
							const int  nMipDiff; // 115
							CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 114
							CUtlMemory<unsigned int, int>::operator[](
									int i);  // 595
							CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
									int i);  // 116
						}
						TextureSpecification_t::GetCompressedMipSize(
									int nMip);  // 108
						{
						}
						TextureSpecification_t::HasCompressedMips(); // 112
						Max<int>(const int& val1,
							const int& val2);  // 126
						Max<int>(const int& val1,
							const int& val2);  // 128
						Max<int>(const int& val1,
							const int& val2);  // 127
						operator&(RuntimeTextureSpecificationFlags_t a,
								RuntimeTextureSpecificationFlags_t b);  // 187
						CTextureDesc::GetDepth(); // 128
						operator&(RuntimeTextureSpecificationFlags_t a,
								RuntimeTextureSpecificationFlags_t b);  // 176
						{
						}
						operator&(RuntimeTextureSpecificationFlags_t a,
								RuntimeTextureSpecificationFlags_t b);  // 179
						{
						}
						operator&(RuntimeTextureSpecificationFlags_t a,
								RuntimeTextureSpecificationFlags_t b);  // 182
						operator&(RuntimeTextureSpecificationFlags_t a,
								RuntimeTextureSpecificationFlags_t b);  // 181
						CTextureDesc::GetArrayCount(); // 129
						TextureSpecification_t::GetUncompressedMipSize(
									uint nMip);  // 120
						TextureSpecification_t::GetCompressedMipSize(
									int nMip);  // 1437
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1439
					}
				}
				{
					AsyncTextureHookupData_t hookupData; // 1452
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1461
					}
					memset(void* __dest,
						int __ch,
						size_t __len);  // 67
					V_memset(void* dest,
						int fill,
						size_t count);  // 142
					CTextureDesc::CTextureDesc(); // 43
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
					CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
					CUtlMemory<unsigned int, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
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
					TextureSpecification_t::TextureSpecification_t(); // 803
					AsyncTextureHookupData_t::AsyncTextureHookupData_t(); // 1452
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
							const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 68
					CTextureDesc::operator=(
							const CTextureDesc& rhs);  // 63
					CUtlMemory<float, int>::Base(); // 112
					CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
					CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
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
					TextureSpecification_t::operator=(
							const TextureSpecification_t& rhs);  // 1453
					CInterlockedIntT<int, 4>::operator int(); // 1461
					ThreadInterlockedIncrement(volatile int32* p); // 576
					CInterlockedIntT<int, 4>::operator++(); // 582
					CInterlockedIntT<int, 4>::operator++(
							int);  // 1462
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
					TextureSpecification_t::~TextureSpecification_t(); // 803
					AsyncTextureHookupData_t::~AsyncTextureHookupData_t(); // 1465
				}
				CTextureDesc::operator=(
						const CTextureDesc& rhs);  // 147
				CTextureDesc::CTextureDesc(
						const CTextureDesc& rhs);  // 38
				CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
				CUtlMemory<unsigned int, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 434
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
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
				CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
						const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
				CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
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
				TextureSpecification_t::TextureSpecification_t(
							const TextureSpecification_t  &);  // 1418
				CTextureDesc::operator=(
						const CTextureDesc& rhs);  // 147
				CTextureDesc::CTextureDesc(
						const CTextureDesc& rhs);  // 38
				CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
				CUtlMemory<unsigned int, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 434
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
				CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
						const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
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
				TextureSpecification_t::TextureSpecification_t(
							const TextureSpecification_t  &);  // 1423
				Max<short int>(const short int& val1,
						const short int& val2);  // 1419
				Max<short int>(const short int& val1,
						const short int& val2);  // 1420
				CTextureDesc::operator=(
						const CTextureDesc& rhs);  // 147
				CTextureDesc::CTextureDesc(
						const CTextureDesc& rhs);  // 38
				CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
				CUtlMemory<unsigned int, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 434
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
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
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
						const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 434
				CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
						const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
				CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
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
				TextureSpecification_t::TextureSpecification_t(
							const TextureSpecification_t  &);  // 1427
				CUtlMemory<unsigned int, int>::Purge(); // 903
				CUtlMemory<unsigned int, int>::Purge(); // 1799
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
				ValidateAlignment<unsigned int>(void); // 508
				CUtlMemory<unsigned int, int>::Purge(); // 510
				CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
				CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
				CUtlMemory<float, int>::Purge(); // 903
				CUtlMemory<float, int>::Purge(); // 1799
				CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
				ValidateAlignment<float>(void); // 508
				CUtlMemory<float, int>::Purge(); // 510
				CUtlMemory<float, int>::~CUtlMemory(); // 562
				CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
				CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 52
				TextureSpecification_t::~TextureSpecification_t(); // 1466
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
				CTextureDesc::GetArrayCount(); // 1448
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 187
				CTextureDesc::GetDepth(); // 1448
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
				TextureSpecification_t::~TextureSpecification_t(); // 1466
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
				TextureSpecification_t::~TextureSpecification_t(); // 1466
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 1448
			}
		}
		CTextureInfoId::GetDiskSpec(); // 388
		CTextureBase::GetDiskSpec(); // 1376
	}
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
	CTextureCreationDesc::CTextureCreationDesc(); // 1331
	{
	}
	VTEX_FormatToRuntime(VTEX_Format_t n); // 833
	Vector4D::operator=(
			const Vector4D& vOther);  // 835
	operator|(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 35
	operator|=(RuntimeTextureSpecificationFlags_t& a,
			RuntimeTextureSpecificationFlags_t b);  // 838
	operator|(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 35
	operator|=(RuntimeTextureSpecificationFlags_t& a,
			RuntimeTextureSpecificationFlags_t b);  // 839
	operator|(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 35
	operator|=(RuntimeTextureSpecificationFlags_t& a,
			RuntimeTextureSpecificationFlags_t b);  // 840
	operator|(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 35
	operator|=(RuntimeTextureSpecificationFlags_t& a,
			RuntimeTextureSpecificationFlags_t b);  // 841
	{
	}
	operator|(TextureDecodingFlags_t a,
			TextureDecodingFlags_t b);  // 133
	operator|=(TextureDecodingFlags_t& a,
			TextureDecodingFlags_t b);  // 868
	operator&(TextureDecodingFlags_t a,
			TextureDecodingFlags_t b);  // 891
	{
	}
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 887
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 888
	CResourceArrayBase::Count(); // 894
	CUtlMemory<TextureCreationExtraData_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::SetCount(
		int count);  // 895
	{
		int i; // 896
		{
			TextureCreationExtraDataType_t nType; // 898
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<VTEX_ExtraDataEntry_t>::GetPtr(); // 379
			CResourceArray<VTEX_ExtraDataEntry_t>::operator[](
					int nIndex);  // 898
			{
			}
			VTEX_ExtraDataTypeToRuntime(VTEX_ExtraDataType_t n); // 302
			VTEX_ExtraDataTypeToRuntime(VTEX_ExtraDataType_t n); // 898
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<VTEX_ExtraDataEntry_t>::GetPtr(); // 379
			CResourceArray<VTEX_ExtraDataEntry_t>::operator[](
					int nIndex);  // 901
			CResourceArrayBase::Count(); // 901
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<VTEX_ExtraDataEntry_t>::GetPtr(); // 379
			CResourceArray<VTEX_ExtraDataEntry_t>::operator[](
					int nIndex);  // 902
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 426
			CResourceArray<unsigned char>::Base(); // 902
			{
				const VTEX_ExtraMetaData_t* pExtraMetaData; // 910
				ResolveOffset(const int32* pOffset); // 304
				CResourceArrayBase::GetRawPtr(); // 416
				CResourceArray<VTEX_ExtraDataEntry_t>::GetPtr(); // 379
				CResourceArray<VTEX_ExtraDataEntry_t>::operator[](
						int nIndex);  // 910
				ResolveOffset(const int32* pOffset); // 304
				CResourceArrayBase::GetRawPtr(); // 426
				CResourceArray<unsigned char>::Base(); // 910
			}
		}
	}
	VTEX_InitCreationDescFromHeader(CTextureCreationDesc* pDesc,
					const VTEX_Header_t* pHeader);  // 1332
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 1304
	CResourceName::Get(); // 1304
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 1304
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 1334
	CResourceName::Get(); // 1334
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 1334
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 235
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 234
	FromUntypedHandle(ResourceHandle_t hResource); // 1340
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1345
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 1357
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 1358
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetData(); // 1358
	CTextureInfoId::GetPinCount(); // 1363
	CTextureInfoId::SetPinCount(
			int32 nCount);  // 1363
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1374
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 1469
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 903
	CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 1799
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Purge(); // 560
	CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVector(); // 234
	CTextureCreationDesc::~CTextureCreationDesc(); // 1469
} /* size: 0, variables: 9, inline expansions: 81 (4865 bytes) */

// <0034A744> rendersystem/texturebase.cpp:1474
// variables: 3
// function calls: 19
void CTextureManagerBase::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pUtils)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1480; // 1480
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_1481; // 1481
	CTextureBase* pTex; // 1483
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 1480
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
			int nLineNumber);  // 1481
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 1491
	CTextureBase::Shutdown(); // 1495
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1497
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1497
	CTextureManagerBase::DeallocateResource(
				void* pResourceData,
				IResourceDeallocatorUtils* pUtils);  // 1474
} /* size: 522, variables: 3, inline expansions: 19 (1599 bytes) */

// <0032E074> rendersystem/texturebase.cpp:1474
// variables: 3
void CTextureManagerBase::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pUtils)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1480; // 1480
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_1481; // 1481
	CTextureBase* pTex; // 1483
} /* size: 0, variables: 3 */

// <0032CD4A> rendersystem/texturebase.cpp:1499
// variables: 2
// function calls: 81
void CTextureManagerBase::RemoveTextureFromAnyQueues(CTextureBase* pTex)
{
	const char   __FUNCTION__; // 56100
	{
		CResourceNameGetter resourceName; // 1515
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
		CTextureInfoId::GetResourceHandle(); // 478
		CTextureBase::GetTextureHandle(); // 1515
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
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 1515
		pair<ResourceId_t, long unsigned int>::pair<ResourceId_t, long unsigned int>(
							ResourceId_t& __x,
							long unsigned int& __y);  // 1169
		make_pair<ResourceId_t, long unsigned int>(ResourceId_t& __x,
								long unsigned int& __y);  // 1516
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::NumAllocated(); // 1247
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::Base(); // 112
		Base(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this); // 368
		ResetDbgInfo(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this); // 824
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::IsGrowable(); // 823
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::IsExternallyAllocated(); // 859
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::IsExternallyAllocated(); // 861
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this,
				int num);  // 1249
		Construct<std::pair<ResourceId_t, long unsigned int>, std::pair<ResourceId_t, long unsigned int> >(pair<ResourceId_t, long unsigned int>* pMemory); // 1252
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this,
			int i);  // 1252
		AddToTail(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this,
				pair<ResourceId_t, long unsigned int>& src);  // 1516
		__atomic_base<short unsigned int>::operator&=(
				__int_type __i);  // 531
		CTextureInfoChunkBase::ClearFlags(
				int nTexId,
				uint16 nFlagsToClear);  // 1012
		CTextureInfoId::ClearFlags(
				uint16 nFlagsToClear);  // 1517
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 1521
		CResourceName::Get(); // 1519
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
		CTextureInfoId::GetResourceHandle(); // 478
		CTextureBase::GetTextureHandle(); // 1519
		ResourceId_t::GetRaw(); // 1519
	}
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 1503
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 1508
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 1513
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 1523
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 1529
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 1506
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 1526
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 1511
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 1531
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 1531
	CResourceName::Get(); // 1531
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 1531
} /* size: 1493, variables: 1, inline expansions: 43 (1361 bytes) */

// <0030FDE3> rendersystem/texturebase.cpp:1499
// variables: 2
// function calls: 81
void CTextureManagerBase::RemoveTextureFromAnyQueues(CTextureBase* pTex)
{
	const char   __FUNCTION__; // 38634
	{
		CResourceNameGetter resourceName; // 1515
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
		CTextureInfoId::GetResourceHandle(); // 478
		CTextureBase::GetTextureHandle(); // 1515
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
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 1515
		pair<ResourceId_t, long unsigned int>::pair<ResourceId_t, long unsigned int>(
							ResourceId_t& __x,
							long unsigned int& __y);  // 1169
		make_pair<ResourceId_t, long unsigned int>(ResourceId_t& __x,
								long unsigned int& __y);  // 1516
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::NumAllocated(); // 1247
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::Base(); // 112
		Base(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this); // 368
		ResetDbgInfo(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this); // 824
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::IsGrowable(); // 823
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::IsExternallyAllocated(); // 859
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::IsExternallyAllocated(); // 861
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this,
				int num);  // 1249
		Construct<std::pair<ResourceId_t, long unsigned int>, std::pair<ResourceId_t, long unsigned int> >(pair<ResourceId_t, long unsigned int>* pMemory); // 1252
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this,
			int i);  // 1252
		AddToTail(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this,
				pair<ResourceId_t, long unsigned int>& src);  // 1516
		__atomic_base<short unsigned int>::operator&=(
				__int_type __i);  // 531
		CTextureInfoChunkBase::ClearFlags(
				int nTexId,
				uint16 nFlagsToClear);  // 1012
		CTextureInfoId::ClearFlags(
				uint16 nFlagsToClear);  // 1517
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 1521
		CResourceName::Get(); // 1519
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
		CTextureInfoId::GetResourceHandle(); // 478
		CTextureBase::GetTextureHandle(); // 1519
		ResourceId_t::GetRaw(); // 1519
	}
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 1503
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 1508
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 1513
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 1523
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 1529
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 1506
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 1526
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 1511
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 1531
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 1531
	CResourceName::Get(); // 1531
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 1531
} /* size: 1493, variables: 1, inline expansions: 43 (1361 bytes) */

// <0032C2D7> rendersystem/texturebase.cpp:1538
// variables: 5
// function calls: 49
void CTextureManagerBase::RemoveTextureFromHookupQueues(CTextureBase* pTex)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1540; // 1540
	{
		int i; // 1541
		CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::Count(); // 1541
		CUtlMemory<ResourceLoadCompletedMessage_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::operator[](
				int i);  // 1543
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
		TextureSpecification_t::~TextureSpecification_t(); // 236
		TextureObjectInfo_t::~TextureObjectInfo_t(); // 560
		ResourceLoadCompletedMessage_t::~ResourceLoadCompletedMessage_t(); // 1526
		Destruct<ResourceLoadCompletedMessage_t>(ResourceLoadCompletedMessage_t* pMemory); // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<ResourceLoadCompletedMessage_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::Element(
				int i);  // 1584
			CUtlMemory<ResourceLoadCompletedMessage_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::Element(
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::FastRemove(
				int elem);  // 1545
	}
	{
		int i; // 1549
		CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::Count(); // 1549
		CUtlMemory<ResourceLoadFailedMessage_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::operator[](
				int i);  // 1551
		Destruct<ResourceLoadFailedMessage_t>(ResourceLoadFailedMessage_t* pMemory); // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<ResourceLoadFailedMessage_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::Element(
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::FastRemove(
				int elem);  // 1553
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
			int nLineNumber);  // 1540
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1557
} /* size: 664, variables: 1, inline expansions: 6 (288 bytes) */

// <0032BE13> rendersystem/texturebase.cpp:1559
// variables: 4
// function calls: 19
void CTextureManagerBase::RemoveTextureFromCacheRequests(CTextureBase* pTex)
{
	HRenderTexture hTex; // 1561
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1562; // 1562
	{
		int i; // 1563
		CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::Count(); // 1563
		CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::operator[](
				int i);  // 1565
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1565
		Destruct<CTextureManagerBase::CacheRequest_t>(CacheRequest_t* pMemory); // 1575
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
		CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::FastRemove(
				int elem);  // 1567
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 1561
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 1562
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1571
} /* size: 351, variables: 2, inline expansions: 9 (510 bytes) */

// <0032B94F> rendersystem/texturebase.cpp:1573
// variables: 4
// function calls: 19
void CTextureManagerBase::RemoveTextureFromUncacheRequests(CTextureBase* pTex)
{
	HRenderTexture hTex; // 1575
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1576; // 1576
	{
		int i; // 1577
		Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this); // 1577
		CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int i);  // 1579
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1579
		Destruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory); // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		FastRemove(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int elem);  // 1581
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 1575
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 1576
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1585
} /* size: 335, variables: 2, inline expansions: 9 (510 bytes) */

// <0034688F> rendersystem/texturebase.cpp:1591
// variables: 2
// function call: 1
void CTextureManagerBase::NotifyResourceStatusChange(const ResourceStatusChange_t* pChanges, int nNumChanges)
{
	{
		int i; // 1593
	}
	{
		int i; // 1593
	}
	CTextureManagerBase::NotifyResourceStatusChange(
					const ResourceStatusChange_t* pChanges,
					int nNumChanges);  // 1591
} /* size: 73, inline expansions: 1 (15 bytes) */

// <0032B90F> rendersystem/texturebase.cpp:1591
// variable: 1
void CTextureManagerBase::NotifyResourceStatusChange(const ResourceStatusChange_t* pChanges, int nNumChanges)
{
	{
		int i; // 1593
	}
} /* size: 0 */

// <0032B845> rendersystem/texturebase.cpp:1607
// variables: 3
// function call: 1
void CTextureManagerBase::NextValidTextureId(CTextureInfoId tex)
{
	uint nInChunkIdx; // 1609
	{
		uint nChunkIdx; // 1610
		{
			CTextureInfoChunkBase* pChunk; // 1612
			MakeTextureInfoId(int nChunkIdx,
						int nInChunkIdx);  // 1618
		}
	}
} /* size: 133, variables: 1 */

// <003478EC> rendersystem/texturebase.cpp:1629
void InvalidId(void)
{
} /* size: 0 */

// <0032B6CF> rendersystem/texturebase.cpp:1638
// variables: 3
// function calls: 3
void CTextureManagerBase::GetTargetMipCount(CTextureInfoId id)
{
	const char   __FUNCTION__; // 55857
	int32 nRawId; // 1641
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1640
	}
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 1642
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 1644
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <0030E768> rendersystem/texturebase.cpp:1638
// variables: 3
// function calls: 3
void CTextureManagerBase::GetTargetMipCount(CTextureInfoId id)
{
	const char   __FUNCTION__; // 38391
	int32 nRawId; // 1641
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1640
	}
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 1642
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 1644
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <0032B18F> rendersystem/texturebase.cpp:1653
// variables: 4
// function calls: 20
void CTextureManagerBase::SetTargetMipCount(CTextureInfoId id, uint16 nTargetMipCount)
{
	const char   __FUNCTION__; // 55857
	uint32 nRawId; // 1656
	int nOldCount; // 1657
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1655
	}
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 1657
	CUtlMemory<short unsigned int, int>::NumAllocated(); // 782
	CUtlMemory<short unsigned int, int>::Base(); // 112
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 368
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlMemory<short unsigned int, int>::IsGrowable(); // 823
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<short unsigned int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::EnsureCount(
			int num);  // 1658
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 1666
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 1661
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 1663
} /* size: 0, variables: 3, inline expansions: 20 (2132 bytes) */

// <0030E228> rendersystem/texturebase.cpp:1653
// variables: 4
// function calls: 20
void CTextureManagerBase::SetTargetMipCount(CTextureInfoId id, uint16 nTargetMipCount)
{
	const char   __FUNCTION__; // 38391
	uint32 nRawId; // 1656
	int nOldCount; // 1657
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1655
	}
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 1657
	CUtlMemory<short unsigned int, int>::NumAllocated(); // 782
	CUtlMemory<short unsigned int, int>::Base(); // 112
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 368
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlMemory<short unsigned int, int>::IsGrowable(); // 823
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<short unsigned int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::EnsureCount(
			int num);  // 1658
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 1666
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 1661
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 1663
} /* size: 0, variables: 3, inline expansions: 20 (0 bytes) */

// <0032ADFA> rendersystem/texturebase.cpp:1672
// variables: 3
// function calls: 9
void CTextureManagerBase::RegisterTexture(CTextureBase* pTexture, CTextureInfoId* pId)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_1675; // 1675
	const char   __FUNCTION__; // 55803
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1679
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
			int nLineNumber);  // 1675
	CTextureInfoId::IsOutOfBounds(); // 1679
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1701
} /* size: 0, variables: 2, inline expansions: 9 (611 bytes) */

// <0030DE93> rendersystem/texturebase.cpp:1672
// variables: 3
// function calls: 9
void CTextureManagerBase::RegisterTexture(CTextureBase* pTexture, CTextureInfoId* pId)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_1675; // 1675
	const char   __FUNCTION__; // 38337
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1679
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
			int nLineNumber);  // 1675
	CTextureInfoId::IsOutOfBounds(); // 1679
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1701
} /* size: 0, variables: 2, inline expansions: 9 (611 bytes) */

// <0032A7E2> rendersystem/texturebase.cpp:1703
// variables: 4
// function calls: 23
void CTextureManagerBase::UnregisterTexture(CTextureBase* pTexture)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_1705; // 1705
	const char   __FUNCTION__; // 55857
	CTextureInfoId texId; // 1711
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1709
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
			int nLineNumber);  // 1705
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1205
	CTextureInfoId::SetResourceHandle(
				HRenderTexture hTex);  // 1712
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1712
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
			const CTextureInfoId& src);  // 1718
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1719
} /* size: 0, variables: 3, inline expansions: 23 (928 bytes) */

// <0030D87B> rendersystem/texturebase.cpp:1703
// variables: 4
// function calls: 23
void CTextureManagerBase::UnregisterTexture(CTextureBase* pTexture)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_1705; // 1705
	const char   __FUNCTION__; // 38391
	CTextureInfoId texId; // 1711
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1709
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
			int nLineNumber);  // 1705
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1205
	CTextureInfoId::SetResourceHandle(
				HRenderTexture hTex);  // 1712
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1712
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
			const CTextureInfoId& src);  // 1718
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1719
} /* size: 0, variables: 3, inline expansions: 23 (928 bytes) */

// <0032A531> rendersystem/texturebase.cpp:1722
// variables: 3
// function calls: 6
void CTextureManagerBase::SetDefaultTextureMemoryPoolSize(uint64 nGPUMemorySize)
{
	const uint64  nGPUMemoryInMB; // 1726
	int nValue; // 1728
	{
		const int  nMaxTexturePoolSize; // 1738
		Min<int>(const int& val1,
			const int& val2);  // 1739
	}
	Min<long long unsigned int>(const long long unsigned int& val1,
					const long long unsigned int& val2);  // 1726
	Max<int>(const int& val1,
		const int& val2);  // 1734
	ConVar::GetInt(); // 1742
	Min<int>(const int& val1,
		const int& val2);  // 1744
	ConVar::GetInt(); // 1747
} /* size: 308, variables: 2, inline expansions: 5 (67 bytes) */

// <0032A357> rendersystem/texturebase.cpp:1750
// variables: 7
// function call: 1
void CTextureManagerBase::SetTexturePoolSize(int nPoolSizeInMb)
{
	int nShadowTargetSize; // 1752
	{
		OsMemoryStatus_t memStatus; // 1756
		const int64_t  TWO_AND_A_HALF_MB; // 1758
		bool bLargeMemory; // 1759
		int nTargetPool; // 1761
		int nValue; // 1766
		Min<int>(const int& val1,
			const int& val2);  // 1767
	}
	{
		uint64 nGPUMemory; // 1774
	}
} /* size: 362, variables: 1 */

// <00346641> rendersystem/texturebase.cpp:1782
void CTextureManagerBase::SetTextureStreamMipBias(int nTextureMipBias)
{
} /* size: 11 */

// <0032A246> rendersystem/texturebase.cpp:1790
// variable: 1
// function calls: 3
void CTextureManagerBase::GetTextureSheet(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 1792
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 1792
	CTextureInfoId::GetSheet(); // 1793
} /* size: 67, variables: 1, inline expansions: 3 (54 bytes) */

// <0034790A> rendersystem/texturebase.cpp:1803
// variables: 4
// function calls: 6
void CTextureManagerBase::CheckForDeferedTextureLoad(const CTextureBase* pTexture)
{
	CTextureInfoChunkBase* pChunk; // 1810
	bool bDefer; // 1811
	int i; // 1812
	CTextureManagerBase::DeferTextureLoads(); // 1805
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
	CTextureInfoChunkBase::HasAllFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1275
	CTextureInfoChunkBase::SupportsPerMipStreaming(
				int nTexIdx);  // 1814
	{
		int nMaxReqSize; // 1816
		CInterlockedIntT<int, 4>::operator int(); // 1816
	}
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <0032A1EC> rendersystem/texturebase.cpp:1803
// variables: 4
void CTextureManagerBase::CheckForDeferedTextureLoad(const CTextureBase* pTexture)
{
	CTextureInfoChunkBase* pChunk; // 1810
	bool bDefer; // 1811
	int i; // 1812
	{
		int nMaxReqSize; // 1816
	}
} /* size: 0, variables: 3 */

// <003290BE> rendersystem/texturebase.cpp:1829
// variables: 6
// function calls: 70
void CTextureManagerBase::PreloadTextureBits(HRenderTexture hTexture, int32 nRequiredmipSize)
{
	const CTextureBase* pTexture; // 1839
	const char   __FUNCTION__; // 55884
	CacheRequest_t item; // 1858
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1865; // 1865
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1861
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1836
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 1839
	CTextureManagerBase::DeferTextureLoads(); // 1847
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 1856
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 71
	ResourceAddRef(ResourceHandle_t hResource,
			uintp nLeakTrackingPairingID,
			ResourceLeakTrackingGroup_t leakTrackingGroup);  // 1856
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 785
	CacheRequest_t::CacheRequest_t(); // 1858
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1859
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 1862
	CInterlockedIntT<int, 4>::GetRaw(); // 1057
	ThreadInterlockedAssignIf(volatile int32* p,
					int32 value,
					int32 comparand);  // 597
	CInterlockedIntT<int, 4>::AssignIf(
		int conditionValue,
		int newValue);  // 693
	CInterlockedIntT<int, 4>::Maximize(
		int operand);  // 1059
	CTextureInfoId::MarkUsed(
		int nRequestedTextureSize);  // 1863
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 1865
	CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::NumAllocated(); // 1196
	CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::Base(); // 112
	CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::Base(); // 368
	CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::IsGrowable(); // 823
	CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::GrowMemory(
			int num);  // 1198
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
	CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::AddToTail(
			const CacheRequest_t& src);  // 1866
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1867
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
	CTextureInfoChunkBase::HasAllFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1275
	CTextureInfoChunkBase::SupportsPerMipStreaming(
				int nTexIdx);  // 1814
	{
		int nMaxReqSize; // 1816
		CInterlockedIntT<int, 4>::operator int(); // 1816
	}
	CTextureManagerBase::CheckForDeferedTextureLoad(
					const CTextureBase* pTexture);  // 1847
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::NumAllocated(); // 1196
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
		int i);  // 1201
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1520
	CopyConstruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory,
									const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1201
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
	Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 368
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 824
	GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			int num);  // 1198
	AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1845
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 1850
	CResourceName::Get(); // 1850
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 1850
} /* size: 1411, variables: 4, inline expansions: 69 (2743 bytes) */

// <0030C157> rendersystem/texturebase.cpp:1829
// variables: 6
// function calls: 70
void CTextureManagerBase::PreloadTextureBits(HRenderTexture hTexture, int32 nRequiredmipSize)
{
	const CTextureBase* pTexture; // 1839
	const char   __FUNCTION__; // 38418
	CacheRequest_t item; // 1858
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1865; // 1865
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1861
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1836
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 1839
	CTextureManagerBase::DeferTextureLoads(); // 1847
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 1856
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 71
	ResourceAddRef(ResourceHandle_t hResource,
			uintp nLeakTrackingPairingID,
			ResourceLeakTrackingGroup_t leakTrackingGroup);  // 1856
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 785
	CacheRequest_t::CacheRequest_t(); // 1858
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1859
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 1862
	CInterlockedIntT<int, 4>::GetRaw(); // 1057
	ThreadInterlockedAssignIf(volatile int32* p,
					int32 value,
					int32 comparand);  // 597
	CInterlockedIntT<int, 4>::AssignIf(
		int conditionValue,
		int newValue);  // 693
	CInterlockedIntT<int, 4>::Maximize(
		int operand);  // 1059
	CTextureInfoId::MarkUsed(
		int nRequestedTextureSize);  // 1863
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 1865
	CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::NumAllocated(); // 1196
	CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::Base(); // 112
	CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::Base(); // 368
	CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::IsGrowable(); // 823
	CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::GrowMemory(
			int num);  // 1198
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
	CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::AddToTail(
			const CacheRequest_t& src);  // 1866
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1867
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
	CTextureInfoChunkBase::HasAllFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1275
	CTextureInfoChunkBase::SupportsPerMipStreaming(
				int nTexIdx);  // 1814
	{
		int nMaxReqSize; // 1816
		CInterlockedIntT<int, 4>::operator int(); // 1816
	}
	CTextureManagerBase::CheckForDeferedTextureLoad(
					const CTextureBase* pTexture);  // 1847
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::NumAllocated(); // 1196
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
		int i);  // 1201
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1520
	CopyConstruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory,
									const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1201
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
	Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 368
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 824
	GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			int num);  // 1198
	AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1845
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 1850
	CResourceName::Get(); // 1850
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 1850
} /* size: 1411, variables: 4, inline expansions: 69 (2743 bytes) */

// <0032897C> rendersystem/texturebase.cpp:1869
// variables: 2
// function calls: 30
void CTextureManagerBase::UnloadTextureBits(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 1874
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1882; // 1882
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1871
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1871
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 1874
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 1878
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 1881
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 71
	ResourceAddRef(ResourceHandle_t hResource,
			uintp nLeakTrackingPairingID,
			ResourceLeakTrackingGroup_t leakTrackingGroup);  // 1881
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 1882
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::NumAllocated(); // 1196
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
		int i);  // 1201
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1520
	CopyConstruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory,
									const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1201
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
	Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 368
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 824
	GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			int num);  // 1198
	AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1883
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1884
} /* size: 353, variables: 2, inline expansions: 30 (704 bytes) */

// <003287ED> rendersystem/texturebase.cpp:1886
// variable: 1
// function calls: 6
void CTextureManagerBase::AreTextureBitsLoaded(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 1888
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 1888
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 1891
} /* size: 86, variables: 1, inline expansions: 6 (149 bytes) */

// <003286E8> rendersystem/texturebase.cpp:1895
// variable: 1
// function calls: 3
void CTextureManagerBase::SetTextureStreamingPriority(HRenderTexture hTexture, RenderTextureStreamingPriority_t eTextureStreamingPriority)
{
	CTextureBase* pTexture; // 1897
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 1897
	CTextureInfoId::SetTextureStreamingPriority(
					RenderTextureStreamingPriority_t ePriority);  // 1900
} /* size: 62, variables: 1, inline expansions: 3 (53 bytes) */

// <00328609> rendersystem/texturebase.cpp:1905
// variable: 1
// function calls: 3
void CTextureManagerBase::GetTextureStreamingPriority(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 1907
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 1907
	CTextureInfoId::GetTextureStreamingPriority(); // 1910
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <002F71DB> rendersystem/texturebase.cpp:1918
// variables: 19
// function calls: 203
void CTextureManagerBase::MN_CacheRequestedResources(CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >& toCacheList)
{
	int nResourceCount; // 1920
	const char   __FUNCTION__; // 56100
	{
		int r; // 1921
		{
			HRenderTexture hResource; // 1923
			CTextureBase* pTexture; // 1924
			int64 nStreamingBitsOffset; // 1934
			const TextureSpecification_t* pOnDiskSpec; // 1940
			TextureSpecification_t texSpec; // 1942
			size_t nStreamingBitsByteCount; // 1946
			IAsyncResourceDataRequest* pRequest; // 1951
			const HRenderTexture  hTextureHandle; // 1954
			const int  nStreamingRequestId; // 1955
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1962
			}
			CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::operator[](
					int i);  // 1923
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1923
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 1924
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
			CTextureInfoChunkBase::HasAnyFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1017
			CTextureInfoId::HasAnyFlags(
					uint16 nFlagsToTest);  // 1927
			__atomic_base<short unsigned int>::operator|=(
					__int_type __i);  // 530
			CTextureInfoChunkBase::SetFlags(
				int nTexId,
				uint16 nFlagsToSet);  // 1007
			CTextureInfoId::SetFlags(
				uint16 nFlagsToSet);  // 1931
			{
			}
			CTextureManagerBase::GetNewStreamingRequestId(); // 1932
			CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
			CUtlMemory<unsigned int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 434
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
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
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
					const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
			CTextureDesc::operator=(
					const CTextureDesc& rhs);  // 147
			CTextureDesc::CTextureDesc(
					const CTextureDesc& rhs);  // 38
			CUtlMemory<float, int>::ValidateGrowSize(); // 475
			CUtlMemory<float, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 434
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
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
			TextureSpecification_t::TextureSpecification_t(
						const TextureSpecification_t  &);  // 1942
			CTextureInfoId::SetPendingStreamingRequestId(
							int32 nId);  // 1932
			CTextureInfoId::GetStreamingBitsOffset(); // 1934
			CTextureInfoId::GetDiskSpec(); // 388
			CTextureBase::GetDiskSpec(); // 1940
			CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::operator[](
					int i);  // 1946
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
			CTextureInfoId::GetResourceHandle(); // 478
			CTextureBase::GetTextureHandle(); // 1954
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
					const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 434
			CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
			CUtlMemory<unsigned int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 434
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
					const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
			CTextureDesc::operator=(
					const CTextureDesc& rhs);  // 147
			CTextureDesc::CTextureDesc(
					const CTextureDesc& rhs);  // 38
			CUtlMemory<float, int>::ValidateGrowSize(); // 475
			CUtlMemory<float, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 434
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
			TextureSpecification_t::TextureSpecification_t(
						const TextureSpecification_t  &);  // 1957
			CTextureInfoId::GetPendingStreamingRequestId(); // 1955
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1957
			{
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1957
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
							int elem,
							int num);  // 1437
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
							int elem,
							int num);  // 1294
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddMultipleToTail(
							int num);  // 1319
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveMultipleFromTail(
							int num);  // 1323
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount(
					int count);  // 573
				CUtlMemory<unsigned int, int>::Base(); // 112
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 574
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
				CUtlMemory<float, int>::ValidateGrowSize(); // 475
				CUtlMemory<float, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 434
				CUtlMemory<float, int>::Base(); // 112
				CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
				CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
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
				TextureSpecification_t::TextureSpecification_t(
							const TextureSpecification_t  &);  // 1957
				<lambda>(const class* this,
					const   &);  // 163
				_M_create<CTextureManagerBase::MN_CacheRequestedResources(CUtlVector<ToCacheHandle_t>&)::<lambda(IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult>)> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
				_M_init_functor<CTextureManagerBase::MN_CacheRequestedResources(CUtlVector<ToCacheHandle_t>&)::<lambda(IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult>)> >(union _Any_data& __functor,
																class& __f); // 451
				_M_not_empty_function<CTextureManagerBase::MN_CacheRequestedResources(CUtlVector<ToCacheHandle_t>&)::<lambda(IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult>)> >(const &); // 449
			}
			_Function_base::_Function_base(); // 439
			function<void(IAsyncResourceDataRequest::function<CTextureManagerBase::MN_CacheRequestedResources(
																class& __f);  // 1957
			_Function_base::~_Function_base(); // 336
			function<void(IAsyncResourceDataRequest::~function(); // 1957
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
			TextureSpecification_t::~TextureSpecification_t(); // 1957
			~<lambda>(const class* this); // 1957
			CInterlockedIntT<int, 4>::operator int(); // 1962
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 1963
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
			TextureSpecification_t::~TextureSpecification_t(); // 1964
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 176
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 176
			{
			}
			{
			}
			CTextureDesc::GetArrayCount(); // 155
			CTextureDesc::GetDepth(); // 155
			TextureSpecification_t::GetGpuMemorySizeInBytes(); // 136
			{
				const int  nOriginalMips; // 141
				const int  nMipDiff; // 142
				uint nBytes; // 144
				{
					int nMip; // 145
				}
			}
			TextureSpecification_t::GetStreamingBitsByteCount(); // 132
			TextureSpecification_t::GetStreamingBitsByteCount(); // 1946
		}
	}
	Count(const CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> > this); // 1920
} /* size: 0, variables: 2, inline expansions: 1 (17 bytes) */

// <002DA274> rendersystem/texturebase.cpp:1918
// variables: 19
// function calls: 203
void CTextureManagerBase::MN_CacheRequestedResources(CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >& toCacheList)
{
	int nResourceCount; // 1920
	const char   __FUNCTION__; // 38634
	{
		int r; // 1921
		{
			HRenderTexture hResource; // 1923
			CTextureBase* pTexture; // 1924
			int64 nStreamingBitsOffset; // 1934
			const TextureSpecification_t* pOnDiskSpec; // 1940
			TextureSpecification_t texSpec; // 1942
			size_t nStreamingBitsByteCount; // 1946
			IAsyncResourceDataRequest* pRequest; // 1951
			const HRenderTexture  hTextureHandle; // 1954
			const int  nStreamingRequestId; // 1955
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1962
			}
			CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::operator[](
					int i);  // 1923
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1923
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 1924
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
			CTextureInfoChunkBase::HasAnyFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1017
			CTextureInfoId::HasAnyFlags(
					uint16 nFlagsToTest);  // 1927
			__atomic_base<short unsigned int>::operator|=(
					__int_type __i);  // 530
			CTextureInfoChunkBase::SetFlags(
				int nTexId,
				uint16 nFlagsToSet);  // 1007
			CTextureInfoId::SetFlags(
				uint16 nFlagsToSet);  // 1931
			{
			}
			CTextureManagerBase::GetNewStreamingRequestId(); // 1932
			CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
			CUtlMemory<unsigned int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 434
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
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
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
					const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
			CTextureDesc::operator=(
					const CTextureDesc& rhs);  // 147
			CTextureDesc::CTextureDesc(
					const CTextureDesc& rhs);  // 38
			CUtlMemory<float, int>::ValidateGrowSize(); // 475
			CUtlMemory<float, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 434
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
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
			TextureSpecification_t::TextureSpecification_t(
						const TextureSpecification_t  &);  // 1942
			CTextureInfoId::SetPendingStreamingRequestId(
							int32 nId);  // 1932
			CTextureInfoId::GetStreamingBitsOffset(); // 1934
			CTextureInfoId::GetDiskSpec(); // 388
			CTextureBase::GetDiskSpec(); // 1940
			CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::operator[](
					int i);  // 1946
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
			CTextureInfoId::GetResourceHandle(); // 478
			CTextureBase::GetTextureHandle(); // 1954
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
					const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 434
			CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
			CUtlMemory<unsigned int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 434
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
					const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
			CTextureDesc::operator=(
					const CTextureDesc& rhs);  // 147
			CTextureDesc::CTextureDesc(
					const CTextureDesc& rhs);  // 38
			CUtlMemory<float, int>::ValidateGrowSize(); // 475
			CUtlMemory<float, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 434
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
			TextureSpecification_t::TextureSpecification_t(
						const TextureSpecification_t  &);  // 1957
			CTextureInfoId::GetPendingStreamingRequestId(); // 1955
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1957
			{
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1957
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
							int elem,
							int num);  // 1437
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
							int elem,
							int num);  // 1294
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddMultipleToTail(
							int num);  // 1319
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveMultipleFromTail(
							int num);  // 1323
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount(
					int count);  // 573
				CUtlMemory<unsigned int, int>::Base(); // 112
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 574
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
				CUtlMemory<float, int>::ValidateGrowSize(); // 475
				CUtlMemory<float, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 434
				CUtlMemory<float, int>::Base(); // 112
				CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
				CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
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
				TextureSpecification_t::TextureSpecification_t(
							const TextureSpecification_t  &);  // 1957
				<lambda>(const class* this,
					const   &);  // 163
				_M_create<CTextureManagerBase::MN_CacheRequestedResources(CUtlVector<ToCacheHandle_t>&)::<lambda(IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult>)> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
				_M_init_functor<CTextureManagerBase::MN_CacheRequestedResources(CUtlVector<ToCacheHandle_t>&)::<lambda(IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult>)> >(union _Any_data& __functor,
																class& __f); // 451
				_M_not_empty_function<CTextureManagerBase::MN_CacheRequestedResources(CUtlVector<ToCacheHandle_t>&)::<lambda(IAsyncResourceDataRequest*, std::unique_ptr<IAsyncProcessedDataResult>)> >(const &); // 449
			}
			_Function_base::_Function_base(); // 439
			function<void(IAsyncResourceDataRequest::function<CTextureManagerBase::MN_CacheRequestedResources(
																class& __f);  // 1957
			_Function_base::~_Function_base(); // 336
			function<void(IAsyncResourceDataRequest::~function(); // 1957
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
			TextureSpecification_t::~TextureSpecification_t(); // 1957
			~<lambda>(const class* this); // 1957
			CInterlockedIntT<int, 4>::operator int(); // 1962
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 1963
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
			TextureSpecification_t::~TextureSpecification_t(); // 1964
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 176
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 176
			{
			}
			{
			}
			CTextureDesc::GetArrayCount(); // 155
			CTextureDesc::GetDepth(); // 155
			TextureSpecification_t::GetGpuMemorySizeInBytes(); // 136
			{
				const int  nOriginalMips; // 141
				const int  nMipDiff; // 142
				uint nBytes; // 144
				{
					int nMip; // 145
				}
			}
			TextureSpecification_t::GetStreamingBitsByteCount(); // 132
			TextureSpecification_t::GetStreamingBitsByteCount(); // 1946
		}
	}
	Count(const CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> > this); // 1920
} /* size: 0, variables: 2, inline expansions: 1 (17 bytes) */

// <00326DD7> rendersystem/texturebase.cpp:1968
// variables: 6
// function calls: 97
void CTextureManagerBase::MN_OnResourceFileLoaded(IAsyncResourceDataRequest* pRequest, HRenderTexture hTexture, CTextureBase* pTexture, const TextureSpecification_t& texSpec, int32 nStreamingRequestId)
{
	bool bAbandonRequest; // 1980
	const char   __FUNCTION__; // 56019
	bool bFailMsgQueued; // 1991
	AsyncTextureHookupData_t hookupData; // 2063
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1986
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2046
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1980
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1985
	CInterlockedIntT<int, 4>::operator int(); // 1986
	CInterlockedIntT<int, 4>::GetRaw(); // 383
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetRefCount(); // 2008
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2001
	CTextureInfoId::GetPendingStreamingRequestId(); // 2016
	CTextureInfoId::GetPendingStreamingRequestId(); // 2024
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 2045
	CInterlockedIntT<int, 4>::operator int(); // 2046
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 2018
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
	TextureSpecification_t::TextureSpecification_t(); // 803
	AsyncTextureHookupData_t::AsyncTextureHookupData_t(); // 2063
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
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 574
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
	TextureSpecification_t::operator=(
			const TextureSpecification_t& rhs);  // 2064
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
	TextureSpecification_t::~TextureSpecification_t(); // 803
	AsyncTextureHookupData_t::~AsyncTextureHookupData_t(); // 2073
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 2026
	CTextureInfoId::GetPendingStreamingRequestId(); // 2022
} /* size: 0, variables: 4, inline expansions: 97 (2699 bytes) */

// <00309E70> rendersystem/texturebase.cpp:1968
// variables: 6
// function calls: 97
void CTextureManagerBase::MN_OnResourceFileLoaded(IAsyncResourceDataRequest* pRequest, HRenderTexture hTexture, CTextureBase* pTexture, const TextureSpecification_t& texSpec, int32 nStreamingRequestId)
{
	bool bAbandonRequest; // 1980
	const char   __FUNCTION__; // 38553
	bool bFailMsgQueued; // 1991
	AsyncTextureHookupData_t hookupData; // 2063
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1986
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2046
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1980
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 1985
	CInterlockedIntT<int, 4>::operator int(); // 1986
	CInterlockedIntT<int, 4>::GetRaw(); // 383
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetRefCount(); // 2008
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2001
	CTextureInfoId::GetPendingStreamingRequestId(); // 2016
	CTextureInfoId::GetPendingStreamingRequestId(); // 2024
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 2045
	CInterlockedIntT<int, 4>::operator int(); // 2046
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 2018
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
	TextureSpecification_t::TextureSpecification_t(); // 803
	AsyncTextureHookupData_t::AsyncTextureHookupData_t(); // 2063
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
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 574
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
	TextureSpecification_t::operator=(
			const TextureSpecification_t& rhs);  // 2064
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
	TextureSpecification_t::~TextureSpecification_t(); // 803
	AsyncTextureHookupData_t::~AsyncTextureHookupData_t(); // 2073
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 2026
	CTextureInfoId::GetPendingStreamingRequestId(); // 2022
} /* size: 0, variables: 4, inline expansions: 97 (2699 bytes) */

// <002FBFAF> rendersystem/texturebase.cpp:2075
// variables: 9
// function calls: 286
void CTextureManagerBase::MN_AddAsyncTextureBitsHookupJob(CTextureBase* pTexture, const AsyncTextureHookupData_t& texData)
{
	const char   __FUNCTION__; // 56235
	CResourceNameGetter resourceName; // 2084
	const ResourceId_t  texResourceId; // 2085
	 HookupFn; // 2090
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2077
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2078
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2077
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 2078
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 2080
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 478
	CTextureBase::GetTextureHandle(); // 2084
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 2084
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 2088
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 478
	CTextureBase::GetTextureHandle(); // 2093
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
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 574
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 574
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 565
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 434
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
			const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 147
	CTextureDesc::CTextureDesc(
			const CTextureDesc& rhs);  // 38
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
	TextureSpecification_t::TextureSpecification_t(
				const TextureSpecification_t  &);  // 803
	AsyncTextureHookupData_t::AsyncTextureHookupData_t(
				const AsyncTextureHookupData_t  &);  // 2093
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 2090
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
	TextureSpecification_t::TextureSpecification_t(
				const TextureSpecification_t  &);  // 2093
	CResourceName::Get(); // 2093
	CUtlString::CUtlString(
			const char* pString);  // 2093
	{
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
		CUtlMemory<unsigned int, int>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 574
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
		TextureSpecification_t::TextureSpecification_t(
					const TextureSpecification_t  &);  // 803
		AsyncTextureHookupData_t::AsyncTextureHookupData_t(
					const AsyncTextureHookupData_t  &);  // 2090
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2090
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
		UtlTraitsCopyRange<float>(const float* pFrom,
						const float* pFromEnd,
						float* pTo);  // 173
		UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
						const unsigned int* pFromEnd,
						unsigned int* pTo);  // 574
		CUtlMemory<unsigned int, int>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 574
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
				const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 565
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
				const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
				const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 434
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
				const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
		CTextureDesc::operator=(
				const CTextureDesc& rhs);  // 147
		CTextureDesc::CTextureDesc(
				const CTextureDesc& rhs);  // 38
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
		TextureSpecification_t::TextureSpecification_t(
					const TextureSpecification_t  &);  // 2090
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 2090
		<lambda>(const class* this,
			const   &);  // 163
		_M_create<CTextureManagerBase::MN_AddAsyncTextureBitsHookupJob(CTextureBase*, const AsyncTextureHookupData_t&)::<lambda()>&>(union _Any_data& __dest,
																class& __f,
																false_type); // 217
		_M_init_functor<CTextureManagerBase::MN_AddAsyncTextureBitsHookupJob(CTextureBase*, const AsyncTextureHookupData_t&)::<lambda()>&>(union _Any_data& __functor,
																class& __f); // 451
		_M_not_empty_function<CTextureManagerBase::MN_AddAsyncTextureBitsHookupJob(CTextureBase*, const AsyncTextureHookupData_t&)::<lambda()> >(const &); // 449
	}
	_Function_base::_Function_base(); // 439
	function<void()>::function<CTextureManagerBase::MN_AddAsyncTextureBitsHookupJob(
																class& __f); // 2095
	IThreadPool::QueueCall(
			const char* szDescription,
			function<void()>& func);  // 2095
	_Function_base::~_Function_base(); // 336
	function<void()>::~function()>* this); // 2095
	CUtlString::~CUtlString(); // 2090
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
	TextureSpecification_t::~TextureSpecification_t(); // 2090
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
	TextureSpecification_t::~TextureSpecification_t(); // 803
	AsyncTextureHookupData_t::~AsyncTextureHookupData_t(); // 2090
	~<lambda>(const class* this); // 2096
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 2096
} /* size: 0, variables: 4, inline expansions: 181 (8934 bytes) */

// <002DF048> rendersystem/texturebase.cpp:2075
// variables: 9
// function calls: 286
void CTextureManagerBase::MN_AddAsyncTextureBitsHookupJob(CTextureBase* pTexture, const AsyncTextureHookupData_t& texData)
{
	const char   __FUNCTION__; // 38769
	CResourceNameGetter resourceName; // 2084
	const ResourceId_t  texResourceId; // 2085
	 HookupFn; // 2090
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2077
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2078
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2077
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 2078
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 2080
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 478
	CTextureBase::GetTextureHandle(); // 2084
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 2084
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 2088
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 478
	CTextureBase::GetTextureHandle(); // 2093
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
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 574
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 574
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 565
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 434
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
			const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 147
	CTextureDesc::CTextureDesc(
			const CTextureDesc& rhs);  // 38
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
	TextureSpecification_t::TextureSpecification_t(
				const TextureSpecification_t  &);  // 803
	AsyncTextureHookupData_t::AsyncTextureHookupData_t(
				const AsyncTextureHookupData_t  &);  // 2093
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 2090
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
	TextureSpecification_t::TextureSpecification_t(
				const TextureSpecification_t  &);  // 2093
	CResourceName::Get(); // 2093
	CUtlString::CUtlString(
			const char* pString);  // 2093
	{
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
		CUtlMemory<unsigned int, int>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 574
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
		TextureSpecification_t::TextureSpecification_t(
					const TextureSpecification_t  &);  // 803
		AsyncTextureHookupData_t::AsyncTextureHookupData_t(
					const AsyncTextureHookupData_t  &);  // 2090
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2090
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
		UtlTraitsCopyRange<float>(const float* pFrom,
						const float* pFromEnd,
						float* pTo);  // 173
		UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
						const unsigned int* pFromEnd,
						unsigned int* pTo);  // 574
		CUtlMemory<unsigned int, int>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 574
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
				const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 565
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
				const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
				const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 434
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
				const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
		CTextureDesc::operator=(
				const CTextureDesc& rhs);  // 147
		CTextureDesc::CTextureDesc(
				const CTextureDesc& rhs);  // 38
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
		TextureSpecification_t::TextureSpecification_t(
					const TextureSpecification_t  &);  // 2090
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 2090
		<lambda>(const class* this,
			const   &);  // 163
		_M_create<CTextureManagerBase::MN_AddAsyncTextureBitsHookupJob(CTextureBase*, const AsyncTextureHookupData_t&)::<lambda()>&>(union _Any_data& __dest,
																class& __f,
																false_type); // 217
		_M_init_functor<CTextureManagerBase::MN_AddAsyncTextureBitsHookupJob(CTextureBase*, const AsyncTextureHookupData_t&)::<lambda()>&>(union _Any_data& __functor,
																class& __f); // 451
		_M_not_empty_function<CTextureManagerBase::MN_AddAsyncTextureBitsHookupJob(CTextureBase*, const AsyncTextureHookupData_t&)::<lambda()> >(const &); // 449
	}
	_Function_base::_Function_base(); // 439
	function<void()>::function<CTextureManagerBase::MN_AddAsyncTextureBitsHookupJob(
																class& __f); // 2095
	IThreadPool::QueueCall(
			const char* szDescription,
			function<void()>& func);  // 2095
	_Function_base::~_Function_base(); // 336
	function<void()>::~function()>* this); // 2095
	CUtlString::~CUtlString(); // 2090
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
	TextureSpecification_t::~TextureSpecification_t(); // 2090
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
	TextureSpecification_t::~TextureSpecification_t(); // 803
	AsyncTextureHookupData_t::~AsyncTextureHookupData_t(); // 2090
	~<lambda>(const class* this); // 2096
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 2096
} /* size: 0, variables: 4, inline expansions: 181 (8934 bytes) */

// <00326C35> rendersystem/texturebase.cpp:2099
// variables: 14
uint8* DecompressTextureMips(const TextureSpecification_t& texSpec, const void* pData, uint nDataSize, const CUtlString& resourceName, uint8* pDstData)
{
	const char   __FUNCTION__; // 55965
	const uint  nGpuTexSize; // 2107
	const char* pSrcData; // 2110
	uint8* pDecodedTextureData; // 2111
	CFastTimer decompressionTimer; // 2113
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2101
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2104
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2108
	}
	{
		int nMip; // 2117
		{
			int nCompressedMipSize; // 2119
			int nBytesDecompressed; // 2120
			bool bIsMipCompressed; // 2122
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2129
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2144
	}
} /* size: 0, variables: 5 */

// <00309CCE> rendersystem/texturebase.cpp:2099
// variables: 14
uint8* DecompressTextureMips(const TextureSpecification_t& texSpec, const void* pData, uint nDataSize, const CUtlString& resourceName, uint8* pDstData)
{
	const char   __FUNCTION__; // 38499
	const uint  nGpuTexSize; // 2107
	const char* pSrcData; // 2110
	uint8* pDecodedTextureData; // 2111
	CFastTimer decompressionTimer; // 2113
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2101
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2104
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2108
	}
	{
		int nMip; // 2117
		{
			int nCompressedMipSize; // 2119
			int nBytesDecompressed; // 2120
			bool bIsMipCompressed; // 2122
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2129
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2144
	}
} /* size: 0, variables: 5 */

// <00326A89> rendersystem/texturebase.cpp:2152
// variables: 14
uint8* DecompressPassthroughTexture(const TextureSpecification_t& texSpec, const TextureSpecification_t& diskSpec, const void* pData, int nDataSize, Bitmap_t* uncompressedTempBitmap, bool* bFreeData)
{
	float64 flStartTime; // 2154
	uint8* pDecodedTextureData; // 2158
	CUtlBuffer tmpBuf; // 2161
	const char   __FUNCTION__; // 56154
	float64 flElapsed; // 2195
	{
		const int  nPixelCount; // 2170
		uint32* pUncompressedData; // 2171
		{
			int i; // 2172
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2186
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2187
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2188
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2189
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2190
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2191
	}
} /* size: 0, variables: 5 */

// <00309B22> rendersystem/texturebase.cpp:2152
// variables: 14
uint8* DecompressPassthroughTexture(const TextureSpecification_t& texSpec, const TextureSpecification_t& diskSpec, const void* pData, int nDataSize, Bitmap_t* uncompressedTempBitmap, bool* bFreeData)
{
	float64 flStartTime; // 2154
	uint8* pDecodedTextureData; // 2158
	CUtlBuffer tmpBuf; // 2161
	const char   __FUNCTION__; // 38688
	float64 flElapsed; // 2195
	{
		const int  nPixelCount; // 2170
		uint32* pUncompressedData; // 2171
		{
			int i; // 2172
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2186
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2187
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2188
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2189
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2190
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2191
	}
} /* size: 0, variables: 5 */

// <003266C4> rendersystem/texturebase.cpp:2201
// variables: 3
// function calls: 11
void CTextureManagerBase::GetDecompressionBuffer(uint32 nGpuTexSize)
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2205; // 2205
		{
			uint8* pBuffer; // 2208
			uint32 nBufferSize; // 2209
			pair<unsigned char::pair<unsigned char*&, unsigned int&>(
								unsigned char *& __x,
								unsigned int& __y);  // 2214
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
				int nLineNumber);  // 2205
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2216
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2216
	}
	pair<unsigned char::pair<unsigned char*, unsigned int&>(
						unsigned char *& __x,
						unsigned int& __y);  // 2219
} /* size: 330, inline expansions: 1 (0 bytes) */

// <003263D0> rendersystem/texturebase.cpp:2222
// variables: 3
// function calls: 9
void CTextureManagerBase::FreeDecompressionBuffer(CUtlPair buffer)
{
	const char   __FUNCTION__; // 56019
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2226
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2232; // 2232
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 2232
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2241
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2241
	}
} /* size: 0, variables: 1 */

// <00309469> rendersystem/texturebase.cpp:2222
// variables: 3
// function calls: 9
void CTextureManagerBase::FreeDecompressionBuffer(CUtlPair buffer)
{
	const char   __FUNCTION__; // 38553
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2226
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2232; // 2232
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 2232
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2241
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2241
	}
} /* size: 0, variables: 1 */

// <00321FCF> rendersystem/texturebase.cpp:2248
// variables: 42
// function calls: 247
void CTextureManagerBase::AsyncHookUpTextureBits(CTextureBase* pTexture_UNSAFE, HRenderTexture hTextureHandle, ResourceId_t texResourceId, const AsyncTextureHookupData_t& texData, const TextureSpecification_t& diskSpec, CUtlString resourceName)
{
	const TextureSpecification_t& texSpec; // 2256
	const TextureBitsMemoryType_t  nMemoryType; // 2257
	Bitmap_t uncompressedTempBitmap; // 2270
	CUtlPair decompressionBuffer; // 2271
	const uint32  nGpuTexSize; // 2272
	const uint8* pDecodedTextureData; // 2273
	bool bFreeDecodedData; // 2274
	bool bFreeData; // 2275
	const char   __FUNCTION__; // 55992
	TextureObjectInfo_t textureObject; // 2298
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2294
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2302
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2321
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2326; // 2326
		CTextureBase* pTexture; // 2328
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2332
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
				int nLineNumber);  // 2326
		pair<ResourceId_t, long unsigned int>::pair<ResourceId_t&, long unsigned int>(
							ResourceId_t& __x,
							long unsigned int& __y);  // 1169
		make_pair<ResourceId_t&, long unsigned int>(ResourceId_t& __x,
								long unsigned int& __y);  // 2330
		{
			int i; // 1531
			Count(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned i this); // 1531
			CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::operator[](
					int i);  // 609
			Element(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned i this,
				int i);  // 1533
			ResourceId_t::operator==(
					const ResourceId_t& other);  // 1036
			operator==<ResourceId_t, long unsigned int, ResourceId_t, long unsigned int>(const pair<ResourceId_t, long unsigned int>& __x,
													const pair<ResourceId_t, long unsigned int>& __y);  // 1533
		}
		Find(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned i this,
			const pair<ResourceId_t, long unsigned int>& src);  // 1629
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this,
			int i);  // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this,
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		Destruct<std::pair<ResourceId_t, long unsigned int> >(pair<ResourceId_t, long unsigned int>* pMemory); // 1575
		FastRemove(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this,
				int elem);  // 1632
		FindAndFastRemove(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this,
					const pair<ResourceId_t, long unsigned int>& src);  // 2330
		CUtlString::Get(); // 2344
		__atomic_base<short unsigned int>::load(
			memory_order __m);  // 361
		__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
		CTextureInfoChunkBase::HasAnyFlags(
				int nTexId,
				uint16 nFlagsToTest);  // 1017
		CTextureInfoId::HasAnyFlags(
				uint16 nFlagsToTest);  // 2332
		__atomic_base<short unsigned int>::operator&=(
				__int_type __i);  // 531
		CTextureInfoChunkBase::ClearFlags(
				int nTexId,
				uint16 nFlagsToClear);  // 1012
		CTextureInfoId::ClearFlags(
				uint16 nFlagsToClear);  // 2333
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
		CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 434
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
				const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
		CTextureDesc::operator=(
				const CTextureDesc& rhs);  // 147
		CTextureDesc::CTextureDesc(
				const CTextureDesc& rhs);  // 38
		CUtlMemory<float, int>::ValidateGrowSize(); // 475
		CUtlMemory<float, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 434
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
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
		TextureSpecification_t::TextureSpecification_t(
					const TextureSpecification_t  &);  // 236
		TextureObjectInfo_t::TextureObjectInfo_t(
					const TextureObjectInfo_t  &);  // 2336
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
		TextureSpecification_t::~TextureSpecification_t(); // 236
		TextureObjectInfo_t::~TextureObjectInfo_t(); // 2336
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2346
	}
	CUtlString::Get(); // 2263
	Bitmap_t::Reset(); // 31
	Bitmap_t::Bitmap_t(); // 2270
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
	TextureSpecification_t::GetGpuMemorySizeInBytes(); // 2272
	TextureSpecification_t::HasCompressedMips(); // 2281
	pair<unsigned char::operator=(
			pair<unsigned char*, unsigned int>& __p);  // 2291
	TextureSpecification_t::HasCompressedMips(); // 2101
	{
	}
	{
	}
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
	TextureSpecification_t::GetGpuMemorySizeInBytes(); // 2107
	{
	}
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 63
	CFastTimer::CFastTimer(); // 2113
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 335
	CFastTimer::Start(); // 2114
	{
		int nMip; // 2117
		{
			int nCompressedMipSize; // 2119
			int nBytesDecompressed; // 2120
			bool bIsMipCompressed; // 2122
			{
				const int  nOriginalMips; // 114
				const int  nMipDiff; // 115
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 114
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
						int i);  // 116
			}
			TextureSpecification_t::GetCompressedMipSize(
						int nMip);  // 108
			{
			}
			TextureSpecification_t::HasCompressedMips(); // 112
			Max<int>(const int& val1,
				const int& val2);  // 126
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 187
			CTextureDesc::GetDepth(); // 128
			Max<int>(const int& val1,
				const int& val2);  // 127
			Max<int>(const int& val1,
				const int& val2);  // 128
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 176
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			CTextureDesc::GetArrayCount(); // 129
			TextureSpecification_t::GetUncompressedMipSize(
						uint nMip);  // 120
			TextureSpecification_t::GetCompressedMipSize(
						int nMip);  // 2119
			TextureSpecification_t::HasCompressedMips(); // 100
			{
			}
			{
				const int  nOriginalMips; // 114
				const int  nMipDiff; // 115
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 114
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
						int i);  // 116
			}
			TextureSpecification_t::GetCompressedMipSize(
						int nMip);  // 108
			TextureSpecification_t::HasCompressedMips(); // 112
			Max<int>(const int& val1,
				const int& val2);  // 126
			Max<int>(const int& val1,
				const int& val2);  // 127
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 187
			CTextureDesc::GetDepth(); // 128
			Max<int>(const int& val1,
				const int& val2);  // 128
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 176
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			CTextureDesc::GetArrayCount(); // 129
			TextureSpecification_t::GetUncompressedMipSize(
						uint nMip);  // 120
			TextureSpecification_t::GetCompressedMipSize(
						int nMip);  // 105
			Max<int>(const int& val1,
				const int& val2);  // 126
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 187
			CTextureDesc::GetDepth(); // 128
			Max<int>(const int& val1,
				const int& val2);  // 127
			Max<int>(const int& val1,
				const int& val2);  // 128
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 176
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			CTextureDesc::GetArrayCount(); // 129
			TextureSpecification_t::GetUncompressedMipSize(
						uint nMip);  // 105
			TextureSpecification_t::IsMipCompressed(
					int nMip);  // 98
			TextureSpecification_t::IsMipCompressed(
					int nMip);  // 2122
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 2138
			{
				CUtlString::Get(); // 2129
			}
		}
	}
	{
	}
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 344
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 345
	CFastTimer::End(); // 2146
	CCycleCount::GetSeconds(); // 2147
	CCycleCount::GetMillisecondsF(); // 2147
	DecompressTextureMips(const TextureSpecification_t& texSpec,
				const void* pData,
				uint nDataSize,
				const CUtlString& resourceName,
				uint8* pDstData);  // 2292
	{
		const int  nPixelCount; // 2170
		uint32* pUncompressedData; // 2171
		Bitmap_t::GetBits(); // 2171
		{
			int i; // 2172
		}
	}
	operator&(TextureDecodingFlags_t a,
			TextureDecodingFlags_t b);  // 2178
	Bitmap_t::GetBits(); // 2182
	operator&(TextureDecodingFlags_t a,
			TextureDecodingFlags_t b);  // 2184
	{
	}
	{
	}
	{
	}
	{
	}
	Bitmap_t::Width(); // 2190
	{
	}
	Bitmap_t::Height(); // 2191
	{
	}
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 2199
	Bitmap_t::Width(); // 394
	Bitmap_t::Height(); // 395
	{
		int y; // 396
		{
			int x; // 398
			{
				uint8 nCurrAlpha; // 400
				int nWeight; // 406
				int nR; // 407
				int nG; // 408
				int nB; // 409
				{
					int dy; // 410
					{
						int dx; // 412
						{
							int x2; // 414
							int y2; // 415
							Color c; // 416
							clamp<int, int>(const int& val,
									const int& minVal,
									const int& maxVal);  // 415
							clamp<int, int>(const int& val,
									const int& minVal,
									const int& maxVal);  // 414
						}
					}
				}
				{
					Color c; // 429
					Color::SetColor(
						int _r,
						int _g,
						int _b,
						int _a);  // 50
					Color::Color(
						int _r,
						int _g,
						int _b,
						int _a);  // 429
				}
			}
		}
	}
	DilateColorIntoTransparentPixels(Bitmap_t& bm); // 2180
	DecompressPassthroughTexture(const TextureSpecification_t& texSpec,
					const TextureSpecification_t& diskSpec,
					const void* pData,
					int nDataSize,
					Bitmap_t* uncompressedTempBitmap,
					bool* bFreeData);  // 2279
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
	TextureSpecification_t::TextureSpecification_t(); // 236
	TextureObjectInfo_t::TextureObjectInfo_t(); // 2298
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
	TextureSpecification_t::GetGpuMemorySizeInBytes(); // 2319
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
	TextureSpecification_t::~TextureSpecification_t(); // 236
	TextureObjectInfo_t::~TextureObjectInfo_t(); // 2373
	Bitmap_t::~Bitmap_t(); // 2373
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 238
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 239
	IMemoryMappedFile::Release(); // 236
	IMemoryMappedFile::Release(); // 2356
} /* size: 0, variables: 10, inline expansions: 99 (7505 bytes) */

// <00305068> rendersystem/texturebase.cpp:2248
// variables: 42
// function calls: 247
void CTextureManagerBase::AsyncHookUpTextureBits(CTextureBase* pTexture_UNSAFE, HRenderTexture hTextureHandle, ResourceId_t texResourceId, const AsyncTextureHookupData_t& texData, const TextureSpecification_t& diskSpec, CUtlString resourceName)
{
	const TextureSpecification_t& texSpec; // 2256
	const TextureBitsMemoryType_t  nMemoryType; // 2257
	Bitmap_t uncompressedTempBitmap; // 2270
	CUtlPair decompressionBuffer; // 2271
	const uint32  nGpuTexSize; // 2272
	const uint8* pDecodedTextureData; // 2273
	bool bFreeDecodedData; // 2274
	bool bFreeData; // 2275
	const char   __FUNCTION__; // 38526
	TextureObjectInfo_t textureObject; // 2298
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2294
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2302
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2321
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2326; // 2326
		CTextureBase* pTexture; // 2328
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2332
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
				int nLineNumber);  // 2326
		pair<ResourceId_t, long unsigned int>::pair<ResourceId_t&, long unsigned int>(
							ResourceId_t& __x,
							long unsigned int& __y);  // 1169
		make_pair<ResourceId_t&, long unsigned int>(ResourceId_t& __x,
								long unsigned int& __y);  // 2330
		{
			int i; // 1531
			Count(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned i this); // 1531
			CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::operator[](
					int i);  // 609
			Element(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned i this,
				int i);  // 1533
			ResourceId_t::operator==(
					const ResourceId_t& other);  // 1036
			operator==<ResourceId_t, long unsigned int, ResourceId_t, long unsigned int>(const pair<ResourceId_t, long unsigned int>& __x,
													const pair<ResourceId_t, long unsigned int>& __y);  // 1533
		}
		Find(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned i this,
			const pair<ResourceId_t, long unsigned int>& src);  // 1629
		CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this,
			int i);  // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<std::pair<ResourceId_t, long unsigned int>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this,
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		Destruct<std::pair<ResourceId_t, long unsigned int> >(pair<ResourceId_t, long unsigned int>* pMemory); // 1575
		FastRemove(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this,
				int elem);  // 1632
		FindAndFastRemove(const CUtlVectorBase<std::pair<ResourceId_t, long unsigned int>, CUtlMemory<std::pair<ResourceId_t, long unsigned int>, i this,
					const pair<ResourceId_t, long unsigned int>& src);  // 2330
		CUtlString::Get(); // 2344
		__atomic_base<short unsigned int>::load(
			memory_order __m);  // 361
		__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
		CTextureInfoChunkBase::HasAnyFlags(
				int nTexId,
				uint16 nFlagsToTest);  // 1017
		CTextureInfoId::HasAnyFlags(
				uint16 nFlagsToTest);  // 2332
		__atomic_base<short unsigned int>::operator&=(
				__int_type __i);  // 531
		CTextureInfoChunkBase::ClearFlags(
				int nTexId,
				uint16 nFlagsToClear);  // 1012
		CTextureInfoId::ClearFlags(
				uint16 nFlagsToClear);  // 2333
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
		CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 434
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
				const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
		CTextureDesc::operator=(
				const CTextureDesc& rhs);  // 147
		CTextureDesc::CTextureDesc(
				const CTextureDesc& rhs);  // 38
		CUtlMemory<float, int>::ValidateGrowSize(); // 475
		CUtlMemory<float, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 434
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
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
		TextureSpecification_t::TextureSpecification_t(
					const TextureSpecification_t  &);  // 236
		TextureObjectInfo_t::TextureObjectInfo_t(
					const TextureObjectInfo_t  &);  // 2336
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
		TextureSpecification_t::~TextureSpecification_t(); // 236
		TextureObjectInfo_t::~TextureObjectInfo_t(); // 2336
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2346
	}
	CUtlString::Get(); // 2263
	Bitmap_t::Reset(); // 31
	Bitmap_t::Bitmap_t(); // 2270
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
	TextureSpecification_t::GetGpuMemorySizeInBytes(); // 2272
	TextureSpecification_t::HasCompressedMips(); // 2281
	pair<unsigned char::operator=(
			pair<unsigned char*, unsigned int>& __p);  // 2291
	TextureSpecification_t::HasCompressedMips(); // 2101
	{
	}
	{
	}
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
	TextureSpecification_t::GetGpuMemorySizeInBytes(); // 2107
	{
	}
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 63
	CFastTimer::CFastTimer(); // 2113
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 335
	CFastTimer::Start(); // 2114
	{
		int nMip; // 2117
		{
			int nCompressedMipSize; // 2119
			int nBytesDecompressed; // 2120
			bool bIsMipCompressed; // 2122
			{
				const int  nOriginalMips; // 114
				const int  nMipDiff; // 115
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 114
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
						int i);  // 116
			}
			TextureSpecification_t::GetCompressedMipSize(
						int nMip);  // 108
			{
			}
			TextureSpecification_t::HasCompressedMips(); // 112
			Max<int>(const int& val1,
				const int& val2);  // 126
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 187
			CTextureDesc::GetDepth(); // 128
			Max<int>(const int& val1,
				const int& val2);  // 127
			Max<int>(const int& val1,
				const int& val2);  // 128
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 176
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			CTextureDesc::GetArrayCount(); // 129
			TextureSpecification_t::GetUncompressedMipSize(
						uint nMip);  // 120
			TextureSpecification_t::GetCompressedMipSize(
						int nMip);  // 2119
			TextureSpecification_t::HasCompressedMips(); // 100
			{
			}
			{
				const int  nOriginalMips; // 114
				const int  nMipDiff; // 115
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 114
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
						int i);  // 116
			}
			TextureSpecification_t::GetCompressedMipSize(
						int nMip);  // 108
			TextureSpecification_t::HasCompressedMips(); // 112
			Max<int>(const int& val1,
				const int& val2);  // 126
			Max<int>(const int& val1,
				const int& val2);  // 127
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 187
			CTextureDesc::GetDepth(); // 128
			Max<int>(const int& val1,
				const int& val2);  // 128
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 176
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			CTextureDesc::GetArrayCount(); // 129
			TextureSpecification_t::GetUncompressedMipSize(
						uint nMip);  // 120
			TextureSpecification_t::GetCompressedMipSize(
						int nMip);  // 105
			Max<int>(const int& val1,
				const int& val2);  // 126
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 187
			CTextureDesc::GetDepth(); // 128
			Max<int>(const int& val1,
				const int& val2);  // 127
			Max<int>(const int& val1,
				const int& val2);  // 128
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 176
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			CTextureDesc::GetArrayCount(); // 129
			TextureSpecification_t::GetUncompressedMipSize(
						uint nMip);  // 105
			TextureSpecification_t::IsMipCompressed(
					int nMip);  // 98
			TextureSpecification_t::IsMipCompressed(
					int nMip);  // 2122
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 2138
			{
				CUtlString::Get(); // 2129
			}
		}
	}
	{
	}
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 344
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 345
	CFastTimer::End(); // 2146
	CCycleCount::GetSeconds(); // 2147
	CCycleCount::GetMillisecondsF(); // 2147
	DecompressTextureMips(const TextureSpecification_t& texSpec,
				const void* pData,
				uint nDataSize,
				const CUtlString& resourceName,
				uint8* pDstData);  // 2292
	{
		const int  nPixelCount; // 2170
		uint32* pUncompressedData; // 2171
		Bitmap_t::GetBits(); // 2171
		{
			int i; // 2172
		}
	}
	operator&(TextureDecodingFlags_t a,
			TextureDecodingFlags_t b);  // 2178
	Bitmap_t::GetBits(); // 2182
	operator&(TextureDecodingFlags_t a,
			TextureDecodingFlags_t b);  // 2184
	{
	}
	{
	}
	{
	}
	{
	}
	Bitmap_t::Width(); // 2190
	{
	}
	Bitmap_t::Height(); // 2191
	{
	}
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 2199
	Bitmap_t::Width(); // 394
	Bitmap_t::Height(); // 395
	{
		int y; // 396
		{
			int x; // 398
			{
				uint8 nCurrAlpha; // 400
				int nWeight; // 406
				int nR; // 407
				int nG; // 408
				int nB; // 409
				{
					int dy; // 410
					{
						int dx; // 412
						{
							int x2; // 414
							int y2; // 415
							Color c; // 416
							clamp<int, int>(const int& val,
									const int& minVal,
									const int& maxVal);  // 415
							clamp<int, int>(const int& val,
									const int& minVal,
									const int& maxVal);  // 414
						}
					}
				}
				{
					Color c; // 429
					Color::SetColor(
						int _r,
						int _g,
						int _b,
						int _a);  // 50
					Color::Color(
						int _r,
						int _g,
						int _b,
						int _a);  // 429
				}
			}
		}
	}
	DilateColorIntoTransparentPixels(Bitmap_t& bm); // 2180
	DecompressPassthroughTexture(const TextureSpecification_t& texSpec,
					const TextureSpecification_t& diskSpec,
					const void* pData,
					int nDataSize,
					Bitmap_t* uncompressedTempBitmap,
					bool* bFreeData);  // 2279
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
	TextureSpecification_t::TextureSpecification_t(); // 236
	TextureObjectInfo_t::TextureObjectInfo_t(); // 2298
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
	TextureSpecification_t::GetGpuMemorySizeInBytes(); // 2319
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
	TextureSpecification_t::~TextureSpecification_t(); // 236
	TextureObjectInfo_t::~TextureObjectInfo_t(); // 2373
	Bitmap_t::~Bitmap_t(); // 2373
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 238
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 239
	IMemoryMappedFile::Release(); // 236
	IMemoryMappedFile::Release(); // 2356
} /* size: 0, variables: 10, inline expansions: 99 (7505 bytes) */

// <00321911> rendersystem/texturebase.cpp:2376
// variables: 3
// function calls: 26
void CTextureManagerBase::MN_DeallocateCacheableData(CTextureInfoId texId, CRenderContextBase* pRenderContext)
{
	const char   __FUNCTION__; // 56100
	{
		CTextureBase* pTex; // 2381
		CTextureInfoId::GetLegacyTexture(); // 2381
	}
	{
		int i; // 2386
		CUtlVectorBase<ITextureResidencyListener::Count(); // 2386
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
		CTextureInfoId::GetResourceHandle(); // 2388
		CUtlMemory<ITextureResidencyListener::operator[](
				int i);  // 588
		CUtlVectorBase<ITextureResidencyListener::operator[](
				int i);  // 2388
	}
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
	CTextureInfoChunkBase::HasAllFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1265
	CTextureInfoChunkBase::IsStandinTexture(
			int nTexIdx);  // 1225
	CTextureInfoId::IsStandinTexture(); // 2379
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2378
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 2378
	CResourceName::Get(); // 2378
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 2378
} /* size: 499, variables: 1, inline expansions: 19 (561 bytes) */

// <003049AA> rendersystem/texturebase.cpp:2376
// variables: 3
// function calls: 26
void CTextureManagerBase::MN_DeallocateCacheableData(CTextureInfoId texId, CRenderContextBase* pRenderContext)
{
	const char   __FUNCTION__; // 38634
	{
		CTextureBase* pTex; // 2381
		CTextureInfoId::GetLegacyTexture(); // 2381
	}
	{
		int i; // 2386
		CUtlVectorBase<ITextureResidencyListener::Count(); // 2386
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
		CTextureInfoId::GetResourceHandle(); // 2388
		CUtlMemory<ITextureResidencyListener::operator[](
				int i);  // 588
		CUtlVectorBase<ITextureResidencyListener::operator[](
				int i);  // 2388
	}
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
	CTextureInfoChunkBase::HasAllFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1265
	CTextureInfoChunkBase::IsStandinTexture(
			int nTexIdx);  // 1225
	CTextureInfoId::IsStandinTexture(); // 2379
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2378
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 2378
	CResourceName::Get(); // 2378
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 2378
} /* size: 499, variables: 1, inline expansions: 19 (561 bytes) */

// <00320CD9> rendersystem/texturebase.cpp:2393
// variables: 7
// function calls: 45
void CTextureManagerBase::MN_OnResourceLoadFailed(CTextureBase* pTex, int32 nStreamingRequestId)
{
	const char   __FUNCTION__; // 56019
	CTextureInfoId texId; // 2397
	HRenderTexture hTexture; // 2398
	bool bAbandonRequest; // 2399
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2395
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2402
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2409
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2398
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2399
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 2402
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 2404
	CTextureInfoId::SetPendingStreamingRequestId(
					int32 nId);  // 2405
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 2408
	CInterlockedIntT<int, 4>::operator int(); // 2409
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2417
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 2417
	CResourceName::Get(); // 2417
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 2417
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2406
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 2406
	CResourceName::Get(); // 2406
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 2406
} /* size: 0, variables: 4, inline expansions: 45 (1172 bytes) */

// <00303D72> rendersystem/texturebase.cpp:2393
// variables: 7
// function calls: 45
void CTextureManagerBase::MN_OnResourceLoadFailed(CTextureBase* pTex, int32 nStreamingRequestId)
{
	const char   __FUNCTION__; // 38553
	CTextureInfoId texId; // 2397
	HRenderTexture hTexture; // 2398
	bool bAbandonRequest; // 2399
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2395
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2402
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2409
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2398
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2399
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 2402
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 2404
	CTextureInfoId::SetPendingStreamingRequestId(
					int32 nId);  // 2405
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 2408
	CInterlockedIntT<int, 4>::operator int(); // 2409
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2417
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 2417
	CResourceName::Get(); // 2417
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 2417
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2406
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 2406
	CResourceName::Get(); // 2406
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 2406
} /* size: 0, variables: 4, inline expansions: 45 (1172 bytes) */

// <0032017E> rendersystem/texturebase.cpp:2422
// variables: 9
// function calls: 37
void CTextureManagerBase::MN_OnResourceLoadCompleted(CTextureBase* pTex, TextureObjectInfo_t& textureObject, int32 nStreamingRequestId, int nNumMipLevelsLoaded)
{
	const char   __FUNCTION__; // 56100
	CTextureInfoId texId; // 2426
	HRenderTexture hTexture; // 2427
	bool bAbandonRequest; // 2428
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2424
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2441
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2457
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2458
	}
	{
		int i; // 2464
		CUtlVectorBase<ITextureResidencyListener::Count(); // 2464
		CUtlMemory<ITextureResidencyListener::operator[](
				int i);  // 588
		CUtlVectorBase<ITextureResidencyListener::operator[](
				int i);  // 2466
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2466
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2427
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2428
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 2436
	CTextureInfoId::SetPendingStreamingRequestId(
					int32 nId);  // 2437
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 2440
	CInterlockedIntT<int, 4>::operator int(); // 2441
	CTextureInfoId::SetLastBindFrame(
			uint32 nLastBindFrame);  // 2456
	CTextureInfoId::GetDiskSpec(); // 2476
	CTextureInfoId::GetDiskSpec(); // 2477
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 2477
	CTextureManagerBase::TextureAchievedResidency(
				const CTextureBase* pTexture,
				const TextureObjectInfo_t& textureObject,
				int32 nTextureMipLevelsLoaded);  // 2462
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2438
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 2438
	CResourceName::Get(); // 2438
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 2438
} /* size: 0, variables: 4, inline expansions: 32 (792 bytes) */

// <00303217> rendersystem/texturebase.cpp:2422
// variables: 9
// function calls: 37
void CTextureManagerBase::MN_OnResourceLoadCompleted(CTextureBase* pTex, TextureObjectInfo_t& textureObject, int32 nStreamingRequestId, int nNumMipLevelsLoaded)
{
	const char   __FUNCTION__; // 38634
	CTextureInfoId texId; // 2426
	HRenderTexture hTexture; // 2427
	bool bAbandonRequest; // 2428
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2424
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2441
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2457
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2458
	}
	{
		int i; // 2464
		CUtlVectorBase<ITextureResidencyListener::Count(); // 2464
		CUtlMemory<ITextureResidencyListener::operator[](
				int i);  // 588
		CUtlVectorBase<ITextureResidencyListener::operator[](
				int i);  // 2466
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2466
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2427
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2428
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 2436
	CTextureInfoId::SetPendingStreamingRequestId(
					int32 nId);  // 2437
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 2440
	CInterlockedIntT<int, 4>::operator int(); // 2441
	CTextureInfoId::SetLastBindFrame(
			uint32 nLastBindFrame);  // 2456
	CTextureInfoId::GetDiskSpec(); // 2476
	CTextureInfoId::GetDiskSpec(); // 2477
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 2477
	CTextureManagerBase::TextureAchievedResidency(
				const CTextureBase* pTexture,
				const TextureObjectInfo_t& textureObject,
				int32 nTextureMipLevelsLoaded);  // 2462
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2438
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 2438
	CResourceName::Get(); // 2438
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 2438
} /* size: 0, variables: 4, inline expansions: 32 (792 bytes) */

// <00346672> rendersystem/texturebase.cpp:2472
// variables: 2
// function calls: 3
void CTextureManagerBase::TextureAchievedResidency(const CTextureBase* pTexture, const TextureObjectInfo_t& textureObject, int32 nTextureMipLevelsLoaded)
{
	CTextureInfoId texId; // 2475
	int nNumMipLevels; // 2476
	CTextureInfoId::GetDiskSpec(); // 2476
	CTextureInfoId::GetDiskSpec(); // 2477
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 2477
} /* size: 69, variables: 2, inline expansions: 3 (18 bytes) */

// <00320124> rendersystem/texturebase.cpp:2472
// variables: 2
void CTextureManagerBase::TextureAchievedResidency(const CTextureBase* pTexture, const TextureObjectInfo_t& textureObject, int32 nTextureMipLevelsLoaded)
{
	CTextureInfoId texId; // 2475
	int nNumMipLevels; // 2476
} /* size: 0, variables: 2 */

// <0032008A> rendersystem/texturebase.cpp:2488
// variable: 1
void CTextureManagerBase::ValidateTextureHeap()
{
	uint64 nComputedSize; // 2493
} /* size: 0, variables: 1 */

// <0031FEE3> rendersystem/texturebase.cpp:2500
// variable: 1
// function calls: 6
void CTextureManagerBase::RegisterTextureAllocation(CTextureBase* pTexture)
{
	size_t nTextureSize; // 2505
	CTextureInfoId::GetTextureObject(); // 493
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 493
	CTextureBase::IsExternalTexture(); // 2502
} /* size: 101, variables: 1, inline expansions: 6 (136 bytes) */

// <0031F6DC> rendersystem/texturebase.cpp:2520
// variables: 8
// function calls: 33
void CTextureManagerBase::RegisterTextureDeallocation(CTextureBase* pTexture)
{
	const char   __FUNCTION__; // 56127
	size_t nSize; // 2536
	HRenderTexture hResource; // 2540
	{
		int iFind; // 2525
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2526
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
		CTextureInfoId::GetResourceHandle(); // 478
		CTextureBase::GetTextureHandle(); // 2525
		{
			int i; // 208
			Count(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInf this); // 208
			CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::operator[](
					int i);  // 609
			Element(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInf this,
				int i);  // 210
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 210
		}
		FindByField<CWeakHandle<InfoForResourceTypeCTextureBase>, CTextureManagerBase::ExternalTextureInfo_t>(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInf this,
															CWeakHandle<InfoForResourceTypeCTextureBase> ExternalTextureInfo_t::* pField,
															CWeakHandle<InfoForResourceTypeCTextureBase> matchValue);  // 2525
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 2529
		CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, i this,
				int i);  // 2529
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2529
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2537
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2543
	}
	CTextureInfoId::GetTextureObject(); // 493
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 493
	CTextureBase::IsExternalTexture(); // 2522
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2540
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 2541
	ResourceIsProcedural(ResourceHandle_t hResource); // 2541
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 2541
} /* size: 0, variables: 3, inline expansions: 17 (232 bytes) */

// <00302775> rendersystem/texturebase.cpp:2520
// variables: 8
// function calls: 33
void CTextureManagerBase::RegisterTextureDeallocation(CTextureBase* pTexture)
{
	const char   __FUNCTION__; // 38661
	size_t nSize; // 2536
	HRenderTexture hResource; // 2540
	{
		int iFind; // 2525
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2526
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
		CTextureInfoId::GetResourceHandle(); // 478
		CTextureBase::GetTextureHandle(); // 2525
		{
			int i; // 208
			Count(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInf this); // 208
			CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::operator[](
					int i);  // 609
			Element(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInf this,
				int i);  // 210
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 210
		}
		FindByField<CWeakHandle<InfoForResourceTypeCTextureBase>, CTextureManagerBase::ExternalTextureInfo_t>(const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInf this,
															CWeakHandle<InfoForResourceTypeCTextureBase> ExternalTextureInfo_t::* pField,
															CWeakHandle<InfoForResourceTypeCTextureBase> matchValue);  // 2525
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 2529
		CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CTextureManagerBase::ExternalTextureInfo_t, CUtlMemory<CTextureManagerBase::ExternalTextureInfo_t, i this,
				int i);  // 2529
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2529
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2537
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2543
	}
	CTextureInfoId::GetTextureObject(); // 493
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 493
	CTextureBase::IsExternalTexture(); // 2522
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 2540
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 2541
	ResourceIsProcedural(ResourceHandle_t hResource); // 2541
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 2541
} /* size: 0, variables: 3, inline expansions: 17 (0 bytes) */

// <0031F662> rendersystem/texturebase.cpp:2567
// variable: 1
void CTextureManagerBase::RegisterProceduralTextureAllocation(const CTextureBase* pTexture)
{
	{
		size_t nSize; // 2571
	}
} /* size: 49 */

// <0031F5E8> rendersystem/texturebase.cpp:2576
// variable: 1
void CTextureManagerBase::RegisterProceduralTextureDeallocation(const CTextureBase* pTexture)
{
	{
		size_t nSize; // 2580
	}
} /* size: 0 */

// <0031F393> rendersystem/texturebase.cpp:2585
// variables: 5
// function calls: 6
void CTextureManagerBase::ComputeResidentTextureMemory()
{
	uint64 nSize; // 2587
	{
		uint j; // 2588
		{
			CTextureInfoChunkBase* pChunk; // 2590
			{
				uint i; // 2591
				{
					CTextureBase* pTexture; // 2593
					CTextureInfoId::GetTextureObject(); // 493
					__atomic_base<short unsigned int>::load(
						memory_order __m);  // 361
					__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
					CTextureInfoChunkBase::HasAnyFlags(
							int nTexId,
							uint16 nFlagsToTest);  // 1017
					CTextureInfoId::HasAnyFlags(
							uint16 nFlagsToTest);  // 493
					CTextureBase::IsExternalTexture(); // 2599
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <0031D39D> rendersystem/texturebase.cpp:2608
// variables: 4
// function calls: 143
void CTextureManagerBase::PostResourceLoadCompletedMessage(CTextureBase* pTex, TextureObjectInfo_t textureObject, int32 nStreamingRequestId)
{
	ResourceLoadCompletedMessage_t msg; // 2610
	const char   __FUNCTION__; // 56262
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2620; // 2620
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2614
	}
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
	TextureSpecification_t::TextureSpecification_t(); // 236
	TextureObjectInfo_t::TextureObjectInfo_t(); // 560
	ResourceLoadCompletedMessage_t::ResourceLoadCompletedMessage_t(); // 2610
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
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
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 63
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
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
	TextureSpecification_t::operator=(
			const TextureSpecification_t& rhs);  // 236
	TextureObjectInfo_t::operator=(
			const TextureObjectInfo_t  &);  // 2611
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 2619
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 2620
	CUtlMemory<ResourceLoadCompletedMessage_t, int>::NumAllocated(); // 1196
	CUtlMemory<ResourceLoadCompletedMessage_t, int>::Base(); // 112
	CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::Base(); // 368
	CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<ResourceLoadCompletedMessage_t, int>::IsGrowable(); // 823
	CUtlMemory<ResourceLoadCompletedMessage_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<ResourceLoadCompletedMessage_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<ResourceLoadCompletedMessage_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::GrowMemory(
			int num);  // 1198
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 147
	CTextureDesc::CTextureDesc(
			const CTextureDesc& rhs);  // 38
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
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
	CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
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
	TextureSpecification_t::TextureSpecification_t(
				const TextureSpecification_t  &);  // 236
	TextureObjectInfo_t::TextureObjectInfo_t(
				const TextureObjectInfo_t  &);  // 560
	ResourceLoadCompletedMessage_t::ResourceLoadCompletedMessage_t(
					const ResourceLoadCompletedMessage_t  &);  // 1520
	CopyConstruct<ResourceLoadCompletedMessage_t>(ResourceLoadCompletedMessage_t* pMemory,
							const ResourceLoadCompletedMessage_t& src);  // 1201
	CUtlMemory<ResourceLoadCompletedMessage_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::Element(
		int i);  // 1201
	CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::AddToTail(
			const ResourceLoadCompletedMessage_t& src);  // 2621
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2622
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
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
	TextureSpecification_t::~TextureSpecification_t(); // 236
	TextureObjectInfo_t::~TextureObjectInfo_t(); // 560
	ResourceLoadCompletedMessage_t::~ResourceLoadCompletedMessage_t(); // 2622
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
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
	TextureSpecification_t::~TextureSpecification_t(); // 236
	TextureObjectInfo_t::~TextureObjectInfo_t(); // 560
	ResourceLoadCompletedMessage_t::~ResourceLoadCompletedMessage_t(); // 2622
} /* size: 0, variables: 3, inline expansions: 143 (14385 bytes) */

// <00300436> rendersystem/texturebase.cpp:2608
// variables: 4
// function calls: 143
void CTextureManagerBase::PostResourceLoadCompletedMessage(CTextureBase* pTex, TextureObjectInfo_t textureObject, int32 nStreamingRequestId)
{
	ResourceLoadCompletedMessage_t msg; // 2610
	const char   __FUNCTION__; // 38796
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2620; // 2620
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2614
	}
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
	TextureSpecification_t::TextureSpecification_t(); // 236
	TextureObjectInfo_t::TextureObjectInfo_t(); // 560
	ResourceLoadCompletedMessage_t::ResourceLoadCompletedMessage_t(); // 2610
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
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
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 63
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
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
	TextureSpecification_t::operator=(
			const TextureSpecification_t& rhs);  // 236
	TextureObjectInfo_t::operator=(
			const TextureObjectInfo_t  &);  // 2611
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 2619
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 2620
	CUtlMemory<ResourceLoadCompletedMessage_t, int>::NumAllocated(); // 1196
	CUtlMemory<ResourceLoadCompletedMessage_t, int>::Base(); // 112
	CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::Base(); // 368
	CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<ResourceLoadCompletedMessage_t, int>::IsGrowable(); // 823
	CUtlMemory<ResourceLoadCompletedMessage_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<ResourceLoadCompletedMessage_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<ResourceLoadCompletedMessage_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::GrowMemory(
			int num);  // 1198
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 147
	CTextureDesc::CTextureDesc(
			const CTextureDesc& rhs);  // 38
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
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
	CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
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
	TextureSpecification_t::TextureSpecification_t(
				const TextureSpecification_t  &);  // 236
	TextureObjectInfo_t::TextureObjectInfo_t(
				const TextureObjectInfo_t  &);  // 560
	ResourceLoadCompletedMessage_t::ResourceLoadCompletedMessage_t(
					const ResourceLoadCompletedMessage_t  &);  // 1520
	CopyConstruct<ResourceLoadCompletedMessage_t>(ResourceLoadCompletedMessage_t* pMemory,
							const ResourceLoadCompletedMessage_t& src);  // 1201
	CUtlMemory<ResourceLoadCompletedMessage_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::Element(
		int i);  // 1201
	CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::AddToTail(
			const ResourceLoadCompletedMessage_t& src);  // 2621
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2622
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
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
	TextureSpecification_t::~TextureSpecification_t(); // 236
	TextureObjectInfo_t::~TextureObjectInfo_t(); // 560
	ResourceLoadCompletedMessage_t::~ResourceLoadCompletedMessage_t(); // 2622
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
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
	TextureSpecification_t::~TextureSpecification_t(); // 236
	TextureObjectInfo_t::~TextureObjectInfo_t(); // 560
	ResourceLoadCompletedMessage_t::~ResourceLoadCompletedMessage_t(); // 2622
} /* size: 0, variables: 3, inline expansions: 143 (14385 bytes) */

// <0031CD22> rendersystem/texturebase.cpp:2624
// variables: 4
// function calls: 26
void CTextureManagerBase::PostResourceLoadFailedMessage(HRenderTexture hTexture, int32 nStreamingRequestId)
{
	ResourceLoadFailedMessage_t msg; // 2631
	const char   __FUNCTION__; // 56181
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2640; // 2640
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2634
	}
	CInterlockedIntT<int, 4>::GetRaw(); // 383
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetRefCount(); // 2626
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 2633
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 2639
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 2640
	CUtlMemory<ResourceLoadFailedMessage_t, int>::NumAllocated(); // 1196
	CUtlMemory<ResourceLoadFailedMessage_t, int>::Base(); // 112
	CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::Base(); // 368
	CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<ResourceLoadFailedMessage_t, int>::IsGrowable(); // 823
	CUtlMemory<ResourceLoadFailedMessage_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<ResourceLoadFailedMessage_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<ResourceLoadFailedMessage_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<ResourceLoadFailedMessage_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::Element(
		int i);  // 1201
	CopyConstruct<ResourceLoadFailedMessage_t>(ResourceLoadFailedMessage_t* pMemory,
							const ResourceLoadFailedMessage_t& src);  // 1201
	CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::AddToTail(
			const ResourceLoadFailedMessage_t& src);  // 2641
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2642
} /* size: 0, variables: 3, inline expansions: 26 (1398 bytes) */

// <002FFDBB> rendersystem/texturebase.cpp:2624
// variables: 4
// function calls: 26
void CTextureManagerBase::PostResourceLoadFailedMessage(HRenderTexture hTexture, int32 nStreamingRequestId)
{
	ResourceLoadFailedMessage_t msg; // 2631
	const char   __FUNCTION__; // 38715
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2640; // 2640
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2634
	}
	CInterlockedIntT<int, 4>::GetRaw(); // 383
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetRefCount(); // 2626
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 2633
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 2639
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 2640
	CUtlMemory<ResourceLoadFailedMessage_t, int>::NumAllocated(); // 1196
	CUtlMemory<ResourceLoadFailedMessage_t, int>::Base(); // 112
	CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::Base(); // 368
	CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<ResourceLoadFailedMessage_t, int>::IsGrowable(); // 823
	CUtlMemory<ResourceLoadFailedMessage_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<ResourceLoadFailedMessage_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<ResourceLoadFailedMessage_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<ResourceLoadFailedMessage_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::Element(
		int i);  // 1201
	CopyConstruct<ResourceLoadFailedMessage_t>(ResourceLoadFailedMessage_t* pMemory,
							const ResourceLoadFailedMessage_t& src);  // 1201
	CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::AddToTail(
			const ResourceLoadFailedMessage_t& src);  // 2641
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2642
} /* size: 0, variables: 3, inline expansions: 26 (1398 bytes) */

// <0031B96C> rendersystem/texturebase.cpp:2647
// variables: 7
// function calls: 96
void CTextureManagerBase::ProcessResourceThreadEvents()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2649; // 2649
	{
		int i; // 2651
		CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::Count(); // 2651
		CUtlMemory<ResourceLoadFailedMessage_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::operator[](
				int i);  // 2653
	}
	{
		int i; // 2667
		{
			int j; // 2669
			CUtlMemory<ResourceLoadCompletedMessage_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::operator[](
					int i);  // 2669
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
			CTextureInfoId::GetResourceHandle(); // 478
			CTextureBase::GetTextureHandle(); // 2669
			{
				int i; // 1531
				Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this); // 1531
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
						int i);  // 609
				Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this,
					int i);  // 1533
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1533
			}
			Find(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this,
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2669
			CUtlMemory<ResourceLoadCompletedMessage_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::Element(
				int i);  // 1607
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
			TextureSpecification_t::~TextureSpecification_t(); // 236
			TextureObjectInfo_t::~TextureObjectInfo_t(); // 560
			ResourceLoadCompletedMessage_t::~ResourceLoadCompletedMessage_t(); // 1526
			Destruct<ResourceLoadCompletedMessage_t>(ResourceLoadCompletedMessage_t* pMemory); // 1607
			CUtlMemory<ResourceLoadCompletedMessage_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::Element(
				int i);  // 1114
			CUtlMemory<ResourceLoadCompletedMessage_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::Element(
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::ShiftElementsLeft(
						int elem,
						int num);  // 1608
			CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::Remove(
				int elem);  // 2675
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int i);  // 1114
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			ShiftElementsLeft(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
						int elem,
						int num);  // 1608
			Remove(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int elem);  // 2676
		}
	}
	{
		int i; // 2682
		CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::Count(); // 2682
		CUtlMemory<ResourceLoadCompletedMessage_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::operator[](
				int i);  // 2685
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
			int nLineNumber);  // 2649
	CUtlVectorBase<ResourceLoadFailedMessage_t, CUtlMemory<ResourceLoadFailedMessage_t, int> >::RemoveAll(); // 2655
	{
		int i; // 1721
		CUtlMemory<ResourceLoadCompletedMessage_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::Element(
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
		TextureSpecification_t::~TextureSpecification_t(); // 236
		TextureObjectInfo_t::~TextureObjectInfo_t(); // 560
		ResourceLoadCompletedMessage_t::~ResourceLoadCompletedMessage_t(); // 1526
		Destruct<ResourceLoadCompletedMessage_t>(ResourceLoadCompletedMessage_t* pMemory); // 1723
	}
	CUtlVectorBase<ResourceLoadCompletedMessage_t, CUtlMemory<ResourceLoadCompletedMessage_t, int> >::RemoveAll(); // 2687
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2688
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2688
} /* size: 843, variables: 1, inline expansions: 11 (454 bytes) */

// <0031A5A2> rendersystem/texturebase.cpp:2694
// variables: 11
// function calls: 81
void CTextureManagerBase::MN_UnloadRequestedTextures()
{
	CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int> > saveForLater; // 2696
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2698; // 2698
	const char   __FUNCTION__; // 56100
	{
		int i; // 2699
		{
			HRenderTexture hResource; // 2701
			int nRefCount; // 2705
			const CTextureBase* pTexture; // 2711
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
					ResourceLeakTrackingGroup_t leakTrackingGroup);  // 2705
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					int i);  // 2701
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2701
			{
				const bool  bNotLast; // 1578
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					int i);  // 1584
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 1584
			}
			Destruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory); // 1575
			FastRemove(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					int elem);  // 2702
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 2711
			__atomic_base<short unsigned int>::operator&=(
					__int_type __i);  // 531
			CTextureInfoChunkBase::ClearFlags(
					int nTexId,
					uint16 nFlagsToClear);  // 1012
			CTextureInfoId::ClearFlags(
					uint16 nFlagsToClear);  // 2715
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 2718
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
			CTextureInfoId::GetResourceHandle(); // 478
			CTextureBase::GetTextureHandle(); // 2718
			ResourceIsProcedural(ResourceHandle_t hResource); // 2722
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
			CTextureInfoChunkBase::HasAnyFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1017
			CTextureInfoId::HasAnyFlags(
					uint16 nFlagsToTest);  // 2727
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
			CTextureInfoChunkBase::HasAnyFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1017
			CTextureInfoId::HasAnyFlags(
					uint16 nFlagsToTest);  // 2734
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int i);  // 1201
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1520
			CopyConstruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory,
											const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1201
			ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 824
			GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					int num);  // 1198
			AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2729
		}
		Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this); // 2699
	}
	{
		int i; // 2740
		{
			const CTextureBase* pTexture; // 2742
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2743
			}
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
			Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 368
			ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 824
			GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					int num);  // 1198
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int i);  // 1201
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1520
			CopyConstruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory,
											const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1201
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::NumAllocated(); // 1196
			AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2746
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 2742
			__atomic_base<short unsigned int>::operator|=(
					__int_type __i);  // 530
			CTextureInfoChunkBase::SetFlags(
				int nTexId,
				uint16 nFlagsToSet);  // 1007
			CTextureInfoId::SetFlags(
				uint16 nFlagsToSet);  // 2744
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 2745
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 71
			ResourceAddRef(ResourceHandle_t hResource,
					uintp nLeakTrackingPairingID,
					ResourceLeakTrackingGroup_t leakTrackingGroup);  // 2745
		}
	}
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 530
	CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 2696
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 2698
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2748
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 410
	~CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 2748
} /* size: 0, variables: 3, inline expansions: 16 (896 bytes) */

// <002FD63B> rendersystem/texturebase.cpp:2694
// variables: 11
// function calls: 81
void CTextureManagerBase::MN_UnloadRequestedTextures()
{
	CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int> > saveForLater; // 2696
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2698; // 2698
	const char   __FUNCTION__; // 38634
	{
		int i; // 2699
		{
			HRenderTexture hResource; // 2701
			int nRefCount; // 2705
			const CTextureBase* pTexture; // 2711
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
					ResourceLeakTrackingGroup_t leakTrackingGroup);  // 2705
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					int i);  // 2701
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2701
			{
				const bool  bNotLast; // 1578
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					int i);  // 1584
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 1584
			}
			Destruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory); // 1575
			FastRemove(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					int elem);  // 2702
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 2711
			__atomic_base<short unsigned int>::operator&=(
					__int_type __i);  // 531
			CTextureInfoChunkBase::ClearFlags(
					int nTexId,
					uint16 nFlagsToClear);  // 1012
			CTextureInfoId::ClearFlags(
					uint16 nFlagsToClear);  // 2715
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 2718
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
			CTextureInfoId::GetResourceHandle(); // 478
			CTextureBase::GetTextureHandle(); // 2718
			ResourceIsProcedural(ResourceHandle_t hResource); // 2722
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
			CTextureInfoChunkBase::HasAnyFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1017
			CTextureInfoId::HasAnyFlags(
					uint16 nFlagsToTest);  // 2727
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
			CTextureInfoChunkBase::HasAnyFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1017
			CTextureInfoId::HasAnyFlags(
					uint16 nFlagsToTest);  // 2734
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int i);  // 1201
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1520
			CopyConstruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory,
											const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1201
			ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 824
			GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					int num);  // 1198
			AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2729
		}
		Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this); // 2699
	}
	{
		int i; // 2740
		{
			const CTextureBase* pTexture; // 2742
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2743
			}
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
			Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 368
			ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 824
			GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					int num);  // 1198
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
				int i);  // 1201
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1520
			CopyConstruct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory,
											const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1201
			CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::NumAllocated(); // 1196
			AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2746
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 2742
			__atomic_base<short unsigned int>::operator|=(
					__int_type __i);  // 530
			CTextureInfoChunkBase::SetFlags(
				int nTexId,
				uint16 nFlagsToSet);  // 1007
			CTextureInfoId::SetFlags(
				uint16 nFlagsToSet);  // 2744
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 2745
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 71
			ResourceAddRef(ResourceHandle_t hResource,
					uintp nLeakTrackingPairingID,
					ResourceLeakTrackingGroup_t leakTrackingGroup);  // 2745
		}
	}
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 530
	CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 2696
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 2698
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2748
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 410
	~CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 2748
} /* size: 0, variables: 3, inline expansions: 16 (896 bytes) */

// <00318DEE> rendersystem/texturebase.cpp:2750
// variables: 15
// function calls: 91
void CTextureManagerBase::MN_BuildRequestedResourcesList(CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >& toCacheList)
{
	const char   __FUNCTION__; // 56208
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2753; // 2753
	uint64 nBytesNeeded; // 2754
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2752
	}
	{
		int i; // 2762
		{
			CacheRequest_t item; // 2764
			int nRefCount; // 2768
			const CTextureBase* pTexture; // 2772
			ToCacheHandle_t toCache; // 2803
			uint32 nClampedWidth; // 2807
			uint32 nClampedHeight; // 2808
			int32 nClampedNumMipLevels; // 2809
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2776
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
					ResourceLeakTrackingGroup_t leakTrackingGroup);  // 2768
			CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::operator[](
					int i);  // 2764
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 785
			CacheRequest_t::CacheRequest_t(
					const CacheRequest_t  &);  // 2764
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
					int elem);  // 2765
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 2772
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
			CTextureInfoId::GetResourceHandle(); // 2776
			CTextureInfoId::SetLastBindFrame(
					uint32 nLastBindFrame);  // 2779
			__atomic_base<short unsigned int>::operator&=(
					__int_type __i);  // 531
			CTextureInfoChunkBase::ClearFlags(
					int nTexId,
					uint16 nFlagsToClear);  // 1012
			CTextureInfoId::ClearFlags(
					uint16 nFlagsToClear);  // 2780
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
			CTextureInfoChunkBase::HasAnyFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1017
			CTextureInfoId::HasAnyFlags(
					uint16 nFlagsToTest);  // 2787
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
			CTextureInfoChunkBase::HasAnyFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1017
			CTextureInfoId::HasAnyFlags(
					uint16 nFlagsToTest);  // 2789
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
			CTextureInfoChunkBase::HasAnyFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1017
			CTextureInfoId::HasAnyFlags(
					uint16 nFlagsToTest);  // 2799
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 791
			ToCacheHandle_t::ToCacheHandle_t(); // 2803
			CTextureInfoId::GetDiskSpec(); // 388
			CTextureBase::GetDiskSpec(); // 2807
			CTextureInfoId::GetDiskSpec(); // 388
			CTextureBase::GetDiskSpec(); // 2808
			CTextureInfoId::GetDiskSpec(); // 388
			CTextureBase::GetDiskSpec(); // 2809
			CTextureInfoId::GetDiskSpec(); // 388
			CTextureBase::GetDiskSpec(); // 2810
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 2810
			CTextureInfoId::GetDiskSpec(); // 2817
			{
				int i; // 1531
				Count(const CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> > this); // 1531
				CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::operator[](
						int i);  // 609
				Element(const CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >  this,
					int i);  // 1533
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 800
				ToCacheHandle_t::operator==(
						const ToCacheHandle_t& src);  // 1533
			}
			Find(const CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >  this,
				const ToCacheHandle_t& src);  // 2823
			CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::NumAllocated(); // 1196
			CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::Element(
				int i);  // 1201
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 791
			ToCacheHandle_t::ToCacheHandle_t(
					const ToCacheHandle_t  &);  // 1520
			CopyConstruct<CTextureManagerBase::ToCacheHandle_t>(ToCacheHandle_t* pMemory,
										const ToCacheHandle_t& src);  // 1201
			CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::Base(); // 112
			CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::Base(); // 368
			CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::AddToTail(
					const ToCacheHandle_t& src);  // 2825
			CTextureManagerBase::GetMaxTextureRes(); // 2812
			Max<int>(const int& val1,
				const int& val2);  // 320
			Max<int>(const int& val1,
				const int& val2);  // 323
			Max<int>(const int& val1,
				const int& val2);  // 324
			Max<int>(const int& val1,
				const int& val2);  // 325
			ComputeClampedTextureDim(uint32 nStartWidth,
						uint32 nStartHeight,
						int nStartMipLevelCount,
						int nMaxTextureRes,
						uint32* pWidthOut,
						uint32* pHeightOut,
						int* pMipLevelCountOut);  // 2812
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 488
			CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
					CResourceName* pOutName);  // 206
			CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
										const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 2791
			CResourceName::Get(); // 2791
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 2791
		}
		CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::Count(); // 2762
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
			int nLineNumber);  // 2753
	CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::Count(); // 2755
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2831
} /* size: 0, variables: 3, inline expansions: 7 (398 bytes) */

// <002FBE87> rendersystem/texturebase.cpp:2750
// variables: 15
// function calls: 91
void CTextureManagerBase::MN_BuildRequestedResourcesList(CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >& toCacheList)
{
	const char   __FUNCTION__; // 38742
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2753; // 2753
	uint64 nBytesNeeded; // 2754
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2752
	}
	{
		int i; // 2762
		{
			CacheRequest_t item; // 2764
			int nRefCount; // 2768
			const CTextureBase* pTexture; // 2772
			ToCacheHandle_t toCache; // 2803
			uint32 nClampedWidth; // 2807
			uint32 nClampedHeight; // 2808
			int32 nClampedNumMipLevels; // 2809
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2776
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
					ResourceLeakTrackingGroup_t leakTrackingGroup);  // 2768
			CUtlMemory<CTextureManagerBase::CacheRequest_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::operator[](
					int i);  // 2764
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 785
			CacheRequest_t::CacheRequest_t(
					const CacheRequest_t  &);  // 2764
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
					int elem);  // 2765
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 2772
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
			CTextureInfoId::GetResourceHandle(); // 2776
			CTextureInfoId::SetLastBindFrame(
					uint32 nLastBindFrame);  // 2779
			__atomic_base<short unsigned int>::operator&=(
					__int_type __i);  // 531
			CTextureInfoChunkBase::ClearFlags(
					int nTexId,
					uint16 nFlagsToClear);  // 1012
			CTextureInfoId::ClearFlags(
					uint16 nFlagsToClear);  // 2780
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
			CTextureInfoChunkBase::HasAnyFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1017
			CTextureInfoId::HasAnyFlags(
					uint16 nFlagsToTest);  // 2787
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
			CTextureInfoChunkBase::HasAnyFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1017
			CTextureInfoId::HasAnyFlags(
					uint16 nFlagsToTest);  // 2789
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
			CTextureInfoChunkBase::HasAnyFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1017
			CTextureInfoId::HasAnyFlags(
					uint16 nFlagsToTest);  // 2799
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 791
			ToCacheHandle_t::ToCacheHandle_t(); // 2803
			CTextureInfoId::GetDiskSpec(); // 388
			CTextureBase::GetDiskSpec(); // 2807
			CTextureInfoId::GetDiskSpec(); // 388
			CTextureBase::GetDiskSpec(); // 2808
			CTextureInfoId::GetDiskSpec(); // 388
			CTextureBase::GetDiskSpec(); // 2809
			CTextureInfoId::GetDiskSpec(); // 388
			CTextureBase::GetDiskSpec(); // 2810
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 2810
			CTextureInfoId::GetDiskSpec(); // 2817
			{
				int i; // 1531
				Count(const CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> > this); // 1531
				CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::operator[](
						int i);  // 609
				Element(const CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >  this,
					int i);  // 1533
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 800
				ToCacheHandle_t::operator==(
						const ToCacheHandle_t& src);  // 1533
			}
			Find(const CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >  this,
				const ToCacheHandle_t& src);  // 2823
			CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::NumAllocated(); // 1196
			CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::Element(
				int i);  // 1201
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 791
			ToCacheHandle_t::ToCacheHandle_t(
					const ToCacheHandle_t  &);  // 1520
			CopyConstruct<CTextureManagerBase::ToCacheHandle_t>(ToCacheHandle_t* pMemory,
										const ToCacheHandle_t& src);  // 1201
			CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::Base(); // 112
			CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::Base(); // 368
			CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::AddToTail(
					const ToCacheHandle_t& src);  // 2825
			CTextureManagerBase::GetMaxTextureRes(); // 2812
			Max<int>(const int& val1,
				const int& val2);  // 320
			Max<int>(const int& val1,
				const int& val2);  // 323
			Max<int>(const int& val1,
				const int& val2);  // 324
			Max<int>(const int& val1,
				const int& val2);  // 325
			ComputeClampedTextureDim(uint32 nStartWidth,
						uint32 nStartHeight,
						int nStartMipLevelCount,
						int nMaxTextureRes,
						uint32* pWidthOut,
						uint32* pHeightOut,
						int* pMipLevelCountOut);  // 2812
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 488
			CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
					CResourceName* pOutName);  // 206
			CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
										const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 2791
			CResourceName::Get(); // 2791
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 2791
		}
		CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::Count(); // 2762
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
			int nLineNumber);  // 2753
	CUtlVectorBase<CTextureManagerBase::CacheRequest_t, CUtlMemory<CTextureManagerBase::CacheRequest_t, int> >::Count(); // 2755
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2831
} /* size: 0, variables: 3, inline expansions: 7 (398 bytes) */

// <003184CF> rendersystem/texturebase.cpp:2834
// variables: 7
// function calls: 35
void CTextureManagerBase::MN_BuildToCacheList(CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >& toCacheList, int nFinishedFrameCount)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_2837; // 2837
	uint64 nNeededBytes; // 2839
	{
		uint j; // 2840
		{
			CTextureInfoChunkBase* pChunk; // 2842
			{
				uint i; // 2843
				{
					ToCacheHandle_t toCache; // 2856
					CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::Base(); // 112
					CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::Base(); // 368
					CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::GrowMemory(
							int num);  // 1198
					CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::NumAllocated(); // 1196
					CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::Element(
						int i);  // 1201
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 791
					ToCacheHandle_t::ToCacheHandle_t(
							const ToCacheHandle_t  &);  // 1520
					CopyConstruct<CTextureManagerBase::ToCacheHandle_t>(ToCacheHandle_t* pMemory,
												const ToCacheHandle_t& src);  // 1201
					CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::AddToTail(
							const ToCacheHandle_t& src);  // 2864
					__atomic_base<short unsigned int>::load(
						memory_order __m);  // 361
					__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
					CTextureInfoChunkBase::HasAnyFlags(
							int nTexId,
							uint16 nFlagsToTest);  // 2850
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 791
					ToCacheHandle_t::ToCacheHandle_t(); // 2856
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
					CTextureInfoId::GetResourceHandle(); // 478
					CTextureBase::GetTextureHandle(); // 2858
					{
						int i; // 1531
						Count(const CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> > this); // 1531
						CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::operator[](
								int i);  // 609
						Element(const CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >  this,
							int i);  // 1533
						CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 800
						ToCacheHandle_t::operator==(
								const ToCacheHandle_t& src);  // 1533
					}
					Find(const CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >  this,
						const ToCacheHandle_t& src);  // 2862
				}
			}
		}
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
			int nLineNumber);  // 2837
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 2871
} /* size: 718, variables: 2, inline expansions: 8 (689 bytes) */

// <00346770> rendersystem/texturebase.cpp:2874
void ResourceSizeComparisonFunc(const ToCacheHandle_t* pLeft, const ToCacheHandle_t* pRight)
{
} /* size: 55 */

// <003496EA> rendersystem/texturebase.cpp:2886
// variables: 16
// function calls: 68
void CTextureManagerBase::MN_EvictResources(CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >& toCacheList, uint64 nBytesNeeded)
{
	CUtlVector<CTextureInfoId, CUtlMemory<CTextureInfoId, int> > potentiallyEvictableTextures; // 2897
	CUtlMemory<CTextureInfoId, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTextureInfoId, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::CUtlVector(); // 2897
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 2899
	{
		uint j; // 2908
		{
			CTextureInfoChunkBase* pChunk; // 2910
			{
				uint i; // 2911
				CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::GrowMemory(
						int num);  // 1249
				Construct<CTextureInfoId, CTextureInfoId>(CTextureInfoId* pMemory); // 1252
				CUtlMemory<CTextureInfoId, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Element(
					int i);  // 1252
				CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::AddToTail(
						CTextureInfoId& src);  // 2924
				{
				}
				__atomic_base<short unsigned int>::load(
					memory_order __m);  // 361
				__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
				CTextureInfoChunkBase::HasAllFlags(
						int nTexId,
						uint16 nFlagsToTest);  // 2917
				__atomic_base<short unsigned int>::load(
					memory_order __m);  // 361
				__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
				CTextureInfoChunkBase::HasAnyFlags(
						int nTexId,
						uint16 nFlagsToTest);  // 2921
			}
		}
	}
	CUtlMemory<CTextureInfoId, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::EnsureCapacity(
			int num);  // 2906
	{
		CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::end(); // 2934
		{
			_ValueType __value; // 355
			CTextureInfoId::GetLastBindFrame(); // 2935
			CTextureInfoId::GetLastBindFrame(); // 2935
			operator()(const class* __closure,
					const CTextureInfoId  left,
					const CTextureInfoId  right); // 158
			operator()<CTextureInfoId*, CTextureInfoId*>(const _Iter_comp_iter<CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoI this,
									CTextureInfoId* __it1,
									CTextureInfoId* __it2); // 232
			CTextureInfoId::GetLastBindFrame(); // 2935
			CTextureInfoId::GetLastBindFrame(); // 2935
			operator()(const class* __closure,
					const CTextureInfoId  left,
					const CTextureInfoId  right); // 196
			operator()<CTextureInfoId*, CTextureInfoId>(const _Iter_comp_val<CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoId this,
									CTextureInfoId* __it,
									CTextureInfoId& __val); // 140
			__push_heap<CTextureInfoId*, long int, CTextureInfoId, __gnu_cxx::__ops::_Iter_comp_val<CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoId, CTextureInfoId)> > >(CTextureInfoId* __first,
																long int __holeIndex,
																long int __topIndex,
																CTextureInfoId __value,
																_Iter_comp_val<CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoId, CTex __comp); // 247
			__adjust_heap<CTextureInfoId*, long int, CTextureInfoId, __gnu_cxx::__ops::_Iter_comp_iter<CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoId, CTextureInfoId)> > >(CTextureInfoId* __first,
																long int __holeIndex,
																long int __len,
																CTextureInfoId __value,
																_Iter_comp_iter<CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoId, CTe __comp); // 356
		}
		__make_heap<CTextureInfoId*, __gnu_cxx::__ops::_Iter_comp_iter<CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoId, CTextureInfoId)> > >(CTextureInfoId* __first,
																CTextureInfoId* __last,
																_Iter_comp_iter<CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoId, CTe __comp); // 413
		make_heap<CTextureInfoId*, CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoId, CTextureInfoId)> >(CTextureInfoId* __first,
																CTextureInfoId* __last,
																 __comp); // 2934
		{
			int i; // 2941
			ThreadInterlockedIncrement64(volatile int64* p); // 579
			CInterlockedIntT<long long int, 8>::operator++(); // 2943
			CUtlMemory<CTextureInfoId, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::operator[](
					int i);  // 2944
		}
		CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::end(); // 2937
		CTextureInfoId::GetLastBindFrame(); // 2935
		CTextureInfoId::GetLastBindFrame(); // 2935
		operator()(const class* __closure,
				const CTextureInfoId  left,
				const CTextureInfoId  right); // 158
		operator()<CTextureInfoId*, CTextureInfoId*>(const _Iter_comp_iter<CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoI this,
								CTextureInfoId* __it1,
								CTextureInfoId* __it2); // 232
		CTextureInfoId::GetLastBindFrame(); // 2935
		CTextureInfoId::GetLastBindFrame(); // 2935
		operator()(const class* __closure,
				const CTextureInfoId  left,
				const CTextureInfoId  right); // 196
		operator()<CTextureInfoId*, CTextureInfoId>(const _Iter_comp_val<CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoId this,
								CTextureInfoId* __it,
								CTextureInfoId& __val); // 140
		__push_heap<CTextureInfoId*, long int, CTextureInfoId, __gnu_cxx::__ops::_Iter_comp_val<CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoId, CTextureInfoId)> > >(CTextureInfoId* __first,
																long int __holeIndex,
																long int __topIndex,
																CTextureInfoId __value,
																_Iter_comp_val<CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoId, CTex __comp); // 247
		__adjust_heap<CTextureInfoId*, long int, CTextureInfoId, __gnu_cxx::__ops::_Iter_comp_iter<CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoId, CTextureInfoId)> > >(CTextureInfoId* __first,
																long int __holeIndex,
																long int __len,
																CTextureInfoId __value,
																_Iter_comp_iter<CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoId, CTe __comp); // 264
		__pop_heap<CTextureInfoId*, __gnu_cxx::__ops::_Iter_comp_iter<CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoId, CTextureInfoId)> > >(CTextureInfoId* __first,
																CTextureInfoId* __last,
																CTextureInfoId* __result,
																_Iter_comp_iter<CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoId, CTe __comp); // 425
		__sort_heap<CTextureInfoId*, __gnu_cxx::__ops::_Iter_comp_iter<CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoId, CTextureInfoId)> > >(CTextureInfoId* __first,
																CTextureInfoId* __last,
																_Iter_comp_iter<CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoId, CTe __comp); // 480
		sort_heap<CTextureInfoId*, CTextureManagerBase::MN_EvictResources(CUtlVector<ToCacheHandle_t>&, uint64)::<lambda(CTextureInfoId, CTextureInfoId)> >(CTextureInfoId* __first,
																CTextureInfoId* __last,
																 __comp); // 2937
	}
	CUtlMemory<CTextureInfoId, int>::Purge(); // 903
	CUtlMemory<CTextureInfoId, int>::Purge(); // 1799
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Purge(); // 560
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::~CUtlVector(); // 2996
	{
	}
	CTextureManagerBase::MN_EvictResources(
				CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >& toCacheList,
				uint64 nBytesNeeded);  // 2886
} /* size: 0, variables: 1, inline expansions: 18 (2551 bytes) */

// <00318329> rendersystem/texturebase.cpp:2886
// variables: 8
void CTextureManagerBase::MN_EvictResources(CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >& toCacheList, uint64 nBytesNeeded)
{
	CUtlVector<CTextureInfoId, CUtlMemory<CTextureInfoId, int> > potentiallyEvictableTextures; // 2897
	const char   __FUNCTION__; // 55857
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2903
	}
	{
		uint j; // 2908
		{
			CTextureInfoChunkBase* pChunk; // 2910
			{
				uint i; // 2911
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2925
				}
			}
		}
	}
	{
		{
			int i; // 2941
		}
	}
} /* size: 0, variables: 2 */

// <002FB3C2> rendersystem/texturebase.cpp:2886
// variables: 8
void CTextureManagerBase::MN_EvictResources(CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >& toCacheList, uint64 nBytesNeeded)
{
	CUtlVector<CTextureInfoId, CUtlMemory<CTextureInfoId, int> > potentiallyEvictableTextures; // 2897
	const char   __FUNCTION__; // 38391
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2903
	}
	{
		uint j; // 2908
		{
			CTextureInfoChunkBase* pChunk; // 2910
			{
				uint i; // 2911
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2925
				}
			}
		}
	}
	{
		{
			int i; // 2941
		}
	}
} /* size: 0, variables: 2 */

// <00317DA6> rendersystem/texturebase.cpp:3001
// variables: 3
// function calls: 16
void CTextureManagerBase::FrameUpdate(int nFinishedFrameCount)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_3017; // 3017
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_3018; // 3018
	bool bPeformQueuedTextureInfoDeletionThisFrame; // 3028
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 3017
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
			int nLineNumber);  // 3018
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 3021
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 3040
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 3040
} /* size: 557, variables: 3, inline expansions: 16 (908 bytes) */

// <003175D8> rendersystem/texturebase.cpp:3042
// variables: 4
// function calls: 25
void CTextureManagerBase::ValidateTextureStreaming()
{
	int nTexturesInFlight; // 3044
	{
		uint nChunk; // 3046
		{
			CTextureInfoChunkBase* pChunk; // 3048
			{
				uint i; // 3049
				__atomic_base<short unsigned int>::load(
					memory_order __m);  // 361
				__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
				CTextureInfoChunkBase::HasAnyFlags(
						int nTexId,
						uint16 nFlagsToTest);  // 3052
				__atomic_base<short unsigned int>::load(
					memory_order __m);  // 361
				__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
				CTextureInfoChunkBase::HasAnyFlags(
						int nTexId,
						uint16 nFlagsToTest);  // 3057
				__atomic_base<short unsigned int>::load(
					memory_order __m);  // 361
				__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
				CTextureInfoChunkBase::HasAnyFlags(
						int nTexId,
						uint16 nFlagsToTest);  // 3061
				__atomic_base<short unsigned int>::load(
					memory_order __m);  // 361
				__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
				CTextureInfoChunkBase::HasAnyFlags(
						int nTexId,
						uint16 nFlagsToTest);  // 3065
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
											const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3056
				CResourceName::Get(); // 3056
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 318
				CResourceName::~CResourceName(); // 191
				CResourceNameGetter::~CResourceNameGetter(); // 3056
			}
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 3074
	CInterlockedIntT<int, 4>::GetRaw(); // 3080
} /* size: 780, variables: 1, inline expansions: 2 (26 bytes) */

// <003175AA> rendersystem/texturebase.cpp:3084
void CTextureManagerBase::GetStreamingType()
{
} /* size: 15 */

// <00316C42> rendersystem/texturebase.cpp:3096
// variables: 6
// function calls: 33
void CTextureManagerBase::PerformTextureStreaming(int nFinishedFrameCount)
{
	CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> > toCacheList; // 3102
	uint64 nBytesNeeded; // 3103
	CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::CUtlVector(); // 3102
	{
		uint j; // 3122
		{
			CTextureInfoChunkBase* pChunk; // 3124
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 3128
		}
	}
	CTextureManagerBase::ResetTextureBindStats(); // 3105
	{
		int i; // 949
		{
			int j; // 951
			ResourceSizeComparisonFunc(const ToCacheHandle_t* pLeft,
							const ToCacheHandle_t* pRight);  // 953
			CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::Element(
				int i);  // 953
			CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::Element(
				int i);  // 953
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 791
			ToCacheHandle_t::ToCacheHandle_t(
					ToCacheHandle_t &);  // 235
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 791
			ToCacheHandle_t::operator=(
					ToCacheHandle_t &);  // 236
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 791
			ToCacheHandle_t::operator=(
					ToCacheHandle_t &);  // 237
			swap<CTextureManagerBase::ToCacheHandle_t>(ToCacheHandle_t& __a,
									ToCacheHandle_t& __b);  // 19
			V_swap<CTextureManagerBase::ToCacheHandle_t>(ToCacheHandle_t& x,
									ToCacheHandle_t& y);  // 955
		}
	}
	CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::Sort(
		int (*pfnCompare)(const ToCacheHandle_t *, const ToCacheHandle_t *));  // 3108
	CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::Purge(); // 903
	CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::Purge(); // 1799
	CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::Purge(); // 560
	ValidateAlignment<CTextureManagerBase::ToCacheHandle_t>(void); // 508
	CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::Purge(); // 510
	CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTextureManagerBase::ToCacheHandle_t, CUtlMemory<CTextureManagerBase::ToCacheHandle_t, int> >::~CUtlVector(); // 3118
} /* size: 652, variables: 2, inline expansions: 15 (646 bytes) */

// <00347AEE> rendersystem/texturebase.cpp:3120
// variables: 2
// function calls: 2
void CTextureManagerBase::ResetTextureBindStats()
{
	{
		uint j; // 3122
		{
			CTextureInfoChunkBase* pChunk; // 3124
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 3128
		}
	}
} /* size: 81 */

// <00316C0D> rendersystem/texturebase.cpp:3120
// variables: 2
void CTextureManagerBase::ResetTextureBindStats()
{
	{
		uint j; // 3122
		{
			CTextureInfoChunkBase* pChunk; // 3124
		}
	}
} /* size: 0 */

// <00316A85> rendersystem/texturebase.cpp:3132
// variable: 1
// function calls: 5
void OnTexturePoolSizeChanged(IConVar* var, const char* pOldValue, float flOldValue)
{
	{
		int nNewPoolSize; // 3136
		ConVar::GetInt(); // 3136
		CTextureManagerBase::GetMinStreaminingMemoryPoolSizeMB(); // 3137
		Max<int>(const int& val1,
			const int& val2);  // 3137
		ConVar::GetInt(); // 3138
		Min<int>(const int& val1,
			const int& val2);  // 3140
	}
} /* size: 65 */

// <00316990> rendersystem/texturebase.cpp:3147
// variable: 1
// function calls: 2
void OnTextureStreamMipBiasChanged(IConVar* var, const char* pOldValue, float flOldValue)
{
	{
		int nNewMipBias; // 3151
		ConVar::GetInt(); // 3151
		CTextureManagerBase::SetTextureStreamMipBias(
					int nTextureMipBias);  // 3152
	}
} /* size: 74 */

// <00315CDC> rendersystem/texturebase.cpp:3156
// variables: 8
// function calls: 53
void CTextureManagerBase::GetTextureResidencyInfo(CUtlVector<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >& textures, TextureResidencyStats_t& textureResidencyStats)
{
	{
		uint j; // 3158
		{
			CTextureInfoChunkBase* pChunk; // 3160
			{
				uint i; // 3162
				{
					CTextureBase* pTexture; // 3164
					TextureResidencyInfo_t* pInfo; // 3172
					const TextureSpecification_t* pDiskSpec; // 3173
					const TextureSpecification_t* pSpec; // 3174
					{
						CTextureInfoId texId; // 3187
					}
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
					CTextureBase::ComputeTextureDimension(); // 3182
					CUtlMemory<TextureResidencyInfo_t, int>::NumAllocated(); // 1143
					CUtlMemory<TextureResidencyInfo_t, int>::Base(); // 112
					CUtlVectorBase<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::Base(); // 368
					CUtlVectorBase<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::ResetDbgInfo(); // 824
					CUtlMemory<TextureResidencyInfo_t, int>::IsGrowable(); // 823
					CUtlMemory<TextureResidencyInfo_t, int>::IsExternallyAllocated(); // 859
					CUtlMemory<TextureResidencyInfo_t, int>::IsExternallyAllocated(); // 861
					CUtlMemory<TextureResidencyInfo_t, int>::Grow(
						int num);  // 806
					CUtlVectorBase<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::GrowMemory(
							int num);  // 1145
					CUtlMemory<TextureResidencyInfo_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::Element(
						int i);  // 1148
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
					CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
								ResourceHandle_t hUntypedResource);  // 227
					FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
					StaticInvalidHandle(void); // 71
					TextureResidencyInfo_t::TextureResidencyInfo_t(); // 1479
					Construct<TextureResidencyInfo_t>(TextureResidencyInfo_t* pMemory); // 1148
					CUtlVectorBase<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::AddToTail(); // 1156
					CUtlMemory<TextureResidencyInfo_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::Element(
						int i);  // 1156
					CUtlVectorBase<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >::AddToTailGetPtr(); // 3172
					CTextureInfoId::GetDiskSpec(); // 388
					CTextureBase::GetDiskSpec(); // 3173
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
					CTextureDesc::GetArrayCount(); // 3177
					CTextureInfoId::GetSpec(); // 403
					CTextureBase::GetSpec(); // 3174
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
					CTextureInfoId::GetResourceHandle(); // 478
					CTextureBase::GetTextureHandle(); // 3176
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
					CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3176
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 187
					CTextureDesc::GetDepth(); // 3177
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
					CTextureDesc::GetArrayCount(); // 3178
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 187
					CTextureDesc::GetDepth(); // 3178
					CTextureInfoId::GetAverageColor(); // 3181
					Vector::operator=(
							const Vector& vOther);  // 3181
				}
			}
		}
	}
} /* size: 0 */

// <003155E1> rendersystem/texturebase.cpp:3197
// variables: 10
// function calls: 24
void CTextureManagerBase::ListAllTexturesConCommand(const CCommandContext& ctx, const CCommand& args)
{
	const char   __FUNCTION__; // 56073
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3202
	}
	{
		uint j; // 3205
		{
			CTextureInfoChunkBase* pChunk; // 3207
			{
				uint i; // 3208
				{
					CTextureBase* pTexture; // 3210
					HRenderTexture hTexture; // 3217
					CUtlString textureName; // 3218
					const TextureSpecification_t* pSpec; // 3225
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3214
					}
					CUtlString::CUtlString(
							const char* pString);  // 3218
					CUtlSymbolLarge::String(); // 160
					ResourceGetName(ResourceNameHandle_t hResourceName,
							CResourceName* pTarget);  // 184
					ResourceGetName(ResourceHandle_t hResource,
							CResourceName* pTarget);  // 488
					CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
							CResourceName* pOutName);  // 206
					CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
												const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3222
					CResourceName::Get(); // 3222
					CUtlString::operator=(
							const char* src);  // 3222
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 318
					CResourceName::~CResourceName(); // 191
					CResourceNameGetter::~CResourceNameGetter(); // 3222
					CTextureInfoId::GetSpec(); // 403
					CTextureBase::GetSpec(); // 3225
					CUtlString::Get(); // 3226
					CUtlString::~CUtlString(); // 3227
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
					CTextureInfoId::GetResourceHandle(); // 3217
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
					FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
					StaticInvalidHandle(void); // 3219
				}
			}
		}
	}
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Count(); // 135
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::IsEmpty(); // 3202
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <002F867A> rendersystem/texturebase.cpp:3197
// variables: 10
// function calls: 24
void CTextureManagerBase::ListAllTexturesConCommand(const CCommandContext& ctx, const CCommand& args)
{
	const char   __FUNCTION__; // 38607
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3202
	}
	{
		uint j; // 3205
		{
			CTextureInfoChunkBase* pChunk; // 3207
			{
				uint i; // 3208
				{
					CTextureBase* pTexture; // 3210
					HRenderTexture hTexture; // 3217
					CUtlString textureName; // 3218
					const TextureSpecification_t* pSpec; // 3225
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3214
					}
					CUtlString::CUtlString(
							const char* pString);  // 3218
					CUtlSymbolLarge::String(); // 160
					ResourceGetName(ResourceNameHandle_t hResourceName,
							CResourceName* pTarget);  // 184
					ResourceGetName(ResourceHandle_t hResource,
							CResourceName* pTarget);  // 488
					CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
							CResourceName* pOutName);  // 206
					CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
												const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3222
					CResourceName::Get(); // 3222
					CUtlString::operator=(
							const char* src);  // 3222
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 318
					CResourceName::~CResourceName(); // 191
					CResourceNameGetter::~CResourceNameGetter(); // 3222
					CTextureInfoId::GetSpec(); // 403
					CTextureBase::GetSpec(); // 3225
					CUtlString::Get(); // 3226
					CUtlString::~CUtlString(); // 3227
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
					CTextureInfoId::GetResourceHandle(); // 3217
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
					FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
					StaticInvalidHandle(void); // 3219
				}
			}
		}
	}
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Count(); // 135
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::IsEmpty(); // 3202
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00313422> rendersystem/texturebase.cpp:3231
// variables: 15
// function calls: 145
void CTextureManagerBase::BuildTextureListAndSendToGPUProfiler()
{
	CUtlBuffer textureListBuf; // 3233
	const char   __FUNCTION__; // 56355
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3235
	}
	{
		uint j; // 3238
		{
			CTextureInfoChunkBase* pChunk; // 3240
			{
				uint i; // 3241
				{
					CTextureBase* pTexture; // 3243
					RenderPipelineStatsTextureInfo_t ti; // 3250
					const TextureSpecification_t* pDiskSpec; // 3252
					const TextureSpecification_t* pSpec; // 3257
					HRenderTexture hTexture; // 3303
					CUtlString textureName; // 3304
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3247
					}
					memset(void* __dest,
						int __ch,
						size_t __len);  // 67
					V_memset(void* dest,
						int fill,
						size_t count);  // 260
					CBigEndianValue<short unsigned int>::CBigEndianValue(); // 260
					CBigEndianValue<short unsigned int>::CBigEndianValue(); // 260
					CBigEndianValue<short unsigned int>::CBigEndianValue(); // 260
					CBigEndianValue<short unsigned int>::CBigEndianValue(); // 260
					CBigEndianValue<short unsigned int>::CBigEndianValue(); // 260
					CBigEndianValue<short unsigned int>::CBigEndianValue(); // 260
					CBigEndianValue<short unsigned int>::CBigEndianValue(); // 260
					CBigEndianValue<unsigned char>::CBigEndianValue(); // 260
					CBigEndianValue<unsigned char>::CBigEndianValue(); // 260
					CBigEndianValue<unsigned char>::CBigEndianValue(); // 260
					CBigEndianValue<signed char>::CBigEndianValue(); // 260
					RenderPipelineStatsTextureInfo_t::RenderPipelineStatsTextureInfo_t(); // 3250
					CUtlSymbolLarge::String(); // 160
					ResourceGetName(ResourceNameHandle_t hResourceName,
							CResourceName* pTarget);  // 184
					ResourceGetName(ResourceHandle_t hResource,
							CResourceName* pTarget);  // 488
					CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
							CResourceName* pOutName);  // 206
					CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
												const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3308
					CResourceName::Get(); // 3308
					CUtlString::operator=(
							const char* src);  // 3308
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 318
					CResourceName::~CResourceName(); // 191
					CResourceNameGetter::~CResourceNameGetter(); // 3308
					CTextureInfoId::GetPinCount(); // 3311
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3313
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3313
					CUtlString::Get(); // 3317
					CUtlString::~CUtlString(); // 3318
					CTextureInfoId::GetDiskSpec(); // 388
					CTextureBase::GetDiskSpec(); // 3252
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3253
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3254
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3255
					CTextureInfoId::GetSpec(); // 403
					CTextureBase::GetSpec(); // 3257
					CBigEndianValue<unsigned char>::operator=(
							unsigned char val);  // 3256
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3258
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3259
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3260
					CBigEndianValue<unsigned char>::operator=(
							unsigned char val);  // 3261
					RenderMultisampleTypeNumSamples(RenderMultisampleType_t msaaType); // 3262
					CBigEndianValue<unsigned char>::operator=(
							unsigned char val);  // 3262
					CBigEndianValue<signed char>::operator=(
							signed char val);  // 3264
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 3266
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3268
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3268
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 3270
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3272
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3272
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 3274
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3276
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3276
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 3278
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3280
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3280
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 3282
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3284
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3284
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 3286
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3288
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3288
					__atomic_base<short unsigned int>::load(
						memory_order __m);  // 361
					__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
					CTextureInfoChunkBase::HasAnyFlags(
							int nTexId,
							uint16 nFlagsToTest);  // 1017
					CTextureInfoId::HasAnyFlags(
							uint16 nFlagsToTest);  // 3290
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3292
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3292
					__atomic_base<short unsigned int>::load(
						memory_order __m);  // 361
					__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
					CTextureInfoChunkBase::HasAnyFlags(
							int nTexId,
							uint16 nFlagsToTest);  // 1017
					CTextureInfoId::HasAnyFlags(
							uint16 nFlagsToTest);  // 3294
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3296
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3296
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 3298
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3300
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3300
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
					CTextureInfoId::GetResourceHandle(); // 3303
					CUtlString::CUtlString(
							const char* pString);  // 3304
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
					FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
					StaticInvalidHandle(void); // 3305
				}
			}
		}
	}
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Count(); // 135
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::IsEmpty(); // 3235
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<int>(
			int src);  // 1204
	{
	}
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<int>(int* output,
					int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<int>(
					int* outputBuffer,
					int* inputBuffer,
					int count);  // 170
	CByteswap::SwapBufferToTargetEndian<int>(
					int* outputBuffer,
					int* inputBuffer,
					int count);  // 1214
	CUtlBuffer::PutTypeBin<int>(
			int src);  // 1240
	GetFmtStr<int>(int nRadix,
			bool bPrint);  // 1244
	CUtlBuffer::PutType<int>(
			int src);  // 1236
	CUtlBuffer::PutType<int>(
			int src);  // 1335
	CUtlBuffer::PutInt(
		int i);  // 3237
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 3320
} /* size: 0, variables: 2, inline expansions: 20 (969 bytes) */

// <002F64BB> rendersystem/texturebase.cpp:3231
// variables: 15
// function calls: 145
void CTextureManagerBase::BuildTextureListAndSendToGPUProfiler()
{
	CUtlBuffer textureListBuf; // 3233
	const char   __FUNCTION__; // 38889
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3235
	}
	{
		uint j; // 3238
		{
			CTextureInfoChunkBase* pChunk; // 3240
			{
				uint i; // 3241
				{
					CTextureBase* pTexture; // 3243
					RenderPipelineStatsTextureInfo_t ti; // 3250
					const TextureSpecification_t* pDiskSpec; // 3252
					const TextureSpecification_t* pSpec; // 3257
					HRenderTexture hTexture; // 3303
					CUtlString textureName; // 3304
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3247
					}
					memset(void* __dest,
						int __ch,
						size_t __len);  // 67
					V_memset(void* dest,
						int fill,
						size_t count);  // 260
					CBigEndianValue<short unsigned int>::CBigEndianValue(); // 260
					CBigEndianValue<short unsigned int>::CBigEndianValue(); // 260
					CBigEndianValue<short unsigned int>::CBigEndianValue(); // 260
					CBigEndianValue<short unsigned int>::CBigEndianValue(); // 260
					CBigEndianValue<short unsigned int>::CBigEndianValue(); // 260
					CBigEndianValue<short unsigned int>::CBigEndianValue(); // 260
					CBigEndianValue<short unsigned int>::CBigEndianValue(); // 260
					CBigEndianValue<unsigned char>::CBigEndianValue(); // 260
					CBigEndianValue<unsigned char>::CBigEndianValue(); // 260
					CBigEndianValue<unsigned char>::CBigEndianValue(); // 260
					CBigEndianValue<signed char>::CBigEndianValue(); // 260
					RenderPipelineStatsTextureInfo_t::RenderPipelineStatsTextureInfo_t(); // 3250
					CUtlSymbolLarge::String(); // 160
					ResourceGetName(ResourceNameHandle_t hResourceName,
							CResourceName* pTarget);  // 184
					ResourceGetName(ResourceHandle_t hResource,
							CResourceName* pTarget);  // 488
					CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
							CResourceName* pOutName);  // 206
					CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
												const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3308
					CResourceName::Get(); // 3308
					CUtlString::operator=(
							const char* src);  // 3308
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 318
					CResourceName::~CResourceName(); // 191
					CResourceNameGetter::~CResourceNameGetter(); // 3308
					CTextureInfoId::GetPinCount(); // 3311
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3313
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3313
					CUtlString::Get(); // 3317
					CUtlString::~CUtlString(); // 3318
					CTextureInfoId::GetDiskSpec(); // 388
					CTextureBase::GetDiskSpec(); // 3252
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3253
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3254
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3255
					CTextureInfoId::GetSpec(); // 403
					CTextureBase::GetSpec(); // 3257
					CBigEndianValue<unsigned char>::operator=(
							unsigned char val);  // 3256
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3258
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3259
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3260
					CBigEndianValue<unsigned char>::operator=(
							unsigned char val);  // 3261
					RenderMultisampleTypeNumSamples(RenderMultisampleType_t msaaType); // 3262
					CBigEndianValue<unsigned char>::operator=(
							unsigned char val);  // 3262
					CBigEndianValue<signed char>::operator=(
							signed char val);  // 3264
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 3266
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3268
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3268
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 3270
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3272
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3272
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 3274
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3276
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3276
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 3278
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3280
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3280
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 3282
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3284
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3284
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 3286
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3288
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3288
					__atomic_base<short unsigned int>::load(
						memory_order __m);  // 361
					__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
					CTextureInfoChunkBase::HasAnyFlags(
							int nTexId,
							uint16 nFlagsToTest);  // 1017
					CTextureInfoId::HasAnyFlags(
							uint16 nFlagsToTest);  // 3290
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3292
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3292
					__atomic_base<short unsigned int>::load(
						memory_order __m);  // 361
					__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
					CTextureInfoChunkBase::HasAnyFlags(
							int nTexId,
							uint16 nFlagsToTest);  // 1017
					CTextureInfoId::HasAnyFlags(
							uint16 nFlagsToTest);  // 3294
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3296
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3296
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 3298
					WordSwapC<short unsigned int>(short unsigned int w); // 253
					CBigEndianValue<short unsigned int>::GetValue(); // 283
					CBigEndianValue<short unsigned int>::operator short unsigned int(); // 3300
					WordSwapC<short unsigned int>(short unsigned int w); // 268
					CBigEndianValue<short unsigned int>::operator=(
							short unsigned int val);  // 3300
					CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
							const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
					CTextureInfoId::GetResourceHandle(); // 3303
					CUtlString::CUtlString(
							const char* pString);  // 3304
					CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
					FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
					StaticInvalidHandle(void); // 3305
				}
			}
		}
	}
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Count(); // 135
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::IsEmpty(); // 3235
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<int>(
			int src);  // 1204
	{
	}
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<int>(int* output,
					int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<int>(
					int* outputBuffer,
					int* inputBuffer,
					int count);  // 170
	CByteswap::SwapBufferToTargetEndian<int>(
					int* outputBuffer,
					int* inputBuffer,
					int count);  // 1214
	CUtlBuffer::PutTypeBin<int>(
			int src);  // 1240
	GetFmtStr<int>(int nRadix,
			bool bPrint);  // 1244
	CUtlBuffer::PutType<int>(
			int src);  // 1236
	CUtlBuffer::PutType<int>(
			int src);  // 1335
	CUtlBuffer::PutInt(
		int i);  // 3237
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 3320
} /* size: 0, variables: 2, inline expansions: 20 (969 bytes) */

// <00312CC9> rendersystem/texturebase.cpp:3322
// variables: 5
// function calls: 27
void CTextureManagerBase::EvictAllTextures()
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_3324; // 3324
	{
		uint j; // 3325
		{
			CTextureInfoChunkBase* pChunk; // 3327
			{
				uint i; // 3328
				{
					CTextureBase* pTexture; // 3342
					__atomic_base<short unsigned int>::load(
						memory_order __m);  // 361
					__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 533
					CTextureInfoChunkBase::HasAllFlags(
							int nTexId,
							uint16 nFlagsToTest);  // 3334
					__atomic_base<short unsigned int>::load(
						memory_order __m);  // 361
					__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
					CTextureInfoChunkBase::HasAnyFlags(
							int nTexId,
							uint16 nFlagsToTest);  // 3338
					CTextureBase::AssertTextureInfoId(
								int nChunkIdx,
								int nInChunkIdx);  // 3347
					CTextureInfoId::GetDiskSpec(); // 388
					CTextureBase::GetDiskSpec(); // 3349
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
					CTextureDesc::GetArrayCount(); // 3349
					CTextureInfoId::GetDiskSpec(); // 388
					CTextureBase::GetDiskSpec(); // 3349
					operator&(RuntimeTextureSpecificationFlags_t a,
							RuntimeTextureSpecificationFlags_t b);  // 187
					CTextureDesc::GetDepth(); // 3349
					ThreadInterlockedIncrement64(volatile int64* p); // 579
					CInterlockedIntT<long long int, 8>::operator++(); // 3352
				}
			}
		}
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
			int nLineNumber);  // 3324
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 3356
} /* size: 0, variables: 1, inline expansions: 8 (622 bytes) */

// <00312C54> rendersystem/texturebase.cpp:3358
void CTextureManagerBase::EvictAllTexturesConCommand(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 9 */

// <00347BE4> rendersystem/texturebase.cpp:3365
// variable: 1
void CTextureManagerBase::GetNewStreamingRequestId()
{
	int32 nNewId; // 3369
	{
	}
} /* size: 0, variables: 1 */

// <00312BEF> rendersystem/texturebase.cpp:3365
// variables: 3
void CTextureManagerBase::GetNewStreamingRequestId()
{
	const char   __FUNCTION__; // 56046
	int32 nNewId; // 3369
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3367
	}
} /* size: 0, variables: 2 */

// <002F5C88> rendersystem/texturebase.cpp:3365
// variables: 3
void CTextureManagerBase::GetNewStreamingRequestId()
{
	const char   __FUNCTION__; // 38580
	int32 nNewId; // 3369
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3367
	}
} /* size: 0, variables: 2 */

// <003124AD> rendersystem/texturebase.cpp:3377
// variables: 4
// function calls: 27
void CTextureManagerBase::MarkStreamingRequestAbandonedIfNeeded(HRenderTexture hResource, int32 nStreamingRequestId)
{
	bool bAbandonRequest; // 3385
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_3390; // 3390
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 3390
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 3392
	}
	{
		const CTextureBase* pTexture; // 3398
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_3404; // 3404
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 3404
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
					const int& src);  // 3405
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 3407
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::HasData(); // 3398
		CInterlockedIntT<int, 4>::GetRaw(); // 383
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetRefCount(); // 3398
		CInterlockedIntT<int, 4>::operator int(); // 282
		ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3398
		CTextureInfoId::GetPendingStreamingRequestId(); // 3399
	}
} /* size: 449, variables: 1 */

// <00311CE4> rendersystem/texturebase.cpp:3417
// variables: 2
// function calls: 31
void CTextureManagerBase::AbandonOutstandingStreamingRequestOnTextureDeletion(CTextureBase* pTexture)
{
	int32 nPendingStreamingRequestId; // 3419
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_3422; // 3422
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 3422
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 3432
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
		CTextureInfoId::GetResourceHandle(); // 478
		CTextureBase::GetTextureHandle(); // 3431
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
									const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3431
		CResourceName::Get(); // 3431
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 3431
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
				const int& src);  // 3429
	}
	CTextureInfoId::GetPendingStreamingRequestId(); // 3419
} /* size: 601, variables: 1, inline expansions: 1 (46 bytes) */

// <003118CA> rendersystem/texturebase.cpp:3440
// variables: 7
// function calls: 14
void CTextureManagerBase::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 56154
	HRenderTexture hTexture; // 3443
	CTextureBase* pTexture; // 3444
	const TextureSpecification_t* pSpec; // 3451
	const TextureSpecification_t* pDiskSpec; // 3452
	const int  nTextureDimLimit; // 3453
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3442
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 234
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 235
	FromUntypedHandle(ResourceHandle_t hResource); // 3443
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3444
	CTextureInfoId::GetSpec(); // 3451
	CTextureManagerBase::GetMaxPreloadTextureRes(); // 3453
	CTextureInfoId::GetDiskSpec(); // 3452
	CTextureManagerBase::GetMaxTextureRes(); // 3453
	Min<int>(const int& val1,
		const int& val2);  // 3453
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 3454
} /* size: 0, variables: 6, inline expansions: 14 (245 bytes) */

// <002F4963> rendersystem/texturebase.cpp:3440
// variables: 7
// function calls: 14
void CTextureManagerBase::IsStreamingDataAlreadyLoaded(ResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 38688
	HRenderTexture hTexture; // 3443
	CTextureBase* pTexture; // 3444
	const TextureSpecification_t* pSpec; // 3451
	const TextureSpecification_t* pDiskSpec; // 3452
	const int  nTextureDimLimit; // 3453
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3442
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 234
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 235
	FromUntypedHandle(ResourceHandle_t hResource); // 3443
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3444
	CTextureInfoId::GetSpec(); // 3451
	CTextureManagerBase::GetMaxPreloadTextureRes(); // 3453
	CTextureInfoId::GetDiskSpec(); // 3452
	CTextureManagerBase::GetMaxTextureRes(); // 3453
	Min<int>(const int& val1,
		const int& val2);  // 3453
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 3454
} /* size: 0, variables: 6, inline expansions: 14 (245 bytes) */

// <0031133F> rendersystem/texturebase.cpp:3469
// variables: 5
// function calls: 17
void CTextureManagerBase::LoadStreamingData(ResourceHandle_t hResource, IResourceSystemUtils* pUtils)
{
	const char   __FUNCTION__; // 55857
	HRenderTexture hTexture; // 3473
	CTextureBase* pTexture; // 3474
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3471
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3475
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 234
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 235
	FromUntypedHandle(ResourceHandle_t hResource); // 3473
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3474
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3477
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 3472
	CResourceName::Get(); // 3472
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 3472
} /* size: 0, variables: 3, inline expansions: 17 (498 bytes) */

// <002F43D8> rendersystem/texturebase.cpp:3469
// variables: 5
// function calls: 17
void CTextureManagerBase::LoadStreamingData(ResourceHandle_t hResource, IResourceSystemUtils* pUtils)
{
	const char   __FUNCTION__; // 38391
	HRenderTexture hTexture; // 3473
	CTextureBase* pTexture; // 3474
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3471
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3475
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 234
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 235
	FromUntypedHandle(ResourceHandle_t hResource); // 3473
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3474
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3477
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 3472
	CResourceName::Get(); // 3472
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 3472
} /* size: 0, variables: 3, inline expansions: 17 (498 bytes) */

// <00310EFD> rendersystem/texturebase.cpp:3480
// variable: 1
// function calls: 16
void CTextureManagerBase::GetTextureSpecification(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 3482
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3482
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 3492
	CTextureManagerBase::GetErrorTexture(
			RenderTextureDimension_t nDim);  // 3488
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3486
	CResourceName::Get(); // 3486
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 3486
} /* size: 307, variables: 1, inline expansions: 16 (428 bytes) */

// <003108C1> rendersystem/texturebase.cpp:3501
// variables: 4
// function calls: 22
void CTextureManagerBase::MarkUsed(HRenderTexture hTexture, int nDetail)
{
	CTextureBase* pTexture; // 3503
	{
		float flBias; // 3514
		float flDetail; // 3515
		{
			CResourceName resourceName; // 3508
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 488
			CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
					CResourceName* pOutName);  // 3509
			CResourceName::String(); // 3510
			Plat_IsInDebugSession(void); // 3512
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 3513
		}
		ConVar::GetFloat(); // 3514
		Clamp<int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 3515
		Clamp<int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 119
		ClampFloatToInt<float>(float val,
					int minVal,
					int maxVal);  // 3516
		CInterlockedIntT<int, 4>::GetRaw(); // 1057
		ThreadInterlockedAssignIf(volatile int32* p,
						int32 value,
						int32 comparand);  // 597
		CInterlockedIntT<int, 4>::AssignIf(
			int conditionValue,
			int newValue);  // 693
		CInterlockedIntT<int, 4>::Maximize(
			int operand);  // 1059
		CTextureInfoId::MarkUsed(
			int nRequestedTextureSize);  // 498
		CTextureBase::MarkUsed(
			int nDetail);  // 3516
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3503
} /* size: 486, variables: 1, inline expansions: 2 (44 bytes) */

// <0031047F> rendersystem/texturebase.cpp:3520
// variable: 1
// function calls: 16
void CTextureManagerBase::GetOnDiskTextureDesc(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 3522
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3522
	CTextureInfoId::GetDiskSpec(); // 388
	CTextureBase::GetDiskSpec(); // 3532
	CTextureManagerBase::GetErrorTexture(
			RenderTextureDimension_t nDim);  // 3528
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3526
	CResourceName::Get(); // 3526
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 3526
} /* size: 307, variables: 1, inline expansions: 16 (428 bytes) */

// <0031003D> rendersystem/texturebase.cpp:3540
// variable: 1
// function calls: 16
void CTextureManagerBase::GetTextureDesc(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 3542
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3542
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 3552
	CTextureManagerBase::GetErrorTexture(
			RenderTextureDimension_t nDim);  // 3548
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3546
	CResourceName::Get(); // 3546
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 3546
} /* size: 307, variables: 1, inline expansions: 16 (428 bytes) */

// <0030F96A> rendersystem/texturebase.cpp:3560
// variables: 3
// function calls: 25
void CTextureManagerBase::GetTextureAverageColor(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 3562
	const char   __FUNCTION__; // 55992
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3576
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3562
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3576
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 3576
	CTextureInfoId::GetAverageColor(); // 3577
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 3568
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3566
	CResourceName::Get(); // 3566
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 3566
} /* size: 0, variables: 2, inline expansions: 25 (665 bytes) */

// <002F2A03> rendersystem/texturebase.cpp:3560
// variables: 3
// function calls: 25
void CTextureManagerBase::GetTextureAverageColor(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 3562
	const char   __FUNCTION__; // 38526
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3576
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3562
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3576
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 3576
	CTextureInfoId::GetAverageColor(); // 3577
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 3568
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3566
	CResourceName::Get(); // 3566
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 3566
} /* size: 0, variables: 2, inline expansions: 25 (665 bytes) */

// <0030F50D> rendersystem/texturebase.cpp:3581
// variables: 4
// function calls: 16
void CTextureManagerBase::GetTextureMultisampleType(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 3583
	const TextureSpecification_t* pSpec; // 3591
	const char   __FUNCTION__; // 56073
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3598
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3583
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 3591
	CTextureManagerBase::GetErrorTexture(
			RenderTextureDimension_t nDim);  // 3589
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3587
	CResourceName::Get(); // 3587
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 3587
} /* size: 307, variables: 3, inline expansions: 16 (381 bytes) */

// <002F25A6> rendersystem/texturebase.cpp:3581
// variables: 4
// function calls: 16
void CTextureManagerBase::GetTextureMultisampleType(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 3583
	const TextureSpecification_t* pSpec; // 3591
	const char   __FUNCTION__; // 38607
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3598
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3583
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 3591
	CTextureManagerBase::GetErrorTexture(
			RenderTextureDimension_t nDim);  // 3589
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3587
	CResourceName::Get(); // 3587
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 3587
} /* size: 307, variables: 3, inline expansions: 16 (381 bytes) */

// <0030F0A1> rendersystem/texturebase.cpp:3604
// variable: 1
// function calls: 17
void CTextureManagerBase::IsTextureSampleableRenderTarget(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 3606
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3606
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 3614
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 3614
	CTextureManagerBase::GetErrorTexture(
			RenderTextureDimension_t nDim);  // 3612
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3610
	CResourceName::Get(); // 3610
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 3610
} /* size: 307, variables: 1, inline expansions: 17 (373 bytes) */

// <0030EC77> rendersystem/texturebase.cpp:3617
// variable: 1
// function calls: 16
void CTextureManagerBase::IsTextureRenderTarget(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 3619
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3619
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 3627
	CTextureManagerBase::GetErrorTexture(
			RenderTextureDimension_t nDim);  // 3625
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3623
	CResourceName::Get(); // 3623
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 3623
} /* size: 307, variables: 1, inline expansions: 16 (381 bytes) */

// <0030E80B> rendersystem/texturebase.cpp:3630
// variable: 1
// function calls: 17
void CTextureManagerBase::IsTextureCubeMap(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 3632
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3632
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 3640
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 3640
	CTextureManagerBase::GetErrorTexture(
			RenderTextureDimension_t nDim);  // 3638
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
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 3636
	CResourceName::Get(); // 3636
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 3636
} /* size: 307, variables: 1, inline expansions: 17 (373 bytes) */

// <0030E5A3> rendersystem/texturebase.cpp:3643
// variables: 5
// function calls: 9
void CTextureManagerBase::IsTextureFullyResident(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 3645
	CTextureInfoId texId; // 3659
	const TextureSpecification_t* pSpec; // 3660
	const TextureSpecification_t* pOnDiskSpec; // 3661
	int nNumMipLevels; // 3664
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3645
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
	CTextureInfoChunkBase::HasAnyFlags(
			int nTexId,
			uint16 nFlagsToTest);  // 1017
	CTextureInfoId::HasAnyFlags(
			uint16 nFlagsToTest);  // 3654
	CTextureInfoId::GetSpec(); // 3660
	CTextureInfoId::GetDiskSpec(); // 3661
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 3665
} /* size: 168, variables: 5, inline expansions: 9 (169 bytes) */

// <0030E295> rendersystem/texturebase.cpp:3669
// function calls: 13
void CTextureManagerBase::AddTextureResidencyListener(ITextureResidencyListener* pListener)
{
	CUtlMemory<ITextureResidencyListener::NumAllocated(); // 1196
	CUtlMemory<ITextureResidencyListener::Base(); // 112
	CUtlVectorBase<ITextureResidencyListener::Base(); // 368
	CUtlVectorBase<ITextureResidencyListener::ResetDbgInfo(); // 824
	CUtlMemory<ITextureResidencyListener::IsGrowable(); // 823
	CUtlMemory<ITextureResidencyListener::IsExternallyAllocated(); // 859
	CUtlMemory<ITextureResidencyListener::IsExternallyAllocated(); // 861
	CUtlMemory<ITextureResidencyListener::Grow(
		int num);  // 806
	CUtlVectorBase<ITextureResidencyListener::GrowMemory(
			int num);  // 1198
	CUtlMemory<ITextureResidencyListener::operator[](
			int i);  // 602
	CUtlVectorBase<ITextureResidencyListener::Element(
		int i);  // 1201
	CopyConstruct<ITextureResidencyListener*>(ITextureResidencyListener** pMemory,
							ITextureResidencyListener* const& src);  // 1201
	CUtlVectorBase<ITextureResidencyListener::AddToTail(
			ITextureResidencyListener* const& src);  // 3671
} /* size: 392, inline expansions: 13 (990 bytes) */

// <0030DF92> rendersystem/texturebase.cpp:3674
// variable: 1
// function calls: 13
void CTextureManagerBase::RemoveTextureResidencyListener(ITextureResidencyListener* pListener)
{
	{
		int i; // 1531
		CUtlVectorBase<ITextureResidencyListener::Count(); // 1531
		CUtlMemory<ITextureResidencyListener::operator[](
				int i);  // 609
		CUtlVectorBase<ITextureResidencyListener::Element(
			int i);  // 1533
	}
	CUtlVectorBase<ITextureResidencyListener::Find(
		ITextureResidencyListener* const& src);  // 1617
	CUtlMemory<ITextureResidencyListener::operator[](
			int i);  // 602
	CUtlVectorBase<ITextureResidencyListener::Element(
		int i);  // 1114
	CUtlMemory<ITextureResidencyListener::operator[](
			int i);  // 602
	CUtlVectorBase<ITextureResidencyListener::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<ITextureResidencyListener::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<ITextureResidencyListener::Remove(
		int elem);  // 1620
	CUtlVectorBase<ITextureResidencyListener::FindAndRemove(
			ITextureResidencyListener* const& src);  // 3676
} /* size: 149, inline expansions: 10 (377 bytes) */

// <0030DE11> rendersystem/texturebase.cpp:3679
// variable: 1
// function calls: 5
void CTextureManagerBase::MarkAsyncUpdatedThisFrame(HRenderTexture hTexture)
{
	CTextureBase* pTexture; // 3681
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3681
	CTextureInfoId::SetLastAsyncUpdateFrame(
				uint32 nLastAsyncUpdateFrame);  // 3687
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 3687
} /* size: 141, variables: 1, inline expansions: 5 (70 bytes) */

// <0030DC9E> rendersystem/texturebase.cpp:3690
// variable: 1
// function calls: 5
void CTextureManagerBase::WasAsyncUpdatedThisFrame(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 3692
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3692
	CTextureInfoId::GetLastAsyncUpdateFrame(); // 3699
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 3699
} /* size: 160, variables: 1, inline expansions: 5 (61 bytes) */

// <0030DBBF> rendersystem/texturebase.cpp:3702
// variable: 1
// function calls: 3
void CTextureManagerBase::GetStreamingDataOffset(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 3704
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3704
	CTextureInfoId::GetStreamingBitsOffset(); // 3709
} /* size: 78, variables: 1, inline expansions: 3 (46 bytes) */

// <00347C39> rendersystem/texturebase.cpp:3712
// variables: 4
// function calls: 14
void CTextureManagerBase::AdjustTextureSpecificationForMaxTextureResolution(TextureSpecification_t* pTexSpec, int nMaxTextureRes)
{
	bool bNoLOD; // 3714
	uint32 nClampedWidth; // 3733
	uint32 nClampedHeight; // 3734
	int nClampedMipLevelCount; // 3735
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 3714
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
	CTextureDesc::GetArrayCount(); // 3725
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 187
	CTextureDesc::GetDepth(); // 3725
	Max<int>(const int& val1,
		const int& val2);  // 320
	Max<int>(const int& val1,
		const int& val2);  // 323
	Max<int>(const int& val1,
		const int& val2);  // 324
	Max<int>(const int& val1,
		const int& val2);  // 325
	ComputeClampedTextureDim(uint32 nStartWidth,
				uint32 nStartHeight,
				int nStartMipLevelCount,
				int nMaxTextureRes,
				uint32* pWidthOut,
				uint32* pHeightOut,
				int* pMipLevelCountOut);  // 3736
	CTextureManagerBase::GetMaxTextureRes(); // 3730
	CTextureManagerBase::AdjustTextureSpecificationForMaxTextureResolution(
								TextureSpecification_t* pTexSpec,
								int nMaxTextureRes);  // 3712
} /* size: 0, variables: 4, inline expansions: 14 (593 bytes) */

// <0030DB58> rendersystem/texturebase.cpp:3712
// variables: 4
void CTextureManagerBase::AdjustTextureSpecificationForMaxTextureResolution(TextureSpecification_t* pTexSpec, int nMaxTextureRes)
{
	bool bNoLOD; // 3714
	uint32 nClampedWidth; // 3733
	uint32 nClampedHeight; // 3734
	int nClampedMipLevelCount; // 3735
} /* size: 0, variables: 4 */

// <0034807A> rendersystem/texturebase.cpp:3742
// variables: 3
// function calls: 11
void CTextureManagerBase::AdjustTextureSpecificationForStreamingMipBias(TextureSpecification_t* pTexSpec, const TextureSpecification_t* pDiskSpec)
{
	bool bNoLOD; // 3744
	int nNumMipLevels; // 3760
	int nMipDiff; // 3763
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 3744
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
	CTextureDesc::GetArrayCount(); // 3755
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 187
	CTextureDesc::GetDepth(); // 3755
	clamp<int, short int>(const int& val,
				const short int& minVal,
				const short int& maxVal);  // 3761
	Max<short int>(const short int& val1,
			const short int& val2);  // 3768
	Max<short int>(const short int& val1,
			const short int& val2);  // 3769
	CTextureManagerBase::AdjustTextureSpecificationForStreamingMipBias(
							TextureSpecification_t* pTexSpec,
							const TextureSpecification_t* pDiskSpec);  // 3742
} /* size: 0, variables: 3, inline expansions: 11 (350 bytes) */

// <0030DAFE> rendersystem/texturebase.cpp:3742
// variables: 3
void CTextureManagerBase::AdjustTextureSpecificationForStreamingMipBias(TextureSpecification_t* pTexSpec, const TextureSpecification_t* pDiskSpec)
{
	bool bNoLOD; // 3744
	int nNumMipLevels; // 3760
	int nMipDiff; // 3763
} /* size: 0, variables: 3 */

// <0030D9AB> rendersystem/texturebase.cpp:3774
// variables: 2
// function calls: 5
void CTextureManagerBase::IsSrgbFormat(HRenderTexture hTexture)
{
	const CTextureBase* pTexture; // 3778
	ImageFormat rtFormat; // 3779
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			ResourceHandle_t hResource);  // 3776
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3778
	CTextureInfoId::GetSpec(); // 403
	CTextureBase::GetSpec(); // 3782
} /* size: 93, variables: 2, inline expansions: 5 (28 bytes) */

// <0030D499> rendersystem/texturebase.cpp:3787
// variables: 8
// function calls: 14
void CTextureManagerBase::AllocTextureId()
{
	uint nRawId; // 3789
	const uint  nChunkIdx; // 3797
	const uint  nInChunkIdx; // 3798
	const char   __FUNCTION__; // 55776
	CTextureInfoId newHandle; // 3811
	{
		int* _pCrash; // 3801
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3817
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3818
	}
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 321
	CUtlIdGenerator::DestroyRange(
			const uint  index);  // 94
	CUtlIdGenerator::CreateID(
		uint& id);  // 3790
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 3801
	CTextureInfoId::Init(
		int nChunkIdx,
		int nInChunkIdx);  // 3812
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 3813
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 3814
	CTextureInfoId::SetPendingStreamingRequestId(
					int32 nId);  // 3815
	CTextureInfoId::GetLegacyTexture(); // 3818
} /* size: 0, variables: 5, inline expansions: 14 (325 bytes) */

// <002F0532> rendersystem/texturebase.cpp:3787
// variables: 8
// function calls: 14
void CTextureManagerBase::AllocTextureId()
{
	uint nRawId; // 3789
	const uint  nChunkIdx; // 3797
	const uint  nInChunkIdx; // 3798
	const char   __FUNCTION__; // 38310
	CTextureInfoId newHandle; // 3811
	{
		int* _pCrash; // 3801
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3817
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3818
	}
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 321
	CUtlIdGenerator::DestroyRange(
			const uint  index);  // 94
	CUtlIdGenerator::CreateID(
		uint& id);  // 3790
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 3801
	CTextureInfoId::Init(
		int nChunkIdx,
		int nInChunkIdx);  // 3812
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 1012
	CTextureInfoId::ClearFlags(
			uint16 nFlagsToClear);  // 3813
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 1007
	CTextureInfoId::SetFlags(
		uint16 nFlagsToSet);  // 3814
	CTextureInfoId::SetPendingStreamingRequestId(
					int32 nId);  // 3815
	CTextureInfoId::GetLegacyTexture(); // 3818
} /* size: 0, variables: 5, inline expansions: 14 (325 bytes) */

// <0030CCB8> rendersystem/texturebase.cpp:3823
// variables: 7
// function calls: 25
void CTextureManagerBase::DeleteQueuedTextureIds()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_3825; // 3825
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_3826; // 3826
	{
		const CTextureInfoId& texId; // 3835
		CUtlVector<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >& __for_range; // 21346
		iterator __for_begin; // 47735
		iterator __for_end; // 47735
		{
			CTextureInfoChunkBase* pChunk; // 3837
			CUtlIdGenerator::DestroyID(
					const uint  id);  // 3840
			_DebuggerBreakInlineExpressionWrapper(void); // 3840
		}
		CUtlMemory<CTextureInfoId, int>::Base(); // 112
		CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Base(); // 102
		CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::begin(); // 3835
		CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Count(); // 104
		CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::end(); // 3835
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
			int nLineNumber);  // 3825
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
			int nLineNumber);  // 3826
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Count(); // 135
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::IsEmpty(); // 3828
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::RemoveAll(); // 3843
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 3844
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 3844
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Count(); // 3833
} /* size: 0, variables: 2, inline expansions: 18 (889 bytes) */

// <002EFD51> rendersystem/texturebase.cpp:3823
// variables: 7
// function calls: 25
void CTextureManagerBase::DeleteQueuedTextureIds()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_3825; // 3825
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_3826; // 3826
	{
		const CTextureInfoId& texId; // 3835
		CUtlVector<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >& __for_range; // 3880
		iterator __for_begin; // 30269
		iterator __for_end; // 30269
		{
			CTextureInfoChunkBase* pChunk; // 3837
			CUtlIdGenerator::DestroyID(
					const uint  id);  // 3840
			_DebuggerBreakInlineExpressionWrapper(void); // 3840
		}
		CUtlMemory<CTextureInfoId, int>::Base(); // 112
		CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Base(); // 102
		CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::begin(); // 3835
		CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Count(); // 104
		CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::end(); // 3835
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
			int nLineNumber);  // 3825
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
			int nLineNumber);  // 3826
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Count(); // 135
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::IsEmpty(); // 3828
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::RemoveAll(); // 3843
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 3844
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 3844
	CUtlVectorBase<CTextureInfoId, CUtlMemory<CTextureInfoId, int> >::Count(); // 3833
} /* size: 0, variables: 2, inline expansions: 18 (889 bytes) */

// <0030BB53> rendersystem/texturebase.cpp:3848
// variables: 2
// function calls: 63
void CTextureInfoChunkBase::CTextureInfoChunkBase()
{
	{
		int i; // 3865
	}
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
	TextureSpecification_t::TextureSpecification_t(); // 3848
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
	TextureSpecification_t::TextureSpecification_t(); // 3848
	CInterlockedPtr<void>::CInterlockedPtr(); // 3848
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 3848
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 3848
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3850
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3851
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3852
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3863
	{
		int i; // 3865
		__atomic_base<short unsigned int>::operator|=(
				__int_type __i);  // 530
		CTextureInfoChunkBase::SetFlags(
			int nTexId,
			uint16 nFlagsToSet);  // 3867
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3869
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3870
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3873
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3874
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3875
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3876
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3877
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3878
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3879
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3880
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3881
} /* size: 828, inline expansions: 61 (1422 bytes) */

// <0030BB29> rendersystem/texturebase.cpp:3848
// variable: 1
void CTextureInfoChunkBase::CTextureInfoChunkBase()
{
	{
		int i; // 3865
	}
} /* size: 0 */

// <0030A7DD> rendersystem/texturebase.cpp:3884
// function calls: 93
void CTextureInfoChunkBase::ClearSlot(int nSlotIdx)
{
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 63
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
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 565
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 68
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
	CUtlVector<float, CUtlMemory<float, int> >::operator=(
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 69
	TextureSpecification_t::operator=(
			const TextureSpecification_t& rhs);  // 3890
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
	TextureSpecification_t::TextureSpecification_t(); // 3890
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 52
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
	TextureSpecification_t::~TextureSpecification_t(); // 3890
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
	TextureSpecification_t::TextureSpecification_t(); // 3891
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 63
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
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 565
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 68
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
	CUtlVector<float, CUtlMemory<float, int> >::operator=(
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 69
	TextureSpecification_t::operator=(
			const TextureSpecification_t& rhs);  // 3891
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 52
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
	TextureSpecification_t::~TextureSpecification_t(); // 3891
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 800
	CInterlockedPtr<void>::operator=(
			void* newValue);  // 3893
	__atomic_base<short unsigned int>::operator&=(
			__int_type __i);  // 531
	CTextureInfoChunkBase::ClearFlags(
			int nTexId,
			uint16 nFlagsToClear);  // 3894
	__atomic_base<short unsigned int>::operator|=(
			__int_type __i);  // 530
	CTextureInfoChunkBase::SetFlags(
		int nTexId,
		uint16 nFlagsToSet);  // 3895
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 3898
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 3897
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3897
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 3905
} /* size: 645, inline expansions: 93 (1577 bytes) */

// <003075BB> rendersystem/texturebase.cpp:3914
// variables: 2
// function calls: 222
void SwapSlots(CTextureInfoChunkBase* pChunkDst, int nSlotDst, CTextureInfoChunkBase* pChunkSrc, int nSlotSrc)
{
	uint16 nTmpFlags; // 3934
	swap<CTextureBase*>(CTextureBase *& __a,
				CTextureBase *& __b);  // 19
	V_swap<CTextureBase*>(CTextureBase *& x,
				CTextureBase *& y);  // 3916
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
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
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
			const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 147
	CTextureDesc::CTextureDesc(
			const CTextureDesc& rhs);  // 38
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
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
	TextureSpecification_t::TextureSpecification_t(
				const TextureSpecification_t  &);  // 235
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 63
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
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
	CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
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
	TextureSpecification_t::operator=(
			const TextureSpecification_t& rhs);  // 237
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
	TextureSpecification_t::~TextureSpecification_t(); // 238
	swap<TextureSpecification_t>(TextureSpecification_t& __a,
					TextureSpecification_t& __b);  // 19
	V_swap<TextureSpecification_t>(TextureSpecification_t& x,
					TextureSpecification_t& y);  // 3917
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
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
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
			const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 147
	CTextureDesc::CTextureDesc(
			const CTextureDesc& rhs);  // 38
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
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
	TextureSpecification_t::TextureSpecification_t(
				const TextureSpecification_t  &);  // 235
	CTextureDesc::operator=(
			const CTextureDesc& rhs);  // 63
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
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
	CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
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
	TextureSpecification_t::operator=(
			const TextureSpecification_t& rhs);  // 237
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
	TextureSpecification_t::~TextureSpecification_t(); // 238
	swap<TextureSpecification_t>(TextureSpecification_t& __a,
					TextureSpecification_t& __b);  // 19
	V_swap<TextureSpecification_t>(TextureSpecification_t& x,
					TextureSpecification_t& y);  // 3918
	swap<void*>(void *& __a,
			void *& __b);  // 19
	V_swap<void*>(void *& x,
			void *& y);  // 3919
	swap<CInterlockedPtr<void> >(CInterlockedPtr<void>& __a,
					CInterlockedPtr<void>& __b);  // 19
	V_swap<CInterlockedPtr<void> >(CInterlockedPtr<void>& x,
					CInterlockedPtr<void>& y);  // 3920
	swap<unsigned int>(unsigned int& __a,
				unsigned int& __b);  // 19
	V_swap<unsigned int>(unsigned int& x,
				unsigned int& y);  // 3921
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 235
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 236
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 237
	swap<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>& __a,
								CWeakHandle<InfoForResourceTypeCTextureBase>& __b);  // 19
	V_swap<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>& x,
								CWeakHandle<InfoForResourceTypeCTextureBase>& y);  // 3922
	swap<CInterlockedIntT<int> >(CInterlockedIntT<int, 4>& __a,
					CInterlockedIntT<int, 4>& __b);  // 19
	V_swap<CInterlockedIntT<int> >(CInterlockedIntT<int, 4>& x,
					CInterlockedIntT<int, 4>& y);  // 3923
	swap<float>(float& __a,
			float& __b);  // 19
	V_swap<float>(float& x,
			float& y);  // 3924
	swap<Sheet_t*>(Sheet_t *& __a,
			Sheet_t *& __b);  // 19
	V_swap<Sheet_t*>(Sheet_t *& x,
			Sheet_t *& y);  // 3925
	Vector::operator=(
			const Vector& vOther);  // 236
	Vector::operator=(
			const Vector& vOther);  // 237
	swap<Vector>(Vector& __a,
			Vector& __b);  // 19
	V_swap<Vector>(Vector& x,
			Vector& y);  // 3926
	swap<short int>(short int& __a,
			short int& __b);  // 19
	V_swap<short int>(short int& x,
				short int& y);  // 3927
	swap<unsigned int>(unsigned int& __a,
				unsigned int& __b);  // 19
	V_swap<unsigned int>(unsigned int& x,
				unsigned int& y);  // 3928
	swap<unsigned int>(unsigned int& __a,
				unsigned int& __b);  // 19
	V_swap<unsigned int>(unsigned int& x,
				unsigned int& y);  // 3929
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 3930
	{
		size_t __n; // 254
		swap<unsigned char>(unsigned char& __a,
					unsigned char& __b);  // 255
	}
	swap<unsigned char, 1024>(unsigned char& __a,
					unsigned char& __b);  // 19
	V_swap<unsigned char [1024]>(unsigned char& x,
					unsigned char& y);  // 3931
	swap<RenderTextureStreamingPriority_t>(RenderTextureStreamingPriority_t& __a,
						RenderTextureStreamingPriority_t& __b);  // 19
	V_swap<RenderTextureStreamingPriority_t>(RenderTextureStreamingPriority_t& x,
						RenderTextureStreamingPriority_t& y);  // 3932
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 3934
	__atomic_base<short unsigned int>::load(
		memory_order __m);  // 361
	__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 3935
	__atomic_base<short unsigned int>::store(
		__int_type __i,
		memory_order __m);  // 3935
	__atomic_base<short unsigned int>::store(
		__int_type __i,
		memory_order __m);  // 3936
} /* size: 3902, variables: 1, inline expansions: 221 (26541 bytes) */

// <003483CC> rendersystem/texturebase.cpp:3939
// function calls: 4
void CTextureManagerBase::SetMaxTextureRes(int32 nMaxTextureRes)
{
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 202
	LargestPowerOfTwoLessThanOrEqual(uint32 x); // 3941
	Max<int>(const int& val1,
		const int& val2);  // 3942
	CTextureManagerBase::SetMaxTextureRes(
			int32 nMaxTextureRes);  // 3939
} /* size: 151, inline expansions: 4 (133 bytes) */

// <00307595> rendersystem/texturebase.cpp:3939
void CTextureManagerBase::SetMaxTextureRes(int32 nMaxTextureRes)
{
} /* size: 0 */

// <00307567> rendersystem/texturebase.cpp:3947
void CTextureManagerBase::UpdateStats()
{
} /* size: 5 */

