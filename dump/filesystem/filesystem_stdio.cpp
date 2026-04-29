
//
// filesystem/filesystem_stdio.cpp
//
//	referenced by: libfilesystem_stdio.so
//
//	functions: 87
//	classes: 5
//

// <0013B885> filesystem/filesystem_stdio.cpp:45
// member functions: 62
// member variables: 3
// vtable entries: 27
// class size: 1,184
class CFileSystem_Stdio : public CBaseFileSystem {
public:
	/* class CBaseFileSystem <ancestor>; */ /* 0 0 */
	void CFileSystem_Stdio(CFileSystem_Stdio* , const CFileSystem_Stdio& );
	/* filesystem/filesystem_stdio.cpp:223 */
	void CFileSystem_Stdio(CFileSystem_Stdio* );
	/* filesystem/filesystem_stdio.cpp:236 */
	void ~CFileSystem_Stdio(CFileSystem_Stdio* );
	/* filesystem/filesystem_stdio.cpp:245 */
	virtual void* QueryInterface(CFileSystem_Stdio* , const char* );
	/* filesystem/filesystem_stdio.cpp:598 */
	virtual void GetLocalCopy(CFileSystem_Stdio* , const char* );
	/* filesystem/filesystem_stdio.cpp:606 */
	virtual int HintResourceNeed(CFileSystem_Stdio* , const char* , int);
	/* filesystem/filesystem_stdio.cpp:543 */
	virtual bool IsFileImmediatelyAvailable(CFileSystem_Stdio* , const char* );
	/* filesystem/filesystem_stdio.cpp:558 */
	virtual WaitForResourcesHandle_t WaitForResources(CFileSystem_Stdio* , const char* );
	/* filesystem/filesystem_stdio.cpp:570 */
	virtual bool GetWaitForResourcesProgress(CFileSystem_Stdio* , WaitForResourcesHandle_t, float* , bool* );
	/* filesystem/filesystem_stdio.cpp:591 */
	virtual void CancelWaitForResources(CFileSystem_Stdio* , WaitForResourcesHandle_t);
	/* filesystem/filesystem_stdio.cpp:257 */
	virtual bool GetOptimalIOConstraints(CFileSystem_Stdio* , FileHandle_t, unsigned int* , unsigned int* , unsigned int* );
	/* filesystem/filesystem_stdio.cpp:302 */
	virtual void* AllocOptimalReadBuffer(CFileSystem_Stdio* , FileHandle_t, unsigned int, unsigned int);
	/* filesystem/filesystem_stdio.cpp:338 */
	virtual void FreeOptimalReadBuffer(CFileSystem_Stdio* , void* );
	/* filesystem/filesystem_stdio.cpp:1208 */
	virtual void ResetProjectPaths(CFileSystem_Stdio* , bool);
	/* filesystem/filesystem_stdio.cpp:1185 */
	virtual void AddProjectPath(CFileSystem_Stdio* , const char* , const char* );
	/* filesystem/filesystem_stdio.cpp:1200 */
	virtual void AddCloudPath(CFileSystem_Stdio* , const char* , const char* );
protected:
	/* filesystem/filesystem_stdio.cpp:355 */
	virtual VirtualFileHandle_t FS_fopen(CFileSystem_Stdio* , const char* , const char* , unsigned int, int64* );
	/* filesystem/filesystem_stdio.cpp:373 */
	virtual void FS_setbufsize(CFileSystem_Stdio* , VirtualFileHandle_t, unsigned int);
	/* filesystem/filesystem_stdio.cpp:382 */
	virtual void FS_fclose(CFileSystem_Stdio* , VirtualFileHandle_t);
	/* filesystem/filesystem_stdio.cpp:392 */
	virtual void FS_fseek(CFileSystem_Stdio* , VirtualFileHandle_t, int64, int);
	/* filesystem/filesystem_stdio.cpp:401 */
	virtual int64 FS_ftell(CFileSystem_Stdio* , VirtualFileHandle_t);
	/* filesystem/filesystem_stdio.cpp:410 */
	virtual size_t FS_fread(CFileSystem_Stdio* , void* , size_t, size_t, VirtualFileHandle_t);
	/* filesystem/filesystem_stdio.cpp:423 */
	virtual size_t FS_fwrite(CFileSystem_Stdio* , const void* , size_t, VirtualFileHandle_t);
	/* filesystem/filesystem_stdio.cpp:435 */
	virtual int FS_ferror(CFileSystem_Stdio* , VirtualFileHandle_t);
	/* filesystem/filesystem_stdio.cpp:444 */
	virtual int FS_fflush(CFileSystem_Stdio* , VirtualFileHandle_t);
	/* filesystem/filesystem_stdio.cpp:478 */
	virtual int FS_GetBaseFileInfo(CFileSystem_Stdio* , const char* , FioBaseFileInfo_t* );
	/* filesystem/filesystem_stdio.cpp:456 */
	virtual int FS_SetFileReadOnly(CFileSystem_Stdio* , const char* , bool);
	/* filesystem/filesystem_stdio.cpp:510 */
	virtual CDirIterator* FS_FindFiles(CFileSystem_Stdio* , const char* );
	/* filesystem/filesystem_stdio.cpp:525 */
	virtual int FS_GetSectorSize(CFileSystem_Stdio* , VirtualFileHandle_t);
	/* filesystem/filesystem_stdio.cpp:534 */
	virtual IMemoryMappedFile* FS_CreateMemoryMap(CFileSystem_Stdio* , VirtualFileHandle_t, MemoryMappedFileFlags_t);
private:
	/* filesystem/filesystem_stdio.cpp:92 */
	bool CanAsync(const CFileSystem_Stdio* );
	bool m_bMounted; /* 1168 1 */
	bool m_bCanAsync; /* 1169 1 */
	void CFileSystem_Stdio(class CFileSystem_Stdio *, const class CFileSystem_Stdio  &); /* linkage=_ZN17CFileSystem_StdioC4ERKS_ */
	void CFileSystem_Stdio(class CFileSystem_Stdio *); /* linkage=_ZN17CFileSystem_StdioC4Ev */
	void ~CFileSystem_Stdio(class CFileSystem_Stdio *); /* linkage=_ZN17CFileSystem_StdioD4Ev */
	virtual void * QueryInterface(class CFileSystem_Stdio *, const char  *); /* linkage=_ZN17CFileSystem_Stdio14QueryInterfaceEPKc */
	virtual void GetLocalCopy(class CFileSystem_Stdio *, const char  *); /* linkage=_ZN17CFileSystem_Stdio12GetLocalCopyEPKc */
	virtual int HintResourceNeed(class CFileSystem_Stdio *, const char  *, int); /* linkage=_ZN17CFileSystem_Stdio16HintResourceNeedEPKci */
	virtual bool IsFileImmediatelyAvailable(class CFileSystem_Stdio *, const char  *); /* linkage=_ZN17CFileSystem_Stdio26IsFileImmediatelyAvailableEPKc */
	virtual WaitForResourcesHandle_t WaitForResources(class CFileSystem_Stdio *, const char  *); /* linkage=_ZN17CFileSystem_Stdio16WaitForResourcesEPKc */
	virtual bool GetWaitForResourcesProgress(class CFileSystem_Stdio *, WaitForResourcesHandle_t, float *, bool *); /* linkage=_ZN17CFileSystem_Stdio27GetWaitForResourcesProgressEiPfPb */
	virtual void CancelWaitForResources(class CFileSystem_Stdio *, WaitForResourcesHandle_t); /* linkage=_ZN17CFileSystem_Stdio22CancelWaitForResourcesEi */
	/* <14b5ac> filesystem/filesystem_stdio.cpp:257 */
	virtual bool GetOptimalIOConstraints(class CFileSystem_Stdio *, FileHandle_t, unsigned int *, unsigned int *, unsigned int *); /* linkage=_ZN17CFileSystem_Stdio23GetOptimalIOConstraintsEPvPjS1_S1_ */
	/* <14b6b0> filesystem/filesystem_stdio.cpp:302 */
	virtual void * AllocOptimalReadBuffer(class CFileSystem_Stdio *, FileHandle_t, unsigned int, unsigned int); /* linkage=_ZN17CFileSystem_Stdio22AllocOptimalReadBufferEPvjj */
	virtual void FreeOptimalReadBuffer(class CFileSystem_Stdio *, void *); /* linkage=_ZN17CFileSystem_Stdio21FreeOptimalReadBufferEPv */
	virtual void ResetProjectPaths(class CFileSystem_Stdio *, bool); /* linkage=_ZN17CFileSystem_Stdio17ResetProjectPathsEb */
	virtual void AddProjectPath(class CFileSystem_Stdio *, const char  *, const char  *); /* linkage=_ZN17CFileSystem_Stdio14AddProjectPathEPKcS1_ */
	virtual void AddCloudPath(class CFileSystem_Stdio *, const char  *, const char  *); /* linkage=_ZN17CFileSystem_Stdio12AddCloudPathEPKcS1_ */
	virtual enum VirtualFileHandle_t FS_fopen(class CFileSystem_Stdio *, const char  *, const char  *, unsigned int, int64 *); /* linkage=_ZN17CFileSystem_Stdio8FS_fopenEPKcS1_jPx */
	virtual void FS_setbufsize(class CFileSystem_Stdio *, enum VirtualFileHandle_t, unsigned int); /* linkage=_ZN17CFileSystem_Stdio13FS_setbufsizeE19VirtualFileHandle_tj */
	virtual void FS_fclose(class CFileSystem_Stdio *, enum VirtualFileHandle_t); /* linkage=_ZN17CFileSystem_Stdio9FS_fcloseE19VirtualFileHandle_t */
	virtual void FS_fseek(class CFileSystem_Stdio *, enum VirtualFileHandle_t, int64, int); /* linkage=_ZN17CFileSystem_Stdio8FS_fseekE19VirtualFileHandle_txi */
	virtual int64 FS_ftell(class CFileSystem_Stdio *, enum VirtualFileHandle_t); /* linkage=_ZN17CFileSystem_Stdio8FS_ftellE19VirtualFileHandle_t */
	virtual size_t FS_fread(class CFileSystem_Stdio *, void *, size_t, size_t, enum VirtualFileHandle_t); /* linkage=_ZN17CFileSystem_Stdio8FS_freadEPvmm19VirtualFileHandle_t */
	virtual size_t FS_fwrite(class CFileSystem_Stdio *, const void  *, size_t, enum VirtualFileHandle_t); /* linkage=_ZN17CFileSystem_Stdio9FS_fwriteEPKvm19VirtualFileHandle_t */
	virtual int FS_ferror(class CFileSystem_Stdio *, enum VirtualFileHandle_t); /* linkage=_ZN17CFileSystem_Stdio9FS_ferrorE19VirtualFileHandle_t */
	virtual int FS_fflush(class CFileSystem_Stdio *, enum VirtualFileHandle_t); /* linkage=_ZN17CFileSystem_Stdio9FS_fflushE19VirtualFileHandle_t */
	virtual int FS_GetBaseFileInfo(class CFileSystem_Stdio *, const char  *, class FioBaseFileInfo_t *); /* linkage=_ZN17CFileSystem_Stdio18FS_GetBaseFileInfoEPKcP17FioBaseFileInfo_t */
	virtual int FS_SetFileReadOnly(class CFileSystem_Stdio *, const char  *, bool); /* linkage=_ZN17CFileSystem_Stdio18FS_SetFileReadOnlyEPKcb */
	virtual class CDirIterator * FS_FindFiles(class CFileSystem_Stdio *, const char  *); /* linkage=_ZN17CFileSystem_Stdio12FS_FindFilesEPKc */
	virtual int FS_GetSectorSize(class CFileSystem_Stdio *, enum VirtualFileHandle_t); /* linkage=_ZN17CFileSystem_Stdio16FS_GetSectorSizeE19VirtualFileHandle_t */
	virtual class IMemoryMappedFile * FS_CreateMemoryMap(class CFileSystem_Stdio *, enum VirtualFileHandle_t, enum MemoryMappedFileFlags_t); /* linkage=_ZN17CFileSystem_Stdio18FS_CreateMemoryMapE19VirtualFileHandle_t23MemoryMappedFileFlags_t */
	bool CanAsync(const class CFileSystem_Stdio  *); /* linkage=_ZNK17CFileSystem_Stdio8CanAsyncEv */
} __attribute__((__aligned__(16)));

