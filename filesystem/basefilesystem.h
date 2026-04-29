
//
// filesystem/basefilesystem.h
//
//	referenced by: libfilesystem_stdio.so
//
//	functions: 54
//	classes: 2
//

// <0003D066> filesystem/basefilesystem.h:56
CUtlSymbol ConvertPathIDToSymbol(const char *)
{
} /* size: 0 */

// <0003D04A> filesystem/basefilesystem.h:57
const char* ConvertSymbolToPathID(const CUtlSymbol &)
{
} /* size: 0 */

// <00092911> filesystem/basefilesystem.h:95
// member functions: 38
// member variables: 8
// class size: 120
class CFileHandle {
	/* filesystem/basefilesystem.h:143 */
	enum {
		MAGIC = 1128679521,
		FREE_MAGIC = 1181902157,
	};
	void CFileHandle(CFileHandle* , const CFileHandle& );
	int ()(void) * * _vptr.CFileHandle; /* 0 8 */
	/* filesystem/basefilesystem.cpp:5083 */
	void CFileHandle(CFileHandle* , CBaseFileSystem* );
	/* filesystem/basefilesystem.cpp:5088 */
	virtual void ~CFileHandle(CFileHandle* );
	/* filesystem/basefilesystem.cpp:5102 */
	void Init(CFileHandle* , CBaseFileSystem* );
	/* filesystem/basefilesystem.cpp:5117 */
	int GetSectorSize(CFileHandle* );
	/* filesystem/basefilesystem.cpp:5131 */
	bool IsOK(CFileHandle* );
	/* filesystem/basefilesystem.cpp:5145 */
	void Flush(CFileHandle* );
	/* filesystem/basefilesystem.cpp:5155 */
	void SetBufferSize(CFileHandle* , int);
	/* filesystem/basefilesystem.cpp:5165 */
	int Read(CFileHandle* , void* , int);
	/* filesystem/basefilesystem.cpp:5171 */
	int Read(CFileHandle* , void* , int, int);
	/* filesystem/basefilesystem.cpp:5196 */
	int Write(CFileHandle* , const void* , int);
	/* filesystem/basefilesystem.cpp:5213 */
	void Seek(CFileHandle* , int64, int);
	/* filesystem/basefilesystem.cpp:5231 */
	int64 Tell(CFileHandle* );
	/* filesystem/basefilesystem.cpp:5248 */
	int64 Size(CFileHandle* );
	/* filesystem/basefilesystem.cpp:5267 */
	int64 AbsoluteBaseOffset(CFileHandle* );
	/* filesystem/basefilesystem.cpp:5273 */
	bool EndOfFile(CFileHandle* );
	char * m_pszTrueFileName; /* 8 8 */
	/* filesystem/basefilesystem.h:120 */
	const char* Name(const CFileHandle* );
	/* filesystem/basefilesystem.h:122 */
	void SetName(CFileHandle* , const char* );
	CPackedStoreFileHandle m_VPKHandle; /* 16 64 */
	int64 m_nLength; /* 80 8 */
	FileType_t m_type; /* 88 4 */
	VirtualFileHandle_t m_VirtualFileHandle; /* 96 8 */
protected:
	CBaseFileSystem * m_fs; /* 104 8 */
	unsigned int m_nMagic; /* 112 4 */
	/* filesystem/basefilesystem.cpp:5112 */
	bool IsValid(CFileHandle* );
	void CFileHandle(class CFileHandle *, const class CFileHandle  &); /* linkage=_ZN11CFileHandleC4ERKS_ */
	void CFileHandle(class CFileHandle *, class CBaseFileSystem *); /* linkage=_ZN11CFileHandleC4EP15CBaseFileSystem */
	virtual void ~CFileHandle(class CFileHandle *); /* linkage=_ZN11CFileHandleD4Ev */
	/* <10ccec> filesystem/basefilesystem.cpp:5102 */
	void Init(class CFileHandle *, class CBaseFileSystem *); /* linkage=_ZN11CFileHandle4InitEP15CBaseFileSystem */
	int GetSectorSize(class CFileHandle *); /* linkage=_ZN11CFileHandle13GetSectorSizeEv */
	/* <10cd48> filesystem/basefilesystem.cpp:5131 */
	bool IsOK(class CFileHandle *); /* linkage=_ZN11CFileHandle4IsOKEv */
	/* <10ce04> filesystem/basefilesystem.cpp:5145 */
	void Flush(class CFileHandle *); /* linkage=_ZN11CFileHandle5FlushEv */
	/* <10ce73> filesystem/basefilesystem.cpp:5155 */
	void SetBufferSize(class CFileHandle *, int); /* linkage=_ZN11CFileHandle13SetBufferSizeEi */
	/* <10ceef> filesystem/basefilesystem.cpp:5165 */
	int Read(class CFileHandle *, void *, int); /* linkage=_ZN11CFileHandle4ReadEPvi */
	int Read(class CFileHandle *, void *, int, int); /* linkage=_ZN11CFileHandle4ReadEPvii */
	int Write(class CFileHandle *, const void  *, int); /* linkage=_ZN11CFileHandle5WriteEPKvi */
	/* <10d2de> filesystem/basefilesystem.cpp:5213 */
	void Seek(class CFileHandle *, int64, int); /* linkage=_ZN11CFileHandle4SeekExi */
	/* <10d529> filesystem/basefilesystem.cpp:5231 */
	int64 Tell(class CFileHandle *); /* linkage=_ZN11CFileHandle4TellEv */
	/* <10d831> filesystem/basefilesystem.cpp:5248 */
	int64 Size(class CFileHandle *); /* linkage=_ZN11CFileHandle4SizeEv */
	int64 AbsoluteBaseOffset(class CFileHandle *); /* linkage=_ZN11CFileHandle18AbsoluteBaseOffsetEv */
	/* <10d901> filesystem/basefilesystem.cpp:5273 */
	bool EndOfFile(class CFileHandle *); /* linkage=_ZN11CFileHandle9EndOfFileEv */
	const char  * Name(const class CFileHandle  *); /* linkage=_ZNK11CFileHandle4NameEv */
	void SetName(class CFileHandle *, const char  *); /* linkage=_ZN11CFileHandle7SetNameEPKc */
	/* <10cd1e> filesystem/basefilesystem.cpp:5112 */
	bool IsValid(class CFileHandle *); /* linkage=_ZN11CFileHandle7IsValidEv */
};

