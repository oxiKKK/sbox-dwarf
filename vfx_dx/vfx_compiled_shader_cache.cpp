
//
// vfx_dx/vfx_compiled_shader_cache.cpp
//
//	referenced by: libvfx_vulkan.so
//
//	functions: 11
//

// <001C6E47> ../vfx_dx/vfx_compiled_shader_cache.cpp:20
// variables: 4
// function calls: 6
void TranslateToCacheHandle(const char* pPreprocessedShaderCode, const char* pEntryPointName, uint32 nCompilerFlags1, uint32 nCompilerFlags2, uint32 nCompilerVersion)
{
	MD5Context_t shaderHash; // 23
	uint32 nVfxVersion; // 32
	uint32 nInternalCacheVersion; // 35
	CVfxHashValue handle; // 38
	V_strlen(const char* str); // 26
	V_strlen(const char* str); // 27
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 286
	CVfxHashValue::Reset(); // 276
	CVfxHashValue::CVfxHashValue(); // 38
} /* size: 364, variables: 4, inline expansions: 6 (173 bytes) */

// <001C6884> ../vfx_dx/vfx_compiled_shader_cache.cpp:44
// variable: 1
// function calls: 19
void CVfxCompiledShaderCache::ComputeCacheFilename(const CVfxHashValue& handle, const char* pShaderModel, CBufferString* pFilenameOut)
{
	CPathBufferString shaderCachePathName; // 46
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 46
	CBufferString::AppendSlash(
			char chSeparator);  // 47
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 48
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 308
	CVfxHashValue::GetHashUint32(
			uint index);  // 50
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 50
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 308
	CVfxHashValue::GetHashUint32(
			uint index);  // 50
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 308
	CVfxHashValue::GetHashUint32(
			uint index);  // 50
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 308
	CVfxHashValue::GetHashUint32(
			uint index);  // 50
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 54
} /* size: 292, variables: 1, inline expansions: 19 (330 bytes) */

// <001C5FDC> ../vfx_dx/vfx_compiled_shader_cache.cpp:57
// variables: 4
// function calls: 30
void SerializeCompiledShaderInfo(const VfxCompiledShaderInfo_t& compiledShaderInfo, CUtlBuffer& buf)
{
	{
		int i; // 62
		CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Count(); // 62
		CUtlMemory<CVfxVariableDescription, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
				int i);  // 64
	}
	{
		int i; // 68
		CUtlVectorBase<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::Count(); // 68
		CUtlMemory<CVfxTextureChannelProcessor, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::operator[](
				int i);  // 70
	}
	{
		int i; // 74
		CUtlVectorBase<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> >::Count(); // 74
		CUtlMemory<ConstantBufferDescription_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> >::operator[](
				int i);  // 76
	}
	{
		int i; // 80
		CUtlVectorBase<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >::Count(); // 80
		CUtlMemory<CVfxShaderAttribute, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >::operator[](
				int i);  // 82
	}
	CUtlBuffer::TellMaxPut(); // 59
	CUtlBuffer::PutInt(
		int i);  // 59
	CUtlBuffer::TellMaxPut(); // 60
	CUtlMemory<unsigned char, int>::Base(); // 1479
	CUtlBuffer::Base(); // 60
	CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Count(); // 61
	CUtlBuffer::PutInt(
		int i);  // 61
	CUtlVectorBase<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::Count(); // 67
	CUtlBuffer::PutInt(
		int i);  // 67
	CUtlVectorBase<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> >::Count(); // 73
	CUtlBuffer::PutInt(
		int i);  // 73
	CUtlVectorBase<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >::Count(); // 79
	CUtlBuffer::PutInt(
		int i);  // 79
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 87
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 88
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 89
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 90
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 91
} /* size: 417, inline expansions: 18 (131 bytes) */

// <001C5490> ../vfx_dx/vfx_compiled_shader_cache.cpp:95
// variables: 5
// function calls: 38
void UnserializeCompiledShaderInfo(VfxCompiledShaderInfo_t* pCompiledShaderInfoOut, CUtlBuffer& buf)
{
	int size; // 97
	{
		int i; // 105
		CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Count(); // 105
		CUtlMemory<CVfxVariableDescription, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
				int i);  // 107
	}
	{
		int i; // 111
		CUtlVectorBase<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::Count(); // 111
		CUtlMemory<CVfxTextureChannelProcessor, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::operator[](
				int i);  // 113
	}
	{
		int i; // 117
		CUtlVectorBase<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> >::Count(); // 117
		CUtlMemory<ConstantBufferDescription_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> >::operator[](
				int i);  // 119
	}
	{
		int i; // 123
		CUtlVectorBase<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >::Count(); // 123
		CUtlMemory<CVfxShaderAttribute, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >::operator[](
				int i);  // 125
	}
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 97
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1551
	CUtlBuffer::Purge(); // 99
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 102
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 104
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 110
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 116
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 122
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 130
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 131
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 132
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 133
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 134
} /* size: 654, variables: 1, inline expansions: 26 (426 bytes) */

// <001C4E52> ../vfx_dx/vfx_compiled_shader_cache.cpp:138
// variables: 3
// function calls: 23
void CVfxCompiledShaderCache::FindShaderInCache(const CVfxHashValue& handle, const char* pShaderModel, VfxCompiledShaderInfo_t* pCompiledShaderInfoOut)
{
	shared_lock<std::shared_mutex> lock; // 140
	CPathBufferString fullFileName; // 142
	CUtlStreamBuffer fileBuf; // 150
	__glibcxx_rwlock_rdlock(pthread_rwlock_t* __rwlock); // 236
	__shared_mutex_pthread::lock_shared(); // 433
	shared_mutex::lock_shared(); // 745
	shared_lock<std::shared_mutex>::shared_lock(
			mutex_type& __m);  // 140
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 142
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 145
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 161
	__glibcxx_rwlock_unlock(pthread_rwlock_t* __rwlock); // 220
	__shared_mutex_pthread::unlock(); // 260
	__shared_mutex_pthread::unlock_shared(); // 435
	shared_mutex::unlock_shared(); // 771
	shared_lock<std::shared_mutex>::~shared_lock(); // 161
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 150
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 158
} /* size: 0, variables: 3, inline expansions: 23 (560 bytes) */