// <0014A566> filesystem/filesystem_stdio.cpp:105
void CStdFilesystemFile::CStdFilesystemFile()
{
} /* size: 0 */

// <0014A549> filesystem/filesystem_stdio.cpp:105
inline void CStdFilesystemFile::CStdFilesystemFile()
{
} /* size: 0 */

// <0013C4EC> filesystem/filesystem_stdio.cpp:105
// member functions: 26
// member variable: 1
// vtable entries: 10
// class size: 8
class CStdFilesystemFile {
	void CStdFilesystemFile(CStdFilesystemFile* , const CStdFilesystemFile& );
	void CStdFilesystemFile(CStdFilesystemFile* );
	int ()(void) * * _vptr.CStdFilesystemFile; /* 0 8 */
	/* filesystem/filesystem_stdio.cpp:108 */
	virtual void ~CStdFilesystemFile(CStdFilesystemFile* );
	/* filesystem/filesystem_stdio.cpp:109 */
	virtual void FS_setbufsize(CStdFilesystemFile* , unsigned int);
	/* filesystem/filesystem_stdio.cpp:110 */
	virtual void FS_fclose(CStdFilesystemFile* );
	/* filesystem/filesystem_stdio.cpp:111 */
	virtual void FS_fseek(CStdFilesystemFile* , int64, int);
	/* filesystem/filesystem_stdio.cpp:112 */
	virtual int64 FS_ftell(CStdFilesystemFile* );
	/* filesystem/filesystem_stdio.cpp:113 */
	virtual size_t FS_fread(CStdFilesystemFile* , void* , size_t, size_t);
	/* filesystem/filesystem_stdio.cpp:114 */
	virtual size_t FS_fwrite(CStdFilesystemFile* , const void* , size_t);
	/* filesystem/filesystem_stdio.cpp:115 */
	virtual int FS_ferror(CStdFilesystemFile* );
	/* filesystem/filesystem_stdio.cpp:116 */
	virtual int FS_fflush(CStdFilesystemFile* );
	/* filesystem/filesystem_stdio.cpp:117 */
	virtual int FS_GetSectorSize(CStdFilesystemFile* );
	/* filesystem/filesystem_stdio.cpp:118 */
	virtual IMemoryMappedFile* FS_CreateMemoryMap(CStdFilesystemFile* , MemoryMappedFileFlags_t);
	void CStdFilesystemFile(class CStdFilesystemFile *, const class CStdFilesystemFile  &); /* linkage=_ZN18CStdFilesystemFileC4ERKS_ */
	void CStdFilesystemFile(class CStdFilesystemFile *); /* linkage=_ZN18CStdFilesystemFileC4Ev */
	virtual void ~CStdFilesystemFile(class CStdFilesystemFile *); /* linkage=_ZN18CStdFilesystemFileD4Ev */
	virtual void FS_setbufsize(class CStdFilesystemFile *, unsigned int); /* linkage=_ZN18CStdFilesystemFile13FS_setbufsizeEj */
	virtual void FS_fclose(class CStdFilesystemFile *); /* linkage=_ZN18CStdFilesystemFile9FS_fcloseEv */
	virtual void FS_fseek(class CStdFilesystemFile *, int64, int); /* linkage=_ZN18CStdFilesystemFile8FS_fseekExi */
	virtual int64 FS_ftell(class CStdFilesystemFile *); /* linkage=_ZN18CStdFilesystemFile8FS_ftellEv */
	virtual size_t FS_fread(class CStdFilesystemFile *, void *, size_t, size_t); /* linkage=_ZN18CStdFilesystemFile8FS_freadEPvmm */
	virtual size_t FS_fwrite(class CStdFilesystemFile *, const void  *, size_t); /* linkage=_ZN18CStdFilesystemFile9FS_fwriteEPKvm */
	virtual int FS_ferror(class CStdFilesystemFile *); /* linkage=_ZN18CStdFilesystemFile9FS_ferrorEv */
	virtual int FS_fflush(class CStdFilesystemFile *); /* linkage=_ZN18CStdFilesystemFile9FS_fflushEv */
	virtual int FS_GetSectorSize(class CStdFilesystemFile *); /* linkage=_ZN18CStdFilesystemFile16FS_GetSectorSizeEv */
	virtual class IMemoryMappedFile * FS_CreateMemoryMap(class CStdFilesystemFile *, enum MemoryMappedFileFlags_t); /* linkage=_ZN18CStdFilesystemFile18FS_CreateMemoryMapE23MemoryMappedFileFlags_t */
};

