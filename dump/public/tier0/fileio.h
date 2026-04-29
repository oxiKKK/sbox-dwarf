
//
// public/tier0/fileio.h
//
//	referenced by: libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libtier0.so
//
//	functions: 39
//	classes: 4
//	struct: 1
//

// <0016CB39> ../public/tier0/fileio.h:36
// member functions: 35
// member variables: 2
// static member variables: 3
// class size: 16
class CPathString {
	/* ../public/tier0/fileio.h:60 */
	struct Buffer_t {
		uint8 m_data[16384]; /* 0 16384 */
	} __attribute__((__aligned__(16)));
	/* ../public/tier0/fileio.h:42 */
	void CPathString(CPathString* );
	/* ../public/tier0/fileio.h:43 */
	void CPathString(CPathString* , const char* );
	/* ../public/tier0/fileio.h:44 */
	void CPathString(CPathString* , const char* , const char* );
	/* ../public/tier0/fileio.h:45 */
	void ~CPathString(CPathString* );
	/* ../public/tier0/fileio.h:47 */
	void Set(CPathString* , const char* );
	/* ../public/tier0/fileio.h:48 */
	void Set(CPathString* , const char* , const char* );
	/* ../public/tier0/fileio.h:51 */
	const char* GetUTF8Path(CPathString* );
	/* ../public/tier0/fileio.h:54 */
	const wchar_t* GetWCharPathPrePended(CPathString* );
	static const int k_nPathStringBufferBytes = 16384; /* 0 0 */
	/* ../public/tier0/fileio.h:68 */
	Buffer_t* NewPathStringBuffer(void);
	/* ../public/tier0/fileio.h:69 */
	void DeletePathStringBuffer(Buffer_t* );
	static const int k_nUTF8PathStringBufferChars = 16384; /* 0 0 */
	/* ../public/tier0/fileio.h:72 */
	char* NewUTF8PathStringBuffer(void);
	/* ../public/tier0/fileio.h:77 */
	void DeleteUTF8PathStringBuffer(char* );
	static const int k_nWCharPathStringBufferChars = 4096; /* 0 0 */
	/* ../public/tier0/fileio.h:83 */
	wchar_t* NewWCharPathStringBuffer(void);
	/* ../public/tier0/fileio.h:88 */
	void DeleteWCharPathStringBuffer(wchar_t* );
private:
	/* ../public/tier0/fileio.h:94 */
	void PopulateWCharPath(CPathString* );
	/* ../public/tier0/fileio.h:95 */
	void DeleteWCharPath(CPathString* );
	/* ../public/tier0/fileio.h:96 */
	void Reset(CPathString* );
	char * m_pchUTF8Path; /* 0 8 */
	wchar_t * m_pwchWideCharPathPrepended; /* 8 8 */
	void CPathString(class CPathString *); /* linkage=_ZN11CPathStringC4Ev */
	void CPathString(class CPathString *, const char  *); /* linkage=_ZN11CPathStringC4EPKc */
	void CPathString(class CPathString *, const char  *, const char  *); /* linkage=_ZN11CPathStringC4EPKcS1_ */
	void ~CPathString(class CPathString *); /* linkage=_ZN11CPathStringD4Ev */
	void Set(class CPathString *, const char  *); /* linkage=_ZN11CPathString3SetEPKc */
	void Set(class CPathString *, const char  *, const char  *); /* linkage=_ZN11CPathString3SetEPKcS1_ */
	const char  * GetUTF8Path(class CPathString *); /* linkage=_ZN11CPathString11GetUTF8PathEv */
	const wchar_t  * GetWCharPathPrePended(class CPathString *); /* linkage=_ZN11CPathString21GetWCharPathPrePendedEv */
	class Buffer_t * NewPathStringBuffer(void); /* linkage=_ZN11CPathString19NewPathStringBufferEv */
	/* <182f5e> tier0/fileio.cpp:233 */
	void DeletePathStringBuffer(class Buffer_t *); /* linkage=_ZN11CPathString22DeletePathStringBufferEPNS_8Buffer_tE */
	char * NewUTF8PathStringBuffer(void); /* linkage=_ZN11CPathString23NewUTF8PathStringBufferEv */
	void DeleteUTF8PathStringBuffer(char *); /* linkage=_ZN11CPathString26DeleteUTF8PathStringBufferEPc */
	wchar_t * NewWCharPathStringBuffer(void); /* linkage=_ZN11CPathString24NewWCharPathStringBufferEv */
	void DeleteWCharPathStringBuffer(wchar_t *); /* linkage=_ZN11CPathString27DeleteWCharPathStringBufferEPw */
	void PopulateWCharPath(class CPathString *); /* linkage=_ZN11CPathString17PopulateWCharPathEv */
	void DeleteWCharPath(class CPathString *); /* linkage=_ZN11CPathString15DeleteWCharPathEv */
	void Reset(class CPathString *); /* linkage=_ZN11CPathString5ResetEv */
};