// <001C481F> ../vfx_dx/vfx_compiled_shader_cache.cpp:164
// variables: 4
// function calls: 22
void CVfxCompiledShaderCache::AddShaderToCache(const CVfxHashValue& handle, const char* pShaderModel, const VfxCompiledShaderInfo_t& compiledShaderInfo)
{
	unique_lock<std::shared_mutex> lock; // 166
	CPathBufferString fullFileName; // 174
	int iretry; // 177
	{
		CUtlStreamBuffer fileBuf; // 180
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 180
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 193
	}
	__glibcxx_rwlock_wrlock(pthread_rwlock_t* __rwlock); // 200
	__shared_mutex_pthread::lock(); // 427
	shared_mutex::lock(); // 144
	unique_lock<std::shared_mutex>::lock(); // 75
	unique_lock<std::shared_mutex>::unique_lock(
			mutex_type& __m);  // 166
	CVfxCompiledShaderCache::CreateCacheDirectory(); // 168
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 174
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 197
	__glibcxx_rwlock_unlock(pthread_rwlock_t* __rwlock); // 220
	__shared_mutex_pthread::unlock(); // 429
	shared_mutex::unlock(); // 203
	unique_lock<std::shared_mutex>::unlock(); // 114
	unique_lock<std::shared_mutex>::~unique_lock(); // 197
} /* size: 0, variables: 3, inline expansions: 16 (244 bytes) */

// <001C9775> ../vfx_dx/vfx_compiled_shader_cache.cpp:200
void CVfxCompiledShaderCache::CreateCacheDirectory()
{
} /* size: 0 */

// <001C8BD7> ../vfx_dx/vfx_compiled_shader_cache.cpp:200
// variable: 1
// function calls: 15
void CVfxCompiledShaderCache::CreateCacheDirectory()
{
	{
		CPathBufferString shaderCachePathName; // 208
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 596
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 601
		CBufferStringN<200>::CBufferStringN(
				const char* pString,
				int nChars,
				bool bExact,
				bool bGrowable);  // 208
		CBufferString::AppendSlash(
				char chSeparator);  // 209
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 210
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 212
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
					const char* pathID);  // 212
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 213
	}
} /* size: 379 */

// <001C47DE> ../vfx_dx/vfx_compiled_shader_cache.cpp:200
// variables: 2
void CVfxCompiledShaderCache::CreateCacheDirectory()
{
	bool s_bAttemptedToCreateCacheDir; // 202
	{
		CPathBufferString shaderCachePathName; // 208
	}
} /* size: 0, variables: 1 */

// <001C478B> ../vfx_dx/vfx_compiled_shader_cache.cpp:219
void CVfxCompiledShaderCache::ClearCache()
{
} /* size: 11 */

// <001C3206> ../vfx_dx/vfx_compiled_shader_cache.cpp:225
// variables: 10
// function calls: 83
void CVfxCompiledShaderCache::DeleteOldShadersFromCache(uint32 nMaxAgeInDays)
{
	CPathBufferString shaderCachePathName; // 227
	uint64 nThresholdTime; // 231
	CUtlVector<char*, CUtlMemory<char*, int> > filesToDelete; // 233
	FileFindHandle_t hFind; // 235
	CPathBufferString shaderCacheWildcard; // 236
	const char* pFoundFile; // 238
	{
		CPathBufferString fullFileName; // 241
		uint64 nFileTime; // 244
		const char* pNextFoundFile; // 251
		CFileSystemPassThru::FindNext(
			FileFindHandle_t& handle);  // 128
		CFileSystemPassThru::FindNext(
			FileFindHandle_t& handle);  // 128
		CFileSystemPassThru::FindNext(
			FileFindHandle_t& handle);  // 128
		CFileSystemPassThru::FindNext(
			FileFindHandle_t& handle);  // 251
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 253
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 241
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 242
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 244
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 248
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 1252
		Construct<char*, char*>(char** pMemory); // 1252
		CUtlMemory<char::Grow(
			int num);  // 806
		CUtlVectorBase<char::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<char::AddToTail(
				char *& src);  // 248
	}
	{
		int i; // 256
		CFileSystemPassThru::RemoveFile(
				const char* pRelativePath,
				const char* pathID);  // 102
		CFileSystemPassThru::RemoveFile(
				const char* pRelativePath,
				const char* pathID);  // 102
		CFileSystemPassThru::RemoveFile(
				const char* pRelativePath,
				const char* pathID);  // 102
		CFileSystemPassThru::RemoveFile(
				const char* pRelativePath,
				const char* pathID);  // 260
	}
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 227
	CBufferString::AppendSlash(
			char chSeparator);  // 228
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 229
	CBufferString::Length(); // 631
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 627
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 631
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 631
	CBufferStringN<200>::CBufferStringN(
			const CBufferStringN<200>& string);  // 236
	FileFindHandle_t::FileFindHandle_t(); // 235
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 233
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 238
	CFileSystemPassThru::FindFirst(
			const char* pWildCard,
			FileFindHandle_t* pHandle);  // 238
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 254
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 265
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 798
	FileFindHandle_t::~FileFindHandle_t(); // 265
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 265
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 265
} /* size: 2039, variables: 6, inline expansions: 55 (3658 bytes) */

