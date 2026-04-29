
//
// public/zip/zip_utils.cpp
//
//	referenced by: libfilesystem_stdio.so
//
//	functions: 98
//	classes: 6
//

// <00169816> ../public/zip/zip_utils.cpp:47
void GetBaseMap(void)
{
} /* size: 0 */

// <00169060> ../public/zip/zip_utils.cpp:47
// variables: 2
datamap_t* DataMapInit<ZIP_EndOfCentralDirRecord>(ZIP_EndOfCentralDirRecord *)
{
	const char* pDataMapInit_className; // 47
	typedescription_t dataDesc; // 47
} /* size: 177, variables: 2 */

// <00168F9B> ../public/zip/zip_utils.cpp:58
// variables: 2
datamap_t* DataMapInit<ZIP_FileHeader>(ZIP_FileHeader *)
{
	const char* pDataMapInit_className; // 58
	typedescription_t dataDesc; // 58
} /* size: 267, variables: 2 */

// <00168ED6> ../public/zip/zip_utils.cpp:78
// variables: 2
datamap_t* DataMapInit<ZIP_LocalFileHeader>(ZIP_LocalFileHeader *)
{
	const char* pDataMapInit_className; // 78
	typedescription_t dataDesc; // 78
} /* size: 207, variables: 2 */

// <00168E0B> ../public/zip/zip_utils.cpp:92
// variables: 2
datamap_t* DataMapInit<ZIP_PreloadHeader>(ZIP_PreloadHeader *)
{
	const char* pDataMapInit_className; // 92
	typedescription_t dataDesc; // 92
} /* size: 134, variables: 2 */

// <00168D40> ../public/zip/zip_utils.cpp:99
// variables: 2
datamap_t* DataMapInit<ZIP_PreloadDirectoryEntry>(ZIP_PreloadDirectoryEntry *)
{
	const char* pDataMapInit_className; // 99
	typedescription_t dataDesc; // 99
} /* size: 114, variables: 2 */

// <00153D4D> ../public/zip/zip_utils.cpp:182
// member functions: 5
// class size: 1
class CWin32File {
	/* ../public/zip/zip_utils.cpp:185 */
	HANDLE CreateTempFile(CUtlString& , CUtlString& );
	/* ../public/zip/zip_utils.cpp:224 */
	unsigned int FileSeek(HANDLE, unsigned int, DWORD);
	/* ../public/zip/zip_utils.cpp:229 */
	unsigned int FileTell(HANDLE);
	/* ../public/zip/zip_utils.cpp:234 */
	bool FileRead(HANDLE, void* , unsigned int);
	/* ../public/zip/zip_utils.cpp:240 */
	bool FileWrite(HANDLE, void* , unsigned int);
};