// <00180D8F> ../public/tier0/fileio.h:43
void CPathString::CPathString(const char* pchUTF8Path)
{
} /* size: 0 */

// <00180D6A> ../public/tier0/fileio.h:43
inline void CPathString::CPathString(const char* pchUTF8Path)
{
} /* size: 0 */

// <00180D51> ../public/tier0/fileio.h:51
inline void CPathString::GetUTF8Path()
{
} /* size: 0 */

// <00180D3A> ../public/tier0/fileio.h:72
// variable: 1
inline void NewUTF8PathStringBuffer(void)
{
	Buffer_t* pBuffer; // 74
} /* size: 0, variables: 1 */

// <00180D23> ../public/tier0/fileio.h:77
inline void DeleteUTF8PathStringBuffer(char* pBuffer)
{
} /* size: 0 */

// <00180D0C> ../public/tier0/fileio.h:83
// variable: 1
inline void NewWCharPathStringBuffer(void)
{
	Buffer_t* pBuffer; // 85
} /* size: 0, variables: 1 */

// <00180CF5> ../public/tier0/fileio.h:88
inline void DeleteWCharPathStringBuffer(wchar_t* pBuffer)
{
} /* size: 0 */

// <000B0EE5> ../public/tier0/fileio.h:153
int64 FioFileTimeToTimeT(FioFileTime_t)
{
} /* size: 0 */

// <000679BB> ../public/tier0/fileio.h:166
int FioCreateFile(const char *, EFioAccessFlags, EFioShareFlags, EFioCreateMode, uint, OSFILEHANDLE *)
{
} /* size: 0 */

// <00067978> ../public/tier0/fileio.h:172
int FioClose(OSFILEHANDLE)
{
} /* size: 0 */

// <0006794D> ../public/tier0/fileio.h:186
int FioRead(OSFILEHANDLE, void *, int32, int32 *)
{
} /* size: 0 */

// <0013EF48> ../public/tier0/fileio.h:208
int FioReadAt(OSFILEHANDLE, uint64, void *, int32, int32 *)
{
} /* size: 0 */

// <00067994> ../public/tier0/fileio.h:224
int FioGetSize(OSFILEHANDLE, uint64 *)
{
} /* size: 0 */

// <0016CF38> ../public/tier0/fileio.h:293
// member variables: 5
// struct size: 32
struct FioBaseFileInfo_t {
	uint64 nLength; /* 0 8 */
	FioFileTime_t nCreateTime; /* 8 8 */
	FioFileTime_t nWriteTime; /* 16 8 */
	uint nValidInfo; /* 24 4 */
	uint nFileFlags; /* 28 4 */
};

// <0013F32E> ../public/tier0/fileio.h:307
int FioGetBaseFileInfo(const char *, FioBaseFileInfo_t *, uint)
{
} /* size: 0 */

// <0013F035> ../public/tier0/fileio.h:317
int FioGetSectorSize(const char *, int *)
{
} /* size: 0 */

// <000B0E15> ../public/tier0/fileio.h:321
bool FioIsDotDir(const char *)
{
} /* size: 0 */

// <00128AE0> ../public/tier0/fileio.h:333
int FioReadFileToBuffer(const char *, CUtlBuffer *, int32)
{
} /* size: 0 */

// <0013F355> ../public/tier0/fileio.h:338
const char* FioFindFileInDirCaseInsensitive(const char *, CBufferString *)
{
} /* size: 0 */

