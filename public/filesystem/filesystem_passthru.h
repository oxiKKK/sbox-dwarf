
//
// public/filesystem/filesystem_passthru.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 130
//	classes: 4
//

// <001278A7> ../public/filesystem/filesystem_passthru.h:20
// member functions: 50
// member variables: 2
// vtable entries: 20
// class size: 24
class CInternalFileSystemPassThru<IFileSystem> : public IFileSystem {
public:
	/* class IFileSystem <ancestor>; */ /* 0 16 */
	void ~CInternalFileSystemPassThru(CInternalFileSystemPassThru<IFileSystem>* );
	void CInternalFileSystemPassThru(CInternalFileSystemPassThru<IFileSystem>* , CInternalFileSystemPassThru<IFileSystem>& );
	void CInternalFileSystemPassThru(CInternalFileSystemPassThru<IFileSystem>* , const CInternalFileSystemPassThru<IFileSystem>& );
	/* ../public/filesystem/filesystem_passthru.h:23 */
	void CInternalFileSystemPassThru(CInternalFileSystemPassThru<IFileSystem>* );
	/* ../public/filesystem/filesystem_passthru.h:27 */
	void InitPassThru(CInternalFileSystemPassThru<IFileSystem>* , IBaseFileSystem* );
	/* ../public/filesystem/filesystem_passthru.h:31 */
	virtual int Read(CInternalFileSystemPassThru<IFileSystem>* , void* , int, FileHandle_t);
	/* ../public/filesystem/filesystem_passthru.h:32 */
	virtual int Write(CInternalFileSystemPassThru<IFileSystem>* , const void* , int, FileHandle_t);
	/* ../public/filesystem/filesystem_passthru.h:33 */
	virtual FileHandle_t Open(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:34 */
	virtual void Close(CInternalFileSystemPassThru<IFileSystem>* , FileHandle_t);
	/* ../public/filesystem/filesystem_passthru.h:35 */
	virtual void Seek(CInternalFileSystemPassThru<IFileSystem>* , FileHandle_t, int64, FileSystemSeek_t);
	/* ../public/filesystem/filesystem_passthru.h:36 */
	virtual int64 Tell(CInternalFileSystemPassThru<IFileSystem>* , FileHandle_t);
	/* ../public/filesystem/filesystem_passthru.h:37 */
	virtual int64 Size(CInternalFileSystemPassThru<IFileSystem>* , FileHandle_t);
	/* ../public/filesystem/filesystem_passthru.h:38 */
	virtual int64 Size(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:39 */
	virtual void Flush(CInternalFileSystemPassThru<IFileSystem>* , FileHandle_t);
	/* ../public/filesystem/filesystem_passthru.h:40 */
	virtual bool Precache(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:41 */
	virtual bool FileExists(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:42 */
	virtual bool IsFileWritable(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:43 */
	virtual bool SetFileWritable(CInternalFileSystemPassThru<IFileSystem>* , const char* , bool, const char* );
	/* ../public/filesystem/filesystem_passthru.h:44 */
	virtual int64 GetFileTime(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:45 */
	virtual bool ReadFile(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* , CUtlBuffer& , int, int, FSAllocFunc_t);
	/* ../public/filesystem/filesystem_passthru.h:46 */
	virtual bool WriteFile(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* , const CUtlBuffer& );
	/* ../public/filesystem/filesystem_passthru.h:47 */
	virtual bool UnzipFile(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:48 */
	virtual bool CopyAFile(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* , const char* , bool);
	/* ../public/filesystem/filesystem_passthru.h:50 */
	virtual IMemoryMappedFile* CreateMemoryMap(CInternalFileSystemPassThru<IFileSystem>* , FileHandle_t, MemoryMappedFileFlags_t);
	/* ../public/filesystem/filesystem_passthru.h:51 */
	virtual IMemoryMappedFile* CreateMemoryMap(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* , MemoryMappedFileFlags_t);
protected:
	IBaseFileSystem * m_pBaseFileSystemPassThru; /* 16 8 */
	void ~CInternalFileSystemPassThru(class CInternalFileSystemPassThru<IFileSystem> *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemED4Ev */
	void CInternalFileSystemPassThru(class CInternalFileSystemPassThru<IFileSystem> *, class CInternalFileSystemPassThru<IFileSystem> &); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemEC4EOS1_ */
	void CInternalFileSystemPassThru(class CInternalFileSystemPassThru<IFileSystem> *, const class CInternalFileSystemPassThru<IFileSystem>  &); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemEC4ERKS1_ */
	void CInternalFileSystemPassThru(class CInternalFileSystemPassThru<IFileSystem> *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemEC4Ev */
	void InitPassThru(class CInternalFileSystemPassThru<IFileSystem> *, class IBaseFileSystem *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE12InitPassThruEP15IBaseFileSystem */
	virtual int Read(class CInternalFileSystemPassThru<IFileSystem> *, void *, int, FileHandle_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE4ReadEPviS2_ */
	virtual int Write(class CInternalFileSystemPassThru<IFileSystem> *, const void  *, int, FileHandle_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE5WriteEPKviPv */
	virtual FileHandle_t Open(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *, const char  *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE4OpenEPKcS3_S3_ */
	virtual void Close(class CInternalFileSystemPassThru<IFileSystem> *, FileHandle_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE5CloseEPv */
	virtual void Seek(class CInternalFileSystemPassThru<IFileSystem> *, FileHandle_t, int64, enum FileSystemSeek_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE4SeekEPvx16FileSystemSeek_t */
	virtual int64 Tell(class CInternalFileSystemPassThru<IFileSystem> *, FileHandle_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE4TellEPv */
	virtual int64 Size(class CInternalFileSystemPassThru<IFileSystem> *, FileHandle_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE4SizeEPv */
	virtual int64 Size(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE4SizeEPKcS3_ */
	virtual void Flush(class CInternalFileSystemPassThru<IFileSystem> *, FileHandle_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE5FlushEPv */
	virtual bool Precache(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE8PrecacheEPKcS3_ */
	virtual bool FileExists(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE10FileExistsEPKcS3_ */
	virtual bool IsFileWritable(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE14IsFileWritableEPKcS3_ */
	virtual bool SetFileWritable(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, bool, const char  *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE15SetFileWritableEPKcbS3_ */
	virtual int64 GetFileTime(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE11GetFileTimeEPKcS3_ */
	virtual bool ReadFile(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *, class CUtlBuffer &, int, int, FSAllocFunc_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE8ReadFileEPKcS3_R10CUtlBufferiiPFPvS3_jE */
	virtual bool WriteFile(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *, const class CUtlBuffer  &); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE9WriteFileEPKcS3_RK10CUtlBuffer */
	virtual bool UnzipFile(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *, const char  *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE9UnzipFileEPKcS3_S3_ */
	virtual bool CopyAFile(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *, const char  *, bool); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE9CopyAFileEPKcS3_S3_b */
	virtual class IMemoryMappedFile * CreateMemoryMap(class CInternalFileSystemPassThru<IFileSystem> *, FileHandle_t, enum MemoryMappedFileFlags_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE15CreateMemoryMapEPv23MemoryMappedFileFlags_t */
	virtual class IMemoryMappedFile * CreateMemoryMap(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *, enum MemoryMappedFileFlags_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE15CreateMemoryMapEPKcS3_23MemoryMappedFileFlags_t */
};

// <06DAB9B0> ../../public/filesystem/filesystem_passthru.h:20
// member functions: 50
// member variables: 2
// vtable entries: 20
// class size: 24
class CInternalFileSystemPassThru<IFileSystem> : public IFileSystem {
public:
	/* class IFileSystem <ancestor>; */ /* 0 16 */
	void ~CInternalFileSystemPassThru(CInternalFileSystemPassThru<IFileSystem>* );
	void CInternalFileSystemPassThru(CInternalFileSystemPassThru<IFileSystem>* , CInternalFileSystemPassThru<IFileSystem>& );
	void CInternalFileSystemPassThru(CInternalFileSystemPassThru<IFileSystem>* , const CInternalFileSystemPassThru<IFileSystem>& );
	/* ../../public/filesystem/filesystem_passthru.h:23 */
	void CInternalFileSystemPassThru(CInternalFileSystemPassThru<IFileSystem>* );
	/* ../../public/filesystem/filesystem_passthru.h:27 */
	void InitPassThru(CInternalFileSystemPassThru<IFileSystem>* , IBaseFileSystem* );
	/* ../../public/filesystem/filesystem_passthru.h:31 */
	virtual int Read(CInternalFileSystemPassThru<IFileSystem>* , void* , int, FileHandle_t);
	/* ../../public/filesystem/filesystem_passthru.h:32 */
	virtual int Write(CInternalFileSystemPassThru<IFileSystem>* , const void* , int, FileHandle_t);
	/* ../../public/filesystem/filesystem_passthru.h:33 */
	virtual FileHandle_t Open(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:34 */
	virtual void Close(CInternalFileSystemPassThru<IFileSystem>* , FileHandle_t);
	/* ../../public/filesystem/filesystem_passthru.h:35 */
	virtual void Seek(CInternalFileSystemPassThru<IFileSystem>* , FileHandle_t, int64, FileSystemSeek_t);
	/* ../../public/filesystem/filesystem_passthru.h:36 */
	virtual int64 Tell(CInternalFileSystemPassThru<IFileSystem>* , FileHandle_t);
	/* ../../public/filesystem/filesystem_passthru.h:37 */
	virtual int64 Size(CInternalFileSystemPassThru<IFileSystem>* , FileHandle_t);
	/* ../../public/filesystem/filesystem_passthru.h:38 */
	virtual int64 Size(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:39 */
	virtual void Flush(CInternalFileSystemPassThru<IFileSystem>* , FileHandle_t);
	/* ../../public/filesystem/filesystem_passthru.h:40 */
	virtual bool Precache(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:41 */
	virtual bool FileExists(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:42 */
	virtual bool IsFileWritable(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:43 */
	virtual bool SetFileWritable(CInternalFileSystemPassThru<IFileSystem>* , const char* , bool, const char* );
	/* ../../public/filesystem/filesystem_passthru.h:44 */
	virtual int64 GetFileTime(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:45 */
	virtual bool ReadFile(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* , CUtlBuffer& , int, int, FSAllocFunc_t);
	/* ../../public/filesystem/filesystem_passthru.h:46 */
	virtual bool WriteFile(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* , const CUtlBuffer& );
	/* ../../public/filesystem/filesystem_passthru.h:47 */
	virtual bool UnzipFile(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:48 */
	virtual bool CopyAFile(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* , const char* , bool);
	/* ../../public/filesystem/filesystem_passthru.h:50 */
	virtual IMemoryMappedFile* CreateMemoryMap(CInternalFileSystemPassThru<IFileSystem>* , FileHandle_t, MemoryMappedFileFlags_t);
	/* ../../public/filesystem/filesystem_passthru.h:51 */
	virtual IMemoryMappedFile* CreateMemoryMap(CInternalFileSystemPassThru<IFileSystem>* , const char* , const char* , MemoryMappedFileFlags_t);
protected:
	IBaseFileSystem * m_pBaseFileSystemPassThru; /* 16 8 */
	void ~CInternalFileSystemPassThru(class CInternalFileSystemPassThru<IFileSystem> *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemED4Ev */
	void CInternalFileSystemPassThru(class CInternalFileSystemPassThru<IFileSystem> *, class CInternalFileSystemPassThru<IFileSystem> &); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemEC4EOS1_ */
	void CInternalFileSystemPassThru(class CInternalFileSystemPassThru<IFileSystem> *, const class CInternalFileSystemPassThru<IFileSystem>  &); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemEC4ERKS1_ */
	void CInternalFileSystemPassThru(class CInternalFileSystemPassThru<IFileSystem> *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemEC4Ev */
	void InitPassThru(class CInternalFileSystemPassThru<IFileSystem> *, class IBaseFileSystem *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE12InitPassThruEP15IBaseFileSystem */
	virtual int Read(class CInternalFileSystemPassThru<IFileSystem> *, void *, int, FileHandle_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE4ReadEPviS2_ */
	virtual int Write(class CInternalFileSystemPassThru<IFileSystem> *, const void  *, int, FileHandle_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE5WriteEPKviPv */
	virtual FileHandle_t Open(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *, const char  *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE4OpenEPKcS3_S3_ */
	virtual void Close(class CInternalFileSystemPassThru<IFileSystem> *, FileHandle_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE5CloseEPv */
	virtual void Seek(class CInternalFileSystemPassThru<IFileSystem> *, FileHandle_t, int64, enum FileSystemSeek_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE4SeekEPvx16FileSystemSeek_t */
	virtual int64 Tell(class CInternalFileSystemPassThru<IFileSystem> *, FileHandle_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE4TellEPv */
	virtual int64 Size(class CInternalFileSystemPassThru<IFileSystem> *, FileHandle_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE4SizeEPv */
	virtual int64 Size(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE4SizeEPKcS3_ */
	virtual void Flush(class CInternalFileSystemPassThru<IFileSystem> *, FileHandle_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE5FlushEPv */
	virtual bool Precache(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE8PrecacheEPKcS3_ */
	virtual bool FileExists(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE10FileExistsEPKcS3_ */
	virtual bool IsFileWritable(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE14IsFileWritableEPKcS3_ */
	virtual bool SetFileWritable(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, bool, const char  *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE15SetFileWritableEPKcbS3_ */
	virtual int64 GetFileTime(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE11GetFileTimeEPKcS3_ */
	virtual bool ReadFile(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *, class CUtlBuffer &, int, int, FSAllocFunc_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE8ReadFileEPKcS3_R10CUtlBufferiiPFPvS3_jE */
	virtual bool WriteFile(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *, const class CUtlBuffer  &); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE9WriteFileEPKcS3_RK10CUtlBuffer */
	virtual bool UnzipFile(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *, const char  *); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE9UnzipFileEPKcS3_S3_ */
	virtual bool CopyAFile(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *, const char  *, bool); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE9CopyAFileEPKcS3_S3_b */
	virtual class IMemoryMappedFile * CreateMemoryMap(class CInternalFileSystemPassThru<IFileSystem> *, FileHandle_t, enum MemoryMappedFileFlags_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE15CreateMemoryMapEPv23MemoryMappedFileFlags_t */
	virtual class IMemoryMappedFile * CreateMemoryMap(class CInternalFileSystemPassThru<IFileSystem> *, const char  *, const char  *, enum MemoryMappedFileFlags_t); /* linkage=_ZN27CInternalFileSystemPassThruI11IFileSystemE15CreateMemoryMapEPKcS3_23MemoryMappedFileFlags_t */
};

// <068DC58C> ../public/filesystem/filesystem_passthru.h:31
void CInternalFileSystemPassThru<IFileSystem>::Read(void* pOutput, int size, FileHandle_t file)
{
} /* size: 0 */

// <06DAC694> ../../public/filesystem/filesystem_passthru.h:32
void CInternalFileSystemPassThru<IFileSystem>::Write(const void* pInput, int size, FileHandle_t file)
{
} /* size: 0 */

// <06DAC658> ../../public/filesystem/filesystem_passthru.h:33
void CInternalFileSystemPassThru<IFileSystem>::Open(const char* pFileName, const char* pOptions, const char* pathID)
{
} /* size: 0 */

// <06DAC634> ../../public/filesystem/filesystem_passthru.h:34
void CInternalFileSystemPassThru<IFileSystem>::Close(FileHandle_t file)
{
} /* size: 0 */

// <068DC4ED> ../public/filesystem/filesystem_passthru.h:35
void CInternalFileSystemPassThru<IFileSystem>::Seek(FileHandle_t file, int64 pos, FileSystemSeek_t seekType)
{
} /* size: 0 */

// <06846C6A> ../public/filesystem/filesystem_passthru.h:36
void CInternalFileSystemPassThru<IFileSystem>::Tell(FileHandle_t file)
{
} /* size: 0 */

// <06846C46> ../public/filesystem/filesystem_passthru.h:37
void CInternalFileSystemPassThru<IFileSystem>::Size(FileHandle_t file)
{
} /* size: 0 */

// <004A8255> ../public/filesystem/filesystem_passthru.h:38
void CInternalFileSystemPassThru<IFileSystem>::Size(const char* pFileName, const char* pPathID)
{
} /* size: 0 */

// <06846C22> ../public/filesystem/filesystem_passthru.h:39
void CInternalFileSystemPassThru<IFileSystem>::Flush(FileHandle_t file)
{
} /* size: 0 */

// <068DC4BC> ../public/filesystem/filesystem_passthru.h:41
void CInternalFileSystemPassThru<IFileSystem>::FileExists(const char* pFileName, const char* pPathID)
{
} /* size: 0 */

// <000B3195> ../public/filesystem/filesystem_passthru.h:43
void CInternalFileSystemPassThru<IFileSystem>::SetFileWritable(const char* pFileName, bool writable, const char* pPathID)
{
} /* size: 0 */

// <001C003F> ../../public/filesystem/filesystem_passthru.h:44
void CInternalFileSystemPassThru<IFileSystem>::GetFileTime(const char* pFileName, const char* pPathID)
{
} /* size: 0 */

// <068DC45B> ../public/filesystem/filesystem_passthru.h:45
void CInternalFileSystemPassThru<IFileSystem>::ReadFile(const char* pFileName, const char* pPath, CUtlBuffer& buf, int nMaxBytes, int nStartingByte, FSAllocFunc_t pfnAlloc)
{
} /* size: 0 */

// <05DB542E> ../public/filesystem/filesystem_passthru.h:46
void CInternalFileSystemPassThru<IFileSystem>::WriteFile(const char* pFileName, const char* pPath, const CUtlBuffer& buf)
{
} /* size: 0 */

// <007401F4> ../public/filesystem/filesystem_passthru.h:48
void CInternalFileSystemPassThru<IFileSystem>::CopyAFile(const char* pFileName, const char* pPath, const char* pDestination, bool bFailIfExists)
{
} /* size: 0 */

// <0003DFCF> ../public/filesystem/filesystem_passthru.h:50
void CInternalFileSystemPassThru<IFileSystem>::CreateMemoryMap(FileHandle_t file, MemoryMappedFileFlags_t nFlags)
{
} /* size: 0 */

// <00126445> ../public/filesystem/filesystem_passthru.h:63
// member functions: 216
// member variables: 2
// vtable entries: 103
// class size: 32
class CFileSystemPassThru : public CInternalFileSystemPassThru<IFileSystem> {
public:
	/* class CInternalFileSystemPassThru<IFileSystem> <ancestor>; */ /* 0 24 */
	void ~CFileSystemPassThru(CFileSystemPassThru* );
	void CFileSystemPassThru(CFileSystemPassThru* , CFileSystemPassThru& );
	void CFileSystemPassThru(CFileSystemPassThru* , const CFileSystemPassThru& );
	/* ../public/filesystem/filesystem_passthru.h:68 */
	void CFileSystemPassThru(CFileSystemPassThru* );
	/* ../public/filesystem/filesystem_passthru.h:72 */
	void InitPassThru(CFileSystemPassThru* , IFileSystem* , bool);
	/* ../public/filesystem/filesystem_passthru.h:82 */
	virtual bool Connect(CFileSystemPassThru* , CreateInterfaceFn);
	/* ../public/filesystem/filesystem_passthru.h:83 */
	virtual void Disconnect(CFileSystemPassThru* );
	/* ../public/filesystem/filesystem_passthru.h:84 */
	virtual void* QueryInterface(CFileSystemPassThru* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:85 */
	virtual InitReturnVal_t Init(CFileSystemPassThru* );
	/* ../public/filesystem/filesystem_passthru.h:86 */
	virtual void PreShutdown(CFileSystemPassThru* );
	/* ../public/filesystem/filesystem_passthru.h:87 */
	virtual void Shutdown(CFileSystemPassThru* );
	/* ../public/filesystem/filesystem_passthru.h:88 */
	virtual const AppSystemInfo_t* GetDependencies(CFileSystemPassThru* );
	/* ../public/filesystem/filesystem_passthru.h:89 */
	virtual AppSystemTier_t GetTier(CFileSystemPassThru* );
	/* ../public/filesystem/filesystem_passthru.h:90 */
	virtual void Reconnect(CFileSystemPassThru* , CreateInterfaceFn, const char* );
	/* ../public/filesystem/filesystem_passthru.h:91 */
	virtual bool IsSingleton(CFileSystemPassThru* );
	/* ../public/filesystem/filesystem_passthru.h:92 */
	virtual AppSystemBuildType_t GetBuildType(CFileSystemPassThru* );
	/* ../public/filesystem/filesystem_passthru.h:94 */
	virtual void RemoveAllSearchPaths(CFileSystemPassThru* );
	/* ../public/filesystem/filesystem_passthru.h:95 */
	virtual void AddSearchPath(CFileSystemPassThru* , const char* , const char* , SearchPathAdd_t, SearchPathPriority_t, CUtlStringToken);
	/* ../public/filesystem/filesystem_passthru.h:96 */
	virtual bool RemoveSearchPath(CFileSystemPassThru* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:98 */
	virtual SearchPathStateHandle_t SaveSearchPathState(const CFileSystemPassThru* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:99 */
	virtual void RestoreSearchPathState(CFileSystemPassThru* , SearchPathStateHandle_t);
	/* ../public/filesystem/filesystem_passthru.h:100 */
	virtual void DestroySearchPathState(CFileSystemPassThru* , SearchPathStateHandle_t);
	/* ../public/filesystem/filesystem_passthru.h:102 */
	virtual bool RemoveFile(CFileSystemPassThru* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:103 */
	virtual bool RenameFile(CFileSystemPassThru* , const char* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:104 */
	virtual bool CreateDirHierarchy(CFileSystemPassThru* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:105 */
	virtual bool CreateDirHierarchyForFile(CFileSystemPassThru* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:106 */
	virtual bool DeleteDirectory(CFileSystemPassThru* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:107 */
	virtual bool DeleteDirectoryAndContents_R(CFileSystemPassThru* , const char* , const char* , bool);
	/* ../public/filesystem/filesystem_passthru.h:108 */
	virtual bool IsDirectory(CFileSystemPassThru* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:109 */
	virtual void FileTimeToString(CFileSystemPassThru* , int64, CBufferString* );
	/* ../public/filesystem/filesystem_passthru.h:110 */
	virtual void SetBufferSize(CFileSystemPassThru* , FileHandle_t, unsigned int);
	/* ../public/filesystem/filesystem_passthru.h:111 */
	virtual bool IsOk(CFileSystemPassThru* , FileHandle_t);
	/* ../public/filesystem/filesystem_passthru.h:112 */
	virtual bool EndOfFile(CFileSystemPassThru* , FileHandle_t);
	/* ../public/filesystem/filesystem_passthru.h:113 */
	virtual char* ReadLine(CFileSystemPassThru* , char* , int, FileHandle_t);
	/* ../public/filesystem/filesystem_passthru.h:114 */
	virtual CUtlString ReadLine(CFileSystemPassThru* , FileHandle_t, bool);
	/* ../public/filesystem/filesystem_passthru.h:116 */
	virtual int FPrintf(CFileSystemPassThru* , FileHandle_t, const char* , ...);
	/* ../public/filesystem/filesystem_passthru.h:125 */
	virtual PlatModule_t LoadModule(CFileSystemPassThru* , const char* , const char* , bool);
	/* ../public/filesystem/filesystem_passthru.h:126 */
	virtual void UnloadModule(CFileSystemPassThru* , PlatModule_t);
	/* ../public/filesystem/filesystem_passthru.h:127 */
	virtual const char* FindFirst(CFileSystemPassThru* , const char* , FileFindHandle_t* );
	/* ../public/filesystem/filesystem_passthru.h:128 */
	virtual const char* FindNext(CFileSystemPassThru* , FileFindHandle_t& );
	/* ../public/filesystem/filesystem_passthru.h:129 */
	virtual bool FindIsDirectory(CFileSystemPassThru* , const FileFindHandle_t& );
	/* ../public/filesystem/filesystem_passthru.h:130 */
	virtual void FindClose(CFileSystemPassThru* , FileFindHandle_t& );
	/* ../public/filesystem/filesystem_passthru.h:131 */
	virtual void FindFileAbsoluteList(CFileSystemPassThru* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:132 */
	virtual bool FullPathToRelativePath(CFileSystemPassThru* , const char* , const char* , CBufferString* );
	/* ../public/filesystem/filesystem_passthru.h:133 */
	virtual bool RelativePathToFullWritePath(CFileSystemPassThru* , const char* , const char* , CBufferString* );
	/* ../public/filesystem/filesystem_passthru.h:134 */
	virtual bool GetCurrentDirectory(CFileSystemPassThru* , CBufferString* );
	/* ../public/filesystem/filesystem_passthru.h:135 */
	virtual void PrintOpenedFiles(CFileSystemPassThru* );
	/* ../public/filesystem/filesystem_passthru.h:136 */
	virtual void PrintSearchPaths(CFileSystemPassThru* );
	/* ../public/filesystem/filesystem_passthru.h:137 */
	virtual void SetWarningFunc(CFileSystemPassThru* , void (*)(const char* , ...));
	/* ../public/filesystem/filesystem_passthru.h:138 */
	virtual void SetWarningLevel(CFileSystemPassThru* , FileWarningLevel_t);
	/* ../public/filesystem/filesystem_passthru.h:139 */
	virtual void AddLoggingFunc(CFileSystemPassThru* , void (*)(const char* , const char* ));
	/* ../public/filesystem/filesystem_passthru.h:140 */
	virtual void RemoveLoggingFunc(CFileSystemPassThru* , FileSystemLoggingFunc_t);
	/* ../public/filesystem/filesystem_passthru.h:141 */
	virtual const FileSystemStatistics* GetFilesystemStatistics(CFileSystemPassThru* );
	/* ../public/filesystem/filesystem_passthru.h:142 */
	virtual WaitForResourcesHandle_t WaitForResources(CFileSystemPassThru* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:143 */
	virtual bool GetWaitForResourcesProgress(CFileSystemPassThru* , WaitForResourcesHandle_t, float* , bool* );
	/* ../public/filesystem/filesystem_passthru.h:145 */
	virtual void CancelWaitForResources(CFileSystemPassThru* , WaitForResourcesHandle_t);
	/* ../public/filesystem/filesystem_passthru.h:146 */
	virtual int HintResourceNeed(CFileSystemPassThru* , const char* , int);
	/* ../public/filesystem/filesystem_passthru.h:147 */
	virtual bool IsFileImmediatelyAvailable(CFileSystemPassThru* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:148 */
	virtual void GetLocalCopy(CFileSystemPassThru* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:149 */
	virtual FileNameHandle_t FindOrAddFileName(CFileSystemPassThru* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:150 */
	virtual FileNameHandle_t FindFileName(CFileSystemPassThru* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:151 */
	virtual bool String(CFileSystemPassThru* , const FileNameHandle_t& , CBufferString* );
	/* ../public/filesystem/filesystem_passthru.h:152 */
	virtual bool IsOk2(CFileSystemPassThru* , FileHandle_t);
	/* ../public/filesystem/filesystem_passthru.h:153 */
	virtual void RemoveSearchPaths(CFileSystemPassThru* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:155 */
	virtual const char* FindFirstEx(CFileSystemPassThru* , const char* , const char* , FileFindHandle_t* );
	/* ../public/filesystem/filesystem_passthru.h:160 */
	virtual void MarkPathIDByRequestOnly(CFileSystemPassThru* , const char* , bool);
	/* ../public/filesystem/filesystem_passthru.h:161 */
	virtual bool IsFileInReadOnlySearchPath(CFileSystemPassThru* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:162 */
	virtual void SetSearchPathReadOnly(CFileSystemPassThru* , const char* , const char* , bool);
	/* ../public/filesystem/filesystem_passthru.h:163 */
	virtual const char* RelativePathToFullPath(CFileSystemPassThru* , const char* , const char* , CBufferString* , PathTypeFilter_t);
	/* ../public/filesystem/filesystem_passthru.h:164 */
	virtual bool GetSearchPath(CFileSystemPassThru* , const char* , GetSearchPathTypes_t, CBufferString* , int);
	/* ../public/filesystem/filesystem_passthru.h:166 */
	virtual CUtlStringToken GetMergeTokenForPath(CFileSystemPassThru* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:167 */
	virtual int GetMergedPaths(CFileSystemPassThru* , CUtlStringToken, CBufferString* );
	/* ../public/filesystem/filesystem_passthru.h:169 */
	virtual FileHandle_t OpenEx(CFileSystemPassThru* , const char* , const char* , unsigned int, const char* );
	/* ../public/filesystem/filesystem_passthru.h:170 */
	virtual int ReadEx(CFileSystemPassThru* , void* , int, int, FileHandle_t);
	/* ../public/filesystem/filesystem_passthru.h:171 */
	virtual int ReadFileEx(CFileSystemPassThru* , const char* , const char* , void** , bool, bool, int, int, FSAllocFunc_t);
	/* ../public/filesystem/filesystem_passthru.h:182 */
	virtual KeyValues* LoadKeyValues(CFileSystemPassThru* , KeyValuesPreloadType_t, const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:183 */
	virtual bool LoadKeyValues(CFileSystemPassThru* , KeyValues& , KeyValuesPreloadType_t, const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:185 */
	virtual bool GetFileTypeForFullPath(CFileSystemPassThru* , const char* , CBufferString* );
	/* ../public/filesystem/filesystem_passthru.h:187 */
	virtual bool GetOptimalIOConstraints(CFileSystemPassThru* , FileHandle_t, unsigned int* , unsigned int* , unsigned int* );
	/* ../public/filesystem/filesystem_passthru.h:188 */
	virtual void* AllocOptimalReadBuffer(CFileSystemPassThru* , FileHandle_t, unsigned int, unsigned int);
	/* ../public/filesystem/filesystem_passthru.h:189 */
	virtual void FreeOptimalReadBuffer(CFileSystemPassThru* , void* );
	/* ../public/filesystem/filesystem_passthru.h:190 */
	virtual bool ReadToBuffer(CFileSystemPassThru* , FileHandle_t, CUtlBuffer& , int, FSAllocFunc_t);
	/* ../public/filesystem/filesystem_passthru.h:191 */
	virtual int GetPathIndex(CFileSystemPassThru* , const FileNameHandle_t& );
	/* ../public/filesystem/filesystem_passthru.h:192 */
	virtual int64 GetPathTime(CFileSystemPassThru* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:194 */
	virtual int GetSearchPathID(CFileSystemPassThru* , CBufferString* );
	/* ../public/filesystem/filesystem_passthru.h:196 */
	virtual bool AddVPKFile(CFileSystemPassThru* , const char* , const char* , SearchPathAdd_t);
	/* ../public/filesystem/filesystem_passthru.h:197 */
	virtual void RemoveVPKFile(CFileSystemPassThru* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:198 */
	virtual bool IsVPKFileLoaded(CFileSystemPassThru* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:200 */
	virtual void SetIODelayAlarm(CFileSystemPassThru* , float);
	/* ../public/filesystem/filesystem_passthru.h:202 */
	virtual bool IsPathInvalidForFilesystem(CFileSystemPassThru* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:204 */
	virtual void GetAvailableDrives(CFileSystemPassThru* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/filesystem/filesystem_passthru.h:206 */
	virtual void GetSearchPathsForPathID(const CFileSystemPassThru* , const char* , GetSearchPathTypes_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/filesystem/filesystem_passthru.h:208 */
	virtual void SuppressAsyncFileRequestFlushOnPathChange(CFileSystemPassThru* , bool);
	/* ../public/filesystem/filesystem_passthru.h:212 */
	virtual bool MarkContentCorrupt(CFileSystemPassThru* , bool, const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:215 */
	virtual void SetContentCorruptionReportingEnabled(CFileSystemPassThru* , bool);
	/* ../public/filesystem/filesystem_passthru.h:217 */
	virtual AccesLogWriteResult_t WriteFileAccessLog(CFileSystemPassThru* , const char* , const char* , const char* , bool);
	/* ../public/filesystem/filesystem_passthru.h:222 */
	virtual void ResetProjectPaths(CFileSystemPassThru* , bool);
	/* ../public/filesystem/filesystem_passthru.h:223 */
	virtual void AddProjectPath(CFileSystemPassThru* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:224 */
	virtual void AddCloudPath(CFileSystemPassThru* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:226 */
	virtual const char* GetModPath(CFileSystemPassThru* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:227 */
	virtual const char* GetSymLink(CFileSystemPassThru* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:228 */
	virtual void AddSymLink(CFileSystemPassThru* , const char* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:229 */
	virtual void RemoveSymLink(CFileSystemPassThru* , const char* , const char* );
	/* ../public/filesystem/filesystem_passthru.h:230 */
	virtual void ClearSymLinks(CFileSystemPassThru* );
	/* ../public/filesystem/filesystem_passthru.h:231 */
	virtual CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* GetSymLinkReloadQueue(CFileSystemPassThru* );
	/* ../public/filesystem/filesystem_passthru.h:232 */
	virtual bool GetSearchPath(CFileSystemPassThru* , int, CUtlString* , CUtlString* );
	/* ../public/filesystem/filesystem_passthru.h:233 */
	virtual bool SplitFullPath(CFileSystemPassThru* , const char* , CBufferString* , CBufferString* , CBufferString* );
	/* ../public/filesystem/filesystem_passthru.h:234 */
	virtual bool GetSearchPathArgs(CFileSystemPassThru* , const char* , CBufferString* );
protected:
	IFileSystem * m_pFileSystemPassThru; /* 24 8 */
	void ~CFileSystemPassThru(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThruD4Ev */
	void CFileSystemPassThru(class CFileSystemPassThru *, class CFileSystemPassThru &); /* linkage=_ZN19CFileSystemPassThruC4EOS_ */
	void CFileSystemPassThru(class CFileSystemPassThru *, const class CFileSystemPassThru  &); /* linkage=_ZN19CFileSystemPassThruC4ERKS_ */
	void CFileSystemPassThru(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThruC4Ev */
	void InitPassThru(class CFileSystemPassThru *, class IFileSystem *, bool); /* linkage=_ZN19CFileSystemPassThru12InitPassThruEP11IFileSystemb */
	virtual bool Connect(class CFileSystemPassThru *, CreateInterfaceFn); /* linkage=_ZN19CFileSystemPassThru7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru10DisconnectEv */
	virtual void * QueryInterface(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru14QueryInterfaceEPKc */
	virtual enum InitReturnVal_t Init(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru4InitEv */
	virtual void PreShutdown(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru11PreShutdownEv */
	virtual void Shutdown(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru8ShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru15GetDependenciesEv */
	virtual enum AppSystemTier_t GetTier(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru7GetTierEv */
	virtual void Reconnect(class CFileSystemPassThru *, CreateInterfaceFn, const char  *); /* linkage=_ZN19CFileSystemPassThru9ReconnectEPFPvPKcPiES2_ */
	virtual bool IsSingleton(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru11IsSingletonEv */
	virtual enum AppSystemBuildType_t GetBuildType(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru12GetBuildTypeEv */
	virtual void RemoveAllSearchPaths(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru20RemoveAllSearchPathsEv */
	/* <3313775> ../public/filesystem/filesystem_passthru.h:95 */
	virtual void AddSearchPath(class CFileSystemPassThru *, const char  *, const char  *, enum SearchPathAdd_t, enum SearchPathPriority_t, class CUtlStringToken); /* linkage=_ZN19CFileSystemPassThru13AddSearchPathEPKcS1_15SearchPathAdd_t20SearchPathPriority_t15CUtlStringToken */
	/* <172a8f9> ../public/filesystem/filesystem_passthru.h:96 */
	virtual bool RemoveSearchPath(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru16RemoveSearchPathEPKcS1_ */
	virtual SearchPathStateHandle_t SaveSearchPathState(const class CFileSystemPassThru  *, const char  *); /* linkage=_ZNK19CFileSystemPassThru19SaveSearchPathStateEPKc */
	virtual void RestoreSearchPathState(class CFileSystemPassThru *, SearchPathStateHandle_t); /* linkage=_ZN19CFileSystemPassThru22RestoreSearchPathStateEP25SearchPathStateHandle_t__ */
	virtual void DestroySearchPathState(class CFileSystemPassThru *, SearchPathStateHandle_t); /* linkage=_ZN19CFileSystemPassThru22DestroySearchPathStateEP25SearchPathStateHandle_t__ */
	/* <3312f36> ../public/filesystem/filesystem_passthru.h:102 */
	virtual bool RemoveFile(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru10RemoveFileEPKcS1_ */
	/* <3312ce8> ../public/filesystem/filesystem_passthru.h:103 */
	virtual bool RenameFile(class CFileSystemPassThru *, const char  *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru10RenameFileEPKcS1_S1_ */
	/* <1fdb1ae> ../public/filesystem/filesystem_passthru.h:104 */
	virtual bool CreateDirHierarchy(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru18CreateDirHierarchyEPKcS1_ */
	virtual bool CreateDirHierarchyForFile(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru25CreateDirHierarchyForFileEPKcS1_ */
	virtual bool DeleteDirectory(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru15DeleteDirectoryEPKcS1_ */
	virtual bool DeleteDirectoryAndContents_R(class CFileSystemPassThru *, const char  *, const char  *, bool); /* linkage=_ZN19CFileSystemPassThru28DeleteDirectoryAndContents_REPKcS1_b */
	/* <68f235> ../public/filesystem/filesystem_passthru.h:108 */
	virtual bool IsDirectory(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru11IsDirectoryEPKcS1_ */
	virtual void FileTimeToString(class CFileSystemPassThru *, int64, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru16FileTimeToStringExP13CBufferString */
	virtual void SetBufferSize(class CFileSystemPassThru *, FileHandle_t, unsigned int); /* linkage=_ZN19CFileSystemPassThru13SetBufferSizeEPvj */
	/* <6813325> ../public/filesystem/filesystem_passthru.h:111 */
	virtual bool IsOk(class CFileSystemPassThru *, FileHandle_t); /* linkage=_ZN19CFileSystemPassThru4IsOkEPv */
	virtual bool EndOfFile(class CFileSystemPassThru *, FileHandle_t); /* linkage=_ZN19CFileSystemPassThru9EndOfFileEPv */
	/* <6813d9d> ../public/filesystem/filesystem_passthru.h:113 */
	virtual char * ReadLine(class CFileSystemPassThru *, char *, int, FileHandle_t); /* linkage=_ZN19CFileSystemPassThru8ReadLineEPciPv */
	virtual class CUtlString ReadLine(class CFileSystemPassThru *, FileHandle_t, bool); /* linkage=_ZN19CFileSystemPassThru8ReadLineEPvb */
	virtual int FPrintf(class CFileSystemPassThru *, FileHandle_t, const char  *, ...); /* linkage=_ZN19CFileSystemPassThru7FPrintfEPvPKcz */
	virtual PlatModule_t LoadModule(class CFileSystemPassThru *, const char  *, const char  *, bool); /* linkage=_ZN19CFileSystemPassThru10LoadModuleEPKcS1_b */
	virtual void UnloadModule(class CFileSystemPassThru *, PlatModule_t); /* linkage=_ZN19CFileSystemPassThru12UnloadModuleEP13_PlatModule_t */
	/* <68f01c> ../public/filesystem/filesystem_passthru.h:127 */
	virtual const char  * FindFirst(class CFileSystemPassThru *, const char  *, class FileFindHandle_t *); /* linkage=_ZN19CFileSystemPassThru9FindFirstEPKcP16FileFindHandle_t */
	/* <6814632> ../public/filesystem/filesystem_passthru.h:128 */
	virtual const char  * FindNext(class CFileSystemPassThru *, class FileFindHandle_t &); /* linkage=_ZN19CFileSystemPassThru8FindNextER16FileFindHandle_t */
	/* <681444f> ../public/filesystem/filesystem_passthru.h:129 */
	virtual bool FindIsDirectory(class CFileSystemPassThru *, const class FileFindHandle_t  &); /* linkage=_ZN19CFileSystemPassThru15FindIsDirectoryERK16FileFindHandle_t */
	/* <681426c> ../public/filesystem/filesystem_passthru.h:130 */
	virtual void FindClose(class CFileSystemPassThru *, class FileFindHandle_t &); /* linkage=_ZN19CFileSystemPassThru9FindCloseER16FileFindHandle_t */
	virtual void FindFileAbsoluteList(class CFileSystemPassThru *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru20FindFileAbsoluteListER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEEPKcS7_ */
	/* <6813b50> ../public/filesystem/filesystem_passthru.h:132 */
	virtual bool FullPathToRelativePath(class CFileSystemPassThru *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru22FullPathToRelativePathEPKcS1_P13CBufferString */
	/* <6835aca> ../public/filesystem/filesystem_passthru.h:133 */
	virtual bool RelativePathToFullWritePath(class CFileSystemPassThru *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru27RelativePathToFullWritePathEPKcS1_P13CBufferString */
	/* <6813508> ../public/filesystem/filesystem_passthru.h:134 */
	virtual bool GetCurrentDirectory(class CFileSystemPassThru *, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru19GetCurrentDirectoryEP13CBufferString */
	virtual void PrintOpenedFiles(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru16PrintOpenedFilesEv */
	virtual void PrintSearchPaths(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru16PrintSearchPathsEv */
	virtual void SetWarningFunc(class CFileSystemPassThru *, void (*)(const char  *, ...)); /* linkage=_ZN19CFileSystemPassThru14SetWarningFuncEPFvPKczE */
	virtual void SetWarningLevel(class CFileSystemPassThru *, enum FileWarningLevel_t); /* linkage=_ZN19CFileSystemPassThru15SetWarningLevelE18FileWarningLevel_t */
	virtual void AddLoggingFunc(class CFileSystemPassThru *, void (*)(const char  *, const char  *)); /* linkage=_ZN19CFileSystemPassThru14AddLoggingFuncEPFvPKcS1_E */
	virtual void RemoveLoggingFunc(class CFileSystemPassThru *, FileSystemLoggingFunc_t); /* linkage=_ZN19CFileSystemPassThru17RemoveLoggingFuncEPFvPKcS1_E */
	virtual const class FileSystemStatistics  * GetFilesystemStatistics(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru23GetFilesystemStatisticsEv */
	virtual WaitForResourcesHandle_t WaitForResources(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru16WaitForResourcesEPKc */
	virtual bool GetWaitForResourcesProgress(class CFileSystemPassThru *, WaitForResourcesHandle_t, float *, bool *); /* linkage=_ZN19CFileSystemPassThru27GetWaitForResourcesProgressEiPfPb */
	virtual void CancelWaitForResources(class CFileSystemPassThru *, WaitForResourcesHandle_t); /* linkage=_ZN19CFileSystemPassThru22CancelWaitForResourcesEi */
	virtual int HintResourceNeed(class CFileSystemPassThru *, const char  *, int); /* linkage=_ZN19CFileSystemPassThru16HintResourceNeedEPKci */
	virtual bool IsFileImmediatelyAvailable(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru26IsFileImmediatelyAvailableEPKc */
	/* <8c5f42> ../public/filesystem/filesystem_passthru.h:148 */
	virtual void GetLocalCopy(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru12GetLocalCopyEPKc */
	/* <26a4bc5> ../public/filesystem/filesystem_passthru.h:149 */
	virtual FileNameHandle_t FindOrAddFileName(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru17FindOrAddFileNameEPKc */
	virtual FileNameHandle_t FindFileName(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru12FindFileNameEPKc */
	/* <24774d1> ../public/filesystem/filesystem_passthru.h:151 */
	virtual bool String(class CFileSystemPassThru *, const FileNameHandle_t  &, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru6StringERKjP13CBufferString */
	virtual bool IsOk2(class CFileSystemPassThru *, FileHandle_t); /* linkage=_ZN19CFileSystemPassThru5IsOk2EPv */
	virtual void RemoveSearchPaths(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru17RemoveSearchPathsEPKc */
	/* <6814815> ../public/filesystem/filesystem_passthru.h:155 */
	virtual const char  * FindFirstEx(class CFileSystemPassThru *, const char  *, const char  *, class FileFindHandle_t *); /* linkage=_ZN19CFileSystemPassThru11FindFirstExEPKcS1_P16FileFindHandle_t */
	/* <331349b> ../public/filesystem/filesystem_passthru.h:160 */
	virtual void MarkPathIDByRequestOnly(class CFileSystemPassThru *, const char  *, bool); /* linkage=_ZN19CFileSystemPassThru23MarkPathIDByRequestOnlyEPKcb */
	/* <68136eb> ../public/filesystem/filesystem_passthru.h:161 */
	virtual bool IsFileInReadOnlySearchPath(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru26IsFileInReadOnlySearchPathEPKcS1_ */
	/* <331314f> ../public/filesystem/filesystem_passthru.h:162 */
	virtual void SetSearchPathReadOnly(class CFileSystemPassThru *, const char  *, const char  *, bool); /* linkage=_ZN19CFileSystemPassThru21SetSearchPathReadOnlyEPKcS1_b */
	/* <697a61a> ../public/filesystem/filesystem_passthru.h:163 */
	virtual const char  * RelativePathToFullPath(class CFileSystemPassThru *, const char  *, const char  *, class CBufferString *, enum PathTypeFilter_t); /* linkage=_ZN19CFileSystemPassThru22RelativePathToFullPathEPKcS1_P13CBufferString16PathTypeFilter_t */
	/* <13622e3> ../public/filesystem/filesystem_passthru.h:164 */
	virtual bool GetSearchPath(class CFileSystemPassThru *, const char  *, enum GetSearchPathTypes_t, class CBufferString *, int); /* linkage=_ZN19CFileSystemPassThru13GetSearchPathEPKc20GetSearchPathTypes_tP13CBufferStringi */
	virtual class CUtlStringToken GetMergeTokenForPath(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru20GetMergeTokenForPathEPKcS1_ */
	/* <23e8fe> ../public/filesystem/filesystem_passthru.h:167 */
	virtual int GetMergedPaths(class CFileSystemPassThru *, class CUtlStringToken, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru14GetMergedPathsE15CUtlStringTokenP13CBufferString */
	/* <6848d4e> ../public/filesystem/filesystem_passthru.h:169 */
	virtual FileHandle_t OpenEx(class CFileSystemPassThru *, const char  *, const char  *, unsigned int, const char  *); /* linkage=_ZN19CFileSystemPassThru6OpenExEPKcS1_jS1_ */
	/* <22430b> ../public/filesystem/filesystem_passthru.h:170 */
	virtual int ReadEx(class CFileSystemPassThru *, void *, int, int, FileHandle_t); /* linkage=_ZN19CFileSystemPassThru6ReadExEPviiS0_ */
	virtual int ReadFileEx(class CFileSystemPassThru *, const char  *, const char  *, void * *, bool, bool, int, int, FSAllocFunc_t); /* linkage=_ZN19CFileSystemPassThru10ReadFileExEPKcS1_PPvbbiiPFS2_S1_jE */
	virtual class KeyValues * LoadKeyValues(class CFileSystemPassThru *, enum KeyValuesPreloadType_t, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru13LoadKeyValuesEN11IFileSystem22KeyValuesPreloadType_tEPKcS3_ */
	virtual bool LoadKeyValues(class CFileSystemPassThru *, class KeyValues &, enum KeyValuesPreloadType_t, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru13LoadKeyValuesER9KeyValuesN11IFileSystem22KeyValuesPreloadType_tEPKcS5_ */
	virtual bool GetFileTypeForFullPath(class CFileSystemPassThru *, const char  *, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru22GetFileTypeForFullPathEPKcP13CBufferString */
	/* <224088> ../public/filesystem/filesystem_passthru.h:187 */
	virtual bool GetOptimalIOConstraints(class CFileSystemPassThru *, FileHandle_t, unsigned int *, unsigned int *, unsigned int *); /* linkage=_ZN19CFileSystemPassThru23GetOptimalIOConstraintsEPvPjS1_S1_ */
	/* <223d97> ../public/filesystem/filesystem_passthru.h:188 */
	virtual void * AllocOptimalReadBuffer(class CFileSystemPassThru *, FileHandle_t, unsigned int, unsigned int); /* linkage=_ZN19CFileSystemPassThru22AllocOptimalReadBufferEPvjj */
	/* <223bb3> ../public/filesystem/filesystem_passthru.h:189 */
	virtual void FreeOptimalReadBuffer(class CFileSystemPassThru *, void *); /* linkage=_ZN19CFileSystemPassThru21FreeOptimalReadBufferEPv */
	/* <697a397> ../public/filesystem/filesystem_passthru.h:190 */
	virtual bool ReadToBuffer(class CFileSystemPassThru *, FileHandle_t, class CUtlBuffer &, int, FSAllocFunc_t); /* linkage=_ZN19CFileSystemPassThru12ReadToBufferEPvR10CUtlBufferiPFS0_PKcjE */
	virtual int GetPathIndex(class CFileSystemPassThru *, const FileNameHandle_t  &); /* linkage=_ZN19CFileSystemPassThru12GetPathIndexERKj */
	virtual int64 GetPathTime(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru11GetPathTimeEPKcS1_ */
	virtual int GetSearchPathID(class CFileSystemPassThru *, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru15GetSearchPathIDEP13CBufferString */
	/* <f44ed9> ../public/filesystem/filesystem_passthru.h:196 */
	virtual bool AddVPKFile(class CFileSystemPassThru *, const char  *, const char  *, enum SearchPathAdd_t); /* linkage=_ZN19CFileSystemPassThru10AddVPKFileEPKcS1_15SearchPathAdd_t */
	/* <f44859> ../public/filesystem/filesystem_passthru.h:197 */
	virtual void RemoveVPKFile(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru13RemoveVPKFileEPKcS1_ */
	virtual bool IsVPKFileLoaded(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru15IsVPKFileLoadedEPKc */
	virtual void SetIODelayAlarm(class CFileSystemPassThru *, float); /* linkage=_ZN19CFileSystemPassThru15SetIODelayAlarmEf */
	/* <6813142> ../public/filesystem/filesystem_passthru.h:202 */
	virtual bool IsPathInvalidForFilesystem(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru26IsPathInvalidForFilesystemEPKc */
	virtual void GetAvailableDrives(class CFileSystemPassThru *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN19CFileSystemPassThru18GetAvailableDrivesER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	/* <6813903> ../public/filesystem/filesystem_passthru.h:206 */
	virtual void GetSearchPathsForPathID(const class CFileSystemPassThru  *, const char  *, enum GetSearchPathTypes_t, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZNK19CFileSystemPassThru23GetSearchPathsForPathIDEPKc20GetSearchPathTypes_tR10CUtlVectorI10CUtlString10CUtlMemoryIS4_iEE */
	/* <f4461c> ../public/filesystem/filesystem_passthru.h:208 */
	virtual void SuppressAsyncFileRequestFlushOnPathChange(class CFileSystemPassThru *, bool); /* linkage=_ZN19CFileSystemPassThru41SuppressAsyncFileRequestFlushOnPathChangeEb */
	/* <697a89d> ../public/filesystem/filesystem_passthru.h:212 */
	virtual bool MarkContentCorrupt(class CFileSystemPassThru *, bool, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru18MarkContentCorruptEbPKcS1_ */
	/* <1601fe> ../public/filesystem/filesystem_passthru.h:215 */
	virtual void SetContentCorruptionReportingEnabled(class CFileSystemPassThru *, bool); /* linkage=_ZN19CFileSystemPassThru36SetContentCorruptionReportingEnabledEb */
	virtual enum AccesLogWriteResult_t WriteFileAccessLog(class CFileSystemPassThru *, const char  *, const char  *, const char  *, bool); /* linkage=_ZN19CFileSystemPassThru18WriteFileAccessLogEPKcS1_S1_b */
	/* <136023a> ../public/filesystem/filesystem_passthru.h:222 */
	virtual void ResetProjectPaths(class CFileSystemPassThru *, bool); /* linkage=_ZN19CFileSystemPassThru17ResetProjectPathsEb */
	/* <13609b2> ../public/filesystem/filesystem_passthru.h:223 */
	virtual void AddProjectPath(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru14AddProjectPathEPKcS1_ */
	/* <1360799> ../public/filesystem/filesystem_passthru.h:224 */
	virtual void AddCloudPath(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru12AddCloudPathEPKcS1_ */
	virtual const char  * GetModPath(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru10GetModPathEPKc */
	/* <13618b0> ../public/filesystem/filesystem_passthru.h:227 */
	virtual const char  * GetSymLink(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru10GetSymLinkEPKcS1_ */
	/* <1361662> ../public/filesystem/filesystem_passthru.h:228 */
	virtual void AddSymLink(class CFileSystemPassThru *, const char  *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru10AddSymLinkEPKcS1_S1_ */
	/* <1360580> ../public/filesystem/filesystem_passthru.h:229 */
	virtual void RemoveSymLink(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru13RemoveSymLinkEPKcS1_ */
	virtual void ClearSymLinks(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru13ClearSymLinksEv */
	/* <2385a56> ../public/filesystem/filesystem_passthru.h:231 */
	virtual class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > * GetSymLinkReloadQueue(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru21GetSymLinkReloadQueueEv */
	virtual bool GetSearchPath(class CFileSystemPassThru *, int, class CUtlString *, class CUtlString *); /* linkage=_ZN19CFileSystemPassThru13GetSearchPathEiP10CUtlStringS1_ */
	virtual bool SplitFullPath(class CFileSystemPassThru *, const char  *, class CBufferString *, class CBufferString *, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru13SplitFullPathEPKcP13CBufferStringS3_S3_ */
	/* <1361449> ../public/filesystem/filesystem_passthru.h:234 */
	virtual bool GetSearchPathArgs(class CFileSystemPassThru *, const char  *, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru17GetSearchPathArgsEPKcP13CBufferString */
};

// <001BD9F6> ../../public/filesystem/filesystem_passthru.h:63
// member functions: 216
// member variables: 2
// vtable entries: 103
// class size: 32
class CFileSystemPassThru : public CInternalFileSystemPassThru<IFileSystem> {
public:
	/* class CInternalFileSystemPassThru<IFileSystem> <ancestor>; */ /* 0 24 */
	void ~CFileSystemPassThru(CFileSystemPassThru* );
	void CFileSystemPassThru(CFileSystemPassThru* , CFileSystemPassThru& );
	void CFileSystemPassThru(CFileSystemPassThru* , const CFileSystemPassThru& );
	/* ../../public/filesystem/filesystem_passthru.h:68 */
	void CFileSystemPassThru(CFileSystemPassThru* );
	/* ../../public/filesystem/filesystem_passthru.h:72 */
	void InitPassThru(CFileSystemPassThru* , IFileSystem* , bool);
	/* ../../public/filesystem/filesystem_passthru.h:82 */
	virtual bool Connect(CFileSystemPassThru* , CreateInterfaceFn);
	/* ../../public/filesystem/filesystem_passthru.h:83 */
	virtual void Disconnect(CFileSystemPassThru* );
	/* ../../public/filesystem/filesystem_passthru.h:84 */
	virtual void* QueryInterface(CFileSystemPassThru* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:85 */
	virtual InitReturnVal_t Init(CFileSystemPassThru* );
	/* ../../public/filesystem/filesystem_passthru.h:86 */
	virtual void PreShutdown(CFileSystemPassThru* );
	/* ../../public/filesystem/filesystem_passthru.h:87 */
	virtual void Shutdown(CFileSystemPassThru* );
	/* ../../public/filesystem/filesystem_passthru.h:88 */
	virtual const AppSystemInfo_t* GetDependencies(CFileSystemPassThru* );
	/* ../../public/filesystem/filesystem_passthru.h:89 */
	virtual AppSystemTier_t GetTier(CFileSystemPassThru* );
	/* ../../public/filesystem/filesystem_passthru.h:90 */
	virtual void Reconnect(CFileSystemPassThru* , CreateInterfaceFn, const char* );
	/* ../../public/filesystem/filesystem_passthru.h:91 */
	virtual bool IsSingleton(CFileSystemPassThru* );
	/* ../../public/filesystem/filesystem_passthru.h:92 */
	virtual AppSystemBuildType_t GetBuildType(CFileSystemPassThru* );
	/* ../../public/filesystem/filesystem_passthru.h:94 */
	virtual void RemoveAllSearchPaths(CFileSystemPassThru* );
	/* ../../public/filesystem/filesystem_passthru.h:95 */
	virtual void AddSearchPath(CFileSystemPassThru* , const char* , const char* , SearchPathAdd_t, SearchPathPriority_t, CUtlStringToken);
	/* ../../public/filesystem/filesystem_passthru.h:96 */
	virtual bool RemoveSearchPath(CFileSystemPassThru* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:98 */
	virtual SearchPathStateHandle_t SaveSearchPathState(const CFileSystemPassThru* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:99 */
	virtual void RestoreSearchPathState(CFileSystemPassThru* , SearchPathStateHandle_t);
	/* ../../public/filesystem/filesystem_passthru.h:100 */
	virtual void DestroySearchPathState(CFileSystemPassThru* , SearchPathStateHandle_t);
	/* ../../public/filesystem/filesystem_passthru.h:102 */
	virtual bool RemoveFile(CFileSystemPassThru* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:103 */
	virtual bool RenameFile(CFileSystemPassThru* , const char* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:104 */
	virtual bool CreateDirHierarchy(CFileSystemPassThru* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:105 */
	virtual bool CreateDirHierarchyForFile(CFileSystemPassThru* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:106 */
	virtual bool DeleteDirectory(CFileSystemPassThru* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:107 */
	virtual bool DeleteDirectoryAndContents_R(CFileSystemPassThru* , const char* , const char* , bool);
	/* ../../public/filesystem/filesystem_passthru.h:108 */
	virtual bool IsDirectory(CFileSystemPassThru* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:109 */
	virtual void FileTimeToString(CFileSystemPassThru* , int64, CBufferString* );
	/* ../../public/filesystem/filesystem_passthru.h:110 */
	virtual void SetBufferSize(CFileSystemPassThru* , FileHandle_t, unsigned int);
	/* ../../public/filesystem/filesystem_passthru.h:111 */
	virtual bool IsOk(CFileSystemPassThru* , FileHandle_t);
	/* ../../public/filesystem/filesystem_passthru.h:112 */
	virtual bool EndOfFile(CFileSystemPassThru* , FileHandle_t);
	/* ../../public/filesystem/filesystem_passthru.h:113 */
	virtual char* ReadLine(CFileSystemPassThru* , char* , int, FileHandle_t);
	/* ../../public/filesystem/filesystem_passthru.h:114 */
	virtual CUtlString ReadLine(CFileSystemPassThru* , FileHandle_t, bool);
	/* ../../public/filesystem/filesystem_passthru.h:116 */
	virtual int FPrintf(CFileSystemPassThru* , FileHandle_t, const char* , ...);
	/* ../../public/filesystem/filesystem_passthru.h:125 */
	virtual PlatModule_t LoadModule(CFileSystemPassThru* , const char* , const char* , bool);
	/* ../../public/filesystem/filesystem_passthru.h:126 */
	virtual void UnloadModule(CFileSystemPassThru* , PlatModule_t);
	/* ../../public/filesystem/filesystem_passthru.h:127 */
	virtual const char* FindFirst(CFileSystemPassThru* , const char* , FileFindHandle_t* );
	/* ../../public/filesystem/filesystem_passthru.h:128 */
	virtual const char* FindNext(CFileSystemPassThru* , FileFindHandle_t& );
	/* ../../public/filesystem/filesystem_passthru.h:129 */
	virtual bool FindIsDirectory(CFileSystemPassThru* , const FileFindHandle_t& );
	/* ../../public/filesystem/filesystem_passthru.h:130 */
	virtual void FindClose(CFileSystemPassThru* , FileFindHandle_t& );
	/* ../../public/filesystem/filesystem_passthru.h:131 */
	virtual void FindFileAbsoluteList(CFileSystemPassThru* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:132 */
	virtual bool FullPathToRelativePath(CFileSystemPassThru* , const char* , const char* , CBufferString* );
	/* ../../public/filesystem/filesystem_passthru.h:133 */
	virtual bool RelativePathToFullWritePath(CFileSystemPassThru* , const char* , const char* , CBufferString* );
	/* ../../public/filesystem/filesystem_passthru.h:134 */
	virtual bool GetCurrentDirectory(CFileSystemPassThru* , CBufferString* );
	/* ../../public/filesystem/filesystem_passthru.h:135 */
	virtual void PrintOpenedFiles(CFileSystemPassThru* );
	/* ../../public/filesystem/filesystem_passthru.h:136 */
	virtual void PrintSearchPaths(CFileSystemPassThru* );
	/* ../../public/filesystem/filesystem_passthru.h:137 */
	virtual void SetWarningFunc(CFileSystemPassThru* , void (*)(const char* , ...));
	/* ../../public/filesystem/filesystem_passthru.h:138 */
	virtual void SetWarningLevel(CFileSystemPassThru* , FileWarningLevel_t);
	/* ../../public/filesystem/filesystem_passthru.h:139 */
	virtual void AddLoggingFunc(CFileSystemPassThru* , void (*)(const char* , const char* ));
	/* ../../public/filesystem/filesystem_passthru.h:140 */
	virtual void RemoveLoggingFunc(CFileSystemPassThru* , FileSystemLoggingFunc_t);
	/* ../../public/filesystem/filesystem_passthru.h:141 */
	virtual const FileSystemStatistics* GetFilesystemStatistics(CFileSystemPassThru* );
	/* ../../public/filesystem/filesystem_passthru.h:142 */
	virtual WaitForResourcesHandle_t WaitForResources(CFileSystemPassThru* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:143 */
	virtual bool GetWaitForResourcesProgress(CFileSystemPassThru* , WaitForResourcesHandle_t, float* , bool* );
	/* ../../public/filesystem/filesystem_passthru.h:145 */
	virtual void CancelWaitForResources(CFileSystemPassThru* , WaitForResourcesHandle_t);
	/* ../../public/filesystem/filesystem_passthru.h:146 */
	virtual int HintResourceNeed(CFileSystemPassThru* , const char* , int);
	/* ../../public/filesystem/filesystem_passthru.h:147 */
	virtual bool IsFileImmediatelyAvailable(CFileSystemPassThru* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:148 */
	virtual void GetLocalCopy(CFileSystemPassThru* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:149 */
	virtual FileNameHandle_t FindOrAddFileName(CFileSystemPassThru* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:150 */
	virtual FileNameHandle_t FindFileName(CFileSystemPassThru* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:151 */
	virtual bool String(CFileSystemPassThru* , const FileNameHandle_t& , CBufferString* );
	/* ../../public/filesystem/filesystem_passthru.h:152 */
	virtual bool IsOk2(CFileSystemPassThru* , FileHandle_t);
	/* ../../public/filesystem/filesystem_passthru.h:153 */
	virtual void RemoveSearchPaths(CFileSystemPassThru* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:155 */
	virtual const char* FindFirstEx(CFileSystemPassThru* , const char* , const char* , FileFindHandle_t* );
	/* ../../public/filesystem/filesystem_passthru.h:160 */
	virtual void MarkPathIDByRequestOnly(CFileSystemPassThru* , const char* , bool);
	/* ../../public/filesystem/filesystem_passthru.h:161 */
	virtual bool IsFileInReadOnlySearchPath(CFileSystemPassThru* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:162 */
	virtual void SetSearchPathReadOnly(CFileSystemPassThru* , const char* , const char* , bool);
	/* ../../public/filesystem/filesystem_passthru.h:163 */
	virtual const char* RelativePathToFullPath(CFileSystemPassThru* , const char* , const char* , CBufferString* , PathTypeFilter_t);
	/* ../../public/filesystem/filesystem_passthru.h:164 */
	virtual bool GetSearchPath(CFileSystemPassThru* , const char* , GetSearchPathTypes_t, CBufferString* , int);
	/* ../../public/filesystem/filesystem_passthru.h:166 */
	virtual CUtlStringToken GetMergeTokenForPath(CFileSystemPassThru* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:167 */
	virtual int GetMergedPaths(CFileSystemPassThru* , CUtlStringToken, CBufferString* );
	/* ../../public/filesystem/filesystem_passthru.h:169 */
	virtual FileHandle_t OpenEx(CFileSystemPassThru* , const char* , const char* , unsigned int, const char* );
	/* ../../public/filesystem/filesystem_passthru.h:170 */
	virtual int ReadEx(CFileSystemPassThru* , void* , int, int, FileHandle_t);
	/* ../../public/filesystem/filesystem_passthru.h:171 */
	virtual int ReadFileEx(CFileSystemPassThru* , const char* , const char* , void** , bool, bool, int, int, FSAllocFunc_t);
	/* ../../public/filesystem/filesystem_passthru.h:182 */
	virtual KeyValues* LoadKeyValues(CFileSystemPassThru* , KeyValuesPreloadType_t, const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:183 */
	virtual bool LoadKeyValues(CFileSystemPassThru* , KeyValues& , KeyValuesPreloadType_t, const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:185 */
	virtual bool GetFileTypeForFullPath(CFileSystemPassThru* , const char* , CBufferString* );
	/* ../../public/filesystem/filesystem_passthru.h:187 */
	virtual bool GetOptimalIOConstraints(CFileSystemPassThru* , FileHandle_t, unsigned int* , unsigned int* , unsigned int* );
	/* ../../public/filesystem/filesystem_passthru.h:188 */
	virtual void* AllocOptimalReadBuffer(CFileSystemPassThru* , FileHandle_t, unsigned int, unsigned int);
	/* ../../public/filesystem/filesystem_passthru.h:189 */
	virtual void FreeOptimalReadBuffer(CFileSystemPassThru* , void* );
	/* ../../public/filesystem/filesystem_passthru.h:190 */
	virtual bool ReadToBuffer(CFileSystemPassThru* , FileHandle_t, CUtlBuffer& , int, FSAllocFunc_t);
	/* ../../public/filesystem/filesystem_passthru.h:191 */
	virtual int GetPathIndex(CFileSystemPassThru* , const FileNameHandle_t& );
	/* ../../public/filesystem/filesystem_passthru.h:192 */
	virtual int64 GetPathTime(CFileSystemPassThru* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:194 */
	virtual int GetSearchPathID(CFileSystemPassThru* , CBufferString* );
	/* ../../public/filesystem/filesystem_passthru.h:196 */
	virtual bool AddVPKFile(CFileSystemPassThru* , const char* , const char* , SearchPathAdd_t);
	/* ../../public/filesystem/filesystem_passthru.h:197 */
	virtual void RemoveVPKFile(CFileSystemPassThru* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:198 */
	virtual bool IsVPKFileLoaded(CFileSystemPassThru* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:200 */
	virtual void SetIODelayAlarm(CFileSystemPassThru* , float);
	/* ../../public/filesystem/filesystem_passthru.h:202 */
	virtual bool IsPathInvalidForFilesystem(CFileSystemPassThru* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:204 */
	virtual void GetAvailableDrives(CFileSystemPassThru* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../../public/filesystem/filesystem_passthru.h:206 */
	virtual void GetSearchPathsForPathID(const CFileSystemPassThru* , const char* , GetSearchPathTypes_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../../public/filesystem/filesystem_passthru.h:208 */
	virtual void SuppressAsyncFileRequestFlushOnPathChange(CFileSystemPassThru* , bool);
	/* ../../public/filesystem/filesystem_passthru.h:212 */
	virtual bool MarkContentCorrupt(CFileSystemPassThru* , bool, const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:215 */
	virtual void SetContentCorruptionReportingEnabled(CFileSystemPassThru* , bool);
	/* ../../public/filesystem/filesystem_passthru.h:217 */
	virtual AccesLogWriteResult_t WriteFileAccessLog(CFileSystemPassThru* , const char* , const char* , const char* , bool);
	/* ../../public/filesystem/filesystem_passthru.h:222 */
	virtual void ResetProjectPaths(CFileSystemPassThru* , bool);
	/* ../../public/filesystem/filesystem_passthru.h:223 */
	virtual void AddProjectPath(CFileSystemPassThru* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:224 */
	virtual void AddCloudPath(CFileSystemPassThru* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:226 */
	virtual const char* GetModPath(CFileSystemPassThru* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:227 */
	virtual const char* GetSymLink(CFileSystemPassThru* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:228 */
	virtual void AddSymLink(CFileSystemPassThru* , const char* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:229 */
	virtual void RemoveSymLink(CFileSystemPassThru* , const char* , const char* );
	/* ../../public/filesystem/filesystem_passthru.h:230 */
	virtual void ClearSymLinks(CFileSystemPassThru* );
	/* ../../public/filesystem/filesystem_passthru.h:231 */
	virtual CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* GetSymLinkReloadQueue(CFileSystemPassThru* );
	/* ../../public/filesystem/filesystem_passthru.h:232 */
	virtual bool GetSearchPath(CFileSystemPassThru* , int, CUtlString* , CUtlString* );
	/* ../../public/filesystem/filesystem_passthru.h:233 */
	virtual bool SplitFullPath(CFileSystemPassThru* , const char* , CBufferString* , CBufferString* , CBufferString* );
	/* ../../public/filesystem/filesystem_passthru.h:234 */
	virtual bool GetSearchPathArgs(CFileSystemPassThru* , const char* , CBufferString* );
protected:
	IFileSystem * m_pFileSystemPassThru; /* 24 8 */
	void ~CFileSystemPassThru(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThruD4Ev */
	void CFileSystemPassThru(class CFileSystemPassThru *, class CFileSystemPassThru &); /* linkage=_ZN19CFileSystemPassThruC4EOS_ */
	void CFileSystemPassThru(class CFileSystemPassThru *, const class CFileSystemPassThru  &); /* linkage=_ZN19CFileSystemPassThruC4ERKS_ */
	void CFileSystemPassThru(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThruC4Ev */
	void InitPassThru(class CFileSystemPassThru *, class IFileSystem *, bool); /* linkage=_ZN19CFileSystemPassThru12InitPassThruEP11IFileSystemb */
	virtual bool Connect(class CFileSystemPassThru *, CreateInterfaceFn); /* linkage=_ZN19CFileSystemPassThru7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru10DisconnectEv */
	virtual void * QueryInterface(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru14QueryInterfaceEPKc */
	virtual enum InitReturnVal_t Init(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru4InitEv */
	virtual void PreShutdown(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru11PreShutdownEv */
	virtual void Shutdown(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru8ShutdownEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru15GetDependenciesEv */
	virtual enum AppSystemTier_t GetTier(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru7GetTierEv */
	virtual void Reconnect(class CFileSystemPassThru *, CreateInterfaceFn, const char  *); /* linkage=_ZN19CFileSystemPassThru9ReconnectEPFPvPKcPiES2_ */
	virtual bool IsSingleton(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru11IsSingletonEv */
	virtual enum AppSystemBuildType_t GetBuildType(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru12GetBuildTypeEv */
	virtual void RemoveAllSearchPaths(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru20RemoveAllSearchPathsEv */
	/* <3313775> ../public/filesystem/filesystem_passthru.h:95 */
	virtual void AddSearchPath(class CFileSystemPassThru *, const char  *, const char  *, enum SearchPathAdd_t, enum SearchPathPriority_t, class CUtlStringToken); /* linkage=_ZN19CFileSystemPassThru13AddSearchPathEPKcS1_15SearchPathAdd_t20SearchPathPriority_t15CUtlStringToken */
	/* <172a8f9> ../public/filesystem/filesystem_passthru.h:96 */
	virtual bool RemoveSearchPath(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru16RemoveSearchPathEPKcS1_ */
	virtual SearchPathStateHandle_t SaveSearchPathState(const class CFileSystemPassThru  *, const char  *); /* linkage=_ZNK19CFileSystemPassThru19SaveSearchPathStateEPKc */
	virtual void RestoreSearchPathState(class CFileSystemPassThru *, SearchPathStateHandle_t); /* linkage=_ZN19CFileSystemPassThru22RestoreSearchPathStateEP25SearchPathStateHandle_t__ */
	virtual void DestroySearchPathState(class CFileSystemPassThru *, SearchPathStateHandle_t); /* linkage=_ZN19CFileSystemPassThru22DestroySearchPathStateEP25SearchPathStateHandle_t__ */
	/* <3312f36> ../public/filesystem/filesystem_passthru.h:102 */
	virtual bool RemoveFile(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru10RemoveFileEPKcS1_ */
	/* <3312ce8> ../public/filesystem/filesystem_passthru.h:103 */
	virtual bool RenameFile(class CFileSystemPassThru *, const char  *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru10RenameFileEPKcS1_S1_ */
	/* <1fdb1ae> ../public/filesystem/filesystem_passthru.h:104 */
	virtual bool CreateDirHierarchy(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru18CreateDirHierarchyEPKcS1_ */
	virtual bool CreateDirHierarchyForFile(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru25CreateDirHierarchyForFileEPKcS1_ */
	virtual bool DeleteDirectory(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru15DeleteDirectoryEPKcS1_ */
	virtual bool DeleteDirectoryAndContents_R(class CFileSystemPassThru *, const char  *, const char  *, bool); /* linkage=_ZN19CFileSystemPassThru28DeleteDirectoryAndContents_REPKcS1_b */
	/* <68f235> ../public/filesystem/filesystem_passthru.h:108 */
	virtual bool IsDirectory(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru11IsDirectoryEPKcS1_ */
	virtual void FileTimeToString(class CFileSystemPassThru *, int64, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru16FileTimeToStringExP13CBufferString */
	virtual void SetBufferSize(class CFileSystemPassThru *, FileHandle_t, unsigned int); /* linkage=_ZN19CFileSystemPassThru13SetBufferSizeEPvj */
	/* <6813325> ../public/filesystem/filesystem_passthru.h:111 */
	virtual bool IsOk(class CFileSystemPassThru *, FileHandle_t); /* linkage=_ZN19CFileSystemPassThru4IsOkEPv */
	virtual bool EndOfFile(class CFileSystemPassThru *, FileHandle_t); /* linkage=_ZN19CFileSystemPassThru9EndOfFileEPv */
	/* <6813d9d> ../public/filesystem/filesystem_passthru.h:113 */
	virtual char * ReadLine(class CFileSystemPassThru *, char *, int, FileHandle_t); /* linkage=_ZN19CFileSystemPassThru8ReadLineEPciPv */
	virtual class CUtlString ReadLine(class CFileSystemPassThru *, FileHandle_t, bool); /* linkage=_ZN19CFileSystemPassThru8ReadLineEPvb */
	virtual int FPrintf(class CFileSystemPassThru *, FileHandle_t, const char  *, ...); /* linkage=_ZN19CFileSystemPassThru7FPrintfEPvPKcz */
	virtual PlatModule_t LoadModule(class CFileSystemPassThru *, const char  *, const char  *, bool); /* linkage=_ZN19CFileSystemPassThru10LoadModuleEPKcS1_b */
	virtual void UnloadModule(class CFileSystemPassThru *, PlatModule_t); /* linkage=_ZN19CFileSystemPassThru12UnloadModuleEP13_PlatModule_t */
	/* <68f01c> ../public/filesystem/filesystem_passthru.h:127 */
	virtual const char  * FindFirst(class CFileSystemPassThru *, const char  *, class FileFindHandle_t *); /* linkage=_ZN19CFileSystemPassThru9FindFirstEPKcP16FileFindHandle_t */
	/* <6814632> ../public/filesystem/filesystem_passthru.h:128 */
	virtual const char  * FindNext(class CFileSystemPassThru *, class FileFindHandle_t &); /* linkage=_ZN19CFileSystemPassThru8FindNextER16FileFindHandle_t */
	/* <681444f> ../public/filesystem/filesystem_passthru.h:129 */
	virtual bool FindIsDirectory(class CFileSystemPassThru *, const class FileFindHandle_t  &); /* linkage=_ZN19CFileSystemPassThru15FindIsDirectoryERK16FileFindHandle_t */
	/* <681426c> ../public/filesystem/filesystem_passthru.h:130 */
	virtual void FindClose(class CFileSystemPassThru *, class FileFindHandle_t &); /* linkage=_ZN19CFileSystemPassThru9FindCloseER16FileFindHandle_t */
	virtual void FindFileAbsoluteList(class CFileSystemPassThru *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru20FindFileAbsoluteListER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEEPKcS7_ */
	/* <6813b50> ../public/filesystem/filesystem_passthru.h:132 */
	virtual bool FullPathToRelativePath(class CFileSystemPassThru *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru22FullPathToRelativePathEPKcS1_P13CBufferString */
	/* <6835aca> ../public/filesystem/filesystem_passthru.h:133 */
	virtual bool RelativePathToFullWritePath(class CFileSystemPassThru *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru27RelativePathToFullWritePathEPKcS1_P13CBufferString */
	/* <6813508> ../public/filesystem/filesystem_passthru.h:134 */
	virtual bool GetCurrentDirectory(class CFileSystemPassThru *, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru19GetCurrentDirectoryEP13CBufferString */
	virtual void PrintOpenedFiles(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru16PrintOpenedFilesEv */
	virtual void PrintSearchPaths(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru16PrintSearchPathsEv */
	virtual void SetWarningFunc(class CFileSystemPassThru *, void (*)(const char  *, ...)); /* linkage=_ZN19CFileSystemPassThru14SetWarningFuncEPFvPKczE */
	virtual void SetWarningLevel(class CFileSystemPassThru *, enum FileWarningLevel_t); /* linkage=_ZN19CFileSystemPassThru15SetWarningLevelE18FileWarningLevel_t */
	virtual void AddLoggingFunc(class CFileSystemPassThru *, void (*)(const char  *, const char  *)); /* linkage=_ZN19CFileSystemPassThru14AddLoggingFuncEPFvPKcS1_E */
	virtual void RemoveLoggingFunc(class CFileSystemPassThru *, FileSystemLoggingFunc_t); /* linkage=_ZN19CFileSystemPassThru17RemoveLoggingFuncEPFvPKcS1_E */
	virtual const class FileSystemStatistics  * GetFilesystemStatistics(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru23GetFilesystemStatisticsEv */
	virtual WaitForResourcesHandle_t WaitForResources(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru16WaitForResourcesEPKc */
	virtual bool GetWaitForResourcesProgress(class CFileSystemPassThru *, WaitForResourcesHandle_t, float *, bool *); /* linkage=_ZN19CFileSystemPassThru27GetWaitForResourcesProgressEiPfPb */
	virtual void CancelWaitForResources(class CFileSystemPassThru *, WaitForResourcesHandle_t); /* linkage=_ZN19CFileSystemPassThru22CancelWaitForResourcesEi */
	virtual int HintResourceNeed(class CFileSystemPassThru *, const char  *, int); /* linkage=_ZN19CFileSystemPassThru16HintResourceNeedEPKci */
	virtual bool IsFileImmediatelyAvailable(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru26IsFileImmediatelyAvailableEPKc */
	/* <8c5f42> ../public/filesystem/filesystem_passthru.h:148 */
	virtual void GetLocalCopy(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru12GetLocalCopyEPKc */
	/* <26a4bc5> ../public/filesystem/filesystem_passthru.h:149 */
	virtual FileNameHandle_t FindOrAddFileName(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru17FindOrAddFileNameEPKc */
	virtual FileNameHandle_t FindFileName(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru12FindFileNameEPKc */
	/* <24774d1> ../public/filesystem/filesystem_passthru.h:151 */
	virtual bool String(class CFileSystemPassThru *, const FileNameHandle_t  &, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru6StringERKjP13CBufferString */
	virtual bool IsOk2(class CFileSystemPassThru *, FileHandle_t); /* linkage=_ZN19CFileSystemPassThru5IsOk2EPv */
	virtual void RemoveSearchPaths(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru17RemoveSearchPathsEPKc */
	/* <6814815> ../public/filesystem/filesystem_passthru.h:155 */
	virtual const char  * FindFirstEx(class CFileSystemPassThru *, const char  *, const char  *, class FileFindHandle_t *); /* linkage=_ZN19CFileSystemPassThru11FindFirstExEPKcS1_P16FileFindHandle_t */
	/* <331349b> ../public/filesystem/filesystem_passthru.h:160 */
	virtual void MarkPathIDByRequestOnly(class CFileSystemPassThru *, const char  *, bool); /* linkage=_ZN19CFileSystemPassThru23MarkPathIDByRequestOnlyEPKcb */
	/* <68136eb> ../public/filesystem/filesystem_passthru.h:161 */
	virtual bool IsFileInReadOnlySearchPath(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru26IsFileInReadOnlySearchPathEPKcS1_ */
	/* <331314f> ../public/filesystem/filesystem_passthru.h:162 */
	virtual void SetSearchPathReadOnly(class CFileSystemPassThru *, const char  *, const char  *, bool); /* linkage=_ZN19CFileSystemPassThru21SetSearchPathReadOnlyEPKcS1_b */
	/* <697a61a> ../public/filesystem/filesystem_passthru.h:163 */
	virtual const char  * RelativePathToFullPath(class CFileSystemPassThru *, const char  *, const char  *, class CBufferString *, enum PathTypeFilter_t); /* linkage=_ZN19CFileSystemPassThru22RelativePathToFullPathEPKcS1_P13CBufferString16PathTypeFilter_t */
	/* <13622e3> ../public/filesystem/filesystem_passthru.h:164 */
	virtual bool GetSearchPath(class CFileSystemPassThru *, const char  *, enum GetSearchPathTypes_t, class CBufferString *, int); /* linkage=_ZN19CFileSystemPassThru13GetSearchPathEPKc20GetSearchPathTypes_tP13CBufferStringi */
	virtual class CUtlStringToken GetMergeTokenForPath(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru20GetMergeTokenForPathEPKcS1_ */
	/* <23e8fe> ../public/filesystem/filesystem_passthru.h:167 */
	virtual int GetMergedPaths(class CFileSystemPassThru *, class CUtlStringToken, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru14GetMergedPathsE15CUtlStringTokenP13CBufferString */
	/* <6848d4e> ../public/filesystem/filesystem_passthru.h:169 */
	virtual FileHandle_t OpenEx(class CFileSystemPassThru *, const char  *, const char  *, unsigned int, const char  *); /* linkage=_ZN19CFileSystemPassThru6OpenExEPKcS1_jS1_ */
	/* <22430b> ../public/filesystem/filesystem_passthru.h:170 */
	virtual int ReadEx(class CFileSystemPassThru *, void *, int, int, FileHandle_t); /* linkage=_ZN19CFileSystemPassThru6ReadExEPviiS0_ */
	virtual int ReadFileEx(class CFileSystemPassThru *, const char  *, const char  *, void * *, bool, bool, int, int, FSAllocFunc_t); /* linkage=_ZN19CFileSystemPassThru10ReadFileExEPKcS1_PPvbbiiPFS2_S1_jE */
	virtual class KeyValues * LoadKeyValues(class CFileSystemPassThru *, enum KeyValuesPreloadType_t, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru13LoadKeyValuesEN11IFileSystem22KeyValuesPreloadType_tEPKcS3_ */
	virtual bool LoadKeyValues(class CFileSystemPassThru *, class KeyValues &, enum KeyValuesPreloadType_t, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru13LoadKeyValuesER9KeyValuesN11IFileSystem22KeyValuesPreloadType_tEPKcS5_ */
	virtual bool GetFileTypeForFullPath(class CFileSystemPassThru *, const char  *, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru22GetFileTypeForFullPathEPKcP13CBufferString */
	/* <224088> ../public/filesystem/filesystem_passthru.h:187 */
	virtual bool GetOptimalIOConstraints(class CFileSystemPassThru *, FileHandle_t, unsigned int *, unsigned int *, unsigned int *); /* linkage=_ZN19CFileSystemPassThru23GetOptimalIOConstraintsEPvPjS1_S1_ */
	/* <223d97> ../public/filesystem/filesystem_passthru.h:188 */
	virtual void * AllocOptimalReadBuffer(class CFileSystemPassThru *, FileHandle_t, unsigned int, unsigned int); /* linkage=_ZN19CFileSystemPassThru22AllocOptimalReadBufferEPvjj */
	/* <223bb3> ../public/filesystem/filesystem_passthru.h:189 */
	virtual void FreeOptimalReadBuffer(class CFileSystemPassThru *, void *); /* linkage=_ZN19CFileSystemPassThru21FreeOptimalReadBufferEPv */
	/* <697a397> ../public/filesystem/filesystem_passthru.h:190 */
	virtual bool ReadToBuffer(class CFileSystemPassThru *, FileHandle_t, class CUtlBuffer &, int, FSAllocFunc_t); /* linkage=_ZN19CFileSystemPassThru12ReadToBufferEPvR10CUtlBufferiPFS0_PKcjE */
	virtual int GetPathIndex(class CFileSystemPassThru *, const FileNameHandle_t  &); /* linkage=_ZN19CFileSystemPassThru12GetPathIndexERKj */
	virtual int64 GetPathTime(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru11GetPathTimeEPKcS1_ */
	virtual int GetSearchPathID(class CFileSystemPassThru *, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru15GetSearchPathIDEP13CBufferString */
	/* <f44ed9> ../public/filesystem/filesystem_passthru.h:196 */
	virtual bool AddVPKFile(class CFileSystemPassThru *, const char  *, const char  *, enum SearchPathAdd_t); /* linkage=_ZN19CFileSystemPassThru10AddVPKFileEPKcS1_15SearchPathAdd_t */
	/* <f44859> ../public/filesystem/filesystem_passthru.h:197 */
	virtual void RemoveVPKFile(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru13RemoveVPKFileEPKcS1_ */
	virtual bool IsVPKFileLoaded(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru15IsVPKFileLoadedEPKc */
	virtual void SetIODelayAlarm(class CFileSystemPassThru *, float); /* linkage=_ZN19CFileSystemPassThru15SetIODelayAlarmEf */
	/* <6813142> ../public/filesystem/filesystem_passthru.h:202 */
	virtual bool IsPathInvalidForFilesystem(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru26IsPathInvalidForFilesystemEPKc */
	virtual void GetAvailableDrives(class CFileSystemPassThru *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN19CFileSystemPassThru18GetAvailableDrivesER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	/* <6813903> ../public/filesystem/filesystem_passthru.h:206 */
	virtual void GetSearchPathsForPathID(const class CFileSystemPassThru  *, const char  *, enum GetSearchPathTypes_t, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZNK19CFileSystemPassThru23GetSearchPathsForPathIDEPKc20GetSearchPathTypes_tR10CUtlVectorI10CUtlString10CUtlMemoryIS4_iEE */
	/* <f4461c> ../public/filesystem/filesystem_passthru.h:208 */
	virtual void SuppressAsyncFileRequestFlushOnPathChange(class CFileSystemPassThru *, bool); /* linkage=_ZN19CFileSystemPassThru41SuppressAsyncFileRequestFlushOnPathChangeEb */
	/* <697a89d> ../public/filesystem/filesystem_passthru.h:212 */
	virtual bool MarkContentCorrupt(class CFileSystemPassThru *, bool, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru18MarkContentCorruptEbPKcS1_ */
	/* <1601fe> ../public/filesystem/filesystem_passthru.h:215 */
	virtual void SetContentCorruptionReportingEnabled(class CFileSystemPassThru *, bool); /* linkage=_ZN19CFileSystemPassThru36SetContentCorruptionReportingEnabledEb */
	virtual enum AccesLogWriteResult_t WriteFileAccessLog(class CFileSystemPassThru *, const char  *, const char  *, const char  *, bool); /* linkage=_ZN19CFileSystemPassThru18WriteFileAccessLogEPKcS1_S1_b */
	/* <136023a> ../public/filesystem/filesystem_passthru.h:222 */
	virtual void ResetProjectPaths(class CFileSystemPassThru *, bool); /* linkage=_ZN19CFileSystemPassThru17ResetProjectPathsEb */
	/* <13609b2> ../public/filesystem/filesystem_passthru.h:223 */
	virtual void AddProjectPath(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru14AddProjectPathEPKcS1_ */
	/* <1360799> ../public/filesystem/filesystem_passthru.h:224 */
	virtual void AddCloudPath(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru12AddCloudPathEPKcS1_ */
	virtual const char  * GetModPath(class CFileSystemPassThru *, const char  *); /* linkage=_ZN19CFileSystemPassThru10GetModPathEPKc */
	/* <13618b0> ../public/filesystem/filesystem_passthru.h:227 */
	virtual const char  * GetSymLink(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru10GetSymLinkEPKcS1_ */
	/* <1361662> ../public/filesystem/filesystem_passthru.h:228 */
	virtual void AddSymLink(class CFileSystemPassThru *, const char  *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru10AddSymLinkEPKcS1_S1_ */
	/* <1360580> ../public/filesystem/filesystem_passthru.h:229 */
	virtual void RemoveSymLink(class CFileSystemPassThru *, const char  *, const char  *); /* linkage=_ZN19CFileSystemPassThru13RemoveSymLinkEPKcS1_ */
	virtual void ClearSymLinks(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru13ClearSymLinksEv */
	/* <2385a56> ../public/filesystem/filesystem_passthru.h:231 */
	virtual class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > * GetSymLinkReloadQueue(class CFileSystemPassThru *); /* linkage=_ZN19CFileSystemPassThru21GetSymLinkReloadQueueEv */
	virtual bool GetSearchPath(class CFileSystemPassThru *, int, class CUtlString *, class CUtlString *); /* linkage=_ZN19CFileSystemPassThru13GetSearchPathEiP10CUtlStringS1_ */
	virtual bool SplitFullPath(class CFileSystemPassThru *, const char  *, class CBufferString *, class CBufferString *, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru13SplitFullPathEPKcP13CBufferStringS3_S3_ */
	/* <1361449> ../public/filesystem/filesystem_passthru.h:234 */
	virtual bool GetSearchPathArgs(class CFileSystemPassThru *, const char  *, class CBufferString *); /* linkage=_ZN19CFileSystemPassThru17GetSearchPathArgsEPKcP13CBufferString */
};

// <04649401> ../public/filesystem/filesystem_passthru.h:82
void CFileSystemPassThru::Connect(CreateInterfaceFn factory)
{
} /* size: 0 */

// <046493E9> ../public/filesystem/filesystem_passthru.h:83
void CFileSystemPassThru::Disconnect()
{
} /* size: 0 */

// <046493C0> ../public/filesystem/filesystem_passthru.h:84
void* CFileSystemPassThru::QueryInterface(const char* pInterfaceName)
{
} /* size: 0 */

// <046493A8> ../public/filesystem/filesystem_passthru.h:85
void CFileSystemPassThru::Init()
{
} /* size: 0 */

// <04649390> ../public/filesystem/filesystem_passthru.h:86
void CFileSystemPassThru::PreShutdown()
{
} /* size: 0 */

// <04649378> ../public/filesystem/filesystem_passthru.h:87
void CFileSystemPassThru::Shutdown()
{
} /* size: 0 */

// <04649360> ../public/filesystem/filesystem_passthru.h:88
void CFileSystemPassThru::GetDependencies()
{
} /* size: 0 */

// <04649348> ../public/filesystem/filesystem_passthru.h:89
void CFileSystemPassThru::GetTier()
{
} /* size: 0 */

// <04649318> ../public/filesystem/filesystem_passthru.h:90
void CFileSystemPassThru::Reconnect(CreateInterfaceFn factory, const char* pInterfaceName)
{
} /* size: 0 */

// <04649300> ../public/filesystem/filesystem_passthru.h:91
void CFileSystemPassThru::IsSingleton()
{
} /* size: 0 */

// <046492E8> ../public/filesystem/filesystem_passthru.h:92
void CFileSystemPassThru::GetBuildType()
{
} /* size: 0 */

// <03313775> ../public/filesystem/filesystem_passthru.h:95
// function calls: 8
void CFileSystemPassThru::AddSearchPath(const char* pPath, const char* pathID, SearchPathAdd_t addType, SearchPathPriority_t nPriority, CUtlStringToken pathMergeToken)
{
	CFileSystemPassThru::AddSearchPath(
			const char* pPath,
			const char* pathID,
			SearchPathAdd_t addType,
			SearchPathPriority_t nPriority,
			CUtlStringToken pathMergeToken);  // 95
	CFileSystemPassThru::AddSearchPath(
			const char* pPath,
			const char* pathID,
			SearchPathAdd_t addType,
			SearchPathPriority_t nPriority,
			CUtlStringToken pathMergeToken);  // 95
	CFileSystemPassThru::AddSearchPath(
			const char* pPath,
			const char* pathID,
			SearchPathAdd_t addType,
			SearchPathPriority_t nPriority,
			CUtlStringToken pathMergeToken);  // 95
	CFileSystemPassThru::AddSearchPath(
			const char* pPath,
			const char* pathID,
			SearchPathAdd_t addType,
			SearchPathPriority_t nPriority,
			CUtlStringToken pathMergeToken);  // 95
	CFileSystemPassThru::AddSearchPath(
			const char* pPath,
			const char* pathID,
			SearchPathAdd_t addType,
			SearchPathPriority_t nPriority,
			CUtlStringToken pathMergeToken);  // 95
	CFileSystemPassThru::AddSearchPath(
			const char* pPath,
			const char* pathID,
			SearchPathAdd_t addType,
			SearchPathPriority_t nPriority,
			CUtlStringToken pathMergeToken);  // 95
	CFileSystemPassThru::AddSearchPath(
			const char* pPath,
			const char* pathID,
			SearchPathAdd_t addType,
			SearchPathPriority_t nPriority,
			CUtlStringToken pathMergeToken);  // 95
	CFileSystemPassThru::AddSearchPath(
			const char* pPath,
			const char* pathID,
			SearchPathAdd_t addType,
			SearchPathPriority_t nPriority,
			CUtlStringToken pathMergeToken);  // 95
} /* size: 197, inline expansions: 8 (704 bytes) */

// <03310EB7> ../public/filesystem/filesystem_passthru.h:95
inline void CFileSystemPassThru::AddSearchPath(const char* pPath, const char* pathID, SearchPathAdd_t addType, SearchPathPriority_t nPriority, CUtlStringToken pathMergeToken)
{
} /* size: 0 */

// <0014A8AF> ../public/filesystem/filesystem_passthru.h:95
void CFileSystemPassThru::AddSearchPath(const char* pPath, const char* pathID, SearchPathAdd_t addType, SearchPathPriority_t nPriority, CUtlStringToken pathMergeToken)
{
} /* size: 0 */

// <0172A8F9> ../public/filesystem/filesystem_passthru.h:96
// function calls: 8
void CFileSystemPassThru::RemoveSearchPath(const char* pPath, const char* pathID)
{
	CFileSystemPassThru::RemoveSearchPath(
			const char* pPath,
			const char* pathID);  // 96
	CFileSystemPassThru::RemoveSearchPath(
			const char* pPath,
			const char* pathID);  // 96
	CFileSystemPassThru::RemoveSearchPath(
			const char* pPath,
			const char* pathID);  // 96
	CFileSystemPassThru::RemoveSearchPath(
			const char* pPath,
			const char* pathID);  // 96
	CFileSystemPassThru::RemoveSearchPath(
			const char* pPath,
			const char* pathID);  // 96
	CFileSystemPassThru::RemoveSearchPath(
			const char* pPath,
			const char* pathID);  // 96
	CFileSystemPassThru::RemoveSearchPath(
			const char* pPath,
			const char* pathID);  // 96
	CFileSystemPassThru::RemoveSearchPath(
			const char* pPath,
			const char* pathID);  // 96
} /* size: 165, inline expansions: 8 (608 bytes) */

// <01728E1B> ../public/filesystem/filesystem_passthru.h:96
inline void CFileSystemPassThru::RemoveSearchPath(const char* pPath, const char* pathID)
{
} /* size: 0 */

// <03312F36> ../public/filesystem/filesystem_passthru.h:102
// function calls: 8
void CFileSystemPassThru::RemoveFile(const char* pRelativePath, const char* pathID)
{
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
			const char* pathID);  // 102
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
			const char* pathID);  // 102
} /* size: 196, inline expansions: 8 (720 bytes) */

// <03310E86> ../public/filesystem/filesystem_passthru.h:102
inline void CFileSystemPassThru::RemoveFile(const char* pRelativePath, const char* pathID)
{
} /* size: 0 */

// <00106476> ../public/filesystem/filesystem_passthru.h:102
void CFileSystemPassThru::RemoveFile(const char* pRelativePath, const char* pathID)
{
} /* size: 0 */

// <03312CE8> ../public/filesystem/filesystem_passthru.h:103
// function calls: 8
void CFileSystemPassThru::RenameFile(const char* pOldPath, const char* pNewPath, const char* pathID)
{
	CFileSystemPassThru::RenameFile(
			const char* pOldPath,
			const char* pNewPath,
			const char* pathID);  // 103
	CFileSystemPassThru::RenameFile(
			const char* pOldPath,
			const char* pNewPath,
			const char* pathID);  // 103
	CFileSystemPassThru::RenameFile(
			const char* pOldPath,
			const char* pNewPath,
			const char* pathID);  // 103
	CFileSystemPassThru::RenameFile(
			const char* pOldPath,
			const char* pNewPath,
			const char* pathID);  // 103
	CFileSystemPassThru::RenameFile(
			const char* pOldPath,
			const char* pNewPath,
			const char* pathID);  // 103
	CFileSystemPassThru::RenameFile(
			const char* pOldPath,
			const char* pNewPath,
			const char* pathID);  // 103
	CFileSystemPassThru::RenameFile(
			const char* pOldPath,
			const char* pNewPath,
			const char* pathID);  // 103
	CFileSystemPassThru::RenameFile(
			const char* pOldPath,
			const char* pNewPath,
			const char* pathID);  // 103
} /* size: 197, inline expansions: 8 (720 bytes) */

// <03310E49> ../public/filesystem/filesystem_passthru.h:103
inline void CFileSystemPassThru::RenameFile(const char* pOldPath, const char* pNewPath, const char* pathID)
{
} /* size: 0 */

// <01FDB1AE> ../public/filesystem/filesystem_passthru.h:104
// function calls: 8
void CFileSystemPassThru::CreateDirHierarchy(const char* path, const char* pathID)
{
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
				const char* pathID);  // 104
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
				const char* pathID);  // 104
} /* size: 196, inline expansions: 8 (720 bytes) */

// <01FDACF6> ../public/filesystem/filesystem_passthru.h:104
inline void CFileSystemPassThru::CreateDirHierarchy(const char* path, const char* pathID)
{
} /* size: 0 */

// <0014A87F> ../public/filesystem/filesystem_passthru.h:104
void CFileSystemPassThru::CreateDirHierarchy(const char* path, const char* pathID)
{
} /* size: 0 */

// <00106445> ../public/filesystem/filesystem_passthru.h:106
void CFileSystemPassThru::DeleteDirectory(const char* pPath, const char* pPathID)
{
} /* size: 0 */

// <0068F235> ../public/filesystem/filesystem_passthru.h:108
// function calls: 8
void CFileSystemPassThru::IsDirectory(const char* pFileName, const char* pathID)
{
	CFileSystemPassThru::IsDirectory(
			const char* pFileName,
			const char* pathID);  // 108
	CFileSystemPassThru::IsDirectory(
			const char* pFileName,
			const char* pathID);  // 108
	CFileSystemPassThru::IsDirectory(
			const char* pFileName,
			const char* pathID);  // 108
	CFileSystemPassThru::IsDirectory(
			const char* pFileName,
			const char* pathID);  // 108
	CFileSystemPassThru::IsDirectory(
			const char* pFileName,
			const char* pathID);  // 108
	CFileSystemPassThru::IsDirectory(
			const char* pFileName,
			const char* pathID);  // 108
	CFileSystemPassThru::IsDirectory(
			const char* pFileName,
			const char* pathID);  // 108
	CFileSystemPassThru::IsDirectory(
			const char* pFileName,
			const char* pathID);  // 108
} /* size: 196, inline expansions: 8 (720 bytes) */

// <0068C890> ../public/filesystem/filesystem_passthru.h:108
inline void CFileSystemPassThru::IsDirectory(const char* pFileName, const char* pathID)
{
} /* size: 0 */

// <06813325> ../public/filesystem/filesystem_passthru.h:111
// function calls: 8
void CFileSystemPassThru::IsOk(FileHandle_t file)
{
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
} /* size: 196, inline expansions: 8 (720 bytes) */

// <06812799> ../public/filesystem/filesystem_passthru.h:111
inline void CFileSystemPassThru::IsOk(FileHandle_t file)
{
} /* size: 0 */

// <06813D9D> ../public/filesystem/filesystem_passthru.h:113
// function calls: 8
void CFileSystemPassThru::ReadLine(char* pOutput, int maxChars, FileHandle_t file)
{
	CFileSystemPassThru::ReadLine(
		char* pOutput,
		int maxChars,
		FileHandle_t file);  // 113
	CFileSystemPassThru::ReadLine(
		char* pOutput,
		int maxChars,
		FileHandle_t file);  // 113
	CFileSystemPassThru::ReadLine(
		char* pOutput,
		int maxChars,
		FileHandle_t file);  // 113
	CFileSystemPassThru::ReadLine(
		char* pOutput,
		int maxChars,
		FileHandle_t file);  // 113
	CFileSystemPassThru::ReadLine(
		char* pOutput,
		int maxChars,
		FileHandle_t file);  // 113
	CFileSystemPassThru::ReadLine(
		char* pOutput,
		int maxChars,
		FileHandle_t file);  // 113
	CFileSystemPassThru::ReadLine(
		char* pOutput,
		int maxChars,
		FileHandle_t file);  // 113
	CFileSystemPassThru::ReadLine(
		char* pOutput,
		int maxChars,
		FileHandle_t file);  // 113
} /* size: 197, inline expansions: 8 (720 bytes) */

// <0681275C> ../public/filesystem/filesystem_passthru.h:113
inline void CFileSystemPassThru::ReadLine(char* pOutput, int maxChars, FileHandle_t file)
{
} /* size: 0 */

// <06352956> ../public/filesystem/filesystem_passthru.h:116
// variables: 2
void CFileSystemPassThru::FPrintf(FileHandle_t file, const char* pFormat, ...)
{
	char str; // 118
	va_list marker; // 119
} /* size: 0, variables: 2 */

// <0068F01C> ../public/filesystem/filesystem_passthru.h:127
// function calls: 8
void CFileSystemPassThru::FindFirst(const char* pWildCard, FileFindHandle_t* pHandle)
{
	CFileSystemPassThru::FindFirst(
			const char* pWildCard,
			FileFindHandle_t* pHandle);  // 127
	CFileSystemPassThru::FindFirst(
			const char* pWildCard,
			FileFindHandle_t* pHandle);  // 127
	CFileSystemPassThru::FindFirst(
			const char* pWildCard,
			FileFindHandle_t* pHandle);  // 127
	CFileSystemPassThru::FindFirst(
			const char* pWildCard,
			FileFindHandle_t* pHandle);  // 127
	CFileSystemPassThru::FindFirst(
			const char* pWildCard,
			FileFindHandle_t* pHandle);  // 127
	CFileSystemPassThru::FindFirst(
			const char* pWildCard,
			FileFindHandle_t* pHandle);  // 127
	CFileSystemPassThru::FindFirst(
			const char* pWildCard,
			FileFindHandle_t* pHandle);  // 127
	CFileSystemPassThru::FindFirst(
			const char* pWildCard,
			FileFindHandle_t* pHandle);  // 127
} /* size: 196, inline expansions: 8 (720 bytes) */

// <0068C85F> ../public/filesystem/filesystem_passthru.h:127
inline void CFileSystemPassThru::FindFirst(const char* pWildCard, FileFindHandle_t* pHandle)
{
} /* size: 0 */

// <06814632> ../public/filesystem/filesystem_passthru.h:128
// function calls: 8
void CFileSystemPassThru::FindNext(FileFindHandle_t& handle)
{
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
} /* size: 196, inline expansions: 8 (720 bytes) */

// <06812737> ../public/filesystem/filesystem_passthru.h:128
inline void CFileSystemPassThru::FindNext(FileFindHandle_t& handle)
{
} /* size: 0 */

// <0681444F> ../public/filesystem/filesystem_passthru.h:129
// function calls: 8
void CFileSystemPassThru::FindIsDirectory(const FileFindHandle_t& handle)
{
	CFileSystemPassThru::FindIsDirectory(
			const FileFindHandle_t& handle);  // 129
	CFileSystemPassThru::FindIsDirectory(
			const FileFindHandle_t& handle);  // 129
	CFileSystemPassThru::FindIsDirectory(
			const FileFindHandle_t& handle);  // 129
	CFileSystemPassThru::FindIsDirectory(
			const FileFindHandle_t& handle);  // 129
	CFileSystemPassThru::FindIsDirectory(
			const FileFindHandle_t& handle);  // 129
	CFileSystemPassThru::FindIsDirectory(
			const FileFindHandle_t& handle);  // 129
	CFileSystemPassThru::FindIsDirectory(
			const FileFindHandle_t& handle);  // 129
	CFileSystemPassThru::FindIsDirectory(
			const FileFindHandle_t& handle);  // 129
} /* size: 0, inline expansions: 8 (0 bytes) */

// <06812712> ../public/filesystem/filesystem_passthru.h:129
inline void CFileSystemPassThru::FindIsDirectory(const FileFindHandle_t& handle)
{
} /* size: 0 */

// <0681426C> ../public/filesystem/filesystem_passthru.h:130
// function calls: 8
void CFileSystemPassThru::FindClose(FileFindHandle_t& handle)
{
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
} /* size: 196, inline expansions: 8 (720 bytes) */

// <068126ED> ../public/filesystem/filesystem_passthru.h:130
inline void CFileSystemPassThru::FindClose(FileFindHandle_t& handle)
{
} /* size: 0 */

// <00106420> ../public/filesystem/filesystem_passthru.h:130
void CFileSystemPassThru::FindClose(FileFindHandle_t& handle)
{
} /* size: 0 */

// <06813B50> ../public/filesystem/filesystem_passthru.h:132
// function calls: 8
void CFileSystemPassThru::FullPathToRelativePath(const char* pFullpath, const char* pPathId, CBufferString* pRelative)
{
	CFileSystemPassThru::FullPathToRelativePath(
				const char* pFullpath,
				const char* pPathId,
				CBufferString* pRelative);  // 132
	CFileSystemPassThru::FullPathToRelativePath(
				const char* pFullpath,
				const char* pPathId,
				CBufferString* pRelative);  // 132
	CFileSystemPassThru::FullPathToRelativePath(
				const char* pFullpath,
				const char* pPathId,
				CBufferString* pRelative);  // 132
	CFileSystemPassThru::FullPathToRelativePath(
				const char* pFullpath,
				const char* pPathId,
				CBufferString* pRelative);  // 132
	CFileSystemPassThru::FullPathToRelativePath(
				const char* pFullpath,
				const char* pPathId,
				CBufferString* pRelative);  // 132
	CFileSystemPassThru::FullPathToRelativePath(
				const char* pFullpath,
				const char* pPathId,
				CBufferString* pRelative);  // 132
	CFileSystemPassThru::FullPathToRelativePath(
				const char* pFullpath,
				const char* pPathId,
				CBufferString* pRelative);  // 132
	CFileSystemPassThru::FullPathToRelativePath(
				const char* pFullpath,
				const char* pPathId,
				CBufferString* pRelative);  // 132
} /* size: 0, inline expansions: 8 (0 bytes) */

// <068126B0> ../public/filesystem/filesystem_passthru.h:132
inline void CFileSystemPassThru::FullPathToRelativePath(const char* pFullpath, const char* pPathId, CBufferString* pRelative)
{
} /* size: 0 */

// <06835ACA> ../public/filesystem/filesystem_passthru.h:133
// function calls: 8
void CFileSystemPassThru::RelativePathToFullWritePath(const char* pRelativePath, const char* pWritePathID, CBufferString* pLocalPath)
{
	CFileSystemPassThru::RelativePathToFullWritePath(
					const char* pRelativePath,
					const char* pWritePathID,
					CBufferString* pLocalPath);  // 133
	CFileSystemPassThru::RelativePathToFullWritePath(
					const char* pRelativePath,
					const char* pWritePathID,
					CBufferString* pLocalPath);  // 133
	CFileSystemPassThru::RelativePathToFullWritePath(
					const char* pRelativePath,
					const char* pWritePathID,
					CBufferString* pLocalPath);  // 133
	CFileSystemPassThru::RelativePathToFullWritePath(
					const char* pRelativePath,
					const char* pWritePathID,
					CBufferString* pLocalPath);  // 133
	CFileSystemPassThru::RelativePathToFullWritePath(
					const char* pRelativePath,
					const char* pWritePathID,
					CBufferString* pLocalPath);  // 133
	CFileSystemPassThru::RelativePathToFullWritePath(
					const char* pRelativePath,
					const char* pWritePathID,
					CBufferString* pLocalPath);  // 133
	CFileSystemPassThru::RelativePathToFullWritePath(
					const char* pRelativePath,
					const char* pWritePathID,
					CBufferString* pLocalPath);  // 133
	CFileSystemPassThru::RelativePathToFullWritePath(
					const char* pRelativePath,
					const char* pWritePathID,
					CBufferString* pLocalPath);  // 133
} /* size: 197, inline expansions: 8 (720 bytes) */

// <06835353> ../public/filesystem/filesystem_passthru.h:133
inline void CFileSystemPassThru::RelativePathToFullWritePath(const char* pRelativePath, const char* pWritePathID, CBufferString* pLocalPath)
{
} /* size: 0 */

// <06813508> ../public/filesystem/filesystem_passthru.h:134
// function calls: 8
void CFileSystemPassThru::GetCurrentDirectory(CBufferString* pDirectory)
{
	CFileSystemPassThru::GetCurrentDirectory(
				CBufferString* pDirectory);  // 134
	CFileSystemPassThru::GetCurrentDirectory(
				CBufferString* pDirectory);  // 134
	CFileSystemPassThru::GetCurrentDirectory(
				CBufferString* pDirectory);  // 134
	CFileSystemPassThru::GetCurrentDirectory(
				CBufferString* pDirectory);  // 134
	CFileSystemPassThru::GetCurrentDirectory(
				CBufferString* pDirectory);  // 134
	CFileSystemPassThru::GetCurrentDirectory(
				CBufferString* pDirectory);  // 134
	CFileSystemPassThru::GetCurrentDirectory(
				CBufferString* pDirectory);  // 134
	CFileSystemPassThru::GetCurrentDirectory(
				CBufferString* pDirectory);  // 134
} /* size: 0, inline expansions: 8 (0 bytes) */

// <0681268B> ../public/filesystem/filesystem_passthru.h:134
inline void CFileSystemPassThru::GetCurrentDirectory(CBufferString* pDirectory)
{
} /* size: 0 */

// <008C5F42> ../public/filesystem/filesystem_passthru.h:148
// function calls: 8
void CFileSystemPassThru::GetLocalCopy(const char* pFileName)
{
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 148
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 148
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 148
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 148
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 148
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 148
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 148
	CFileSystemPassThru::GetLocalCopy(
			const char* pFileName);  // 148
} /* size: 0, inline expansions: 8 (0 bytes) */

// <008C34CD> ../public/filesystem/filesystem_passthru.h:148
inline void CFileSystemPassThru::GetLocalCopy(const char* pFileName)
{
} /* size: 0 */

// <026A4BC5> ../public/filesystem/filesystem_passthru.h:149
// function calls: 8
void CFileSystemPassThru::FindOrAddFileName(const char* pFileName)
{
	CFileSystemPassThru::FindOrAddFileName(
				const char* pFileName);  // 149
	CFileSystemPassThru::FindOrAddFileName(
				const char* pFileName);  // 149
	CFileSystemPassThru::FindOrAddFileName(
				const char* pFileName);  // 149
	CFileSystemPassThru::FindOrAddFileName(
				const char* pFileName);  // 149
	CFileSystemPassThru::FindOrAddFileName(
				const char* pFileName);  // 149
	CFileSystemPassThru::FindOrAddFileName(
				const char* pFileName);  // 149
	CFileSystemPassThru::FindOrAddFileName(
				const char* pFileName);  // 149
	CFileSystemPassThru::FindOrAddFileName(
				const char* pFileName);  // 149
} /* size: 196, inline expansions: 8 (720 bytes) */

// <026A4042> ../public/filesystem/filesystem_passthru.h:149
inline void CFileSystemPassThru::FindOrAddFileName(const char* pFileName)
{
} /* size: 0 */

// <024774D1> ../public/filesystem/filesystem_passthru.h:151
// function calls: 8
void CFileSystemPassThru::String(const FileNameHandle_t& handle, CBufferString* pStrBuf)
{
	CFileSystemPassThru::String(
		const FileNameHandle_t& handle,
		CBufferString* pStrBuf);  // 151
	CFileSystemPassThru::String(
		const FileNameHandle_t& handle,
		CBufferString* pStrBuf);  // 151
	CFileSystemPassThru::String(
		const FileNameHandle_t& handle,
		CBufferString* pStrBuf);  // 151
	CFileSystemPassThru::String(
		const FileNameHandle_t& handle,
		CBufferString* pStrBuf);  // 151
	CFileSystemPassThru::String(
		const FileNameHandle_t& handle,
		CBufferString* pStrBuf);  // 151
	CFileSystemPassThru::String(
		const FileNameHandle_t& handle,
		CBufferString* pStrBuf);  // 151
	CFileSystemPassThru::String(
		const FileNameHandle_t& handle,
		CBufferString* pStrBuf);  // 151
	CFileSystemPassThru::String(
		const FileNameHandle_t& handle,
		CBufferString* pStrBuf);  // 151
} /* size: 196, inline expansions: 8 (720 bytes) */

// <02476628> ../public/filesystem/filesystem_passthru.h:151
inline void CFileSystemPassThru::String(const FileNameHandle_t& handle, CBufferString* pStrBuf)
{
} /* size: 0 */

// <0014A85B> ../public/filesystem/filesystem_passthru.h:153
void CFileSystemPassThru::RemoveSearchPaths(const char* szPathID)
{
} /* size: 0 */

// <06814815> ../public/filesystem/filesystem_passthru.h:155
// function calls: 8
void CFileSystemPassThru::FindFirstEx(const char* pWildCard, const char* pPathID, FileFindHandle_t* pHandle)
{
	CFileSystemPassThru::FindFirstEx(
			const char* pWildCard,
			const char* pPathID,
			FileFindHandle_t* pHandle);  // 159
	CFileSystemPassThru::FindFirstEx(
			const char* pWildCard,
			const char* pPathID,
			FileFindHandle_t* pHandle);  // 159
	CFileSystemPassThru::FindFirstEx(
			const char* pWildCard,
			const char* pPathID,
			FileFindHandle_t* pHandle);  // 159
	CFileSystemPassThru::FindFirstEx(
			const char* pWildCard,
			const char* pPathID,
			FileFindHandle_t* pHandle);  // 159
	CFileSystemPassThru::FindFirstEx(
			const char* pWildCard,
			const char* pPathID,
			FileFindHandle_t* pHandle);  // 159
	CFileSystemPassThru::FindFirstEx(
			const char* pWildCard,
			const char* pPathID,
			FileFindHandle_t* pHandle);  // 159
	CFileSystemPassThru::FindFirstEx(
			const char* pWildCard,
			const char* pPathID,
			FileFindHandle_t* pHandle);  // 159
	CFileSystemPassThru::FindFirstEx(
			const char* pWildCard,
			const char* pPathID,
			FileFindHandle_t* pHandle);  // 159
} /* size: 0, inline expansions: 8 (0 bytes) */

// <0681264E> ../public/filesystem/filesystem_passthru.h:155
inline void CFileSystemPassThru::FindFirstEx(const char* pWildCard, const char* pPathID, FileFindHandle_t* pHandle)
{
} /* size: 0 */

// <0331349B> ../public/filesystem/filesystem_passthru.h:160
// function calls: 8
void CFileSystemPassThru::MarkPathIDByRequestOnly(const char* pPathID, bool bRequestOnly)
{
	CFileSystemPassThru::MarkPathIDByRequestOnly(
				const char* pPathID,
				bool bRequestOnly);  // 160
	CFileSystemPassThru::MarkPathIDByRequestOnly(
				const char* pPathID,
				bool bRequestOnly);  // 160
	CFileSystemPassThru::MarkPathIDByRequestOnly(
				const char* pPathID,
				bool bRequestOnly);  // 160
	CFileSystemPassThru::MarkPathIDByRequestOnly(
				const char* pPathID,
				bool bRequestOnly);  // 160
	CFileSystemPassThru::MarkPathIDByRequestOnly(
				const char* pPathID,
				bool bRequestOnly);  // 160
	CFileSystemPassThru::MarkPathIDByRequestOnly(
				const char* pPathID,
				bool bRequestOnly);  // 160
	CFileSystemPassThru::MarkPathIDByRequestOnly(
				const char* pPathID,
				bool bRequestOnly);  // 160
	CFileSystemPassThru::MarkPathIDByRequestOnly(
				const char* pPathID,
				bool bRequestOnly);  // 160
} /* size: 231, inline expansions: 8 (832 bytes) */

// <03310E18> ../public/filesystem/filesystem_passthru.h:160
inline void CFileSystemPassThru::MarkPathIDByRequestOnly(const char* pPathID, bool bRequestOnly)
{
} /* size: 0 */

// <0014A82B> ../public/filesystem/filesystem_passthru.h:160
void CFileSystemPassThru::MarkPathIDByRequestOnly(const char* pPathID, bool bRequestOnly)
{
} /* size: 0 */

// <068136EB> ../public/filesystem/filesystem_passthru.h:161
// function calls: 8
void CFileSystemPassThru::IsFileInReadOnlySearchPath(const char* pPath, const char* pathID)
{
	CFileSystemPassThru::IsFileInReadOnlySearchPath(
					const char* pPath,
					const char* pathID);  // 161
	CFileSystemPassThru::IsFileInReadOnlySearchPath(
					const char* pPath,
					const char* pathID);  // 161
	CFileSystemPassThru::IsFileInReadOnlySearchPath(
					const char* pPath,
					const char* pathID);  // 161
	CFileSystemPassThru::IsFileInReadOnlySearchPath(
					const char* pPath,
					const char* pathID);  // 161
	CFileSystemPassThru::IsFileInReadOnlySearchPath(
					const char* pPath,
					const char* pathID);  // 161
	CFileSystemPassThru::IsFileInReadOnlySearchPath(
					const char* pPath,
					const char* pathID);  // 161
	CFileSystemPassThru::IsFileInReadOnlySearchPath(
					const char* pPath,
					const char* pathID);  // 161
	CFileSystemPassThru::IsFileInReadOnlySearchPath(
					const char* pPath,
					const char* pathID);  // 161
} /* size: 0, inline expansions: 8 (0 bytes) */

// <0681261D> ../public/filesystem/filesystem_passthru.h:161
inline void CFileSystemPassThru::IsFileInReadOnlySearchPath(const char* pPath, const char* pathID)
{
} /* size: 0 */

// <0331314F> ../public/filesystem/filesystem_passthru.h:162
// function calls: 8
void CFileSystemPassThru::SetSearchPathReadOnly(const char* pPath, const char* pathID, bool bReadOnly)
{
	CFileSystemPassThru::SetSearchPathReadOnly(
				const char* pPath,
				const char* pathID,
				bool bReadOnly);  // 162
	CFileSystemPassThru::SetSearchPathReadOnly(
				const char* pPath,
				const char* pathID,
				bool bReadOnly);  // 162
	CFileSystemPassThru::SetSearchPathReadOnly(
				const char* pPath,
				const char* pathID,
				bool bReadOnly);  // 162
	CFileSystemPassThru::SetSearchPathReadOnly(
				const char* pPath,
				const char* pathID,
				bool bReadOnly);  // 162
	CFileSystemPassThru::SetSearchPathReadOnly(
				const char* pPath,
				const char* pathID,
				bool bReadOnly);  // 162
	CFileSystemPassThru::SetSearchPathReadOnly(
				const char* pPath,
				const char* pathID,
				bool bReadOnly);  // 162
	CFileSystemPassThru::SetSearchPathReadOnly(
				const char* pPath,
				const char* pathID,
				bool bReadOnly);  // 162
	CFileSystemPassThru::SetSearchPathReadOnly(
				const char* pPath,
				const char* pathID,
				bool bReadOnly);  // 162
} /* size: 229, inline expansions: 8 (776 bytes) */

// <03310DDB> ../public/filesystem/filesystem_passthru.h:162
inline void CFileSystemPassThru::SetSearchPathReadOnly(const char* pPath, const char* pathID, bool bReadOnly)
{
} /* size: 0 */

// <0697A61A> ../public/filesystem/filesystem_passthru.h:163
// function calls: 8
void CFileSystemPassThru::RelativePathToFullPath(const char* pFileName, const char* pPathID, CBufferString* pLocalPath, PathTypeFilter_t pathFilter)
{
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
} /* size: 197, inline expansions: 8 (720 bytes) */

// <06971BBC> ../public/filesystem/filesystem_passthru.h:163
inline void CFileSystemPassThru::RelativePathToFullPath(const char* pFileName, const char* pPathID, CBufferString* pLocalPath, PathTypeFilter_t pathFilter)
{
} /* size: 0 */

// <05DFEBE3> ../public/filesystem/filesystem_passthru.h:163
void CFileSystemPassThru::RelativePathToFullPath(const char* pFileName, const char* pPathID, CBufferString* pLocalPath, PathTypeFilter_t pathFilter)
{
} /* size: 0 */

// <013622E3> ../public/filesystem/filesystem_passthru.h:164
// function calls: 8
void CFileSystemPassThru::GetSearchPath(const char* pathID, GetSearchPathTypes_t nPathTypes, CBufferString* pPath, int nMaxElements)
{
	CFileSystemPassThru::GetSearchPath(
			const char* pathID,
			GetSearchPathTypes_t nPathTypes,
			CBufferString* pPath,
			int nMaxElements);  // 164
	CFileSystemPassThru::GetSearchPath(
			const char* pathID,
			GetSearchPathTypes_t nPathTypes,
			CBufferString* pPath,
			int nMaxElements);  // 164
	CFileSystemPassThru::GetSearchPath(
			const char* pathID,
			GetSearchPathTypes_t nPathTypes,
			CBufferString* pPath,
			int nMaxElements);  // 164
	CFileSystemPassThru::GetSearchPath(
			const char* pathID,
			GetSearchPathTypes_t nPathTypes,
			CBufferString* pPath,
			int nMaxElements);  // 164
	CFileSystemPassThru::GetSearchPath(
			const char* pathID,
			GetSearchPathTypes_t nPathTypes,
			CBufferString* pPath,
			int nMaxElements);  // 164
	CFileSystemPassThru::GetSearchPath(
			const char* pathID,
			GetSearchPathTypes_t nPathTypes,
			CBufferString* pPath,
			int nMaxElements);  // 164
	CFileSystemPassThru::GetSearchPath(
			const char* pathID,
			GetSearchPathTypes_t nPathTypes,
			CBufferString* pPath,
			int nMaxElements);  // 164
	CFileSystemPassThru::GetSearchPath(
			const char* pathID,
			GetSearchPathTypes_t nPathTypes,
			CBufferString* pPath,
			int nMaxElements);  // 164
} /* size: 197, inline expansions: 8 (720 bytes) */

// <01353C4D> ../public/filesystem/filesystem_passthru.h:164
inline void CFileSystemPassThru::GetSearchPath(const char* pathID, GetSearchPathTypes_t nPathTypes, CBufferString* pPath, int nMaxElements)
{
} /* size: 0 */

// <0023E8FE> ../public/filesystem/filesystem_passthru.h:167
// function calls: 8
void CFileSystemPassThru::GetMergedPaths(CUtlStringToken pathMergeToken, CBufferString* pPath)
{
	CFileSystemPassThru::GetMergedPaths(
			CUtlStringToken pathMergeToken,
			CBufferString* pPath);  // 167
	CFileSystemPassThru::GetMergedPaths(
			CUtlStringToken pathMergeToken,
			CBufferString* pPath);  // 167
	CFileSystemPassThru::GetMergedPaths(
			CUtlStringToken pathMergeToken,
			CBufferString* pPath);  // 167
	CFileSystemPassThru::GetMergedPaths(
			CUtlStringToken pathMergeToken,
			CBufferString* pPath);  // 167
	CFileSystemPassThru::GetMergedPaths(
			CUtlStringToken pathMergeToken,
			CBufferString* pPath);  // 167
	CFileSystemPassThru::GetMergedPaths(
			CUtlStringToken pathMergeToken,
			CBufferString* pPath);  // 167
	CFileSystemPassThru::GetMergedPaths(
			CUtlStringToken pathMergeToken,
			CBufferString* pPath);  // 167
	CFileSystemPassThru::GetMergedPaths(
			CUtlStringToken pathMergeToken,
			CBufferString* pPath);  // 167
} /* size: 221, inline expansions: 8 (792 bytes) */

// <002393D3> ../public/filesystem/filesystem_passthru.h:167
inline void CFileSystemPassThru::GetMergedPaths(CUtlStringToken pathMergeToken, CBufferString* pPath)
{
} /* size: 0 */

// <06848D4E> ../public/filesystem/filesystem_passthru.h:169
// function calls: 8
void CFileSystemPassThru::OpenEx(const char* pFileName, const char* pOptions, unsigned int flags, const char* pathID)
{
	CFileSystemPassThru::OpenEx(
		const char* pFileName,
		const char* pOptions,
		unsigned int flags,
		const char* pathID);  // 169
	CFileSystemPassThru::OpenEx(
		const char* pFileName,
		const char* pOptions,
		unsigned int flags,
		const char* pathID);  // 169
	CFileSystemPassThru::OpenEx(
		const char* pFileName,
		const char* pOptions,
		unsigned int flags,
		const char* pathID);  // 169
	CFileSystemPassThru::OpenEx(
		const char* pFileName,
		const char* pOptions,
		unsigned int flags,
		const char* pathID);  // 169
	CFileSystemPassThru::OpenEx(
		const char* pFileName,
		const char* pOptions,
		unsigned int flags,
		const char* pathID);  // 169
	CFileSystemPassThru::OpenEx(
		const char* pFileName,
		const char* pOptions,
		unsigned int flags,
		const char* pathID);  // 169
	CFileSystemPassThru::OpenEx(
		const char* pFileName,
		const char* pOptions,
		unsigned int flags,
		const char* pathID);  // 169
	CFileSystemPassThru::OpenEx(
		const char* pFileName,
		const char* pOptions,
		unsigned int flags,
		const char* pathID);  // 169
} /* size: 197, inline expansions: 8 (720 bytes) */

// <06848A60> ../public/filesystem/filesystem_passthru.h:169
inline void CFileSystemPassThru::OpenEx(const char* pFileName, const char* pOptions, unsigned int flags, const char* pathID)
{
} /* size: 0 */

// <0022430B> ../public/filesystem/filesystem_passthru.h:170
// function calls: 8
void CFileSystemPassThru::ReadEx(void* pOutput, int destSize, int size, FileHandle_t file)
{
	CFileSystemPassThru::ReadEx(
		void* pOutput,
		int destSize,
		int size,
		FileHandle_t file);  // 170
	CFileSystemPassThru::ReadEx(
		void* pOutput,
		int destSize,
		int size,
		FileHandle_t file);  // 170
	CFileSystemPassThru::ReadEx(
		void* pOutput,
		int destSize,
		int size,
		FileHandle_t file);  // 170
	CFileSystemPassThru::ReadEx(
		void* pOutput,
		int destSize,
		int size,
		FileHandle_t file);  // 170
	CFileSystemPassThru::ReadEx(
		void* pOutput,
		int destSize,
		int size,
		FileHandle_t file);  // 170
	CFileSystemPassThru::ReadEx(
		void* pOutput,
		int destSize,
		int size,
		FileHandle_t file);  // 170
	CFileSystemPassThru::ReadEx(
		void* pOutput,
		int destSize,
		int size,
		FileHandle_t file);  // 170
	CFileSystemPassThru::ReadEx(
		void* pOutput,
		int destSize,
		int size,
		FileHandle_t file);  // 170
} /* size: 197, inline expansions: 8 (720 bytes) */

// <0021FB99> ../public/filesystem/filesystem_passthru.h:170
inline void CFileSystemPassThru::ReadEx(void* pOutput, int destSize, int size, FileHandle_t file)
{
} /* size: 0 */

// <00224088> ../public/filesystem/filesystem_passthru.h:187
// function calls: 8
void CFileSystemPassThru::GetOptimalIOConstraints(FileHandle_t hFile, unsigned int* pOffsetAlign, unsigned int* pSizeAlign, unsigned int* pBufferAlign)
{
	CFileSystemPassThru::GetOptimalIOConstraints(
				FileHandle_t hFile,
				unsigned int* pOffsetAlign,
				unsigned int* pSizeAlign,
				unsigned int* pBufferAlign);  // 187
	CFileSystemPassThru::GetOptimalIOConstraints(
				FileHandle_t hFile,
				unsigned int* pOffsetAlign,
				unsigned int* pSizeAlign,
				unsigned int* pBufferAlign);  // 187
	CFileSystemPassThru::GetOptimalIOConstraints(
				FileHandle_t hFile,
				unsigned int* pOffsetAlign,
				unsigned int* pSizeAlign,
				unsigned int* pBufferAlign);  // 187
	CFileSystemPassThru::GetOptimalIOConstraints(
				FileHandle_t hFile,
				unsigned int* pOffsetAlign,
				unsigned int* pSizeAlign,
				unsigned int* pBufferAlign);  // 187
	CFileSystemPassThru::GetOptimalIOConstraints(
				FileHandle_t hFile,
				unsigned int* pOffsetAlign,
				unsigned int* pSizeAlign,
				unsigned int* pBufferAlign);  // 187
	CFileSystemPassThru::GetOptimalIOConstraints(
				FileHandle_t hFile,
				unsigned int* pOffsetAlign,
				unsigned int* pSizeAlign,
				unsigned int* pBufferAlign);  // 187
	CFileSystemPassThru::GetOptimalIOConstraints(
				FileHandle_t hFile,
				unsigned int* pOffsetAlign,
				unsigned int* pSizeAlign,
				unsigned int* pBufferAlign);  // 187
	CFileSystemPassThru::GetOptimalIOConstraints(
				FileHandle_t hFile,
				unsigned int* pOffsetAlign,
				unsigned int* pSizeAlign,
				unsigned int* pBufferAlign);  // 187
} /* size: 197, inline expansions: 8 (720 bytes) */

// <0021FB50> ../public/filesystem/filesystem_passthru.h:187
inline void CFileSystemPassThru::GetOptimalIOConstraints(FileHandle_t hFile, unsigned int* pOffsetAlign, unsigned int* pSizeAlign, unsigned int* pBufferAlign)
{
} /* size: 0 */

// <001063D7> ../public/filesystem/filesystem_passthru.h:187
void CFileSystemPassThru::GetOptimalIOConstraints(FileHandle_t hFile, unsigned int* pOffsetAlign, unsigned int* pSizeAlign, unsigned int* pBufferAlign)
{
} /* size: 0 */

// <00223D97> ../public/filesystem/filesystem_passthru.h:188
// function calls: 8
void* CFileSystemPassThru::AllocOptimalReadBuffer(FileHandle_t hFile, unsigned int nSize, unsigned int nOffset)
{
	CFileSystemPassThru::AllocOptimalReadBuffer(
				FileHandle_t hFile,
				unsigned int nSize,
				unsigned int nOffset);  // 188
	CFileSystemPassThru::AllocOptimalReadBuffer(
				FileHandle_t hFile,
				unsigned int nSize,
				unsigned int nOffset);  // 188
	CFileSystemPassThru::AllocOptimalReadBuffer(
				FileHandle_t hFile,
				unsigned int nSize,
				unsigned int nOffset);  // 188
	CFileSystemPassThru::AllocOptimalReadBuffer(
				FileHandle_t hFile,
				unsigned int nSize,
				unsigned int nOffset);  // 188
	CFileSystemPassThru::AllocOptimalReadBuffer(
				FileHandle_t hFile,
				unsigned int nSize,
				unsigned int nOffset);  // 188
	CFileSystemPassThru::AllocOptimalReadBuffer(
				FileHandle_t hFile,
				unsigned int nSize,
				unsigned int nOffset);  // 188
	CFileSystemPassThru::AllocOptimalReadBuffer(
				FileHandle_t hFile,
				unsigned int nSize,
				unsigned int nOffset);  // 188
	CFileSystemPassThru::AllocOptimalReadBuffer(
				FileHandle_t hFile,
				unsigned int nSize,
				unsigned int nOffset);  // 188
} /* size: 234, inline expansions: 8 (786 bytes) */

// <0021FB0E> ../public/filesystem/filesystem_passthru.h:188
inline void* CFileSystemPassThru::AllocOptimalReadBuffer(FileHandle_t hFile, unsigned int nSize, unsigned int nOffset)
{
} /* size: 0 */

// <00223BB3> ../public/filesystem/filesystem_passthru.h:189
// function calls: 8
void CFileSystemPassThru::FreeOptimalReadBuffer(void* p)
{
	CFileSystemPassThru::FreeOptimalReadBuffer(
				void* p);  // 189
	CFileSystemPassThru::FreeOptimalReadBuffer(
				void* p);  // 189
	CFileSystemPassThru::FreeOptimalReadBuffer(
				void* p);  // 189
	CFileSystemPassThru::FreeOptimalReadBuffer(
				void* p);  // 189
	CFileSystemPassThru::FreeOptimalReadBuffer(
				void* p);  // 189
	CFileSystemPassThru::FreeOptimalReadBuffer(
				void* p);  // 189
	CFileSystemPassThru::FreeOptimalReadBuffer(
				void* p);  // 189
	CFileSystemPassThru::FreeOptimalReadBuffer(
				void* p);  // 189
} /* size: 196, inline expansions: 8 (720 bytes) */

// <0021FAEB> ../public/filesystem/filesystem_passthru.h:189
inline void CFileSystemPassThru::FreeOptimalReadBuffer(void* p)
{
} /* size: 0 */

// <0697A397> ../public/filesystem/filesystem_passthru.h:190
// function calls: 8
void CFileSystemPassThru::ReadToBuffer(FileHandle_t hFile, CUtlBuffer& buf, int nMaxBytes, FSAllocFunc_t pfnAlloc)
{
	CFileSystemPassThru::ReadToBuffer(
			FileHandle_t hFile,
			CUtlBuffer& buf,
			int nMaxBytes,
			FSAllocFunc_t pfnAlloc);  // 190
	CFileSystemPassThru::ReadToBuffer(
			FileHandle_t hFile,
			CUtlBuffer& buf,
			int nMaxBytes,
			FSAllocFunc_t pfnAlloc);  // 190
	CFileSystemPassThru::ReadToBuffer(
			FileHandle_t hFile,
			CUtlBuffer& buf,
			int nMaxBytes,
			FSAllocFunc_t pfnAlloc);  // 190
	CFileSystemPassThru::ReadToBuffer(
			FileHandle_t hFile,
			CUtlBuffer& buf,
			int nMaxBytes,
			FSAllocFunc_t pfnAlloc);  // 190
	CFileSystemPassThru::ReadToBuffer(
			FileHandle_t hFile,
			CUtlBuffer& buf,
			int nMaxBytes,
			FSAllocFunc_t pfnAlloc);  // 190
	CFileSystemPassThru::ReadToBuffer(
			FileHandle_t hFile,
			CUtlBuffer& buf,
			int nMaxBytes,
			FSAllocFunc_t pfnAlloc);  // 190
	CFileSystemPassThru::ReadToBuffer(
			FileHandle_t hFile,
			CUtlBuffer& buf,
			int nMaxBytes,
			FSAllocFunc_t pfnAlloc);  // 190
	CFileSystemPassThru::ReadToBuffer(
			FileHandle_t hFile,
			CUtlBuffer& buf,
			int nMaxBytes,
			FSAllocFunc_t pfnAlloc);  // 190
} /* size: 197, inline expansions: 8 (720 bytes) */

// <06971B73> ../public/filesystem/filesystem_passthru.h:190
inline void CFileSystemPassThru::ReadToBuffer(FileHandle_t hFile, CUtlBuffer& buf, int nMaxBytes, FSAllocFunc_t pfnAlloc)
{
} /* size: 0 */

// <00F44ED9> ../public/filesystem/filesystem_passthru.h:196
// function calls: 8
void CFileSystemPassThru::AddVPKFile(const char* pPkName, const char* pPathID, SearchPathAdd_t addType)
{
	CFileSystemPassThru::AddVPKFile(
			const char* pPkName,
			const char* pPathID,
			SearchPathAdd_t addType);  // 196
	CFileSystemPassThru::AddVPKFile(
			const char* pPkName,
			const char* pPathID,
			SearchPathAdd_t addType);  // 196
	CFileSystemPassThru::AddVPKFile(
			const char* pPkName,
			const char* pPathID,
			SearchPathAdd_t addType);  // 196
	CFileSystemPassThru::AddVPKFile(
			const char* pPkName,
			const char* pPathID,
			SearchPathAdd_t addType);  // 196
	CFileSystemPassThru::AddVPKFile(
			const char* pPkName,
			const char* pPathID,
			SearchPathAdd_t addType);  // 196
	CFileSystemPassThru::AddVPKFile(
			const char* pPkName,
			const char* pPathID,
			SearchPathAdd_t addType);  // 196
	CFileSystemPassThru::AddVPKFile(
			const char* pPkName,
			const char* pPathID,
			SearchPathAdd_t addType);  // 196
	CFileSystemPassThru::AddVPKFile(
			const char* pPkName,
			const char* pPathID,
			SearchPathAdd_t addType);  // 196
} /* size: 197, inline expansions: 8 (720 bytes) */

// <00F426F1> ../public/filesystem/filesystem_passthru.h:196
inline void CFileSystemPassThru::AddVPKFile(const char* pPkName, const char* pPathID, SearchPathAdd_t addType)
{
} /* size: 0 */

// <00F44859> ../public/filesystem/filesystem_passthru.h:197
// function calls: 8
void CFileSystemPassThru::RemoveVPKFile(const char* pPkName, const char* pPathID)
{
	CFileSystemPassThru::RemoveVPKFile(
			const char* pPkName,
			const char* pPathID);  // 197
	CFileSystemPassThru::RemoveVPKFile(
			const char* pPkName,
			const char* pPathID);  // 197
	CFileSystemPassThru::RemoveVPKFile(
			const char* pPkName,
			const char* pPathID);  // 197
	CFileSystemPassThru::RemoveVPKFile(
			const char* pPkName,
			const char* pPathID);  // 197
	CFileSystemPassThru::RemoveVPKFile(
			const char* pPkName,
			const char* pPathID);  // 197
	CFileSystemPassThru::RemoveVPKFile(
			const char* pPkName,
			const char* pPathID);  // 197
	CFileSystemPassThru::RemoveVPKFile(
			const char* pPkName,
			const char* pPathID);  // 197
	CFileSystemPassThru::RemoveVPKFile(
			const char* pPkName,
			const char* pPathID);  // 197
} /* size: 196, inline expansions: 8 (720 bytes) */

// <00F426C0> ../public/filesystem/filesystem_passthru.h:197
inline void CFileSystemPassThru::RemoveVPKFile(const char* pPkName, const char* pPathID)
{
} /* size: 0 */

// <06813142> ../public/filesystem/filesystem_passthru.h:202
// function calls: 8
void CFileSystemPassThru::IsPathInvalidForFilesystem(const char* pPath)
{
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 202
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 202
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 202
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 202
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 202
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 202
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 202
	CFileSystemPassThru::IsPathInvalidForFilesystem(
					const char* pPath);  // 202
} /* size: 0, inline expansions: 8 (0 bytes) */

// <06812566> ../public/filesystem/filesystem_passthru.h:202
inline void CFileSystemPassThru::IsPathInvalidForFilesystem(const char* pPath)
{
} /* size: 0 */

// <06813903> ../public/filesystem/filesystem_passthru.h:206
// function calls: 8
void CFileSystemPassThru::GetSearchPathsForPathID(const char* pathID, GetSearchPathTypes_t nPathTypes, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list)
{
	CFileSystemPassThru::GetSearchPathsForPathID(
				const char* pathID,
				GetSearchPathTypes_t nPathTypes,
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list);  // 206
	CFileSystemPassThru::GetSearchPathsForPathID(
				const char* pathID,
				GetSearchPathTypes_t nPathTypes,
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list);  // 206
	CFileSystemPassThru::GetSearchPathsForPathID(
				const char* pathID,
				GetSearchPathTypes_t nPathTypes,
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list);  // 206
	CFileSystemPassThru::GetSearchPathsForPathID(
				const char* pathID,
				GetSearchPathTypes_t nPathTypes,
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list);  // 206
	CFileSystemPassThru::GetSearchPathsForPathID(
				const char* pathID,
				GetSearchPathTypes_t nPathTypes,
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list);  // 206
	CFileSystemPassThru::GetSearchPathsForPathID(
				const char* pathID,
				GetSearchPathTypes_t nPathTypes,
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list);  // 206
	CFileSystemPassThru::GetSearchPathsForPathID(
				const char* pathID,
				GetSearchPathTypes_t nPathTypes,
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list);  // 206
	CFileSystemPassThru::GetSearchPathsForPathID(
				const char* pathID,
				GetSearchPathTypes_t nPathTypes,
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list);  // 206
} /* size: 197, inline expansions: 8 (720 bytes) */

// <06812529> ../public/filesystem/filesystem_passthru.h:206
inline void CFileSystemPassThru::GetSearchPathsForPathID(const char* pathID, GetSearchPathTypes_t nPathTypes, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& list)
{
} /* size: 0 */

// <00F4461C> ../public/filesystem/filesystem_passthru.h:208
// function calls: 8
void CFileSystemPassThru::SuppressAsyncFileRequestFlushOnPathChange(bool bEnable)
{
	CFileSystemPassThru::SuppressAsyncFileRequestFlushOnPathChange(
							bool bEnable);  // 208
	CFileSystemPassThru::SuppressAsyncFileRequestFlushOnPathChange(
							bool bEnable);  // 208
	CFileSystemPassThru::SuppressAsyncFileRequestFlushOnPathChange(
							bool bEnable);  // 208
	CFileSystemPassThru::SuppressAsyncFileRequestFlushOnPathChange(
							bool bEnable);  // 208
	CFileSystemPassThru::SuppressAsyncFileRequestFlushOnPathChange(
							bool bEnable);  // 208
	CFileSystemPassThru::SuppressAsyncFileRequestFlushOnPathChange(
							bool bEnable);  // 208
	CFileSystemPassThru::SuppressAsyncFileRequestFlushOnPathChange(
							bool bEnable);  // 208
	CFileSystemPassThru::SuppressAsyncFileRequestFlushOnPathChange(
							bool bEnable);  // 208
} /* size: 218, inline expansions: 8 (784 bytes) */

// <00F4265E> ../public/filesystem/filesystem_passthru.h:208
inline void CFileSystemPassThru::SuppressAsyncFileRequestFlushOnPathChange(bool bEnable)
{
} /* size: 0 */

// <0697A89D> ../public/filesystem/filesystem_passthru.h:212
// function calls: 8
void CFileSystemPassThru::MarkContentCorrupt(bool bMissingFilesOnly, const char* pFile, const char* pReason)
{
	CFileSystemPassThru::MarkContentCorrupt(
				bool bMissingFilesOnly,
				const char* pFile,
				const char* pReason);  // 212
	CFileSystemPassThru::MarkContentCorrupt(
				bool bMissingFilesOnly,
				const char* pFile,
				const char* pReason);  // 212
	CFileSystemPassThru::MarkContentCorrupt(
				bool bMissingFilesOnly,
				const char* pFile,
				const char* pReason);  // 212
	CFileSystemPassThru::MarkContentCorrupt(
				bool bMissingFilesOnly,
				const char* pFile,
				const char* pReason);  // 212
	CFileSystemPassThru::MarkContentCorrupt(
				bool bMissingFilesOnly,
				const char* pFile,
				const char* pReason);  // 212
	CFileSystemPassThru::MarkContentCorrupt(
				bool bMissingFilesOnly,
				const char* pFile,
				const char* pReason);  // 212
	CFileSystemPassThru::MarkContentCorrupt(
				bool bMissingFilesOnly,
				const char* pFile,
				const char* pReason);  // 212
	CFileSystemPassThru::MarkContentCorrupt(
				bool bMissingFilesOnly,
				const char* pFile,
				const char* pReason);  // 212
} /* size: 229, inline expansions: 8 (824 bytes) */

// <06971B36> ../public/filesystem/filesystem_passthru.h:212
inline void CFileSystemPassThru::MarkContentCorrupt(bool bMissingFilesOnly, const char* pFile, const char* pReason)
{
} /* size: 0 */

// <004D45EE> ../public/filesystem/filesystem_passthru.h:212
void CFileSystemPassThru::MarkContentCorrupt(bool bMissingFilesOnly, const char* pFile, const char* pReason)
{
} /* size: 0 */

// <001601FE> ../public/filesystem/filesystem_passthru.h:215
// function calls: 8
void CFileSystemPassThru::SetContentCorruptionReportingEnabled(bool bEnabled)
{
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
} /* size: 218, inline expansions: 8 (784 bytes) */

// <0015CD8F> ../public/filesystem/filesystem_passthru.h:215
inline void CFileSystemPassThru::SetContentCorruptionReportingEnabled(bool bEnabled)
{
} /* size: 0 */

// <0136023A> ../public/filesystem/filesystem_passthru.h:222
// function calls: 8
void CFileSystemPassThru::ResetProjectPaths(bool includeCloudAssets)
{
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
} /* size: 218, inline expansions: 8 (784 bytes) */

// <01353C28> ../public/filesystem/filesystem_passthru.h:222
inline void CFileSystemPassThru::ResetProjectPaths(bool includeCloudAssets)
{
} /* size: 0 */

// <013609B2> ../public/filesystem/filesystem_passthru.h:223
// function calls: 8
void CFileSystemPassThru::AddProjectPath(const char* modName, const char* pPath)
{
	CFileSystemPassThru::AddProjectPath(
			const char* modName,
			const char* pPath);  // 223
	CFileSystemPassThru::AddProjectPath(
			const char* modName,
			const char* pPath);  // 223
	CFileSystemPassThru::AddProjectPath(
			const char* modName,
			const char* pPath);  // 223
	CFileSystemPassThru::AddProjectPath(
			const char* modName,
			const char* pPath);  // 223
	CFileSystemPassThru::AddProjectPath(
			const char* modName,
			const char* pPath);  // 223
	CFileSystemPassThru::AddProjectPath(
			const char* modName,
			const char* pPath);  // 223
	CFileSystemPassThru::AddProjectPath(
			const char* modName,
			const char* pPath);  // 223
	CFileSystemPassThru::AddProjectPath(
			const char* modName,
			const char* pPath);  // 223
} /* size: 196, inline expansions: 8 (720 bytes) */

// <01353BF7> ../public/filesystem/filesystem_passthru.h:223
inline void CFileSystemPassThru::AddProjectPath(const char* modName, const char* pPath)
{
} /* size: 0 */

// <01360799> ../public/filesystem/filesystem_passthru.h:224
// function calls: 8
void CFileSystemPassThru::AddCloudPath(const char* modName, const char* pPath)
{
	CFileSystemPassThru::AddCloudPath(
			const char* modName,
			const char* pPath);  // 224
	CFileSystemPassThru::AddCloudPath(
			const char* modName,
			const char* pPath);  // 224
	CFileSystemPassThru::AddCloudPath(
			const char* modName,
			const char* pPath);  // 224
	CFileSystemPassThru::AddCloudPath(
			const char* modName,
			const char* pPath);  // 224
	CFileSystemPassThru::AddCloudPath(
			const char* modName,
			const char* pPath);  // 224
	CFileSystemPassThru::AddCloudPath(
			const char* modName,
			const char* pPath);  // 224
	CFileSystemPassThru::AddCloudPath(
			const char* modName,
			const char* pPath);  // 224
	CFileSystemPassThru::AddCloudPath(
			const char* modName,
			const char* pPath);  // 224
} /* size: 196, inline expansions: 8 (720 bytes) */

// <01353BC6> ../public/filesystem/filesystem_passthru.h:224
inline void CFileSystemPassThru::AddCloudPath(const char* modName, const char* pPath)
{
} /* size: 0 */

// <013618B0> ../public/filesystem/filesystem_passthru.h:227
// function calls: 8
void CFileSystemPassThru::GetSymLink(const char* pPath, const char* pathID)
{
	CFileSystemPassThru::GetSymLink(
			const char* pPath,
			const char* pathID);  // 227
	CFileSystemPassThru::GetSymLink(
			const char* pPath,
			const char* pathID);  // 227
	CFileSystemPassThru::GetSymLink(
			const char* pPath,
			const char* pathID);  // 227
	CFileSystemPassThru::GetSymLink(
			const char* pPath,
			const char* pathID);  // 227
	CFileSystemPassThru::GetSymLink(
			const char* pPath,
			const char* pathID);  // 227
	CFileSystemPassThru::GetSymLink(
			const char* pPath,
			const char* pathID);  // 227
	CFileSystemPassThru::GetSymLink(
			const char* pPath,
			const char* pathID);  // 227
	CFileSystemPassThru::GetSymLink(
			const char* pPath,
			const char* pathID);  // 227
} /* size: 196, inline expansions: 8 (720 bytes) */

// <01353B95> ../public/filesystem/filesystem_passthru.h:227
inline void CFileSystemPassThru::GetSymLink(const char* pPath, const char* pathID)
{
} /* size: 0 */

// <01361662> ../public/filesystem/filesystem_passthru.h:228
// function calls: 8
void CFileSystemPassThru::AddSymLink(const char* pPath, const char* pathID, const char* realPath)
{
	CFileSystemPassThru::AddSymLink(
			const char* pPath,
			const char* pathID,
			const char* realPath);  // 228
	CFileSystemPassThru::AddSymLink(
			const char* pPath,
			const char* pathID,
			const char* realPath);  // 228
	CFileSystemPassThru::AddSymLink(
			const char* pPath,
			const char* pathID,
			const char* realPath);  // 228
	CFileSystemPassThru::AddSymLink(
			const char* pPath,
			const char* pathID,
			const char* realPath);  // 228
	CFileSystemPassThru::AddSymLink(
			const char* pPath,
			const char* pathID,
			const char* realPath);  // 228
	CFileSystemPassThru::AddSymLink(
			const char* pPath,
			const char* pathID,
			const char* realPath);  // 228
	CFileSystemPassThru::AddSymLink(
			const char* pPath,
			const char* pathID,
			const char* realPath);  // 228
	CFileSystemPassThru::AddSymLink(
			const char* pPath,
			const char* pathID,
			const char* realPath);  // 228
} /* size: 197, inline expansions: 8 (720 bytes) */

// <01353B58> ../public/filesystem/filesystem_passthru.h:228
inline void CFileSystemPassThru::AddSymLink(const char* pPath, const char* pathID, const char* realPath)
{
} /* size: 0 */

// <01360580> ../public/filesystem/filesystem_passthru.h:229
// function calls: 8
void CFileSystemPassThru::RemoveSymLink(const char* pPath, const char* pathID)
{
	CFileSystemPassThru::RemoveSymLink(
			const char* pPath,
			const char* pathID);  // 229
	CFileSystemPassThru::RemoveSymLink(
			const char* pPath,
			const char* pathID);  // 229
	CFileSystemPassThru::RemoveSymLink(
			const char* pPath,
			const char* pathID);  // 229
	CFileSystemPassThru::RemoveSymLink(
			const char* pPath,
			const char* pathID);  // 229
	CFileSystemPassThru::RemoveSymLink(
			const char* pPath,
			const char* pathID);  // 229
	CFileSystemPassThru::RemoveSymLink(
			const char* pPath,
			const char* pathID);  // 229
	CFileSystemPassThru::RemoveSymLink(
			const char* pPath,
			const char* pathID);  // 229
	CFileSystemPassThru::RemoveSymLink(
			const char* pPath,
			const char* pathID);  // 229
} /* size: 196, inline expansions: 8 (720 bytes) */

// <01353B27> ../public/filesystem/filesystem_passthru.h:229
inline void CFileSystemPassThru::RemoveSymLink(const char* pPath, const char* pathID)
{
} /* size: 0 */

// <02385A56> ../public/filesystem/filesystem_passthru.h:231
// function calls: 8
void CFileSystemPassThru::GetSymLinkReloadQueue()
{
	CFileSystemPassThru::GetSymLinkReloadQueue(); // 231
	CFileSystemPassThru::GetSymLinkReloadQueue(); // 231
	CFileSystemPassThru::GetSymLinkReloadQueue(); // 231
	CFileSystemPassThru::GetSymLinkReloadQueue(); // 231
	CFileSystemPassThru::GetSymLinkReloadQueue(); // 231
	CFileSystemPassThru::GetSymLinkReloadQueue(); // 231
	CFileSystemPassThru::GetSymLinkReloadQueue(); // 231
	CFileSystemPassThru::GetSymLinkReloadQueue(); // 231
} /* size: 196, inline expansions: 8 (720 bytes) */

// <0238305C> ../public/filesystem/filesystem_passthru.h:231
inline void CFileSystemPassThru::GetSymLinkReloadQueue()
{
} /* size: 0 */

// <01361449> ../public/filesystem/filesystem_passthru.h:234
// function calls: 8
void CFileSystemPassThru::GetSearchPathArgs(const char* pathID, CBufferString* pPath)
{
	CFileSystemPassThru::GetSearchPathArgs(
				const char* pathID,
				CBufferString* pPath);  // 234
	CFileSystemPassThru::GetSearchPathArgs(
				const char* pathID,
				CBufferString* pPath);  // 234
	CFileSystemPassThru::GetSearchPathArgs(
				const char* pathID,
				CBufferString* pPath);  // 234
	CFileSystemPassThru::GetSearchPathArgs(
				const char* pathID,
				CBufferString* pPath);  // 234
	CFileSystemPassThru::GetSearchPathArgs(
				const char* pathID,
				CBufferString* pPath);  // 234
	CFileSystemPassThru::GetSearchPathArgs(
				const char* pathID,
				CBufferString* pPath);  // 234
	CFileSystemPassThru::GetSearchPathArgs(
				const char* pathID,
				CBufferString* pPath);  // 234
	CFileSystemPassThru::GetSearchPathArgs(
				const char* pathID,
				CBufferString* pPath);  // 234
} /* size: 196, inline expansions: 8 (720 bytes) */

// <01353AF6> ../public/filesystem/filesystem_passthru.h:234
inline void CFileSystemPassThru::GetSearchPathArgs(const char* pathID, CBufferString* pPath)
{
} /* size: 0 */