// <00169BFC> ../public/zip/zip_utils.cpp:185
// variables: 7
// function calls: 8
void CreateTempFile(CUtlString& WritePath, CUtlString& FileName)
{
	FILE* hFile; // 187
	CUtlString::IsEmpty(); // 190
	{
		char mktName; // 192
		int nFileDescriptor; // 197
		strcpy(char* __dest,
			const char* __src);  // 196
		CUtlString::operator=(
				const char* src);  // 203
	}
	CreateTempFile(CUtlString& WritePath,
			CUtlString& FileName);  // 185
	{
		char uniqueFilename; // 208
		time_t now; // 210
		tm* tm; // 211
		char tempFileName; // 214
		CUtlString::Get(); // 99
		CUtlString::String(); // 215
		V_ComposeFileName<long unsigned int>(const char* path,
							const char* filename,
							char* dest,
							long unsigned int destSize);  // 215
		CUtlString::operator=(
				const char* src);  // 217
	}
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00168C2B> ../public/zip/zip_utils.cpp:185
// variables: 8
inline void CreateTempFile(CUtlString& WritePath, CUtlString& FileName)
{
	FILE* hFile; // 187
	{
		char mktName; // 192
		int nFileDescriptor; // 197
	}
	{
		char uniqueFilename; // 208
		int counter; // 209
		time_t now; // 210
		tm* tm; // 211
		char tempFileName; // 214
	}
} /* size: 0, variables: 1 */

// <00168BFC> ../public/zip/zip_utils.cpp:224
inline void FileSeek(HANDLE hFile, unsigned int distance, DWORD MoveMethod)
{
} /* size: 0 */

// <00168BE5> ../public/zip/zip_utils.cpp:229
inline void FileTell(HANDLE hFile)
{
} /* size: 0 */

// <00168BAA> ../public/zip/zip_utils.cpp:234
// variable: 1
inline void FileRead(HANDLE hFile, void* pBuffer, unsigned int size)
{
	size_t bytesRead; // 236
} /* size: 0, variables: 1 */

// <00168B6F> ../public/zip/zip_utils.cpp:240
// variable: 1
inline void FileWrite(HANDLE hFile, void* pBuffer, unsigned int size)
{
	size_t bytesWrtitten; // 242
} /* size: 0, variables: 1 */

// <00168B58> ../public/zip/zip_utils.cpp:252
void IWriteStream::IWriteStream()
{
} /* size: 0 */

// <00168B3B> ../public/zip/zip_utils.cpp:252
inline void IWriteStream::IWriteStream()
{
} /* size: 0 */

// <00155A34> ../public/zip/zip_utils.cpp:252
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 8
class IWriteStream {
	void ~IWriteStream(IWriteStream* );
	void IWriteStream(IWriteStream* , IWriteStream& );
	void IWriteStream(IWriteStream* , const IWriteStream& );
	void IWriteStream(IWriteStream* );
	int ()(void) * * _vptr.IWriteStream; /* 0 8 */
	/* ../public/zip/zip_utils.cpp:255 */
	virtual void Put(IWriteStream* , const void* , int);
	/* ../public/zip/zip_utils.cpp:256 */
	virtual unsigned int Tell(IWriteStream* );
	void ~IWriteStream(class IWriteStream *); /* linkage=_ZN12IWriteStreamD4Ev */
	void IWriteStream(class IWriteStream *, class IWriteStream &); /* linkage=_ZN12IWriteStreamC4EOS_ */
	void IWriteStream(class IWriteStream *, const class IWriteStream  &); /* linkage=_ZN12IWriteStreamC4ERKS_ */
	void IWriteStream(class IWriteStream *); /* linkage=_ZN12IWriteStreamC4Ev */
	virtual void Put(class IWriteStream *, const void  *, int); /* linkage=_ZN12IWriteStream3PutEPKvi */
	virtual unsigned int Tell(class IWriteStream *); /* linkage=_ZN12IWriteStream4TellEv */
};

// <00157610> ../public/zip/zip_utils.cpp:262
// member functions: 12
// member variables: 2
// vtable entries: 2
// class size: 16
class CBufferStream : public IWriteStream {
public:
	/* class IWriteStream <ancestor>; */ /* 0 8 */
	void ~CBufferStream(CBufferStream* );
	void CBufferStream(CBufferStream* , CBufferStream& );
	void CBufferStream(CBufferStream* , const CBufferStream& );
	/* ../public/zip/zip_utils.cpp:265 */
	void CBufferStream(CBufferStream* , CUtlBuffer& );
	/* ../public/zip/zip_utils.cpp:268 */
	virtual void Put(CBufferStream* , const void* , int);
	/* ../public/zip/zip_utils.cpp:271 */
	virtual unsigned int Tell(CBufferStream* );
private:
	CUtlBuffer * m_buff; /* 8 8 */
	void ~CBufferStream(class CBufferStream *); /* linkage=_ZN13CBufferStreamD4Ev */
	void CBufferStream(class CBufferStream *, class CBufferStream &); /* linkage=_ZN13CBufferStreamC4EOS_ */
	void CBufferStream(class CBufferStream *, const class CBufferStream  &); /* linkage=_ZN13CBufferStreamC4ERKS_ */
	void CBufferStream(class CBufferStream *, class CUtlBuffer &); /* linkage=_ZN13CBufferStreamC4ER10CUtlBuffer */
	virtual void Put(class CBufferStream *, const void  *, int); /* linkage=_ZN13CBufferStream3PutEPKvi */
	virtual unsigned int Tell(class CBufferStream *); /* linkage=_ZN13CBufferStream4TellEv */
};

// <00168B1F> ../public/zip/zip_utils.cpp:265
void CBufferStream::CBufferStream(CUtlBuffer& buff)
{
} /* size: 0 */

// <00168AF9> ../public/zip/zip_utils.cpp:265
inline void CBufferStream::CBufferStream(CUtlBuffer& buff)
{
} /* size: 0 */

// <00168A7E> ../public/zip/zip_utils.cpp:268
void CBufferStream::Put(const void* pMem, int size)
{
} /* size: 0 */

// <00168A1F> ../public/zip/zip_utils.cpp:271
// function call: 1
void CBufferStream::Tell()
{
	CUtlBuffer::TellPut(); // 271
} /* size: 0, inline expansions: 1 (0 bytes) */

// <001574B8> ../public/zip/zip_utils.cpp:280
// member functions: 14
// member variables: 3
// vtable entries: 2
// class size: 24
class CFileStream : public IWriteStream {
public:
	/* class IWriteStream <ancestor>; */ /* 0 8 */
	void ~CFileStream(CFileStream* );
	void CFileStream(CFileStream* , CFileStream& );
	void CFileStream(CFileStream* , const CFileStream& );
	/* ../public/zip/zip_utils.cpp:283 */
	void CFileStream(CFileStream* , FILE* );
	/* ../public/zip/zip_utils.cpp:284 */
	void CFileStream(CFileStream* , HANDLE);
	/* ../public/zip/zip_utils.cpp:287 */
	virtual void Put(CFileStream* , const void* , int);
	/* ../public/zip/zip_utils.cpp:303 */
	virtual unsigned int Tell(CFileStream* );
private:
	FILE * m_file; /* 8 8 */
	HANDLE m_hFile; /* 16 8 */
	void ~CFileStream(class CFileStream *); /* linkage=_ZN11CFileStreamD4Ev */
	void CFileStream(class CFileStream *, class CFileStream &); /* linkage=_ZN11CFileStreamC4EOS_ */
	void CFileStream(class CFileStream *, const class CFileStream  &); /* linkage=_ZN11CFileStreamC4ERKS_ */
	void CFileStream(class CFileStream *, FILE *); /* linkage=_ZN11CFileStreamC4EP8_IO_FILE */
	void CFileStream(class CFileStream *, HANDLE); /* linkage=_ZN11CFileStreamC4EPv */
	virtual void Put(class CFileStream *, const void  *, int); /* linkage=_ZN11CFileStream3PutEPKvi */
	virtual unsigned int Tell(class CFileStream *); /* linkage=_ZN11CFileStream4TellEv */
};

// <00168A03> ../public/zip/zip_utils.cpp:283
void CFileStream::CFileStream(FILE* fout)
{
} /* size: 0 */

// <001689DD> ../public/zip/zip_utils.cpp:283
inline void CFileStream::CFileStream(FILE* fout)
{
} /* size: 0 */

// <001689C1> ../public/zip/zip_utils.cpp:284
void CFileStream::CFileStream(HANDLE hOutFile)
{
} /* size: 0 */

// <0016899B> ../public/zip/zip_utils.cpp:284
inline void CFileStream::CFileStream(HANDLE hOutFile)
{
} /* size: 0 */

// <00168915> ../public/zip/zip_utils.cpp:287
void CFileStream::Put(const void* pMem, int size)
{
} /* size: 0 */

// <001688D3> ../public/zip/zip_utils.cpp:303
void CFileStream::Tell()
{
} /* size: 0 */

// <00153E07> ../public/zip/zip_utils.cpp:329
// member functions: 62
// member variables: 10
// class size: 104
class CZipFile {
	/* ../public/zip/zip_utils.cpp:393 */
	struct {
		CUtlSymbol m_Name; /* 0 2 */
		unsigned int filepos; /* 4 4 */
		int filelen; /* 8 4 */
		void TmpFileInfo_t(TmpFileInfo_t* );
	};
	/* ../public/zip/zip_utils.cpp:410 */
	class CZipEntry {
		/* ../public/zip/zip_utils.cpp:413 */
		void CZipEntry(CZipEntry* );
		/* ../public/zip/zip_utils.cpp:414 */
		void ~CZipEntry(CZipEntry* );
		/* ../public/zip/zip_utils.cpp:416 */
		void CZipEntry(CZipEntry* , const CZipEntry& );
		/* ../public/zip/zip_utils.cpp:419 */
		bool ZipFileLessFunc(const CZipEntry& , const CZipEntry& );
		/* ../public/zip/zip_utils.cpp:420 */
		bool ZipFileLessFunc_CaselessSort(const CZipEntry& , const CZipEntry& );
		CUtlSymbol m_Name; /* 0 2 */
		int m_Length; /* 4 4 */
		void * m_pData; /* 8 8 */
		unsigned int m_ZipOffset; /* 16 4 */
		CRC32_t m_ZipCRC; /* 20 4 */
		unsigned int m_DiskCacheOffset; /* 24 4 */
		unsigned int m_SourceDiskOffset; /* 28 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/zip/zip_utils.cpp:333 */
	void CZipFile(CZipFile* , const char* , bool);
	/* ../public/zip/zip_utils.cpp:334 */
	void ~CZipFile(CZipFile* );
	/* ../public/zip/zip_utils.cpp:338 */
	void Reset(CZipFile* );
	/* ../public/zip/zip_utils.cpp:341 */
	bool AddFileToZip(CZipFile* , const char* , const char* );
	/* ../public/zip/zip_utils.cpp:344 */
	void RemoveFileFromZip(CZipFile* , const char* );
	/* ../public/zip/zip_utils.cpp:347 */
	void AddBufferToZip(CZipFile* , const char* , void* , int, bool);
	/* ../public/zip/zip_utils.cpp:350 */
	bool FileExistsInZip(CZipFile* , const char* );
	/* ../public/zip/zip_utils.cpp:353 */
	bool ReadFileFromZip(CZipFile* , const char* , bool, CUtlBuffer& );
	/* ../public/zip/zip_utils.cpp:354 */
	bool ReadFileFromZip(CZipFile* , HANDLE, const char* , bool, CUtlBuffer& );
	/* ../public/zip/zip_utils.cpp:357 */
	void ParseFromBuffer(CZipFile* , void* , int);
	/* ../public/zip/zip_utils.cpp:358 */
	HANDLE ParseFromDisk(CZipFile* , const char* );
	/* ../public/zip/zip_utils.cpp:361 */
	unsigned int EstimateSize(CZipFile* );
	/* ../public/zip/zip_utils.cpp:364 */
	void PrintDirectory(CZipFile* );
	/* ../public/zip/zip_utils.cpp:368 */
	int GetNextFilename(CZipFile* , int, char* , int, int& );
	/* ../public/zip/zip_utils.cpp:371 */
	void SaveToBuffer(CZipFile* , CUtlBuffer& );
	/* ../public/zip/zip_utils.cpp:373 */
	void SaveToDisk(CZipFile* , FILE* );
	/* ../public/zip/zip_utils.cpp:374 */
	void SaveToDisk(CZipFile* , HANDLE);
	/* ../public/zip/zip_utils.cpp:376 */
	unsigned int CalculateSize(CZipFile* );
	/* ../public/zip/zip_utils.cpp:378 */
	void ForceAlignment(CZipFile* , bool, bool, unsigned int);
	/* ../public/zip/zip_utils.cpp:380 */
	unsigned int GetAlignment(CZipFile* );
	/* ../public/zip/zip_utils.cpp:382 */
	void SetBigEndian(CZipFile* , bool);
	/* ../public/zip/zip_utils.cpp:383 */
	void ActivateByteSwapping(CZipFile* , bool);
	/* ../public/zip/zip_utils.cpp:384 */
	bool GetCompressionMethodFromBuffer(CZipFile* , void* , int, short unsigned int* );
private:
	CByteswap m_Swap; /* 0 4 */
	unsigned int m_AlignmentSize; /* 4 4 */
	bool m_bForceAlignment; /* 8 1 */
	bool m_bCompatibleFormat; /* 9 1 */
	/* ../public/zip/zip_utils.cpp:404 */
	short unsigned int CalculatePadding(CZipFile* , unsigned int, unsigned int);
	/* ../public/zip/zip_utils.cpp:405 */
	void SaveDirectory(CZipFile* , IWriteStream& );
	/* ../public/zip/zip_utils.cpp:406 */
	int MakeXZipCommentString(CZipFile* , char* );
	/* ../public/zip/zip_utils.cpp:407 */
	void ParseXZipCommentString(CZipFile* , const char* );
	CUtlRBTree<CZipFile::CZipEntry, int, bool (*)(const CZipFile::CZipEntry&, const CZipFile::CZipEntry&), CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int> > m_Files; /* 16 48* /
	bool m_bUseDiskCacheForWrites; /* 64 1 */
	HANDLE m_hDiskCacheWriteFile; /* 72 8 */
	CUtlString m_DiskCacheName; /* 80 8 */
	CUtlString m_DiskCacheWritePath; /* 88 8 */
	bool m_bIsUpdateFormat; /* 96 1 */
	/* ../public/zip/zip_utils.cpp:397 */
	typedef struct {
		CUtlSymbol m_Name; /* 0 2 */
		unsigned int filepos; /* 4 4 */
		int filelen; /* 8 4 */
		void TmpFileInfo_t(TmpFileInfo_t* );
	} TmpFileInfo_t;
	void CZipFile(class CZipFile *, const char  *, bool); /* linkage=_ZN8CZipFileC4EPKcb */
	void ~CZipFile(class CZipFile *); /* linkage=_ZN8CZipFileD4Ev */
	/* <169ef9> ../public/zip/zip_utils.cpp:539 */
	void Reset(class CZipFile *); /* linkage=_ZN8CZipFile5ResetEv */
	bool AddFileToZip(class CZipFile *, const char  *, const char  *); /* linkage=_ZN8CZipFile12AddFileToZipEPKcS1_ */
	void RemoveFileFromZip(class CZipFile *, const char  *); /* linkage=_ZN8CZipFile17RemoveFileFromZipEPKc */
	void AddBufferToZip(class CZipFile *, const char  *, void *, int, bool); /* linkage=_ZN8CZipFile14AddBufferToZipEPKcPvib */
	bool FileExistsInZip(class CZipFile *, const char  *); /* linkage=_ZN8CZipFile15FileExistsInZipEPKc */
	bool ReadFileFromZip(class CZipFile *, const char  *, bool, class CUtlBuffer &); /* linkage=_ZN8CZipFile15ReadFileFromZipEPKcbR10CUtlBuffer */
	bool ReadFileFromZip(class CZipFile *, HANDLE, const char  *, bool, class CUtlBuffer &); /* linkage=_ZN8CZipFile15ReadFileFromZipEPvPKcbR10CUtlBuffer */
	void ParseFromBuffer(class CZipFile *, void *, int); /* linkage=_ZN8CZipFile15ParseFromBufferEPvi */
	HANDLE ParseFromDisk(class CZipFile *, const char  *); /* linkage=_ZN8CZipFile13ParseFromDiskEPKc */
	unsigned int EstimateSize(class CZipFile *); /* linkage=_ZN8CZipFile12EstimateSizeEv */
	void PrintDirectory(class CZipFile *); /* linkage=_ZN8CZipFile14PrintDirectoryEv */
	int GetNextFilename(class CZipFile *, int, char *, int, int &); /* linkage=_ZN8CZipFile15GetNextFilenameEiPciRi */
	/* <16a12b> ../public/zip/zip_utils.cpp:1493 */
	void SaveToBuffer(class CZipFile *, class CUtlBuffer &); /* linkage=_ZN8CZipFile12SaveToBufferER10CUtlBuffer */
	/* <16a011> ../public/zip/zip_utils.cpp:1478 */
	void SaveToDisk(class CZipFile *, FILE *); /* linkage=_ZN8CZipFile10SaveToDiskEP8_IO_FILE */
	/* <16a09e> ../public/zip/zip_utils.cpp:1484 */
	void SaveToDisk(class CZipFile *, HANDLE); /* linkage=_ZN8CZipFile10SaveToDiskEPv */
	unsigned int CalculateSize(class CZipFile *); /* linkage=_ZN8CZipFile13CalculateSizeEv */
	/* <169834> ../public/zip/zip_utils.cpp:576 */
	void ForceAlignment(class CZipFile *, bool, bool, unsigned int); /* linkage=_ZN8CZipFile14ForceAlignmentEbbj */
	/* <1698b0> ../public/zip/zip_utils.cpp:601 */
	unsigned int GetAlignment(class CZipFile *); /* linkage=_ZN8CZipFile12GetAlignmentEv */
	/* <1698da> ../public/zip/zip_utils.cpp:611 */
	void SetBigEndian(class CZipFile *, bool); /* linkage=_ZN8CZipFile12SetBigEndianEb */
	void ActivateByteSwapping(class CZipFile *, bool); /* linkage=_ZN8CZipFile20ActivateByteSwappingEb */
	bool GetCompressionMethodFromBuffer(class CZipFile *, void *, int, short unsigned int *); /* linkage=_ZN8CZipFile30GetCompressionMethodFromBufferEPviPt */
	/* <16994f> ../public/zip/zip_utils.cpp:1312 */
	short unsigned int CalculatePadding(class CZipFile *, unsigned int, unsigned int); /* linkage=_ZN8CZipFile16CalculatePaddingEjj */
	void SaveDirectory(class CZipFile *, class IWriteStream &); /* linkage=_ZN8CZipFile13SaveDirectoryER12IWriteStream */
	/* <16999a> ../public/zip/zip_utils.cpp:1327 */
	int MakeXZipCommentString(class CZipFile *, char *); /* linkage=_ZN8CZipFile21MakeXZipCommentStringEPc */
	/* <169abc> ../public/zip/zip_utils.cpp:1361 */
	void ParseXZipCommentString(class CZipFile *, const char  *); /* linkage=_ZN8CZipFile22ParseXZipCommentStringEPKc */
};

// <001672BD> ../public/zip/zip_utils.cpp:397
void TmpFileInfo_t(const TmpFileInfo_t* this)
{
} /* size: 0 */

// <0016729F> ../public/zip/zip_utils.cpp:397
inline void TmpFileInfo_t(const TmpFileInfo_t* this)
{
} /* size: 0 */

// <0016880E> ../public/zip/zip_utils.cpp:455
// function calls: 2
void CZipEntry::CZipEntry()
{
	CUtlSymbol::CUtlSymbol(); // 455
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 457
} /* size: 0, inline expansions: 2 (0 bytes) */

// <001687F2> ../public/zip/zip_utils.cpp:455
void CZipEntry::CZipEntry()
{
} /* size: 0 */

// <001686E9> ../public/zip/zip_utils.cpp:470
// function calls: 3
void CZipEntry::CZipEntry(const CZipEntry& src)
{
	CUtlSymbol::CUtlSymbol(); // 470
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 472
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 478
} /* size: 0, inline expansions: 3 (0 bytes) */

// <001686C0> ../public/zip/zip_utils.cpp:470
void CZipEntry::CZipEntry(const CZipEntry& src)
{
} /* size: 0 */

// <0016867E> ../public/zip/zip_utils.cpp:494
void CZipEntry::~CZipEntry()
{
} /* size: 0 */

// <0016824A> ../public/zip/zip_utils.cpp:505
// function calls: 18
void CZipFile::CZipFile(const char* pDiskCacheWritePath, bool bSortByName)
{
	IsMachineBigEndian(void); // 21
	CByteswap::SetTargetBigEndian(
				bool bigEndian);  // 21
	CByteswap::CByteswap(); // 506
	CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::InvalidIterator(); // 489
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::ResetDbgInfo()(const CZipFile::CZipEntry&, const CZipFile::CZipEntry&), CUtlMemory<U this); // 491
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 506
	CUtlString::CUtlString(); // 506
	CUtlString::CUtlString(); // 506
	CUtlString::operator=(
			const char* src);  // 514
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::Count()(const CZipFile::CZipEntry&, const CZipFile::CZipEntry&), CUtlMe this); // 1636
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::SetLessFunc(
			const LessFunc_t& func);  // 519
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::SetLessFunc(
			const LessFunc_t& func);  // 523
} /* size: 0, inline expansions: 18 (0 bytes) */

