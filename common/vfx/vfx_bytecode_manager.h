
//
// common/vfx/vfx_bytecode_manager.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 10
//	classes: 2
//

// <01232148> ../common/vfx/vfx_bytecode_manager.h:16
// member functions: 28
// member variables: 8
// class size: 160
class CVfxByteCodeManager {
	/* ../common/vfx/vfx_bytecode_manager.h:34 */
	struct ByteCodeInfo_t {
		CVfxHashValue m_hash; /* 0 16 */
		int m_nByteCodeSize; /* 16 4 */
		uint8 * m_pData; /* 24 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/vfx/vfx_bytecode_manager.h:41 */
	struct DynamicComboInfo_t {
		int m_nByteCodeInfoIdx; /* 0 4 */
		uint64 m_nDynamicComboID; /* 8 8 */
		CVfxRenderStateInfo m_renderStateInfo; /* 16 60 */
		uint32 m_nInputPatchSizeForHullShader; /* 76 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/vfx/vfx_bytecode_manager.h:49 */
	struct StaticComboInfo_t {
		CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int> > m_dynamicComboInfos; /* 0 48 */
	};
	/* ../common/vfx/vfx_bytecode_manager.h:19 */
	void CVfxByteCodeManager(CVfxByteCodeManager* );
	/* ../common/vfx/vfx_bytecode_manager.h:20 */
	void ~CVfxByteCodeManager(CVfxByteCodeManager* );
	/* ../common/vfx/vfx_bytecode_manager.h:22 */
	void OnStaticCombo(CVfxByteCodeManager* , uint64);
	/* ../common/vfx/vfx_bytecode_manager.h:23 */
	void OnDynamicCombo(CVfxByteCodeManager* , VfxCompiledShaderInfo_t* );
	/* ../common/vfx/vfx_bytecode_manager.h:24 */
	void SerializeStaticCombo(const CVfxByteCodeManager* , CUtlBuffer& , uint64, VfxProgram_t);
	/* ../common/vfx/vfx_bytecode_manager.h:25 */
	bool ContainsValidCompiledShaders(const CVfxByteCodeManager* );
	/* ../common/vfx/vfx_bytecode_manager.h:26 */
	uint64 GetByteCodeMemoryUsed(const CVfxByteCodeManager* );
	/* ../common/vfx/vfx_bytecode_manager.h:27 */
	uint32 GetDuplicateShaderCount(const CVfxByteCodeManager* );
	/* ../common/vfx/vfx_bytecode_manager.h:28 */
	uint32 GetUniqueShaderCount(const CVfxByteCodeManager* );
	/* ../common/vfx/vfx_bytecode_manager.h:29 */
	void Reset(CVfxByteCodeManager* );
private:
	/* ../common/vfx/vfx_bytecode_manager.h:55 */
	DynamicComboInfo_t* AddDynamicComboInfo(CVfxByteCodeManager* , uint64);
	/* ../common/vfx/vfx_bytecode_manager.h:56 */
	int StoreByteCode(CVfxByteCodeManager* , const CVfxHashValue& , const void* , int);
	/* ../common/vfx/vfx_bytecode_manager.h:57 */
	uint8* GetByteCode(const CVfxByteCodeManager* , int, int* );
	CUtlMap<CVfxHashValue, int, int, bool (*)(const CVfxHashValue&, const CVfxHashValue&)> m_uniqueShaderMap; /* 0 48* /
	CUtlVector<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> > m_byteCodeInfoArray; /* 48 32 */
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t*, int, bool (*)(long long unsigned int const&, long long unsigned int const&)> m_combos; /* 80 48* /
	StaticComboInfo_t * m_pCurrentStaticCombo; /* 128 8 */
	uint64 m_currentStaticCombo; /* 136 8 */
	uint64 m_nByteCodeMemoryUsed; /* 144 8 */
	uint32 m_nUniqueShaders; /* 152 4 */
	uint32 m_nDuplicateShaders; /* 156 4 */
	void CVfxByteCodeManager(class CVfxByteCodeManager *); /* linkage=_ZN19CVfxByteCodeManagerC4Ev */
	void ~CVfxByteCodeManager(class CVfxByteCodeManager *); /* linkage=_ZN19CVfxByteCodeManagerD4Ev */
	void OnStaticCombo(class CVfxByteCodeManager *, uint64); /* linkage=_ZN19CVfxByteCodeManager13OnStaticComboEy */
	void OnDynamicCombo(class CVfxByteCodeManager *, class VfxCompiledShaderInfo_t *); /* linkage=_ZN19CVfxByteCodeManager14OnDynamicComboEP23VfxCompiledShaderInfo_t */
	void SerializeStaticCombo(const class CVfxByteCodeManager  *, class CUtlBuffer &, uint64, enum VfxProgram_t); /* linkage=_ZNK19CVfxByteCodeManager20SerializeStaticComboER10CUtlBuffery12VfxProgram_t */
	bool ContainsValidCompiledShaders(const class CVfxByteCodeManager  *); /* linkage=_ZNK19CVfxByteCodeManager28ContainsValidCompiledShadersEv */
	uint64 GetByteCodeMemoryUsed(const class CVfxByteCodeManager  *); /* linkage=_ZNK19CVfxByteCodeManager21GetByteCodeMemoryUsedEv */
	uint32 GetDuplicateShaderCount(const class CVfxByteCodeManager  *); /* linkage=_ZNK19CVfxByteCodeManager23GetDuplicateShaderCountEv */
	uint32 GetUniqueShaderCount(const class CVfxByteCodeManager  *); /* linkage=_ZNK19CVfxByteCodeManager20GetUniqueShaderCountEv */
	void Reset(class CVfxByteCodeManager *); /* linkage=_ZN19CVfxByteCodeManager5ResetEv */
	class DynamicComboInfo_t * AddDynamicComboInfo(class CVfxByteCodeManager *, uint64); /* linkage=_ZN19CVfxByteCodeManager19AddDynamicComboInfoEy */
	int StoreByteCode(class CVfxByteCodeManager *, const class CVfxHashValue  &, const void  *, int); /* linkage=_ZN19CVfxByteCodeManager13StoreByteCodeERK13CVfxHashValuePKvi */
	/* <6ab8ad7> vfx/vfx_bytecode_manager.cpp:159 */
	uint8 * GetByteCode(const class CVfxByteCodeManager  *, int, int *); /* linkage=_ZNK19CVfxByteCodeManager11GetByteCodeEiPi */
};

// <06A9A908> ../common/vfx/vfx_bytecode_manager.h:16
// member functions: 32
// member variables: 8
// class size: 160
class CVfxByteCodeManager {
	/* ../common/vfx/vfx_bytecode_manager.h:34 */
	struct ByteCodeInfo_t {
		CVfxHashValue m_hash; /* 0 16 */
		int m_nByteCodeSize; /* 16 4 */
		uint8 * m_pData; /* 24 8 */
		void ByteCodeInfo_t(ByteCodeInfo_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/vfx/vfx_bytecode_manager.h:41 */
	struct DynamicComboInfo_t {
		int m_nByteCodeInfoIdx; /* 0 4 */
		uint64 m_nDynamicComboID; /* 8 8 */
		CVfxRenderStateInfo m_renderStateInfo; /* 16 60 */
		uint32 m_nInputPatchSizeForHullShader; /* 76 4 */
		void DynamicComboInfo_t(DynamicComboInfo_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/vfx/vfx_bytecode_manager.h:49 */
	struct StaticComboInfo_t {
		CUtlLinkedList<CVfxByteCodeManager::DynamicComboInfo_t, int, false, int, CUtlMemory<UtlLinkedListElem_t<CVfxByteCodeManager::DynamicComboInfo_t, int>, int> > m_dynamicComboInfos; /* 0 48 */
		void ~StaticComboInfo_t(StaticComboInfo_t* );
		void StaticComboInfo_t(StaticComboInfo_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/vfx/vfx_bytecode_manager.h:19 */
	void CVfxByteCodeManager(CVfxByteCodeManager* );
	/* ../common/vfx/vfx_bytecode_manager.h:20 */
	void ~CVfxByteCodeManager(CVfxByteCodeManager* );
	/* ../common/vfx/vfx_bytecode_manager.h:22 */
	void OnStaticCombo(CVfxByteCodeManager* , uint64);
	/* ../common/vfx/vfx_bytecode_manager.h:23 */
	void OnDynamicCombo(CVfxByteCodeManager* , VfxCompiledShaderInfo_t* );
	/* ../common/vfx/vfx_bytecode_manager.h:24 */
	void SerializeStaticCombo(const CVfxByteCodeManager* , CUtlBuffer& , uint64, VfxProgram_t);
	/* ../common/vfx/vfx_bytecode_manager.h:25 */
	bool ContainsValidCompiledShaders(const CVfxByteCodeManager* );
	/* ../common/vfx/vfx_bytecode_manager.h:26 */
	uint64 GetByteCodeMemoryUsed(const CVfxByteCodeManager* );
	/* ../common/vfx/vfx_bytecode_manager.h:27 */
	uint32 GetDuplicateShaderCount(const CVfxByteCodeManager* );
	/* ../common/vfx/vfx_bytecode_manager.h:28 */
	uint32 GetUniqueShaderCount(const CVfxByteCodeManager* );
	/* ../common/vfx/vfx_bytecode_manager.h:29 */
	void Reset(CVfxByteCodeManager* );
private:
	/* ../common/vfx/vfx_bytecode_manager.h:55 */
	DynamicComboInfo_t* AddDynamicComboInfo(CVfxByteCodeManager* , uint64);
	/* ../common/vfx/vfx_bytecode_manager.h:56 */
	int StoreByteCode(CVfxByteCodeManager* , const CVfxHashValue& , const void* , int);
	/* ../common/vfx/vfx_bytecode_manager.h:57 */
	uint8* GetByteCode(const CVfxByteCodeManager* , int, int* );
	CUtlMap<CVfxHashValue, int, int, bool (*)(const CVfxHashValue&, const CVfxHashValue&)> m_uniqueShaderMap; /* 0 48* /
	CUtlVector<CVfxByteCodeManager::ByteCodeInfo_t, CUtlMemory<CVfxByteCodeManager::ByteCodeInfo_t, int> > m_byteCodeInfoArray; /* 48 32 */
	CUtlMap<long long unsigned int, CVfxByteCodeManager::StaticComboInfo_t*, int, bool (*)(long long unsigned int const&, long long unsigned int const&)> m_combos; /* 80 48* /
	StaticComboInfo_t * m_pCurrentStaticCombo; /* 128 8 */
	uint64 m_currentStaticCombo; /* 136 8 */
	uint64 m_nByteCodeMemoryUsed; /* 144 8 */
	uint32 m_nUniqueShaders; /* 152 4 */
	uint32 m_nDuplicateShaders; /* 156 4 */
	void CVfxByteCodeManager(class CVfxByteCodeManager *); /* linkage=_ZN19CVfxByteCodeManagerC4Ev */
	void ~CVfxByteCodeManager(class CVfxByteCodeManager *); /* linkage=_ZN19CVfxByteCodeManagerD4Ev */
	void OnStaticCombo(class CVfxByteCodeManager *, uint64); /* linkage=_ZN19CVfxByteCodeManager13OnStaticComboEy */
	void OnDynamicCombo(class CVfxByteCodeManager *, class VfxCompiledShaderInfo_t *); /* linkage=_ZN19CVfxByteCodeManager14OnDynamicComboEP23VfxCompiledShaderInfo_t */
	void SerializeStaticCombo(const class CVfxByteCodeManager  *, class CUtlBuffer &, uint64, enum VfxProgram_t); /* linkage=_ZNK19CVfxByteCodeManager20SerializeStaticComboER10CUtlBuffery12VfxProgram_t */
	bool ContainsValidCompiledShaders(const class CVfxByteCodeManager  *); /* linkage=_ZNK19CVfxByteCodeManager28ContainsValidCompiledShadersEv */
	uint64 GetByteCodeMemoryUsed(const class CVfxByteCodeManager  *); /* linkage=_ZNK19CVfxByteCodeManager21GetByteCodeMemoryUsedEv */
	uint32 GetDuplicateShaderCount(const class CVfxByteCodeManager  *); /* linkage=_ZNK19CVfxByteCodeManager23GetDuplicateShaderCountEv */
	uint32 GetUniqueShaderCount(const class CVfxByteCodeManager  *); /* linkage=_ZNK19CVfxByteCodeManager20GetUniqueShaderCountEv */
	void Reset(class CVfxByteCodeManager *); /* linkage=_ZN19CVfxByteCodeManager5ResetEv */
	class DynamicComboInfo_t * AddDynamicComboInfo(class CVfxByteCodeManager *, uint64); /* linkage=_ZN19CVfxByteCodeManager19AddDynamicComboInfoEy */
	int StoreByteCode(class CVfxByteCodeManager *, const class CVfxHashValue  &, const void  *, int); /* linkage=_ZN19CVfxByteCodeManager13StoreByteCodeERK13CVfxHashValuePKvi */
	/* <6ab8ad7> vfx/vfx_bytecode_manager.cpp:159 */
	uint8 * GetByteCode(const class CVfxByteCodeManager  *, int, int *); /* linkage=_ZNK19CVfxByteCodeManager11GetByteCodeEiPi */
};

// <01259C86> ../common/vfx/vfx_bytecode_manager.h:19
void CVfxByteCodeManager::CVfxByteCodeManager()
{
} /* size: 0 */

// <01259C6A> ../common/vfx/vfx_bytecode_manager.h:20
void CVfxByteCodeManager::~CVfxByteCodeManager()
{
} /* size: 0 */

// <06AAF627> ../common/vfx/vfx_bytecode_manager.h:34
void ByteCodeInfo_t::ByteCodeInfo_t()
{
} /* size: 0 */

// <06AAF60B> ../common/vfx/vfx_bytecode_manager.h:34
inline void ByteCodeInfo_t::ByteCodeInfo_t()
{
} /* size: 0 */

// <06AAF760> ../common/vfx/vfx_bytecode_manager.h:41
void DynamicComboInfo_t::DynamicComboInfo_t()
{
} /* size: 0 */

// <06AAF744> ../common/vfx/vfx_bytecode_manager.h:41
inline void DynamicComboInfo_t::DynamicComboInfo_t()
{
} /* size: 0 */

// <06AB701E> ../common/vfx/vfx_bytecode_manager.h:49
void StaticComboInfo_t::StaticComboInfo_t()
{
} /* size: 0 */

// <06AB7002> ../common/vfx/vfx_bytecode_manager.h:49
inline void StaticComboInfo_t::StaticComboInfo_t()
{
} /* size: 0 */

// <06AB3144> ../common/vfx/vfx_bytecode_manager.h:49
void StaticComboInfo_t::~StaticComboInfo_t()
{
} /* size: 0 */

// <06AB3128> ../common/vfx/vfx_bytecode_manager.h:49
inline void StaticComboInfo_t::~StaticComboInfo_t()
{
} /* size: 0 */