// <0016CF9D> ../public/tier0/fileio.h:344
// member functions: 54
// member variables: 11
// class size: 88
class CDirIterator {
	/* ../public/tier0/fileio.h:347 */
	void CDirIterator(CDirIterator* );
	/* ../public/tier0/fileio.h:348 */
	void CDirIterator(CDirIterator* , const char* , const char* , uint);
	/* ../public/tier0/fileio.h:349 */
	void CDirIterator(CDirIterator* , const char* , uint);
	/* ../public/tier0/fileio.h:350 */
	void ~CDirIterator(CDirIterator* );
	/* ../public/tier0/fileio.h:352 */
	bool Init(CDirIterator* , const char* , const char* , uint);
	/* ../public/tier0/fileio.h:356 */
	bool Init(CDirIterator* , const char* , uint);
	/* ../public/tier0/fileio.h:360 */
	void Stop(CDirIterator* );
	/* ../public/tier0/fileio.h:362 */
	bool IsValid(const CDirIterator* );
	/* ../public/tier0/fileio.h:374 */
	bool NextFile(CDirIterator* );
	/* ../public/tier0/fileio.h:377 */
	const char* CurrentFileName(const CDirIterator* );
	/* ../public/tier0/fileio.h:386 */
	const char* CurrentFileFullPath(CDirIterator* );
	/* ../public/tier0/fileio.h:388 */
	uint CurrentFileInfoMetaFlags(const CDirIterator* );
	/* ../public/tier0/fileio.h:392 */
	const FioBaseFileInfo_t& CurrentFileInfo(const CDirIterator* );
	/* ../public/tier0/fileio.h:398 */
	uint64 CurrentFileLength(const CDirIterator* );
	/* ../public/tier0/fileio.h:404 */
	FioFileTime_t CurrentFileCreateTime(const CDirIterator* );
	/* ../public/tier0/fileio.h:410 */
	FioFileTime_t CurrentFileWriteTime(const CDirIterator* );
	/* ../public/tier0/fileio.h:417 */
	uint CurrentFileFlags(const CDirIterator* );
	/* ../public/tier0/fileio.h:423 */
	bool CurrentIsDir(const CDirIterator* );
	/* ../public/tier0/fileio.h:429 */
	bool CurrentIsDotDir(const CDirIterator* );
	/* ../public/tier0/fileio.h:435 */
	bool CurrentIsReadOnly(const CDirIterator* );
	/* ../public/tier0/fileio.h:441 */
	bool CurrentIsSymbolicLink(const CDirIterator* );
	/* ../public/tier0/fileio.h:447 */
	bool BNextFile(CDirIterator* );
	/* ../public/tier0/fileio.h:448 */
	bool BCurrentIsDir(CDirIterator* );
protected:
	uint m_nMetaFlags; /* 0 4 */
	bool m_bNoFiles; /* 4 1 */
	bool m_bHaveFullPath; /* 5 1 */
	CUtlString m_pBasePath; /* 8 8 */
	char * m_pFullPath; /* 16 8 */
	int m_nFullPathChars; /* 24 4 */
	FioBaseFileInfo_t m_CurInfo; /* 32 32 */
	bool m_bUsedFirstFile; /* 64 1 */
	dirent * * m_pNames; /* 72 8 */
	int m_nNames; /* 80 4 */
	int m_nCurName; /* 84 4 */
	/* ../public/tier0/fileio.h:472 */
	bool SetCurInfo(CDirIterator* );
	/* ../public/tier0/fileio.h:475 */
	void Construct(CDirIterator* );
	/* ../public/tier0/fileio.h:476 */
	bool Init(CDirIterator* , const char* , const char* , const char* , uint);
	/* ../public/tier0/fileio.h:477 */
	bool SplitPathAndPattern(CDirIterator* , const char* , CUtlString* , CUtlString* );
	void CDirIterator(class CDirIterator *); /* linkage=_ZN12CDirIteratorC4Ev */
	void CDirIterator(class CDirIterator *, const char  *, const char  *, uint); /* linkage=_ZN12CDirIteratorC4EPKcS1_j */
	void CDirIterator(class CDirIterator *, const char  *, uint); /* linkage=_ZN12CDirIteratorC4EPKcj */
	void ~CDirIterator(class CDirIterator *); /* linkage=_ZN12CDirIteratorD4Ev */
	bool Init(class CDirIterator *, const char  *, const char  *, uint); /* linkage=_ZN12CDirIterator4InitEPKcS1_j */
	bool Init(class CDirIterator *, const char  *, uint); /* linkage=_ZN12CDirIterator4InitEPKcj */
	void Stop(class CDirIterator *); /* linkage=_ZN12CDirIterator4StopEv */
	bool IsValid(const class CDirIterator  *); /* linkage=_ZNK12CDirIterator7IsValidEv */
	bool NextFile(class CDirIterator *); /* linkage=_ZN12CDirIterator8NextFileEv */
	const char  * CurrentFileName(const class CDirIterator  *); /* linkage=_ZNK12CDirIterator15CurrentFileNameEv */
	const char  * CurrentFileFullPath(class CDirIterator *); /* linkage=_ZN12CDirIterator19CurrentFileFullPathEv */
	uint CurrentFileInfoMetaFlags(const class CDirIterator  *); /* linkage=_ZNK12CDirIterator24CurrentFileInfoMetaFlagsEv */
	const class FioBaseFileInfo_t  & CurrentFileInfo(const class CDirIterator  *); /* linkage=_ZNK12CDirIterator15CurrentFileInfoEv */
	uint64 CurrentFileLength(const class CDirIterator  *); /* linkage=_ZNK12CDirIterator17CurrentFileLengthEv */
	FioFileTime_t CurrentFileCreateTime(const class CDirIterator  *); /* linkage=_ZNK12CDirIterator21CurrentFileCreateTimeEv */
	FioFileTime_t CurrentFileWriteTime(const class CDirIterator  *); /* linkage=_ZNK12CDirIterator20CurrentFileWriteTimeEv */
	uint CurrentFileFlags(const class CDirIterator  *); /* linkage=_ZNK12CDirIterator16CurrentFileFlagsEv */
	bool CurrentIsDir(const class CDirIterator  *); /* linkage=_ZNK12CDirIterator12CurrentIsDirEv */
	bool CurrentIsDotDir(const class CDirIterator  *); /* linkage=_ZNK12CDirIterator15CurrentIsDotDirEv */
	bool CurrentIsReadOnly(const class CDirIterator  *); /* linkage=_ZNK12CDirIterator17CurrentIsReadOnlyEv */
	bool CurrentIsSymbolicLink(const class CDirIterator  *); /* linkage=_ZNK12CDirIterator21CurrentIsSymbolicLinkEv */
	bool BNextFile(class CDirIterator *); /* linkage=_ZN12CDirIterator9BNextFileEv */
	bool BCurrentIsDir(class CDirIterator *); /* linkage=_ZN12CDirIterator13BCurrentIsDirEv */
	bool SetCurInfo(class CDirIterator *); /* linkage=_ZN12CDirIterator10SetCurInfoEv */
	void Construct(class CDirIterator *); /* linkage=_ZN12CDirIterator9ConstructEv */
	bool Init(class CDirIterator *, const char  *, const char  *, const char  *, uint); /* linkage=_ZN12CDirIterator4InitEPKcS1_S1_j */
	bool SplitPathAndPattern(class CDirIterator *, const char  *, class CUtlString *, class CUtlString *); /* linkage=_ZN12CDirIterator19SplitPathAndPatternEPKcP10CUtlStringS3_ */
};