// <0014A5DB> filesystem/filesystem_stdio.cpp:108
void CStdFilesystemFile::~CStdFilesystemFile()
{
} /* size: 0 */

// <0014A5AB> filesystem/filesystem_stdio.cpp:108
inline void CStdFilesystemFile::~CStdFilesystemFile()
{
} /* size: 0 */

// <0014A57D> filesystem/filesystem_stdio.cpp:117
void CStdFilesystemFile::FS_GetSectorSize()
{
} /* size: 10 */

// <00140719> filesystem/filesystem_stdio.cpp:123
// function call: 1
void CStdioFile::~CStdioFile()
{
	CStdFilesystemFile::~CStdFilesystemFile(); // 123
} /* size: 5, inline expansions: 1 (0 bytes) */

// <00140667> filesystem/filesystem_stdio.cpp:123
// function calls: 2
void CStdioFile::~CStdioFile()
{
	CStdFilesystemFile::~CStdFilesystemFile(); // 123
	CStdioFile::~CStdioFile(); // 123
} /* size: 14, inline expansions: 2 (0 bytes) */

// <0014064A> filesystem/filesystem_stdio.cpp:123
inline void CStdioFile::~CStdioFile()
{
} /* size: 0 */

// <0013B5BA> filesystem/filesystem_stdio.cpp:123
// member functions: 29
// member variables: 3
// static member variables: 2
// vtable entries: 9
// class size: 24
class CStdioFile : public CStdFilesystemFile {
public:
	/* class CStdFilesystemFile <ancestor>; */ /* 0 8 */
	void CStdioFile(CStdioFile* , CStdioFile& );
	void CStdioFile(CStdioFile* , const CStdioFile& );
	/* filesystem/filesystem_stdio.cpp:616 */
	CStdioFile* FS_fopen(const char* , const char* , int64* );
	/* filesystem/filesystem_stdio.cpp:722 */
	virtual void FS_setbufsize(CStdioFile* , unsigned int);
	/* filesystem/filesystem_stdio.cpp:744 */
	virtual void FS_fclose(CStdioFile* );
	/* filesystem/filesystem_stdio.cpp:766 */
	virtual void FS_fseek(CStdioFile* , int64, int);
	/* filesystem/filesystem_stdio.cpp:774 */
	virtual int64 FS_ftell(CStdioFile* );
	/* filesystem/filesystem_stdio.cpp:782 */
	virtual size_t FS_fread(CStdioFile* , void* , size_t, size_t);
	/* filesystem/filesystem_stdio.cpp:798 */
	virtual size_t FS_fwrite(CStdioFile* , const void* , size_t);
	/* filesystem/filesystem_stdio.cpp:826 */
	virtual int FS_ferror(CStdioFile* );
	/* filesystem/filesystem_stdio.cpp:834 */
	virtual int FS_fflush(CStdioFile* );
	/* filesystem/filesystem_stdio.cpp:842 */
	virtual IMemoryMappedFile* FS_CreateMemoryMap(CStdioFile* , MemoryMappedFileFlags_t);
	static CUtlMap<int, long long unsigned int, short unsigned int, bool (*)(int const&, int const&)> s_LockedFDMap; /* 0 0* /
	static class CThreadMutex s_lockedFDMapMutex; /* 0 0 */
private:
	/* filesystem/filesystem_stdio.cpp:144 */
	void CStdioFile(CStdioFile* , FILE* , bool);
	FILE * m_pFile; /* 8 8 */
	bool m_bWriteable; /* 16 1 */
	virtual void ~CStdioFile(CStdioFile* );
	void CStdioFile(class CStdioFile *, class CStdioFile &); /* linkage=_ZN10CStdioFileC4EOS_ */
	void CStdioFile(class CStdioFile *, const class CStdioFile  &); /* linkage=_ZN10CStdioFileC4ERKS_ */
	class CStdioFile * FS_fopen(const char  *, const char  *, int64 *); /* linkage=_ZN10CStdioFile8FS_fopenEPKcS1_Px */
	/* <14bca9> filesystem/filesystem_stdio.cpp:722 */
	virtual void FS_setbufsize(class CStdioFile *, unsigned int); /* linkage=_ZN10CStdioFile13FS_setbufsizeEj */
	virtual void FS_fclose(class CStdioFile *); /* linkage=_ZN10CStdioFile9FS_fcloseEv */
	virtual void FS_fseek(class CStdioFile *, int64, int); /* linkage=_ZN10CStdioFile8FS_fseekExi */
	virtual int64 FS_ftell(class CStdioFile *); /* linkage=_ZN10CStdioFile8FS_ftellEv */
	virtual size_t FS_fread(class CStdioFile *, void *, size_t, size_t); /* linkage=_ZN10CStdioFile8FS_freadEPvmm */
	/* <14b48b> filesystem/filesystem_stdio.cpp:798 */
	virtual size_t FS_fwrite(class CStdioFile *, const void  *, size_t); /* linkage=_ZN10CStdioFile9FS_fwriteEPKvm */
	virtual int FS_ferror(class CStdioFile *); /* linkage=_ZN10CStdioFile9FS_ferrorEv */
	virtual int FS_fflush(class CStdioFile *); /* linkage=_ZN10CStdioFile9FS_fflushEv */
	virtual class IMemoryMappedFile * FS_CreateMemoryMap(class CStdioFile *, enum MemoryMappedFileFlags_t); /* linkage=_ZN10CStdioFile18FS_CreateMemoryMapE23MemoryMappedFileFlags_t */
	void CStdioFile(class CStdioFile *, FILE *, bool); /* linkage=_ZN10CStdioFileC4EP8_IO_FILEb */
	virtual void ~CStdioFile(class CStdioFile *); /* linkage=_ZN10CStdioFileD4Ev */
};

// <0014A528> filesystem/filesystem_stdio.cpp:144
void CStdioFile::CStdioFile(FILE* pFile, bool bWriteable)
{
} /* size: 0 */

// <0014A4F7> filesystem/filesystem_stdio.cpp:144
inline void CStdioFile::CStdioFile(FILE* pFile, bool bWriteable)
{
} /* size: 0 */

// <00140846> filesystem/filesystem_stdio.cpp:160
// function call: 1
void CFioReadOnlyFile::~CFioReadOnlyFile()
{
	CStdFilesystemFile::~CStdFilesystemFile(); // 160
} /* size: 5, inline expansions: 1 (0 bytes) */

// <00140793> filesystem/filesystem_stdio.cpp:160
// function calls: 2
void CFioReadOnlyFile::~CFioReadOnlyFile()
{
	CStdFilesystemFile::~CStdFilesystemFile(); // 160
	CFioReadOnlyFile::~CFioReadOnlyFile(); // 160
} /* size: 14, inline expansions: 2 (0 bytes) */

// <00140776> filesystem/filesystem_stdio.cpp:160
inline void CFioReadOnlyFile::~CFioReadOnlyFile()
{
} /* size: 0 */