// <00168214> ../public/zip/zip_utils.cpp:505
void CZipFile::CZipFile(const char* pDiskCacheWritePath, bool bSortByName)
{
} /* size: 0 */

// <0016805D> ../public/zip/zip_utils.cpp:530
// function calls: 7
void CZipFile::~CZipFile()
{
	CUtlString::~CUtlString(); // 534
	CUtlString::~CUtlString(); // 534
	CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::Purge(); // 1287
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::Purge()(const CZipFile::CZipEntry&, const CZipFile::CZipEntry&), CUtlMemory<U this); // 509
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::~CUtlRBTree()(const CZipFile::CZipEntry&, const CZipFile::CZipEntry&), CUtlMemory<U this); // 534
} /* size: 0, inline expansions: 7 (0 bytes) */

// <00168041> ../public/zip/zip_utils.cpp:530
void CZipFile::~CZipFile()
{
} /* size: 0 */

// <00169EF9> ../public/zip/zip_utils.cpp:539
// function calls: 3
void CZipFile::Reset()
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 550
	CZipFile::Reset(); // 539
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00168025> ../public/zip/zip_utils.cpp:539
void CZipFile::Reset()
{
} /* size: 0 */

// <00167F7F> ../public/zip/zip_utils.cpp:566
// function calls: 2
void ZipFileLessFunc(const CZipEntry& src1, const CZipEntry& src2)
{
	CUtlSymbol::operator UtlSymId_t(); // 568
	CUtlSymbol::operator UtlSymId_t(); // 568
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00167EED> ../public/zip/zip_utils.cpp:571
void ZipFileLessFunc_CaselessSort(const CZipEntry& src1, const CZipEntry& src2)
{
} /* size: 0 */

// <00169834> ../public/zip/zip_utils.cpp:576
// function call: 1
void CZipFile::ForceAlignment(bool bAligned, bool bCompatibleFormat, unsigned int alignment)
{
	IsPowerOfTwo(uint32 value); // 595
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00167EAA> ../public/zip/zip_utils.cpp:576
void CZipFile::ForceAlignment(bool bAligned, bool bCompatibleFormat, unsigned int alignment)
{
} /* size: 0 */

// <001698B0> ../public/zip/zip_utils.cpp:601
void CZipFile::GetAlignment()
{
} /* size: 0 */

// <001698DA> ../public/zip/zip_utils.cpp:611
// function call: 1
void CZipFile::SetBigEndian(bool bigEndian)
{
	CByteswap::SetTargetBigEndian(
				bool bigEndian);  // 613
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00167E65> ../public/zip/zip_utils.cpp:611
void CZipFile::SetBigEndian(bool bigEndian)
{
} /* size: 0 */

// <00167E3C> ../public/zip/zip_utils.cpp:616
void CZipFile::ActivateByteSwapping(bool bActivate)
{
} /* size: 0 */

// <001672D4> ../public/zip/zip_utils.cpp:621
// variables: 22
// function calls: 27
void CZipFile::GetCompressionMethodFromBuffer(void* buffer, int bufferlength, short unsigned int* pMethod)
{
	const char   __FUNCTION__; // 50732
	CUtlBuffer buf; // 630
	unsigned int fileLen; // 638
	ZIP_EndOfCentralDirRecord rec; // 643
	bool bFoundEndOfCentralDirRecord; // 645
	unsigned int offset; // 646
	int numzipfiles; // 678
	int i; // 688
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 623
	}
	{
		unsigned int startOffset; // 650
		{
			char commentString; // 661
			int commentLength; // 662
		}
		{
			int i; // 664
			CByteswap::IsSwappingBytes(); // 644
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 646
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 656
			CUtlBuffer::BGetObject<ZIP_EndOfCentralDirRecord>(
								ZIP_EndOfCentralDirRecord* dest);  // 640
			{
				unsigned int i; // 37
			}
			CByteswap::SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(
										ZIP_EndOfCentralDirRecord* pOutputBuffer,
										void* pBaseData,
										unsigned int objectCount);  // 650
			CUtlBuffer::BGetObject<ZIP_EndOfCentralDirRecord>(
								ZIP_EndOfCentralDirRecord* dest);  // 666
		}
		CUtlBuffer::GetObjects<ZIP_EndOfCentralDirRecord>(
							ZIP_EndOfCentralDirRecord* dest,
							int count);  // 653
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
	}
	{
		ZIP_FileHeader zipFileHeader; // 691
		char tmpString; // 700
		int32 fileNameLength; // 701
		int nextOffset; // 706
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 693
		}
		{
			int i; // 664
			CByteswap::IsSwappingBytes(); // 644
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 646
			{
				unsigned int i; // 37
			}
			CByteswap::SwapFieldsToTargetEndian<ZIP_FileHeader>(
								ZIP_FileHeader* pOutputBuffer,
								void* pBaseData,
								unsigned int objectCount);  // 650
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 656
			CUtlBuffer::BGetObject<ZIP_FileHeader>(
							ZIP_FileHeader* dest);  // 640
			CUtlBuffer::BGetObject<ZIP_FileHeader>(
							ZIP_FileHeader* dest);  // 666
		}
		CUtlBuffer::GetObjects<ZIP_FileHeader>(
						ZIP_FileHeader* dest,
						int count);  // 692
		Min<int>(const int& val1,
			const int& val2);  // 701
	}
	CByteswap::IsSwappingBytes(); // 633
	CUtlBuffer::TellGet(); // 638
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 719
} /* size: 0, variables: 8, inline expansions: 8 (0 bytes) */

// <001664C0> ../public/zip/zip_utils.cpp:726
// variables: 25
// function calls: 35
void CZipFile::ParseFromBuffer(void* buffer, int bufferlength)
{
	CUtlBuffer buf; // 732
	unsigned int fileLen; // 740
	ZIP_EndOfCentralDirRecord rec; // 745
	bool bFoundEndOfCentralDirRecord; // 747
	unsigned int offset; // 748
	const char   __FUNCTION__; // 47800
	int numzipfiles; // 780
	TmpFileInfo_t* newfiles; // 790
	int i; // 794
	{
		unsigned int startOffset; // 752
		{
			char commentString; // 763
			int commentLength; // 764
		}
		{
			int i; // 664
			CByteswap::IsSwappingBytes(); // 644
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 646
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 656
			CUtlBuffer::BGetObject<ZIP_EndOfCentralDirRecord>(
								ZIP_EndOfCentralDirRecord* dest);  // 640
			{
				unsigned int i; // 37
			}
			CByteswap::SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(
										ZIP_EndOfCentralDirRecord* pOutputBuffer,
										void* pBaseData,
										unsigned int objectCount);  // 650
			CUtlBuffer::BGetObject<ZIP_EndOfCentralDirRecord>(
								ZIP_EndOfCentralDirRecord* dest);  // 666
		}
		CUtlBuffer::GetObjects<ZIP_EndOfCentralDirRecord>(
							ZIP_EndOfCentralDirRecord* dest,
							int count);  // 755
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 777
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 791
	}
	{
		ZIP_FileHeader zipFileHeader; // 797
		char tmpString; // 802
		int fileNameLength; // 803
		int nextOffset; // 816
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 799
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 800
		}
		{
			int i; // 664
			CByteswap::IsSwappingBytes(); // 644
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 646
			{
				unsigned int i; // 37
			}
			CByteswap::SwapFieldsToTargetEndian<ZIP_FileHeader>(
								ZIP_FileHeader* pOutputBuffer,
								void* pBaseData,
								unsigned int objectCount);  // 650
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 656
			CUtlBuffer::BGetObject<ZIP_FileHeader>(
							ZIP_FileHeader* dest);  // 640
			CUtlBuffer::BGetObject<ZIP_FileHeader>(
							ZIP_FileHeader* dest);  // 666
		}
		CUtlBuffer::GetObjects<ZIP_FileHeader>(
						ZIP_FileHeader* dest,
						int count);  // 798
		Min<int>(const int& val1,
			const int& val2);  // 803
		CUtlSymbol::operator=(
				const CUtlSymbol& src);  // 809
	}
	{
		CZipEntry e; // 831
		CUtlSymbol::CUtlSymbol(); // 455
		CUtlSymbol::operator=(
				const CUtlSymbol& src);  // 457
		CZipEntry::CZipEntry(); // 831
		CUtlSymbol::operator=(
				const CUtlSymbol& src);  // 832
		CZipEntry::~CZipEntry(); // 851
	}
	CByteswap::IsSwappingBytes(); // 735
	CUtlBuffer::TellGet(); // 740
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 855
	CUtlSymbol::CUtlSymbol(); // 397
	TmpFileInfo_t(const TmpFileInfo_t* this); // 790
} /* size: 0, variables: 9, inline expansions: 10 (0 bytes) */