// <0013F2DC> ../public/tier0/fileio.h:349
void CDirIterator::CDirIterator(const char* pPathAndPattern, uint nMetaFlags)
{
} /* size: 0 */

// <0013F2C0> ../public/tier0/fileio.h:350
void CDirIterator::~CDirIterator()
{
} /* size: 0 */

// <00180CDC> ../public/tier0/fileio.h:362
inline void CDirIterator::IsValid()
{
} /* size: 0 */

// <00180CC3> ../public/tier0/fileio.h:377
inline void CDirIterator::CurrentFileName()
{
} /* size: 0 */

// <00180CAA> ../public/tier0/fileio.h:392
inline void CDirIterator::CurrentFileInfo()
{
} /* size: 0 */

// <00105EF0> ../public/tier0/fileio.h:423
inline void CDirIterator::CurrentIsDir()
{
} /* size: 0 */

// <00105ED7> ../public/tier0/fileio.h:429
inline void CDirIterator::CurrentIsDotDir()
{
} /* size: 0 */

// <00180C91> ../public/tier0/fileio.h:441
inline void CDirIterator::CurrentIsSymbolicLink()
{
} /* size: 0 */

// <0016E58D> ../public/tier0/fileio.h:483
// member functions: 22
// member variables: 7
// class size: 88
class CDirWatcher {
	/* ../public/tier0/fileio.h:486 */
	void CDirWatcher(CDirWatcher* );
	/* ../public/tier0/fileio.h:487 */
	void ~CDirWatcher(CDirWatcher* );
	/* ../public/tier0/fileio.h:492 */
	bool SetDirToWatch(CDirWatcher* , const char* , uint, bool);
	/* ../public/tier0/fileio.h:497 */
	bool GetChangedFile(CDirWatcher* , CUtlString* , bool);
	/* ../public/tier0/fileio.h:499 */
	void Stop(CDirWatcher* );
	/* ../public/tier0/fileio.h:501 */
	const char* GetDirName(const CDirWatcher* );
	/* ../public/tier0/fileio.h:506 */
	bool HasMissedChanges(const CDirWatcher* );
	/* ../public/tier0/fileio.h:510 */
	void SetMissedChanges(CDirWatcher* );
	/* ../public/tier0/fileio.h:514 */
	void ClearMissedChanges(CDirWatcher* );
	/* ../public/tier0/fileio.h:523 */
	bool CanWatchSubDirs(void);
private:
	CUtlString m_BaseDir; /* 0 8 */
	CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int> > m_listChangedFiles; /* 8 48 */
	void * m_hFile; /* 56 8 */
	void * m_pOverlapped; /* 64 8 */
	void * m_pFileInfo; /* 72 8 */
	int m_nMissedChanges; /* 80 4 */
	bool m_bWatchSubDirsIfPossible; /* 84 1 */
	/* ../public/tier0/fileio.h:550 */
	void AddFileToChangeList(CDirWatcher* , const char* );
	void CDirWatcher(class CDirWatcher *); /* linkage=_ZN11CDirWatcherC4Ev */
	void ~CDirWatcher(class CDirWatcher *); /* linkage=_ZN11CDirWatcherD4Ev */
	/* <183469> tier0/fileio.cpp:2601 */
	bool SetDirToWatch(class CDirWatcher *, const char  *, uint, bool); /* linkage=_ZN11CDirWatcher13SetDirToWatchEPKcjb */
	/* <183b24> tier0/fileio.cpp:2773 */
	bool GetChangedFile(class CDirWatcher *, class CUtlString *, bool); /* linkage=_ZN11CDirWatcher14GetChangedFileEP10CUtlStringb */
	void Stop(class CDirWatcher *); /* linkage=_ZN11CDirWatcher4StopEv */
	const char  * GetDirName(const class CDirWatcher  *); /* linkage=_ZNK11CDirWatcher10GetDirNameEv */
	bool HasMissedChanges(const class CDirWatcher  *); /* linkage=_ZNK11CDirWatcher16HasMissedChangesEv */
	void SetMissedChanges(class CDirWatcher *); /* linkage=_ZN11CDirWatcher16SetMissedChangesEv */
	void ClearMissedChanges(class CDirWatcher *); /* linkage=_ZN11CDirWatcher18ClearMissedChangesEv */
	bool CanWatchSubDirs(void); /* linkage=_ZN11CDirWatcher15CanWatchSubDirsEv */
	void AddFileToChangeList(class CDirWatcher *, const char  *); /* linkage=_ZN11CDirWatcher19AddFileToChangeListEPKc */
};

