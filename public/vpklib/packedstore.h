
//
// public/vpklib/packedstore.h
//
//	referenced by: libfilesystem_stdio.so
//
//	functions: 26
//	classes: 2
//	structs: 2
//

// <00087718> ../public/vpklib/packedstore.h:43
// member functions: 16
// member variables: 10
// class size: 64
class CPackedStoreFileHandle {
	int m_nFileNumber; /* 0 4 */
	int m_nFileOffset; /* 4 4 */
	int m_nFileSize; /* 8 4 */
	int m_nCurrentFileOffset; /* 12 4 */
	const void * m_pMetaData; /* 16 8 */
	uint16 m_nMetaDataSize; /* 24 2 */
	CPackedStore * m_pOwner; /* 32 8 */
	CFileHeaderFixedData * m_pHeaderData; /* 40 8 */
	uint8 * m_pDirFileNamePtr; /* 48 8 */
	bool m_bBlacklisted; /* 56 1 */
	/* ../public/vpklib/packedstore.h:57 */
	bool operator bool(const CPackedStoreFileHandle* );
	/* ../public/vpklib/packedstore.h:62 */
	int Read(CPackedStoreFileHandle* , void* , int);
	/* ../public/vpklib/packedstore.h:63 */
	IMemoryMappedFile* MemoryMapFile(CPackedStoreFileHandle* , MemoryMappedFileFlags_t);
	/* ../public/vpklib/packedstore.h:65 */
	void CPackedStoreFileHandle(CPackedStoreFileHandle* );
	/* ../public/vpklib/packedstore.h:70 */
	bool EndOfFile(CPackedStoreFileHandle* );
	/* ../public/vpklib/packedstore.h:75 */
	int64 Seek(CPackedStoreFileHandle* , int64, int);
	/* ../public/vpklib/packedstore.h:91 */
	int Tell(const CPackedStoreFileHandle* );
	/* ../public/vpklib/packedstore.h:96 */
	uint32 GetFileCRCFromHeaderData(const CPackedStoreFileHandle* );
	bool operator bool(const class CPackedStoreFileHandle  *); /* linkage=_ZNK22CPackedStoreFileHandlecvbEv */
	int Read(class CPackedStoreFileHandle *, void *, int); /* linkage=_ZN22CPackedStoreFileHandle4ReadEPvi */
	class IMemoryMappedFile * MemoryMapFile(class CPackedStoreFileHandle *, enum MemoryMappedFileFlags_t); /* linkage=_ZN22CPackedStoreFileHandle13MemoryMapFileE23MemoryMappedFileFlags_t */
	void CPackedStoreFileHandle(class CPackedStoreFileHandle *); /* linkage=_ZN22CPackedStoreFileHandleC4Ev */
	bool EndOfFile(class CPackedStoreFileHandle *); /* linkage=_ZN22CPackedStoreFileHandle9EndOfFileEv */
	int64 Seek(class CPackedStoreFileHandle *, int64, int); /* linkage=_ZN22CPackedStoreFileHandle4SeekExi */
	int Tell(const class CPackedStoreFileHandle  *); /* linkage=_ZNK22CPackedStoreFileHandle4TellEv */
	uint32 GetFileCRCFromHeaderData(const class CPackedStoreFileHandle  *); /* linkage=_ZNK22CPackedStoreFileHandle24GetFileCRCFromHeaderDataEv */
};

// <0023937D> ../public/vpklib/packedstore.h:57
inline void operator CPackedStoreFileHandle::bool()
{
} /* size: 0 */

// <00239366> ../public/vpklib/packedstore.h:65
void CPackedStoreFileHandle::CPackedStoreFileHandle()
{
} /* size: 0 */

// <0023934D> ../public/vpklib/packedstore.h:65
inline void CPackedStoreFileHandle::CPackedStoreFileHandle()
{
} /* size: 0 */

// <00105E5D> ../public/vpklib/packedstore.h:75
inline void CPackedStoreFileHandle::Seek(int64 nOffset, int nWhence)
{
} /* size: 0 */

// <00105E44> ../public/vpklib/packedstore.h:91
inline void CPackedStoreFileHandle::Tell()
{
} /* size: 0 */