// <0013C1E4> filesystem/filesystem_stdio.cpp:160
// member functions: 32
// member variables: 6
// vtable entries: 10
// class size: 40
class CFioReadOnlyFile : public CStdFilesystemFile {
public:
	/* class CStdFilesystemFile <ancestor>; */ /* 0 8 */
	void CFioReadOnlyFile(CFioReadOnlyFile* , CFioReadOnlyFile& );
	void CFioReadOnlyFile(CFioReadOnlyFile* , const CFioReadOnlyFile& );
	/* filesystem/filesystem_stdio.cpp:850 */
	bool CanOpen(const char* , const char* );
	/* filesystem/filesystem_stdio.cpp:889 */
	CFioReadOnlyFile* FS_fopen(const char* , const char* , int64* );
	/* filesystem/filesystem_stdio.cpp:166 */
	virtual void FS_setbufsize(CFioReadOnlyFile* , unsigned int);
	/* filesystem/filesystem_stdio.cpp:936 */
	virtual void FS_fclose(CFioReadOnlyFile* );
	/* filesystem/filesystem_stdio.cpp:954 */
	virtual void FS_fseek(CFioReadOnlyFile* , int64, int);
	/* filesystem/filesystem_stdio.cpp:976 */
	virtual int64 FS_ftell(CFioReadOnlyFile* );
	/* filesystem/filesystem_stdio.cpp:987 */
	virtual size_t FS_fread(CFioReadOnlyFile* , void* , size_t, size_t);
	/* filesystem/filesystem_stdio.cpp:171 */
	virtual size_t FS_fwrite(CFioReadOnlyFile* , const void* , size_t);
	/* filesystem/filesystem_stdio.cpp:172 */
	virtual int FS_ferror(CFioReadOnlyFile* );
	/* filesystem/filesystem_stdio.cpp:173 */
	virtual int FS_fflush(CFioReadOnlyFile* );
	/* filesystem/filesystem_stdio.cpp:174 */
	virtual int FS_GetSectorSize(CFioReadOnlyFile* );
	/* filesystem/filesystem_stdio.cpp:1137 */
	virtual IMemoryMappedFile* FS_CreateMemoryMap(CFioReadOnlyFile* , MemoryMappedFileFlags_t);
private:
	/* filesystem/filesystem_stdio.cpp:178 */
	void CFioReadOnlyFile(CFioReadOnlyFile* , OSFILEHANDLE, OSFILEHANDLE, int, int64);
	int64 m_ReadPos; /* 8 8 */
	int64 m_Size; /* 16 8 */
	OSFILEHANDLE m_hFileUnbuffered; /* 24 4 */
	OSFILEHANDLE m_hFileBuffered; /* 28 4 */
	int m_SectorSize; /* 32 4 */
	virtual void ~CFioReadOnlyFile(CFioReadOnlyFile* );
	void CFioReadOnlyFile(class CFioReadOnlyFile *, class CFioReadOnlyFile &); /* linkage=_ZN16CFioReadOnlyFileC4EOS_ */
	void CFioReadOnlyFile(class CFioReadOnlyFile *, const class CFioReadOnlyFile  &); /* linkage=_ZN16CFioReadOnlyFileC4ERKS_ */
	/* <14bd70> filesystem/filesystem_stdio.cpp:850 */
	bool CanOpen(const char  *, const char  *); /* linkage=_ZN16CFioReadOnlyFile7CanOpenEPKcS1_ */
	class CFioReadOnlyFile * FS_fopen(const char  *, const char  *, int64 *); /* linkage=_ZN16CFioReadOnlyFile8FS_fopenEPKcS1_Px */
	virtual void FS_setbufsize(class CFioReadOnlyFile *, unsigned int); /* linkage=_ZN16CFioReadOnlyFile13FS_setbufsizeEj */
	virtual void FS_fclose(class CFioReadOnlyFile *); /* linkage=_ZN16CFioReadOnlyFile9FS_fcloseEv */
	virtual void FS_fseek(class CFioReadOnlyFile *, int64, int); /* linkage=_ZN16CFioReadOnlyFile8FS_fseekExi */
	virtual int64 FS_ftell(class CFioReadOnlyFile *); /* linkage=_ZN16CFioReadOnlyFile8FS_ftellEv */
	/* <14bb97> filesystem/filesystem_stdio.cpp:987 */
	virtual size_t FS_fread(class CFioReadOnlyFile *, void *, size_t, size_t); /* linkage=_ZN16CFioReadOnlyFile8FS_freadEPvmm */
	virtual size_t FS_fwrite(class CFioReadOnlyFile *, const void  *, size_t); /* linkage=_ZN16CFioReadOnlyFile9FS_fwriteEPKvm */
	virtual int FS_ferror(class CFioReadOnlyFile *); /* linkage=_ZN16CFioReadOnlyFile9FS_ferrorEv */
	virtual int FS_fflush(class CFioReadOnlyFile *); /* linkage=_ZN16CFioReadOnlyFile9FS_fflushEv */
	virtual int FS_GetSectorSize(class CFioReadOnlyFile *); /* linkage=_ZN16CFioReadOnlyFile16FS_GetSectorSizeEv */
	virtual class IMemoryMappedFile * FS_CreateMemoryMap(class CFioReadOnlyFile *, enum MemoryMappedFileFlags_t); /* linkage=_ZN16CFioReadOnlyFile18FS_CreateMemoryMapE23MemoryMappedFileFlags_t */
	void CFioReadOnlyFile(class CFioReadOnlyFile *, OSFILEHANDLE, OSFILEHANDLE, int, int64); /* linkage=_ZN16CFioReadOnlyFileC4Eiiix */
	virtual void ~CFioReadOnlyFile(class CFioReadOnlyFile *); /* linkage=_ZN16CFioReadOnlyFileD4Ev */
};

// <0014A4BA> filesystem/filesystem_stdio.cpp:166
void CFioReadOnlyFile::FS_setbufsize(unsigned int nBytes)
{
} /* size: 5 */

// <0014A46E> filesystem/filesystem_stdio.cpp:171
void CFioReadOnlyFile::FS_fwrite(const void* src, size_t size)
{
} /* size: 7 */

// <0014A440> filesystem/filesystem_stdio.cpp:172
void CFioReadOnlyFile::FS_ferror()
{
} /* size: 7 */

// <0014A412> filesystem/filesystem_stdio.cpp:173
void CFioReadOnlyFile::FS_fflush()
{
} /* size: 7 */

// <0014A3E4> filesystem/filesystem_stdio.cpp:174
void CFioReadOnlyFile::FS_GetSectorSize()
{
} /* size: 8 */

// <0014A3B9> filesystem/filesystem_stdio.cpp:178
void CFioReadOnlyFile::CFioReadOnlyFile(OSFILEHANDLE hFileUnbuffered, OSFILEHANDLE hFileBuffered, int sectorSize, int64 fileSize)
{
} /* size: 0 */

// <0014A370> filesystem/filesystem_stdio.cpp:178
inline void CFioReadOnlyFile::CFioReadOnlyFile(OSFILEHANDLE hFileUnbuffered, OSFILEHANDLE hFileBuffered, int sectorSize, int64 fileSize)
{
} /* size: 0 */

// <0014A34F> filesystem/filesystem_stdio.cpp:200
void* __CreateCFileSystem_StdioIFileSystem_interface(void)
{
} /* size: 12 */

// <0014A32E> filesystem/filesystem_stdio.cpp:201
void* __CreateCFileSystem_StdioIBaseFileSystem_interface(void)
{
} /* size: 12 */

// <0014A30D> filesystem/filesystem_stdio.cpp:202
void* __CreateCAsyncFileSystem2IAsyncFileSystem2_interface(void)
{
} /* size: 12 */

// <0014A2E9> filesystem/filesystem_stdio.cpp:207
// variable: 1
bool UseOptimalBufferAllocation(void)
{
	bool bUseOptimalBufferAllocation; // 209
} /* size: 0, variables: 1 */