// <0016581E> ../public/zip/zip_utils.cpp:860
// variables: 18
// function calls: 33
void CZipFile::ParseFromDisk(const char* pFilename)
{
	HANDLE hFile; // 870
	unsigned int fileLen; // 878
	ZIP_EndOfCentralDirRecord rec; // 892
	unsigned int offset; // 893
	int numZipFiles; // 925
	CUtlBuffer zipDirBuff; // 940
	{
		unsigned int startOffset; // 897
		{
			char commentString; // 909
			int commentLength; // 910
			FileRead(HANDLE hFile,
				void* pBuffer,
				unsigned int size);  // 911
		}
		FileSeek(HANDLE hFile,
			unsigned int distance,
			DWORD MoveMethod);  // 899
		FileRead(HANDLE hFile,
			void* pBuffer,
			unsigned int size);  // 901
		{
			unsigned int i; // 37
		}
		CByteswap::SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(
									ZIP_EndOfCentralDirRecord* pOutputBuffer,
									void* pBaseData,
									unsigned int objectCount);  // 47
		CByteswap::SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(
									ZIP_EndOfCentralDirRecord* pOutputBuffer,
									unsigned int objectCount);  // 902
	}
	{
		int i; // 946
		{
			ZIP_FileHeader zipFileHeader; // 948
			char fileName; // 962
			int32 fileNameLength; // 963
			CZipEntry e; // 969
			int nextOffset; // 979
			{
				int i; // 664
				{
					unsigned int i; // 37
				}
				CByteswap::SwapFieldsToTargetEndian<ZIP_FileHeader>(
									ZIP_FileHeader* pOutputBuffer,
									void* pBaseData,
									unsigned int objectCount);  // 650
				CByteswap::IsSwappingBytes(); // 644
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 624
				CUtlBuffer::PeekGet(
					int offset);  // 646
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 656
				CUtlBuffer::BGetObject<ZIP_FileHeader>(
								ZIP_FileHeader* dest);  // 640
				CUtlBuffer::BGetObject<ZIP_FileHeader>(
								ZIP_FileHeader* dest);  // 666
			}
			CUtlBuffer::GetObjects<ZIP_FileHeader>(
							ZIP_FileHeader* dest,
							int count);  // 949
			Min<int>(const int& val1,
				const int& val2);  // 963
			CUtlSymbol::CUtlSymbol(); // 455
			CUtlSymbol::operator=(
					const CUtlSymbol& src);  // 457
			CZipEntry::CZipEntry(); // 969
			CUtlSymbol::operator=(
					const CUtlSymbol& src);  // 970
			CZipEntry::~CZipEntry(); // 990
		}
	}
	FileSeek(HANDLE hFile,
		unsigned int distance,
		DWORD MoveMethod);  // 878
	FileSeek(HANDLE hFile,
		unsigned int distance,
		DWORD MoveMethod);  // 879
	FileSeek(HANDLE hFile,
		unsigned int distance,
		DWORD MoveMethod);  // 937
	CByteswap::IsSwappingBytes(); // 941
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 942
	FileRead(HANDLE hFile,
		void* pBuffer,
		unsigned int size);  // 942
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 993
} /* size: 0, variables: 6, inline expansions: 13 (0 bytes) */

