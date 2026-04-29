
//
// public/resourcesystem/sisterresourceloader.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 17
//	class: 1
//

// <05BADE7A> ../public/resourcesystem/sisterresourceloader.h:15
// variables: 5
bool UnserializeKV3ResourceDataFromBuffer<MaterialResourceData_t>(const void* pBlockData, int nBlockSize, MaterialResourceData_t* pOutputClass, const char* pContextName)
{
	CUtlBuffer diskDataBuffer; // 17
	CKeyValues3Context diskKV3Data; // 19
	CUtlString errorMsg; // 20
	CKV3TransferLoadContext loadCtx; // 27
	CKV3Transfer_EmptyResourceLoadInterface resourceLoadInterface; // 28
} /* size: 0, variables: 5 */

// <05B9C7CF> ../public/resourcesystem/sisterresourceloader.h:50
// member functions: 28
// member variables: 3
// class size: 24
class CAssociateResourceBlockLoader {
	/* ../public/resourcesystem/sisterresourceloader.h:55 */
	void CAssociateResourceBlockLoader(CAssociateResourceBlockLoader* );
	/* ../public/resourcesystem/sisterresourceloader.h:62 */
	void ~CAssociateResourceBlockLoader(CAssociateResourceBlockLoader* );
	/* ../public/resourcesystem/sisterresourceloader.h:69 */
	bool Load_NoRecompile(CAssociateResourceBlockLoader* , const char* );
	/* ../public/resourcesystem/sisterresourceloader.h:76 */
	bool Load_EnsureCompiled(CAssociateResourceBlockLoader* , const char* , IResourceCompilerContext* );
	/* ../public/resourcesystem/sisterresourceloader.h:83 */
	bool IsValid(const CAssociateResourceBlockLoader* );
	/* ../public/resourcesystem/sisterresourceloader.h:90 */
	const ResourceFileHeader_t* GetHeader(const CAssociateResourceBlockLoader* );
	/* ../public/resourcesystem/sisterresourceloader.h:101 */
	const void* GetDataBlock(CAssociateResourceBlockLoader* );
private:
	/* ../public/resourcesystem/sisterresourceloader.h:194 */
	bool LoadInternal(CAssociateResourceBlockLoader* , IResourceCompilerContext* , const char* , bool);
	/* ../public/resourcesystem/sisterresourceloader.h:245 */
	void Free(CAssociateResourceBlockLoader* );
	/* ../public/resourcesystem/sisterresourceloader.h:257 */
	bool BlockingLoadResourceFileData(CAssociateResourceBlockLoader* , const char* );
	CUtlString m_resourceName; /* 0 8 */
	const class ResourceFileHeader_t * m_pHeader; /* 8 8 */
	bool m_bOwnHeader; /* 16 1 */
	/* ../public/resourcesystem/sisterresourceloader.h:127 */
	bool UnserializeKV3DataFromOldIntrospectedBuffer<MaterialResourceData_t>(CAssociateResourceBlockLoader* , const void* , int, MaterialResourceData_t* , const char* , const char* );
	/* ../public/resourcesystem/sisterresourceloader.h:174 */
	bool UnserializeIntrospectedOrKV3Block<MaterialResourceData_t>(CAssociateResourceBlockLoader* , const void* , int, MaterialResourceData_t* , const char* , int, const char* , int);
	/* ../public/resourcesystem/sisterresourceloader.h:96 */
	const ResourceEditInfoBlock_t* GetBlock<ResourceEditInfoBlock_t>(CAssociateResourceBlockLoader* );
	/* ../public/resourcesystem/sisterresourceloader.h:160 */
	bool UnserializeIntrospectedOrKV3DataBlock<MaterialResourceData_t>(CAssociateResourceBlockLoader* , MaterialResourceData_t* , const char* , int, const char* , int);
	void CAssociateResourceBlockLoader(class CAssociateResourceBlockLoader *); /* linkage=_ZN29CAssociateResourceBlockLoaderC4Ev */
	void ~CAssociateResourceBlockLoader(class CAssociateResourceBlockLoader *); /* linkage=_ZN29CAssociateResourceBlockLoaderD4Ev */
	bool Load_NoRecompile(class CAssociateResourceBlockLoader *, const char  *); /* linkage=_ZN29CAssociateResourceBlockLoader16Load_NoRecompileEPKc */
	bool Load_EnsureCompiled(class CAssociateResourceBlockLoader *, const char  *, class IResourceCompilerContext *); /* linkage=_ZN29CAssociateResourceBlockLoader19Load_EnsureCompiledEPKcP24IResourceCompilerContext */
	bool IsValid(const class CAssociateResourceBlockLoader  *); /* linkage=_ZNK29CAssociateResourceBlockLoader7IsValidEv */
	const class ResourceFileHeader_t  * GetHeader(const class CAssociateResourceBlockLoader  *); /* linkage=_ZNK29CAssociateResourceBlockLoader9GetHeaderEv */
	const void  * GetDataBlock(class CAssociateResourceBlockLoader *); /* linkage=_ZN29CAssociateResourceBlockLoader12GetDataBlockEv */
	bool LoadInternal(class CAssociateResourceBlockLoader *, class IResourceCompilerContext *, const char  *, bool); /* linkage=_ZN29CAssociateResourceBlockLoader12LoadInternalEP24IResourceCompilerContextPKcb */
	void Free(class CAssociateResourceBlockLoader *); /* linkage=_ZN29CAssociateResourceBlockLoader4FreeEv */
	bool BlockingLoadResourceFileData(class CAssociateResourceBlockLoader *, const char  *); /* linkage=_ZN29CAssociateResourceBlockLoader28BlockingLoadResourceFileDataEPKc */
	bool UnserializeKV3DataFromOldIntrospectedBuffer<MaterialResourceData_t>(class CAssociateResourceBlockLoader *, const void  *, int, class MaterialResourceData_t *, const char  *, const char  *); /* linkage=_ZN29CAssociateResourceBlockLoader43UnserializeKV3DataFromOldIntrospectedBufferI22MaterialResourceData_tEEbPKviPT_PKcS7_ */
	bool UnserializeIntrospectedOrKV3Block<MaterialResourceData_t>(class CAssociateResourceBlockLoader *, const void  *, int, class MaterialResourceData_t *, const char  *, int, const char  *, int); /* linkage=_ZN29CAssociateResourceBlockLoader33UnserializeIntrospectedOrKV3BlockI22MaterialResourceData_tEEbPKviPT_PKciS7_i */
	const class ResourceEditInfoBlock_t  * GetBlock<ResourceEditInfoBlock_t>(class CAssociateResourceBlockLoader *); /* linkage=_ZN29CAssociateResourceBlockLoader8GetBlockI23ResourceEditInfoBlock_tEEPKT_v */
	bool UnserializeIntrospectedOrKV3DataBlock<MaterialResourceData_t>(class CAssociateResourceBlockLoader *, class MaterialResourceData_t *, const char  *, int, const char  *, int); /* linkage=_ZN29CAssociateResourceBlockLoader37UnserializeIntrospectedOrKV3DataBlockI22MaterialResourceData_tEEbPT_PKciS5_i */
};