// <0014A15A> filesystem/filesystem_stdio.cpp:223
// function calls: 6
void CFileSystem_Stdio::CFileSystem_Stdio()
{
	Count(const CUtlRBTree<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int, CUtlMap<int, long long unsigned this); // 1636
	{
	}
	SetLessFunc(const CUtlRBTree<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int, CUtlMap<int, long long unsigned int>:: this,
			const LessFunc_t& func);  // 1634
	SetLessFunc(const CUtlRBTree<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int, CUtlMap<int, long long unsigned int>:: this,
			const LessFunc_t& func);  // 201
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 201
	CUtlMap<int, long long unsigned int, short unsigned int, bool (::SetLessFunc(
			LessFunc_t func);  // 159
	SetDefLessFunc<CUtlMap<int, long long unsigned int> >(CUtlMap<int, long long unsigned int, short unsigned int, bool (*)(int const&, int const&)>& RBTree); // 228
} /* size: 0, inline expansions: 6 (188 bytes) */

// <0014A141> filesystem/filesystem_stdio.cpp:223
void CFileSystem_Stdio::CFileSystem_Stdio()
{
} /* size: 0 */

// <0014A09E> filesystem/filesystem_stdio.cpp:236
void CFileSystem_Stdio::~CFileSystem_Stdio()
{
	{
		{
		}
	}
	{
		{
		}
	}
} /* size: 0 */

// <0014A061> filesystem/filesystem_stdio.cpp:236
// variables: 2
void CFileSystem_Stdio::~CFileSystem_Stdio()
{
	const char   __FUNCTION__; // 64076
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
	}
} /* size: 0, variables: 1 */

// <00149F8D> filesystem/filesystem_stdio.cpp:245
// function call: 1
void* CFileSystem_Stdio::QueryInterface(const char* pInterfaceName)
{
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 248
} /* size: 71, inline expansions: 1 (20 bytes) */

// <0014B5AC> filesystem/filesystem_stdio.cpp:257
// variables: 2
// function calls: 2
void CFileSystem_Stdio::GetOptimalIOConstraints(FileHandle_t hFile, unsigned int* pOffsetAlign, unsigned int* pSizeAlign, unsigned int* pBufferAlign)
{
	unsigned int sectorSize; // 259
	CFileHandle* fh; // 261
	CPackedStoreFileHandle::operator bool(); // 263
	CFileSystem_Stdio::GetOptimalIOConstraints(
				FileHandle_t hFile,
				unsigned int* pOffsetAlign,
				unsigned int* pSizeAlign,
				unsigned int* pBufferAlign);  // 257
} /* size: 61, variables: 2, inline expansions: 2 (34 bytes) */

// <00149F26> filesystem/filesystem_stdio.cpp:257
// variables: 2
void CFileSystem_Stdio::GetOptimalIOConstraints(FileHandle_t hFile, unsigned int* pOffsetAlign, unsigned int* pSizeAlign, unsigned int* pBufferAlign)
{
	unsigned int sectorSize; // 259
	CFileHandle* fh; // 261
} /* size: 0, variables: 2 */

// <0014B6B0> filesystem/filesystem_stdio.cpp:302
// variables: 4
// function call: 1
void* CFileSystem_Stdio::AllocOptimalReadBuffer(FileHandle_t hFile, unsigned int nSize, unsigned int nOffset)
{
	unsigned int sectorSize; // 309
	bool bOffsetIsAligned; // 328
	unsigned int nAllocSize; // 329
	unsigned int nAllocAlignment; // 331
	CBaseFileSystem::AllocOptimalReadBuffer(
				FileHandle_t hFile,
				unsigned int nSize,
				unsigned int nOffset);  // 306
} /* size: 11, variables: 4, inline expansions: 1 (7 bytes) */

// <00149E9E> filesystem/filesystem_stdio.cpp:302
// variables: 5
void* CFileSystem_Stdio::AllocOptimalReadBuffer(FileHandle_t hFile, unsigned int nSize, unsigned int nOffset)
{
	unsigned int sectorSize; // 309
	bool bOffsetIsAligned; // 328
	unsigned int nAllocSize; // 329
	unsigned int nAllocAlignment; // 331
	{
		CFileHandle* fh; // 312
	}
} /* size: 0, variables: 4 */

// <00149E02> filesystem/filesystem_stdio.cpp:338
// function call: 1
void CFileSystem_Stdio::FreeOptimalReadBuffer(void* p)
{
	CBaseFileSystem::FreeOptimalReadBuffer(
				void* p);  // 342
} /* size: 12, inline expansions: 1 (8 bytes) */

// <00149CA3> filesystem/filesystem_stdio.cpp:355
// variable: 1
// function calls: 3
void CFileSystem_Stdio::FS_fopen(const char* filename, const char* options, unsigned int flags, int64* size)
{
	CStdFilesystemFile* pFile; // 357
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 852
	CanOpen(const char* filename,
		const char* options);  // 359
} /* size: 66, variables: 1, inline expansions: 3 (45 bytes) */

// <00149C17> filesystem/filesystem_stdio.cpp:373
// variable: 1
void CFileSystem_Stdio::FS_setbufsize(VirtualFileHandle_t fileHandle, unsigned int nBytes)
{
	CStdFilesystemFile* pFile; // 375
} /* size: 21, variables: 1 */

// <00149B92> filesystem/filesystem_stdio.cpp:382
// variable: 1
void CFileSystem_Stdio::FS_fclose(VirtualFileHandle_t fileHandle)
{
	CStdFilesystemFile* pFile; // 384
} /* size: 54, variables: 1 */

// <00149AE9> filesystem/filesystem_stdio.cpp:392
// variable: 1
void CFileSystem_Stdio::FS_fseek(VirtualFileHandle_t fileHandle, int64 pos, int seekType)
{
	CStdFilesystemFile* pFile; // 394
} /* size: 24, variables: 1 */

// <00149A79> filesystem/filesystem_stdio.cpp:401
// variable: 1
void CFileSystem_Stdio::FS_ftell(VirtualFileHandle_t fileHandle)
{
	CStdFilesystemFile* pFile; // 403
} /* size: 16, variables: 1 */

// <00149983> filesystem/filesystem_stdio.cpp:410
// variables: 2
void CFileSystem_Stdio::FS_fread(void* dest, size_t destSize, size_t size, VirtualFileHandle_t fileHandle)
{
	CStdFilesystemFile* pFile; // 412
	size_t nBytesRead; // 413
} /* size: 60, variables: 2 */

// <001498CD> filesystem/filesystem_stdio.cpp:423
// variables: 2
void CFileSystem_Stdio::FS_fwrite(const void* src, size_t size, VirtualFileHandle_t fileHandle)
{
	CStdFilesystemFile* pFile; // 425
	size_t nBytesWritten; // 427
} /* size: 16, variables: 2 */

// <0014985D> filesystem/filesystem_stdio.cpp:435
// variable: 1
void CFileSystem_Stdio::FS_ferror(VirtualFileHandle_t fileHandle)
{
	CStdFilesystemFile* pFile; // 437
} /* size: 16, variables: 1 */

// <001497ED> filesystem/filesystem_stdio.cpp:444
// variable: 1
void CFileSystem_Stdio::FS_fflush(VirtualFileHandle_t fileHandle)
{
	CStdFilesystemFile* pFile; // 446
} /* size: 16, variables: 1 */

// <0014956D> filesystem/filesystem_stdio.cpp:456
// variables: 2
// function calls: 8
void CFileSystem_Stdio::FS_SetFileReadOnly(const char* path, bool bReadOnly)
{
	bool bSucc; // 461
	{
		CPathBufferString file; // 465
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 465
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 468
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 470
	}
} /* size: 267, variables: 1 */

// <00149278> filesystem/filesystem_stdio.cpp:478
// variables: 6
// function calls: 8
void CFileSystem_Stdio::FS_GetBaseFileInfo(const char* path, FioBaseFileInfo_t* pInfo)
{
	uint nInfoFlags; // 485
	uint nMetaFlags; // 486
	int rt; // 487
	{
		CPathBufferString file; // 491
		const char* pRealName; // 492
		{
			int rt; // 495
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 495
		}
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 491
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 497
	}
} /* size: 262, variables: 3 */

// <00149198> filesystem/filesystem_stdio.cpp:510
// variable: 1
void CFileSystem_Stdio::FS_FindFiles(const char* findname)
{
	CDirIterator* pFind; // 512
} /* size: 104, variables: 1 */

// <00149128> filesystem/filesystem_stdio.cpp:525
// variable: 1
void CFileSystem_Stdio::FS_GetSectorSize(VirtualFileHandle_t fileHandle)
{
	CStdFilesystemFile* pFile; // 527
} /* size: 16, variables: 1 */