// <001657C9> ../public/zip/zip_utils.cpp:995
// variables: 3
int GetLengthOfBinStringAsText(const char* pSrc, int srcSize)
{
	const char* pSrcScan; // 997
	const char* pSrcEnd; // 998
	int numChars; // 999
} /* size: 0, variables: 3 */

// <00164D43> ../public/zip/zip_utils.cpp:1018
// variables: 5
// function calls: 41
void ReadTextData(const char* pSrc, int nSrcSize, CUtlBuffer& buf)
{
	const char* pSrcEnd; // 1021
	{
		const char* pSrcScan; // 1022
		CUtlBuffer::IsText(); // 1253
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1256
		CUtlBuffer::WasLastCharacterCR(); // 1303
		{
			int i; // 1262
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1264
		}
		CUtlBuffer::PutTabs(); // 1305
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1308
		CUtlBuffer::PutChar(
			char c);  // 1028
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1256
		CUtlBuffer::WasLastCharacterCR(); // 1303
		{
			int i; // 1262
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1264
		}
		CUtlBuffer::PutTabs(); // 1305
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1308
		CUtlBuffer::PutChar(
			char c);  // 1034
	}
	CUtlBuffer::IsText(); // 1253
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1303
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1305
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1204
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1308
	CUtlBuffer::PutChar(
		char c);  // 1038
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <00164BE2> ../public/zip/zip_utils.cpp:1045
// variables: 7
void CopyTextData(char* pDst, const char* pSrc, int dstSize, int srcSize)
{
	const char* pSrcScan; // 1047
	const char* pSrcEnd; // 1048
	char* pDstScan; // 1049
	char* pDstEnd; // 1052
	const char   __FUNCTION__; // 38247
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1070
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1071
	}
} /* size: 0, variables: 5 */