// <05BE0F3A> ../public/resourcesystem/sisterresourceloader.h:55
void CAssociateResourceBlockLoader::CAssociateResourceBlockLoader()
{
} /* size: 0 */

// <05BE0F21> ../public/resourcesystem/sisterresourceloader.h:55
inline void CAssociateResourceBlockLoader::CAssociateResourceBlockLoader()
{
} /* size: 0 */

// <05BE0F0A> ../public/resourcesystem/sisterresourceloader.h:62
void CAssociateResourceBlockLoader::~CAssociateResourceBlockLoader()
{
} /* size: 0 */

// <05BE0EF1> ../public/resourcesystem/sisterresourceloader.h:62
inline void CAssociateResourceBlockLoader::~CAssociateResourceBlockLoader()
{
} /* size: 0 */

// <05BE0ECC> ../public/resourcesystem/sisterresourceloader.h:69
inline void CAssociateResourceBlockLoader::Load_NoRecompile(const char* pResourceName)
{
} /* size: 0 */

// <05BE0E9B> ../public/resourcesystem/sisterresourceloader.h:76
inline void CAssociateResourceBlockLoader::Load_EnsureCompiled(const char* pResourceName, IResourceCompilerContext* pResourceCompilerContext)
{
} /* size: 0 */

// <05BE0E82> ../public/resourcesystem/sisterresourceloader.h:83
inline void CAssociateResourceBlockLoader::IsValid()
{
} /* size: 0 */

// <05BB6474> ../public/resourcesystem/sisterresourceloader.h:96
inline void CAssociateResourceBlockLoader::GetBlock<ResourceEditInfoBlock_t>()
{
} /* size: 0 */