// <0014909C> filesystem/filesystem_stdio.cpp:534
// variable: 1
void CFileSystem_Stdio::FS_CreateMemoryMap(VirtualFileHandle_t fileHandle, MemoryMappedFileFlags_t nFlags)
{
	CStdFilesystemFile* pFile; // 536
} /* size: 21, variables: 1 */

// <0014905F> filesystem/filesystem_stdio.cpp:543
void CFileSystem_Stdio::IsFileImmediatelyAvailable(const char* pFileName)
{
} /* size: 10 */

// <00149022> filesystem/filesystem_stdio.cpp:558
void CFileSystem_Stdio::WaitForResources(const char* resourcelist)
{
} /* size: 10 */

// <00148FC7> filesystem/filesystem_stdio.cpp:570
void CFileSystem_Stdio::GetWaitForResourcesProgress(WaitForResourcesHandle_t handle, float* progress, bool* complete)
{
} /* size: 19 */

// <00148F8A> filesystem/filesystem_stdio.cpp:591
void CFileSystem_Stdio::CancelWaitForResources(WaitForResourcesHandle_t handle)
{
} /* size: 5 */

// <00148F4D> filesystem/filesystem_stdio.cpp:598
void CFileSystem_Stdio::GetLocalCopy(const char* pFileName)
{
} /* size: 5 */

// <00148F01> filesystem/filesystem_stdio.cpp:606
void CFileSystem_Stdio::HintResourceNeed(const char* hintlist, int forgetEverything)
{
} /* size: 7 */