// <002112C9> ../public/vpklib/packedstore.h:106
void FileHandleTracker_t::~FileHandleTracker_t()
{
} /* size: 0 */

// <002112AD> ../public/vpklib/packedstore.h:106
inline void FileHandleTracker_t::~FileHandleTracker_t()
{
} /* size: 0 */

// <0008857D> ../public/vpklib/packedstore.h:106
// member function: 1
// member variables: 5
// struct size: 440
struct FileHandleTracker_t {
	int m_nFileNumber; /* 0 4 */
	FileHandle_t m_hFsFileHandle; /* 8 8 */
	OSFILEHANDLE m_hRawFileHandle; /* 16 4 */
	IMemoryMappedFile * m_pMemoryMappedFile; /* 24 8 */
	CThreadRWLock_FastRead m_RwLock __attribute__((__aligned__(8))); /* 32 408 */
	/* ../public/vpklib/packedstore.h:119 */
	void FileHandleTracker_t(FileHandleTracker_t* );
} __attribute__((__aligned__(8)));

// <00239302> ../public/vpklib/packedstore.h:119
void FileHandleTracker_t::FileHandleTracker_t()
{
} /* size: 0 */

// <002392E9> ../public/vpklib/packedstore.h:119
inline void FileHandleTracker_t::FileHandleTracker_t()
{
} /* size: 0 */

// <00225AA4> ../public/vpklib/packedstore.h:149
void VPKContentFileInfo_t::~VPKContentFileInfo_t()
{
} /* size: 0 */

// <00225A88> ../public/vpklib/packedstore.h:149
inline void VPKContentFileInfo_t::~VPKContentFileInfo_t()
{
} /* size: 0 */

// <0008862B> ../public/vpklib/packedstore.h:149
// member functions: 2
// member variables: 7
// struct size: 40
struct VPKContentFileInfo_t {
	CUtlString m_sName; /* 0 8 */
	int m_idxChunk; /* 8 4 */
	uint32 m_iTotalSize; /* 12 4 */
	uint32 m_iOffsetInChunk; /* 16 4 */
	uint32 m_iPreloadSize; /* 20 4 */
	const void * m_pPreloadData; /* 24 8 */
	uint32 m_crc; /* 32 4 */
	/* ../public/vpklib/packedstore.h:160 */
	uint32 GetSizeInChunkFile(const VPKContentFileInfo_t* );
	/* ../public/vpklib/packedstore.h:166 */
	void VPKContentFileInfo_t(VPKContentFileInfo_t* );
};

// <002392A7> ../public/vpklib/packedstore.h:160
// variables: 2
inline void VPKContentFileInfo_t::GetSizeInChunkFile()
{
	const char   __FUNCTION__; // 25591
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 162
	}
} /* size: 0, variables: 1 */

// <00239290> ../public/vpklib/packedstore.h:166
void VPKContentFileInfo_t::VPKContentFileInfo_t()
{
} /* size: 0 */

// <00239277> ../public/vpklib/packedstore.h:166
inline void VPKContentFileInfo_t::VPKContentFileInfo_t()
{
} /* size: 0 */