// <05BADDFA> ../public/resourcesystem/sisterresourceloader.h:127
// variables: 3
inline void CAssociateResourceBlockLoader::UnserializeKV3DataFromOldIntrospectedBuffer<MaterialResourceData_t>(const void* pBlockData, int nBlockSize, MaterialResourceData_t* pOutputClass, const char* pContextName, const char* pIntrospectedRootStructName)
{
	CKeyValues3Context diskKV3Data; // 134
	CKV3TransferLoadContext loadCtx; // 142
	CKV3Transfer_EmptyResourceLoadInterface resourceLoadInterface; // 143
} /* size: 0, variables: 3 */

// <05BB6496> ../public/resourcesystem/sisterresourceloader.h:160
// variable: 1
inline void CAssociateResourceBlockLoader::UnserializeIntrospectedOrKV3DataBlock<MaterialResourceData_t>(MaterialResourceData_t* pOutputClass, const char* pContextName, int nIntrospectedResourceVersion, const char* pIntrospectedRootStructName, int nKV3ResourceVersion)
{
	ResourceHeaderBlockInfo_t dataBlockInfo; // 162
} /* size: 0, variables: 1 */

// <05BB190D> ../public/resourcesystem/sisterresourceloader.h:174
inline void CAssociateResourceBlockLoader::UnserializeIntrospectedOrKV3Block<MaterialResourceData_t>(const void* pBlockData, int nBlockSize, MaterialResourceData_t* pOutputClass, const char* pContextName, int nIntrospectedResourceVersion, const char* pIntrospectedRootStructName, int nKV3ResourceVersion)
{
} /* size: 0 */

// <05BE0DB8> ../public/resourcesystem/sisterresourceloader.h:194
// variables: 8
inline void CAssociateResourceBlockLoader::LoadInternal(IResourceCompilerContext* pResourceCompilerContext, const char* pResourceName, bool bEnsureCompiled)
{
	bool bTryToLoad; // 198
	const char   __FUNCTION__; // 39428
	{
		IResourceCompilerContextAssociate* pAssociateContext; // 204
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 201
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 205
		}
		{
			bool bCompiledCorrectly; // 212
		}
	}
	{
		IAsset* pAsset; // 221
		{
			const CUtlBuffer* pCompiledBuffer; // 223
		}
	}
} /* size: 0, variables: 2 */

// <02D22300> ../public/resourcesystem/sisterresourceloader.h:194
// variables: 8
inline void CAssociateResourceBlockLoader::LoadInternal(IResourceCompilerContext* pResourceCompilerContext, const char* pResourceName, bool bEnsureCompiled)
{
	bool bTryToLoad; // 198
	const char   __FUNCTION__; // 32321
	{
		IResourceCompilerContextAssociate* pAssociateContext; // 204
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 201
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 205
		}
		{
			bool bCompiledCorrectly; // 212
		}
	}
	{
		IAsset* pAsset; // 221
		{
			const CUtlBuffer* pCompiledBuffer; // 223
		}
	}
} /* size: 0, variables: 2 */

// <0150BF38> ../public/resourcesystem/sisterresourceloader.h:194
// variables: 8
inline void CAssociateResourceBlockLoader::LoadInternal(IResourceCompilerContext* pResourceCompilerContext, const char* pResourceName, bool bEnsureCompiled)
{
	bool bTryToLoad; // 198
	const char   __FUNCTION__; // 22505
	{
		IResourceCompilerContextAssociate* pAssociateContext; // 204
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 201
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 205
		}
		{
			bool bCompiledCorrectly; // 212
		}
	}
	{
		IAsset* pAsset; // 221
		{
			const CUtlBuffer* pCompiledBuffer; // 223
		}
	}
} /* size: 0, variables: 2 */

// <05BE0D9F> ../public/resourcesystem/sisterresourceloader.h:245
inline void CAssociateResourceBlockLoader::Free()
{
} /* size: 0 */

// <05BE03C9> ../public/resourcesystem/sisterresourceloader.h:257
// variables: 4
// function calls: 36
void CAssociateResourceBlockLoader::BlockingLoadResourceFileData(const char* pResourceName)
{
	CPathBufferString fullPath; // 259
	ResourceFileHeader_t header; // 267
	CUtlBuffer headerBuf; // 268
	CUtlBuffer buf; // 278
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 259
	CResourceArrayBase::CResourceArrayBase(); // 370
	CResourceArray<ResourceBlockEntry_t>::CResourceArray(); // 62
	ResourceFileHeader_t::ResourceFileHeader_t(); // 267
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 269
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 279
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 288
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 288
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 288
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 271
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 271
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 281
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 281
} /* size: 0, variables: 4, inline expansions: 36 (0 bytes) */