// <00147EDA> filesystem/filesystem_stdio.cpp:616
// variables: 12
// function calls: 50
void FS_fopen(const char* filename, const char* options, int64* pSize)
{
	const char   __FUNCTION__; // 63836
	FILE* pFile; // 621
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 619
	}
	{
		CPathBufferString file; // 641
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 641
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 644
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 648
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 660
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 660
	}
	{
		bool bWriteable; // 665
		{
			ThreadId_t curThread; // 675
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_677; // 677
			int fd; // 679
			int iLockID; // 680
			int ret; // 681
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 677
			FindAltKeyType<int>(const CUtlRBTree<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int, CUtlMap<int, long long unsigned  this,
						const int& search);  // 243
			CUtlMap<int, long long unsigned int, short unsigned int, bool (::Find(
				const KeyType_t& key);  // 680
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 539
			Element(const CUtlRBTree<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int, CUtlMap<int, long long unsigned int>:: this,
				short unsigned int i);  // 92
			CUtlMap<int, long long unsigned int, short unsigned int, bool (::operator[](
					IndexType_t i);  // 706
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 711
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 539
			Element(const CUtlRBTree<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int, CUtlMap<int, long long unsigned int>:: this,
				short unsigned int i);  // 92
			CUtlMap<int, long long unsigned int, short unsigned int, bool (::operator[](
					IndexType_t i);  // 687
			Node_t::Node_t(
				const KeyType_t& k,
				const ElemType_t& e);  // 207
			operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int>, short unsigned  this,
					short unsigned int i);  // 611
			LeftChild(const CUtlRBTree<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int, CUtlMap<int, long long unsigned  this,
					short unsigned int i);  // 1667
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 539
			Element(const CUtlRBTree<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int, CUtlMap<int, long long unsigned int>:: this,
				short unsigned int i);  // 1665
			CKeyLess::operator(
					const Node_t& left,
					const Node_t& right);  // 1665
			CKeyLess::operator(
					const Node_t& left,
					const Node_t& right);  // 1669
			operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int>, short unsigned  this,
					short unsigned int i);  // 617
			RightChild(const CUtlRBTree<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int, CUtlMap<int, long long unsigned  this,
					short unsigned int i);  // 1677
			FindInsertionPosition(const CUtlRBTree<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int, CUtlMap<int, long long unsigned int>:: this,
						const Node_t& insert,
						bool bCheckForDuplicates,
						short unsigned int& parent,
						bool& leftchild,
						bool& isDuplicate);  // 1693
			{
				short unsigned int newNode; // 1709
				{
				}
			}
			{
				short unsigned int newNode; // 1696
			}
			Insert(const CUtlRBTree<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int, CUtlMap<int, long long unsigned int>:: this,
				const Node_t& insert,
				ERBTreeInsertBehavior eInsertBehavior);  // 207
			CUtlMap<int, long long unsigned int, short unsigned int, bool (::Insert(
				const KeyType_t& key,
				const ElemType_t& insert,
				ERBTreeInsertBehavior eInsertBehavior);  // 708
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 711
		}
		strchr(const char* __s,
			int __c);  // 666
		CStdFilesystemFile::CStdFilesystemFile(); // 145
		CStdioFile::CStdioFile(
				FILE* pFile,
				bool bWriteable);  // 713
		strchr(const char* __s,
			int __c);  // 666
	}
	strchr(const char* __s,
		int __c);  // 619
	strchr(const char* __s,
		int __c);  // 619
	strchr(const char* __s,
		int __c);  // 639
	strchr(const char* __s,
		int __c);  // 639
} /* size: 0, variables: 2, inline expansions: 4 (49 bytes) */

// <0014BCA9> filesystem/filesystem_stdio.cpp:722
// function call: 1
void CStdioFile::FS_setbufsize(unsigned int nBytes)
{
	CStdioFile::FS_setbufsize(
			unsigned int nBytes);  // 722
} /* size: 46, inline expansions: 1 (24 bytes) */

// <00147EB4> filesystem/filesystem_stdio.cpp:722
void CStdioFile::FS_setbufsize(unsigned int nBytes)
{
} /* size: 0 */

// <00147B0C> filesystem/filesystem_stdio.cpp:744
// variables: 3
// function calls: 11
void CStdioFile::FS_fclose()
{
	{
		int fd; // 750
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_753; // 753
		int iLockID; // 755
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 753
		FindAltKeyType<int>(const CUtlRBTree<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int, CUtlMap<int, long long unsigned  this,
					const int& search);  // 243
		CUtlMap<int, long long unsigned int, short unsigned int, bool (::Find(
			const KeyType_t& key);  // 755
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int>, short unsigned int>::operator[](
				short unsigned int i);  // 539
		Element(const CUtlRBTree<CUtlMap<int, long long unsigned int>::Node_t, short unsigned int, CUtlMap<int, long long unsigned int>:: this,
			short unsigned int i);  // 92
		CUtlMap<int, long long unsigned int, short unsigned int, bool (::operator[](
				IndexType_t i);  // 757
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 758
	}
} /* size: 258 */

// <00147A90> filesystem/filesystem_stdio.cpp:766
void CStdioFile::FS_fseek(int64 pos, int seekType)
{
} /* size: 13 */

// <00147A4D> filesystem/filesystem_stdio.cpp:774
void CStdioFile::FS_ftell()
{
} /* size: 13 */

// <001479AB> filesystem/filesystem_stdio.cpp:782
// variable: 1
void CStdioFile::FS_fread(void* dest, size_t destSize, size_t size)
{
	size_t nResult; // 785
} /* size: 24, variables: 1 */

// <0014B48B> filesystem/filesystem_stdio.cpp:798
// variables: 4
// function call: 1
void CStdioFile::FS_fwrite(const void* src, size_t size)
{
	{
		size_t remaining; // 802
		const byte* current; // 803
		size_t total; // 804
		{
			size_t bytesToCopy; // 808
		}
		{
		}
	}
	CStdioFile::FS_fwrite(
			const void* src,
			size_t size);  // 798
} /* size: 0, inline expansions: 1 (87 bytes) */

// <00147918> filesystem/filesystem_stdio.cpp:798
// variables: 6
void CStdioFile::FS_fwrite(const void* src, size_t size)
{
	const char   __FUNCTION__; // 63863
	{
		size_t remaining; // 802
		const byte* current; // 803
		size_t total; // 804
		{
			size_t bytesToCopy; // 808
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 816
		}
	}
} /* size: 0, variables: 1 */

// <001478D5> filesystem/filesystem_stdio.cpp:826
void CStdioFile::FS_ferror()
{
} /* size: 13 */

// <00147892> filesystem/filesystem_stdio.cpp:834
void CStdioFile::FS_fflush()
{
} /* size: 13 */

// <00147855> filesystem/filesystem_stdio.cpp:842
void CStdioFile::FS_CreateMemoryMap(MemoryMappedFileFlags_t nFlags)
{
} /* size: 7 */

// <0014BD70> filesystem/filesystem_stdio.cpp:850
// function calls: 2
void CanOpen(const char* filename, const char* options)
{
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 852
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0014782F> filesystem/filesystem_stdio.cpp:850
void CanOpen(const char* filename, const char* options)
{
} /* size: 0 */

// <0014771D> filesystem/filesystem_stdio.cpp:859
// variables: 3
OSFILEHANDLE OpenFioFile(const char* filename, bool bUnbuffered, int64* pFileSize)
{
	OSFILEHANDLE hFile; // 861
	uint createFlags; // 863
	{
		uint64 fileSize; // 875
	}
} /* size: 151, variables: 2 */

// <0014749A> filesystem/filesystem_stdio.cpp:889
// variables: 7
// function calls: 5
void FS_fopen(const char* filename, const char* options, int64* size)
{
	const char   __FUNCTION__; // 63836
	int sectorSize; // 893
	bool bTryUnbuffered; // 894
	OSFILEHANDLE hFileUnbuffered; // 903
	int64 fileSize; // 904
	OSFILEHANDLE hFileBuffered; // 915
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 891
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 852
	CanOpen(const char* filename,
		const char* options);  // 891
	CStdFilesystemFile::CStdFilesystemFile(); // 183
	CFioReadOnlyFile::CFioReadOnlyFile(
			OSFILEHANDLE hFileUnbuffered,
			OSFILEHANDLE hFileBuffered,
			int sectorSize,
			int64 fileSize);  // 930
} /* size: 0, variables: 6, inline expansions: 5 (100 bytes) */

// <0014744B> filesystem/filesystem_stdio.cpp:936
void CFioReadOnlyFile::FS_fclose()
{
} /* size: 62 */

// <001473F8> filesystem/filesystem_stdio.cpp:954
void CFioReadOnlyFile::FS_fseek(int64 pos, int seekType)
{
} /* size: 53 */

// <001473CA> filesystem/filesystem_stdio.cpp:976
void CFioReadOnlyFile::FS_ftell()
{
} /* size: 9 */

// <0014BB97> filesystem/filesystem_stdio.cpp:987
// variables: 10
// function call: 1
void CFioReadOnlyFile::FS_fread(void* dest, size_t destSize, size_t size)
{
	byte tempBuffer; // 1004
	OSFILEHANDLE hReadFile; // 1005
	int nBytesToRead; // 1006
	byte* pDest; // 1007
	int64 offset; // 1008
	const int  MIN_READ; // 1048
	bool bReadOk; // 1049
	int64 nBytesRead; // 1050
	int64 result; // 1051
	int64 currentOffset; // 1052
	ConVar::GetInt(); // 994
} /* size: 113, variables: 10, inline expansions: 1 (10 bytes) */

// <0014B78F> filesystem/filesystem_stdio.cpp:987
// variables: 19
// function calls: 9
void CFioReadOnlyFile::FS_fread(void* dest, size_t destSize, size_t size)
{
	byte tempBuffer; // 1004
	OSFILEHANDLE hReadFile; // 1005
	int nBytesToRead; // 1006
	byte* pDest; // 1007
	int64 offset; // 1008
	const int  MIN_READ; // 1048
	bool bReadOk; // 1049
	int64 nBytesRead; // 1050
	int64 result; // 1051
	int64 currentOffset; // 1052
	{
		const int  destBaseAlign; // 1012
		bool bDestBaseIsAligned; // 1013
		bool bCanReadUnbufferedDirect; // 1014
		AlignValue<int>(int val,
				uintp alignment);  // 1019
		{
			int64 alignedOffset; // 1026
			unsigned int alignedBytesToRead; // 1027
			AlignValue<long long int>(long long int val,
							uintp alignment);  // 1026
			AlignValue<long long unsigned int>(long long unsigned int val,
								uintp alignment);  // 1027
			AlignValue<unsigned char*>(unsigned char* val,
							uintp alignment);  // 1033
		}
	}
	{
		int nCurBytesToRead; // 1056
		int nCurBytesRead; // 1057
		int nErr; // 1059
		Min<int>(const int& val1,
			const int& val2);  // 1056
	}
	{
		int64 nBytesExtra; // 1095
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1099
	}
	Min<long unsigned int>(const long unsigned int& val1,
				const long unsigned int& val2);  // 1103
	ConVar::GetInt(); // 1047
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 1047
} /* size: 858, variables: 10, inline expansions: 3 (47 bytes) */

// <00147220> filesystem/filesystem_stdio.cpp:987
// variables: 20
void CFioReadOnlyFile::FS_fread(void* dest, size_t destSize, size_t size)
{
	byte tempBuffer; // 1004
	OSFILEHANDLE hReadFile; // 1005
	int nBytesToRead; // 1006
	byte* pDest; // 1007
	int64 offset; // 1008
	int MAX_READ; // 1047
	const int  MIN_READ; // 1048
	bool bReadOk; // 1049
	int64 nBytesRead; // 1050
	int64 result; // 1051
	int64 currentOffset; // 1052
	{
		const int  destBaseAlign; // 1012
		bool bDestBaseIsAligned; // 1013
		bool bCanReadUnbufferedDirect; // 1014
		{
			int64 alignedOffset; // 1026
			unsigned int alignedBytesToRead; // 1027
		}
	}
	{
		int nCurBytesToRead; // 1056
		int nCurBytesRead; // 1057
		int nErr; // 1059
	}
	{
		int64 nBytesExtra; // 1095
	}
} /* size: 0, variables: 11 */

// <001470B1> filesystem/filesystem_stdio.cpp:1111
// function call: 1
void CFioReadOnlyMemoryMappedFile::~CFioReadOnlyMemoryMappedFile()
{
	IMemoryMappedFile::~IMemoryMappedFile(); // 1111
} /* size: 5, inline expansions: 1 (0 bytes) */

// <00146FFC> filesystem/filesystem_stdio.cpp:1111
// function calls: 2
void CFioReadOnlyMemoryMappedFile::~CFioReadOnlyMemoryMappedFile()
{
	IMemoryMappedFile::~IMemoryMappedFile(); // 1111
	CFioReadOnlyMemoryMappedFile::~CFioReadOnlyMemoryMappedFile(); // 1111
} /* size: 14, inline expansions: 2 (0 bytes) */

// <00146FDE> filesystem/filesystem_stdio.cpp:1111
inline void CFioReadOnlyMemoryMappedFile::~CFioReadOnlyMemoryMappedFile()
{
} /* size: 0 */

// <0013C0C5> filesystem/filesystem_stdio.cpp:1111
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 32
class CFioReadOnlyMemoryMappedFile : public IMemoryMappedFile {
public:
	/* class IMemoryMappedFile <ancestor>; */ /* 0 32 */
	void CFioReadOnlyMemoryMappedFile(CFioReadOnlyMemoryMappedFile* , CFioReadOnlyMemoryMappedFile& );
	void CFioReadOnlyMemoryMappedFile(CFioReadOnlyMemoryMappedFile* , const CFioReadOnlyMemoryMappedFile& );
	/* filesystem/filesystem_stdio.cpp:1114 */
	void CFioReadOnlyMemoryMappedFile(CFioReadOnlyMemoryMappedFile* , void* , size_t);
	/* filesystem/filesystem_stdio.cpp:1121 */
	virtual bool WriteToContents(CFioReadOnlyMemoryMappedFile* , size_t, const void* , size_t);
private:
	/* filesystem/filesystem_stdio.cpp:1124 */
	virtual void ReachedZeroReferences(CFioReadOnlyMemoryMappedFile* );
	virtual void ~CFioReadOnlyMemoryMappedFile(CFioReadOnlyMemoryMappedFile* );
	void CFioReadOnlyMemoryMappedFile(class CFioReadOnlyMemoryMappedFile *, class CFioReadOnlyMemoryMappedFile &); /* linkage=_ZN28CFioReadOnlyMemoryMappedFileC4EOS_ */
	void CFioReadOnlyMemoryMappedFile(class CFioReadOnlyMemoryMappedFile *, const class CFioReadOnlyMemoryMappedFile  &); /* linkage=_ZN28CFioReadOnlyMemoryMappedFileC4ERKS_ */
	void CFioReadOnlyMemoryMappedFile(class CFioReadOnlyMemoryMappedFile *, void *, size_t); /* linkage=_ZN28CFioReadOnlyMemoryMappedFileC4EPvm */
	virtual bool WriteToContents(class CFioReadOnlyMemoryMappedFile *, size_t, const void  *, size_t); /* linkage=_ZN28CFioReadOnlyMemoryMappedFile15WriteToContentsEmPKvm */
	virtual void ReachedZeroReferences(class CFioReadOnlyMemoryMappedFile *); /* linkage=_ZN28CFioReadOnlyMemoryMappedFile21ReachedZeroReferencesEv */
	virtual void ~CFioReadOnlyMemoryMappedFile(class CFioReadOnlyMemoryMappedFile *); /* linkage=_ZN28CFioReadOnlyMemoryMappedFileD4Ev */
} __attribute__((__aligned__(8)));

// <001471FF> filesystem/filesystem_stdio.cpp:1114
void CFioReadOnlyMemoryMappedFile::CFioReadOnlyMemoryMappedFile(void* pMappedMemory, size_t nSize)
{
} /* size: 0 */

// <001471CC> filesystem/filesystem_stdio.cpp:1114
inline void CFioReadOnlyMemoryMappedFile::CFioReadOnlyMemoryMappedFile(void* pMappedMemory, size_t nSize)
{
} /* size: 0 */

// <0014710F> filesystem/filesystem_stdio.cpp:1121
// variables: 2
void CFioReadOnlyMemoryMappedFile::WriteToContents(size_t nOffset, const void* pSource, size_t nWriteCount)
{
	const char   __FUNCTION__; // 64005
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1121
	}
} /* size: 29, variables: 1 */

// <00146F8A> filesystem/filesystem_stdio.cpp:1124
void CFioReadOnlyMemoryMappedFile::ReachedZeroReferences()
{
} /* size: 46 */

// <00146E2C> filesystem/filesystem_stdio.cpp:1137
// variables: 2
// function calls: 3
void CFioReadOnlyFile::FS_CreateMemoryMap(MemoryMappedFileFlags_t nFlags)
{
	OSFILEHANDLE hFile; // 1145
	{
		void* pMapping; // 1157
		CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(
				unsigned int value);  // 225
		IMemoryMappedFile::IMemoryMappedFile(); // 1115
		CFioReadOnlyMemoryMappedFile::CFioReadOnlyMemoryMappedFile(
						void* pMappedMemory,
						size_t nSize);  // 1172
	}
} /* size: 163, variables: 1 */

// <00146AD2> filesystem/filesystem_stdio.cpp:1185
// variable: 1
// function calls: 10
void CFileSystem_Stdio::AddProjectPath(const char* modName, const char* pPath)
{
	CUtlString modPath; // 1193
	CUtlStringToken::CUtlStringToken(); // 1189
	CUtlStringToken::CUtlStringToken(); // 1190
	CUtlStringToken::CUtlStringToken(); // 1191
	CUtlString::CUtlString(
			const char* pString);  // 1193
	CUtlStringToken::CUtlStringToken(); // 1196
	CUtlString::Get(); // 99
	CUtlString::String(); // 1196
	CUtlString::Get(); // 99
	CUtlString::String(); // 1197
	CUtlString::~CUtlString(); // 1198
} /* size: 277, variables: 1, inline expansions: 10 (98 bytes) */

// <0014694C> filesystem/filesystem_stdio.cpp:1200
// function calls: 3
void CFileSystem_Stdio::AddCloudPath(const char* modName, const char* pPath)
{
	CUtlStringToken::CUtlStringToken(); // 1202
	CUtlStringToken::CUtlStringToken(); // 1203
	CUtlStringToken::CUtlStringToken(); // 1204
} /* size: 149, inline expansions: 3 (0 bytes) */

// <00144922> filesystem/filesystem_stdio.cpp:1208
// variables: 10
// function calls: 131
void CFileSystem_Stdio::ResetProjectPaths(bool isEditor)
{
	{
		CBufferString addonpath; // 1221
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 1221
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1224
		CUtlStringToken::CUtlStringToken(); // 1224
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1225
		CUtlStringToken::CUtlStringToken(); // 1225
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1226
		CUtlStringToken::CUtlStringToken(); // 1226
		CBufferString::~CBufferString(); // 1228
	}
	{
		CBufferString addonpath; // 1231
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 1231
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1234
		CUtlStringToken::CUtlStringToken(); // 1234
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1235
		CUtlStringToken::CUtlStringToken(); // 1235
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1236
		CUtlStringToken::CUtlStringToken(); // 1236
		CBufferString::~CBufferString(); // 1238
	}
	{
		CBufferString addonpath; // 1241
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 1241
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1244
		CUtlStringToken::CUtlStringToken(); // 1244
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1245
		CUtlStringToken::CUtlStringToken(); // 1245
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1246
		CUtlStringToken::CUtlStringToken(); // 1246
		CBufferString::~CBufferString(); // 1248
	}
	{
		CBufferString addonpath; // 1255
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 1255
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1258
		CUtlStringToken::CUtlStringToken(); // 1258
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1259
		CUtlStringToken::CUtlStringToken(); // 1259
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1260
		CUtlStringToken::CUtlStringToken(); // 1260
		CBufferString::~CBufferString(); // 1262
	}
	{
		CBufferString tempPath; // 1271
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 1271
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 1275
		CUtlStringToken::CUtlStringToken(); // 1275
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 1276
		CUtlStringToken::CUtlStringToken(); // 1276
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 1277
		CUtlStringToken::CUtlStringToken(); // 1277
		CBufferString::~CBufferString(); // 1278
	}
	{
		CBufferString addonpath; // 1287
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 1287
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1290
		CUtlStringToken::CUtlStringToken(); // 1290
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1291
		CUtlStringToken::CUtlStringToken(); // 1291
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1292
		CUtlStringToken::CUtlStringToken(); // 1292
		CBufferString::~CBufferString(); // 1294
	}
	{
		const char* searchPaths; // 1299
		CSplitString searchPathList; // 1301
		{
			int i; // 1302
			{
				CSplitString split; // 1304
				CUtlVectorBase<char::RemoveAll(); // 1798
				CUtlMemory<char::IsExternallyAllocated(); // 905
				CUtlMemory<char::Purge(); // 903
				CUtlMemory<char::Purge(); // 1799
				CUtlVectorBase<char::Purge(); // 560
				ValidateAlignment<char*>(void); // 508
				CUtlMemory<char::Purge(); // 510
				CUtlMemory<char::~CUtlMemory(); // 562
				CUtlVectorBase<char::~CUtlVectorBase(); // 410
				CUtlVector<char::~CUtlVector(); // 40
				CSplitString::~CSplitString(); // 1308
				CUtlMemory<char::operator[](
						int i);  // 588
				CUtlVectorBase<char::operator[](
						int i);  // 1304
				CUtlMemory<char::ValidateGrowSize(); // 475
				CUtlMemory<char::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<char::ResetDbgInfo(); // 530
				CUtlVectorBase<char::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<char::CUtlVector(); // 30
				CSplitString::CSplitString(
						const char* pString,
						const char* pSeparator);  // 1304
				CUtlVectorBase<char::Count(); // 1305
				CUtlMemory<char::operator[](
						int i);  // 588
				CUtlVectorBase<char::operator[](
						int i);  // 1307
				CSplitString::~CSplitString(); // 1308
			}
			CUtlVectorBase<char::Count(); // 1302
		}
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 30
		CSplitString::CSplitString(
				const char* pString,
				const char* pSeparator);  // 1301
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 1309
	}
} /* size: 2234 */