// <000878DB> ../public/vpklib/packedstore.h:179
// member functions: 110
// member variables: 32
// class size: 1,624
class CPackedStore {
	/* ../public/vpklib/packedstore.h:182 */
	void CPackedStore(CPackedStore* , const char* , IFileSystem* , int, CPackedStore* , const char* , CUtlStringToken);
	/* ../public/vpklib/packedstore.h:184 */
	CPackedStoreFileHandle OpenFile(CPackedStore* , const char* );
	/* ../public/vpklib/packedstore.h:186 */
	bool DoesDirectoryExist(const CPackedStore* , const char* );
	/* ../public/vpklib/packedstore.h:191 */
	void AddFileToDirectory(CPackedStore* , const VPKContentFileInfo_t& );
	/* ../public/vpklib/packedstore.h:194 */
	bool RemoveFileFromDirectory(CPackedStore* , const char* );
	/* ../public/vpklib/packedstore.h:198 */
	ePackedStoreAddResultCode AddFile(CPackedStore* , const char* , uint16, const void* , uint32, bool, const uint32* );
	/* ../public/vpklib/packedstore.h:201 */
	void ChangeMultipleDirectoryEntries(CPackedStore* , const CUtlVector<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >& , const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/vpklib/packedstore.h:204 */
	bool Write(CPackedStore* );
	/* ../public/vpklib/packedstore.h:206 */
	int ReadData(CPackedStore* , CPackedStoreFileHandle& , void* , int);
	/* ../public/vpklib/packedstore.h:207 */
	IMemoryMappedFile* MemoryMapFile(CPackedStore* , CPackedStoreFileHandle& , MemoryMappedFileFlags_t);
	/* ../public/vpklib/packedstore.h:209 */
	void ~CPackedStore(CPackedStore* );
	/* ../public/vpklib/packedstore.h:211 */
	void* DirectoryData(CPackedStore* );
	/* ../public/vpklib/packedstore.h:215 */
	bool IsValidDirectoryData(CPackedStore* , const void* , size_t);
	/* ../public/vpklib/packedstore.h:231 */
	int IsValidDirectoryString(CPackedStore* , const char* , int);
	/* ../public/vpklib/packedstore.h:254 */
	bool AdvanceValidDirectoryData(CPackedStore* , const char* & , size_t);
	/* ../public/vpklib/packedstore.h:265 */
	int SkipDataAfterFilePath(CPackedStore* , const char* & );
	/* ../public/vpklib/packedstore.h:266 */
	int SkipAllFilesAfterDirName(CPackedStore* , const char* & , CUtlVector<char const*, CUtlMemory<char const*, int> >* );
	/* ../public/vpklib/packedstore.h:269 */
	int SkipFile(CPackedStore* , const char* & );
	/* ../public/vpklib/packedstore.h:277 */
	int GetFileList(CPackedStore* , CUtlStringList& , bool, bool);
	/* ../public/vpklib/packedstore.h:280 */
	int GetFileList(CPackedStore* , const char* , CUtlStringList& , bool, bool);
	/* ../public/vpklib/packedstore.h:284 */
	void GetFileList(CPackedStore* , const char* , CUtlVector<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >& );
	/* ../public/vpklib/packedstore.h:287 */
	int GetFileAndDirLists(CPackedStore* , const char* , CUtlStringList& , CUtlStringList& , bool, bool);
	/* ../public/vpklib/packedstore.h:289 */
	bool IsEmpty(const CPackedStore* );
	/* ../public/vpklib/packedstore.h:292 */
	void HashEverything(CPackedStore* );
	/* ../public/vpklib/packedstore.h:295 */
	void HashAllChunkFiles(CPackedStore* );
	/* ../public/vpklib/packedstore.h:298 */
	void HashMetadata(CPackedStore* );
	/* ../public/vpklib/packedstore.h:300 */
	void ComputeDirectoryHash(CPackedStore* , MD5Value_t& );
	/* ../public/vpklib/packedstore.h:301 */
	void ComputeChunkHash(CPackedStore* , MD5Value_t& );
	/* ../public/vpklib/packedstore.h:302 */
	MD5Value_t& GetDirFileMD5Value(CPackedStore* );
	/* ../public/vpklib/packedstore.h:303 */
	bool BTestDirectoryHash(CPackedStore* );
	/* ../public/vpklib/packedstore.h:304 */
	bool BTestMasterChunkHash(CPackedStore* );
	/* ../public/vpklib/packedstore.h:318 */
	void GetPackFileName(const CPackedStore* , CPackedStoreFileHandle& , CBufferString* );
	/* ../public/vpklib/packedstore.h:319 */
	void GetDataFileName(const CPackedStore* , CBufferString* , int);
	/* ../public/vpklib/packedstore.h:321 */
	const char* BaseName(CPackedStore* );
	/* ../public/vpklib/packedstore.h:326 */
	const char* FullPathName(CPackedStore* );
	/* ../public/vpklib/packedstore.h:331 */
	void SetWriteChunkSize(CPackedStore* , int);
	/* ../public/vpklib/packedstore.h:336 */
	void UpdateContentsFilter(CPackedStore* );
	/* ../public/vpklib/packedstore.h:337 */
	bool IsFileBlacklisted(CPackedStore* , const char* , const char* , const char* );
	/* ../public/vpklib/packedstore.h:339 */
	int AddRef(CPackedStore* );
	/* ../public/vpklib/packedstore.h:340 */
	int Release(CPackedStore* );
	/* ../public/vpklib/packedstore.h:342 */
	int GetWriteChunkSize(const CPackedStore* );
	/* ../public/vpklib/packedstore.h:344 */
	int GetHighestChunkFileIndex(CPackedStore* );
	/* ../public/vpklib/packedstore.h:346 */
	void DiscardChunkHashes(CPackedStore* , int);
	/* ../public/vpklib/packedstore.h:348 */
	const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& GetSignaturePublicKey(const CPackedStore* );
	/* ../public/vpklib/packedstore.h:349 */
	const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& GetSignature(const CPackedStore* );
	/* ../public/vpklib/packedstore.h:365 */
	void SetUseDirFile(CPackedStore* );
	/* ../public/vpklib/packedstore.h:368 */
	void SetParent(CPackedStore* , CPackedStore* );
	/* ../public/vpklib/packedstore.h:369 */
	CPackedStore* GetParent(const CPackedStore* );
private:
	CPathBufferString m_fileBaseName; /* 0 208 */
	CPathBufferString m_fullPathName; /* 208 208 */
	CPathBufferString m_fileBaseNameForDirectory; /* 416 208 */
	int m_nWriteOffset; /* 624 4 */
	int m_nChunkWriteIndex; /* 628 4 */
	int m_nOffsetOfEmbededChunkInDirFile; /* 632 4 */
	int m_nWriteChunkSize; /* 636 4 */
	bool m_bUseDirFile; /* 640 1 */
	bool m_bUseRawFile; /* 641 1 */
	IFileSystem * m_pFileSystem; /* 648 8 */
	CThreadRWLock_FastRead m_RWLock __attribute__((__aligned__(8))); /* 656 408 */
	CPackedStore * m_pParent; /* 1064 8 */
	CUtlIntrusiveList<CFileExtensionData> m_pExtensionData[15]; /* 1072 120 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_DirectoryData; /* 1192 32 */
	CUtlBlockVector<unsigned char, int> m_EmbeddedChunkData; /* 1224 32 */
	/* ../public/vpklib/packedstore.h:395 */
	bool BFileContainedHashes(CPackedStore* );
	MD5Value_t m_DirectoryMD5; /* 1256 16 */
	MD5Value_t m_ChunkHashesMD5; /* 1272 16 */
	MD5Value_t m_TotalFileMD5; /* 1288 16 */
	int m_nHighestChunkFileIndex; /* 1304 4 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_SignaturePrivateKey; /* 1312 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_SignaturePublicKey; /* 1344 32 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_Signature; /* 1376 32 */
	uint32 m_nSizeOfSignedData; /* 1408 4 */
	CUtlHashtable<int, int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, int>, int> > m_FileIdToHandleIndex; /* 1416 32 */
	CUtlBlockVector<FileHandleTracker_t, int> m_FileHandles; /* 1448 32 */
	/* ../public/vpklib/packedstore.h:422 */
	void Init(CPackedStore* );
	/* ../public/vpklib/packedstore.h:424 */
	CFileHeaderFixedData* FindFileEntry(CPackedStore* , const char* , const char* , const char* , uint8** , uint8** );
	/* ../public/vpklib/packedstore.h:428 */
	void BuildHashTables(CPackedStore* );
	/* ../public/vpklib/packedstore.h:430 */
	FileHandleTracker_t& GetFileHandle(CPackedStore* , int);
	/* ../public/vpklib/packedstore.h:432 */
	void CloseWriteHandle(CPackedStore* );
	/* ../public/vpklib/packedstore.h:434 */
	bool InternalRemoveFileFromDirectory(CPackedStore* , const char* );
	CUtlStringList m_filteredDirs; /* 1480 32 */
	CUtlStringList m_filteredBaseNames; /* 1512 32 */
	CUtlStringList m_filteredExtensions; /* 1544 32 */
	CUtlVector<bool, CUtlMemory<bool, int> > m_filteredDirsRecurse; /* 1576 32 */
	CInterlockedInt m_nRefCount __attribute__((__aligned__(4))); /* 1608 4 */
	CUtlStringToken m_FileSystemPathMergeToken; /* 1612 4 */
	CUtlString m_FileSystemMergedPathsCache; /* 1616 8 */
	void CPackedStore(class CPackedStore *, const char  *, class IFileSystem *, int, class CPackedStore *, const char  *, class CUtlStringToken); /* linkage=_ZN12CPackedStoreC4EPKcP11IFileSystemiPS_S1_15CUtlStringToken */
	class CPackedStoreFileHandle OpenFile(class CPackedStore *, const char  *); /* linkage=_ZN12CPackedStore8OpenFileEPKc */
	bool DoesDirectoryExist(const class CPackedStore  *, const char  *); /* linkage=_ZNK12CPackedStore18DoesDirectoryExistEPKc */
	void AddFileToDirectory(class CPackedStore *, const class VPKContentFileInfo_t  &); /* linkage=_ZN12CPackedStore18AddFileToDirectoryERK20VPKContentFileInfo_t */
	bool RemoveFileFromDirectory(class CPackedStore *, const char  *); /* linkage=_ZN12CPackedStore23RemoveFileFromDirectoryEPKc */
	enum ePackedStoreAddResultCode AddFile(class CPackedStore *, const char  *, uint16, const void  *, uint32, bool, const uint32  *); /* linkage=_ZN12CPackedStore7AddFileEPKctPKvjbPKj */
	void ChangeMultipleDirectoryEntries(class CPackedStore *, const class CUtlVector<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >  &, const class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >  &); /* linkage=_ZN12CPackedStore30ChangeMultipleDirectoryEntriesERK10CUtlVectorI20VPKContentFileInfo_t10CUtlMemoryIS1_iEERKS0_I10CUtlStringS2_IS7_iEE */
	bool Write(class CPackedStore *); /* linkage=_ZN12CPackedStore5WriteEv */
	int ReadData(class CPackedStore *, class CPackedStoreFileHandle &, void *, int); /* linkage=_ZN12CPackedStore8ReadDataER22CPackedStoreFileHandlePvi */
	class IMemoryMappedFile * MemoryMapFile(class CPackedStore *, class CPackedStoreFileHandle &, enum MemoryMappedFileFlags_t); /* linkage=_ZN12CPackedStore13MemoryMapFileER22CPackedStoreFileHandle23MemoryMappedFileFlags_t */
	void ~CPackedStore(class CPackedStore *); /* linkage=_ZN12CPackedStoreD4Ev */
	void * DirectoryData(class CPackedStore *); /* linkage=_ZN12CPackedStore13DirectoryDataEv */
	bool IsValidDirectoryData(class CPackedStore *, const void  *, size_t); /* linkage=_ZN12CPackedStore20IsValidDirectoryDataEPKvm */
	int IsValidDirectoryString(class CPackedStore *, const char  *, int); /* linkage=_ZN12CPackedStore22IsValidDirectoryStringEPKci */
	bool AdvanceValidDirectoryData(class CPackedStore *, const char  * &, size_t); /* linkage=_ZN12CPackedStore25AdvanceValidDirectoryDataERPKcm */
	int SkipDataAfterFilePath(class CPackedStore *, const char  * &); /* linkage=_ZN12CPackedStore21SkipDataAfterFilePathERPKc */
	int SkipAllFilesAfterDirName(class CPackedStore *, const char  * &, class CUtlVector<char const*, CUtlMemory<char const*, int> > *); /* linkage=_ZN12CPackedStore24SkipAllFilesAfterDirNameERPKcP10CUtlVectorIS1_10CUtlMemoryIS1_iEE */
	int SkipFile(class CPackedStore *, const char  * &); /* linkage=_ZN12CPackedStore8SkipFileERPKc */
	/* <243174> vpklib/packedstore.cpp:1901 */
	int GetFileList(class CPackedStore *, class CUtlStringList &, bool, bool); /* linkage=_ZN12CPackedStore11GetFileListER14CUtlStringListbb */
	int GetFileList(class CPackedStore *, const char  *, class CUtlStringList &, bool, bool); /* linkage=_ZN12CPackedStore11GetFileListEPKcR14CUtlStringListbb */
	void GetFileList(class CPackedStore *, const char  *, class CUtlVector<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> > &); /* linkage=_ZN12CPackedStore11GetFileListEPKcR10CUtlVectorI20VPKContentFileInfo_t10CUtlMemoryIS3_iEE */
	int GetFileAndDirLists(class CPackedStore *, const char  *, class CUtlStringList &, class CUtlStringList &, bool, bool); /* linkage=_ZN12CPackedStore18GetFileAndDirListsEPKcR14CUtlStringListS3_bb */
	bool IsEmpty(const class CPackedStore  *); /* linkage=_ZNK12CPackedStore7IsEmptyEv */
	void HashEverything(class CPackedStore *); /* linkage=_ZN12CPackedStore14HashEverythingEv */
	/* <243201> vpklib/packedstore.cpp:1387 */
	void HashAllChunkFiles(class CPackedStore *); /* linkage=_ZN12CPackedStore17HashAllChunkFilesEv */
	/* <242c75> vpklib/packedstore.cpp:1453 */
	void HashMetadata(class CPackedStore *); /* linkage=_ZN12CPackedStore12HashMetadataEv */
	/* <2429f4> vpklib/packedstore.cpp:1405 */
	void ComputeDirectoryHash(class CPackedStore *, class MD5Value_t &); /* linkage=_ZN12CPackedStore20ComputeDirectoryHashER10MD5Value_t */
	/* <242b76> vpklib/packedstore.cpp:1415 */
	void ComputeChunkHash(class CPackedStore *, class MD5Value_t &); /* linkage=_ZN12CPackedStore16ComputeChunkHashER10MD5Value_t */
	class MD5Value_t & GetDirFileMD5Value(class CPackedStore *); /* linkage=_ZN12CPackedStore18GetDirFileMD5ValueEv */
	/* <242c45> vpklib/packedstore.cpp:1427 */
	bool BTestDirectoryHash(class CPackedStore *); /* linkage=_ZN12CPackedStore18BTestDirectoryHashEv */
	bool BTestMasterChunkHash(class CPackedStore *); /* linkage=_ZN12CPackedStore20BTestMasterChunkHashEv */
	void GetPackFileName(const class CPackedStore  *, class CPackedStoreFileHandle &, class CBufferString *); /* linkage=_ZNK12CPackedStore15GetPackFileNameER22CPackedStoreFileHandleP13CBufferString */
	void GetDataFileName(const class CPackedStore  *, class CBufferString *, int); /* linkage=_ZNK12CPackedStore15GetDataFileNameEP13CBufferStringi */
	const char  * BaseName(class CPackedStore *); /* linkage=_ZN12CPackedStore8BaseNameEv */
	const char  * FullPathName(class CPackedStore *); /* linkage=_ZN12CPackedStore12FullPathNameEv */
	void SetWriteChunkSize(class CPackedStore *, int); /* linkage=_ZN12CPackedStore17SetWriteChunkSizeEi */
	void UpdateContentsFilter(class CPackedStore *); /* linkage=_ZN12CPackedStore20UpdateContentsFilterEv */
	bool IsFileBlacklisted(class CPackedStore *, const char  *, const char  *, const char  *); /* linkage=_ZN12CPackedStore17IsFileBlacklistedEPKcS1_S1_ */
	/* <242fc5> vpklib/packedstore.cpp:2394 */
	int AddRef(class CPackedStore *); /* linkage=_ZN12CPackedStore6AddRefEv */
	/* <243052> vpklib/packedstore.cpp:2399 */
	int Release(class CPackedStore *); /* linkage=_ZN12CPackedStore7ReleaseEv */
	int GetWriteChunkSize(const class CPackedStore  *); /* linkage=_ZNK12CPackedStore17GetWriteChunkSizeEv */
	int GetHighestChunkFileIndex(class CPackedStore *); /* linkage=_ZN12CPackedStore24GetHighestChunkFileIndexEv */
	void DiscardChunkHashes(class CPackedStore *, int); /* linkage=_ZN12CPackedStore18DiscardChunkHashesEi */
	const class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >  & GetSignaturePublicKey(const class CPackedStore  *); /* linkage=_ZNK12CPackedStore21GetSignaturePublicKeyEv */
	const class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >  & GetSignature(const class CPackedStore  *); /* linkage=_ZNK12CPackedStore12GetSignatureEv */
	void SetUseDirFile(class CPackedStore *); /* linkage=_ZN12CPackedStore13SetUseDirFileEv */
	/* <2427c1> vpklib/packedstore.cpp:320 */
	void SetParent(class CPackedStore *, class CPackedStore *); /* linkage=_ZN12CPackedStore9SetParentEPS_ */
	class CPackedStore * GetParent(const class CPackedStore  *); /* linkage=_ZNK12CPackedStore9GetParentEv */
	bool BFileContainedHashes(class CPackedStore *); /* linkage=_ZN12CPackedStore20BFileContainedHashesEv */
	void Init(class CPackedStore *); /* linkage=_ZN12CPackedStore4InitEv */
	class CFileHeaderFixedData * FindFileEntry(class CPackedStore *, const char  *, const char  *, const char  *, uint8 * *, uint8 * *); /* linkage=_ZN12CPackedStore13FindFileEntryEPKcS1_S1_PPhS3_ */
	void BuildHashTables(class CPackedStore *); /* linkage=_ZN12CPackedStore15BuildHashTablesEv */
	class FileHandleTracker_t & GetFileHandle(class CPackedStore *, int); /* linkage=_ZN12CPackedStore13GetFileHandleEi */
	void CloseWriteHandle(class CPackedStore *); /* linkage=_ZN12CPackedStore16CloseWriteHandleEv */
	bool InternalRemoveFileFromDirectory(class CPackedStore *, const char  *); /* linkage=_ZN12CPackedStore31InternalRemoveFileFromDirectoryEPKc */
} __attribute__((__aligned__(8)));

// <000B104D> ../public/vpklib/packedstore.h:182
void CPackedStore::CPackedStore(const char* pFileBasename, IFileSystem* pFS, int nOpenFlags, CPackedStore* pParent, const char* pParentFile, CUtlStringToken pathMergeToken)
{
} /* size: 0 */

// <000B1031> ../public/vpklib/packedstore.h:209
void CPackedStore::~CPackedStore()
{
} /* size: 0 */

// <00239259> ../public/vpklib/packedstore.h:211
inline void* CPackedStore::DirectoryData()
{
} /* size: 0 */

// <0023921C> ../public/vpklib/packedstore.h:215
// variable: 1
inline void CPackedStore::IsValidDirectoryData(const void* pPtr, size_t nBytes)
{
	char* pDirEnd; // 222
} /* size: 0, variables: 1 */

// <002391C7> ../public/vpklib/packedstore.h:231
// variables: 3
inline void CPackedStore::IsValidDirectoryString(const char* pStr, int nMaxChars)
{
	char* pDirEnd; // 238
	int nMaxCheck; // 244
	int nChars; // 250
} /* size: 0, variables: 3 */

// <00239196> ../public/vpklib/packedstore.h:254
inline void CPackedStore::AdvanceValidDirectoryData(const char *& pPtr, size_t nBytes)
{
} /* size: 0 */

// <00239170> ../public/vpklib/packedstore.h:269
inline void CPackedStore::SkipFile(const char *& pData)
{
} /* size: 0 */

// <00239157> ../public/vpklib/packedstore.h:321
inline void CPackedStore::BaseName()
{
} /* size: 0 */

// <00105DDE> ../public/vpklib/packedstore.h:326
inline void CPackedStore::FullPathName()
{
} /* size: 0 */

// <0023913E> ../public/vpklib/packedstore.h:395
inline void CPackedStore::BFileContainedHashes()
{
} /* size: 0 */

// <00105DA8> ../public/vpklib/packedstore.h:447
inline void CPackedStoreFileHandle::Read(void* pOutData, int nNumBytes)
{
} /* size: 0 */

// <00105D7F> ../public/vpklib/packedstore.h:452
inline void CPackedStoreFileHandle::MemoryMapFile(MemoryMappedFileFlags_t nFlags)
{
} /* size: 0 */