// <001644C0> ../public/zip/zip_utils.cpp:1080
// variables: 5
// function calls: 17
void CZipFile::AddBufferToZip(const char* relativename, void* data, int length, bool bTextMode)
{
	char name; // 1083
	int dstLength; // 1087
	CZipEntry e; // 1094
	int index; // 1096
	{
		CZipEntry* update; // 1101
		CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::operator[](
				int i);  // 539
		CUtlRBTree<CZipFile::CZipEntry, int, bool (::Element(
			int i);  // 551
		CUtlRBTree<CZipFile::CZipEntry, int, bool (::operator[](
				int i);  // 1101
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1116
		FileTell(HANDLE hFile); // 1122
		FileWrite(HANDLE hFile,
				void* pBuffer,
				unsigned int size);  // 1123
	}
	strcpy(char* __dest,
		const char* __src);  // 124
	V_strcpy(char* dest,
		const char* src);  // 1084
	GetLengthOfBinStringAsText(const char* pSrc,
					int srcSize);  // 1090
	CUtlSymbol::CUtlSymbol(); // 455
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 457
	CZipEntry::CZipEntry(); // 1094
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1095
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1142
	FileTell(HANDLE hFile); // 1147
	FileWrite(HANDLE hFile,
			void* pBuffer,
			unsigned int size);  // 1148
	CZipEntry::~CZipEntry(); // 1160
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <00164109> ../public/zip/zip_utils.cpp:1166
// variables: 4
// function calls: 9
void CZipFile::ReadFileFromZip(const char* pRelativeName, bool bTextMode, CUtlBuffer& buf)
{
	char pName; // 1169
	CZipEntry e; // 1174
	int nIndex; // 1176
	CZipEntry* pEntry; // 1183
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1170
	CUtlSymbol::CUtlSymbol(); // 455
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 457
	CZipEntry::CZipEntry(); // 1174
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1175
	CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::operator[](
			int i);  // 539
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::Element(
		int i);  // 551
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::operator[](
			int i);  // 1183
	CZipEntry::~CZipEntry(); // 1196
} /* size: 0, variables: 4, inline expansions: 9 (0 bytes) */

// <00163C2C> ../public/zip/zip_utils.cpp:1201
// variables: 5
// function calls: 11
void CZipFile::ReadFileFromZip(HANDLE hZipFile, const char* pRelativeName, bool bTextMode, CUtlBuffer& buf)
{
	char pName; // 1204
	CZipEntry e; // 1209
	int nIndex; // 1211
	CZipEntry* pEntry; // 1218
	void* pData; // 1220
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1205
	CUtlSymbol::CUtlSymbol(); // 455
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 457
	CZipEntry::CZipEntry(); // 1209
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1210
	CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::operator[](
			int i);  // 539
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::Element(
		int i);  // 551
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::operator[](
			int i);  // 1218
	FileSeek(HANDLE hFile,
		unsigned int distance,
		DWORD MoveMethod);  // 1221
	FileRead(HANDLE hFile,
		void* pBuffer,
		unsigned int size);  // 1222
	CZipEntry::~CZipEntry(); // 1242
} /* size: 0, variables: 5, inline expansions: 11 (0 bytes) */

// <001639B7> ../public/zip/zip_utils.cpp:1248
// variables: 3
// function calls: 6
void CZipFile::FileExistsInZip(const char* pRelativeName)
{
	char pName; // 1251
	CZipEntry e; // 1256
	int nIndex; // 1258
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1252
	CUtlSymbol::CUtlSymbol(); // 455
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 457
	CZipEntry::CZipEntry(); // 1256
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1257
	CZipEntry::~CZipEntry(); // 1262
} /* size: 0, variables: 3, inline expansions: 6 (0 bytes) */

// <001637E3> ../public/zip/zip_utils.cpp:1268
// variables: 3
void CZipFile::AddFileToZip(const char* relativename, const char* fullpath)
{
	FILE* temp; // 1270
	int size; // 1276
	byte* buf; // 1278
} /* size: 0, variables: 3 */

// <0016347B> ../public/zip/zip_utils.cpp:1294
// variables: 3
// function calls: 10
void CZipFile::RemoveFileFromZip(const char* relativename)
{
	CZipEntry e; // 1296
	int index; // 1298
	{
		CZipEntry update; // 1302
		CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::operator[](
				int i);  // 539
		CUtlRBTree<CZipFile::CZipEntry, int, bool (::Element(
			int i);  // 551
		CUtlRBTree<CZipFile::CZipEntry, int, bool (::operator[](
				int i);  // 1302
		CUtlRBTree<CZipFile::CZipEntry, int, bool (::Remove(
			const CZipEntry& search);  // 1303
		CZipEntry::~CZipEntry(); // 1304
	}
	CUtlSymbol::CUtlSymbol(); // 455
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 457
	CZipEntry::CZipEntry(); // 1296
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1297
	CZipEntry::~CZipEntry(); // 1305
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <0016994F> ../public/zip/zip_utils.cpp:1312
// variable: 1
void CZipFile::CalculatePadding(unsigned int filenameLen, unsigned int pos)
{
	unsigned int headerSize; // 1319
} /* size: 0, variables: 1 */

// <0016999A> ../public/zip/zip_utils.cpp:1327
// variables: 2
// function calls: 2
void CZipFile::MakeXZipCommentString(char* pCommentString)
{
	char tempString; // 1329
	char cFormat; // 1333
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1331
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1351
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <001633F5> ../public/zip/zip_utils.cpp:1327
// variables: 2
void CZipFile::MakeXZipCommentString(char* pCommentString)
{
	char tempString; // 1329
	char cFormat; // 1333
} /* size: 0, variables: 2 */

// <00169ABC> ../public/zip/zip_utils.cpp:1361
// function calls: 3
void CZipFile::ParseXZipCommentString(const char* pCommentString)
{
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 1363
	IsPowerOfTwo(uint32 value); // 1381
	CZipFile::ParseXZipCommentString(
				const char* pCommentString);  // 1361
} /* size: 0, inline expansions: 3 (0 bytes) */

// <001633CC> ../public/zip/zip_utils.cpp:1361
void CZipFile::ParseXZipCommentString(const char* pCommentString)
{
} /* size: 0 */

// <00163020> ../public/zip/zip_utils.cpp:1393
// variables: 5
// function calls: 10
void CZipFile::CalculateSize()
{
	unsigned int size; // 1395
	unsigned int dirHeaders; // 1396
	{
		int i; // 1397
		{
			CZipEntry* e; // 1399
			{
				unsigned int nextBoundary; // 1415
			}
			CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::operator[](
					int i);  // 539
			CUtlRBTree<CZipFile::CZipEntry, int, bool (::Element(
				int i);  // 551
			CUtlRBTree<CZipFile::CZipEntry, int, bool (::operator[](
					int i);  // 1399
			V_strlen(const char* str); // 1406
			V_strlen(const char* str); // 1409
		}
		CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::operator[](
				int i);  // 611
		CUtlRBTree<CZipFile::CZipEntry, int, bool (::LeftChild(
				int i);  // 1329
		CUtlRBTree<CZipFile::CZipEntry, int, bool (::FirstInorder()(const CZipFile::CZipEntry&, const CZipFile::CZipEntry&), CUtlMe this); // 1397
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1331
	CZipFile::MakeXZipCommentString(
				char* pCommentString);  // 1430
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <00162E36> ../public/zip/zip_utils.cpp:1438
// variables: 2
// function calls: 6
void CZipFile::PrintDirectory()
{
	{
		int i; // 1440
		{
			CZipEntry* e; // 1442
			CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::operator[](
					int i);  // 539
			CUtlRBTree<CZipFile::CZipEntry, int, bool (::Element(
				int i);  // 551
			CUtlRBTree<CZipFile::CZipEntry, int, bool (::operator[](
					int i);  // 1442
		}
		CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::operator[](
				int i);  // 611
		CUtlRBTree<CZipFile::CZipEntry, int, bool (::LeftChild(
				int i);  // 1329
		CUtlRBTree<CZipFile::CZipEntry, int, bool (::FirstInorder()(const CZipFile::CZipEntry&, const CZipFile::CZipEntry&), CUtlMe this); // 1440
	}
} /* size: 0 */

// <00162B7F> ../public/zip/zip_utils.cpp:1451
// variable: 1
// function calls: 7
void CZipFile::GetNextFilename(int id, char* pBuffer, int bufferSize, int& fileSize)
{
	CZipEntry* e; // 1467
	CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::operator[](
			int i);  // 539
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::Element(
		int i);  // 551
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::operator[](
			int i);  // 1467
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 1469
	CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::operator[](
			int i);  // 611
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::LeftChild(
			int i);  // 1329
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::FirstInorder()(const CZipFile::CZipEntry&, const CZipFile::CZipEntry&), CUtlMe this); // 1455
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <0016A011> ../public/zip/zip_utils.cpp:1478
// variable: 1
// function call: 1
void CZipFile::SaveToDisk(FILE* fout)
{
	CFileStream stream; // 1480
	CFileStream::CFileStream(
			FILE* fout);  // 1480
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00162B49> ../public/zip/zip_utils.cpp:1478
// variable: 1
void CZipFile::SaveToDisk(FILE* fout)
{
	CFileStream stream; // 1480
} /* size: 0, variables: 1 */

// <0016A09E> ../public/zip/zip_utils.cpp:1484
// variable: 1
// function call: 1
void CZipFile::SaveToDisk(HANDLE hOutFile)
{
	CFileStream stream; // 1486
	CFileStream::CFileStream(
			HANDLE hOutFile);  // 1486
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00162B13> ../public/zip/zip_utils.cpp:1484
// variable: 1
void CZipFile::SaveToDisk(HANDLE hOutFile)
{
	CFileStream stream; // 1486
} /* size: 0, variables: 1 */

// <0016A12B> ../public/zip/zip_utils.cpp:1493
// variable: 1
// function call: 1
void CZipFile::SaveToBuffer(CUtlBuffer& buf)
{
	CBufferStream stream; // 1495
	CBufferStream::CBufferStream(
			CUtlBuffer& buff);  // 1495
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00162ADD> ../public/zip/zip_utils.cpp:1493
// variable: 1
void CZipFile::SaveToBuffer(CUtlBuffer& buf)
{
	CBufferStream stream; // 1495
} /* size: 0, variables: 1 */

// <00161C5C> ../public/zip/zip_utils.cpp:1502
// variables: 27
// function calls: 32
void CZipFile::SaveDirectory(IWriteStream& stream)
{
	void* pPaddingBuffer; // 1504
	bool bDataWritten; // 1521
	int i; // 1522
	const char   __FUNCTION__; // 4803
	unsigned int centralDirStart; // 1595
	uint16 realNumFiles; // 1608
	unsigned int centralDirEnd; // 1656
	ZIP_EndOfCentralDirRecord rec; // 1669
	char commentString; // 1678
	int commentLength; // 1679
	{
		CZipEntry* e; // 1525
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1526
		}
		{
			ZIP_LocalFileHeader hdr; // 1544
			const char* pFilename; // 1557
			int extraFieldLength; // 1562
			CRC32_Init(CRC32_t* pulCRC); // 1552
			CRC32_Final(CRC32_t* pulCRC); // 1554
			V_strlen(const char* str); // 1560
			CZipFile::CalculatePadding(
					unsigned int filenameLen,
					unsigned int pos);  // 1561
			{
				unsigned int i; // 37
			}
			CByteswap::SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(
									ZIP_LocalFileHeader* pOutputBuffer,
									void* pBaseData,
									unsigned int objectCount);  // 47
			CByteswap::SwapFieldsToTargetEndian<ZIP_LocalFileHeader>(
									ZIP_LocalFileHeader* pOutputBuffer,
									unsigned int objectCount);  // 1565
			V_strlen(const char* str); // 1567
		}
		CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::operator[](
				int i);  // 539
		CUtlRBTree<CZipFile::CZipEntry, int, bool (::Element(
			int i);  // 551
		CUtlRBTree<CZipFile::CZipEntry, int, bool (::operator[](
				int i);  // 1525
		FileSeek(HANDLE hFile,
			unsigned int distance,
			DWORD MoveMethod);  // 1537
		FileRead(HANDLE hFile,
			void* pBuffer,
			unsigned int size);  // 1538
	}
	{
		unsigned int newDirStart; // 1599
		int padLength; // 1600
		AlignValue<unsigned int>(unsigned int val,
					uintp alignment);  // 1599
	}
	{
		CZipEntry* e; // 1611
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1612
		}
		{
			ZIP_FileHeader hdr; // 1616
			int extraFieldLength; // 1635
			{
				unsigned int i; // 37
			}
			CByteswap::SwapFieldsToTargetEndian<ZIP_FileHeader>(
								ZIP_FileHeader* pOutputBuffer,
								void* pBaseData,
								unsigned int objectCount);  // 47
			CByteswap::SwapFieldsToTargetEndian<ZIP_FileHeader>(
								ZIP_FileHeader* pOutputBuffer,
								unsigned int objectCount);  // 1638
			V_strlen(const char* str); // 1628
			CZipFile::CalculatePadding(
					unsigned int filenameLen,
					unsigned int pos);  // 1629
			V_strlen(const char* str); // 1640
		}
		CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::operator[](
				int i);  // 539
		CUtlRBTree<CZipFile::CZipEntry, int, bool (::Element(
			int i);  // 551
		CUtlRBTree<CZipFile::CZipEntry, int, bool (::operator[](
				int i);  // 1611
	}
	{
		unsigned int newDirEnd; // 1660
		int padLength; // 1661
		AlignValue<unsigned int>(unsigned int val,
					uintp alignment);  // 1660
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1680
	}
	CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::operator[](
			int i);  // 611
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::LeftChild(
			int i);  // 1329
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::FirstInorder()(const CZipFile::CZipEntry&, const CZipFile::CZipEntry&), CUtlMe this); // 1523
	FileSeek(HANDLE hFile,
		unsigned int distance,
		DWORD MoveMethod);  // 1592
	CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::operator[](
			int i);  // 611
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::LeftChild(
			int i);  // 1329
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::FirstInorder()(const CZipFile::CZipEntry&, const CZipFile::CZipEntry&), CUtlMe this); // 1609
	{
		unsigned int i; // 37
	}
	CByteswap::SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(
								ZIP_EndOfCentralDirRecord* pOutputBuffer,
								void* pBaseData,
								unsigned int objectCount);  // 47
	CByteswap::SwapFieldsToTargetEndian<ZIP_EndOfCentralDirRecord>(
								ZIP_EndOfCentralDirRecord* pOutputBuffer,
								unsigned int objectCount);  // 1684
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1509
} /* size: 0, variables: 10, inline expansions: 10 (0 bytes) */

// <00156C12> ../public/zip/zip_utils.cpp:1694
// member functions: 46
// member variables: 2
// vtable entries: 20
// class size: 112
class CZip : public IZip {
public:
	/* class IZip <ancestor>; */ /* 0 8 */
	void CZip(CZip* , const CZip& );
	/* ../public/zip/zip_utils.cpp:1773 */
	void CZip(CZip* , const char* , bool);
	/* ../public/zip/zip_utils.cpp:1778 */
	virtual void ~CZip(CZip* );
	/* ../public/zip/zip_utils.cpp:1832 */
	virtual void Reset(CZip* );
	/* ../public/zip/zip_utils.cpp:1797 */
	virtual bool AddFileToZip(CZip* , const char* , const char* );
	/* ../public/zip/zip_utils.cpp:1802 */
	virtual bool FileExistsInZip(CZip* , const char* );
	/* ../public/zip/zip_utils.cpp:1807 */
	virtual bool ReadFileFromZip(CZip* , const char* , bool, CUtlBuffer& );
	/* ../public/zip/zip_utils.cpp:1812 */
	virtual bool ReadFileFromZip(CZip* , HANDLE, const char* , bool, CUtlBuffer& );
	/* ../public/zip/zip_utils.cpp:1817 */
	virtual void RemoveFileFromZip(CZip* , const char* );
	/* ../public/zip/zip_utils.cpp:1822 */
	virtual int GetNextFilename(CZip* , int, char* , int, int& );
	/* ../public/zip/zip_utils.cpp:1827 */
	virtual void PrintDirectory(CZip* );
	/* ../public/zip/zip_utils.cpp:1837 */
	virtual unsigned int EstimateSize(CZip* );
	/* ../public/zip/zip_utils.cpp:1843 */
	virtual void AddBufferToZip(CZip* , const char* , void* , int, bool);
	/* ../public/zip/zip_utils.cpp:1848 */
	virtual void SaveToBuffer(CZip* , CUtlBuffer& );
	/* ../public/zip/zip_utils.cpp:1853 */
	virtual void SaveToDisk(CZip* , FILE* );
	/* ../public/zip/zip_utils.cpp:1858 */
	virtual void SaveToDisk(CZip* , HANDLE);
	/* ../public/zip/zip_utils.cpp:1863 */
	virtual void ParseFromBuffer(CZip* , void* , int);
	/* ../public/zip/zip_utils.cpp:1869 */
	virtual HANDLE ParseFromDisk(CZip* , const char* );
	/* ../public/zip/zip_utils.cpp:1875 */
	virtual void ForceAlignment(CZip* , bool, bool, unsigned int);
	/* ../public/zip/zip_utils.cpp:1782 */
	virtual void SetBigEndian(CZip* , bool);
	/* ../public/zip/zip_utils.cpp:1787 */
	virtual void ActivateByteSwapping(CZip* , bool);
	/* ../public/zip/zip_utils.cpp:1792 */
	virtual bool GetCompressionMethodFromBuffer(CZip* , void* , int, short unsigned int* );
	/* ../public/zip/zip_utils.cpp:1880 */
	virtual unsigned int GetAlignment(CZip* );
private:
	CZipFile m_ZipFile; /* 8 104 */
	void CZip(class CZip *, const class CZip  &); /* linkage=_ZN4CZipC4ERKS_ */
	void CZip(class CZip *, const char  *, bool); /* linkage=_ZN4CZipC4EPKcb */
	virtual void ~CZip(class CZip *); /* linkage=_ZN4CZipD4Ev */
	virtual void Reset(class CZip *); /* linkage=_ZN4CZip5ResetEv */
	virtual bool AddFileToZip(class CZip *, const char  *, const char  *); /* linkage=_ZN4CZip12AddFileToZipEPKcS1_ */
	virtual bool FileExistsInZip(class CZip *, const char  *); /* linkage=_ZN4CZip15FileExistsInZipEPKc */
	virtual bool ReadFileFromZip(class CZip *, const char  *, bool, class CUtlBuffer &); /* linkage=_ZN4CZip15ReadFileFromZipEPKcbR10CUtlBuffer */
	virtual bool ReadFileFromZip(class CZip *, HANDLE, const char  *, bool, class CUtlBuffer &); /* linkage=_ZN4CZip15ReadFileFromZipEPvPKcbR10CUtlBuffer */
	virtual void RemoveFileFromZip(class CZip *, const char  *); /* linkage=_ZN4CZip17RemoveFileFromZipEPKc */
	virtual int GetNextFilename(class CZip *, int, char *, int, int &); /* linkage=_ZN4CZip15GetNextFilenameEiPciRi */
	virtual void PrintDirectory(class CZip *); /* linkage=_ZN4CZip14PrintDirectoryEv */
	virtual unsigned int EstimateSize(class CZip *); /* linkage=_ZN4CZip12EstimateSizeEv */
	virtual void AddBufferToZip(class CZip *, const char  *, void *, int, bool); /* linkage=_ZN4CZip14AddBufferToZipEPKcPvib */
	virtual void SaveToBuffer(class CZip *, class CUtlBuffer &); /* linkage=_ZN4CZip12SaveToBufferER10CUtlBuffer */
	virtual void SaveToDisk(class CZip *, FILE *); /* linkage=_ZN4CZip10SaveToDiskEP8_IO_FILE */
	virtual void SaveToDisk(class CZip *, HANDLE); /* linkage=_ZN4CZip10SaveToDiskEPv */
	virtual void ParseFromBuffer(class CZip *, void *, int); /* linkage=_ZN4CZip15ParseFromBufferEPvi */
	virtual HANDLE ParseFromDisk(class CZip *, const char  *); /* linkage=_ZN4CZip13ParseFromDiskEPKc */
	virtual void ForceAlignment(class CZip *, bool, bool, unsigned int); /* linkage=_ZN4CZip14ForceAlignmentEbbj */
	virtual void SetBigEndian(class CZip *, bool); /* linkage=_ZN4CZip12SetBigEndianEb */
	virtual void ActivateByteSwapping(class CZip *, bool); /* linkage=_ZN4CZip20ActivateByteSwappingEb */
	virtual bool GetCompressionMethodFromBuffer(class CZip *, void *, int, short unsigned int *); /* linkage=_ZN4CZip30GetCompressionMethodFromBufferEPviPt */
	virtual unsigned int GetAlignment(class CZip *); /* linkage=_ZN4CZip12GetAlignmentEv */
};

// <001617A1> ../public/zip/zip_utils.cpp:1758
// variable: 1
// function calls: 15
void CreateZip(const char* pDiskCacheWritePath, bool bSortByName)
{
	CZip* pZip; // 1760
	IZip::IZip(); // 1773
	CZip::CZip(
		const char* pDiskCacheWritePath,
		bool bSortByName);  // 1760
	CUtlMemory<UtlLinkedListElem_t<CZip::IsIdxValid(
			short unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<CZip::operator[](
			short unsigned int i);  // 594
	CUtlLinkedList<CZip::IsValidIndex(
			short unsigned int i);  // 583
	CUtlMemory<UtlLinkedListElem_t<CZip::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 591
	CUtlLinkedList<CZip::IsValidIndex(
			short unsigned int i);  // 977
	{
	}
	CUtlMemory<UtlLinkedListElem_t<CZip::operator[](
			short unsigned int i);  // 367
	CUtlLinkedList<CZip::InternalElement(
			short unsigned int i);  // 982
	CUtlMemory<UtlLinkedListElem_t<CZip::operator[](
			short unsigned int i);  // 367
	CUtlLinkedList<CZip::InternalElement(
			short unsigned int i);  // 1011
	CUtlLinkedList<CZip::LinkBefore(
			short unsigned int before,
			short unsigned int elem);  // 822
	CopyConstruct<CZip*>(CZip** pMemory,
				CZip* const& src);  // 825
	CUtlLinkedList<CZip::InsertBefore(
			short unsigned int before,
			CZip* const& src);  // 856
	CUtlLinkedList<CZip::AddToTail(
			CZip* const& src);  // 1761
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <00161346> ../public/zip/zip_utils.cpp:1766
// variable: 1
// function calls: 18
void ReleaseZip(IZip* pZip)
{
	{
		short unsigned int i; // 867
		CUtlLinkedList<CZip::Head(); // 867
		CUtlMemory<UtlLinkedListElem_t<CZip::operator[](
				short unsigned int i);  // 488
		CUtlLinkedList<CZip::Element(
			short unsigned int i);  // 869
		CUtlLinkedList<CZip::Next(
			short unsigned int i);  // 867
	}
	CUtlLinkedList<CZip::Find(
		CZip* const& src);  // 879
	CUtlMemory<UtlLinkedListElem_t<CZip::IsIdxValid(
			short unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<CZip::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 591
	CUtlMemory<UtlLinkedListElem_t<CZip::operator[](
			short unsigned int i);  // 594
	CUtlLinkedList<CZip::IsValidIndex(
			short unsigned int i);  // 583
	CUtlLinkedList<CZip::IsValidIndex(
			short unsigned int i);  // 749
	{
	}
	CUtlMemory<UtlLinkedListElem_t<CZip::operator[](
			short unsigned int i);  // 367
	CUtlLinkedList<CZip::InternalElement(
			short unsigned int i);  // 752
	Destruct<CZip*>(CZip** pMemory); // 753
	CUtlLinkedList<CZip::Free(
		short unsigned int elem);  // 907
	CUtlLinkedList<CZip::Remove(
		short unsigned int elem);  // 886
	CUtlLinkedList<CZip::FindAndRemove(
			CZip* const& src);  // 1768
	CZip::~CZip(); // 1780
	CZip::~CZip(); // 1770
} /* size: 0, inline expansions: 14 (0 bytes) */

// <00160E77> ../public/zip/zip_utils.cpp:1773
// function calls: 20
void CZip::CZip(const char* pDiskCacheWritePath, bool bSortByName)
{
	IZip::IZip(); // 1773
	IsMachineBigEndian(void); // 21
	CByteswap::SetTargetBigEndian(
				bool bigEndian);  // 21
	CByteswap::CByteswap(); // 506
	CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CZipFile::CZipEntry, int>, int>::InvalidIterator(); // 489
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::ResetDbgInfo()(const CZipFile::CZipEntry&, const CZipFile::CZipEntry&), CUtlMemory<U this); // 491
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 506
	CUtlString::CUtlString(); // 506
	CUtlString::CUtlString(); // 506
	CUtlString::operator=(
			const char* src);  // 514
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::Count()(const CZipFile::CZipEntry&, const CZipFile::CZipEntry&), CUtlMe this); // 1636
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::SetLessFunc(
			const LessFunc_t& func);  // 519
	CUtlRBTree<CZipFile::CZipEntry, int, bool (::SetLessFunc(
			const LessFunc_t& func);  // 523
	CZipFile::CZipFile(
		const char* pDiskCacheWritePath,
		bool bSortByName);  // 1773
} /* size: 0, inline expansions: 20 (0 bytes) */

// <00160E44> ../public/zip/zip_utils.cpp:1773
void CZip::CZip(const char* pDiskCacheWritePath, bool bSortByName)
{
} /* size: 0 */

// <00160DFB> ../public/zip/zip_utils.cpp:1778
void CZip::~CZip()
{
} /* size: 0 */

// <00160D72> ../public/zip/zip_utils.cpp:1778
// function call: 1
void CZip::~CZip()
{
	CZip::~CZip(); // 1780
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00160C9A> ../public/zip/zip_utils.cpp:1782
// function calls: 2
void CZip::SetBigEndian(bool bigEndian)
{
	CByteswap::SetTargetBigEndian(
				bool bigEndian);  // 613
	CZipFile::SetBigEndian(
			bool bigEndian);  // 1784
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00160C74> ../public/zip/zip_utils.cpp:1787
void CZip::ActivateByteSwapping(bool bActivate)
{
} /* size: 0 */

// <00160BD4> ../public/zip/zip_utils.cpp:1792
void CZip::GetCompressionMethodFromBuffer(void* buffer, int bufferlength, short unsigned int* pMethod)
{
} /* size: 0 */

// <00160B50> ../public/zip/zip_utils.cpp:1797
void CZip::AddFileToZip(const char* relativename, const char* fullpath)
{
} /* size: 0 */

// <00160AE8> ../public/zip/zip_utils.cpp:1802
void CZip::FileExistsInZip(const char* pRelativeName)
{
} /* size: 0 */

// <00160A45> ../public/zip/zip_utils.cpp:1807
void CZip::ReadFileFromZip(const char* pRelativeName, bool bTextMode, CUtlBuffer& buf)
{
} /* size: 0 */

// <00160986> ../public/zip/zip_utils.cpp:1812
void CZip::ReadFileFromZip(HANDLE hZipFile, const char* pRelativeName, bool bTextMode, CUtlBuffer& buf)
{
} /* size: 0 */

// <0016091E> ../public/zip/zip_utils.cpp:1817
void CZip::RemoveFileFromZip(const char* relativename)
{
} /* size: 0 */

// <0016085B> ../public/zip/zip_utils.cpp:1822
void CZip::GetNextFilename(int id, char* pBuffer, int bufferSize, int& fileSize)
{
} /* size: 0 */

// <0016080F> ../public/zip/zip_utils.cpp:1827
void CZip::PrintDirectory()
{
} /* size: 0 */

// <001607C3> ../public/zip/zip_utils.cpp:1832
void CZip::Reset()
{
} /* size: 0 */

// <00160777> ../public/zip/zip_utils.cpp:1837
void CZip::EstimateSize()
{
} /* size: 0 */

// <001606B8> ../public/zip/zip_utils.cpp:1843
void CZip::AddBufferToZip(const char* relativename, void* data, int length, bool bTextMode)
{
} /* size: 0 */

// <00160604> ../public/zip/zip_utils.cpp:1848
// function calls: 2
void CZip::SaveToBuffer(CUtlBuffer& outbuf)
{
	CBufferStream::CBufferStream(
			CUtlBuffer& buff);  // 1495
	CZipFile::SaveToBuffer(
			CUtlBuffer& buf);  // 1850
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00160550> ../public/zip/zip_utils.cpp:1853
// function calls: 2
void CZip::SaveToDisk(FILE* fout)
{
	CFileStream::CFileStream(
			FILE* fout);  // 1480
	CZipFile::SaveToDisk(
			FILE* fout);  // 1855
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00160490> ../public/zip/zip_utils.cpp:1858
// function calls: 2
void CZip::SaveToDisk(HANDLE hOutFile)
{
	CFileStream::CFileStream(
			HANDLE hOutFile);  // 1486
	CZipFile::SaveToDisk(
			HANDLE hOutFile);  // 1860
} /* size: 0, inline expansions: 2 (0 bytes) */

// <001603F2> ../public/zip/zip_utils.cpp:1863
void CZip::ParseFromBuffer(void* buffer, int bufferlength)
{
} /* size: 0 */

// <00160371> ../public/zip/zip_utils.cpp:1869
void CZip::ParseFromDisk(const char* pFilename)
{
} /* size: 0 */

// <00160299> ../public/zip/zip_utils.cpp:1875
// function calls: 2
void CZip::ForceAlignment(bool aligned, bool bCompatibleFormat, unsigned int alignmentSize)
{
	IsPowerOfTwo(uint32 value); // 595
	CZipFile::ForceAlignment(
			bool bAligned,
			bool bCompatibleFormat,
			unsigned int alignment);  // 1877
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0016023A> ../public/zip/zip_utils.cpp:1880
// function call: 1
void CZip::GetAlignment()
{
	CZipFile::GetAlignment(); // 1882
} /* size: 0, inline expansions: 1 (0 bytes) */

