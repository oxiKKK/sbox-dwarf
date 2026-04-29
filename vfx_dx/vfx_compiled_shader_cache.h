
//
// vfx_dx/vfx_compiled_shader_cache.h
//
//	referenced by: libvfx_vulkan.so
//
//	class: 1
//

// <00051B21> ../vfx_dx/vfx_compiled_shader_cache.h:18
// member functions: 18
// member variable: 1
// class size: 56
class CVfxCompiledShaderCache {
	/* ../vfx_dx/vfx_compiled_shader_cache.h:21 */
	CVfxHashValue TranslateToCacheHandle(const char* , const char* , uint32, uint32, uint32);
	/* ../vfx_dx/vfx_compiled_shader_cache.h:24 */
	bool FindShaderInCache(CVfxCompiledShaderCache* , const CVfxHashValue& , const char* , VfxCompiledShaderInfo_t* );
	/* ../vfx_dx/vfx_compiled_shader_cache.h:26 */
	bool AddShaderToCache(CVfxCompiledShaderCache* , const CVfxHashValue& , const char* , const VfxCompiledShaderInfo_t& );
	/* ../vfx_dx/vfx_compiled_shader_cache.h:28 */
	bool DeleteOldShadersFromCache(CVfxCompiledShaderCache* , uint32);
	/* ../vfx_dx/vfx_compiled_shader_cache.h:30 */
	bool ClearCache(CVfxCompiledShaderCache* );
private:
	/* ../vfx_dx/vfx_compiled_shader_cache.h:33 */
	void ComputeCacheFilename(const CVfxCompiledShaderCache* , const CVfxHashValue& , const char* , CBufferString* );
	/* ../vfx_dx/vfx_compiled_shader_cache.h:34 */
	bool CreateCacheDirectory(const CVfxCompiledShaderCache* );
	shared_mutex m_Mutex; /* 0 56 */
	/* ../vfx_dx/vfx_compiled_shader_cache.h:40 */
	void SerializeCompiledShaderInfo(const VfxCompiledShaderInfo_t& , CUtlBuffer& );
	/* ../vfx_dx/vfx_compiled_shader_cache.h:41 */
	void UnserializeCompiledShaderInfo(VfxCompiledShaderInfo_t* , CUtlBuffer& );
	class CVfxHashValue TranslateToCacheHandle(const char  *, const char  *, uint32, uint32, uint32); /* linkage=_ZN23CVfxCompiledShaderCache22TranslateToCacheHandleEPKcS1_jjj */
	bool FindShaderInCache(class CVfxCompiledShaderCache *, const class CVfxHashValue  &, const char  *, class VfxCompiledShaderInfo_t *); /* linkage=_ZN23CVfxCompiledShaderCache17FindShaderInCacheERK13CVfxHashValuePKcP23VfxCompiledShaderInfo_t */
	bool AddShaderToCache(class CVfxCompiledShaderCache *, const class CVfxHashValue  &, const char  *, const class VfxCompiledShaderInfo_t  &); /* linkage=_ZN23CVfxCompiledShaderCache16AddShaderToCacheERK13CVfxHashValuePKcRK23VfxCompiledShaderInfo_t */
	bool DeleteOldShadersFromCache(class CVfxCompiledShaderCache *, uint32); /* linkage=_ZN23CVfxCompiledShaderCache25DeleteOldShadersFromCacheEj */
	bool ClearCache(class CVfxCompiledShaderCache *); /* linkage=_ZN23CVfxCompiledShaderCache10ClearCacheEv */
	void ComputeCacheFilename(const class CVfxCompiledShaderCache  *, const class CVfxHashValue  &, const char  *, class CBufferString *); /* linkage=_ZNK23CVfxCompiledShaderCache20ComputeCacheFilenameERK13CVfxHashValuePKcP13CBufferString */
	/* <1c9775> ../vfx_dx/vfx_compiled_shader_cache.cpp:200 */
	bool CreateCacheDirectory(const class CVfxCompiledShaderCache  *); /* linkage=_ZNK23CVfxCompiledShaderCache20CreateCacheDirectoryEv */
	void SerializeCompiledShaderInfo(const class VfxCompiledShaderInfo_t  &, class CUtlBuffer &); /* linkage=_ZN23CVfxCompiledShaderCache27SerializeCompiledShaderInfoERK23VfxCompiledShaderInfo_tR10CUtlBuffer */
	void UnserializeCompiledShaderInfo(class VfxCompiledShaderInfo_t *, class CUtlBuffer &); /* linkage=_ZN23CVfxCompiledShaderCache29UnserializeCompiledShaderInfoEP23VfxCompiledShaderInfo_tR10CUtlBuffer */
};