// <00092C6F> filesystem/basefilesystem.h:154
// member functions: 379
// member variables: 31
// static member variables: 2
// vtable entries: 121
// class size: 1,168
class CBaseFileSystem : public CTier2AppSystem<IFileSystem, 0> {
	/* filesystem/basefilesystem.h:358 */
	class CPathIDInfo {
		/* filesystem/basefilesystem.h:361 */
		const CUtlSymbol& GetPathID(const CPathIDInfo* );
		/* filesystem/basefilesystem.h:362 */
		const char* GetPathIDString(const CPathIDInfo* );
		/* filesystem/basefilesystem.h:363 */
		void SetPathID(CPathIDInfo* , CUtlSymbol);
		bool m_bByRequestOnly; /* 0 1 */
	private:
		CUtlSymbol m_PathID; /* 2 2 */
		const char * m_pDebugPathID; /* 8 8 */
		void CPathIDInfo(CPathIDInfo* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* filesystem/basefilesystem.h:377 */
	class CSearchPath {
		/* filesystem/basefilesystem.h:380 */
		void CSearchPath(CSearchPath* );
		/* filesystem/basefilesystem.h:381 */
		void ~CSearchPath(CSearchPath* );
		/* filesystem/basefilesystem.h:383 */
		const char* GetPathString(const CSearchPath* );
		/* filesystem/basefilesystem.h:386 */
		const CUtlSymbol& GetPathID(const CSearchPath* );
		/* filesystem/basefilesystem.h:387 */
		const char* GetPathIDString(const CSearchPath* );
		/* filesystem/basefilesystem.h:390 */
		void SetPath(CSearchPath* , const char* );
		/* filesystem/basefilesystem.h:391 */
		void SetPath(CSearchPath* , CUtlSymbol);
		/* filesystem/basefilesystem.h:392 */
		const CUtlSymbol& GetPath(const CSearchPath* );
		/* filesystem/basefilesystem.h:394 */
		void ConstructFullPath(const CSearchPath* , const char* , CBufferString* );
		/* filesystem/basefilesystem.h:396 */
		void SetPackFile(CSearchPath* , CPackedStore* );
		/* filesystem/basefilesystem.h:397 */
		CPackedStore* GetPackFile(const CSearchPath* );
		int m_storeId; /* 0 4 */
		CPathIDInfo * m_pPathIDInfo; /* 8 8 */
		CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_autoLoadedVPKs; /* 16 32 */
		CUtlVector<CUtlSymbol, CUtlMemory<CUtlSymbol, int> > m_LongerSearchPaths; /* 48 32 */
	private:
		CUtlSymbol m_Path; /* 80 2 */
		const char * m_pDebugPath; /* 88 8 */
		CPackedStore * m_pPackFile; /* 96 8 */
		CUtlStringToken m_PathMergeToken; /* 104 4 */
		int8 m_nPriority; /* 108 1 */
		bool m_bIsLocalizedPath; /* 109 1 */
		bool m_bIsReadOnly; /* 110 1 */
		bool m_bIsAutoMountedVPK; /* 111 1 */
		CSearchPath& operator=(CSearchPath* , const CSearchPath& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* filesystem/basefilesystem.h:428 */
	struct SearchPathStateEntry_t {
		CUtlString m_Path; /* 0 8 */
		int8 m_nPriority; /* 8 1 */
		void ~SearchPathStateEntry_t(SearchPathStateEntry_t* );
		void SearchPathStateEntry_t(SearchPathStateEntry_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* filesystem/basefilesystem.h:434 */
	class CSearchPathState {
		/* filesystem/basefilesystem.h:437 */
		void CSearchPathState(CSearchPathState* , const char* );
		CUtlString m_PathID; /* 0 8 */
		CUtlVector<CBaseFileSystem::SearchPathStateEntry_t, CUtlMemory<CBaseFileSystem::SearchPathStateEntry_t, int> > m_SearchPaths; /* 8 32 */
		void ~CSearchPathState(CSearchPathState* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* filesystem/basefilesystem.h:442 */
	class CSearchPathsVisits {
		/* filesystem/basefilesystem.h:445 */
		void Reset(CSearchPathsVisits* );
		/* filesystem/basefilesystem.h:450 */
		bool MarkVisit(CSearchPathsVisits* , const CSearchPath& );
	private:
		CUtlVector<int, CUtlMemory<int, int> > m_Visits; /* 0 32 */
		void ~CSearchPathsVisits(CSearchPathsVisits* );
		void CSearchPathsVisits(CSearchPathsVisits* );
	};
	/* filesystem/basefilesystem.h:464 */
	class CSearchPathsIterator {
		/* filesystem/basefilesystem.h:467 */
		void CSearchPathsIterator(CSearchPathsIterator* , CBaseFileSystem* , const char** , const char* , PathTypeFilter_t, bool);
		/* filesystem/basefilesystem.h:468 */
		void CSearchPathsIterator(CSearchPathsIterator* , CBaseFileSystem* , const char* , PathTypeFilter_t, bool);
		/* filesystem/basefilesystem.h:469 */
		void ~CSearchPathsIterator(CSearchPathsIterator* );
		/* filesystem/basefilesystem.h:470 */
		const CSearchPath* GetFirst(CSearchPathsIterator* );
		/* filesystem/basefilesystem.h:471 */
		const CSearchPath* GetNext(CSearchPathsIterator* );
		/* filesystem/basefilesystem.h:472 */
		const CSearchPath* GetCurrent(CSearchPathsIterator* );
		/* filesystem/basefilesystem.h:473 */
		int GetCurrentIndex(CSearchPathsIterator* );
	private:
		/* filesystem/basefilesystem.h:477 */
		void CSearchPathsIterator(CSearchPathsIterator* , const CSearchPathsIterator& );
		/* filesystem/basefilesystem.h:478 */
		void operator=(CSearchPathsIterator* , const CSearchPathsIterator& );
		int m_iCurrent; /* 0 4 */
		CUtlSymbol m_pathID; /* 4 2 */
		const class CUtlVector<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> > * m_pBaseFileSystemSearchPaths; /* 8 8 */
		CThreadRWLock_FastRead * m_pBaseFileSystemSearchPathsRWLock; /* 16 8 */
		CSearchPathsVisits m_visits; /* 24 32 */
		CSearchPath m_SingleSearchPath; /* 56 112 */
		CPathIDInfo m_SinglePathIDInfo; /* 168 16 */
		PathTypeFilter_t m_PathTypeFilter; /* 184 4 */
		CPathBufferString m_Filename; /* 192 208 */
		bool m_bExcluded; /* 400 1 */
		bool m_bSkipSearch; /* 401 1 */
		bool m_bForceRequested; /* 402 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* filesystem/basefilesystem.h:496 */
	struct FindData_t {
		/* filesystem/basefilesystem.h:498 */
		void ~FindData_t(FindData_t* );
		CSearchPathsIterator * m_pIterator; /* 0 8 */
		CDirIterator * m_pFindHandle; /* 8 8 */
		int m_CurrentStoreID; /* 16 4 */
		CBufferStringN<100> m_wildCardString; /* 24 112 */
		CPathBufferString m_foundPath; /* 136 208 */
		bool m_bFoundIsDirectory; /* 344 1 */
		CUtlSymbolTableLarge m_visitedFiles; /* 352 144 */
		CUtlStringList m_fileMatchesFromVPK; /* 496 32 */
		CUtlStringList m_dirMatchesFromVPK; /* 528 32 */
		void FindData_t(FindData_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* filesystem/basefilesystem.h:612 */
	class COpenedFile {
		/* filesystem/basefilesystem.h:615 */
		void COpenedFile(COpenedFile* );
		/* filesystem/basefilesystem.h:616 */
		void ~COpenedFile(COpenedFile* );
		/* filesystem/basefilesystem.h:618 */
		void COpenedFile(COpenedFile* , const COpenedFile& );
		/* filesystem/basefilesystem.h:620 */
		bool operator==(const COpenedFile* , const COpenedFile& );
		/* filesystem/basefilesystem.h:622 */
		void SetName(COpenedFile* , const char* );
		/* filesystem/basefilesystem.h:623 */
		const char* GetName(COpenedFile* );
		VirtualFileHandle_t m_VirtualFileHandle; /* 0 8 */
		char * m_pName; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* filesystem/basefilesystem.h:737 */
	struct SymLink_t {
		CUtlString SourcePath; /* 0 8 */
		CUtlString TargetPath; /* 8 8 */
		int References; /* 16 4 */
		void SymLink_t(SymLink_t* );
		void SymLink_t(SymLink_t* , const SymLink_t& );
		void ~SymLink_t(SymLink_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CTier2AppSystem<IFileSystem, 0> <ancestor>; */ /* 0 56 */
	void CBaseFileSystem(CBaseFileSystem* , const CBaseFileSystem& );
	/* filesystem/basefilesystem.cpp:336 */
	void CBaseFileSystem(CBaseFileSystem* );
	/* filesystem/basefilesystem.cpp:380 */
	void ~CBaseFileSystem(CBaseFileSystem* );
	/* filesystem/basefilesystem.cpp:387 */
	virtual void* QueryInterface(CBaseFileSystem* , const char* );
	/* filesystem/basefilesystem.cpp:396 */
	virtual InitReturnVal_t Init(CBaseFileSystem* );
	/* filesystem/basefilesystem.cpp:412 */
	virtual void PreShutdown(CBaseFileSystem* );
	/* filesystem/basefilesystem.cpp:417 */
	virtual void Shutdown(CBaseFileSystem* );
	/* filesystem/basefilesystem.cpp:2466 */
	void ParsePathID(CBaseFileSystem* , const char* & , const char* & , CBufferString* );
	/* filesystem/basefilesystem.cpp:2516 */
	virtual FileHandle_t Open(CBaseFileSystem* , const char* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:2524 */
	virtual FileHandle_t OpenEx(CBaseFileSystem* , const char* , const char* , unsigned int, const char* );
	/* filesystem/basefilesystem.cpp:2633 */
	virtual void Close(CBaseFileSystem* , FileHandle_t);
	/* filesystem/basefilesystem.cpp:2686 */
	virtual void Seek(CBaseFileSystem* , FileHandle_t, int64, FileSystemSeek_t);
	/* filesystem/basefilesystem.cpp:2703 */
	virtual int64 Tell(CBaseFileSystem* , FileHandle_t);
	/* filesystem/basefilesystem.cpp:2720 */
	virtual int64 Size(CBaseFileSystem* , FileHandle_t);
	/* filesystem/basefilesystem.cpp:2736 */
	virtual int64 Size(CBaseFileSystem* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:2976 */
	virtual void SetBufferSize(CBaseFileSystem* , FileHandle_t, unsigned int);
	/* filesystem/basefilesystem.cpp:2990 */
	virtual bool IsOk(CBaseFileSystem* , FileHandle_t);
	/* filesystem/basefilesystem.cpp:3005 */
	virtual void Flush(CBaseFileSystem* , FileHandle_t);
	/* filesystem/basefilesystem.cpp:3018 */
	virtual bool Precache(CBaseFileSystem* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:2847 */
	virtual bool EndOfFile(CBaseFileSystem* , FileHandle_t);
	/* filesystem/basefilesystem.cpp:2861 */
	virtual int Read(CBaseFileSystem* , void* , int, FileHandle_t);
	/* filesystem/basefilesystem.cpp:2869 */
	virtual int ReadEx(CBaseFileSystem* , void* , int, int, FileHandle_t);
	/* filesystem/basefilesystem.cpp:2928 */
	virtual int Write(CBaseFileSystem* , const void* , int, FileHandle_t);
	/* filesystem/basefilesystem.cpp:3087 */
	virtual char* ReadLine(CBaseFileSystem* , char* , int, FileHandle_t);
	/* filesystem/basefilesystem.cpp:3037 */
	virtual CUtlString ReadLine(CBaseFileSystem* , FileHandle_t, bool);
	/* filesystem/basefilesystem.cpp:2945 */
	virtual int FPrintf(CBaseFileSystem* , FileHandle_t, const char* , ...);
	/* filesystem/basefilesystem.cpp:1900 */
	virtual bool ReadFile(CBaseFileSystem* , const char* , const char* , CUtlBuffer& , int, int, FSAllocFunc_t);
	/* filesystem/basefilesystem.cpp:2008 */
	virtual bool WriteFile(CBaseFileSystem* , const char* , const char* , const CUtlBuffer& );
	/* filesystem/basefilesystem.cpp:2029 */
	virtual bool UnzipFile(CBaseFileSystem* , const char* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:2120 */
	virtual bool CopyAFile(CBaseFileSystem* , const char* , const char* , const char* , bool);
	/* filesystem/basefilesystem.cpp:1930 */
	virtual int ReadFileEx(CBaseFileSystem* , const char* , const char* , void** , bool, bool, int, int, FSAllocFunc_t);
	/* filesystem/basefilesystem.cpp:1739 */
	virtual bool ReadToBuffer(CBaseFileSystem* , FileHandle_t, CUtlBuffer& , int, FSAllocFunc_t);
	/* filesystem/basefilesystem.cpp:1863 */
	virtual IMemoryMappedFile* CreateMemoryMap(CBaseFileSystem* , FileHandle_t, MemoryMappedFileFlags_t);
	/* filesystem/basefilesystem.cpp:1883 */
	virtual IMemoryMappedFile* CreateMemoryMap(CBaseFileSystem* , const char* , const char* , MemoryMappedFileFlags_t);
	/* filesystem/basefilesystem.cpp:5067 */
	virtual bool GetOptimalIOConstraints(CBaseFileSystem* , FileHandle_t, unsigned int* , unsigned int* , unsigned int* );
	/* filesystem/basefilesystem.h:210 */
	virtual void* AllocOptimalReadBuffer(CBaseFileSystem* , FileHandle_t, unsigned int, unsigned int);
	/* filesystem/basefilesystem.h:211 */
	virtual void FreeOptimalReadBuffer(CBaseFileSystem* , void* );
	/* filesystem/basefilesystem.cpp:4130 */
	virtual bool GetCurrentDirectory(CBaseFileSystem* , CBufferString* );
	/* filesystem/basefilesystem.cpp:3468 */
	virtual bool CreateDirHierarchy(CBaseFileSystem* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:3503 */
	virtual bool CreateDirHierarchyForFile(CBaseFileSystem* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:3418 */
	virtual bool IsDirectory(CBaseFileSystem* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:3884 */
	virtual bool FullPathToRelativePath(CBaseFileSystem* , const char* , const char* , CBufferString* );
	/* filesystem/basefilesystem.cpp:3993 */
	virtual bool RemoveFile(CBaseFileSystem* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:4015 */
	virtual bool DeleteDirectory(CBaseFileSystem* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:4040 */
	virtual bool DeleteDirectoryAndContents_R(CBaseFileSystem* , const char* , const char* , bool);
	/* filesystem/basefilesystem.cpp:2196 */
	virtual void RemoveAllSearchPaths(CBaseFileSystem* );
	/* filesystem/basefilesystem.cpp:1492 */
	virtual void RemoveSearchPaths(CBaseFileSystem* , const char* );
	/* filesystem/basefilesystem.cpp:1157 */
	virtual void AddSearchPath(CBaseFileSystem* , const char* , const char* , SearchPathAdd_t, SearchPathPriority_t, CUtlStringToken);
	/* filesystem/basefilesystem.cpp:1360 */
	virtual bool RemoveSearchPath(CBaseFileSystem* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:1552 */
	virtual SearchPathStateHandle_t SaveSearchPathState(const CBaseFileSystem* , const char* );
	/* filesystem/basefilesystem.cpp:1590 */
	virtual void RestoreSearchPathState(CBaseFileSystem* , SearchPathStateHandle_t);
	/* filesystem/basefilesystem.cpp:1625 */
	virtual void DestroySearchPathState(CBaseFileSystem* , SearchPathStateHandle_t);
	/* filesystem/basefilesystem.cpp:763 */
	virtual void PrintSearchPaths(CBaseFileSystem* );
	/* filesystem/basefilesystem.cpp:4750 */
	virtual void MarkPathIDByRequestOnly(CBaseFileSystem* , const char* , bool);
	/* filesystem/basefilesystem.cpp:4854 */
	virtual bool IsFileInReadOnlySearchPath(CBaseFileSystem* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:4916 */
	virtual void SetSearchPathReadOnly(CBaseFileSystem* , const char* , const char* , bool);
	/* filesystem/basefilesystem.cpp:3281 */
	virtual bool FileExists(CBaseFileSystem* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:3144 */
	virtual int64 GetFileTime(CBaseFileSystem* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:3314 */
	virtual bool IsFileWritable(CBaseFileSystem* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:3365 */
	virtual bool SetFileWritable(CBaseFileSystem* , const char* , bool, const char* );
	/* filesystem/basefilesystem.cpp:3200 */
	virtual void FileTimeToString(CBaseFileSystem* , int64, CBufferString* );
	/* filesystem/basefilesystem.cpp:3706 */
	virtual const char* FindFirst(CBaseFileSystem* , const char* , FileFindHandle_t* );
	/* filesystem/basefilesystem.cpp:3541 */
	virtual const char* FindFirstEx(CBaseFileSystem* , const char* , const char* , FileFindHandle_t* );
	/* filesystem/basefilesystem.cpp:3749 */
	virtual const char* FindNext(CBaseFileSystem* , FileFindHandle_t& );
	/* filesystem/basefilesystem.cpp:3774 */
	virtual bool FindIsDirectory(CBaseFileSystem* , const FileFindHandle_t& );
	/* filesystem/basefilesystem.cpp:3788 */
	virtual void FindClose(CBaseFileSystem* , FileFindHandle_t& );
	/* filesystem/basefilesystem.cpp:3522 */
	virtual void FindFileAbsoluteList(CBaseFileSystem* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , const char* , const char* );
	/* filesystem/basefilesystem.cpp:671 */
	virtual void PrintOpenedFiles(CBaseFileSystem* );
	/* filesystem/basefilesystem.cpp:4145 */
	virtual void SetWarningFunc(CBaseFileSystem* , void (*)(const char* , ...));
	/* filesystem/basefilesystem.cpp:4154 */
	virtual void SetWarningLevel(CBaseFileSystem* , FileWarningLevel_t);
	/* filesystem/basefilesystem.cpp:4600 */
	virtual void AddLoggingFunc(CBaseFileSystem* , FileSystemLoggingFunc_t);
	/* filesystem/basefilesystem.cpp:4609 */
	virtual void RemoveLoggingFunc(CBaseFileSystem* , FileSystemLoggingFunc_t);
	/* filesystem/basefilesystem.cpp:4072 */
	virtual bool RenameFile(CBaseFileSystem* , const char* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:3816 */
	virtual void GetLocalCopy(CBaseFileSystem* , const char* );
	/* filesystem/basefilesystem.cpp:4701 */
	virtual FileNameHandle_t FindOrAddFileName(CBaseFileSystem* , const char* );
	/* filesystem/basefilesystem.cpp:4706 */
	virtual FileNameHandle_t FindFileName(CBaseFileSystem* , const char* );
	/* filesystem/basefilesystem.cpp:4716 */
	virtual bool String(CBaseFileSystem* , const FileNameHandle_t& , CBufferString* );
	/* filesystem/basefilesystem.cpp:4721 */
	virtual int GetPathIndex(CBaseFileSystem* , const FileNameHandle_t& );
	/* filesystem/basefilesystem.cpp:3169 */
	virtual int64 GetPathTime(CBaseFileSystem* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:4159 */
	virtual const FileSystemStatistics* GetFilesystemStatistics(CBaseFileSystem* );
	/* filesystem/basefilesystem.cpp:4551 */
	virtual PlatModule_t LoadModule(CBaseFileSystem* , const char* , const char* , bool);
	/* filesystem/basefilesystem.cpp:4592 */
	virtual void UnloadModule(CBaseFileSystem* , PlatModule_t);
	/* filesystem/basefilesystem.cpp:3828 */
	virtual const char* RelativePathToFullPath(CBaseFileSystem* , const char* , const char* , CBufferString* , PathTypeFilter_t);
	/* filesystem/basefilesystem.cpp:463 */
	virtual bool RelativePathToFullWritePath(CBaseFileSystem* , const char* , const char* , CBufferString* );
	/* filesystem/basefilesystem.cpp:1166 */
	int GetSearchPathImpl(CBaseFileSystem* , const char* , GetSearchPathTypes_t, CBufferString* , int);
	/* filesystem/basefilesystem.cpp:1234 */
	virtual bool GetSearchPath(CBaseFileSystem* , const char* , GetSearchPathTypes_t, CBufferString* , int);
	/* filesystem/basefilesystem.cpp:1333 */
	virtual int GetSearchPathID(CBaseFileSystem* , CBufferString* );
	/* filesystem/basefilesystem.cpp:1240 */
	virtual CUtlStringToken GetMergeTokenForPath(CBaseFileSystem* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:1252 */
	virtual int GetMergedPaths(CBaseFileSystem* , CUtlStringToken, CBufferString* );
	/* filesystem/basefilesystem.cpp:5061 */
	virtual bool GetFileTypeForFullPath(CBaseFileSystem* , const char* , CBufferString* );
	/* filesystem/basefilesystem.cpp:2914 */
	virtual KeyValues* LoadKeyValues(CBaseFileSystem* , KeyValuesPreloadType_t, const char* , const char* );
	/* filesystem/basefilesystem.cpp:2894 */
	virtual bool LoadKeyValues(CBaseFileSystem* , KeyValues& , KeyValuesPreloadType_t, const char* , const char* );
	/* filesystem/basefilesystem.cpp:679 */
	virtual bool AddVPKFile(CBaseFileSystem* , const char* , const char* , SearchPathAdd_t);
	/* filesystem/basefilesystem.cpp:691 */
	virtual void RemoveVPKFile(CBaseFileSystem* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:703 */
	virtual bool IsVPKFileLoaded(CBaseFileSystem* , const char* );
	/* filesystem/basefilesystem.cpp:5336 */
	virtual void SetIODelayAlarm(CBaseFileSystem* , float);
	/* filesystem/basefilesystem.cpp:5390 */
	virtual bool IsPathInvalidForFilesystem(CBaseFileSystem* , const char* );
	/* filesystem/basefilesystem.cpp:5411 */
	virtual void GetAvailableDrives(CBaseFileSystem* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* filesystem/basefilesystem.cpp:126 */
	virtual AccesLogWriteResult_t WriteFileAccessLog(CBaseFileSystem* , const char* , const char* , const char* , bool);
	/* filesystem/basefilesystem.cpp:1306 */
	virtual void GetSearchPathsForPathID(const CBaseFileSystem* , const char* , GetSearchPathTypes_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* filesystem/basefilesystem.cpp:5438 */
	virtual bool MarkContentCorrupt(CBaseFileSystem* , bool, const char* , const char* );
	/* filesystem/basefilesystem.cpp:5479 */
	virtual void SetContentCorruptionReportingEnabled(CBaseFileSystem* , bool);
	/* filesystem/basefilesystem.cpp:486 */
	virtual void SuppressAsyncFileRequestFlushOnPathChange(CBaseFileSystem* , bool);
	/* filesystem/basefilesystem.cpp:4755 */
	const CSearchPath* FindBestPathMatch(CBaseFileSystem* , const char* , const char* , PathTypeFilter_t, bool);
	bool m_bContentCorruptionReportingEnabled; /* 52 1 */
	CUtlVector<void (*)(char const*, char const*), CUtlMemory<void (*)(char const*, char const*), int> > m_LogFuncs; /* 56 32* /
	CThreadRWLock_FastRead m_SearchPathsRWLock __attribute__((__aligned__(8))); /* 88 408 */
	CUtlVector<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> > m_SearchPaths; /* 496 32 */
	CUtlVector<CBaseFileSystem::CPathIDInfo*, CUtlMemory<CBaseFileSystem::CPathIDInfo*, int> > m_PathIDInfos; /* 528 32 */
	CUtlFixedLinkedList<CBaseFileSystem::FindData_t> m_FindData; /* 560 80 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_ReadOnlyPaths; /* 640 32 */
	CUtlVector<CFileHandleTimer*, CUtlMemory<CFileHandleTimer*, int> > m_FileHandleTimers; /* 672 32 */
	int m_iMapLoad; /* 704 4 */
	bool m_bOutputDebugString; /* 708 1 */
	IThreadPool * m_pThreadPool; /* 712 8 */
	FileSystemStatistics m_Stats __attribute__((__aligned__(4))); /* 720 20 */
	float m_flDelayLimit; /* 740 4 */
	float64 m_flLastIOTime; /* 744 8 */
	/* filesystem/basefilesystem.h:551 */
	void NoteIO(CBaseFileSystem* );
	CIODelayAlarmThread * m_pDelayThread; /* 752 8 */
protected:
	/* filesystem/basefilesystem.h:581 */
	virtual VirtualFileHandle_t FS_fopen(CBaseFileSystem* , const char* , const char* , unsigned int, int64* );
	/* filesystem/basefilesystem.h:582 */
	virtual void FS_setbufsize(CBaseFileSystem* , VirtualFileHandle_t, unsigned int);
	/* filesystem/basefilesystem.h:583 */
	virtual void FS_fclose(CBaseFileSystem* , VirtualFileHandle_t);
	/* filesystem/basefilesystem.h:584 */
	virtual void FS_fseek(CBaseFileSystem* , VirtualFileHandle_t, int64, int);
	/* filesystem/basefilesystem.h:585 */
	virtual int64 FS_ftell(CBaseFileSystem* , VirtualFileHandle_t);
	/* filesystem/basefilesystem.h:586 */
	size_t FS_fread(CBaseFileSystem* , void* , size_t, VirtualFileHandle_t);
	/* filesystem/basefilesystem.h:587 */
	virtual size_t FS_fread(CBaseFileSystem* , void* , size_t, size_t, VirtualFileHandle_t);
	/* filesystem/basefilesystem.h:588 */
	virtual size_t FS_fwrite(CBaseFileSystem* , const void* , size_t, VirtualFileHandle_t);
	/* filesystem/basefilesystem.h:589 */
	virtual int FS_ferror(CBaseFileSystem* , VirtualFileHandle_t);
	/* filesystem/basefilesystem.h:590 */
	virtual int FS_fflush(CBaseFileSystem* , VirtualFileHandle_t);
	/* filesystem/basefilesystem.h:592 */
	virtual int FS_GetBaseFileInfo(CBaseFileSystem* , const char* , FioBaseFileInfo_t* );
	/* filesystem/basefilesystem.h:593 */
	virtual int FS_SetFileReadOnly(CBaseFileSystem* , const char* , bool);
	/* filesystem/basefilesystem.h:594 */
	virtual CDirIterator* FS_FindFiles(CBaseFileSystem* , const char* );
	/* filesystem/basefilesystem.h:595 */
	virtual int FS_GetSectorSize(CBaseFileSystem* , VirtualFileHandle_t);
	/* filesystem/basefilesystem.h:596 */
	virtual IMemoryMappedFile* FS_CreateMemoryMap(CBaseFileSystem* , VirtualFileHandle_t, MemoryMappedFileFlags_t);
	CThreadMutex m_OpenedFilesMutex; /* 760 72 */
	CUtlVector<CBaseFileSystem::COpenedFile, CUtlMemory<CBaseFileSystem::COpenedFile, int> > m_OpenedFiles; /* 832 32 */
	/* filesystem/basefilesystem.cpp:481 */
	bool OpenedFileLessFunc(const COpenedFile& , const COpenedFile& );
	FileWarningLevel_t m_fwLevel; /* 864 4 */
	void (*m_pfnWarning)(const char* , ...); /* 872 8* /
	/* filesystem/basefilesystem.cpp:530 */
	VirtualFileHandle_t Trace_FOpen(CBaseFileSystem* , const char* , const char* , unsigned int, int64* );
	/* filesystem/basefilesystem.cpp:566 */
	void Trace_FClose(CBaseFileSystem* , VirtualFileHandle_t);
	/* filesystem/basefilesystem.cpp:602 */
	void Trace_FRead(CBaseFileSystem* , int, VirtualFileHandle_t);
	/* filesystem/basefilesystem.cpp:627 */
	void Trace_FWrite(CBaseFileSystem* , int, VirtualFileHandle_t);
	/* filesystem/basefilesystem.cpp:654 */
	void Trace_DumpUnclosedFiles(CBaseFileSystem* );
	/* filesystem/basefilesystem.cpp:504 */
	void LogAccessToFile(CBaseFileSystem* , const char* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:4191 */
	void Warning(CBaseFileSystem* , FileWarningLevel_t, const char* , ...);
	/* filesystem/basefilesystem.cpp:3653 */
	const char* FindFirstHelper(CBaseFileSystem* , const char* , const char* , FileFindHandle_t* , bool, int* );
	/* filesystem/basefilesystem.cpp:3713 */
	const char* FindNextFileHelper(CBaseFileSystem* , FileFindHandle_t& , bool, int* );
	/* filesystem/basefilesystem.cpp:3548 */
	const char* FindFileInSearchPath(CBaseFileSystem* , FindData_t* , const CSearchPath* , bool);
	/* filesystem/basefilesystem.cpp:731 */
	bool ParseVPKFileNameFromFilename(const CBaseFileSystem* , const char* , CBufferString* , CBufferString* );
	/* filesystem/basefilesystem.cpp:3223 */
	void CopySearchPathsToIterator(CBaseFileSystem* , CUtlVector<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> >& );
	/* filesystem/basefilesystem.cpp:3244 */
	bool CopySearchPathToIteratorForAbsolutePath(CBaseFileSystem* , const char* , CSearchPath& , CBufferString* );
	/* filesystem/basefilesystem.cpp:821 */
	CPackedStore* CreateVPKStoreForSearchPath(CBaseFileSystem* , const char* , CUtlStringToken);
	/* filesystem/basefilesystem.cpp:2356 */
	FileHandle_t FindFileInSearchPaths(CBaseFileSystem* , const char* , const char* , const char* , unsigned int);
	/* filesystem/basefilesystem.cpp:2237 */
	bool HandleOpenFromZipFile(CBaseFileSystem* , CFileOpenInfo& );
	/* filesystem/basefilesystem.cpp:2261 */
	void HandleOpenRegularFile(CBaseFileSystem* , CFileOpenInfo& , bool);
	/* filesystem/basefilesystem.cpp:2316 */
	FileHandle_t FindFile(CBaseFileSystem* , const CSearchPath* , const char* , const char* , unsigned int);
	/* filesystem/basefilesystem.cpp:2817 */
	int64 FastGetFileSize(CBaseFileSystem* , const CSearchPath* , const char* );
	/* filesystem/basefilesystem.cpp:2779 */
	int64 FastGetFileTime(CBaseFileSystem* , const CSearchPath* , const char* );
	/* filesystem/basefilesystem.cpp:2289 */
	FileHandle_t FindFileInTargetVPK(CBaseFileSystem* , CFileOpenInfo& , CPackedStore* );
	/* filesystem/basefilesystem.cpp:1693 */
	const char* GetWritePath(CBaseFileSystem* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:436 */
	bool ComputeFullWritePath(CBaseFileSystem* , CBufferString* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:891 */
	CSearchPath* AddSearchPathInternal(CBaseFileSystem* , const char* , const char* , SearchPathAdd_t, bool, SearchPathPriority_t, CUtlStringToken, int);
	/* filesystem/basefilesystem.cpp:1433 */
	void RemoveSearchPathInternal(CBaseFileSystem* , int);
	/* filesystem/basefilesystem.cpp:1535 */
	void GetMergedSearchPaths(CBaseFileSystem* , CUtlStringToken, CUtlVector<CBaseFileSystem::CSearchPath*, CUtlMemory<CBaseFileSystem::CSearchPath*, int> >& );
	/* filesystem/basefilesystem.cpp:1136 */
	int FindSearchPath(const CBaseFileSystem* , CUtlSymbol, CUtlSymbol);
	/* filesystem/basefilesystem.cpp:3889 */
	bool FullPathToRelativePathInternal(CBaseFileSystem* , const char* , const char* , bool, CBufferString* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* filesystem/basefilesystem.cpp:85 */
	void LogFileOpen(CBaseFileSystem* , const char* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:2424 */
	FileHandle_t OpenForRead(CBaseFileSystem* , const char* , const char* , unsigned int, const char* );
	/* filesystem/basefilesystem.cpp:2433 */
	FileHandle_t OpenForWrite(CBaseFileSystem* , const char* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:1638 */
	CSearchPath* FindWritePath(CBaseFileSystem* , const char* , const char* , bool* );
	/* filesystem/basefilesystem.cpp:4726 */
	CPathIDInfo* FindOrAddPathIDInfo(CBaseFileSystem* , const CUtlSymbol& , int);
	/* filesystem/basefilesystem.h:805 */
	bool FilterByPathID(const CSearchPath* , const CUtlSymbol& , bool);
	/* filesystem/basefilesystem.h:819 */
	bool FilterSearchPath(const CSearchPath* , CUtlSymbol, PathTypeFilter_t, bool);
	/* filesystem/basefilesystem.h:764 */
	bool ShouldSuppressAsyncFileRequestFlushOnPathChange(const CBaseFileSystem* );
	CUtlFilenameSymbolTable m_FileNames __attribute__((__aligned__(16))); /* 880 112 */
	static class CUtlSymbol m_GamePathID; /* 0 0 */
	static class CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_ExcludeFilePaths; /* 0 0 */
	bool m_bSearchVPKLast; /* 992 1 */
	uint8 m_nSuppressAsyncFileRequestFlush; /* 993 1 */
	CThreadMutex m_FileAccessLog_Mutex; /* 1000 72 */
	bool m_bFileAccessLog_Initialized; /* 1072 1 */
	bool m_bFileAccessLog_ToBuffer; /* 1073 1 */
	bool m_bFileAccessLog_Immediate; /* 1074 1 */
	bool m_bFileAccessLog_AlreadyWrittenToImmediate; /* 1075 1 */
	CBufferString m_FileAccessLog_Buffer; /* 1080 16 */
	/* filesystem/basefilesystem.cpp:5485 */
	virtual const char* GetModPath(CBaseFileSystem* , const char* );
	/* filesystem/basefilesystem.cpp:5502 */
	virtual const char* GetSymLink(CBaseFileSystem* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:5512 */
	virtual void AddSymLink(CBaseFileSystem* , const char* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:5560 */
	virtual void RemoveSymLink(CBaseFileSystem* , const char* , const char* );
	/* filesystem/basefilesystem.cpp:5587 */
	virtual void ClearSymLinks(CBaseFileSystem* );
	/* filesystem/basefilesystem.h:732 */
	virtual CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* GetSymLinkReloadQueue(CBaseFileSystem* );
	/* filesystem/basefilesystem.cpp:5598 */
	virtual bool GetSearchPath(CBaseFileSystem* , int, CUtlString* , CUtlString* );
	/* filesystem/basefilesystem.cpp:5643 */
	virtual bool SplitFullPath(CBaseFileSystem* , const char* , CBufferString* , CBufferString* , CBufferString* );
	/* filesystem/basefilesystem.cpp:5612 */
	virtual bool GetSearchPathArgs(CBaseFileSystem* , const char* , CBufferString* );
	CUtlMap<CUtlString, CBaseFileSystem::SymLink_t, short unsigned int, bool (*)(const CUtlString&, const CUtlString&)> m_SymLinks; /* 1096 40* /
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_SymLinkReloadQueue; /* 1136 32 */
	void CBaseFileSystem(class CBaseFileSystem *, const class CBaseFileSystem  &); /* linkage=_ZN15CBaseFileSystemC4ERKS_ */
	void CBaseFileSystem(class CBaseFileSystem *); /* linkage=_ZN15CBaseFileSystemC4Ev */
	void ~CBaseFileSystem(class CBaseFileSystem *); /* linkage=_ZN15CBaseFileSystemD4Ev */
	virtual void * QueryInterface(class CBaseFileSystem *, const char  *); /* linkage=_ZN15CBaseFileSystem14QueryInterfaceEPKc */
	virtual enum InitReturnVal_t Init(class CBaseFileSystem *); /* linkage=_ZN15CBaseFileSystem4InitEv */
	virtual void PreShutdown(class CBaseFileSystem *); /* linkage=_ZN15CBaseFileSystem11PreShutdownEv */
	virtual void Shutdown(class CBaseFileSystem *); /* linkage=_ZN15CBaseFileSystem8ShutdownEv */
	void ParsePathID(class CBaseFileSystem *, const char  * &, const char  * &, class CBufferString *); /* linkage=_ZN15CBaseFileSystem11ParsePathIDERPKcS2_P13CBufferString */
	/* <107fb5> filesystem/basefilesystem.cpp:2516 */
	virtual FileHandle_t Open(class CBaseFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem4OpenEPKcS1_S1_ */
	virtual FileHandle_t OpenEx(class CBaseFileSystem *, const char  *, const char  *, unsigned int, const char  *); /* linkage=_ZN15CBaseFileSystem6OpenExEPKcS1_jS1_ */
	virtual void Close(class CBaseFileSystem *, FileHandle_t); /* linkage=_ZN15CBaseFileSystem5CloseEPv */
	/* <10d41e> filesystem/basefilesystem.cpp:2686 */
	virtual void Seek(class CBaseFileSystem *, FileHandle_t, int64, enum FileSystemSeek_t); /* linkage=_ZN15CBaseFileSystem4SeekEPvx16FileSystemSeek_t */
	/* <10a040> filesystem/basefilesystem.cpp:2703 */
	virtual int64 Tell(class CBaseFileSystem *, FileHandle_t); /* linkage=_ZN15CBaseFileSystem4TellEPv */
	/* <10a1f1> filesystem/basefilesystem.cpp:2720 */
	virtual int64 Size(class CBaseFileSystem *, FileHandle_t); /* linkage=_ZN15CBaseFileSystem4SizeEPv */
	virtual int64 Size(class CBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem4SizeEPKcS1_ */
	/* <10a388> filesystem/basefilesystem.cpp:2976 */
	virtual void SetBufferSize(class CBaseFileSystem *, FileHandle_t, unsigned int); /* linkage=_ZN15CBaseFileSystem13SetBufferSizeEPvj */
	/* <10b487> filesystem/basefilesystem.cpp:2990 */
	virtual bool IsOk(class CBaseFileSystem *, FileHandle_t); /* linkage=_ZN15CBaseFileSystem4IsOkEPv */
	/* <10a4dc> filesystem/basefilesystem.cpp:3005 */
	virtual void Flush(class CBaseFileSystem *, FileHandle_t); /* linkage=_ZN15CBaseFileSystem5FlushEPv */
	virtual bool Precache(class CBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem8PrecacheEPKcS1_ */
	/* <10d607> filesystem/basefilesystem.cpp:2847 */
	virtual bool EndOfFile(class CBaseFileSystem *, FileHandle_t); /* linkage=_ZN15CBaseFileSystem9EndOfFileEPv */
	/* <10d09a> filesystem/basefilesystem.cpp:2861 */
	virtual int Read(class CBaseFileSystem *, void *, int, FileHandle_t); /* linkage=_ZN15CBaseFileSystem4ReadEPviS0_ */
	/* <10cfcc> filesystem/basefilesystem.cpp:2869 */
	virtual int ReadEx(class CBaseFileSystem *, void *, int, int, FileHandle_t); /* linkage=_ZN15CBaseFileSystem6ReadExEPviiS0_ */
	/* <10d1d9> filesystem/basefilesystem.cpp:2928 */
	virtual int Write(class CBaseFileSystem *, const void  *, int, FileHandle_t); /* linkage=_ZN15CBaseFileSystem5WriteEPKviPv */
	virtual char * ReadLine(class CBaseFileSystem *, char *, int, FileHandle_t); /* linkage=_ZN15CBaseFileSystem8ReadLineEPciPv */
	virtual class CUtlString ReadLine(class CBaseFileSystem *, FileHandle_t, bool); /* linkage=_ZN15CBaseFileSystem8ReadLineEPvb */
	virtual int FPrintf(class CBaseFileSystem *, FileHandle_t, const char  *, ...); /* linkage=_ZN15CBaseFileSystem7FPrintfEPvPKcz */
	virtual bool ReadFile(class CBaseFileSystem *, const char  *, const char  *, class CUtlBuffer &, int, int, FSAllocFunc_t); /* linkage=_ZN15CBaseFileSystem8ReadFileEPKcS1_R10CUtlBufferiiPFPvS1_jE */
	virtual bool WriteFile(class CBaseFileSystem *, const char  *, const char  *, const class CUtlBuffer  &); /* linkage=_ZN15CBaseFileSystem9WriteFileEPKcS1_RK10CUtlBuffer */
	/* <1083e8> filesystem/basefilesystem.cpp:2029 */
	virtual bool UnzipFile(class CBaseFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem9UnzipFileEPKcS1_S1_ */
	virtual bool CopyAFile(class CBaseFileSystem *, const char  *, const char  *, const char  *, bool); /* linkage=_ZN15CBaseFileSystem9CopyAFileEPKcS1_S1_b */
	virtual int ReadFileEx(class CBaseFileSystem *, const char  *, const char  *, void * *, bool, bool, int, int, FSAllocFunc_t); /* linkage=_ZN15CBaseFileSystem10ReadFileExEPKcS1_PPvbbiiPFS2_S1_jE */
	virtual bool ReadToBuffer(class CBaseFileSystem *, FileHandle_t, class CUtlBuffer &, int, FSAllocFunc_t); /* linkage=_ZN15CBaseFileSystem12ReadToBufferEPvR10CUtlBufferiPFS0_PKcjE */
	/* <108705> filesystem/basefilesystem.cpp:1863 */
	virtual class IMemoryMappedFile * CreateMemoryMap(class CBaseFileSystem *, FileHandle_t, enum MemoryMappedFileFlags_t); /* linkage=_ZN15CBaseFileSystem15CreateMemoryMapEPv23MemoryMappedFileFlags_t */
	virtual class IMemoryMappedFile * CreateMemoryMap(class CBaseFileSystem *, const char  *, const char  *, enum MemoryMappedFileFlags_t); /* linkage=_ZN15CBaseFileSystem15CreateMemoryMapEPKcS1_23MemoryMappedFileFlags_t */
	virtual bool GetOptimalIOConstraints(class CBaseFileSystem *, FileHandle_t, unsigned int *, unsigned int *, unsigned int *); /* linkage=_ZN15CBaseFileSystem23GetOptimalIOConstraintsEPvPjS1_S1_ */
	/* <108149> filesystem/basefilesystem.h:210 */
	virtual void * AllocOptimalReadBuffer(class CBaseFileSystem *, FileHandle_t, unsigned int, unsigned int); /* linkage=_ZN15CBaseFileSystem22AllocOptimalReadBufferEPvjj */
	virtual void FreeOptimalReadBuffer(class CBaseFileSystem *, void *); /* linkage=_ZN15CBaseFileSystem21FreeOptimalReadBufferEPv */
	/* <10831e> filesystem/basefilesystem.cpp:4130 */
	virtual bool GetCurrentDirectory(class CBaseFileSystem *, class CBufferString *); /* linkage=_ZN15CBaseFileSystem19GetCurrentDirectoryEP13CBufferString */
	virtual bool CreateDirHierarchy(class CBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem18CreateDirHierarchyEPKcS1_ */
	virtual bool CreateDirHierarchyForFile(class CBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem25CreateDirHierarchyForFileEPKcS1_ */
	virtual bool IsDirectory(class CBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem11IsDirectoryEPKcS1_ */
	/* <10e27f> filesystem/basefilesystem.cpp:3884 */
	virtual bool FullPathToRelativePath(class CBaseFileSystem *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN15CBaseFileSystem22FullPathToRelativePathEPKcS1_P13CBufferString */
	virtual bool RemoveFile(class CBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem10RemoveFileEPKcS1_ */
	virtual bool DeleteDirectory(class CBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem15DeleteDirectoryEPKcS1_ */
	virtual bool DeleteDirectoryAndContents_R(class CBaseFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN15CBaseFileSystem28DeleteDirectoryAndContents_REPKcS1_b */
	virtual void RemoveAllSearchPaths(class CBaseFileSystem *); /* linkage=_ZN15CBaseFileSystem20RemoveAllSearchPathsEv */
	virtual void RemoveSearchPaths(class CBaseFileSystem *, const char  *); /* linkage=_ZN15CBaseFileSystem17RemoveSearchPathsEPKc */
	/* <112e0f> filesystem/basefilesystem.cpp:1157 */
	virtual void AddSearchPath(class CBaseFileSystem *, const char  *, const char  *, enum SearchPathAdd_t, enum SearchPathPriority_t, class CUtlStringToken); /* linkage=_ZN15CBaseFileSystem13AddSearchPathEPKcS1_15SearchPathAdd_t20SearchPathPriority_t15CUtlStringToken */
	virtual bool RemoveSearchPath(class CBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem16RemoveSearchPathEPKcS1_ */
	virtual SearchPathStateHandle_t SaveSearchPathState(const class CBaseFileSystem  *, const char  *); /* linkage=_ZNK15CBaseFileSystem19SaveSearchPathStateEPKc */
	virtual void RestoreSearchPathState(class CBaseFileSystem *, SearchPathStateHandle_t); /* linkage=_ZN15CBaseFileSystem22RestoreSearchPathStateEP25SearchPathStateHandle_t__ */
	/* <10885b> filesystem/basefilesystem.cpp:1625 */
	virtual void DestroySearchPathState(class CBaseFileSystem *, SearchPathStateHandle_t); /* linkage=_ZN15CBaseFileSystem22DestroySearchPathStateEP25SearchPathStateHandle_t__ */
	virtual void PrintSearchPaths(class CBaseFileSystem *); /* linkage=_ZN15CBaseFileSystem16PrintSearchPathsEv */
	virtual void MarkPathIDByRequestOnly(class CBaseFileSystem *, const char  *, bool); /* linkage=_ZN15CBaseFileSystem23MarkPathIDByRequestOnlyEPKcb */
	virtual bool IsFileInReadOnlySearchPath(class CBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem26IsFileInReadOnlySearchPathEPKcS1_ */
	virtual void SetSearchPathReadOnly(class CBaseFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN15CBaseFileSystem21SetSearchPathReadOnlyEPKcS1_b */
	virtual bool FileExists(class CBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem10FileExistsEPKcS1_ */
	virtual int64 GetFileTime(class CBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem11GetFileTimeEPKcS1_ */
	virtual bool IsFileWritable(class CBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem14IsFileWritableEPKcS1_ */
	virtual bool SetFileWritable(class CBaseFileSystem *, const char  *, bool, const char  *); /* linkage=_ZN15CBaseFileSystem15SetFileWritableEPKcbS1_ */
	virtual void FileTimeToString(class CBaseFileSystem *, int64, class CBufferString *); /* linkage=_ZN15CBaseFileSystem16FileTimeToStringExP13CBufferString */
	virtual const char  * FindFirst(class CBaseFileSystem *, const char  *, class FileFindHandle_t *); /* linkage=_ZN15CBaseFileSystem9FindFirstEPKcP16FileFindHandle_t */
	virtual const char  * FindFirstEx(class CBaseFileSystem *, const char  *, const char  *, class FileFindHandle_t *); /* linkage=_ZN15CBaseFileSystem11FindFirstExEPKcS1_P16FileFindHandle_t */
	virtual const char  * FindNext(class CBaseFileSystem *, class FileFindHandle_t &); /* linkage=_ZN15CBaseFileSystem8FindNextER16FileFindHandle_t */
	virtual bool FindIsDirectory(class CBaseFileSystem *, const class FileFindHandle_t  &); /* linkage=_ZN15CBaseFileSystem15FindIsDirectoryERK16FileFindHandle_t */
	virtual void FindClose(class CBaseFileSystem *, class FileFindHandle_t &); /* linkage=_ZN15CBaseFileSystem9FindCloseER16FileFindHandle_t */
	virtual void FindFileAbsoluteList(class CBaseFileSystem *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem20FindFileAbsoluteListER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEEPKcS7_ */
	virtual void PrintOpenedFiles(class CBaseFileSystem *); /* linkage=_ZN15CBaseFileSystem16PrintOpenedFilesEv */
	virtual void SetWarningFunc(class CBaseFileSystem *, void (*)(const char  *, ...)); /* linkage=_ZN15CBaseFileSystem14SetWarningFuncEPFvPKczE */
	virtual void SetWarningLevel(class CBaseFileSystem *, enum FileWarningLevel_t); /* linkage=_ZN15CBaseFileSystem15SetWarningLevelE18FileWarningLevel_t */
	virtual void AddLoggingFunc(class CBaseFileSystem *, FileSystemLoggingFunc_t); /* linkage=_ZN15CBaseFileSystem14AddLoggingFuncEPFvPKcS1_E */
	virtual void RemoveLoggingFunc(class CBaseFileSystem *, FileSystemLoggingFunc_t); /* linkage=_ZN15CBaseFileSystem17RemoveLoggingFuncEPFvPKcS1_E */
	virtual bool RenameFile(class CBaseFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem10RenameFileEPKcS1_S1_ */
	virtual void GetLocalCopy(class CBaseFileSystem *, const char  *); /* linkage=_ZN15CBaseFileSystem12GetLocalCopyEPKc */
	virtual FileNameHandle_t FindOrAddFileName(class CBaseFileSystem *, const char  *); /* linkage=_ZN15CBaseFileSystem17FindOrAddFileNameEPKc */
	virtual FileNameHandle_t FindFileName(class CBaseFileSystem *, const char  *); /* linkage=_ZN15CBaseFileSystem12FindFileNameEPKc */
	virtual bool String(class CBaseFileSystem *, const FileNameHandle_t  &, class CBufferString *); /* linkage=_ZN15CBaseFileSystem6StringERKjP13CBufferString */
	virtual int GetPathIndex(class CBaseFileSystem *, const FileNameHandle_t  &); /* linkage=_ZN15CBaseFileSystem12GetPathIndexERKj */
	virtual int64 GetPathTime(class CBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem11GetPathTimeEPKcS1_ */
	virtual const class FileSystemStatistics  * GetFilesystemStatistics(class CBaseFileSystem *); /* linkage=_ZN15CBaseFileSystem23GetFilesystemStatisticsEv */
	virtual PlatModule_t LoadModule(class CBaseFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN15CBaseFileSystem10LoadModuleEPKcS1_b */
	virtual void UnloadModule(class CBaseFileSystem *, PlatModule_t); /* linkage=_ZN15CBaseFileSystem12UnloadModuleEP13_PlatModule_t */
	virtual const char  * RelativePathToFullPath(class CBaseFileSystem *, const char  *, const char  *, class CBufferString *, enum PathTypeFilter_t); /* linkage=_ZN15CBaseFileSystem22RelativePathToFullPathEPKcS1_P13CBufferString16PathTypeFilter_t */
	virtual bool RelativePathToFullWritePath(class CBaseFileSystem *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN15CBaseFileSystem27RelativePathToFullWritePathEPKcS1_P13CBufferString */
	int GetSearchPathImpl(class CBaseFileSystem *, const char  *, enum GetSearchPathTypes_t, class CBufferString *, int); /* linkage=_ZN15CBaseFileSystem17GetSearchPathImplEPKc20GetSearchPathTypes_tP13CBufferStringi */
	virtual bool GetSearchPath(class CBaseFileSystem *, const char  *, enum GetSearchPathTypes_t, class CBufferString *, int); /* linkage=_ZN15CBaseFileSystem13GetSearchPathEPKc20GetSearchPathTypes_tP13CBufferStringi */
	virtual int GetSearchPathID(class CBaseFileSystem *, class CBufferString *); /* linkage=_ZN15CBaseFileSystem15GetSearchPathIDEP13CBufferString */
	virtual class CUtlStringToken GetMergeTokenForPath(class CBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem20GetMergeTokenForPathEPKcS1_ */
	virtual int GetMergedPaths(class CBaseFileSystem *, class CUtlStringToken, class CBufferString *); /* linkage=_ZN15CBaseFileSystem14GetMergedPathsE15CUtlStringTokenP13CBufferString */
	virtual bool GetFileTypeForFullPath(class CBaseFileSystem *, const char  *, class CBufferString *); /* linkage=_ZN15CBaseFileSystem22GetFileTypeForFullPathEPKcP13CBufferString */
	virtual class KeyValues * LoadKeyValues(class CBaseFileSystem *, enum KeyValuesPreloadType_t, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem13LoadKeyValuesEN11IFileSystem22KeyValuesPreloadType_tEPKcS3_ */
	virtual bool LoadKeyValues(class CBaseFileSystem *, class KeyValues &, enum KeyValuesPreloadType_t, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem13LoadKeyValuesER9KeyValuesN11IFileSystem22KeyValuesPreloadType_tEPKcS5_ */
	virtual bool AddVPKFile(class CBaseFileSystem *, const char  *, const char  *, enum SearchPathAdd_t); /* linkage=_ZN15CBaseFileSystem10AddVPKFileEPKcS1_15SearchPathAdd_t */
	/* <108250> filesystem/basefilesystem.cpp:691 */
	virtual void RemoveVPKFile(class CBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem13RemoveVPKFileEPKcS1_ */
	virtual bool IsVPKFileLoaded(class CBaseFileSystem *, const char  *); /* linkage=_ZN15CBaseFileSystem15IsVPKFileLoadedEPKc */
	/* <1090a1> filesystem/basefilesystem.cpp:5336 */
	virtual void SetIODelayAlarm(class CBaseFileSystem *, float); /* linkage=_ZN15CBaseFileSystem15SetIODelayAlarmEf */
	virtual bool IsPathInvalidForFilesystem(class CBaseFileSystem *, const char  *); /* linkage=_ZN15CBaseFileSystem26IsPathInvalidForFilesystemEPKc */
	virtual void GetAvailableDrives(class CBaseFileSystem *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN15CBaseFileSystem18GetAvailableDrivesER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	/* <10dbba> filesystem/basefilesystem.cpp:126 */
	virtual enum AccesLogWriteResult_t WriteFileAccessLog(class CBaseFileSystem *, const char  *, const char  *, const char  *, bool); /* linkage=_ZN15CBaseFileSystem18WriteFileAccessLogEPKcS1_S1_b */
	virtual void GetSearchPathsForPathID(const class CBaseFileSystem  *, const char  *, enum GetSearchPathTypes_t, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZNK15CBaseFileSystem23GetSearchPathsForPathIDEPKc20GetSearchPathTypes_tR10CUtlVectorI10CUtlString10CUtlMemoryIS4_iEE */
	/* <108535> filesystem/basefilesystem.cpp:5438 */
	virtual bool MarkContentCorrupt(class CBaseFileSystem *, bool, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem18MarkContentCorruptEbPKcS1_ */
	virtual void SetContentCorruptionReportingEnabled(class CBaseFileSystem *, bool); /* linkage=_ZN15CBaseFileSystem36SetContentCorruptionReportingEnabledEb */
	/* <1081bb> filesystem/basefilesystem.cpp:486 */
	virtual void SuppressAsyncFileRequestFlushOnPathChange(class CBaseFileSystem *, bool); /* linkage=_ZN15CBaseFileSystem41SuppressAsyncFileRequestFlushOnPathChangeEb */
	const class CSearchPath  * FindBestPathMatch(class CBaseFileSystem *, const char  *, const char  *, enum PathTypeFilter_t, bool); /* linkage=_ZN15CBaseFileSystem17FindBestPathMatchEPKcS1_16PathTypeFilter_tb */
	void NoteIO(class CBaseFileSystem *); /* linkage=_ZN15CBaseFileSystem6NoteIOEv */
	virtual enum VirtualFileHandle_t FS_fopen(class CBaseFileSystem *, const char  *, const char  *, unsigned int, int64 *); /* linkage=_ZN15CBaseFileSystem8FS_fopenEPKcS1_jPx */
	virtual void FS_setbufsize(class CBaseFileSystem *, enum VirtualFileHandle_t, unsigned int); /* linkage=_ZN15CBaseFileSystem13FS_setbufsizeE19VirtualFileHandle_tj */
	virtual void FS_fclose(class CBaseFileSystem *, enum VirtualFileHandle_t); /* linkage=_ZN15CBaseFileSystem9FS_fcloseE19VirtualFileHandle_t */
	virtual void FS_fseek(class CBaseFileSystem *, enum VirtualFileHandle_t, int64, int); /* linkage=_ZN15CBaseFileSystem8FS_fseekE19VirtualFileHandle_txi */
	virtual int64 FS_ftell(class CBaseFileSystem *, enum VirtualFileHandle_t); /* linkage=_ZN15CBaseFileSystem8FS_ftellE19VirtualFileHandle_t */
	size_t FS_fread(class CBaseFileSystem *, void *, size_t, enum VirtualFileHandle_t); /* linkage=_ZN15CBaseFileSystem8FS_freadEPvm19VirtualFileHandle_t */
	virtual size_t FS_fread(class CBaseFileSystem *, void *, size_t, size_t, enum VirtualFileHandle_t); /* linkage=_ZN15CBaseFileSystem8FS_freadEPvmm19VirtualFileHandle_t */
	virtual size_t FS_fwrite(class CBaseFileSystem *, const void  *, size_t, enum VirtualFileHandle_t); /* linkage=_ZN15CBaseFileSystem9FS_fwriteEPKvm19VirtualFileHandle_t */
	virtual int FS_ferror(class CBaseFileSystem *, enum VirtualFileHandle_t); /* linkage=_ZN15CBaseFileSystem9FS_ferrorE19VirtualFileHandle_t */
	virtual int FS_fflush(class CBaseFileSystem *, enum VirtualFileHandle_t); /* linkage=_ZN15CBaseFileSystem9FS_fflushE19VirtualFileHandle_t */
	virtual int FS_GetBaseFileInfo(class CBaseFileSystem *, const char  *, class FioBaseFileInfo_t *); /* linkage=_ZN15CBaseFileSystem18FS_GetBaseFileInfoEPKcP17FioBaseFileInfo_t */
	virtual int FS_SetFileReadOnly(class CBaseFileSystem *, const char  *, bool); /* linkage=_ZN15CBaseFileSystem18FS_SetFileReadOnlyEPKcb */
	virtual class CDirIterator * FS_FindFiles(class CBaseFileSystem *, const char  *); /* linkage=_ZN15CBaseFileSystem12FS_FindFilesEPKc */
	/* <107f83> filesystem/basefilesystem.h:595 */
	virtual int FS_GetSectorSize(class CBaseFileSystem *, enum VirtualFileHandle_t); /* linkage=_ZN15CBaseFileSystem16FS_GetSectorSizeE19VirtualFileHandle_t */
	virtual class IMemoryMappedFile * FS_CreateMemoryMap(class CBaseFileSystem *, enum VirtualFileHandle_t, enum MemoryMappedFileFlags_t); /* linkage=_ZN15CBaseFileSystem18FS_CreateMemoryMapE19VirtualFileHandle_t23MemoryMappedFileFlags_t */
	bool OpenedFileLessFunc(const class COpenedFile  &, const class COpenedFile  &); /* linkage=_ZN15CBaseFileSystem18OpenedFileLessFuncERKNS_11COpenedFileES2_ */
	enum VirtualFileHandle_t Trace_FOpen(class CBaseFileSystem *, const char  *, const char  *, unsigned int, int64 *); /* linkage=_ZN15CBaseFileSystem11Trace_FOpenEPKcS1_jPx */
	/* <10adf3> filesystem/basefilesystem.cpp:566 */
	void Trace_FClose(class CBaseFileSystem *, enum VirtualFileHandle_t); /* linkage=_ZN15CBaseFileSystem12Trace_FCloseE19VirtualFileHandle_t */
	void Trace_FRead(class CBaseFileSystem *, int, enum VirtualFileHandle_t); /* linkage=_ZN15CBaseFileSystem11Trace_FReadEi19VirtualFileHandle_t */
	/* <10ae3d> filesystem/basefilesystem.cpp:627 */
	void Trace_FWrite(class CBaseFileSystem *, int, enum VirtualFileHandle_t); /* linkage=_ZN15CBaseFileSystem12Trace_FWriteEi19VirtualFileHandle_t */
	void Trace_DumpUnclosedFiles(class CBaseFileSystem *); /* linkage=_ZN15CBaseFileSystem23Trace_DumpUnclosedFilesEv */
	void LogAccessToFile(class CBaseFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem15LogAccessToFileEPKcS1_S1_ */
	void Warning(class CBaseFileSystem *, enum FileWarningLevel_t, const char  *, ...); /* linkage=_ZN15CBaseFileSystem7WarningE18FileWarningLevel_tPKcz */
	const char  * FindFirstHelper(class CBaseFileSystem *, const char  *, const char  *, class FileFindHandle_t *, bool, int *); /* linkage=_ZN15CBaseFileSystem15FindFirstHelperEPKcS1_P16FileFindHandle_tbPi */
	const char  * FindNextFileHelper(class CBaseFileSystem *, class FileFindHandle_t &, bool, int *); /* linkage=_ZN15CBaseFileSystem18FindNextFileHelperER16FileFindHandle_tbPi */
	const char  * FindFileInSearchPath(class CBaseFileSystem *, class FindData_t *, const class CSearchPath  *, bool); /* linkage=_ZN15CBaseFileSystem20FindFileInSearchPathEPNS_10FindData_tEPKNS_11CSearchPathEb */
	/* <109a7b> filesystem/basefilesystem.cpp:731 */
	bool ParseVPKFileNameFromFilename(const class CBaseFileSystem  *, const char  *, class CBufferString *, class CBufferString *); /* linkage=_ZNK15CBaseFileSystem28ParseVPKFileNameFromFilenameEPKcP13CBufferStringS3_ */
	void CopySearchPathsToIterator(class CBaseFileSystem *, class CUtlVector<CBaseFileSystem::CSearchPath, CUtlMemory<CBaseFileSystem::CSearchPath, int> > &); /* linkage=_ZN15CBaseFileSystem25CopySearchPathsToIteratorER10CUtlVectorINS_11CSearchPathE10CUtlMemoryIS1_iEE */
	bool CopySearchPathToIteratorForAbsolutePath(class CBaseFileSystem *, const char  *, class CSearchPath &, class CBufferString *); /* linkage=_ZN15CBaseFileSystem39CopySearchPathToIteratorForAbsolutePathEPKcRNS_11CSearchPathEP13CBufferString */
	class CPackedStore * CreateVPKStoreForSearchPath(class CBaseFileSystem *, const char  *, class CUtlStringToken); /* linkage=_ZN15CBaseFileSystem27CreateVPKStoreForSearchPathEPKc15CUtlStringToken */
	FileHandle_t FindFileInSearchPaths(class CBaseFileSystem *, const char  *, const char  *, const char  *, unsigned int); /* linkage=_ZN15CBaseFileSystem21FindFileInSearchPathsEPKcS1_S1_j */
	bool HandleOpenFromZipFile(class CBaseFileSystem *, class CFileOpenInfo &); /* linkage=_ZN15CBaseFileSystem21HandleOpenFromZipFileER13CFileOpenInfo */
	void HandleOpenRegularFile(class CBaseFileSystem *, class CFileOpenInfo &, bool); /* linkage=_ZN15CBaseFileSystem21HandleOpenRegularFileER13CFileOpenInfob */
	FileHandle_t FindFile(class CBaseFileSystem *, const class CSearchPath  *, const char  *, const char  *, unsigned int); /* linkage=_ZN15CBaseFileSystem8FindFileEPKNS_11CSearchPathEPKcS4_j */
	int64 FastGetFileSize(class CBaseFileSystem *, const class CSearchPath  *, const char  *); /* linkage=_ZN15CBaseFileSystem15FastGetFileSizeEPKNS_11CSearchPathEPKc */
	int64 FastGetFileTime(class CBaseFileSystem *, const class CSearchPath  *, const char  *); /* linkage=_ZN15CBaseFileSystem15FastGetFileTimeEPKNS_11CSearchPathEPKc */
	FileHandle_t FindFileInTargetVPK(class CBaseFileSystem *, class CFileOpenInfo &, class CPackedStore *); /* linkage=_ZN15CBaseFileSystem19FindFileInTargetVPKER13CFileOpenInfoP12CPackedStore */
	const char  * GetWritePath(class CBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem12GetWritePathEPKcS1_ */
	bool ComputeFullWritePath(class CBaseFileSystem *, class CBufferString *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem20ComputeFullWritePathEP13CBufferStringPKcS3_ */
	class CSearchPath * AddSearchPathInternal(class CBaseFileSystem *, const char  *, const char  *, enum SearchPathAdd_t, bool, enum SearchPathPriority_t, class CUtlStringToken, int); /* linkage=_ZN15CBaseFileSystem21AddSearchPathInternalEPKcS1_15SearchPathAdd_tb20SearchPathPriority_t15CUtlStringTokeni */
	/* <110c9d> filesystem/basefilesystem.cpp:1433 */
	void RemoveSearchPathInternal(class CBaseFileSystem *, int); /* linkage=_ZN15CBaseFileSystem24RemoveSearchPathInternalEi */
	void GetMergedSearchPaths(class CBaseFileSystem *, class CUtlStringToken, class CUtlVector<CBaseFileSystem::CSearchPath*, CUtlMemory<CBaseFileSystem::CSearchPath*, int> > &); /* linkage=_ZN15CBaseFileSystem20GetMergedSearchPathsE15CUtlStringTokenR10CUtlVectorIPNS_11CSearchPathE10CUtlMemoryIS3_iEE */
	int FindSearchPath(const class CBaseFileSystem  *, class CUtlSymbol, class CUtlSymbol); /* linkage=_ZNK15CBaseFileSystem14FindSearchPathE10CUtlSymbolS0_ */
	bool FullPathToRelativePathInternal(class CBaseFileSystem *, const char  *, const char  *, bool, class CBufferString *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZN15CBaseFileSystem30FullPathToRelativePathInternalEPKcS1_bP13CBufferStringP10CUtlVectorIi10CUtlMemoryIiiEE */
	void LogFileOpen(class CBaseFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem11LogFileOpenEPKcS1_S1_ */
	/* <110d60> filesystem/basefilesystem.cpp:2424 */
	FileHandle_t OpenForRead(class CBaseFileSystem *, const char  *, const char  *, unsigned int, const char  *); /* linkage=_ZN15CBaseFileSystem11OpenForReadEPKcS1_jS1_ */
	FileHandle_t OpenForWrite(class CBaseFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem12OpenForWriteEPKcS1_S1_ */
	class CSearchPath * FindWritePath(class CBaseFileSystem *, const char  *, const char  *, bool *); /* linkage=_ZN15CBaseFileSystem13FindWritePathEPKcS1_Pb */
	/* <10c4a1> filesystem/basefilesystem.cpp:4726 */
	class CPathIDInfo * FindOrAddPathIDInfo(class CBaseFileSystem *, const class CUtlSymbol  &, int); /* linkage=_ZN15CBaseFileSystem19FindOrAddPathIDInfoERK10CUtlSymboli */
	bool FilterByPathID(const class CSearchPath  *, const class CUtlSymbol  &, bool); /* linkage=_ZN15CBaseFileSystem14FilterByPathIDEPKNS_11CSearchPathERK10CUtlSymbolb */
	bool FilterSearchPath(const class CSearchPath  *, class CUtlSymbol, enum PathTypeFilter_t, bool); /* linkage=_ZN15CBaseFileSystem16FilterSearchPathEPKNS_11CSearchPathE10CUtlSymbol16PathTypeFilter_tb */
	bool ShouldSuppressAsyncFileRequestFlushOnPathChange(const class CBaseFileSystem  *); /* linkage=_ZNK15CBaseFileSystem47ShouldSuppressAsyncFileRequestFlushOnPathChangeEv */
	virtual const char  * GetModPath(class CBaseFileSystem *, const char  *); /* linkage=_ZN15CBaseFileSystem10GetModPathEPKc */
	virtual const char  * GetSymLink(class CBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem10GetSymLinkEPKcS1_ */
	virtual void AddSymLink(class CBaseFileSystem *, const char  *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem10AddSymLinkEPKcS1_S1_ */
	virtual void RemoveSymLink(class CBaseFileSystem *, const char  *, const char  *); /* linkage=_ZN15CBaseFileSystem13RemoveSymLinkEPKcS1_ */
	virtual void ClearSymLinks(class CBaseFileSystem *); /* linkage=_ZN15CBaseFileSystem13ClearSymLinksEv */
	virtual class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > * GetSymLinkReloadQueue(class CBaseFileSystem *); /* linkage=_ZN15CBaseFileSystem21GetSymLinkReloadQueueEv */
	/* <1091f9> filesystem/basefilesystem.cpp:5598 */
	virtual bool GetSearchPath(class CBaseFileSystem *, int, class CUtlString *, class CUtlString *); /* linkage=_ZN15CBaseFileSystem13GetSearchPathEiP10CUtlStringS1_ */
	virtual bool SplitFullPath(class CBaseFileSystem *, const char  *, class CBufferString *, class CBufferString *, class CBufferString *); /* linkage=_ZN15CBaseFileSystem13SplitFullPathEPKcP13CBufferStringS3_S3_ */
	virtual bool GetSearchPathArgs(class CBaseFileSystem *, const char  *, class CBufferString *); /* linkage=_ZN15CBaseFileSystem17GetSearchPathArgsEPKcP13CBufferString */
} __attribute__((__aligned__(16)));

// <0013F492> filesystem/basefilesystem.h:162
void CBaseFileSystem::CBaseFileSystem()
{
} /* size: 0 */

// <0013F454> filesystem/basefilesystem.h:163
void CBaseFileSystem::~CBaseFileSystem()
{
} /* size: 0 */

// <0014A643> filesystem/basefilesystem.h:210
inline void* CBaseFileSystem::AllocOptimalReadBuffer(FileHandle_t hFile, unsigned int nSize, unsigned int nOffset)
{
} /* size: 0 */

// <00108149> filesystem/basefilesystem.h:210
void* CBaseFileSystem::AllocOptimalReadBuffer(FileHandle_t hFile, unsigned int nSize, unsigned int nOffset)
{
} /* size: 11 */

// <0014A620> filesystem/basefilesystem.h:211
inline void CBaseFileSystem::FreeOptimalReadBuffer(void* p)
{
} /* size: 0 */

// <00105BC1> filesystem/basefilesystem.h:211
void CBaseFileSystem::FreeOptimalReadBuffer(void* p)
{
} /* size: 12 */

// <000DB43D> filesystem/basefilesystem.h:358
void CPathIDInfo::CPathIDInfo()
{
} /* size: 0 */

// <000DB420> filesystem/basefilesystem.h:358
inline void CPathIDInfo::CPathIDInfo()
{
} /* size: 0 */

// <000E8E2D> filesystem/basefilesystem.h:377
inline void CSearchPath::operator=(const CSearchPath &)
{
} /* size: 0 */

// <00105B9B> filesystem/basefilesystem.h:396
inline void CSearchPath::SetPackFile(CPackedStore* pPackFile)
{
} /* size: 0 */

// <00105B82> filesystem/basefilesystem.h:397
inline void CSearchPath::GetPackFile()
{
} /* size: 0 */

// <000C6808> filesystem/basefilesystem.h:428
void SearchPathStateEntry_t::SearchPathStateEntry_t()
{
} /* size: 0 */

// <000C67EB> filesystem/basefilesystem.h:428
inline void SearchPathStateEntry_t::SearchPathStateEntry_t()
{
} /* size: 0 */

// <000BFBCE> filesystem/basefilesystem.h:428
void SearchPathStateEntry_t::~SearchPathStateEntry_t()
{
} /* size: 0 */

// <000BFBB1> filesystem/basefilesystem.h:428
inline void SearchPathStateEntry_t::~SearchPathStateEntry_t()
{
} /* size: 0 */

// <000F3609> filesystem/basefilesystem.h:434
void CSearchPathState::~CSearchPathState()
{
} /* size: 0 */

// <000F35EC> filesystem/basefilesystem.h:434
inline void CSearchPathState::~CSearchPathState()
{
} /* size: 0 */

// <00105B32> filesystem/basefilesystem.h:437
void CSearchPathState::CSearchPathState(const char* pPathID)
{
} /* size: 0 */

// <00105B0C> filesystem/basefilesystem.h:437
inline void CSearchPathState::CSearchPathState(const char* pPathID)
{
} /* size: 0 */

// <000DB4A5> filesystem/basefilesystem.h:442
void CSearchPathsVisits::CSearchPathsVisits()
{
} /* size: 0 */

// <000DB488> filesystem/basefilesystem.h:442
inline void CSearchPathsVisits::CSearchPathsVisits()
{
} /* size: 0 */

// <000DB471> filesystem/basefilesystem.h:442
void CSearchPathsVisits::~CSearchPathsVisits()
{
} /* size: 0 */

// <000DB454> filesystem/basefilesystem.h:442
inline void CSearchPathsVisits::~CSearchPathsVisits()
{
} /* size: 0 */

// <00105AF3> filesystem/basefilesystem.h:445
inline void CSearchPathsVisits::Reset()
{
} /* size: 0 */

// <00105ACD> filesystem/basefilesystem.h:450
inline void CSearchPathsVisits::MarkVisit(const CSearchPath& searchPath)
{
} /* size: 0 */

// <000C2045> filesystem/basefilesystem.h:496
void FindData_t::FindData_t()
{
} /* size: 0 */

// <000C2028> filesystem/basefilesystem.h:496
inline void FindData_t::FindData_t()
{
} /* size: 0 */

// <00104E71> filesystem/basefilesystem.h:498
// variables: 4
// function calls: 59
void FindData_t::~FindData_t()
{
	{
		int i; // 22
		CUtlVectorBase<char::Count(); // 22
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 24
	}
	CUtlVectorBase<char::RemoveAll(); // 26
	CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
	CUtlMemory<char::IsExternallyAllocated(); // 905
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 18
	CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
	CUtlStringList::~CUtlStringList(); // 501
	{
		int i; // 22
		CUtlVectorBase<char::Count(); // 22
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 24
	}
	CUtlVectorBase<char::RemoveAll(); // 26
	CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
	CUtlMemory<char::IsExternallyAllocated(); // 905
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 18
	CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
	CUtlStringList::~CUtlStringList(); // 501
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 55
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, empty_t> >(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 55
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::~CUtlSymbolTableLargeBase(); // 501
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 501
	CBufferString::~CBufferString(); // 587
	CBufferStringN<100>::~CBufferStringN(); // 501
} /* size: 418, inline expansions: 48 (1426 bytes) */

// <00104E58> filesystem/basefilesystem.h:498
inline void FindData_t::~FindData_t()
{
} /* size: 0 */

// <00104E3F> filesystem/basefilesystem.h:551
inline void CBaseFileSystem::NoteIO()
{
} /* size: 0 */

// <00107F83> filesystem/basefilesystem.h:595
void CBaseFileSystem::FS_GetSectorSize(VirtualFileHandle_t fileHandle)
{
} /* size: 10 */

// <00104E19> filesystem/basefilesystem.h:595
inline void CBaseFileSystem::FS_GetSectorSize(VirtualFileHandle_t fileHandle)
{
} /* size: 0 */

// <0014A5F2> filesystem/basefilesystem.h:732
void CBaseFileSystem::GetSymLinkReloadQueue()
{
} /* size: 12 */

// <000CA838> filesystem/basefilesystem.h:737
void SymLink_t::~SymLink_t()
{
} /* size: 0 */

// <000CA81B> filesystem/basefilesystem.h:737
inline void SymLink_t::~SymLink_t()
{
} /* size: 0 */

// <000C0D75> filesystem/basefilesystem.h:737
void SymLink_t::SymLink_t(const SymLink_t &)
{
} /* size: 0 */

// <000C0D53> filesystem/basefilesystem.h:737
inline void SymLink_t::SymLink_t(const SymLink_t &)
{
} /* size: 0 */

// <000B822F> filesystem/basefilesystem.h:737
void SymLink_t::SymLink_t()
{
} /* size: 0 */

// <000B8212> filesystem/basefilesystem.h:737
inline void SymLink_t::SymLink_t()
{
} /* size: 0 */

// <00104DCF> filesystem/basefilesystem.h:747
inline void CPathIDInfo::GetPathID()
{
} /* size: 0 */

// <00104DB3> filesystem/basefilesystem.h:753
inline void CPathIDInfo::GetPathIDString()
{
} /* size: 0 */

// <00104D97> filesystem/basefilesystem.h:759
inline void CSearchPath::GetPathString()
{
} /* size: 0 */

// <00104D7E> filesystem/basefilesystem.h:764
inline void CBaseFileSystem::ShouldSuppressAsyncFileRequestFlushOnPathChange()
{
} /* size: 0 */

// <00104D55> filesystem/basefilesystem.h:769
inline void CPathIDInfo::SetPathID(CUtlSymbol sym)
{
} /* size: 0 */

// <00104D39> filesystem/basefilesystem.h:776
inline void CSearchPath::GetPathID()
{
} /* size: 0 */

// <00104D1D> filesystem/basefilesystem.h:782
inline void CSearchPath::GetPathIDString()
{
} /* size: 0 */

// <00104CF5> filesystem/basefilesystem.h:787
inline void CSearchPath::SetPath(CUtlSymbol id)
{
} /* size: 0 */

// <00104CCC> filesystem/basefilesystem.h:793
inline void CSearchPath::SetPath(const char* pPathID)
{
} /* size: 0 */

// <00104CB0> filesystem/basefilesystem.h:799
inline void CSearchPath::GetPath()
{
} /* size: 0 */

// <00104C7E> filesystem/basefilesystem.h:805
inline void FilterByPathID(const CSearchPath* pSearchPath, const CUtlSymbol& pathID, bool bForceRequested)
{
} /* size: 0 */

// <00104C30> filesystem/basefilesystem.h:819
// variable: 1
inline void FilterSearchPath(const CSearchPath* pSearchPath, CUtlSymbol pathID, PathTypeFilter_t pathTypeFilter, bool bForceRequested)
{
	{
		const CPackedStore* pPackFile; // 826
	}
} /* size: 0 */

// <0003CFB5> filesystem/basefilesystem.h:894
CBaseFileSystem* BaseFileSystem(void)
{
} /* size: 0 */