// <00042E2A> ../public/tier0/fileio.h:486
void CDirWatcher::CDirWatcher()
{
} /* size: 0 */

// <00180C7A> ../public/tier0/fileio.h:487
void CDirWatcher::~CDirWatcher()
{
} /* size: 0 */

// <00180C61> ../public/tier0/fileio.h:487
inline void CDirWatcher::~CDirWatcher()
{
} /* size: 0 */

// <00180C48> ../public/tier0/fileio.h:501
inline void CDirWatcher::GetDirName()
{
} /* size: 0 */

// <00180C2F> ../public/tier0/fileio.h:506
inline void CDirWatcher::HasMissedChanges()
{
} /* size: 0 */

// <0016E79A> ../public/tier0/fileio.h:568
// member functions: 26
// member variables: 5
// vtable entries: 2
// class size: 256
class CDirTreeWatchManager {
	/* ../public/tier0/fileio.h:657 */
	struct Watcher_t {
		Watcher_t * m_pNext; /* 0 8 */
		CDirWatcher m_Watch; /* 8 88 */
		CUtlString m_LinkRemapFrom; /* 96 8 */
		CUtlString m_LinkRemapTo; /* 104 8 */
		void ~Watcher_t(Watcher_t* );
		void Watcher_t(Watcher_t* );
	};
	/* ../public/tier0/fileio.h:571 */
	void CDirTreeWatchManager(CDirTreeWatchManager* , uint, bool);
	/* ../public/tier0/fileio.h:573 */
	void ~CDirTreeWatchManager(CDirTreeWatchManager* );
	/* ../public/tier0/fileio.h:581 */
	bool GetFullPaths(CDirTreeWatchManager* );
	/* ../public/tier0/fileio.h:585 */
	void SetFullPaths(CDirTreeWatchManager* , bool);
	/* ../public/tier0/fileio.h:614 */
	bool TraverseAndAddWatch(CDirTreeWatchManager* , const char* , Visitor* );
	class Visitor {
		/* ../public/tier0/fileio.h:601 */
		virtual void LeaveDirectory(Visitor* );
		/* ../public/tier0/fileio.h:597 */
		virtual void EnterDirectory(Visitor* , const char* );
	};
	/* ../public/tier0/fileio.h:616 */
	bool AddWatch(CDirTreeWatchManager* , const char* );
	/* ../public/tier0/fileio.h:625 */
	void Traverse(CDirTreeWatchManager* , const char* , Visitor* );
	/* ../public/tier0/fileio.h:630 */
	void RawTraverse(const char* , Visitor* , uint, bool);
	/* ../public/tier0/fileio.h:636 */
	bool GetChangedFile(CDirTreeWatchManager* , CUtlString* , FioBaseFileInfo_t* );
	/* ../public/tier0/fileio.h:643 */
	bool TraverseMissedChanges(CDirTreeWatchManager* , Visitor* );
	/* ../public/tier0/fileio.h:645 */
	void Stop(CDirTreeWatchManager* );
	/* ../public/tier0/fileio.h:651 */
	void CheckForPendingChanges(void);
protected:
	uint m_nMetaFlags; /* 0 4 */
	bool m_bFullPaths; /* 4 1 */
	Watcher_t * m_pWatchers; /* 8 8 */
	CPathBufferString m_PathBuffer; /* 16 208 */
	FioBaseFileInfo_t m_FileInfoBuffer; /* 224 32 */
	/* ../public/tier0/fileio.h:671 */
	Watcher_t* IsContainedInExistingWatch(CDirTreeWatchManager* , const char* );
	/* ../public/tier0/fileio.h:672 */
	Watcher_t* ContainsExistingWatch(CDirTreeWatchManager* , const char* );
	/* ../public/tier0/fileio.h:673 */
	void RemoveContainedWatches(CDirTreeWatchManager* , const char* );
	/* ../public/tier0/fileio.h:675 */
	bool AddWatch(CDirTreeWatchManager* , const char* , const char* , const char* );
	/* ../public/tier0/fileio.h:679 */
	bool AddLinkTransition(CDirTreeWatchManager* , const char* , const char* , bool);
	void CDirTreeWatchManager(class CDirTreeWatchManager *, uint, bool); /* linkage=_ZN20CDirTreeWatchManagerC4Ejb */
	void ~CDirTreeWatchManager(class CDirTreeWatchManager *); /* linkage=_ZN20CDirTreeWatchManagerD4Ev */
	bool GetFullPaths(class CDirTreeWatchManager *); /* linkage=_ZN20CDirTreeWatchManager12GetFullPathsEv */
	void SetFullPaths(class CDirTreeWatchManager *, bool); /* linkage=_ZN20CDirTreeWatchManager12SetFullPathsEb */
	bool TraverseAndAddWatch(class CDirTreeWatchManager *, const char  *, class Visitor *); /* linkage=_ZN20CDirTreeWatchManager19TraverseAndAddWatchEPKcPNS_7VisitorE */
};

// <00181A0F> ../public/tier0/fileio.h:597
void Visitor::EnterDirectory(const char* pPath)
{
} /* size: 5 */

// <00180C09> ../public/tier0/fileio.h:597
inline void Visitor::EnterDirectory(const char* pPath)
{
} /* size: 0 */

// <00181A3F> ../public/tier0/fileio.h:601
void Visitor::LeaveDirectory()
{
} /* size: 5 */

// <00180BF0> ../public/tier0/fileio.h:601
inline void Visitor::LeaveDirectory()
{
} /* size: 0 */

// <00175913> ../public/tier0/fileio.h:657
void Watcher_t::Watcher_t()
{
} /* size: 0 */

// <001758F6> ../public/tier0/fileio.h:657
inline void Watcher_t::Watcher_t()
{
} /* size: 0 */

// <001758DF> ../public/tier0/fileio.h:657
void Watcher_t::~Watcher_t()
{
} /* size: 0 */

// <001758C2> ../public/tier0/fileio.h:657
inline void Watcher_t::~Watcher_t()
{
} /* size: 0 */

